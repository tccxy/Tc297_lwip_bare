/**
 * \file IfxPsi5_reg.h
 * \brief
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC29XB_UM_V1.3.R0
 * Specification: tc29xB_um_v1.3_MCSFR.xml (Revision: UM_V1.3)
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxLld_Psi5_Cfg Psi5 address
 * \ingroup IfxLld_Psi5
 * 
 * \defgroup IfxLld_Psi5_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Psi5_Cfg
 * 
 * \defgroup IfxLld_Psi5_Cfg_Psi5 2-PSI5
 * \ingroup IfxLld_Psi5_Cfg
 * 
 */
#ifndef IFXPSI5_REG_H
#define IFXPSI5_REG_H 1
/******************************************************************************/
#include "IfxPsi5_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Psi5_Cfg_BaseAddress
 * \{  */

/** \brief  PSI5 object */
#define MODULE_PSI5 /*lint --e(923)*/ (*(Ifx_PSI5*)0xF0005000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Psi5_Cfg_Psi5
 * \{  */

/** \brief  3D0, Access Enable Register 0 */
#define PSI5_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_ACCEN0*)0xF00053D0u)

/** \brief  3D4, Access Enable Register 1 */
#define PSI5_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_ACCEN1*)0xF00053D4u)

/** \brief  8C, Channel Trigger Value Register */
#define PSI5_CH0_CTV /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_CTV*)0xF000508Cu)

/** Alias (User Manual Name) for PSI5_CH0_CTV.
* To use register names with standard convension, please use PSI5_CH0_CTV.
*/
#define	PSI5_CTV0	(PSI5_CH0_CTV)

/** \brief  30, Input and Output Control Register */
#define PSI5_CH0_IOCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_IOCR*)0xF0005030u)

/** Alias (User Manual Name) for PSI5_CH0_IOCR.
* To use register names with standard convension, please use PSI5_CH0_IOCR.
*/
#define	PSI5_IOCR0	(PSI5_CH0_IOCR)

/** \brief  88, Pulse Generation Control Register */
#define PSI5_CH0_PGC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_PGC*)0xF0005088u)

/** Alias (User Manual Name) for PSI5_CH0_PGC.
* To use register names with standard convension, please use PSI5_CH0_PGC.
*/
#define	PSI5_PGC0	(PSI5_CH0_PGC)

/** \brief  34, Receiver Control Register A */
#define PSI5_CH0_RCRA /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRA*)0xF0005034u)

/** Alias (User Manual Name) for PSI5_CH0_RCRA.
* To use register names with standard convension, please use PSI5_CH0_RCRA.
*/
#define	PSI5_RCRA0	(PSI5_CH0_RCRA)

/** \brief  38, Receiver Control Register B */
#define PSI5_CH0_RCRB /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRB*)0xF0005038u)

/** Alias (User Manual Name) for PSI5_CH0_RCRB.
* To use register names with standard convension, please use PSI5_CH0_RCRB.
*/
#define	PSI5_RCRB0	(PSI5_CH0_RCRB)

/** \brief  3C, Receiver Control Register C */
#define PSI5_CH0_RCRC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRC*)0xF000503Cu)

/** Alias (User Manual Name) for PSI5_CH0_RCRC.
* To use register names with standard convension, please use PSI5_CH0_RCRC.
*/
#define	PSI5_RCRC0	(PSI5_CH0_RCRC)

/** \brief  84, Receive Data Register High */
#define PSI5_CH0_RDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRH*)0xF0005084u)

/** Alias (User Manual Name) for PSI5_CH0_RDRH.
* To use register names with standard convension, please use PSI5_CH0_RDRH.
*/
#define	PSI5_RDRH0	(PSI5_CH0_RDRH)

/** \brief  80, Receive Data Register Low */
#define PSI5_CH0_RDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRL*)0xF0005080u)

/** Alias (User Manual Name) for PSI5_CH0_RDRL.
* To use register names with standard convension, please use PSI5_CH0_RDRL.
*/
#define	PSI5_RDRL0	(PSI5_CH0_RDRL)

/** \brief  5C, Receive Status Register */
#define PSI5_CH0_RSR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RSR*)0xF000505Cu)

/** Alias (User Manual Name) for PSI5_CH0_RSR.
* To use register names with standard convension, please use PSI5_CH0_RSR.
*/
#define	PSI5_RSR0	(PSI5_CH0_RSR)

/** \brief  90, Send Control Register */
#define PSI5_CH0_SCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SCR*)0xF0005090u)

/** Alias (User Manual Name) for PSI5_CH0_SCR.
* To use register names with standard convension, please use PSI5_CH0_SCR.
*/
#define	PSI5_SCR0	(PSI5_CH0_SCR)

/** \brief  98, Send Data Register High */
#define PSI5_CH0_SDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRH*)0xF0005098u)

/** Alias (User Manual Name) for PSI5_CH0_SDRH.
* To use register names with standard convension, please use PSI5_CH0_SDRH.
*/
#define	PSI5_SDRH0	(PSI5_CH0_SDRH)

/** \brief  94, Send Data Register Low */
#define PSI5_CH0_SDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRL*)0xF0005094u)

/** Alias (User Manual Name) for PSI5_CH0_SDRL.
* To use register names with standard convension, please use PSI5_CH0_SDRL.
*/
#define	PSI5_SDRL0	(PSI5_CH0_SDRL)

/** \brief  60, Serial Data and Status Register */
#define PSI5_CH0_SDS0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005060u)

/** Alias (User Manual Name) for PSI5_CH0_SDS0.
* To use register names with standard convension, please use PSI5_CH0_SDS0.
*/
#define	PSI5_SDS00	(PSI5_CH0_SDS0)

/** \brief  64, Serial Data and Status Register */
#define PSI5_CH0_SDS1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005064u)

/** Alias (User Manual Name) for PSI5_CH0_SDS1.
* To use register names with standard convension, please use PSI5_CH0_SDS1.
*/
#define	PSI5_SDS01	(PSI5_CH0_SDS1)

/** \brief  68, Serial Data and Status Register */
#define PSI5_CH0_SDS2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005068u)

/** Alias (User Manual Name) for PSI5_CH0_SDS2.
* To use register names with standard convension, please use PSI5_CH0_SDS2.
*/
#define	PSI5_SDS02	(PSI5_CH0_SDS2)

/** \brief  6C, Serial Data and Status Register */
#define PSI5_CH0_SDS3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF000506Cu)

/** Alias (User Manual Name) for PSI5_CH0_SDS3.
* To use register names with standard convension, please use PSI5_CH0_SDS3.
*/
#define	PSI5_SDS03	(PSI5_CH0_SDS3)

/** \brief  70, Serial Data and Status Register */
#define PSI5_CH0_SDS4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005070u)

/** Alias (User Manual Name) for PSI5_CH0_SDS4.
* To use register names with standard convension, please use PSI5_CH0_SDS4.
*/
#define	PSI5_SDS04	(PSI5_CH0_SDS4)

/** \brief  74, Serial Data and Status Register */
#define PSI5_CH0_SDS5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005074u)

/** Alias (User Manual Name) for PSI5_CH0_SDS5.
* To use register names with standard convension, please use PSI5_CH0_SDS5.
*/
#define	PSI5_SDS05	(PSI5_CH0_SDS5)

/** \brief  7C, SOF TS Capture Register SFTSC */
#define PSI5_CH0_SFTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SFTSC*)0xF000507Cu)

/** Alias (User Manual Name) for PSI5_CH0_SFTSC.
* To use register names with standard convension, please use PSI5_CH0_SFTSC.
*/
#define	PSI5_SFTSC0	(PSI5_CH0_SFTSC)

/** \brief  A8, Send Output Register High */
#define PSI5_CH0_SORH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORH*)0xF00050A8u)

/** Alias (User Manual Name) for PSI5_CH0_SORH.
* To use register names with standard convension, please use PSI5_CH0_SORH.
*/
#define	PSI5_SORH0	(PSI5_CH0_SORH)

/** \brief  A4, Send Output Register Low */
#define PSI5_CH0_SORL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORL*)0xF00050A4u)

/** Alias (User Manual Name) for PSI5_CH0_SORL.
* To use register names with standard convension, please use PSI5_CH0_SORL.
*/
#define	PSI5_SORL0	(PSI5_CH0_SORL)

/** \brief  78, SOP TS Capture Register SPTSC */
#define PSI5_CH0_SPTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SPTSC*)0xF0005078u)

/** Alias (User Manual Name) for PSI5_CH0_SPTSC.
* To use register names with standard convension, please use PSI5_CH0_SPTSC.
*/
#define	PSI5_SPTSC0	(PSI5_CH0_SPTSC)

/** \brief  A0, Send Shift Register High */
#define PSI5_CH0_SSRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRH*)0xF00050A0u)

/** Alias (User Manual Name) for PSI5_CH0_SSRH.
* To use register names with standard convension, please use PSI5_CH0_SSRH.
*/
#define	PSI5_SSRH0	(PSI5_CH0_SSRH)

/** \brief  9C, Send Shift Register Low */
#define PSI5_CH0_SSRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRL*)0xF000509Cu)

/** Alias (User Manual Name) for PSI5_CH0_SSRL.
* To use register names with standard convension, please use PSI5_CH0_SSRL.
*/
#define	PSI5_SSRL0	(PSI5_CH0_SSRL)

/** \brief  40, Watch Dog Timer Register */
#define PSI5_CH0_WDT0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005040u)

/** Alias (User Manual Name) for PSI5_CH0_WDT0.
* To use register names with standard convension, please use PSI5_CH0_WDT0.
*/
#define	PSI5_WDT00	(PSI5_CH0_WDT0)

/** \brief  44, Watch Dog Timer Register */
#define PSI5_CH0_WDT1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005044u)

/** Alias (User Manual Name) for PSI5_CH0_WDT1.
* To use register names with standard convension, please use PSI5_CH0_WDT1.
*/
#define	PSI5_WDT01	(PSI5_CH0_WDT1)

/** \brief  48, Watch Dog Timer Register */
#define PSI5_CH0_WDT2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005048u)

/** Alias (User Manual Name) for PSI5_CH0_WDT2.
* To use register names with standard convension, please use PSI5_CH0_WDT2.
*/
#define	PSI5_WDT02	(PSI5_CH0_WDT2)

/** \brief  4C, Watch Dog Timer Register */
#define PSI5_CH0_WDT3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF000504Cu)

/** Alias (User Manual Name) for PSI5_CH0_WDT3.
* To use register names with standard convension, please use PSI5_CH0_WDT3.
*/
#define	PSI5_WDT03	(PSI5_CH0_WDT3)

/** \brief  50, Watch Dog Timer Register */
#define PSI5_CH0_WDT4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005050u)

/** Alias (User Manual Name) for PSI5_CH0_WDT4.
* To use register names with standard convension, please use PSI5_CH0_WDT4.
*/
#define	PSI5_WDT04	(PSI5_CH0_WDT4)

/** \brief  54, Watch Dog Timer Register */
#define PSI5_CH0_WDT5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005054u)

/** Alias (User Manual Name) for PSI5_CH0_WDT5.
* To use register names with standard convension, please use PSI5_CH0_WDT5.
*/
#define	PSI5_WDT05	(PSI5_CH0_WDT5)

/** \brief  58, Watch Dog Timer Register */
#define PSI5_CH0_WDT6 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005058u)

/** Alias (User Manual Name) for PSI5_CH0_WDT6.
* To use register names with standard convension, please use PSI5_CH0_WDT6.
*/
#define	PSI5_WDT06	(PSI5_CH0_WDT6)

/** \brief  11C, Channel Trigger Value Register */
#define PSI5_CH1_CTV /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_CTV*)0xF000511Cu)

/** Alias (User Manual Name) for PSI5_CH1_CTV.
* To use register names with standard convension, please use PSI5_CH1_CTV.
*/
#define	PSI5_CTV1	(PSI5_CH1_CTV)

/** \brief  C0, Input and Output Control Register */
#define PSI5_CH1_IOCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_IOCR*)0xF00050C0u)

/** Alias (User Manual Name) for PSI5_CH1_IOCR.
* To use register names with standard convension, please use PSI5_CH1_IOCR.
*/
#define	PSI5_IOCR1	(PSI5_CH1_IOCR)

/** \brief  118, Pulse Generation Control Register */
#define PSI5_CH1_PGC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_PGC*)0xF0005118u)

/** Alias (User Manual Name) for PSI5_CH1_PGC.
* To use register names with standard convension, please use PSI5_CH1_PGC.
*/
#define	PSI5_PGC1	(PSI5_CH1_PGC)

/** \brief  C4, Receiver Control Register A */
#define PSI5_CH1_RCRA /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRA*)0xF00050C4u)

/** Alias (User Manual Name) for PSI5_CH1_RCRA.
* To use register names with standard convension, please use PSI5_CH1_RCRA.
*/
#define	PSI5_RCRA1	(PSI5_CH1_RCRA)

/** \brief  C8, Receiver Control Register B */
#define PSI5_CH1_RCRB /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRB*)0xF00050C8u)

/** Alias (User Manual Name) for PSI5_CH1_RCRB.
* To use register names with standard convension, please use PSI5_CH1_RCRB.
*/
#define	PSI5_RCRB1	(PSI5_CH1_RCRB)

/** \brief  CC, Receiver Control Register C */
#define PSI5_CH1_RCRC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRC*)0xF00050CCu)

/** Alias (User Manual Name) for PSI5_CH1_RCRC.
* To use register names with standard convension, please use PSI5_CH1_RCRC.
*/
#define	PSI5_RCRC1	(PSI5_CH1_RCRC)

/** \brief  114, Receive Data Register High */
#define PSI5_CH1_RDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRH*)0xF0005114u)

/** Alias (User Manual Name) for PSI5_CH1_RDRH.
* To use register names with standard convension, please use PSI5_CH1_RDRH.
*/
#define	PSI5_RDRH1	(PSI5_CH1_RDRH)

/** \brief  110, Receive Data Register Low */
#define PSI5_CH1_RDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRL*)0xF0005110u)

/** Alias (User Manual Name) for PSI5_CH1_RDRL.
* To use register names with standard convension, please use PSI5_CH1_RDRL.
*/
#define	PSI5_RDRL1	(PSI5_CH1_RDRL)

/** \brief  EC, Receive Status Register */
#define PSI5_CH1_RSR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RSR*)0xF00050ECu)

/** Alias (User Manual Name) for PSI5_CH1_RSR.
* To use register names with standard convension, please use PSI5_CH1_RSR.
*/
#define	PSI5_RSR1	(PSI5_CH1_RSR)

/** \brief  120, Send Control Register */
#define PSI5_CH1_SCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SCR*)0xF0005120u)

/** Alias (User Manual Name) for PSI5_CH1_SCR.
* To use register names with standard convension, please use PSI5_CH1_SCR.
*/
#define	PSI5_SCR1	(PSI5_CH1_SCR)

/** \brief  128, Send Data Register High */
#define PSI5_CH1_SDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRH*)0xF0005128u)

/** Alias (User Manual Name) for PSI5_CH1_SDRH.
* To use register names with standard convension, please use PSI5_CH1_SDRH.
*/
#define	PSI5_SDRH1	(PSI5_CH1_SDRH)

/** \brief  124, Send Data Register Low */
#define PSI5_CH1_SDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRL*)0xF0005124u)

/** Alias (User Manual Name) for PSI5_CH1_SDRL.
* To use register names with standard convension, please use PSI5_CH1_SDRL.
*/
#define	PSI5_SDRL1	(PSI5_CH1_SDRL)

/** \brief  F0, Serial Data and Status Register */
#define PSI5_CH1_SDS0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00050F0u)

/** Alias (User Manual Name) for PSI5_CH1_SDS0.
* To use register names with standard convension, please use PSI5_CH1_SDS0.
*/
#define	PSI5_SDS10	(PSI5_CH1_SDS0)

/** \brief  F4, Serial Data and Status Register */
#define PSI5_CH1_SDS1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00050F4u)

/** Alias (User Manual Name) for PSI5_CH1_SDS1.
* To use register names with standard convension, please use PSI5_CH1_SDS1.
*/
#define	PSI5_SDS11	(PSI5_CH1_SDS1)

/** \brief  F8, Serial Data and Status Register */
#define PSI5_CH1_SDS2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00050F8u)

/** Alias (User Manual Name) for PSI5_CH1_SDS2.
* To use register names with standard convension, please use PSI5_CH1_SDS2.
*/
#define	PSI5_SDS12	(PSI5_CH1_SDS2)

/** \brief  FC, Serial Data and Status Register */
#define PSI5_CH1_SDS3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00050FCu)

/** Alias (User Manual Name) for PSI5_CH1_SDS3.
* To use register names with standard convension, please use PSI5_CH1_SDS3.
*/
#define	PSI5_SDS13	(PSI5_CH1_SDS3)

/** \brief  100, Serial Data and Status Register */
#define PSI5_CH1_SDS4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005100u)

/** Alias (User Manual Name) for PSI5_CH1_SDS4.
* To use register names with standard convension, please use PSI5_CH1_SDS4.
*/
#define	PSI5_SDS14	(PSI5_CH1_SDS4)

/** \brief  104, Serial Data and Status Register */
#define PSI5_CH1_SDS5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005104u)

/** Alias (User Manual Name) for PSI5_CH1_SDS5.
* To use register names with standard convension, please use PSI5_CH1_SDS5.
*/
#define	PSI5_SDS15	(PSI5_CH1_SDS5)

/** \brief  10C, SOF TS Capture Register SFTSC */
#define PSI5_CH1_SFTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SFTSC*)0xF000510Cu)

/** Alias (User Manual Name) for PSI5_CH1_SFTSC.
* To use register names with standard convension, please use PSI5_CH1_SFTSC.
*/
#define	PSI5_SFTSC1	(PSI5_CH1_SFTSC)

/** \brief  138, Send Output Register High */
#define PSI5_CH1_SORH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORH*)0xF0005138u)

/** Alias (User Manual Name) for PSI5_CH1_SORH.
* To use register names with standard convension, please use PSI5_CH1_SORH.
*/
#define	PSI5_SORH1	(PSI5_CH1_SORH)

/** \brief  134, Send Output Register Low */
#define PSI5_CH1_SORL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORL*)0xF0005134u)

/** Alias (User Manual Name) for PSI5_CH1_SORL.
* To use register names with standard convension, please use PSI5_CH1_SORL.
*/
#define	PSI5_SORL1	(PSI5_CH1_SORL)

/** \brief  108, SOP TS Capture Register SPTSC */
#define PSI5_CH1_SPTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SPTSC*)0xF0005108u)

/** Alias (User Manual Name) for PSI5_CH1_SPTSC.
* To use register names with standard convension, please use PSI5_CH1_SPTSC.
*/
#define	PSI5_SPTSC1	(PSI5_CH1_SPTSC)

/** \brief  130, Send Shift Register High */
#define PSI5_CH1_SSRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRH*)0xF0005130u)

/** Alias (User Manual Name) for PSI5_CH1_SSRH.
* To use register names with standard convension, please use PSI5_CH1_SSRH.
*/
#define	PSI5_SSRH1	(PSI5_CH1_SSRH)

/** \brief  12C, Send Shift Register Low */
#define PSI5_CH1_SSRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRL*)0xF000512Cu)

/** Alias (User Manual Name) for PSI5_CH1_SSRL.
* To use register names with standard convension, please use PSI5_CH1_SSRL.
*/
#define	PSI5_SSRL1	(PSI5_CH1_SSRL)

/** \brief  D0, Watch Dog Timer Register */
#define PSI5_CH1_WDT0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050D0u)

/** Alias (User Manual Name) for PSI5_CH1_WDT0.
* To use register names with standard convension, please use PSI5_CH1_WDT0.
*/
#define	PSI5_WDT10	(PSI5_CH1_WDT0)

/** \brief  D4, Watch Dog Timer Register */
#define PSI5_CH1_WDT1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050D4u)

/** Alias (User Manual Name) for PSI5_CH1_WDT1.
* To use register names with standard convension, please use PSI5_CH1_WDT1.
*/
#define	PSI5_WDT11	(PSI5_CH1_WDT1)

/** \brief  D8, Watch Dog Timer Register */
#define PSI5_CH1_WDT2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050D8u)

/** Alias (User Manual Name) for PSI5_CH1_WDT2.
* To use register names with standard convension, please use PSI5_CH1_WDT2.
*/
#define	PSI5_WDT12	(PSI5_CH1_WDT2)

/** \brief  DC, Watch Dog Timer Register */
#define PSI5_CH1_WDT3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050DCu)

/** Alias (User Manual Name) for PSI5_CH1_WDT3.
* To use register names with standard convension, please use PSI5_CH1_WDT3.
*/
#define	PSI5_WDT13	(PSI5_CH1_WDT3)

/** \brief  E0, Watch Dog Timer Register */
#define PSI5_CH1_WDT4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050E0u)

/** Alias (User Manual Name) for PSI5_CH1_WDT4.
* To use register names with standard convension, please use PSI5_CH1_WDT4.
*/
#define	PSI5_WDT14	(PSI5_CH1_WDT4)

/** \brief  E4, Watch Dog Timer Register */
#define PSI5_CH1_WDT5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050E4u)

/** Alias (User Manual Name) for PSI5_CH1_WDT5.
* To use register names with standard convension, please use PSI5_CH1_WDT5.
*/
#define	PSI5_WDT15	(PSI5_CH1_WDT5)

/** \brief  E8, Watch Dog Timer Register */
#define PSI5_CH1_WDT6 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00050E8u)

/** Alias (User Manual Name) for PSI5_CH1_WDT6.
* To use register names with standard convension, please use PSI5_CH1_WDT6.
*/
#define	PSI5_WDT16	(PSI5_CH1_WDT6)

/** \brief  1AC, Channel Trigger Value Register */
#define PSI5_CH2_CTV /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_CTV*)0xF00051ACu)

/** Alias (User Manual Name) for PSI5_CH2_CTV.
* To use register names with standard convension, please use PSI5_CH2_CTV.
*/
#define	PSI5_CTV2	(PSI5_CH2_CTV)

/** \brief  150, Input and Output Control Register */
#define PSI5_CH2_IOCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_IOCR*)0xF0005150u)

/** Alias (User Manual Name) for PSI5_CH2_IOCR.
* To use register names with standard convension, please use PSI5_CH2_IOCR.
*/
#define	PSI5_IOCR2	(PSI5_CH2_IOCR)

/** \brief  1A8, Pulse Generation Control Register */
#define PSI5_CH2_PGC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_PGC*)0xF00051A8u)

/** Alias (User Manual Name) for PSI5_CH2_PGC.
* To use register names with standard convension, please use PSI5_CH2_PGC.
*/
#define	PSI5_PGC2	(PSI5_CH2_PGC)

/** \brief  154, Receiver Control Register A */
#define PSI5_CH2_RCRA /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRA*)0xF0005154u)

/** Alias (User Manual Name) for PSI5_CH2_RCRA.
* To use register names with standard convension, please use PSI5_CH2_RCRA.
*/
#define	PSI5_RCRA2	(PSI5_CH2_RCRA)

/** \brief  158, Receiver Control Register B */
#define PSI5_CH2_RCRB /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRB*)0xF0005158u)

/** Alias (User Manual Name) for PSI5_CH2_RCRB.
* To use register names with standard convension, please use PSI5_CH2_RCRB.
*/
#define	PSI5_RCRB2	(PSI5_CH2_RCRB)

/** \brief  15C, Receiver Control Register C */
#define PSI5_CH2_RCRC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRC*)0xF000515Cu)

/** Alias (User Manual Name) for PSI5_CH2_RCRC.
* To use register names with standard convension, please use PSI5_CH2_RCRC.
*/
#define	PSI5_RCRC2	(PSI5_CH2_RCRC)

/** \brief  1A4, Receive Data Register High */
#define PSI5_CH2_RDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRH*)0xF00051A4u)

/** Alias (User Manual Name) for PSI5_CH2_RDRH.
* To use register names with standard convension, please use PSI5_CH2_RDRH.
*/
#define	PSI5_RDRH2	(PSI5_CH2_RDRH)

/** \brief  1A0, Receive Data Register Low */
#define PSI5_CH2_RDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRL*)0xF00051A0u)

/** Alias (User Manual Name) for PSI5_CH2_RDRL.
* To use register names with standard convension, please use PSI5_CH2_RDRL.
*/
#define	PSI5_RDRL2	(PSI5_CH2_RDRL)

/** \brief  17C, Receive Status Register */
#define PSI5_CH2_RSR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RSR*)0xF000517Cu)

/** Alias (User Manual Name) for PSI5_CH2_RSR.
* To use register names with standard convension, please use PSI5_CH2_RSR.
*/
#define	PSI5_RSR2	(PSI5_CH2_RSR)

/** \brief  1B0, Send Control Register */
#define PSI5_CH2_SCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SCR*)0xF00051B0u)

/** Alias (User Manual Name) for PSI5_CH2_SCR.
* To use register names with standard convension, please use PSI5_CH2_SCR.
*/
#define	PSI5_SCR2	(PSI5_CH2_SCR)

/** \brief  1B8, Send Data Register High */
#define PSI5_CH2_SDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRH*)0xF00051B8u)

/** Alias (User Manual Name) for PSI5_CH2_SDRH.
* To use register names with standard convension, please use PSI5_CH2_SDRH.
*/
#define	PSI5_SDRH2	(PSI5_CH2_SDRH)

/** \brief  1B4, Send Data Register Low */
#define PSI5_CH2_SDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRL*)0xF00051B4u)

/** Alias (User Manual Name) for PSI5_CH2_SDRL.
* To use register names with standard convension, please use PSI5_CH2_SDRL.
*/
#define	PSI5_SDRL2	(PSI5_CH2_SDRL)

/** \brief  180, Serial Data and Status Register */
#define PSI5_CH2_SDS0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005180u)

/** Alias (User Manual Name) for PSI5_CH2_SDS0.
* To use register names with standard convension, please use PSI5_CH2_SDS0.
*/
#define	PSI5_SDS20	(PSI5_CH2_SDS0)

/** \brief  184, Serial Data and Status Register */
#define PSI5_CH2_SDS1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005184u)

/** Alias (User Manual Name) for PSI5_CH2_SDS1.
* To use register names with standard convension, please use PSI5_CH2_SDS1.
*/
#define	PSI5_SDS21	(PSI5_CH2_SDS1)

/** \brief  188, Serial Data and Status Register */
#define PSI5_CH2_SDS2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005188u)

/** Alias (User Manual Name) for PSI5_CH2_SDS2.
* To use register names with standard convension, please use PSI5_CH2_SDS2.
*/
#define	PSI5_SDS22	(PSI5_CH2_SDS2)

/** \brief  18C, Serial Data and Status Register */
#define PSI5_CH2_SDS3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF000518Cu)

/** Alias (User Manual Name) for PSI5_CH2_SDS3.
* To use register names with standard convension, please use PSI5_CH2_SDS3.
*/
#define	PSI5_SDS23	(PSI5_CH2_SDS3)

/** \brief  190, Serial Data and Status Register */
#define PSI5_CH2_SDS4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005190u)

/** Alias (User Manual Name) for PSI5_CH2_SDS4.
* To use register names with standard convension, please use PSI5_CH2_SDS4.
*/
#define	PSI5_SDS24	(PSI5_CH2_SDS4)

/** \brief  194, Serial Data and Status Register */
#define PSI5_CH2_SDS5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005194u)

/** Alias (User Manual Name) for PSI5_CH2_SDS5.
* To use register names with standard convension, please use PSI5_CH2_SDS5.
*/
#define	PSI5_SDS25	(PSI5_CH2_SDS5)

/** \brief  19C, SOF TS Capture Register SFTSC */
#define PSI5_CH2_SFTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SFTSC*)0xF000519Cu)

/** Alias (User Manual Name) for PSI5_CH2_SFTSC.
* To use register names with standard convension, please use PSI5_CH2_SFTSC.
*/
#define	PSI5_SFTSC2	(PSI5_CH2_SFTSC)

/** \brief  1C8, Send Output Register High */
#define PSI5_CH2_SORH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORH*)0xF00051C8u)

/** Alias (User Manual Name) for PSI5_CH2_SORH.
* To use register names with standard convension, please use PSI5_CH2_SORH.
*/
#define	PSI5_SORH2	(PSI5_CH2_SORH)

/** \brief  1C4, Send Output Register Low */
#define PSI5_CH2_SORL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORL*)0xF00051C4u)

/** Alias (User Manual Name) for PSI5_CH2_SORL.
* To use register names with standard convension, please use PSI5_CH2_SORL.
*/
#define	PSI5_SORL2	(PSI5_CH2_SORL)

/** \brief  198, SOP TS Capture Register SPTSC */
#define PSI5_CH2_SPTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SPTSC*)0xF0005198u)

/** Alias (User Manual Name) for PSI5_CH2_SPTSC.
* To use register names with standard convension, please use PSI5_CH2_SPTSC.
*/
#define	PSI5_SPTSC2	(PSI5_CH2_SPTSC)

/** \brief  1C0, Send Shift Register High */
#define PSI5_CH2_SSRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRH*)0xF00051C0u)

/** Alias (User Manual Name) for PSI5_CH2_SSRH.
* To use register names with standard convension, please use PSI5_CH2_SSRH.
*/
#define	PSI5_SSRH2	(PSI5_CH2_SSRH)

/** \brief  1BC, Send Shift Register Low */
#define PSI5_CH2_SSRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRL*)0xF00051BCu)

/** Alias (User Manual Name) for PSI5_CH2_SSRL.
* To use register names with standard convension, please use PSI5_CH2_SSRL.
*/
#define	PSI5_SSRL2	(PSI5_CH2_SSRL)

/** \brief  160, Watch Dog Timer Register */
#define PSI5_CH2_WDT0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005160u)

/** Alias (User Manual Name) for PSI5_CH2_WDT0.
* To use register names with standard convension, please use PSI5_CH2_WDT0.
*/
#define	PSI5_WDT20	(PSI5_CH2_WDT0)

/** \brief  164, Watch Dog Timer Register */
#define PSI5_CH2_WDT1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005164u)

/** Alias (User Manual Name) for PSI5_CH2_WDT1.
* To use register names with standard convension, please use PSI5_CH2_WDT1.
*/
#define	PSI5_WDT21	(PSI5_CH2_WDT1)

/** \brief  168, Watch Dog Timer Register */
#define PSI5_CH2_WDT2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005168u)

/** Alias (User Manual Name) for PSI5_CH2_WDT2.
* To use register names with standard convension, please use PSI5_CH2_WDT2.
*/
#define	PSI5_WDT22	(PSI5_CH2_WDT2)

/** \brief  16C, Watch Dog Timer Register */
#define PSI5_CH2_WDT3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF000516Cu)

/** Alias (User Manual Name) for PSI5_CH2_WDT3.
* To use register names with standard convension, please use PSI5_CH2_WDT3.
*/
#define	PSI5_WDT23	(PSI5_CH2_WDT3)

/** \brief  170, Watch Dog Timer Register */
#define PSI5_CH2_WDT4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005170u)

/** Alias (User Manual Name) for PSI5_CH2_WDT4.
* To use register names with standard convension, please use PSI5_CH2_WDT4.
*/
#define	PSI5_WDT24	(PSI5_CH2_WDT4)

/** \brief  174, Watch Dog Timer Register */
#define PSI5_CH2_WDT5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005174u)

/** Alias (User Manual Name) for PSI5_CH2_WDT5.
* To use register names with standard convension, please use PSI5_CH2_WDT5.
*/
#define	PSI5_WDT25	(PSI5_CH2_WDT5)

/** \brief  178, Watch Dog Timer Register */
#define PSI5_CH2_WDT6 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005178u)

/** Alias (User Manual Name) for PSI5_CH2_WDT6.
* To use register names with standard convension, please use PSI5_CH2_WDT6.
*/
#define	PSI5_WDT26	(PSI5_CH2_WDT6)

/** \brief  23C, Channel Trigger Value Register */
#define PSI5_CH3_CTV /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_CTV*)0xF000523Cu)

/** Alias (User Manual Name) for PSI5_CH3_CTV.
* To use register names with standard convension, please use PSI5_CH3_CTV.
*/
#define	PSI5_CTV3	(PSI5_CH3_CTV)

/** \brief  1E0, Input and Output Control Register */
#define PSI5_CH3_IOCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_IOCR*)0xF00051E0u)

/** Alias (User Manual Name) for PSI5_CH3_IOCR.
* To use register names with standard convension, please use PSI5_CH3_IOCR.
*/
#define	PSI5_IOCR3	(PSI5_CH3_IOCR)

/** \brief  238, Pulse Generation Control Register */
#define PSI5_CH3_PGC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_PGC*)0xF0005238u)

/** Alias (User Manual Name) for PSI5_CH3_PGC.
* To use register names with standard convension, please use PSI5_CH3_PGC.
*/
#define	PSI5_PGC3	(PSI5_CH3_PGC)

/** \brief  1E4, Receiver Control Register A */
#define PSI5_CH3_RCRA /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRA*)0xF00051E4u)

/** Alias (User Manual Name) for PSI5_CH3_RCRA.
* To use register names with standard convension, please use PSI5_CH3_RCRA.
*/
#define	PSI5_RCRA3	(PSI5_CH3_RCRA)

/** \brief  1E8, Receiver Control Register B */
#define PSI5_CH3_RCRB /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRB*)0xF00051E8u)

/** Alias (User Manual Name) for PSI5_CH3_RCRB.
* To use register names with standard convension, please use PSI5_CH3_RCRB.
*/
#define	PSI5_RCRB3	(PSI5_CH3_RCRB)

/** \brief  1EC, Receiver Control Register C */
#define PSI5_CH3_RCRC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRC*)0xF00051ECu)

/** Alias (User Manual Name) for PSI5_CH3_RCRC.
* To use register names with standard convension, please use PSI5_CH3_RCRC.
*/
#define	PSI5_RCRC3	(PSI5_CH3_RCRC)

/** \brief  234, Receive Data Register High */
#define PSI5_CH3_RDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRH*)0xF0005234u)

/** Alias (User Manual Name) for PSI5_CH3_RDRH.
* To use register names with standard convension, please use PSI5_CH3_RDRH.
*/
#define	PSI5_RDRH3	(PSI5_CH3_RDRH)

/** \brief  230, Receive Data Register Low */
#define PSI5_CH3_RDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRL*)0xF0005230u)

/** Alias (User Manual Name) for PSI5_CH3_RDRL.
* To use register names with standard convension, please use PSI5_CH3_RDRL.
*/
#define	PSI5_RDRL3	(PSI5_CH3_RDRL)

/** \brief  20C, Receive Status Register */
#define PSI5_CH3_RSR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RSR*)0xF000520Cu)

/** Alias (User Manual Name) for PSI5_CH3_RSR.
* To use register names with standard convension, please use PSI5_CH3_RSR.
*/
#define	PSI5_RSR3	(PSI5_CH3_RSR)

/** \brief  240, Send Control Register */
#define PSI5_CH3_SCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SCR*)0xF0005240u)

/** Alias (User Manual Name) for PSI5_CH3_SCR.
* To use register names with standard convension, please use PSI5_CH3_SCR.
*/
#define	PSI5_SCR3	(PSI5_CH3_SCR)

/** \brief  248, Send Data Register High */
#define PSI5_CH3_SDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRH*)0xF0005248u)

/** Alias (User Manual Name) for PSI5_CH3_SDRH.
* To use register names with standard convension, please use PSI5_CH3_SDRH.
*/
#define	PSI5_SDRH3	(PSI5_CH3_SDRH)

/** \brief  244, Send Data Register Low */
#define PSI5_CH3_SDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRL*)0xF0005244u)

/** Alias (User Manual Name) for PSI5_CH3_SDRL.
* To use register names with standard convension, please use PSI5_CH3_SDRL.
*/
#define	PSI5_SDRL3	(PSI5_CH3_SDRL)

/** \brief  210, Serial Data and Status Register */
#define PSI5_CH3_SDS0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005210u)

/** Alias (User Manual Name) for PSI5_CH3_SDS0.
* To use register names with standard convension, please use PSI5_CH3_SDS0.
*/
#define	PSI5_SDS30	(PSI5_CH3_SDS0)

/** \brief  214, Serial Data and Status Register */
#define PSI5_CH3_SDS1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005214u)

/** Alias (User Manual Name) for PSI5_CH3_SDS1.
* To use register names with standard convension, please use PSI5_CH3_SDS1.
*/
#define	PSI5_SDS31	(PSI5_CH3_SDS1)

/** \brief  218, Serial Data and Status Register */
#define PSI5_CH3_SDS2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005218u)

/** Alias (User Manual Name) for PSI5_CH3_SDS2.
* To use register names with standard convension, please use PSI5_CH3_SDS2.
*/
#define	PSI5_SDS32	(PSI5_CH3_SDS2)

/** \brief  21C, Serial Data and Status Register */
#define PSI5_CH3_SDS3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF000521Cu)

/** Alias (User Manual Name) for PSI5_CH3_SDS3.
* To use register names with standard convension, please use PSI5_CH3_SDS3.
*/
#define	PSI5_SDS33	(PSI5_CH3_SDS3)

/** \brief  220, Serial Data and Status Register */
#define PSI5_CH3_SDS4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005220u)

/** Alias (User Manual Name) for PSI5_CH3_SDS4.
* To use register names with standard convension, please use PSI5_CH3_SDS4.
*/
#define	PSI5_SDS34	(PSI5_CH3_SDS4)

/** \brief  224, Serial Data and Status Register */
#define PSI5_CH3_SDS5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF0005224u)

/** Alias (User Manual Name) for PSI5_CH3_SDS5.
* To use register names with standard convension, please use PSI5_CH3_SDS5.
*/
#define	PSI5_SDS35	(PSI5_CH3_SDS5)

/** \brief  22C, SOF TS Capture Register SFTSC */
#define PSI5_CH3_SFTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SFTSC*)0xF000522Cu)

/** Alias (User Manual Name) for PSI5_CH3_SFTSC.
* To use register names with standard convension, please use PSI5_CH3_SFTSC.
*/
#define	PSI5_SFTSC3	(PSI5_CH3_SFTSC)

/** \brief  258, Send Output Register High */
#define PSI5_CH3_SORH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORH*)0xF0005258u)

/** Alias (User Manual Name) for PSI5_CH3_SORH.
* To use register names with standard convension, please use PSI5_CH3_SORH.
*/
#define	PSI5_SORH3	(PSI5_CH3_SORH)

/** \brief  254, Send Output Register Low */
#define PSI5_CH3_SORL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORL*)0xF0005254u)

/** Alias (User Manual Name) for PSI5_CH3_SORL.
* To use register names with standard convension, please use PSI5_CH3_SORL.
*/
#define	PSI5_SORL3	(PSI5_CH3_SORL)

/** \brief  228, SOP TS Capture Register SPTSC */
#define PSI5_CH3_SPTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SPTSC*)0xF0005228u)

/** Alias (User Manual Name) for PSI5_CH3_SPTSC.
* To use register names with standard convension, please use PSI5_CH3_SPTSC.
*/
#define	PSI5_SPTSC3	(PSI5_CH3_SPTSC)

/** \brief  250, Send Shift Register High */
#define PSI5_CH3_SSRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRH*)0xF0005250u)

/** Alias (User Manual Name) for PSI5_CH3_SSRH.
* To use register names with standard convension, please use PSI5_CH3_SSRH.
*/
#define	PSI5_SSRH3	(PSI5_CH3_SSRH)

/** \brief  24C, Send Shift Register Low */
#define PSI5_CH3_SSRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRL*)0xF000524Cu)

/** Alias (User Manual Name) for PSI5_CH3_SSRL.
* To use register names with standard convension, please use PSI5_CH3_SSRL.
*/
#define	PSI5_SSRL3	(PSI5_CH3_SSRL)

/** \brief  1F0, Watch Dog Timer Register */
#define PSI5_CH3_WDT0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00051F0u)

/** Alias (User Manual Name) for PSI5_CH3_WDT0.
* To use register names with standard convension, please use PSI5_CH3_WDT0.
*/
#define	PSI5_WDT30	(PSI5_CH3_WDT0)

/** \brief  1F4, Watch Dog Timer Register */
#define PSI5_CH3_WDT1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00051F4u)

/** Alias (User Manual Name) for PSI5_CH3_WDT1.
* To use register names with standard convension, please use PSI5_CH3_WDT1.
*/
#define	PSI5_WDT31	(PSI5_CH3_WDT1)

/** \brief  1F8, Watch Dog Timer Register */
#define PSI5_CH3_WDT2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00051F8u)

/** Alias (User Manual Name) for PSI5_CH3_WDT2.
* To use register names with standard convension, please use PSI5_CH3_WDT2.
*/
#define	PSI5_WDT32	(PSI5_CH3_WDT2)

/** \brief  1FC, Watch Dog Timer Register */
#define PSI5_CH3_WDT3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF00051FCu)

/** Alias (User Manual Name) for PSI5_CH3_WDT3.
* To use register names with standard convension, please use PSI5_CH3_WDT3.
*/
#define	PSI5_WDT33	(PSI5_CH3_WDT3)

/** \brief  200, Watch Dog Timer Register */
#define PSI5_CH3_WDT4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005200u)

/** Alias (User Manual Name) for PSI5_CH3_WDT4.
* To use register names with standard convension, please use PSI5_CH3_WDT4.
*/
#define	PSI5_WDT34	(PSI5_CH3_WDT4)

/** \brief  204, Watch Dog Timer Register */
#define PSI5_CH3_WDT5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005204u)

/** Alias (User Manual Name) for PSI5_CH3_WDT5.
* To use register names with standard convension, please use PSI5_CH3_WDT5.
*/
#define	PSI5_WDT35	(PSI5_CH3_WDT5)

/** \brief  208, Watch Dog Timer Register */
#define PSI5_CH3_WDT6 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005208u)

/** Alias (User Manual Name) for PSI5_CH3_WDT6.
* To use register names with standard convension, please use PSI5_CH3_WDT6.
*/
#define	PSI5_WDT36	(PSI5_CH3_WDT6)

/** \brief  2CC, Channel Trigger Value Register */
#define PSI5_CH4_CTV /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_CTV*)0xF00052CCu)

/** Alias (User Manual Name) for PSI5_CH4_CTV.
* To use register names with standard convension, please use PSI5_CH4_CTV.
*/
#define	PSI5_CTV4	(PSI5_CH4_CTV)

/** \brief  270, Input and Output Control Register */
#define PSI5_CH4_IOCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_IOCR*)0xF0005270u)

/** Alias (User Manual Name) for PSI5_CH4_IOCR.
* To use register names with standard convension, please use PSI5_CH4_IOCR.
*/
#define	PSI5_IOCR4	(PSI5_CH4_IOCR)

/** \brief  2C8, Pulse Generation Control Register */
#define PSI5_CH4_PGC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_PGC*)0xF00052C8u)

/** Alias (User Manual Name) for PSI5_CH4_PGC.
* To use register names with standard convension, please use PSI5_CH4_PGC.
*/
#define	PSI5_PGC4	(PSI5_CH4_PGC)

/** \brief  274, Receiver Control Register A */
#define PSI5_CH4_RCRA /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRA*)0xF0005274u)

/** Alias (User Manual Name) for PSI5_CH4_RCRA.
* To use register names with standard convension, please use PSI5_CH4_RCRA.
*/
#define	PSI5_RCRA4	(PSI5_CH4_RCRA)

/** \brief  278, Receiver Control Register B */
#define PSI5_CH4_RCRB /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRB*)0xF0005278u)

/** Alias (User Manual Name) for PSI5_CH4_RCRB.
* To use register names with standard convension, please use PSI5_CH4_RCRB.
*/
#define	PSI5_RCRB4	(PSI5_CH4_RCRB)

/** \brief  27C, Receiver Control Register C */
#define PSI5_CH4_RCRC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RCRC*)0xF000527Cu)

/** Alias (User Manual Name) for PSI5_CH4_RCRC.
* To use register names with standard convension, please use PSI5_CH4_RCRC.
*/
#define	PSI5_RCRC4	(PSI5_CH4_RCRC)

/** \brief  2C4, Receive Data Register High */
#define PSI5_CH4_RDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRH*)0xF00052C4u)

/** Alias (User Manual Name) for PSI5_CH4_RDRH.
* To use register names with standard convension, please use PSI5_CH4_RDRH.
*/
#define	PSI5_RDRH4	(PSI5_CH4_RDRH)

/** \brief  2C0, Receive Data Register Low */
#define PSI5_CH4_RDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RDRL*)0xF00052C0u)

/** Alias (User Manual Name) for PSI5_CH4_RDRL.
* To use register names with standard convension, please use PSI5_CH4_RDRL.
*/
#define	PSI5_RDRL4	(PSI5_CH4_RDRL)

/** \brief  29C, Receive Status Register */
#define PSI5_CH4_RSR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_RSR*)0xF000529Cu)

/** Alias (User Manual Name) for PSI5_CH4_RSR.
* To use register names with standard convension, please use PSI5_CH4_RSR.
*/
#define	PSI5_RSR4	(PSI5_CH4_RSR)

/** \brief  2D0, Send Control Register */
#define PSI5_CH4_SCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SCR*)0xF00052D0u)

/** Alias (User Manual Name) for PSI5_CH4_SCR.
* To use register names with standard convension, please use PSI5_CH4_SCR.
*/
#define	PSI5_SCR4	(PSI5_CH4_SCR)

/** \brief  2D8, Send Data Register High */
#define PSI5_CH4_SDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRH*)0xF00052D8u)

/** Alias (User Manual Name) for PSI5_CH4_SDRH.
* To use register names with standard convension, please use PSI5_CH4_SDRH.
*/
#define	PSI5_SDRH4	(PSI5_CH4_SDRH)

/** \brief  2D4, Send Data Register Low */
#define PSI5_CH4_SDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDRL*)0xF00052D4u)

/** Alias (User Manual Name) for PSI5_CH4_SDRL.
* To use register names with standard convension, please use PSI5_CH4_SDRL.
*/
#define	PSI5_SDRL4	(PSI5_CH4_SDRL)

/** \brief  2A0, Serial Data and Status Register */
#define PSI5_CH4_SDS0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00052A0u)

/** Alias (User Manual Name) for PSI5_CH4_SDS0.
* To use register names with standard convension, please use PSI5_CH4_SDS0.
*/
#define	PSI5_SDS40	(PSI5_CH4_SDS0)

/** \brief  2A4, Serial Data and Status Register */
#define PSI5_CH4_SDS1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00052A4u)

/** Alias (User Manual Name) for PSI5_CH4_SDS1.
* To use register names with standard convension, please use PSI5_CH4_SDS1.
*/
#define	PSI5_SDS41	(PSI5_CH4_SDS1)

/** \brief  2A8, Serial Data and Status Register */
#define PSI5_CH4_SDS2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00052A8u)

/** Alias (User Manual Name) for PSI5_CH4_SDS2.
* To use register names with standard convension, please use PSI5_CH4_SDS2.
*/
#define	PSI5_SDS42	(PSI5_CH4_SDS2)

/** \brief  2AC, Serial Data and Status Register */
#define PSI5_CH4_SDS3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00052ACu)

/** Alias (User Manual Name) for PSI5_CH4_SDS3.
* To use register names with standard convension, please use PSI5_CH4_SDS3.
*/
#define	PSI5_SDS43	(PSI5_CH4_SDS3)

/** \brief  2B0, Serial Data and Status Register */
#define PSI5_CH4_SDS4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00052B0u)

/** Alias (User Manual Name) for PSI5_CH4_SDS4.
* To use register names with standard convension, please use PSI5_CH4_SDS4.
*/
#define	PSI5_SDS44	(PSI5_CH4_SDS4)

/** \brief  2B4, Serial Data and Status Register */
#define PSI5_CH4_SDS5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SDS*)0xF00052B4u)

/** Alias (User Manual Name) for PSI5_CH4_SDS5.
* To use register names with standard convension, please use PSI5_CH4_SDS5.
*/
#define	PSI5_SDS45	(PSI5_CH4_SDS5)

/** \brief  2BC, SOF TS Capture Register SFTSC */
#define PSI5_CH4_SFTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SFTSC*)0xF00052BCu)

/** Alias (User Manual Name) for PSI5_CH4_SFTSC.
* To use register names with standard convension, please use PSI5_CH4_SFTSC.
*/
#define	PSI5_SFTSC4	(PSI5_CH4_SFTSC)

/** \brief  2E8, Send Output Register High */
#define PSI5_CH4_SORH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORH*)0xF00052E8u)

/** Alias (User Manual Name) for PSI5_CH4_SORH.
* To use register names with standard convension, please use PSI5_CH4_SORH.
*/
#define	PSI5_SORH4	(PSI5_CH4_SORH)

/** \brief  2E4, Send Output Register Low */
#define PSI5_CH4_SORL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SORL*)0xF00052E4u)

/** Alias (User Manual Name) for PSI5_CH4_SORL.
* To use register names with standard convension, please use PSI5_CH4_SORL.
*/
#define	PSI5_SORL4	(PSI5_CH4_SORL)

/** \brief  2B8, SOP TS Capture Register SPTSC */
#define PSI5_CH4_SPTSC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SPTSC*)0xF00052B8u)

/** Alias (User Manual Name) for PSI5_CH4_SPTSC.
* To use register names with standard convension, please use PSI5_CH4_SPTSC.
*/
#define	PSI5_SPTSC4	(PSI5_CH4_SPTSC)

/** \brief  2E0, Send Shift Register High */
#define PSI5_CH4_SSRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRH*)0xF00052E0u)

/** Alias (User Manual Name) for PSI5_CH4_SSRH.
* To use register names with standard convension, please use PSI5_CH4_SSRH.
*/
#define	PSI5_SSRH4	(PSI5_CH4_SSRH)

/** \brief  2DC, Send Shift Register Low */
#define PSI5_CH4_SSRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_SSRL*)0xF00052DCu)

/** Alias (User Manual Name) for PSI5_CH4_SSRL.
* To use register names with standard convension, please use PSI5_CH4_SSRL.
*/
#define	PSI5_SSRL4	(PSI5_CH4_SSRL)

/** \brief  280, Watch Dog Timer Register */
#define PSI5_CH4_WDT0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005280u)

/** Alias (User Manual Name) for PSI5_CH4_WDT0.
* To use register names with standard convension, please use PSI5_CH4_WDT0.
*/
#define	PSI5_WDT40	(PSI5_CH4_WDT0)

/** \brief  284, Watch Dog Timer Register */
#define PSI5_CH4_WDT1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005284u)

/** Alias (User Manual Name) for PSI5_CH4_WDT1.
* To use register names with standard convension, please use PSI5_CH4_WDT1.
*/
#define	PSI5_WDT41	(PSI5_CH4_WDT1)

/** \brief  288, Watch Dog Timer Register */
#define PSI5_CH4_WDT2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005288u)

/** Alias (User Manual Name) for PSI5_CH4_WDT2.
* To use register names with standard convension, please use PSI5_CH4_WDT2.
*/
#define	PSI5_WDT42	(PSI5_CH4_WDT2)

/** \brief  28C, Watch Dog Timer Register */
#define PSI5_CH4_WDT3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF000528Cu)

/** Alias (User Manual Name) for PSI5_CH4_WDT3.
* To use register names with standard convension, please use PSI5_CH4_WDT3.
*/
#define	PSI5_WDT43	(PSI5_CH4_WDT3)

/** \brief  290, Watch Dog Timer Register */
#define PSI5_CH4_WDT4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005290u)

/** Alias (User Manual Name) for PSI5_CH4_WDT4.
* To use register names with standard convension, please use PSI5_CH4_WDT4.
*/
#define	PSI5_WDT44	(PSI5_CH4_WDT4)

/** \brief  294, Watch Dog Timer Register */
#define PSI5_CH4_WDT5 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005294u)

/** Alias (User Manual Name) for PSI5_CH4_WDT5.
* To use register names with standard convension, please use PSI5_CH4_WDT5.
*/
#define	PSI5_WDT45	(PSI5_CH4_WDT5)

/** \brief  298, Watch Dog Timer Register */
#define PSI5_CH4_WDT6 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CH_WDT*)0xF0005298u)

/** Alias (User Manual Name) for PSI5_CH4_WDT6.
* To use register names with standard convension, please use PSI5_CH4_WDT6.
*/
#define	PSI5_WDT46	(PSI5_CH4_WDT6)

/** \brief  0, Clock Control Register */
#define PSI5_CLC /*lint --e(923)*/ (*(volatile Ifx_PSI5_CLC*)0xF0005000u)

/** \brief  59C, CRCIOV Clear Register */
#define PSI5_CRCICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCICLR*)0xF000559Cu)

/** \brief  5A0, CRCIOV Clear Register */
#define PSI5_CRCICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCICLR*)0xF00055A0u)

/** \brief  5A4, CRCIOV Clear Register */
#define PSI5_CRCICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCICLR*)0xF00055A4u)

/** \brief  5A8, CRCIOV Clear Register */
#define PSI5_CRCICLR3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCICLR*)0xF00055A8u)

/** \brief  5AC, CRCIOV Clear Register */
#define PSI5_CRCICLR4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCICLR*)0xF00055ACu)

/** \brief  45C, CRCI Overview Register */
#define PSI5_CRCIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCIOV*)0xF000545Cu)

/** \brief  460, CRCI Overview Register */
#define PSI5_CRCIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCIOV*)0xF0005460u)

/** \brief  464, CRCI Overview Register */
#define PSI5_CRCIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCIOV*)0xF0005464u)

/** \brief  468, CRCI Overview Register */
#define PSI5_CRCIOV3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCIOV*)0xF0005468u)

/** \brief  46C, CRCI Overview Register */
#define PSI5_CRCIOV4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCIOV*)0xF000546Cu)

/** \brief  4FC, CRCIOV Set Register */
#define PSI5_CRCISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCISET*)0xF00054FCu)

/** \brief  500, CRCIOV Set Register */
#define PSI5_CRCISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCISET*)0xF0005500u)

/** \brief  504, CRCIOV Set Register */
#define PSI5_CRCISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCISET*)0xF0005504u)

/** \brief  508, CRCIOV Set Register */
#define PSI5_CRCISET3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCISET*)0xF0005508u)

/** \brief  50C, CRCIOV Set Register */
#define PSI5_CRCISET4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_CRCISET*)0xF000550Cu)

/** \brief  C, PSI5 Fractional Divider Register */
#define PSI5_FDR /*lint --e(923)*/ (*(volatile Ifx_PSI5_FDR*)0xF000500Cu)

/** \brief  14, Fractional Divider Register for Higher Bit Rate */
#define PSI5_FDRH /*lint --e(923)*/ (*(volatile Ifx_PSI5_FDR*)0xF0005014u)

/** \brief  10, Fractional Divider Register for Lower Bit Rate */
#define PSI5_FDRL /*lint --e(923)*/ (*(volatile Ifx_PSI5_FDR*)0xF0005010u)

/** \brief  18, Fractional Divider Register for Time Stamp */
#define PSI5_FDRT /*lint --e(923)*/ (*(volatile Ifx_PSI5_FDRT*)0xF0005018u)

/** \brief  2C, Global Control Register */
#define PSI5_GCR /*lint --e(923)*/ (*(volatile Ifx_PSI5_GCR*)0xF000502Cu)

/** \brief  8, Module Identification Register */
#define PSI5_ID /*lint --e(923)*/ (*(volatile Ifx_PSI5_ID*)0xF0005008u)

/** \brief  2FC, Interrupt Node Pointer Register */
#define PSI5_INP0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INP*)0xF00052FCu)

/** \brief  300, Interrupt Node Pointer Register */
#define PSI5_INP1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INP*)0xF0005300u)

/** \brief  304, Interrupt Node Pointer Register */
#define PSI5_INP2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INP*)0xF0005304u)

/** \brief  308, Interrupt Node Pointer Register */
#define PSI5_INP3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INP*)0xF0005308u)

/** \brief  30C, Interrupt Node Pointer Register */
#define PSI5_INP4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INP*)0xF000530Cu)

/** \brief  360, Interrupt Clear Register A */
#define PSI5_INTCLRA0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRA*)0xF0005360u)

/** \brief  364, Interrupt Clear Register A */
#define PSI5_INTCLRA1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRA*)0xF0005364u)

/** \brief  368, Interrupt Clear Register A */
#define PSI5_INTCLRA2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRA*)0xF0005368u)

/** \brief  36C, Interrupt Clear Register A */
#define PSI5_INTCLRA3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRA*)0xF000536Cu)

/** \brief  370, Interrupt Clear Register A */
#define PSI5_INTCLRA4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRA*)0xF0005370u)

/** \brief  374, Interrupt Clear Register A */
#define PSI5_INTCLRB0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRB*)0xF0005374u)

/** \brief  378, Interrupt Clear Register A */
#define PSI5_INTCLRB1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRB*)0xF0005378u)

/** \brief  37C, Interrupt Clear Register A */
#define PSI5_INTCLRB2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRB*)0xF000537Cu)

/** \brief  380, Interrupt Clear Register A */
#define PSI5_INTCLRB3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRB*)0xF0005380u)

/** \brief  384, Interrupt Clear Register A */
#define PSI5_INTCLRB4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTCLRB*)0xF0005384u)

/** \brief  388, Interrupt Enable Register A */
#define PSI5_INTENA0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENA*)0xF0005388u)

/** \brief  38C, Interrupt Enable Register A */
#define PSI5_INTENA1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENA*)0xF000538Cu)

/** \brief  390, Interrupt Enable Register A */
#define PSI5_INTENA2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENA*)0xF0005390u)

/** \brief  394, Interrupt Enable Register A */
#define PSI5_INTENA3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENA*)0xF0005394u)

/** \brief  398, Interrupt Enable Register A */
#define PSI5_INTENA4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENA*)0xF0005398u)

/** \brief  39C, Interrupt Enable Register B */
#define PSI5_INTENB0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENB*)0xF000539Cu)

/** \brief  3A0, Interrupt Enable Register B */
#define PSI5_INTENB1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENB*)0xF00053A0u)

/** \brief  3A4, Interrupt Enable Register B */
#define PSI5_INTENB2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENB*)0xF00053A4u)

/** \brief  3A8, Interrupt Enable Register B */
#define PSI5_INTENB3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENB*)0xF00053A8u)

/** \brief  3AC, Interrupt Enable Register B */
#define PSI5_INTENB4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTENB*)0xF00053ACu)

/** \brief  2F8, Interrupt Overview Register */
#define PSI5_INTOV /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTOV*)0xF00052F8u)

/** \brief  338, Interrupt Set Register A */
#define PSI5_INTSETA0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETA*)0xF0005338u)

/** \brief  33C, Interrupt Set Register A */
#define PSI5_INTSETA1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETA*)0xF000533Cu)

/** \brief  340, Interrupt Set Register A */
#define PSI5_INTSETA2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETA*)0xF0005340u)

/** \brief  344, Interrupt Set Register A */
#define PSI5_INTSETA3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETA*)0xF0005344u)

/** \brief  348, Interrupt Set Register A */
#define PSI5_INTSETA4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETA*)0xF0005348u)

/** \brief  34C, Interrupt Set Register B */
#define PSI5_INTSETB0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETB*)0xF000534Cu)

/** \brief  350, Interrupt Set Register B */
#define PSI5_INTSETB1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETB*)0xF0005350u)

/** \brief  354, Interrupt Set Register B */
#define PSI5_INTSETB2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETB*)0xF0005354u)

/** \brief  358, Interrupt Set Register B */
#define PSI5_INTSETB3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETB*)0xF0005358u)

/** \brief  35C, Interrupt Set Register B */
#define PSI5_INTSETB4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSETB*)0xF000535Cu)

/** \brief  310, Interrupt Status Register A */
#define PSI5_INTSTATA0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATA*)0xF0005310u)

/** \brief  314, Interrupt Status Register A */
#define PSI5_INTSTATA1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATA*)0xF0005314u)

/** \brief  318, Interrupt Status Register A */
#define PSI5_INTSTATA2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATA*)0xF0005318u)

/** \brief  31C, Interrupt Status Register A */
#define PSI5_INTSTATA3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATA*)0xF000531Cu)

/** \brief  320, Interrupt Status Register A */
#define PSI5_INTSTATA4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATA*)0xF0005320u)

/** \brief  324, Interrupt Status Register B */
#define PSI5_INTSTATB0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATB*)0xF0005324u)

/** \brief  328, Interrupt Status Register B */
#define PSI5_INTSTATB1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATB*)0xF0005328u)

/** \brief  32C, Interrupt Status Register B */
#define PSI5_INTSTATB2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATB*)0xF000532Cu)

/** \brief  330, Interrupt Status Register B */
#define PSI5_INTSTATB3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATB*)0xF0005330u)

/** \brief  334, Interrupt Status Register B */
#define PSI5_INTSTATB4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_INTSTATB*)0xF0005334u)

/** \brief  3D8, Kernel Reset Register 0 */
#define PSI5_KRST0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_KRST0*)0xF00053D8u)

/** \brief  3DC, Kernel Reset Register 1 */
#define PSI5_KRST1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_KRST1*)0xF00053DCu)

/** \brief  3E0, Kernel Reset Status Clear Register */
#define PSI5_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_PSI5_KRSTCLR*)0xF00053E0u)

/** \brief  5D8, MEIOV Clear Register */
#define PSI5_MEICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEICLR*)0xF00055D8u)

/** \brief  5DC, MEIOV Clear Register */
#define PSI5_MEICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEICLR*)0xF00055DCu)

/** \brief  5E0, MEIOV Clear Register */
#define PSI5_MEICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEICLR*)0xF00055E0u)

/** \brief  5E4, MEIOV Clear Register */
#define PSI5_MEICLR3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEICLR*)0xF00055E4u)

/** \brief  5E8, MEIOV Clear Register */
#define PSI5_MEICLR4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEICLR*)0xF00055E8u)

/** \brief  498, MEI Overview Register */
#define PSI5_MEIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEIOV*)0xF0005498u)

/** \brief  49C, MEI Overview Register */
#define PSI5_MEIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEIOV*)0xF000549Cu)

/** \brief  4A0, MEI Overview Register */
#define PSI5_MEIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEIOV*)0xF00054A0u)

/** \brief  4A4, MEI Overview Register */
#define PSI5_MEIOV3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEIOV*)0xF00054A4u)

/** \brief  4A8, MEI Overview Register */
#define PSI5_MEIOV4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEIOV*)0xF00054A8u)

/** \brief  538, MEIOV Set Register */
#define PSI5_MEISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEISET*)0xF0005538u)

/** \brief  53C, MEIOV Set Register */
#define PSI5_MEISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEISET*)0xF000553Cu)

/** \brief  540, MEIOV Set Register */
#define PSI5_MEISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEISET*)0xF0005540u)

/** \brief  544, MEIOV Set Register */
#define PSI5_MEISET3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEISET*)0xF0005544u)

/** \brief  548, MEIOV Set Register */
#define PSI5_MEISET4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_MEISET*)0xF0005548u)

/** \brief  574, NBIOV Clear Register */
#define PSI5_NBICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBICLR*)0xF0005574u)

/** \brief  578, NBIOV Clear Register */
#define PSI5_NBICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBICLR*)0xF0005578u)

/** \brief  57C, NBIOV Clear Register */
#define PSI5_NBICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBICLR*)0xF000557Cu)

/** \brief  580, NBIOV Clear Register */
#define PSI5_NBICLR3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBICLR*)0xF0005580u)

/** \brief  584, NBIOV Clear Register */
#define PSI5_NBICLR4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBICLR*)0xF0005584u)

/** \brief  434, NBI Overview Register */
#define PSI5_NBIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBIOV*)0xF0005434u)

/** \brief  438, NBI Overview Register */
#define PSI5_NBIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBIOV*)0xF0005438u)

/** \brief  43C, NBI Overview Register */
#define PSI5_NBIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBIOV*)0xF000543Cu)

/** \brief  440, NBI Overview Register */
#define PSI5_NBIOV3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBIOV*)0xF0005440u)

/** \brief  444, NBI Overview Register */
#define PSI5_NBIOV4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBIOV*)0xF0005444u)

/** \brief  4D4, NBIOV Set Register */
#define PSI5_NBISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBISET*)0xF00054D4u)

/** \brief  4D8, NBIOV Set Register */
#define PSI5_NBISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBISET*)0xF00054D8u)

/** \brief  4DC, NBIOV Set Register */
#define PSI5_NBISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBISET*)0xF00054DCu)

/** \brief  4E0, NBIOV Set Register */
#define PSI5_NBISET3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBISET*)0xF00054E0u)

/** \brief  4E4, NBIOV Set Register */
#define PSI5_NBISET4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NBISET*)0xF00054E4u)

/** \brief  5C4, NFIOV Clear Register */
#define PSI5_NFICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFICLR*)0xF00055C4u)

/** \brief  5C8, NFIOV Clear Register */
#define PSI5_NFICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFICLR*)0xF00055C8u)

/** \brief  5CC, NFIOV Clear Register */
#define PSI5_NFICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFICLR*)0xF00055CCu)

/** \brief  5D0, NFIOV Clear Register */
#define PSI5_NFICLR3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFICLR*)0xF00055D0u)

/** \brief  5D4, NFIOV Clear Register */
#define PSI5_NFICLR4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFICLR*)0xF00055D4u)

/** \brief  484, NFI Overview Register */
#define PSI5_NFIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFIOV*)0xF0005484u)

/** \brief  488, NFI Overview Register */
#define PSI5_NFIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFIOV*)0xF0005488u)

/** \brief  48C, NFI Overview Register */
#define PSI5_NFIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFIOV*)0xF000548Cu)

/** \brief  490, NFI Overview Register */
#define PSI5_NFIOV3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFIOV*)0xF0005490u)

/** \brief  494, NFI Overview Register */
#define PSI5_NFIOV4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFIOV*)0xF0005494u)

/** \brief  524, NFIOV Set Register */
#define PSI5_NFISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFISET*)0xF0005524u)

/** \brief  528, NFIOV Set Register */
#define PSI5_NFISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFISET*)0xF0005528u)

/** \brief  52C, NFIOV Set Register */
#define PSI5_NFISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFISET*)0xF000552Cu)

/** \brief  530, NFIOV Set Register */
#define PSI5_NFISET3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFISET*)0xF0005530u)

/** \brief  534, NFIOV Set Register */
#define PSI5_NFISET4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_NFISET*)0xF0005534u)

/** \brief  3CC, OCDS Control and Status */
#define PSI5_OCS /*lint --e(923)*/ (*(volatile Ifx_PSI5_OCS*)0xF00053CCu)

/** \brief  3F8, Receive Data FIFO */
#define PSI5_RDF0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDF*)0xF00053F8u)

/** \brief  3FC, Receive Data FIFO */
#define PSI5_RDF1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDF*)0xF00053FCu)

/** \brief  400, Receive Data FIFO */
#define PSI5_RDF2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDF*)0xF0005400u)

/** \brief  404, Receive Data FIFO */
#define PSI5_RDF3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDF*)0xF0005404u)

/** \brief  408, Receive Data FIFO */
#define PSI5_RDF4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDF*)0xF0005408u)

/** \brief  5B0, RDIOV Clear Register */
#define PSI5_RDICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDICLR*)0xF00055B0u)

/** \brief  5B4, RDIOV Clear Register */
#define PSI5_RDICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDICLR*)0xF00055B4u)

/** \brief  5B8, RDIOV Clear Register */
#define PSI5_RDICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDICLR*)0xF00055B8u)

/** \brief  5BC, RDIOV Clear Register */
#define PSI5_RDICLR3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDICLR*)0xF00055BCu)

/** \brief  5C0, RDIOV Clear Register */
#define PSI5_RDICLR4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDICLR*)0xF00055C0u)

/** \brief  470, RDI Overview Register */
#define PSI5_RDIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDIOV*)0xF0005470u)

/** \brief  474, RDI Overview Register */
#define PSI5_RDIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDIOV*)0xF0005474u)

/** \brief  478, RDI Overview Register */
#define PSI5_RDIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDIOV*)0xF0005478u)

/** \brief  47C, RDI Overview Register */
#define PSI5_RDIOV3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDIOV*)0xF000547Cu)

/** \brief  480, RDI Overview Register */
#define PSI5_RDIOV4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDIOV*)0xF0005480u)

/** \brief  510, RDIOV Set Register */
#define PSI5_RDISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDISET*)0xF0005510u)

/** \brief  514, RDIOV Set Register */
#define PSI5_RDISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDISET*)0xF0005514u)

/** \brief  518, RDIOV Set Register */
#define PSI5_RDISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDISET*)0xF0005518u)

/** \brief  51C, RDIOV Set Register */
#define PSI5_RDISET3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDISET*)0xF000551Cu)

/** \brief  520, RDIOV Set Register */
#define PSI5_RDISET4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDISET*)0xF0005520u)

/** \brief  604, Receive Data Memory High */
#define PSI5_RDM0_0_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005604u)

/** Alias (User Manual Name) for PSI5_RDM0_0_H.
* To use register names with standard convension, please use PSI5_RDM0_0_H.
*/
#define	PSI5_RDMH00	(PSI5_RDM0_0_H)

/** \brief  600, Receive Data Memory Low */
#define PSI5_RDM0_0_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005600u)

/** Alias (User Manual Name) for PSI5_RDM0_0_L.
* To use register names with standard convension, please use PSI5_RDM0_0_L.
*/
#define	PSI5_RDML00	(PSI5_RDM0_0_L)

/** \brief  654, Receive Data Memory High */
#define PSI5_RDM0_10_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005654u)

/** Alias (User Manual Name) for PSI5_RDM0_10_H.
* To use register names with standard convension, please use PSI5_RDM0_10_H.
*/
#define	PSI5_RDMH010	(PSI5_RDM0_10_H)

/** \brief  650, Receive Data Memory Low */
#define PSI5_RDM0_10_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005650u)

/** Alias (User Manual Name) for PSI5_RDM0_10_L.
* To use register names with standard convension, please use PSI5_RDM0_10_L.
*/
#define	PSI5_RDML010	(PSI5_RDM0_10_L)

/** \brief  65C, Receive Data Memory High */
#define PSI5_RDM0_11_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000565Cu)

/** Alias (User Manual Name) for PSI5_RDM0_11_H.
* To use register names with standard convension, please use PSI5_RDM0_11_H.
*/
#define	PSI5_RDMH011	(PSI5_RDM0_11_H)

/** \brief  658, Receive Data Memory Low */
#define PSI5_RDM0_11_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005658u)

/** Alias (User Manual Name) for PSI5_RDM0_11_L.
* To use register names with standard convension, please use PSI5_RDM0_11_L.
*/
#define	PSI5_RDML011	(PSI5_RDM0_11_L)

/** \brief  664, Receive Data Memory High */
#define PSI5_RDM0_12_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005664u)

/** Alias (User Manual Name) for PSI5_RDM0_12_H.
* To use register names with standard convension, please use PSI5_RDM0_12_H.
*/
#define	PSI5_RDMH012	(PSI5_RDM0_12_H)

/** \brief  660, Receive Data Memory Low */
#define PSI5_RDM0_12_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005660u)

/** Alias (User Manual Name) for PSI5_RDM0_12_L.
* To use register names with standard convension, please use PSI5_RDM0_12_L.
*/
#define	PSI5_RDML012	(PSI5_RDM0_12_L)

/** \brief  66C, Receive Data Memory High */
#define PSI5_RDM0_13_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000566Cu)

/** Alias (User Manual Name) for PSI5_RDM0_13_H.
* To use register names with standard convension, please use PSI5_RDM0_13_H.
*/
#define	PSI5_RDMH013	(PSI5_RDM0_13_H)

/** \brief  668, Receive Data Memory Low */
#define PSI5_RDM0_13_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005668u)

/** Alias (User Manual Name) for PSI5_RDM0_13_L.
* To use register names with standard convension, please use PSI5_RDM0_13_L.
*/
#define	PSI5_RDML013	(PSI5_RDM0_13_L)

/** \brief  674, Receive Data Memory High */
#define PSI5_RDM0_14_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005674u)

/** Alias (User Manual Name) for PSI5_RDM0_14_H.
* To use register names with standard convension, please use PSI5_RDM0_14_H.
*/
#define	PSI5_RDMH014	(PSI5_RDM0_14_H)

/** \brief  670, Receive Data Memory Low */
#define PSI5_RDM0_14_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005670u)

/** Alias (User Manual Name) for PSI5_RDM0_14_L.
* To use register names with standard convension, please use PSI5_RDM0_14_L.
*/
#define	PSI5_RDML014	(PSI5_RDM0_14_L)

/** \brief  67C, Receive Data Memory High */
#define PSI5_RDM0_15_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000567Cu)

/** Alias (User Manual Name) for PSI5_RDM0_15_H.
* To use register names with standard convension, please use PSI5_RDM0_15_H.
*/
#define	PSI5_RDMH015	(PSI5_RDM0_15_H)

/** \brief  678, Receive Data Memory Low */
#define PSI5_RDM0_15_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005678u)

/** Alias (User Manual Name) for PSI5_RDM0_15_L.
* To use register names with standard convension, please use PSI5_RDM0_15_L.
*/
#define	PSI5_RDML015	(PSI5_RDM0_15_L)

/** \brief  684, Receive Data Memory High */
#define PSI5_RDM0_16_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005684u)

/** Alias (User Manual Name) for PSI5_RDM0_16_H.
* To use register names with standard convension, please use PSI5_RDM0_16_H.
*/
#define	PSI5_RDMH016	(PSI5_RDM0_16_H)

/** \brief  680, Receive Data Memory Low */
#define PSI5_RDM0_16_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005680u)

/** Alias (User Manual Name) for PSI5_RDM0_16_L.
* To use register names with standard convension, please use PSI5_RDM0_16_L.
*/
#define	PSI5_RDML016	(PSI5_RDM0_16_L)

/** \brief  68C, Receive Data Memory High */
#define PSI5_RDM0_17_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000568Cu)

/** Alias (User Manual Name) for PSI5_RDM0_17_H.
* To use register names with standard convension, please use PSI5_RDM0_17_H.
*/
#define	PSI5_RDMH017	(PSI5_RDM0_17_H)

/** \brief  688, Receive Data Memory Low */
#define PSI5_RDM0_17_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005688u)

/** Alias (User Manual Name) for PSI5_RDM0_17_L.
* To use register names with standard convension, please use PSI5_RDM0_17_L.
*/
#define	PSI5_RDML017	(PSI5_RDM0_17_L)

/** \brief  694, Receive Data Memory High */
#define PSI5_RDM0_18_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005694u)

/** Alias (User Manual Name) for PSI5_RDM0_18_H.
* To use register names with standard convension, please use PSI5_RDM0_18_H.
*/
#define	PSI5_RDMH018	(PSI5_RDM0_18_H)

/** \brief  690, Receive Data Memory Low */
#define PSI5_RDM0_18_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005690u)

/** Alias (User Manual Name) for PSI5_RDM0_18_L.
* To use register names with standard convension, please use PSI5_RDM0_18_L.
*/
#define	PSI5_RDML018	(PSI5_RDM0_18_L)

/** \brief  69C, Receive Data Memory High */
#define PSI5_RDM0_19_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000569Cu)

/** Alias (User Manual Name) for PSI5_RDM0_19_H.
* To use register names with standard convension, please use PSI5_RDM0_19_H.
*/
#define	PSI5_RDMH019	(PSI5_RDM0_19_H)

/** \brief  698, Receive Data Memory Low */
#define PSI5_RDM0_19_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005698u)

/** Alias (User Manual Name) for PSI5_RDM0_19_L.
* To use register names with standard convension, please use PSI5_RDM0_19_L.
*/
#define	PSI5_RDML019	(PSI5_RDM0_19_L)

/** \brief  60C, Receive Data Memory High */
#define PSI5_RDM0_1_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000560Cu)

/** Alias (User Manual Name) for PSI5_RDM0_1_H.
* To use register names with standard convension, please use PSI5_RDM0_1_H.
*/
#define	PSI5_RDMH01	(PSI5_RDM0_1_H)

/** \brief  608, Receive Data Memory Low */
#define PSI5_RDM0_1_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005608u)

/** Alias (User Manual Name) for PSI5_RDM0_1_L.
* To use register names with standard convension, please use PSI5_RDM0_1_L.
*/
#define	PSI5_RDML01	(PSI5_RDM0_1_L)

/** \brief  6A4, Receive Data Memory High */
#define PSI5_RDM0_20_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056A4u)

/** Alias (User Manual Name) for PSI5_RDM0_20_H.
* To use register names with standard convension, please use PSI5_RDM0_20_H.
*/
#define	PSI5_RDMH020	(PSI5_RDM0_20_H)

/** \brief  6A0, Receive Data Memory Low */
#define PSI5_RDM0_20_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056A0u)

/** Alias (User Manual Name) for PSI5_RDM0_20_L.
* To use register names with standard convension, please use PSI5_RDM0_20_L.
*/
#define	PSI5_RDML020	(PSI5_RDM0_20_L)

/** \brief  6AC, Receive Data Memory High */
#define PSI5_RDM0_21_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056ACu)

/** Alias (User Manual Name) for PSI5_RDM0_21_H.
* To use register names with standard convension, please use PSI5_RDM0_21_H.
*/
#define	PSI5_RDMH021	(PSI5_RDM0_21_H)

/** \brief  6A8, Receive Data Memory Low */
#define PSI5_RDM0_21_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056A8u)

/** Alias (User Manual Name) for PSI5_RDM0_21_L.
* To use register names with standard convension, please use PSI5_RDM0_21_L.
*/
#define	PSI5_RDML021	(PSI5_RDM0_21_L)

/** \brief  6B4, Receive Data Memory High */
#define PSI5_RDM0_22_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056B4u)

/** Alias (User Manual Name) for PSI5_RDM0_22_H.
* To use register names with standard convension, please use PSI5_RDM0_22_H.
*/
#define	PSI5_RDMH022	(PSI5_RDM0_22_H)

/** \brief  6B0, Receive Data Memory Low */
#define PSI5_RDM0_22_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056B0u)

/** Alias (User Manual Name) for PSI5_RDM0_22_L.
* To use register names with standard convension, please use PSI5_RDM0_22_L.
*/
#define	PSI5_RDML022	(PSI5_RDM0_22_L)

/** \brief  6BC, Receive Data Memory High */
#define PSI5_RDM0_23_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056BCu)

/** Alias (User Manual Name) for PSI5_RDM0_23_H.
* To use register names with standard convension, please use PSI5_RDM0_23_H.
*/
#define	PSI5_RDMH023	(PSI5_RDM0_23_H)

/** \brief  6B8, Receive Data Memory Low */
#define PSI5_RDM0_23_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056B8u)

/** Alias (User Manual Name) for PSI5_RDM0_23_L.
* To use register names with standard convension, please use PSI5_RDM0_23_L.
*/
#define	PSI5_RDML023	(PSI5_RDM0_23_L)

/** \brief  6C4, Receive Data Memory High */
#define PSI5_RDM0_24_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056C4u)

/** Alias (User Manual Name) for PSI5_RDM0_24_H.
* To use register names with standard convension, please use PSI5_RDM0_24_H.
*/
#define	PSI5_RDMH024	(PSI5_RDM0_24_H)

/** \brief  6C0, Receive Data Memory Low */
#define PSI5_RDM0_24_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056C0u)

/** Alias (User Manual Name) for PSI5_RDM0_24_L.
* To use register names with standard convension, please use PSI5_RDM0_24_L.
*/
#define	PSI5_RDML024	(PSI5_RDM0_24_L)

/** \brief  6CC, Receive Data Memory High */
#define PSI5_RDM0_25_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056CCu)

/** Alias (User Manual Name) for PSI5_RDM0_25_H.
* To use register names with standard convension, please use PSI5_RDM0_25_H.
*/
#define	PSI5_RDMH025	(PSI5_RDM0_25_H)

/** \brief  6C8, Receive Data Memory Low */
#define PSI5_RDM0_25_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056C8u)

/** Alias (User Manual Name) for PSI5_RDM0_25_L.
* To use register names with standard convension, please use PSI5_RDM0_25_L.
*/
#define	PSI5_RDML025	(PSI5_RDM0_25_L)

/** \brief  6D4, Receive Data Memory High */
#define PSI5_RDM0_26_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056D4u)

/** Alias (User Manual Name) for PSI5_RDM0_26_H.
* To use register names with standard convension, please use PSI5_RDM0_26_H.
*/
#define	PSI5_RDMH026	(PSI5_RDM0_26_H)

/** \brief  6D0, Receive Data Memory Low */
#define PSI5_RDM0_26_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056D0u)

/** Alias (User Manual Name) for PSI5_RDM0_26_L.
* To use register names with standard convension, please use PSI5_RDM0_26_L.
*/
#define	PSI5_RDML026	(PSI5_RDM0_26_L)

/** \brief  6DC, Receive Data Memory High */
#define PSI5_RDM0_27_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056DCu)

/** Alias (User Manual Name) for PSI5_RDM0_27_H.
* To use register names with standard convension, please use PSI5_RDM0_27_H.
*/
#define	PSI5_RDMH027	(PSI5_RDM0_27_H)

/** \brief  6D8, Receive Data Memory Low */
#define PSI5_RDM0_27_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056D8u)

/** Alias (User Manual Name) for PSI5_RDM0_27_L.
* To use register names with standard convension, please use PSI5_RDM0_27_L.
*/
#define	PSI5_RDML027	(PSI5_RDM0_27_L)

/** \brief  6E4, Receive Data Memory High */
#define PSI5_RDM0_28_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056E4u)

/** Alias (User Manual Name) for PSI5_RDM0_28_H.
* To use register names with standard convension, please use PSI5_RDM0_28_H.
*/
#define	PSI5_RDMH028	(PSI5_RDM0_28_H)

/** \brief  6E0, Receive Data Memory Low */
#define PSI5_RDM0_28_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056E0u)

/** Alias (User Manual Name) for PSI5_RDM0_28_L.
* To use register names with standard convension, please use PSI5_RDM0_28_L.
*/
#define	PSI5_RDML028	(PSI5_RDM0_28_L)

/** \brief  6EC, Receive Data Memory High */
#define PSI5_RDM0_29_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056ECu)

/** Alias (User Manual Name) for PSI5_RDM0_29_H.
* To use register names with standard convension, please use PSI5_RDM0_29_H.
*/
#define	PSI5_RDMH029	(PSI5_RDM0_29_H)

/** \brief  6E8, Receive Data Memory Low */
#define PSI5_RDM0_29_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056E8u)

/** Alias (User Manual Name) for PSI5_RDM0_29_L.
* To use register names with standard convension, please use PSI5_RDM0_29_L.
*/
#define	PSI5_RDML029	(PSI5_RDM0_29_L)

/** \brief  614, Receive Data Memory High */
#define PSI5_RDM0_2_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005614u)

/** Alias (User Manual Name) for PSI5_RDM0_2_H.
* To use register names with standard convension, please use PSI5_RDM0_2_H.
*/
#define	PSI5_RDMH02	(PSI5_RDM0_2_H)

/** \brief  610, Receive Data Memory Low */
#define PSI5_RDM0_2_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005610u)

/** Alias (User Manual Name) for PSI5_RDM0_2_L.
* To use register names with standard convension, please use PSI5_RDM0_2_L.
*/
#define	PSI5_RDML02	(PSI5_RDM0_2_L)

/** \brief  6F4, Receive Data Memory High */
#define PSI5_RDM0_30_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056F4u)

/** Alias (User Manual Name) for PSI5_RDM0_30_H.
* To use register names with standard convension, please use PSI5_RDM0_30_H.
*/
#define	PSI5_RDMH030	(PSI5_RDM0_30_H)

/** \brief  6F0, Receive Data Memory Low */
#define PSI5_RDM0_30_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056F0u)

/** Alias (User Manual Name) for PSI5_RDM0_30_L.
* To use register names with standard convension, please use PSI5_RDM0_30_L.
*/
#define	PSI5_RDML030	(PSI5_RDM0_30_L)

/** \brief  6FC, Receive Data Memory High */
#define PSI5_RDM0_31_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00056FCu)

/** Alias (User Manual Name) for PSI5_RDM0_31_H.
* To use register names with standard convension, please use PSI5_RDM0_31_H.
*/
#define	PSI5_RDMH031	(PSI5_RDM0_31_H)

/** \brief  6F8, Receive Data Memory Low */
#define PSI5_RDM0_31_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00056F8u)

/** Alias (User Manual Name) for PSI5_RDM0_31_L.
* To use register names with standard convension, please use PSI5_RDM0_31_L.
*/
#define	PSI5_RDML031	(PSI5_RDM0_31_L)

/** \brief  61C, Receive Data Memory High */
#define PSI5_RDM0_3_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000561Cu)

/** Alias (User Manual Name) for PSI5_RDM0_3_H.
* To use register names with standard convension, please use PSI5_RDM0_3_H.
*/
#define	PSI5_RDMH03	(PSI5_RDM0_3_H)

/** \brief  618, Receive Data Memory Low */
#define PSI5_RDM0_3_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005618u)

/** Alias (User Manual Name) for PSI5_RDM0_3_L.
* To use register names with standard convension, please use PSI5_RDM0_3_L.
*/
#define	PSI5_RDML03	(PSI5_RDM0_3_L)

/** \brief  624, Receive Data Memory High */
#define PSI5_RDM0_4_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005624u)

/** Alias (User Manual Name) for PSI5_RDM0_4_H.
* To use register names with standard convension, please use PSI5_RDM0_4_H.
*/
#define	PSI5_RDMH04	(PSI5_RDM0_4_H)

/** \brief  620, Receive Data Memory Low */
#define PSI5_RDM0_4_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005620u)

/** Alias (User Manual Name) for PSI5_RDM0_4_L.
* To use register names with standard convension, please use PSI5_RDM0_4_L.
*/
#define	PSI5_RDML04	(PSI5_RDM0_4_L)

/** \brief  62C, Receive Data Memory High */
#define PSI5_RDM0_5_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000562Cu)

/** Alias (User Manual Name) for PSI5_RDM0_5_H.
* To use register names with standard convension, please use PSI5_RDM0_5_H.
*/
#define	PSI5_RDMH05	(PSI5_RDM0_5_H)

/** \brief  628, Receive Data Memory Low */
#define PSI5_RDM0_5_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005628u)

/** Alias (User Manual Name) for PSI5_RDM0_5_L.
* To use register names with standard convension, please use PSI5_RDM0_5_L.
*/
#define	PSI5_RDML05	(PSI5_RDM0_5_L)

/** \brief  634, Receive Data Memory High */
#define PSI5_RDM0_6_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005634u)

/** Alias (User Manual Name) for PSI5_RDM0_6_H.
* To use register names with standard convension, please use PSI5_RDM0_6_H.
*/
#define	PSI5_RDMH06	(PSI5_RDM0_6_H)

/** \brief  630, Receive Data Memory Low */
#define PSI5_RDM0_6_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005630u)

/** Alias (User Manual Name) for PSI5_RDM0_6_L.
* To use register names with standard convension, please use PSI5_RDM0_6_L.
*/
#define	PSI5_RDML06	(PSI5_RDM0_6_L)

/** \brief  63C, Receive Data Memory High */
#define PSI5_RDM0_7_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000563Cu)

/** Alias (User Manual Name) for PSI5_RDM0_7_H.
* To use register names with standard convension, please use PSI5_RDM0_7_H.
*/
#define	PSI5_RDMH07	(PSI5_RDM0_7_H)

/** \brief  638, Receive Data Memory Low */
#define PSI5_RDM0_7_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005638u)

/** Alias (User Manual Name) for PSI5_RDM0_7_L.
* To use register names with standard convension, please use PSI5_RDM0_7_L.
*/
#define	PSI5_RDML07	(PSI5_RDM0_7_L)

/** \brief  644, Receive Data Memory High */
#define PSI5_RDM0_8_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005644u)

/** Alias (User Manual Name) for PSI5_RDM0_8_H.
* To use register names with standard convension, please use PSI5_RDM0_8_H.
*/
#define	PSI5_RDMH08	(PSI5_RDM0_8_H)

/** \brief  640, Receive Data Memory Low */
#define PSI5_RDM0_8_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005640u)

/** Alias (User Manual Name) for PSI5_RDM0_8_L.
* To use register names with standard convension, please use PSI5_RDM0_8_L.
*/
#define	PSI5_RDML08	(PSI5_RDM0_8_L)

/** \brief  64C, Receive Data Memory High */
#define PSI5_RDM0_9_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000564Cu)

/** Alias (User Manual Name) for PSI5_RDM0_9_H.
* To use register names with standard convension, please use PSI5_RDM0_9_H.
*/
#define	PSI5_RDMH09	(PSI5_RDM0_9_H)

/** \brief  648, Receive Data Memory Low */
#define PSI5_RDM0_9_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005648u)

/** Alias (User Manual Name) for PSI5_RDM0_9_L.
* To use register names with standard convension, please use PSI5_RDM0_9_L.
*/
#define	PSI5_RDML09	(PSI5_RDM0_9_L)

/** \brief  704, Receive Data Memory High */
#define PSI5_RDM1_0_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005704u)

/** Alias (User Manual Name) for PSI5_RDM1_0_H.
* To use register names with standard convension, please use PSI5_RDM1_0_H.
*/
#define	PSI5_RDMH10	(PSI5_RDM1_0_H)

/** \brief  700, Receive Data Memory Low */
#define PSI5_RDM1_0_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005700u)

/** Alias (User Manual Name) for PSI5_RDM1_0_L.
* To use register names with standard convension, please use PSI5_RDM1_0_L.
*/
#define	PSI5_RDML10	(PSI5_RDM1_0_L)

/** \brief  754, Receive Data Memory High */
#define PSI5_RDM1_10_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005754u)

/** Alias (User Manual Name) for PSI5_RDM1_10_H.
* To use register names with standard convension, please use PSI5_RDM1_10_H.
*/
#define	PSI5_RDMH110	(PSI5_RDM1_10_H)

/** \brief  750, Receive Data Memory Low */
#define PSI5_RDM1_10_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005750u)

/** Alias (User Manual Name) for PSI5_RDM1_10_L.
* To use register names with standard convension, please use PSI5_RDM1_10_L.
*/
#define	PSI5_RDML110	(PSI5_RDM1_10_L)

/** \brief  75C, Receive Data Memory High */
#define PSI5_RDM1_11_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000575Cu)

/** Alias (User Manual Name) for PSI5_RDM1_11_H.
* To use register names with standard convension, please use PSI5_RDM1_11_H.
*/
#define	PSI5_RDMH111	(PSI5_RDM1_11_H)

/** \brief  758, Receive Data Memory Low */
#define PSI5_RDM1_11_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005758u)

/** Alias (User Manual Name) for PSI5_RDM1_11_L.
* To use register names with standard convension, please use PSI5_RDM1_11_L.
*/
#define	PSI5_RDML111	(PSI5_RDM1_11_L)

/** \brief  764, Receive Data Memory High */
#define PSI5_RDM1_12_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005764u)

/** Alias (User Manual Name) for PSI5_RDM1_12_H.
* To use register names with standard convension, please use PSI5_RDM1_12_H.
*/
#define	PSI5_RDMH112	(PSI5_RDM1_12_H)

/** \brief  760, Receive Data Memory Low */
#define PSI5_RDM1_12_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005760u)

/** Alias (User Manual Name) for PSI5_RDM1_12_L.
* To use register names with standard convension, please use PSI5_RDM1_12_L.
*/
#define	PSI5_RDML112	(PSI5_RDM1_12_L)

/** \brief  76C, Receive Data Memory High */
#define PSI5_RDM1_13_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000576Cu)

/** Alias (User Manual Name) for PSI5_RDM1_13_H.
* To use register names with standard convension, please use PSI5_RDM1_13_H.
*/
#define	PSI5_RDMH113	(PSI5_RDM1_13_H)

/** \brief  768, Receive Data Memory Low */
#define PSI5_RDM1_13_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005768u)

/** Alias (User Manual Name) for PSI5_RDM1_13_L.
* To use register names with standard convension, please use PSI5_RDM1_13_L.
*/
#define	PSI5_RDML113	(PSI5_RDM1_13_L)

/** \brief  774, Receive Data Memory High */
#define PSI5_RDM1_14_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005774u)

/** Alias (User Manual Name) for PSI5_RDM1_14_H.
* To use register names with standard convension, please use PSI5_RDM1_14_H.
*/
#define	PSI5_RDMH114	(PSI5_RDM1_14_H)

/** \brief  770, Receive Data Memory Low */
#define PSI5_RDM1_14_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005770u)

/** Alias (User Manual Name) for PSI5_RDM1_14_L.
* To use register names with standard convension, please use PSI5_RDM1_14_L.
*/
#define	PSI5_RDML114	(PSI5_RDM1_14_L)

/** \brief  77C, Receive Data Memory High */
#define PSI5_RDM1_15_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000577Cu)

/** Alias (User Manual Name) for PSI5_RDM1_15_H.
* To use register names with standard convension, please use PSI5_RDM1_15_H.
*/
#define	PSI5_RDMH115	(PSI5_RDM1_15_H)

/** \brief  778, Receive Data Memory Low */
#define PSI5_RDM1_15_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005778u)

/** Alias (User Manual Name) for PSI5_RDM1_15_L.
* To use register names with standard convension, please use PSI5_RDM1_15_L.
*/
#define	PSI5_RDML115	(PSI5_RDM1_15_L)

/** \brief  784, Receive Data Memory High */
#define PSI5_RDM1_16_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005784u)

/** Alias (User Manual Name) for PSI5_RDM1_16_H.
* To use register names with standard convension, please use PSI5_RDM1_16_H.
*/
#define	PSI5_RDMH116	(PSI5_RDM1_16_H)

/** \brief  780, Receive Data Memory Low */
#define PSI5_RDM1_16_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005780u)

/** Alias (User Manual Name) for PSI5_RDM1_16_L.
* To use register names with standard convension, please use PSI5_RDM1_16_L.
*/
#define	PSI5_RDML116	(PSI5_RDM1_16_L)

/** \brief  78C, Receive Data Memory High */
#define PSI5_RDM1_17_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000578Cu)

/** Alias (User Manual Name) for PSI5_RDM1_17_H.
* To use register names with standard convension, please use PSI5_RDM1_17_H.
*/
#define	PSI5_RDMH117	(PSI5_RDM1_17_H)

/** \brief  788, Receive Data Memory Low */
#define PSI5_RDM1_17_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005788u)

/** Alias (User Manual Name) for PSI5_RDM1_17_L.
* To use register names with standard convension, please use PSI5_RDM1_17_L.
*/
#define	PSI5_RDML117	(PSI5_RDM1_17_L)

/** \brief  794, Receive Data Memory High */
#define PSI5_RDM1_18_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005794u)

/** Alias (User Manual Name) for PSI5_RDM1_18_H.
* To use register names with standard convension, please use PSI5_RDM1_18_H.
*/
#define	PSI5_RDMH118	(PSI5_RDM1_18_H)

/** \brief  790, Receive Data Memory Low */
#define PSI5_RDM1_18_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005790u)

/** Alias (User Manual Name) for PSI5_RDM1_18_L.
* To use register names with standard convension, please use PSI5_RDM1_18_L.
*/
#define	PSI5_RDML118	(PSI5_RDM1_18_L)

/** \brief  79C, Receive Data Memory High */
#define PSI5_RDM1_19_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000579Cu)

/** Alias (User Manual Name) for PSI5_RDM1_19_H.
* To use register names with standard convension, please use PSI5_RDM1_19_H.
*/
#define	PSI5_RDMH119	(PSI5_RDM1_19_H)

/** \brief  798, Receive Data Memory Low */
#define PSI5_RDM1_19_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005798u)

/** Alias (User Manual Name) for PSI5_RDM1_19_L.
* To use register names with standard convension, please use PSI5_RDM1_19_L.
*/
#define	PSI5_RDML119	(PSI5_RDM1_19_L)

/** \brief  70C, Receive Data Memory High */
#define PSI5_RDM1_1_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000570Cu)

/** Alias (User Manual Name) for PSI5_RDM1_1_H.
* To use register names with standard convension, please use PSI5_RDM1_1_H.
*/
#define	PSI5_RDMH11	(PSI5_RDM1_1_H)

/** \brief  708, Receive Data Memory Low */
#define PSI5_RDM1_1_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005708u)

/** Alias (User Manual Name) for PSI5_RDM1_1_L.
* To use register names with standard convension, please use PSI5_RDM1_1_L.
*/
#define	PSI5_RDML11	(PSI5_RDM1_1_L)

/** \brief  7A4, Receive Data Memory High */
#define PSI5_RDM1_20_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057A4u)

/** Alias (User Manual Name) for PSI5_RDM1_20_H.
* To use register names with standard convension, please use PSI5_RDM1_20_H.
*/
#define	PSI5_RDMH120	(PSI5_RDM1_20_H)

/** \brief  7A0, Receive Data Memory Low */
#define PSI5_RDM1_20_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057A0u)

/** Alias (User Manual Name) for PSI5_RDM1_20_L.
* To use register names with standard convension, please use PSI5_RDM1_20_L.
*/
#define	PSI5_RDML120	(PSI5_RDM1_20_L)

/** \brief  7AC, Receive Data Memory High */
#define PSI5_RDM1_21_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057ACu)

/** Alias (User Manual Name) for PSI5_RDM1_21_H.
* To use register names with standard convension, please use PSI5_RDM1_21_H.
*/
#define	PSI5_RDMH121	(PSI5_RDM1_21_H)

/** \brief  7A8, Receive Data Memory Low */
#define PSI5_RDM1_21_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057A8u)

/** Alias (User Manual Name) for PSI5_RDM1_21_L.
* To use register names with standard convension, please use PSI5_RDM1_21_L.
*/
#define	PSI5_RDML121	(PSI5_RDM1_21_L)

/** \brief  7B4, Receive Data Memory High */
#define PSI5_RDM1_22_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057B4u)

/** Alias (User Manual Name) for PSI5_RDM1_22_H.
* To use register names with standard convension, please use PSI5_RDM1_22_H.
*/
#define	PSI5_RDMH122	(PSI5_RDM1_22_H)

/** \brief  7B0, Receive Data Memory Low */
#define PSI5_RDM1_22_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057B0u)

/** Alias (User Manual Name) for PSI5_RDM1_22_L.
* To use register names with standard convension, please use PSI5_RDM1_22_L.
*/
#define	PSI5_RDML122	(PSI5_RDM1_22_L)

/** \brief  7BC, Receive Data Memory High */
#define PSI5_RDM1_23_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057BCu)

/** Alias (User Manual Name) for PSI5_RDM1_23_H.
* To use register names with standard convension, please use PSI5_RDM1_23_H.
*/
#define	PSI5_RDMH123	(PSI5_RDM1_23_H)

/** \brief  7B8, Receive Data Memory Low */
#define PSI5_RDM1_23_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057B8u)

/** Alias (User Manual Name) for PSI5_RDM1_23_L.
* To use register names with standard convension, please use PSI5_RDM1_23_L.
*/
#define	PSI5_RDML123	(PSI5_RDM1_23_L)

/** \brief  7C4, Receive Data Memory High */
#define PSI5_RDM1_24_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057C4u)

/** Alias (User Manual Name) for PSI5_RDM1_24_H.
* To use register names with standard convension, please use PSI5_RDM1_24_H.
*/
#define	PSI5_RDMH124	(PSI5_RDM1_24_H)

/** \brief  7C0, Receive Data Memory Low */
#define PSI5_RDM1_24_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057C0u)

/** Alias (User Manual Name) for PSI5_RDM1_24_L.
* To use register names with standard convension, please use PSI5_RDM1_24_L.
*/
#define	PSI5_RDML124	(PSI5_RDM1_24_L)

/** \brief  7CC, Receive Data Memory High */
#define PSI5_RDM1_25_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057CCu)

/** Alias (User Manual Name) for PSI5_RDM1_25_H.
* To use register names with standard convension, please use PSI5_RDM1_25_H.
*/
#define	PSI5_RDMH125	(PSI5_RDM1_25_H)

/** \brief  7C8, Receive Data Memory Low */
#define PSI5_RDM1_25_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057C8u)

/** Alias (User Manual Name) for PSI5_RDM1_25_L.
* To use register names with standard convension, please use PSI5_RDM1_25_L.
*/
#define	PSI5_RDML125	(PSI5_RDM1_25_L)

/** \brief  7D4, Receive Data Memory High */
#define PSI5_RDM1_26_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057D4u)

/** Alias (User Manual Name) for PSI5_RDM1_26_H.
* To use register names with standard convension, please use PSI5_RDM1_26_H.
*/
#define	PSI5_RDMH126	(PSI5_RDM1_26_H)

/** \brief  7D0, Receive Data Memory Low */
#define PSI5_RDM1_26_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057D0u)

/** Alias (User Manual Name) for PSI5_RDM1_26_L.
* To use register names with standard convension, please use PSI5_RDM1_26_L.
*/
#define	PSI5_RDML126	(PSI5_RDM1_26_L)

/** \brief  7DC, Receive Data Memory High */
#define PSI5_RDM1_27_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057DCu)

/** Alias (User Manual Name) for PSI5_RDM1_27_H.
* To use register names with standard convension, please use PSI5_RDM1_27_H.
*/
#define	PSI5_RDMH127	(PSI5_RDM1_27_H)

/** \brief  7D8, Receive Data Memory Low */
#define PSI5_RDM1_27_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057D8u)

/** Alias (User Manual Name) for PSI5_RDM1_27_L.
* To use register names with standard convension, please use PSI5_RDM1_27_L.
*/
#define	PSI5_RDML127	(PSI5_RDM1_27_L)

/** \brief  7E4, Receive Data Memory High */
#define PSI5_RDM1_28_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057E4u)

/** Alias (User Manual Name) for PSI5_RDM1_28_H.
* To use register names with standard convension, please use PSI5_RDM1_28_H.
*/
#define	PSI5_RDMH128	(PSI5_RDM1_28_H)

/** \brief  7E0, Receive Data Memory Low */
#define PSI5_RDM1_28_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057E0u)

/** Alias (User Manual Name) for PSI5_RDM1_28_L.
* To use register names with standard convension, please use PSI5_RDM1_28_L.
*/
#define	PSI5_RDML128	(PSI5_RDM1_28_L)

/** \brief  7EC, Receive Data Memory High */
#define PSI5_RDM1_29_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057ECu)

/** Alias (User Manual Name) for PSI5_RDM1_29_H.
* To use register names with standard convension, please use PSI5_RDM1_29_H.
*/
#define	PSI5_RDMH129	(PSI5_RDM1_29_H)

/** \brief  7E8, Receive Data Memory Low */
#define PSI5_RDM1_29_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057E8u)

/** Alias (User Manual Name) for PSI5_RDM1_29_L.
* To use register names with standard convension, please use PSI5_RDM1_29_L.
*/
#define	PSI5_RDML129	(PSI5_RDM1_29_L)

/** \brief  714, Receive Data Memory High */
#define PSI5_RDM1_2_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005714u)

/** Alias (User Manual Name) for PSI5_RDM1_2_H.
* To use register names with standard convension, please use PSI5_RDM1_2_H.
*/
#define	PSI5_RDMH12	(PSI5_RDM1_2_H)

/** \brief  710, Receive Data Memory Low */
#define PSI5_RDM1_2_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005710u)

/** Alias (User Manual Name) for PSI5_RDM1_2_L.
* To use register names with standard convension, please use PSI5_RDM1_2_L.
*/
#define	PSI5_RDML12	(PSI5_RDM1_2_L)

/** \brief  7F4, Receive Data Memory High */
#define PSI5_RDM1_30_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057F4u)

/** Alias (User Manual Name) for PSI5_RDM1_30_H.
* To use register names with standard convension, please use PSI5_RDM1_30_H.
*/
#define	PSI5_RDMH130	(PSI5_RDM1_30_H)

/** \brief  7F0, Receive Data Memory Low */
#define PSI5_RDM1_30_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057F0u)

/** Alias (User Manual Name) for PSI5_RDM1_30_L.
* To use register names with standard convension, please use PSI5_RDM1_30_L.
*/
#define	PSI5_RDML130	(PSI5_RDM1_30_L)

/** \brief  7FC, Receive Data Memory High */
#define PSI5_RDM1_31_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00057FCu)

/** Alias (User Manual Name) for PSI5_RDM1_31_H.
* To use register names with standard convension, please use PSI5_RDM1_31_H.
*/
#define	PSI5_RDMH131	(PSI5_RDM1_31_H)

/** \brief  7F8, Receive Data Memory Low */
#define PSI5_RDM1_31_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00057F8u)

/** Alias (User Manual Name) for PSI5_RDM1_31_L.
* To use register names with standard convension, please use PSI5_RDM1_31_L.
*/
#define	PSI5_RDML131	(PSI5_RDM1_31_L)

/** \brief  71C, Receive Data Memory High */
#define PSI5_RDM1_3_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000571Cu)

/** Alias (User Manual Name) for PSI5_RDM1_3_H.
* To use register names with standard convension, please use PSI5_RDM1_3_H.
*/
#define	PSI5_RDMH13	(PSI5_RDM1_3_H)

/** \brief  718, Receive Data Memory Low */
#define PSI5_RDM1_3_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005718u)

/** Alias (User Manual Name) for PSI5_RDM1_3_L.
* To use register names with standard convension, please use PSI5_RDM1_3_L.
*/
#define	PSI5_RDML13	(PSI5_RDM1_3_L)

/** \brief  724, Receive Data Memory High */
#define PSI5_RDM1_4_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005724u)

/** Alias (User Manual Name) for PSI5_RDM1_4_H.
* To use register names with standard convension, please use PSI5_RDM1_4_H.
*/
#define	PSI5_RDMH14	(PSI5_RDM1_4_H)

/** \brief  720, Receive Data Memory Low */
#define PSI5_RDM1_4_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005720u)

/** Alias (User Manual Name) for PSI5_RDM1_4_L.
* To use register names with standard convension, please use PSI5_RDM1_4_L.
*/
#define	PSI5_RDML14	(PSI5_RDM1_4_L)

/** \brief  72C, Receive Data Memory High */
#define PSI5_RDM1_5_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000572Cu)

/** Alias (User Manual Name) for PSI5_RDM1_5_H.
* To use register names with standard convension, please use PSI5_RDM1_5_H.
*/
#define	PSI5_RDMH15	(PSI5_RDM1_5_H)

/** \brief  728, Receive Data Memory Low */
#define PSI5_RDM1_5_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005728u)

/** Alias (User Manual Name) for PSI5_RDM1_5_L.
* To use register names with standard convension, please use PSI5_RDM1_5_L.
*/
#define	PSI5_RDML15	(PSI5_RDM1_5_L)

/** \brief  734, Receive Data Memory High */
#define PSI5_RDM1_6_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005734u)

/** Alias (User Manual Name) for PSI5_RDM1_6_H.
* To use register names with standard convension, please use PSI5_RDM1_6_H.
*/
#define	PSI5_RDMH16	(PSI5_RDM1_6_H)

/** \brief  730, Receive Data Memory Low */
#define PSI5_RDM1_6_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005730u)

/** Alias (User Manual Name) for PSI5_RDM1_6_L.
* To use register names with standard convension, please use PSI5_RDM1_6_L.
*/
#define	PSI5_RDML16	(PSI5_RDM1_6_L)

/** \brief  73C, Receive Data Memory High */
#define PSI5_RDM1_7_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000573Cu)

/** Alias (User Manual Name) for PSI5_RDM1_7_H.
* To use register names with standard convension, please use PSI5_RDM1_7_H.
*/
#define	PSI5_RDMH17	(PSI5_RDM1_7_H)

/** \brief  738, Receive Data Memory Low */
#define PSI5_RDM1_7_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005738u)

/** Alias (User Manual Name) for PSI5_RDM1_7_L.
* To use register names with standard convension, please use PSI5_RDM1_7_L.
*/
#define	PSI5_RDML17	(PSI5_RDM1_7_L)

/** \brief  744, Receive Data Memory High */
#define PSI5_RDM1_8_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005744u)

/** Alias (User Manual Name) for PSI5_RDM1_8_H.
* To use register names with standard convension, please use PSI5_RDM1_8_H.
*/
#define	PSI5_RDMH18	(PSI5_RDM1_8_H)

/** \brief  740, Receive Data Memory Low */
#define PSI5_RDM1_8_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005740u)

/** Alias (User Manual Name) for PSI5_RDM1_8_L.
* To use register names with standard convension, please use PSI5_RDM1_8_L.
*/
#define	PSI5_RDML18	(PSI5_RDM1_8_L)

/** \brief  74C, Receive Data Memory High */
#define PSI5_RDM1_9_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000574Cu)

/** Alias (User Manual Name) for PSI5_RDM1_9_H.
* To use register names with standard convension, please use PSI5_RDM1_9_H.
*/
#define	PSI5_RDMH19	(PSI5_RDM1_9_H)

/** \brief  748, Receive Data Memory Low */
#define PSI5_RDM1_9_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005748u)

/** Alias (User Manual Name) for PSI5_RDM1_9_L.
* To use register names with standard convension, please use PSI5_RDM1_9_L.
*/
#define	PSI5_RDML19	(PSI5_RDM1_9_L)

/** \brief  804, Receive Data Memory High */
#define PSI5_RDM2_0_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005804u)

/** Alias (User Manual Name) for PSI5_RDM2_0_H.
* To use register names with standard convension, please use PSI5_RDM2_0_H.
*/
#define	PSI5_RDMH20	(PSI5_RDM2_0_H)

/** \brief  800, Receive Data Memory Low */
#define PSI5_RDM2_0_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005800u)

/** Alias (User Manual Name) for PSI5_RDM2_0_L.
* To use register names with standard convension, please use PSI5_RDM2_0_L.
*/
#define	PSI5_RDML20	(PSI5_RDM2_0_L)

/** \brief  854, Receive Data Memory High */
#define PSI5_RDM2_10_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005854u)

/** Alias (User Manual Name) for PSI5_RDM2_10_H.
* To use register names with standard convension, please use PSI5_RDM2_10_H.
*/
#define	PSI5_RDMH210	(PSI5_RDM2_10_H)

/** \brief  850, Receive Data Memory Low */
#define PSI5_RDM2_10_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005850u)

/** Alias (User Manual Name) for PSI5_RDM2_10_L.
* To use register names with standard convension, please use PSI5_RDM2_10_L.
*/
#define	PSI5_RDML210	(PSI5_RDM2_10_L)

/** \brief  85C, Receive Data Memory High */
#define PSI5_RDM2_11_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000585Cu)

/** Alias (User Manual Name) for PSI5_RDM2_11_H.
* To use register names with standard convension, please use PSI5_RDM2_11_H.
*/
#define	PSI5_RDMH211	(PSI5_RDM2_11_H)

/** \brief  858, Receive Data Memory Low */
#define PSI5_RDM2_11_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005858u)

/** Alias (User Manual Name) for PSI5_RDM2_11_L.
* To use register names with standard convension, please use PSI5_RDM2_11_L.
*/
#define	PSI5_RDML211	(PSI5_RDM2_11_L)

/** \brief  864, Receive Data Memory High */
#define PSI5_RDM2_12_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005864u)

/** Alias (User Manual Name) for PSI5_RDM2_12_H.
* To use register names with standard convension, please use PSI5_RDM2_12_H.
*/
#define	PSI5_RDMH212	(PSI5_RDM2_12_H)

/** \brief  860, Receive Data Memory Low */
#define PSI5_RDM2_12_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005860u)

/** Alias (User Manual Name) for PSI5_RDM2_12_L.
* To use register names with standard convension, please use PSI5_RDM2_12_L.
*/
#define	PSI5_RDML212	(PSI5_RDM2_12_L)

/** \brief  86C, Receive Data Memory High */
#define PSI5_RDM2_13_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000586Cu)

/** Alias (User Manual Name) for PSI5_RDM2_13_H.
* To use register names with standard convension, please use PSI5_RDM2_13_H.
*/
#define	PSI5_RDMH213	(PSI5_RDM2_13_H)

/** \brief  868, Receive Data Memory Low */
#define PSI5_RDM2_13_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005868u)

/** Alias (User Manual Name) for PSI5_RDM2_13_L.
* To use register names with standard convension, please use PSI5_RDM2_13_L.
*/
#define	PSI5_RDML213	(PSI5_RDM2_13_L)

/** \brief  874, Receive Data Memory High */
#define PSI5_RDM2_14_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005874u)

/** Alias (User Manual Name) for PSI5_RDM2_14_H.
* To use register names with standard convension, please use PSI5_RDM2_14_H.
*/
#define	PSI5_RDMH214	(PSI5_RDM2_14_H)

/** \brief  870, Receive Data Memory Low */
#define PSI5_RDM2_14_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005870u)

/** Alias (User Manual Name) for PSI5_RDM2_14_L.
* To use register names with standard convension, please use PSI5_RDM2_14_L.
*/
#define	PSI5_RDML214	(PSI5_RDM2_14_L)

/** \brief  87C, Receive Data Memory High */
#define PSI5_RDM2_15_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000587Cu)

/** Alias (User Manual Name) for PSI5_RDM2_15_H.
* To use register names with standard convension, please use PSI5_RDM2_15_H.
*/
#define	PSI5_RDMH215	(PSI5_RDM2_15_H)

/** \brief  878, Receive Data Memory Low */
#define PSI5_RDM2_15_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005878u)

/** Alias (User Manual Name) for PSI5_RDM2_15_L.
* To use register names with standard convension, please use PSI5_RDM2_15_L.
*/
#define	PSI5_RDML215	(PSI5_RDM2_15_L)

/** \brief  884, Receive Data Memory High */
#define PSI5_RDM2_16_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005884u)

/** Alias (User Manual Name) for PSI5_RDM2_16_H.
* To use register names with standard convension, please use PSI5_RDM2_16_H.
*/
#define	PSI5_RDMH216	(PSI5_RDM2_16_H)

/** \brief  880, Receive Data Memory Low */
#define PSI5_RDM2_16_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005880u)

/** Alias (User Manual Name) for PSI5_RDM2_16_L.
* To use register names with standard convension, please use PSI5_RDM2_16_L.
*/
#define	PSI5_RDML216	(PSI5_RDM2_16_L)

/** \brief  88C, Receive Data Memory High */
#define PSI5_RDM2_17_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000588Cu)

/** Alias (User Manual Name) for PSI5_RDM2_17_H.
* To use register names with standard convension, please use PSI5_RDM2_17_H.
*/
#define	PSI5_RDMH217	(PSI5_RDM2_17_H)

/** \brief  888, Receive Data Memory Low */
#define PSI5_RDM2_17_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005888u)

/** Alias (User Manual Name) for PSI5_RDM2_17_L.
* To use register names with standard convension, please use PSI5_RDM2_17_L.
*/
#define	PSI5_RDML217	(PSI5_RDM2_17_L)

/** \brief  894, Receive Data Memory High */
#define PSI5_RDM2_18_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005894u)

/** Alias (User Manual Name) for PSI5_RDM2_18_H.
* To use register names with standard convension, please use PSI5_RDM2_18_H.
*/
#define	PSI5_RDMH218	(PSI5_RDM2_18_H)

/** \brief  890, Receive Data Memory Low */
#define PSI5_RDM2_18_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005890u)

/** Alias (User Manual Name) for PSI5_RDM2_18_L.
* To use register names with standard convension, please use PSI5_RDM2_18_L.
*/
#define	PSI5_RDML218	(PSI5_RDM2_18_L)

/** \brief  89C, Receive Data Memory High */
#define PSI5_RDM2_19_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000589Cu)

/** Alias (User Manual Name) for PSI5_RDM2_19_H.
* To use register names with standard convension, please use PSI5_RDM2_19_H.
*/
#define	PSI5_RDMH219	(PSI5_RDM2_19_H)

/** \brief  898, Receive Data Memory Low */
#define PSI5_RDM2_19_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005898u)

/** Alias (User Manual Name) for PSI5_RDM2_19_L.
* To use register names with standard convension, please use PSI5_RDM2_19_L.
*/
#define	PSI5_RDML219	(PSI5_RDM2_19_L)

/** \brief  80C, Receive Data Memory High */
#define PSI5_RDM2_1_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000580Cu)

/** Alias (User Manual Name) for PSI5_RDM2_1_H.
* To use register names with standard convension, please use PSI5_RDM2_1_H.
*/
#define	PSI5_RDMH21	(PSI5_RDM2_1_H)

/** \brief  808, Receive Data Memory Low */
#define PSI5_RDM2_1_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005808u)

/** Alias (User Manual Name) for PSI5_RDM2_1_L.
* To use register names with standard convension, please use PSI5_RDM2_1_L.
*/
#define	PSI5_RDML21	(PSI5_RDM2_1_L)

/** \brief  8A4, Receive Data Memory High */
#define PSI5_RDM2_20_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058A4u)

/** Alias (User Manual Name) for PSI5_RDM2_20_H.
* To use register names with standard convension, please use PSI5_RDM2_20_H.
*/
#define	PSI5_RDMH220	(PSI5_RDM2_20_H)

/** \brief  8A0, Receive Data Memory Low */
#define PSI5_RDM2_20_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058A0u)

/** Alias (User Manual Name) for PSI5_RDM2_20_L.
* To use register names with standard convension, please use PSI5_RDM2_20_L.
*/
#define	PSI5_RDML220	(PSI5_RDM2_20_L)

/** \brief  8AC, Receive Data Memory High */
#define PSI5_RDM2_21_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058ACu)

/** Alias (User Manual Name) for PSI5_RDM2_21_H.
* To use register names with standard convension, please use PSI5_RDM2_21_H.
*/
#define	PSI5_RDMH221	(PSI5_RDM2_21_H)

/** \brief  8A8, Receive Data Memory Low */
#define PSI5_RDM2_21_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058A8u)

/** Alias (User Manual Name) for PSI5_RDM2_21_L.
* To use register names with standard convension, please use PSI5_RDM2_21_L.
*/
#define	PSI5_RDML221	(PSI5_RDM2_21_L)

/** \brief  8B4, Receive Data Memory High */
#define PSI5_RDM2_22_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058B4u)

/** Alias (User Manual Name) for PSI5_RDM2_22_H.
* To use register names with standard convension, please use PSI5_RDM2_22_H.
*/
#define	PSI5_RDMH222	(PSI5_RDM2_22_H)

/** \brief  8B0, Receive Data Memory Low */
#define PSI5_RDM2_22_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058B0u)

/** Alias (User Manual Name) for PSI5_RDM2_22_L.
* To use register names with standard convension, please use PSI5_RDM2_22_L.
*/
#define	PSI5_RDML222	(PSI5_RDM2_22_L)

/** \brief  8BC, Receive Data Memory High */
#define PSI5_RDM2_23_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058BCu)

/** Alias (User Manual Name) for PSI5_RDM2_23_H.
* To use register names with standard convension, please use PSI5_RDM2_23_H.
*/
#define	PSI5_RDMH223	(PSI5_RDM2_23_H)

/** \brief  8B8, Receive Data Memory Low */
#define PSI5_RDM2_23_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058B8u)

/** Alias (User Manual Name) for PSI5_RDM2_23_L.
* To use register names with standard convension, please use PSI5_RDM2_23_L.
*/
#define	PSI5_RDML223	(PSI5_RDM2_23_L)

/** \brief  8C4, Receive Data Memory High */
#define PSI5_RDM2_24_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058C4u)

/** Alias (User Manual Name) for PSI5_RDM2_24_H.
* To use register names with standard convension, please use PSI5_RDM2_24_H.
*/
#define	PSI5_RDMH224	(PSI5_RDM2_24_H)

/** \brief  8C0, Receive Data Memory Low */
#define PSI5_RDM2_24_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058C0u)

/** Alias (User Manual Name) for PSI5_RDM2_24_L.
* To use register names with standard convension, please use PSI5_RDM2_24_L.
*/
#define	PSI5_RDML224	(PSI5_RDM2_24_L)

/** \brief  8CC, Receive Data Memory High */
#define PSI5_RDM2_25_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058CCu)

/** Alias (User Manual Name) for PSI5_RDM2_25_H.
* To use register names with standard convension, please use PSI5_RDM2_25_H.
*/
#define	PSI5_RDMH225	(PSI5_RDM2_25_H)

/** \brief  8C8, Receive Data Memory Low */
#define PSI5_RDM2_25_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058C8u)

/** Alias (User Manual Name) for PSI5_RDM2_25_L.
* To use register names with standard convension, please use PSI5_RDM2_25_L.
*/
#define	PSI5_RDML225	(PSI5_RDM2_25_L)

/** \brief  8D4, Receive Data Memory High */
#define PSI5_RDM2_26_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058D4u)

/** Alias (User Manual Name) for PSI5_RDM2_26_H.
* To use register names with standard convension, please use PSI5_RDM2_26_H.
*/
#define	PSI5_RDMH226	(PSI5_RDM2_26_H)

/** \brief  8D0, Receive Data Memory Low */
#define PSI5_RDM2_26_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058D0u)

/** Alias (User Manual Name) for PSI5_RDM2_26_L.
* To use register names with standard convension, please use PSI5_RDM2_26_L.
*/
#define	PSI5_RDML226	(PSI5_RDM2_26_L)

/** \brief  8DC, Receive Data Memory High */
#define PSI5_RDM2_27_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058DCu)

/** Alias (User Manual Name) for PSI5_RDM2_27_H.
* To use register names with standard convension, please use PSI5_RDM2_27_H.
*/
#define	PSI5_RDMH227	(PSI5_RDM2_27_H)

/** \brief  8D8, Receive Data Memory Low */
#define PSI5_RDM2_27_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058D8u)

/** Alias (User Manual Name) for PSI5_RDM2_27_L.
* To use register names with standard convension, please use PSI5_RDM2_27_L.
*/
#define	PSI5_RDML227	(PSI5_RDM2_27_L)

/** \brief  8E4, Receive Data Memory High */
#define PSI5_RDM2_28_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058E4u)

/** Alias (User Manual Name) for PSI5_RDM2_28_H.
* To use register names with standard convension, please use PSI5_RDM2_28_H.
*/
#define	PSI5_RDMH228	(PSI5_RDM2_28_H)

/** \brief  8E0, Receive Data Memory Low */
#define PSI5_RDM2_28_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058E0u)

/** Alias (User Manual Name) for PSI5_RDM2_28_L.
* To use register names with standard convension, please use PSI5_RDM2_28_L.
*/
#define	PSI5_RDML228	(PSI5_RDM2_28_L)

/** \brief  8EC, Receive Data Memory High */
#define PSI5_RDM2_29_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058ECu)

/** Alias (User Manual Name) for PSI5_RDM2_29_H.
* To use register names with standard convension, please use PSI5_RDM2_29_H.
*/
#define	PSI5_RDMH229	(PSI5_RDM2_29_H)

/** \brief  8E8, Receive Data Memory Low */
#define PSI5_RDM2_29_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058E8u)

/** Alias (User Manual Name) for PSI5_RDM2_29_L.
* To use register names with standard convension, please use PSI5_RDM2_29_L.
*/
#define	PSI5_RDML229	(PSI5_RDM2_29_L)

/** \brief  814, Receive Data Memory High */
#define PSI5_RDM2_2_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005814u)

/** Alias (User Manual Name) for PSI5_RDM2_2_H.
* To use register names with standard convension, please use PSI5_RDM2_2_H.
*/
#define	PSI5_RDMH22	(PSI5_RDM2_2_H)

/** \brief  810, Receive Data Memory Low */
#define PSI5_RDM2_2_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005810u)

/** Alias (User Manual Name) for PSI5_RDM2_2_L.
* To use register names with standard convension, please use PSI5_RDM2_2_L.
*/
#define	PSI5_RDML22	(PSI5_RDM2_2_L)

/** \brief  8F4, Receive Data Memory High */
#define PSI5_RDM2_30_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058F4u)

/** Alias (User Manual Name) for PSI5_RDM2_30_H.
* To use register names with standard convension, please use PSI5_RDM2_30_H.
*/
#define	PSI5_RDMH230	(PSI5_RDM2_30_H)

/** \brief  8F0, Receive Data Memory Low */
#define PSI5_RDM2_30_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058F0u)

/** Alias (User Manual Name) for PSI5_RDM2_30_L.
* To use register names with standard convension, please use PSI5_RDM2_30_L.
*/
#define	PSI5_RDML230	(PSI5_RDM2_30_L)

/** \brief  8FC, Receive Data Memory High */
#define PSI5_RDM2_31_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00058FCu)

/** Alias (User Manual Name) for PSI5_RDM2_31_H.
* To use register names with standard convension, please use PSI5_RDM2_31_H.
*/
#define	PSI5_RDMH231	(PSI5_RDM2_31_H)

/** \brief  8F8, Receive Data Memory Low */
#define PSI5_RDM2_31_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00058F8u)

/** Alias (User Manual Name) for PSI5_RDM2_31_L.
* To use register names with standard convension, please use PSI5_RDM2_31_L.
*/
#define	PSI5_RDML231	(PSI5_RDM2_31_L)

/** \brief  81C, Receive Data Memory High */
#define PSI5_RDM2_3_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000581Cu)

/** Alias (User Manual Name) for PSI5_RDM2_3_H.
* To use register names with standard convension, please use PSI5_RDM2_3_H.
*/
#define	PSI5_RDMH23	(PSI5_RDM2_3_H)

/** \brief  818, Receive Data Memory Low */
#define PSI5_RDM2_3_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005818u)

/** Alias (User Manual Name) for PSI5_RDM2_3_L.
* To use register names with standard convension, please use PSI5_RDM2_3_L.
*/
#define	PSI5_RDML23	(PSI5_RDM2_3_L)

/** \brief  824, Receive Data Memory High */
#define PSI5_RDM2_4_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005824u)

/** Alias (User Manual Name) for PSI5_RDM2_4_H.
* To use register names with standard convension, please use PSI5_RDM2_4_H.
*/
#define	PSI5_RDMH24	(PSI5_RDM2_4_H)

/** \brief  820, Receive Data Memory Low */
#define PSI5_RDM2_4_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005820u)

/** Alias (User Manual Name) for PSI5_RDM2_4_L.
* To use register names with standard convension, please use PSI5_RDM2_4_L.
*/
#define	PSI5_RDML24	(PSI5_RDM2_4_L)

/** \brief  82C, Receive Data Memory High */
#define PSI5_RDM2_5_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000582Cu)

/** Alias (User Manual Name) for PSI5_RDM2_5_H.
* To use register names with standard convension, please use PSI5_RDM2_5_H.
*/
#define	PSI5_RDMH25	(PSI5_RDM2_5_H)

/** \brief  828, Receive Data Memory Low */
#define PSI5_RDM2_5_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005828u)

/** Alias (User Manual Name) for PSI5_RDM2_5_L.
* To use register names with standard convension, please use PSI5_RDM2_5_L.
*/
#define	PSI5_RDML25	(PSI5_RDM2_5_L)

/** \brief  834, Receive Data Memory High */
#define PSI5_RDM2_6_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005834u)

/** Alias (User Manual Name) for PSI5_RDM2_6_H.
* To use register names with standard convension, please use PSI5_RDM2_6_H.
*/
#define	PSI5_RDMH26	(PSI5_RDM2_6_H)

/** \brief  830, Receive Data Memory Low */
#define PSI5_RDM2_6_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005830u)

/** Alias (User Manual Name) for PSI5_RDM2_6_L.
* To use register names with standard convension, please use PSI5_RDM2_6_L.
*/
#define	PSI5_RDML26	(PSI5_RDM2_6_L)

/** \brief  83C, Receive Data Memory High */
#define PSI5_RDM2_7_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000583Cu)

/** Alias (User Manual Name) for PSI5_RDM2_7_H.
* To use register names with standard convension, please use PSI5_RDM2_7_H.
*/
#define	PSI5_RDMH27	(PSI5_RDM2_7_H)

/** \brief  838, Receive Data Memory Low */
#define PSI5_RDM2_7_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005838u)

/** Alias (User Manual Name) for PSI5_RDM2_7_L.
* To use register names with standard convension, please use PSI5_RDM2_7_L.
*/
#define	PSI5_RDML27	(PSI5_RDM2_7_L)

/** \brief  844, Receive Data Memory High */
#define PSI5_RDM2_8_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005844u)

/** Alias (User Manual Name) for PSI5_RDM2_8_H.
* To use register names with standard convension, please use PSI5_RDM2_8_H.
*/
#define	PSI5_RDMH28	(PSI5_RDM2_8_H)

/** \brief  840, Receive Data Memory Low */
#define PSI5_RDM2_8_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005840u)

/** Alias (User Manual Name) for PSI5_RDM2_8_L.
* To use register names with standard convension, please use PSI5_RDM2_8_L.
*/
#define	PSI5_RDML28	(PSI5_RDM2_8_L)

/** \brief  84C, Receive Data Memory High */
#define PSI5_RDM2_9_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000584Cu)

/** Alias (User Manual Name) for PSI5_RDM2_9_H.
* To use register names with standard convension, please use PSI5_RDM2_9_H.
*/
#define	PSI5_RDMH29	(PSI5_RDM2_9_H)

/** \brief  848, Receive Data Memory Low */
#define PSI5_RDM2_9_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005848u)

/** Alias (User Manual Name) for PSI5_RDM2_9_L.
* To use register names with standard convension, please use PSI5_RDM2_9_L.
*/
#define	PSI5_RDML29	(PSI5_RDM2_9_L)

/** \brief  904, Receive Data Memory High */
#define PSI5_RDM3_0_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005904u)

/** Alias (User Manual Name) for PSI5_RDM3_0_H.
* To use register names with standard convension, please use PSI5_RDM3_0_H.
*/
#define	PSI5_RDMH30	(PSI5_RDM3_0_H)

/** \brief  900, Receive Data Memory Low */
#define PSI5_RDM3_0_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005900u)

/** Alias (User Manual Name) for PSI5_RDM3_0_L.
* To use register names with standard convension, please use PSI5_RDM3_0_L.
*/
#define	PSI5_RDML30	(PSI5_RDM3_0_L)

/** \brief  954, Receive Data Memory High */
#define PSI5_RDM3_10_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005954u)

/** Alias (User Manual Name) for PSI5_RDM3_10_H.
* To use register names with standard convension, please use PSI5_RDM3_10_H.
*/
#define	PSI5_RDMH310	(PSI5_RDM3_10_H)

/** \brief  950, Receive Data Memory Low */
#define PSI5_RDM3_10_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005950u)

/** Alias (User Manual Name) for PSI5_RDM3_10_L.
* To use register names with standard convension, please use PSI5_RDM3_10_L.
*/
#define	PSI5_RDML310	(PSI5_RDM3_10_L)

/** \brief  95C, Receive Data Memory High */
#define PSI5_RDM3_11_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000595Cu)

/** Alias (User Manual Name) for PSI5_RDM3_11_H.
* To use register names with standard convension, please use PSI5_RDM3_11_H.
*/
#define	PSI5_RDMH311	(PSI5_RDM3_11_H)

/** \brief  958, Receive Data Memory Low */
#define PSI5_RDM3_11_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005958u)

/** Alias (User Manual Name) for PSI5_RDM3_11_L.
* To use register names with standard convension, please use PSI5_RDM3_11_L.
*/
#define	PSI5_RDML311	(PSI5_RDM3_11_L)

/** \brief  964, Receive Data Memory High */
#define PSI5_RDM3_12_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005964u)

/** Alias (User Manual Name) for PSI5_RDM3_12_H.
* To use register names with standard convension, please use PSI5_RDM3_12_H.
*/
#define	PSI5_RDMH312	(PSI5_RDM3_12_H)

/** \brief  960, Receive Data Memory Low */
#define PSI5_RDM3_12_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005960u)

/** Alias (User Manual Name) for PSI5_RDM3_12_L.
* To use register names with standard convension, please use PSI5_RDM3_12_L.
*/
#define	PSI5_RDML312	(PSI5_RDM3_12_L)

/** \brief  96C, Receive Data Memory High */
#define PSI5_RDM3_13_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000596Cu)

/** Alias (User Manual Name) for PSI5_RDM3_13_H.
* To use register names with standard convension, please use PSI5_RDM3_13_H.
*/
#define	PSI5_RDMH313	(PSI5_RDM3_13_H)

/** \brief  968, Receive Data Memory Low */
#define PSI5_RDM3_13_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005968u)

/** Alias (User Manual Name) for PSI5_RDM3_13_L.
* To use register names with standard convension, please use PSI5_RDM3_13_L.
*/
#define	PSI5_RDML313	(PSI5_RDM3_13_L)

/** \brief  974, Receive Data Memory High */
#define PSI5_RDM3_14_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005974u)

/** Alias (User Manual Name) for PSI5_RDM3_14_H.
* To use register names with standard convension, please use PSI5_RDM3_14_H.
*/
#define	PSI5_RDMH314	(PSI5_RDM3_14_H)

/** \brief  970, Receive Data Memory Low */
#define PSI5_RDM3_14_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005970u)

/** Alias (User Manual Name) for PSI5_RDM3_14_L.
* To use register names with standard convension, please use PSI5_RDM3_14_L.
*/
#define	PSI5_RDML314	(PSI5_RDM3_14_L)

/** \brief  97C, Receive Data Memory High */
#define PSI5_RDM3_15_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000597Cu)

/** Alias (User Manual Name) for PSI5_RDM3_15_H.
* To use register names with standard convension, please use PSI5_RDM3_15_H.
*/
#define	PSI5_RDMH315	(PSI5_RDM3_15_H)

/** \brief  978, Receive Data Memory Low */
#define PSI5_RDM3_15_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005978u)

/** Alias (User Manual Name) for PSI5_RDM3_15_L.
* To use register names with standard convension, please use PSI5_RDM3_15_L.
*/
#define	PSI5_RDML315	(PSI5_RDM3_15_L)

/** \brief  984, Receive Data Memory High */
#define PSI5_RDM3_16_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005984u)

/** Alias (User Manual Name) for PSI5_RDM3_16_H.
* To use register names with standard convension, please use PSI5_RDM3_16_H.
*/
#define	PSI5_RDMH316	(PSI5_RDM3_16_H)

/** \brief  980, Receive Data Memory Low */
#define PSI5_RDM3_16_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005980u)

/** Alias (User Manual Name) for PSI5_RDM3_16_L.
* To use register names with standard convension, please use PSI5_RDM3_16_L.
*/
#define	PSI5_RDML316	(PSI5_RDM3_16_L)

/** \brief  98C, Receive Data Memory High */
#define PSI5_RDM3_17_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000598Cu)

/** Alias (User Manual Name) for PSI5_RDM3_17_H.
* To use register names with standard convension, please use PSI5_RDM3_17_H.
*/
#define	PSI5_RDMH317	(PSI5_RDM3_17_H)

/** \brief  988, Receive Data Memory Low */
#define PSI5_RDM3_17_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005988u)

/** Alias (User Manual Name) for PSI5_RDM3_17_L.
* To use register names with standard convension, please use PSI5_RDM3_17_L.
*/
#define	PSI5_RDML317	(PSI5_RDM3_17_L)

/** \brief  994, Receive Data Memory High */
#define PSI5_RDM3_18_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005994u)

/** Alias (User Manual Name) for PSI5_RDM3_18_H.
* To use register names with standard convension, please use PSI5_RDM3_18_H.
*/
#define	PSI5_RDMH318	(PSI5_RDM3_18_H)

/** \brief  990, Receive Data Memory Low */
#define PSI5_RDM3_18_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005990u)

/** Alias (User Manual Name) for PSI5_RDM3_18_L.
* To use register names with standard convension, please use PSI5_RDM3_18_L.
*/
#define	PSI5_RDML318	(PSI5_RDM3_18_L)

/** \brief  99C, Receive Data Memory High */
#define PSI5_RDM3_19_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000599Cu)

/** Alias (User Manual Name) for PSI5_RDM3_19_H.
* To use register names with standard convension, please use PSI5_RDM3_19_H.
*/
#define	PSI5_RDMH319	(PSI5_RDM3_19_H)

/** \brief  998, Receive Data Memory Low */
#define PSI5_RDM3_19_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005998u)

/** Alias (User Manual Name) for PSI5_RDM3_19_L.
* To use register names with standard convension, please use PSI5_RDM3_19_L.
*/
#define	PSI5_RDML319	(PSI5_RDM3_19_L)

/** \brief  90C, Receive Data Memory High */
#define PSI5_RDM3_1_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000590Cu)

/** Alias (User Manual Name) for PSI5_RDM3_1_H.
* To use register names with standard convension, please use PSI5_RDM3_1_H.
*/
#define	PSI5_RDMH31	(PSI5_RDM3_1_H)

/** \brief  908, Receive Data Memory Low */
#define PSI5_RDM3_1_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005908u)

/** Alias (User Manual Name) for PSI5_RDM3_1_L.
* To use register names with standard convension, please use PSI5_RDM3_1_L.
*/
#define	PSI5_RDML31	(PSI5_RDM3_1_L)

/** \brief  9A4, Receive Data Memory High */
#define PSI5_RDM3_20_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00059A4u)

/** Alias (User Manual Name) for PSI5_RDM3_20_H.
* To use register names with standard convension, please use PSI5_RDM3_20_H.
*/
#define	PSI5_RDMH320	(PSI5_RDM3_20_H)

/** \brief  9A0, Receive Data Memory Low */
#define PSI5_RDM3_20_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00059A0u)

/** Alias (User Manual Name) for PSI5_RDM3_20_L.
* To use register names with standard convension, please use PSI5_RDM3_20_L.
*/
#define	PSI5_RDML320	(PSI5_RDM3_20_L)

/** \brief  9AC, Receive Data Memory High */
#define PSI5_RDM3_21_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00059ACu)

/** Alias (User Manual Name) for PSI5_RDM3_21_H.
* To use register names with standard convension, please use PSI5_RDM3_21_H.
*/
#define	PSI5_RDMH321	(PSI5_RDM3_21_H)

/** \brief  9A8, Receive Data Memory Low */
#define PSI5_RDM3_21_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00059A8u)

/** Alias (User Manual Name) for PSI5_RDM3_21_L.
* To use register names with standard convension, please use PSI5_RDM3_21_L.
*/
#define	PSI5_RDML321	(PSI5_RDM3_21_L)

/** \brief  9B4, Receive Data Memory High */
#define PSI5_RDM3_22_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00059B4u)

/** Alias (User Manual Name) for PSI5_RDM3_22_H.
* To use register names with standard convension, please use PSI5_RDM3_22_H.
*/
#define	PSI5_RDMH322	(PSI5_RDM3_22_H)

/** \brief  9B0, Receive Data Memory Low */
#define PSI5_RDM3_22_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00059B0u)

/** Alias (User Manual Name) for PSI5_RDM3_22_L.
* To use register names with standard convension, please use PSI5_RDM3_22_L.
*/
#define	PSI5_RDML322	(PSI5_RDM3_22_L)

/** \brief  9BC, Receive Data Memory High */
#define PSI5_RDM3_23_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00059BCu)

/** Alias (User Manual Name) for PSI5_RDM3_23_H.
* To use register names with standard convension, please use PSI5_RDM3_23_H.
*/
#define	PSI5_RDMH323	(PSI5_RDM3_23_H)

/** \brief  9B8, Receive Data Memory Low */
#define PSI5_RDM3_23_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00059B8u)

/** Alias (User Manual Name) for PSI5_RDM3_23_L.
* To use register names with standard convension, please use PSI5_RDM3_23_L.
*/
#define	PSI5_RDML323	(PSI5_RDM3_23_L)

/** \brief  9C4, Receive Data Memory High */
#define PSI5_RDM3_24_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00059C4u)

/** Alias (User Manual Name) for PSI5_RDM3_24_H.
* To use register names with standard convension, please use PSI5_RDM3_24_H.
*/
#define	PSI5_RDMH324	(PSI5_RDM3_24_H)

/** \brief  9C0, Receive Data Memory Low */
#define PSI5_RDM3_24_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00059C0u)

/** Alias (User Manual Name) for PSI5_RDM3_24_L.
* To use register names with standard convension, please use PSI5_RDM3_24_L.
*/
#define	PSI5_RDML324	(PSI5_RDM3_24_L)

/** \brief  9CC, Receive Data Memory High */
#define PSI5_RDM3_25_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00059CCu)

/** Alias (User Manual Name) for PSI5_RDM3_25_H.
* To use register names with standard convension, please use PSI5_RDM3_25_H.
*/
#define	PSI5_RDMH325	(PSI5_RDM3_25_H)

/** \brief  9C8, Receive Data Memory Low */
#define PSI5_RDM3_25_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00059C8u)

/** Alias (User Manual Name) for PSI5_RDM3_25_L.
* To use register names with standard convension, please use PSI5_RDM3_25_L.
*/
#define	PSI5_RDML325	(PSI5_RDM3_25_L)

/** \brief  9D4, Receive Data Memory High */
#define PSI5_RDM3_26_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00059D4u)

/** Alias (User Manual Name) for PSI5_RDM3_26_H.
* To use register names with standard convension, please use PSI5_RDM3_26_H.
*/
#define	PSI5_RDMH326	(PSI5_RDM3_26_H)

/** \brief  9D0, Receive Data Memory Low */
#define PSI5_RDM3_26_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00059D0u)

/** Alias (User Manual Name) for PSI5_RDM3_26_L.
* To use register names with standard convension, please use PSI5_RDM3_26_L.
*/
#define	PSI5_RDML326	(PSI5_RDM3_26_L)

/** \brief  9DC, Receive Data Memory High */
#define PSI5_RDM3_27_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00059DCu)

/** Alias (User Manual Name) for PSI5_RDM3_27_H.
* To use register names with standard convension, please use PSI5_RDM3_27_H.
*/
#define	PSI5_RDMH327	(PSI5_RDM3_27_H)

/** \brief  9D8, Receive Data Memory Low */
#define PSI5_RDM3_27_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00059D8u)

/** Alias (User Manual Name) for PSI5_RDM3_27_L.
* To use register names with standard convension, please use PSI5_RDM3_27_L.
*/
#define	PSI5_RDML327	(PSI5_RDM3_27_L)

/** \brief  9E4, Receive Data Memory High */
#define PSI5_RDM3_28_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00059E4u)

/** Alias (User Manual Name) for PSI5_RDM3_28_H.
* To use register names with standard convension, please use PSI5_RDM3_28_H.
*/
#define	PSI5_RDMH328	(PSI5_RDM3_28_H)

/** \brief  9E0, Receive Data Memory Low */
#define PSI5_RDM3_28_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00059E0u)

/** Alias (User Manual Name) for PSI5_RDM3_28_L.
* To use register names with standard convension, please use PSI5_RDM3_28_L.
*/
#define	PSI5_RDML328	(PSI5_RDM3_28_L)

/** \brief  9EC, Receive Data Memory High */
#define PSI5_RDM3_29_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00059ECu)

/** Alias (User Manual Name) for PSI5_RDM3_29_H.
* To use register names with standard convension, please use PSI5_RDM3_29_H.
*/
#define	PSI5_RDMH329	(PSI5_RDM3_29_H)

/** \brief  9E8, Receive Data Memory Low */
#define PSI5_RDM3_29_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00059E8u)

/** Alias (User Manual Name) for PSI5_RDM3_29_L.
* To use register names with standard convension, please use PSI5_RDM3_29_L.
*/
#define	PSI5_RDML329	(PSI5_RDM3_29_L)

/** \brief  914, Receive Data Memory High */
#define PSI5_RDM3_2_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005914u)

/** Alias (User Manual Name) for PSI5_RDM3_2_H.
* To use register names with standard convension, please use PSI5_RDM3_2_H.
*/
#define	PSI5_RDMH32	(PSI5_RDM3_2_H)

/** \brief  910, Receive Data Memory Low */
#define PSI5_RDM3_2_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005910u)

/** Alias (User Manual Name) for PSI5_RDM3_2_L.
* To use register names with standard convension, please use PSI5_RDM3_2_L.
*/
#define	PSI5_RDML32	(PSI5_RDM3_2_L)

/** \brief  9F4, Receive Data Memory High */
#define PSI5_RDM3_30_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00059F4u)

/** Alias (User Manual Name) for PSI5_RDM3_30_H.
* To use register names with standard convension, please use PSI5_RDM3_30_H.
*/
#define	PSI5_RDMH330	(PSI5_RDM3_30_H)

/** \brief  9F0, Receive Data Memory Low */
#define PSI5_RDM3_30_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00059F0u)

/** Alias (User Manual Name) for PSI5_RDM3_30_L.
* To use register names with standard convension, please use PSI5_RDM3_30_L.
*/
#define	PSI5_RDML330	(PSI5_RDM3_30_L)

/** \brief  9FC, Receive Data Memory High */
#define PSI5_RDM3_31_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF00059FCu)

/** Alias (User Manual Name) for PSI5_RDM3_31_H.
* To use register names with standard convension, please use PSI5_RDM3_31_H.
*/
#define	PSI5_RDMH331	(PSI5_RDM3_31_H)

/** \brief  9F8, Receive Data Memory Low */
#define PSI5_RDM3_31_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF00059F8u)

/** Alias (User Manual Name) for PSI5_RDM3_31_L.
* To use register names with standard convension, please use PSI5_RDM3_31_L.
*/
#define	PSI5_RDML331	(PSI5_RDM3_31_L)

/** \brief  91C, Receive Data Memory High */
#define PSI5_RDM3_3_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000591Cu)

/** Alias (User Manual Name) for PSI5_RDM3_3_H.
* To use register names with standard convension, please use PSI5_RDM3_3_H.
*/
#define	PSI5_RDMH33	(PSI5_RDM3_3_H)

/** \brief  918, Receive Data Memory Low */
#define PSI5_RDM3_3_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005918u)

/** Alias (User Manual Name) for PSI5_RDM3_3_L.
* To use register names with standard convension, please use PSI5_RDM3_3_L.
*/
#define	PSI5_RDML33	(PSI5_RDM3_3_L)

/** \brief  924, Receive Data Memory High */
#define PSI5_RDM3_4_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005924u)

/** Alias (User Manual Name) for PSI5_RDM3_4_H.
* To use register names with standard convension, please use PSI5_RDM3_4_H.
*/
#define	PSI5_RDMH34	(PSI5_RDM3_4_H)

/** \brief  920, Receive Data Memory Low */
#define PSI5_RDM3_4_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005920u)

/** Alias (User Manual Name) for PSI5_RDM3_4_L.
* To use register names with standard convension, please use PSI5_RDM3_4_L.
*/
#define	PSI5_RDML34	(PSI5_RDM3_4_L)

/** \brief  92C, Receive Data Memory High */
#define PSI5_RDM3_5_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000592Cu)

/** Alias (User Manual Name) for PSI5_RDM3_5_H.
* To use register names with standard convension, please use PSI5_RDM3_5_H.
*/
#define	PSI5_RDMH35	(PSI5_RDM3_5_H)

/** \brief  928, Receive Data Memory Low */
#define PSI5_RDM3_5_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005928u)

/** Alias (User Manual Name) for PSI5_RDM3_5_L.
* To use register names with standard convension, please use PSI5_RDM3_5_L.
*/
#define	PSI5_RDML35	(PSI5_RDM3_5_L)

/** \brief  934, Receive Data Memory High */
#define PSI5_RDM3_6_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005934u)

/** Alias (User Manual Name) for PSI5_RDM3_6_H.
* To use register names with standard convension, please use PSI5_RDM3_6_H.
*/
#define	PSI5_RDMH36	(PSI5_RDM3_6_H)

/** \brief  930, Receive Data Memory Low */
#define PSI5_RDM3_6_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005930u)

/** Alias (User Manual Name) for PSI5_RDM3_6_L.
* To use register names with standard convension, please use PSI5_RDM3_6_L.
*/
#define	PSI5_RDML36	(PSI5_RDM3_6_L)

/** \brief  93C, Receive Data Memory High */
#define PSI5_RDM3_7_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000593Cu)

/** Alias (User Manual Name) for PSI5_RDM3_7_H.
* To use register names with standard convension, please use PSI5_RDM3_7_H.
*/
#define	PSI5_RDMH37	(PSI5_RDM3_7_H)

/** \brief  938, Receive Data Memory Low */
#define PSI5_RDM3_7_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005938u)

/** Alias (User Manual Name) for PSI5_RDM3_7_L.
* To use register names with standard convension, please use PSI5_RDM3_7_L.
*/
#define	PSI5_RDML37	(PSI5_RDM3_7_L)

/** \brief  944, Receive Data Memory High */
#define PSI5_RDM3_8_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005944u)

/** Alias (User Manual Name) for PSI5_RDM3_8_H.
* To use register names with standard convension, please use PSI5_RDM3_8_H.
*/
#define	PSI5_RDMH38	(PSI5_RDM3_8_H)

/** \brief  940, Receive Data Memory Low */
#define PSI5_RDM3_8_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005940u)

/** Alias (User Manual Name) for PSI5_RDM3_8_L.
* To use register names with standard convension, please use PSI5_RDM3_8_L.
*/
#define	PSI5_RDML38	(PSI5_RDM3_8_L)

/** \brief  94C, Receive Data Memory High */
#define PSI5_RDM3_9_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF000594Cu)

/** Alias (User Manual Name) for PSI5_RDM3_9_H.
* To use register names with standard convension, please use PSI5_RDM3_9_H.
*/
#define	PSI5_RDMH39	(PSI5_RDM3_9_H)

/** \brief  948, Receive Data Memory Low */
#define PSI5_RDM3_9_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005948u)

/** Alias (User Manual Name) for PSI5_RDM3_9_L.
* To use register names with standard convension, please use PSI5_RDM3_9_L.
*/
#define	PSI5_RDML39	(PSI5_RDM3_9_L)

/** \brief  A04, Receive Data Memory High */
#define PSI5_RDM4_0_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A04u)

/** Alias (User Manual Name) for PSI5_RDM4_0_H.
* To use register names with standard convension, please use PSI5_RDM4_0_H.
*/
#define	PSI5_RDMH40	(PSI5_RDM4_0_H)

/** \brief  A00, Receive Data Memory Low */
#define PSI5_RDM4_0_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A00u)

/** Alias (User Manual Name) for PSI5_RDM4_0_L.
* To use register names with standard convension, please use PSI5_RDM4_0_L.
*/
#define	PSI5_RDML40	(PSI5_RDM4_0_L)

/** \brief  A54, Receive Data Memory High */
#define PSI5_RDM4_10_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A54u)

/** Alias (User Manual Name) for PSI5_RDM4_10_H.
* To use register names with standard convension, please use PSI5_RDM4_10_H.
*/
#define	PSI5_RDMH410	(PSI5_RDM4_10_H)

/** \brief  A50, Receive Data Memory Low */
#define PSI5_RDM4_10_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A50u)

/** Alias (User Manual Name) for PSI5_RDM4_10_L.
* To use register names with standard convension, please use PSI5_RDM4_10_L.
*/
#define	PSI5_RDML410	(PSI5_RDM4_10_L)

/** \brief  A5C, Receive Data Memory High */
#define PSI5_RDM4_11_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A5Cu)

/** Alias (User Manual Name) for PSI5_RDM4_11_H.
* To use register names with standard convension, please use PSI5_RDM4_11_H.
*/
#define	PSI5_RDMH411	(PSI5_RDM4_11_H)

/** \brief  A58, Receive Data Memory Low */
#define PSI5_RDM4_11_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A58u)

/** Alias (User Manual Name) for PSI5_RDM4_11_L.
* To use register names with standard convension, please use PSI5_RDM4_11_L.
*/
#define	PSI5_RDML411	(PSI5_RDM4_11_L)

/** \brief  A64, Receive Data Memory High */
#define PSI5_RDM4_12_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A64u)

/** Alias (User Manual Name) for PSI5_RDM4_12_H.
* To use register names with standard convension, please use PSI5_RDM4_12_H.
*/
#define	PSI5_RDMH412	(PSI5_RDM4_12_H)

/** \brief  A60, Receive Data Memory Low */
#define PSI5_RDM4_12_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A60u)

/** Alias (User Manual Name) for PSI5_RDM4_12_L.
* To use register names with standard convension, please use PSI5_RDM4_12_L.
*/
#define	PSI5_RDML412	(PSI5_RDM4_12_L)

/** \brief  A6C, Receive Data Memory High */
#define PSI5_RDM4_13_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A6Cu)

/** Alias (User Manual Name) for PSI5_RDM4_13_H.
* To use register names with standard convension, please use PSI5_RDM4_13_H.
*/
#define	PSI5_RDMH413	(PSI5_RDM4_13_H)

/** \brief  A68, Receive Data Memory Low */
#define PSI5_RDM4_13_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A68u)

/** Alias (User Manual Name) for PSI5_RDM4_13_L.
* To use register names with standard convension, please use PSI5_RDM4_13_L.
*/
#define	PSI5_RDML413	(PSI5_RDM4_13_L)

/** \brief  A74, Receive Data Memory High */
#define PSI5_RDM4_14_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A74u)

/** Alias (User Manual Name) for PSI5_RDM4_14_H.
* To use register names with standard convension, please use PSI5_RDM4_14_H.
*/
#define	PSI5_RDMH414	(PSI5_RDM4_14_H)

/** \brief  A70, Receive Data Memory Low */
#define PSI5_RDM4_14_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A70u)

/** Alias (User Manual Name) for PSI5_RDM4_14_L.
* To use register names with standard convension, please use PSI5_RDM4_14_L.
*/
#define	PSI5_RDML414	(PSI5_RDM4_14_L)

/** \brief  A7C, Receive Data Memory High */
#define PSI5_RDM4_15_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A7Cu)

/** Alias (User Manual Name) for PSI5_RDM4_15_H.
* To use register names with standard convension, please use PSI5_RDM4_15_H.
*/
#define	PSI5_RDMH415	(PSI5_RDM4_15_H)

/** \brief  A78, Receive Data Memory Low */
#define PSI5_RDM4_15_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A78u)

/** Alias (User Manual Name) for PSI5_RDM4_15_L.
* To use register names with standard convension, please use PSI5_RDM4_15_L.
*/
#define	PSI5_RDML415	(PSI5_RDM4_15_L)

/** \brief  A84, Receive Data Memory High */
#define PSI5_RDM4_16_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A84u)

/** Alias (User Manual Name) for PSI5_RDM4_16_H.
* To use register names with standard convension, please use PSI5_RDM4_16_H.
*/
#define	PSI5_RDMH416	(PSI5_RDM4_16_H)

/** \brief  A80, Receive Data Memory Low */
#define PSI5_RDM4_16_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A80u)

/** Alias (User Manual Name) for PSI5_RDM4_16_L.
* To use register names with standard convension, please use PSI5_RDM4_16_L.
*/
#define	PSI5_RDML416	(PSI5_RDM4_16_L)

/** \brief  A8C, Receive Data Memory High */
#define PSI5_RDM4_17_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A8Cu)

/** Alias (User Manual Name) for PSI5_RDM4_17_H.
* To use register names with standard convension, please use PSI5_RDM4_17_H.
*/
#define	PSI5_RDMH417	(PSI5_RDM4_17_H)

/** \brief  A88, Receive Data Memory Low */
#define PSI5_RDM4_17_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A88u)

/** Alias (User Manual Name) for PSI5_RDM4_17_L.
* To use register names with standard convension, please use PSI5_RDM4_17_L.
*/
#define	PSI5_RDML417	(PSI5_RDM4_17_L)

/** \brief  A94, Receive Data Memory High */
#define PSI5_RDM4_18_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A94u)

/** Alias (User Manual Name) for PSI5_RDM4_18_H.
* To use register names with standard convension, please use PSI5_RDM4_18_H.
*/
#define	PSI5_RDMH418	(PSI5_RDM4_18_H)

/** \brief  A90, Receive Data Memory Low */
#define PSI5_RDM4_18_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A90u)

/** Alias (User Manual Name) for PSI5_RDM4_18_L.
* To use register names with standard convension, please use PSI5_RDM4_18_L.
*/
#define	PSI5_RDML418	(PSI5_RDM4_18_L)

/** \brief  A9C, Receive Data Memory High */
#define PSI5_RDM4_19_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A9Cu)

/** Alias (User Manual Name) for PSI5_RDM4_19_H.
* To use register names with standard convension, please use PSI5_RDM4_19_H.
*/
#define	PSI5_RDMH419	(PSI5_RDM4_19_H)

/** \brief  A98, Receive Data Memory Low */
#define PSI5_RDM4_19_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A98u)

/** Alias (User Manual Name) for PSI5_RDM4_19_L.
* To use register names with standard convension, please use PSI5_RDM4_19_L.
*/
#define	PSI5_RDML419	(PSI5_RDM4_19_L)

/** \brief  A0C, Receive Data Memory High */
#define PSI5_RDM4_1_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A0Cu)

/** Alias (User Manual Name) for PSI5_RDM4_1_H.
* To use register names with standard convension, please use PSI5_RDM4_1_H.
*/
#define	PSI5_RDMH41	(PSI5_RDM4_1_H)

/** \brief  A08, Receive Data Memory Low */
#define PSI5_RDM4_1_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A08u)

/** Alias (User Manual Name) for PSI5_RDM4_1_L.
* To use register names with standard convension, please use PSI5_RDM4_1_L.
*/
#define	PSI5_RDML41	(PSI5_RDM4_1_L)

/** \brief  AA4, Receive Data Memory High */
#define PSI5_RDM4_20_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005AA4u)

/** Alias (User Manual Name) for PSI5_RDM4_20_H.
* To use register names with standard convension, please use PSI5_RDM4_20_H.
*/
#define	PSI5_RDMH420	(PSI5_RDM4_20_H)

/** \brief  AA0, Receive Data Memory Low */
#define PSI5_RDM4_20_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005AA0u)

/** Alias (User Manual Name) for PSI5_RDM4_20_L.
* To use register names with standard convension, please use PSI5_RDM4_20_L.
*/
#define	PSI5_RDML420	(PSI5_RDM4_20_L)

/** \brief  AAC, Receive Data Memory High */
#define PSI5_RDM4_21_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005AACu)

/** Alias (User Manual Name) for PSI5_RDM4_21_H.
* To use register names with standard convension, please use PSI5_RDM4_21_H.
*/
#define	PSI5_RDMH421	(PSI5_RDM4_21_H)

/** \brief  AA8, Receive Data Memory Low */
#define PSI5_RDM4_21_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005AA8u)

/** Alias (User Manual Name) for PSI5_RDM4_21_L.
* To use register names with standard convension, please use PSI5_RDM4_21_L.
*/
#define	PSI5_RDML421	(PSI5_RDM4_21_L)

/** \brief  AB4, Receive Data Memory High */
#define PSI5_RDM4_22_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005AB4u)

/** Alias (User Manual Name) for PSI5_RDM4_22_H.
* To use register names with standard convension, please use PSI5_RDM4_22_H.
*/
#define	PSI5_RDMH422	(PSI5_RDM4_22_H)

/** \brief  AB0, Receive Data Memory Low */
#define PSI5_RDM4_22_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005AB0u)

/** Alias (User Manual Name) for PSI5_RDM4_22_L.
* To use register names with standard convension, please use PSI5_RDM4_22_L.
*/
#define	PSI5_RDML422	(PSI5_RDM4_22_L)

/** \brief  ABC, Receive Data Memory High */
#define PSI5_RDM4_23_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005ABCu)

/** Alias (User Manual Name) for PSI5_RDM4_23_H.
* To use register names with standard convension, please use PSI5_RDM4_23_H.
*/
#define	PSI5_RDMH423	(PSI5_RDM4_23_H)

/** \brief  AB8, Receive Data Memory Low */
#define PSI5_RDM4_23_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005AB8u)

/** Alias (User Manual Name) for PSI5_RDM4_23_L.
* To use register names with standard convension, please use PSI5_RDM4_23_L.
*/
#define	PSI5_RDML423	(PSI5_RDM4_23_L)

/** \brief  AC4, Receive Data Memory High */
#define PSI5_RDM4_24_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005AC4u)

/** Alias (User Manual Name) for PSI5_RDM4_24_H.
* To use register names with standard convension, please use PSI5_RDM4_24_H.
*/
#define	PSI5_RDMH424	(PSI5_RDM4_24_H)

/** \brief  AC0, Receive Data Memory Low */
#define PSI5_RDM4_24_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005AC0u)

/** Alias (User Manual Name) for PSI5_RDM4_24_L.
* To use register names with standard convension, please use PSI5_RDM4_24_L.
*/
#define	PSI5_RDML424	(PSI5_RDM4_24_L)

/** \brief  ACC, Receive Data Memory High */
#define PSI5_RDM4_25_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005ACCu)

/** Alias (User Manual Name) for PSI5_RDM4_25_H.
* To use register names with standard convension, please use PSI5_RDM4_25_H.
*/
#define	PSI5_RDMH425	(PSI5_RDM4_25_H)

/** \brief  AC8, Receive Data Memory Low */
#define PSI5_RDM4_25_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005AC8u)

/** Alias (User Manual Name) for PSI5_RDM4_25_L.
* To use register names with standard convension, please use PSI5_RDM4_25_L.
*/
#define	PSI5_RDML425	(PSI5_RDM4_25_L)

/** \brief  AD4, Receive Data Memory High */
#define PSI5_RDM4_26_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005AD4u)

/** Alias (User Manual Name) for PSI5_RDM4_26_H.
* To use register names with standard convension, please use PSI5_RDM4_26_H.
*/
#define	PSI5_RDMH426	(PSI5_RDM4_26_H)

/** \brief  AD0, Receive Data Memory Low */
#define PSI5_RDM4_26_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005AD0u)

/** Alias (User Manual Name) for PSI5_RDM4_26_L.
* To use register names with standard convension, please use PSI5_RDM4_26_L.
*/
#define	PSI5_RDML426	(PSI5_RDM4_26_L)

/** \brief  ADC, Receive Data Memory High */
#define PSI5_RDM4_27_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005ADCu)

/** Alias (User Manual Name) for PSI5_RDM4_27_H.
* To use register names with standard convension, please use PSI5_RDM4_27_H.
*/
#define	PSI5_RDMH427	(PSI5_RDM4_27_H)

/** \brief  AD8, Receive Data Memory Low */
#define PSI5_RDM4_27_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005AD8u)

/** Alias (User Manual Name) for PSI5_RDM4_27_L.
* To use register names with standard convension, please use PSI5_RDM4_27_L.
*/
#define	PSI5_RDML427	(PSI5_RDM4_27_L)

/** \brief  AE4, Receive Data Memory High */
#define PSI5_RDM4_28_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005AE4u)

/** Alias (User Manual Name) for PSI5_RDM4_28_H.
* To use register names with standard convension, please use PSI5_RDM4_28_H.
*/
#define	PSI5_RDMH428	(PSI5_RDM4_28_H)

/** \brief  AE0, Receive Data Memory Low */
#define PSI5_RDM4_28_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005AE0u)

/** Alias (User Manual Name) for PSI5_RDM4_28_L.
* To use register names with standard convension, please use PSI5_RDM4_28_L.
*/
#define	PSI5_RDML428	(PSI5_RDM4_28_L)

/** \brief  AEC, Receive Data Memory High */
#define PSI5_RDM4_29_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005AECu)

/** Alias (User Manual Name) for PSI5_RDM4_29_H.
* To use register names with standard convension, please use PSI5_RDM4_29_H.
*/
#define	PSI5_RDMH429	(PSI5_RDM4_29_H)

/** \brief  AE8, Receive Data Memory Low */
#define PSI5_RDM4_29_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005AE8u)

/** Alias (User Manual Name) for PSI5_RDM4_29_L.
* To use register names with standard convension, please use PSI5_RDM4_29_L.
*/
#define	PSI5_RDML429	(PSI5_RDM4_29_L)

/** \brief  A14, Receive Data Memory High */
#define PSI5_RDM4_2_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A14u)

/** Alias (User Manual Name) for PSI5_RDM4_2_H.
* To use register names with standard convension, please use PSI5_RDM4_2_H.
*/
#define	PSI5_RDMH42	(PSI5_RDM4_2_H)

/** \brief  A10, Receive Data Memory Low */
#define PSI5_RDM4_2_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A10u)

/** Alias (User Manual Name) for PSI5_RDM4_2_L.
* To use register names with standard convension, please use PSI5_RDM4_2_L.
*/
#define	PSI5_RDML42	(PSI5_RDM4_2_L)

/** \brief  AF4, Receive Data Memory High */
#define PSI5_RDM4_30_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005AF4u)

/** Alias (User Manual Name) for PSI5_RDM4_30_H.
* To use register names with standard convension, please use PSI5_RDM4_30_H.
*/
#define	PSI5_RDMH430	(PSI5_RDM4_30_H)

/** \brief  AF0, Receive Data Memory Low */
#define PSI5_RDM4_30_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005AF0u)

/** Alias (User Manual Name) for PSI5_RDM4_30_L.
* To use register names with standard convension, please use PSI5_RDM4_30_L.
*/
#define	PSI5_RDML430	(PSI5_RDM4_30_L)

/** \brief  AFC, Receive Data Memory High */
#define PSI5_RDM4_31_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005AFCu)

/** Alias (User Manual Name) for PSI5_RDM4_31_H.
* To use register names with standard convension, please use PSI5_RDM4_31_H.
*/
#define	PSI5_RDMH431	(PSI5_RDM4_31_H)

/** \brief  AF8, Receive Data Memory Low */
#define PSI5_RDM4_31_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005AF8u)

/** Alias (User Manual Name) for PSI5_RDM4_31_L.
* To use register names with standard convension, please use PSI5_RDM4_31_L.
*/
#define	PSI5_RDML431	(PSI5_RDM4_31_L)

/** \brief  A1C, Receive Data Memory High */
#define PSI5_RDM4_3_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A1Cu)

/** Alias (User Manual Name) for PSI5_RDM4_3_H.
* To use register names with standard convension, please use PSI5_RDM4_3_H.
*/
#define	PSI5_RDMH43	(PSI5_RDM4_3_H)

/** \brief  A18, Receive Data Memory Low */
#define PSI5_RDM4_3_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A18u)

/** Alias (User Manual Name) for PSI5_RDM4_3_L.
* To use register names with standard convension, please use PSI5_RDM4_3_L.
*/
#define	PSI5_RDML43	(PSI5_RDM4_3_L)

/** \brief  A24, Receive Data Memory High */
#define PSI5_RDM4_4_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A24u)

/** Alias (User Manual Name) for PSI5_RDM4_4_H.
* To use register names with standard convension, please use PSI5_RDM4_4_H.
*/
#define	PSI5_RDMH44	(PSI5_RDM4_4_H)

/** \brief  A20, Receive Data Memory Low */
#define PSI5_RDM4_4_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A20u)

/** Alias (User Manual Name) for PSI5_RDM4_4_L.
* To use register names with standard convension, please use PSI5_RDM4_4_L.
*/
#define	PSI5_RDML44	(PSI5_RDM4_4_L)

/** \brief  A2C, Receive Data Memory High */
#define PSI5_RDM4_5_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A2Cu)

/** Alias (User Manual Name) for PSI5_RDM4_5_H.
* To use register names with standard convension, please use PSI5_RDM4_5_H.
*/
#define	PSI5_RDMH45	(PSI5_RDM4_5_H)

/** \brief  A28, Receive Data Memory Low */
#define PSI5_RDM4_5_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A28u)

/** Alias (User Manual Name) for PSI5_RDM4_5_L.
* To use register names with standard convension, please use PSI5_RDM4_5_L.
*/
#define	PSI5_RDML45	(PSI5_RDM4_5_L)

/** \brief  A34, Receive Data Memory High */
#define PSI5_RDM4_6_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A34u)

/** Alias (User Manual Name) for PSI5_RDM4_6_H.
* To use register names with standard convension, please use PSI5_RDM4_6_H.
*/
#define	PSI5_RDMH46	(PSI5_RDM4_6_H)

/** \brief  A30, Receive Data Memory Low */
#define PSI5_RDM4_6_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A30u)

/** Alias (User Manual Name) for PSI5_RDM4_6_L.
* To use register names with standard convension, please use PSI5_RDM4_6_L.
*/
#define	PSI5_RDML46	(PSI5_RDM4_6_L)

/** \brief  A3C, Receive Data Memory High */
#define PSI5_RDM4_7_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A3Cu)

/** Alias (User Manual Name) for PSI5_RDM4_7_H.
* To use register names with standard convension, please use PSI5_RDM4_7_H.
*/
#define	PSI5_RDMH47	(PSI5_RDM4_7_H)

/** \brief  A38, Receive Data Memory Low */
#define PSI5_RDM4_7_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A38u)

/** Alias (User Manual Name) for PSI5_RDM4_7_L.
* To use register names with standard convension, please use PSI5_RDM4_7_L.
*/
#define	PSI5_RDML47	(PSI5_RDM4_7_L)

/** \brief  A44, Receive Data Memory High */
#define PSI5_RDM4_8_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A44u)

/** Alias (User Manual Name) for PSI5_RDM4_8_H.
* To use register names with standard convension, please use PSI5_RDM4_8_H.
*/
#define	PSI5_RDMH48	(PSI5_RDM4_8_H)

/** \brief  A40, Receive Data Memory Low */
#define PSI5_RDM4_8_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A40u)

/** Alias (User Manual Name) for PSI5_RDM4_8_L.
* To use register names with standard convension, please use PSI5_RDM4_8_L.
*/
#define	PSI5_RDML48	(PSI5_RDM4_8_L)

/** \brief  A4C, Receive Data Memory High */
#define PSI5_RDM4_9_H /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_H*)0xF0005A4Cu)

/** Alias (User Manual Name) for PSI5_RDM4_9_H.
* To use register names with standard convension, please use PSI5_RDM4_9_H.
*/
#define	PSI5_RDMH49	(PSI5_RDM4_9_H)

/** \brief  A48, Receive Data Memory Low */
#define PSI5_RDM4_9_L /*lint --e(923)*/ (*(volatile Ifx_PSI5_RDM_L*)0xF0005A48u)

/** Alias (User Manual Name) for PSI5_RDM4_9_L.
* To use register names with standard convension, please use PSI5_RDM4_9_L.
*/
#define	PSI5_RDML49	(PSI5_RDM4_9_L)

/** \brief  3E4, Receive FIFO Control Register */
#define PSI5_RFC0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RFC*)0xF00053E4u)

/** \brief  3E8, Receive FIFO Control Register */
#define PSI5_RFC1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RFC*)0xF00053E8u)

/** \brief  3EC, Receive FIFO Control Register */
#define PSI5_RFC2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RFC*)0xF00053ECu)

/** \brief  3F0, Receive FIFO Control Register */
#define PSI5_RFC3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RFC*)0xF00053F0u)

/** \brief  3F4, Receive FIFO Control Register */
#define PSI5_RFC4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RFC*)0xF00053F4u)

/** \brief  560, RMIOV Clear Register */
#define PSI5_RMICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMICLR*)0xF0005560u)

/** \brief  564, RMIOV Clear Register */
#define PSI5_RMICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMICLR*)0xF0005564u)

/** \brief  568, RMIOV Clear Register */
#define PSI5_RMICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMICLR*)0xF0005568u)

/** \brief  56C, RMIOV Clear Register */
#define PSI5_RMICLR3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMICLR*)0xF000556Cu)

/** \brief  570, RMIOV Clear Register */
#define PSI5_RMICLR4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMICLR*)0xF0005570u)

/** \brief  420, RMI Overview Register */
#define PSI5_RMIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMIOV*)0xF0005420u)

/** \brief  424, RMI Overview Register */
#define PSI5_RMIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMIOV*)0xF0005424u)

/** \brief  428, RMI Overview Register */
#define PSI5_RMIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMIOV*)0xF0005428u)

/** \brief  42C, RMI Overview Register */
#define PSI5_RMIOV3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMIOV*)0xF000542Cu)

/** \brief  430, RMI Overview Register */
#define PSI5_RMIOV4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMIOV*)0xF0005430u)

/** \brief  4C0, RMIOV Set Register */
#define PSI5_RMISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMISET*)0xF00054C0u)

/** \brief  4C4, RMIOV Set Register */
#define PSI5_RMISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMISET*)0xF00054C4u)

/** \brief  4C8, RMIOV Set Register */
#define PSI5_RMISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMISET*)0xF00054C8u)

/** \brief  4CC, RMIOV Set Register */
#define PSI5_RMISET3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMISET*)0xF00054CCu)

/** \brief  4D0, RMIOV Set Register */
#define PSI5_RMISET4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RMISET*)0xF00054D0u)

/** \brief  54C, RSIOV Clear Register */
#define PSI5_RSICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSICLR*)0xF000554Cu)

/** \brief  550, RSIOV Clear Register */
#define PSI5_RSICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSICLR*)0xF0005550u)

/** \brief  554, RSIOV Clear Register */
#define PSI5_RSICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSICLR*)0xF0005554u)

/** \brief  558, RSIOV Clear Register */
#define PSI5_RSICLR3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSICLR*)0xF0005558u)

/** \brief  55C, RSIOV Clear Register */
#define PSI5_RSICLR4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSICLR*)0xF000555Cu)

/** \brief  40C, RSI Overview Register */
#define PSI5_RSIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSIOV*)0xF000540Cu)

/** \brief  410, RSI Overview Register */
#define PSI5_RSIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSIOV*)0xF0005410u)

/** \brief  414, RSI Overview Register */
#define PSI5_RSIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSIOV*)0xF0005414u)

/** \brief  418, RSI Overview Register */
#define PSI5_RSIOV3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSIOV*)0xF0005418u)

/** \brief  41C, RSI Overview Register */
#define PSI5_RSIOV4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSIOV*)0xF000541Cu)

/** \brief  4AC, RSIOV Set Register */
#define PSI5_RSISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSISET*)0xF00054ACu)

/** \brief  4B0, RSIOV Set Register */
#define PSI5_RSISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSISET*)0xF00054B0u)

/** \brief  4B4, RSIOV Set Register */
#define PSI5_RSISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSISET*)0xF00054B4u)

/** \brief  4B8, RSIOV Set Register */
#define PSI5_RSISET3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSISET*)0xF00054B8u)

/** \brief  4BC, RSIOV Set Register */
#define PSI5_RSISET4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_RSISET*)0xF00054BCu)

/** \brief  588, TEIOV Clear Register */
#define PSI5_TEICLR0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEICLR*)0xF0005588u)

/** \brief  58C, TEIOV Clear Register */
#define PSI5_TEICLR1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEICLR*)0xF000558Cu)

/** \brief  590, TEIOV Clear Register */
#define PSI5_TEICLR2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEICLR*)0xF0005590u)

/** \brief  594, TEIOV Clear Register */
#define PSI5_TEICLR3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEICLR*)0xF0005594u)

/** \brief  598, TEIOV Clear Register */
#define PSI5_TEICLR4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEICLR*)0xF0005598u)

/** \brief  448, TEI Overview Register */
#define PSI5_TEIOV0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEIOV*)0xF0005448u)

/** \brief  44C, TEI Overview Register */
#define PSI5_TEIOV1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEIOV*)0xF000544Cu)

/** \brief  450, TEI Overview Register */
#define PSI5_TEIOV2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEIOV*)0xF0005450u)

/** \brief  454, TEI Overview Register */
#define PSI5_TEIOV3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEIOV*)0xF0005454u)

/** \brief  458, TEI Overview Register */
#define PSI5_TEIOV4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEIOV*)0xF0005458u)

/** \brief  4E8, TEIOV Set Register */
#define PSI5_TEISET0 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEISET*)0xF00054E8u)

/** \brief  4EC, TEIOV Set Register */
#define PSI5_TEISET1 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEISET*)0xF00054ECu)

/** \brief  4F0, TEIOV Set Register */
#define PSI5_TEISET2 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEISET*)0xF00054F0u)

/** \brief  4F4, TEIOV Set Register */
#define PSI5_TEISET3 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEISET*)0xF00054F4u)

/** \brief  4F8, TEIOV Set Register */
#define PSI5_TEISET4 /*lint --e(923)*/ (*(volatile Ifx_PSI5_TEISET*)0xF00054F8u)

/** \brief  1C, Time Stamp Register A */
#define PSI5_TSRA /*lint --e(923)*/ (*(volatile Ifx_PSI5_TSR*)0xF000501Cu)

/** \brief  20, Time Stamp Register B */
#define PSI5_TSRB /*lint --e(923)*/ (*(volatile Ifx_PSI5_TSR*)0xF0005020u)

/** \brief  24, Time Stamp Register C */
#define PSI5_TSRC /*lint --e(923)*/ (*(volatile Ifx_PSI5_TSR*)0xF0005024u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXPSI5_REG_H */
