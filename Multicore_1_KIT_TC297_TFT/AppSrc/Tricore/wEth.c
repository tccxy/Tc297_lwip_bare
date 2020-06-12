
#include "wPub.h"
#include "Interrupts_Cfg.h"
IfxEth g_Eth; /**< \brief ETH interface */
#define HEADER_SIZE 14
const uint8 myMacAddress[6] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55};

void init_eth_module(uint8 *mac_addr)
{
    IfxEth_Config ethConfig;

    IfxEth_initConfig(&ethConfig, &MODULE_ETH);

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

    ethConfig.phyInterfaceMode = IfxEth_PhyInterfaceMode_rmii;
    ethConfig.rmiiPins = &PINS;
    ethConfig.phyInit = &IfxEth_Phy_Pef7071_init;
    ethConfig.phyLink = &IfxEth_Phy_Pef7071_link;
    ethConfig.miiPins = NULL_PTR;
    ethConfig.isrPriority = ISR_PRIORITY_ETH;
    ethConfig.isrProvider = ISR_PROVIDER_ETH;
    ethConfig.ethSfr = NULL_PTR;
    ethConfig.rxDescr = &IfxEth_rxDescr;
    ethConfig.txDescr = &IfxEth_txDescr;
    memcpy(ethConfig.macAddress, mac_addr, 6);

    IfxEth_init(&g_Eth, &ethConfig);
    wait(TimeConst_1s);
    wait(TimeConst_1s);
    Ifx_print("link is %d \r\n", IfxEth_isLinkActive(&g_Eth));
}

void set_eth_loop(void)
{
    IfxEth_setLoopbackMode(&g_Eth, 1);

    /* and enable transmitter/receiver */
    IfxEth_startTransmitter(&g_Eth);
    IfxEth_startReceiver(&g_Eth);

    wait(TimeConst_1s);
    wait(TimeConst_1s);
    Ifx_print("link is %d \r\n", IfxEth_isLinkActive(&g_Eth));
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
        uint8 *pTxBuf = (uint8 *)IfxEth_waitTransmitBuffer(&g_Eth);

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
        IfxEth_clearTxInterrupt(&g_Eth);
        IfxEth_sendTransmitBuffer(&g_Eth, HEADER_SIZE + packetSize);

        while (IfxEth_isTxInterrupt(&g_Eth) == FALSE)
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
        while (IfxEth_isRxInterrupt(&g_Eth.drivers.eth) == FALSE)
        {}

        IfxEth_clearRxInterrupt(&g_Eth.drivers.eth);
#else

        if (IfxEth_isRxDataAvailable(&g_Eth) != TRUE)
        {
            ++errors;
        }

#endif
        uint8 *pRxBuf = (uint8 *)IfxEth_getReceiveBuffer(&g_Eth); /* we expect that a packet is available */
        IfxEth_freeReceiveBuffer(&g_Eth);

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

    if (IfxEth_isRxDataAvailable(&g_Eth) != FALSE)
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
