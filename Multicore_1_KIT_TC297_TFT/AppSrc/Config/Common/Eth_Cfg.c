/**
 * \file Eth_Cfg.c
 * \brief Configuration data for ETH module.
 *
 * \license
 * You can use this file under the terms of the IFX License.
 *
 * This file is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the IFX License for more details (IFX_License.txt).
 *
 * This file may be used, copied, and distributed, with or without modification, provided
 * that all copyright notices are retained; that all modifications to this file are
 * prominently noted in the modified file; and that this paragraph is not modified.
 *
 * \copyright Copyright (C) 2013 Infineon Technologies AG
 * \author Dian Tresna Nugraha <Dian.Nugraha@Infineon.com>
 *
 * $Revision: 571 $
 * $Date: 2013-01-23 12:59:12 +0100 (Wed, 23 Jan 2013) $
 *
 * \defgroup configuration_comm_eth Ethernet
 * \ingroup configuration_comm
 */

#include "Eth/Phy_Pef7071/IfxEth_Phy_Pef7071.h"
#include "Interrupts_Cfg.h"

/** \brief ETH pin mapping for this application */
const IfxEth_RmiiPins cfg_Eth_pins = {
    .crsDiv = &IfxEth_CRSDVA_P11_11_IN,
    .refClk = &IfxEth_REFCLK_P11_12_IN,
    .rxd0   = &IfxEth_RXD0_P11_10_IN,
    .rxd1   = &IfxEth_RXD1_P11_9_IN,
    .mdc    = &IfxEth_MDC_P21_2_OUT,
    .mdio   = &IfxEth_MDIOD_P21_3_INOUT,
    .txd0   = &IfxEth_TXD0_P11_3_OUT,
    .txd1   = &IfxEth_TXD1_P11_2_OUT,
    .txEn   = &IfxEth_TXEN_P11_6_OUT,
};

/** \brief ETH configuration for this application
 * \ingroup configuration_comm_eth
 */
#if 0
const IfxEth_Config cfg_Eth_old = {
    .macAddress  = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55},
    .phyInit     = &IfxEth_Phy_Pef7071_init,
    .phyLink     = &IfxEth_Phy_Pef7071_link,
    .portPins    = &cfg_Eth_pins,
    .isrPriority = ISR_PRIORITY_ETH,
    .isrProvider = ISR_PROVIDER_ETH
};
#endif

const IfxEth_Config cfg_Eth = {
	.macAddress  = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55},
	.phyInit = &IfxEth_Phy_Pef7071_init,
	.phyLink = &IfxEth_Phy_Pef7071_link,
	.phyInterfaceMode = IfxEth_PhyInterfaceMode_rmii,
	.rmiiPins = &cfg_Eth_pins,
	.miiPins = NULL_PTR,
	.isrPriority = ISR_PRIORITY_ETH,
	.isrProvider = ISR_PROVIDER_ETH,
	.ethSfr = NULL_PTR,
	.rxDescr = &IfxEth_rxDescr,
	.txDescr = &IfxEth_txDescr,
};

#pragma section ".bss_cpu0" awc0
IfxEth              Ifx_g_Eth;
#pragma section

IfxEth *IfxEth_get(void)
{
    return &Ifx_g_Eth;
}


IFX_INTERRUPT(ISR_Eth, ISR_PROVIDER_ETH, ISR_PRIORITY_ETH);

/**
 * \ingroup interrupts
 *
 * This interrupt is raised by the ethernet. The initialisation is done by IfxEth_init().
 *
 * \isrProvider \ref ISR_PROVIDER_ETH
 * \isrPriority \ref ISR_PRIORITY_ETH
 *
 */
void ISR_Eth(void)
{
    IfxEth *eth = IfxEth_get();
    IfxSrc_clearRequest(&SRC_ETH);

    while (IfxEth_isTxInterrupt(eth) != FALSE)
    {
        IfxEth_clearTxInterrupt(eth);
        eth->isrTxCount++;
    }

    while (IfxEth_isRxInterrupt(eth) != FALSE)
    {
        IfxEth_clearRxInterrupt(eth);
        eth->isrRxCount++;
    }

    while (IfxEth_isTxInterrupt(eth) != FALSE)
    {
        IfxEth_clearTxInterrupt(eth);
        eth->isrTxCount++;
    }

    while (IfxEth_isRxInterrupt(eth) != FALSE)
    {
        IfxEth_clearRxInterrupt(eth);
        eth->isrRxCount++;
    }

    eth->txDiff = eth->txCount - eth->isrTxCount;
    eth->rxDiff = eth->rxCount - eth->isrRxCount;
    //eth->isrCount = eth->isrCount + 1;
}
