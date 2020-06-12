/**
 * \file IfxMinimcds_reg.h
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
 * \defgroup IfxLld_Minimcds_Cfg Minimcds address
 * \ingroup IfxLld_Minimcds
 * 
 * \defgroup IfxLld_Minimcds_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Minimcds_Cfg
 * 
 * \defgroup IfxLld_Minimcds_Cfg_Minimcds 2-MINIMCDS
 * \ingroup IfxLld_Minimcds_Cfg
 * 
 */
#ifndef IFXMINIMCDS_REG_H
#define IFXMINIMCDS_REG_H 1
/******************************************************************************/
#include "IfxMinimcds_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Minimcds_Cfg_BaseAddress
 * \{  */

/** \brief  MINIMCDS object */
#define MODULE_MINIMCDS /*lint --e(923)*/ (*(Ifx_MINIMCDS*)0xF9100000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Minimcds_Cfg_Minimcds
 * \{  */

/** \brief  0, Clock Control Register */
#define MINIMCDS_CLC /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CLC*)0xF9100000u)

/** \brief  10, MCDS Control Register */
#define MINIMCDS_CT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CT*)0xF9100010u)

/** \brief  204, Trace Buffer Bottom Register */
#define MINIMCDS_FIFOBOT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_FIFOBOT*)0xF9100204u)

/** \brief  210, Trace Buffer Control Register */
#define MINIMCDS_FIFOCTL /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_FIFOCTL*)0xF9100210u)

/** \brief  200, Trace Buffer Write Pointer */
#define MINIMCDS_FIFONOW /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_FIFONOW*)0xF9100200u)

/** \brief  208, Trace Buffer PRE/POST Register */
#define MINIMCDS_FIFOPRE /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_FIFOPRE*)0xF9100208u)

/** \brief  20C, Trace Buffer Top Register */
#define MINIMCDS_FIFOTOP /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_FIFOTOP*)0xF910020Cu)

/** \brief  214, Trace Buffer Comparator Register */
#define MINIMCDS_FIFOWARN0 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_FIFOWARN0*)0xF9100214u)

/** \brief  218, Trace Buffer Comparator Register */
#define MINIMCDS_FIFOWARN1 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_FIFOWARN1*)0xF9100218u)

/** \brief  8, Module Identification Register */
#define MINIMCDS_ID /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ID*)0xF9100008u)

/** \brief  880, Action Definition Register */
#define MINIMCDS_MCX_ACT0 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100880u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT0.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT0.
*/
#define	MINIMCDS_MCXACT0	(MINIMCDS_MCX_ACT0)

/** \brief  884, Action Definition Register */
#define MINIMCDS_MCX_ACT1 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100884u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT1.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT1.
*/
#define	MINIMCDS_MCXACT1	(MINIMCDS_MCX_ACT1)

/** \brief  8A8, Action Definition Register */
#define MINIMCDS_MCX_ACT10 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008A8u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT10.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT10.
*/
#define	MINIMCDS_MCXACT10	(MINIMCDS_MCX_ACT10)

/** \brief  8AC, Action Definition Register */
#define MINIMCDS_MCX_ACT11 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008ACu)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT11.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT11.
*/
#define	MINIMCDS_MCXACT11	(MINIMCDS_MCX_ACT11)

/** \brief  8B0, Action Definition Register */
#define MINIMCDS_MCX_ACT12 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008B0u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT12.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT12.
*/
#define	MINIMCDS_MCXACT12	(MINIMCDS_MCX_ACT12)

/** \brief  8B4, Action Definition Register */
#define MINIMCDS_MCX_ACT13 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008B4u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT13.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT13.
*/
#define	MINIMCDS_MCXACT13	(MINIMCDS_MCX_ACT13)

/** \brief  8B8, Action Definition Register */
#define MINIMCDS_MCX_ACT14 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008B8u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT14.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT14.
*/
#define	MINIMCDS_MCXACT14	(MINIMCDS_MCX_ACT14)

/** \brief  8BC, Action Definition Register */
#define MINIMCDS_MCX_ACT15 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008BCu)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT15.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT15.
*/
#define	MINIMCDS_MCXACT15	(MINIMCDS_MCX_ACT15)

/** \brief  8C0, Action Definition Register */
#define MINIMCDS_MCX_ACT16 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008C0u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT16.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT16.
*/
#define	MINIMCDS_MCXACT16	(MINIMCDS_MCX_ACT16)

/** \brief  8C4, Action Definition Register */
#define MINIMCDS_MCX_ACT17 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008C4u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT17.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT17.
*/
#define	MINIMCDS_MCXACT17	(MINIMCDS_MCX_ACT17)

/** \brief  8C8, Action Definition Register */
#define MINIMCDS_MCX_ACT18 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008C8u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT18.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT18.
*/
#define	MINIMCDS_MCXACT18	(MINIMCDS_MCX_ACT18)

/** \brief  8CC, Action Definition Register */
#define MINIMCDS_MCX_ACT19 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008CCu)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT19.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT19.
*/
#define	MINIMCDS_MCXACT19	(MINIMCDS_MCX_ACT19)

/** \brief  888, Action Definition Register */
#define MINIMCDS_MCX_ACT2 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100888u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT2.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT2.
*/
#define	MINIMCDS_MCXACT2	(MINIMCDS_MCX_ACT2)

/** \brief  8D0, Action Definition Register */
#define MINIMCDS_MCX_ACT20 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008D0u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT20.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT20.
*/
#define	MINIMCDS_MCXACT20	(MINIMCDS_MCX_ACT20)

/** \brief  8D4, Action Definition Register */
#define MINIMCDS_MCX_ACT21 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008D4u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT21.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT21.
*/
#define	MINIMCDS_MCXACT21	(MINIMCDS_MCX_ACT21)

/** \brief  8D8, Action Definition Register */
#define MINIMCDS_MCX_ACT22 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008D8u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT22.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT22.
*/
#define	MINIMCDS_MCXACT22	(MINIMCDS_MCX_ACT22)

/** \brief  8DC, Action Definition Register */
#define MINIMCDS_MCX_ACT23 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008DCu)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT23.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT23.
*/
#define	MINIMCDS_MCXACT23	(MINIMCDS_MCX_ACT23)

/** \brief  8E0, Action Definition Register */
#define MINIMCDS_MCX_ACT24 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008E0u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT24.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT24.
*/
#define	MINIMCDS_MCXACT24	(MINIMCDS_MCX_ACT24)

/** \brief  8E4, Action Definition Register */
#define MINIMCDS_MCX_ACT25 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008E4u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT25.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT25.
*/
#define	MINIMCDS_MCXACT25	(MINIMCDS_MCX_ACT25)

/** \brief  8E8, Action Definition Register */
#define MINIMCDS_MCX_ACT26 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008E8u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT26.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT26.
*/
#define	MINIMCDS_MCXACT26	(MINIMCDS_MCX_ACT26)

/** \brief  8EC, Action Definition Register */
#define MINIMCDS_MCX_ACT27 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008ECu)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT27.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT27.
*/
#define	MINIMCDS_MCXACT27	(MINIMCDS_MCX_ACT27)

/** \brief  8F0, Action Definition Register */
#define MINIMCDS_MCX_ACT28 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008F0u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT28.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT28.
*/
#define	MINIMCDS_MCXACT28	(MINIMCDS_MCX_ACT28)

/** \brief  8F4, Action Definition Register */
#define MINIMCDS_MCX_ACT29 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008F4u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT29.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT29.
*/
#define	MINIMCDS_MCXACT29	(MINIMCDS_MCX_ACT29)

/** \brief  88C, Action Definition Register */
#define MINIMCDS_MCX_ACT3 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF910088Cu)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT3.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT3.
*/
#define	MINIMCDS_MCXACT3	(MINIMCDS_MCX_ACT3)

/** \brief  8F8, Action Definition Register */
#define MINIMCDS_MCX_ACT30 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008F8u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT30.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT30.
*/
#define	MINIMCDS_MCXACT30	(MINIMCDS_MCX_ACT30)

/** \brief  8FC, Action Definition Register */
#define MINIMCDS_MCX_ACT31 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008FCu)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT31.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT31.
*/
#define	MINIMCDS_MCXACT31	(MINIMCDS_MCX_ACT31)

/** \brief  900, Action Definition Register */
#define MINIMCDS_MCX_ACT32 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100900u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT32.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT32.
*/
#define	MINIMCDS_MCXACT32	(MINIMCDS_MCX_ACT32)

/** \brief  904, Action Definition Register */
#define MINIMCDS_MCX_ACT33 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100904u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT33.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT33.
*/
#define	MINIMCDS_MCXACT33	(MINIMCDS_MCX_ACT33)

/** \brief  908, Action Definition Register */
#define MINIMCDS_MCX_ACT34 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100908u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT34.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT34.
*/
#define	MINIMCDS_MCXACT34	(MINIMCDS_MCX_ACT34)

/** \brief  90C, Action Definition Register */
#define MINIMCDS_MCX_ACT35 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF910090Cu)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT35.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT35.
*/
#define	MINIMCDS_MCXACT35	(MINIMCDS_MCX_ACT35)

/** \brief  910, Action Definition Register */
#define MINIMCDS_MCX_ACT36 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100910u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT36.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT36.
*/
#define	MINIMCDS_MCXACT36	(MINIMCDS_MCX_ACT36)

/** \brief  914, Action Definition Register */
#define MINIMCDS_MCX_ACT37 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100914u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT37.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT37.
*/
#define	MINIMCDS_MCXACT37	(MINIMCDS_MCX_ACT37)

/** \brief  918, Action Definition Register */
#define MINIMCDS_MCX_ACT38 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100918u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT38.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT38.
*/
#define	MINIMCDS_MCXACT38	(MINIMCDS_MCX_ACT38)

/** \brief  91C, Action Definition Register */
#define MINIMCDS_MCX_ACT39 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF910091Cu)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT39.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT39.
*/
#define	MINIMCDS_MCXACT39	(MINIMCDS_MCX_ACT39)

/** \brief  890, Action Definition Register */
#define MINIMCDS_MCX_ACT4 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100890u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT4.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT4.
*/
#define	MINIMCDS_MCXACT4	(MINIMCDS_MCX_ACT4)

/** \brief  920, Action Definition Register */
#define MINIMCDS_MCX_ACT40 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100920u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT40.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT40.
*/
#define	MINIMCDS_MCXACT40	(MINIMCDS_MCX_ACT40)

/** \brief  894, Action Definition Register */
#define MINIMCDS_MCX_ACT5 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100894u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT5.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT5.
*/
#define	MINIMCDS_MCXACT5	(MINIMCDS_MCX_ACT5)

/** \brief  898, Action Definition Register */
#define MINIMCDS_MCX_ACT6 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF9100898u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT6.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT6.
*/
#define	MINIMCDS_MCXACT6	(MINIMCDS_MCX_ACT6)

/** \brief  89C, Action Definition Register */
#define MINIMCDS_MCX_ACT7 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF910089Cu)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT7.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT7.
*/
#define	MINIMCDS_MCXACT7	(MINIMCDS_MCX_ACT7)

/** \brief  8A0, Action Definition Register */
#define MINIMCDS_MCX_ACT8 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008A0u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT8.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT8.
*/
#define	MINIMCDS_MCXACT8	(MINIMCDS_MCX_ACT8)

/** \brief  8A4, Action Definition Register */
#define MINIMCDS_MCX_ACT9 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_ACT*)0xF91008A4u)

/** Alias (User Manual Name) for MINIMCDS_MCX_ACT9.
* To use register names with standard convension, please use MINIMCDS_MCX_ACT9.
*/
#define	MINIMCDS_MCXACT9	(MINIMCDS_MCX_ACT9)

/** \brief  A00, Counter Control Register */
#define MINIMCDS_MCX_CNT0_CCL /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CCL*)0xF9100A00u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT0_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT0_CCL.
*/
#define	MINIMCDS_MCXCCL0	(MINIMCDS_MCX_CNT0_CCL)

/** \brief  A08, Current Count Register */
#define MINIMCDS_MCX_CNT0_CNT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CNT*)0xF9100A08u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT0_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT0_CNT.
*/
#define	MINIMCDS_MCXCNT0	(MINIMCDS_MCX_CNT0_CNT)

/** \brief  A04, Counter Limit Register */
#define MINIMCDS_MCX_CNT0_LMT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_LMT*)0xF9100A04u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT0_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT0_LMT.
*/
#define	MINIMCDS_MCXLMT0	(MINIMCDS_MCX_CNT0_LMT)

/** \brief  A10, Counter Control Register */
#define MINIMCDS_MCX_CNT1_CCL /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CCL*)0xF9100A10u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT1_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT1_CCL.
*/
#define	MINIMCDS_MCXCCL1	(MINIMCDS_MCX_CNT1_CCL)

/** \brief  A18, Current Count Register */
#define MINIMCDS_MCX_CNT1_CNT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CNT*)0xF9100A18u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT1_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT1_CNT.
*/
#define	MINIMCDS_MCXCNT1	(MINIMCDS_MCX_CNT1_CNT)

/** \brief  A14, Counter Limit Register */
#define MINIMCDS_MCX_CNT1_LMT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_LMT*)0xF9100A14u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT1_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT1_LMT.
*/
#define	MINIMCDS_MCXLMT1	(MINIMCDS_MCX_CNT1_LMT)

/** \brief  A20, Counter Control Register */
#define MINIMCDS_MCX_CNT2_CCL /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CCL*)0xF9100A20u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT2_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT2_CCL.
*/
#define	MINIMCDS_MCXCCL2	(MINIMCDS_MCX_CNT2_CCL)

/** \brief  A28, Current Count Register */
#define MINIMCDS_MCX_CNT2_CNT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CNT*)0xF9100A28u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT2_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT2_CNT.
*/
#define	MINIMCDS_MCXCNT2	(MINIMCDS_MCX_CNT2_CNT)

/** \brief  A24, Counter Limit Register */
#define MINIMCDS_MCX_CNT2_LMT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_LMT*)0xF9100A24u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT2_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT2_LMT.
*/
#define	MINIMCDS_MCXLMT2	(MINIMCDS_MCX_CNT2_LMT)

/** \brief  A30, Counter Control Register */
#define MINIMCDS_MCX_CNT3_CCL /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CCL*)0xF9100A30u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT3_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT3_CCL.
*/
#define	MINIMCDS_MCXCCL3	(MINIMCDS_MCX_CNT3_CCL)

/** \brief  A38, Current Count Register */
#define MINIMCDS_MCX_CNT3_CNT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CNT*)0xF9100A38u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT3_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT3_CNT.
*/
#define	MINIMCDS_MCXCNT3	(MINIMCDS_MCX_CNT3_CNT)

/** \brief  A34, Counter Limit Register */
#define MINIMCDS_MCX_CNT3_LMT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_LMT*)0xF9100A34u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT3_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT3_LMT.
*/
#define	MINIMCDS_MCXLMT3	(MINIMCDS_MCX_CNT3_LMT)

/** \brief  A40, Counter Control Register */
#define MINIMCDS_MCX_CNT4_CCL /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CCL*)0xF9100A40u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT4_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT4_CCL.
*/
#define	MINIMCDS_MCXCCL4	(MINIMCDS_MCX_CNT4_CCL)

/** \brief  A48, Current Count Register */
#define MINIMCDS_MCX_CNT4_CNT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CNT*)0xF9100A48u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT4_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT4_CNT.
*/
#define	MINIMCDS_MCXCNT4	(MINIMCDS_MCX_CNT4_CNT)

/** \brief  A44, Counter Limit Register */
#define MINIMCDS_MCX_CNT4_LMT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_LMT*)0xF9100A44u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT4_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT4_LMT.
*/
#define	MINIMCDS_MCXLMT4	(MINIMCDS_MCX_CNT4_LMT)

/** \brief  A50, Counter Control Register */
#define MINIMCDS_MCX_CNT5_CCL /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CCL*)0xF9100A50u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT5_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT5_CCL.
*/
#define	MINIMCDS_MCXCCL5	(MINIMCDS_MCX_CNT5_CCL)

/** \brief  A58, Current Count Register */
#define MINIMCDS_MCX_CNT5_CNT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CNT*)0xF9100A58u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT5_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT5_CNT.
*/
#define	MINIMCDS_MCXCNT5	(MINIMCDS_MCX_CNT5_CNT)

/** \brief  A54, Counter Limit Register */
#define MINIMCDS_MCX_CNT5_LMT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_LMT*)0xF9100A54u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT5_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT5_LMT.
*/
#define	MINIMCDS_MCXLMT5	(MINIMCDS_MCX_CNT5_LMT)

/** \brief  A60, Counter Control Register */
#define MINIMCDS_MCX_CNT6_CCL /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CCL*)0xF9100A60u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT6_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT6_CCL.
*/
#define	MINIMCDS_MCXCCL6	(MINIMCDS_MCX_CNT6_CCL)

/** \brief  A68, Current Count Register */
#define MINIMCDS_MCX_CNT6_CNT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CNT*)0xF9100A68u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT6_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT6_CNT.
*/
#define	MINIMCDS_MCXCNT6	(MINIMCDS_MCX_CNT6_CNT)

/** \brief  A64, Counter Limit Register */
#define MINIMCDS_MCX_CNT6_LMT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_LMT*)0xF9100A64u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT6_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT6_LMT.
*/
#define	MINIMCDS_MCXLMT6	(MINIMCDS_MCX_CNT6_LMT)

/** \brief  A70, Counter Control Register */
#define MINIMCDS_MCX_CNT7_CCL /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CCL*)0xF9100A70u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT7_CCL.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT7_CCL.
*/
#define	MINIMCDS_MCXCCL7	(MINIMCDS_MCX_CNT7_CCL)

/** \brief  A78, Current Count Register */
#define MINIMCDS_MCX_CNT7_CNT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_CNT*)0xF9100A78u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT7_CNT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT7_CNT.
*/
#define	MINIMCDS_MCXCNT7	(MINIMCDS_MCX_CNT7_CNT)

/** \brief  A74, Counter Limit Register */
#define MINIMCDS_MCX_CNT7_LMT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_CNT_LMT*)0xF9100A74u)

/** Alias (User Manual Name) for MINIMCDS_MCX_CNT7_LMT.
* To use register names with standard convension, please use MINIMCDS_MCX_CNT7_LMT.
*/
#define	MINIMCDS_MCXLMT7	(MINIMCDS_MCX_CNT7_LMT)

/** \brief  800, Event Definition Register */
#define MINIMCDS_MCX_EVT0 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF9100800u)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT0.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT0.
*/
#define	MINIMCDS_MCXEVT0	(MINIMCDS_MCX_EVT0)

/** \brief  804, Event Definition Register */
#define MINIMCDS_MCX_EVT1 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF9100804u)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT1.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT1.
*/
#define	MINIMCDS_MCXEVT1	(MINIMCDS_MCX_EVT1)

/** \brief  828, Event Definition Register */
#define MINIMCDS_MCX_EVT10 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF9100828u)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT10.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT10.
*/
#define	MINIMCDS_MCXEVT10	(MINIMCDS_MCX_EVT10)

/** \brief  82C, Event Definition Register */
#define MINIMCDS_MCX_EVT11 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF910082Cu)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT11.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT11.
*/
#define	MINIMCDS_MCXEVT11	(MINIMCDS_MCX_EVT11)

/** \brief  830, Event Definition Register */
#define MINIMCDS_MCX_EVT12 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF9100830u)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT12.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT12.
*/
#define	MINIMCDS_MCXEVT12	(MINIMCDS_MCX_EVT12)

/** \brief  834, Event Definition Register */
#define MINIMCDS_MCX_EVT13 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF9100834u)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT13.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT13.
*/
#define	MINIMCDS_MCXEVT13	(MINIMCDS_MCX_EVT13)

/** \brief  838, Event Definition Register */
#define MINIMCDS_MCX_EVT14 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF9100838u)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT14.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT14.
*/
#define	MINIMCDS_MCXEVT14	(MINIMCDS_MCX_EVT14)

/** \brief  83C, Event Definition Register */
#define MINIMCDS_MCX_EVT15 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF910083Cu)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT15.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT15.
*/
#define	MINIMCDS_MCXEVT15	(MINIMCDS_MCX_EVT15)

/** \brief  808, Event Definition Register */
#define MINIMCDS_MCX_EVT2 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF9100808u)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT2.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT2.
*/
#define	MINIMCDS_MCXEVT2	(MINIMCDS_MCX_EVT2)

/** \brief  80C, Event Definition Register */
#define MINIMCDS_MCX_EVT3 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF910080Cu)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT3.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT3.
*/
#define	MINIMCDS_MCXEVT3	(MINIMCDS_MCX_EVT3)

/** \brief  810, Event Definition Register */
#define MINIMCDS_MCX_EVT4 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF9100810u)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT4.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT4.
*/
#define	MINIMCDS_MCXEVT4	(MINIMCDS_MCX_EVT4)

/** \brief  814, Event Definition Register */
#define MINIMCDS_MCX_EVT5 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF9100814u)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT5.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT5.
*/
#define	MINIMCDS_MCXEVT5	(MINIMCDS_MCX_EVT5)

/** \brief  818, Event Definition Register */
#define MINIMCDS_MCX_EVT6 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF9100818u)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT6.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT6.
*/
#define	MINIMCDS_MCXEVT6	(MINIMCDS_MCX_EVT6)

/** \brief  81C, Event Definition Register */
#define MINIMCDS_MCX_EVT7 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF910081Cu)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT7.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT7.
*/
#define	MINIMCDS_MCXEVT7	(MINIMCDS_MCX_EVT7)

/** \brief  820, Event Definition Register */
#define MINIMCDS_MCX_EVT8 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF9100820u)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT8.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT8.
*/
#define	MINIMCDS_MCXEVT8	(MINIMCDS_MCX_EVT8)

/** \brief  824, Event Definition Register */
#define MINIMCDS_MCX_EVT9 /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_EVT*)0xF9100824u)

/** Alias (User Manual Name) for MINIMCDS_MCX_EVT9.
* To use register names with standard convension, please use MINIMCDS_MCX_EVT9.
*/
#define	MINIMCDS_MCXEVT9	(MINIMCDS_MCX_EVT9)

/** \brief  14, MCDS Signal Source Control */
#define MINIMCDS_MUX /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_MUX*)0xF9100014u)

/** \brief  4, OCDS Control and Status */
#define MINIMCDS_OCS /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_OCS*)0xF9100004u)

/** \brief  200C, Compact Function Trace Register */
#define MINIMCDS_TCX_CFT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCX_CFT*)0xF910200Cu)

/** Alias (User Manual Name) for MINIMCDS_TCX_CFT.
* To use register names with standard convension, please use MINIMCDS_TCX_CFT.
*/
#define	MINIMCDS_TCXCFT	(MINIMCDS_TCX_CFT)

/** \brief  2008, Current Instruction Pointer */
#define MINIMCDS_TCX_CIP /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCX_CIP*)0xF9102008u)

/** Alias (User Manual Name) for MINIMCDS_TCX_CIP.
* To use register names with standard convension, please use MINIMCDS_TCX_CIP.
*/
#define	MINIMCDS_TCXCIP	(MINIMCDS_TCX_CIP)

/** \brief  2000, Debug Status Register */
#define MINIMCDS_TCX_DCSTS /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCX_DCSTS*)0xF9102000u)

/** Alias (User Manual Name) for MINIMCDS_TCX_DCSTS.
* To use register names with standard convension, please use MINIMCDS_TCX_DCSTS.
*/
#define	MINIMCDS_TCXDCSTS	(MINIMCDS_TCX_DCSTS)

/** \brief  2400, Comparator Bound Register */
#define MINIMCDS_TCX_EA0_BND /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXEA_BND*)0xF9102400u)

/** Alias (User Manual Name) for MINIMCDS_TCX_EA0_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_EA0_BND.
*/
#define	MINIMCDS_TCXEABND0	(MINIMCDS_TCX_EA0_BND)

/** \brief  2404, Comparator Range Register */
#define MINIMCDS_TCX_EA0_RNG /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXEA_RNG*)0xF9102404u)

/** Alias (User Manual Name) for MINIMCDS_TCX_EA0_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_EA0_RNG.
*/
#define	MINIMCDS_TCXEARNG0	(MINIMCDS_TCX_EA0_RNG)

/** \brief  2410, Comparator Bound Register */
#define MINIMCDS_TCX_EA1_BND /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXEA_BND*)0xF9102410u)

/** Alias (User Manual Name) for MINIMCDS_TCX_EA1_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_EA1_BND.
*/
#define	MINIMCDS_TCXEABND1	(MINIMCDS_TCX_EA1_BND)

/** \brief  2414, Comparator Range Register */
#define MINIMCDS_TCX_EA1_RNG /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXEA_RNG*)0xF9102414u)

/** Alias (User Manual Name) for MINIMCDS_TCX_EA1_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_EA1_RNG.
*/
#define	MINIMCDS_TCXEARNG1	(MINIMCDS_TCX_EA1_RNG)

/** \brief  3000, Comparator Bound Register */
#define MINIMCDS_TCX_IP0_BND /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXIP_BND*)0xF9103000u)

/** Alias (User Manual Name) for MINIMCDS_TCX_IP0_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_IP0_BND.
*/
#define	MINIMCDS_TCXIPBND0	(MINIMCDS_TCX_IP0_BND)

/** \brief  3004, Comparator Range Register */
#define MINIMCDS_TCX_IP0_RNG /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXIP_RNG*)0xF9103004u)

/** Alias (User Manual Name) for MINIMCDS_TCX_IP0_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_IP0_RNG.
*/
#define	MINIMCDS_TCXIPRNG0	(MINIMCDS_TCX_IP0_RNG)

/** \brief  3010, Comparator Bound Register */
#define MINIMCDS_TCX_IP1_BND /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXIP_BND*)0xF9103010u)

/** Alias (User Manual Name) for MINIMCDS_TCX_IP1_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_IP1_BND.
*/
#define	MINIMCDS_TCXIPBND1	(MINIMCDS_TCX_IP1_BND)

/** \brief  3014, Comparator Range Register */
#define MINIMCDS_TCX_IP1_RNG /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXIP_RNG*)0xF9103014u)

/** Alias (User Manual Name) for MINIMCDS_TCX_IP1_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_IP1_RNG.
*/
#define	MINIMCDS_TCXIPRNG1	(MINIMCDS_TCX_IP1_RNG)

/** \brief  2480, Comparator Bound Register */
#define MINIMCDS_TCX_WD0_BND /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXWD_BND*)0xF9102480u)

/** Alias (User Manual Name) for MINIMCDS_TCX_WD0_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_WD0_BND.
*/
#define	MINIMCDS_TCXWDBND0	(MINIMCDS_TCX_WD0_BND)

/** \brief  2490, Comparator Mask Register */
#define MINIMCDS_TCX_WD0_MSK /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXWD_MSK*)0xF9102490u)

/** Alias (User Manual Name) for MINIMCDS_TCX_WD0_MSK.
* To use register names with standard convension, please use MINIMCDS_TCX_WD0_MSK.
*/
#define	MINIMCDS_TCXWDMSK0	(MINIMCDS_TCX_WD0_MSK)

/** \brief  2488, Comparator Range Register */
#define MINIMCDS_TCX_WD0_RNG /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXWD_RNG*)0xF9102488u)

/** Alias (User Manual Name) for MINIMCDS_TCX_WD0_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_WD0_RNG.
*/
#define	MINIMCDS_TCXWDRNG0	(MINIMCDS_TCX_WD0_RNG)

/** \brief  249C, Comparator Sign Register */
#define MINIMCDS_TCX_WD0_SGN /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXWD_SGN*)0xF910249Cu)

/** Alias (User Manual Name) for MINIMCDS_TCX_WD0_SGN.
* To use register names with standard convension, please use MINIMCDS_TCX_WD0_SGN.
*/
#define	MINIMCDS_TCXWDSGN0	(MINIMCDS_TCX_WD0_SGN)

/** \brief  24A0, Comparator Bound Register */
#define MINIMCDS_TCX_WD1_BND /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXWD_BND*)0xF91024A0u)

/** Alias (User Manual Name) for MINIMCDS_TCX_WD1_BND.
* To use register names with standard convension, please use MINIMCDS_TCX_WD1_BND.
*/
#define	MINIMCDS_TCXWDBND1	(MINIMCDS_TCX_WD1_BND)

/** \brief  24B0, Comparator Mask Register */
#define MINIMCDS_TCX_WD1_MSK /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXWD_MSK*)0xF91024B0u)

/** Alias (User Manual Name) for MINIMCDS_TCX_WD1_MSK.
* To use register names with standard convension, please use MINIMCDS_TCX_WD1_MSK.
*/
#define	MINIMCDS_TCXWDMSK1	(MINIMCDS_TCX_WD1_MSK)

/** \brief  24A8, Comparator Range Register */
#define MINIMCDS_TCX_WD1_RNG /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXWD_RNG*)0xF91024A8u)

/** Alias (User Manual Name) for MINIMCDS_TCX_WD1_RNG.
* To use register names with standard convension, please use MINIMCDS_TCX_WD1_RNG.
*/
#define	MINIMCDS_TCXWDRNG1	(MINIMCDS_TCX_WD1_RNG)

/** \brief  24BC, Comparator Sign Register */
#define MINIMCDS_TCX_WD1_SGN /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TCXWD_SGN*)0xF91024BCu)

/** Alias (User Manual Name) for MINIMCDS_TCX_WD1_SGN.
* To use register names with standard convension, please use MINIMCDS_TCX_WD1_SGN.
*/
#define	MINIMCDS_TCXWDSGN1	(MINIMCDS_TCX_WD1_SGN)

/** \brief  408, Clock Counter Register */
#define MINIMCDS_TSUEMUCNT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TSUEMUCNT*)0xF9100408u)

/** \brief  404, Clock Prescaler Register */
#define MINIMCDS_TSUPRSCL /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TSUPRSCL*)0xF9100404u)

/** \brief  400, Clock Counter Register */
#define MINIMCDS_TSUREFCNT /*lint --e(923)*/ (*(volatile Ifx_MINIMCDS_TSUREFCNT*)0xF9100400u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXMINIMCDS_REG_H */
