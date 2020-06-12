/**
 * \file IfxEbu_reg.h
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
 * \defgroup IfxLld_Ebu_Cfg Ebu address
 * \ingroup IfxLld_Ebu
 * 
 * \defgroup IfxLld_Ebu_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Ebu_Cfg
 * 
 * \defgroup IfxLld_Ebu_Cfg_Ebu0 2-EBU0
 * \ingroup IfxLld_Ebu_Cfg
 * 
 */
#ifndef IFXEBU_REG_H
#define IFXEBU_REG_H 1
/******************************************************************************/
#include "IfxEbu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Ebu_Cfg_BaseAddress
 * \{  */

/** \brief  EBU object */
#define MODULE_EBU0 /*lint --e(923)*/ (*(Ifx_EBU*)0xF8000000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ebu_Cfg_Ebu0
 * \{  */

/** \brief  B0, EBU Access Enable Register 0 */
#define EBU0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_EBU_ACCEN0*)0xF80000B0u)

/** Alias (User Manual Name) for EBU0_ACCEN0.
* To use register names with standard convension, please use EBU0_ACCEN0.
*/
#define	EBU_ACCEN0	(EBU0_ACCEN0)

/** \brief  B4, EBU Access Enable Register 1 */
#define EBU0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_EBU_ACCEN1*)0xF80000B4u)

/** Alias (User Manual Name) for EBU0_ACCEN1.
* To use register names with standard convension, please use EBU0_ACCEN1.
*/
#define	EBU_ACCEN1	(EBU0_ACCEN1)

/** \brief  18, EBU Address Select Register */
#define EBU0_ADDRSEL0 /*lint --e(923)*/ (*(volatile Ifx_EBU_ADDRSEL*)0xF8000018u)

/** Alias (User Manual Name) for EBU0_ADDRSEL0.
* To use register names with standard convension, please use EBU0_ADDRSEL0.
*/
#define	EBU_ADDRSEL0	(EBU0_ADDRSEL0)

/** \brief  1C, EBU Address Select Register */
#define EBU0_ADDRSEL1 /*lint --e(923)*/ (*(volatile Ifx_EBU_ADDRSEL*)0xF800001Cu)

/** Alias (User Manual Name) for EBU0_ADDRSEL1.
* To use register names with standard convension, please use EBU0_ADDRSEL1.
*/
#define	EBU_ADDRSEL1	(EBU0_ADDRSEL1)

/** \brief  20, EBU Address Select Register */
#define EBU0_ADDRSEL2 /*lint --e(923)*/ (*(volatile Ifx_EBU_ADDRSEL*)0xF8000020u)

/** Alias (User Manual Name) for EBU0_ADDRSEL2.
* To use register names with standard convension, please use EBU0_ADDRSEL2.
*/
#define	EBU_ADDRSEL2	(EBU0_ADDRSEL2)

/** \brief  2C, EBU Bus Read Access Parameter Register */
#define EBU0_BUS0_RAP /*lint --e(923)*/ (*(volatile Ifx_EBU_BUSRAP*)0xF800002Cu)

/** Alias (User Manual Name) for EBU0_BUS0_RAP.
* To use register names with standard convension, please use EBU0_BUS0_RAP.
*/
#define	EBU_BUSRAP0	(EBU0_BUS0_RAP)

/** \brief  28, EBU Bus Configuration Register */
#define EBU0_BUS0_RCON /*lint --e(923)*/ (*(volatile Ifx_EBU_BUSRCON*)0xF8000028u)

/** Alias (User Manual Name) for EBU0_BUS0_RCON.
* To use register names with standard convension, please use EBU0_BUS0_RCON.
*/
#define	EBU_BUSRCON0	(EBU0_BUS0_RCON)

/** \brief  34, EBU Bus Write Access Parameter Register */
#define EBU0_BUS0_WAP /*lint --e(923)*/ (*(volatile Ifx_EBU_BUSWAP*)0xF8000034u)

/** Alias (User Manual Name) for EBU0_BUS0_WAP.
* To use register names with standard convension, please use EBU0_BUS0_WAP.
*/
#define	EBU_BUSWAP0	(EBU0_BUS0_WAP)

/** \brief  30, EBU Bus Write Configuration Register */
#define EBU0_BUS0_WCON /*lint --e(923)*/ (*(volatile Ifx_EBU_BUSWCON*)0xF8000030u)

/** Alias (User Manual Name) for EBU0_BUS0_WCON.
* To use register names with standard convension, please use EBU0_BUS0_WCON.
*/
#define	EBU_BUSWCON0	(EBU0_BUS0_WCON)

/** \brief  3C, EBU Bus Read Access Parameter Register */
#define EBU0_BUS1_RAP /*lint --e(923)*/ (*(volatile Ifx_EBU_BUSRAP*)0xF800003Cu)

/** Alias (User Manual Name) for EBU0_BUS1_RAP.
* To use register names with standard convension, please use EBU0_BUS1_RAP.
*/
#define	EBU_BUSRAP1	(EBU0_BUS1_RAP)

/** \brief  38, EBU Bus Configuration Register */
#define EBU0_BUS1_RCON /*lint --e(923)*/ (*(volatile Ifx_EBU_BUSRCON*)0xF8000038u)

/** Alias (User Manual Name) for EBU0_BUS1_RCON.
* To use register names with standard convension, please use EBU0_BUS1_RCON.
*/
#define	EBU_BUSRCON1	(EBU0_BUS1_RCON)

/** \brief  44, EBU Bus Write Access Parameter Register */
#define EBU0_BUS1_WAP /*lint --e(923)*/ (*(volatile Ifx_EBU_BUSWAP*)0xF8000044u)

/** Alias (User Manual Name) for EBU0_BUS1_WAP.
* To use register names with standard convension, please use EBU0_BUS1_WAP.
*/
#define	EBU_BUSWAP1	(EBU0_BUS1_WAP)

/** \brief  40, EBU Bus Write Configuration Register */
#define EBU0_BUS1_WCON /*lint --e(923)*/ (*(volatile Ifx_EBU_BUSWCON*)0xF8000040u)

/** Alias (User Manual Name) for EBU0_BUS1_WCON.
* To use register names with standard convension, please use EBU0_BUS1_WCON.
*/
#define	EBU_BUSWCON1	(EBU0_BUS1_WCON)

/** \brief  4C, EBU Bus Read Access Parameter Register */
#define EBU0_BUS2_RAP /*lint --e(923)*/ (*(volatile Ifx_EBU_BUSRAP*)0xF800004Cu)

/** Alias (User Manual Name) for EBU0_BUS2_RAP.
* To use register names with standard convension, please use EBU0_BUS2_RAP.
*/
#define	EBU_BUSRAP2	(EBU0_BUS2_RAP)

/** \brief  48, EBU Bus Configuration Register */
#define EBU0_BUS2_RCON /*lint --e(923)*/ (*(volatile Ifx_EBU_BUSRCON*)0xF8000048u)

/** Alias (User Manual Name) for EBU0_BUS2_RCON.
* To use register names with standard convension, please use EBU0_BUS2_RCON.
*/
#define	EBU_BUSRCON2	(EBU0_BUS2_RCON)

/** \brief  54, EBU Bus Write Access Parameter Register */
#define EBU0_BUS2_WAP /*lint --e(923)*/ (*(volatile Ifx_EBU_BUSWAP*)0xF8000054u)

/** Alias (User Manual Name) for EBU0_BUS2_WAP.
* To use register names with standard convension, please use EBU0_BUS2_WAP.
*/
#define	EBU_BUSWAP2	(EBU0_BUS2_WAP)

/** \brief  50, EBU Bus Write Configuration Register */
#define EBU0_BUS2_WCON /*lint --e(923)*/ (*(volatile Ifx_EBU_BUSWCON*)0xF8000050u)

/** Alias (User Manual Name) for EBU0_BUS2_WCON.
* To use register names with standard convension, please use EBU0_BUS2_WCON.
*/
#define	EBU_BUSWCON2	(EBU0_BUS2_WCON)

/** \brief  0, EBU Clock Control Register */
#define EBU0_CLC /*lint --e(923)*/ (*(volatile Ifx_EBU_CLC*)0xF8000000u)

/** Alias (User Manual Name) for EBU0_CLC.
* To use register names with standard convension, please use EBU0_CLC.
*/
#define	EBU_CLC	(EBU0_CLC)

/** \brief  10, EBU External Boot Configuration Register */
#define EBU0_EXTBOOT /*lint --e(923)*/ (*(volatile Ifx_EBU_EXTBOOT*)0xF8000010u)

/** Alias (User Manual Name) for EBU0_EXTBOOT.
* To use register names with standard convension, please use EBU0_EXTBOOT.
*/
#define	EBU_EXTBOOT	(EBU0_EXTBOOT)

/** \brief  8, EBU Module Identification Register */
#define EBU0_ID /*lint --e(923)*/ (*(volatile Ifx_EBU_ID*)0xF8000008u)

/** Alias (User Manual Name) for EBU0_ID.
* To use register names with standard convension, please use EBU0_ID.
*/
#define	EBU_ID	(EBU0_ID)

/** \brief  4, EBU Configuration Register */
#define EBU0_MODCON /*lint --e(923)*/ (*(volatile Ifx_EBU_MODCON*)0xF8000004u)

/** Alias (User Manual Name) for EBU0_MODCON.
* To use register names with standard convension, please use EBU0_MODCON.
*/
#define	EBU_MODCON	(EBU0_MODCON)

/** \brief  68, EBU SDRAM Control Register */
#define EBU0_SDR_CON /*lint --e(923)*/ (*(volatile Ifx_EBU_SDR_CON*)0xF8000068u)

/** Alias (User Manual Name) for EBU0_SDR_CON.
* To use register names with standard convension, please use EBU0_SDR_CON.
*/
#define	EBU_SDRMCON	(EBU0_SDR_CON)

/** \brief  6C, EBU SDRAM Mode Register */
#define EBU0_SDR_MOD /*lint --e(923)*/ (*(volatile Ifx_EBU_SDR_MOD*)0xF800006Cu)

/** Alias (User Manual Name) for EBU0_SDR_MOD.
* To use register names with standard convension, please use EBU0_SDR_MOD.
*/
#define	EBU_SDRMOD	(EBU0_SDR_MOD)

/** \brief  70, EBU SDRAM Refresh Control Register */
#define EBU0_SDR_REF /*lint --e(923)*/ (*(volatile Ifx_EBU_SDR_REF*)0xF8000070u)

/** Alias (User Manual Name) for EBU0_SDR_REF.
* To use register names with standard convension, please use EBU0_SDR_REF.
*/
#define	EBU_SDRMREF	(EBU0_SDR_REF)

/** \brief  74, EBU SDRAM Status Register */
#define EBU0_SDR_STAT /*lint --e(923)*/ (*(volatile Ifx_EBU_SDR_STAT*)0xF8000074u)

/** Alias (User Manual Name) for EBU0_SDR_STAT.
* To use register names with standard convension, please use EBU0_SDR_STAT.
*/
#define	EBU_SDRSTAT	(EBU0_SDR_STAT)

/** \brief  C, EBU Test/Control Configuration Register */
#define EBU0_USERCON /*lint --e(923)*/ (*(volatile Ifx_EBU_USERCON*)0xF800000Cu)

/** Alias (User Manual Name) for EBU0_USERCON.
* To use register names with standard convension, please use EBU0_USERCON.
*/
#define	EBU_USERCON	(EBU0_USERCON)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEBU_REG_H */
