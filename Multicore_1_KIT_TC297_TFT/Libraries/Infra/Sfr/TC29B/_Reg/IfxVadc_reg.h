/**
 * \file IfxVadc_reg.h
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
 * \defgroup IfxLld_Vadc_Cfg Vadc address
 * \ingroup IfxLld_Vadc
 * 
 * \defgroup IfxLld_Vadc_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Vadc_Cfg
 * 
 * \defgroup IfxLld_Vadc_Cfg_Vadc 2-VADC
 * \ingroup IfxLld_Vadc_Cfg
 * 
 */
#ifndef IFXVADC_REG_H
#define IFXVADC_REG_H 1
/******************************************************************************/
#include "IfxVadc_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Vadc_Cfg_BaseAddress
 * \{  */

/** \brief  VADC object */
#define MODULE_VADC /*lint --e(923)*/ (*(Ifx_VADC*)0xF0020000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Vadc_Cfg_Vadc
 * \{  */

/** \brief  3C, Access Enable Register 0 */
#define VADC_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ACCEN0*)0xF002003Cu)

/** \brief  88, Access Protection Register */
#define VADC_ACCPROT0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ACCPROT0*)0xF0020088u)

/** \brief  8C, Access Protection Register */
#define VADC_ACCPROT1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ACCPROT1*)0xF002008Cu)

/** \brief  200, Background Request Source Control Register */
#define VADC_BRSCTRL /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSCTRL*)0xF0020200u)

/** \brief  204, Background Request Source Mode Register */
#define VADC_BRSMR /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSMR*)0xF0020204u)

/** \brief  1C0, Background Request Source Pending Register, Group */
#define VADC_BRSPND0 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSPND*)0xF00201C0u)

/** \brief  1C4, Background Request Source Pending Register, Group */
#define VADC_BRSPND1 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSPND*)0xF00201C4u)

/** \brief  1E8, Background Request Source Pending Register, Group */
#define VADC_BRSPND10 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSPND*)0xF00201E8u)

/** \brief  1C8, Background Request Source Pending Register, Group */
#define VADC_BRSPND2 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSPND*)0xF00201C8u)

/** \brief  1CC, Background Request Source Pending Register, Group */
#define VADC_BRSPND3 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSPND*)0xF00201CCu)

/** \brief  1D0, Background Request Source Pending Register, Group */
#define VADC_BRSPND4 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSPND*)0xF00201D0u)

/** \brief  1D4, Background Request Source Pending Register, Group */
#define VADC_BRSPND5 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSPND*)0xF00201D4u)

/** \brief  1D8, Background Request Source Pending Register, Group */
#define VADC_BRSPND6 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSPND*)0xF00201D8u)

/** \brief  1DC, Background Request Source Pending Register, Group */
#define VADC_BRSPND7 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSPND*)0xF00201DCu)

/** \brief  1E0, Background Request Source Pending Register, Group */
#define VADC_BRSPND8 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSPND*)0xF00201E0u)

/** \brief  1E4, Background Request Source Pending Register, Group */
#define VADC_BRSPND9 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSPND*)0xF00201E4u)

/** \brief  180, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL0 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSSEL*)0xF0020180u)

/** \brief  184, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL1 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSSEL*)0xF0020184u)

/** \brief  1A8, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL10 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSSEL*)0xF00201A8u)

/** \brief  188, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL2 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSSEL*)0xF0020188u)

/** \brief  18C, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL3 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSSEL*)0xF002018Cu)

/** \brief  190, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL4 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSSEL*)0xF0020190u)

/** \brief  194, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL5 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSSEL*)0xF0020194u)

/** \brief  198, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL6 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSSEL*)0xF0020198u)

/** \brief  19C, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL7 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSSEL*)0xF002019Cu)

/** \brief  1A0, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL8 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSSEL*)0xF00201A0u)

/** \brief  1A4, Background Request Source Channel Select Register, Group */
#define VADC_BRSSEL9 /*lint --e(923)*/ (*(volatile Ifx_VADC_BRSSEL*)0xF00201A4u)

/** \brief  0, Clock Control Register */
#define VADC_CLC /*lint --e(923)*/ (*(volatile Ifx_VADC_CLC*)0xF0020000u)

/** \brief  3F0, External Multiplexer Select Register */
#define VADC_EMUXSEL /*lint --e(923)*/ (*(volatile Ifx_VADC_EMUXSEL*)0xF00203F0u)

/** \brief  4B0, Alias Register, Group */
#define VADC_G0_ALIAS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ALIAS*)0xF00204B0u)

/** Alias (User Manual Name) for VADC_G0_ALIAS.
* To use register names with standard convension, please use VADC_G0_ALIAS.
*/
#define	VADC_G0ALIAS	(VADC_G0_ALIAS)

/** \brief  480, Arbitration Configuration Register, Group */
#define VADC_G0_ARBCFG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBCFG*)0xF0020480u)

/** Alias (User Manual Name) for VADC_G0_ARBCFG.
* To use register names with standard convension, please use VADC_G0_ARBCFG.
*/
#define	VADC_G0ARBCFG	(VADC_G0_ARBCFG)

/** \brief  484, Arbitration Priority Register, Group */
#define VADC_G0_ARBPR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBPR*)0xF0020484u)

/** Alias (User Manual Name) for VADC_G0_ARBPR.
* To use register names with standard convension, please use VADC_G0_ARBPR.
*/
#define	VADC_G0ARBPR	(VADC_G0_ARBPR)

/** \brief  520, Autoscan Source Control Register, Group */
#define VADC_G0_ASCTRL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASCTRL*)0xF0020520u)

/** Alias (User Manual Name) for VADC_G0_ASCTRL.
* To use register names with standard convension, please use VADC_G0_ASCTRL.
*/
#define	VADC_G0ASCTRL	(VADC_G0_ASCTRL)

/** \brief  524, Autoscan Source Mode Register, Group */
#define VADC_G0_ASMR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASMR*)0xF0020524u)

/** Alias (User Manual Name) for VADC_G0_ASMR.
* To use register names with standard convension, please use VADC_G0_ASMR.
*/
#define	VADC_G0ASMR	(VADC_G0_ASMR)

/** \brief  52C, Autoscan Source Pending Register, Group */
#define VADC_G0_ASPND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASPND*)0xF002052Cu)

/** Alias (User Manual Name) for VADC_G0_ASPND.
* To use register names with standard convension, please use VADC_G0_ASPND.
*/
#define	VADC_G0ASPND	(VADC_G0_ASPND)

/** \brief  528, Autoscan Source Channel Select Register, Group */
#define VADC_G0_ASSEL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASSEL*)0xF0020528u)

/** Alias (User Manual Name) for VADC_G0_ASSEL.
* To use register names with standard convension, please use VADC_G0_ASSEL.
*/
#define	VADC_G0ASSEL	(VADC_G0_ASSEL)

/** \brief  4C8, Boundary Flag Register, Group */
#define VADC_G0_BFL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFL*)0xF00204C8u)

/** Alias (User Manual Name) for VADC_G0_BFL.
* To use register names with standard convension, please use VADC_G0_BFL.
*/
#define	VADC_G0BFL	(VADC_G0_BFL)

/** \brief  4D0, Boundary Flag Control Register, Group */
#define VADC_G0_BFLC /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLC*)0xF00204D0u)

/** Alias (User Manual Name) for VADC_G0_BFLC.
* To use register names with standard convension, please use VADC_G0_BFLC.
*/
#define	VADC_G0BFLC	(VADC_G0_BFLC)

/** \brief  4D4, Boundary Flag Node Pointer Register, Group */
#define VADC_G0_BFLNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLNP*)0xF00204D4u)

/** Alias (User Manual Name) for VADC_G0_BFLNP.
* To use register names with standard convension, please use VADC_G0_BFLNP.
*/
#define	VADC_G0BFLNP	(VADC_G0_BFLNP)

/** \brief  4CC, Boundary Flag Software Register, Group */
#define VADC_G0_BFLS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLS*)0xF00204CCu)

/** Alias (User Manual Name) for VADC_G0_BFLS.
* To use register names with standard convension, please use VADC_G0_BFLS.
*/
#define	VADC_G0BFLS	(VADC_G0_BFLS)

/** \brief  4B8, Boundary Select Register, Group */
#define VADC_G0_BOUND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BOUND*)0xF00204B8u)

/** Alias (User Manual Name) for VADC_G0_BOUND.
* To use register names with standard convension, please use VADC_G0_BOUND.
*/
#define	VADC_G0BOUND	(VADC_G0_BOUND)

/** \brief  590, Channel Event Flag Clear Register, Group */
#define VADC_G0_CEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFCLR*)0xF0020590u)

/** Alias (User Manual Name) for VADC_G0_CEFCLR.
* To use register names with standard convension, please use VADC_G0_CEFCLR.
*/
#define	VADC_G0CEFCLR	(VADC_G0_CEFCLR)

/** \brief  580, Channel Event Flag Register, Group */
#define VADC_G0_CEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFLAG*)0xF0020580u)

/** Alias (User Manual Name) for VADC_G0_CEFLAG.
* To use register names with standard convension, please use VADC_G0_CEFLAG.
*/
#define	VADC_G0CEFLAG	(VADC_G0_CEFLAG)

/** \brief  5A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G0_CEVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEVNP0*)0xF00205A0u)

/** Alias (User Manual Name) for VADC_G0_CEVNP0.
* To use register names with standard convension, please use VADC_G0_CEVNP0.
*/
#define	VADC_G0CEVNP0	(VADC_G0_CEVNP0)

/** \brief  488, Channel Assignment Register, Group */
#define VADC_G0_CHASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHASS*)0xF0020488u)

/** Alias (User Manual Name) for VADC_G0_CHASS.
* To use register names with standard convension, please use VADC_G0_CHASS.
*/
#define	VADC_G0CHASS	(VADC_G0_CHASS)

/** \brief  600, Group, Channel Ctrl. Reg. */
#define VADC_G0_CHCTR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020600u)

/** Alias (User Manual Name) for VADC_G0_CHCTR0.
* To use register names with standard convension, please use VADC_G0_CHCTR0.
*/
#define	VADC_G0CHCTR0	(VADC_G0_CHCTR0)

/** \brief  604, Group, Channel Ctrl. Reg. */
#define VADC_G0_CHCTR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020604u)

/** Alias (User Manual Name) for VADC_G0_CHCTR1.
* To use register names with standard convension, please use VADC_G0_CHCTR1.
*/
#define	VADC_G0CHCTR1	(VADC_G0_CHCTR1)

/** \brief  608, Group, Channel Ctrl. Reg. */
#define VADC_G0_CHCTR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020608u)

/** Alias (User Manual Name) for VADC_G0_CHCTR2.
* To use register names with standard convension, please use VADC_G0_CHCTR2.
*/
#define	VADC_G0CHCTR2	(VADC_G0_CHCTR2)

/** \brief  60C, Group, Channel Ctrl. Reg. */
#define VADC_G0_CHCTR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF002060Cu)

/** Alias (User Manual Name) for VADC_G0_CHCTR3.
* To use register names with standard convension, please use VADC_G0_CHCTR3.
*/
#define	VADC_G0CHCTR3	(VADC_G0_CHCTR3)

/** \brief  610, Group, Channel Ctrl. Reg. */
#define VADC_G0_CHCTR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020610u)

/** Alias (User Manual Name) for VADC_G0_CHCTR4.
* To use register names with standard convension, please use VADC_G0_CHCTR4.
*/
#define	VADC_G0CHCTR4	(VADC_G0_CHCTR4)

/** \brief  614, Group, Channel Ctrl. Reg. */
#define VADC_G0_CHCTR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020614u)

/** Alias (User Manual Name) for VADC_G0_CHCTR5.
* To use register names with standard convension, please use VADC_G0_CHCTR5.
*/
#define	VADC_G0CHCTR5	(VADC_G0_CHCTR5)

/** \brief  618, Group, Channel Ctrl. Reg. */
#define VADC_G0_CHCTR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020618u)

/** Alias (User Manual Name) for VADC_G0_CHCTR6.
* To use register names with standard convension, please use VADC_G0_CHCTR6.
*/
#define	VADC_G0CHCTR6	(VADC_G0_CHCTR6)

/** \brief  61C, Group, Channel Ctrl. Reg. */
#define VADC_G0_CHCTR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF002061Cu)

/** Alias (User Manual Name) for VADC_G0_CHCTR7.
* To use register names with standard convension, please use VADC_G0_CHCTR7.
*/
#define	VADC_G0CHCTR7	(VADC_G0_CHCTR7)

/** \brief  5F0, External Multiplexer Control Register, Group x */
#define VADC_G0_EMUXCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_EMUXCTR*)0xF00205F0u)

/** Alias (User Manual Name) for VADC_G0_EMUXCTR.
* To use register names with standard convension, please use VADC_G0_EMUXCTR.
*/
#define	VADC_G0EMUXCTR	(VADC_G0_EMUXCTR)

/** \brief  4A0, Input Class Register */
#define VADC_G0_ICLASS0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00204A0u)

/** Alias (User Manual Name) for VADC_G0_ICLASS0.
* To use register names with standard convension, please use VADC_G0_ICLASS0.
*/
#define	VADC_G0ICLASS0	(VADC_G0_ICLASS0)

/** \brief  4A4, Input Class Register */
#define VADC_G0_ICLASS1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00204A4u)

/** Alias (User Manual Name) for VADC_G0_ICLASS1.
* To use register names with standard convension, please use VADC_G0_ICLASS1.
*/
#define	VADC_G0ICLASS1	(VADC_G0_ICLASS1)

/** \brief  50C, Queue 0 Register 0, Group */
#define VADC_G0_Q0R0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_Q0R0*)0xF002050Cu)

/** Alias (User Manual Name) for VADC_G0_Q0R0.
* To use register names with standard convension, please use VADC_G0_Q0R0.
*/
#define	VADC_G0Q0R0	(VADC_G0_Q0R0)

/** \brief  510, Queue 0 Input Register, Group */
#define VADC_G0_QBUR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QBUR0*)0xF0020510u)

/** Alias (User Manual Name) for VADC_G0_QBUR0.
* To use register names with standard convension, please use VADC_G0_QBUR0.
*/
#define	VADC_G0QBUR0	(VADC_G0_QBUR0)

/** \brief  500, Queue 0 Source Control Register, Group */
#define VADC_G0_QCTRL0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QCTRL0*)0xF0020500u)

/** Alias (User Manual Name) for VADC_G0_QCTRL0.
* To use register names with standard convension, please use VADC_G0_QCTRL0.
*/
#define	VADC_G0QCTRL0	(VADC_G0_QCTRL0)

/** \brief  510, Queue 0 Input Register, Group */
#define VADC_G0_QINR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QINR0*)0xF0020510u)

/** Alias (User Manual Name) for VADC_G0_QINR0.
* To use register names with standard convension, please use VADC_G0_QINR0.
*/
#define	VADC_G0QINR0	(VADC_G0_QINR0)

/** \brief  504, Queue 0 Mode Register, Group */
#define VADC_G0_QMR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QMR0*)0xF0020504u)

/** Alias (User Manual Name) for VADC_G0_QMR0.
* To use register names with standard convension, please use VADC_G0_QMR0.
*/
#define	VADC_G0QMR0	(VADC_G0_QMR0)

/** \brief  508, Queue 0 Status Register, Group */
#define VADC_G0_QSR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QSR0*)0xF0020508u)

/** Alias (User Manual Name) for VADC_G0_QSR0.
* To use register names with standard convension, please use VADC_G0_QSR0.
*/
#define	VADC_G0QSR0	(VADC_G0_QSR0)

/** \brief  680, Group Result Control Reg. */
#define VADC_G0_RCR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020680u)

/** Alias (User Manual Name) for VADC_G0_RCR0.
* To use register names with standard convension, please use VADC_G0_RCR0.
*/
#define	VADC_G0RCR0	(VADC_G0_RCR0)

/** \brief  684, Group Result Control Reg. */
#define VADC_G0_RCR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020684u)

/** Alias (User Manual Name) for VADC_G0_RCR1.
* To use register names with standard convension, please use VADC_G0_RCR1.
*/
#define	VADC_G0RCR1	(VADC_G0_RCR1)

/** \brief  6A8, Group Result Control Reg. */
#define VADC_G0_RCR10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00206A8u)

/** Alias (User Manual Name) for VADC_G0_RCR10.
* To use register names with standard convension, please use VADC_G0_RCR10.
*/
#define	VADC_G0RCR10	(VADC_G0_RCR10)

/** \brief  6AC, Group Result Control Reg. */
#define VADC_G0_RCR11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00206ACu)

/** Alias (User Manual Name) for VADC_G0_RCR11.
* To use register names with standard convension, please use VADC_G0_RCR11.
*/
#define	VADC_G0RCR11	(VADC_G0_RCR11)

/** \brief  6B0, Group Result Control Reg. */
#define VADC_G0_RCR12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00206B0u)

/** Alias (User Manual Name) for VADC_G0_RCR12.
* To use register names with standard convension, please use VADC_G0_RCR12.
*/
#define	VADC_G0RCR12	(VADC_G0_RCR12)

/** \brief  6B4, Group Result Control Reg. */
#define VADC_G0_RCR13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00206B4u)

/** Alias (User Manual Name) for VADC_G0_RCR13.
* To use register names with standard convension, please use VADC_G0_RCR13.
*/
#define	VADC_G0RCR13	(VADC_G0_RCR13)

/** \brief  6B8, Group Result Control Reg. */
#define VADC_G0_RCR14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00206B8u)

/** Alias (User Manual Name) for VADC_G0_RCR14.
* To use register names with standard convension, please use VADC_G0_RCR14.
*/
#define	VADC_G0RCR14	(VADC_G0_RCR14)

/** \brief  6BC, Group Result Control Reg. */
#define VADC_G0_RCR15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00206BCu)

/** Alias (User Manual Name) for VADC_G0_RCR15.
* To use register names with standard convension, please use VADC_G0_RCR15.
*/
#define	VADC_G0RCR15	(VADC_G0_RCR15)

/** \brief  688, Group Result Control Reg. */
#define VADC_G0_RCR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020688u)

/** Alias (User Manual Name) for VADC_G0_RCR2.
* To use register names with standard convension, please use VADC_G0_RCR2.
*/
#define	VADC_G0RCR2	(VADC_G0_RCR2)

/** \brief  68C, Group Result Control Reg. */
#define VADC_G0_RCR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF002068Cu)

/** Alias (User Manual Name) for VADC_G0_RCR3.
* To use register names with standard convension, please use VADC_G0_RCR3.
*/
#define	VADC_G0RCR3	(VADC_G0_RCR3)

/** \brief  690, Group Result Control Reg. */
#define VADC_G0_RCR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020690u)

/** Alias (User Manual Name) for VADC_G0_RCR4.
* To use register names with standard convension, please use VADC_G0_RCR4.
*/
#define	VADC_G0RCR4	(VADC_G0_RCR4)

/** \brief  694, Group Result Control Reg. */
#define VADC_G0_RCR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020694u)

/** Alias (User Manual Name) for VADC_G0_RCR5.
* To use register names with standard convension, please use VADC_G0_RCR5.
*/
#define	VADC_G0RCR5	(VADC_G0_RCR5)

/** \brief  698, Group Result Control Reg. */
#define VADC_G0_RCR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020698u)

/** Alias (User Manual Name) for VADC_G0_RCR6.
* To use register names with standard convension, please use VADC_G0_RCR6.
*/
#define	VADC_G0RCR6	(VADC_G0_RCR6)

/** \brief  69C, Group Result Control Reg. */
#define VADC_G0_RCR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF002069Cu)

/** Alias (User Manual Name) for VADC_G0_RCR7.
* To use register names with standard convension, please use VADC_G0_RCR7.
*/
#define	VADC_G0RCR7	(VADC_G0_RCR7)

/** \brief  6A0, Group Result Control Reg. */
#define VADC_G0_RCR8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00206A0u)

/** Alias (User Manual Name) for VADC_G0_RCR8.
* To use register names with standard convension, please use VADC_G0_RCR8.
*/
#define	VADC_G0RCR8	(VADC_G0_RCR8)

/** \brief  6A4, Group Result Control Reg. */
#define VADC_G0_RCR9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00206A4u)

/** Alias (User Manual Name) for VADC_G0_RCR9.
* To use register names with standard convension, please use VADC_G0_RCR9.
*/
#define	VADC_G0RCR9	(VADC_G0_RCR9)

/** \brief  594, Result Event Flag Clear Register, Group */
#define VADC_G0_REFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFCLR*)0xF0020594u)

/** Alias (User Manual Name) for VADC_G0_REFCLR.
* To use register names with standard convension, please use VADC_G0_REFCLR.
*/
#define	VADC_G0REFCLR	(VADC_G0_REFCLR)

/** \brief  584, Result Event Flag Register, Group */
#define VADC_G0_REFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFLAG*)0xF0020584u)

/** Alias (User Manual Name) for VADC_G0_REFLAG.
* To use register names with standard convension, please use VADC_G0_REFLAG.
*/
#define	VADC_G0REFLAG	(VADC_G0_REFLAG)

/** \brief  700, Group Result Register */
#define VADC_G0_RES0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020700u)

/** Alias (User Manual Name) for VADC_G0_RES0.
* To use register names with standard convension, please use VADC_G0_RES0.
*/
#define	VADC_G0RES0	(VADC_G0_RES0)

/** \brief  704, Group Result Register */
#define VADC_G0_RES1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020704u)

/** Alias (User Manual Name) for VADC_G0_RES1.
* To use register names with standard convension, please use VADC_G0_RES1.
*/
#define	VADC_G0RES1	(VADC_G0_RES1)

/** \brief  728, Group Result Register */
#define VADC_G0_RES10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020728u)

/** Alias (User Manual Name) for VADC_G0_RES10.
* To use register names with standard convension, please use VADC_G0_RES10.
*/
#define	VADC_G0RES10	(VADC_G0_RES10)

/** \brief  72C, Group Result Register */
#define VADC_G0_RES11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002072Cu)

/** Alias (User Manual Name) for VADC_G0_RES11.
* To use register names with standard convension, please use VADC_G0_RES11.
*/
#define	VADC_G0RES11	(VADC_G0_RES11)

/** \brief  730, Group Result Register */
#define VADC_G0_RES12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020730u)

/** Alias (User Manual Name) for VADC_G0_RES12.
* To use register names with standard convension, please use VADC_G0_RES12.
*/
#define	VADC_G0RES12	(VADC_G0_RES12)

/** \brief  734, Group Result Register */
#define VADC_G0_RES13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020734u)

/** Alias (User Manual Name) for VADC_G0_RES13.
* To use register names with standard convension, please use VADC_G0_RES13.
*/
#define	VADC_G0RES13	(VADC_G0_RES13)

/** \brief  738, Group Result Register */
#define VADC_G0_RES14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020738u)

/** Alias (User Manual Name) for VADC_G0_RES14.
* To use register names with standard convension, please use VADC_G0_RES14.
*/
#define	VADC_G0RES14	(VADC_G0_RES14)

/** \brief  73C, Group Result Register */
#define VADC_G0_RES15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002073Cu)

/** Alias (User Manual Name) for VADC_G0_RES15.
* To use register names with standard convension, please use VADC_G0_RES15.
*/
#define	VADC_G0RES15	(VADC_G0_RES15)

/** \brief  708, Group Result Register */
#define VADC_G0_RES2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020708u)

/** Alias (User Manual Name) for VADC_G0_RES2.
* To use register names with standard convension, please use VADC_G0_RES2.
*/
#define	VADC_G0RES2	(VADC_G0_RES2)

/** \brief  70C, Group Result Register */
#define VADC_G0_RES3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002070Cu)

/** Alias (User Manual Name) for VADC_G0_RES3.
* To use register names with standard convension, please use VADC_G0_RES3.
*/
#define	VADC_G0RES3	(VADC_G0_RES3)

/** \brief  710, Group Result Register */
#define VADC_G0_RES4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020710u)

/** Alias (User Manual Name) for VADC_G0_RES4.
* To use register names with standard convension, please use VADC_G0_RES4.
*/
#define	VADC_G0RES4	(VADC_G0_RES4)

/** \brief  714, Group Result Register */
#define VADC_G0_RES5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020714u)

/** Alias (User Manual Name) for VADC_G0_RES5.
* To use register names with standard convension, please use VADC_G0_RES5.
*/
#define	VADC_G0RES5	(VADC_G0_RES5)

/** \brief  718, Group Result Register */
#define VADC_G0_RES6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020718u)

/** Alias (User Manual Name) for VADC_G0_RES6.
* To use register names with standard convension, please use VADC_G0_RES6.
*/
#define	VADC_G0RES6	(VADC_G0_RES6)

/** \brief  71C, Group Result Register */
#define VADC_G0_RES7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002071Cu)

/** Alias (User Manual Name) for VADC_G0_RES7.
* To use register names with standard convension, please use VADC_G0_RES7.
*/
#define	VADC_G0RES7	(VADC_G0_RES7)

/** \brief  720, Group Result Register */
#define VADC_G0_RES8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020720u)

/** Alias (User Manual Name) for VADC_G0_RES8.
* To use register names with standard convension, please use VADC_G0_RES8.
*/
#define	VADC_G0RES8	(VADC_G0_RES8)

/** \brief  724, Group Result Register */
#define VADC_G0_RES9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020724u)

/** Alias (User Manual Name) for VADC_G0_RES9.
* To use register names with standard convension, please use VADC_G0_RES9.
*/
#define	VADC_G0RES9	(VADC_G0_RES9)

/** \brief  780, Group Result Reg., Debug */
#define VADC_G0_RESD0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020780u)

/** Alias (User Manual Name) for VADC_G0_RESD0.
* To use register names with standard convension, please use VADC_G0_RESD0.
*/
#define	VADC_G0RESD0	(VADC_G0_RESD0)

/** \brief  784, Group Result Reg., Debug */
#define VADC_G0_RESD1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020784u)

/** Alias (User Manual Name) for VADC_G0_RESD1.
* To use register names with standard convension, please use VADC_G0_RESD1.
*/
#define	VADC_G0RESD1	(VADC_G0_RESD1)

/** \brief  7A8, Group Result Reg., Debug */
#define VADC_G0_RESD10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00207A8u)

/** Alias (User Manual Name) for VADC_G0_RESD10.
* To use register names with standard convension, please use VADC_G0_RESD10.
*/
#define	VADC_G0RESD10	(VADC_G0_RESD10)

/** \brief  7AC, Group Result Reg., Debug */
#define VADC_G0_RESD11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00207ACu)

/** Alias (User Manual Name) for VADC_G0_RESD11.
* To use register names with standard convension, please use VADC_G0_RESD11.
*/
#define	VADC_G0RESD11	(VADC_G0_RESD11)

/** \brief  7B0, Group Result Reg., Debug */
#define VADC_G0_RESD12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00207B0u)

/** Alias (User Manual Name) for VADC_G0_RESD12.
* To use register names with standard convension, please use VADC_G0_RESD12.
*/
#define	VADC_G0RESD12	(VADC_G0_RESD12)

/** \brief  7B4, Group Result Reg., Debug */
#define VADC_G0_RESD13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00207B4u)

/** Alias (User Manual Name) for VADC_G0_RESD13.
* To use register names with standard convension, please use VADC_G0_RESD13.
*/
#define	VADC_G0RESD13	(VADC_G0_RESD13)

/** \brief  7B8, Group Result Reg., Debug */
#define VADC_G0_RESD14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00207B8u)

/** Alias (User Manual Name) for VADC_G0_RESD14.
* To use register names with standard convension, please use VADC_G0_RESD14.
*/
#define	VADC_G0RESD14	(VADC_G0_RESD14)

/** \brief  7BC, Group Result Reg., Debug */
#define VADC_G0_RESD15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00207BCu)

/** Alias (User Manual Name) for VADC_G0_RESD15.
* To use register names with standard convension, please use VADC_G0_RESD15.
*/
#define	VADC_G0RESD15	(VADC_G0_RESD15)

/** \brief  788, Group Result Reg., Debug */
#define VADC_G0_RESD2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020788u)

/** Alias (User Manual Name) for VADC_G0_RESD2.
* To use register names with standard convension, please use VADC_G0_RESD2.
*/
#define	VADC_G0RESD2	(VADC_G0_RESD2)

/** \brief  78C, Group Result Reg., Debug */
#define VADC_G0_RESD3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF002078Cu)

/** Alias (User Manual Name) for VADC_G0_RESD3.
* To use register names with standard convension, please use VADC_G0_RESD3.
*/
#define	VADC_G0RESD3	(VADC_G0_RESD3)

/** \brief  790, Group Result Reg., Debug */
#define VADC_G0_RESD4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020790u)

/** Alias (User Manual Name) for VADC_G0_RESD4.
* To use register names with standard convension, please use VADC_G0_RESD4.
*/
#define	VADC_G0RESD4	(VADC_G0_RESD4)

/** \brief  794, Group Result Reg., Debug */
#define VADC_G0_RESD5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020794u)

/** Alias (User Manual Name) for VADC_G0_RESD5.
* To use register names with standard convension, please use VADC_G0_RESD5.
*/
#define	VADC_G0RESD5	(VADC_G0_RESD5)

/** \brief  798, Group Result Reg., Debug */
#define VADC_G0_RESD6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020798u)

/** Alias (User Manual Name) for VADC_G0_RESD6.
* To use register names with standard convension, please use VADC_G0_RESD6.
*/
#define	VADC_G0RESD6	(VADC_G0_RESD6)

/** \brief  79C, Group Result Reg., Debug */
#define VADC_G0_RESD7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF002079Cu)

/** Alias (User Manual Name) for VADC_G0_RESD7.
* To use register names with standard convension, please use VADC_G0_RESD7.
*/
#define	VADC_G0RESD7	(VADC_G0_RESD7)

/** \brief  7A0, Group Result Reg., Debug */
#define VADC_G0_RESD8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00207A0u)

/** Alias (User Manual Name) for VADC_G0_RESD8.
* To use register names with standard convension, please use VADC_G0_RESD8.
*/
#define	VADC_G0RESD8	(VADC_G0_RESD8)

/** \brief  7A4, Group Result Reg., Debug */
#define VADC_G0_RESD9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00207A4u)

/** Alias (User Manual Name) for VADC_G0_RESD9.
* To use register names with standard convension, please use VADC_G0_RESD9.
*/
#define	VADC_G0RESD9	(VADC_G0_RESD9)

/** \brief  5B0, Result Event Node Pointer Register 0, Group */
#define VADC_G0_REVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP0*)0xF00205B0u)

/** Alias (User Manual Name) for VADC_G0_REVNP0.
* To use register names with standard convension, please use VADC_G0_REVNP0.
*/
#define	VADC_G0REVNP0	(VADC_G0_REVNP0)

/** \brief  5B4, Result Event Node Pointer Register 1, Group */
#define VADC_G0_REVNP1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP1*)0xF00205B4u)

/** Alias (User Manual Name) for VADC_G0_REVNP1.
* To use register names with standard convension, please use VADC_G0_REVNP1.
*/
#define	VADC_G0REVNP1	(VADC_G0_REVNP1)

/** \brief  48C, Result Assignment Register, Group */
#define VADC_G0_RRASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RRASS*)0xF002048Cu)

/** Alias (User Manual Name) for VADC_G0_RRASS.
* To use register names with standard convension, please use VADC_G0_RRASS.
*/
#define	VADC_G0RRASS	(VADC_G0_RRASS)

/** \brief  598, Source Event Flag Clear Register, Group */
#define VADC_G0_SEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFCLR*)0xF0020598u)

/** Alias (User Manual Name) for VADC_G0_SEFCLR.
* To use register names with standard convension, please use VADC_G0_SEFCLR.
*/
#define	VADC_G0SEFCLR	(VADC_G0_SEFCLR)

/** \brief  588, Source Event Flag Register, Group */
#define VADC_G0_SEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFLAG*)0xF0020588u)

/** Alias (User Manual Name) for VADC_G0_SEFLAG.
* To use register names with standard convension, please use VADC_G0_SEFLAG.
*/
#define	VADC_G0SEFLAG	(VADC_G0_SEFLAG)

/** \brief  5C0, Source Event Node Pointer Register, Group */
#define VADC_G0_SEVNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEVNP*)0xF00205C0u)

/** Alias (User Manual Name) for VADC_G0_SEVNP.
* To use register names with standard convension, please use VADC_G0_SEVNP.
*/
#define	VADC_G0SEVNP	(VADC_G0_SEVNP)

/** \brief  5C8, Service Request Software Activation Trigger, Group */
#define VADC_G0_SRACT /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SRACT*)0xF00205C8u)

/** Alias (User Manual Name) for VADC_G0_SRACT.
* To use register names with standard convension, please use VADC_G0_SRACT.
*/
#define	VADC_G0SRACT	(VADC_G0_SRACT)

/** \brief  4C0, Synchronization Control Register, Group */
#define VADC_G0_SYNCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SYNCTR*)0xF00204C0u)

/** Alias (User Manual Name) for VADC_G0_SYNCTR.
* To use register names with standard convension, please use VADC_G0_SYNCTR.
*/
#define	VADC_G0SYNCTR	(VADC_G0_SYNCTR)

/** \brief  5F8, Valid Flag Register, Group */
#define VADC_G0_VFR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_VFR*)0xF00205F8u)

/** Alias (User Manual Name) for VADC_G0_VFR.
* To use register names with standard convension, please use VADC_G0_VFR.
*/
#define	VADC_G0VFR	(VADC_G0_VFR)

/** \brief  2CB0, Alias Register, Group */
#define VADC_G10_ALIAS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ALIAS*)0xF0022CB0u)

/** Alias (User Manual Name) for VADC_G10_ALIAS.
* To use register names with standard convension, please use VADC_G10_ALIAS.
*/
#define	VADC_G10ALIAS	(VADC_G10_ALIAS)

/** \brief  2C80, Arbitration Configuration Register, Group */
#define VADC_G10_ARBCFG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBCFG*)0xF0022C80u)

/** Alias (User Manual Name) for VADC_G10_ARBCFG.
* To use register names with standard convension, please use VADC_G10_ARBCFG.
*/
#define	VADC_G10ARBCFG	(VADC_G10_ARBCFG)

/** \brief  2C84, Arbitration Priority Register, Group */
#define VADC_G10_ARBPR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBPR*)0xF0022C84u)

/** Alias (User Manual Name) for VADC_G10_ARBPR.
* To use register names with standard convension, please use VADC_G10_ARBPR.
*/
#define	VADC_G10ARBPR	(VADC_G10_ARBPR)

/** \brief  2D20, Autoscan Source Control Register, Group */
#define VADC_G10_ASCTRL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASCTRL*)0xF0022D20u)

/** Alias (User Manual Name) for VADC_G10_ASCTRL.
* To use register names with standard convension, please use VADC_G10_ASCTRL.
*/
#define	VADC_G10ASCTRL	(VADC_G10_ASCTRL)

/** \brief  2D24, Autoscan Source Mode Register, Group */
#define VADC_G10_ASMR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASMR*)0xF0022D24u)

/** Alias (User Manual Name) for VADC_G10_ASMR.
* To use register names with standard convension, please use VADC_G10_ASMR.
*/
#define	VADC_G10ASMR	(VADC_G10_ASMR)

/** \brief  2D2C, Autoscan Source Pending Register, Group */
#define VADC_G10_ASPND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASPND*)0xF0022D2Cu)

/** Alias (User Manual Name) for VADC_G10_ASPND.
* To use register names with standard convension, please use VADC_G10_ASPND.
*/
#define	VADC_G10ASPND	(VADC_G10_ASPND)

/** \brief  2D28, Autoscan Source Channel Select Register, Group */
#define VADC_G10_ASSEL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASSEL*)0xF0022D28u)

/** Alias (User Manual Name) for VADC_G10_ASSEL.
* To use register names with standard convension, please use VADC_G10_ASSEL.
*/
#define	VADC_G10ASSEL	(VADC_G10_ASSEL)

/** \brief  2CC8, Boundary Flag Register, Group */
#define VADC_G10_BFL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFL*)0xF0022CC8u)

/** Alias (User Manual Name) for VADC_G10_BFL.
* To use register names with standard convension, please use VADC_G10_BFL.
*/
#define	VADC_G10BFL	(VADC_G10_BFL)

/** \brief  2CD0, Boundary Flag Control Register, Group */
#define VADC_G10_BFLC /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLC*)0xF0022CD0u)

/** Alias (User Manual Name) for VADC_G10_BFLC.
* To use register names with standard convension, please use VADC_G10_BFLC.
*/
#define	VADC_G10BFLC	(VADC_G10_BFLC)

/** \brief  2CD4, Boundary Flag Node Pointer Register, Group */
#define VADC_G10_BFLNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLNP*)0xF0022CD4u)

/** Alias (User Manual Name) for VADC_G10_BFLNP.
* To use register names with standard convension, please use VADC_G10_BFLNP.
*/
#define	VADC_G10BFLNP	(VADC_G10_BFLNP)

/** \brief  2CCC, Boundary Flag Software Register, Group */
#define VADC_G10_BFLS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLS*)0xF0022CCCu)

/** Alias (User Manual Name) for VADC_G10_BFLS.
* To use register names with standard convension, please use VADC_G10_BFLS.
*/
#define	VADC_G10BFLS	(VADC_G10_BFLS)

/** \brief  2CB8, Boundary Select Register, Group */
#define VADC_G10_BOUND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BOUND*)0xF0022CB8u)

/** Alias (User Manual Name) for VADC_G10_BOUND.
* To use register names with standard convension, please use VADC_G10_BOUND.
*/
#define	VADC_G10BOUND	(VADC_G10_BOUND)

/** \brief  2D90, Channel Event Flag Clear Register, Group */
#define VADC_G10_CEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFCLR*)0xF0022D90u)

/** Alias (User Manual Name) for VADC_G10_CEFCLR.
* To use register names with standard convension, please use VADC_G10_CEFCLR.
*/
#define	VADC_G10CEFCLR	(VADC_G10_CEFCLR)

/** \brief  2D80, Channel Event Flag Register, Group */
#define VADC_G10_CEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFLAG*)0xF0022D80u)

/** Alias (User Manual Name) for VADC_G10_CEFLAG.
* To use register names with standard convension, please use VADC_G10_CEFLAG.
*/
#define	VADC_G10CEFLAG	(VADC_G10_CEFLAG)

/** \brief  2DA0, Channel Event Node Pointer Register 0, Group */
#define VADC_G10_CEVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEVNP0*)0xF0022DA0u)

/** Alias (User Manual Name) for VADC_G10_CEVNP0.
* To use register names with standard convension, please use VADC_G10_CEVNP0.
*/
#define	VADC_G10CEVNP0	(VADC_G10_CEVNP0)

/** \brief  2C88, Channel Assignment Register, Group */
#define VADC_G10_CHASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHASS*)0xF0022C88u)

/** Alias (User Manual Name) for VADC_G10_CHASS.
* To use register names with standard convension, please use VADC_G10_CHASS.
*/
#define	VADC_G10CHASS	(VADC_G10_CHASS)

/** \brief  2E00, Group, Channel Ctrl. Reg. */
#define VADC_G10_CHCTR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022E00u)

/** Alias (User Manual Name) for VADC_G10_CHCTR0.
* To use register names with standard convension, please use VADC_G10_CHCTR0.
*/
#define	VADC_G10CHCTR0	(VADC_G10_CHCTR0)

/** \brief  2E04, Group, Channel Ctrl. Reg. */
#define VADC_G10_CHCTR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022E04u)

/** Alias (User Manual Name) for VADC_G10_CHCTR1.
* To use register names with standard convension, please use VADC_G10_CHCTR1.
*/
#define	VADC_G10CHCTR1	(VADC_G10_CHCTR1)

/** \brief  2E08, Group, Channel Ctrl. Reg. */
#define VADC_G10_CHCTR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022E08u)

/** Alias (User Manual Name) for VADC_G10_CHCTR2.
* To use register names with standard convension, please use VADC_G10_CHCTR2.
*/
#define	VADC_G10CHCTR2	(VADC_G10_CHCTR2)

/** \brief  2E0C, Group, Channel Ctrl. Reg. */
#define VADC_G10_CHCTR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022E0Cu)

/** Alias (User Manual Name) for VADC_G10_CHCTR3.
* To use register names with standard convension, please use VADC_G10_CHCTR3.
*/
#define	VADC_G10CHCTR3	(VADC_G10_CHCTR3)

/** \brief  2E10, Group, Channel Ctrl. Reg. */
#define VADC_G10_CHCTR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022E10u)

/** Alias (User Manual Name) for VADC_G10_CHCTR4.
* To use register names with standard convension, please use VADC_G10_CHCTR4.
*/
#define	VADC_G10CHCTR4	(VADC_G10_CHCTR4)

/** \brief  2E14, Group, Channel Ctrl. Reg. */
#define VADC_G10_CHCTR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022E14u)

/** Alias (User Manual Name) for VADC_G10_CHCTR5.
* To use register names with standard convension, please use VADC_G10_CHCTR5.
*/
#define	VADC_G10CHCTR5	(VADC_G10_CHCTR5)

/** \brief  2E18, Group, Channel Ctrl. Reg. */
#define VADC_G10_CHCTR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022E18u)

/** Alias (User Manual Name) for VADC_G10_CHCTR6.
* To use register names with standard convension, please use VADC_G10_CHCTR6.
*/
#define	VADC_G10CHCTR6	(VADC_G10_CHCTR6)

/** \brief  2E1C, Group, Channel Ctrl. Reg. */
#define VADC_G10_CHCTR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022E1Cu)

/** Alias (User Manual Name) for VADC_G10_CHCTR7.
* To use register names with standard convension, please use VADC_G10_CHCTR7.
*/
#define	VADC_G10CHCTR7	(VADC_G10_CHCTR7)

/** \brief  2DF0, External Multiplexer Control Register, Group x */
#define VADC_G10_EMUXCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_EMUXCTR*)0xF0022DF0u)

/** Alias (User Manual Name) for VADC_G10_EMUXCTR.
* To use register names with standard convension, please use VADC_G10_EMUXCTR.
*/
#define	VADC_G10EMUXCTR	(VADC_G10_EMUXCTR)

/** \brief  2CA0, Input Class Register */
#define VADC_G10_ICLASS0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF0022CA0u)

/** Alias (User Manual Name) for VADC_G10_ICLASS0.
* To use register names with standard convension, please use VADC_G10_ICLASS0.
*/
#define	VADC_G10ICLASS0	(VADC_G10_ICLASS0)

/** \brief  2CA4, Input Class Register */
#define VADC_G10_ICLASS1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF0022CA4u)

/** Alias (User Manual Name) for VADC_G10_ICLASS1.
* To use register names with standard convension, please use VADC_G10_ICLASS1.
*/
#define	VADC_G10ICLASS1	(VADC_G10_ICLASS1)

/** \brief  2D0C, Queue 0 Register 0, Group */
#define VADC_G10_Q0R0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_Q0R0*)0xF0022D0Cu)

/** Alias (User Manual Name) for VADC_G10_Q0R0.
* To use register names with standard convension, please use VADC_G10_Q0R0.
*/
#define	VADC_G10Q0R0	(VADC_G10_Q0R0)

/** \brief  2D10, Queue 0 Input Register, Group */
#define VADC_G10_QBUR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QBUR0*)0xF0022D10u)

/** Alias (User Manual Name) for VADC_G10_QBUR0.
* To use register names with standard convension, please use VADC_G10_QBUR0.
*/
#define	VADC_G10QBUR0	(VADC_G10_QBUR0)

/** \brief  2D00, Queue 0 Source Control Register, Group */
#define VADC_G10_QCTRL0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QCTRL0*)0xF0022D00u)

/** Alias (User Manual Name) for VADC_G10_QCTRL0.
* To use register names with standard convension, please use VADC_G10_QCTRL0.
*/
#define	VADC_G10QCTRL0	(VADC_G10_QCTRL0)

/** \brief  2D10, Queue 0 Input Register, Group */
#define VADC_G10_QINR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QINR0*)0xF0022D10u)

/** Alias (User Manual Name) for VADC_G10_QINR0.
* To use register names with standard convension, please use VADC_G10_QINR0.
*/
#define	VADC_G10QINR0	(VADC_G10_QINR0)

/** \brief  2D04, Queue 0 Mode Register, Group */
#define VADC_G10_QMR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QMR0*)0xF0022D04u)

/** Alias (User Manual Name) for VADC_G10_QMR0.
* To use register names with standard convension, please use VADC_G10_QMR0.
*/
#define	VADC_G10QMR0	(VADC_G10_QMR0)

/** \brief  2D08, Queue 0 Status Register, Group */
#define VADC_G10_QSR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QSR0*)0xF0022D08u)

/** Alias (User Manual Name) for VADC_G10_QSR0.
* To use register names with standard convension, please use VADC_G10_QSR0.
*/
#define	VADC_G10QSR0	(VADC_G10_QSR0)

/** \brief  2E80, Group Result Control Reg. */
#define VADC_G10_RCR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022E80u)

/** Alias (User Manual Name) for VADC_G10_RCR0.
* To use register names with standard convension, please use VADC_G10_RCR0.
*/
#define	VADC_G10RCR0	(VADC_G10_RCR0)

/** \brief  2E84, Group Result Control Reg. */
#define VADC_G10_RCR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022E84u)

/** Alias (User Manual Name) for VADC_G10_RCR1.
* To use register names with standard convension, please use VADC_G10_RCR1.
*/
#define	VADC_G10RCR1	(VADC_G10_RCR1)

/** \brief  2EA8, Group Result Control Reg. */
#define VADC_G10_RCR10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022EA8u)

/** Alias (User Manual Name) for VADC_G10_RCR10.
* To use register names with standard convension, please use VADC_G10_RCR10.
*/
#define	VADC_G10RCR10	(VADC_G10_RCR10)

/** \brief  2EAC, Group Result Control Reg. */
#define VADC_G10_RCR11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022EACu)

/** Alias (User Manual Name) for VADC_G10_RCR11.
* To use register names with standard convension, please use VADC_G10_RCR11.
*/
#define	VADC_G10RCR11	(VADC_G10_RCR11)

/** \brief  2EB0, Group Result Control Reg. */
#define VADC_G10_RCR12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022EB0u)

/** Alias (User Manual Name) for VADC_G10_RCR12.
* To use register names with standard convension, please use VADC_G10_RCR12.
*/
#define	VADC_G10RCR12	(VADC_G10_RCR12)

/** \brief  2EB4, Group Result Control Reg. */
#define VADC_G10_RCR13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022EB4u)

/** Alias (User Manual Name) for VADC_G10_RCR13.
* To use register names with standard convension, please use VADC_G10_RCR13.
*/
#define	VADC_G10RCR13	(VADC_G10_RCR13)

/** \brief  2EB8, Group Result Control Reg. */
#define VADC_G10_RCR14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022EB8u)

/** Alias (User Manual Name) for VADC_G10_RCR14.
* To use register names with standard convension, please use VADC_G10_RCR14.
*/
#define	VADC_G10RCR14	(VADC_G10_RCR14)

/** \brief  2EBC, Group Result Control Reg. */
#define VADC_G10_RCR15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022EBCu)

/** Alias (User Manual Name) for VADC_G10_RCR15.
* To use register names with standard convension, please use VADC_G10_RCR15.
*/
#define	VADC_G10RCR15	(VADC_G10_RCR15)

/** \brief  2E88, Group Result Control Reg. */
#define VADC_G10_RCR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022E88u)

/** Alias (User Manual Name) for VADC_G10_RCR2.
* To use register names with standard convension, please use VADC_G10_RCR2.
*/
#define	VADC_G10RCR2	(VADC_G10_RCR2)

/** \brief  2E8C, Group Result Control Reg. */
#define VADC_G10_RCR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022E8Cu)

/** Alias (User Manual Name) for VADC_G10_RCR3.
* To use register names with standard convension, please use VADC_G10_RCR3.
*/
#define	VADC_G10RCR3	(VADC_G10_RCR3)

/** \brief  2E90, Group Result Control Reg. */
#define VADC_G10_RCR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022E90u)

/** Alias (User Manual Name) for VADC_G10_RCR4.
* To use register names with standard convension, please use VADC_G10_RCR4.
*/
#define	VADC_G10RCR4	(VADC_G10_RCR4)

/** \brief  2E94, Group Result Control Reg. */
#define VADC_G10_RCR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022E94u)

/** Alias (User Manual Name) for VADC_G10_RCR5.
* To use register names with standard convension, please use VADC_G10_RCR5.
*/
#define	VADC_G10RCR5	(VADC_G10_RCR5)

/** \brief  2E98, Group Result Control Reg. */
#define VADC_G10_RCR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022E98u)

/** Alias (User Manual Name) for VADC_G10_RCR6.
* To use register names with standard convension, please use VADC_G10_RCR6.
*/
#define	VADC_G10RCR6	(VADC_G10_RCR6)

/** \brief  2E9C, Group Result Control Reg. */
#define VADC_G10_RCR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022E9Cu)

/** Alias (User Manual Name) for VADC_G10_RCR7.
* To use register names with standard convension, please use VADC_G10_RCR7.
*/
#define	VADC_G10RCR7	(VADC_G10_RCR7)

/** \brief  2EA0, Group Result Control Reg. */
#define VADC_G10_RCR8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022EA0u)

/** Alias (User Manual Name) for VADC_G10_RCR8.
* To use register names with standard convension, please use VADC_G10_RCR8.
*/
#define	VADC_G10RCR8	(VADC_G10_RCR8)

/** \brief  2EA4, Group Result Control Reg. */
#define VADC_G10_RCR9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022EA4u)

/** Alias (User Manual Name) for VADC_G10_RCR9.
* To use register names with standard convension, please use VADC_G10_RCR9.
*/
#define	VADC_G10RCR9	(VADC_G10_RCR9)

/** \brief  2D94, Result Event Flag Clear Register, Group */
#define VADC_G10_REFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFCLR*)0xF0022D94u)

/** Alias (User Manual Name) for VADC_G10_REFCLR.
* To use register names with standard convension, please use VADC_G10_REFCLR.
*/
#define	VADC_G10REFCLR	(VADC_G10_REFCLR)

/** \brief  2D84, Result Event Flag Register, Group */
#define VADC_G10_REFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFLAG*)0xF0022D84u)

/** Alias (User Manual Name) for VADC_G10_REFLAG.
* To use register names with standard convension, please use VADC_G10_REFLAG.
*/
#define	VADC_G10REFLAG	(VADC_G10_REFLAG)

/** \brief  2F00, Group Result Register */
#define VADC_G10_RES0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F00u)

/** Alias (User Manual Name) for VADC_G10_RES0.
* To use register names with standard convension, please use VADC_G10_RES0.
*/
#define	VADC_G10RES0	(VADC_G10_RES0)

/** \brief  2F04, Group Result Register */
#define VADC_G10_RES1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F04u)

/** Alias (User Manual Name) for VADC_G10_RES1.
* To use register names with standard convension, please use VADC_G10_RES1.
*/
#define	VADC_G10RES1	(VADC_G10_RES1)

/** \brief  2F28, Group Result Register */
#define VADC_G10_RES10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F28u)

/** Alias (User Manual Name) for VADC_G10_RES10.
* To use register names with standard convension, please use VADC_G10_RES10.
*/
#define	VADC_G10RES10	(VADC_G10_RES10)

/** \brief  2F2C, Group Result Register */
#define VADC_G10_RES11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F2Cu)

/** Alias (User Manual Name) for VADC_G10_RES11.
* To use register names with standard convension, please use VADC_G10_RES11.
*/
#define	VADC_G10RES11	(VADC_G10_RES11)

/** \brief  2F30, Group Result Register */
#define VADC_G10_RES12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F30u)

/** Alias (User Manual Name) for VADC_G10_RES12.
* To use register names with standard convension, please use VADC_G10_RES12.
*/
#define	VADC_G10RES12	(VADC_G10_RES12)

/** \brief  2F34, Group Result Register */
#define VADC_G10_RES13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F34u)

/** Alias (User Manual Name) for VADC_G10_RES13.
* To use register names with standard convension, please use VADC_G10_RES13.
*/
#define	VADC_G10RES13	(VADC_G10_RES13)

/** \brief  2F38, Group Result Register */
#define VADC_G10_RES14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F38u)

/** Alias (User Manual Name) for VADC_G10_RES14.
* To use register names with standard convension, please use VADC_G10_RES14.
*/
#define	VADC_G10RES14	(VADC_G10_RES14)

/** \brief  2F3C, Group Result Register */
#define VADC_G10_RES15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F3Cu)

/** Alias (User Manual Name) for VADC_G10_RES15.
* To use register names with standard convension, please use VADC_G10_RES15.
*/
#define	VADC_G10RES15	(VADC_G10_RES15)

/** \brief  2F08, Group Result Register */
#define VADC_G10_RES2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F08u)

/** Alias (User Manual Name) for VADC_G10_RES2.
* To use register names with standard convension, please use VADC_G10_RES2.
*/
#define	VADC_G10RES2	(VADC_G10_RES2)

/** \brief  2F0C, Group Result Register */
#define VADC_G10_RES3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F0Cu)

/** Alias (User Manual Name) for VADC_G10_RES3.
* To use register names with standard convension, please use VADC_G10_RES3.
*/
#define	VADC_G10RES3	(VADC_G10_RES3)

/** \brief  2F10, Group Result Register */
#define VADC_G10_RES4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F10u)

/** Alias (User Manual Name) for VADC_G10_RES4.
* To use register names with standard convension, please use VADC_G10_RES4.
*/
#define	VADC_G10RES4	(VADC_G10_RES4)

/** \brief  2F14, Group Result Register */
#define VADC_G10_RES5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F14u)

/** Alias (User Manual Name) for VADC_G10_RES5.
* To use register names with standard convension, please use VADC_G10_RES5.
*/
#define	VADC_G10RES5	(VADC_G10_RES5)

/** \brief  2F18, Group Result Register */
#define VADC_G10_RES6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F18u)

/** Alias (User Manual Name) for VADC_G10_RES6.
* To use register names with standard convension, please use VADC_G10_RES6.
*/
#define	VADC_G10RES6	(VADC_G10_RES6)

/** \brief  2F1C, Group Result Register */
#define VADC_G10_RES7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F1Cu)

/** Alias (User Manual Name) for VADC_G10_RES7.
* To use register names with standard convension, please use VADC_G10_RES7.
*/
#define	VADC_G10RES7	(VADC_G10_RES7)

/** \brief  2F20, Group Result Register */
#define VADC_G10_RES8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F20u)

/** Alias (User Manual Name) for VADC_G10_RES8.
* To use register names with standard convension, please use VADC_G10_RES8.
*/
#define	VADC_G10RES8	(VADC_G10_RES8)

/** \brief  2F24, Group Result Register */
#define VADC_G10_RES9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022F24u)

/** Alias (User Manual Name) for VADC_G10_RES9.
* To use register names with standard convension, please use VADC_G10_RES9.
*/
#define	VADC_G10RES9	(VADC_G10_RES9)

/** \brief  2F80, Group Result Reg., Debug */
#define VADC_G10_RESD0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022F80u)

/** Alias (User Manual Name) for VADC_G10_RESD0.
* To use register names with standard convension, please use VADC_G10_RESD0.
*/
#define	VADC_G10RESD0	(VADC_G10_RESD0)

/** \brief  2F84, Group Result Reg., Debug */
#define VADC_G10_RESD1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022F84u)

/** Alias (User Manual Name) for VADC_G10_RESD1.
* To use register names with standard convension, please use VADC_G10_RESD1.
*/
#define	VADC_G10RESD1	(VADC_G10_RESD1)

/** \brief  2FA8, Group Result Reg., Debug */
#define VADC_G10_RESD10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022FA8u)

/** Alias (User Manual Name) for VADC_G10_RESD10.
* To use register names with standard convension, please use VADC_G10_RESD10.
*/
#define	VADC_G10RESD10	(VADC_G10_RESD10)

/** \brief  2FAC, Group Result Reg., Debug */
#define VADC_G10_RESD11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022FACu)

/** Alias (User Manual Name) for VADC_G10_RESD11.
* To use register names with standard convension, please use VADC_G10_RESD11.
*/
#define	VADC_G10RESD11	(VADC_G10_RESD11)

/** \brief  2FB0, Group Result Reg., Debug */
#define VADC_G10_RESD12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022FB0u)

/** Alias (User Manual Name) for VADC_G10_RESD12.
* To use register names with standard convension, please use VADC_G10_RESD12.
*/
#define	VADC_G10RESD12	(VADC_G10_RESD12)

/** \brief  2FB4, Group Result Reg., Debug */
#define VADC_G10_RESD13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022FB4u)

/** Alias (User Manual Name) for VADC_G10_RESD13.
* To use register names with standard convension, please use VADC_G10_RESD13.
*/
#define	VADC_G10RESD13	(VADC_G10_RESD13)

/** \brief  2FB8, Group Result Reg., Debug */
#define VADC_G10_RESD14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022FB8u)

/** Alias (User Manual Name) for VADC_G10_RESD14.
* To use register names with standard convension, please use VADC_G10_RESD14.
*/
#define	VADC_G10RESD14	(VADC_G10_RESD14)

/** \brief  2FBC, Group Result Reg., Debug */
#define VADC_G10_RESD15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022FBCu)

/** Alias (User Manual Name) for VADC_G10_RESD15.
* To use register names with standard convension, please use VADC_G10_RESD15.
*/
#define	VADC_G10RESD15	(VADC_G10_RESD15)

/** \brief  2F88, Group Result Reg., Debug */
#define VADC_G10_RESD2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022F88u)

/** Alias (User Manual Name) for VADC_G10_RESD2.
* To use register names with standard convension, please use VADC_G10_RESD2.
*/
#define	VADC_G10RESD2	(VADC_G10_RESD2)

/** \brief  2F8C, Group Result Reg., Debug */
#define VADC_G10_RESD3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022F8Cu)

/** Alias (User Manual Name) for VADC_G10_RESD3.
* To use register names with standard convension, please use VADC_G10_RESD3.
*/
#define	VADC_G10RESD3	(VADC_G10_RESD3)

/** \brief  2F90, Group Result Reg., Debug */
#define VADC_G10_RESD4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022F90u)

/** Alias (User Manual Name) for VADC_G10_RESD4.
* To use register names with standard convension, please use VADC_G10_RESD4.
*/
#define	VADC_G10RESD4	(VADC_G10_RESD4)

/** \brief  2F94, Group Result Reg., Debug */
#define VADC_G10_RESD5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022F94u)

/** Alias (User Manual Name) for VADC_G10_RESD5.
* To use register names with standard convension, please use VADC_G10_RESD5.
*/
#define	VADC_G10RESD5	(VADC_G10_RESD5)

/** \brief  2F98, Group Result Reg., Debug */
#define VADC_G10_RESD6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022F98u)

/** Alias (User Manual Name) for VADC_G10_RESD6.
* To use register names with standard convension, please use VADC_G10_RESD6.
*/
#define	VADC_G10RESD6	(VADC_G10_RESD6)

/** \brief  2F9C, Group Result Reg., Debug */
#define VADC_G10_RESD7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022F9Cu)

/** Alias (User Manual Name) for VADC_G10_RESD7.
* To use register names with standard convension, please use VADC_G10_RESD7.
*/
#define	VADC_G10RESD7	(VADC_G10_RESD7)

/** \brief  2FA0, Group Result Reg., Debug */
#define VADC_G10_RESD8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022FA0u)

/** Alias (User Manual Name) for VADC_G10_RESD8.
* To use register names with standard convension, please use VADC_G10_RESD8.
*/
#define	VADC_G10RESD8	(VADC_G10_RESD8)

/** \brief  2FA4, Group Result Reg., Debug */
#define VADC_G10_RESD9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022FA4u)

/** Alias (User Manual Name) for VADC_G10_RESD9.
* To use register names with standard convension, please use VADC_G10_RESD9.
*/
#define	VADC_G10RESD9	(VADC_G10_RESD9)

/** \brief  2DB0, Result Event Node Pointer Register 0, Group */
#define VADC_G10_REVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP0*)0xF0022DB0u)

/** Alias (User Manual Name) for VADC_G10_REVNP0.
* To use register names with standard convension, please use VADC_G10_REVNP0.
*/
#define	VADC_G10REVNP0	(VADC_G10_REVNP0)

/** \brief  2DB4, Result Event Node Pointer Register 1, Group */
#define VADC_G10_REVNP1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP1*)0xF0022DB4u)

/** Alias (User Manual Name) for VADC_G10_REVNP1.
* To use register names with standard convension, please use VADC_G10_REVNP1.
*/
#define	VADC_G10REVNP1	(VADC_G10_REVNP1)

/** \brief  2C8C, Result Assignment Register, Group */
#define VADC_G10_RRASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RRASS*)0xF0022C8Cu)

/** Alias (User Manual Name) for VADC_G10_RRASS.
* To use register names with standard convension, please use VADC_G10_RRASS.
*/
#define	VADC_G10RRASS	(VADC_G10_RRASS)

/** \brief  2D98, Source Event Flag Clear Register, Group */
#define VADC_G10_SEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFCLR*)0xF0022D98u)

/** Alias (User Manual Name) for VADC_G10_SEFCLR.
* To use register names with standard convension, please use VADC_G10_SEFCLR.
*/
#define	VADC_G10SEFCLR	(VADC_G10_SEFCLR)

/** \brief  2D88, Source Event Flag Register, Group */
#define VADC_G10_SEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFLAG*)0xF0022D88u)

/** Alias (User Manual Name) for VADC_G10_SEFLAG.
* To use register names with standard convension, please use VADC_G10_SEFLAG.
*/
#define	VADC_G10SEFLAG	(VADC_G10_SEFLAG)

/** \brief  2DC0, Source Event Node Pointer Register, Group */
#define VADC_G10_SEVNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEVNP*)0xF0022DC0u)

/** Alias (User Manual Name) for VADC_G10_SEVNP.
* To use register names with standard convension, please use VADC_G10_SEVNP.
*/
#define	VADC_G10SEVNP	(VADC_G10_SEVNP)

/** \brief  2DC8, Service Request Software Activation Trigger, Group */
#define VADC_G10_SRACT /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SRACT*)0xF0022DC8u)

/** Alias (User Manual Name) for VADC_G10_SRACT.
* To use register names with standard convension, please use VADC_G10_SRACT.
*/
#define	VADC_G10SRACT	(VADC_G10_SRACT)

/** \brief  2CC0, Synchronization Control Register, Group */
#define VADC_G10_SYNCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SYNCTR*)0xF0022CC0u)

/** Alias (User Manual Name) for VADC_G10_SYNCTR.
* To use register names with standard convension, please use VADC_G10_SYNCTR.
*/
#define	VADC_G10SYNCTR	(VADC_G10_SYNCTR)

/** \brief  2DF8, Valid Flag Register, Group */
#define VADC_G10_VFR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_VFR*)0xF0022DF8u)

/** Alias (User Manual Name) for VADC_G10_VFR.
* To use register names with standard convension, please use VADC_G10_VFR.
*/
#define	VADC_G10VFR	(VADC_G10_VFR)

/** \brief  8B0, Alias Register, Group */
#define VADC_G1_ALIAS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ALIAS*)0xF00208B0u)

/** Alias (User Manual Name) for VADC_G1_ALIAS.
* To use register names with standard convension, please use VADC_G1_ALIAS.
*/
#define	VADC_G1ALIAS	(VADC_G1_ALIAS)

/** \brief  880, Arbitration Configuration Register, Group */
#define VADC_G1_ARBCFG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBCFG*)0xF0020880u)

/** Alias (User Manual Name) for VADC_G1_ARBCFG.
* To use register names with standard convension, please use VADC_G1_ARBCFG.
*/
#define	VADC_G1ARBCFG	(VADC_G1_ARBCFG)

/** \brief  884, Arbitration Priority Register, Group */
#define VADC_G1_ARBPR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBPR*)0xF0020884u)

/** Alias (User Manual Name) for VADC_G1_ARBPR.
* To use register names with standard convension, please use VADC_G1_ARBPR.
*/
#define	VADC_G1ARBPR	(VADC_G1_ARBPR)

/** \brief  920, Autoscan Source Control Register, Group */
#define VADC_G1_ASCTRL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASCTRL*)0xF0020920u)

/** Alias (User Manual Name) for VADC_G1_ASCTRL.
* To use register names with standard convension, please use VADC_G1_ASCTRL.
*/
#define	VADC_G1ASCTRL	(VADC_G1_ASCTRL)

/** \brief  924, Autoscan Source Mode Register, Group */
#define VADC_G1_ASMR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASMR*)0xF0020924u)

/** Alias (User Manual Name) for VADC_G1_ASMR.
* To use register names with standard convension, please use VADC_G1_ASMR.
*/
#define	VADC_G1ASMR	(VADC_G1_ASMR)

/** \brief  92C, Autoscan Source Pending Register, Group */
#define VADC_G1_ASPND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASPND*)0xF002092Cu)

/** Alias (User Manual Name) for VADC_G1_ASPND.
* To use register names with standard convension, please use VADC_G1_ASPND.
*/
#define	VADC_G1ASPND	(VADC_G1_ASPND)

/** \brief  928, Autoscan Source Channel Select Register, Group */
#define VADC_G1_ASSEL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASSEL*)0xF0020928u)

/** Alias (User Manual Name) for VADC_G1_ASSEL.
* To use register names with standard convension, please use VADC_G1_ASSEL.
*/
#define	VADC_G1ASSEL	(VADC_G1_ASSEL)

/** \brief  8C8, Boundary Flag Register, Group */
#define VADC_G1_BFL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFL*)0xF00208C8u)

/** Alias (User Manual Name) for VADC_G1_BFL.
* To use register names with standard convension, please use VADC_G1_BFL.
*/
#define	VADC_G1BFL	(VADC_G1_BFL)

/** \brief  8D0, Boundary Flag Control Register, Group */
#define VADC_G1_BFLC /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLC*)0xF00208D0u)

/** Alias (User Manual Name) for VADC_G1_BFLC.
* To use register names with standard convension, please use VADC_G1_BFLC.
*/
#define	VADC_G1BFLC	(VADC_G1_BFLC)

/** \brief  8D4, Boundary Flag Node Pointer Register, Group */
#define VADC_G1_BFLNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLNP*)0xF00208D4u)

/** Alias (User Manual Name) for VADC_G1_BFLNP.
* To use register names with standard convension, please use VADC_G1_BFLNP.
*/
#define	VADC_G1BFLNP	(VADC_G1_BFLNP)

/** \brief  8CC, Boundary Flag Software Register, Group */
#define VADC_G1_BFLS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLS*)0xF00208CCu)

/** Alias (User Manual Name) for VADC_G1_BFLS.
* To use register names with standard convension, please use VADC_G1_BFLS.
*/
#define	VADC_G1BFLS	(VADC_G1_BFLS)

/** \brief  8B8, Boundary Select Register, Group */
#define VADC_G1_BOUND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BOUND*)0xF00208B8u)

/** Alias (User Manual Name) for VADC_G1_BOUND.
* To use register names with standard convension, please use VADC_G1_BOUND.
*/
#define	VADC_G1BOUND	(VADC_G1_BOUND)

/** \brief  990, Channel Event Flag Clear Register, Group */
#define VADC_G1_CEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFCLR*)0xF0020990u)

/** Alias (User Manual Name) for VADC_G1_CEFCLR.
* To use register names with standard convension, please use VADC_G1_CEFCLR.
*/
#define	VADC_G1CEFCLR	(VADC_G1_CEFCLR)

/** \brief  980, Channel Event Flag Register, Group */
#define VADC_G1_CEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFLAG*)0xF0020980u)

/** Alias (User Manual Name) for VADC_G1_CEFLAG.
* To use register names with standard convension, please use VADC_G1_CEFLAG.
*/
#define	VADC_G1CEFLAG	(VADC_G1_CEFLAG)

/** \brief  9A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G1_CEVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEVNP0*)0xF00209A0u)

/** Alias (User Manual Name) for VADC_G1_CEVNP0.
* To use register names with standard convension, please use VADC_G1_CEVNP0.
*/
#define	VADC_G1CEVNP0	(VADC_G1_CEVNP0)

/** \brief  888, Channel Assignment Register, Group */
#define VADC_G1_CHASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHASS*)0xF0020888u)

/** Alias (User Manual Name) for VADC_G1_CHASS.
* To use register names with standard convension, please use VADC_G1_CHASS.
*/
#define	VADC_G1CHASS	(VADC_G1_CHASS)

/** \brief  A00, Group, Channel Ctrl. Reg. */
#define VADC_G1_CHCTR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020A00u)

/** Alias (User Manual Name) for VADC_G1_CHCTR0.
* To use register names with standard convension, please use VADC_G1_CHCTR0.
*/
#define	VADC_G1CHCTR0	(VADC_G1_CHCTR0)

/** \brief  A04, Group, Channel Ctrl. Reg. */
#define VADC_G1_CHCTR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020A04u)

/** Alias (User Manual Name) for VADC_G1_CHCTR1.
* To use register names with standard convension, please use VADC_G1_CHCTR1.
*/
#define	VADC_G1CHCTR1	(VADC_G1_CHCTR1)

/** \brief  A08, Group, Channel Ctrl. Reg. */
#define VADC_G1_CHCTR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020A08u)

/** Alias (User Manual Name) for VADC_G1_CHCTR2.
* To use register names with standard convension, please use VADC_G1_CHCTR2.
*/
#define	VADC_G1CHCTR2	(VADC_G1_CHCTR2)

/** \brief  A0C, Group, Channel Ctrl. Reg. */
#define VADC_G1_CHCTR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020A0Cu)

/** Alias (User Manual Name) for VADC_G1_CHCTR3.
* To use register names with standard convension, please use VADC_G1_CHCTR3.
*/
#define	VADC_G1CHCTR3	(VADC_G1_CHCTR3)

/** \brief  A10, Group, Channel Ctrl. Reg. */
#define VADC_G1_CHCTR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020A10u)

/** Alias (User Manual Name) for VADC_G1_CHCTR4.
* To use register names with standard convension, please use VADC_G1_CHCTR4.
*/
#define	VADC_G1CHCTR4	(VADC_G1_CHCTR4)

/** \brief  A14, Group, Channel Ctrl. Reg. */
#define VADC_G1_CHCTR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020A14u)

/** Alias (User Manual Name) for VADC_G1_CHCTR5.
* To use register names with standard convension, please use VADC_G1_CHCTR5.
*/
#define	VADC_G1CHCTR5	(VADC_G1_CHCTR5)

/** \brief  A18, Group, Channel Ctrl. Reg. */
#define VADC_G1_CHCTR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020A18u)

/** Alias (User Manual Name) for VADC_G1_CHCTR6.
* To use register names with standard convension, please use VADC_G1_CHCTR6.
*/
#define	VADC_G1CHCTR6	(VADC_G1_CHCTR6)

/** \brief  A1C, Group, Channel Ctrl. Reg. */
#define VADC_G1_CHCTR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020A1Cu)

/** Alias (User Manual Name) for VADC_G1_CHCTR7.
* To use register names with standard convension, please use VADC_G1_CHCTR7.
*/
#define	VADC_G1CHCTR7	(VADC_G1_CHCTR7)

/** \brief  9F0, External Multiplexer Control Register, Group x */
#define VADC_G1_EMUXCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_EMUXCTR*)0xF00209F0u)

/** Alias (User Manual Name) for VADC_G1_EMUXCTR.
* To use register names with standard convension, please use VADC_G1_EMUXCTR.
*/
#define	VADC_G1EMUXCTR	(VADC_G1_EMUXCTR)

/** \brief  8A0, Input Class Register */
#define VADC_G1_ICLASS0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00208A0u)

/** Alias (User Manual Name) for VADC_G1_ICLASS0.
* To use register names with standard convension, please use VADC_G1_ICLASS0.
*/
#define	VADC_G1ICLASS0	(VADC_G1_ICLASS0)

/** \brief  8A4, Input Class Register */
#define VADC_G1_ICLASS1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00208A4u)

/** Alias (User Manual Name) for VADC_G1_ICLASS1.
* To use register names with standard convension, please use VADC_G1_ICLASS1.
*/
#define	VADC_G1ICLASS1	(VADC_G1_ICLASS1)

/** \brief  90C, Queue 0 Register 0, Group */
#define VADC_G1_Q0R0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_Q0R0*)0xF002090Cu)

/** Alias (User Manual Name) for VADC_G1_Q0R0.
* To use register names with standard convension, please use VADC_G1_Q0R0.
*/
#define	VADC_G1Q0R0	(VADC_G1_Q0R0)

/** \brief  910, Queue 0 Input Register, Group */
#define VADC_G1_QBUR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QBUR0*)0xF0020910u)

/** Alias (User Manual Name) for VADC_G1_QBUR0.
* To use register names with standard convension, please use VADC_G1_QBUR0.
*/
#define	VADC_G1QBUR0	(VADC_G1_QBUR0)

/** \brief  900, Queue 0 Source Control Register, Group */
#define VADC_G1_QCTRL0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QCTRL0*)0xF0020900u)

/** Alias (User Manual Name) for VADC_G1_QCTRL0.
* To use register names with standard convension, please use VADC_G1_QCTRL0.
*/
#define	VADC_G1QCTRL0	(VADC_G1_QCTRL0)

/** \brief  910, Queue 0 Input Register, Group */
#define VADC_G1_QINR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QINR0*)0xF0020910u)

/** Alias (User Manual Name) for VADC_G1_QINR0.
* To use register names with standard convension, please use VADC_G1_QINR0.
*/
#define	VADC_G1QINR0	(VADC_G1_QINR0)

/** \brief  904, Queue 0 Mode Register, Group */
#define VADC_G1_QMR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QMR0*)0xF0020904u)

/** Alias (User Manual Name) for VADC_G1_QMR0.
* To use register names with standard convension, please use VADC_G1_QMR0.
*/
#define	VADC_G1QMR0	(VADC_G1_QMR0)

/** \brief  908, Queue 0 Status Register, Group */
#define VADC_G1_QSR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QSR0*)0xF0020908u)

/** Alias (User Manual Name) for VADC_G1_QSR0.
* To use register names with standard convension, please use VADC_G1_QSR0.
*/
#define	VADC_G1QSR0	(VADC_G1_QSR0)

/** \brief  A80, Group Result Control Reg. */
#define VADC_G1_RCR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020A80u)

/** Alias (User Manual Name) for VADC_G1_RCR0.
* To use register names with standard convension, please use VADC_G1_RCR0.
*/
#define	VADC_G1RCR0	(VADC_G1_RCR0)

/** \brief  A84, Group Result Control Reg. */
#define VADC_G1_RCR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020A84u)

/** Alias (User Manual Name) for VADC_G1_RCR1.
* To use register names with standard convension, please use VADC_G1_RCR1.
*/
#define	VADC_G1RCR1	(VADC_G1_RCR1)

/** \brief  AA8, Group Result Control Reg. */
#define VADC_G1_RCR10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020AA8u)

/** Alias (User Manual Name) for VADC_G1_RCR10.
* To use register names with standard convension, please use VADC_G1_RCR10.
*/
#define	VADC_G1RCR10	(VADC_G1_RCR10)

/** \brief  AAC, Group Result Control Reg. */
#define VADC_G1_RCR11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020AACu)

/** Alias (User Manual Name) for VADC_G1_RCR11.
* To use register names with standard convension, please use VADC_G1_RCR11.
*/
#define	VADC_G1RCR11	(VADC_G1_RCR11)

/** \brief  AB0, Group Result Control Reg. */
#define VADC_G1_RCR12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020AB0u)

/** Alias (User Manual Name) for VADC_G1_RCR12.
* To use register names with standard convension, please use VADC_G1_RCR12.
*/
#define	VADC_G1RCR12	(VADC_G1_RCR12)

/** \brief  AB4, Group Result Control Reg. */
#define VADC_G1_RCR13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020AB4u)

/** Alias (User Manual Name) for VADC_G1_RCR13.
* To use register names with standard convension, please use VADC_G1_RCR13.
*/
#define	VADC_G1RCR13	(VADC_G1_RCR13)

/** \brief  AB8, Group Result Control Reg. */
#define VADC_G1_RCR14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020AB8u)

/** Alias (User Manual Name) for VADC_G1_RCR14.
* To use register names with standard convension, please use VADC_G1_RCR14.
*/
#define	VADC_G1RCR14	(VADC_G1_RCR14)

/** \brief  ABC, Group Result Control Reg. */
#define VADC_G1_RCR15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020ABCu)

/** Alias (User Manual Name) for VADC_G1_RCR15.
* To use register names with standard convension, please use VADC_G1_RCR15.
*/
#define	VADC_G1RCR15	(VADC_G1_RCR15)

/** \brief  A88, Group Result Control Reg. */
#define VADC_G1_RCR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020A88u)

/** Alias (User Manual Name) for VADC_G1_RCR2.
* To use register names with standard convension, please use VADC_G1_RCR2.
*/
#define	VADC_G1RCR2	(VADC_G1_RCR2)

/** \brief  A8C, Group Result Control Reg. */
#define VADC_G1_RCR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020A8Cu)

/** Alias (User Manual Name) for VADC_G1_RCR3.
* To use register names with standard convension, please use VADC_G1_RCR3.
*/
#define	VADC_G1RCR3	(VADC_G1_RCR3)

/** \brief  A90, Group Result Control Reg. */
#define VADC_G1_RCR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020A90u)

/** Alias (User Manual Name) for VADC_G1_RCR4.
* To use register names with standard convension, please use VADC_G1_RCR4.
*/
#define	VADC_G1RCR4	(VADC_G1_RCR4)

/** \brief  A94, Group Result Control Reg. */
#define VADC_G1_RCR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020A94u)

/** Alias (User Manual Name) for VADC_G1_RCR5.
* To use register names with standard convension, please use VADC_G1_RCR5.
*/
#define	VADC_G1RCR5	(VADC_G1_RCR5)

/** \brief  A98, Group Result Control Reg. */
#define VADC_G1_RCR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020A98u)

/** Alias (User Manual Name) for VADC_G1_RCR6.
* To use register names with standard convension, please use VADC_G1_RCR6.
*/
#define	VADC_G1RCR6	(VADC_G1_RCR6)

/** \brief  A9C, Group Result Control Reg. */
#define VADC_G1_RCR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020A9Cu)

/** Alias (User Manual Name) for VADC_G1_RCR7.
* To use register names with standard convension, please use VADC_G1_RCR7.
*/
#define	VADC_G1RCR7	(VADC_G1_RCR7)

/** \brief  AA0, Group Result Control Reg. */
#define VADC_G1_RCR8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020AA0u)

/** Alias (User Manual Name) for VADC_G1_RCR8.
* To use register names with standard convension, please use VADC_G1_RCR8.
*/
#define	VADC_G1RCR8	(VADC_G1_RCR8)

/** \brief  AA4, Group Result Control Reg. */
#define VADC_G1_RCR9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020AA4u)

/** Alias (User Manual Name) for VADC_G1_RCR9.
* To use register names with standard convension, please use VADC_G1_RCR9.
*/
#define	VADC_G1RCR9	(VADC_G1_RCR9)

/** \brief  994, Result Event Flag Clear Register, Group */
#define VADC_G1_REFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFCLR*)0xF0020994u)

/** Alias (User Manual Name) for VADC_G1_REFCLR.
* To use register names with standard convension, please use VADC_G1_REFCLR.
*/
#define	VADC_G1REFCLR	(VADC_G1_REFCLR)

/** \brief  984, Result Event Flag Register, Group */
#define VADC_G1_REFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFLAG*)0xF0020984u)

/** Alias (User Manual Name) for VADC_G1_REFLAG.
* To use register names with standard convension, please use VADC_G1_REFLAG.
*/
#define	VADC_G1REFLAG	(VADC_G1_REFLAG)

/** \brief  B00, Group Result Register */
#define VADC_G1_RES0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B00u)

/** Alias (User Manual Name) for VADC_G1_RES0.
* To use register names with standard convension, please use VADC_G1_RES0.
*/
#define	VADC_G1RES0	(VADC_G1_RES0)

/** \brief  B04, Group Result Register */
#define VADC_G1_RES1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B04u)

/** Alias (User Manual Name) for VADC_G1_RES1.
* To use register names with standard convension, please use VADC_G1_RES1.
*/
#define	VADC_G1RES1	(VADC_G1_RES1)

/** \brief  B28, Group Result Register */
#define VADC_G1_RES10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B28u)

/** Alias (User Manual Name) for VADC_G1_RES10.
* To use register names with standard convension, please use VADC_G1_RES10.
*/
#define	VADC_G1RES10	(VADC_G1_RES10)

/** \brief  B2C, Group Result Register */
#define VADC_G1_RES11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B2Cu)

/** Alias (User Manual Name) for VADC_G1_RES11.
* To use register names with standard convension, please use VADC_G1_RES11.
*/
#define	VADC_G1RES11	(VADC_G1_RES11)

/** \brief  B30, Group Result Register */
#define VADC_G1_RES12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B30u)

/** Alias (User Manual Name) for VADC_G1_RES12.
* To use register names with standard convension, please use VADC_G1_RES12.
*/
#define	VADC_G1RES12	(VADC_G1_RES12)

/** \brief  B34, Group Result Register */
#define VADC_G1_RES13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B34u)

/** Alias (User Manual Name) for VADC_G1_RES13.
* To use register names with standard convension, please use VADC_G1_RES13.
*/
#define	VADC_G1RES13	(VADC_G1_RES13)

/** \brief  B38, Group Result Register */
#define VADC_G1_RES14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B38u)

/** Alias (User Manual Name) for VADC_G1_RES14.
* To use register names with standard convension, please use VADC_G1_RES14.
*/
#define	VADC_G1RES14	(VADC_G1_RES14)

/** \brief  B3C, Group Result Register */
#define VADC_G1_RES15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B3Cu)

/** Alias (User Manual Name) for VADC_G1_RES15.
* To use register names with standard convension, please use VADC_G1_RES15.
*/
#define	VADC_G1RES15	(VADC_G1_RES15)

/** \brief  B08, Group Result Register */
#define VADC_G1_RES2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B08u)

/** Alias (User Manual Name) for VADC_G1_RES2.
* To use register names with standard convension, please use VADC_G1_RES2.
*/
#define	VADC_G1RES2	(VADC_G1_RES2)

/** \brief  B0C, Group Result Register */
#define VADC_G1_RES3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B0Cu)

/** Alias (User Manual Name) for VADC_G1_RES3.
* To use register names with standard convension, please use VADC_G1_RES3.
*/
#define	VADC_G1RES3	(VADC_G1_RES3)

/** \brief  B10, Group Result Register */
#define VADC_G1_RES4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B10u)

/** Alias (User Manual Name) for VADC_G1_RES4.
* To use register names with standard convension, please use VADC_G1_RES4.
*/
#define	VADC_G1RES4	(VADC_G1_RES4)

/** \brief  B14, Group Result Register */
#define VADC_G1_RES5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B14u)

/** Alias (User Manual Name) for VADC_G1_RES5.
* To use register names with standard convension, please use VADC_G1_RES5.
*/
#define	VADC_G1RES5	(VADC_G1_RES5)

/** \brief  B18, Group Result Register */
#define VADC_G1_RES6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B18u)

/** Alias (User Manual Name) for VADC_G1_RES6.
* To use register names with standard convension, please use VADC_G1_RES6.
*/
#define	VADC_G1RES6	(VADC_G1_RES6)

/** \brief  B1C, Group Result Register */
#define VADC_G1_RES7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B1Cu)

/** Alias (User Manual Name) for VADC_G1_RES7.
* To use register names with standard convension, please use VADC_G1_RES7.
*/
#define	VADC_G1RES7	(VADC_G1_RES7)

/** \brief  B20, Group Result Register */
#define VADC_G1_RES8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B20u)

/** Alias (User Manual Name) for VADC_G1_RES8.
* To use register names with standard convension, please use VADC_G1_RES8.
*/
#define	VADC_G1RES8	(VADC_G1_RES8)

/** \brief  B24, Group Result Register */
#define VADC_G1_RES9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020B24u)

/** Alias (User Manual Name) for VADC_G1_RES9.
* To use register names with standard convension, please use VADC_G1_RES9.
*/
#define	VADC_G1RES9	(VADC_G1_RES9)

/** \brief  B80, Group Result Reg., Debug */
#define VADC_G1_RESD0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020B80u)

/** Alias (User Manual Name) for VADC_G1_RESD0.
* To use register names with standard convension, please use VADC_G1_RESD0.
*/
#define	VADC_G1RESD0	(VADC_G1_RESD0)

/** \brief  B84, Group Result Reg., Debug */
#define VADC_G1_RESD1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020B84u)

/** Alias (User Manual Name) for VADC_G1_RESD1.
* To use register names with standard convension, please use VADC_G1_RESD1.
*/
#define	VADC_G1RESD1	(VADC_G1_RESD1)

/** \brief  BA8, Group Result Reg., Debug */
#define VADC_G1_RESD10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020BA8u)

/** Alias (User Manual Name) for VADC_G1_RESD10.
* To use register names with standard convension, please use VADC_G1_RESD10.
*/
#define	VADC_G1RESD10	(VADC_G1_RESD10)

/** \brief  BAC, Group Result Reg., Debug */
#define VADC_G1_RESD11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020BACu)

/** Alias (User Manual Name) for VADC_G1_RESD11.
* To use register names with standard convension, please use VADC_G1_RESD11.
*/
#define	VADC_G1RESD11	(VADC_G1_RESD11)

/** \brief  BB0, Group Result Reg., Debug */
#define VADC_G1_RESD12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020BB0u)

/** Alias (User Manual Name) for VADC_G1_RESD12.
* To use register names with standard convension, please use VADC_G1_RESD12.
*/
#define	VADC_G1RESD12	(VADC_G1_RESD12)

/** \brief  BB4, Group Result Reg., Debug */
#define VADC_G1_RESD13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020BB4u)

/** Alias (User Manual Name) for VADC_G1_RESD13.
* To use register names with standard convension, please use VADC_G1_RESD13.
*/
#define	VADC_G1RESD13	(VADC_G1_RESD13)

/** \brief  BB8, Group Result Reg., Debug */
#define VADC_G1_RESD14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020BB8u)

/** Alias (User Manual Name) for VADC_G1_RESD14.
* To use register names with standard convension, please use VADC_G1_RESD14.
*/
#define	VADC_G1RESD14	(VADC_G1_RESD14)

/** \brief  BBC, Group Result Reg., Debug */
#define VADC_G1_RESD15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020BBCu)

/** Alias (User Manual Name) for VADC_G1_RESD15.
* To use register names with standard convension, please use VADC_G1_RESD15.
*/
#define	VADC_G1RESD15	(VADC_G1_RESD15)

/** \brief  B88, Group Result Reg., Debug */
#define VADC_G1_RESD2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020B88u)

/** Alias (User Manual Name) for VADC_G1_RESD2.
* To use register names with standard convension, please use VADC_G1_RESD2.
*/
#define	VADC_G1RESD2	(VADC_G1_RESD2)

/** \brief  B8C, Group Result Reg., Debug */
#define VADC_G1_RESD3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020B8Cu)

/** Alias (User Manual Name) for VADC_G1_RESD3.
* To use register names with standard convension, please use VADC_G1_RESD3.
*/
#define	VADC_G1RESD3	(VADC_G1_RESD3)

/** \brief  B90, Group Result Reg., Debug */
#define VADC_G1_RESD4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020B90u)

/** Alias (User Manual Name) for VADC_G1_RESD4.
* To use register names with standard convension, please use VADC_G1_RESD4.
*/
#define	VADC_G1RESD4	(VADC_G1_RESD4)

/** \brief  B94, Group Result Reg., Debug */
#define VADC_G1_RESD5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020B94u)

/** Alias (User Manual Name) for VADC_G1_RESD5.
* To use register names with standard convension, please use VADC_G1_RESD5.
*/
#define	VADC_G1RESD5	(VADC_G1_RESD5)

/** \brief  B98, Group Result Reg., Debug */
#define VADC_G1_RESD6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020B98u)

/** Alias (User Manual Name) for VADC_G1_RESD6.
* To use register names with standard convension, please use VADC_G1_RESD6.
*/
#define	VADC_G1RESD6	(VADC_G1_RESD6)

/** \brief  B9C, Group Result Reg., Debug */
#define VADC_G1_RESD7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020B9Cu)

/** Alias (User Manual Name) for VADC_G1_RESD7.
* To use register names with standard convension, please use VADC_G1_RESD7.
*/
#define	VADC_G1RESD7	(VADC_G1_RESD7)

/** \brief  BA0, Group Result Reg., Debug */
#define VADC_G1_RESD8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020BA0u)

/** Alias (User Manual Name) for VADC_G1_RESD8.
* To use register names with standard convension, please use VADC_G1_RESD8.
*/
#define	VADC_G1RESD8	(VADC_G1_RESD8)

/** \brief  BA4, Group Result Reg., Debug */
#define VADC_G1_RESD9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020BA4u)

/** Alias (User Manual Name) for VADC_G1_RESD9.
* To use register names with standard convension, please use VADC_G1_RESD9.
*/
#define	VADC_G1RESD9	(VADC_G1_RESD9)

/** \brief  9B0, Result Event Node Pointer Register 0, Group */
#define VADC_G1_REVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP0*)0xF00209B0u)

/** Alias (User Manual Name) for VADC_G1_REVNP0.
* To use register names with standard convension, please use VADC_G1_REVNP0.
*/
#define	VADC_G1REVNP0	(VADC_G1_REVNP0)

/** \brief  9B4, Result Event Node Pointer Register 1, Group */
#define VADC_G1_REVNP1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP1*)0xF00209B4u)

/** Alias (User Manual Name) for VADC_G1_REVNP1.
* To use register names with standard convension, please use VADC_G1_REVNP1.
*/
#define	VADC_G1REVNP1	(VADC_G1_REVNP1)

/** \brief  88C, Result Assignment Register, Group */
#define VADC_G1_RRASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RRASS*)0xF002088Cu)

/** Alias (User Manual Name) for VADC_G1_RRASS.
* To use register names with standard convension, please use VADC_G1_RRASS.
*/
#define	VADC_G1RRASS	(VADC_G1_RRASS)

/** \brief  998, Source Event Flag Clear Register, Group */
#define VADC_G1_SEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFCLR*)0xF0020998u)

/** Alias (User Manual Name) for VADC_G1_SEFCLR.
* To use register names with standard convension, please use VADC_G1_SEFCLR.
*/
#define	VADC_G1SEFCLR	(VADC_G1_SEFCLR)

/** \brief  988, Source Event Flag Register, Group */
#define VADC_G1_SEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFLAG*)0xF0020988u)

/** Alias (User Manual Name) for VADC_G1_SEFLAG.
* To use register names with standard convension, please use VADC_G1_SEFLAG.
*/
#define	VADC_G1SEFLAG	(VADC_G1_SEFLAG)

/** \brief  9C0, Source Event Node Pointer Register, Group */
#define VADC_G1_SEVNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEVNP*)0xF00209C0u)

/** Alias (User Manual Name) for VADC_G1_SEVNP.
* To use register names with standard convension, please use VADC_G1_SEVNP.
*/
#define	VADC_G1SEVNP	(VADC_G1_SEVNP)

/** \brief  9C8, Service Request Software Activation Trigger, Group */
#define VADC_G1_SRACT /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SRACT*)0xF00209C8u)

/** Alias (User Manual Name) for VADC_G1_SRACT.
* To use register names with standard convension, please use VADC_G1_SRACT.
*/
#define	VADC_G1SRACT	(VADC_G1_SRACT)

/** \brief  8C0, Synchronization Control Register, Group */
#define VADC_G1_SYNCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SYNCTR*)0xF00208C0u)

/** Alias (User Manual Name) for VADC_G1_SYNCTR.
* To use register names with standard convension, please use VADC_G1_SYNCTR.
*/
#define	VADC_G1SYNCTR	(VADC_G1_SYNCTR)

/** \brief  9F8, Valid Flag Register, Group */
#define VADC_G1_VFR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_VFR*)0xF00209F8u)

/** Alias (User Manual Name) for VADC_G1_VFR.
* To use register names with standard convension, please use VADC_G1_VFR.
*/
#define	VADC_G1VFR	(VADC_G1_VFR)

/** \brief  CB0, Alias Register, Group */
#define VADC_G2_ALIAS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ALIAS*)0xF0020CB0u)

/** Alias (User Manual Name) for VADC_G2_ALIAS.
* To use register names with standard convension, please use VADC_G2_ALIAS.
*/
#define	VADC_G2ALIAS	(VADC_G2_ALIAS)

/** \brief  C80, Arbitration Configuration Register, Group */
#define VADC_G2_ARBCFG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBCFG*)0xF0020C80u)

/** Alias (User Manual Name) for VADC_G2_ARBCFG.
* To use register names with standard convension, please use VADC_G2_ARBCFG.
*/
#define	VADC_G2ARBCFG	(VADC_G2_ARBCFG)

/** \brief  C84, Arbitration Priority Register, Group */
#define VADC_G2_ARBPR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBPR*)0xF0020C84u)

/** Alias (User Manual Name) for VADC_G2_ARBPR.
* To use register names with standard convension, please use VADC_G2_ARBPR.
*/
#define	VADC_G2ARBPR	(VADC_G2_ARBPR)

/** \brief  D20, Autoscan Source Control Register, Group */
#define VADC_G2_ASCTRL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASCTRL*)0xF0020D20u)

/** Alias (User Manual Name) for VADC_G2_ASCTRL.
* To use register names with standard convension, please use VADC_G2_ASCTRL.
*/
#define	VADC_G2ASCTRL	(VADC_G2_ASCTRL)

/** \brief  D24, Autoscan Source Mode Register, Group */
#define VADC_G2_ASMR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASMR*)0xF0020D24u)

/** Alias (User Manual Name) for VADC_G2_ASMR.
* To use register names with standard convension, please use VADC_G2_ASMR.
*/
#define	VADC_G2ASMR	(VADC_G2_ASMR)

/** \brief  D2C, Autoscan Source Pending Register, Group */
#define VADC_G2_ASPND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASPND*)0xF0020D2Cu)

/** Alias (User Manual Name) for VADC_G2_ASPND.
* To use register names with standard convension, please use VADC_G2_ASPND.
*/
#define	VADC_G2ASPND	(VADC_G2_ASPND)

/** \brief  D28, Autoscan Source Channel Select Register, Group */
#define VADC_G2_ASSEL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASSEL*)0xF0020D28u)

/** Alias (User Manual Name) for VADC_G2_ASSEL.
* To use register names with standard convension, please use VADC_G2_ASSEL.
*/
#define	VADC_G2ASSEL	(VADC_G2_ASSEL)

/** \brief  CC8, Boundary Flag Register, Group */
#define VADC_G2_BFL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFL*)0xF0020CC8u)

/** Alias (User Manual Name) for VADC_G2_BFL.
* To use register names with standard convension, please use VADC_G2_BFL.
*/
#define	VADC_G2BFL	(VADC_G2_BFL)

/** \brief  CD0, Boundary Flag Control Register, Group */
#define VADC_G2_BFLC /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLC*)0xF0020CD0u)

/** Alias (User Manual Name) for VADC_G2_BFLC.
* To use register names with standard convension, please use VADC_G2_BFLC.
*/
#define	VADC_G2BFLC	(VADC_G2_BFLC)

/** \brief  CD4, Boundary Flag Node Pointer Register, Group */
#define VADC_G2_BFLNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLNP*)0xF0020CD4u)

/** Alias (User Manual Name) for VADC_G2_BFLNP.
* To use register names with standard convension, please use VADC_G2_BFLNP.
*/
#define	VADC_G2BFLNP	(VADC_G2_BFLNP)

/** \brief  CCC, Boundary Flag Software Register, Group */
#define VADC_G2_BFLS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLS*)0xF0020CCCu)

/** Alias (User Manual Name) for VADC_G2_BFLS.
* To use register names with standard convension, please use VADC_G2_BFLS.
*/
#define	VADC_G2BFLS	(VADC_G2_BFLS)

/** \brief  CB8, Boundary Select Register, Group */
#define VADC_G2_BOUND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BOUND*)0xF0020CB8u)

/** Alias (User Manual Name) for VADC_G2_BOUND.
* To use register names with standard convension, please use VADC_G2_BOUND.
*/
#define	VADC_G2BOUND	(VADC_G2_BOUND)

/** \brief  D90, Channel Event Flag Clear Register, Group */
#define VADC_G2_CEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFCLR*)0xF0020D90u)

/** Alias (User Manual Name) for VADC_G2_CEFCLR.
* To use register names with standard convension, please use VADC_G2_CEFCLR.
*/
#define	VADC_G2CEFCLR	(VADC_G2_CEFCLR)

/** \brief  D80, Channel Event Flag Register, Group */
#define VADC_G2_CEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFLAG*)0xF0020D80u)

/** Alias (User Manual Name) for VADC_G2_CEFLAG.
* To use register names with standard convension, please use VADC_G2_CEFLAG.
*/
#define	VADC_G2CEFLAG	(VADC_G2_CEFLAG)

/** \brief  DA0, Channel Event Node Pointer Register 0, Group */
#define VADC_G2_CEVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEVNP0*)0xF0020DA0u)

/** Alias (User Manual Name) for VADC_G2_CEVNP0.
* To use register names with standard convension, please use VADC_G2_CEVNP0.
*/
#define	VADC_G2CEVNP0	(VADC_G2_CEVNP0)

/** \brief  C88, Channel Assignment Register, Group */
#define VADC_G2_CHASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHASS*)0xF0020C88u)

/** Alias (User Manual Name) for VADC_G2_CHASS.
* To use register names with standard convension, please use VADC_G2_CHASS.
*/
#define	VADC_G2CHASS	(VADC_G2_CHASS)

/** \brief  E00, Group, Channel Ctrl. Reg. */
#define VADC_G2_CHCTR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020E00u)

/** Alias (User Manual Name) for VADC_G2_CHCTR0.
* To use register names with standard convension, please use VADC_G2_CHCTR0.
*/
#define	VADC_G2CHCTR0	(VADC_G2_CHCTR0)

/** \brief  E04, Group, Channel Ctrl. Reg. */
#define VADC_G2_CHCTR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020E04u)

/** Alias (User Manual Name) for VADC_G2_CHCTR1.
* To use register names with standard convension, please use VADC_G2_CHCTR1.
*/
#define	VADC_G2CHCTR1	(VADC_G2_CHCTR1)

/** \brief  E08, Group, Channel Ctrl. Reg. */
#define VADC_G2_CHCTR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020E08u)

/** Alias (User Manual Name) for VADC_G2_CHCTR2.
* To use register names with standard convension, please use VADC_G2_CHCTR2.
*/
#define	VADC_G2CHCTR2	(VADC_G2_CHCTR2)

/** \brief  E0C, Group, Channel Ctrl. Reg. */
#define VADC_G2_CHCTR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020E0Cu)

/** Alias (User Manual Name) for VADC_G2_CHCTR3.
* To use register names with standard convension, please use VADC_G2_CHCTR3.
*/
#define	VADC_G2CHCTR3	(VADC_G2_CHCTR3)

/** \brief  E10, Group, Channel Ctrl. Reg. */
#define VADC_G2_CHCTR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020E10u)

/** Alias (User Manual Name) for VADC_G2_CHCTR4.
* To use register names with standard convension, please use VADC_G2_CHCTR4.
*/
#define	VADC_G2CHCTR4	(VADC_G2_CHCTR4)

/** \brief  E14, Group, Channel Ctrl. Reg. */
#define VADC_G2_CHCTR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020E14u)

/** Alias (User Manual Name) for VADC_G2_CHCTR5.
* To use register names with standard convension, please use VADC_G2_CHCTR5.
*/
#define	VADC_G2CHCTR5	(VADC_G2_CHCTR5)

/** \brief  E18, Group, Channel Ctrl. Reg. */
#define VADC_G2_CHCTR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020E18u)

/** Alias (User Manual Name) for VADC_G2_CHCTR6.
* To use register names with standard convension, please use VADC_G2_CHCTR6.
*/
#define	VADC_G2CHCTR6	(VADC_G2_CHCTR6)

/** \brief  E1C, Group, Channel Ctrl. Reg. */
#define VADC_G2_CHCTR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0020E1Cu)

/** Alias (User Manual Name) for VADC_G2_CHCTR7.
* To use register names with standard convension, please use VADC_G2_CHCTR7.
*/
#define	VADC_G2CHCTR7	(VADC_G2_CHCTR7)

/** \brief  DF0, External Multiplexer Control Register, Group x */
#define VADC_G2_EMUXCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_EMUXCTR*)0xF0020DF0u)

/** Alias (User Manual Name) for VADC_G2_EMUXCTR.
* To use register names with standard convension, please use VADC_G2_EMUXCTR.
*/
#define	VADC_G2EMUXCTR	(VADC_G2_EMUXCTR)

/** \brief  CA0, Input Class Register */
#define VADC_G2_ICLASS0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF0020CA0u)

/** Alias (User Manual Name) for VADC_G2_ICLASS0.
* To use register names with standard convension, please use VADC_G2_ICLASS0.
*/
#define	VADC_G2ICLASS0	(VADC_G2_ICLASS0)

/** \brief  CA4, Input Class Register */
#define VADC_G2_ICLASS1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF0020CA4u)

/** Alias (User Manual Name) for VADC_G2_ICLASS1.
* To use register names with standard convension, please use VADC_G2_ICLASS1.
*/
#define	VADC_G2ICLASS1	(VADC_G2_ICLASS1)

/** \brief  D0C, Queue 0 Register 0, Group */
#define VADC_G2_Q0R0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_Q0R0*)0xF0020D0Cu)

/** Alias (User Manual Name) for VADC_G2_Q0R0.
* To use register names with standard convension, please use VADC_G2_Q0R0.
*/
#define	VADC_G2Q0R0	(VADC_G2_Q0R0)

/** \brief  D10, Queue 0 Input Register, Group */
#define VADC_G2_QBUR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QBUR0*)0xF0020D10u)

/** Alias (User Manual Name) for VADC_G2_QBUR0.
* To use register names with standard convension, please use VADC_G2_QBUR0.
*/
#define	VADC_G2QBUR0	(VADC_G2_QBUR0)

/** \brief  D00, Queue 0 Source Control Register, Group */
#define VADC_G2_QCTRL0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QCTRL0*)0xF0020D00u)

/** Alias (User Manual Name) for VADC_G2_QCTRL0.
* To use register names with standard convension, please use VADC_G2_QCTRL0.
*/
#define	VADC_G2QCTRL0	(VADC_G2_QCTRL0)

/** \brief  D10, Queue 0 Input Register, Group */
#define VADC_G2_QINR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QINR0*)0xF0020D10u)

/** Alias (User Manual Name) for VADC_G2_QINR0.
* To use register names with standard convension, please use VADC_G2_QINR0.
*/
#define	VADC_G2QINR0	(VADC_G2_QINR0)

/** \brief  D04, Queue 0 Mode Register, Group */
#define VADC_G2_QMR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QMR0*)0xF0020D04u)

/** Alias (User Manual Name) for VADC_G2_QMR0.
* To use register names with standard convension, please use VADC_G2_QMR0.
*/
#define	VADC_G2QMR0	(VADC_G2_QMR0)

/** \brief  D08, Queue 0 Status Register, Group */
#define VADC_G2_QSR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QSR0*)0xF0020D08u)

/** Alias (User Manual Name) for VADC_G2_QSR0.
* To use register names with standard convension, please use VADC_G2_QSR0.
*/
#define	VADC_G2QSR0	(VADC_G2_QSR0)

/** \brief  E80, Group Result Control Reg. */
#define VADC_G2_RCR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020E80u)

/** Alias (User Manual Name) for VADC_G2_RCR0.
* To use register names with standard convension, please use VADC_G2_RCR0.
*/
#define	VADC_G2RCR0	(VADC_G2_RCR0)

/** \brief  E84, Group Result Control Reg. */
#define VADC_G2_RCR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020E84u)

/** Alias (User Manual Name) for VADC_G2_RCR1.
* To use register names with standard convension, please use VADC_G2_RCR1.
*/
#define	VADC_G2RCR1	(VADC_G2_RCR1)

/** \brief  EA8, Group Result Control Reg. */
#define VADC_G2_RCR10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020EA8u)

/** Alias (User Manual Name) for VADC_G2_RCR10.
* To use register names with standard convension, please use VADC_G2_RCR10.
*/
#define	VADC_G2RCR10	(VADC_G2_RCR10)

/** \brief  EAC, Group Result Control Reg. */
#define VADC_G2_RCR11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020EACu)

/** Alias (User Manual Name) for VADC_G2_RCR11.
* To use register names with standard convension, please use VADC_G2_RCR11.
*/
#define	VADC_G2RCR11	(VADC_G2_RCR11)

/** \brief  EB0, Group Result Control Reg. */
#define VADC_G2_RCR12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020EB0u)

/** Alias (User Manual Name) for VADC_G2_RCR12.
* To use register names with standard convension, please use VADC_G2_RCR12.
*/
#define	VADC_G2RCR12	(VADC_G2_RCR12)

/** \brief  EB4, Group Result Control Reg. */
#define VADC_G2_RCR13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020EB4u)

/** Alias (User Manual Name) for VADC_G2_RCR13.
* To use register names with standard convension, please use VADC_G2_RCR13.
*/
#define	VADC_G2RCR13	(VADC_G2_RCR13)

/** \brief  EB8, Group Result Control Reg. */
#define VADC_G2_RCR14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020EB8u)

/** Alias (User Manual Name) for VADC_G2_RCR14.
* To use register names with standard convension, please use VADC_G2_RCR14.
*/
#define	VADC_G2RCR14	(VADC_G2_RCR14)

/** \brief  EBC, Group Result Control Reg. */
#define VADC_G2_RCR15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020EBCu)

/** Alias (User Manual Name) for VADC_G2_RCR15.
* To use register names with standard convension, please use VADC_G2_RCR15.
*/
#define	VADC_G2RCR15	(VADC_G2_RCR15)

/** \brief  E88, Group Result Control Reg. */
#define VADC_G2_RCR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020E88u)

/** Alias (User Manual Name) for VADC_G2_RCR2.
* To use register names with standard convension, please use VADC_G2_RCR2.
*/
#define	VADC_G2RCR2	(VADC_G2_RCR2)

/** \brief  E8C, Group Result Control Reg. */
#define VADC_G2_RCR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020E8Cu)

/** Alias (User Manual Name) for VADC_G2_RCR3.
* To use register names with standard convension, please use VADC_G2_RCR3.
*/
#define	VADC_G2RCR3	(VADC_G2_RCR3)

/** \brief  E90, Group Result Control Reg. */
#define VADC_G2_RCR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020E90u)

/** Alias (User Manual Name) for VADC_G2_RCR4.
* To use register names with standard convension, please use VADC_G2_RCR4.
*/
#define	VADC_G2RCR4	(VADC_G2_RCR4)

/** \brief  E94, Group Result Control Reg. */
#define VADC_G2_RCR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020E94u)

/** Alias (User Manual Name) for VADC_G2_RCR5.
* To use register names with standard convension, please use VADC_G2_RCR5.
*/
#define	VADC_G2RCR5	(VADC_G2_RCR5)

/** \brief  E98, Group Result Control Reg. */
#define VADC_G2_RCR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020E98u)

/** Alias (User Manual Name) for VADC_G2_RCR6.
* To use register names with standard convension, please use VADC_G2_RCR6.
*/
#define	VADC_G2RCR6	(VADC_G2_RCR6)

/** \brief  E9C, Group Result Control Reg. */
#define VADC_G2_RCR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020E9Cu)

/** Alias (User Manual Name) for VADC_G2_RCR7.
* To use register names with standard convension, please use VADC_G2_RCR7.
*/
#define	VADC_G2RCR7	(VADC_G2_RCR7)

/** \brief  EA0, Group Result Control Reg. */
#define VADC_G2_RCR8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020EA0u)

/** Alias (User Manual Name) for VADC_G2_RCR8.
* To use register names with standard convension, please use VADC_G2_RCR8.
*/
#define	VADC_G2RCR8	(VADC_G2_RCR8)

/** \brief  EA4, Group Result Control Reg. */
#define VADC_G2_RCR9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0020EA4u)

/** Alias (User Manual Name) for VADC_G2_RCR9.
* To use register names with standard convension, please use VADC_G2_RCR9.
*/
#define	VADC_G2RCR9	(VADC_G2_RCR9)

/** \brief  D94, Result Event Flag Clear Register, Group */
#define VADC_G2_REFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFCLR*)0xF0020D94u)

/** Alias (User Manual Name) for VADC_G2_REFCLR.
* To use register names with standard convension, please use VADC_G2_REFCLR.
*/
#define	VADC_G2REFCLR	(VADC_G2_REFCLR)

/** \brief  D84, Result Event Flag Register, Group */
#define VADC_G2_REFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFLAG*)0xF0020D84u)

/** Alias (User Manual Name) for VADC_G2_REFLAG.
* To use register names with standard convension, please use VADC_G2_REFLAG.
*/
#define	VADC_G2REFLAG	(VADC_G2_REFLAG)

/** \brief  F00, Group Result Register */
#define VADC_G2_RES0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F00u)

/** Alias (User Manual Name) for VADC_G2_RES0.
* To use register names with standard convension, please use VADC_G2_RES0.
*/
#define	VADC_G2RES0	(VADC_G2_RES0)

/** \brief  F04, Group Result Register */
#define VADC_G2_RES1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F04u)

/** Alias (User Manual Name) for VADC_G2_RES1.
* To use register names with standard convension, please use VADC_G2_RES1.
*/
#define	VADC_G2RES1	(VADC_G2_RES1)

/** \brief  F28, Group Result Register */
#define VADC_G2_RES10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F28u)

/** Alias (User Manual Name) for VADC_G2_RES10.
* To use register names with standard convension, please use VADC_G2_RES10.
*/
#define	VADC_G2RES10	(VADC_G2_RES10)

/** \brief  F2C, Group Result Register */
#define VADC_G2_RES11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F2Cu)

/** Alias (User Manual Name) for VADC_G2_RES11.
* To use register names with standard convension, please use VADC_G2_RES11.
*/
#define	VADC_G2RES11	(VADC_G2_RES11)

/** \brief  F30, Group Result Register */
#define VADC_G2_RES12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F30u)

/** Alias (User Manual Name) for VADC_G2_RES12.
* To use register names with standard convension, please use VADC_G2_RES12.
*/
#define	VADC_G2RES12	(VADC_G2_RES12)

/** \brief  F34, Group Result Register */
#define VADC_G2_RES13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F34u)

/** Alias (User Manual Name) for VADC_G2_RES13.
* To use register names with standard convension, please use VADC_G2_RES13.
*/
#define	VADC_G2RES13	(VADC_G2_RES13)

/** \brief  F38, Group Result Register */
#define VADC_G2_RES14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F38u)

/** Alias (User Manual Name) for VADC_G2_RES14.
* To use register names with standard convension, please use VADC_G2_RES14.
*/
#define	VADC_G2RES14	(VADC_G2_RES14)

/** \brief  F3C, Group Result Register */
#define VADC_G2_RES15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F3Cu)

/** Alias (User Manual Name) for VADC_G2_RES15.
* To use register names with standard convension, please use VADC_G2_RES15.
*/
#define	VADC_G2RES15	(VADC_G2_RES15)

/** \brief  F08, Group Result Register */
#define VADC_G2_RES2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F08u)

/** Alias (User Manual Name) for VADC_G2_RES2.
* To use register names with standard convension, please use VADC_G2_RES2.
*/
#define	VADC_G2RES2	(VADC_G2_RES2)

/** \brief  F0C, Group Result Register */
#define VADC_G2_RES3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F0Cu)

/** Alias (User Manual Name) for VADC_G2_RES3.
* To use register names with standard convension, please use VADC_G2_RES3.
*/
#define	VADC_G2RES3	(VADC_G2_RES3)

/** \brief  F10, Group Result Register */
#define VADC_G2_RES4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F10u)

/** Alias (User Manual Name) for VADC_G2_RES4.
* To use register names with standard convension, please use VADC_G2_RES4.
*/
#define	VADC_G2RES4	(VADC_G2_RES4)

/** \brief  F14, Group Result Register */
#define VADC_G2_RES5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F14u)

/** Alias (User Manual Name) for VADC_G2_RES5.
* To use register names with standard convension, please use VADC_G2_RES5.
*/
#define	VADC_G2RES5	(VADC_G2_RES5)

/** \brief  F18, Group Result Register */
#define VADC_G2_RES6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F18u)

/** Alias (User Manual Name) for VADC_G2_RES6.
* To use register names with standard convension, please use VADC_G2_RES6.
*/
#define	VADC_G2RES6	(VADC_G2_RES6)

/** \brief  F1C, Group Result Register */
#define VADC_G2_RES7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F1Cu)

/** Alias (User Manual Name) for VADC_G2_RES7.
* To use register names with standard convension, please use VADC_G2_RES7.
*/
#define	VADC_G2RES7	(VADC_G2_RES7)

/** \brief  F20, Group Result Register */
#define VADC_G2_RES8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F20u)

/** Alias (User Manual Name) for VADC_G2_RES8.
* To use register names with standard convension, please use VADC_G2_RES8.
*/
#define	VADC_G2RES8	(VADC_G2_RES8)

/** \brief  F24, Group Result Register */
#define VADC_G2_RES9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0020F24u)

/** Alias (User Manual Name) for VADC_G2_RES9.
* To use register names with standard convension, please use VADC_G2_RES9.
*/
#define	VADC_G2RES9	(VADC_G2_RES9)

/** \brief  F80, Group Result Reg., Debug */
#define VADC_G2_RESD0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020F80u)

/** Alias (User Manual Name) for VADC_G2_RESD0.
* To use register names with standard convension, please use VADC_G2_RESD0.
*/
#define	VADC_G2RESD0	(VADC_G2_RESD0)

/** \brief  F84, Group Result Reg., Debug */
#define VADC_G2_RESD1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020F84u)

/** Alias (User Manual Name) for VADC_G2_RESD1.
* To use register names with standard convension, please use VADC_G2_RESD1.
*/
#define	VADC_G2RESD1	(VADC_G2_RESD1)

/** \brief  FA8, Group Result Reg., Debug */
#define VADC_G2_RESD10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020FA8u)

/** Alias (User Manual Name) for VADC_G2_RESD10.
* To use register names with standard convension, please use VADC_G2_RESD10.
*/
#define	VADC_G2RESD10	(VADC_G2_RESD10)

/** \brief  FAC, Group Result Reg., Debug */
#define VADC_G2_RESD11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020FACu)

/** Alias (User Manual Name) for VADC_G2_RESD11.
* To use register names with standard convension, please use VADC_G2_RESD11.
*/
#define	VADC_G2RESD11	(VADC_G2_RESD11)

/** \brief  FB0, Group Result Reg., Debug */
#define VADC_G2_RESD12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020FB0u)

/** Alias (User Manual Name) for VADC_G2_RESD12.
* To use register names with standard convension, please use VADC_G2_RESD12.
*/
#define	VADC_G2RESD12	(VADC_G2_RESD12)

/** \brief  FB4, Group Result Reg., Debug */
#define VADC_G2_RESD13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020FB4u)

/** Alias (User Manual Name) for VADC_G2_RESD13.
* To use register names with standard convension, please use VADC_G2_RESD13.
*/
#define	VADC_G2RESD13	(VADC_G2_RESD13)

/** \brief  FB8, Group Result Reg., Debug */
#define VADC_G2_RESD14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020FB8u)

/** Alias (User Manual Name) for VADC_G2_RESD14.
* To use register names with standard convension, please use VADC_G2_RESD14.
*/
#define	VADC_G2RESD14	(VADC_G2_RESD14)

/** \brief  FBC, Group Result Reg., Debug */
#define VADC_G2_RESD15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020FBCu)

/** Alias (User Manual Name) for VADC_G2_RESD15.
* To use register names with standard convension, please use VADC_G2_RESD15.
*/
#define	VADC_G2RESD15	(VADC_G2_RESD15)

/** \brief  F88, Group Result Reg., Debug */
#define VADC_G2_RESD2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020F88u)

/** Alias (User Manual Name) for VADC_G2_RESD2.
* To use register names with standard convension, please use VADC_G2_RESD2.
*/
#define	VADC_G2RESD2	(VADC_G2_RESD2)

/** \brief  F8C, Group Result Reg., Debug */
#define VADC_G2_RESD3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020F8Cu)

/** Alias (User Manual Name) for VADC_G2_RESD3.
* To use register names with standard convension, please use VADC_G2_RESD3.
*/
#define	VADC_G2RESD3	(VADC_G2_RESD3)

/** \brief  F90, Group Result Reg., Debug */
#define VADC_G2_RESD4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020F90u)

/** Alias (User Manual Name) for VADC_G2_RESD4.
* To use register names with standard convension, please use VADC_G2_RESD4.
*/
#define	VADC_G2RESD4	(VADC_G2_RESD4)

/** \brief  F94, Group Result Reg., Debug */
#define VADC_G2_RESD5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020F94u)

/** Alias (User Manual Name) for VADC_G2_RESD5.
* To use register names with standard convension, please use VADC_G2_RESD5.
*/
#define	VADC_G2RESD5	(VADC_G2_RESD5)

/** \brief  F98, Group Result Reg., Debug */
#define VADC_G2_RESD6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020F98u)

/** Alias (User Manual Name) for VADC_G2_RESD6.
* To use register names with standard convension, please use VADC_G2_RESD6.
*/
#define	VADC_G2RESD6	(VADC_G2_RESD6)

/** \brief  F9C, Group Result Reg., Debug */
#define VADC_G2_RESD7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020F9Cu)

/** Alias (User Manual Name) for VADC_G2_RESD7.
* To use register names with standard convension, please use VADC_G2_RESD7.
*/
#define	VADC_G2RESD7	(VADC_G2_RESD7)

/** \brief  FA0, Group Result Reg., Debug */
#define VADC_G2_RESD8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020FA0u)

/** Alias (User Manual Name) for VADC_G2_RESD8.
* To use register names with standard convension, please use VADC_G2_RESD8.
*/
#define	VADC_G2RESD8	(VADC_G2_RESD8)

/** \brief  FA4, Group Result Reg., Debug */
#define VADC_G2_RESD9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0020FA4u)

/** Alias (User Manual Name) for VADC_G2_RESD9.
* To use register names with standard convension, please use VADC_G2_RESD9.
*/
#define	VADC_G2RESD9	(VADC_G2_RESD9)

/** \brief  DB0, Result Event Node Pointer Register 0, Group */
#define VADC_G2_REVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP0*)0xF0020DB0u)

/** Alias (User Manual Name) for VADC_G2_REVNP0.
* To use register names with standard convension, please use VADC_G2_REVNP0.
*/
#define	VADC_G2REVNP0	(VADC_G2_REVNP0)

/** \brief  DB4, Result Event Node Pointer Register 1, Group */
#define VADC_G2_REVNP1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP1*)0xF0020DB4u)

/** Alias (User Manual Name) for VADC_G2_REVNP1.
* To use register names with standard convension, please use VADC_G2_REVNP1.
*/
#define	VADC_G2REVNP1	(VADC_G2_REVNP1)

/** \brief  C8C, Result Assignment Register, Group */
#define VADC_G2_RRASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RRASS*)0xF0020C8Cu)

/** Alias (User Manual Name) for VADC_G2_RRASS.
* To use register names with standard convension, please use VADC_G2_RRASS.
*/
#define	VADC_G2RRASS	(VADC_G2_RRASS)

/** \brief  D98, Source Event Flag Clear Register, Group */
#define VADC_G2_SEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFCLR*)0xF0020D98u)

/** Alias (User Manual Name) for VADC_G2_SEFCLR.
* To use register names with standard convension, please use VADC_G2_SEFCLR.
*/
#define	VADC_G2SEFCLR	(VADC_G2_SEFCLR)

/** \brief  D88, Source Event Flag Register, Group */
#define VADC_G2_SEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFLAG*)0xF0020D88u)

/** Alias (User Manual Name) for VADC_G2_SEFLAG.
* To use register names with standard convension, please use VADC_G2_SEFLAG.
*/
#define	VADC_G2SEFLAG	(VADC_G2_SEFLAG)

/** \brief  DC0, Source Event Node Pointer Register, Group */
#define VADC_G2_SEVNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEVNP*)0xF0020DC0u)

/** Alias (User Manual Name) for VADC_G2_SEVNP.
* To use register names with standard convension, please use VADC_G2_SEVNP.
*/
#define	VADC_G2SEVNP	(VADC_G2_SEVNP)

/** \brief  DC8, Service Request Software Activation Trigger, Group */
#define VADC_G2_SRACT /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SRACT*)0xF0020DC8u)

/** Alias (User Manual Name) for VADC_G2_SRACT.
* To use register names with standard convension, please use VADC_G2_SRACT.
*/
#define	VADC_G2SRACT	(VADC_G2_SRACT)

/** \brief  CC0, Synchronization Control Register, Group */
#define VADC_G2_SYNCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SYNCTR*)0xF0020CC0u)

/** Alias (User Manual Name) for VADC_G2_SYNCTR.
* To use register names with standard convension, please use VADC_G2_SYNCTR.
*/
#define	VADC_G2SYNCTR	(VADC_G2_SYNCTR)

/** \brief  DF8, Valid Flag Register, Group */
#define VADC_G2_VFR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_VFR*)0xF0020DF8u)

/** Alias (User Manual Name) for VADC_G2_VFR.
* To use register names with standard convension, please use VADC_G2_VFR.
*/
#define	VADC_G2VFR	(VADC_G2_VFR)

/** \brief  10B0, Alias Register, Group */
#define VADC_G3_ALIAS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ALIAS*)0xF00210B0u)

/** Alias (User Manual Name) for VADC_G3_ALIAS.
* To use register names with standard convension, please use VADC_G3_ALIAS.
*/
#define	VADC_G3ALIAS	(VADC_G3_ALIAS)

/** \brief  1080, Arbitration Configuration Register, Group */
#define VADC_G3_ARBCFG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBCFG*)0xF0021080u)

/** Alias (User Manual Name) for VADC_G3_ARBCFG.
* To use register names with standard convension, please use VADC_G3_ARBCFG.
*/
#define	VADC_G3ARBCFG	(VADC_G3_ARBCFG)

/** \brief  1084, Arbitration Priority Register, Group */
#define VADC_G3_ARBPR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBPR*)0xF0021084u)

/** Alias (User Manual Name) for VADC_G3_ARBPR.
* To use register names with standard convension, please use VADC_G3_ARBPR.
*/
#define	VADC_G3ARBPR	(VADC_G3_ARBPR)

/** \brief  1120, Autoscan Source Control Register, Group */
#define VADC_G3_ASCTRL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASCTRL*)0xF0021120u)

/** Alias (User Manual Name) for VADC_G3_ASCTRL.
* To use register names with standard convension, please use VADC_G3_ASCTRL.
*/
#define	VADC_G3ASCTRL	(VADC_G3_ASCTRL)

/** \brief  1124, Autoscan Source Mode Register, Group */
#define VADC_G3_ASMR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASMR*)0xF0021124u)

/** Alias (User Manual Name) for VADC_G3_ASMR.
* To use register names with standard convension, please use VADC_G3_ASMR.
*/
#define	VADC_G3ASMR	(VADC_G3_ASMR)

/** \brief  112C, Autoscan Source Pending Register, Group */
#define VADC_G3_ASPND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASPND*)0xF002112Cu)

/** Alias (User Manual Name) for VADC_G3_ASPND.
* To use register names with standard convension, please use VADC_G3_ASPND.
*/
#define	VADC_G3ASPND	(VADC_G3_ASPND)

/** \brief  1128, Autoscan Source Channel Select Register, Group */
#define VADC_G3_ASSEL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASSEL*)0xF0021128u)

/** Alias (User Manual Name) for VADC_G3_ASSEL.
* To use register names with standard convension, please use VADC_G3_ASSEL.
*/
#define	VADC_G3ASSEL	(VADC_G3_ASSEL)

/** \brief  10C8, Boundary Flag Register, Group */
#define VADC_G3_BFL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFL*)0xF00210C8u)

/** Alias (User Manual Name) for VADC_G3_BFL.
* To use register names with standard convension, please use VADC_G3_BFL.
*/
#define	VADC_G3BFL	(VADC_G3_BFL)

/** \brief  10D0, Boundary Flag Control Register, Group */
#define VADC_G3_BFLC /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLC*)0xF00210D0u)

/** Alias (User Manual Name) for VADC_G3_BFLC.
* To use register names with standard convension, please use VADC_G3_BFLC.
*/
#define	VADC_G3BFLC	(VADC_G3_BFLC)

/** \brief  10D4, Boundary Flag Node Pointer Register, Group */
#define VADC_G3_BFLNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLNP*)0xF00210D4u)

/** Alias (User Manual Name) for VADC_G3_BFLNP.
* To use register names with standard convension, please use VADC_G3_BFLNP.
*/
#define	VADC_G3BFLNP	(VADC_G3_BFLNP)

/** \brief  10CC, Boundary Flag Software Register, Group */
#define VADC_G3_BFLS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLS*)0xF00210CCu)

/** Alias (User Manual Name) for VADC_G3_BFLS.
* To use register names with standard convension, please use VADC_G3_BFLS.
*/
#define	VADC_G3BFLS	(VADC_G3_BFLS)

/** \brief  10B8, Boundary Select Register, Group */
#define VADC_G3_BOUND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BOUND*)0xF00210B8u)

/** Alias (User Manual Name) for VADC_G3_BOUND.
* To use register names with standard convension, please use VADC_G3_BOUND.
*/
#define	VADC_G3BOUND	(VADC_G3_BOUND)

/** \brief  1190, Channel Event Flag Clear Register, Group */
#define VADC_G3_CEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFCLR*)0xF0021190u)

/** Alias (User Manual Name) for VADC_G3_CEFCLR.
* To use register names with standard convension, please use VADC_G3_CEFCLR.
*/
#define	VADC_G3CEFCLR	(VADC_G3_CEFCLR)

/** \brief  1180, Channel Event Flag Register, Group */
#define VADC_G3_CEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFLAG*)0xF0021180u)

/** Alias (User Manual Name) for VADC_G3_CEFLAG.
* To use register names with standard convension, please use VADC_G3_CEFLAG.
*/
#define	VADC_G3CEFLAG	(VADC_G3_CEFLAG)

/** \brief  11A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G3_CEVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEVNP0*)0xF00211A0u)

/** Alias (User Manual Name) for VADC_G3_CEVNP0.
* To use register names with standard convension, please use VADC_G3_CEVNP0.
*/
#define	VADC_G3CEVNP0	(VADC_G3_CEVNP0)

/** \brief  1088, Channel Assignment Register, Group */
#define VADC_G3_CHASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHASS*)0xF0021088u)

/** Alias (User Manual Name) for VADC_G3_CHASS.
* To use register names with standard convension, please use VADC_G3_CHASS.
*/
#define	VADC_G3CHASS	(VADC_G3_CHASS)

/** \brief  1200, Group, Channel Ctrl. Reg. */
#define VADC_G3_CHCTR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021200u)

/** Alias (User Manual Name) for VADC_G3_CHCTR0.
* To use register names with standard convension, please use VADC_G3_CHCTR0.
*/
#define	VADC_G3CHCTR0	(VADC_G3_CHCTR0)

/** \brief  1204, Group, Channel Ctrl. Reg. */
#define VADC_G3_CHCTR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021204u)

/** Alias (User Manual Name) for VADC_G3_CHCTR1.
* To use register names with standard convension, please use VADC_G3_CHCTR1.
*/
#define	VADC_G3CHCTR1	(VADC_G3_CHCTR1)

/** \brief  1208, Group, Channel Ctrl. Reg. */
#define VADC_G3_CHCTR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021208u)

/** Alias (User Manual Name) for VADC_G3_CHCTR2.
* To use register names with standard convension, please use VADC_G3_CHCTR2.
*/
#define	VADC_G3CHCTR2	(VADC_G3_CHCTR2)

/** \brief  120C, Group, Channel Ctrl. Reg. */
#define VADC_G3_CHCTR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF002120Cu)

/** Alias (User Manual Name) for VADC_G3_CHCTR3.
* To use register names with standard convension, please use VADC_G3_CHCTR3.
*/
#define	VADC_G3CHCTR3	(VADC_G3_CHCTR3)

/** \brief  1210, Group, Channel Ctrl. Reg. */
#define VADC_G3_CHCTR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021210u)

/** Alias (User Manual Name) for VADC_G3_CHCTR4.
* To use register names with standard convension, please use VADC_G3_CHCTR4.
*/
#define	VADC_G3CHCTR4	(VADC_G3_CHCTR4)

/** \brief  1214, Group, Channel Ctrl. Reg. */
#define VADC_G3_CHCTR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021214u)

/** Alias (User Manual Name) for VADC_G3_CHCTR5.
* To use register names with standard convension, please use VADC_G3_CHCTR5.
*/
#define	VADC_G3CHCTR5	(VADC_G3_CHCTR5)

/** \brief  1218, Group, Channel Ctrl. Reg. */
#define VADC_G3_CHCTR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021218u)

/** Alias (User Manual Name) for VADC_G3_CHCTR6.
* To use register names with standard convension, please use VADC_G3_CHCTR6.
*/
#define	VADC_G3CHCTR6	(VADC_G3_CHCTR6)

/** \brief  121C, Group, Channel Ctrl. Reg. */
#define VADC_G3_CHCTR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF002121Cu)

/** Alias (User Manual Name) for VADC_G3_CHCTR7.
* To use register names with standard convension, please use VADC_G3_CHCTR7.
*/
#define	VADC_G3CHCTR7	(VADC_G3_CHCTR7)

/** \brief  11F0, External Multiplexer Control Register, Group x */
#define VADC_G3_EMUXCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_EMUXCTR*)0xF00211F0u)

/** Alias (User Manual Name) for VADC_G3_EMUXCTR.
* To use register names with standard convension, please use VADC_G3_EMUXCTR.
*/
#define	VADC_G3EMUXCTR	(VADC_G3_EMUXCTR)

/** \brief  10A0, Input Class Register */
#define VADC_G3_ICLASS0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00210A0u)

/** Alias (User Manual Name) for VADC_G3_ICLASS0.
* To use register names with standard convension, please use VADC_G3_ICLASS0.
*/
#define	VADC_G3ICLASS0	(VADC_G3_ICLASS0)

/** \brief  10A4, Input Class Register */
#define VADC_G3_ICLASS1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00210A4u)

/** Alias (User Manual Name) for VADC_G3_ICLASS1.
* To use register names with standard convension, please use VADC_G3_ICLASS1.
*/
#define	VADC_G3ICLASS1	(VADC_G3_ICLASS1)

/** \brief  110C, Queue 0 Register 0, Group */
#define VADC_G3_Q0R0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_Q0R0*)0xF002110Cu)

/** Alias (User Manual Name) for VADC_G3_Q0R0.
* To use register names with standard convension, please use VADC_G3_Q0R0.
*/
#define	VADC_G3Q0R0	(VADC_G3_Q0R0)

/** \brief  1110, Queue 0 Input Register, Group */
#define VADC_G3_QBUR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QBUR0*)0xF0021110u)

/** Alias (User Manual Name) for VADC_G3_QBUR0.
* To use register names with standard convension, please use VADC_G3_QBUR0.
*/
#define	VADC_G3QBUR0	(VADC_G3_QBUR0)

/** \brief  1100, Queue 0 Source Control Register, Group */
#define VADC_G3_QCTRL0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QCTRL0*)0xF0021100u)

/** Alias (User Manual Name) for VADC_G3_QCTRL0.
* To use register names with standard convension, please use VADC_G3_QCTRL0.
*/
#define	VADC_G3QCTRL0	(VADC_G3_QCTRL0)

/** \brief  1110, Queue 0 Input Register, Group */
#define VADC_G3_QINR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QINR0*)0xF0021110u)

/** Alias (User Manual Name) for VADC_G3_QINR0.
* To use register names with standard convension, please use VADC_G3_QINR0.
*/
#define	VADC_G3QINR0	(VADC_G3_QINR0)

/** \brief  1104, Queue 0 Mode Register, Group */
#define VADC_G3_QMR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QMR0*)0xF0021104u)

/** Alias (User Manual Name) for VADC_G3_QMR0.
* To use register names with standard convension, please use VADC_G3_QMR0.
*/
#define	VADC_G3QMR0	(VADC_G3_QMR0)

/** \brief  1108, Queue 0 Status Register, Group */
#define VADC_G3_QSR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QSR0*)0xF0021108u)

/** Alias (User Manual Name) for VADC_G3_QSR0.
* To use register names with standard convension, please use VADC_G3_QSR0.
*/
#define	VADC_G3QSR0	(VADC_G3_QSR0)

/** \brief  1280, Group Result Control Reg. */
#define VADC_G3_RCR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021280u)

/** Alias (User Manual Name) for VADC_G3_RCR0.
* To use register names with standard convension, please use VADC_G3_RCR0.
*/
#define	VADC_G3RCR0	(VADC_G3_RCR0)

/** \brief  1284, Group Result Control Reg. */
#define VADC_G3_RCR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021284u)

/** Alias (User Manual Name) for VADC_G3_RCR1.
* To use register names with standard convension, please use VADC_G3_RCR1.
*/
#define	VADC_G3RCR1	(VADC_G3_RCR1)

/** \brief  12A8, Group Result Control Reg. */
#define VADC_G3_RCR10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00212A8u)

/** Alias (User Manual Name) for VADC_G3_RCR10.
* To use register names with standard convension, please use VADC_G3_RCR10.
*/
#define	VADC_G3RCR10	(VADC_G3_RCR10)

/** \brief  12AC, Group Result Control Reg. */
#define VADC_G3_RCR11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00212ACu)

/** Alias (User Manual Name) for VADC_G3_RCR11.
* To use register names with standard convension, please use VADC_G3_RCR11.
*/
#define	VADC_G3RCR11	(VADC_G3_RCR11)

/** \brief  12B0, Group Result Control Reg. */
#define VADC_G3_RCR12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00212B0u)

/** Alias (User Manual Name) for VADC_G3_RCR12.
* To use register names with standard convension, please use VADC_G3_RCR12.
*/
#define	VADC_G3RCR12	(VADC_G3_RCR12)

/** \brief  12B4, Group Result Control Reg. */
#define VADC_G3_RCR13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00212B4u)

/** Alias (User Manual Name) for VADC_G3_RCR13.
* To use register names with standard convension, please use VADC_G3_RCR13.
*/
#define	VADC_G3RCR13	(VADC_G3_RCR13)

/** \brief  12B8, Group Result Control Reg. */
#define VADC_G3_RCR14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00212B8u)

/** Alias (User Manual Name) for VADC_G3_RCR14.
* To use register names with standard convension, please use VADC_G3_RCR14.
*/
#define	VADC_G3RCR14	(VADC_G3_RCR14)

/** \brief  12BC, Group Result Control Reg. */
#define VADC_G3_RCR15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00212BCu)

/** Alias (User Manual Name) for VADC_G3_RCR15.
* To use register names with standard convension, please use VADC_G3_RCR15.
*/
#define	VADC_G3RCR15	(VADC_G3_RCR15)

/** \brief  1288, Group Result Control Reg. */
#define VADC_G3_RCR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021288u)

/** Alias (User Manual Name) for VADC_G3_RCR2.
* To use register names with standard convension, please use VADC_G3_RCR2.
*/
#define	VADC_G3RCR2	(VADC_G3_RCR2)

/** \brief  128C, Group Result Control Reg. */
#define VADC_G3_RCR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF002128Cu)

/** Alias (User Manual Name) for VADC_G3_RCR3.
* To use register names with standard convension, please use VADC_G3_RCR3.
*/
#define	VADC_G3RCR3	(VADC_G3_RCR3)

/** \brief  1290, Group Result Control Reg. */
#define VADC_G3_RCR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021290u)

/** Alias (User Manual Name) for VADC_G3_RCR4.
* To use register names with standard convension, please use VADC_G3_RCR4.
*/
#define	VADC_G3RCR4	(VADC_G3_RCR4)

/** \brief  1294, Group Result Control Reg. */
#define VADC_G3_RCR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021294u)

/** Alias (User Manual Name) for VADC_G3_RCR5.
* To use register names with standard convension, please use VADC_G3_RCR5.
*/
#define	VADC_G3RCR5	(VADC_G3_RCR5)

/** \brief  1298, Group Result Control Reg. */
#define VADC_G3_RCR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021298u)

/** Alias (User Manual Name) for VADC_G3_RCR6.
* To use register names with standard convension, please use VADC_G3_RCR6.
*/
#define	VADC_G3RCR6	(VADC_G3_RCR6)

/** \brief  129C, Group Result Control Reg. */
#define VADC_G3_RCR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF002129Cu)

/** Alias (User Manual Name) for VADC_G3_RCR7.
* To use register names with standard convension, please use VADC_G3_RCR7.
*/
#define	VADC_G3RCR7	(VADC_G3_RCR7)

/** \brief  12A0, Group Result Control Reg. */
#define VADC_G3_RCR8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00212A0u)

/** Alias (User Manual Name) for VADC_G3_RCR8.
* To use register names with standard convension, please use VADC_G3_RCR8.
*/
#define	VADC_G3RCR8	(VADC_G3_RCR8)

/** \brief  12A4, Group Result Control Reg. */
#define VADC_G3_RCR9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00212A4u)

/** Alias (User Manual Name) for VADC_G3_RCR9.
* To use register names with standard convension, please use VADC_G3_RCR9.
*/
#define	VADC_G3RCR9	(VADC_G3_RCR9)

/** \brief  1194, Result Event Flag Clear Register, Group */
#define VADC_G3_REFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFCLR*)0xF0021194u)

/** Alias (User Manual Name) for VADC_G3_REFCLR.
* To use register names with standard convension, please use VADC_G3_REFCLR.
*/
#define	VADC_G3REFCLR	(VADC_G3_REFCLR)

/** \brief  1184, Result Event Flag Register, Group */
#define VADC_G3_REFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFLAG*)0xF0021184u)

/** Alias (User Manual Name) for VADC_G3_REFLAG.
* To use register names with standard convension, please use VADC_G3_REFLAG.
*/
#define	VADC_G3REFLAG	(VADC_G3_REFLAG)

/** \brief  1300, Group Result Register */
#define VADC_G3_RES0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021300u)

/** Alias (User Manual Name) for VADC_G3_RES0.
* To use register names with standard convension, please use VADC_G3_RES0.
*/
#define	VADC_G3RES0	(VADC_G3_RES0)

/** \brief  1304, Group Result Register */
#define VADC_G3_RES1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021304u)

/** Alias (User Manual Name) for VADC_G3_RES1.
* To use register names with standard convension, please use VADC_G3_RES1.
*/
#define	VADC_G3RES1	(VADC_G3_RES1)

/** \brief  1328, Group Result Register */
#define VADC_G3_RES10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021328u)

/** Alias (User Manual Name) for VADC_G3_RES10.
* To use register names with standard convension, please use VADC_G3_RES10.
*/
#define	VADC_G3RES10	(VADC_G3_RES10)

/** \brief  132C, Group Result Register */
#define VADC_G3_RES11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002132Cu)

/** Alias (User Manual Name) for VADC_G3_RES11.
* To use register names with standard convension, please use VADC_G3_RES11.
*/
#define	VADC_G3RES11	(VADC_G3_RES11)

/** \brief  1330, Group Result Register */
#define VADC_G3_RES12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021330u)

/** Alias (User Manual Name) for VADC_G3_RES12.
* To use register names with standard convension, please use VADC_G3_RES12.
*/
#define	VADC_G3RES12	(VADC_G3_RES12)

/** \brief  1334, Group Result Register */
#define VADC_G3_RES13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021334u)

/** Alias (User Manual Name) for VADC_G3_RES13.
* To use register names with standard convension, please use VADC_G3_RES13.
*/
#define	VADC_G3RES13	(VADC_G3_RES13)

/** \brief  1338, Group Result Register */
#define VADC_G3_RES14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021338u)

/** Alias (User Manual Name) for VADC_G3_RES14.
* To use register names with standard convension, please use VADC_G3_RES14.
*/
#define	VADC_G3RES14	(VADC_G3_RES14)

/** \brief  133C, Group Result Register */
#define VADC_G3_RES15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002133Cu)

/** Alias (User Manual Name) for VADC_G3_RES15.
* To use register names with standard convension, please use VADC_G3_RES15.
*/
#define	VADC_G3RES15	(VADC_G3_RES15)

/** \brief  1308, Group Result Register */
#define VADC_G3_RES2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021308u)

/** Alias (User Manual Name) for VADC_G3_RES2.
* To use register names with standard convension, please use VADC_G3_RES2.
*/
#define	VADC_G3RES2	(VADC_G3_RES2)

/** \brief  130C, Group Result Register */
#define VADC_G3_RES3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002130Cu)

/** Alias (User Manual Name) for VADC_G3_RES3.
* To use register names with standard convension, please use VADC_G3_RES3.
*/
#define	VADC_G3RES3	(VADC_G3_RES3)

/** \brief  1310, Group Result Register */
#define VADC_G3_RES4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021310u)

/** Alias (User Manual Name) for VADC_G3_RES4.
* To use register names with standard convension, please use VADC_G3_RES4.
*/
#define	VADC_G3RES4	(VADC_G3_RES4)

/** \brief  1314, Group Result Register */
#define VADC_G3_RES5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021314u)

/** Alias (User Manual Name) for VADC_G3_RES5.
* To use register names with standard convension, please use VADC_G3_RES5.
*/
#define	VADC_G3RES5	(VADC_G3_RES5)

/** \brief  1318, Group Result Register */
#define VADC_G3_RES6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021318u)

/** Alias (User Manual Name) for VADC_G3_RES6.
* To use register names with standard convension, please use VADC_G3_RES6.
*/
#define	VADC_G3RES6	(VADC_G3_RES6)

/** \brief  131C, Group Result Register */
#define VADC_G3_RES7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002131Cu)

/** Alias (User Manual Name) for VADC_G3_RES7.
* To use register names with standard convension, please use VADC_G3_RES7.
*/
#define	VADC_G3RES7	(VADC_G3_RES7)

/** \brief  1320, Group Result Register */
#define VADC_G3_RES8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021320u)

/** Alias (User Manual Name) for VADC_G3_RES8.
* To use register names with standard convension, please use VADC_G3_RES8.
*/
#define	VADC_G3RES8	(VADC_G3_RES8)

/** \brief  1324, Group Result Register */
#define VADC_G3_RES9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021324u)

/** Alias (User Manual Name) for VADC_G3_RES9.
* To use register names with standard convension, please use VADC_G3_RES9.
*/
#define	VADC_G3RES9	(VADC_G3_RES9)

/** \brief  1380, Group Result Reg., Debug */
#define VADC_G3_RESD0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021380u)

/** Alias (User Manual Name) for VADC_G3_RESD0.
* To use register names with standard convension, please use VADC_G3_RESD0.
*/
#define	VADC_G3RESD0	(VADC_G3_RESD0)

/** \brief  1384, Group Result Reg., Debug */
#define VADC_G3_RESD1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021384u)

/** Alias (User Manual Name) for VADC_G3_RESD1.
* To use register names with standard convension, please use VADC_G3_RESD1.
*/
#define	VADC_G3RESD1	(VADC_G3_RESD1)

/** \brief  13A8, Group Result Reg., Debug */
#define VADC_G3_RESD10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00213A8u)

/** Alias (User Manual Name) for VADC_G3_RESD10.
* To use register names with standard convension, please use VADC_G3_RESD10.
*/
#define	VADC_G3RESD10	(VADC_G3_RESD10)

/** \brief  13AC, Group Result Reg., Debug */
#define VADC_G3_RESD11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00213ACu)

/** Alias (User Manual Name) for VADC_G3_RESD11.
* To use register names with standard convension, please use VADC_G3_RESD11.
*/
#define	VADC_G3RESD11	(VADC_G3_RESD11)

/** \brief  13B0, Group Result Reg., Debug */
#define VADC_G3_RESD12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00213B0u)

/** Alias (User Manual Name) for VADC_G3_RESD12.
* To use register names with standard convension, please use VADC_G3_RESD12.
*/
#define	VADC_G3RESD12	(VADC_G3_RESD12)

/** \brief  13B4, Group Result Reg., Debug */
#define VADC_G3_RESD13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00213B4u)

/** Alias (User Manual Name) for VADC_G3_RESD13.
* To use register names with standard convension, please use VADC_G3_RESD13.
*/
#define	VADC_G3RESD13	(VADC_G3_RESD13)

/** \brief  13B8, Group Result Reg., Debug */
#define VADC_G3_RESD14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00213B8u)

/** Alias (User Manual Name) for VADC_G3_RESD14.
* To use register names with standard convension, please use VADC_G3_RESD14.
*/
#define	VADC_G3RESD14	(VADC_G3_RESD14)

/** \brief  13BC, Group Result Reg., Debug */
#define VADC_G3_RESD15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00213BCu)

/** Alias (User Manual Name) for VADC_G3_RESD15.
* To use register names with standard convension, please use VADC_G3_RESD15.
*/
#define	VADC_G3RESD15	(VADC_G3_RESD15)

/** \brief  1388, Group Result Reg., Debug */
#define VADC_G3_RESD2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021388u)

/** Alias (User Manual Name) for VADC_G3_RESD2.
* To use register names with standard convension, please use VADC_G3_RESD2.
*/
#define	VADC_G3RESD2	(VADC_G3_RESD2)

/** \brief  138C, Group Result Reg., Debug */
#define VADC_G3_RESD3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF002138Cu)

/** Alias (User Manual Name) for VADC_G3_RESD3.
* To use register names with standard convension, please use VADC_G3_RESD3.
*/
#define	VADC_G3RESD3	(VADC_G3_RESD3)

/** \brief  1390, Group Result Reg., Debug */
#define VADC_G3_RESD4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021390u)

/** Alias (User Manual Name) for VADC_G3_RESD4.
* To use register names with standard convension, please use VADC_G3_RESD4.
*/
#define	VADC_G3RESD4	(VADC_G3_RESD4)

/** \brief  1394, Group Result Reg., Debug */
#define VADC_G3_RESD5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021394u)

/** Alias (User Manual Name) for VADC_G3_RESD5.
* To use register names with standard convension, please use VADC_G3_RESD5.
*/
#define	VADC_G3RESD5	(VADC_G3_RESD5)

/** \brief  1398, Group Result Reg., Debug */
#define VADC_G3_RESD6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021398u)

/** Alias (User Manual Name) for VADC_G3_RESD6.
* To use register names with standard convension, please use VADC_G3_RESD6.
*/
#define	VADC_G3RESD6	(VADC_G3_RESD6)

/** \brief  139C, Group Result Reg., Debug */
#define VADC_G3_RESD7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF002139Cu)

/** Alias (User Manual Name) for VADC_G3_RESD7.
* To use register names with standard convension, please use VADC_G3_RESD7.
*/
#define	VADC_G3RESD7	(VADC_G3_RESD7)

/** \brief  13A0, Group Result Reg., Debug */
#define VADC_G3_RESD8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00213A0u)

/** Alias (User Manual Name) for VADC_G3_RESD8.
* To use register names with standard convension, please use VADC_G3_RESD8.
*/
#define	VADC_G3RESD8	(VADC_G3_RESD8)

/** \brief  13A4, Group Result Reg., Debug */
#define VADC_G3_RESD9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00213A4u)

/** Alias (User Manual Name) for VADC_G3_RESD9.
* To use register names with standard convension, please use VADC_G3_RESD9.
*/
#define	VADC_G3RESD9	(VADC_G3_RESD9)

/** \brief  11B0, Result Event Node Pointer Register 0, Group */
#define VADC_G3_REVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP0*)0xF00211B0u)

/** Alias (User Manual Name) for VADC_G3_REVNP0.
* To use register names with standard convension, please use VADC_G3_REVNP0.
*/
#define	VADC_G3REVNP0	(VADC_G3_REVNP0)

/** \brief  11B4, Result Event Node Pointer Register 1, Group */
#define VADC_G3_REVNP1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP1*)0xF00211B4u)

/** Alias (User Manual Name) for VADC_G3_REVNP1.
* To use register names with standard convension, please use VADC_G3_REVNP1.
*/
#define	VADC_G3REVNP1	(VADC_G3_REVNP1)

/** \brief  108C, Result Assignment Register, Group */
#define VADC_G3_RRASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RRASS*)0xF002108Cu)

/** Alias (User Manual Name) for VADC_G3_RRASS.
* To use register names with standard convension, please use VADC_G3_RRASS.
*/
#define	VADC_G3RRASS	(VADC_G3_RRASS)

/** \brief  1198, Source Event Flag Clear Register, Group */
#define VADC_G3_SEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFCLR*)0xF0021198u)

/** Alias (User Manual Name) for VADC_G3_SEFCLR.
* To use register names with standard convension, please use VADC_G3_SEFCLR.
*/
#define	VADC_G3SEFCLR	(VADC_G3_SEFCLR)

/** \brief  1188, Source Event Flag Register, Group */
#define VADC_G3_SEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFLAG*)0xF0021188u)

/** Alias (User Manual Name) for VADC_G3_SEFLAG.
* To use register names with standard convension, please use VADC_G3_SEFLAG.
*/
#define	VADC_G3SEFLAG	(VADC_G3_SEFLAG)

/** \brief  11C0, Source Event Node Pointer Register, Group */
#define VADC_G3_SEVNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEVNP*)0xF00211C0u)

/** Alias (User Manual Name) for VADC_G3_SEVNP.
* To use register names with standard convension, please use VADC_G3_SEVNP.
*/
#define	VADC_G3SEVNP	(VADC_G3_SEVNP)

/** \brief  11C8, Service Request Software Activation Trigger, Group */
#define VADC_G3_SRACT /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SRACT*)0xF00211C8u)

/** Alias (User Manual Name) for VADC_G3_SRACT.
* To use register names with standard convension, please use VADC_G3_SRACT.
*/
#define	VADC_G3SRACT	(VADC_G3_SRACT)

/** \brief  10C0, Synchronization Control Register, Group */
#define VADC_G3_SYNCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SYNCTR*)0xF00210C0u)

/** Alias (User Manual Name) for VADC_G3_SYNCTR.
* To use register names with standard convension, please use VADC_G3_SYNCTR.
*/
#define	VADC_G3SYNCTR	(VADC_G3_SYNCTR)

/** \brief  11F8, Valid Flag Register, Group */
#define VADC_G3_VFR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_VFR*)0xF00211F8u)

/** Alias (User Manual Name) for VADC_G3_VFR.
* To use register names with standard convension, please use VADC_G3_VFR.
*/
#define	VADC_G3VFR	(VADC_G3_VFR)

/** \brief  14B0, Alias Register, Group */
#define VADC_G4_ALIAS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ALIAS*)0xF00214B0u)

/** Alias (User Manual Name) for VADC_G4_ALIAS.
* To use register names with standard convension, please use VADC_G4_ALIAS.
*/
#define	VADC_G4ALIAS	(VADC_G4_ALIAS)

/** \brief  1480, Arbitration Configuration Register, Group */
#define VADC_G4_ARBCFG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBCFG*)0xF0021480u)

/** Alias (User Manual Name) for VADC_G4_ARBCFG.
* To use register names with standard convension, please use VADC_G4_ARBCFG.
*/
#define	VADC_G4ARBCFG	(VADC_G4_ARBCFG)

/** \brief  1484, Arbitration Priority Register, Group */
#define VADC_G4_ARBPR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBPR*)0xF0021484u)

/** Alias (User Manual Name) for VADC_G4_ARBPR.
* To use register names with standard convension, please use VADC_G4_ARBPR.
*/
#define	VADC_G4ARBPR	(VADC_G4_ARBPR)

/** \brief  1520, Autoscan Source Control Register, Group */
#define VADC_G4_ASCTRL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASCTRL*)0xF0021520u)

/** Alias (User Manual Name) for VADC_G4_ASCTRL.
* To use register names with standard convension, please use VADC_G4_ASCTRL.
*/
#define	VADC_G4ASCTRL	(VADC_G4_ASCTRL)

/** \brief  1524, Autoscan Source Mode Register, Group */
#define VADC_G4_ASMR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASMR*)0xF0021524u)

/** Alias (User Manual Name) for VADC_G4_ASMR.
* To use register names with standard convension, please use VADC_G4_ASMR.
*/
#define	VADC_G4ASMR	(VADC_G4_ASMR)

/** \brief  152C, Autoscan Source Pending Register, Group */
#define VADC_G4_ASPND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASPND*)0xF002152Cu)

/** Alias (User Manual Name) for VADC_G4_ASPND.
* To use register names with standard convension, please use VADC_G4_ASPND.
*/
#define	VADC_G4ASPND	(VADC_G4_ASPND)

/** \brief  1528, Autoscan Source Channel Select Register, Group */
#define VADC_G4_ASSEL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASSEL*)0xF0021528u)

/** Alias (User Manual Name) for VADC_G4_ASSEL.
* To use register names with standard convension, please use VADC_G4_ASSEL.
*/
#define	VADC_G4ASSEL	(VADC_G4_ASSEL)

/** \brief  14C8, Boundary Flag Register, Group */
#define VADC_G4_BFL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFL*)0xF00214C8u)

/** Alias (User Manual Name) for VADC_G4_BFL.
* To use register names with standard convension, please use VADC_G4_BFL.
*/
#define	VADC_G4BFL	(VADC_G4_BFL)

/** \brief  14D0, Boundary Flag Control Register, Group */
#define VADC_G4_BFLC /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLC*)0xF00214D0u)

/** Alias (User Manual Name) for VADC_G4_BFLC.
* To use register names with standard convension, please use VADC_G4_BFLC.
*/
#define	VADC_G4BFLC	(VADC_G4_BFLC)

/** \brief  14D4, Boundary Flag Node Pointer Register, Group */
#define VADC_G4_BFLNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLNP*)0xF00214D4u)

/** Alias (User Manual Name) for VADC_G4_BFLNP.
* To use register names with standard convension, please use VADC_G4_BFLNP.
*/
#define	VADC_G4BFLNP	(VADC_G4_BFLNP)

/** \brief  14CC, Boundary Flag Software Register, Group */
#define VADC_G4_BFLS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLS*)0xF00214CCu)

/** Alias (User Manual Name) for VADC_G4_BFLS.
* To use register names with standard convension, please use VADC_G4_BFLS.
*/
#define	VADC_G4BFLS	(VADC_G4_BFLS)

/** \brief  14B8, Boundary Select Register, Group */
#define VADC_G4_BOUND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BOUND*)0xF00214B8u)

/** Alias (User Manual Name) for VADC_G4_BOUND.
* To use register names with standard convension, please use VADC_G4_BOUND.
*/
#define	VADC_G4BOUND	(VADC_G4_BOUND)

/** \brief  1590, Channel Event Flag Clear Register, Group */
#define VADC_G4_CEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFCLR*)0xF0021590u)

/** Alias (User Manual Name) for VADC_G4_CEFCLR.
* To use register names with standard convension, please use VADC_G4_CEFCLR.
*/
#define	VADC_G4CEFCLR	(VADC_G4_CEFCLR)

/** \brief  1580, Channel Event Flag Register, Group */
#define VADC_G4_CEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFLAG*)0xF0021580u)

/** Alias (User Manual Name) for VADC_G4_CEFLAG.
* To use register names with standard convension, please use VADC_G4_CEFLAG.
*/
#define	VADC_G4CEFLAG	(VADC_G4_CEFLAG)

/** \brief  15A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G4_CEVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEVNP0*)0xF00215A0u)

/** Alias (User Manual Name) for VADC_G4_CEVNP0.
* To use register names with standard convension, please use VADC_G4_CEVNP0.
*/
#define	VADC_G4CEVNP0	(VADC_G4_CEVNP0)

/** \brief  1488, Channel Assignment Register, Group */
#define VADC_G4_CHASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHASS*)0xF0021488u)

/** Alias (User Manual Name) for VADC_G4_CHASS.
* To use register names with standard convension, please use VADC_G4_CHASS.
*/
#define	VADC_G4CHASS	(VADC_G4_CHASS)

/** \brief  1600, Group, Channel Ctrl. Reg. */
#define VADC_G4_CHCTR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021600u)

/** Alias (User Manual Name) for VADC_G4_CHCTR0.
* To use register names with standard convension, please use VADC_G4_CHCTR0.
*/
#define	VADC_G4CHCTR0	(VADC_G4_CHCTR0)

/** \brief  1604, Group, Channel Ctrl. Reg. */
#define VADC_G4_CHCTR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021604u)

/** Alias (User Manual Name) for VADC_G4_CHCTR1.
* To use register names with standard convension, please use VADC_G4_CHCTR1.
*/
#define	VADC_G4CHCTR1	(VADC_G4_CHCTR1)

/** \brief  1608, Group, Channel Ctrl. Reg. */
#define VADC_G4_CHCTR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021608u)

/** Alias (User Manual Name) for VADC_G4_CHCTR2.
* To use register names with standard convension, please use VADC_G4_CHCTR2.
*/
#define	VADC_G4CHCTR2	(VADC_G4_CHCTR2)

/** \brief  160C, Group, Channel Ctrl. Reg. */
#define VADC_G4_CHCTR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF002160Cu)

/** Alias (User Manual Name) for VADC_G4_CHCTR3.
* To use register names with standard convension, please use VADC_G4_CHCTR3.
*/
#define	VADC_G4CHCTR3	(VADC_G4_CHCTR3)

/** \brief  1610, Group, Channel Ctrl. Reg. */
#define VADC_G4_CHCTR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021610u)

/** Alias (User Manual Name) for VADC_G4_CHCTR4.
* To use register names with standard convension, please use VADC_G4_CHCTR4.
*/
#define	VADC_G4CHCTR4	(VADC_G4_CHCTR4)

/** \brief  1614, Group, Channel Ctrl. Reg. */
#define VADC_G4_CHCTR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021614u)

/** Alias (User Manual Name) for VADC_G4_CHCTR5.
* To use register names with standard convension, please use VADC_G4_CHCTR5.
*/
#define	VADC_G4CHCTR5	(VADC_G4_CHCTR5)

/** \brief  1618, Group, Channel Ctrl. Reg. */
#define VADC_G4_CHCTR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021618u)

/** Alias (User Manual Name) for VADC_G4_CHCTR6.
* To use register names with standard convension, please use VADC_G4_CHCTR6.
*/
#define	VADC_G4CHCTR6	(VADC_G4_CHCTR6)

/** \brief  161C, Group, Channel Ctrl. Reg. */
#define VADC_G4_CHCTR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF002161Cu)

/** Alias (User Manual Name) for VADC_G4_CHCTR7.
* To use register names with standard convension, please use VADC_G4_CHCTR7.
*/
#define	VADC_G4CHCTR7	(VADC_G4_CHCTR7)

/** \brief  15F0, External Multiplexer Control Register, Group x */
#define VADC_G4_EMUXCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_EMUXCTR*)0xF00215F0u)

/** Alias (User Manual Name) for VADC_G4_EMUXCTR.
* To use register names with standard convension, please use VADC_G4_EMUXCTR.
*/
#define	VADC_G4EMUXCTR	(VADC_G4_EMUXCTR)

/** \brief  14A0, Input Class Register */
#define VADC_G4_ICLASS0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00214A0u)

/** Alias (User Manual Name) for VADC_G4_ICLASS0.
* To use register names with standard convension, please use VADC_G4_ICLASS0.
*/
#define	VADC_G4ICLASS0	(VADC_G4_ICLASS0)

/** \brief  14A4, Input Class Register */
#define VADC_G4_ICLASS1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00214A4u)

/** Alias (User Manual Name) for VADC_G4_ICLASS1.
* To use register names with standard convension, please use VADC_G4_ICLASS1.
*/
#define	VADC_G4ICLASS1	(VADC_G4_ICLASS1)

/** \brief  150C, Queue 0 Register 0, Group */
#define VADC_G4_Q0R0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_Q0R0*)0xF002150Cu)

/** Alias (User Manual Name) for VADC_G4_Q0R0.
* To use register names with standard convension, please use VADC_G4_Q0R0.
*/
#define	VADC_G4Q0R0	(VADC_G4_Q0R0)

/** \brief  1510, Queue 0 Input Register, Group */
#define VADC_G4_QBUR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QBUR0*)0xF0021510u)

/** Alias (User Manual Name) for VADC_G4_QBUR0.
* To use register names with standard convension, please use VADC_G4_QBUR0.
*/
#define	VADC_G4QBUR0	(VADC_G4_QBUR0)

/** \brief  1500, Queue 0 Source Control Register, Group */
#define VADC_G4_QCTRL0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QCTRL0*)0xF0021500u)

/** Alias (User Manual Name) for VADC_G4_QCTRL0.
* To use register names with standard convension, please use VADC_G4_QCTRL0.
*/
#define	VADC_G4QCTRL0	(VADC_G4_QCTRL0)

/** \brief  1510, Queue 0 Input Register, Group */
#define VADC_G4_QINR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QINR0*)0xF0021510u)

/** Alias (User Manual Name) for VADC_G4_QINR0.
* To use register names with standard convension, please use VADC_G4_QINR0.
*/
#define	VADC_G4QINR0	(VADC_G4_QINR0)

/** \brief  1504, Queue 0 Mode Register, Group */
#define VADC_G4_QMR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QMR0*)0xF0021504u)

/** Alias (User Manual Name) for VADC_G4_QMR0.
* To use register names with standard convension, please use VADC_G4_QMR0.
*/
#define	VADC_G4QMR0	(VADC_G4_QMR0)

/** \brief  1508, Queue 0 Status Register, Group */
#define VADC_G4_QSR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QSR0*)0xF0021508u)

/** Alias (User Manual Name) for VADC_G4_QSR0.
* To use register names with standard convension, please use VADC_G4_QSR0.
*/
#define	VADC_G4QSR0	(VADC_G4_QSR0)

/** \brief  1680, Group Result Control Reg. */
#define VADC_G4_RCR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021680u)

/** Alias (User Manual Name) for VADC_G4_RCR0.
* To use register names with standard convension, please use VADC_G4_RCR0.
*/
#define	VADC_G4RCR0	(VADC_G4_RCR0)

/** \brief  1684, Group Result Control Reg. */
#define VADC_G4_RCR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021684u)

/** Alias (User Manual Name) for VADC_G4_RCR1.
* To use register names with standard convension, please use VADC_G4_RCR1.
*/
#define	VADC_G4RCR1	(VADC_G4_RCR1)

/** \brief  16A8, Group Result Control Reg. */
#define VADC_G4_RCR10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00216A8u)

/** Alias (User Manual Name) for VADC_G4_RCR10.
* To use register names with standard convension, please use VADC_G4_RCR10.
*/
#define	VADC_G4RCR10	(VADC_G4_RCR10)

/** \brief  16AC, Group Result Control Reg. */
#define VADC_G4_RCR11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00216ACu)

/** Alias (User Manual Name) for VADC_G4_RCR11.
* To use register names with standard convension, please use VADC_G4_RCR11.
*/
#define	VADC_G4RCR11	(VADC_G4_RCR11)

/** \brief  16B0, Group Result Control Reg. */
#define VADC_G4_RCR12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00216B0u)

/** Alias (User Manual Name) for VADC_G4_RCR12.
* To use register names with standard convension, please use VADC_G4_RCR12.
*/
#define	VADC_G4RCR12	(VADC_G4_RCR12)

/** \brief  16B4, Group Result Control Reg. */
#define VADC_G4_RCR13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00216B4u)

/** Alias (User Manual Name) for VADC_G4_RCR13.
* To use register names with standard convension, please use VADC_G4_RCR13.
*/
#define	VADC_G4RCR13	(VADC_G4_RCR13)

/** \brief  16B8, Group Result Control Reg. */
#define VADC_G4_RCR14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00216B8u)

/** Alias (User Manual Name) for VADC_G4_RCR14.
* To use register names with standard convension, please use VADC_G4_RCR14.
*/
#define	VADC_G4RCR14	(VADC_G4_RCR14)

/** \brief  16BC, Group Result Control Reg. */
#define VADC_G4_RCR15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00216BCu)

/** Alias (User Manual Name) for VADC_G4_RCR15.
* To use register names with standard convension, please use VADC_G4_RCR15.
*/
#define	VADC_G4RCR15	(VADC_G4_RCR15)

/** \brief  1688, Group Result Control Reg. */
#define VADC_G4_RCR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021688u)

/** Alias (User Manual Name) for VADC_G4_RCR2.
* To use register names with standard convension, please use VADC_G4_RCR2.
*/
#define	VADC_G4RCR2	(VADC_G4_RCR2)

/** \brief  168C, Group Result Control Reg. */
#define VADC_G4_RCR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF002168Cu)

/** Alias (User Manual Name) for VADC_G4_RCR3.
* To use register names with standard convension, please use VADC_G4_RCR3.
*/
#define	VADC_G4RCR3	(VADC_G4_RCR3)

/** \brief  1690, Group Result Control Reg. */
#define VADC_G4_RCR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021690u)

/** Alias (User Manual Name) for VADC_G4_RCR4.
* To use register names with standard convension, please use VADC_G4_RCR4.
*/
#define	VADC_G4RCR4	(VADC_G4_RCR4)

/** \brief  1694, Group Result Control Reg. */
#define VADC_G4_RCR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021694u)

/** Alias (User Manual Name) for VADC_G4_RCR5.
* To use register names with standard convension, please use VADC_G4_RCR5.
*/
#define	VADC_G4RCR5	(VADC_G4_RCR5)

/** \brief  1698, Group Result Control Reg. */
#define VADC_G4_RCR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021698u)

/** Alias (User Manual Name) for VADC_G4_RCR6.
* To use register names with standard convension, please use VADC_G4_RCR6.
*/
#define	VADC_G4RCR6	(VADC_G4_RCR6)

/** \brief  169C, Group Result Control Reg. */
#define VADC_G4_RCR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF002169Cu)

/** Alias (User Manual Name) for VADC_G4_RCR7.
* To use register names with standard convension, please use VADC_G4_RCR7.
*/
#define	VADC_G4RCR7	(VADC_G4_RCR7)

/** \brief  16A0, Group Result Control Reg. */
#define VADC_G4_RCR8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00216A0u)

/** Alias (User Manual Name) for VADC_G4_RCR8.
* To use register names with standard convension, please use VADC_G4_RCR8.
*/
#define	VADC_G4RCR8	(VADC_G4_RCR8)

/** \brief  16A4, Group Result Control Reg. */
#define VADC_G4_RCR9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00216A4u)

/** Alias (User Manual Name) for VADC_G4_RCR9.
* To use register names with standard convension, please use VADC_G4_RCR9.
*/
#define	VADC_G4RCR9	(VADC_G4_RCR9)

/** \brief  1594, Result Event Flag Clear Register, Group */
#define VADC_G4_REFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFCLR*)0xF0021594u)

/** Alias (User Manual Name) for VADC_G4_REFCLR.
* To use register names with standard convension, please use VADC_G4_REFCLR.
*/
#define	VADC_G4REFCLR	(VADC_G4_REFCLR)

/** \brief  1584, Result Event Flag Register, Group */
#define VADC_G4_REFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFLAG*)0xF0021584u)

/** Alias (User Manual Name) for VADC_G4_REFLAG.
* To use register names with standard convension, please use VADC_G4_REFLAG.
*/
#define	VADC_G4REFLAG	(VADC_G4_REFLAG)

/** \brief  1700, Group Result Register */
#define VADC_G4_RES0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021700u)

/** Alias (User Manual Name) for VADC_G4_RES0.
* To use register names with standard convension, please use VADC_G4_RES0.
*/
#define	VADC_G4RES0	(VADC_G4_RES0)

/** \brief  1704, Group Result Register */
#define VADC_G4_RES1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021704u)

/** Alias (User Manual Name) for VADC_G4_RES1.
* To use register names with standard convension, please use VADC_G4_RES1.
*/
#define	VADC_G4RES1	(VADC_G4_RES1)

/** \brief  1728, Group Result Register */
#define VADC_G4_RES10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021728u)

/** Alias (User Manual Name) for VADC_G4_RES10.
* To use register names with standard convension, please use VADC_G4_RES10.
*/
#define	VADC_G4RES10	(VADC_G4_RES10)

/** \brief  172C, Group Result Register */
#define VADC_G4_RES11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002172Cu)

/** Alias (User Manual Name) for VADC_G4_RES11.
* To use register names with standard convension, please use VADC_G4_RES11.
*/
#define	VADC_G4RES11	(VADC_G4_RES11)

/** \brief  1730, Group Result Register */
#define VADC_G4_RES12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021730u)

/** Alias (User Manual Name) for VADC_G4_RES12.
* To use register names with standard convension, please use VADC_G4_RES12.
*/
#define	VADC_G4RES12	(VADC_G4_RES12)

/** \brief  1734, Group Result Register */
#define VADC_G4_RES13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021734u)

/** Alias (User Manual Name) for VADC_G4_RES13.
* To use register names with standard convension, please use VADC_G4_RES13.
*/
#define	VADC_G4RES13	(VADC_G4_RES13)

/** \brief  1738, Group Result Register */
#define VADC_G4_RES14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021738u)

/** Alias (User Manual Name) for VADC_G4_RES14.
* To use register names with standard convension, please use VADC_G4_RES14.
*/
#define	VADC_G4RES14	(VADC_G4_RES14)

/** \brief  173C, Group Result Register */
#define VADC_G4_RES15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002173Cu)

/** Alias (User Manual Name) for VADC_G4_RES15.
* To use register names with standard convension, please use VADC_G4_RES15.
*/
#define	VADC_G4RES15	(VADC_G4_RES15)

/** \brief  1708, Group Result Register */
#define VADC_G4_RES2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021708u)

/** Alias (User Manual Name) for VADC_G4_RES2.
* To use register names with standard convension, please use VADC_G4_RES2.
*/
#define	VADC_G4RES2	(VADC_G4_RES2)

/** \brief  170C, Group Result Register */
#define VADC_G4_RES3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002170Cu)

/** Alias (User Manual Name) for VADC_G4_RES3.
* To use register names with standard convension, please use VADC_G4_RES3.
*/
#define	VADC_G4RES3	(VADC_G4_RES3)

/** \brief  1710, Group Result Register */
#define VADC_G4_RES4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021710u)

/** Alias (User Manual Name) for VADC_G4_RES4.
* To use register names with standard convension, please use VADC_G4_RES4.
*/
#define	VADC_G4RES4	(VADC_G4_RES4)

/** \brief  1714, Group Result Register */
#define VADC_G4_RES5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021714u)

/** Alias (User Manual Name) for VADC_G4_RES5.
* To use register names with standard convension, please use VADC_G4_RES5.
*/
#define	VADC_G4RES5	(VADC_G4_RES5)

/** \brief  1718, Group Result Register */
#define VADC_G4_RES6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021718u)

/** Alias (User Manual Name) for VADC_G4_RES6.
* To use register names with standard convension, please use VADC_G4_RES6.
*/
#define	VADC_G4RES6	(VADC_G4_RES6)

/** \brief  171C, Group Result Register */
#define VADC_G4_RES7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002171Cu)

/** Alias (User Manual Name) for VADC_G4_RES7.
* To use register names with standard convension, please use VADC_G4_RES7.
*/
#define	VADC_G4RES7	(VADC_G4_RES7)

/** \brief  1720, Group Result Register */
#define VADC_G4_RES8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021720u)

/** Alias (User Manual Name) for VADC_G4_RES8.
* To use register names with standard convension, please use VADC_G4_RES8.
*/
#define	VADC_G4RES8	(VADC_G4_RES8)

/** \brief  1724, Group Result Register */
#define VADC_G4_RES9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021724u)

/** Alias (User Manual Name) for VADC_G4_RES9.
* To use register names with standard convension, please use VADC_G4_RES9.
*/
#define	VADC_G4RES9	(VADC_G4_RES9)

/** \brief  1780, Group Result Reg., Debug */
#define VADC_G4_RESD0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021780u)

/** Alias (User Manual Name) for VADC_G4_RESD0.
* To use register names with standard convension, please use VADC_G4_RESD0.
*/
#define	VADC_G4RESD0	(VADC_G4_RESD0)

/** \brief  1784, Group Result Reg., Debug */
#define VADC_G4_RESD1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021784u)

/** Alias (User Manual Name) for VADC_G4_RESD1.
* To use register names with standard convension, please use VADC_G4_RESD1.
*/
#define	VADC_G4RESD1	(VADC_G4_RESD1)

/** \brief  17A8, Group Result Reg., Debug */
#define VADC_G4_RESD10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00217A8u)

/** Alias (User Manual Name) for VADC_G4_RESD10.
* To use register names with standard convension, please use VADC_G4_RESD10.
*/
#define	VADC_G4RESD10	(VADC_G4_RESD10)

/** \brief  17AC, Group Result Reg., Debug */
#define VADC_G4_RESD11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00217ACu)

/** Alias (User Manual Name) for VADC_G4_RESD11.
* To use register names with standard convension, please use VADC_G4_RESD11.
*/
#define	VADC_G4RESD11	(VADC_G4_RESD11)

/** \brief  17B0, Group Result Reg., Debug */
#define VADC_G4_RESD12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00217B0u)

/** Alias (User Manual Name) for VADC_G4_RESD12.
* To use register names with standard convension, please use VADC_G4_RESD12.
*/
#define	VADC_G4RESD12	(VADC_G4_RESD12)

/** \brief  17B4, Group Result Reg., Debug */
#define VADC_G4_RESD13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00217B4u)

/** Alias (User Manual Name) for VADC_G4_RESD13.
* To use register names with standard convension, please use VADC_G4_RESD13.
*/
#define	VADC_G4RESD13	(VADC_G4_RESD13)

/** \brief  17B8, Group Result Reg., Debug */
#define VADC_G4_RESD14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00217B8u)

/** Alias (User Manual Name) for VADC_G4_RESD14.
* To use register names with standard convension, please use VADC_G4_RESD14.
*/
#define	VADC_G4RESD14	(VADC_G4_RESD14)

/** \brief  17BC, Group Result Reg., Debug */
#define VADC_G4_RESD15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00217BCu)

/** Alias (User Manual Name) for VADC_G4_RESD15.
* To use register names with standard convension, please use VADC_G4_RESD15.
*/
#define	VADC_G4RESD15	(VADC_G4_RESD15)

/** \brief  1788, Group Result Reg., Debug */
#define VADC_G4_RESD2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021788u)

/** Alias (User Manual Name) for VADC_G4_RESD2.
* To use register names with standard convension, please use VADC_G4_RESD2.
*/
#define	VADC_G4RESD2	(VADC_G4_RESD2)

/** \brief  178C, Group Result Reg., Debug */
#define VADC_G4_RESD3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF002178Cu)

/** Alias (User Manual Name) for VADC_G4_RESD3.
* To use register names with standard convension, please use VADC_G4_RESD3.
*/
#define	VADC_G4RESD3	(VADC_G4_RESD3)

/** \brief  1790, Group Result Reg., Debug */
#define VADC_G4_RESD4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021790u)

/** Alias (User Manual Name) for VADC_G4_RESD4.
* To use register names with standard convension, please use VADC_G4_RESD4.
*/
#define	VADC_G4RESD4	(VADC_G4_RESD4)

/** \brief  1794, Group Result Reg., Debug */
#define VADC_G4_RESD5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021794u)

/** Alias (User Manual Name) for VADC_G4_RESD5.
* To use register names with standard convension, please use VADC_G4_RESD5.
*/
#define	VADC_G4RESD5	(VADC_G4_RESD5)

/** \brief  1798, Group Result Reg., Debug */
#define VADC_G4_RESD6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021798u)

/** Alias (User Manual Name) for VADC_G4_RESD6.
* To use register names with standard convension, please use VADC_G4_RESD6.
*/
#define	VADC_G4RESD6	(VADC_G4_RESD6)

/** \brief  179C, Group Result Reg., Debug */
#define VADC_G4_RESD7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF002179Cu)

/** Alias (User Manual Name) for VADC_G4_RESD7.
* To use register names with standard convension, please use VADC_G4_RESD7.
*/
#define	VADC_G4RESD7	(VADC_G4_RESD7)

/** \brief  17A0, Group Result Reg., Debug */
#define VADC_G4_RESD8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00217A0u)

/** Alias (User Manual Name) for VADC_G4_RESD8.
* To use register names with standard convension, please use VADC_G4_RESD8.
*/
#define	VADC_G4RESD8	(VADC_G4_RESD8)

/** \brief  17A4, Group Result Reg., Debug */
#define VADC_G4_RESD9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00217A4u)

/** Alias (User Manual Name) for VADC_G4_RESD9.
* To use register names with standard convension, please use VADC_G4_RESD9.
*/
#define	VADC_G4RESD9	(VADC_G4_RESD9)

/** \brief  15B0, Result Event Node Pointer Register 0, Group */
#define VADC_G4_REVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP0*)0xF00215B0u)

/** Alias (User Manual Name) for VADC_G4_REVNP0.
* To use register names with standard convension, please use VADC_G4_REVNP0.
*/
#define	VADC_G4REVNP0	(VADC_G4_REVNP0)

/** \brief  15B4, Result Event Node Pointer Register 1, Group */
#define VADC_G4_REVNP1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP1*)0xF00215B4u)

/** Alias (User Manual Name) for VADC_G4_REVNP1.
* To use register names with standard convension, please use VADC_G4_REVNP1.
*/
#define	VADC_G4REVNP1	(VADC_G4_REVNP1)

/** \brief  148C, Result Assignment Register, Group */
#define VADC_G4_RRASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RRASS*)0xF002148Cu)

/** Alias (User Manual Name) for VADC_G4_RRASS.
* To use register names with standard convension, please use VADC_G4_RRASS.
*/
#define	VADC_G4RRASS	(VADC_G4_RRASS)

/** \brief  1598, Source Event Flag Clear Register, Group */
#define VADC_G4_SEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFCLR*)0xF0021598u)

/** Alias (User Manual Name) for VADC_G4_SEFCLR.
* To use register names with standard convension, please use VADC_G4_SEFCLR.
*/
#define	VADC_G4SEFCLR	(VADC_G4_SEFCLR)

/** \brief  1588, Source Event Flag Register, Group */
#define VADC_G4_SEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFLAG*)0xF0021588u)

/** Alias (User Manual Name) for VADC_G4_SEFLAG.
* To use register names with standard convension, please use VADC_G4_SEFLAG.
*/
#define	VADC_G4SEFLAG	(VADC_G4_SEFLAG)

/** \brief  15C0, Source Event Node Pointer Register, Group */
#define VADC_G4_SEVNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEVNP*)0xF00215C0u)

/** Alias (User Manual Name) for VADC_G4_SEVNP.
* To use register names with standard convension, please use VADC_G4_SEVNP.
*/
#define	VADC_G4SEVNP	(VADC_G4_SEVNP)

/** \brief  15C8, Service Request Software Activation Trigger, Group */
#define VADC_G4_SRACT /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SRACT*)0xF00215C8u)

/** Alias (User Manual Name) for VADC_G4_SRACT.
* To use register names with standard convension, please use VADC_G4_SRACT.
*/
#define	VADC_G4SRACT	(VADC_G4_SRACT)

/** \brief  14C0, Synchronization Control Register, Group */
#define VADC_G4_SYNCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SYNCTR*)0xF00214C0u)

/** Alias (User Manual Name) for VADC_G4_SYNCTR.
* To use register names with standard convension, please use VADC_G4_SYNCTR.
*/
#define	VADC_G4SYNCTR	(VADC_G4_SYNCTR)

/** \brief  15F8, Valid Flag Register, Group */
#define VADC_G4_VFR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_VFR*)0xF00215F8u)

/** Alias (User Manual Name) for VADC_G4_VFR.
* To use register names with standard convension, please use VADC_G4_VFR.
*/
#define	VADC_G4VFR	(VADC_G4_VFR)

/** \brief  18B0, Alias Register, Group */
#define VADC_G5_ALIAS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ALIAS*)0xF00218B0u)

/** Alias (User Manual Name) for VADC_G5_ALIAS.
* To use register names with standard convension, please use VADC_G5_ALIAS.
*/
#define	VADC_G5ALIAS	(VADC_G5_ALIAS)

/** \brief  1880, Arbitration Configuration Register, Group */
#define VADC_G5_ARBCFG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBCFG*)0xF0021880u)

/** Alias (User Manual Name) for VADC_G5_ARBCFG.
* To use register names with standard convension, please use VADC_G5_ARBCFG.
*/
#define	VADC_G5ARBCFG	(VADC_G5_ARBCFG)

/** \brief  1884, Arbitration Priority Register, Group */
#define VADC_G5_ARBPR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBPR*)0xF0021884u)

/** Alias (User Manual Name) for VADC_G5_ARBPR.
* To use register names with standard convension, please use VADC_G5_ARBPR.
*/
#define	VADC_G5ARBPR	(VADC_G5_ARBPR)

/** \brief  1920, Autoscan Source Control Register, Group */
#define VADC_G5_ASCTRL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASCTRL*)0xF0021920u)

/** Alias (User Manual Name) for VADC_G5_ASCTRL.
* To use register names with standard convension, please use VADC_G5_ASCTRL.
*/
#define	VADC_G5ASCTRL	(VADC_G5_ASCTRL)

/** \brief  1924, Autoscan Source Mode Register, Group */
#define VADC_G5_ASMR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASMR*)0xF0021924u)

/** Alias (User Manual Name) for VADC_G5_ASMR.
* To use register names with standard convension, please use VADC_G5_ASMR.
*/
#define	VADC_G5ASMR	(VADC_G5_ASMR)

/** \brief  192C, Autoscan Source Pending Register, Group */
#define VADC_G5_ASPND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASPND*)0xF002192Cu)

/** Alias (User Manual Name) for VADC_G5_ASPND.
* To use register names with standard convension, please use VADC_G5_ASPND.
*/
#define	VADC_G5ASPND	(VADC_G5_ASPND)

/** \brief  1928, Autoscan Source Channel Select Register, Group */
#define VADC_G5_ASSEL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASSEL*)0xF0021928u)

/** Alias (User Manual Name) for VADC_G5_ASSEL.
* To use register names with standard convension, please use VADC_G5_ASSEL.
*/
#define	VADC_G5ASSEL	(VADC_G5_ASSEL)

/** \brief  18C8, Boundary Flag Register, Group */
#define VADC_G5_BFL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFL*)0xF00218C8u)

/** Alias (User Manual Name) for VADC_G5_BFL.
* To use register names with standard convension, please use VADC_G5_BFL.
*/
#define	VADC_G5BFL	(VADC_G5_BFL)

/** \brief  18D0, Boundary Flag Control Register, Group */
#define VADC_G5_BFLC /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLC*)0xF00218D0u)

/** Alias (User Manual Name) for VADC_G5_BFLC.
* To use register names with standard convension, please use VADC_G5_BFLC.
*/
#define	VADC_G5BFLC	(VADC_G5_BFLC)

/** \brief  18D4, Boundary Flag Node Pointer Register, Group */
#define VADC_G5_BFLNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLNP*)0xF00218D4u)

/** Alias (User Manual Name) for VADC_G5_BFLNP.
* To use register names with standard convension, please use VADC_G5_BFLNP.
*/
#define	VADC_G5BFLNP	(VADC_G5_BFLNP)

/** \brief  18CC, Boundary Flag Software Register, Group */
#define VADC_G5_BFLS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLS*)0xF00218CCu)

/** Alias (User Manual Name) for VADC_G5_BFLS.
* To use register names with standard convension, please use VADC_G5_BFLS.
*/
#define	VADC_G5BFLS	(VADC_G5_BFLS)

/** \brief  18B8, Boundary Select Register, Group */
#define VADC_G5_BOUND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BOUND*)0xF00218B8u)

/** Alias (User Manual Name) for VADC_G5_BOUND.
* To use register names with standard convension, please use VADC_G5_BOUND.
*/
#define	VADC_G5BOUND	(VADC_G5_BOUND)

/** \brief  1990, Channel Event Flag Clear Register, Group */
#define VADC_G5_CEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFCLR*)0xF0021990u)

/** Alias (User Manual Name) for VADC_G5_CEFCLR.
* To use register names with standard convension, please use VADC_G5_CEFCLR.
*/
#define	VADC_G5CEFCLR	(VADC_G5_CEFCLR)

/** \brief  1980, Channel Event Flag Register, Group */
#define VADC_G5_CEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFLAG*)0xF0021980u)

/** Alias (User Manual Name) for VADC_G5_CEFLAG.
* To use register names with standard convension, please use VADC_G5_CEFLAG.
*/
#define	VADC_G5CEFLAG	(VADC_G5_CEFLAG)

/** \brief  19A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G5_CEVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEVNP0*)0xF00219A0u)

/** Alias (User Manual Name) for VADC_G5_CEVNP0.
* To use register names with standard convension, please use VADC_G5_CEVNP0.
*/
#define	VADC_G5CEVNP0	(VADC_G5_CEVNP0)

/** \brief  1888, Channel Assignment Register, Group */
#define VADC_G5_CHASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHASS*)0xF0021888u)

/** Alias (User Manual Name) for VADC_G5_CHASS.
* To use register names with standard convension, please use VADC_G5_CHASS.
*/
#define	VADC_G5CHASS	(VADC_G5_CHASS)

/** \brief  1A00, Group, Channel Ctrl. Reg. */
#define VADC_G5_CHCTR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021A00u)

/** Alias (User Manual Name) for VADC_G5_CHCTR0.
* To use register names with standard convension, please use VADC_G5_CHCTR0.
*/
#define	VADC_G5CHCTR0	(VADC_G5_CHCTR0)

/** \brief  1A04, Group, Channel Ctrl. Reg. */
#define VADC_G5_CHCTR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021A04u)

/** Alias (User Manual Name) for VADC_G5_CHCTR1.
* To use register names with standard convension, please use VADC_G5_CHCTR1.
*/
#define	VADC_G5CHCTR1	(VADC_G5_CHCTR1)

/** \brief  1A08, Group, Channel Ctrl. Reg. */
#define VADC_G5_CHCTR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021A08u)

/** Alias (User Manual Name) for VADC_G5_CHCTR2.
* To use register names with standard convension, please use VADC_G5_CHCTR2.
*/
#define	VADC_G5CHCTR2	(VADC_G5_CHCTR2)

/** \brief  1A0C, Group, Channel Ctrl. Reg. */
#define VADC_G5_CHCTR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021A0Cu)

/** Alias (User Manual Name) for VADC_G5_CHCTR3.
* To use register names with standard convension, please use VADC_G5_CHCTR3.
*/
#define	VADC_G5CHCTR3	(VADC_G5_CHCTR3)

/** \brief  1A10, Group, Channel Ctrl. Reg. */
#define VADC_G5_CHCTR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021A10u)

/** Alias (User Manual Name) for VADC_G5_CHCTR4.
* To use register names with standard convension, please use VADC_G5_CHCTR4.
*/
#define	VADC_G5CHCTR4	(VADC_G5_CHCTR4)

/** \brief  1A14, Group, Channel Ctrl. Reg. */
#define VADC_G5_CHCTR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021A14u)

/** Alias (User Manual Name) for VADC_G5_CHCTR5.
* To use register names with standard convension, please use VADC_G5_CHCTR5.
*/
#define	VADC_G5CHCTR5	(VADC_G5_CHCTR5)

/** \brief  1A18, Group, Channel Ctrl. Reg. */
#define VADC_G5_CHCTR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021A18u)

/** Alias (User Manual Name) for VADC_G5_CHCTR6.
* To use register names with standard convension, please use VADC_G5_CHCTR6.
*/
#define	VADC_G5CHCTR6	(VADC_G5_CHCTR6)

/** \brief  1A1C, Group, Channel Ctrl. Reg. */
#define VADC_G5_CHCTR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021A1Cu)

/** Alias (User Manual Name) for VADC_G5_CHCTR7.
* To use register names with standard convension, please use VADC_G5_CHCTR7.
*/
#define	VADC_G5CHCTR7	(VADC_G5_CHCTR7)

/** \brief  19F0, External Multiplexer Control Register, Group x */
#define VADC_G5_EMUXCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_EMUXCTR*)0xF00219F0u)

/** Alias (User Manual Name) for VADC_G5_EMUXCTR.
* To use register names with standard convension, please use VADC_G5_EMUXCTR.
*/
#define	VADC_G5EMUXCTR	(VADC_G5_EMUXCTR)

/** \brief  18A0, Input Class Register */
#define VADC_G5_ICLASS0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00218A0u)

/** Alias (User Manual Name) for VADC_G5_ICLASS0.
* To use register names with standard convension, please use VADC_G5_ICLASS0.
*/
#define	VADC_G5ICLASS0	(VADC_G5_ICLASS0)

/** \brief  18A4, Input Class Register */
#define VADC_G5_ICLASS1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00218A4u)

/** Alias (User Manual Name) for VADC_G5_ICLASS1.
* To use register names with standard convension, please use VADC_G5_ICLASS1.
*/
#define	VADC_G5ICLASS1	(VADC_G5_ICLASS1)

/** \brief  190C, Queue 0 Register 0, Group */
#define VADC_G5_Q0R0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_Q0R0*)0xF002190Cu)

/** Alias (User Manual Name) for VADC_G5_Q0R0.
* To use register names with standard convension, please use VADC_G5_Q0R0.
*/
#define	VADC_G5Q0R0	(VADC_G5_Q0R0)

/** \brief  1910, Queue 0 Input Register, Group */
#define VADC_G5_QBUR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QBUR0*)0xF0021910u)

/** Alias (User Manual Name) for VADC_G5_QBUR0.
* To use register names with standard convension, please use VADC_G5_QBUR0.
*/
#define	VADC_G5QBUR0	(VADC_G5_QBUR0)

/** \brief  1900, Queue 0 Source Control Register, Group */
#define VADC_G5_QCTRL0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QCTRL0*)0xF0021900u)

/** Alias (User Manual Name) for VADC_G5_QCTRL0.
* To use register names with standard convension, please use VADC_G5_QCTRL0.
*/
#define	VADC_G5QCTRL0	(VADC_G5_QCTRL0)

/** \brief  1910, Queue 0 Input Register, Group */
#define VADC_G5_QINR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QINR0*)0xF0021910u)

/** Alias (User Manual Name) for VADC_G5_QINR0.
* To use register names with standard convension, please use VADC_G5_QINR0.
*/
#define	VADC_G5QINR0	(VADC_G5_QINR0)

/** \brief  1904, Queue 0 Mode Register, Group */
#define VADC_G5_QMR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QMR0*)0xF0021904u)

/** Alias (User Manual Name) for VADC_G5_QMR0.
* To use register names with standard convension, please use VADC_G5_QMR0.
*/
#define	VADC_G5QMR0	(VADC_G5_QMR0)

/** \brief  1908, Queue 0 Status Register, Group */
#define VADC_G5_QSR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QSR0*)0xF0021908u)

/** Alias (User Manual Name) for VADC_G5_QSR0.
* To use register names with standard convension, please use VADC_G5_QSR0.
*/
#define	VADC_G5QSR0	(VADC_G5_QSR0)

/** \brief  1A80, Group Result Control Reg. */
#define VADC_G5_RCR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021A80u)

/** Alias (User Manual Name) for VADC_G5_RCR0.
* To use register names with standard convension, please use VADC_G5_RCR0.
*/
#define	VADC_G5RCR0	(VADC_G5_RCR0)

/** \brief  1A84, Group Result Control Reg. */
#define VADC_G5_RCR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021A84u)

/** Alias (User Manual Name) for VADC_G5_RCR1.
* To use register names with standard convension, please use VADC_G5_RCR1.
*/
#define	VADC_G5RCR1	(VADC_G5_RCR1)

/** \brief  1AA8, Group Result Control Reg. */
#define VADC_G5_RCR10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021AA8u)

/** Alias (User Manual Name) for VADC_G5_RCR10.
* To use register names with standard convension, please use VADC_G5_RCR10.
*/
#define	VADC_G5RCR10	(VADC_G5_RCR10)

/** \brief  1AAC, Group Result Control Reg. */
#define VADC_G5_RCR11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021AACu)

/** Alias (User Manual Name) for VADC_G5_RCR11.
* To use register names with standard convension, please use VADC_G5_RCR11.
*/
#define	VADC_G5RCR11	(VADC_G5_RCR11)

/** \brief  1AB0, Group Result Control Reg. */
#define VADC_G5_RCR12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021AB0u)

/** Alias (User Manual Name) for VADC_G5_RCR12.
* To use register names with standard convension, please use VADC_G5_RCR12.
*/
#define	VADC_G5RCR12	(VADC_G5_RCR12)

/** \brief  1AB4, Group Result Control Reg. */
#define VADC_G5_RCR13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021AB4u)

/** Alias (User Manual Name) for VADC_G5_RCR13.
* To use register names with standard convension, please use VADC_G5_RCR13.
*/
#define	VADC_G5RCR13	(VADC_G5_RCR13)

/** \brief  1AB8, Group Result Control Reg. */
#define VADC_G5_RCR14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021AB8u)

/** Alias (User Manual Name) for VADC_G5_RCR14.
* To use register names with standard convension, please use VADC_G5_RCR14.
*/
#define	VADC_G5RCR14	(VADC_G5_RCR14)

/** \brief  1ABC, Group Result Control Reg. */
#define VADC_G5_RCR15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021ABCu)

/** Alias (User Manual Name) for VADC_G5_RCR15.
* To use register names with standard convension, please use VADC_G5_RCR15.
*/
#define	VADC_G5RCR15	(VADC_G5_RCR15)

/** \brief  1A88, Group Result Control Reg. */
#define VADC_G5_RCR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021A88u)

/** Alias (User Manual Name) for VADC_G5_RCR2.
* To use register names with standard convension, please use VADC_G5_RCR2.
*/
#define	VADC_G5RCR2	(VADC_G5_RCR2)

/** \brief  1A8C, Group Result Control Reg. */
#define VADC_G5_RCR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021A8Cu)

/** Alias (User Manual Name) for VADC_G5_RCR3.
* To use register names with standard convension, please use VADC_G5_RCR3.
*/
#define	VADC_G5RCR3	(VADC_G5_RCR3)

/** \brief  1A90, Group Result Control Reg. */
#define VADC_G5_RCR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021A90u)

/** Alias (User Manual Name) for VADC_G5_RCR4.
* To use register names with standard convension, please use VADC_G5_RCR4.
*/
#define	VADC_G5RCR4	(VADC_G5_RCR4)

/** \brief  1A94, Group Result Control Reg. */
#define VADC_G5_RCR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021A94u)

/** Alias (User Manual Name) for VADC_G5_RCR5.
* To use register names with standard convension, please use VADC_G5_RCR5.
*/
#define	VADC_G5RCR5	(VADC_G5_RCR5)

/** \brief  1A98, Group Result Control Reg. */
#define VADC_G5_RCR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021A98u)

/** Alias (User Manual Name) for VADC_G5_RCR6.
* To use register names with standard convension, please use VADC_G5_RCR6.
*/
#define	VADC_G5RCR6	(VADC_G5_RCR6)

/** \brief  1A9C, Group Result Control Reg. */
#define VADC_G5_RCR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021A9Cu)

/** Alias (User Manual Name) for VADC_G5_RCR7.
* To use register names with standard convension, please use VADC_G5_RCR7.
*/
#define	VADC_G5RCR7	(VADC_G5_RCR7)

/** \brief  1AA0, Group Result Control Reg. */
#define VADC_G5_RCR8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021AA0u)

/** Alias (User Manual Name) for VADC_G5_RCR8.
* To use register names with standard convension, please use VADC_G5_RCR8.
*/
#define	VADC_G5RCR8	(VADC_G5_RCR8)

/** \brief  1AA4, Group Result Control Reg. */
#define VADC_G5_RCR9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021AA4u)

/** Alias (User Manual Name) for VADC_G5_RCR9.
* To use register names with standard convension, please use VADC_G5_RCR9.
*/
#define	VADC_G5RCR9	(VADC_G5_RCR9)

/** \brief  1994, Result Event Flag Clear Register, Group */
#define VADC_G5_REFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFCLR*)0xF0021994u)

/** Alias (User Manual Name) for VADC_G5_REFCLR.
* To use register names with standard convension, please use VADC_G5_REFCLR.
*/
#define	VADC_G5REFCLR	(VADC_G5_REFCLR)

/** \brief  1984, Result Event Flag Register, Group */
#define VADC_G5_REFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFLAG*)0xF0021984u)

/** Alias (User Manual Name) for VADC_G5_REFLAG.
* To use register names with standard convension, please use VADC_G5_REFLAG.
*/
#define	VADC_G5REFLAG	(VADC_G5_REFLAG)

/** \brief  1B00, Group Result Register */
#define VADC_G5_RES0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B00u)

/** Alias (User Manual Name) for VADC_G5_RES0.
* To use register names with standard convension, please use VADC_G5_RES0.
*/
#define	VADC_G5RES0	(VADC_G5_RES0)

/** \brief  1B04, Group Result Register */
#define VADC_G5_RES1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B04u)

/** Alias (User Manual Name) for VADC_G5_RES1.
* To use register names with standard convension, please use VADC_G5_RES1.
*/
#define	VADC_G5RES1	(VADC_G5_RES1)

/** \brief  1B28, Group Result Register */
#define VADC_G5_RES10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B28u)

/** Alias (User Manual Name) for VADC_G5_RES10.
* To use register names with standard convension, please use VADC_G5_RES10.
*/
#define	VADC_G5RES10	(VADC_G5_RES10)

/** \brief  1B2C, Group Result Register */
#define VADC_G5_RES11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B2Cu)

/** Alias (User Manual Name) for VADC_G5_RES11.
* To use register names with standard convension, please use VADC_G5_RES11.
*/
#define	VADC_G5RES11	(VADC_G5_RES11)

/** \brief  1B30, Group Result Register */
#define VADC_G5_RES12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B30u)

/** Alias (User Manual Name) for VADC_G5_RES12.
* To use register names with standard convension, please use VADC_G5_RES12.
*/
#define	VADC_G5RES12	(VADC_G5_RES12)

/** \brief  1B34, Group Result Register */
#define VADC_G5_RES13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B34u)

/** Alias (User Manual Name) for VADC_G5_RES13.
* To use register names with standard convension, please use VADC_G5_RES13.
*/
#define	VADC_G5RES13	(VADC_G5_RES13)

/** \brief  1B38, Group Result Register */
#define VADC_G5_RES14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B38u)

/** Alias (User Manual Name) for VADC_G5_RES14.
* To use register names with standard convension, please use VADC_G5_RES14.
*/
#define	VADC_G5RES14	(VADC_G5_RES14)

/** \brief  1B3C, Group Result Register */
#define VADC_G5_RES15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B3Cu)

/** Alias (User Manual Name) for VADC_G5_RES15.
* To use register names with standard convension, please use VADC_G5_RES15.
*/
#define	VADC_G5RES15	(VADC_G5_RES15)

/** \brief  1B08, Group Result Register */
#define VADC_G5_RES2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B08u)

/** Alias (User Manual Name) for VADC_G5_RES2.
* To use register names with standard convension, please use VADC_G5_RES2.
*/
#define	VADC_G5RES2	(VADC_G5_RES2)

/** \brief  1B0C, Group Result Register */
#define VADC_G5_RES3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B0Cu)

/** Alias (User Manual Name) for VADC_G5_RES3.
* To use register names with standard convension, please use VADC_G5_RES3.
*/
#define	VADC_G5RES3	(VADC_G5_RES3)

/** \brief  1B10, Group Result Register */
#define VADC_G5_RES4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B10u)

/** Alias (User Manual Name) for VADC_G5_RES4.
* To use register names with standard convension, please use VADC_G5_RES4.
*/
#define	VADC_G5RES4	(VADC_G5_RES4)

/** \brief  1B14, Group Result Register */
#define VADC_G5_RES5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B14u)

/** Alias (User Manual Name) for VADC_G5_RES5.
* To use register names with standard convension, please use VADC_G5_RES5.
*/
#define	VADC_G5RES5	(VADC_G5_RES5)

/** \brief  1B18, Group Result Register */
#define VADC_G5_RES6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B18u)

/** Alias (User Manual Name) for VADC_G5_RES6.
* To use register names with standard convension, please use VADC_G5_RES6.
*/
#define	VADC_G5RES6	(VADC_G5_RES6)

/** \brief  1B1C, Group Result Register */
#define VADC_G5_RES7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B1Cu)

/** Alias (User Manual Name) for VADC_G5_RES7.
* To use register names with standard convension, please use VADC_G5_RES7.
*/
#define	VADC_G5RES7	(VADC_G5_RES7)

/** \brief  1B20, Group Result Register */
#define VADC_G5_RES8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B20u)

/** Alias (User Manual Name) for VADC_G5_RES8.
* To use register names with standard convension, please use VADC_G5_RES8.
*/
#define	VADC_G5RES8	(VADC_G5_RES8)

/** \brief  1B24, Group Result Register */
#define VADC_G5_RES9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021B24u)

/** Alias (User Manual Name) for VADC_G5_RES9.
* To use register names with standard convension, please use VADC_G5_RES9.
*/
#define	VADC_G5RES9	(VADC_G5_RES9)

/** \brief  1B80, Group Result Reg., Debug */
#define VADC_G5_RESD0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021B80u)

/** Alias (User Manual Name) for VADC_G5_RESD0.
* To use register names with standard convension, please use VADC_G5_RESD0.
*/
#define	VADC_G5RESD0	(VADC_G5_RESD0)

/** \brief  1B84, Group Result Reg., Debug */
#define VADC_G5_RESD1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021B84u)

/** Alias (User Manual Name) for VADC_G5_RESD1.
* To use register names with standard convension, please use VADC_G5_RESD1.
*/
#define	VADC_G5RESD1	(VADC_G5_RESD1)

/** \brief  1BA8, Group Result Reg., Debug */
#define VADC_G5_RESD10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021BA8u)

/** Alias (User Manual Name) for VADC_G5_RESD10.
* To use register names with standard convension, please use VADC_G5_RESD10.
*/
#define	VADC_G5RESD10	(VADC_G5_RESD10)

/** \brief  1BAC, Group Result Reg., Debug */
#define VADC_G5_RESD11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021BACu)

/** Alias (User Manual Name) for VADC_G5_RESD11.
* To use register names with standard convension, please use VADC_G5_RESD11.
*/
#define	VADC_G5RESD11	(VADC_G5_RESD11)

/** \brief  1BB0, Group Result Reg., Debug */
#define VADC_G5_RESD12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021BB0u)

/** Alias (User Manual Name) for VADC_G5_RESD12.
* To use register names with standard convension, please use VADC_G5_RESD12.
*/
#define	VADC_G5RESD12	(VADC_G5_RESD12)

/** \brief  1BB4, Group Result Reg., Debug */
#define VADC_G5_RESD13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021BB4u)

/** Alias (User Manual Name) for VADC_G5_RESD13.
* To use register names with standard convension, please use VADC_G5_RESD13.
*/
#define	VADC_G5RESD13	(VADC_G5_RESD13)

/** \brief  1BB8, Group Result Reg., Debug */
#define VADC_G5_RESD14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021BB8u)

/** Alias (User Manual Name) for VADC_G5_RESD14.
* To use register names with standard convension, please use VADC_G5_RESD14.
*/
#define	VADC_G5RESD14	(VADC_G5_RESD14)

/** \brief  1BBC, Group Result Reg., Debug */
#define VADC_G5_RESD15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021BBCu)

/** Alias (User Manual Name) for VADC_G5_RESD15.
* To use register names with standard convension, please use VADC_G5_RESD15.
*/
#define	VADC_G5RESD15	(VADC_G5_RESD15)

/** \brief  1B88, Group Result Reg., Debug */
#define VADC_G5_RESD2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021B88u)

/** Alias (User Manual Name) for VADC_G5_RESD2.
* To use register names with standard convension, please use VADC_G5_RESD2.
*/
#define	VADC_G5RESD2	(VADC_G5_RESD2)

/** \brief  1B8C, Group Result Reg., Debug */
#define VADC_G5_RESD3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021B8Cu)

/** Alias (User Manual Name) for VADC_G5_RESD3.
* To use register names with standard convension, please use VADC_G5_RESD3.
*/
#define	VADC_G5RESD3	(VADC_G5_RESD3)

/** \brief  1B90, Group Result Reg., Debug */
#define VADC_G5_RESD4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021B90u)

/** Alias (User Manual Name) for VADC_G5_RESD4.
* To use register names with standard convension, please use VADC_G5_RESD4.
*/
#define	VADC_G5RESD4	(VADC_G5_RESD4)

/** \brief  1B94, Group Result Reg., Debug */
#define VADC_G5_RESD5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021B94u)

/** Alias (User Manual Name) for VADC_G5_RESD5.
* To use register names with standard convension, please use VADC_G5_RESD5.
*/
#define	VADC_G5RESD5	(VADC_G5_RESD5)

/** \brief  1B98, Group Result Reg., Debug */
#define VADC_G5_RESD6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021B98u)

/** Alias (User Manual Name) for VADC_G5_RESD6.
* To use register names with standard convension, please use VADC_G5_RESD6.
*/
#define	VADC_G5RESD6	(VADC_G5_RESD6)

/** \brief  1B9C, Group Result Reg., Debug */
#define VADC_G5_RESD7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021B9Cu)

/** Alias (User Manual Name) for VADC_G5_RESD7.
* To use register names with standard convension, please use VADC_G5_RESD7.
*/
#define	VADC_G5RESD7	(VADC_G5_RESD7)

/** \brief  1BA0, Group Result Reg., Debug */
#define VADC_G5_RESD8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021BA0u)

/** Alias (User Manual Name) for VADC_G5_RESD8.
* To use register names with standard convension, please use VADC_G5_RESD8.
*/
#define	VADC_G5RESD8	(VADC_G5_RESD8)

/** \brief  1BA4, Group Result Reg., Debug */
#define VADC_G5_RESD9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021BA4u)

/** Alias (User Manual Name) for VADC_G5_RESD9.
* To use register names with standard convension, please use VADC_G5_RESD9.
*/
#define	VADC_G5RESD9	(VADC_G5_RESD9)

/** \brief  19B0, Result Event Node Pointer Register 0, Group */
#define VADC_G5_REVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP0*)0xF00219B0u)

/** Alias (User Manual Name) for VADC_G5_REVNP0.
* To use register names with standard convension, please use VADC_G5_REVNP0.
*/
#define	VADC_G5REVNP0	(VADC_G5_REVNP0)

/** \brief  19B4, Result Event Node Pointer Register 1, Group */
#define VADC_G5_REVNP1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP1*)0xF00219B4u)

/** Alias (User Manual Name) for VADC_G5_REVNP1.
* To use register names with standard convension, please use VADC_G5_REVNP1.
*/
#define	VADC_G5REVNP1	(VADC_G5_REVNP1)

/** \brief  188C, Result Assignment Register, Group */
#define VADC_G5_RRASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RRASS*)0xF002188Cu)

/** Alias (User Manual Name) for VADC_G5_RRASS.
* To use register names with standard convension, please use VADC_G5_RRASS.
*/
#define	VADC_G5RRASS	(VADC_G5_RRASS)

/** \brief  1998, Source Event Flag Clear Register, Group */
#define VADC_G5_SEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFCLR*)0xF0021998u)

/** Alias (User Manual Name) for VADC_G5_SEFCLR.
* To use register names with standard convension, please use VADC_G5_SEFCLR.
*/
#define	VADC_G5SEFCLR	(VADC_G5_SEFCLR)

/** \brief  1988, Source Event Flag Register, Group */
#define VADC_G5_SEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFLAG*)0xF0021988u)

/** Alias (User Manual Name) for VADC_G5_SEFLAG.
* To use register names with standard convension, please use VADC_G5_SEFLAG.
*/
#define	VADC_G5SEFLAG	(VADC_G5_SEFLAG)

/** \brief  19C0, Source Event Node Pointer Register, Group */
#define VADC_G5_SEVNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEVNP*)0xF00219C0u)

/** Alias (User Manual Name) for VADC_G5_SEVNP.
* To use register names with standard convension, please use VADC_G5_SEVNP.
*/
#define	VADC_G5SEVNP	(VADC_G5_SEVNP)

/** \brief  19C8, Service Request Software Activation Trigger, Group */
#define VADC_G5_SRACT /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SRACT*)0xF00219C8u)

/** Alias (User Manual Name) for VADC_G5_SRACT.
* To use register names with standard convension, please use VADC_G5_SRACT.
*/
#define	VADC_G5SRACT	(VADC_G5_SRACT)

/** \brief  18C0, Synchronization Control Register, Group */
#define VADC_G5_SYNCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SYNCTR*)0xF00218C0u)

/** Alias (User Manual Name) for VADC_G5_SYNCTR.
* To use register names with standard convension, please use VADC_G5_SYNCTR.
*/
#define	VADC_G5SYNCTR	(VADC_G5_SYNCTR)

/** \brief  19F8, Valid Flag Register, Group */
#define VADC_G5_VFR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_VFR*)0xF00219F8u)

/** Alias (User Manual Name) for VADC_G5_VFR.
* To use register names with standard convension, please use VADC_G5_VFR.
*/
#define	VADC_G5VFR	(VADC_G5_VFR)

/** \brief  1CB0, Alias Register, Group */
#define VADC_G6_ALIAS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ALIAS*)0xF0021CB0u)

/** Alias (User Manual Name) for VADC_G6_ALIAS.
* To use register names with standard convension, please use VADC_G6_ALIAS.
*/
#define	VADC_G6ALIAS	(VADC_G6_ALIAS)

/** \brief  1C80, Arbitration Configuration Register, Group */
#define VADC_G6_ARBCFG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBCFG*)0xF0021C80u)

/** Alias (User Manual Name) for VADC_G6_ARBCFG.
* To use register names with standard convension, please use VADC_G6_ARBCFG.
*/
#define	VADC_G6ARBCFG	(VADC_G6_ARBCFG)

/** \brief  1C84, Arbitration Priority Register, Group */
#define VADC_G6_ARBPR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBPR*)0xF0021C84u)

/** Alias (User Manual Name) for VADC_G6_ARBPR.
* To use register names with standard convension, please use VADC_G6_ARBPR.
*/
#define	VADC_G6ARBPR	(VADC_G6_ARBPR)

/** \brief  1D20, Autoscan Source Control Register, Group */
#define VADC_G6_ASCTRL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASCTRL*)0xF0021D20u)

/** Alias (User Manual Name) for VADC_G6_ASCTRL.
* To use register names with standard convension, please use VADC_G6_ASCTRL.
*/
#define	VADC_G6ASCTRL	(VADC_G6_ASCTRL)

/** \brief  1D24, Autoscan Source Mode Register, Group */
#define VADC_G6_ASMR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASMR*)0xF0021D24u)

/** Alias (User Manual Name) for VADC_G6_ASMR.
* To use register names with standard convension, please use VADC_G6_ASMR.
*/
#define	VADC_G6ASMR	(VADC_G6_ASMR)

/** \brief  1D2C, Autoscan Source Pending Register, Group */
#define VADC_G6_ASPND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASPND*)0xF0021D2Cu)

/** Alias (User Manual Name) for VADC_G6_ASPND.
* To use register names with standard convension, please use VADC_G6_ASPND.
*/
#define	VADC_G6ASPND	(VADC_G6_ASPND)

/** \brief  1D28, Autoscan Source Channel Select Register, Group */
#define VADC_G6_ASSEL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASSEL*)0xF0021D28u)

/** Alias (User Manual Name) for VADC_G6_ASSEL.
* To use register names with standard convension, please use VADC_G6_ASSEL.
*/
#define	VADC_G6ASSEL	(VADC_G6_ASSEL)

/** \brief  1CC8, Boundary Flag Register, Group */
#define VADC_G6_BFL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFL*)0xF0021CC8u)

/** Alias (User Manual Name) for VADC_G6_BFL.
* To use register names with standard convension, please use VADC_G6_BFL.
*/
#define	VADC_G6BFL	(VADC_G6_BFL)

/** \brief  1CD0, Boundary Flag Control Register, Group */
#define VADC_G6_BFLC /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLC*)0xF0021CD0u)

/** Alias (User Manual Name) for VADC_G6_BFLC.
* To use register names with standard convension, please use VADC_G6_BFLC.
*/
#define	VADC_G6BFLC	(VADC_G6_BFLC)

/** \brief  1CD4, Boundary Flag Node Pointer Register, Group */
#define VADC_G6_BFLNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLNP*)0xF0021CD4u)

/** Alias (User Manual Name) for VADC_G6_BFLNP.
* To use register names with standard convension, please use VADC_G6_BFLNP.
*/
#define	VADC_G6BFLNP	(VADC_G6_BFLNP)

/** \brief  1CCC, Boundary Flag Software Register, Group */
#define VADC_G6_BFLS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLS*)0xF0021CCCu)

/** Alias (User Manual Name) for VADC_G6_BFLS.
* To use register names with standard convension, please use VADC_G6_BFLS.
*/
#define	VADC_G6BFLS	(VADC_G6_BFLS)

/** \brief  1CB8, Boundary Select Register, Group */
#define VADC_G6_BOUND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BOUND*)0xF0021CB8u)

/** Alias (User Manual Name) for VADC_G6_BOUND.
* To use register names with standard convension, please use VADC_G6_BOUND.
*/
#define	VADC_G6BOUND	(VADC_G6_BOUND)

/** \brief  1D90, Channel Event Flag Clear Register, Group */
#define VADC_G6_CEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFCLR*)0xF0021D90u)

/** Alias (User Manual Name) for VADC_G6_CEFCLR.
* To use register names with standard convension, please use VADC_G6_CEFCLR.
*/
#define	VADC_G6CEFCLR	(VADC_G6_CEFCLR)

/** \brief  1D80, Channel Event Flag Register, Group */
#define VADC_G6_CEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFLAG*)0xF0021D80u)

/** Alias (User Manual Name) for VADC_G6_CEFLAG.
* To use register names with standard convension, please use VADC_G6_CEFLAG.
*/
#define	VADC_G6CEFLAG	(VADC_G6_CEFLAG)

/** \brief  1DA0, Channel Event Node Pointer Register 0, Group */
#define VADC_G6_CEVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEVNP0*)0xF0021DA0u)

/** Alias (User Manual Name) for VADC_G6_CEVNP0.
* To use register names with standard convension, please use VADC_G6_CEVNP0.
*/
#define	VADC_G6CEVNP0	(VADC_G6_CEVNP0)

/** \brief  1C88, Channel Assignment Register, Group */
#define VADC_G6_CHASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHASS*)0xF0021C88u)

/** Alias (User Manual Name) for VADC_G6_CHASS.
* To use register names with standard convension, please use VADC_G6_CHASS.
*/
#define	VADC_G6CHASS	(VADC_G6_CHASS)

/** \brief  1E00, Group, Channel Ctrl. Reg. */
#define VADC_G6_CHCTR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021E00u)

/** Alias (User Manual Name) for VADC_G6_CHCTR0.
* To use register names with standard convension, please use VADC_G6_CHCTR0.
*/
#define	VADC_G6CHCTR0	(VADC_G6_CHCTR0)

/** \brief  1E04, Group, Channel Ctrl. Reg. */
#define VADC_G6_CHCTR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021E04u)

/** Alias (User Manual Name) for VADC_G6_CHCTR1.
* To use register names with standard convension, please use VADC_G6_CHCTR1.
*/
#define	VADC_G6CHCTR1	(VADC_G6_CHCTR1)

/** \brief  1E08, Group, Channel Ctrl. Reg. */
#define VADC_G6_CHCTR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021E08u)

/** Alias (User Manual Name) for VADC_G6_CHCTR2.
* To use register names with standard convension, please use VADC_G6_CHCTR2.
*/
#define	VADC_G6CHCTR2	(VADC_G6_CHCTR2)

/** \brief  1E0C, Group, Channel Ctrl. Reg. */
#define VADC_G6_CHCTR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021E0Cu)

/** Alias (User Manual Name) for VADC_G6_CHCTR3.
* To use register names with standard convension, please use VADC_G6_CHCTR3.
*/
#define	VADC_G6CHCTR3	(VADC_G6_CHCTR3)

/** \brief  1E10, Group, Channel Ctrl. Reg. */
#define VADC_G6_CHCTR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021E10u)

/** Alias (User Manual Name) for VADC_G6_CHCTR4.
* To use register names with standard convension, please use VADC_G6_CHCTR4.
*/
#define	VADC_G6CHCTR4	(VADC_G6_CHCTR4)

/** \brief  1E14, Group, Channel Ctrl. Reg. */
#define VADC_G6_CHCTR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021E14u)

/** Alias (User Manual Name) for VADC_G6_CHCTR5.
* To use register names with standard convension, please use VADC_G6_CHCTR5.
*/
#define	VADC_G6CHCTR5	(VADC_G6_CHCTR5)

/** \brief  1E18, Group, Channel Ctrl. Reg. */
#define VADC_G6_CHCTR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021E18u)

/** Alias (User Manual Name) for VADC_G6_CHCTR6.
* To use register names with standard convension, please use VADC_G6_CHCTR6.
*/
#define	VADC_G6CHCTR6	(VADC_G6_CHCTR6)

/** \brief  1E1C, Group, Channel Ctrl. Reg. */
#define VADC_G6_CHCTR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0021E1Cu)

/** Alias (User Manual Name) for VADC_G6_CHCTR7.
* To use register names with standard convension, please use VADC_G6_CHCTR7.
*/
#define	VADC_G6CHCTR7	(VADC_G6_CHCTR7)

/** \brief  1DF0, External Multiplexer Control Register, Group x */
#define VADC_G6_EMUXCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_EMUXCTR*)0xF0021DF0u)

/** Alias (User Manual Name) for VADC_G6_EMUXCTR.
* To use register names with standard convension, please use VADC_G6_EMUXCTR.
*/
#define	VADC_G6EMUXCTR	(VADC_G6_EMUXCTR)

/** \brief  1CA0, Input Class Register */
#define VADC_G6_ICLASS0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF0021CA0u)

/** Alias (User Manual Name) for VADC_G6_ICLASS0.
* To use register names with standard convension, please use VADC_G6_ICLASS0.
*/
#define	VADC_G6ICLASS0	(VADC_G6_ICLASS0)

/** \brief  1CA4, Input Class Register */
#define VADC_G6_ICLASS1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF0021CA4u)

/** Alias (User Manual Name) for VADC_G6_ICLASS1.
* To use register names with standard convension, please use VADC_G6_ICLASS1.
*/
#define	VADC_G6ICLASS1	(VADC_G6_ICLASS1)

/** \brief  1D0C, Queue 0 Register 0, Group */
#define VADC_G6_Q0R0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_Q0R0*)0xF0021D0Cu)

/** Alias (User Manual Name) for VADC_G6_Q0R0.
* To use register names with standard convension, please use VADC_G6_Q0R0.
*/
#define	VADC_G6Q0R0	(VADC_G6_Q0R0)

/** \brief  1D10, Queue 0 Input Register, Group */
#define VADC_G6_QBUR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QBUR0*)0xF0021D10u)

/** Alias (User Manual Name) for VADC_G6_QBUR0.
* To use register names with standard convension, please use VADC_G6_QBUR0.
*/
#define	VADC_G6QBUR0	(VADC_G6_QBUR0)

/** \brief  1D00, Queue 0 Source Control Register, Group */
#define VADC_G6_QCTRL0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QCTRL0*)0xF0021D00u)

/** Alias (User Manual Name) for VADC_G6_QCTRL0.
* To use register names with standard convension, please use VADC_G6_QCTRL0.
*/
#define	VADC_G6QCTRL0	(VADC_G6_QCTRL0)

/** \brief  1D10, Queue 0 Input Register, Group */
#define VADC_G6_QINR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QINR0*)0xF0021D10u)

/** Alias (User Manual Name) for VADC_G6_QINR0.
* To use register names with standard convension, please use VADC_G6_QINR0.
*/
#define	VADC_G6QINR0	(VADC_G6_QINR0)

/** \brief  1D04, Queue 0 Mode Register, Group */
#define VADC_G6_QMR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QMR0*)0xF0021D04u)

/** Alias (User Manual Name) for VADC_G6_QMR0.
* To use register names with standard convension, please use VADC_G6_QMR0.
*/
#define	VADC_G6QMR0	(VADC_G6_QMR0)

/** \brief  1D08, Queue 0 Status Register, Group */
#define VADC_G6_QSR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QSR0*)0xF0021D08u)

/** Alias (User Manual Name) for VADC_G6_QSR0.
* To use register names with standard convension, please use VADC_G6_QSR0.
*/
#define	VADC_G6QSR0	(VADC_G6_QSR0)

/** \brief  1E80, Group Result Control Reg. */
#define VADC_G6_RCR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021E80u)

/** Alias (User Manual Name) for VADC_G6_RCR0.
* To use register names with standard convension, please use VADC_G6_RCR0.
*/
#define	VADC_G6RCR0	(VADC_G6_RCR0)

/** \brief  1E84, Group Result Control Reg. */
#define VADC_G6_RCR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021E84u)

/** Alias (User Manual Name) for VADC_G6_RCR1.
* To use register names with standard convension, please use VADC_G6_RCR1.
*/
#define	VADC_G6RCR1	(VADC_G6_RCR1)

/** \brief  1EA8, Group Result Control Reg. */
#define VADC_G6_RCR10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021EA8u)

/** Alias (User Manual Name) for VADC_G6_RCR10.
* To use register names with standard convension, please use VADC_G6_RCR10.
*/
#define	VADC_G6RCR10	(VADC_G6_RCR10)

/** \brief  1EAC, Group Result Control Reg. */
#define VADC_G6_RCR11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021EACu)

/** Alias (User Manual Name) for VADC_G6_RCR11.
* To use register names with standard convension, please use VADC_G6_RCR11.
*/
#define	VADC_G6RCR11	(VADC_G6_RCR11)

/** \brief  1EB0, Group Result Control Reg. */
#define VADC_G6_RCR12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021EB0u)

/** Alias (User Manual Name) for VADC_G6_RCR12.
* To use register names with standard convension, please use VADC_G6_RCR12.
*/
#define	VADC_G6RCR12	(VADC_G6_RCR12)

/** \brief  1EB4, Group Result Control Reg. */
#define VADC_G6_RCR13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021EB4u)

/** Alias (User Manual Name) for VADC_G6_RCR13.
* To use register names with standard convension, please use VADC_G6_RCR13.
*/
#define	VADC_G6RCR13	(VADC_G6_RCR13)

/** \brief  1EB8, Group Result Control Reg. */
#define VADC_G6_RCR14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021EB8u)

/** Alias (User Manual Name) for VADC_G6_RCR14.
* To use register names with standard convension, please use VADC_G6_RCR14.
*/
#define	VADC_G6RCR14	(VADC_G6_RCR14)

/** \brief  1EBC, Group Result Control Reg. */
#define VADC_G6_RCR15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021EBCu)

/** Alias (User Manual Name) for VADC_G6_RCR15.
* To use register names with standard convension, please use VADC_G6_RCR15.
*/
#define	VADC_G6RCR15	(VADC_G6_RCR15)

/** \brief  1E88, Group Result Control Reg. */
#define VADC_G6_RCR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021E88u)

/** Alias (User Manual Name) for VADC_G6_RCR2.
* To use register names with standard convension, please use VADC_G6_RCR2.
*/
#define	VADC_G6RCR2	(VADC_G6_RCR2)

/** \brief  1E8C, Group Result Control Reg. */
#define VADC_G6_RCR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021E8Cu)

/** Alias (User Manual Name) for VADC_G6_RCR3.
* To use register names with standard convension, please use VADC_G6_RCR3.
*/
#define	VADC_G6RCR3	(VADC_G6_RCR3)

/** \brief  1E90, Group Result Control Reg. */
#define VADC_G6_RCR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021E90u)

/** Alias (User Manual Name) for VADC_G6_RCR4.
* To use register names with standard convension, please use VADC_G6_RCR4.
*/
#define	VADC_G6RCR4	(VADC_G6_RCR4)

/** \brief  1E94, Group Result Control Reg. */
#define VADC_G6_RCR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021E94u)

/** Alias (User Manual Name) for VADC_G6_RCR5.
* To use register names with standard convension, please use VADC_G6_RCR5.
*/
#define	VADC_G6RCR5	(VADC_G6_RCR5)

/** \brief  1E98, Group Result Control Reg. */
#define VADC_G6_RCR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021E98u)

/** Alias (User Manual Name) for VADC_G6_RCR6.
* To use register names with standard convension, please use VADC_G6_RCR6.
*/
#define	VADC_G6RCR6	(VADC_G6_RCR6)

/** \brief  1E9C, Group Result Control Reg. */
#define VADC_G6_RCR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021E9Cu)

/** Alias (User Manual Name) for VADC_G6_RCR7.
* To use register names with standard convension, please use VADC_G6_RCR7.
*/
#define	VADC_G6RCR7	(VADC_G6_RCR7)

/** \brief  1EA0, Group Result Control Reg. */
#define VADC_G6_RCR8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021EA0u)

/** Alias (User Manual Name) for VADC_G6_RCR8.
* To use register names with standard convension, please use VADC_G6_RCR8.
*/
#define	VADC_G6RCR8	(VADC_G6_RCR8)

/** \brief  1EA4, Group Result Control Reg. */
#define VADC_G6_RCR9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0021EA4u)

/** Alias (User Manual Name) for VADC_G6_RCR9.
* To use register names with standard convension, please use VADC_G6_RCR9.
*/
#define	VADC_G6RCR9	(VADC_G6_RCR9)

/** \brief  1D94, Result Event Flag Clear Register, Group */
#define VADC_G6_REFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFCLR*)0xF0021D94u)

/** Alias (User Manual Name) for VADC_G6_REFCLR.
* To use register names with standard convension, please use VADC_G6_REFCLR.
*/
#define	VADC_G6REFCLR	(VADC_G6_REFCLR)

/** \brief  1D84, Result Event Flag Register, Group */
#define VADC_G6_REFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFLAG*)0xF0021D84u)

/** Alias (User Manual Name) for VADC_G6_REFLAG.
* To use register names with standard convension, please use VADC_G6_REFLAG.
*/
#define	VADC_G6REFLAG	(VADC_G6_REFLAG)

/** \brief  1F00, Group Result Register */
#define VADC_G6_RES0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F00u)

/** Alias (User Manual Name) for VADC_G6_RES0.
* To use register names with standard convension, please use VADC_G6_RES0.
*/
#define	VADC_G6RES0	(VADC_G6_RES0)

/** \brief  1F04, Group Result Register */
#define VADC_G6_RES1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F04u)

/** Alias (User Manual Name) for VADC_G6_RES1.
* To use register names with standard convension, please use VADC_G6_RES1.
*/
#define	VADC_G6RES1	(VADC_G6_RES1)

/** \brief  1F28, Group Result Register */
#define VADC_G6_RES10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F28u)

/** Alias (User Manual Name) for VADC_G6_RES10.
* To use register names with standard convension, please use VADC_G6_RES10.
*/
#define	VADC_G6RES10	(VADC_G6_RES10)

/** \brief  1F2C, Group Result Register */
#define VADC_G6_RES11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F2Cu)

/** Alias (User Manual Name) for VADC_G6_RES11.
* To use register names with standard convension, please use VADC_G6_RES11.
*/
#define	VADC_G6RES11	(VADC_G6_RES11)

/** \brief  1F30, Group Result Register */
#define VADC_G6_RES12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F30u)

/** Alias (User Manual Name) for VADC_G6_RES12.
* To use register names with standard convension, please use VADC_G6_RES12.
*/
#define	VADC_G6RES12	(VADC_G6_RES12)

/** \brief  1F34, Group Result Register */
#define VADC_G6_RES13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F34u)

/** Alias (User Manual Name) for VADC_G6_RES13.
* To use register names with standard convension, please use VADC_G6_RES13.
*/
#define	VADC_G6RES13	(VADC_G6_RES13)

/** \brief  1F38, Group Result Register */
#define VADC_G6_RES14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F38u)

/** Alias (User Manual Name) for VADC_G6_RES14.
* To use register names with standard convension, please use VADC_G6_RES14.
*/
#define	VADC_G6RES14	(VADC_G6_RES14)

/** \brief  1F3C, Group Result Register */
#define VADC_G6_RES15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F3Cu)

/** Alias (User Manual Name) for VADC_G6_RES15.
* To use register names with standard convension, please use VADC_G6_RES15.
*/
#define	VADC_G6RES15	(VADC_G6_RES15)

/** \brief  1F08, Group Result Register */
#define VADC_G6_RES2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F08u)

/** Alias (User Manual Name) for VADC_G6_RES2.
* To use register names with standard convension, please use VADC_G6_RES2.
*/
#define	VADC_G6RES2	(VADC_G6_RES2)

/** \brief  1F0C, Group Result Register */
#define VADC_G6_RES3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F0Cu)

/** Alias (User Manual Name) for VADC_G6_RES3.
* To use register names with standard convension, please use VADC_G6_RES3.
*/
#define	VADC_G6RES3	(VADC_G6_RES3)

/** \brief  1F10, Group Result Register */
#define VADC_G6_RES4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F10u)

/** Alias (User Manual Name) for VADC_G6_RES4.
* To use register names with standard convension, please use VADC_G6_RES4.
*/
#define	VADC_G6RES4	(VADC_G6_RES4)

/** \brief  1F14, Group Result Register */
#define VADC_G6_RES5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F14u)

/** Alias (User Manual Name) for VADC_G6_RES5.
* To use register names with standard convension, please use VADC_G6_RES5.
*/
#define	VADC_G6RES5	(VADC_G6_RES5)

/** \brief  1F18, Group Result Register */
#define VADC_G6_RES6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F18u)

/** Alias (User Manual Name) for VADC_G6_RES6.
* To use register names with standard convension, please use VADC_G6_RES6.
*/
#define	VADC_G6RES6	(VADC_G6_RES6)

/** \brief  1F1C, Group Result Register */
#define VADC_G6_RES7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F1Cu)

/** Alias (User Manual Name) for VADC_G6_RES7.
* To use register names with standard convension, please use VADC_G6_RES7.
*/
#define	VADC_G6RES7	(VADC_G6_RES7)

/** \brief  1F20, Group Result Register */
#define VADC_G6_RES8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F20u)

/** Alias (User Manual Name) for VADC_G6_RES8.
* To use register names with standard convension, please use VADC_G6_RES8.
*/
#define	VADC_G6RES8	(VADC_G6_RES8)

/** \brief  1F24, Group Result Register */
#define VADC_G6_RES9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0021F24u)

/** Alias (User Manual Name) for VADC_G6_RES9.
* To use register names with standard convension, please use VADC_G6_RES9.
*/
#define	VADC_G6RES9	(VADC_G6_RES9)

/** \brief  1F80, Group Result Reg., Debug */
#define VADC_G6_RESD0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021F80u)

/** Alias (User Manual Name) for VADC_G6_RESD0.
* To use register names with standard convension, please use VADC_G6_RESD0.
*/
#define	VADC_G6RESD0	(VADC_G6_RESD0)

/** \brief  1F84, Group Result Reg., Debug */
#define VADC_G6_RESD1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021F84u)

/** Alias (User Manual Name) for VADC_G6_RESD1.
* To use register names with standard convension, please use VADC_G6_RESD1.
*/
#define	VADC_G6RESD1	(VADC_G6_RESD1)

/** \brief  1FA8, Group Result Reg., Debug */
#define VADC_G6_RESD10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021FA8u)

/** Alias (User Manual Name) for VADC_G6_RESD10.
* To use register names with standard convension, please use VADC_G6_RESD10.
*/
#define	VADC_G6RESD10	(VADC_G6_RESD10)

/** \brief  1FAC, Group Result Reg., Debug */
#define VADC_G6_RESD11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021FACu)

/** Alias (User Manual Name) for VADC_G6_RESD11.
* To use register names with standard convension, please use VADC_G6_RESD11.
*/
#define	VADC_G6RESD11	(VADC_G6_RESD11)

/** \brief  1FB0, Group Result Reg., Debug */
#define VADC_G6_RESD12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021FB0u)

/** Alias (User Manual Name) for VADC_G6_RESD12.
* To use register names with standard convension, please use VADC_G6_RESD12.
*/
#define	VADC_G6RESD12	(VADC_G6_RESD12)

/** \brief  1FB4, Group Result Reg., Debug */
#define VADC_G6_RESD13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021FB4u)

/** Alias (User Manual Name) for VADC_G6_RESD13.
* To use register names with standard convension, please use VADC_G6_RESD13.
*/
#define	VADC_G6RESD13	(VADC_G6_RESD13)

/** \brief  1FB8, Group Result Reg., Debug */
#define VADC_G6_RESD14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021FB8u)

/** Alias (User Manual Name) for VADC_G6_RESD14.
* To use register names with standard convension, please use VADC_G6_RESD14.
*/
#define	VADC_G6RESD14	(VADC_G6_RESD14)

/** \brief  1FBC, Group Result Reg., Debug */
#define VADC_G6_RESD15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021FBCu)

/** Alias (User Manual Name) for VADC_G6_RESD15.
* To use register names with standard convension, please use VADC_G6_RESD15.
*/
#define	VADC_G6RESD15	(VADC_G6_RESD15)

/** \brief  1F88, Group Result Reg., Debug */
#define VADC_G6_RESD2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021F88u)

/** Alias (User Manual Name) for VADC_G6_RESD2.
* To use register names with standard convension, please use VADC_G6_RESD2.
*/
#define	VADC_G6RESD2	(VADC_G6_RESD2)

/** \brief  1F8C, Group Result Reg., Debug */
#define VADC_G6_RESD3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021F8Cu)

/** Alias (User Manual Name) for VADC_G6_RESD3.
* To use register names with standard convension, please use VADC_G6_RESD3.
*/
#define	VADC_G6RESD3	(VADC_G6_RESD3)

/** \brief  1F90, Group Result Reg., Debug */
#define VADC_G6_RESD4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021F90u)

/** Alias (User Manual Name) for VADC_G6_RESD4.
* To use register names with standard convension, please use VADC_G6_RESD4.
*/
#define	VADC_G6RESD4	(VADC_G6_RESD4)

/** \brief  1F94, Group Result Reg., Debug */
#define VADC_G6_RESD5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021F94u)

/** Alias (User Manual Name) for VADC_G6_RESD5.
* To use register names with standard convension, please use VADC_G6_RESD5.
*/
#define	VADC_G6RESD5	(VADC_G6_RESD5)

/** \brief  1F98, Group Result Reg., Debug */
#define VADC_G6_RESD6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021F98u)

/** Alias (User Manual Name) for VADC_G6_RESD6.
* To use register names with standard convension, please use VADC_G6_RESD6.
*/
#define	VADC_G6RESD6	(VADC_G6_RESD6)

/** \brief  1F9C, Group Result Reg., Debug */
#define VADC_G6_RESD7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021F9Cu)

/** Alias (User Manual Name) for VADC_G6_RESD7.
* To use register names with standard convension, please use VADC_G6_RESD7.
*/
#define	VADC_G6RESD7	(VADC_G6_RESD7)

/** \brief  1FA0, Group Result Reg., Debug */
#define VADC_G6_RESD8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021FA0u)

/** Alias (User Manual Name) for VADC_G6_RESD8.
* To use register names with standard convension, please use VADC_G6_RESD8.
*/
#define	VADC_G6RESD8	(VADC_G6_RESD8)

/** \brief  1FA4, Group Result Reg., Debug */
#define VADC_G6_RESD9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0021FA4u)

/** Alias (User Manual Name) for VADC_G6_RESD9.
* To use register names with standard convension, please use VADC_G6_RESD9.
*/
#define	VADC_G6RESD9	(VADC_G6_RESD9)

/** \brief  1DB0, Result Event Node Pointer Register 0, Group */
#define VADC_G6_REVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP0*)0xF0021DB0u)

/** Alias (User Manual Name) for VADC_G6_REVNP0.
* To use register names with standard convension, please use VADC_G6_REVNP0.
*/
#define	VADC_G6REVNP0	(VADC_G6_REVNP0)

/** \brief  1DB4, Result Event Node Pointer Register 1, Group */
#define VADC_G6_REVNP1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP1*)0xF0021DB4u)

/** Alias (User Manual Name) for VADC_G6_REVNP1.
* To use register names with standard convension, please use VADC_G6_REVNP1.
*/
#define	VADC_G6REVNP1	(VADC_G6_REVNP1)

/** \brief  1C8C, Result Assignment Register, Group */
#define VADC_G6_RRASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RRASS*)0xF0021C8Cu)

/** Alias (User Manual Name) for VADC_G6_RRASS.
* To use register names with standard convension, please use VADC_G6_RRASS.
*/
#define	VADC_G6RRASS	(VADC_G6_RRASS)

/** \brief  1D98, Source Event Flag Clear Register, Group */
#define VADC_G6_SEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFCLR*)0xF0021D98u)

/** Alias (User Manual Name) for VADC_G6_SEFCLR.
* To use register names with standard convension, please use VADC_G6_SEFCLR.
*/
#define	VADC_G6SEFCLR	(VADC_G6_SEFCLR)

/** \brief  1D88, Source Event Flag Register, Group */
#define VADC_G6_SEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFLAG*)0xF0021D88u)

/** Alias (User Manual Name) for VADC_G6_SEFLAG.
* To use register names with standard convension, please use VADC_G6_SEFLAG.
*/
#define	VADC_G6SEFLAG	(VADC_G6_SEFLAG)

/** \brief  1DC0, Source Event Node Pointer Register, Group */
#define VADC_G6_SEVNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEVNP*)0xF0021DC0u)

/** Alias (User Manual Name) for VADC_G6_SEVNP.
* To use register names with standard convension, please use VADC_G6_SEVNP.
*/
#define	VADC_G6SEVNP	(VADC_G6_SEVNP)

/** \brief  1DC8, Service Request Software Activation Trigger, Group */
#define VADC_G6_SRACT /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SRACT*)0xF0021DC8u)

/** Alias (User Manual Name) for VADC_G6_SRACT.
* To use register names with standard convension, please use VADC_G6_SRACT.
*/
#define	VADC_G6SRACT	(VADC_G6_SRACT)

/** \brief  1CC0, Synchronization Control Register, Group */
#define VADC_G6_SYNCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SYNCTR*)0xF0021CC0u)

/** Alias (User Manual Name) for VADC_G6_SYNCTR.
* To use register names with standard convension, please use VADC_G6_SYNCTR.
*/
#define	VADC_G6SYNCTR	(VADC_G6_SYNCTR)

/** \brief  1DF8, Valid Flag Register, Group */
#define VADC_G6_VFR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_VFR*)0xF0021DF8u)

/** Alias (User Manual Name) for VADC_G6_VFR.
* To use register names with standard convension, please use VADC_G6_VFR.
*/
#define	VADC_G6VFR	(VADC_G6_VFR)

/** \brief  20B0, Alias Register, Group */
#define VADC_G7_ALIAS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ALIAS*)0xF00220B0u)

/** Alias (User Manual Name) for VADC_G7_ALIAS.
* To use register names with standard convension, please use VADC_G7_ALIAS.
*/
#define	VADC_G7ALIAS	(VADC_G7_ALIAS)

/** \brief  2080, Arbitration Configuration Register, Group */
#define VADC_G7_ARBCFG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBCFG*)0xF0022080u)

/** Alias (User Manual Name) for VADC_G7_ARBCFG.
* To use register names with standard convension, please use VADC_G7_ARBCFG.
*/
#define	VADC_G7ARBCFG	(VADC_G7_ARBCFG)

/** \brief  2084, Arbitration Priority Register, Group */
#define VADC_G7_ARBPR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBPR*)0xF0022084u)

/** Alias (User Manual Name) for VADC_G7_ARBPR.
* To use register names with standard convension, please use VADC_G7_ARBPR.
*/
#define	VADC_G7ARBPR	(VADC_G7_ARBPR)

/** \brief  2120, Autoscan Source Control Register, Group */
#define VADC_G7_ASCTRL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASCTRL*)0xF0022120u)

/** Alias (User Manual Name) for VADC_G7_ASCTRL.
* To use register names with standard convension, please use VADC_G7_ASCTRL.
*/
#define	VADC_G7ASCTRL	(VADC_G7_ASCTRL)

/** \brief  2124, Autoscan Source Mode Register, Group */
#define VADC_G7_ASMR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASMR*)0xF0022124u)

/** Alias (User Manual Name) for VADC_G7_ASMR.
* To use register names with standard convension, please use VADC_G7_ASMR.
*/
#define	VADC_G7ASMR	(VADC_G7_ASMR)

/** \brief  212C, Autoscan Source Pending Register, Group */
#define VADC_G7_ASPND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASPND*)0xF002212Cu)

/** Alias (User Manual Name) for VADC_G7_ASPND.
* To use register names with standard convension, please use VADC_G7_ASPND.
*/
#define	VADC_G7ASPND	(VADC_G7_ASPND)

/** \brief  2128, Autoscan Source Channel Select Register, Group */
#define VADC_G7_ASSEL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASSEL*)0xF0022128u)

/** Alias (User Manual Name) for VADC_G7_ASSEL.
* To use register names with standard convension, please use VADC_G7_ASSEL.
*/
#define	VADC_G7ASSEL	(VADC_G7_ASSEL)

/** \brief  20C8, Boundary Flag Register, Group */
#define VADC_G7_BFL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFL*)0xF00220C8u)

/** Alias (User Manual Name) for VADC_G7_BFL.
* To use register names with standard convension, please use VADC_G7_BFL.
*/
#define	VADC_G7BFL	(VADC_G7_BFL)

/** \brief  20D0, Boundary Flag Control Register, Group */
#define VADC_G7_BFLC /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLC*)0xF00220D0u)

/** Alias (User Manual Name) for VADC_G7_BFLC.
* To use register names with standard convension, please use VADC_G7_BFLC.
*/
#define	VADC_G7BFLC	(VADC_G7_BFLC)

/** \brief  20D4, Boundary Flag Node Pointer Register, Group */
#define VADC_G7_BFLNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLNP*)0xF00220D4u)

/** Alias (User Manual Name) for VADC_G7_BFLNP.
* To use register names with standard convension, please use VADC_G7_BFLNP.
*/
#define	VADC_G7BFLNP	(VADC_G7_BFLNP)

/** \brief  20CC, Boundary Flag Software Register, Group */
#define VADC_G7_BFLS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLS*)0xF00220CCu)

/** Alias (User Manual Name) for VADC_G7_BFLS.
* To use register names with standard convension, please use VADC_G7_BFLS.
*/
#define	VADC_G7BFLS	(VADC_G7_BFLS)

/** \brief  20B8, Boundary Select Register, Group */
#define VADC_G7_BOUND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BOUND*)0xF00220B8u)

/** Alias (User Manual Name) for VADC_G7_BOUND.
* To use register names with standard convension, please use VADC_G7_BOUND.
*/
#define	VADC_G7BOUND	(VADC_G7_BOUND)

/** \brief  2190, Channel Event Flag Clear Register, Group */
#define VADC_G7_CEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFCLR*)0xF0022190u)

/** Alias (User Manual Name) for VADC_G7_CEFCLR.
* To use register names with standard convension, please use VADC_G7_CEFCLR.
*/
#define	VADC_G7CEFCLR	(VADC_G7_CEFCLR)

/** \brief  2180, Channel Event Flag Register, Group */
#define VADC_G7_CEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFLAG*)0xF0022180u)

/** Alias (User Manual Name) for VADC_G7_CEFLAG.
* To use register names with standard convension, please use VADC_G7_CEFLAG.
*/
#define	VADC_G7CEFLAG	(VADC_G7_CEFLAG)

/** \brief  21A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G7_CEVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEVNP0*)0xF00221A0u)

/** Alias (User Manual Name) for VADC_G7_CEVNP0.
* To use register names with standard convension, please use VADC_G7_CEVNP0.
*/
#define	VADC_G7CEVNP0	(VADC_G7_CEVNP0)

/** \brief  2088, Channel Assignment Register, Group */
#define VADC_G7_CHASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHASS*)0xF0022088u)

/** Alias (User Manual Name) for VADC_G7_CHASS.
* To use register names with standard convension, please use VADC_G7_CHASS.
*/
#define	VADC_G7CHASS	(VADC_G7_CHASS)

/** \brief  2200, Group, Channel Ctrl. Reg. */
#define VADC_G7_CHCTR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022200u)

/** Alias (User Manual Name) for VADC_G7_CHCTR0.
* To use register names with standard convension, please use VADC_G7_CHCTR0.
*/
#define	VADC_G7CHCTR0	(VADC_G7_CHCTR0)

/** \brief  2204, Group, Channel Ctrl. Reg. */
#define VADC_G7_CHCTR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022204u)

/** Alias (User Manual Name) for VADC_G7_CHCTR1.
* To use register names with standard convension, please use VADC_G7_CHCTR1.
*/
#define	VADC_G7CHCTR1	(VADC_G7_CHCTR1)

/** \brief  2208, Group, Channel Ctrl. Reg. */
#define VADC_G7_CHCTR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022208u)

/** Alias (User Manual Name) for VADC_G7_CHCTR2.
* To use register names with standard convension, please use VADC_G7_CHCTR2.
*/
#define	VADC_G7CHCTR2	(VADC_G7_CHCTR2)

/** \brief  220C, Group, Channel Ctrl. Reg. */
#define VADC_G7_CHCTR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF002220Cu)

/** Alias (User Manual Name) for VADC_G7_CHCTR3.
* To use register names with standard convension, please use VADC_G7_CHCTR3.
*/
#define	VADC_G7CHCTR3	(VADC_G7_CHCTR3)

/** \brief  2210, Group, Channel Ctrl. Reg. */
#define VADC_G7_CHCTR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022210u)

/** Alias (User Manual Name) for VADC_G7_CHCTR4.
* To use register names with standard convension, please use VADC_G7_CHCTR4.
*/
#define	VADC_G7CHCTR4	(VADC_G7_CHCTR4)

/** \brief  2214, Group, Channel Ctrl. Reg. */
#define VADC_G7_CHCTR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022214u)

/** Alias (User Manual Name) for VADC_G7_CHCTR5.
* To use register names with standard convension, please use VADC_G7_CHCTR5.
*/
#define	VADC_G7CHCTR5	(VADC_G7_CHCTR5)

/** \brief  2218, Group, Channel Ctrl. Reg. */
#define VADC_G7_CHCTR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022218u)

/** Alias (User Manual Name) for VADC_G7_CHCTR6.
* To use register names with standard convension, please use VADC_G7_CHCTR6.
*/
#define	VADC_G7CHCTR6	(VADC_G7_CHCTR6)

/** \brief  221C, Group, Channel Ctrl. Reg. */
#define VADC_G7_CHCTR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF002221Cu)

/** Alias (User Manual Name) for VADC_G7_CHCTR7.
* To use register names with standard convension, please use VADC_G7_CHCTR7.
*/
#define	VADC_G7CHCTR7	(VADC_G7_CHCTR7)

/** \brief  21F0, External Multiplexer Control Register, Group x */
#define VADC_G7_EMUXCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_EMUXCTR*)0xF00221F0u)

/** Alias (User Manual Name) for VADC_G7_EMUXCTR.
* To use register names with standard convension, please use VADC_G7_EMUXCTR.
*/
#define	VADC_G7EMUXCTR	(VADC_G7_EMUXCTR)

/** \brief  20A0, Input Class Register */
#define VADC_G7_ICLASS0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00220A0u)

/** Alias (User Manual Name) for VADC_G7_ICLASS0.
* To use register names with standard convension, please use VADC_G7_ICLASS0.
*/
#define	VADC_G7ICLASS0	(VADC_G7_ICLASS0)

/** \brief  20A4, Input Class Register */
#define VADC_G7_ICLASS1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00220A4u)

/** Alias (User Manual Name) for VADC_G7_ICLASS1.
* To use register names with standard convension, please use VADC_G7_ICLASS1.
*/
#define	VADC_G7ICLASS1	(VADC_G7_ICLASS1)

/** \brief  210C, Queue 0 Register 0, Group */
#define VADC_G7_Q0R0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_Q0R0*)0xF002210Cu)

/** Alias (User Manual Name) for VADC_G7_Q0R0.
* To use register names with standard convension, please use VADC_G7_Q0R0.
*/
#define	VADC_G7Q0R0	(VADC_G7_Q0R0)

/** \brief  2110, Queue 0 Input Register, Group */
#define VADC_G7_QBUR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QBUR0*)0xF0022110u)

/** Alias (User Manual Name) for VADC_G7_QBUR0.
* To use register names with standard convension, please use VADC_G7_QBUR0.
*/
#define	VADC_G7QBUR0	(VADC_G7_QBUR0)

/** \brief  2100, Queue 0 Source Control Register, Group */
#define VADC_G7_QCTRL0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QCTRL0*)0xF0022100u)

/** Alias (User Manual Name) for VADC_G7_QCTRL0.
* To use register names with standard convension, please use VADC_G7_QCTRL0.
*/
#define	VADC_G7QCTRL0	(VADC_G7_QCTRL0)

/** \brief  2110, Queue 0 Input Register, Group */
#define VADC_G7_QINR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QINR0*)0xF0022110u)

/** Alias (User Manual Name) for VADC_G7_QINR0.
* To use register names with standard convension, please use VADC_G7_QINR0.
*/
#define	VADC_G7QINR0	(VADC_G7_QINR0)

/** \brief  2104, Queue 0 Mode Register, Group */
#define VADC_G7_QMR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QMR0*)0xF0022104u)

/** Alias (User Manual Name) for VADC_G7_QMR0.
* To use register names with standard convension, please use VADC_G7_QMR0.
*/
#define	VADC_G7QMR0	(VADC_G7_QMR0)

/** \brief  2108, Queue 0 Status Register, Group */
#define VADC_G7_QSR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QSR0*)0xF0022108u)

/** Alias (User Manual Name) for VADC_G7_QSR0.
* To use register names with standard convension, please use VADC_G7_QSR0.
*/
#define	VADC_G7QSR0	(VADC_G7_QSR0)

/** \brief  2280, Group Result Control Reg. */
#define VADC_G7_RCR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022280u)

/** Alias (User Manual Name) for VADC_G7_RCR0.
* To use register names with standard convension, please use VADC_G7_RCR0.
*/
#define	VADC_G7RCR0	(VADC_G7_RCR0)

/** \brief  2284, Group Result Control Reg. */
#define VADC_G7_RCR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022284u)

/** Alias (User Manual Name) for VADC_G7_RCR1.
* To use register names with standard convension, please use VADC_G7_RCR1.
*/
#define	VADC_G7RCR1	(VADC_G7_RCR1)

/** \brief  22A8, Group Result Control Reg. */
#define VADC_G7_RCR10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00222A8u)

/** Alias (User Manual Name) for VADC_G7_RCR10.
* To use register names with standard convension, please use VADC_G7_RCR10.
*/
#define	VADC_G7RCR10	(VADC_G7_RCR10)

/** \brief  22AC, Group Result Control Reg. */
#define VADC_G7_RCR11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00222ACu)

/** Alias (User Manual Name) for VADC_G7_RCR11.
* To use register names with standard convension, please use VADC_G7_RCR11.
*/
#define	VADC_G7RCR11	(VADC_G7_RCR11)

/** \brief  22B0, Group Result Control Reg. */
#define VADC_G7_RCR12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00222B0u)

/** Alias (User Manual Name) for VADC_G7_RCR12.
* To use register names with standard convension, please use VADC_G7_RCR12.
*/
#define	VADC_G7RCR12	(VADC_G7_RCR12)

/** \brief  22B4, Group Result Control Reg. */
#define VADC_G7_RCR13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00222B4u)

/** Alias (User Manual Name) for VADC_G7_RCR13.
* To use register names with standard convension, please use VADC_G7_RCR13.
*/
#define	VADC_G7RCR13	(VADC_G7_RCR13)

/** \brief  22B8, Group Result Control Reg. */
#define VADC_G7_RCR14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00222B8u)

/** Alias (User Manual Name) for VADC_G7_RCR14.
* To use register names with standard convension, please use VADC_G7_RCR14.
*/
#define	VADC_G7RCR14	(VADC_G7_RCR14)

/** \brief  22BC, Group Result Control Reg. */
#define VADC_G7_RCR15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00222BCu)

/** Alias (User Manual Name) for VADC_G7_RCR15.
* To use register names with standard convension, please use VADC_G7_RCR15.
*/
#define	VADC_G7RCR15	(VADC_G7_RCR15)

/** \brief  2288, Group Result Control Reg. */
#define VADC_G7_RCR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022288u)

/** Alias (User Manual Name) for VADC_G7_RCR2.
* To use register names with standard convension, please use VADC_G7_RCR2.
*/
#define	VADC_G7RCR2	(VADC_G7_RCR2)

/** \brief  228C, Group Result Control Reg. */
#define VADC_G7_RCR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF002228Cu)

/** Alias (User Manual Name) for VADC_G7_RCR3.
* To use register names with standard convension, please use VADC_G7_RCR3.
*/
#define	VADC_G7RCR3	(VADC_G7_RCR3)

/** \brief  2290, Group Result Control Reg. */
#define VADC_G7_RCR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022290u)

/** Alias (User Manual Name) for VADC_G7_RCR4.
* To use register names with standard convension, please use VADC_G7_RCR4.
*/
#define	VADC_G7RCR4	(VADC_G7_RCR4)

/** \brief  2294, Group Result Control Reg. */
#define VADC_G7_RCR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022294u)

/** Alias (User Manual Name) for VADC_G7_RCR5.
* To use register names with standard convension, please use VADC_G7_RCR5.
*/
#define	VADC_G7RCR5	(VADC_G7_RCR5)

/** \brief  2298, Group Result Control Reg. */
#define VADC_G7_RCR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022298u)

/** Alias (User Manual Name) for VADC_G7_RCR6.
* To use register names with standard convension, please use VADC_G7_RCR6.
*/
#define	VADC_G7RCR6	(VADC_G7_RCR6)

/** \brief  229C, Group Result Control Reg. */
#define VADC_G7_RCR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF002229Cu)

/** Alias (User Manual Name) for VADC_G7_RCR7.
* To use register names with standard convension, please use VADC_G7_RCR7.
*/
#define	VADC_G7RCR7	(VADC_G7_RCR7)

/** \brief  22A0, Group Result Control Reg. */
#define VADC_G7_RCR8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00222A0u)

/** Alias (User Manual Name) for VADC_G7_RCR8.
* To use register names with standard convension, please use VADC_G7_RCR8.
*/
#define	VADC_G7RCR8	(VADC_G7_RCR8)

/** \brief  22A4, Group Result Control Reg. */
#define VADC_G7_RCR9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00222A4u)

/** Alias (User Manual Name) for VADC_G7_RCR9.
* To use register names with standard convension, please use VADC_G7_RCR9.
*/
#define	VADC_G7RCR9	(VADC_G7_RCR9)

/** \brief  2194, Result Event Flag Clear Register, Group */
#define VADC_G7_REFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFCLR*)0xF0022194u)

/** Alias (User Manual Name) for VADC_G7_REFCLR.
* To use register names with standard convension, please use VADC_G7_REFCLR.
*/
#define	VADC_G7REFCLR	(VADC_G7_REFCLR)

/** \brief  2184, Result Event Flag Register, Group */
#define VADC_G7_REFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFLAG*)0xF0022184u)

/** Alias (User Manual Name) for VADC_G7_REFLAG.
* To use register names with standard convension, please use VADC_G7_REFLAG.
*/
#define	VADC_G7REFLAG	(VADC_G7_REFLAG)

/** \brief  2300, Group Result Register */
#define VADC_G7_RES0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022300u)

/** Alias (User Manual Name) for VADC_G7_RES0.
* To use register names with standard convension, please use VADC_G7_RES0.
*/
#define	VADC_G7RES0	(VADC_G7_RES0)

/** \brief  2304, Group Result Register */
#define VADC_G7_RES1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022304u)

/** Alias (User Manual Name) for VADC_G7_RES1.
* To use register names with standard convension, please use VADC_G7_RES1.
*/
#define	VADC_G7RES1	(VADC_G7_RES1)

/** \brief  2328, Group Result Register */
#define VADC_G7_RES10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022328u)

/** Alias (User Manual Name) for VADC_G7_RES10.
* To use register names with standard convension, please use VADC_G7_RES10.
*/
#define	VADC_G7RES10	(VADC_G7_RES10)

/** \brief  232C, Group Result Register */
#define VADC_G7_RES11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002232Cu)

/** Alias (User Manual Name) for VADC_G7_RES11.
* To use register names with standard convension, please use VADC_G7_RES11.
*/
#define	VADC_G7RES11	(VADC_G7_RES11)

/** \brief  2330, Group Result Register */
#define VADC_G7_RES12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022330u)

/** Alias (User Manual Name) for VADC_G7_RES12.
* To use register names with standard convension, please use VADC_G7_RES12.
*/
#define	VADC_G7RES12	(VADC_G7_RES12)

/** \brief  2334, Group Result Register */
#define VADC_G7_RES13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022334u)

/** Alias (User Manual Name) for VADC_G7_RES13.
* To use register names with standard convension, please use VADC_G7_RES13.
*/
#define	VADC_G7RES13	(VADC_G7_RES13)

/** \brief  2338, Group Result Register */
#define VADC_G7_RES14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022338u)

/** Alias (User Manual Name) for VADC_G7_RES14.
* To use register names with standard convension, please use VADC_G7_RES14.
*/
#define	VADC_G7RES14	(VADC_G7_RES14)

/** \brief  233C, Group Result Register */
#define VADC_G7_RES15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002233Cu)

/** Alias (User Manual Name) for VADC_G7_RES15.
* To use register names with standard convension, please use VADC_G7_RES15.
*/
#define	VADC_G7RES15	(VADC_G7_RES15)

/** \brief  2308, Group Result Register */
#define VADC_G7_RES2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022308u)

/** Alias (User Manual Name) for VADC_G7_RES2.
* To use register names with standard convension, please use VADC_G7_RES2.
*/
#define	VADC_G7RES2	(VADC_G7_RES2)

/** \brief  230C, Group Result Register */
#define VADC_G7_RES3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002230Cu)

/** Alias (User Manual Name) for VADC_G7_RES3.
* To use register names with standard convension, please use VADC_G7_RES3.
*/
#define	VADC_G7RES3	(VADC_G7_RES3)

/** \brief  2310, Group Result Register */
#define VADC_G7_RES4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022310u)

/** Alias (User Manual Name) for VADC_G7_RES4.
* To use register names with standard convension, please use VADC_G7_RES4.
*/
#define	VADC_G7RES4	(VADC_G7_RES4)

/** \brief  2314, Group Result Register */
#define VADC_G7_RES5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022314u)

/** Alias (User Manual Name) for VADC_G7_RES5.
* To use register names with standard convension, please use VADC_G7_RES5.
*/
#define	VADC_G7RES5	(VADC_G7_RES5)

/** \brief  2318, Group Result Register */
#define VADC_G7_RES6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022318u)

/** Alias (User Manual Name) for VADC_G7_RES6.
* To use register names with standard convension, please use VADC_G7_RES6.
*/
#define	VADC_G7RES6	(VADC_G7_RES6)

/** \brief  231C, Group Result Register */
#define VADC_G7_RES7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002231Cu)

/** Alias (User Manual Name) for VADC_G7_RES7.
* To use register names with standard convension, please use VADC_G7_RES7.
*/
#define	VADC_G7RES7	(VADC_G7_RES7)

/** \brief  2320, Group Result Register */
#define VADC_G7_RES8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022320u)

/** Alias (User Manual Name) for VADC_G7_RES8.
* To use register names with standard convension, please use VADC_G7_RES8.
*/
#define	VADC_G7RES8	(VADC_G7_RES8)

/** \brief  2324, Group Result Register */
#define VADC_G7_RES9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022324u)

/** Alias (User Manual Name) for VADC_G7_RES9.
* To use register names with standard convension, please use VADC_G7_RES9.
*/
#define	VADC_G7RES9	(VADC_G7_RES9)

/** \brief  2380, Group Result Reg., Debug */
#define VADC_G7_RESD0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022380u)

/** Alias (User Manual Name) for VADC_G7_RESD0.
* To use register names with standard convension, please use VADC_G7_RESD0.
*/
#define	VADC_G7RESD0	(VADC_G7_RESD0)

/** \brief  2384, Group Result Reg., Debug */
#define VADC_G7_RESD1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022384u)

/** Alias (User Manual Name) for VADC_G7_RESD1.
* To use register names with standard convension, please use VADC_G7_RESD1.
*/
#define	VADC_G7RESD1	(VADC_G7_RESD1)

/** \brief  23A8, Group Result Reg., Debug */
#define VADC_G7_RESD10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00223A8u)

/** Alias (User Manual Name) for VADC_G7_RESD10.
* To use register names with standard convension, please use VADC_G7_RESD10.
*/
#define	VADC_G7RESD10	(VADC_G7_RESD10)

/** \brief  23AC, Group Result Reg., Debug */
#define VADC_G7_RESD11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00223ACu)

/** Alias (User Manual Name) for VADC_G7_RESD11.
* To use register names with standard convension, please use VADC_G7_RESD11.
*/
#define	VADC_G7RESD11	(VADC_G7_RESD11)

/** \brief  23B0, Group Result Reg., Debug */
#define VADC_G7_RESD12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00223B0u)

/** Alias (User Manual Name) for VADC_G7_RESD12.
* To use register names with standard convension, please use VADC_G7_RESD12.
*/
#define	VADC_G7RESD12	(VADC_G7_RESD12)

/** \brief  23B4, Group Result Reg., Debug */
#define VADC_G7_RESD13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00223B4u)

/** Alias (User Manual Name) for VADC_G7_RESD13.
* To use register names with standard convension, please use VADC_G7_RESD13.
*/
#define	VADC_G7RESD13	(VADC_G7_RESD13)

/** \brief  23B8, Group Result Reg., Debug */
#define VADC_G7_RESD14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00223B8u)

/** Alias (User Manual Name) for VADC_G7_RESD14.
* To use register names with standard convension, please use VADC_G7_RESD14.
*/
#define	VADC_G7RESD14	(VADC_G7_RESD14)

/** \brief  23BC, Group Result Reg., Debug */
#define VADC_G7_RESD15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00223BCu)

/** Alias (User Manual Name) for VADC_G7_RESD15.
* To use register names with standard convension, please use VADC_G7_RESD15.
*/
#define	VADC_G7RESD15	(VADC_G7_RESD15)

/** \brief  2388, Group Result Reg., Debug */
#define VADC_G7_RESD2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022388u)

/** Alias (User Manual Name) for VADC_G7_RESD2.
* To use register names with standard convension, please use VADC_G7_RESD2.
*/
#define	VADC_G7RESD2	(VADC_G7_RESD2)

/** \brief  238C, Group Result Reg., Debug */
#define VADC_G7_RESD3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF002238Cu)

/** Alias (User Manual Name) for VADC_G7_RESD3.
* To use register names with standard convension, please use VADC_G7_RESD3.
*/
#define	VADC_G7RESD3	(VADC_G7_RESD3)

/** \brief  2390, Group Result Reg., Debug */
#define VADC_G7_RESD4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022390u)

/** Alias (User Manual Name) for VADC_G7_RESD4.
* To use register names with standard convension, please use VADC_G7_RESD4.
*/
#define	VADC_G7RESD4	(VADC_G7_RESD4)

/** \brief  2394, Group Result Reg., Debug */
#define VADC_G7_RESD5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022394u)

/** Alias (User Manual Name) for VADC_G7_RESD5.
* To use register names with standard convension, please use VADC_G7_RESD5.
*/
#define	VADC_G7RESD5	(VADC_G7_RESD5)

/** \brief  2398, Group Result Reg., Debug */
#define VADC_G7_RESD6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022398u)

/** Alias (User Manual Name) for VADC_G7_RESD6.
* To use register names with standard convension, please use VADC_G7_RESD6.
*/
#define	VADC_G7RESD6	(VADC_G7_RESD6)

/** \brief  239C, Group Result Reg., Debug */
#define VADC_G7_RESD7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF002239Cu)

/** Alias (User Manual Name) for VADC_G7_RESD7.
* To use register names with standard convension, please use VADC_G7_RESD7.
*/
#define	VADC_G7RESD7	(VADC_G7_RESD7)

/** \brief  23A0, Group Result Reg., Debug */
#define VADC_G7_RESD8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00223A0u)

/** Alias (User Manual Name) for VADC_G7_RESD8.
* To use register names with standard convension, please use VADC_G7_RESD8.
*/
#define	VADC_G7RESD8	(VADC_G7_RESD8)

/** \brief  23A4, Group Result Reg., Debug */
#define VADC_G7_RESD9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00223A4u)

/** Alias (User Manual Name) for VADC_G7_RESD9.
* To use register names with standard convension, please use VADC_G7_RESD9.
*/
#define	VADC_G7RESD9	(VADC_G7_RESD9)

/** \brief  21B0, Result Event Node Pointer Register 0, Group */
#define VADC_G7_REVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP0*)0xF00221B0u)

/** Alias (User Manual Name) for VADC_G7_REVNP0.
* To use register names with standard convension, please use VADC_G7_REVNP0.
*/
#define	VADC_G7REVNP0	(VADC_G7_REVNP0)

/** \brief  21B4, Result Event Node Pointer Register 1, Group */
#define VADC_G7_REVNP1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP1*)0xF00221B4u)

/** Alias (User Manual Name) for VADC_G7_REVNP1.
* To use register names with standard convension, please use VADC_G7_REVNP1.
*/
#define	VADC_G7REVNP1	(VADC_G7_REVNP1)

/** \brief  208C, Result Assignment Register, Group */
#define VADC_G7_RRASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RRASS*)0xF002208Cu)

/** Alias (User Manual Name) for VADC_G7_RRASS.
* To use register names with standard convension, please use VADC_G7_RRASS.
*/
#define	VADC_G7RRASS	(VADC_G7_RRASS)

/** \brief  2198, Source Event Flag Clear Register, Group */
#define VADC_G7_SEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFCLR*)0xF0022198u)

/** Alias (User Manual Name) for VADC_G7_SEFCLR.
* To use register names with standard convension, please use VADC_G7_SEFCLR.
*/
#define	VADC_G7SEFCLR	(VADC_G7_SEFCLR)

/** \brief  2188, Source Event Flag Register, Group */
#define VADC_G7_SEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFLAG*)0xF0022188u)

/** Alias (User Manual Name) for VADC_G7_SEFLAG.
* To use register names with standard convension, please use VADC_G7_SEFLAG.
*/
#define	VADC_G7SEFLAG	(VADC_G7_SEFLAG)

/** \brief  21C0, Source Event Node Pointer Register, Group */
#define VADC_G7_SEVNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEVNP*)0xF00221C0u)

/** Alias (User Manual Name) for VADC_G7_SEVNP.
* To use register names with standard convension, please use VADC_G7_SEVNP.
*/
#define	VADC_G7SEVNP	(VADC_G7_SEVNP)

/** \brief  21C8, Service Request Software Activation Trigger, Group */
#define VADC_G7_SRACT /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SRACT*)0xF00221C8u)

/** Alias (User Manual Name) for VADC_G7_SRACT.
* To use register names with standard convension, please use VADC_G7_SRACT.
*/
#define	VADC_G7SRACT	(VADC_G7_SRACT)

/** \brief  20C0, Synchronization Control Register, Group */
#define VADC_G7_SYNCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SYNCTR*)0xF00220C0u)

/** Alias (User Manual Name) for VADC_G7_SYNCTR.
* To use register names with standard convension, please use VADC_G7_SYNCTR.
*/
#define	VADC_G7SYNCTR	(VADC_G7_SYNCTR)

/** \brief  21F8, Valid Flag Register, Group */
#define VADC_G7_VFR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_VFR*)0xF00221F8u)

/** Alias (User Manual Name) for VADC_G7_VFR.
* To use register names with standard convension, please use VADC_G7_VFR.
*/
#define	VADC_G7VFR	(VADC_G7_VFR)

/** \brief  24B0, Alias Register, Group */
#define VADC_G8_ALIAS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ALIAS*)0xF00224B0u)

/** Alias (User Manual Name) for VADC_G8_ALIAS.
* To use register names with standard convension, please use VADC_G8_ALIAS.
*/
#define	VADC_G8ALIAS	(VADC_G8_ALIAS)

/** \brief  2480, Arbitration Configuration Register, Group */
#define VADC_G8_ARBCFG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBCFG*)0xF0022480u)

/** Alias (User Manual Name) for VADC_G8_ARBCFG.
* To use register names with standard convension, please use VADC_G8_ARBCFG.
*/
#define	VADC_G8ARBCFG	(VADC_G8_ARBCFG)

/** \brief  2484, Arbitration Priority Register, Group */
#define VADC_G8_ARBPR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBPR*)0xF0022484u)

/** Alias (User Manual Name) for VADC_G8_ARBPR.
* To use register names with standard convension, please use VADC_G8_ARBPR.
*/
#define	VADC_G8ARBPR	(VADC_G8_ARBPR)

/** \brief  2520, Autoscan Source Control Register, Group */
#define VADC_G8_ASCTRL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASCTRL*)0xF0022520u)

/** Alias (User Manual Name) for VADC_G8_ASCTRL.
* To use register names with standard convension, please use VADC_G8_ASCTRL.
*/
#define	VADC_G8ASCTRL	(VADC_G8_ASCTRL)

/** \brief  2524, Autoscan Source Mode Register, Group */
#define VADC_G8_ASMR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASMR*)0xF0022524u)

/** Alias (User Manual Name) for VADC_G8_ASMR.
* To use register names with standard convension, please use VADC_G8_ASMR.
*/
#define	VADC_G8ASMR	(VADC_G8_ASMR)

/** \brief  252C, Autoscan Source Pending Register, Group */
#define VADC_G8_ASPND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASPND*)0xF002252Cu)

/** Alias (User Manual Name) for VADC_G8_ASPND.
* To use register names with standard convension, please use VADC_G8_ASPND.
*/
#define	VADC_G8ASPND	(VADC_G8_ASPND)

/** \brief  2528, Autoscan Source Channel Select Register, Group */
#define VADC_G8_ASSEL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASSEL*)0xF0022528u)

/** Alias (User Manual Name) for VADC_G8_ASSEL.
* To use register names with standard convension, please use VADC_G8_ASSEL.
*/
#define	VADC_G8ASSEL	(VADC_G8_ASSEL)

/** \brief  24C8, Boundary Flag Register, Group */
#define VADC_G8_BFL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFL*)0xF00224C8u)

/** Alias (User Manual Name) for VADC_G8_BFL.
* To use register names with standard convension, please use VADC_G8_BFL.
*/
#define	VADC_G8BFL	(VADC_G8_BFL)

/** \brief  24D0, Boundary Flag Control Register, Group */
#define VADC_G8_BFLC /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLC*)0xF00224D0u)

/** Alias (User Manual Name) for VADC_G8_BFLC.
* To use register names with standard convension, please use VADC_G8_BFLC.
*/
#define	VADC_G8BFLC	(VADC_G8_BFLC)

/** \brief  24D4, Boundary Flag Node Pointer Register, Group */
#define VADC_G8_BFLNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLNP*)0xF00224D4u)

/** Alias (User Manual Name) for VADC_G8_BFLNP.
* To use register names with standard convension, please use VADC_G8_BFLNP.
*/
#define	VADC_G8BFLNP	(VADC_G8_BFLNP)

/** \brief  24CC, Boundary Flag Software Register, Group */
#define VADC_G8_BFLS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLS*)0xF00224CCu)

/** Alias (User Manual Name) for VADC_G8_BFLS.
* To use register names with standard convension, please use VADC_G8_BFLS.
*/
#define	VADC_G8BFLS	(VADC_G8_BFLS)

/** \brief  24B8, Boundary Select Register, Group */
#define VADC_G8_BOUND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BOUND*)0xF00224B8u)

/** Alias (User Manual Name) for VADC_G8_BOUND.
* To use register names with standard convension, please use VADC_G8_BOUND.
*/
#define	VADC_G8BOUND	(VADC_G8_BOUND)

/** \brief  2590, Channel Event Flag Clear Register, Group */
#define VADC_G8_CEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFCLR*)0xF0022590u)

/** Alias (User Manual Name) for VADC_G8_CEFCLR.
* To use register names with standard convension, please use VADC_G8_CEFCLR.
*/
#define	VADC_G8CEFCLR	(VADC_G8_CEFCLR)

/** \brief  2580, Channel Event Flag Register, Group */
#define VADC_G8_CEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFLAG*)0xF0022580u)

/** Alias (User Manual Name) for VADC_G8_CEFLAG.
* To use register names with standard convension, please use VADC_G8_CEFLAG.
*/
#define	VADC_G8CEFLAG	(VADC_G8_CEFLAG)

/** \brief  25A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G8_CEVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEVNP0*)0xF00225A0u)

/** Alias (User Manual Name) for VADC_G8_CEVNP0.
* To use register names with standard convension, please use VADC_G8_CEVNP0.
*/
#define	VADC_G8CEVNP0	(VADC_G8_CEVNP0)

/** \brief  2488, Channel Assignment Register, Group */
#define VADC_G8_CHASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHASS*)0xF0022488u)

/** Alias (User Manual Name) for VADC_G8_CHASS.
* To use register names with standard convension, please use VADC_G8_CHASS.
*/
#define	VADC_G8CHASS	(VADC_G8_CHASS)

/** \brief  2600, Group, Channel Ctrl. Reg. */
#define VADC_G8_CHCTR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022600u)

/** Alias (User Manual Name) for VADC_G8_CHCTR0.
* To use register names with standard convension, please use VADC_G8_CHCTR0.
*/
#define	VADC_G8CHCTR0	(VADC_G8_CHCTR0)

/** \brief  2604, Group, Channel Ctrl. Reg. */
#define VADC_G8_CHCTR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022604u)

/** Alias (User Manual Name) for VADC_G8_CHCTR1.
* To use register names with standard convension, please use VADC_G8_CHCTR1.
*/
#define	VADC_G8CHCTR1	(VADC_G8_CHCTR1)

/** \brief  2608, Group, Channel Ctrl. Reg. */
#define VADC_G8_CHCTR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022608u)

/** Alias (User Manual Name) for VADC_G8_CHCTR2.
* To use register names with standard convension, please use VADC_G8_CHCTR2.
*/
#define	VADC_G8CHCTR2	(VADC_G8_CHCTR2)

/** \brief  260C, Group, Channel Ctrl. Reg. */
#define VADC_G8_CHCTR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF002260Cu)

/** Alias (User Manual Name) for VADC_G8_CHCTR3.
* To use register names with standard convension, please use VADC_G8_CHCTR3.
*/
#define	VADC_G8CHCTR3	(VADC_G8_CHCTR3)

/** \brief  2610, Group, Channel Ctrl. Reg. */
#define VADC_G8_CHCTR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022610u)

/** Alias (User Manual Name) for VADC_G8_CHCTR4.
* To use register names with standard convension, please use VADC_G8_CHCTR4.
*/
#define	VADC_G8CHCTR4	(VADC_G8_CHCTR4)

/** \brief  2614, Group, Channel Ctrl. Reg. */
#define VADC_G8_CHCTR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022614u)

/** Alias (User Manual Name) for VADC_G8_CHCTR5.
* To use register names with standard convension, please use VADC_G8_CHCTR5.
*/
#define	VADC_G8CHCTR5	(VADC_G8_CHCTR5)

/** \brief  2618, Group, Channel Ctrl. Reg. */
#define VADC_G8_CHCTR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022618u)

/** Alias (User Manual Name) for VADC_G8_CHCTR6.
* To use register names with standard convension, please use VADC_G8_CHCTR6.
*/
#define	VADC_G8CHCTR6	(VADC_G8_CHCTR6)

/** \brief  261C, Group, Channel Ctrl. Reg. */
#define VADC_G8_CHCTR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF002261Cu)

/** Alias (User Manual Name) for VADC_G8_CHCTR7.
* To use register names with standard convension, please use VADC_G8_CHCTR7.
*/
#define	VADC_G8CHCTR7	(VADC_G8_CHCTR7)

/** \brief  25F0, External Multiplexer Control Register, Group x */
#define VADC_G8_EMUXCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_EMUXCTR*)0xF00225F0u)

/** Alias (User Manual Name) for VADC_G8_EMUXCTR.
* To use register names with standard convension, please use VADC_G8_EMUXCTR.
*/
#define	VADC_G8EMUXCTR	(VADC_G8_EMUXCTR)

/** \brief  24A0, Input Class Register */
#define VADC_G8_ICLASS0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00224A0u)

/** Alias (User Manual Name) for VADC_G8_ICLASS0.
* To use register names with standard convension, please use VADC_G8_ICLASS0.
*/
#define	VADC_G8ICLASS0	(VADC_G8_ICLASS0)

/** \brief  24A4, Input Class Register */
#define VADC_G8_ICLASS1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00224A4u)

/** Alias (User Manual Name) for VADC_G8_ICLASS1.
* To use register names with standard convension, please use VADC_G8_ICLASS1.
*/
#define	VADC_G8ICLASS1	(VADC_G8_ICLASS1)

/** \brief  250C, Queue 0 Register 0, Group */
#define VADC_G8_Q0R0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_Q0R0*)0xF002250Cu)

/** Alias (User Manual Name) for VADC_G8_Q0R0.
* To use register names with standard convension, please use VADC_G8_Q0R0.
*/
#define	VADC_G8Q0R0	(VADC_G8_Q0R0)

/** \brief  2510, Queue 0 Input Register, Group */
#define VADC_G8_QBUR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QBUR0*)0xF0022510u)

/** Alias (User Manual Name) for VADC_G8_QBUR0.
* To use register names with standard convension, please use VADC_G8_QBUR0.
*/
#define	VADC_G8QBUR0	(VADC_G8_QBUR0)

/** \brief  2500, Queue 0 Source Control Register, Group */
#define VADC_G8_QCTRL0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QCTRL0*)0xF0022500u)

/** Alias (User Manual Name) for VADC_G8_QCTRL0.
* To use register names with standard convension, please use VADC_G8_QCTRL0.
*/
#define	VADC_G8QCTRL0	(VADC_G8_QCTRL0)

/** \brief  2510, Queue 0 Input Register, Group */
#define VADC_G8_QINR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QINR0*)0xF0022510u)

/** Alias (User Manual Name) for VADC_G8_QINR0.
* To use register names with standard convension, please use VADC_G8_QINR0.
*/
#define	VADC_G8QINR0	(VADC_G8_QINR0)

/** \brief  2504, Queue 0 Mode Register, Group */
#define VADC_G8_QMR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QMR0*)0xF0022504u)

/** Alias (User Manual Name) for VADC_G8_QMR0.
* To use register names with standard convension, please use VADC_G8_QMR0.
*/
#define	VADC_G8QMR0	(VADC_G8_QMR0)

/** \brief  2508, Queue 0 Status Register, Group */
#define VADC_G8_QSR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QSR0*)0xF0022508u)

/** Alias (User Manual Name) for VADC_G8_QSR0.
* To use register names with standard convension, please use VADC_G8_QSR0.
*/
#define	VADC_G8QSR0	(VADC_G8_QSR0)

/** \brief  2680, Group Result Control Reg. */
#define VADC_G8_RCR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022680u)

/** Alias (User Manual Name) for VADC_G8_RCR0.
* To use register names with standard convension, please use VADC_G8_RCR0.
*/
#define	VADC_G8RCR0	(VADC_G8_RCR0)

/** \brief  2684, Group Result Control Reg. */
#define VADC_G8_RCR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022684u)

/** Alias (User Manual Name) for VADC_G8_RCR1.
* To use register names with standard convension, please use VADC_G8_RCR1.
*/
#define	VADC_G8RCR1	(VADC_G8_RCR1)

/** \brief  26A8, Group Result Control Reg. */
#define VADC_G8_RCR10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00226A8u)

/** Alias (User Manual Name) for VADC_G8_RCR10.
* To use register names with standard convension, please use VADC_G8_RCR10.
*/
#define	VADC_G8RCR10	(VADC_G8_RCR10)

/** \brief  26AC, Group Result Control Reg. */
#define VADC_G8_RCR11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00226ACu)

/** Alias (User Manual Name) for VADC_G8_RCR11.
* To use register names with standard convension, please use VADC_G8_RCR11.
*/
#define	VADC_G8RCR11	(VADC_G8_RCR11)

/** \brief  26B0, Group Result Control Reg. */
#define VADC_G8_RCR12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00226B0u)

/** Alias (User Manual Name) for VADC_G8_RCR12.
* To use register names with standard convension, please use VADC_G8_RCR12.
*/
#define	VADC_G8RCR12	(VADC_G8_RCR12)

/** \brief  26B4, Group Result Control Reg. */
#define VADC_G8_RCR13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00226B4u)

/** Alias (User Manual Name) for VADC_G8_RCR13.
* To use register names with standard convension, please use VADC_G8_RCR13.
*/
#define	VADC_G8RCR13	(VADC_G8_RCR13)

/** \brief  26B8, Group Result Control Reg. */
#define VADC_G8_RCR14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00226B8u)

/** Alias (User Manual Name) for VADC_G8_RCR14.
* To use register names with standard convension, please use VADC_G8_RCR14.
*/
#define	VADC_G8RCR14	(VADC_G8_RCR14)

/** \brief  26BC, Group Result Control Reg. */
#define VADC_G8_RCR15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00226BCu)

/** Alias (User Manual Name) for VADC_G8_RCR15.
* To use register names with standard convension, please use VADC_G8_RCR15.
*/
#define	VADC_G8RCR15	(VADC_G8_RCR15)

/** \brief  2688, Group Result Control Reg. */
#define VADC_G8_RCR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022688u)

/** Alias (User Manual Name) for VADC_G8_RCR2.
* To use register names with standard convension, please use VADC_G8_RCR2.
*/
#define	VADC_G8RCR2	(VADC_G8_RCR2)

/** \brief  268C, Group Result Control Reg. */
#define VADC_G8_RCR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF002268Cu)

/** Alias (User Manual Name) for VADC_G8_RCR3.
* To use register names with standard convension, please use VADC_G8_RCR3.
*/
#define	VADC_G8RCR3	(VADC_G8_RCR3)

/** \brief  2690, Group Result Control Reg. */
#define VADC_G8_RCR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022690u)

/** Alias (User Manual Name) for VADC_G8_RCR4.
* To use register names with standard convension, please use VADC_G8_RCR4.
*/
#define	VADC_G8RCR4	(VADC_G8_RCR4)

/** \brief  2694, Group Result Control Reg. */
#define VADC_G8_RCR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022694u)

/** Alias (User Manual Name) for VADC_G8_RCR5.
* To use register names with standard convension, please use VADC_G8_RCR5.
*/
#define	VADC_G8RCR5	(VADC_G8_RCR5)

/** \brief  2698, Group Result Control Reg. */
#define VADC_G8_RCR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022698u)

/** Alias (User Manual Name) for VADC_G8_RCR6.
* To use register names with standard convension, please use VADC_G8_RCR6.
*/
#define	VADC_G8RCR6	(VADC_G8_RCR6)

/** \brief  269C, Group Result Control Reg. */
#define VADC_G8_RCR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF002269Cu)

/** Alias (User Manual Name) for VADC_G8_RCR7.
* To use register names with standard convension, please use VADC_G8_RCR7.
*/
#define	VADC_G8RCR7	(VADC_G8_RCR7)

/** \brief  26A0, Group Result Control Reg. */
#define VADC_G8_RCR8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00226A0u)

/** Alias (User Manual Name) for VADC_G8_RCR8.
* To use register names with standard convension, please use VADC_G8_RCR8.
*/
#define	VADC_G8RCR8	(VADC_G8_RCR8)

/** \brief  26A4, Group Result Control Reg. */
#define VADC_G8_RCR9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF00226A4u)

/** Alias (User Manual Name) for VADC_G8_RCR9.
* To use register names with standard convension, please use VADC_G8_RCR9.
*/
#define	VADC_G8RCR9	(VADC_G8_RCR9)

/** \brief  2594, Result Event Flag Clear Register, Group */
#define VADC_G8_REFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFCLR*)0xF0022594u)

/** Alias (User Manual Name) for VADC_G8_REFCLR.
* To use register names with standard convension, please use VADC_G8_REFCLR.
*/
#define	VADC_G8REFCLR	(VADC_G8_REFCLR)

/** \brief  2584, Result Event Flag Register, Group */
#define VADC_G8_REFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFLAG*)0xF0022584u)

/** Alias (User Manual Name) for VADC_G8_REFLAG.
* To use register names with standard convension, please use VADC_G8_REFLAG.
*/
#define	VADC_G8REFLAG	(VADC_G8_REFLAG)

/** \brief  2700, Group Result Register */
#define VADC_G8_RES0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022700u)

/** Alias (User Manual Name) for VADC_G8_RES0.
* To use register names with standard convension, please use VADC_G8_RES0.
*/
#define	VADC_G8RES0	(VADC_G8_RES0)

/** \brief  2704, Group Result Register */
#define VADC_G8_RES1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022704u)

/** Alias (User Manual Name) for VADC_G8_RES1.
* To use register names with standard convension, please use VADC_G8_RES1.
*/
#define	VADC_G8RES1	(VADC_G8_RES1)

/** \brief  2728, Group Result Register */
#define VADC_G8_RES10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022728u)

/** Alias (User Manual Name) for VADC_G8_RES10.
* To use register names with standard convension, please use VADC_G8_RES10.
*/
#define	VADC_G8RES10	(VADC_G8_RES10)

/** \brief  272C, Group Result Register */
#define VADC_G8_RES11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002272Cu)

/** Alias (User Manual Name) for VADC_G8_RES11.
* To use register names with standard convension, please use VADC_G8_RES11.
*/
#define	VADC_G8RES11	(VADC_G8_RES11)

/** \brief  2730, Group Result Register */
#define VADC_G8_RES12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022730u)

/** Alias (User Manual Name) for VADC_G8_RES12.
* To use register names with standard convension, please use VADC_G8_RES12.
*/
#define	VADC_G8RES12	(VADC_G8_RES12)

/** \brief  2734, Group Result Register */
#define VADC_G8_RES13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022734u)

/** Alias (User Manual Name) for VADC_G8_RES13.
* To use register names with standard convension, please use VADC_G8_RES13.
*/
#define	VADC_G8RES13	(VADC_G8_RES13)

/** \brief  2738, Group Result Register */
#define VADC_G8_RES14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022738u)

/** Alias (User Manual Name) for VADC_G8_RES14.
* To use register names with standard convension, please use VADC_G8_RES14.
*/
#define	VADC_G8RES14	(VADC_G8_RES14)

/** \brief  273C, Group Result Register */
#define VADC_G8_RES15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002273Cu)

/** Alias (User Manual Name) for VADC_G8_RES15.
* To use register names with standard convension, please use VADC_G8_RES15.
*/
#define	VADC_G8RES15	(VADC_G8_RES15)

/** \brief  2708, Group Result Register */
#define VADC_G8_RES2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022708u)

/** Alias (User Manual Name) for VADC_G8_RES2.
* To use register names with standard convension, please use VADC_G8_RES2.
*/
#define	VADC_G8RES2	(VADC_G8_RES2)

/** \brief  270C, Group Result Register */
#define VADC_G8_RES3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002270Cu)

/** Alias (User Manual Name) for VADC_G8_RES3.
* To use register names with standard convension, please use VADC_G8_RES3.
*/
#define	VADC_G8RES3	(VADC_G8_RES3)

/** \brief  2710, Group Result Register */
#define VADC_G8_RES4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022710u)

/** Alias (User Manual Name) for VADC_G8_RES4.
* To use register names with standard convension, please use VADC_G8_RES4.
*/
#define	VADC_G8RES4	(VADC_G8_RES4)

/** \brief  2714, Group Result Register */
#define VADC_G8_RES5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022714u)

/** Alias (User Manual Name) for VADC_G8_RES5.
* To use register names with standard convension, please use VADC_G8_RES5.
*/
#define	VADC_G8RES5	(VADC_G8_RES5)

/** \brief  2718, Group Result Register */
#define VADC_G8_RES6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022718u)

/** Alias (User Manual Name) for VADC_G8_RES6.
* To use register names with standard convension, please use VADC_G8_RES6.
*/
#define	VADC_G8RES6	(VADC_G8_RES6)

/** \brief  271C, Group Result Register */
#define VADC_G8_RES7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF002271Cu)

/** Alias (User Manual Name) for VADC_G8_RES7.
* To use register names with standard convension, please use VADC_G8_RES7.
*/
#define	VADC_G8RES7	(VADC_G8_RES7)

/** \brief  2720, Group Result Register */
#define VADC_G8_RES8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022720u)

/** Alias (User Manual Name) for VADC_G8_RES8.
* To use register names with standard convension, please use VADC_G8_RES8.
*/
#define	VADC_G8RES8	(VADC_G8_RES8)

/** \brief  2724, Group Result Register */
#define VADC_G8_RES9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022724u)

/** Alias (User Manual Name) for VADC_G8_RES9.
* To use register names with standard convension, please use VADC_G8_RES9.
*/
#define	VADC_G8RES9	(VADC_G8_RES9)

/** \brief  2780, Group Result Reg., Debug */
#define VADC_G8_RESD0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022780u)

/** Alias (User Manual Name) for VADC_G8_RESD0.
* To use register names with standard convension, please use VADC_G8_RESD0.
*/
#define	VADC_G8RESD0	(VADC_G8_RESD0)

/** \brief  2784, Group Result Reg., Debug */
#define VADC_G8_RESD1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022784u)

/** Alias (User Manual Name) for VADC_G8_RESD1.
* To use register names with standard convension, please use VADC_G8_RESD1.
*/
#define	VADC_G8RESD1	(VADC_G8_RESD1)

/** \brief  27A8, Group Result Reg., Debug */
#define VADC_G8_RESD10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00227A8u)

/** Alias (User Manual Name) for VADC_G8_RESD10.
* To use register names with standard convension, please use VADC_G8_RESD10.
*/
#define	VADC_G8RESD10	(VADC_G8_RESD10)

/** \brief  27AC, Group Result Reg., Debug */
#define VADC_G8_RESD11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00227ACu)

/** Alias (User Manual Name) for VADC_G8_RESD11.
* To use register names with standard convension, please use VADC_G8_RESD11.
*/
#define	VADC_G8RESD11	(VADC_G8_RESD11)

/** \brief  27B0, Group Result Reg., Debug */
#define VADC_G8_RESD12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00227B0u)

/** Alias (User Manual Name) for VADC_G8_RESD12.
* To use register names with standard convension, please use VADC_G8_RESD12.
*/
#define	VADC_G8RESD12	(VADC_G8_RESD12)

/** \brief  27B4, Group Result Reg., Debug */
#define VADC_G8_RESD13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00227B4u)

/** Alias (User Manual Name) for VADC_G8_RESD13.
* To use register names with standard convension, please use VADC_G8_RESD13.
*/
#define	VADC_G8RESD13	(VADC_G8_RESD13)

/** \brief  27B8, Group Result Reg., Debug */
#define VADC_G8_RESD14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00227B8u)

/** Alias (User Manual Name) for VADC_G8_RESD14.
* To use register names with standard convension, please use VADC_G8_RESD14.
*/
#define	VADC_G8RESD14	(VADC_G8_RESD14)

/** \brief  27BC, Group Result Reg., Debug */
#define VADC_G8_RESD15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00227BCu)

/** Alias (User Manual Name) for VADC_G8_RESD15.
* To use register names with standard convension, please use VADC_G8_RESD15.
*/
#define	VADC_G8RESD15	(VADC_G8_RESD15)

/** \brief  2788, Group Result Reg., Debug */
#define VADC_G8_RESD2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022788u)

/** Alias (User Manual Name) for VADC_G8_RESD2.
* To use register names with standard convension, please use VADC_G8_RESD2.
*/
#define	VADC_G8RESD2	(VADC_G8_RESD2)

/** \brief  278C, Group Result Reg., Debug */
#define VADC_G8_RESD3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF002278Cu)

/** Alias (User Manual Name) for VADC_G8_RESD3.
* To use register names with standard convension, please use VADC_G8_RESD3.
*/
#define	VADC_G8RESD3	(VADC_G8_RESD3)

/** \brief  2790, Group Result Reg., Debug */
#define VADC_G8_RESD4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022790u)

/** Alias (User Manual Name) for VADC_G8_RESD4.
* To use register names with standard convension, please use VADC_G8_RESD4.
*/
#define	VADC_G8RESD4	(VADC_G8_RESD4)

/** \brief  2794, Group Result Reg., Debug */
#define VADC_G8_RESD5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022794u)

/** Alias (User Manual Name) for VADC_G8_RESD5.
* To use register names with standard convension, please use VADC_G8_RESD5.
*/
#define	VADC_G8RESD5	(VADC_G8_RESD5)

/** \brief  2798, Group Result Reg., Debug */
#define VADC_G8_RESD6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022798u)

/** Alias (User Manual Name) for VADC_G8_RESD6.
* To use register names with standard convension, please use VADC_G8_RESD6.
*/
#define	VADC_G8RESD6	(VADC_G8_RESD6)

/** \brief  279C, Group Result Reg., Debug */
#define VADC_G8_RESD7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF002279Cu)

/** Alias (User Manual Name) for VADC_G8_RESD7.
* To use register names with standard convension, please use VADC_G8_RESD7.
*/
#define	VADC_G8RESD7	(VADC_G8_RESD7)

/** \brief  27A0, Group Result Reg., Debug */
#define VADC_G8_RESD8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00227A0u)

/** Alias (User Manual Name) for VADC_G8_RESD8.
* To use register names with standard convension, please use VADC_G8_RESD8.
*/
#define	VADC_G8RESD8	(VADC_G8_RESD8)

/** \brief  27A4, Group Result Reg., Debug */
#define VADC_G8_RESD9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF00227A4u)

/** Alias (User Manual Name) for VADC_G8_RESD9.
* To use register names with standard convension, please use VADC_G8_RESD9.
*/
#define	VADC_G8RESD9	(VADC_G8_RESD9)

/** \brief  25B0, Result Event Node Pointer Register 0, Group */
#define VADC_G8_REVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP0*)0xF00225B0u)

/** Alias (User Manual Name) for VADC_G8_REVNP0.
* To use register names with standard convension, please use VADC_G8_REVNP0.
*/
#define	VADC_G8REVNP0	(VADC_G8_REVNP0)

/** \brief  25B4, Result Event Node Pointer Register 1, Group */
#define VADC_G8_REVNP1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP1*)0xF00225B4u)

/** Alias (User Manual Name) for VADC_G8_REVNP1.
* To use register names with standard convension, please use VADC_G8_REVNP1.
*/
#define	VADC_G8REVNP1	(VADC_G8_REVNP1)

/** \brief  248C, Result Assignment Register, Group */
#define VADC_G8_RRASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RRASS*)0xF002248Cu)

/** Alias (User Manual Name) for VADC_G8_RRASS.
* To use register names with standard convension, please use VADC_G8_RRASS.
*/
#define	VADC_G8RRASS	(VADC_G8_RRASS)

/** \brief  2598, Source Event Flag Clear Register, Group */
#define VADC_G8_SEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFCLR*)0xF0022598u)

/** Alias (User Manual Name) for VADC_G8_SEFCLR.
* To use register names with standard convension, please use VADC_G8_SEFCLR.
*/
#define	VADC_G8SEFCLR	(VADC_G8_SEFCLR)

/** \brief  2588, Source Event Flag Register, Group */
#define VADC_G8_SEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFLAG*)0xF0022588u)

/** Alias (User Manual Name) for VADC_G8_SEFLAG.
* To use register names with standard convension, please use VADC_G8_SEFLAG.
*/
#define	VADC_G8SEFLAG	(VADC_G8_SEFLAG)

/** \brief  25C0, Source Event Node Pointer Register, Group */
#define VADC_G8_SEVNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEVNP*)0xF00225C0u)

/** Alias (User Manual Name) for VADC_G8_SEVNP.
* To use register names with standard convension, please use VADC_G8_SEVNP.
*/
#define	VADC_G8SEVNP	(VADC_G8_SEVNP)

/** \brief  25C8, Service Request Software Activation Trigger, Group */
#define VADC_G8_SRACT /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SRACT*)0xF00225C8u)

/** Alias (User Manual Name) for VADC_G8_SRACT.
* To use register names with standard convension, please use VADC_G8_SRACT.
*/
#define	VADC_G8SRACT	(VADC_G8_SRACT)

/** \brief  24C0, Synchronization Control Register, Group */
#define VADC_G8_SYNCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SYNCTR*)0xF00224C0u)

/** Alias (User Manual Name) for VADC_G8_SYNCTR.
* To use register names with standard convension, please use VADC_G8_SYNCTR.
*/
#define	VADC_G8SYNCTR	(VADC_G8_SYNCTR)

/** \brief  25F8, Valid Flag Register, Group */
#define VADC_G8_VFR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_VFR*)0xF00225F8u)

/** Alias (User Manual Name) for VADC_G8_VFR.
* To use register names with standard convension, please use VADC_G8_VFR.
*/
#define	VADC_G8VFR	(VADC_G8_VFR)

/** \brief  28B0, Alias Register, Group */
#define VADC_G9_ALIAS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ALIAS*)0xF00228B0u)

/** Alias (User Manual Name) for VADC_G9_ALIAS.
* To use register names with standard convension, please use VADC_G9_ALIAS.
*/
#define	VADC_G9ALIAS	(VADC_G9_ALIAS)

/** \brief  2880, Arbitration Configuration Register, Group */
#define VADC_G9_ARBCFG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBCFG*)0xF0022880u)

/** Alias (User Manual Name) for VADC_G9_ARBCFG.
* To use register names with standard convension, please use VADC_G9_ARBCFG.
*/
#define	VADC_G9ARBCFG	(VADC_G9_ARBCFG)

/** \brief  2884, Arbitration Priority Register, Group */
#define VADC_G9_ARBPR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ARBPR*)0xF0022884u)

/** Alias (User Manual Name) for VADC_G9_ARBPR.
* To use register names with standard convension, please use VADC_G9_ARBPR.
*/
#define	VADC_G9ARBPR	(VADC_G9_ARBPR)

/** \brief  2920, Autoscan Source Control Register, Group */
#define VADC_G9_ASCTRL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASCTRL*)0xF0022920u)

/** Alias (User Manual Name) for VADC_G9_ASCTRL.
* To use register names with standard convension, please use VADC_G9_ASCTRL.
*/
#define	VADC_G9ASCTRL	(VADC_G9_ASCTRL)

/** \brief  2924, Autoscan Source Mode Register, Group */
#define VADC_G9_ASMR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASMR*)0xF0022924u)

/** Alias (User Manual Name) for VADC_G9_ASMR.
* To use register names with standard convension, please use VADC_G9_ASMR.
*/
#define	VADC_G9ASMR	(VADC_G9_ASMR)

/** \brief  292C, Autoscan Source Pending Register, Group */
#define VADC_G9_ASPND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASPND*)0xF002292Cu)

/** Alias (User Manual Name) for VADC_G9_ASPND.
* To use register names with standard convension, please use VADC_G9_ASPND.
*/
#define	VADC_G9ASPND	(VADC_G9_ASPND)

/** \brief  2928, Autoscan Source Channel Select Register, Group */
#define VADC_G9_ASSEL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_ASSEL*)0xF0022928u)

/** Alias (User Manual Name) for VADC_G9_ASSEL.
* To use register names with standard convension, please use VADC_G9_ASSEL.
*/
#define	VADC_G9ASSEL	(VADC_G9_ASSEL)

/** \brief  28C8, Boundary Flag Register, Group */
#define VADC_G9_BFL /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFL*)0xF00228C8u)

/** Alias (User Manual Name) for VADC_G9_BFL.
* To use register names with standard convension, please use VADC_G9_BFL.
*/
#define	VADC_G9BFL	(VADC_G9_BFL)

/** \brief  28D0, Boundary Flag Control Register, Group */
#define VADC_G9_BFLC /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLC*)0xF00228D0u)

/** Alias (User Manual Name) for VADC_G9_BFLC.
* To use register names with standard convension, please use VADC_G9_BFLC.
*/
#define	VADC_G9BFLC	(VADC_G9_BFLC)

/** \brief  28D4, Boundary Flag Node Pointer Register, Group */
#define VADC_G9_BFLNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLNP*)0xF00228D4u)

/** Alias (User Manual Name) for VADC_G9_BFLNP.
* To use register names with standard convension, please use VADC_G9_BFLNP.
*/
#define	VADC_G9BFLNP	(VADC_G9_BFLNP)

/** \brief  28CC, Boundary Flag Software Register, Group */
#define VADC_G9_BFLS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BFLS*)0xF00228CCu)

/** Alias (User Manual Name) for VADC_G9_BFLS.
* To use register names with standard convension, please use VADC_G9_BFLS.
*/
#define	VADC_G9BFLS	(VADC_G9_BFLS)

/** \brief  28B8, Boundary Select Register, Group */
#define VADC_G9_BOUND /*lint --e(923)*/ (*(volatile Ifx_VADC_G_BOUND*)0xF00228B8u)

/** Alias (User Manual Name) for VADC_G9_BOUND.
* To use register names with standard convension, please use VADC_G9_BOUND.
*/
#define	VADC_G9BOUND	(VADC_G9_BOUND)

/** \brief  2990, Channel Event Flag Clear Register, Group */
#define VADC_G9_CEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFCLR*)0xF0022990u)

/** Alias (User Manual Name) for VADC_G9_CEFCLR.
* To use register names with standard convension, please use VADC_G9_CEFCLR.
*/
#define	VADC_G9CEFCLR	(VADC_G9_CEFCLR)

/** \brief  2980, Channel Event Flag Register, Group */
#define VADC_G9_CEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEFLAG*)0xF0022980u)

/** Alias (User Manual Name) for VADC_G9_CEFLAG.
* To use register names with standard convension, please use VADC_G9_CEFLAG.
*/
#define	VADC_G9CEFLAG	(VADC_G9_CEFLAG)

/** \brief  29A0, Channel Event Node Pointer Register 0, Group */
#define VADC_G9_CEVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CEVNP0*)0xF00229A0u)

/** Alias (User Manual Name) for VADC_G9_CEVNP0.
* To use register names with standard convension, please use VADC_G9_CEVNP0.
*/
#define	VADC_G9CEVNP0	(VADC_G9_CEVNP0)

/** \brief  2888, Channel Assignment Register, Group */
#define VADC_G9_CHASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHASS*)0xF0022888u)

/** Alias (User Manual Name) for VADC_G9_CHASS.
* To use register names with standard convension, please use VADC_G9_CHASS.
*/
#define	VADC_G9CHASS	(VADC_G9_CHASS)

/** \brief  2A00, Group, Channel Ctrl. Reg. */
#define VADC_G9_CHCTR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022A00u)

/** Alias (User Manual Name) for VADC_G9_CHCTR0.
* To use register names with standard convension, please use VADC_G9_CHCTR0.
*/
#define	VADC_G9CHCTR0	(VADC_G9_CHCTR0)

/** \brief  2A04, Group, Channel Ctrl. Reg. */
#define VADC_G9_CHCTR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022A04u)

/** Alias (User Manual Name) for VADC_G9_CHCTR1.
* To use register names with standard convension, please use VADC_G9_CHCTR1.
*/
#define	VADC_G9CHCTR1	(VADC_G9_CHCTR1)

/** \brief  2A08, Group, Channel Ctrl. Reg. */
#define VADC_G9_CHCTR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022A08u)

/** Alias (User Manual Name) for VADC_G9_CHCTR2.
* To use register names with standard convension, please use VADC_G9_CHCTR2.
*/
#define	VADC_G9CHCTR2	(VADC_G9_CHCTR2)

/** \brief  2A0C, Group, Channel Ctrl. Reg. */
#define VADC_G9_CHCTR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022A0Cu)

/** Alias (User Manual Name) for VADC_G9_CHCTR3.
* To use register names with standard convension, please use VADC_G9_CHCTR3.
*/
#define	VADC_G9CHCTR3	(VADC_G9_CHCTR3)

/** \brief  2A10, Group, Channel Ctrl. Reg. */
#define VADC_G9_CHCTR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022A10u)

/** Alias (User Manual Name) for VADC_G9_CHCTR4.
* To use register names with standard convension, please use VADC_G9_CHCTR4.
*/
#define	VADC_G9CHCTR4	(VADC_G9_CHCTR4)

/** \brief  2A14, Group, Channel Ctrl. Reg. */
#define VADC_G9_CHCTR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022A14u)

/** Alias (User Manual Name) for VADC_G9_CHCTR5.
* To use register names with standard convension, please use VADC_G9_CHCTR5.
*/
#define	VADC_G9CHCTR5	(VADC_G9_CHCTR5)

/** \brief  2A18, Group, Channel Ctrl. Reg. */
#define VADC_G9_CHCTR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022A18u)

/** Alias (User Manual Name) for VADC_G9_CHCTR6.
* To use register names with standard convension, please use VADC_G9_CHCTR6.
*/
#define	VADC_G9CHCTR6	(VADC_G9_CHCTR6)

/** \brief  2A1C, Group, Channel Ctrl. Reg. */
#define VADC_G9_CHCTR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_CHCTR*)0xF0022A1Cu)

/** Alias (User Manual Name) for VADC_G9_CHCTR7.
* To use register names with standard convension, please use VADC_G9_CHCTR7.
*/
#define	VADC_G9CHCTR7	(VADC_G9_CHCTR7)

/** \brief  29F0, External Multiplexer Control Register, Group x */
#define VADC_G9_EMUXCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_EMUXCTR*)0xF00229F0u)

/** Alias (User Manual Name) for VADC_G9_EMUXCTR.
* To use register names with standard convension, please use VADC_G9_EMUXCTR.
*/
#define	VADC_G9EMUXCTR	(VADC_G9_EMUXCTR)

/** \brief  28A0, Input Class Register */
#define VADC_G9_ICLASS0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00228A0u)

/** Alias (User Manual Name) for VADC_G9_ICLASS0.
* To use register names with standard convension, please use VADC_G9_ICLASS0.
*/
#define	VADC_G9ICLASS0	(VADC_G9_ICLASS0)

/** \brief  28A4, Input Class Register */
#define VADC_G9_ICLASS1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00228A4u)

/** Alias (User Manual Name) for VADC_G9_ICLASS1.
* To use register names with standard convension, please use VADC_G9_ICLASS1.
*/
#define	VADC_G9ICLASS1	(VADC_G9_ICLASS1)

/** \brief  290C, Queue 0 Register 0, Group */
#define VADC_G9_Q0R0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_Q0R0*)0xF002290Cu)

/** Alias (User Manual Name) for VADC_G9_Q0R0.
* To use register names with standard convension, please use VADC_G9_Q0R0.
*/
#define	VADC_G9Q0R0	(VADC_G9_Q0R0)

/** \brief  2910, Queue 0 Input Register, Group */
#define VADC_G9_QBUR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QBUR0*)0xF0022910u)

/** Alias (User Manual Name) for VADC_G9_QBUR0.
* To use register names with standard convension, please use VADC_G9_QBUR0.
*/
#define	VADC_G9QBUR0	(VADC_G9_QBUR0)

/** \brief  2900, Queue 0 Source Control Register, Group */
#define VADC_G9_QCTRL0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QCTRL0*)0xF0022900u)

/** Alias (User Manual Name) for VADC_G9_QCTRL0.
* To use register names with standard convension, please use VADC_G9_QCTRL0.
*/
#define	VADC_G9QCTRL0	(VADC_G9_QCTRL0)

/** \brief  2910, Queue 0 Input Register, Group */
#define VADC_G9_QINR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QINR0*)0xF0022910u)

/** Alias (User Manual Name) for VADC_G9_QINR0.
* To use register names with standard convension, please use VADC_G9_QINR0.
*/
#define	VADC_G9QINR0	(VADC_G9_QINR0)

/** \brief  2904, Queue 0 Mode Register, Group */
#define VADC_G9_QMR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QMR0*)0xF0022904u)

/** Alias (User Manual Name) for VADC_G9_QMR0.
* To use register names with standard convension, please use VADC_G9_QMR0.
*/
#define	VADC_G9QMR0	(VADC_G9_QMR0)

/** \brief  2908, Queue 0 Status Register, Group */
#define VADC_G9_QSR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_QSR0*)0xF0022908u)

/** Alias (User Manual Name) for VADC_G9_QSR0.
* To use register names with standard convension, please use VADC_G9_QSR0.
*/
#define	VADC_G9QSR0	(VADC_G9_QSR0)

/** \brief  2A80, Group Result Control Reg. */
#define VADC_G9_RCR0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022A80u)

/** Alias (User Manual Name) for VADC_G9_RCR0.
* To use register names with standard convension, please use VADC_G9_RCR0.
*/
#define	VADC_G9RCR0	(VADC_G9_RCR0)

/** \brief  2A84, Group Result Control Reg. */
#define VADC_G9_RCR1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022A84u)

/** Alias (User Manual Name) for VADC_G9_RCR1.
* To use register names with standard convension, please use VADC_G9_RCR1.
*/
#define	VADC_G9RCR1	(VADC_G9_RCR1)

/** \brief  2AA8, Group Result Control Reg. */
#define VADC_G9_RCR10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022AA8u)

/** Alias (User Manual Name) for VADC_G9_RCR10.
* To use register names with standard convension, please use VADC_G9_RCR10.
*/
#define	VADC_G9RCR10	(VADC_G9_RCR10)

/** \brief  2AAC, Group Result Control Reg. */
#define VADC_G9_RCR11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022AACu)

/** Alias (User Manual Name) for VADC_G9_RCR11.
* To use register names with standard convension, please use VADC_G9_RCR11.
*/
#define	VADC_G9RCR11	(VADC_G9_RCR11)

/** \brief  2AB0, Group Result Control Reg. */
#define VADC_G9_RCR12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022AB0u)

/** Alias (User Manual Name) for VADC_G9_RCR12.
* To use register names with standard convension, please use VADC_G9_RCR12.
*/
#define	VADC_G9RCR12	(VADC_G9_RCR12)

/** \brief  2AB4, Group Result Control Reg. */
#define VADC_G9_RCR13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022AB4u)

/** Alias (User Manual Name) for VADC_G9_RCR13.
* To use register names with standard convension, please use VADC_G9_RCR13.
*/
#define	VADC_G9RCR13	(VADC_G9_RCR13)

/** \brief  2AB8, Group Result Control Reg. */
#define VADC_G9_RCR14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022AB8u)

/** Alias (User Manual Name) for VADC_G9_RCR14.
* To use register names with standard convension, please use VADC_G9_RCR14.
*/
#define	VADC_G9RCR14	(VADC_G9_RCR14)

/** \brief  2ABC, Group Result Control Reg. */
#define VADC_G9_RCR15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022ABCu)

/** Alias (User Manual Name) for VADC_G9_RCR15.
* To use register names with standard convension, please use VADC_G9_RCR15.
*/
#define	VADC_G9RCR15	(VADC_G9_RCR15)

/** \brief  2A88, Group Result Control Reg. */
#define VADC_G9_RCR2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022A88u)

/** Alias (User Manual Name) for VADC_G9_RCR2.
* To use register names with standard convension, please use VADC_G9_RCR2.
*/
#define	VADC_G9RCR2	(VADC_G9_RCR2)

/** \brief  2A8C, Group Result Control Reg. */
#define VADC_G9_RCR3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022A8Cu)

/** Alias (User Manual Name) for VADC_G9_RCR3.
* To use register names with standard convension, please use VADC_G9_RCR3.
*/
#define	VADC_G9RCR3	(VADC_G9_RCR3)

/** \brief  2A90, Group Result Control Reg. */
#define VADC_G9_RCR4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022A90u)

/** Alias (User Manual Name) for VADC_G9_RCR4.
* To use register names with standard convension, please use VADC_G9_RCR4.
*/
#define	VADC_G9RCR4	(VADC_G9_RCR4)

/** \brief  2A94, Group Result Control Reg. */
#define VADC_G9_RCR5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022A94u)

/** Alias (User Manual Name) for VADC_G9_RCR5.
* To use register names with standard convension, please use VADC_G9_RCR5.
*/
#define	VADC_G9RCR5	(VADC_G9_RCR5)

/** \brief  2A98, Group Result Control Reg. */
#define VADC_G9_RCR6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022A98u)

/** Alias (User Manual Name) for VADC_G9_RCR6.
* To use register names with standard convension, please use VADC_G9_RCR6.
*/
#define	VADC_G9RCR6	(VADC_G9_RCR6)

/** \brief  2A9C, Group Result Control Reg. */
#define VADC_G9_RCR7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022A9Cu)

/** Alias (User Manual Name) for VADC_G9_RCR7.
* To use register names with standard convension, please use VADC_G9_RCR7.
*/
#define	VADC_G9RCR7	(VADC_G9_RCR7)

/** \brief  2AA0, Group Result Control Reg. */
#define VADC_G9_RCR8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022AA0u)

/** Alias (User Manual Name) for VADC_G9_RCR8.
* To use register names with standard convension, please use VADC_G9_RCR8.
*/
#define	VADC_G9RCR8	(VADC_G9_RCR8)

/** \brief  2AA4, Group Result Control Reg. */
#define VADC_G9_RCR9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RCR*)0xF0022AA4u)

/** Alias (User Manual Name) for VADC_G9_RCR9.
* To use register names with standard convension, please use VADC_G9_RCR9.
*/
#define	VADC_G9RCR9	(VADC_G9_RCR9)

/** \brief  2994, Result Event Flag Clear Register, Group */
#define VADC_G9_REFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFCLR*)0xF0022994u)

/** Alias (User Manual Name) for VADC_G9_REFCLR.
* To use register names with standard convension, please use VADC_G9_REFCLR.
*/
#define	VADC_G9REFCLR	(VADC_G9_REFCLR)

/** \brief  2984, Result Event Flag Register, Group */
#define VADC_G9_REFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REFLAG*)0xF0022984u)

/** Alias (User Manual Name) for VADC_G9_REFLAG.
* To use register names with standard convension, please use VADC_G9_REFLAG.
*/
#define	VADC_G9REFLAG	(VADC_G9_REFLAG)

/** \brief  2B00, Group Result Register */
#define VADC_G9_RES0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B00u)

/** Alias (User Manual Name) for VADC_G9_RES0.
* To use register names with standard convension, please use VADC_G9_RES0.
*/
#define	VADC_G9RES0	(VADC_G9_RES0)

/** \brief  2B04, Group Result Register */
#define VADC_G9_RES1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B04u)

/** Alias (User Manual Name) for VADC_G9_RES1.
* To use register names with standard convension, please use VADC_G9_RES1.
*/
#define	VADC_G9RES1	(VADC_G9_RES1)

/** \brief  2B28, Group Result Register */
#define VADC_G9_RES10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B28u)

/** Alias (User Manual Name) for VADC_G9_RES10.
* To use register names with standard convension, please use VADC_G9_RES10.
*/
#define	VADC_G9RES10	(VADC_G9_RES10)

/** \brief  2B2C, Group Result Register */
#define VADC_G9_RES11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B2Cu)

/** Alias (User Manual Name) for VADC_G9_RES11.
* To use register names with standard convension, please use VADC_G9_RES11.
*/
#define	VADC_G9RES11	(VADC_G9_RES11)

/** \brief  2B30, Group Result Register */
#define VADC_G9_RES12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B30u)

/** Alias (User Manual Name) for VADC_G9_RES12.
* To use register names with standard convension, please use VADC_G9_RES12.
*/
#define	VADC_G9RES12	(VADC_G9_RES12)

/** \brief  2B34, Group Result Register */
#define VADC_G9_RES13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B34u)

/** Alias (User Manual Name) for VADC_G9_RES13.
* To use register names with standard convension, please use VADC_G9_RES13.
*/
#define	VADC_G9RES13	(VADC_G9_RES13)

/** \brief  2B38, Group Result Register */
#define VADC_G9_RES14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B38u)

/** Alias (User Manual Name) for VADC_G9_RES14.
* To use register names with standard convension, please use VADC_G9_RES14.
*/
#define	VADC_G9RES14	(VADC_G9_RES14)

/** \brief  2B3C, Group Result Register */
#define VADC_G9_RES15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B3Cu)

/** Alias (User Manual Name) for VADC_G9_RES15.
* To use register names with standard convension, please use VADC_G9_RES15.
*/
#define	VADC_G9RES15	(VADC_G9_RES15)

/** \brief  2B08, Group Result Register */
#define VADC_G9_RES2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B08u)

/** Alias (User Manual Name) for VADC_G9_RES2.
* To use register names with standard convension, please use VADC_G9_RES2.
*/
#define	VADC_G9RES2	(VADC_G9_RES2)

/** \brief  2B0C, Group Result Register */
#define VADC_G9_RES3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B0Cu)

/** Alias (User Manual Name) for VADC_G9_RES3.
* To use register names with standard convension, please use VADC_G9_RES3.
*/
#define	VADC_G9RES3	(VADC_G9_RES3)

/** \brief  2B10, Group Result Register */
#define VADC_G9_RES4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B10u)

/** Alias (User Manual Name) for VADC_G9_RES4.
* To use register names with standard convension, please use VADC_G9_RES4.
*/
#define	VADC_G9RES4	(VADC_G9_RES4)

/** \brief  2B14, Group Result Register */
#define VADC_G9_RES5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B14u)

/** Alias (User Manual Name) for VADC_G9_RES5.
* To use register names with standard convension, please use VADC_G9_RES5.
*/
#define	VADC_G9RES5	(VADC_G9_RES5)

/** \brief  2B18, Group Result Register */
#define VADC_G9_RES6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B18u)

/** Alias (User Manual Name) for VADC_G9_RES6.
* To use register names with standard convension, please use VADC_G9_RES6.
*/
#define	VADC_G9RES6	(VADC_G9_RES6)

/** \brief  2B1C, Group Result Register */
#define VADC_G9_RES7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B1Cu)

/** Alias (User Manual Name) for VADC_G9_RES7.
* To use register names with standard convension, please use VADC_G9_RES7.
*/
#define	VADC_G9RES7	(VADC_G9_RES7)

/** \brief  2B20, Group Result Register */
#define VADC_G9_RES8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B20u)

/** Alias (User Manual Name) for VADC_G9_RES8.
* To use register names with standard convension, please use VADC_G9_RES8.
*/
#define	VADC_G9RES8	(VADC_G9_RES8)

/** \brief  2B24, Group Result Register */
#define VADC_G9_RES9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RES*)0xF0022B24u)

/** Alias (User Manual Name) for VADC_G9_RES9.
* To use register names with standard convension, please use VADC_G9_RES9.
*/
#define	VADC_G9RES9	(VADC_G9_RES9)

/** \brief  2B80, Group Result Reg., Debug */
#define VADC_G9_RESD0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022B80u)

/** Alias (User Manual Name) for VADC_G9_RESD0.
* To use register names with standard convension, please use VADC_G9_RESD0.
*/
#define	VADC_G9RESD0	(VADC_G9_RESD0)

/** \brief  2B84, Group Result Reg., Debug */
#define VADC_G9_RESD1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022B84u)

/** Alias (User Manual Name) for VADC_G9_RESD1.
* To use register names with standard convension, please use VADC_G9_RESD1.
*/
#define	VADC_G9RESD1	(VADC_G9_RESD1)

/** \brief  2BA8, Group Result Reg., Debug */
#define VADC_G9_RESD10 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022BA8u)

/** Alias (User Manual Name) for VADC_G9_RESD10.
* To use register names with standard convension, please use VADC_G9_RESD10.
*/
#define	VADC_G9RESD10	(VADC_G9_RESD10)

/** \brief  2BAC, Group Result Reg., Debug */
#define VADC_G9_RESD11 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022BACu)

/** Alias (User Manual Name) for VADC_G9_RESD11.
* To use register names with standard convension, please use VADC_G9_RESD11.
*/
#define	VADC_G9RESD11	(VADC_G9_RESD11)

/** \brief  2BB0, Group Result Reg., Debug */
#define VADC_G9_RESD12 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022BB0u)

/** Alias (User Manual Name) for VADC_G9_RESD12.
* To use register names with standard convension, please use VADC_G9_RESD12.
*/
#define	VADC_G9RESD12	(VADC_G9_RESD12)

/** \brief  2BB4, Group Result Reg., Debug */
#define VADC_G9_RESD13 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022BB4u)

/** Alias (User Manual Name) for VADC_G9_RESD13.
* To use register names with standard convension, please use VADC_G9_RESD13.
*/
#define	VADC_G9RESD13	(VADC_G9_RESD13)

/** \brief  2BB8, Group Result Reg., Debug */
#define VADC_G9_RESD14 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022BB8u)

/** Alias (User Manual Name) for VADC_G9_RESD14.
* To use register names with standard convension, please use VADC_G9_RESD14.
*/
#define	VADC_G9RESD14	(VADC_G9_RESD14)

/** \brief  2BBC, Group Result Reg., Debug */
#define VADC_G9_RESD15 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022BBCu)

/** Alias (User Manual Name) for VADC_G9_RESD15.
* To use register names with standard convension, please use VADC_G9_RESD15.
*/
#define	VADC_G9RESD15	(VADC_G9_RESD15)

/** \brief  2B88, Group Result Reg., Debug */
#define VADC_G9_RESD2 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022B88u)

/** Alias (User Manual Name) for VADC_G9_RESD2.
* To use register names with standard convension, please use VADC_G9_RESD2.
*/
#define	VADC_G9RESD2	(VADC_G9_RESD2)

/** \brief  2B8C, Group Result Reg., Debug */
#define VADC_G9_RESD3 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022B8Cu)

/** Alias (User Manual Name) for VADC_G9_RESD3.
* To use register names with standard convension, please use VADC_G9_RESD3.
*/
#define	VADC_G9RESD3	(VADC_G9_RESD3)

/** \brief  2B90, Group Result Reg., Debug */
#define VADC_G9_RESD4 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022B90u)

/** Alias (User Manual Name) for VADC_G9_RESD4.
* To use register names with standard convension, please use VADC_G9_RESD4.
*/
#define	VADC_G9RESD4	(VADC_G9_RESD4)

/** \brief  2B94, Group Result Reg., Debug */
#define VADC_G9_RESD5 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022B94u)

/** Alias (User Manual Name) for VADC_G9_RESD5.
* To use register names with standard convension, please use VADC_G9_RESD5.
*/
#define	VADC_G9RESD5	(VADC_G9_RESD5)

/** \brief  2B98, Group Result Reg., Debug */
#define VADC_G9_RESD6 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022B98u)

/** Alias (User Manual Name) for VADC_G9_RESD6.
* To use register names with standard convension, please use VADC_G9_RESD6.
*/
#define	VADC_G9RESD6	(VADC_G9_RESD6)

/** \brief  2B9C, Group Result Reg., Debug */
#define VADC_G9_RESD7 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022B9Cu)

/** Alias (User Manual Name) for VADC_G9_RESD7.
* To use register names with standard convension, please use VADC_G9_RESD7.
*/
#define	VADC_G9RESD7	(VADC_G9_RESD7)

/** \brief  2BA0, Group Result Reg., Debug */
#define VADC_G9_RESD8 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022BA0u)

/** Alias (User Manual Name) for VADC_G9_RESD8.
* To use register names with standard convension, please use VADC_G9_RESD8.
*/
#define	VADC_G9RESD8	(VADC_G9_RESD8)

/** \brief  2BA4, Group Result Reg., Debug */
#define VADC_G9_RESD9 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RESD*)0xF0022BA4u)

/** Alias (User Manual Name) for VADC_G9_RESD9.
* To use register names with standard convension, please use VADC_G9_RESD9.
*/
#define	VADC_G9RESD9	(VADC_G9_RESD9)

/** \brief  29B0, Result Event Node Pointer Register 0, Group */
#define VADC_G9_REVNP0 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP0*)0xF00229B0u)

/** Alias (User Manual Name) for VADC_G9_REVNP0.
* To use register names with standard convension, please use VADC_G9_REVNP0.
*/
#define	VADC_G9REVNP0	(VADC_G9_REVNP0)

/** \brief  29B4, Result Event Node Pointer Register 1, Group */
#define VADC_G9_REVNP1 /*lint --e(923)*/ (*(volatile Ifx_VADC_G_REVNP1*)0xF00229B4u)

/** Alias (User Manual Name) for VADC_G9_REVNP1.
* To use register names with standard convension, please use VADC_G9_REVNP1.
*/
#define	VADC_G9REVNP1	(VADC_G9_REVNP1)

/** \brief  288C, Result Assignment Register, Group */
#define VADC_G9_RRASS /*lint --e(923)*/ (*(volatile Ifx_VADC_G_RRASS*)0xF002288Cu)

/** Alias (User Manual Name) for VADC_G9_RRASS.
* To use register names with standard convension, please use VADC_G9_RRASS.
*/
#define	VADC_G9RRASS	(VADC_G9_RRASS)

/** \brief  2998, Source Event Flag Clear Register, Group */
#define VADC_G9_SEFCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFCLR*)0xF0022998u)

/** Alias (User Manual Name) for VADC_G9_SEFCLR.
* To use register names with standard convension, please use VADC_G9_SEFCLR.
*/
#define	VADC_G9SEFCLR	(VADC_G9_SEFCLR)

/** \brief  2988, Source Event Flag Register, Group */
#define VADC_G9_SEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEFLAG*)0xF0022988u)

/** Alias (User Manual Name) for VADC_G9_SEFLAG.
* To use register names with standard convension, please use VADC_G9_SEFLAG.
*/
#define	VADC_G9SEFLAG	(VADC_G9_SEFLAG)

/** \brief  29C0, Source Event Node Pointer Register, Group */
#define VADC_G9_SEVNP /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SEVNP*)0xF00229C0u)

/** Alias (User Manual Name) for VADC_G9_SEVNP.
* To use register names with standard convension, please use VADC_G9_SEVNP.
*/
#define	VADC_G9SEVNP	(VADC_G9_SEVNP)

/** \brief  29C8, Service Request Software Activation Trigger, Group */
#define VADC_G9_SRACT /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SRACT*)0xF00229C8u)

/** Alias (User Manual Name) for VADC_G9_SRACT.
* To use register names with standard convension, please use VADC_G9_SRACT.
*/
#define	VADC_G9SRACT	(VADC_G9_SRACT)

/** \brief  28C0, Synchronization Control Register, Group */
#define VADC_G9_SYNCTR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_SYNCTR*)0xF00228C0u)

/** Alias (User Manual Name) for VADC_G9_SYNCTR.
* To use register names with standard convension, please use VADC_G9_SYNCTR.
*/
#define	VADC_G9SYNCTR	(VADC_G9_SYNCTR)

/** \brief  29F8, Valid Flag Register, Group */
#define VADC_G9_VFR /*lint --e(923)*/ (*(volatile Ifx_VADC_G_VFR*)0xF00229F8u)

/** Alias (User Manual Name) for VADC_G9_VFR.
* To use register names with standard convension, please use VADC_G9_VFR.
*/
#define	VADC_G9VFR	(VADC_G9_VFR)

/** \brief  B8, Global Boundary Select Register */
#define VADC_GLOBBOUND /*lint --e(923)*/ (*(volatile Ifx_VADC_GLOBBOUND*)0xF00200B8u)

/** \brief  80, Global Configuration Register */
#define VADC_GLOBCFG /*lint --e(923)*/ (*(volatile Ifx_VADC_GLOBCFG*)0xF0020080u)

/** \brief  E0, Global Event Flag Register */
#define VADC_GLOBEFLAG /*lint --e(923)*/ (*(volatile Ifx_VADC_GLOBEFLAG*)0xF00200E0u)

/** \brief  140, Global Event Node Pointer Register */
#define VADC_GLOBEVNP /*lint --e(923)*/ (*(volatile Ifx_VADC_GLOBEVNP*)0xF0020140u)

/** \brief  A0, Input Class Register */
#define VADC_GLOBICLASS0 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00200A0u)

/** \brief  A4, Input Class Register */
#define VADC_GLOBICLASS1 /*lint --e(923)*/ (*(volatile Ifx_VADC_ICLASS*)0xF00200A4u)

/** \brief  280, Global Result Control Register */
#define VADC_GLOBRCR /*lint --e(923)*/ (*(volatile Ifx_VADC_GLOBRCR*)0xF0020280u)

/** \brief  300, Global Result Register */
#define VADC_GLOBRES /*lint --e(923)*/ (*(volatile Ifx_VADC_GLOBRES*)0xF0020300u)

/** \brief  380, Global Result Register, Debug */
#define VADC_GLOBRESD /*lint --e(923)*/ (*(volatile Ifx_VADC_GLOBRESD*)0xF0020380u)

/** \brief  160, Global Test Functions Register */
#define VADC_GLOBTF /*lint --e(923)*/ (*(volatile Ifx_VADC_GLOBTF*)0xF0020160u)

/** \brief  8, Module Identification Register */
#define VADC_ID /*lint --e(923)*/ (*(volatile Ifx_VADC_ID*)0xF0020008u)

/** \brief  34, Kernel Reset Register 0 */
#define VADC_KRST0 /*lint --e(923)*/ (*(volatile Ifx_VADC_KRST0*)0xF0020034u)

/** \brief  30, Kernel Reset Register 1 */
#define VADC_KRST1 /*lint --e(923)*/ (*(volatile Ifx_VADC_KRST1*)0xF0020030u)

/** \brief  2C, Kernel Reset Status Clear Register */
#define VADC_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_VADC_KRSTCLR*)0xF002002Cu)

/** \brief  28, OCDS Control and Status Register */
#define VADC_OCS /*lint --e(923)*/ (*(volatile Ifx_VADC_OCS*)0xF0020028u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXVADC_REG_H */
