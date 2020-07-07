
#include "hDrv.h"

struct drv_eth g_drv_eth;
#define HEADER_SIZE 14
const uint8 myMacAddress[6] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55};

void init_eth_module(uint8 *mac_addr)
{
    IfxEth_Config eth_config;

    IfxEth_initConfig(&eth_config, &MODULE_ETH);

    /* Eth pin configuration */
    const IfxEth_RmiiPins PINS =
        {
            .crsDiv = &IfxEth_CRSDVA_P11_11_IN, /* CRSDIV                     */
            .refClk = &IfxEth_REFCLK_P11_12_IN, /* REFCLK                     */
            .rxd0 = &IfxEth_RXD0_P11_10_IN,     /* RXD0                     */
            .rxd1 = &IfxEth_RXD1_P11_9_IN,      /* RXD1                     */
            .mdc = &IfxEth_MDC_P21_2_OUT,       /* MDC                     */
            .mdio = &IfxEth_MDIOD_P21_3_INOUT,  /* MDIO                     */
            .txd0 = &IfxEth_TXD0_P11_3_OUT,     /* TXD0                     */
            .txd1 = &IfxEth_TXD1_P11_2_OUT,     /* TXD1                     */
            .txEn = &IfxEth_TXEN_P11_6_OUT,     /* TXEN                     */
        };

    eth_config.phyInterfaceMode = IfxEth_PhyInterfaceMode_rmii;
    eth_config.rmiiPins = &PINS;
    eth_config.phyInit = &IfxEth_Phy_Pef7071_init;
    eth_config.phyLink = &IfxEth_Phy_Pef7071_link;
    eth_config.miiPins = NULL_PTR;
    eth_config.ethSfr = NULL_PTR;
    eth_config.rxDescr = &IfxEth_rxDescr;
    eth_config.txDescr = &IfxEth_txDescr;
    eth_config.isrPriority = 3;
    memcpy(eth_config.macAddress, mac_addr, 6);

    IfxEth_init(&g_drv_eth.eth, &eth_config);
    wait(TimeConst_1s);
    wait(TimeConst_1s);
    Ifx_print("link is %d \r\n", IfxEth_isLinkActive(&g_drv_eth.eth));
}

void set_eth_loop(void)
{
    IfxEth_setLoopbackMode(&g_drv_eth.eth, 1);

    /* and enable transmitter/receiver */
    IfxEth_startTransmitter(&g_drv_eth.eth);
    IfxEth_startReceiver(&g_drv_eth.eth);

    wait(TimeConst_1s);
    wait(TimeConst_1s);
    Ifx_print("link is %d \r\n", IfxEth_isLinkActive(&g_drv_eth.eth));
}
/** \brief Demo run API
 *
 * This function is called from main, background loop
 */
void eth_demo_run(void)
{
    Ifx_print("Ethernet transfers in loopback mode are started\r\n");

    /* send 5 packets, each contains 8 bytes */
    const uint32 numPackets = 5;
    const uint32 packetSize = 8;

    uint32 packet;

    for (packet = 0; packet < numPackets; ++packet)
    {
        uint8 *pTxBuf = (uint8 *)IfxEth_waitTransmitBuffer(&g_drv_eth.eth);

        Ifx_print("TX #%d\r\n", packet + 1);

        /* DA */
        const uint8 packetId = 0x10 * packet;
        uint32 i;

        for (i = 0; i < 6; i++)
        {
            pTxBuf[i] = myMacAddress[i];
        }

        /* SA */
        for (i = 0; i < 6; i++)
        {
            pTxBuf[i + 6] = myMacAddress[i];
        }

        /* length of payload */
        pTxBuf[12] = packetSize / 256;
        pTxBuf[13] = packetSize % 256;

        for (i = HEADER_SIZE; i < (HEADER_SIZE + packetSize); i++)
        {
            pTxBuf[i] = packetId | (i % 16);
        }

        /* send packet */
        IfxEth_clearTxInterrupt(&g_drv_eth.eth);
        IfxEth_sendTransmitBuffer(&g_drv_eth.eth, HEADER_SIZE + packetSize);

        while (IfxEth_isTxInterrupt(&g_drv_eth.eth) == FALSE)
        {
        }
    }

    /* check the 5 received packets */
    uint32 errors = 0;

    for (packet = 0; packet < numPackets; ++packet)
    {
        Ifx_print("RX #%d\r\n", packet + 1);

#if 0

        /* only one interrupt for all the received packets so far... */
        while (IfxEth_isRxInterrupt(&g_drv_eth.eth.drivers.eth) == FALSE)
        {}

        IfxEth_clearRxInterrupt(&g_drv_eth.eth.drivers.eth);
#else

        if (IfxEth_isRxDataAvailable(&g_drv_eth.eth) != TRUE)
        {
            ++errors;
        }

#endif
        uint8 *pRxBuf = (uint8 *)IfxEth_getReceiveBuffer(&g_drv_eth.eth); /* we expect that a packet is available */
        IfxEth_freeReceiveBuffer(&g_drv_eth.eth);

        /* DA */
        const uint8 packetId = 0x10 * packet;
        uint32 i;

        for (i = 0; i < 6; i++)
        {
            if (pRxBuf[i] != myMacAddress[i])
            {
                ++errors;
            }
        }

        /* SA */
        for (i = 0; i < 6; i++)
        {
            if (pRxBuf[i + 6] != myMacAddress[i])
            {
                ++errors;
            }
        }

        /* length of payload */
        if (pRxBuf[12] != (packetSize / 256))
        {
            ++errors;
        }

        if (pRxBuf[13] != (packetSize % 256))
        {
            ++errors;
        }

        for (i = HEADER_SIZE; i < (HEADER_SIZE + packetSize); i++)
        {
            if (pRxBuf[i] != (packetId | (i % 16)))
            {
                ++errors;
            }
        }
    }

    Ifx_print("Expect that no additional receive data is available:\r\n");

    if (IfxEth_isRxDataAvailable(&g_drv_eth.eth) != FALSE)
    {
        ++errors;
    }

    IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, errors == 0);

    if (errors)
    {
        Ifx_print("ERROR: Found (%d errors)\r\n", errors);
    }
    else
    {
        Ifx_print("OK: Checks passed\r\n");
    }
}
