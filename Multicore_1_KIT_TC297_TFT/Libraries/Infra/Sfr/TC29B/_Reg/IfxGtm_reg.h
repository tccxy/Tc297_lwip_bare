/**
 * \file IfxGtm_reg.h
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
 * \defgroup IfxLld_Gtm_Cfg Gtm address
 * \ingroup IfxLld_Gtm
 * 
 * \defgroup IfxLld_Gtm_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Gtm_Cfg
 * 
 * \defgroup IfxLld_Gtm_Cfg_Gtm 2-GTM
 * \ingroup IfxLld_Gtm_Cfg
 * 
 */
#ifndef IFXGTM_REG_H
#define IFXGTM_REG_H 1
/******************************************************************************/
#include "IfxGtm_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Gtm_Cfg_BaseAddress
 * \{  */

/** \brief  GTM object */
#define MODULE_GTM /*lint --e(923)*/ (*(Ifx_GTM*)0xF0100000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Gtm_Cfg_Gtm
 * \{  */

/** \brief  9FDFC, Access Enable Register 0 */
#define GTM_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ACCEN0*)0xF019FDFCu)

/** \brief  9FDF8, Access Enable Register 1 */
#define GTM_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ACCEN1*)0xF019FDF8u)

/** \brief  9FDB0, ADC Trigger 0 Output Select 0 Register */
#define GTM_ADCTRIG0OUT0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ADCTRIG0OUT0*)0xF019FDB0u)

/** \brief  9FDB4, ADC Trigger 0 Output Select 1 Register */
#define GTM_ADCTRIG0OUT1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ADCTRIG0OUT1*)0xF019FDB4u)

/** \brief  9FDB8, ADC Trigger 1 Output Select 0 Register */
#define GTM_ADCTRIG1OUT0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ADCTRIG1OUT0*)0xF019FDB8u)

/** \brief  9FDBC, ADC Trigger 1 Output Select 1 Register */
#define GTM_ADCTRIG1OUT1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ADCTRIG1OUT1*)0xF019FDBCu)

/** \brief  C, GTM AEI Timeout Exception Address Register */
#define GTM_AEI_ADDR_XPT /*lint --e(923)*/ (*(volatile Ifx_GTM_AEI_ADDR_XPT*)0xF010000Cu)

/** \brief  18080, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH0_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF0118080u)

/** \brief  18090, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH1_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF0118090u)

/** \brief  180A0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH2_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF01180A0u)

/** \brief  180B0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH3_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF01180B0u)

/** \brief  180C0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH4_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF01180C0u)

/** \brief  180D0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH5_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF01180D0u)

/** \brief  180E0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH6_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF01180E0u)

/** \brief  180F0, AFD0 FIFO0 Channel Buffer Access Register */
#define GTM_AFD0_CH7_BUF_ACC /*lint --e(923)*/ (*(volatile Ifx_GTM_AFD_CH_BUF_ACC*)0xF01180F0u)

/** \brief  280, ARU Access Register */
#define GTM_ARU_ARU_ACCESS /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_ARU_ACCESS*)0xF0100280u)

/** Alias (User Manual Name) for GTM_ARU_ARU_ACCESS.
* To use register names with standard convension, please use GTM_ARU_ARU_ACCESS.
*/
#define	GTM_ARU_ACCESS	(GTM_ARU_ARU_ACCESS)

/** \brief  284, ARU Access Register Upper Data Word */
#define GTM_ARU_DATA_H /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DATA_H*)0xF0100284u)

/** \brief  288, ARU Access Register Lower Data Word */
#define GTM_ARU_DATA_L /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DATA_L*)0xF0100288u)

/** \brief  28C, Debug Access Channel 0 */
#define GTM_ARU_DBG_ACCESS0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DBG_ACCESS0*)0xF010028Cu)

/** \brief  298, Debug Access Channel 0 */
#define GTM_ARU_DBG_ACCESS1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DBG_ACCESS1*)0xF0100298u)

/** \brief  290, Debug Access 0 Transfer Register Upper Data Word */
#define GTM_ARU_DBG_DATA0_H /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DBG_DATA0_H*)0xF0100290u)

/** \brief  294, Debug Access 0 Transfer Register Lower Data Word */
#define GTM_ARU_DBG_DATA0_L /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DBG_DATA0_L*)0xF0100294u)

/** \brief  29C, Debug Access 1 Transfer Register Upper Data Word */
#define GTM_ARU_DBG_DATA1_H /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DBG_DATA1_H*)0xF010029Cu)

/** \brief  2A0, Debug Access 1 Transfer Register Lower Data Word */
#define GTM_ARU_DBG_DATA1_L /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_DBG_DATA1_L*)0xF01002A0u)

/** \brief  2A8, ARU Interrupt Enable Register */
#define GTM_ARU_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_IRQ_EN*)0xF01002A8u)

/** \brief  2AC, ARU_NEW_DATA_IRQ Forcing Interrupt Register */
#define GTM_ARU_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_IRQ_FORCINT*)0xF01002ACu)

/** \brief  2B0, IRQ Mode Configuration Register */
#define GTM_ARU_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_IRQ_MODE*)0xF01002B0u)

/** \brief  2A4, ARU Interrupt Notification Register */
#define GTM_ARU_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ARU_IRQ_NOTIFY*)0xF01002A4u)

/** \brief  D04C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM0_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010D04Cu)

/** \brief  D044, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM0_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010D044u)

/** \brief  D048, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM0_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010D048u)

/** \brief  D058, ATOM AGC Force Update Control Register */
#define GTM_ATOM0_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF010D058u)

/** \brief  D040, ATOM AGC Global control register */
#define GTM_ATOM0_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010D040u)

/** \brief  D05C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM0_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010D05Cu)

/** \brief  D050, ATOM AGC Output Enable Control Register */
#define GTM_ATOM0_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF010D050u)

/** \brief  D054, ATOM AGC Output Enable Status Register */
#define GTM_ATOM0_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010D054u)

/** \brief  D010, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D010u)

/** \brief  D014, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D014u)

/** \brief  D018, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D018u)

/** \brief  D004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D004u)

/** \brief  D024, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D024u)

/** \brief  D028, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D028u)

/** \brief  D02C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D02Cu)

/** \brief  D020, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D020u)

/** \brief  D000, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D000u)

/** \brief  D004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH0_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010D004u)

/** Alias (User Manual Name) for GTM_ATOM0_CH0_SOMC.
* To use register names with standard convension, please use GTM_ATOM0_CH0_SOMC.
*/
#define	GTM_ATOM0_CH0_CTRL_SOMC	(GTM_ATOM0_CH0_SOMC)

/** \brief  D004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH0_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010D004u)

/** Alias (User Manual Name) for GTM_ATOM0_CH0_SOMI.
* To use register names with standard convension, please use GTM_ATOM0_CH0_SOMI.
*/
#define	GTM_ATOM0_CH0_CTRL_SOMI	(GTM_ATOM0_CH0_SOMI)

/** \brief  D004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH0_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010D004u)

/** Alias (User Manual Name) for GTM_ATOM0_CH0_SOMP.
* To use register names with standard convension, please use GTM_ATOM0_CH0_SOMP.
*/
#define	GTM_ATOM0_CH0_CTRL_SOMP	(GTM_ATOM0_CH0_SOMP)

/** \brief  D004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH0_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010D004u)

/** Alias (User Manual Name) for GTM_ATOM0_CH0_SOMS.
* To use register names with standard convension, please use GTM_ATOM0_CH0_SOMS.
*/
#define	GTM_ATOM0_CH0_CTRL_SOMS	(GTM_ATOM0_CH0_SOMS)

/** \brief  D008, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D008u)

/** \brief  D00C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D00Cu)

/** \brief  D01C, ATOM Channel Status Register */
#define GTM_ATOM0_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D01Cu)

/** \brief  D090, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D090u)

/** \brief  D094, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D094u)

/** \brief  D098, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D098u)

/** \brief  D084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D084u)

/** \brief  D0A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D0A4u)

/** \brief  D0A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D0A8u)

/** \brief  D0AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D0ACu)

/** \brief  D0A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D0A0u)

/** \brief  D080, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D080u)

/** \brief  D084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH1_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010D084u)

/** Alias (User Manual Name) for GTM_ATOM0_CH1_SOMC.
* To use register names with standard convension, please use GTM_ATOM0_CH1_SOMC.
*/
#define	GTM_ATOM0_CH1_CTRL_SOMC	(GTM_ATOM0_CH1_SOMC)

/** \brief  D084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH1_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010D084u)

/** Alias (User Manual Name) for GTM_ATOM0_CH1_SOMI.
* To use register names with standard convension, please use GTM_ATOM0_CH1_SOMI.
*/
#define	GTM_ATOM0_CH1_CTRL_SOMI	(GTM_ATOM0_CH1_SOMI)

/** \brief  D084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH1_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010D084u)

/** Alias (User Manual Name) for GTM_ATOM0_CH1_SOMP.
* To use register names with standard convension, please use GTM_ATOM0_CH1_SOMP.
*/
#define	GTM_ATOM0_CH1_CTRL_SOMP	(GTM_ATOM0_CH1_SOMP)

/** \brief  D084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH1_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010D084u)

/** Alias (User Manual Name) for GTM_ATOM0_CH1_SOMS.
* To use register names with standard convension, please use GTM_ATOM0_CH1_SOMS.
*/
#define	GTM_ATOM0_CH1_CTRL_SOMS	(GTM_ATOM0_CH1_SOMS)

/** \brief  D088, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D088u)

/** \brief  D08C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D08Cu)

/** \brief  D09C, ATOM Channel Status Register */
#define GTM_ATOM0_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D09Cu)

/** \brief  D110, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D110u)

/** \brief  D114, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D114u)

/** \brief  D118, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D118u)

/** \brief  D104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D104u)

/** \brief  D124, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D124u)

/** \brief  D128, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D128u)

/** \brief  D12C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D12Cu)

/** \brief  D120, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D120u)

/** \brief  D100, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D100u)

/** \brief  D104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH2_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010D104u)

/** Alias (User Manual Name) for GTM_ATOM0_CH2_SOMC.
* To use register names with standard convension, please use GTM_ATOM0_CH2_SOMC.
*/
#define	GTM_ATOM0_CH2_CTRL_SOMC	(GTM_ATOM0_CH2_SOMC)

/** \brief  D104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH2_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010D104u)

/** Alias (User Manual Name) for GTM_ATOM0_CH2_SOMI.
* To use register names with standard convension, please use GTM_ATOM0_CH2_SOMI.
*/
#define	GTM_ATOM0_CH2_CTRL_SOMI	(GTM_ATOM0_CH2_SOMI)

/** \brief  D104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH2_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010D104u)

/** Alias (User Manual Name) for GTM_ATOM0_CH2_SOMP.
* To use register names with standard convension, please use GTM_ATOM0_CH2_SOMP.
*/
#define	GTM_ATOM0_CH2_CTRL_SOMP	(GTM_ATOM0_CH2_SOMP)

/** \brief  D104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH2_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010D104u)

/** Alias (User Manual Name) for GTM_ATOM0_CH2_SOMS.
* To use register names with standard convension, please use GTM_ATOM0_CH2_SOMS.
*/
#define	GTM_ATOM0_CH2_CTRL_SOMS	(GTM_ATOM0_CH2_SOMS)

/** \brief  D108, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D108u)

/** \brief  D10C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D10Cu)

/** \brief  D11C, ATOM Channel Status Register */
#define GTM_ATOM0_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D11Cu)

/** \brief  D190, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D190u)

/** \brief  D194, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D194u)

/** \brief  D198, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D198u)

/** \brief  D184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D184u)

/** \brief  D1A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D1A4u)

/** \brief  D1A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D1A8u)

/** \brief  D1AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D1ACu)

/** \brief  D1A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D1A0u)

/** \brief  D180, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D180u)

/** \brief  D184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH3_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010D184u)

/** Alias (User Manual Name) for GTM_ATOM0_CH3_SOMC.
* To use register names with standard convension, please use GTM_ATOM0_CH3_SOMC.
*/
#define	GTM_ATOM0_CH3_CTRL_SOMC	(GTM_ATOM0_CH3_SOMC)

/** \brief  D184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH3_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010D184u)

/** Alias (User Manual Name) for GTM_ATOM0_CH3_SOMI.
* To use register names with standard convension, please use GTM_ATOM0_CH3_SOMI.
*/
#define	GTM_ATOM0_CH3_CTRL_SOMI	(GTM_ATOM0_CH3_SOMI)

/** \brief  D184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH3_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010D184u)

/** Alias (User Manual Name) for GTM_ATOM0_CH3_SOMP.
* To use register names with standard convension, please use GTM_ATOM0_CH3_SOMP.
*/
#define	GTM_ATOM0_CH3_CTRL_SOMP	(GTM_ATOM0_CH3_SOMP)

/** \brief  D184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH3_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010D184u)

/** Alias (User Manual Name) for GTM_ATOM0_CH3_SOMS.
* To use register names with standard convension, please use GTM_ATOM0_CH3_SOMS.
*/
#define	GTM_ATOM0_CH3_CTRL_SOMS	(GTM_ATOM0_CH3_SOMS)

/** \brief  D188, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D188u)

/** \brief  D18C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D18Cu)

/** \brief  D19C, ATOM Channel Status Register */
#define GTM_ATOM0_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D19Cu)

/** \brief  D210, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D210u)

/** \brief  D214, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D214u)

/** \brief  D218, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D218u)

/** \brief  D204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D204u)

/** \brief  D224, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D224u)

/** \brief  D228, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D228u)

/** \brief  D22C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D22Cu)

/** \brief  D220, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D220u)

/** \brief  D200, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D200u)

/** \brief  D204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH4_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010D204u)

/** Alias (User Manual Name) for GTM_ATOM0_CH4_SOMC.
* To use register names with standard convension, please use GTM_ATOM0_CH4_SOMC.
*/
#define	GTM_ATOM0_CH4_CTRL_SOMC	(GTM_ATOM0_CH4_SOMC)

/** \brief  D204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH4_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010D204u)

/** Alias (User Manual Name) for GTM_ATOM0_CH4_SOMI.
* To use register names with standard convension, please use GTM_ATOM0_CH4_SOMI.
*/
#define	GTM_ATOM0_CH4_CTRL_SOMI	(GTM_ATOM0_CH4_SOMI)

/** \brief  D204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH4_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010D204u)

/** Alias (User Manual Name) for GTM_ATOM0_CH4_SOMP.
* To use register names with standard convension, please use GTM_ATOM0_CH4_SOMP.
*/
#define	GTM_ATOM0_CH4_CTRL_SOMP	(GTM_ATOM0_CH4_SOMP)

/** \brief  D204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH4_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010D204u)

/** Alias (User Manual Name) for GTM_ATOM0_CH4_SOMS.
* To use register names with standard convension, please use GTM_ATOM0_CH4_SOMS.
*/
#define	GTM_ATOM0_CH4_CTRL_SOMS	(GTM_ATOM0_CH4_SOMS)

/** \brief  D208, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D208u)

/** \brief  D20C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D20Cu)

/** \brief  D21C, ATOM Channel Status Register */
#define GTM_ATOM0_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D21Cu)

/** \brief  D290, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D290u)

/** \brief  D294, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D294u)

/** \brief  D298, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D298u)

/** \brief  D284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D284u)

/** \brief  D2A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D2A4u)

/** \brief  D2A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D2A8u)

/** \brief  D2AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D2ACu)

/** \brief  D2A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D2A0u)

/** \brief  D280, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D280u)

/** \brief  D284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH5_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010D284u)

/** Alias (User Manual Name) for GTM_ATOM0_CH5_SOMC.
* To use register names with standard convension, please use GTM_ATOM0_CH5_SOMC.
*/
#define	GTM_ATOM0_CH5_CTRL_SOMC	(GTM_ATOM0_CH5_SOMC)

/** \brief  D284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH5_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010D284u)

/** Alias (User Manual Name) for GTM_ATOM0_CH5_SOMI.
* To use register names with standard convension, please use GTM_ATOM0_CH5_SOMI.
*/
#define	GTM_ATOM0_CH5_CTRL_SOMI	(GTM_ATOM0_CH5_SOMI)

/** \brief  D284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH5_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010D284u)

/** Alias (User Manual Name) for GTM_ATOM0_CH5_SOMP.
* To use register names with standard convension, please use GTM_ATOM0_CH5_SOMP.
*/
#define	GTM_ATOM0_CH5_CTRL_SOMP	(GTM_ATOM0_CH5_SOMP)

/** \brief  D284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH5_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010D284u)

/** Alias (User Manual Name) for GTM_ATOM0_CH5_SOMS.
* To use register names with standard convension, please use GTM_ATOM0_CH5_SOMS.
*/
#define	GTM_ATOM0_CH5_CTRL_SOMS	(GTM_ATOM0_CH5_SOMS)

/** \brief  D288, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D288u)

/** \brief  D28C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D28Cu)

/** \brief  D29C, ATOM Channel Status Register */
#define GTM_ATOM0_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D29Cu)

/** \brief  D310, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D310u)

/** \brief  D314, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D314u)

/** \brief  D318, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D318u)

/** \brief  D304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D304u)

/** \brief  D324, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D324u)

/** \brief  D328, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D328u)

/** \brief  D32C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D32Cu)

/** \brief  D320, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D320u)

/** \brief  D300, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D300u)

/** \brief  D304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH6_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010D304u)

/** Alias (User Manual Name) for GTM_ATOM0_CH6_SOMC.
* To use register names with standard convension, please use GTM_ATOM0_CH6_SOMC.
*/
#define	GTM_ATOM0_CH6_CTRL_SOMC	(GTM_ATOM0_CH6_SOMC)

/** \brief  D304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH6_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010D304u)

/** Alias (User Manual Name) for GTM_ATOM0_CH6_SOMI.
* To use register names with standard convension, please use GTM_ATOM0_CH6_SOMI.
*/
#define	GTM_ATOM0_CH6_CTRL_SOMI	(GTM_ATOM0_CH6_SOMI)

/** \brief  D304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH6_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010D304u)

/** Alias (User Manual Name) for GTM_ATOM0_CH6_SOMP.
* To use register names with standard convension, please use GTM_ATOM0_CH6_SOMP.
*/
#define	GTM_ATOM0_CH6_CTRL_SOMP	(GTM_ATOM0_CH6_SOMP)

/** \brief  D304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH6_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010D304u)

/** Alias (User Manual Name) for GTM_ATOM0_CH6_SOMS.
* To use register names with standard convension, please use GTM_ATOM0_CH6_SOMS.
*/
#define	GTM_ATOM0_CH6_CTRL_SOMS	(GTM_ATOM0_CH6_SOMS)

/** \brief  D308, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D308u)

/** \brief  D30C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D30Cu)

/** \brief  D31C, ATOM Channel Status Register */
#define GTM_ATOM0_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D31Cu)

/** \brief  D390, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM0_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D390u)

/** \brief  D394, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM0_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D394u)

/** \brief  D398, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM0_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D398u)

/** \brief  D384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D384u)

/** \brief  D3A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM0_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D3A4u)

/** \brief  D3A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM0_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D3A8u)

/** \brief  D3AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM0_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D3ACu)

/** \brief  D3A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM0_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D3A0u)

/** \brief  D380, ATOM Channel ARU Read Address Register */
#define GTM_ATOM0_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D380u)

/** \brief  D384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH7_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010D384u)

/** Alias (User Manual Name) for GTM_ATOM0_CH7_SOMC.
* To use register names with standard convension, please use GTM_ATOM0_CH7_SOMC.
*/
#define	GTM_ATOM0_CH7_CTRL_SOMC	(GTM_ATOM0_CH7_SOMC)

/** \brief  D384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH7_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010D384u)

/** Alias (User Manual Name) for GTM_ATOM0_CH7_SOMI.
* To use register names with standard convension, please use GTM_ATOM0_CH7_SOMI.
*/
#define	GTM_ATOM0_CH7_CTRL_SOMI	(GTM_ATOM0_CH7_SOMI)

/** \brief  D384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH7_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010D384u)

/** Alias (User Manual Name) for GTM_ATOM0_CH7_SOMP.
* To use register names with standard convension, please use GTM_ATOM0_CH7_SOMP.
*/
#define	GTM_ATOM0_CH7_CTRL_SOMP	(GTM_ATOM0_CH7_SOMP)

/** \brief  D384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM0_CH7_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010D384u)

/** Alias (User Manual Name) for GTM_ATOM0_CH7_SOMS.
* To use register names with standard convension, please use GTM_ATOM0_CH7_SOMS.
*/
#define	GTM_ATOM0_CH7_CTRL_SOMS	(GTM_ATOM0_CH7_SOMS)

/** \brief  D388, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM0_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D388u)

/** \brief  D38C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM0_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D38Cu)

/** \brief  D39C, ATOM Channel Status Register */
#define GTM_ATOM0_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D39Cu)

/** \brief  D84C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM1_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010D84Cu)

/** \brief  D844, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM1_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010D844u)

/** \brief  D848, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM1_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010D848u)

/** \brief  D858, ATOM AGC Force Update Control Register */
#define GTM_ATOM1_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF010D858u)

/** \brief  D840, ATOM AGC Global control register */
#define GTM_ATOM1_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010D840u)

/** \brief  D85C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM1_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010D85Cu)

/** \brief  D850, ATOM AGC Output Enable Control Register */
#define GTM_ATOM1_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF010D850u)

/** \brief  D854, ATOM AGC Output Enable Status Register */
#define GTM_ATOM1_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010D854u)

/** \brief  D810, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D810u)

/** \brief  D814, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D814u)

/** \brief  D818, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D818u)

/** \brief  D804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D804u)

/** \brief  D824, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D824u)

/** \brief  D828, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D828u)

/** \brief  D82C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D82Cu)

/** \brief  D820, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D820u)

/** \brief  D800, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D800u)

/** \brief  D804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH0_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010D804u)

/** Alias (User Manual Name) for GTM_ATOM1_CH0_SOMC.
* To use register names with standard convension, please use GTM_ATOM1_CH0_SOMC.
*/
#define	GTM_ATOM1_CH0_CTRL_SOMC	(GTM_ATOM1_CH0_SOMC)

/** \brief  D804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH0_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010D804u)

/** Alias (User Manual Name) for GTM_ATOM1_CH0_SOMI.
* To use register names with standard convension, please use GTM_ATOM1_CH0_SOMI.
*/
#define	GTM_ATOM1_CH0_CTRL_SOMI	(GTM_ATOM1_CH0_SOMI)

/** \brief  D804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH0_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010D804u)

/** Alias (User Manual Name) for GTM_ATOM1_CH0_SOMP.
* To use register names with standard convension, please use GTM_ATOM1_CH0_SOMP.
*/
#define	GTM_ATOM1_CH0_CTRL_SOMP	(GTM_ATOM1_CH0_SOMP)

/** \brief  D804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH0_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010D804u)

/** Alias (User Manual Name) for GTM_ATOM1_CH0_SOMS.
* To use register names with standard convension, please use GTM_ATOM1_CH0_SOMS.
*/
#define	GTM_ATOM1_CH0_CTRL_SOMS	(GTM_ATOM1_CH0_SOMS)

/** \brief  D808, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D808u)

/** \brief  D80C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D80Cu)

/** \brief  D81C, ATOM Channel Status Register */
#define GTM_ATOM1_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D81Cu)

/** \brief  D890, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D890u)

/** \brief  D894, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D894u)

/** \brief  D898, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D898u)

/** \brief  D884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D884u)

/** \brief  D8A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D8A4u)

/** \brief  D8A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D8A8u)

/** \brief  D8AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D8ACu)

/** \brief  D8A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D8A0u)

/** \brief  D880, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D880u)

/** \brief  D884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH1_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010D884u)

/** Alias (User Manual Name) for GTM_ATOM1_CH1_SOMC.
* To use register names with standard convension, please use GTM_ATOM1_CH1_SOMC.
*/
#define	GTM_ATOM1_CH1_CTRL_SOMC	(GTM_ATOM1_CH1_SOMC)

/** \brief  D884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH1_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010D884u)

/** Alias (User Manual Name) for GTM_ATOM1_CH1_SOMI.
* To use register names with standard convension, please use GTM_ATOM1_CH1_SOMI.
*/
#define	GTM_ATOM1_CH1_CTRL_SOMI	(GTM_ATOM1_CH1_SOMI)

/** \brief  D884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH1_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010D884u)

/** Alias (User Manual Name) for GTM_ATOM1_CH1_SOMP.
* To use register names with standard convension, please use GTM_ATOM1_CH1_SOMP.
*/
#define	GTM_ATOM1_CH1_CTRL_SOMP	(GTM_ATOM1_CH1_SOMP)

/** \brief  D884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH1_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010D884u)

/** Alias (User Manual Name) for GTM_ATOM1_CH1_SOMS.
* To use register names with standard convension, please use GTM_ATOM1_CH1_SOMS.
*/
#define	GTM_ATOM1_CH1_CTRL_SOMS	(GTM_ATOM1_CH1_SOMS)

/** \brief  D888, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D888u)

/** \brief  D88C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D88Cu)

/** \brief  D89C, ATOM Channel Status Register */
#define GTM_ATOM1_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D89Cu)

/** \brief  D910, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D910u)

/** \brief  D914, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D914u)

/** \brief  D918, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D918u)

/** \brief  D904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D904u)

/** \brief  D924, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D924u)

/** \brief  D928, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D928u)

/** \brief  D92C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D92Cu)

/** \brief  D920, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D920u)

/** \brief  D900, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D900u)

/** \brief  D904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH2_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010D904u)

/** Alias (User Manual Name) for GTM_ATOM1_CH2_SOMC.
* To use register names with standard convension, please use GTM_ATOM1_CH2_SOMC.
*/
#define	GTM_ATOM1_CH2_CTRL_SOMC	(GTM_ATOM1_CH2_SOMC)

/** \brief  D904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH2_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010D904u)

/** Alias (User Manual Name) for GTM_ATOM1_CH2_SOMI.
* To use register names with standard convension, please use GTM_ATOM1_CH2_SOMI.
*/
#define	GTM_ATOM1_CH2_CTRL_SOMI	(GTM_ATOM1_CH2_SOMI)

/** \brief  D904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH2_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010D904u)

/** Alias (User Manual Name) for GTM_ATOM1_CH2_SOMP.
* To use register names with standard convension, please use GTM_ATOM1_CH2_SOMP.
*/
#define	GTM_ATOM1_CH2_CTRL_SOMP	(GTM_ATOM1_CH2_SOMP)

/** \brief  D904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH2_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010D904u)

/** Alias (User Manual Name) for GTM_ATOM1_CH2_SOMS.
* To use register names with standard convension, please use GTM_ATOM1_CH2_SOMS.
*/
#define	GTM_ATOM1_CH2_CTRL_SOMS	(GTM_ATOM1_CH2_SOMS)

/** \brief  D908, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D908u)

/** \brief  D90C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D90Cu)

/** \brief  D91C, ATOM Channel Status Register */
#define GTM_ATOM1_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D91Cu)

/** \brief  D990, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010D990u)

/** \brief  D994, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010D994u)

/** \brief  D998, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010D998u)

/** \brief  D984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010D984u)

/** \brief  D9A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010D9A4u)

/** \brief  D9A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010D9A8u)

/** \brief  D9AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010D9ACu)

/** \brief  D9A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010D9A0u)

/** \brief  D980, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010D980u)

/** \brief  D984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH3_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010D984u)

/** Alias (User Manual Name) for GTM_ATOM1_CH3_SOMC.
* To use register names with standard convension, please use GTM_ATOM1_CH3_SOMC.
*/
#define	GTM_ATOM1_CH3_CTRL_SOMC	(GTM_ATOM1_CH3_SOMC)

/** \brief  D984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH3_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010D984u)

/** Alias (User Manual Name) for GTM_ATOM1_CH3_SOMI.
* To use register names with standard convension, please use GTM_ATOM1_CH3_SOMI.
*/
#define	GTM_ATOM1_CH3_CTRL_SOMI	(GTM_ATOM1_CH3_SOMI)

/** \brief  D984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH3_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010D984u)

/** Alias (User Manual Name) for GTM_ATOM1_CH3_SOMP.
* To use register names with standard convension, please use GTM_ATOM1_CH3_SOMP.
*/
#define	GTM_ATOM1_CH3_CTRL_SOMP	(GTM_ATOM1_CH3_SOMP)

/** \brief  D984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH3_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010D984u)

/** Alias (User Manual Name) for GTM_ATOM1_CH3_SOMS.
* To use register names with standard convension, please use GTM_ATOM1_CH3_SOMS.
*/
#define	GTM_ATOM1_CH3_CTRL_SOMS	(GTM_ATOM1_CH3_SOMS)

/** \brief  D988, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010D988u)

/** \brief  D98C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010D98Cu)

/** \brief  D99C, ATOM Channel Status Register */
#define GTM_ATOM1_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010D99Cu)

/** \brief  DA10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DA10u)

/** \brief  DA14, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DA14u)

/** \brief  DA18, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DA18u)

/** \brief  DA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DA04u)

/** \brief  DA24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DA24u)

/** \brief  DA28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DA28u)

/** \brief  DA2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DA2Cu)

/** \brief  DA20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DA20u)

/** \brief  DA00, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DA00u)

/** \brief  DA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH4_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010DA04u)

/** Alias (User Manual Name) for GTM_ATOM1_CH4_SOMC.
* To use register names with standard convension, please use GTM_ATOM1_CH4_SOMC.
*/
#define	GTM_ATOM1_CH4_CTRL_SOMC	(GTM_ATOM1_CH4_SOMC)

/** \brief  DA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH4_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010DA04u)

/** Alias (User Manual Name) for GTM_ATOM1_CH4_SOMI.
* To use register names with standard convension, please use GTM_ATOM1_CH4_SOMI.
*/
#define	GTM_ATOM1_CH4_CTRL_SOMI	(GTM_ATOM1_CH4_SOMI)

/** \brief  DA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH4_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010DA04u)

/** Alias (User Manual Name) for GTM_ATOM1_CH4_SOMP.
* To use register names with standard convension, please use GTM_ATOM1_CH4_SOMP.
*/
#define	GTM_ATOM1_CH4_CTRL_SOMP	(GTM_ATOM1_CH4_SOMP)

/** \brief  DA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH4_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010DA04u)

/** Alias (User Manual Name) for GTM_ATOM1_CH4_SOMS.
* To use register names with standard convension, please use GTM_ATOM1_CH4_SOMS.
*/
#define	GTM_ATOM1_CH4_CTRL_SOMS	(GTM_ATOM1_CH4_SOMS)

/** \brief  DA08, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DA08u)

/** \brief  DA0C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DA0Cu)

/** \brief  DA1C, ATOM Channel Status Register */
#define GTM_ATOM1_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DA1Cu)

/** \brief  DA90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DA90u)

/** \brief  DA94, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DA94u)

/** \brief  DA98, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DA98u)

/** \brief  DA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DA84u)

/** \brief  DAA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DAA4u)

/** \brief  DAA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DAA8u)

/** \brief  DAAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DAACu)

/** \brief  DAA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DAA0u)

/** \brief  DA80, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DA80u)

/** \brief  DA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH5_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010DA84u)

/** Alias (User Manual Name) for GTM_ATOM1_CH5_SOMC.
* To use register names with standard convension, please use GTM_ATOM1_CH5_SOMC.
*/
#define	GTM_ATOM1_CH5_CTRL_SOMC	(GTM_ATOM1_CH5_SOMC)

/** \brief  DA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH5_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010DA84u)

/** Alias (User Manual Name) for GTM_ATOM1_CH5_SOMI.
* To use register names with standard convension, please use GTM_ATOM1_CH5_SOMI.
*/
#define	GTM_ATOM1_CH5_CTRL_SOMI	(GTM_ATOM1_CH5_SOMI)

/** \brief  DA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH5_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010DA84u)

/** Alias (User Manual Name) for GTM_ATOM1_CH5_SOMP.
* To use register names with standard convension, please use GTM_ATOM1_CH5_SOMP.
*/
#define	GTM_ATOM1_CH5_CTRL_SOMP	(GTM_ATOM1_CH5_SOMP)

/** \brief  DA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH5_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010DA84u)

/** Alias (User Manual Name) for GTM_ATOM1_CH5_SOMS.
* To use register names with standard convension, please use GTM_ATOM1_CH5_SOMS.
*/
#define	GTM_ATOM1_CH5_CTRL_SOMS	(GTM_ATOM1_CH5_SOMS)

/** \brief  DA88, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DA88u)

/** \brief  DA8C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DA8Cu)

/** \brief  DA9C, ATOM Channel Status Register */
#define GTM_ATOM1_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DA9Cu)

/** \brief  DB10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DB10u)

/** \brief  DB14, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DB14u)

/** \brief  DB18, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DB18u)

/** \brief  DB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DB04u)

/** \brief  DB24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DB24u)

/** \brief  DB28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DB28u)

/** \brief  DB2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DB2Cu)

/** \brief  DB20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DB20u)

/** \brief  DB00, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DB00u)

/** \brief  DB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH6_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010DB04u)

/** Alias (User Manual Name) for GTM_ATOM1_CH6_SOMC.
* To use register names with standard convension, please use GTM_ATOM1_CH6_SOMC.
*/
#define	GTM_ATOM1_CH6_CTRL_SOMC	(GTM_ATOM1_CH6_SOMC)

/** \brief  DB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH6_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010DB04u)

/** Alias (User Manual Name) for GTM_ATOM1_CH6_SOMI.
* To use register names with standard convension, please use GTM_ATOM1_CH6_SOMI.
*/
#define	GTM_ATOM1_CH6_CTRL_SOMI	(GTM_ATOM1_CH6_SOMI)

/** \brief  DB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH6_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010DB04u)

/** Alias (User Manual Name) for GTM_ATOM1_CH6_SOMP.
* To use register names with standard convension, please use GTM_ATOM1_CH6_SOMP.
*/
#define	GTM_ATOM1_CH6_CTRL_SOMP	(GTM_ATOM1_CH6_SOMP)

/** \brief  DB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH6_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010DB04u)

/** Alias (User Manual Name) for GTM_ATOM1_CH6_SOMS.
* To use register names with standard convension, please use GTM_ATOM1_CH6_SOMS.
*/
#define	GTM_ATOM1_CH6_CTRL_SOMS	(GTM_ATOM1_CH6_SOMS)

/** \brief  DB08, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DB08u)

/** \brief  DB0C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DB0Cu)

/** \brief  DB1C, ATOM Channel Status Register */
#define GTM_ATOM1_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DB1Cu)

/** \brief  DB90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM1_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010DB90u)

/** \brief  DB94, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM1_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010DB94u)

/** \brief  DB98, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM1_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010DB98u)

/** \brief  DB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010DB84u)

/** \brief  DBA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM1_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010DBA4u)

/** \brief  DBA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM1_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010DBA8u)

/** \brief  DBAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM1_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010DBACu)

/** \brief  DBA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM1_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010DBA0u)

/** \brief  DB80, ATOM Channel ARU Read Address Register */
#define GTM_ATOM1_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010DB80u)

/** \brief  DB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH7_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010DB84u)

/** Alias (User Manual Name) for GTM_ATOM1_CH7_SOMC.
* To use register names with standard convension, please use GTM_ATOM1_CH7_SOMC.
*/
#define	GTM_ATOM1_CH7_CTRL_SOMC	(GTM_ATOM1_CH7_SOMC)

/** \brief  DB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH7_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010DB84u)

/** Alias (User Manual Name) for GTM_ATOM1_CH7_SOMI.
* To use register names with standard convension, please use GTM_ATOM1_CH7_SOMI.
*/
#define	GTM_ATOM1_CH7_CTRL_SOMI	(GTM_ATOM1_CH7_SOMI)

/** \brief  DB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH7_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010DB84u)

/** Alias (User Manual Name) for GTM_ATOM1_CH7_SOMP.
* To use register names with standard convension, please use GTM_ATOM1_CH7_SOMP.
*/
#define	GTM_ATOM1_CH7_CTRL_SOMP	(GTM_ATOM1_CH7_SOMP)

/** \brief  DB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM1_CH7_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010DB84u)

/** Alias (User Manual Name) for GTM_ATOM1_CH7_SOMS.
* To use register names with standard convension, please use GTM_ATOM1_CH7_SOMS.
*/
#define	GTM_ATOM1_CH7_CTRL_SOMS	(GTM_ATOM1_CH7_SOMS)

/** \brief  DB88, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM1_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010DB88u)

/** \brief  DB8C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM1_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010DB8Cu)

/** \brief  DB9C, ATOM Channel Status Register */
#define GTM_ATOM1_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010DB9Cu)

/** \brief  E04C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM2_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010E04Cu)

/** \brief  E044, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM2_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010E044u)

/** \brief  E048, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM2_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010E048u)

/** \brief  E058, ATOM AGC Force Update Control Register */
#define GTM_ATOM2_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF010E058u)

/** \brief  E040, ATOM AGC Global control register */
#define GTM_ATOM2_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010E040u)

/** \brief  E05C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM2_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010E05Cu)

/** \brief  E050, ATOM AGC Output Enable Control Register */
#define GTM_ATOM2_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF010E050u)

/** \brief  E054, ATOM AGC Output Enable Status Register */
#define GTM_ATOM2_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010E054u)

/** \brief  E010, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E010u)

/** \brief  E014, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E014u)

/** \brief  E018, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E018u)

/** \brief  E004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E004u)

/** \brief  E024, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E024u)

/** \brief  E028, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E028u)

/** \brief  E02C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E02Cu)

/** \brief  E020, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E020u)

/** \brief  E000, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E000u)

/** \brief  E004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH0_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010E004u)

/** Alias (User Manual Name) for GTM_ATOM2_CH0_SOMC.
* To use register names with standard convension, please use GTM_ATOM2_CH0_SOMC.
*/
#define	GTM_ATOM2_CH0_CTRL_SOMC	(GTM_ATOM2_CH0_SOMC)

/** \brief  E004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH0_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010E004u)

/** Alias (User Manual Name) for GTM_ATOM2_CH0_SOMI.
* To use register names with standard convension, please use GTM_ATOM2_CH0_SOMI.
*/
#define	GTM_ATOM2_CH0_CTRL_SOMI	(GTM_ATOM2_CH0_SOMI)

/** \brief  E004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH0_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010E004u)

/** Alias (User Manual Name) for GTM_ATOM2_CH0_SOMP.
* To use register names with standard convension, please use GTM_ATOM2_CH0_SOMP.
*/
#define	GTM_ATOM2_CH0_CTRL_SOMP	(GTM_ATOM2_CH0_SOMP)

/** \brief  E004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH0_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010E004u)

/** Alias (User Manual Name) for GTM_ATOM2_CH0_SOMS.
* To use register names with standard convension, please use GTM_ATOM2_CH0_SOMS.
*/
#define	GTM_ATOM2_CH0_CTRL_SOMS	(GTM_ATOM2_CH0_SOMS)

/** \brief  E008, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E008u)

/** \brief  E00C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E00Cu)

/** \brief  E01C, ATOM Channel Status Register */
#define GTM_ATOM2_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E01Cu)

/** \brief  E090, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E090u)

/** \brief  E094, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E094u)

/** \brief  E098, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E098u)

/** \brief  E084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E084u)

/** \brief  E0A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E0A4u)

/** \brief  E0A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E0A8u)

/** \brief  E0AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E0ACu)

/** \brief  E0A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E0A0u)

/** \brief  E080, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E080u)

/** \brief  E084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH1_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010E084u)

/** Alias (User Manual Name) for GTM_ATOM2_CH1_SOMC.
* To use register names with standard convension, please use GTM_ATOM2_CH1_SOMC.
*/
#define	GTM_ATOM2_CH1_CTRL_SOMC	(GTM_ATOM2_CH1_SOMC)

/** \brief  E084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH1_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010E084u)

/** Alias (User Manual Name) for GTM_ATOM2_CH1_SOMI.
* To use register names with standard convension, please use GTM_ATOM2_CH1_SOMI.
*/
#define	GTM_ATOM2_CH1_CTRL_SOMI	(GTM_ATOM2_CH1_SOMI)

/** \brief  E084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH1_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010E084u)

/** Alias (User Manual Name) for GTM_ATOM2_CH1_SOMP.
* To use register names with standard convension, please use GTM_ATOM2_CH1_SOMP.
*/
#define	GTM_ATOM2_CH1_CTRL_SOMP	(GTM_ATOM2_CH1_SOMP)

/** \brief  E084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH1_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010E084u)

/** Alias (User Manual Name) for GTM_ATOM2_CH1_SOMS.
* To use register names with standard convension, please use GTM_ATOM2_CH1_SOMS.
*/
#define	GTM_ATOM2_CH1_CTRL_SOMS	(GTM_ATOM2_CH1_SOMS)

/** \brief  E088, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E088u)

/** \brief  E08C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E08Cu)

/** \brief  E09C, ATOM Channel Status Register */
#define GTM_ATOM2_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E09Cu)

/** \brief  E110, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E110u)

/** \brief  E114, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E114u)

/** \brief  E118, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E118u)

/** \brief  E104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E104u)

/** \brief  E124, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E124u)

/** \brief  E128, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E128u)

/** \brief  E12C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E12Cu)

/** \brief  E120, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E120u)

/** \brief  E100, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E100u)

/** \brief  E104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH2_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010E104u)

/** Alias (User Manual Name) for GTM_ATOM2_CH2_SOMC.
* To use register names with standard convension, please use GTM_ATOM2_CH2_SOMC.
*/
#define	GTM_ATOM2_CH2_CTRL_SOMC	(GTM_ATOM2_CH2_SOMC)

/** \brief  E104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH2_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010E104u)

/** Alias (User Manual Name) for GTM_ATOM2_CH2_SOMI.
* To use register names with standard convension, please use GTM_ATOM2_CH2_SOMI.
*/
#define	GTM_ATOM2_CH2_CTRL_SOMI	(GTM_ATOM2_CH2_SOMI)

/** \brief  E104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH2_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010E104u)

/** Alias (User Manual Name) for GTM_ATOM2_CH2_SOMP.
* To use register names with standard convension, please use GTM_ATOM2_CH2_SOMP.
*/
#define	GTM_ATOM2_CH2_CTRL_SOMP	(GTM_ATOM2_CH2_SOMP)

/** \brief  E104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH2_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010E104u)

/** Alias (User Manual Name) for GTM_ATOM2_CH2_SOMS.
* To use register names with standard convension, please use GTM_ATOM2_CH2_SOMS.
*/
#define	GTM_ATOM2_CH2_CTRL_SOMS	(GTM_ATOM2_CH2_SOMS)

/** \brief  E108, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E108u)

/** \brief  E10C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E10Cu)

/** \brief  E11C, ATOM Channel Status Register */
#define GTM_ATOM2_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E11Cu)

/** \brief  E190, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E190u)

/** \brief  E194, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E194u)

/** \brief  E198, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E198u)

/** \brief  E184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E184u)

/** \brief  E1A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E1A4u)

/** \brief  E1A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E1A8u)

/** \brief  E1AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E1ACu)

/** \brief  E1A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E1A0u)

/** \brief  E180, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E180u)

/** \brief  E184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH3_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010E184u)

/** Alias (User Manual Name) for GTM_ATOM2_CH3_SOMC.
* To use register names with standard convension, please use GTM_ATOM2_CH3_SOMC.
*/
#define	GTM_ATOM2_CH3_CTRL_SOMC	(GTM_ATOM2_CH3_SOMC)

/** \brief  E184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH3_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010E184u)

/** Alias (User Manual Name) for GTM_ATOM2_CH3_SOMI.
* To use register names with standard convension, please use GTM_ATOM2_CH3_SOMI.
*/
#define	GTM_ATOM2_CH3_CTRL_SOMI	(GTM_ATOM2_CH3_SOMI)

/** \brief  E184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH3_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010E184u)

/** Alias (User Manual Name) for GTM_ATOM2_CH3_SOMP.
* To use register names with standard convension, please use GTM_ATOM2_CH3_SOMP.
*/
#define	GTM_ATOM2_CH3_CTRL_SOMP	(GTM_ATOM2_CH3_SOMP)

/** \brief  E184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH3_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010E184u)

/** Alias (User Manual Name) for GTM_ATOM2_CH3_SOMS.
* To use register names with standard convension, please use GTM_ATOM2_CH3_SOMS.
*/
#define	GTM_ATOM2_CH3_CTRL_SOMS	(GTM_ATOM2_CH3_SOMS)

/** \brief  E188, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E188u)

/** \brief  E18C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E18Cu)

/** \brief  E19C, ATOM Channel Status Register */
#define GTM_ATOM2_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E19Cu)

/** \brief  E210, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E210u)

/** \brief  E214, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E214u)

/** \brief  E218, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E218u)

/** \brief  E204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E204u)

/** \brief  E224, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E224u)

/** \brief  E228, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E228u)

/** \brief  E22C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E22Cu)

/** \brief  E220, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E220u)

/** \brief  E200, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E200u)

/** \brief  E204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH4_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010E204u)

/** Alias (User Manual Name) for GTM_ATOM2_CH4_SOMC.
* To use register names with standard convension, please use GTM_ATOM2_CH4_SOMC.
*/
#define	GTM_ATOM2_CH4_CTRL_SOMC	(GTM_ATOM2_CH4_SOMC)

/** \brief  E204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH4_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010E204u)

/** Alias (User Manual Name) for GTM_ATOM2_CH4_SOMI.
* To use register names with standard convension, please use GTM_ATOM2_CH4_SOMI.
*/
#define	GTM_ATOM2_CH4_CTRL_SOMI	(GTM_ATOM2_CH4_SOMI)

/** \brief  E204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH4_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010E204u)

/** Alias (User Manual Name) for GTM_ATOM2_CH4_SOMP.
* To use register names with standard convension, please use GTM_ATOM2_CH4_SOMP.
*/
#define	GTM_ATOM2_CH4_CTRL_SOMP	(GTM_ATOM2_CH4_SOMP)

/** \brief  E204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH4_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010E204u)

/** Alias (User Manual Name) for GTM_ATOM2_CH4_SOMS.
* To use register names with standard convension, please use GTM_ATOM2_CH4_SOMS.
*/
#define	GTM_ATOM2_CH4_CTRL_SOMS	(GTM_ATOM2_CH4_SOMS)

/** \brief  E208, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E208u)

/** \brief  E20C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E20Cu)

/** \brief  E21C, ATOM Channel Status Register */
#define GTM_ATOM2_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E21Cu)

/** \brief  E290, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E290u)

/** \brief  E294, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E294u)

/** \brief  E298, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E298u)

/** \brief  E284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E284u)

/** \brief  E2A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E2A4u)

/** \brief  E2A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E2A8u)

/** \brief  E2AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E2ACu)

/** \brief  E2A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E2A0u)

/** \brief  E280, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E280u)

/** \brief  E284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH5_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010E284u)

/** Alias (User Manual Name) for GTM_ATOM2_CH5_SOMC.
* To use register names with standard convension, please use GTM_ATOM2_CH5_SOMC.
*/
#define	GTM_ATOM2_CH5_CTRL_SOMC	(GTM_ATOM2_CH5_SOMC)

/** \brief  E284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH5_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010E284u)

/** Alias (User Manual Name) for GTM_ATOM2_CH5_SOMI.
* To use register names with standard convension, please use GTM_ATOM2_CH5_SOMI.
*/
#define	GTM_ATOM2_CH5_CTRL_SOMI	(GTM_ATOM2_CH5_SOMI)

/** \brief  E284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH5_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010E284u)

/** Alias (User Manual Name) for GTM_ATOM2_CH5_SOMP.
* To use register names with standard convension, please use GTM_ATOM2_CH5_SOMP.
*/
#define	GTM_ATOM2_CH5_CTRL_SOMP	(GTM_ATOM2_CH5_SOMP)

/** \brief  E284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH5_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010E284u)

/** Alias (User Manual Name) for GTM_ATOM2_CH5_SOMS.
* To use register names with standard convension, please use GTM_ATOM2_CH5_SOMS.
*/
#define	GTM_ATOM2_CH5_CTRL_SOMS	(GTM_ATOM2_CH5_SOMS)

/** \brief  E288, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E288u)

/** \brief  E28C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E28Cu)

/** \brief  E29C, ATOM Channel Status Register */
#define GTM_ATOM2_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E29Cu)

/** \brief  E310, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E310u)

/** \brief  E314, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E314u)

/** \brief  E318, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E318u)

/** \brief  E304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E304u)

/** \brief  E324, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E324u)

/** \brief  E328, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E328u)

/** \brief  E32C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E32Cu)

/** \brief  E320, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E320u)

/** \brief  E300, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E300u)

/** \brief  E304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH6_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010E304u)

/** Alias (User Manual Name) for GTM_ATOM2_CH6_SOMC.
* To use register names with standard convension, please use GTM_ATOM2_CH6_SOMC.
*/
#define	GTM_ATOM2_CH6_CTRL_SOMC	(GTM_ATOM2_CH6_SOMC)

/** \brief  E304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH6_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010E304u)

/** Alias (User Manual Name) for GTM_ATOM2_CH6_SOMI.
* To use register names with standard convension, please use GTM_ATOM2_CH6_SOMI.
*/
#define	GTM_ATOM2_CH6_CTRL_SOMI	(GTM_ATOM2_CH6_SOMI)

/** \brief  E304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH6_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010E304u)

/** Alias (User Manual Name) for GTM_ATOM2_CH6_SOMP.
* To use register names with standard convension, please use GTM_ATOM2_CH6_SOMP.
*/
#define	GTM_ATOM2_CH6_CTRL_SOMP	(GTM_ATOM2_CH6_SOMP)

/** \brief  E304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH6_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010E304u)

/** Alias (User Manual Name) for GTM_ATOM2_CH6_SOMS.
* To use register names with standard convension, please use GTM_ATOM2_CH6_SOMS.
*/
#define	GTM_ATOM2_CH6_CTRL_SOMS	(GTM_ATOM2_CH6_SOMS)

/** \brief  E308, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E308u)

/** \brief  E30C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E30Cu)

/** \brief  E31C, ATOM Channel Status Register */
#define GTM_ATOM2_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E31Cu)

/** \brief  E390, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM2_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E390u)

/** \brief  E394, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM2_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E394u)

/** \brief  E398, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM2_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E398u)

/** \brief  E384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E384u)

/** \brief  E3A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM2_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E3A4u)

/** \brief  E3A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM2_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E3A8u)

/** \brief  E3AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM2_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E3ACu)

/** \brief  E3A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM2_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E3A0u)

/** \brief  E380, ATOM Channel ARU Read Address Register */
#define GTM_ATOM2_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E380u)

/** \brief  E384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH7_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010E384u)

/** Alias (User Manual Name) for GTM_ATOM2_CH7_SOMC.
* To use register names with standard convension, please use GTM_ATOM2_CH7_SOMC.
*/
#define	GTM_ATOM2_CH7_CTRL_SOMC	(GTM_ATOM2_CH7_SOMC)

/** \brief  E384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH7_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010E384u)

/** Alias (User Manual Name) for GTM_ATOM2_CH7_SOMI.
* To use register names with standard convension, please use GTM_ATOM2_CH7_SOMI.
*/
#define	GTM_ATOM2_CH7_CTRL_SOMI	(GTM_ATOM2_CH7_SOMI)

/** \brief  E384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH7_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010E384u)

/** Alias (User Manual Name) for GTM_ATOM2_CH7_SOMP.
* To use register names with standard convension, please use GTM_ATOM2_CH7_SOMP.
*/
#define	GTM_ATOM2_CH7_CTRL_SOMP	(GTM_ATOM2_CH7_SOMP)

/** \brief  E384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM2_CH7_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010E384u)

/** Alias (User Manual Name) for GTM_ATOM2_CH7_SOMS.
* To use register names with standard convension, please use GTM_ATOM2_CH7_SOMS.
*/
#define	GTM_ATOM2_CH7_CTRL_SOMS	(GTM_ATOM2_CH7_SOMS)

/** \brief  E388, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM2_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E388u)

/** \brief  E38C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM2_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E38Cu)

/** \brief  E39C, ATOM Channel Status Register */
#define GTM_ATOM2_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E39Cu)

/** \brief  E84C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM3_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010E84Cu)

/** \brief  E844, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM3_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010E844u)

/** \brief  E848, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM3_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010E848u)

/** \brief  E858, ATOM AGC Force Update Control Register */
#define GTM_ATOM3_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF010E858u)

/** \brief  E840, ATOM AGC Global control register */
#define GTM_ATOM3_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010E840u)

/** \brief  E85C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM3_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010E85Cu)

/** \brief  E850, ATOM AGC Output Enable Control Register */
#define GTM_ATOM3_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF010E850u)

/** \brief  E854, ATOM AGC Output Enable Status Register */
#define GTM_ATOM3_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010E854u)

/** \brief  E810, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E810u)

/** \brief  E814, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E814u)

/** \brief  E818, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E818u)

/** \brief  E804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E804u)

/** \brief  E824, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E824u)

/** \brief  E828, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E828u)

/** \brief  E82C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E82Cu)

/** \brief  E820, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E820u)

/** \brief  E800, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E800u)

/** \brief  E804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH0_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010E804u)

/** Alias (User Manual Name) for GTM_ATOM3_CH0_SOMC.
* To use register names with standard convension, please use GTM_ATOM3_CH0_SOMC.
*/
#define	GTM_ATOM3_CH0_CTRL_SOMC	(GTM_ATOM3_CH0_SOMC)

/** \brief  E804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH0_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010E804u)

/** Alias (User Manual Name) for GTM_ATOM3_CH0_SOMI.
* To use register names with standard convension, please use GTM_ATOM3_CH0_SOMI.
*/
#define	GTM_ATOM3_CH0_CTRL_SOMI	(GTM_ATOM3_CH0_SOMI)

/** \brief  E804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH0_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010E804u)

/** Alias (User Manual Name) for GTM_ATOM3_CH0_SOMP.
* To use register names with standard convension, please use GTM_ATOM3_CH0_SOMP.
*/
#define	GTM_ATOM3_CH0_CTRL_SOMP	(GTM_ATOM3_CH0_SOMP)

/** \brief  E804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH0_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010E804u)

/** Alias (User Manual Name) for GTM_ATOM3_CH0_SOMS.
* To use register names with standard convension, please use GTM_ATOM3_CH0_SOMS.
*/
#define	GTM_ATOM3_CH0_CTRL_SOMS	(GTM_ATOM3_CH0_SOMS)

/** \brief  E808, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E808u)

/** \brief  E80C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E80Cu)

/** \brief  E81C, ATOM Channel Status Register */
#define GTM_ATOM3_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E81Cu)

/** \brief  E890, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E890u)

/** \brief  E894, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E894u)

/** \brief  E898, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E898u)

/** \brief  E884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E884u)

/** \brief  E8A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E8A4u)

/** \brief  E8A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E8A8u)

/** \brief  E8AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E8ACu)

/** \brief  E8A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E8A0u)

/** \brief  E880, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E880u)

/** \brief  E884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH1_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010E884u)

/** Alias (User Manual Name) for GTM_ATOM3_CH1_SOMC.
* To use register names with standard convension, please use GTM_ATOM3_CH1_SOMC.
*/
#define	GTM_ATOM3_CH1_CTRL_SOMC	(GTM_ATOM3_CH1_SOMC)

/** \brief  E884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH1_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010E884u)

/** Alias (User Manual Name) for GTM_ATOM3_CH1_SOMI.
* To use register names with standard convension, please use GTM_ATOM3_CH1_SOMI.
*/
#define	GTM_ATOM3_CH1_CTRL_SOMI	(GTM_ATOM3_CH1_SOMI)

/** \brief  E884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH1_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010E884u)

/** Alias (User Manual Name) for GTM_ATOM3_CH1_SOMP.
* To use register names with standard convension, please use GTM_ATOM3_CH1_SOMP.
*/
#define	GTM_ATOM3_CH1_CTRL_SOMP	(GTM_ATOM3_CH1_SOMP)

/** \brief  E884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH1_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010E884u)

/** Alias (User Manual Name) for GTM_ATOM3_CH1_SOMS.
* To use register names with standard convension, please use GTM_ATOM3_CH1_SOMS.
*/
#define	GTM_ATOM3_CH1_CTRL_SOMS	(GTM_ATOM3_CH1_SOMS)

/** \brief  E888, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E888u)

/** \brief  E88C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E88Cu)

/** \brief  E89C, ATOM Channel Status Register */
#define GTM_ATOM3_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E89Cu)

/** \brief  E910, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E910u)

/** \brief  E914, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E914u)

/** \brief  E918, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E918u)

/** \brief  E904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E904u)

/** \brief  E924, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E924u)

/** \brief  E928, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E928u)

/** \brief  E92C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E92Cu)

/** \brief  E920, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E920u)

/** \brief  E900, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E900u)

/** \brief  E904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH2_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010E904u)

/** Alias (User Manual Name) for GTM_ATOM3_CH2_SOMC.
* To use register names with standard convension, please use GTM_ATOM3_CH2_SOMC.
*/
#define	GTM_ATOM3_CH2_CTRL_SOMC	(GTM_ATOM3_CH2_SOMC)

/** \brief  E904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH2_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010E904u)

/** Alias (User Manual Name) for GTM_ATOM3_CH2_SOMI.
* To use register names with standard convension, please use GTM_ATOM3_CH2_SOMI.
*/
#define	GTM_ATOM3_CH2_CTRL_SOMI	(GTM_ATOM3_CH2_SOMI)

/** \brief  E904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH2_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010E904u)

/** Alias (User Manual Name) for GTM_ATOM3_CH2_SOMP.
* To use register names with standard convension, please use GTM_ATOM3_CH2_SOMP.
*/
#define	GTM_ATOM3_CH2_CTRL_SOMP	(GTM_ATOM3_CH2_SOMP)

/** \brief  E904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH2_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010E904u)

/** Alias (User Manual Name) for GTM_ATOM3_CH2_SOMS.
* To use register names with standard convension, please use GTM_ATOM3_CH2_SOMS.
*/
#define	GTM_ATOM3_CH2_CTRL_SOMS	(GTM_ATOM3_CH2_SOMS)

/** \brief  E908, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E908u)

/** \brief  E90C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E90Cu)

/** \brief  E91C, ATOM Channel Status Register */
#define GTM_ATOM3_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E91Cu)

/** \brief  E990, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010E990u)

/** \brief  E994, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010E994u)

/** \brief  E998, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010E998u)

/** \brief  E984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010E984u)

/** \brief  E9A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010E9A4u)

/** \brief  E9A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010E9A8u)

/** \brief  E9AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010E9ACu)

/** \brief  E9A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010E9A0u)

/** \brief  E980, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010E980u)

/** \brief  E984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH3_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010E984u)

/** Alias (User Manual Name) for GTM_ATOM3_CH3_SOMC.
* To use register names with standard convension, please use GTM_ATOM3_CH3_SOMC.
*/
#define	GTM_ATOM3_CH3_CTRL_SOMC	(GTM_ATOM3_CH3_SOMC)

/** \brief  E984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH3_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010E984u)

/** Alias (User Manual Name) for GTM_ATOM3_CH3_SOMI.
* To use register names with standard convension, please use GTM_ATOM3_CH3_SOMI.
*/
#define	GTM_ATOM3_CH3_CTRL_SOMI	(GTM_ATOM3_CH3_SOMI)

/** \brief  E984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH3_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010E984u)

/** Alias (User Manual Name) for GTM_ATOM3_CH3_SOMP.
* To use register names with standard convension, please use GTM_ATOM3_CH3_SOMP.
*/
#define	GTM_ATOM3_CH3_CTRL_SOMP	(GTM_ATOM3_CH3_SOMP)

/** \brief  E984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH3_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010E984u)

/** Alias (User Manual Name) for GTM_ATOM3_CH3_SOMS.
* To use register names with standard convension, please use GTM_ATOM3_CH3_SOMS.
*/
#define	GTM_ATOM3_CH3_CTRL_SOMS	(GTM_ATOM3_CH3_SOMS)

/** \brief  E988, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010E988u)

/** \brief  E98C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010E98Cu)

/** \brief  E99C, ATOM Channel Status Register */
#define GTM_ATOM3_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010E99Cu)

/** \brief  EA10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EA10u)

/** \brief  EA14, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EA14u)

/** \brief  EA18, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EA18u)

/** \brief  EA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EA04u)

/** \brief  EA24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EA24u)

/** \brief  EA28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EA28u)

/** \brief  EA2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EA2Cu)

/** \brief  EA20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EA20u)

/** \brief  EA00, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EA00u)

/** \brief  EA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH4_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010EA04u)

/** Alias (User Manual Name) for GTM_ATOM3_CH4_SOMC.
* To use register names with standard convension, please use GTM_ATOM3_CH4_SOMC.
*/
#define	GTM_ATOM3_CH4_CTRL_SOMC	(GTM_ATOM3_CH4_SOMC)

/** \brief  EA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH4_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010EA04u)

/** Alias (User Manual Name) for GTM_ATOM3_CH4_SOMI.
* To use register names with standard convension, please use GTM_ATOM3_CH4_SOMI.
*/
#define	GTM_ATOM3_CH4_CTRL_SOMI	(GTM_ATOM3_CH4_SOMI)

/** \brief  EA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH4_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010EA04u)

/** Alias (User Manual Name) for GTM_ATOM3_CH4_SOMP.
* To use register names with standard convension, please use GTM_ATOM3_CH4_SOMP.
*/
#define	GTM_ATOM3_CH4_CTRL_SOMP	(GTM_ATOM3_CH4_SOMP)

/** \brief  EA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH4_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010EA04u)

/** Alias (User Manual Name) for GTM_ATOM3_CH4_SOMS.
* To use register names with standard convension, please use GTM_ATOM3_CH4_SOMS.
*/
#define	GTM_ATOM3_CH4_CTRL_SOMS	(GTM_ATOM3_CH4_SOMS)

/** \brief  EA08, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EA08u)

/** \brief  EA0C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EA0Cu)

/** \brief  EA1C, ATOM Channel Status Register */
#define GTM_ATOM3_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EA1Cu)

/** \brief  EA90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EA90u)

/** \brief  EA94, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EA94u)

/** \brief  EA98, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EA98u)

/** \brief  EA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EA84u)

/** \brief  EAA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EAA4u)

/** \brief  EAA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EAA8u)

/** \brief  EAAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EAACu)

/** \brief  EAA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EAA0u)

/** \brief  EA80, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EA80u)

/** \brief  EA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH5_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010EA84u)

/** Alias (User Manual Name) for GTM_ATOM3_CH5_SOMC.
* To use register names with standard convension, please use GTM_ATOM3_CH5_SOMC.
*/
#define	GTM_ATOM3_CH5_CTRL_SOMC	(GTM_ATOM3_CH5_SOMC)

/** \brief  EA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH5_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010EA84u)

/** Alias (User Manual Name) for GTM_ATOM3_CH5_SOMI.
* To use register names with standard convension, please use GTM_ATOM3_CH5_SOMI.
*/
#define	GTM_ATOM3_CH5_CTRL_SOMI	(GTM_ATOM3_CH5_SOMI)

/** \brief  EA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH5_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010EA84u)

/** Alias (User Manual Name) for GTM_ATOM3_CH5_SOMP.
* To use register names with standard convension, please use GTM_ATOM3_CH5_SOMP.
*/
#define	GTM_ATOM3_CH5_CTRL_SOMP	(GTM_ATOM3_CH5_SOMP)

/** \brief  EA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH5_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010EA84u)

/** Alias (User Manual Name) for GTM_ATOM3_CH5_SOMS.
* To use register names with standard convension, please use GTM_ATOM3_CH5_SOMS.
*/
#define	GTM_ATOM3_CH5_CTRL_SOMS	(GTM_ATOM3_CH5_SOMS)

/** \brief  EA88, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EA88u)

/** \brief  EA8C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EA8Cu)

/** \brief  EA9C, ATOM Channel Status Register */
#define GTM_ATOM3_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EA9Cu)

/** \brief  EB10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EB10u)

/** \brief  EB14, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EB14u)

/** \brief  EB18, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EB18u)

/** \brief  EB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EB04u)

/** \brief  EB24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EB24u)

/** \brief  EB28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EB28u)

/** \brief  EB2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EB2Cu)

/** \brief  EB20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EB20u)

/** \brief  EB00, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EB00u)

/** \brief  EB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH6_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010EB04u)

/** Alias (User Manual Name) for GTM_ATOM3_CH6_SOMC.
* To use register names with standard convension, please use GTM_ATOM3_CH6_SOMC.
*/
#define	GTM_ATOM3_CH6_CTRL_SOMC	(GTM_ATOM3_CH6_SOMC)

/** \brief  EB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH6_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010EB04u)

/** Alias (User Manual Name) for GTM_ATOM3_CH6_SOMI.
* To use register names with standard convension, please use GTM_ATOM3_CH6_SOMI.
*/
#define	GTM_ATOM3_CH6_CTRL_SOMI	(GTM_ATOM3_CH6_SOMI)

/** \brief  EB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH6_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010EB04u)

/** Alias (User Manual Name) for GTM_ATOM3_CH6_SOMP.
* To use register names with standard convension, please use GTM_ATOM3_CH6_SOMP.
*/
#define	GTM_ATOM3_CH6_CTRL_SOMP	(GTM_ATOM3_CH6_SOMP)

/** \brief  EB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH6_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010EB04u)

/** Alias (User Manual Name) for GTM_ATOM3_CH6_SOMS.
* To use register names with standard convension, please use GTM_ATOM3_CH6_SOMS.
*/
#define	GTM_ATOM3_CH6_CTRL_SOMS	(GTM_ATOM3_CH6_SOMS)

/** \brief  EB08, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EB08u)

/** \brief  EB0C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EB0Cu)

/** \brief  EB1C, ATOM Channel Status Register */
#define GTM_ATOM3_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EB1Cu)

/** \brief  EB90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM3_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010EB90u)

/** \brief  EB94, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM3_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010EB94u)

/** \brief  EB98, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM3_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010EB98u)

/** \brief  EB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010EB84u)

/** \brief  EBA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM3_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010EBA4u)

/** \brief  EBA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM3_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010EBA8u)

/** \brief  EBAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM3_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010EBACu)

/** \brief  EBA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM3_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010EBA0u)

/** \brief  EB80, ATOM Channel ARU Read Address Register */
#define GTM_ATOM3_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010EB80u)

/** \brief  EB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH7_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010EB84u)

/** Alias (User Manual Name) for GTM_ATOM3_CH7_SOMC.
* To use register names with standard convension, please use GTM_ATOM3_CH7_SOMC.
*/
#define	GTM_ATOM3_CH7_CTRL_SOMC	(GTM_ATOM3_CH7_SOMC)

/** \brief  EB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH7_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010EB84u)

/** Alias (User Manual Name) for GTM_ATOM3_CH7_SOMI.
* To use register names with standard convension, please use GTM_ATOM3_CH7_SOMI.
*/
#define	GTM_ATOM3_CH7_CTRL_SOMI	(GTM_ATOM3_CH7_SOMI)

/** \brief  EB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH7_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010EB84u)

/** Alias (User Manual Name) for GTM_ATOM3_CH7_SOMP.
* To use register names with standard convension, please use GTM_ATOM3_CH7_SOMP.
*/
#define	GTM_ATOM3_CH7_CTRL_SOMP	(GTM_ATOM3_CH7_SOMP)

/** \brief  EB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM3_CH7_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010EB84u)

/** Alias (User Manual Name) for GTM_ATOM3_CH7_SOMS.
* To use register names with standard convension, please use GTM_ATOM3_CH7_SOMS.
*/
#define	GTM_ATOM3_CH7_CTRL_SOMS	(GTM_ATOM3_CH7_SOMS)

/** \brief  EB88, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM3_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010EB88u)

/** \brief  EB8C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM3_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010EB8Cu)

/** \brief  EB9C, ATOM Channel Status Register */
#define GTM_ATOM3_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010EB9Cu)

/** \brief  F04C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM4_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010F04Cu)

/** \brief  F044, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM4_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010F044u)

/** \brief  F048, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM4_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010F048u)

/** \brief  F058, ATOM AGC Force Update Control Register */
#define GTM_ATOM4_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF010F058u)

/** \brief  F040, ATOM AGC Global control register */
#define GTM_ATOM4_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010F040u)

/** \brief  F05C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM4_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010F05Cu)

/** \brief  F050, ATOM AGC Output Enable Control Register */
#define GTM_ATOM4_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF010F050u)

/** \brief  F054, ATOM AGC Output Enable Status Register */
#define GTM_ATOM4_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010F054u)

/** \brief  F010, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F010u)

/** \brief  F014, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F014u)

/** \brief  F018, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F018u)

/** \brief  F004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F004u)

/** \brief  F024, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F024u)

/** \brief  F028, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F028u)

/** \brief  F02C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F02Cu)

/** \brief  F020, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F020u)

/** \brief  F000, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F000u)

/** \brief  F004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH0_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010F004u)

/** Alias (User Manual Name) for GTM_ATOM4_CH0_SOMC.
* To use register names with standard convension, please use GTM_ATOM4_CH0_SOMC.
*/
#define	GTM_ATOM4_CH0_CTRL_SOMC	(GTM_ATOM4_CH0_SOMC)

/** \brief  F004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH0_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010F004u)

/** Alias (User Manual Name) for GTM_ATOM4_CH0_SOMI.
* To use register names with standard convension, please use GTM_ATOM4_CH0_SOMI.
*/
#define	GTM_ATOM4_CH0_CTRL_SOMI	(GTM_ATOM4_CH0_SOMI)

/** \brief  F004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH0_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010F004u)

/** Alias (User Manual Name) for GTM_ATOM4_CH0_SOMP.
* To use register names with standard convension, please use GTM_ATOM4_CH0_SOMP.
*/
#define	GTM_ATOM4_CH0_CTRL_SOMP	(GTM_ATOM4_CH0_SOMP)

/** \brief  F004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH0_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010F004u)

/** Alias (User Manual Name) for GTM_ATOM4_CH0_SOMS.
* To use register names with standard convension, please use GTM_ATOM4_CH0_SOMS.
*/
#define	GTM_ATOM4_CH0_CTRL_SOMS	(GTM_ATOM4_CH0_SOMS)

/** \brief  F008, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F008u)

/** \brief  F00C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F00Cu)

/** \brief  F01C, ATOM Channel Status Register */
#define GTM_ATOM4_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F01Cu)

/** \brief  F090, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F090u)

/** \brief  F094, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F094u)

/** \brief  F098, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F098u)

/** \brief  F084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F084u)

/** \brief  F0A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F0A4u)

/** \brief  F0A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F0A8u)

/** \brief  F0AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F0ACu)

/** \brief  F0A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F0A0u)

/** \brief  F080, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F080u)

/** \brief  F084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH1_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010F084u)

/** Alias (User Manual Name) for GTM_ATOM4_CH1_SOMC.
* To use register names with standard convension, please use GTM_ATOM4_CH1_SOMC.
*/
#define	GTM_ATOM4_CH1_CTRL_SOMC	(GTM_ATOM4_CH1_SOMC)

/** \brief  F084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH1_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010F084u)

/** Alias (User Manual Name) for GTM_ATOM4_CH1_SOMI.
* To use register names with standard convension, please use GTM_ATOM4_CH1_SOMI.
*/
#define	GTM_ATOM4_CH1_CTRL_SOMI	(GTM_ATOM4_CH1_SOMI)

/** \brief  F084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH1_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010F084u)

/** Alias (User Manual Name) for GTM_ATOM4_CH1_SOMP.
* To use register names with standard convension, please use GTM_ATOM4_CH1_SOMP.
*/
#define	GTM_ATOM4_CH1_CTRL_SOMP	(GTM_ATOM4_CH1_SOMP)

/** \brief  F084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH1_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010F084u)

/** Alias (User Manual Name) for GTM_ATOM4_CH1_SOMS.
* To use register names with standard convension, please use GTM_ATOM4_CH1_SOMS.
*/
#define	GTM_ATOM4_CH1_CTRL_SOMS	(GTM_ATOM4_CH1_SOMS)

/** \brief  F088, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F088u)

/** \brief  F08C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F08Cu)

/** \brief  F09C, ATOM Channel Status Register */
#define GTM_ATOM4_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F09Cu)

/** \brief  F110, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F110u)

/** \brief  F114, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F114u)

/** \brief  F118, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F118u)

/** \brief  F104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F104u)

/** \brief  F124, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F124u)

/** \brief  F128, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F128u)

/** \brief  F12C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F12Cu)

/** \brief  F120, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F120u)

/** \brief  F100, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F100u)

/** \brief  F104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH2_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010F104u)

/** Alias (User Manual Name) for GTM_ATOM4_CH2_SOMC.
* To use register names with standard convension, please use GTM_ATOM4_CH2_SOMC.
*/
#define	GTM_ATOM4_CH2_CTRL_SOMC	(GTM_ATOM4_CH2_SOMC)

/** \brief  F104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH2_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010F104u)

/** Alias (User Manual Name) for GTM_ATOM4_CH2_SOMI.
* To use register names with standard convension, please use GTM_ATOM4_CH2_SOMI.
*/
#define	GTM_ATOM4_CH2_CTRL_SOMI	(GTM_ATOM4_CH2_SOMI)

/** \brief  F104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH2_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010F104u)

/** Alias (User Manual Name) for GTM_ATOM4_CH2_SOMP.
* To use register names with standard convension, please use GTM_ATOM4_CH2_SOMP.
*/
#define	GTM_ATOM4_CH2_CTRL_SOMP	(GTM_ATOM4_CH2_SOMP)

/** \brief  F104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH2_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010F104u)

/** Alias (User Manual Name) for GTM_ATOM4_CH2_SOMS.
* To use register names with standard convension, please use GTM_ATOM4_CH2_SOMS.
*/
#define	GTM_ATOM4_CH2_CTRL_SOMS	(GTM_ATOM4_CH2_SOMS)

/** \brief  F108, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F108u)

/** \brief  F10C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F10Cu)

/** \brief  F11C, ATOM Channel Status Register */
#define GTM_ATOM4_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F11Cu)

/** \brief  F190, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F190u)

/** \brief  F194, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F194u)

/** \brief  F198, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F198u)

/** \brief  F184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F184u)

/** \brief  F1A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F1A4u)

/** \brief  F1A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F1A8u)

/** \brief  F1AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F1ACu)

/** \brief  F1A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F1A0u)

/** \brief  F180, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F180u)

/** \brief  F184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH3_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010F184u)

/** Alias (User Manual Name) for GTM_ATOM4_CH3_SOMC.
* To use register names with standard convension, please use GTM_ATOM4_CH3_SOMC.
*/
#define	GTM_ATOM4_CH3_CTRL_SOMC	(GTM_ATOM4_CH3_SOMC)

/** \brief  F184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH3_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010F184u)

/** Alias (User Manual Name) for GTM_ATOM4_CH3_SOMI.
* To use register names with standard convension, please use GTM_ATOM4_CH3_SOMI.
*/
#define	GTM_ATOM4_CH3_CTRL_SOMI	(GTM_ATOM4_CH3_SOMI)

/** \brief  F184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH3_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010F184u)

/** Alias (User Manual Name) for GTM_ATOM4_CH3_SOMP.
* To use register names with standard convension, please use GTM_ATOM4_CH3_SOMP.
*/
#define	GTM_ATOM4_CH3_CTRL_SOMP	(GTM_ATOM4_CH3_SOMP)

/** \brief  F184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH3_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010F184u)

/** Alias (User Manual Name) for GTM_ATOM4_CH3_SOMS.
* To use register names with standard convension, please use GTM_ATOM4_CH3_SOMS.
*/
#define	GTM_ATOM4_CH3_CTRL_SOMS	(GTM_ATOM4_CH3_SOMS)

/** \brief  F188, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F188u)

/** \brief  F18C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F18Cu)

/** \brief  F19C, ATOM Channel Status Register */
#define GTM_ATOM4_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F19Cu)

/** \brief  F210, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F210u)

/** \brief  F214, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F214u)

/** \brief  F218, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F218u)

/** \brief  F204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F204u)

/** \brief  F224, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F224u)

/** \brief  F228, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F228u)

/** \brief  F22C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F22Cu)

/** \brief  F220, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F220u)

/** \brief  F200, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F200u)

/** \brief  F204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH4_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010F204u)

/** Alias (User Manual Name) for GTM_ATOM4_CH4_SOMC.
* To use register names with standard convension, please use GTM_ATOM4_CH4_SOMC.
*/
#define	GTM_ATOM4_CH4_CTRL_SOMC	(GTM_ATOM4_CH4_SOMC)

/** \brief  F204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH4_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010F204u)

/** Alias (User Manual Name) for GTM_ATOM4_CH4_SOMI.
* To use register names with standard convension, please use GTM_ATOM4_CH4_SOMI.
*/
#define	GTM_ATOM4_CH4_CTRL_SOMI	(GTM_ATOM4_CH4_SOMI)

/** \brief  F204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH4_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010F204u)

/** Alias (User Manual Name) for GTM_ATOM4_CH4_SOMP.
* To use register names with standard convension, please use GTM_ATOM4_CH4_SOMP.
*/
#define	GTM_ATOM4_CH4_CTRL_SOMP	(GTM_ATOM4_CH4_SOMP)

/** \brief  F204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH4_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010F204u)

/** Alias (User Manual Name) for GTM_ATOM4_CH4_SOMS.
* To use register names with standard convension, please use GTM_ATOM4_CH4_SOMS.
*/
#define	GTM_ATOM4_CH4_CTRL_SOMS	(GTM_ATOM4_CH4_SOMS)

/** \brief  F208, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F208u)

/** \brief  F20C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F20Cu)

/** \brief  F21C, ATOM Channel Status Register */
#define GTM_ATOM4_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F21Cu)

/** \brief  F290, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F290u)

/** \brief  F294, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F294u)

/** \brief  F298, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F298u)

/** \brief  F284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F284u)

/** \brief  F2A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F2A4u)

/** \brief  F2A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F2A8u)

/** \brief  F2AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F2ACu)

/** \brief  F2A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F2A0u)

/** \brief  F280, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F280u)

/** \brief  F284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH5_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010F284u)

/** Alias (User Manual Name) for GTM_ATOM4_CH5_SOMC.
* To use register names with standard convension, please use GTM_ATOM4_CH5_SOMC.
*/
#define	GTM_ATOM4_CH5_CTRL_SOMC	(GTM_ATOM4_CH5_SOMC)

/** \brief  F284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH5_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010F284u)

/** Alias (User Manual Name) for GTM_ATOM4_CH5_SOMI.
* To use register names with standard convension, please use GTM_ATOM4_CH5_SOMI.
*/
#define	GTM_ATOM4_CH5_CTRL_SOMI	(GTM_ATOM4_CH5_SOMI)

/** \brief  F284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH5_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010F284u)

/** Alias (User Manual Name) for GTM_ATOM4_CH5_SOMP.
* To use register names with standard convension, please use GTM_ATOM4_CH5_SOMP.
*/
#define	GTM_ATOM4_CH5_CTRL_SOMP	(GTM_ATOM4_CH5_SOMP)

/** \brief  F284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH5_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010F284u)

/** Alias (User Manual Name) for GTM_ATOM4_CH5_SOMS.
* To use register names with standard convension, please use GTM_ATOM4_CH5_SOMS.
*/
#define	GTM_ATOM4_CH5_CTRL_SOMS	(GTM_ATOM4_CH5_SOMS)

/** \brief  F288, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F288u)

/** \brief  F28C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F28Cu)

/** \brief  F29C, ATOM Channel Status Register */
#define GTM_ATOM4_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F29Cu)

/** \brief  F310, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F310u)

/** \brief  F314, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F314u)

/** \brief  F318, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F318u)

/** \brief  F304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F304u)

/** \brief  F324, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F324u)

/** \brief  F328, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F328u)

/** \brief  F32C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F32Cu)

/** \brief  F320, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F320u)

/** \brief  F300, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F300u)

/** \brief  F304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH6_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010F304u)

/** Alias (User Manual Name) for GTM_ATOM4_CH6_SOMC.
* To use register names with standard convension, please use GTM_ATOM4_CH6_SOMC.
*/
#define	GTM_ATOM4_CH6_CTRL_SOMC	(GTM_ATOM4_CH6_SOMC)

/** \brief  F304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH6_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010F304u)

/** Alias (User Manual Name) for GTM_ATOM4_CH6_SOMI.
* To use register names with standard convension, please use GTM_ATOM4_CH6_SOMI.
*/
#define	GTM_ATOM4_CH6_CTRL_SOMI	(GTM_ATOM4_CH6_SOMI)

/** \brief  F304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH6_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010F304u)

/** Alias (User Manual Name) for GTM_ATOM4_CH6_SOMP.
* To use register names with standard convension, please use GTM_ATOM4_CH6_SOMP.
*/
#define	GTM_ATOM4_CH6_CTRL_SOMP	(GTM_ATOM4_CH6_SOMP)

/** \brief  F304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH6_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010F304u)

/** Alias (User Manual Name) for GTM_ATOM4_CH6_SOMS.
* To use register names with standard convension, please use GTM_ATOM4_CH6_SOMS.
*/
#define	GTM_ATOM4_CH6_CTRL_SOMS	(GTM_ATOM4_CH6_SOMS)

/** \brief  F308, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F308u)

/** \brief  F30C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F30Cu)

/** \brief  F31C, ATOM Channel Status Register */
#define GTM_ATOM4_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F31Cu)

/** \brief  F390, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM4_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F390u)

/** \brief  F394, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM4_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F394u)

/** \brief  F398, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM4_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F398u)

/** \brief  F384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F384u)

/** \brief  F3A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM4_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F3A4u)

/** \brief  F3A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM4_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F3A8u)

/** \brief  F3AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM4_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F3ACu)

/** \brief  F3A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM4_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F3A0u)

/** \brief  F380, ATOM Channel ARU Read Address Register */
#define GTM_ATOM4_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F380u)

/** \brief  F384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH7_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010F384u)

/** Alias (User Manual Name) for GTM_ATOM4_CH7_SOMC.
* To use register names with standard convension, please use GTM_ATOM4_CH7_SOMC.
*/
#define	GTM_ATOM4_CH7_CTRL_SOMC	(GTM_ATOM4_CH7_SOMC)

/** \brief  F384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH7_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010F384u)

/** Alias (User Manual Name) for GTM_ATOM4_CH7_SOMI.
* To use register names with standard convension, please use GTM_ATOM4_CH7_SOMI.
*/
#define	GTM_ATOM4_CH7_CTRL_SOMI	(GTM_ATOM4_CH7_SOMI)

/** \brief  F384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH7_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010F384u)

/** Alias (User Manual Name) for GTM_ATOM4_CH7_SOMP.
* To use register names with standard convension, please use GTM_ATOM4_CH7_SOMP.
*/
#define	GTM_ATOM4_CH7_CTRL_SOMP	(GTM_ATOM4_CH7_SOMP)

/** \brief  F384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM4_CH7_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010F384u)

/** Alias (User Manual Name) for GTM_ATOM4_CH7_SOMS.
* To use register names with standard convension, please use GTM_ATOM4_CH7_SOMS.
*/
#define	GTM_ATOM4_CH7_CTRL_SOMS	(GTM_ATOM4_CH7_SOMS)

/** \brief  F388, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM4_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F388u)

/** \brief  F38C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM4_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F38Cu)

/** \brief  F39C, ATOM Channel Status Register */
#define GTM_ATOM4_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F39Cu)

/** \brief  F84C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM5_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF010F84Cu)

/** \brief  F844, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM5_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF010F844u)

/** \brief  F848, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM5_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF010F848u)

/** \brief  F858, ATOM AGC Force Update Control Register */
#define GTM_ATOM5_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF010F858u)

/** \brief  F840, ATOM AGC Global control register */
#define GTM_ATOM5_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF010F840u)

/** \brief  F85C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM5_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF010F85Cu)

/** \brief  F850, ATOM AGC Output Enable Control Register */
#define GTM_ATOM5_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF010F850u)

/** \brief  F854, ATOM AGC Output Enable Status Register */
#define GTM_ATOM5_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF010F854u)

/** \brief  F810, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM5_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F810u)

/** \brief  F814, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM5_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F814u)

/** \brief  F818, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM5_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F818u)

/** \brief  F804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F804u)

/** \brief  F824, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM5_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F824u)

/** \brief  F828, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM5_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F828u)

/** \brief  F82C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM5_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F82Cu)

/** \brief  F820, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM5_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F820u)

/** \brief  F800, ATOM Channel ARU Read Address Register */
#define GTM_ATOM5_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F800u)

/** \brief  F804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH0_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010F804u)

/** Alias (User Manual Name) for GTM_ATOM5_CH0_SOMC.
* To use register names with standard convension, please use GTM_ATOM5_CH0_SOMC.
*/
#define	GTM_ATOM5_CH0_CTRL_SOMC	(GTM_ATOM5_CH0_SOMC)

/** \brief  F804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH0_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010F804u)

/** Alias (User Manual Name) for GTM_ATOM5_CH0_SOMI.
* To use register names with standard convension, please use GTM_ATOM5_CH0_SOMI.
*/
#define	GTM_ATOM5_CH0_CTRL_SOMI	(GTM_ATOM5_CH0_SOMI)

/** \brief  F804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH0_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010F804u)

/** Alias (User Manual Name) for GTM_ATOM5_CH0_SOMP.
* To use register names with standard convension, please use GTM_ATOM5_CH0_SOMP.
*/
#define	GTM_ATOM5_CH0_CTRL_SOMP	(GTM_ATOM5_CH0_SOMP)

/** \brief  F804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH0_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010F804u)

/** Alias (User Manual Name) for GTM_ATOM5_CH0_SOMS.
* To use register names with standard convension, please use GTM_ATOM5_CH0_SOMS.
*/
#define	GTM_ATOM5_CH0_CTRL_SOMS	(GTM_ATOM5_CH0_SOMS)

/** \brief  F808, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F808u)

/** \brief  F80C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F80Cu)

/** \brief  F81C, ATOM Channel Status Register */
#define GTM_ATOM5_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F81Cu)

/** \brief  F890, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM5_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F890u)

/** \brief  F894, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM5_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F894u)

/** \brief  F898, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM5_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F898u)

/** \brief  F884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F884u)

/** \brief  F8A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM5_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F8A4u)

/** \brief  F8A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM5_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F8A8u)

/** \brief  F8AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM5_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F8ACu)

/** \brief  F8A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM5_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F8A0u)

/** \brief  F880, ATOM Channel ARU Read Address Register */
#define GTM_ATOM5_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F880u)

/** \brief  F884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH1_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010F884u)

/** Alias (User Manual Name) for GTM_ATOM5_CH1_SOMC.
* To use register names with standard convension, please use GTM_ATOM5_CH1_SOMC.
*/
#define	GTM_ATOM5_CH1_CTRL_SOMC	(GTM_ATOM5_CH1_SOMC)

/** \brief  F884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH1_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010F884u)

/** Alias (User Manual Name) for GTM_ATOM5_CH1_SOMI.
* To use register names with standard convension, please use GTM_ATOM5_CH1_SOMI.
*/
#define	GTM_ATOM5_CH1_CTRL_SOMI	(GTM_ATOM5_CH1_SOMI)

/** \brief  F884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH1_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010F884u)

/** Alias (User Manual Name) for GTM_ATOM5_CH1_SOMP.
* To use register names with standard convension, please use GTM_ATOM5_CH1_SOMP.
*/
#define	GTM_ATOM5_CH1_CTRL_SOMP	(GTM_ATOM5_CH1_SOMP)

/** \brief  F884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH1_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010F884u)

/** Alias (User Manual Name) for GTM_ATOM5_CH1_SOMS.
* To use register names with standard convension, please use GTM_ATOM5_CH1_SOMS.
*/
#define	GTM_ATOM5_CH1_CTRL_SOMS	(GTM_ATOM5_CH1_SOMS)

/** \brief  F888, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F888u)

/** \brief  F88C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F88Cu)

/** \brief  F89C, ATOM Channel Status Register */
#define GTM_ATOM5_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F89Cu)

/** \brief  F910, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM5_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F910u)

/** \brief  F914, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM5_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F914u)

/** \brief  F918, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM5_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F918u)

/** \brief  F904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F904u)

/** \brief  F924, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM5_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F924u)

/** \brief  F928, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM5_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F928u)

/** \brief  F92C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM5_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F92Cu)

/** \brief  F920, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM5_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F920u)

/** \brief  F900, ATOM Channel ARU Read Address Register */
#define GTM_ATOM5_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F900u)

/** \brief  F904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH2_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010F904u)

/** Alias (User Manual Name) for GTM_ATOM5_CH2_SOMC.
* To use register names with standard convension, please use GTM_ATOM5_CH2_SOMC.
*/
#define	GTM_ATOM5_CH2_CTRL_SOMC	(GTM_ATOM5_CH2_SOMC)

/** \brief  F904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH2_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010F904u)

/** Alias (User Manual Name) for GTM_ATOM5_CH2_SOMI.
* To use register names with standard convension, please use GTM_ATOM5_CH2_SOMI.
*/
#define	GTM_ATOM5_CH2_CTRL_SOMI	(GTM_ATOM5_CH2_SOMI)

/** \brief  F904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH2_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010F904u)

/** Alias (User Manual Name) for GTM_ATOM5_CH2_SOMP.
* To use register names with standard convension, please use GTM_ATOM5_CH2_SOMP.
*/
#define	GTM_ATOM5_CH2_CTRL_SOMP	(GTM_ATOM5_CH2_SOMP)

/** \brief  F904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH2_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010F904u)

/** Alias (User Manual Name) for GTM_ATOM5_CH2_SOMS.
* To use register names with standard convension, please use GTM_ATOM5_CH2_SOMS.
*/
#define	GTM_ATOM5_CH2_CTRL_SOMS	(GTM_ATOM5_CH2_SOMS)

/** \brief  F908, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F908u)

/** \brief  F90C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F90Cu)

/** \brief  F91C, ATOM Channel Status Register */
#define GTM_ATOM5_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F91Cu)

/** \brief  F990, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM5_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010F990u)

/** \brief  F994, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM5_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010F994u)

/** \brief  F998, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM5_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010F998u)

/** \brief  F984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010F984u)

/** \brief  F9A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM5_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010F9A4u)

/** \brief  F9A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM5_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010F9A8u)

/** \brief  F9AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM5_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010F9ACu)

/** \brief  F9A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM5_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010F9A0u)

/** \brief  F980, ATOM Channel ARU Read Address Register */
#define GTM_ATOM5_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010F980u)

/** \brief  F984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH3_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010F984u)

/** Alias (User Manual Name) for GTM_ATOM5_CH3_SOMC.
* To use register names with standard convension, please use GTM_ATOM5_CH3_SOMC.
*/
#define	GTM_ATOM5_CH3_CTRL_SOMC	(GTM_ATOM5_CH3_SOMC)

/** \brief  F984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH3_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010F984u)

/** Alias (User Manual Name) for GTM_ATOM5_CH3_SOMI.
* To use register names with standard convension, please use GTM_ATOM5_CH3_SOMI.
*/
#define	GTM_ATOM5_CH3_CTRL_SOMI	(GTM_ATOM5_CH3_SOMI)

/** \brief  F984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH3_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010F984u)

/** Alias (User Manual Name) for GTM_ATOM5_CH3_SOMP.
* To use register names with standard convension, please use GTM_ATOM5_CH3_SOMP.
*/
#define	GTM_ATOM5_CH3_CTRL_SOMP	(GTM_ATOM5_CH3_SOMP)

/** \brief  F984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH3_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010F984u)

/** Alias (User Manual Name) for GTM_ATOM5_CH3_SOMS.
* To use register names with standard convension, please use GTM_ATOM5_CH3_SOMS.
*/
#define	GTM_ATOM5_CH3_CTRL_SOMS	(GTM_ATOM5_CH3_SOMS)

/** \brief  F988, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010F988u)

/** \brief  F98C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010F98Cu)

/** \brief  F99C, ATOM Channel Status Register */
#define GTM_ATOM5_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010F99Cu)

/** \brief  FA10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM5_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010FA10u)

/** \brief  FA14, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM5_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010FA14u)

/** \brief  FA18, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM5_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010FA18u)

/** \brief  FA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010FA04u)

/** \brief  FA24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM5_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010FA24u)

/** \brief  FA28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM5_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010FA28u)

/** \brief  FA2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM5_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010FA2Cu)

/** \brief  FA20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM5_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010FA20u)

/** \brief  FA00, ATOM Channel ARU Read Address Register */
#define GTM_ATOM5_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010FA00u)

/** \brief  FA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH4_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010FA04u)

/** Alias (User Manual Name) for GTM_ATOM5_CH4_SOMC.
* To use register names with standard convension, please use GTM_ATOM5_CH4_SOMC.
*/
#define	GTM_ATOM5_CH4_CTRL_SOMC	(GTM_ATOM5_CH4_SOMC)

/** \brief  FA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH4_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010FA04u)

/** Alias (User Manual Name) for GTM_ATOM5_CH4_SOMI.
* To use register names with standard convension, please use GTM_ATOM5_CH4_SOMI.
*/
#define	GTM_ATOM5_CH4_CTRL_SOMI	(GTM_ATOM5_CH4_SOMI)

/** \brief  FA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH4_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010FA04u)

/** Alias (User Manual Name) for GTM_ATOM5_CH4_SOMP.
* To use register names with standard convension, please use GTM_ATOM5_CH4_SOMP.
*/
#define	GTM_ATOM5_CH4_CTRL_SOMP	(GTM_ATOM5_CH4_SOMP)

/** \brief  FA04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH4_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010FA04u)

/** Alias (User Manual Name) for GTM_ATOM5_CH4_SOMS.
* To use register names with standard convension, please use GTM_ATOM5_CH4_SOMS.
*/
#define	GTM_ATOM5_CH4_CTRL_SOMS	(GTM_ATOM5_CH4_SOMS)

/** \brief  FA08, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010FA08u)

/** \brief  FA0C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010FA0Cu)

/** \brief  FA1C, ATOM Channel Status Register */
#define GTM_ATOM5_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010FA1Cu)

/** \brief  FA90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM5_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010FA90u)

/** \brief  FA94, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM5_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010FA94u)

/** \brief  FA98, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM5_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010FA98u)

/** \brief  FA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010FA84u)

/** \brief  FAA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM5_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010FAA4u)

/** \brief  FAA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM5_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010FAA8u)

/** \brief  FAAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM5_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010FAACu)

/** \brief  FAA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM5_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010FAA0u)

/** \brief  FA80, ATOM Channel ARU Read Address Register */
#define GTM_ATOM5_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010FA80u)

/** \brief  FA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH5_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010FA84u)

/** Alias (User Manual Name) for GTM_ATOM5_CH5_SOMC.
* To use register names with standard convension, please use GTM_ATOM5_CH5_SOMC.
*/
#define	GTM_ATOM5_CH5_CTRL_SOMC	(GTM_ATOM5_CH5_SOMC)

/** \brief  FA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH5_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010FA84u)

/** Alias (User Manual Name) for GTM_ATOM5_CH5_SOMI.
* To use register names with standard convension, please use GTM_ATOM5_CH5_SOMI.
*/
#define	GTM_ATOM5_CH5_CTRL_SOMI	(GTM_ATOM5_CH5_SOMI)

/** \brief  FA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH5_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010FA84u)

/** Alias (User Manual Name) for GTM_ATOM5_CH5_SOMP.
* To use register names with standard convension, please use GTM_ATOM5_CH5_SOMP.
*/
#define	GTM_ATOM5_CH5_CTRL_SOMP	(GTM_ATOM5_CH5_SOMP)

/** \brief  FA84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH5_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010FA84u)

/** Alias (User Manual Name) for GTM_ATOM5_CH5_SOMS.
* To use register names with standard convension, please use GTM_ATOM5_CH5_SOMS.
*/
#define	GTM_ATOM5_CH5_CTRL_SOMS	(GTM_ATOM5_CH5_SOMS)

/** \brief  FA88, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010FA88u)

/** \brief  FA8C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010FA8Cu)

/** \brief  FA9C, ATOM Channel Status Register */
#define GTM_ATOM5_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010FA9Cu)

/** \brief  FB10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM5_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010FB10u)

/** \brief  FB14, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM5_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010FB14u)

/** \brief  FB18, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM5_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010FB18u)

/** \brief  FB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010FB04u)

/** \brief  FB24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM5_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010FB24u)

/** \brief  FB28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM5_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010FB28u)

/** \brief  FB2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM5_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010FB2Cu)

/** \brief  FB20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM5_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010FB20u)

/** \brief  FB00, ATOM Channel ARU Read Address Register */
#define GTM_ATOM5_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010FB00u)

/** \brief  FB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH6_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010FB04u)

/** Alias (User Manual Name) for GTM_ATOM5_CH6_SOMC.
* To use register names with standard convension, please use GTM_ATOM5_CH6_SOMC.
*/
#define	GTM_ATOM5_CH6_CTRL_SOMC	(GTM_ATOM5_CH6_SOMC)

/** \brief  FB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH6_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010FB04u)

/** Alias (User Manual Name) for GTM_ATOM5_CH6_SOMI.
* To use register names with standard convension, please use GTM_ATOM5_CH6_SOMI.
*/
#define	GTM_ATOM5_CH6_CTRL_SOMI	(GTM_ATOM5_CH6_SOMI)

/** \brief  FB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH6_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010FB04u)

/** Alias (User Manual Name) for GTM_ATOM5_CH6_SOMP.
* To use register names with standard convension, please use GTM_ATOM5_CH6_SOMP.
*/
#define	GTM_ATOM5_CH6_CTRL_SOMP	(GTM_ATOM5_CH6_SOMP)

/** \brief  FB04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH6_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010FB04u)

/** Alias (User Manual Name) for GTM_ATOM5_CH6_SOMS.
* To use register names with standard convension, please use GTM_ATOM5_CH6_SOMS.
*/
#define	GTM_ATOM5_CH6_CTRL_SOMS	(GTM_ATOM5_CH6_SOMS)

/** \brief  FB08, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010FB08u)

/** \brief  FB0C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010FB0Cu)

/** \brief  FB1C, ATOM Channel Status Register */
#define GTM_ATOM5_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010FB1Cu)

/** \brief  FB90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM5_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF010FB90u)

/** \brief  FB94, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM5_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF010FB94u)

/** \brief  FB98, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM5_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF010FB98u)

/** \brief  FB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF010FB84u)

/** \brief  FBA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM5_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF010FBA4u)

/** \brief  FBA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM5_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF010FBA8u)

/** \brief  FBAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM5_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF010FBACu)

/** \brief  FBA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM5_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF010FBA0u)

/** \brief  FB80, ATOM Channel ARU Read Address Register */
#define GTM_ATOM5_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF010FB80u)

/** \brief  FB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH7_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF010FB84u)

/** Alias (User Manual Name) for GTM_ATOM5_CH7_SOMC.
* To use register names with standard convension, please use GTM_ATOM5_CH7_SOMC.
*/
#define	GTM_ATOM5_CH7_CTRL_SOMC	(GTM_ATOM5_CH7_SOMC)

/** \brief  FB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH7_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF010FB84u)

/** Alias (User Manual Name) for GTM_ATOM5_CH7_SOMI.
* To use register names with standard convension, please use GTM_ATOM5_CH7_SOMI.
*/
#define	GTM_ATOM5_CH7_CTRL_SOMI	(GTM_ATOM5_CH7_SOMI)

/** \brief  FB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH7_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF010FB84u)

/** Alias (User Manual Name) for GTM_ATOM5_CH7_SOMP.
* To use register names with standard convension, please use GTM_ATOM5_CH7_SOMP.
*/
#define	GTM_ATOM5_CH7_CTRL_SOMP	(GTM_ATOM5_CH7_SOMP)

/** \brief  FB84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM5_CH7_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF010FB84u)

/** Alias (User Manual Name) for GTM_ATOM5_CH7_SOMS.
* To use register names with standard convension, please use GTM_ATOM5_CH7_SOMS.
*/
#define	GTM_ATOM5_CH7_CTRL_SOMS	(GTM_ATOM5_CH7_SOMS)

/** \brief  FB88, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM5_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF010FB88u)

/** \brief  FB8C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM5_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF010FB8Cu)

/** \brief  FB9C, ATOM Channel Status Register */
#define GTM_ATOM5_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF010FB9Cu)

/** \brief  1004C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM6_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF011004Cu)

/** \brief  10044, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM6_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF0110044u)

/** \brief  10048, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM6_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF0110048u)

/** \brief  10058, ATOM AGC Force Update Control Register */
#define GTM_ATOM6_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF0110058u)

/** \brief  10040, ATOM AGC Global control register */
#define GTM_ATOM6_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF0110040u)

/** \brief  1005C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM6_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF011005Cu)

/** \brief  10050, ATOM AGC Output Enable Control Register */
#define GTM_ATOM6_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF0110050u)

/** \brief  10054, ATOM AGC Output Enable Status Register */
#define GTM_ATOM6_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF0110054u)

/** \brief  10010, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM6_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110010u)

/** \brief  10014, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM6_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110014u)

/** \brief  10018, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM6_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110018u)

/** \brief  10004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110004u)

/** \brief  10024, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM6_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0110024u)

/** \brief  10028, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM6_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0110028u)

/** \brief  1002C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM6_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF011002Cu)

/** \brief  10020, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM6_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0110020u)

/** \brief  10000, ATOM Channel ARU Read Address Register */
#define GTM_ATOM6_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110000u)

/** \brief  10004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH0_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110004u)

/** Alias (User Manual Name) for GTM_ATOM6_CH0_SOMC.
* To use register names with standard convension, please use GTM_ATOM6_CH0_SOMC.
*/
#define	GTM_ATOM6_CH0_CTRL_SOMC	(GTM_ATOM6_CH0_SOMC)

/** \brief  10004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH0_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110004u)

/** Alias (User Manual Name) for GTM_ATOM6_CH0_SOMI.
* To use register names with standard convension, please use GTM_ATOM6_CH0_SOMI.
*/
#define	GTM_ATOM6_CH0_CTRL_SOMI	(GTM_ATOM6_CH0_SOMI)

/** \brief  10004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH0_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110004u)

/** Alias (User Manual Name) for GTM_ATOM6_CH0_SOMP.
* To use register names with standard convension, please use GTM_ATOM6_CH0_SOMP.
*/
#define	GTM_ATOM6_CH0_CTRL_SOMP	(GTM_ATOM6_CH0_SOMP)

/** \brief  10004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH0_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110004u)

/** Alias (User Manual Name) for GTM_ATOM6_CH0_SOMS.
* To use register names with standard convension, please use GTM_ATOM6_CH0_SOMS.
*/
#define	GTM_ATOM6_CH0_CTRL_SOMS	(GTM_ATOM6_CH0_SOMS)

/** \brief  10008, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM6_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110008u)

/** \brief  1000C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM6_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011000Cu)

/** \brief  1001C, ATOM Channel Status Register */
#define GTM_ATOM6_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011001Cu)

/** \brief  10090, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM6_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110090u)

/** \brief  10094, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM6_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110094u)

/** \brief  10098, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM6_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110098u)

/** \brief  10084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110084u)

/** \brief  100A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM6_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01100A4u)

/** \brief  100A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM6_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01100A8u)

/** \brief  100AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM6_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01100ACu)

/** \brief  100A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM6_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01100A0u)

/** \brief  10080, ATOM Channel ARU Read Address Register */
#define GTM_ATOM6_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110080u)

/** \brief  10084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH1_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110084u)

/** Alias (User Manual Name) for GTM_ATOM6_CH1_SOMC.
* To use register names with standard convension, please use GTM_ATOM6_CH1_SOMC.
*/
#define	GTM_ATOM6_CH1_CTRL_SOMC	(GTM_ATOM6_CH1_SOMC)

/** \brief  10084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH1_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110084u)

/** Alias (User Manual Name) for GTM_ATOM6_CH1_SOMI.
* To use register names with standard convension, please use GTM_ATOM6_CH1_SOMI.
*/
#define	GTM_ATOM6_CH1_CTRL_SOMI	(GTM_ATOM6_CH1_SOMI)

/** \brief  10084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH1_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110084u)

/** Alias (User Manual Name) for GTM_ATOM6_CH1_SOMP.
* To use register names with standard convension, please use GTM_ATOM6_CH1_SOMP.
*/
#define	GTM_ATOM6_CH1_CTRL_SOMP	(GTM_ATOM6_CH1_SOMP)

/** \brief  10084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH1_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110084u)

/** Alias (User Manual Name) for GTM_ATOM6_CH1_SOMS.
* To use register names with standard convension, please use GTM_ATOM6_CH1_SOMS.
*/
#define	GTM_ATOM6_CH1_CTRL_SOMS	(GTM_ATOM6_CH1_SOMS)

/** \brief  10088, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM6_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110088u)

/** \brief  1008C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM6_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011008Cu)

/** \brief  1009C, ATOM Channel Status Register */
#define GTM_ATOM6_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011009Cu)

/** \brief  10110, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM6_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110110u)

/** \brief  10114, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM6_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110114u)

/** \brief  10118, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM6_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110118u)

/** \brief  10104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110104u)

/** \brief  10124, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM6_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0110124u)

/** \brief  10128, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM6_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0110128u)

/** \brief  1012C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM6_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF011012Cu)

/** \brief  10120, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM6_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0110120u)

/** \brief  10100, ATOM Channel ARU Read Address Register */
#define GTM_ATOM6_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110100u)

/** \brief  10104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH2_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110104u)

/** Alias (User Manual Name) for GTM_ATOM6_CH2_SOMC.
* To use register names with standard convension, please use GTM_ATOM6_CH2_SOMC.
*/
#define	GTM_ATOM6_CH2_CTRL_SOMC	(GTM_ATOM6_CH2_SOMC)

/** \brief  10104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH2_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110104u)

/** Alias (User Manual Name) for GTM_ATOM6_CH2_SOMI.
* To use register names with standard convension, please use GTM_ATOM6_CH2_SOMI.
*/
#define	GTM_ATOM6_CH2_CTRL_SOMI	(GTM_ATOM6_CH2_SOMI)

/** \brief  10104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH2_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110104u)

/** Alias (User Manual Name) for GTM_ATOM6_CH2_SOMP.
* To use register names with standard convension, please use GTM_ATOM6_CH2_SOMP.
*/
#define	GTM_ATOM6_CH2_CTRL_SOMP	(GTM_ATOM6_CH2_SOMP)

/** \brief  10104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH2_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110104u)

/** Alias (User Manual Name) for GTM_ATOM6_CH2_SOMS.
* To use register names with standard convension, please use GTM_ATOM6_CH2_SOMS.
*/
#define	GTM_ATOM6_CH2_CTRL_SOMS	(GTM_ATOM6_CH2_SOMS)

/** \brief  10108, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM6_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110108u)

/** \brief  1010C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM6_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011010Cu)

/** \brief  1011C, ATOM Channel Status Register */
#define GTM_ATOM6_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011011Cu)

/** \brief  10190, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM6_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110190u)

/** \brief  10194, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM6_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110194u)

/** \brief  10198, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM6_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110198u)

/** \brief  10184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110184u)

/** \brief  101A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM6_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01101A4u)

/** \brief  101A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM6_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01101A8u)

/** \brief  101AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM6_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01101ACu)

/** \brief  101A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM6_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01101A0u)

/** \brief  10180, ATOM Channel ARU Read Address Register */
#define GTM_ATOM6_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110180u)

/** \brief  10184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH3_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110184u)

/** Alias (User Manual Name) for GTM_ATOM6_CH3_SOMC.
* To use register names with standard convension, please use GTM_ATOM6_CH3_SOMC.
*/
#define	GTM_ATOM6_CH3_CTRL_SOMC	(GTM_ATOM6_CH3_SOMC)

/** \brief  10184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH3_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110184u)

/** Alias (User Manual Name) for GTM_ATOM6_CH3_SOMI.
* To use register names with standard convension, please use GTM_ATOM6_CH3_SOMI.
*/
#define	GTM_ATOM6_CH3_CTRL_SOMI	(GTM_ATOM6_CH3_SOMI)

/** \brief  10184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH3_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110184u)

/** Alias (User Manual Name) for GTM_ATOM6_CH3_SOMP.
* To use register names with standard convension, please use GTM_ATOM6_CH3_SOMP.
*/
#define	GTM_ATOM6_CH3_CTRL_SOMP	(GTM_ATOM6_CH3_SOMP)

/** \brief  10184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH3_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110184u)

/** Alias (User Manual Name) for GTM_ATOM6_CH3_SOMS.
* To use register names with standard convension, please use GTM_ATOM6_CH3_SOMS.
*/
#define	GTM_ATOM6_CH3_CTRL_SOMS	(GTM_ATOM6_CH3_SOMS)

/** \brief  10188, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM6_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110188u)

/** \brief  1018C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM6_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011018Cu)

/** \brief  1019C, ATOM Channel Status Register */
#define GTM_ATOM6_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011019Cu)

/** \brief  10210, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM6_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110210u)

/** \brief  10214, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM6_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110214u)

/** \brief  10218, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM6_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110218u)

/** \brief  10204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110204u)

/** \brief  10224, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM6_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0110224u)

/** \brief  10228, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM6_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0110228u)

/** \brief  1022C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM6_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF011022Cu)

/** \brief  10220, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM6_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0110220u)

/** \brief  10200, ATOM Channel ARU Read Address Register */
#define GTM_ATOM6_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110200u)

/** \brief  10204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH4_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110204u)

/** Alias (User Manual Name) for GTM_ATOM6_CH4_SOMC.
* To use register names with standard convension, please use GTM_ATOM6_CH4_SOMC.
*/
#define	GTM_ATOM6_CH4_CTRL_SOMC	(GTM_ATOM6_CH4_SOMC)

/** \brief  10204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH4_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110204u)

/** Alias (User Manual Name) for GTM_ATOM6_CH4_SOMI.
* To use register names with standard convension, please use GTM_ATOM6_CH4_SOMI.
*/
#define	GTM_ATOM6_CH4_CTRL_SOMI	(GTM_ATOM6_CH4_SOMI)

/** \brief  10204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH4_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110204u)

/** Alias (User Manual Name) for GTM_ATOM6_CH4_SOMP.
* To use register names with standard convension, please use GTM_ATOM6_CH4_SOMP.
*/
#define	GTM_ATOM6_CH4_CTRL_SOMP	(GTM_ATOM6_CH4_SOMP)

/** \brief  10204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH4_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110204u)

/** Alias (User Manual Name) for GTM_ATOM6_CH4_SOMS.
* To use register names with standard convension, please use GTM_ATOM6_CH4_SOMS.
*/
#define	GTM_ATOM6_CH4_CTRL_SOMS	(GTM_ATOM6_CH4_SOMS)

/** \brief  10208, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM6_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110208u)

/** \brief  1020C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM6_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011020Cu)

/** \brief  1021C, ATOM Channel Status Register */
#define GTM_ATOM6_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011021Cu)

/** \brief  10290, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM6_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110290u)

/** \brief  10294, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM6_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110294u)

/** \brief  10298, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM6_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110298u)

/** \brief  10284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110284u)

/** \brief  102A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM6_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01102A4u)

/** \brief  102A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM6_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01102A8u)

/** \brief  102AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM6_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01102ACu)

/** \brief  102A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM6_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01102A0u)

/** \brief  10280, ATOM Channel ARU Read Address Register */
#define GTM_ATOM6_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110280u)

/** \brief  10284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH5_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110284u)

/** Alias (User Manual Name) for GTM_ATOM6_CH5_SOMC.
* To use register names with standard convension, please use GTM_ATOM6_CH5_SOMC.
*/
#define	GTM_ATOM6_CH5_CTRL_SOMC	(GTM_ATOM6_CH5_SOMC)

/** \brief  10284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH5_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110284u)

/** Alias (User Manual Name) for GTM_ATOM6_CH5_SOMI.
* To use register names with standard convension, please use GTM_ATOM6_CH5_SOMI.
*/
#define	GTM_ATOM6_CH5_CTRL_SOMI	(GTM_ATOM6_CH5_SOMI)

/** \brief  10284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH5_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110284u)

/** Alias (User Manual Name) for GTM_ATOM6_CH5_SOMP.
* To use register names with standard convension, please use GTM_ATOM6_CH5_SOMP.
*/
#define	GTM_ATOM6_CH5_CTRL_SOMP	(GTM_ATOM6_CH5_SOMP)

/** \brief  10284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH5_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110284u)

/** Alias (User Manual Name) for GTM_ATOM6_CH5_SOMS.
* To use register names with standard convension, please use GTM_ATOM6_CH5_SOMS.
*/
#define	GTM_ATOM6_CH5_CTRL_SOMS	(GTM_ATOM6_CH5_SOMS)

/** \brief  10288, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM6_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110288u)

/** \brief  1028C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM6_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011028Cu)

/** \brief  1029C, ATOM Channel Status Register */
#define GTM_ATOM6_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011029Cu)

/** \brief  10310, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM6_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110310u)

/** \brief  10314, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM6_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110314u)

/** \brief  10318, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM6_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110318u)

/** \brief  10304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110304u)

/** \brief  10324, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM6_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0110324u)

/** \brief  10328, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM6_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0110328u)

/** \brief  1032C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM6_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF011032Cu)

/** \brief  10320, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM6_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0110320u)

/** \brief  10300, ATOM Channel ARU Read Address Register */
#define GTM_ATOM6_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110300u)

/** \brief  10304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH6_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110304u)

/** Alias (User Manual Name) for GTM_ATOM6_CH6_SOMC.
* To use register names with standard convension, please use GTM_ATOM6_CH6_SOMC.
*/
#define	GTM_ATOM6_CH6_CTRL_SOMC	(GTM_ATOM6_CH6_SOMC)

/** \brief  10304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH6_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110304u)

/** Alias (User Manual Name) for GTM_ATOM6_CH6_SOMI.
* To use register names with standard convension, please use GTM_ATOM6_CH6_SOMI.
*/
#define	GTM_ATOM6_CH6_CTRL_SOMI	(GTM_ATOM6_CH6_SOMI)

/** \brief  10304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH6_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110304u)

/** Alias (User Manual Name) for GTM_ATOM6_CH6_SOMP.
* To use register names with standard convension, please use GTM_ATOM6_CH6_SOMP.
*/
#define	GTM_ATOM6_CH6_CTRL_SOMP	(GTM_ATOM6_CH6_SOMP)

/** \brief  10304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH6_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110304u)

/** Alias (User Manual Name) for GTM_ATOM6_CH6_SOMS.
* To use register names with standard convension, please use GTM_ATOM6_CH6_SOMS.
*/
#define	GTM_ATOM6_CH6_CTRL_SOMS	(GTM_ATOM6_CH6_SOMS)

/** \brief  10308, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM6_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110308u)

/** \brief  1030C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM6_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011030Cu)

/** \brief  1031C, ATOM Channel Status Register */
#define GTM_ATOM6_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011031Cu)

/** \brief  10390, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM6_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110390u)

/** \brief  10394, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM6_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110394u)

/** \brief  10398, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM6_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110398u)

/** \brief  10384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110384u)

/** \brief  103A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM6_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01103A4u)

/** \brief  103A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM6_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01103A8u)

/** \brief  103AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM6_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01103ACu)

/** \brief  103A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM6_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01103A0u)

/** \brief  10380, ATOM Channel ARU Read Address Register */
#define GTM_ATOM6_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110380u)

/** \brief  10384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH7_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110384u)

/** Alias (User Manual Name) for GTM_ATOM6_CH7_SOMC.
* To use register names with standard convension, please use GTM_ATOM6_CH7_SOMC.
*/
#define	GTM_ATOM6_CH7_CTRL_SOMC	(GTM_ATOM6_CH7_SOMC)

/** \brief  10384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH7_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110384u)

/** Alias (User Manual Name) for GTM_ATOM6_CH7_SOMI.
* To use register names with standard convension, please use GTM_ATOM6_CH7_SOMI.
*/
#define	GTM_ATOM6_CH7_CTRL_SOMI	(GTM_ATOM6_CH7_SOMI)

/** \brief  10384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH7_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110384u)

/** Alias (User Manual Name) for GTM_ATOM6_CH7_SOMP.
* To use register names with standard convension, please use GTM_ATOM6_CH7_SOMP.
*/
#define	GTM_ATOM6_CH7_CTRL_SOMP	(GTM_ATOM6_CH7_SOMP)

/** \brief  10384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM6_CH7_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110384u)

/** Alias (User Manual Name) for GTM_ATOM6_CH7_SOMS.
* To use register names with standard convension, please use GTM_ATOM6_CH7_SOMS.
*/
#define	GTM_ATOM6_CH7_CTRL_SOMS	(GTM_ATOM6_CH7_SOMS)

/** \brief  10388, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM6_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110388u)

/** \brief  1038C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM6_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011038Cu)

/** \brief  1039C, ATOM Channel Status Register */
#define GTM_ATOM6_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011039Cu)

/** \brief  1084C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM7_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF011084Cu)

/** \brief  10844, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM7_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF0110844u)

/** \brief  10848, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM7_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF0110848u)

/** \brief  10858, ATOM AGC Force Update Control Register */
#define GTM_ATOM7_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF0110858u)

/** \brief  10840, ATOM AGC Global control register */
#define GTM_ATOM7_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF0110840u)

/** \brief  1085C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM7_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF011085Cu)

/** \brief  10850, ATOM AGC Output Enable Control Register */
#define GTM_ATOM7_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF0110850u)

/** \brief  10854, ATOM AGC Output Enable Status Register */
#define GTM_ATOM7_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF0110854u)

/** \brief  10810, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM7_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110810u)

/** \brief  10814, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM7_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110814u)

/** \brief  10818, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM7_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110818u)

/** \brief  10804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110804u)

/** \brief  10824, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM7_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0110824u)

/** \brief  10828, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM7_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0110828u)

/** \brief  1082C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM7_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF011082Cu)

/** \brief  10820, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM7_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0110820u)

/** \brief  10800, ATOM Channel ARU Read Address Register */
#define GTM_ATOM7_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110800u)

/** \brief  10804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH0_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110804u)

/** Alias (User Manual Name) for GTM_ATOM7_CH0_SOMC.
* To use register names with standard convension, please use GTM_ATOM7_CH0_SOMC.
*/
#define	GTM_ATOM7_CH0_CTRL_SOMC	(GTM_ATOM7_CH0_SOMC)

/** \brief  10804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH0_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110804u)

/** Alias (User Manual Name) for GTM_ATOM7_CH0_SOMI.
* To use register names with standard convension, please use GTM_ATOM7_CH0_SOMI.
*/
#define	GTM_ATOM7_CH0_CTRL_SOMI	(GTM_ATOM7_CH0_SOMI)

/** \brief  10804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH0_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110804u)

/** Alias (User Manual Name) for GTM_ATOM7_CH0_SOMP.
* To use register names with standard convension, please use GTM_ATOM7_CH0_SOMP.
*/
#define	GTM_ATOM7_CH0_CTRL_SOMP	(GTM_ATOM7_CH0_SOMP)

/** \brief  10804, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH0_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110804u)

/** Alias (User Manual Name) for GTM_ATOM7_CH0_SOMS.
* To use register names with standard convension, please use GTM_ATOM7_CH0_SOMS.
*/
#define	GTM_ATOM7_CH0_CTRL_SOMS	(GTM_ATOM7_CH0_SOMS)

/** \brief  10808, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM7_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110808u)

/** \brief  1080C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM7_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011080Cu)

/** \brief  1081C, ATOM Channel Status Register */
#define GTM_ATOM7_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011081Cu)

/** \brief  10890, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM7_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110890u)

/** \brief  10894, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM7_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110894u)

/** \brief  10898, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM7_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110898u)

/** \brief  10884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110884u)

/** \brief  108A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM7_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01108A4u)

/** \brief  108A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM7_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01108A8u)

/** \brief  108AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM7_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01108ACu)

/** \brief  108A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM7_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01108A0u)

/** \brief  10880, ATOM Channel ARU Read Address Register */
#define GTM_ATOM7_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110880u)

/** \brief  10884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH1_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110884u)

/** Alias (User Manual Name) for GTM_ATOM7_CH1_SOMC.
* To use register names with standard convension, please use GTM_ATOM7_CH1_SOMC.
*/
#define	GTM_ATOM7_CH1_CTRL_SOMC	(GTM_ATOM7_CH1_SOMC)

/** \brief  10884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH1_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110884u)

/** Alias (User Manual Name) for GTM_ATOM7_CH1_SOMI.
* To use register names with standard convension, please use GTM_ATOM7_CH1_SOMI.
*/
#define	GTM_ATOM7_CH1_CTRL_SOMI	(GTM_ATOM7_CH1_SOMI)

/** \brief  10884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH1_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110884u)

/** Alias (User Manual Name) for GTM_ATOM7_CH1_SOMP.
* To use register names with standard convension, please use GTM_ATOM7_CH1_SOMP.
*/
#define	GTM_ATOM7_CH1_CTRL_SOMP	(GTM_ATOM7_CH1_SOMP)

/** \brief  10884, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH1_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110884u)

/** Alias (User Manual Name) for GTM_ATOM7_CH1_SOMS.
* To use register names with standard convension, please use GTM_ATOM7_CH1_SOMS.
*/
#define	GTM_ATOM7_CH1_CTRL_SOMS	(GTM_ATOM7_CH1_SOMS)

/** \brief  10888, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM7_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110888u)

/** \brief  1088C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM7_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011088Cu)

/** \brief  1089C, ATOM Channel Status Register */
#define GTM_ATOM7_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011089Cu)

/** \brief  10910, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM7_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110910u)

/** \brief  10914, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM7_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110914u)

/** \brief  10918, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM7_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110918u)

/** \brief  10904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110904u)

/** \brief  10924, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM7_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0110924u)

/** \brief  10928, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM7_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0110928u)

/** \brief  1092C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM7_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF011092Cu)

/** \brief  10920, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM7_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0110920u)

/** \brief  10900, ATOM Channel ARU Read Address Register */
#define GTM_ATOM7_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110900u)

/** \brief  10904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH2_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110904u)

/** Alias (User Manual Name) for GTM_ATOM7_CH2_SOMC.
* To use register names with standard convension, please use GTM_ATOM7_CH2_SOMC.
*/
#define	GTM_ATOM7_CH2_CTRL_SOMC	(GTM_ATOM7_CH2_SOMC)

/** \brief  10904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH2_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110904u)

/** Alias (User Manual Name) for GTM_ATOM7_CH2_SOMI.
* To use register names with standard convension, please use GTM_ATOM7_CH2_SOMI.
*/
#define	GTM_ATOM7_CH2_CTRL_SOMI	(GTM_ATOM7_CH2_SOMI)

/** \brief  10904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH2_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110904u)

/** Alias (User Manual Name) for GTM_ATOM7_CH2_SOMP.
* To use register names with standard convension, please use GTM_ATOM7_CH2_SOMP.
*/
#define	GTM_ATOM7_CH2_CTRL_SOMP	(GTM_ATOM7_CH2_SOMP)

/** \brief  10904, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH2_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110904u)

/** Alias (User Manual Name) for GTM_ATOM7_CH2_SOMS.
* To use register names with standard convension, please use GTM_ATOM7_CH2_SOMS.
*/
#define	GTM_ATOM7_CH2_CTRL_SOMS	(GTM_ATOM7_CH2_SOMS)

/** \brief  10908, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM7_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110908u)

/** \brief  1090C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM7_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011090Cu)

/** \brief  1091C, ATOM Channel Status Register */
#define GTM_ATOM7_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011091Cu)

/** \brief  10990, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM7_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110990u)

/** \brief  10994, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM7_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110994u)

/** \brief  10998, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM7_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110998u)

/** \brief  10984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110984u)

/** \brief  109A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM7_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01109A4u)

/** \brief  109A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM7_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01109A8u)

/** \brief  109AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM7_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01109ACu)

/** \brief  109A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM7_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01109A0u)

/** \brief  10980, ATOM Channel ARU Read Address Register */
#define GTM_ATOM7_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110980u)

/** \brief  10984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH3_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110984u)

/** Alias (User Manual Name) for GTM_ATOM7_CH3_SOMC.
* To use register names with standard convension, please use GTM_ATOM7_CH3_SOMC.
*/
#define	GTM_ATOM7_CH3_CTRL_SOMC	(GTM_ATOM7_CH3_SOMC)

/** \brief  10984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH3_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110984u)

/** Alias (User Manual Name) for GTM_ATOM7_CH3_SOMI.
* To use register names with standard convension, please use GTM_ATOM7_CH3_SOMI.
*/
#define	GTM_ATOM7_CH3_CTRL_SOMI	(GTM_ATOM7_CH3_SOMI)

/** \brief  10984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH3_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110984u)

/** Alias (User Manual Name) for GTM_ATOM7_CH3_SOMP.
* To use register names with standard convension, please use GTM_ATOM7_CH3_SOMP.
*/
#define	GTM_ATOM7_CH3_CTRL_SOMP	(GTM_ATOM7_CH3_SOMP)

/** \brief  10984, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH3_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110984u)

/** Alias (User Manual Name) for GTM_ATOM7_CH3_SOMS.
* To use register names with standard convension, please use GTM_ATOM7_CH3_SOMS.
*/
#define	GTM_ATOM7_CH3_CTRL_SOMS	(GTM_ATOM7_CH3_SOMS)

/** \brief  10988, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM7_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110988u)

/** \brief  1098C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM7_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011098Cu)

/** \brief  1099C, ATOM Channel Status Register */
#define GTM_ATOM7_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011099Cu)

/** \brief  10A10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM7_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110A10u)

/** \brief  10A14, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM7_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110A14u)

/** \brief  10A18, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM7_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110A18u)

/** \brief  10A04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110A04u)

/** \brief  10A24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM7_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0110A24u)

/** \brief  10A28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM7_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0110A28u)

/** \brief  10A2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM7_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF0110A2Cu)

/** \brief  10A20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM7_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0110A20u)

/** \brief  10A00, ATOM Channel ARU Read Address Register */
#define GTM_ATOM7_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110A00u)

/** \brief  10A04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH4_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110A04u)

/** Alias (User Manual Name) for GTM_ATOM7_CH4_SOMC.
* To use register names with standard convension, please use GTM_ATOM7_CH4_SOMC.
*/
#define	GTM_ATOM7_CH4_CTRL_SOMC	(GTM_ATOM7_CH4_SOMC)

/** \brief  10A04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH4_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110A04u)

/** Alias (User Manual Name) for GTM_ATOM7_CH4_SOMI.
* To use register names with standard convension, please use GTM_ATOM7_CH4_SOMI.
*/
#define	GTM_ATOM7_CH4_CTRL_SOMI	(GTM_ATOM7_CH4_SOMI)

/** \brief  10A04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH4_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110A04u)

/** Alias (User Manual Name) for GTM_ATOM7_CH4_SOMP.
* To use register names with standard convension, please use GTM_ATOM7_CH4_SOMP.
*/
#define	GTM_ATOM7_CH4_CTRL_SOMP	(GTM_ATOM7_CH4_SOMP)

/** \brief  10A04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH4_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110A04u)

/** Alias (User Manual Name) for GTM_ATOM7_CH4_SOMS.
* To use register names with standard convension, please use GTM_ATOM7_CH4_SOMS.
*/
#define	GTM_ATOM7_CH4_CTRL_SOMS	(GTM_ATOM7_CH4_SOMS)

/** \brief  10A08, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM7_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110A08u)

/** \brief  10A0C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM7_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF0110A0Cu)

/** \brief  10A1C, ATOM Channel Status Register */
#define GTM_ATOM7_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF0110A1Cu)

/** \brief  10A90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM7_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110A90u)

/** \brief  10A94, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM7_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110A94u)

/** \brief  10A98, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM7_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110A98u)

/** \brief  10A84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110A84u)

/** \brief  10AA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM7_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0110AA4u)

/** \brief  10AA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM7_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0110AA8u)

/** \brief  10AAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM7_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF0110AACu)

/** \brief  10AA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM7_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0110AA0u)

/** \brief  10A80, ATOM Channel ARU Read Address Register */
#define GTM_ATOM7_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110A80u)

/** \brief  10A84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH5_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110A84u)

/** Alias (User Manual Name) for GTM_ATOM7_CH5_SOMC.
* To use register names with standard convension, please use GTM_ATOM7_CH5_SOMC.
*/
#define	GTM_ATOM7_CH5_CTRL_SOMC	(GTM_ATOM7_CH5_SOMC)

/** \brief  10A84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH5_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110A84u)

/** Alias (User Manual Name) for GTM_ATOM7_CH5_SOMI.
* To use register names with standard convension, please use GTM_ATOM7_CH5_SOMI.
*/
#define	GTM_ATOM7_CH5_CTRL_SOMI	(GTM_ATOM7_CH5_SOMI)

/** \brief  10A84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH5_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110A84u)

/** Alias (User Manual Name) for GTM_ATOM7_CH5_SOMP.
* To use register names with standard convension, please use GTM_ATOM7_CH5_SOMP.
*/
#define	GTM_ATOM7_CH5_CTRL_SOMP	(GTM_ATOM7_CH5_SOMP)

/** \brief  10A84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH5_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110A84u)

/** Alias (User Manual Name) for GTM_ATOM7_CH5_SOMS.
* To use register names with standard convension, please use GTM_ATOM7_CH5_SOMS.
*/
#define	GTM_ATOM7_CH5_CTRL_SOMS	(GTM_ATOM7_CH5_SOMS)

/** \brief  10A88, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM7_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110A88u)

/** \brief  10A8C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM7_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF0110A8Cu)

/** \brief  10A9C, ATOM Channel Status Register */
#define GTM_ATOM7_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF0110A9Cu)

/** \brief  10B10, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM7_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110B10u)

/** \brief  10B14, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM7_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110B14u)

/** \brief  10B18, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM7_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110B18u)

/** \brief  10B04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110B04u)

/** \brief  10B24, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM7_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0110B24u)

/** \brief  10B28, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM7_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0110B28u)

/** \brief  10B2C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM7_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF0110B2Cu)

/** \brief  10B20, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM7_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0110B20u)

/** \brief  10B00, ATOM Channel ARU Read Address Register */
#define GTM_ATOM7_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110B00u)

/** \brief  10B04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH6_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110B04u)

/** Alias (User Manual Name) for GTM_ATOM7_CH6_SOMC.
* To use register names with standard convension, please use GTM_ATOM7_CH6_SOMC.
*/
#define	GTM_ATOM7_CH6_CTRL_SOMC	(GTM_ATOM7_CH6_SOMC)

/** \brief  10B04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH6_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110B04u)

/** Alias (User Manual Name) for GTM_ATOM7_CH6_SOMI.
* To use register names with standard convension, please use GTM_ATOM7_CH6_SOMI.
*/
#define	GTM_ATOM7_CH6_CTRL_SOMI	(GTM_ATOM7_CH6_SOMI)

/** \brief  10B04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH6_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110B04u)

/** Alias (User Manual Name) for GTM_ATOM7_CH6_SOMP.
* To use register names with standard convension, please use GTM_ATOM7_CH6_SOMP.
*/
#define	GTM_ATOM7_CH6_CTRL_SOMP	(GTM_ATOM7_CH6_SOMP)

/** \brief  10B04, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH6_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110B04u)

/** Alias (User Manual Name) for GTM_ATOM7_CH6_SOMS.
* To use register names with standard convension, please use GTM_ATOM7_CH6_SOMS.
*/
#define	GTM_ATOM7_CH6_CTRL_SOMS	(GTM_ATOM7_CH6_SOMS)

/** \brief  10B08, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM7_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110B08u)

/** \brief  10B0C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM7_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF0110B0Cu)

/** \brief  10B1C, ATOM Channel Status Register */
#define GTM_ATOM7_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF0110B1Cu)

/** \brief  10B90, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM7_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0110B90u)

/** \brief  10B94, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM7_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0110B94u)

/** \brief  10B98, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM7_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0110B98u)

/** \brief  10B84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0110B84u)

/** \brief  10BA4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM7_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0110BA4u)

/** \brief  10BA8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM7_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0110BA8u)

/** \brief  10BAC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM7_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF0110BACu)

/** \brief  10BA0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM7_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0110BA0u)

/** \brief  10B80, ATOM Channel ARU Read Address Register */
#define GTM_ATOM7_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0110B80u)

/** \brief  10B84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH7_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0110B84u)

/** Alias (User Manual Name) for GTM_ATOM7_CH7_SOMC.
* To use register names with standard convension, please use GTM_ATOM7_CH7_SOMC.
*/
#define	GTM_ATOM7_CH7_CTRL_SOMC	(GTM_ATOM7_CH7_SOMC)

/** \brief  10B84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH7_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0110B84u)

/** Alias (User Manual Name) for GTM_ATOM7_CH7_SOMI.
* To use register names with standard convension, please use GTM_ATOM7_CH7_SOMI.
*/
#define	GTM_ATOM7_CH7_CTRL_SOMI	(GTM_ATOM7_CH7_SOMI)

/** \brief  10B84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH7_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0110B84u)

/** Alias (User Manual Name) for GTM_ATOM7_CH7_SOMP.
* To use register names with standard convension, please use GTM_ATOM7_CH7_SOMP.
*/
#define	GTM_ATOM7_CH7_CTRL_SOMP	(GTM_ATOM7_CH7_SOMP)

/** \brief  10B84, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM7_CH7_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0110B84u)

/** Alias (User Manual Name) for GTM_ATOM7_CH7_SOMS.
* To use register names with standard convension, please use GTM_ATOM7_CH7_SOMS.
*/
#define	GTM_ATOM7_CH7_CTRL_SOMS	(GTM_ATOM7_CH7_SOMS)

/** \brief  10B88, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM7_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0110B88u)

/** \brief  10B8C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM7_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF0110B8Cu)

/** \brief  10B9C, ATOM Channel Status Register */
#define GTM_ATOM7_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF0110B9Cu)

/** \brief  1104C, TOM TGC0 Action Time Base Register */
#define GTM_ATOM8_AGC_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ACT_TB*)0xF011104Cu)

/** \brief  11044, ATOM AGC Enable/Disable Control Register */
#define GTM_ATOM8_AGC_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_CTRL*)0xF0111044u)

/** \brief  11048, ATOM AGC Enable/Disable Status Register */
#define GTM_ATOM8_AGC_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_ENDIS_STAT*)0xF0111048u)

/** \brief  11058, ATOM AGC Force Update Control Register */
#define GTM_ATOM8_AGC_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_FUPD_CTRL*)0xF0111058u)

/** \brief  11040, ATOM AGC Global control register */
#define GTM_ATOM8_AGC_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_GLB_CTRL*)0xF0111040u)

/** \brief  1105C, ATOM AGC Internal Trigger Control Register */
#define GTM_ATOM8_AGC_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_INT_TRIG*)0xF011105Cu)

/** \brief  11050, ATOM AGC Output Enable Control Register */
#define GTM_ATOM8_AGC_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_CTRL*)0xF0111050u)

/** \brief  11054, ATOM AGC Output Enable Status Register */
#define GTM_ATOM8_AGC_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_AGC_OUTEN_STAT*)0xF0111054u)

/** \brief  11010, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM8_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0111010u)

/** \brief  11014, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM8_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0111014u)

/** \brief  11018, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM8_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0111018u)

/** \brief  11004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0111004u)

/** \brief  11024, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM8_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0111024u)

/** \brief  11028, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM8_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0111028u)

/** \brief  1102C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM8_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF011102Cu)

/** \brief  11020, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM8_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0111020u)

/** \brief  11000, ATOM Channel ARU Read Address Register */
#define GTM_ATOM8_CH0_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0111000u)

/** \brief  11004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH0_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0111004u)

/** Alias (User Manual Name) for GTM_ATOM8_CH0_SOMC.
* To use register names with standard convension, please use GTM_ATOM8_CH0_SOMC.
*/
#define	GTM_ATOM8_CH0_CTRL_SOMC	(GTM_ATOM8_CH0_SOMC)

/** \brief  11004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH0_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0111004u)

/** Alias (User Manual Name) for GTM_ATOM8_CH0_SOMI.
* To use register names with standard convension, please use GTM_ATOM8_CH0_SOMI.
*/
#define	GTM_ATOM8_CH0_CTRL_SOMI	(GTM_ATOM8_CH0_SOMI)

/** \brief  11004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH0_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0111004u)

/** Alias (User Manual Name) for GTM_ATOM8_CH0_SOMP.
* To use register names with standard convension, please use GTM_ATOM8_CH0_SOMP.
*/
#define	GTM_ATOM8_CH0_CTRL_SOMP	(GTM_ATOM8_CH0_SOMP)

/** \brief  11004, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH0_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0111004u)

/** Alias (User Manual Name) for GTM_ATOM8_CH0_SOMS.
* To use register names with standard convension, please use GTM_ATOM8_CH0_SOMS.
*/
#define	GTM_ATOM8_CH0_CTRL_SOMS	(GTM_ATOM8_CH0_SOMS)

/** \brief  11008, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM8_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0111008u)

/** \brief  1100C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM8_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011100Cu)

/** \brief  1101C, ATOM Channel Status Register */
#define GTM_ATOM8_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011101Cu)

/** \brief  11090, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM8_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0111090u)

/** \brief  11094, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM8_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0111094u)

/** \brief  11098, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM8_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0111098u)

/** \brief  11084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0111084u)

/** \brief  110A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM8_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01110A4u)

/** \brief  110A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM8_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01110A8u)

/** \brief  110AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM8_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01110ACu)

/** \brief  110A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM8_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01110A0u)

/** \brief  11080, ATOM Channel ARU Read Address Register */
#define GTM_ATOM8_CH1_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0111080u)

/** \brief  11084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH1_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0111084u)

/** Alias (User Manual Name) for GTM_ATOM8_CH1_SOMC.
* To use register names with standard convension, please use GTM_ATOM8_CH1_SOMC.
*/
#define	GTM_ATOM8_CH1_CTRL_SOMC	(GTM_ATOM8_CH1_SOMC)

/** \brief  11084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH1_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0111084u)

/** Alias (User Manual Name) for GTM_ATOM8_CH1_SOMI.
* To use register names with standard convension, please use GTM_ATOM8_CH1_SOMI.
*/
#define	GTM_ATOM8_CH1_CTRL_SOMI	(GTM_ATOM8_CH1_SOMI)

/** \brief  11084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH1_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0111084u)

/** Alias (User Manual Name) for GTM_ATOM8_CH1_SOMP.
* To use register names with standard convension, please use GTM_ATOM8_CH1_SOMP.
*/
#define	GTM_ATOM8_CH1_CTRL_SOMP	(GTM_ATOM8_CH1_SOMP)

/** \brief  11084, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH1_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0111084u)

/** Alias (User Manual Name) for GTM_ATOM8_CH1_SOMS.
* To use register names with standard convension, please use GTM_ATOM8_CH1_SOMS.
*/
#define	GTM_ATOM8_CH1_CTRL_SOMS	(GTM_ATOM8_CH1_SOMS)

/** \brief  11088, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM8_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0111088u)

/** \brief  1108C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM8_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011108Cu)

/** \brief  1109C, ATOM Channel Status Register */
#define GTM_ATOM8_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011109Cu)

/** \brief  11110, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM8_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0111110u)

/** \brief  11114, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM8_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0111114u)

/** \brief  11118, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM8_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0111118u)

/** \brief  11104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0111104u)

/** \brief  11124, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM8_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0111124u)

/** \brief  11128, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM8_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0111128u)

/** \brief  1112C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM8_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF011112Cu)

/** \brief  11120, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM8_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0111120u)

/** \brief  11100, ATOM Channel ARU Read Address Register */
#define GTM_ATOM8_CH2_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0111100u)

/** \brief  11104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH2_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0111104u)

/** Alias (User Manual Name) for GTM_ATOM8_CH2_SOMC.
* To use register names with standard convension, please use GTM_ATOM8_CH2_SOMC.
*/
#define	GTM_ATOM8_CH2_CTRL_SOMC	(GTM_ATOM8_CH2_SOMC)

/** \brief  11104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH2_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0111104u)

/** Alias (User Manual Name) for GTM_ATOM8_CH2_SOMI.
* To use register names with standard convension, please use GTM_ATOM8_CH2_SOMI.
*/
#define	GTM_ATOM8_CH2_CTRL_SOMI	(GTM_ATOM8_CH2_SOMI)

/** \brief  11104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH2_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0111104u)

/** Alias (User Manual Name) for GTM_ATOM8_CH2_SOMP.
* To use register names with standard convension, please use GTM_ATOM8_CH2_SOMP.
*/
#define	GTM_ATOM8_CH2_CTRL_SOMP	(GTM_ATOM8_CH2_SOMP)

/** \brief  11104, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH2_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0111104u)

/** Alias (User Manual Name) for GTM_ATOM8_CH2_SOMS.
* To use register names with standard convension, please use GTM_ATOM8_CH2_SOMS.
*/
#define	GTM_ATOM8_CH2_CTRL_SOMS	(GTM_ATOM8_CH2_SOMS)

/** \brief  11108, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM8_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0111108u)

/** \brief  1110C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM8_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011110Cu)

/** \brief  1111C, ATOM Channel Status Register */
#define GTM_ATOM8_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011111Cu)

/** \brief  11190, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM8_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0111190u)

/** \brief  11194, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM8_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0111194u)

/** \brief  11198, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM8_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0111198u)

/** \brief  11184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0111184u)

/** \brief  111A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM8_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01111A4u)

/** \brief  111A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM8_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01111A8u)

/** \brief  111AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM8_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01111ACu)

/** \brief  111A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM8_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01111A0u)

/** \brief  11180, ATOM Channel ARU Read Address Register */
#define GTM_ATOM8_CH3_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0111180u)

/** \brief  11184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH3_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0111184u)

/** Alias (User Manual Name) for GTM_ATOM8_CH3_SOMC.
* To use register names with standard convension, please use GTM_ATOM8_CH3_SOMC.
*/
#define	GTM_ATOM8_CH3_CTRL_SOMC	(GTM_ATOM8_CH3_SOMC)

/** \brief  11184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH3_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0111184u)

/** Alias (User Manual Name) for GTM_ATOM8_CH3_SOMI.
* To use register names with standard convension, please use GTM_ATOM8_CH3_SOMI.
*/
#define	GTM_ATOM8_CH3_CTRL_SOMI	(GTM_ATOM8_CH3_SOMI)

/** \brief  11184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH3_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0111184u)

/** Alias (User Manual Name) for GTM_ATOM8_CH3_SOMP.
* To use register names with standard convension, please use GTM_ATOM8_CH3_SOMP.
*/
#define	GTM_ATOM8_CH3_CTRL_SOMP	(GTM_ATOM8_CH3_SOMP)

/** \brief  11184, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH3_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0111184u)

/** Alias (User Manual Name) for GTM_ATOM8_CH3_SOMS.
* To use register names with standard convension, please use GTM_ATOM8_CH3_SOMS.
*/
#define	GTM_ATOM8_CH3_CTRL_SOMS	(GTM_ATOM8_CH3_SOMS)

/** \brief  11188, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM8_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0111188u)

/** \brief  1118C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM8_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011118Cu)

/** \brief  1119C, ATOM Channel Status Register */
#define GTM_ATOM8_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011119Cu)

/** \brief  11210, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM8_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0111210u)

/** \brief  11214, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM8_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0111214u)

/** \brief  11218, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM8_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0111218u)

/** \brief  11204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0111204u)

/** \brief  11224, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM8_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0111224u)

/** \brief  11228, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM8_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0111228u)

/** \brief  1122C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM8_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF011122Cu)

/** \brief  11220, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM8_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0111220u)

/** \brief  11200, ATOM Channel ARU Read Address Register */
#define GTM_ATOM8_CH4_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0111200u)

/** \brief  11204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH4_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0111204u)

/** Alias (User Manual Name) for GTM_ATOM8_CH4_SOMC.
* To use register names with standard convension, please use GTM_ATOM8_CH4_SOMC.
*/
#define	GTM_ATOM8_CH4_CTRL_SOMC	(GTM_ATOM8_CH4_SOMC)

/** \brief  11204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH4_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0111204u)

/** Alias (User Manual Name) for GTM_ATOM8_CH4_SOMI.
* To use register names with standard convension, please use GTM_ATOM8_CH4_SOMI.
*/
#define	GTM_ATOM8_CH4_CTRL_SOMI	(GTM_ATOM8_CH4_SOMI)

/** \brief  11204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH4_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0111204u)

/** Alias (User Manual Name) for GTM_ATOM8_CH4_SOMP.
* To use register names with standard convension, please use GTM_ATOM8_CH4_SOMP.
*/
#define	GTM_ATOM8_CH4_CTRL_SOMP	(GTM_ATOM8_CH4_SOMP)

/** \brief  11204, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH4_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0111204u)

/** Alias (User Manual Name) for GTM_ATOM8_CH4_SOMS.
* To use register names with standard convension, please use GTM_ATOM8_CH4_SOMS.
*/
#define	GTM_ATOM8_CH4_CTRL_SOMS	(GTM_ATOM8_CH4_SOMS)

/** \brief  11208, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM8_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0111208u)

/** \brief  1120C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM8_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011120Cu)

/** \brief  1121C, ATOM Channel Status Register */
#define GTM_ATOM8_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011121Cu)

/** \brief  11290, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM8_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0111290u)

/** \brief  11294, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM8_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0111294u)

/** \brief  11298, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM8_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0111298u)

/** \brief  11284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0111284u)

/** \brief  112A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM8_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01112A4u)

/** \brief  112A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM8_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01112A8u)

/** \brief  112AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM8_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01112ACu)

/** \brief  112A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM8_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01112A0u)

/** \brief  11280, ATOM Channel ARU Read Address Register */
#define GTM_ATOM8_CH5_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0111280u)

/** \brief  11284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH5_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0111284u)

/** Alias (User Manual Name) for GTM_ATOM8_CH5_SOMC.
* To use register names with standard convension, please use GTM_ATOM8_CH5_SOMC.
*/
#define	GTM_ATOM8_CH5_CTRL_SOMC	(GTM_ATOM8_CH5_SOMC)

/** \brief  11284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH5_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0111284u)

/** Alias (User Manual Name) for GTM_ATOM8_CH5_SOMI.
* To use register names with standard convension, please use GTM_ATOM8_CH5_SOMI.
*/
#define	GTM_ATOM8_CH5_CTRL_SOMI	(GTM_ATOM8_CH5_SOMI)

/** \brief  11284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH5_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0111284u)

/** Alias (User Manual Name) for GTM_ATOM8_CH5_SOMP.
* To use register names with standard convension, please use GTM_ATOM8_CH5_SOMP.
*/
#define	GTM_ATOM8_CH5_CTRL_SOMP	(GTM_ATOM8_CH5_SOMP)

/** \brief  11284, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH5_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0111284u)

/** Alias (User Manual Name) for GTM_ATOM8_CH5_SOMS.
* To use register names with standard convension, please use GTM_ATOM8_CH5_SOMS.
*/
#define	GTM_ATOM8_CH5_CTRL_SOMS	(GTM_ATOM8_CH5_SOMS)

/** \brief  11288, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM8_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0111288u)

/** \brief  1128C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM8_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011128Cu)

/** \brief  1129C, ATOM Channel Status Register */
#define GTM_ATOM8_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011129Cu)

/** \brief  11310, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM8_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0111310u)

/** \brief  11314, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM8_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0111314u)

/** \brief  11318, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM8_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0111318u)

/** \brief  11304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0111304u)

/** \brief  11324, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM8_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF0111324u)

/** \brief  11328, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM8_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF0111328u)

/** \brief  1132C, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM8_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF011132Cu)

/** \brief  11320, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM8_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF0111320u)

/** \brief  11300, ATOM Channel ARU Read Address Register */
#define GTM_ATOM8_CH6_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0111300u)

/** \brief  11304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH6_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0111304u)

/** Alias (User Manual Name) for GTM_ATOM8_CH6_SOMC.
* To use register names with standard convension, please use GTM_ATOM8_CH6_SOMC.
*/
#define	GTM_ATOM8_CH6_CTRL_SOMC	(GTM_ATOM8_CH6_SOMC)

/** \brief  11304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH6_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0111304u)

/** Alias (User Manual Name) for GTM_ATOM8_CH6_SOMI.
* To use register names with standard convension, please use GTM_ATOM8_CH6_SOMI.
*/
#define	GTM_ATOM8_CH6_CTRL_SOMI	(GTM_ATOM8_CH6_SOMI)

/** \brief  11304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH6_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0111304u)

/** Alias (User Manual Name) for GTM_ATOM8_CH6_SOMP.
* To use register names with standard convension, please use GTM_ATOM8_CH6_SOMP.
*/
#define	GTM_ATOM8_CH6_CTRL_SOMP	(GTM_ATOM8_CH6_SOMP)

/** \brief  11304, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH6_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0111304u)

/** Alias (User Manual Name) for GTM_ATOM8_CH6_SOMS.
* To use register names with standard convension, please use GTM_ATOM8_CH6_SOMS.
*/
#define	GTM_ATOM8_CH6_CTRL_SOMS	(GTM_ATOM8_CH6_SOMS)

/** \brief  11308, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM8_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0111308u)

/** \brief  1130C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM8_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011130Cu)

/** \brief  1131C, ATOM Channel Status Register */
#define GTM_ATOM8_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011131Cu)

/** \brief  11390, ATOM Channel CCU0 Compare Register */
#define GTM_ATOM8_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM0*)0xF0111390u)

/** \brief  11394, ATOM Channel CCU1 Compare Register */
#define GTM_ATOM8_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CM1*)0xF0111394u)

/** \brief  11398, ATOM Channel CCU0 Counter Register */
#define GTM_ATOM8_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CN0*)0xF0111398u)

/** \brief  11384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_CTRL*)0xF0111384u)

/** \brief  113A4, ATOM Channel Interrupt Enable Register */
#define GTM_ATOM8_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_EN*)0xF01113A4u)

/** \brief  113A8, ATOM Channel Software Interrupt Generation Register */
#define GTM_ATOM8_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_FORCINT*)0xF01113A8u)

/** \brief  113AC, ATOM IRQ Mode Configuration Register */
#define GTM_ATOM8_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_MODE*)0xF01113ACu)

/** \brief  113A0, ATOM Channel Interrupt Notification Register */
#define GTM_ATOM8_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_IRQ_NOTIFY*)0xF01113A0u)

/** \brief  11380, ATOM Channel ARU Read Address Register */
#define GTM_ATOM8_CH7_RDADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_RDADDR*)0xF0111380u)

/** \brief  11384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH7_SOMC /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMC*)0xF0111384u)

/** Alias (User Manual Name) for GTM_ATOM8_CH7_SOMC.
* To use register names with standard convension, please use GTM_ATOM8_CH7_SOMC.
*/
#define	GTM_ATOM8_CH7_CTRL_SOMC	(GTM_ATOM8_CH7_SOMC)

/** \brief  11384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH7_SOMI /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMI*)0xF0111384u)

/** Alias (User Manual Name) for GTM_ATOM8_CH7_SOMI.
* To use register names with standard convension, please use GTM_ATOM8_CH7_SOMI.
*/
#define	GTM_ATOM8_CH7_CTRL_SOMI	(GTM_ATOM8_CH7_SOMI)

/** \brief  11384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH7_SOMP /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMP*)0xF0111384u)

/** Alias (User Manual Name) for GTM_ATOM8_CH7_SOMP.
* To use register names with standard convension, please use GTM_ATOM8_CH7_SOMP.
*/
#define	GTM_ATOM8_CH7_CTRL_SOMP	(GTM_ATOM8_CH7_SOMP)

/** \brief  11384, ATOM Channel Control in SOMI mode Register */
#define GTM_ATOM8_CH7_SOMS /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SOMS*)0xF0111384u)

/** Alias (User Manual Name) for GTM_ATOM8_CH7_SOMS.
* To use register names with standard convension, please use GTM_ATOM8_CH7_SOMS.
*/
#define	GTM_ATOM8_CH7_CTRL_SOMS	(GTM_ATOM8_CH7_SOMS)

/** \brief  11388, ATOM Channel CCU0 Compare Shadow Register */
#define GTM_ATOM8_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR0*)0xF0111388u)

/** \brief  1138C, ATOM Channel CCU1 Compare Shadow Register */
#define GTM_ATOM8_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_SR1*)0xF011138Cu)

/** \brief  1139C, ATOM Channel Status Register */
#define GTM_ATOM8_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_ATOM_CH_STAT*)0xF011139Cu)

/** \brief  474, BRC Error Interrupt Enable Register */
#define GTM_BRC_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_EIRQ_EN*)0xF0100474u)

/** \brief  464, BRC Interrupt Enable Register */
#define GTM_BRC_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_IRQ_EN*)0xF0100464u)

/** \brief  468, BRC_DEST_ERR Forcing Interrupt Register */
#define GTM_BRC_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_IRQ_FORCINT*)0xF0100468u)

/** \brief  46C, BRC IRQ Mode Configuration Register */
#define GTM_BRC_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_IRQ_MODE*)0xF010046Cu)

/** \brief  460, BRC Interrupt Notification Register */
#define GTM_BRC_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_IRQ_NOTIFY*)0xF0100460u)

/** \brief  470, BRC Software Reset Register */
#define GTM_BRC_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_RST*)0xF0100470u)

/** \brief  400, Read Address For Input Channel 0 */
#define GTM_BRC_SRC0_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC0_ADDR*)0xF0100400u)

/** \brief  404, Destination Channels For Input Channel 0 */
#define GTM_BRC_SRC0_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC0_DEST*)0xF0100404u)

/** \brief  450, Read Address For Input Channel 10 */
#define GTM_BRC_SRC10_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC10_ADDR*)0xF0100450u)

/** \brief  454, Destination Channels For Input Channel 10 */
#define GTM_BRC_SRC10_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC10_DEST*)0xF0100454u)

/** \brief  458, Read Address For Input Channel 11 */
#define GTM_BRC_SRC11_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC11_ADDR*)0xF0100458u)

/** \brief  45C, Destination Channels For Input Channel 11 */
#define GTM_BRC_SRC11_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC11_DEST*)0xF010045Cu)

/** \brief  408, Read Address For Input Channel 1 */
#define GTM_BRC_SRC1_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC1_ADDR*)0xF0100408u)

/** \brief  40C, Destination Channels For Input Channel 1 */
#define GTM_BRC_SRC1_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC1_DEST*)0xF010040Cu)

/** \brief  410, Read Address For Input Channel 2 */
#define GTM_BRC_SRC2_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC2_ADDR*)0xF0100410u)

/** \brief  414, Destination Channels For Input Channel 2 */
#define GTM_BRC_SRC2_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC2_DEST*)0xF0100414u)

/** \brief  418, Read Address For Input Channel 3 */
#define GTM_BRC_SRC3_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC3_ADDR*)0xF0100418u)

/** \brief  41C, Destination Channels For Input Channel 3 */
#define GTM_BRC_SRC3_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC3_DEST*)0xF010041Cu)

/** \brief  420, Read Address For Input Channel 4 */
#define GTM_BRC_SRC4_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC4_ADDR*)0xF0100420u)

/** \brief  424, Destination Channels For Input Channel 4 */
#define GTM_BRC_SRC4_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC4_DEST*)0xF0100424u)

/** \brief  428, Read Address For Input Channel 5 */
#define GTM_BRC_SRC5_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC5_ADDR*)0xF0100428u)

/** \brief  42C, Destination Channels For Input Channel 5 */
#define GTM_BRC_SRC5_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC5_DEST*)0xF010042Cu)

/** \brief  430, Read Address For Input Channel 6 */
#define GTM_BRC_SRC6_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC6_ADDR*)0xF0100430u)

/** \brief  434, Destination Channels For Input Channel 6 */
#define GTM_BRC_SRC6_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC6_DEST*)0xF0100434u)

/** \brief  438, Read Address For Input Channel 7 */
#define GTM_BRC_SRC7_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC7_ADDR*)0xF0100438u)

/** \brief  43C, Destination Channels For Input Channel 7 */
#define GTM_BRC_SRC7_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC7_DEST*)0xF010043Cu)

/** \brief  440, Read Address For Input Channel 8 */
#define GTM_BRC_SRC8_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC8_ADDR*)0xF0100440u)

/** \brief  444, Destination Channels For Input Channel 8 */
#define GTM_BRC_SRC8_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC8_DEST*)0xF0100444u)

/** \brief  448, Read Address For Input Channel 9 */
#define GTM_BRC_SRC9_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC9_ADDR*)0xF0100448u)

/** \brief  44C, Destination Channels For Input Channel 9 */
#define GTM_BRC_SRC9_DEST /*lint --e(923)*/ (*(volatile Ifx_GTM_BRC_SRC9_DEST*)0xF010044Cu)

/** \brief  30, GTM to SPB BRIDGE MODE */
#define GTM_BRIDGE_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_BRIDGE_MODE*)0xF0100030u)

/** \brief  34, GTM to SPB BRIDGE PTR1 */
#define GTM_BRIDGE_PTR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_BRIDGE_PTR1*)0xF0100034u)

/** \brief  38, GTM to SPB BRIDGE PTR2 */
#define GTM_BRIDGE_PTR2 /*lint --e(923)*/ (*(volatile Ifx_GTM_BRIDGE_PTR2*)0xF0100038u)

/** \brief  9FD00, Clock Control Register */
#define GTM_CLC /*lint --e(923)*/ (*(volatile Ifx_GTM_CLC*)0xF019FD00u)

/** \brief  214, CMP Error Interrupt Enable Register */
#define GTM_CMP_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMP_EIRQ_EN*)0xF0100214u)

/** \brief  200, CMP Comparator Enable Register */
#define GTM_CMP_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMP_EN*)0xF0100200u)

/** \brief  208, CMP Interrupt Enable Register */
#define GTM_CMP_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMP_IRQ_EN*)0xF0100208u)

/** \brief  20C, CMP Interrupt Force Register */
#define GTM_CMP_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_CMP_IRQ_FORCINT*)0xF010020Cu)

/** \brief  210, CMP IRQ Mode Configuration Register */
#define GTM_CMP_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_CMP_IRQ_MODE*)0xF0100210u)

/** \brief  204, CMP Event Notification Register */
#define GTM_CMP_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_CMP_IRQ_NOTIFY*)0xF0100204u)

/** \brief  30C, CMU Control For Clock Source Register */
#define GTM_CMU_CLK0_50_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK0_5_CTRL*)0xF010030Cu)

/** Alias (User Manual Name) for GTM_CMU_CLK0_50_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK0_50_CTRL.
*/
#define	GTM_CMU_CLK_0_CTRL	(GTM_CMU_CLK0_50_CTRL)

/** \brief  310, CMU Control For Clock Source Register */
#define GTM_CMU_CLK0_51_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK0_5_CTRL*)0xF0100310u)

/** Alias (User Manual Name) for GTM_CMU_CLK0_51_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK0_51_CTRL.
*/
#define	GTM_CMU_CLK_1_CTRL	(GTM_CMU_CLK0_51_CTRL)

/** \brief  314, CMU Control For Clock Source Register */
#define GTM_CMU_CLK0_52_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK0_5_CTRL*)0xF0100314u)

/** Alias (User Manual Name) for GTM_CMU_CLK0_52_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK0_52_CTRL.
*/
#define	GTM_CMU_CLK_2_CTRL	(GTM_CMU_CLK0_52_CTRL)

/** \brief  318, CMU Control For Clock Source Register */
#define GTM_CMU_CLK0_53_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK0_5_CTRL*)0xF0100318u)

/** Alias (User Manual Name) for GTM_CMU_CLK0_53_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK0_53_CTRL.
*/
#define	GTM_CMU_CLK_3_CTRL	(GTM_CMU_CLK0_53_CTRL)

/** \brief  31C, CMU Control For Clock Source Register */
#define GTM_CMU_CLK0_54_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK0_5_CTRL*)0xF010031Cu)

/** Alias (User Manual Name) for GTM_CMU_CLK0_54_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK0_54_CTRL.
*/
#define	GTM_CMU_CLK_4_CTRL	(GTM_CMU_CLK0_54_CTRL)

/** \brief  320, CMU Control For Clock Source Register */
#define GTM_CMU_CLK0_55_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK0_5_CTRL*)0xF0100320u)

/** Alias (User Manual Name) for GTM_CMU_CLK0_55_CTRL.
* To use register names with standard convension, please use GTM_CMU_CLK0_55_CTRL.
*/
#define	GTM_CMU_CLK_5_CTRL	(GTM_CMU_CLK0_55_CTRL)

/** \brief  324, CMU Control For Clock Source 6 Register */
#define GTM_CMU_CLK_6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK_6_CTRL*)0xF0100324u)

/** \brief  328, CMU Control For Clock Source 7 Register */
#define GTM_CMU_CLK_7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK_7_CTRL*)0xF0100328u)

/** \brief  300, CMU Clock Enable Register */
#define GTM_CMU_CLK_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_CLK_EN*)0xF0100300u)

/** \brief  330, CMU External Clock Control Denominator Register */
#define GTM_CMU_ECLK0_DEN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_ECLK_DEN*)0xF0100330u)

/** Alias (User Manual Name) for GTM_CMU_ECLK0_DEN.
* To use register names with standard convension, please use GTM_CMU_ECLK0_DEN.
*/
#define	GTM_CMU_ECLK_0_DEN	(GTM_CMU_ECLK0_DEN)

/** \brief  32C, CMU External Clock Control Numerator Register */
#define GTM_CMU_ECLK0_NUM /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_ECLK_NUM*)0xF010032Cu)

/** Alias (User Manual Name) for GTM_CMU_ECLK0_NUM.
* To use register names with standard convension, please use GTM_CMU_ECLK0_NUM.
*/
#define	GTM_CMU_ECLK_0_NUM	(GTM_CMU_ECLK0_NUM)

/** \brief  338, CMU External Clock Control Denominator Register */
#define GTM_CMU_ECLK1_DEN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_ECLK_DEN*)0xF0100338u)

/** Alias (User Manual Name) for GTM_CMU_ECLK1_DEN.
* To use register names with standard convension, please use GTM_CMU_ECLK1_DEN.
*/
#define	GTM_CMU_ECLK_1_DEN	(GTM_CMU_ECLK1_DEN)

/** \brief  334, CMU External Clock Control Numerator Register */
#define GTM_CMU_ECLK1_NUM /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_ECLK_NUM*)0xF0100334u)

/** Alias (User Manual Name) for GTM_CMU_ECLK1_NUM.
* To use register names with standard convension, please use GTM_CMU_ECLK1_NUM.
*/
#define	GTM_CMU_ECLK_1_NUM	(GTM_CMU_ECLK1_NUM)

/** \brief  340, CMU External Clock Control Denominator Register */
#define GTM_CMU_ECLK2_DEN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_ECLK_DEN*)0xF0100340u)

/** Alias (User Manual Name) for GTM_CMU_ECLK2_DEN.
* To use register names with standard convension, please use GTM_CMU_ECLK2_DEN.
*/
#define	GTM_CMU_ECLK_2_DEN	(GTM_CMU_ECLK2_DEN)

/** \brief  33C, CMU External Clock Control Numerator Register */
#define GTM_CMU_ECLK2_NUM /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_ECLK_NUM*)0xF010033Cu)

/** Alias (User Manual Name) for GTM_CMU_ECLK2_NUM.
* To use register names with standard convension, please use GTM_CMU_ECLK2_NUM.
*/
#define	GTM_CMU_ECLK_2_NUM	(GTM_CMU_ECLK2_NUM)

/** \brief  344, CMU FXCLK Control Register */
#define GTM_CMU_FXCLK_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_FXCLK_CTRL*)0xF0100344u)

/** \brief  308, CMU Global Clock Control Denominator Register */
#define GTM_CMU_GCLK_DEN /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_GCLK_DEN*)0xF0100308u)

/** \brief  304, CMU Global Clock Control Numerator Register */
#define GTM_CMU_GCLK_NUM /*lint --e(923)*/ (*(volatile Ifx_GTM_CMU_GCLK_NUM*)0xF0100304u)

/** \brief  8, GTM Global Control Register */
#define GTM_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_CTRL*)0xF0100008u)

/** \brief  9FE94, Data Input 0 0 Register */
#define GTM_DATAIN00 /*lint --e(923)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FE94u)

/** \brief  9FE98, Data Input 0 0 Register */
#define GTM_DATAIN01 /*lint --e(923)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FE98u)

/** \brief  9FE9C, Data Input 0 0 Register */
#define GTM_DATAIN02 /*lint --e(923)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FE9Cu)

/** \brief  9FEA0, Data Input 0 0 Register */
#define GTM_DATAIN03 /*lint --e(923)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FEA0u)

/** \brief  9FEA4, Data Input 0 0 Register */
#define GTM_DATAIN04 /*lint --e(923)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FEA4u)

/** \brief  9FEA8, Data Input 0 0 Register */
#define GTM_DATAIN05 /*lint --e(923)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FEA8u)

/** \brief  9FED4, Data Input 0 Register */
#define GTM_DATAIN10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FED4u)

/** \brief  9FED8, Data Input 0 Register */
#define GTM_DATAIN11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FED8u)

/** \brief  9FEDC, Data Input 0 Register */
#define GTM_DATAIN12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FEDCu)

/** \brief  9FEE0, Data Input 0 Register */
#define GTM_DATAIN13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FEE0u)

/** \brief  9FEE4, Data Input 0 Register */
#define GTM_DATAIN14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FEE4u)

/** \brief  9FEE8, Data Input 0 Register */
#define GTM_DATAIN15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DATAIN*)0xF019FEE8u)

/** \brief  28F00, DPLL Act0on Control i Register */
#define GTM_DPLL_ACB0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F00u)

/** \brief  28F04, DPLL Act0on Control i Register */
#define GTM_DPLL_ACB1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F04u)

/** \brief  28F08, DPLL Act0on Control i Register */
#define GTM_DPLL_ACB2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F08u)

/** \brief  28F0C, DPLL Act0on Control i Register */
#define GTM_DPLL_ACB3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F0Cu)

/** \brief  28F10, DPLL Act0on Control i Register */
#define GTM_DPLL_ACB4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F10u)

/** \brief  28F14, DPLL Act0on Control i Register */
#define GTM_DPLL_ACB5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F14u)

/** \brief  28F18, DPLL Act0on Control i Register */
#define GTM_DPLL_ACB6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F18u)

/** \brief  28F1C, DPLL Act0on Control i Register */
#define GTM_DPLL_ACB7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACB*)0xF0128F1Cu)

/** \brief  28018, DPLL ACTION Status Register With Shadow Register */
#define GTM_DPLL_ACT_STA /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ACT_STA*)0xF0128018u)

/** \brief  28438, DPLL Calculated ADD_IN Value for SUB_INC1 Generation */
#define GTM_DPLL_ADD_IN_CAL1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADD_IN_CAL1*)0xF0128438u)

/** \brief  2843C, DPLL Calculated ADD_IN Value for SUB_INC2 Generation */
#define GTM_DPLL_ADD_IN_CAL2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADD_IN_CAL2*)0xF012843Cu)

/** \brief  280C8, DPLL Direct Load Input Value for SUB_INC1 */
#define GTM_DPLL_ADD_IN_LD1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADD_IN_LD1*)0xF01280C8u)

/** \brief  280CC, DPLL Direct Load Input Value for SUB_INC1 */
#define GTM_DPLL_ADD_IN_LD2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADD_IN_LD2*)0xF01280CCu)

/** \brief  28800, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128800u)

/** \brief  28804, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128804u)

/** \brief  28828, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128828u)

/** \brief  2882C, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012882Cu)

/** \brief  28830, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128830u)

/** \brief  28834, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128834u)

/** \brief  28838, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128838u)

/** \brief  2883C, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012883Cu)

/** \brief  28840, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128840u)

/** \brief  28844, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128844u)

/** \brief  28848, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128848u)

/** \brief  2884C, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012884Cu)

/** \brief  28808, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128808u)

/** \brief  28850, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128850u)

/** \brief  28854, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128854u)

/** \brief  28858, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128858u)

/** \brief  2885C, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012885Cu)

/** \brief  28860, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S24 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128860u)

/** \brief  28864, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S25 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128864u)

/** \brief  28868, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S26 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128868u)

/** \brief  2886C, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S27 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012886Cu)

/** \brief  28870, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S28 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128870u)

/** \brief  28874, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S29 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128874u)

/** \brief  2880C, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012880Cu)

/** \brief  28878, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S30 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128878u)

/** \brief  2887C, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S31 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012887Cu)

/** \brief  28880, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S32 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128880u)

/** \brief  28884, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S33 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128884u)

/** \brief  28888, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S34 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128888u)

/** \brief  2888C, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S35 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012888Cu)

/** \brief  28890, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S36 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128890u)

/** \brief  28894, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S37 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128894u)

/** \brief  28898, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S38 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128898u)

/** \brief  2889C, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S39 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012889Cu)

/** \brief  28810, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128810u)

/** \brief  288A0, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S40 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288A0u)

/** \brief  288A4, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S41 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288A4u)

/** \brief  288A8, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S42 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288A8u)

/** \brief  288AC, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S43 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288ACu)

/** \brief  288B0, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S44 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288B0u)

/** \brief  288B4, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S45 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288B4u)

/** \brief  288B8, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S46 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288B8u)

/** \brief  288BC, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S47 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288BCu)

/** \brief  288C0, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S48 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288C0u)

/** \brief  288C4, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S49 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288C4u)

/** \brief  28814, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128814u)

/** \brief  288C8, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S50 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288C8u)

/** \brief  288CC, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S51 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288CCu)

/** \brief  288D0, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S52 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288D0u)

/** \brief  288D4, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S53 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288D4u)

/** \brief  288D8, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S54 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288D8u)

/** \brief  288DC, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S55 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288DCu)

/** \brief  288E0, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S56 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288E0u)

/** \brief  288E4, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S57 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288E4u)

/** \brief  288E8, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S58 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288E8u)

/** \brief  288EC, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S59 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288ECu)

/** \brief  28818, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128818u)

/** \brief  288F0, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S60 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288F0u)

/** \brief  288F4, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S61 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288F4u)

/** \brief  288F8, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S62 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288F8u)

/** \brief  288FC, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S63 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF01288FCu)

/** \brief  2881C, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF012881Cu)

/** \brief  28820, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128820u)

/** \brief  28824, DPLL Adapt Values for All STATE Increments */
#define GTM_DPLL_ADT_S9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ADT_S*)0xF0128824u)

/** \brief  28020, DPLL Address Offset Register For APT In RAM Region 2 */
#define GTM_DPLL_AOSV_2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_AOSV_2*)0xF0128020u)

/** \brief  28028, DPLL Actual RAM Pointer to RAM Regions 1C1, 1C2 and 1C4 */
#define GTM_DPLL_APS /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_APS*)0xF0128028u)

/** \brief  28030, DPLL Actual RAM Pointer to RAM Region 1C3 */
#define GTM_DPLL_APS_1C3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_APS_1C3*)0xF0128030u)

/** \brief  280BC, DPLL Old RAM Pointer and Offset Value for STATE */
#define GTM_DPLL_APS_SYNC /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_APS_SYNC*)0xF01280BCu)

/** \brief  28024, DPLL Actual RAM Pointer to RAM Regions 2A, B and D */
#define GTM_DPLL_APT /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_APT*)0xF0128024u)

/** \brief  2802C, DPLL Actual RAM Pointer to RAM Region 2C */
#define GTM_DPLL_APT_2C /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_APT_2C*)0xF012802Cu)

/** \brief  280B8, DPLL Old RAM Pointer and Offset Value for TRIGGER */
#define GTM_DPLL_APT_SYNC /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_APT_SYNC*)0xF01280B8u)

/** \brief  28494, DPLL Prediction of the actual STATE Increment */
#define GTM_DPLL_CDT_SX /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CDT_SX*)0xF0128494u)

/** \brief  2849C, DPLL Prediction of the nominal STATE increment duration */
#define GTM_DPLL_CDT_SX_NOM /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CDT_SX_NOM*)0xF012849Cu)

/** \brief  28490, DPLL Prediction of the actual TRIGGER Increment */
#define GTM_DPLL_CDT_TX /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CDT_TX*)0xF0128490u)

/** \brief  28498, DPLL Prediction of the nominal TRIGGER Increment duration */
#define GTM_DPLL_CDT_TX_NOM /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CDT_TX_NOM*)0xF0128498u)

/** \brief  285C8, DPLL Number of Sub-Pulses of SUB_INC1 in Continuous Mode */
#define GTM_DPLL_CNT_NUM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CNT_NUM1*)0xF01285C8u)

/** \brief  285CC, DPLL Number of Sub-Pulses of SUB_INC2 in Continuous Mode */
#define GTM_DPLL_CNT_NUM2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CNT_NUM2*)0xF01285CCu)

/** \brief  281EC, DPLL Control 1 Shadow STATE Register */
#define GTM_DPLL_CRTL_1_SHADOW_STATE /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CRTL_1_SHADOW_STATE*)0xF01281ECu)

/** \brief  28000, DPLL Control Register 0 */
#define GTM_DPLL_CTRL_0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_0*)0xF0128000u)

/** \brief  281E4, DPLL Control 0 Shadow STATE Register */
#define GTM_DPLL_CTRL_0_SHADOW_STATE /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE*)0xF01281E4u)

/** \brief  281E0, DPLL Control0 Shadow Trigger Register */
#define GTM_DPLL_CTRL_0_SHADOW_TRIGGER /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER*)0xF01281E0u)

/** \brief  28004, DPLL Control Register 1 */
#define GTM_DPLL_CTRL_1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_1*)0xF0128004u)

/** \brief  281E8, DPLL Control 1 Shadow TRIGGER Register */
#define GTM_DPLL_CTRL_1_SHADOW_TRIGGER /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER*)0xF01281E8u)

/** \brief  28008, DPLL Control Register 2 */
#define GTM_DPLL_CTRL_2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_2*)0xF0128008u)

/** \brief  2800C, DPLL Control Register 3 */
#define GTM_DPLL_CTRL_3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_3*)0xF012800Cu)

/** \brief  28010, DPLL Control Register 4 */
#define GTM_DPLL_CTRL_4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_4*)0xF0128010u)

/** \brief  28014, DPLL Control Register 5 */
#define GTM_DPLL_CTRL_5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_CTRL_5*)0xF0128014u)

/** \brief  28280, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF0128280u)

/** \brief  28284, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF0128284u)

/** \brief  282A8, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282A8u)

/** \brief  282AC, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282ACu)

/** \brief  282B0, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282B0u)

/** \brief  282B4, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282B4u)

/** \brief  282B8, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282B8u)

/** \brief  282BC, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282BCu)

/** \brief  282C0, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282C0u)

/** \brief  282C4, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282C4u)

/** \brief  282C8, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282C8u)

/** \brief  282CC, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282CCu)

/** \brief  28288, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF0128288u)

/** \brief  282D0, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282D0u)

/** \brief  282D4, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282D4u)

/** \brief  282D8, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282D8u)

/** \brief  282DC, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282DCu)

/** \brief  282E0, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA24 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282E0u)

/** \brief  282E4, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA25 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282E4u)

/** \brief  282E8, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA26 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282E8u)

/** \brief  282EC, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA27 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282ECu)

/** \brief  282F0, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA28 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282F0u)

/** \brief  282F4, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA29 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282F4u)

/** \brief  2828C, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF012828Cu)

/** \brief  282F8, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA30 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282F8u)

/** \brief  282FC, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA31 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282FCu)

/** \brief  28290, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF0128290u)

/** \brief  28294, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF0128294u)

/** \brief  28298, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF0128298u)

/** \brief  2829C, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF012829Cu)

/** \brief  282A0, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282A0u)

/** \brief  282A4, DPLL ACTION Time To React Before PSAi Register */
#define GTM_DPLL_DLA9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DLA*)0xF01282A4u)

/** \brief  28900, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128900u)

/** \brief  28904, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128904u)

/** \brief  28928, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128928u)

/** \brief  2892C, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012892Cu)

/** \brief  28930, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128930u)

/** \brief  28934, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128934u)

/** \brief  28938, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128938u)

/** \brief  2893C, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012893Cu)

/** \brief  28940, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128940u)

/** \brief  28944, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128944u)

/** \brief  28948, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128948u)

/** \brief  2894C, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012894Cu)

/** \brief  28908, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128908u)

/** \brief  28950, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128950u)

/** \brief  28954, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128954u)

/** \brief  28958, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128958u)

/** \brief  2895C, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012895Cu)

/** \brief  28960, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S24 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128960u)

/** \brief  28964, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S25 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128964u)

/** \brief  28968, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S26 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128968u)

/** \brief  2896C, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S27 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012896Cu)

/** \brief  28970, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S28 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128970u)

/** \brief  28974, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S29 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128974u)

/** \brief  2890C, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012890Cu)

/** \brief  28978, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S30 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128978u)

/** \brief  2897C, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S31 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012897Cu)

/** \brief  28980, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S32 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128980u)

/** \brief  28984, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S33 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128984u)

/** \brief  28988, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S34 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128988u)

/** \brief  2898C, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S35 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012898Cu)

/** \brief  28990, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S36 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128990u)

/** \brief  28994, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S37 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128994u)

/** \brief  28998, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S38 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128998u)

/** \brief  2899C, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S39 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012899Cu)

/** \brief  28910, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128910u)

/** \brief  289A0, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S40 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289A0u)

/** \brief  289A4, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S41 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289A4u)

/** \brief  289A8, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S42 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289A8u)

/** \brief  289AC, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S43 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289ACu)

/** \brief  289B0, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S44 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289B0u)

/** \brief  289B4, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S45 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289B4u)

/** \brief  289B8, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S46 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289B8u)

/** \brief  289BC, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S47 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289BCu)

/** \brief  289C0, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S48 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289C0u)

/** \brief  289C4, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S49 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289C4u)

/** \brief  28914, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128914u)

/** \brief  289C8, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S50 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289C8u)

/** \brief  289CC, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S51 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289CCu)

/** \brief  289D0, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S52 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289D0u)

/** \brief  289D4, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S53 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289D4u)

/** \brief  289D8, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S54 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289D8u)

/** \brief  289DC, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S55 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289DCu)

/** \brief  289E0, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S56 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289E0u)

/** \brief  289E4, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S57 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289E4u)

/** \brief  289E8, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S58 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289E8u)

/** \brief  289EC, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S59 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289ECu)

/** \brief  28918, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128918u)

/** \brief  289F0, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S60 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289F0u)

/** \brief  289F4, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S61 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289F4u)

/** \brief  289F8, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S62 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289F8u)

/** \brief  289FC, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S63 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF01289FCu)

/** \brief  2891C, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF012891Cu)

/** \brief  28920, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128920u)

/** \brief  28924, DPLL Nominal STATE Increment Values for FULL_SCALE */
#define GTM_DPLL_DT_S9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S*)0xF0128924u)

/** \brief  2847C, DPLL Duration of Last STATE Increment [DT_S_ACT] */
#define GTM_DPLL_DT_S_ACT /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_S_ACT*)0xF012847Cu)

/** \brief  28478, DPLL Duration of Last TRIGGER Increment */
#define GTM_DPLL_DT_T_ACT /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DT_T_ACT*)0xF0128478u)

/** \brief  28380, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF0128380u)

/** \brief  28384, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF0128384u)

/** \brief  283A8, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283A8u)

/** \brief  283AC, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283ACu)

/** \brief  283B0, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283B0u)

/** \brief  283B4, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283B4u)

/** \brief  283B8, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283B8u)

/** \brief  283BC, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283BCu)

/** \brief  283C0, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283C0u)

/** \brief  283C4, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283C4u)

/** \brief  283C8, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283C8u)

/** \brief  283CC, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283CCu)

/** \brief  28388, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF0128388u)

/** \brief  283D0, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283D0u)

/** \brief  283D4, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283D4u)

/** \brief  283D8, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283D8u)

/** \brief  283DC, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283DCu)

/** \brief  283E0, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA24 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283E0u)

/** \brief  283E4, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA25 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283E4u)

/** \brief  283E8, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA26 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283E8u)

/** \brief  283EC, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA27 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283ECu)

/** \brief  283F0, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA28 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283F0u)

/** \brief  283F4, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA29 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283F4u)

/** \brief  2838C, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF012838Cu)

/** \brief  283F8, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA30 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283F8u)

/** \brief  283FC, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA31 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283FCu)

/** \brief  28390, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF0128390u)

/** \brief  28394, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF0128394u)

/** \brief  28398, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF0128398u)

/** \brief  2839C, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF012839Cu)

/** \brief  283A0, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283A0u)

/** \brief  283A4, DPLL Calculated Relat0ve Time To ACTION_i Register */
#define GTM_DPLL_DTA9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_DTA*)0xF01283A4u)

/** \brief  28488, DPLL Difference of Prediction to actual value for Last STATE
 * Increment */
#define GTM_DPLL_EDT_S /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_EDT_S*)0xF0128488u)

/** \brief  28480, DPLL Difference of prediction to actual value of the last
 * TRIGGER increment */
#define GTM_DPLL_EDT_T /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_EDT_T*)0xF0128480u)

/** \brief  28050, DPLL Error Interrupt Enable Register */
#define GTM_DPLL_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_EIRQ_EN*)0xF0128050u)

/** \brief  28100, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128100u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR0.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR0.
*/
#define	GTM_DPLL_ID_PMTR_0	(GTM_DPLL_ID_PMTR0)

/** \brief  28104, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128104u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR1.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR1.
*/
#define	GTM_DPLL_ID_PMTR_1	(GTM_DPLL_ID_PMTR1)

/** \brief  28128, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128128u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR10.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR10.
*/
#define	GTM_DPLL_ID_PMTR_10	(GTM_DPLL_ID_PMTR10)

/** \brief  2812C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012812Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR11.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR11.
*/
#define	GTM_DPLL_ID_PMTR_11	(GTM_DPLL_ID_PMTR11)

/** \brief  28130, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128130u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR12.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR12.
*/
#define	GTM_DPLL_ID_PMTR_12	(GTM_DPLL_ID_PMTR12)

/** \brief  28134, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128134u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR13.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR13.
*/
#define	GTM_DPLL_ID_PMTR_13	(GTM_DPLL_ID_PMTR13)

/** \brief  28138, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128138u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR14.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR14.
*/
#define	GTM_DPLL_ID_PMTR_14	(GTM_DPLL_ID_PMTR14)

/** \brief  2813C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012813Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR15.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR15.
*/
#define	GTM_DPLL_ID_PMTR_15	(GTM_DPLL_ID_PMTR15)

/** \brief  28140, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128140u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR16.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR16.
*/
#define	GTM_DPLL_ID_PMTR_16	(GTM_DPLL_ID_PMTR16)

/** \brief  28144, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128144u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR17.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR17.
*/
#define	GTM_DPLL_ID_PMTR_17	(GTM_DPLL_ID_PMTR17)

/** \brief  28148, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128148u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR18.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR18.
*/
#define	GTM_DPLL_ID_PMTR_18	(GTM_DPLL_ID_PMTR18)

/** \brief  2814C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012814Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR19.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR19.
*/
#define	GTM_DPLL_ID_PMTR_19	(GTM_DPLL_ID_PMTR19)

/** \brief  28108, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128108u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR2.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR2.
*/
#define	GTM_DPLL_ID_PMTR_2	(GTM_DPLL_ID_PMTR2)

/** \brief  28150, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128150u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR20.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR20.
*/
#define	GTM_DPLL_ID_PMTR_20	(GTM_DPLL_ID_PMTR20)

/** \brief  28154, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128154u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR21.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR21.
*/
#define	GTM_DPLL_ID_PMTR_21	(GTM_DPLL_ID_PMTR21)

/** \brief  28158, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128158u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR22.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR22.
*/
#define	GTM_DPLL_ID_PMTR_22	(GTM_DPLL_ID_PMTR22)

/** \brief  2815C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012815Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR23.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR23.
*/
#define	GTM_DPLL_ID_PMTR_23	(GTM_DPLL_ID_PMTR23)

/** \brief  28160, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR24 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128160u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR24.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR24.
*/
#define	GTM_DPLL_ID_PMTR_24	(GTM_DPLL_ID_PMTR24)

/** \brief  28164, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR25 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128164u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR25.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR25.
*/
#define	GTM_DPLL_ID_PMTR_25	(GTM_DPLL_ID_PMTR25)

/** \brief  28168, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR26 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128168u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR26.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR26.
*/
#define	GTM_DPLL_ID_PMTR_26	(GTM_DPLL_ID_PMTR26)

/** \brief  2816C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR27 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012816Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR27.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR27.
*/
#define	GTM_DPLL_ID_PMTR_27	(GTM_DPLL_ID_PMTR27)

/** \brief  28170, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR28 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128170u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR28.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR28.
*/
#define	GTM_DPLL_ID_PMTR_28	(GTM_DPLL_ID_PMTR28)

/** \brief  28174, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR29 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128174u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR29.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR29.
*/
#define	GTM_DPLL_ID_PMTR_29	(GTM_DPLL_ID_PMTR29)

/** \brief  2810C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012810Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR3.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR3.
*/
#define	GTM_DPLL_ID_PMTR_3	(GTM_DPLL_ID_PMTR3)

/** \brief  28178, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR30 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128178u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR30.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR30.
*/
#define	GTM_DPLL_ID_PMTR_30	(GTM_DPLL_ID_PMTR30)

/** \brief  2817C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR31 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012817Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR31.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR31.
*/
#define	GTM_DPLL_ID_PMTR_31	(GTM_DPLL_ID_PMTR31)

/** \brief  28110, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128110u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR4.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR4.
*/
#define	GTM_DPLL_ID_PMTR_4	(GTM_DPLL_ID_PMTR4)

/** \brief  28114, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128114u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR5.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR5.
*/
#define	GTM_DPLL_ID_PMTR_5	(GTM_DPLL_ID_PMTR5)

/** \brief  28118, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128118u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR6.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR6.
*/
#define	GTM_DPLL_ID_PMTR_6	(GTM_DPLL_ID_PMTR6)

/** \brief  2811C, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF012811Cu)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR7.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR7.
*/
#define	GTM_DPLL_ID_PMTR_7	(GTM_DPLL_ID_PMTR7)

/** \brief  28120, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128120u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR8.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR8.
*/
#define	GTM_DPLL_ID_PMTR_8	(GTM_DPLL_ID_PMTR8)

/** \brief  28124, DPLL ID Information For Input Signal PMTR n Register */
#define GTM_DPLL_ID_PMTR9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_ID_PMTR*)0xF0128124u)

/** Alias (User Manual Name) for GTM_DPLL_ID_PMTR9.
* To use register names with standard convension, please use GTM_DPLL_ID_PMTR9.
*/
#define	GTM_DPLL_ID_PMTR_9	(GTM_DPLL_ID_PMTR9)

/** \brief  280B0, DPLL Counter for Pulses for TBU_TS1 to be sent in Automatic
 * End Mode */
#define GTM_DPLL_INC_CNT1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_INC_CNT1*)0xF01280B0u)

/** \brief  280B4, DPLL Counter for Pulses for TBU_TS2 to be sent in Automatic
 * End Mode when SMC=RMO=1 */
#define GTM_DPLL_INC_CNT2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_INC_CNT2*)0xF01280B4u)

/** \brief  28044, DPLL Interrupt Enable Register */
#define GTM_DPLL_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_IRQ_EN*)0xF0128044u)

/** \brief  28048, DPLL Interrupt Force Register */
#define GTM_DPLL_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_IRQ_FORCINT*)0xF0128048u)

/** \brief  2804C, DPLL Interrupt Mode Register */
#define GTM_DPLL_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_IRQ_MODE*)0xF012804Cu)

/** \brief  28040, DPLL Interrupt Notification Register */
#define GTM_DPLL_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_IRQ_NOTIFY*)0xF0128040u)

/** \brief  2848C, DPLL Weighted difference of Prediction up to the Last STATE
 * Increment */
#define GTM_DPLL_MEDT_S /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_MEDT_S*)0xF012848Cu)

/** \brief  28484, DPLL Weighted difference of Prediction up to the Last TRIGGER
 * Increment */
#define GTM_DPLL_MEDT_T /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_MEDT_T*)0xF0128484u)

/** \brief  285C0, DPLL Calculated Number of Sub-Pulses between Two STATE Events */
#define GTM_DPLL_MLS1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_MLS1*)0xF01285C0u)

/** \brief  285C4, DPLL Calculated Number of Sub-Pulses between Two STATE Events */
#define GTM_DPLL_MLS2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_MLS2*)0xF01285C4u)

/** \brief  28440, DPLL Missing Pulses to be Added/Subtracted Directly to
 * SUB_INC1 and INC_CNT1 Once */
#define GTM_DPLL_MPVAL1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_MPVAL1*)0xF0128440u)

/** \brief  28444, DPLL Missing Pulses to be Added/Subtracted Directly to
 * SUB_INC2 and INC_CNT2 Once */
#define GTM_DPLL_MPVAL2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_MPVAL2*)0xF0128444u)

/** \brief  28300, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128300u)

/** \brief  28304, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128304u)

/** \brief  28328, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128328u)

/** \brief  2832C, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012832Cu)

/** \brief  28330, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128330u)

/** \brief  28334, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128334u)

/** \brief  28338, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128338u)

/** \brief  2833C, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012833Cu)

/** \brief  28340, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128340u)

/** \brief  28344, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128344u)

/** \brief  28348, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128348u)

/** \brief  2834C, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012834Cu)

/** \brief  28308, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128308u)

/** \brief  28350, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128350u)

/** \brief  28354, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128354u)

/** \brief  28358, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128358u)

/** \brief  2835C, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012835Cu)

/** \brief  28360, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA24 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128360u)

/** \brief  28364, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA25 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128364u)

/** \brief  28368, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA26 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128368u)

/** \brief  2836C, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA27 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012836Cu)

/** \brief  28370, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA28 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128370u)

/** \brief  28374, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA29 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128374u)

/** \brief  2830C, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012830Cu)

/** \brief  28378, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA30 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128378u)

/** \brief  2837C, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA31 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012837Cu)

/** \brief  28310, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128310u)

/** \brief  28314, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128314u)

/** \brief  28318, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128318u)

/** \brief  2831C, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF012831Cu)

/** \brief  28320, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128320u)

/** \brief  28324, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
#define GTM_DPLL_NA9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NA*)0xF0128324u)

/** \brief  285FC, DPLL Number of Pulses of Current Increment in Emergency Mode */
#define GTM_DPLL_NMB_S /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NMB_S*)0xF01285FCu)

/** \brief  28450, DPLL Target Number of Pulses to be sent in emergency mode
 * Register */
#define GTM_DPLL_NMB_S_TAR /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NMB_S_TAR*)0xF0128450u)

/** \brief  28454, DPLL Target Number of Pulses to be sent in emergency mode
 * Register */
#define GTM_DPLL_NMB_S_TAR_OLD /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NMB_S_TAR_OLD*)0xF0128454u)

/** \brief  285F8, DPLL Number of Pulses of Current Increment in Normal Mode */
#define GTM_DPLL_NMB_T /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NMB_T*)0xF01285F8u)

/** \brief  28448, DPLL Target Number of Pulses to be sent in normal mode
 * Register */
#define GTM_DPLL_NMB_T_TAR /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NMB_T_TAR*)0xF0128448u)

/** \brief  2844C, DPLL Target Number of Pulses to be sent in normal mode
 * Register */
#define GTM_DPLL_NMB_T_TAR_OLD /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NMB_T_TAR_OLD*)0xF012844Cu)

/** \brief  2803C, DPLL Number of Active TRIGGER Events to Interrupt */
#define GTM_DPLL_NTI_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NTI_CNT*)0xF012803Cu)

/** \brief  28038, DPLL Number of Recent STATE Events Used for Calculations */
#define GTM_DPLL_NUSC /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NUSC*)0xF0128038u)

/** \brief  28034, DPLL Number of Recent TRIGGER Events Used for Calculations */
#define GTM_DPLL_NUTC /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_NUTC*)0xF0128034u)

/** \brief  2801C, DPLL Offset And Switch Old/New Address Register */
#define GTM_DPLL_OSW /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_OSW*)0xF012801Cu)

/** \brief  28500, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128500u)

/** \brief  28504, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128504u)

/** \brief  28528, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128528u)

/** \brief  2852C, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF012852Cu)

/** \brief  28530, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128530u)

/** \brief  28534, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128534u)

/** \brief  28538, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128538u)

/** \brief  2853C, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF012853Cu)

/** \brief  28540, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128540u)

/** \brief  28544, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128544u)

/** \brief  28548, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128548u)

/** \brief  2854C, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF012854Cu)

/** \brief  28508, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128508u)

/** \brief  28550, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128550u)

/** \brief  28554, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128554u)

/** \brief  28558, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128558u)

/** \brief  2855C, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF012855Cu)

/** \brief  28560, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T24 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128560u)

/** \brief  28564, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T25 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128564u)

/** \brief  28568, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T26 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128568u)

/** \brief  2856C, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T27 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF012856Cu)

/** \brief  28570, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T28 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128570u)

/** \brief  28574, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T29 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128574u)

/** \brief  2850C, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF012850Cu)

/** \brief  28578, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T30 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128578u)

/** \brief  2857C, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T31 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF012857Cu)

/** \brief  28510, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128510u)

/** \brief  28514, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128514u)

/** \brief  28518, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128518u)

/** \brief  2851C, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF012851Cu)

/** \brief  28520, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128520u)

/** \brief  28524, DPLL Projected TRIGGER Increment Sum Relat0ons for Action_i */
#define GTM_DPLL_PDT_T9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PDT_T*)0xF0128524u)

/** \brief  28200, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128200u)

/** \brief  28204, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128204u)

/** \brief  28228, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128228u)

/** \brief  2822C, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012822Cu)

/** \brief  28230, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128230u)

/** \brief  28234, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128234u)

/** \brief  28238, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128238u)

/** \brief  2823C, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012823Cu)

/** \brief  28240, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128240u)

/** \brief  28244, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128244u)

/** \brief  28248, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128248u)

/** \brief  2824C, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012824Cu)

/** \brief  28208, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128208u)

/** \brief  28250, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128250u)

/** \brief  28254, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128254u)

/** \brief  28258, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128258u)

/** \brief  2825C, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012825Cu)

/** \brief  28260, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA24 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128260u)

/** \brief  28264, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA25 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128264u)

/** \brief  28268, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA26 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128268u)

/** \brief  2826C, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA27 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012826Cu)

/** \brief  28270, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA28 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128270u)

/** \brief  28274, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA29 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128274u)

/** \brief  2820C, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012820Cu)

/** \brief  28278, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA30 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128278u)

/** \brief  2827C, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA31 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012827Cu)

/** \brief  28210, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128210u)

/** \brief  28214, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128214u)

/** \brief  28218, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128218u)

/** \brief  2821C, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF012821Cu)

/** \brief  28220, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128220u)

/** \brief  28224, DPLL ACTION Position/Value Action Request Register */
#define GTM_DPLL_PSA9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSA*)0xF0128224u)

/** \brief  28E80, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E80u)

/** \brief  28E84, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E84u)

/** \brief  28EA8, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EA8u)

/** \brief  28EAC, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EACu)

/** \brief  28EB0, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EB0u)

/** \brief  28EB4, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EB4u)

/** \brief  28EB8, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EB8u)

/** \brief  28EBC, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EBCu)

/** \brief  28EC0, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EC0u)

/** \brief  28EC4, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EC4u)

/** \brief  28EC8, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EC8u)

/** \brief  28ECC, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128ECCu)

/** \brief  28E88, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E88u)

/** \brief  28ED0, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128ED0u)

/** \brief  28ED4, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128ED4u)

/** \brief  28ED8, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128ED8u)

/** \brief  28EDC, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EDCu)

/** \brief  28EE0, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC24 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EE0u)

/** \brief  28EE4, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC25 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EE4u)

/** \brief  28EE8, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC26 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EE8u)

/** \brief  28EEC, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC27 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EECu)

/** \brief  28EF0, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC28 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EF0u)

/** \brief  28EF4, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC29 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EF4u)

/** \brief  28E8C, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E8Cu)

/** \brief  28EF8, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC30 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EF8u)

/** \brief  28EFC, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC31 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EFCu)

/** \brief  28E90, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E90u)

/** \brief  28E94, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E94u)

/** \brief  28E98, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E98u)

/** \brief  28E9C, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128E9Cu)

/** \brief  28EA0, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EA0u)

/** \brief  28EA4, DPLL Calculated Position Value Register */
#define GTM_DPLL_PSAC9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSAC*)0xF0128EA4u)

/** \brief  285E4, DPLL Accurate Calculated Position Stamp of Last STATE Input */
#define GTM_DPLL_PSSC /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSSC*)0xF01285E4u)

/** \brief  285F0, DPLL Measured Position Stamp of Last STATE Input */
#define GTM_DPLL_PSSM_0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSSM_0*)0xF01285F0u)

/** Alias (User Manual Name) for GTM_DPLL_PSSM_0.
* To use register names with standard convension, please use GTM_DPLL_PSSM_0.
*/
#define	GTM_DPLL_PSSM_OLD_1	(GTM_DPLL_PSSM_0)

/** \brief  285F4, DPLL Measured Position Stamp of Last STATE Input */
#define GTM_DPLL_PSSM_1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSSM_1*)0xF01285F4u)

/** Alias (User Manual Name) for GTM_DPLL_PSSM_1.
* To use register names with standard convension, please use GTM_DPLL_PSSM_1.
*/
#define	GTM_DPLL_PSSM_OLD_0	(GTM_DPLL_PSSM_1)

/** \brief  285E0, DPLL Actual Calculated Position Stamp of Last TRIGGER Input */
#define GTM_DPLL_PSTC /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSTC*)0xF01285E0u)

/** \brief  285E8, DPLL Measured Position Stamp of Last TRIGGER Input */
#define GTM_DPLL_PSTM_0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSTM_0*)0xF01285E8u)

/** Alias (User Manual Name) for GTM_DPLL_PSTM_0.
* To use register names with standard convension, please use GTM_DPLL_PSTM_0.
*/
#define	GTM_DPLL_PSTM_OLD_1	(GTM_DPLL_PSTM_0)

/** \brief  285EC, DPLL Measured Position Stamp of Last TRIGGER Input */
#define GTM_DPLL_PSTM_1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PSTM_1*)0xF01285ECu)

/** Alias (User Manual Name) for GTM_DPLL_PSTM_1.
* To use register names with standard convension, please use GTM_DPLL_PSTM_1.
*/
#define	GTM_DPLL_PSTM_OLD_0	(GTM_DPLL_PSTM_1)

/** \brief  285D0, DPLL Plausibility Value of Next Active TRIGGER Slope */
#define GTM_DPLL_PVT /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_PVT*)0xF01285D0u)

/** \brief  281FC, DPLL RAM Initatlisation Register */
#define GTM_DPLL_RAM_INI /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RAM_INI*)0xF01281FCu)

/** \brief  28464, DPLL Reciprocal Value of Expected Increment Duration STATE */
#define GTM_DPLL_RCDT_SX /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RCDT_SX*)0xF0128464u)

/** \brief  2846C, DPLL Reciprocal Value of the Expected Nominal Increment
 * Duration STATE */
#define GTM_DPLL_RCDT_SX_NOM /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RCDT_SX_NOM*)0xF012846Cu)

/** \brief  28460, DPLL Reciprocal Value of Expected Increment Duration TRIGGER */
#define GTM_DPLL_RCDT_TX /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RCDT_TX*)0xF0128460u)

/** \brief  28468, DPLL Reciprocal Value of the Expected Nominal Increment
 * Duration TRIGGER */
#define GTM_DPLL_RCDT_TX_NOM /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RCDT_TX_NOM*)0xF0128468u)

/** \brief  28600, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128600u)

/** \brief  28604, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128604u)

/** \brief  28628, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128628u)

/** \brief  2862C, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012862Cu)

/** \brief  28630, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128630u)

/** \brief  28634, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128634u)

/** \brief  28638, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128638u)

/** \brief  2863C, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012863Cu)

/** \brief  28640, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128640u)

/** \brief  28644, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128644u)

/** \brief  28648, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128648u)

/** \brief  2864C, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012864Cu)

/** \brief  28608, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128608u)

/** \brief  28650, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128650u)

/** \brief  28654, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128654u)

/** \brief  28658, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128658u)

/** \brief  2865C, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012865Cu)

/** \brief  28660, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S24 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128660u)

/** \brief  28664, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S25 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128664u)

/** \brief  28668, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S26 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128668u)

/** \brief  2866C, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S27 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012866Cu)

/** \brief  28670, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S28 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128670u)

/** \brief  28674, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S29 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128674u)

/** \brief  2860C, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012860Cu)

/** \brief  28678, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S30 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128678u)

/** \brief  2867C, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S31 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012867Cu)

/** \brief  28680, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S32 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128680u)

/** \brief  28684, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S33 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128684u)

/** \brief  28688, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S34 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128688u)

/** \brief  2868C, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S35 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012868Cu)

/** \brief  28690, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S36 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128690u)

/** \brief  28694, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S37 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128694u)

/** \brief  28698, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S38 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128698u)

/** \brief  2869C, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S39 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012869Cu)

/** \brief  28610, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128610u)

/** \brief  286A0, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S40 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286A0u)

/** \brief  286A4, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S41 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286A4u)

/** \brief  286A8, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S42 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286A8u)

/** \brief  286AC, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S43 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286ACu)

/** \brief  286B0, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S44 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286B0u)

/** \brief  286B4, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S45 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286B4u)

/** \brief  286B8, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S46 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286B8u)

/** \brief  286BC, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S47 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286BCu)

/** \brief  286C0, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S48 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286C0u)

/** \brief  286C4, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S49 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286C4u)

/** \brief  28614, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128614u)

/** \brief  286C8, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S50 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286C8u)

/** \brief  286CC, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S51 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286CCu)

/** \brief  286D0, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S52 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286D0u)

/** \brief  286D4, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S53 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286D4u)

/** \brief  286D8, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S54 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286D8u)

/** \brief  286DC, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S55 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286DCu)

/** \brief  286E0, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S56 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286E0u)

/** \brief  286E4, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S57 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286E4u)

/** \brief  286E8, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S58 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286E8u)

/** \brief  286EC, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S59 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286ECu)

/** \brief  28618, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128618u)

/** \brief  286F0, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S60 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286F0u)

/** \brief  286F4, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S61 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286F4u)

/** \brief  286F8, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S62 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286F8u)

/** \brief  286FC, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S63 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF01286FCu)

/** \brief  2861C, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF012861Cu)

/** \brief  28620, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128620u)

/** \brief  28624, DPLL Nominal STATE Reciprocal Values in FULL_SCALE */
#define GTM_DPLL_RDT_S9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S*)0xF0128624u)

/** \brief  28474, DPLL Actual Reciprocal Value of STATE */
#define GTM_DPLL_RDT_S_ACT /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_S_ACT*)0xF0128474u)

/** \brief  28470, DPLL Actual Reciprocal Value of TRIGGER */
#define GTM_DPLL_RDT_T_ACT /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_RDT_T_ACT*)0xF0128470u)

/** \brief  284A4, DPLL STATE Locking Range */
#define GTM_DPLL_SLR /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_SLR*)0xF01284A4u)

/** \brief  280FC, DPLL Status Register */
#define GTM_DPLL_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_STATUS*)0xF01280FCu)

/** \brief  280C4, DPLL TBU_TS0 Value at last STATE Event */
#define GTM_DPLL_TBU_TS0_S /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TBU_TS0_S*)0xF01280C4u)

/** \brief  280C0, DPLL TBU_TS0 Value at last TRIGGER Event */
#define GTM_DPLL_TBU_TS0_T /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TBU_TS0_T*)0xF01280C0u)

/** \brief  28424, DPLL TRIGGER Hold Time Max Value */
#define GTM_DPLL_THMA /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_THMA*)0xF0128424u)

/** \brief  28420, DPLL TRIGGER hold time min value */
#define GTM_DPLL_THMI /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_THMI*)0xF0128420u)

/** \brief  28428, DPLL Measured Last Pulse Time from Valid to Invalid TRIGGER
 * Slope */
#define GTM_DPLL_THVAL /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_THVAL*)0xF0128428u)

/** \brief  284A0, DPLL TRIGGER locking range */
#define GTM_DPLL_TLR /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TLR*)0xF01284A0u)

/** \brief  28430, DPLL Time Out Value of active TRIGGER Slope */
#define GTM_DPLL_TOV /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TOV*)0xF0128430u)

/** \brief  28434, DPLL Time Out Value of active STATE Slope */
#define GTM_DPLL_TOV_S /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TOV_S*)0xF0128434u)

/** \brief  28418, DPLL Actual Signal STATE Filter Value Register */
#define GTM_DPLL_TS_FTV_S /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TS_FTV_S*)0xF0128418u)

/** Alias (User Manual Name) for GTM_DPLL_TS_FTV_S.
* To use register names with standard convension, please use GTM_DPLL_TS_FTV_S.
*/
#define	GTM_DPLL_FTV_S	(GTM_DPLL_TS_FTV_S)

/** \brief  28408, DPLL Actual Signal TRIGGER Filter Value Register */
#define GTM_DPLL_TS_FTV_T /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TS_FTV_T*)0xF0128408u)

/** Alias (User Manual Name) for GTM_DPLL_TS_FTV_T.
* To use register names with standard convension, please use GTM_DPLL_TS_FTV_T.
*/
#define	GTM_DPLL_FTV_T	(GTM_DPLL_TS_FTV_T)

/** \brief  28410, DPLL Actual Signal STATE Time Stamp Register */
#define GTM_DPLL_TS_S_0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TS_S_0*)0xF0128410u)

/** Alias (User Manual Name) for GTM_DPLL_TS_S_0.
* To use register names with standard convension, please use GTM_DPLL_TS_S_0.
*/
#define	GTM_DPLL_TS_S_OLD_0	(GTM_DPLL_TS_S_0)

/** \brief  28414, DPLL Actual Signal STATE Time Stamp Register */
#define GTM_DPLL_TS_S_1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TS_S_1*)0xF0128414u)

/** Alias (User Manual Name) for GTM_DPLL_TS_S_1.
* To use register names with standard convension, please use GTM_DPLL_TS_S_1.
*/
#define	GTM_DPLL_TS_S_OLD_1	(GTM_DPLL_TS_S_1)

/** \brief  28400, DPLL Actual Signal TRIGGER Time Stamp Register */
#define GTM_DPLL_TS_T_0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TS_T_0*)0xF0128400u)

/** Alias (User Manual Name) for GTM_DPLL_TS_T_0.
* To use register names with standard convension, please use GTM_DPLL_TS_T_0.
*/
#define	GTM_DPLL_TS_T_OLD_0	(GTM_DPLL_TS_T_0)

/** \brief  28404, DPLL Actual Signal TRIGGER Time Stamp Register */
#define GTM_DPLL_TS_T_1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TS_T_1*)0xF0128404u)

/** Alias (User Manual Name) for GTM_DPLL_TS_T_1.
* To use register names with standard convension, please use GTM_DPLL_TS_T_1.
*/
#define	GTM_DPLL_TS_T_OLD_1	(GTM_DPLL_TS_T_1)

/** \brief  28E00, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E00u)

/** \brief  28E04, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E04u)

/** \brief  28E28, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E28u)

/** \brief  28E2C, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E2Cu)

/** \brief  28E30, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E30u)

/** \brief  28E34, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E34u)

/** \brief  28E38, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E38u)

/** \brief  28E3C, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E3Cu)

/** \brief  28E40, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E40u)

/** \brief  28E44, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E44u)

/** \brief  28E48, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E48u)

/** \brief  28E4C, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E4Cu)

/** \brief  28E08, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E08u)

/** \brief  28E50, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E50u)

/** \brief  28E54, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E54u)

/** \brief  28E58, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E58u)

/** \brief  28E5C, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E5Cu)

/** \brief  28E60, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC24 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E60u)

/** \brief  28E64, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC25 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E64u)

/** \brief  28E68, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC26 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E68u)

/** \brief  28E6C, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC27 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E6Cu)

/** \brief  28E70, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC28 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E70u)

/** \brief  28E74, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC29 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E74u)

/** \brief  28E0C, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E0Cu)

/** \brief  28E78, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC30 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E78u)

/** \brief  28E7C, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC31 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E7Cu)

/** \brief  28E10, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E10u)

/** \brief  28E14, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E14u)

/** \brief  28E18, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E18u)

/** \brief  28E1C, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E1Cu)

/** \brief  28E20, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E20u)

/** \brief  28E24, DPLL Calculate Time Stamp Register */
#define GTM_DPLL_TSAC9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSAC*)0xF0128E24u)

/** \brief  28700, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S0 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128700u)

/** \brief  28704, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S1 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128704u)

/** \brief  28728, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S10 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128728u)

/** \brief  2872C, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S11 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012872Cu)

/** \brief  28730, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S12 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128730u)

/** \brief  28734, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S13 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128734u)

/** \brief  28738, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S14 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128738u)

/** \brief  2873C, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S15 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012873Cu)

/** \brief  28740, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S16 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128740u)

/** \brief  28744, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S17 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128744u)

/** \brief  28748, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S18 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128748u)

/** \brief  2874C, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S19 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012874Cu)

/** \brief  28708, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S2 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128708u)

/** \brief  28750, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S20 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128750u)

/** \brief  28754, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S21 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128754u)

/** \brief  28758, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S22 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128758u)

/** \brief  2875C, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S23 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012875Cu)

/** \brief  28760, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S24 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128760u)

/** \brief  28764, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S25 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128764u)

/** \brief  28768, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S26 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128768u)

/** \brief  2876C, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S27 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012876Cu)

/** \brief  28770, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S28 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128770u)

/** \brief  28774, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S29 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128774u)

/** \brief  2870C, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S3 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012870Cu)

/** \brief  28778, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S30 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128778u)

/** \brief  2877C, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S31 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012877Cu)

/** \brief  28780, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S32 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128780u)

/** \brief  28784, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S33 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128784u)

/** \brief  28788, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S34 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128788u)

/** \brief  2878C, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S35 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012878Cu)

/** \brief  28790, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S36 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128790u)

/** \brief  28794, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S37 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128794u)

/** \brief  28798, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S38 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128798u)

/** \brief  2879C, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S39 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012879Cu)

/** \brief  28710, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S4 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128710u)

/** \brief  287A0, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S40 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287A0u)

/** \brief  287A4, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S41 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287A4u)

/** \brief  287A8, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S42 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287A8u)

/** \brief  287AC, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S43 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287ACu)

/** \brief  287B0, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S44 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287B0u)

/** \brief  287B4, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S45 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287B4u)

/** \brief  287B8, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S46 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287B8u)

/** \brief  287BC, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S47 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287BCu)

/** \brief  287C0, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S48 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287C0u)

/** \brief  287C4, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S49 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287C4u)

/** \brief  28714, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S5 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128714u)

/** \brief  287C8, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S50 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287C8u)

/** \brief  287CC, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S51 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287CCu)

/** \brief  287D0, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S52 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287D0u)

/** \brief  287D4, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S53 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287D4u)

/** \brief  287D8, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S54 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287D8u)

/** \brief  287DC, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S55 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287DCu)

/** \brief  287E0, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S56 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287E0u)

/** \brief  287E4, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S57 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287E4u)

/** \brief  287E8, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S58 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287E8u)

/** \brief  287EC, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S59 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287ECu)

/** \brief  28718, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S6 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128718u)

/** \brief  287F0, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S60 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287F0u)

/** \brief  287F4, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S61 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287F4u)

/** \brief  287F8, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S62 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287F8u)

/** \brief  287FC, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S63 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF01287FCu)

/** \brief  2871C, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S7 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF012871Cu)

/** \brief  28720, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S8 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128720u)

/** \brief  28724, DPLL Time Stamp Field of STATE Events */
#define GTM_DPLL_TSF_S9 /*lint --e(923)*/ (*(volatile Ifx_GTM_DPLL_TSF_S*)0xF0128724u)

/** \brief  9FE90, Data Exchange Input Control Register */
#define GTM_DXINCON /*lint --e(923)*/ (*(volatile Ifx_GTM_DXINCON*)0xF019FE90u)

/** \brief  9FE00, Data Exchange Output Control Register */
#define GTM_DXOUTCON /*lint --e(923)*/ (*(volatile Ifx_GTM_DXOUTCON*)0xF019FE00u)

/** \brief  20, GTM Error Interrupt Enable Register */
#define GTM_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_EIRQ_EN*)0xF0100020u)

/** \brief  18040, F2A0 Stream Activation Register */
#define GTM_F2A0_ENABLE /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_ENABLE*)0xF0118040u)

/** \brief  18000, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH0_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118000u)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH0_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH0_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH0_ARU_RD_FIFO	(GTM_F2A0_RD_CH0_ARU_RD_FIFO)

/** \brief  18004, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH1_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118004u)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH1_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH1_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH1_ARU_RD_FIFO	(GTM_F2A0_RD_CH1_ARU_RD_FIFO)

/** \brief  18008, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH2_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118008u)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH2_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH2_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH2_ARU_RD_FIFO	(GTM_F2A0_RD_CH2_ARU_RD_FIFO)

/** \brief  1800C, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH3_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF011800Cu)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH3_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH3_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH3_ARU_RD_FIFO	(GTM_F2A0_RD_CH3_ARU_RD_FIFO)

/** \brief  18010, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH4_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118010u)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH4_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH4_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH4_ARU_RD_FIFO	(GTM_F2A0_RD_CH4_ARU_RD_FIFO)

/** \brief  18014, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH5_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118014u)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH5_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH5_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH5_ARU_RD_FIFO	(GTM_F2A0_RD_CH5_ARU_RD_FIFO)

/** \brief  18018, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH6_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF0118018u)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH6_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH6_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH6_ARU_RD_FIFO	(GTM_F2A0_RD_CH6_ARU_RD_FIFO)

/** \brief  1801C, F2A Read Channel Address Register */
#define GTM_F2A0_RD_CH7_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF011801Cu)

/** Alias (User Manual Name) for GTM_F2A0_RD_CH7_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A0_RD_CH7_ARU_RD_FIFO.
*/
#define	GTM_F2A0_CH7_ARU_RD_FIFO	(GTM_F2A0_RD_CH7_ARU_RD_FIFO)

/** \brief  18020, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH0_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF0118020u)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH0_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH0_STR_CFG.
*/
#define	GTM_F2A0_CH0_STR_CFG	(GTM_F2A0_STR_CH0_STR_CFG)

/** \brief  18024, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH1_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF0118024u)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH1_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH1_STR_CFG.
*/
#define	GTM_F2A0_CH1_STR_CFG	(GTM_F2A0_STR_CH1_STR_CFG)

/** \brief  18028, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH2_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF0118028u)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH2_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH2_STR_CFG.
*/
#define	GTM_F2A0_CH2_STR_CFG	(GTM_F2A0_STR_CH2_STR_CFG)

/** \brief  1802C, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH3_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF011802Cu)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH3_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH3_STR_CFG.
*/
#define	GTM_F2A0_CH3_STR_CFG	(GTM_F2A0_STR_CH3_STR_CFG)

/** \brief  18030, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH4_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF0118030u)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH4_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH4_STR_CFG.
*/
#define	GTM_F2A0_CH4_STR_CFG	(GTM_F2A0_STR_CH4_STR_CFG)

/** \brief  18034, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH5_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF0118034u)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH5_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH5_STR_CFG.
*/
#define	GTM_F2A0_CH5_STR_CFG	(GTM_F2A0_STR_CH5_STR_CFG)

/** \brief  18038, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH6_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF0118038u)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH6_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH6_STR_CFG.
*/
#define	GTM_F2A0_CH6_STR_CFG	(GTM_F2A0_STR_CH6_STR_CFG)

/** \brief  1803C, F2A Stream Configuration Register */
#define GTM_F2A0_STR_CH7_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF011803Cu)

/** Alias (User Manual Name) for GTM_F2A0_STR_CH7_STR_CFG.
* To use register names with standard convension, please use GTM_F2A0_STR_CH7_STR_CFG.
*/
#define	GTM_F2A0_CH7_STR_CFG	(GTM_F2A0_STR_CH7_STR_CFG)

/** \brief  1C040, F2A0 Stream Activation Register */
#define GTM_F2A1_ENABLE /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_ENABLE*)0xF011C040u)

/** \brief  1C000, F2A Read Channel Address Register */
#define GTM_F2A1_RD_CH0_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF011C000u)

/** Alias (User Manual Name) for GTM_F2A1_RD_CH0_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A1_RD_CH0_ARU_RD_FIFO.
*/
#define	GTM_F2A1_CH0_ARU_RD_FIFO	(GTM_F2A1_RD_CH0_ARU_RD_FIFO)

/** \brief  1C004, F2A Read Channel Address Register */
#define GTM_F2A1_RD_CH1_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF011C004u)

/** Alias (User Manual Name) for GTM_F2A1_RD_CH1_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A1_RD_CH1_ARU_RD_FIFO.
*/
#define	GTM_F2A1_CH1_ARU_RD_FIFO	(GTM_F2A1_RD_CH1_ARU_RD_FIFO)

/** \brief  1C008, F2A Read Channel Address Register */
#define GTM_F2A1_RD_CH2_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF011C008u)

/** Alias (User Manual Name) for GTM_F2A1_RD_CH2_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A1_RD_CH2_ARU_RD_FIFO.
*/
#define	GTM_F2A1_CH2_ARU_RD_FIFO	(GTM_F2A1_RD_CH2_ARU_RD_FIFO)

/** \brief  1C00C, F2A Read Channel Address Register */
#define GTM_F2A1_RD_CH3_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF011C00Cu)

/** Alias (User Manual Name) for GTM_F2A1_RD_CH3_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A1_RD_CH3_ARU_RD_FIFO.
*/
#define	GTM_F2A1_CH3_ARU_RD_FIFO	(GTM_F2A1_RD_CH3_ARU_RD_FIFO)

/** \brief  1C010, F2A Read Channel Address Register */
#define GTM_F2A1_RD_CH4_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF011C010u)

/** Alias (User Manual Name) for GTM_F2A1_RD_CH4_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A1_RD_CH4_ARU_RD_FIFO.
*/
#define	GTM_F2A1_CH4_ARU_RD_FIFO	(GTM_F2A1_RD_CH4_ARU_RD_FIFO)

/** \brief  1C014, F2A Read Channel Address Register */
#define GTM_F2A1_RD_CH5_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF011C014u)

/** Alias (User Manual Name) for GTM_F2A1_RD_CH5_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A1_RD_CH5_ARU_RD_FIFO.
*/
#define	GTM_F2A1_CH5_ARU_RD_FIFO	(GTM_F2A1_RD_CH5_ARU_RD_FIFO)

/** \brief  1C018, F2A Read Channel Address Register */
#define GTM_F2A1_RD_CH6_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF011C018u)

/** Alias (User Manual Name) for GTM_F2A1_RD_CH6_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A1_RD_CH6_ARU_RD_FIFO.
*/
#define	GTM_F2A1_CH6_ARU_RD_FIFO	(GTM_F2A1_RD_CH6_ARU_RD_FIFO)

/** \brief  1C01C, F2A Read Channel Address Register */
#define GTM_F2A1_RD_CH7_ARU_RD_FIFO /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO*)0xF011C01Cu)

/** Alias (User Manual Name) for GTM_F2A1_RD_CH7_ARU_RD_FIFO.
* To use register names with standard convension, please use GTM_F2A1_RD_CH7_ARU_RD_FIFO.
*/
#define	GTM_F2A1_CH7_ARU_RD_FIFO	(GTM_F2A1_RD_CH7_ARU_RD_FIFO)

/** \brief  1C020, F2A Stream Configuration Register */
#define GTM_F2A1_STR_CH0_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF011C020u)

/** Alias (User Manual Name) for GTM_F2A1_STR_CH0_STR_CFG.
* To use register names with standard convension, please use GTM_F2A1_STR_CH0_STR_CFG.
*/
#define	GTM_F2A1_CH0_STR_CFG	(GTM_F2A1_STR_CH0_STR_CFG)

/** \brief  1C024, F2A Stream Configuration Register */
#define GTM_F2A1_STR_CH1_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF011C024u)

/** Alias (User Manual Name) for GTM_F2A1_STR_CH1_STR_CFG.
* To use register names with standard convension, please use GTM_F2A1_STR_CH1_STR_CFG.
*/
#define	GTM_F2A1_CH1_STR_CFG	(GTM_F2A1_STR_CH1_STR_CFG)

/** \brief  1C028, F2A Stream Configuration Register */
#define GTM_F2A1_STR_CH2_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF011C028u)

/** Alias (User Manual Name) for GTM_F2A1_STR_CH2_STR_CFG.
* To use register names with standard convension, please use GTM_F2A1_STR_CH2_STR_CFG.
*/
#define	GTM_F2A1_CH2_STR_CFG	(GTM_F2A1_STR_CH2_STR_CFG)

/** \brief  1C02C, F2A Stream Configuration Register */
#define GTM_F2A1_STR_CH3_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF011C02Cu)

/** Alias (User Manual Name) for GTM_F2A1_STR_CH3_STR_CFG.
* To use register names with standard convension, please use GTM_F2A1_STR_CH3_STR_CFG.
*/
#define	GTM_F2A1_CH3_STR_CFG	(GTM_F2A1_STR_CH3_STR_CFG)

/** \brief  1C030, F2A Stream Configuration Register */
#define GTM_F2A1_STR_CH4_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF011C030u)

/** Alias (User Manual Name) for GTM_F2A1_STR_CH4_STR_CFG.
* To use register names with standard convension, please use GTM_F2A1_STR_CH4_STR_CFG.
*/
#define	GTM_F2A1_CH4_STR_CFG	(GTM_F2A1_STR_CH4_STR_CFG)

/** \brief  1C034, F2A Stream Configuration Register */
#define GTM_F2A1_STR_CH5_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF011C034u)

/** Alias (User Manual Name) for GTM_F2A1_STR_CH5_STR_CFG.
* To use register names with standard convension, please use GTM_F2A1_STR_CH5_STR_CFG.
*/
#define	GTM_F2A1_CH5_STR_CFG	(GTM_F2A1_STR_CH5_STR_CFG)

/** \brief  1C038, F2A Stream Configuration Register */
#define GTM_F2A1_STR_CH6_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF011C038u)

/** Alias (User Manual Name) for GTM_F2A1_STR_CH6_STR_CFG.
* To use register names with standard convension, please use GTM_F2A1_STR_CH6_STR_CFG.
*/
#define	GTM_F2A1_CH6_STR_CFG	(GTM_F2A1_STR_CH6_STR_CFG)

/** \brief  1C03C, F2A Stream Configuration Register */
#define GTM_F2A1_STR_CH7_STR_CFG /*lint --e(923)*/ (*(volatile Ifx_GTM_F2A_STR_CH_STR_CFG*)0xF011C03Cu)

/** Alias (User Manual Name) for GTM_F2A1_STR_CH7_STR_CFG.
* To use register names with standard convension, please use GTM_F2A1_STR_CH7_STR_CFG.
*/
#define	GTM_F2A1_CH7_STR_CFG	(GTM_F2A1_STR_CH7_STR_CFG)

/** \brief  18400, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF0118400u)

/** \brief  18434, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO0_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF0118434u)

/** \brief  18404, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH0_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF0118404u)

/** \brief  18418, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH0_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF0118418u)

/** \brief  18428, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF0118428u)

/** \brief  1842C, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF011842Cu)

/** \brief  18430, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF0118430u)

/** \brief  18424, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF0118424u)

/** \brief  18410, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH0_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF0118410u)

/** \brief  18420, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH0_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF0118420u)

/** \brief  18408, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH0_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF0118408u)

/** \brief  18414, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH0_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF0118414u)

/** \brief  1840C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH0_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011840Cu)

/** \brief  1841C, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH0_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011841Cu)

/** \brief  18440, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF0118440u)

/** \brief  18474, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO0_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF0118474u)

/** \brief  18444, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH1_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF0118444u)

/** \brief  18458, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH1_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF0118458u)

/** \brief  18468, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF0118468u)

/** \brief  1846C, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF011846Cu)

/** \brief  18470, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF0118470u)

/** \brief  18464, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF0118464u)

/** \brief  18450, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH1_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF0118450u)

/** \brief  18460, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH1_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF0118460u)

/** \brief  18448, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH1_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF0118448u)

/** \brief  18454, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH1_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF0118454u)

/** \brief  1844C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH1_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011844Cu)

/** \brief  1845C, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH1_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011845Cu)

/** \brief  18480, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF0118480u)

/** \brief  184B4, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO0_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF01184B4u)

/** \brief  18484, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH2_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF0118484u)

/** \brief  18498, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH2_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF0118498u)

/** \brief  184A8, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF01184A8u)

/** \brief  184AC, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF01184ACu)

/** \brief  184B0, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF01184B0u)

/** \brief  184A4, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF01184A4u)

/** \brief  18490, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH2_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF0118490u)

/** \brief  184A0, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH2_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF01184A0u)

/** \brief  18488, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH2_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF0118488u)

/** \brief  18494, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH2_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF0118494u)

/** \brief  1848C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH2_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011848Cu)

/** \brief  1849C, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH2_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011849Cu)

/** \brief  184C0, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF01184C0u)

/** \brief  184F4, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO0_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF01184F4u)

/** \brief  184C4, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH3_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF01184C4u)

/** \brief  184D8, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH3_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF01184D8u)

/** \brief  184E8, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF01184E8u)

/** \brief  184EC, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF01184ECu)

/** \brief  184F0, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF01184F0u)

/** \brief  184E4, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF01184E4u)

/** \brief  184D0, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH3_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF01184D0u)

/** \brief  184E0, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH3_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF01184E0u)

/** \brief  184C8, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH3_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF01184C8u)

/** \brief  184D4, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH3_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF01184D4u)

/** \brief  184CC, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH3_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF01184CCu)

/** \brief  184DC, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH3_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF01184DCu)

/** \brief  18500, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF0118500u)

/** \brief  18534, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO0_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF0118534u)

/** \brief  18504, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH4_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF0118504u)

/** \brief  18518, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH4_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF0118518u)

/** \brief  18528, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF0118528u)

/** \brief  1852C, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF011852Cu)

/** \brief  18530, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF0118530u)

/** \brief  18524, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF0118524u)

/** \brief  18510, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH4_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF0118510u)

/** \brief  18520, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH4_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF0118520u)

/** \brief  18508, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH4_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF0118508u)

/** \brief  18514, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH4_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF0118514u)

/** \brief  1850C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH4_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011850Cu)

/** \brief  1851C, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH4_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011851Cu)

/** \brief  18540, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF0118540u)

/** \brief  18574, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO0_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF0118574u)

/** \brief  18544, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH5_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF0118544u)

/** \brief  18558, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH5_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF0118558u)

/** \brief  18568, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF0118568u)

/** \brief  1856C, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF011856Cu)

/** \brief  18570, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF0118570u)

/** \brief  18564, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF0118564u)

/** \brief  18550, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH5_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF0118550u)

/** \brief  18560, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH5_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF0118560u)

/** \brief  18548, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH5_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF0118548u)

/** \brief  18554, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH5_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF0118554u)

/** \brief  1854C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH5_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011854Cu)

/** \brief  1855C, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH5_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011855Cu)

/** \brief  18580, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF0118580u)

/** \brief  185B4, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO0_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF01185B4u)

/** \brief  18584, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH6_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF0118584u)

/** \brief  18598, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH6_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF0118598u)

/** \brief  185A8, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF01185A8u)

/** \brief  185AC, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF01185ACu)

/** \brief  185B0, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF01185B0u)

/** \brief  185A4, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF01185A4u)

/** \brief  18590, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH6_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF0118590u)

/** \brief  185A0, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH6_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF01185A0u)

/** \brief  18588, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH6_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF0118588u)

/** \brief  18594, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH6_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF0118594u)

/** \brief  1858C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH6_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011858Cu)

/** \brief  1859C, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH6_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011859Cu)

/** \brief  185C0, FIFO0 Channel Control Register */
#define GTM_FIFO0_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF01185C0u)

/** \brief  185F4, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO0_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF01185F4u)

/** \brief  185C4, FIFO0 Channel End Address Register */
#define GTM_FIFO0_CH7_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF01185C4u)

/** \brief  185D8, FIFO0 Channel Fill Level Register */
#define GTM_FIFO0_CH7_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF01185D8u)

/** \brief  185E8, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO0_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF01185E8u)

/** \brief  185EC, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO0_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF01185ECu)

/** \brief  185F0, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO0_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF01185F0u)

/** \brief  185E4, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO0_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF01185E4u)

/** \brief  185D0, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO0_CH7_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF01185D0u)

/** \brief  185E0, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO0_CH7_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF01185E0u)

/** \brief  185C8, FIFO0 Channel Start Address Register */
#define GTM_FIFO0_CH7_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF01185C8u)

/** \brief  185D4, FIFO0 Channel Status Register */
#define GTM_FIFO0_CH7_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF01185D4u)

/** \brief  185CC, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO0_CH7_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF01185CCu)

/** \brief  185DC, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO0_CH7_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF01185DCu)

/** \brief  1C400, FIFO0 Channel Control Register */
#define GTM_FIFO1_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF011C400u)

/** \brief  1C434, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO1_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF011C434u)

/** \brief  1C404, FIFO0 Channel End Address Register */
#define GTM_FIFO1_CH0_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF011C404u)

/** \brief  1C418, FIFO0 Channel Fill Level Register */
#define GTM_FIFO1_CH0_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF011C418u)

/** \brief  1C428, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO1_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF011C428u)

/** \brief  1C42C, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO1_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF011C42Cu)

/** \brief  1C430, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO1_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF011C430u)

/** \brief  1C424, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO1_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF011C424u)

/** \brief  1C410, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO1_CH0_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF011C410u)

/** \brief  1C420, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO1_CH0_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF011C420u)

/** \brief  1C408, FIFO0 Channel Start Address Register */
#define GTM_FIFO1_CH0_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF011C408u)

/** \brief  1C414, FIFO0 Channel Status Register */
#define GTM_FIFO1_CH0_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF011C414u)

/** \brief  1C40C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO1_CH0_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011C40Cu)

/** \brief  1C41C, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO1_CH0_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011C41Cu)

/** \brief  1C440, FIFO0 Channel Control Register */
#define GTM_FIFO1_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF011C440u)

/** \brief  1C474, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO1_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF011C474u)

/** \brief  1C444, FIFO0 Channel End Address Register */
#define GTM_FIFO1_CH1_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF011C444u)

/** \brief  1C458, FIFO0 Channel Fill Level Register */
#define GTM_FIFO1_CH1_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF011C458u)

/** \brief  1C468, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO1_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF011C468u)

/** \brief  1C46C, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO1_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF011C46Cu)

/** \brief  1C470, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO1_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF011C470u)

/** \brief  1C464, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO1_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF011C464u)

/** \brief  1C450, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO1_CH1_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF011C450u)

/** \brief  1C460, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO1_CH1_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF011C460u)

/** \brief  1C448, FIFO0 Channel Start Address Register */
#define GTM_FIFO1_CH1_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF011C448u)

/** \brief  1C454, FIFO0 Channel Status Register */
#define GTM_FIFO1_CH1_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF011C454u)

/** \brief  1C44C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO1_CH1_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011C44Cu)

/** \brief  1C45C, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO1_CH1_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011C45Cu)

/** \brief  1C480, FIFO0 Channel Control Register */
#define GTM_FIFO1_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF011C480u)

/** \brief  1C4B4, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO1_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF011C4B4u)

/** \brief  1C484, FIFO0 Channel End Address Register */
#define GTM_FIFO1_CH2_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF011C484u)

/** \brief  1C498, FIFO0 Channel Fill Level Register */
#define GTM_FIFO1_CH2_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF011C498u)

/** \brief  1C4A8, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO1_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF011C4A8u)

/** \brief  1C4AC, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO1_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF011C4ACu)

/** \brief  1C4B0, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO1_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF011C4B0u)

/** \brief  1C4A4, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO1_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF011C4A4u)

/** \brief  1C490, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO1_CH2_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF011C490u)

/** \brief  1C4A0, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO1_CH2_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF011C4A0u)

/** \brief  1C488, FIFO0 Channel Start Address Register */
#define GTM_FIFO1_CH2_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF011C488u)

/** \brief  1C494, FIFO0 Channel Status Register */
#define GTM_FIFO1_CH2_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF011C494u)

/** \brief  1C48C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO1_CH2_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011C48Cu)

/** \brief  1C49C, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO1_CH2_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011C49Cu)

/** \brief  1C4C0, FIFO0 Channel Control Register */
#define GTM_FIFO1_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF011C4C0u)

/** \brief  1C4F4, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO1_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF011C4F4u)

/** \brief  1C4C4, FIFO0 Channel End Address Register */
#define GTM_FIFO1_CH3_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF011C4C4u)

/** \brief  1C4D8, FIFO0 Channel Fill Level Register */
#define GTM_FIFO1_CH3_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF011C4D8u)

/** \brief  1C4E8, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO1_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF011C4E8u)

/** \brief  1C4EC, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO1_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF011C4ECu)

/** \brief  1C4F0, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO1_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF011C4F0u)

/** \brief  1C4E4, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO1_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF011C4E4u)

/** \brief  1C4D0, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO1_CH3_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF011C4D0u)

/** \brief  1C4E0, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO1_CH3_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF011C4E0u)

/** \brief  1C4C8, FIFO0 Channel Start Address Register */
#define GTM_FIFO1_CH3_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF011C4C8u)

/** \brief  1C4D4, FIFO0 Channel Status Register */
#define GTM_FIFO1_CH3_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF011C4D4u)

/** \brief  1C4CC, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO1_CH3_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011C4CCu)

/** \brief  1C4DC, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO1_CH3_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011C4DCu)

/** \brief  1C500, FIFO0 Channel Control Register */
#define GTM_FIFO1_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF011C500u)

/** \brief  1C534, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO1_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF011C534u)

/** \brief  1C504, FIFO0 Channel End Address Register */
#define GTM_FIFO1_CH4_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF011C504u)

/** \brief  1C518, FIFO0 Channel Fill Level Register */
#define GTM_FIFO1_CH4_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF011C518u)

/** \brief  1C528, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO1_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF011C528u)

/** \brief  1C52C, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO1_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF011C52Cu)

/** \brief  1C530, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO1_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF011C530u)

/** \brief  1C524, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO1_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF011C524u)

/** \brief  1C510, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO1_CH4_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF011C510u)

/** \brief  1C520, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO1_CH4_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF011C520u)

/** \brief  1C508, FIFO0 Channel Start Address Register */
#define GTM_FIFO1_CH4_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF011C508u)

/** \brief  1C514, FIFO0 Channel Status Register */
#define GTM_FIFO1_CH4_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF011C514u)

/** \brief  1C50C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO1_CH4_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011C50Cu)

/** \brief  1C51C, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO1_CH4_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011C51Cu)

/** \brief  1C540, FIFO0 Channel Control Register */
#define GTM_FIFO1_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF011C540u)

/** \brief  1C574, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO1_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF011C574u)

/** \brief  1C544, FIFO0 Channel End Address Register */
#define GTM_FIFO1_CH5_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF011C544u)

/** \brief  1C558, FIFO0 Channel Fill Level Register */
#define GTM_FIFO1_CH5_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF011C558u)

/** \brief  1C568, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO1_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF011C568u)

/** \brief  1C56C, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO1_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF011C56Cu)

/** \brief  1C570, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO1_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF011C570u)

/** \brief  1C564, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO1_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF011C564u)

/** \brief  1C550, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO1_CH5_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF011C550u)

/** \brief  1C560, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO1_CH5_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF011C560u)

/** \brief  1C548, FIFO0 Channel Start Address Register */
#define GTM_FIFO1_CH5_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF011C548u)

/** \brief  1C554, FIFO0 Channel Status Register */
#define GTM_FIFO1_CH5_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF011C554u)

/** \brief  1C54C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO1_CH5_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011C54Cu)

/** \brief  1C55C, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO1_CH5_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011C55Cu)

/** \brief  1C580, FIFO0 Channel Control Register */
#define GTM_FIFO1_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF011C580u)

/** \brief  1C5B4, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO1_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF011C5B4u)

/** \brief  1C584, FIFO0 Channel End Address Register */
#define GTM_FIFO1_CH6_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF011C584u)

/** \brief  1C598, FIFO0 Channel Fill Level Register */
#define GTM_FIFO1_CH6_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF011C598u)

/** \brief  1C5A8, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO1_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF011C5A8u)

/** \brief  1C5AC, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO1_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF011C5ACu)

/** \brief  1C5B0, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO1_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF011C5B0u)

/** \brief  1C5A4, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO1_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF011C5A4u)

/** \brief  1C590, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO1_CH6_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF011C590u)

/** \brief  1C5A0, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO1_CH6_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF011C5A0u)

/** \brief  1C588, FIFO0 Channel Start Address Register */
#define GTM_FIFO1_CH6_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF011C588u)

/** \brief  1C594, FIFO0 Channel Status Register */
#define GTM_FIFO1_CH6_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF011C594u)

/** \brief  1C58C, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO1_CH6_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011C58Cu)

/** \brief  1C59C, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO1_CH6_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011C59Cu)

/** \brief  1C5C0, FIFO0 Channel Control Register */
#define GTM_FIFO1_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_CTRL*)0xF011C5C0u)

/** \brief  1C5F4, FIFO0 Channel Error Interrupt Enable Register */
#define GTM_FIFO1_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_EIRQ_EN*)0xF011C5F4u)

/** \brief  1C5C4, FIFO0 Channel End Address Register */
#define GTM_FIFO1_CH7_END_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_END_ADDR*)0xF011C5C4u)

/** \brief  1C5D8, FIFO0 Channel Fill Level Register */
#define GTM_FIFO1_CH7_FILL_LEVEL /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_FILL_LEVEL*)0xF011C5D8u)

/** \brief  1C5E8, FIFO0 Channel Interrupt Enable Register */
#define GTM_FIFO1_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_EN*)0xF011C5E8u)

/** \brief  1C5EC, FIFO0 Channel Force Interrupt By Software Register */
#define GTM_FIFO1_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_FORCINT*)0xF011C5ECu)

/** \brief  1C5F0, FIFO0 Channel IRQ Mode Control Register */
#define GTM_FIFO1_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_MODE*)0xF011C5F0u)

/** \brief  1C5E4, FIFO0 Channel Interrupt Notification Register */
#define GTM_FIFO1_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_IRQ_NOTIFY*)0xF011C5E4u)

/** \brief  1C5D0, FIFO0 Channel Lower Watermark Register */
#define GTM_FIFO1_CH7_LOWER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_LOWER_WM*)0xF011C5D0u)

/** \brief  1C5E0, FIFO0 Channel Read Pointer Register */
#define GTM_FIFO1_CH7_RD_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_RD_PTR*)0xF011C5E0u)

/** \brief  1C5C8, FIFO0 Channel Start Address Register */
#define GTM_FIFO1_CH7_START_ADDR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_START_ADDR*)0xF011C5C8u)

/** \brief  1C5D4, FIFO0 Channel Status Register */
#define GTM_FIFO1_CH7_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_STATUS*)0xF011C5D4u)

/** \brief  1C5CC, FIFO0 Channel Upper Watermark Register */
#define GTM_FIFO1_CH7_UPPER_WM /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_UPPER_WM*)0xF011C5CCu)

/** \brief  1C5DC, FIFO0 Channel Write Pointer Register */
#define GTM_FIFO1_CH7_WR_PTR /*lint --e(923)*/ (*(volatile Ifx_GTM_FIFO_CH_WR_PTR*)0xF011C5DCu)

/** \brief  600, GTM Infrastructure Interrupt Group */
#define GTM_ICM_IRQG_0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_0*)0xF0100600u)

/** \brief  604, GTM DPLL Interrupt Group */
#define GTM_ICM_IRQG_1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_1*)0xF0100604u)

/** \brief  628, ATOM Interrupt Group 1 */
#define GTM_ICM_IRQG_10 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_10*)0xF0100628u)

/** \brief  62C, ATOM Interrupt Group 2 */
#define GTM_ICM_IRQG_11 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_11*)0xF010062Cu)

/** \brief  608, TIM Interrupt Group 0 */
#define GTM_ICM_IRQG_2 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_2*)0xF0100608u)

/** \brief  60C, TIM Interrupt Group 1 */
#define GTM_ICM_IRQG_3 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_3*)0xF010060Cu)

/** \brief  610, MCS Interrupt Group 0 */
#define GTM_ICM_IRQG_4 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_4*)0xF0100610u)

/** \brief  614, MCS Interrupt Group 1 */
#define GTM_ICM_IRQG_5 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_5*)0xF0100614u)

/** \brief  618, TOM Interrupt Group 0 */
#define GTM_ICM_IRQG_6 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_6*)0xF0100618u)

/** \brief  61C, ITOM Interrupt Group 1 */
#define GTM_ICM_IRQG_7 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_7*)0xF010061Cu)

/** \brief  620, ITOM Interrupt Group 2 */
#define GTM_ICM_IRQG_8 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_8*)0xF0100620u)

/** \brief  624, ATOM Interrupt Group 0 */
#define GTM_ICM_IRQG_9 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_9*)0xF0100624u)

/** \brief  634, ICM Channel Error Interrupt 0 Register */
#define GTM_ICM_IRQG_CEI0 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI0*)0xF0100634u)

/** \brief  638, ICM Channel Error Interrupt 1 Register */
#define GTM_ICM_IRQG_CEI1 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI1*)0xF0100638u)

/** \brief  63C, ICM Channel Error Interrupt 2 Register */
#define GTM_ICM_IRQG_CEI2 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI2*)0xF010063Cu)

/** \brief  640, ICM Channel Error Interrupt 3 Register */
#define GTM_ICM_IRQG_CEI3 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI3*)0xF0100640u)

/** \brief  644, ICM Channel Error Interrupt 4 Register */
#define GTM_ICM_IRQG_CEI4 /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_CEI4*)0xF0100644u)

/** \brief  630, ICM Module Error Interrupt Register */
#define GTM_ICM_IRQG_MEI /*lint --e(923)*/ (*(volatile Ifx_GTM_ICM_IRQG_MEI*)0xF0100630u)

/** \brief  9FDA0, CAN Output Select Register */
#define GTM_INOUTSEL_CAN_OUTSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_CAN_OUTSEL*)0xF019FDA0u)

/** Alias (User Manual Name) for GTM_INOUTSEL_CAN_OUTSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_CAN_OUTSEL.
*/
#define	GTM_CANOUTSEL	(GTM_INOUTSEL_CAN_OUTSEL)

/** \brief  9FD7C, DSADC Input Select Register */
#define GTM_INOUTSEL_DSADC_INSEL0 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_DSADC_INSEL*)0xF019FD7Cu)

/** Alias (User Manual Name) for GTM_INOUTSEL_DSADC_INSEL0.
* To use register names with standard convension, please use GTM_INOUTSEL_DSADC_INSEL0.
*/
#define	GTM_DSADCINSEL0	(GTM_INOUTSEL_DSADC_INSEL0)

/** \brief  9FD80, DSADC Input Select Register */
#define GTM_INOUTSEL_DSADC_INSEL1 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_DSADC_INSEL*)0xF019FD80u)

/** Alias (User Manual Name) for GTM_INOUTSEL_DSADC_INSEL1.
* To use register names with standard convension, please use GTM_INOUTSEL_DSADC_INSEL1.
*/
#define	GTM_DSADCINSEL1	(GTM_INOUTSEL_DSADC_INSEL1)

/** \brief  9FD84, DSADC Input Select Register */
#define GTM_INOUTSEL_DSADC_INSEL2 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_DSADC_INSEL*)0xF019FD84u)

/** Alias (User Manual Name) for GTM_INOUTSEL_DSADC_INSEL2.
* To use register names with standard convension, please use GTM_INOUTSEL_DSADC_INSEL2.
*/
#define	GTM_DSADCINSEL2	(GTM_INOUTSEL_DSADC_INSEL2)

/** \brief  9FD88, DSADC Output Select 00 Register */
#define GTM_INOUTSEL_DSADC_OUTSEL00 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_DSADC_OUTSEL0*)0xF019FD88u)

/** Alias (User Manual Name) for GTM_INOUTSEL_DSADC_OUTSEL00.
* To use register names with standard convension, please use GTM_INOUTSEL_DSADC_OUTSEL00.
*/
#define	GTM_DSADCOUTSEL00	(GTM_INOUTSEL_DSADC_OUTSEL00)

/** \brief  9FD8C, DSADC Output Select 01 Register */
#define GTM_INOUTSEL_DSADC_OUTSEL01 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_DSADC_OUTSEL1*)0xF019FD8Cu)

/** Alias (User Manual Name) for GTM_INOUTSEL_DSADC_OUTSEL01.
* To use register names with standard convension, please use GTM_INOUTSEL_DSADC_OUTSEL01.
*/
#define	GTM_DSADCOUTSEL01	(GTM_INOUTSEL_DSADC_OUTSEL01)

/** \brief  9FD90, DSADC Output Select 10 Register */
#define GTM_INOUTSEL_DSADC_OUTSEL10 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_DSADC_OUTSEL0*)0xF019FD90u)

/** Alias (User Manual Name) for GTM_INOUTSEL_DSADC_OUTSEL10.
* To use register names with standard convension, please use GTM_INOUTSEL_DSADC_OUTSEL10.
*/
#define	GTM_DSADCOUTSEL10	(GTM_INOUTSEL_DSADC_OUTSEL10)

/** \brief  9FD94, DSADC Output Select 11 Register */
#define GTM_INOUTSEL_DSADC_OUTSEL11 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_DSADC_OUTSEL1*)0xF019FD94u)

/** Alias (User Manual Name) for GTM_INOUTSEL_DSADC_OUTSEL11.
* To use register names with standard convension, please use GTM_INOUTSEL_DSADC_OUTSEL11.
*/
#define	GTM_DSADCOUTSEL11	(GTM_INOUTSEL_DSADC_OUTSEL11)

/** \brief  9FDA4, PSI5 Output Select 0 Register */
#define GTM_INOUTSEL_PSI5_OUTSEL0 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_PSI5_OUTSEL0*)0xF019FDA4u)

/** Alias (User Manual Name) for GTM_INOUTSEL_PSI5_OUTSEL0.
* To use register names with standard convension, please use GTM_INOUTSEL_PSI5_OUTSEL0.
*/
#define	GTM_PSI5OUTSEL0	(GTM_INOUTSEL_PSI5_OUTSEL0)

/** \brief  9FDA8, PSI5-S Output Select Register */
#define GTM_INOUTSEL_PSI5S_OUTSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_PSI5S_OUTSEL*)0xF019FDA8u)

/** Alias (User Manual Name) for GTM_INOUTSEL_PSI5S_OUTSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_PSI5S_OUTSEL.
*/
#define	GTM_PSI5SOUTSEL	(GTM_INOUTSEL_PSI5S_OUTSEL)

/** \brief  9FD30, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL0 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD30u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL0.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL0.
*/
#define	GTM_TOUTSEL0	(GTM_INOUTSEL_T_OUTSEL0)

/** \brief  9FD34, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL1 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD34u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL1.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL1.
*/
#define	GTM_TOUTSEL1	(GTM_INOUTSEL_T_OUTSEL1)

/** \brief  9FD58, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL10 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD58u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL10.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL10.
*/
#define	GTM_TOUTSEL10	(GTM_INOUTSEL_T_OUTSEL10)

/** \brief  9FD5C, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL11 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD5Cu)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL11.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL11.
*/
#define	GTM_TOUTSEL11	(GTM_INOUTSEL_T_OUTSEL11)

/** \brief  9FD60, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL12 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD60u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL12.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL12.
*/
#define	GTM_TOUTSEL12	(GTM_INOUTSEL_T_OUTSEL12)

/** \brief  9FD64, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL13 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD64u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL13.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL13.
*/
#define	GTM_TOUTSEL13	(GTM_INOUTSEL_T_OUTSEL13)

/** \brief  9FD68, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL14 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD68u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL14.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL14.
*/
#define	GTM_TOUTSEL14	(GTM_INOUTSEL_T_OUTSEL14)

/** \brief  9FD6C, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL15 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD6Cu)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL15.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL15.
*/
#define	GTM_TOUTSEL15	(GTM_INOUTSEL_T_OUTSEL15)

/** \brief  9FD70, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL16 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD70u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL16.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL16.
*/
#define	GTM_TOUTSEL16	(GTM_INOUTSEL_T_OUTSEL16)

/** \brief  9FD38, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL2 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD38u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL2.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL2.
*/
#define	GTM_TOUTSEL2	(GTM_INOUTSEL_T_OUTSEL2)

/** \brief  9FD3C, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL3 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD3Cu)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL3.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL3.
*/
#define	GTM_TOUTSEL3	(GTM_INOUTSEL_T_OUTSEL3)

/** \brief  9FD40, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL4 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD40u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL4.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL4.
*/
#define	GTM_TOUTSEL4	(GTM_INOUTSEL_T_OUTSEL4)

/** \brief  9FD44, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL5 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD44u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL5.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL5.
*/
#define	GTM_TOUTSEL5	(GTM_INOUTSEL_T_OUTSEL5)

/** \brief  9FD48, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL6 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD48u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL6.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL6.
*/
#define	GTM_TOUTSEL6	(GTM_INOUTSEL_T_OUTSEL6)

/** \brief  9FD4C, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL7 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD4Cu)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL7.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL7.
*/
#define	GTM_TOUTSEL7	(GTM_INOUTSEL_T_OUTSEL7)

/** \brief  9FD50, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL8 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD50u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL8.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL8.
*/
#define	GTM_TOUTSEL8	(GTM_INOUTSEL_T_OUTSEL8)

/** \brief  9FD54, Timer Output Select Register */
#define GTM_INOUTSEL_T_OUTSEL9 /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_T_OUTSEL*)0xF019FD54u)

/** Alias (User Manual Name) for GTM_INOUTSEL_T_OUTSEL9.
* To use register names with standard convension, please use GTM_INOUTSEL_T_OUTSEL9.
*/
#define	GTM_TOUTSEL9	(GTM_INOUTSEL_T_OUTSEL9)

/** \brief  9FD10, TIM Input Select Register */
#define GTM_INOUTSEL_TIM0_INSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_TIM_INSEL*)0xF019FD10u)

/** Alias (User Manual Name) for GTM_INOUTSEL_TIM0_INSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_TIM0_INSEL.
*/
#define	GTM_TIM0INSEL	(GTM_INOUTSEL_TIM0_INSEL)

/** \brief  9FD14, TIM Input Select Register */
#define GTM_INOUTSEL_TIM1_INSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_TIM_INSEL*)0xF019FD14u)

/** Alias (User Manual Name) for GTM_INOUTSEL_TIM1_INSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_TIM1_INSEL.
*/
#define	GTM_TIM1INSEL	(GTM_INOUTSEL_TIM1_INSEL)

/** \brief  9FD18, TIM Input Select Register */
#define GTM_INOUTSEL_TIM2_INSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_TIM_INSEL*)0xF019FD18u)

/** Alias (User Manual Name) for GTM_INOUTSEL_TIM2_INSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_TIM2_INSEL.
*/
#define	GTM_TIM2INSEL	(GTM_INOUTSEL_TIM2_INSEL)

/** \brief  9FD1C, TIM Input Select Register */
#define GTM_INOUTSEL_TIM3_INSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_TIM_INSEL*)0xF019FD1Cu)

/** Alias (User Manual Name) for GTM_INOUTSEL_TIM3_INSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_TIM3_INSEL.
*/
#define	GTM_TIM3INSEL	(GTM_INOUTSEL_TIM3_INSEL)

/** \brief  9FD20, TIM Input Select Register */
#define GTM_INOUTSEL_TIM4_INSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_TIM_INSEL*)0xF019FD20u)

/** Alias (User Manual Name) for GTM_INOUTSEL_TIM4_INSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_TIM4_INSEL.
*/
#define	GTM_TIM4INSEL	(GTM_INOUTSEL_TIM4_INSEL)

/** \brief  9FD24, TIM Input Select Register */
#define GTM_INOUTSEL_TIM5_INSEL /*lint --e(923)*/ (*(volatile Ifx_GTM_INOUTSEL_TIM_INSEL*)0xF019FD24u)

/** Alias (User Manual Name) for GTM_INOUTSEL_TIM5_INSEL.
* To use register names with standard convension, please use GTM_INOUTSEL_TIM5_INSEL.
*/
#define	GTM_TIM5INSEL	(GTM_INOUTSEL_TIM5_INSEL)

/** \brief  14, GTM Interrupt Enable Register */
#define GTM_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_IRQ_EN*)0xF0100014u)

/** \brief  18, GTM Software Interrupt Generation Register */
#define GTM_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_IRQ_FORCINT*)0xF0100018u)

/** \brief  1C, GTM Top Level Interrupts Mode Selection */
#define GTM_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_IRQ_MODE*)0xF010001Cu)

/** \brief  10, GTM Interrupt Notification Register */
#define GTM_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_IRQ_NOTIFY*)0xF0100010u)

/** \brief  9FDF4, Kernel Reset Register 0 */
#define GTM_KRST0 /*lint --e(923)*/ (*(volatile Ifx_GTM_KRST0*)0xF019FDF4u)

/** \brief  9FDF0, Kernel Reset Register 1 */
#define GTM_KRST1 /*lint --e(923)*/ (*(volatile Ifx_GTM_KRST1*)0xF019FDF0u)

/** \brief  9FDEC, Kernel Reset Status Clear Register */
#define GTM_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_GTM_KRSTCLR*)0xF019FDECu)

/** \brief  F00, MAP Control Register */
#define GTM_MAP_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MAP_CTRL*)0xF0100F00u)

/** \brief  F40, Memory Layout Configuration Register */
#define GTM_MCFG_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCFG_CTRL*)0xF0100F40u)

/** \brief  30024, MCS Channel ACB Register */
#define GTM_MCS0_CH0_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0130024u)

/** \brief  30028, MCS Clear Trigger Control Register */
#define GTM_MCS0_CH0_CTRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH0_CTRG*)0xF0130028u)

/** Alias (User Manual Name) for GTM_MCS0_CH0_CTRG.
* To use register names with standard convension, please use GTM_MCS0_CH0_CTRG.
*/
#define	GTM_MCS0_CTRG	(GTM_MCS0_CH0_CTRG)

/** \brief  30020, MCS Channel Control Register */
#define GTM_MCS0_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130020u)

/** \brief  30054, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS0_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0130054u)

/** \brief  30048, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0130048u)

/** \brief  3004C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013004Cu)

/** \brief  30050, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0130050u)

/** \brief  30044, MCS Channel interrupt notification register */
#define GTM_MCS0_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0130044u)

/** \brief  30040, MCS Channel Program Counter Register */
#define GTM_MCS0_CH0_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130040u)

/** \brief  30000, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH0_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130000u)

/** \brief  30004, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH0_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0130004u)

/** \brief  30008, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH0_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130008u)

/** \brief  3000C, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH0_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013000Cu)

/** \brief  30010, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH0_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130010u)

/** \brief  30014, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH0_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0130014u)

/** \brief  30018, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH0_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130018u)

/** \brief  3001C, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH0_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013001Cu)

/** \brief  3002C, MCS Set Trigger Control Register */
#define GTM_MCS0_CH0_STRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH0_STRG*)0xF013002Cu)

/** Alias (User Manual Name) for GTM_MCS0_CH0_STRG.
* To use register names with standard convension, please use GTM_MCS0_CH0_STRG.
*/
#define	GTM_MCS0_STRG	(GTM_MCS0_CH0_STRG)

/** \brief  300A4, MCS Channel ACB Register */
#define GTM_MCS0_CH1_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01300A4u)

/** \brief  300A0, MCS Channel Control Register */
#define GTM_MCS0_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01300A0u)

/** \brief  300D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS0_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01300D4u)

/** \brief  300C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01300C8u)

/** \brief  300CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01300CCu)

/** \brief  300D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01300D0u)

/** \brief  300C4, MCS Channel interrupt notification register */
#define GTM_MCS0_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01300C4u)

/** \brief  300C0, MCS Channel Program Counter Register */
#define GTM_MCS0_CH1_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01300C0u)

/** \brief  30080, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH1_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130080u)

/** \brief  30084, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH1_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0130084u)

/** \brief  30088, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH1_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130088u)

/** \brief  3008C, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH1_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013008Cu)

/** \brief  30090, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH1_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130090u)

/** \brief  30094, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH1_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0130094u)

/** \brief  30098, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH1_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130098u)

/** \brief  3009C, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH1_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013009Cu)

/** \brief  30124, MCS Channel ACB Register */
#define GTM_MCS0_CH2_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0130124u)

/** \brief  30120, MCS Channel Control Register */
#define GTM_MCS0_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130120u)

/** \brief  30154, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS0_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0130154u)

/** \brief  30148, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0130148u)

/** \brief  3014C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013014Cu)

/** \brief  30150, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0130150u)

/** \brief  30144, MCS Channel interrupt notification register */
#define GTM_MCS0_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0130144u)

/** \brief  30140, MCS Channel Program Counter Register */
#define GTM_MCS0_CH2_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130140u)

/** \brief  30100, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH2_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130100u)

/** \brief  30104, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH2_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0130104u)

/** \brief  30108, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH2_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130108u)

/** \brief  3010C, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH2_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013010Cu)

/** \brief  30110, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH2_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130110u)

/** \brief  30114, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH2_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0130114u)

/** \brief  30118, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH2_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130118u)

/** \brief  3011C, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH2_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013011Cu)

/** \brief  301A4, MCS Channel ACB Register */
#define GTM_MCS0_CH3_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01301A4u)

/** \brief  301A0, MCS Channel Control Register */
#define GTM_MCS0_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01301A0u)

/** \brief  301D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS0_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01301D4u)

/** \brief  301C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01301C8u)

/** \brief  301CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01301CCu)

/** \brief  301D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01301D0u)

/** \brief  301C4, MCS Channel interrupt notification register */
#define GTM_MCS0_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01301C4u)

/** \brief  301C0, MCS Channel Program Counter Register */
#define GTM_MCS0_CH3_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01301C0u)

/** \brief  30180, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH3_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130180u)

/** \brief  30184, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH3_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0130184u)

/** \brief  30188, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH3_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130188u)

/** \brief  3018C, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH3_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013018Cu)

/** \brief  30190, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH3_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130190u)

/** \brief  30194, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH3_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0130194u)

/** \brief  30198, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH3_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130198u)

/** \brief  3019C, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH3_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013019Cu)

/** \brief  30224, MCS Channel ACB Register */
#define GTM_MCS0_CH4_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0130224u)

/** \brief  30220, MCS Channel Control Register */
#define GTM_MCS0_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130220u)

/** \brief  30254, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS0_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0130254u)

/** \brief  30248, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0130248u)

/** \brief  3024C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013024Cu)

/** \brief  30250, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0130250u)

/** \brief  30244, MCS Channel interrupt notification register */
#define GTM_MCS0_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0130244u)

/** \brief  30240, MCS Channel Program Counter Register */
#define GTM_MCS0_CH4_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130240u)

/** \brief  30200, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH4_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130200u)

/** \brief  30204, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH4_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0130204u)

/** \brief  30208, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH4_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130208u)

/** \brief  3020C, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH4_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013020Cu)

/** \brief  30210, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH4_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130210u)

/** \brief  30214, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH4_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0130214u)

/** \brief  30218, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH4_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130218u)

/** \brief  3021C, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH4_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013021Cu)

/** \brief  302A4, MCS Channel ACB Register */
#define GTM_MCS0_CH5_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01302A4u)

/** \brief  302A0, MCS Channel Control Register */
#define GTM_MCS0_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01302A0u)

/** \brief  302D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS0_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01302D4u)

/** \brief  302C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01302C8u)

/** \brief  302CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01302CCu)

/** \brief  302D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01302D0u)

/** \brief  302C4, MCS Channel interrupt notification register */
#define GTM_MCS0_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01302C4u)

/** \brief  302C0, MCS Channel Program Counter Register */
#define GTM_MCS0_CH5_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01302C0u)

/** \brief  30280, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH5_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130280u)

/** \brief  30284, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH5_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0130284u)

/** \brief  30288, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH5_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130288u)

/** \brief  3028C, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH5_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013028Cu)

/** \brief  30290, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH5_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130290u)

/** \brief  30294, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH5_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0130294u)

/** \brief  30298, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH5_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130298u)

/** \brief  3029C, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH5_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013029Cu)

/** \brief  30324, MCS Channel ACB Register */
#define GTM_MCS0_CH6_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0130324u)

/** \brief  30320, MCS Channel Control Register */
#define GTM_MCS0_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0130320u)

/** \brief  30354, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS0_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0130354u)

/** \brief  30348, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0130348u)

/** \brief  3034C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013034Cu)

/** \brief  30350, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0130350u)

/** \brief  30344, MCS Channel interrupt notification register */
#define GTM_MCS0_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0130344u)

/** \brief  30340, MCS Channel Program Counter Register */
#define GTM_MCS0_CH6_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0130340u)

/** \brief  30300, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH6_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130300u)

/** \brief  30304, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH6_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0130304u)

/** \brief  30308, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH6_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130308u)

/** \brief  3030C, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH6_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013030Cu)

/** \brief  30310, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH6_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130310u)

/** \brief  30314, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH6_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0130314u)

/** \brief  30318, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH6_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130318u)

/** \brief  3031C, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH6_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013031Cu)

/** \brief  303A4, MCS Channel ACB Register */
#define GTM_MCS0_CH7_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01303A4u)

/** \brief  303A0, MCS Channel Control Register */
#define GTM_MCS0_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01303A0u)

/** \brief  303D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS0_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01303D4u)

/** \brief  303C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS0_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01303C8u)

/** \brief  303CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS0_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01303CCu)

/** \brief  303D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS0_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01303D0u)

/** \brief  303C4, MCS Channel interrupt notification register */
#define GTM_MCS0_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01303C4u)

/** \brief  303C0, MCS Channel Program Counter Register */
#define GTM_MCS0_CH7_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01303C0u)

/** \brief  30380, MCS Channel Program Counter Register 0 */
#define GTM_MCS0_CH7_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0130380u)

/** \brief  30384, MCS Channel Program Counter Register 1 */
#define GTM_MCS0_CH7_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0130384u)

/** \brief  30388, MCS Channel Program Counter Register 2 */
#define GTM_MCS0_CH7_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0130388u)

/** \brief  3038C, MCS Channel Program Counter Register 3 */
#define GTM_MCS0_CH7_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013038Cu)

/** \brief  30390, MCS Channel Program Counter Register 4 */
#define GTM_MCS0_CH7_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0130390u)

/** \brief  30394, MCS Channel Program Counter Register 5 */
#define GTM_MCS0_CH7_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0130394u)

/** \brief  30398, MCS Channel Program Counter Register 6 */
#define GTM_MCS0_CH7_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0130398u)

/** \brief  3039C, MCS Channel Program Counter Register 7 */
#define GTM_MCS0_CH7_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013039Cu)

/** \brief  30074, MCS Control Register */
#define GTM_MCS0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRL*)0xF0130074u)

/** \brief  3007C, MCS Error Register */
#define GTM_MCS0_ERR /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF013007Cu)

/** \brief  30078, MCS Channel Reset Register */
#define GTM_MCS0_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_RST*)0xF0130078u)

/** \brief  31024, MCS Channel ACB Register */
#define GTM_MCS1_CH0_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0131024u)

/** \brief  31028, MCS Clear Trigger Control Register */
#define GTM_MCS1_CH0_CTRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH0_CTRG*)0xF0131028u)

/** Alias (User Manual Name) for GTM_MCS1_CH0_CTRG.
* To use register names with standard convension, please use GTM_MCS1_CH0_CTRG.
*/
#define	GTM_MCS1_CTRG	(GTM_MCS1_CH0_CTRG)

/** \brief  31020, MCS Channel Control Register */
#define GTM_MCS1_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0131020u)

/** \brief  31054, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS1_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0131054u)

/** \brief  31048, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0131048u)

/** \brief  3104C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013104Cu)

/** \brief  31050, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0131050u)

/** \brief  31044, MCS Channel interrupt notification register */
#define GTM_MCS1_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0131044u)

/** \brief  31040, MCS Channel Program Counter Register */
#define GTM_MCS1_CH0_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0131040u)

/** \brief  31000, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH0_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0131000u)

/** \brief  31004, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH0_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0131004u)

/** \brief  31008, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH0_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0131008u)

/** \brief  3100C, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH0_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013100Cu)

/** \brief  31010, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH0_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0131010u)

/** \brief  31014, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH0_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0131014u)

/** \brief  31018, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH0_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0131018u)

/** \brief  3101C, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH0_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013101Cu)

/** \brief  3102C, MCS Set Trigger Control Register */
#define GTM_MCS1_CH0_STRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH0_STRG*)0xF013102Cu)

/** Alias (User Manual Name) for GTM_MCS1_CH0_STRG.
* To use register names with standard convension, please use GTM_MCS1_CH0_STRG.
*/
#define	GTM_MCS1_STRG	(GTM_MCS1_CH0_STRG)

/** \brief  310A4, MCS Channel ACB Register */
#define GTM_MCS1_CH1_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01310A4u)

/** \brief  310A0, MCS Channel Control Register */
#define GTM_MCS1_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01310A0u)

/** \brief  310D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS1_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01310D4u)

/** \brief  310C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01310C8u)

/** \brief  310CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01310CCu)

/** \brief  310D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01310D0u)

/** \brief  310C4, MCS Channel interrupt notification register */
#define GTM_MCS1_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01310C4u)

/** \brief  310C0, MCS Channel Program Counter Register */
#define GTM_MCS1_CH1_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01310C0u)

/** \brief  31080, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH1_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0131080u)

/** \brief  31084, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH1_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0131084u)

/** \brief  31088, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH1_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0131088u)

/** \brief  3108C, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH1_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013108Cu)

/** \brief  31090, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH1_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0131090u)

/** \brief  31094, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH1_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0131094u)

/** \brief  31098, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH1_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0131098u)

/** \brief  3109C, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH1_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013109Cu)

/** \brief  31124, MCS Channel ACB Register */
#define GTM_MCS1_CH2_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0131124u)

/** \brief  31120, MCS Channel Control Register */
#define GTM_MCS1_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0131120u)

/** \brief  31154, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS1_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0131154u)

/** \brief  31148, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0131148u)

/** \brief  3114C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013114Cu)

/** \brief  31150, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0131150u)

/** \brief  31144, MCS Channel interrupt notification register */
#define GTM_MCS1_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0131144u)

/** \brief  31140, MCS Channel Program Counter Register */
#define GTM_MCS1_CH2_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0131140u)

/** \brief  31100, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH2_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0131100u)

/** \brief  31104, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH2_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0131104u)

/** \brief  31108, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH2_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0131108u)

/** \brief  3110C, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH2_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013110Cu)

/** \brief  31110, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH2_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0131110u)

/** \brief  31114, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH2_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0131114u)

/** \brief  31118, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH2_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0131118u)

/** \brief  3111C, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH2_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013111Cu)

/** \brief  311A4, MCS Channel ACB Register */
#define GTM_MCS1_CH3_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01311A4u)

/** \brief  311A0, MCS Channel Control Register */
#define GTM_MCS1_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01311A0u)

/** \brief  311D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS1_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01311D4u)

/** \brief  311C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01311C8u)

/** \brief  311CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01311CCu)

/** \brief  311D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01311D0u)

/** \brief  311C4, MCS Channel interrupt notification register */
#define GTM_MCS1_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01311C4u)

/** \brief  311C0, MCS Channel Program Counter Register */
#define GTM_MCS1_CH3_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01311C0u)

/** \brief  31180, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH3_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0131180u)

/** \brief  31184, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH3_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0131184u)

/** \brief  31188, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH3_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0131188u)

/** \brief  3118C, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH3_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013118Cu)

/** \brief  31190, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH3_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0131190u)

/** \brief  31194, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH3_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0131194u)

/** \brief  31198, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH3_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0131198u)

/** \brief  3119C, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH3_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013119Cu)

/** \brief  31224, MCS Channel ACB Register */
#define GTM_MCS1_CH4_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0131224u)

/** \brief  31220, MCS Channel Control Register */
#define GTM_MCS1_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0131220u)

/** \brief  31254, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS1_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0131254u)

/** \brief  31248, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0131248u)

/** \brief  3124C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013124Cu)

/** \brief  31250, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0131250u)

/** \brief  31244, MCS Channel interrupt notification register */
#define GTM_MCS1_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0131244u)

/** \brief  31240, MCS Channel Program Counter Register */
#define GTM_MCS1_CH4_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0131240u)

/** \brief  31200, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH4_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0131200u)

/** \brief  31204, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH4_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0131204u)

/** \brief  31208, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH4_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0131208u)

/** \brief  3120C, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH4_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013120Cu)

/** \brief  31210, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH4_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0131210u)

/** \brief  31214, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH4_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0131214u)

/** \brief  31218, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH4_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0131218u)

/** \brief  3121C, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH4_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013121Cu)

/** \brief  312A4, MCS Channel ACB Register */
#define GTM_MCS1_CH5_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01312A4u)

/** \brief  312A0, MCS Channel Control Register */
#define GTM_MCS1_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01312A0u)

/** \brief  312D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS1_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01312D4u)

/** \brief  312C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01312C8u)

/** \brief  312CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01312CCu)

/** \brief  312D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01312D0u)

/** \brief  312C4, MCS Channel interrupt notification register */
#define GTM_MCS1_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01312C4u)

/** \brief  312C0, MCS Channel Program Counter Register */
#define GTM_MCS1_CH5_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01312C0u)

/** \brief  31280, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH5_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0131280u)

/** \brief  31284, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH5_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0131284u)

/** \brief  31288, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH5_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0131288u)

/** \brief  3128C, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH5_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013128Cu)

/** \brief  31290, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH5_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0131290u)

/** \brief  31294, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH5_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0131294u)

/** \brief  31298, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH5_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0131298u)

/** \brief  3129C, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH5_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013129Cu)

/** \brief  31324, MCS Channel ACB Register */
#define GTM_MCS1_CH6_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0131324u)

/** \brief  31320, MCS Channel Control Register */
#define GTM_MCS1_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0131320u)

/** \brief  31354, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS1_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0131354u)

/** \brief  31348, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0131348u)

/** \brief  3134C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013134Cu)

/** \brief  31350, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0131350u)

/** \brief  31344, MCS Channel interrupt notification register */
#define GTM_MCS1_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0131344u)

/** \brief  31340, MCS Channel Program Counter Register */
#define GTM_MCS1_CH6_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0131340u)

/** \brief  31300, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH6_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0131300u)

/** \brief  31304, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH6_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0131304u)

/** \brief  31308, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH6_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0131308u)

/** \brief  3130C, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH6_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013130Cu)

/** \brief  31310, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH6_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0131310u)

/** \brief  31314, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH6_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0131314u)

/** \brief  31318, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH6_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0131318u)

/** \brief  3131C, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH6_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013131Cu)

/** \brief  313A4, MCS Channel ACB Register */
#define GTM_MCS1_CH7_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01313A4u)

/** \brief  313A0, MCS Channel Control Register */
#define GTM_MCS1_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01313A0u)

/** \brief  313D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS1_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01313D4u)

/** \brief  313C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS1_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01313C8u)

/** \brief  313CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS1_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01313CCu)

/** \brief  313D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS1_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01313D0u)

/** \brief  313C4, MCS Channel interrupt notification register */
#define GTM_MCS1_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01313C4u)

/** \brief  313C0, MCS Channel Program Counter Register */
#define GTM_MCS1_CH7_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01313C0u)

/** \brief  31380, MCS Channel Program Counter Register 0 */
#define GTM_MCS1_CH7_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0131380u)

/** \brief  31384, MCS Channel Program Counter Register 1 */
#define GTM_MCS1_CH7_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0131384u)

/** \brief  31388, MCS Channel Program Counter Register 2 */
#define GTM_MCS1_CH7_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0131388u)

/** \brief  3138C, MCS Channel Program Counter Register 3 */
#define GTM_MCS1_CH7_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013138Cu)

/** \brief  31390, MCS Channel Program Counter Register 4 */
#define GTM_MCS1_CH7_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0131390u)

/** \brief  31394, MCS Channel Program Counter Register 5 */
#define GTM_MCS1_CH7_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0131394u)

/** \brief  31398, MCS Channel Program Counter Register 6 */
#define GTM_MCS1_CH7_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0131398u)

/** \brief  3139C, MCS Channel Program Counter Register 7 */
#define GTM_MCS1_CH7_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013139Cu)

/** \brief  31074, MCS Control Register */
#define GTM_MCS1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRL*)0xF0131074u)

/** \brief  3107C, MCS Error Register */
#define GTM_MCS1_ERR /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF013107Cu)

/** \brief  31078, MCS Channel Reset Register */
#define GTM_MCS1_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_RST*)0xF0131078u)

/** \brief  32024, MCS Channel ACB Register */
#define GTM_MCS2_CH0_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0132024u)

/** \brief  32028, MCS Clear Trigger Control Register */
#define GTM_MCS2_CH0_CTRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH0_CTRG*)0xF0132028u)

/** Alias (User Manual Name) for GTM_MCS2_CH0_CTRG.
* To use register names with standard convension, please use GTM_MCS2_CH0_CTRG.
*/
#define	GTM_MCS2_CTRG	(GTM_MCS2_CH0_CTRG)

/** \brief  32020, MCS Channel Control Register */
#define GTM_MCS2_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0132020u)

/** \brief  32054, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS2_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0132054u)

/** \brief  32048, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0132048u)

/** \brief  3204C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013204Cu)

/** \brief  32050, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0132050u)

/** \brief  32044, MCS Channel interrupt notification register */
#define GTM_MCS2_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0132044u)

/** \brief  32040, MCS Channel Program Counter Register */
#define GTM_MCS2_CH0_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0132040u)

/** \brief  32000, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH0_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0132000u)

/** \brief  32004, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH0_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0132004u)

/** \brief  32008, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH0_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0132008u)

/** \brief  3200C, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH0_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013200Cu)

/** \brief  32010, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH0_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0132010u)

/** \brief  32014, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH0_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0132014u)

/** \brief  32018, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH0_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0132018u)

/** \brief  3201C, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH0_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013201Cu)

/** \brief  3202C, MCS Set Trigger Control Register */
#define GTM_MCS2_CH0_STRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH0_STRG*)0xF013202Cu)

/** Alias (User Manual Name) for GTM_MCS2_CH0_STRG.
* To use register names with standard convension, please use GTM_MCS2_CH0_STRG.
*/
#define	GTM_MCS2_STRG	(GTM_MCS2_CH0_STRG)

/** \brief  320A4, MCS Channel ACB Register */
#define GTM_MCS2_CH1_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01320A4u)

/** \brief  320A0, MCS Channel Control Register */
#define GTM_MCS2_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01320A0u)

/** \brief  320D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS2_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01320D4u)

/** \brief  320C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01320C8u)

/** \brief  320CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01320CCu)

/** \brief  320D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01320D0u)

/** \brief  320C4, MCS Channel interrupt notification register */
#define GTM_MCS2_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01320C4u)

/** \brief  320C0, MCS Channel Program Counter Register */
#define GTM_MCS2_CH1_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01320C0u)

/** \brief  32080, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH1_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0132080u)

/** \brief  32084, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH1_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0132084u)

/** \brief  32088, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH1_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0132088u)

/** \brief  3208C, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH1_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013208Cu)

/** \brief  32090, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH1_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0132090u)

/** \brief  32094, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH1_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0132094u)

/** \brief  32098, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH1_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0132098u)

/** \brief  3209C, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH1_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013209Cu)

/** \brief  32124, MCS Channel ACB Register */
#define GTM_MCS2_CH2_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0132124u)

/** \brief  32120, MCS Channel Control Register */
#define GTM_MCS2_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0132120u)

/** \brief  32154, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS2_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0132154u)

/** \brief  32148, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0132148u)

/** \brief  3214C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013214Cu)

/** \brief  32150, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0132150u)

/** \brief  32144, MCS Channel interrupt notification register */
#define GTM_MCS2_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0132144u)

/** \brief  32140, MCS Channel Program Counter Register */
#define GTM_MCS2_CH2_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0132140u)

/** \brief  32100, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH2_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0132100u)

/** \brief  32104, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH2_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0132104u)

/** \brief  32108, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH2_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0132108u)

/** \brief  3210C, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH2_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013210Cu)

/** \brief  32110, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH2_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0132110u)

/** \brief  32114, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH2_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0132114u)

/** \brief  32118, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH2_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0132118u)

/** \brief  3211C, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH2_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013211Cu)

/** \brief  321A4, MCS Channel ACB Register */
#define GTM_MCS2_CH3_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01321A4u)

/** \brief  321A0, MCS Channel Control Register */
#define GTM_MCS2_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01321A0u)

/** \brief  321D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS2_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01321D4u)

/** \brief  321C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01321C8u)

/** \brief  321CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01321CCu)

/** \brief  321D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01321D0u)

/** \brief  321C4, MCS Channel interrupt notification register */
#define GTM_MCS2_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01321C4u)

/** \brief  321C0, MCS Channel Program Counter Register */
#define GTM_MCS2_CH3_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01321C0u)

/** \brief  32180, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH3_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0132180u)

/** \brief  32184, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH3_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0132184u)

/** \brief  32188, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH3_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0132188u)

/** \brief  3218C, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH3_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013218Cu)

/** \brief  32190, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH3_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0132190u)

/** \brief  32194, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH3_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0132194u)

/** \brief  32198, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH3_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0132198u)

/** \brief  3219C, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH3_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013219Cu)

/** \brief  32224, MCS Channel ACB Register */
#define GTM_MCS2_CH4_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0132224u)

/** \brief  32220, MCS Channel Control Register */
#define GTM_MCS2_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0132220u)

/** \brief  32254, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS2_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0132254u)

/** \brief  32248, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0132248u)

/** \brief  3224C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013224Cu)

/** \brief  32250, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0132250u)

/** \brief  32244, MCS Channel interrupt notification register */
#define GTM_MCS2_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0132244u)

/** \brief  32240, MCS Channel Program Counter Register */
#define GTM_MCS2_CH4_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0132240u)

/** \brief  32200, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH4_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0132200u)

/** \brief  32204, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH4_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0132204u)

/** \brief  32208, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH4_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0132208u)

/** \brief  3220C, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH4_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013220Cu)

/** \brief  32210, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH4_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0132210u)

/** \brief  32214, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH4_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0132214u)

/** \brief  32218, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH4_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0132218u)

/** \brief  3221C, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH4_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013221Cu)

/** \brief  322A4, MCS Channel ACB Register */
#define GTM_MCS2_CH5_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01322A4u)

/** \brief  322A0, MCS Channel Control Register */
#define GTM_MCS2_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01322A0u)

/** \brief  322D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS2_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01322D4u)

/** \brief  322C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01322C8u)

/** \brief  322CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01322CCu)

/** \brief  322D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01322D0u)

/** \brief  322C4, MCS Channel interrupt notification register */
#define GTM_MCS2_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01322C4u)

/** \brief  322C0, MCS Channel Program Counter Register */
#define GTM_MCS2_CH5_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01322C0u)

/** \brief  32280, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH5_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0132280u)

/** \brief  32284, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH5_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0132284u)

/** \brief  32288, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH5_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0132288u)

/** \brief  3228C, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH5_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013228Cu)

/** \brief  32290, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH5_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0132290u)

/** \brief  32294, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH5_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0132294u)

/** \brief  32298, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH5_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0132298u)

/** \brief  3229C, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH5_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013229Cu)

/** \brief  32324, MCS Channel ACB Register */
#define GTM_MCS2_CH6_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0132324u)

/** \brief  32320, MCS Channel Control Register */
#define GTM_MCS2_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0132320u)

/** \brief  32354, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS2_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0132354u)

/** \brief  32348, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0132348u)

/** \brief  3234C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013234Cu)

/** \brief  32350, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0132350u)

/** \brief  32344, MCS Channel interrupt notification register */
#define GTM_MCS2_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0132344u)

/** \brief  32340, MCS Channel Program Counter Register */
#define GTM_MCS2_CH6_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0132340u)

/** \brief  32300, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH6_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0132300u)

/** \brief  32304, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH6_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0132304u)

/** \brief  32308, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH6_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0132308u)

/** \brief  3230C, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH6_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013230Cu)

/** \brief  32310, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH6_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0132310u)

/** \brief  32314, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH6_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0132314u)

/** \brief  32318, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH6_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0132318u)

/** \brief  3231C, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH6_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013231Cu)

/** \brief  323A4, MCS Channel ACB Register */
#define GTM_MCS2_CH7_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01323A4u)

/** \brief  323A0, MCS Channel Control Register */
#define GTM_MCS2_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01323A0u)

/** \brief  323D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS2_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01323D4u)

/** \brief  323C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS2_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01323C8u)

/** \brief  323CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS2_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01323CCu)

/** \brief  323D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS2_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01323D0u)

/** \brief  323C4, MCS Channel interrupt notification register */
#define GTM_MCS2_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01323C4u)

/** \brief  323C0, MCS Channel Program Counter Register */
#define GTM_MCS2_CH7_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01323C0u)

/** \brief  32380, MCS Channel Program Counter Register 0 */
#define GTM_MCS2_CH7_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0132380u)

/** \brief  32384, MCS Channel Program Counter Register 1 */
#define GTM_MCS2_CH7_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0132384u)

/** \brief  32388, MCS Channel Program Counter Register 2 */
#define GTM_MCS2_CH7_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0132388u)

/** \brief  3238C, MCS Channel Program Counter Register 3 */
#define GTM_MCS2_CH7_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013238Cu)

/** \brief  32390, MCS Channel Program Counter Register 4 */
#define GTM_MCS2_CH7_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0132390u)

/** \brief  32394, MCS Channel Program Counter Register 5 */
#define GTM_MCS2_CH7_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0132394u)

/** \brief  32398, MCS Channel Program Counter Register 6 */
#define GTM_MCS2_CH7_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0132398u)

/** \brief  3239C, MCS Channel Program Counter Register 7 */
#define GTM_MCS2_CH7_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013239Cu)

/** \brief  32074, MCS Control Register */
#define GTM_MCS2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRL*)0xF0132074u)

/** \brief  3207C, MCS Error Register */
#define GTM_MCS2_ERR /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF013207Cu)

/** \brief  32078, MCS Channel Reset Register */
#define GTM_MCS2_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_RST*)0xF0132078u)

/** \brief  33024, MCS Channel ACB Register */
#define GTM_MCS3_CH0_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0133024u)

/** \brief  33028, MCS Clear Trigger Control Register */
#define GTM_MCS3_CH0_CTRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH0_CTRG*)0xF0133028u)

/** Alias (User Manual Name) for GTM_MCS3_CH0_CTRG.
* To use register names with standard convension, please use GTM_MCS3_CH0_CTRG.
*/
#define	GTM_MCS3_CTRG	(GTM_MCS3_CH0_CTRG)

/** \brief  33020, MCS Channel Control Register */
#define GTM_MCS3_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0133020u)

/** \brief  33054, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS3_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0133054u)

/** \brief  33048, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0133048u)

/** \brief  3304C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013304Cu)

/** \brief  33050, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0133050u)

/** \brief  33044, MCS Channel interrupt notification register */
#define GTM_MCS3_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0133044u)

/** \brief  33040, MCS Channel Program Counter Register */
#define GTM_MCS3_CH0_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0133040u)

/** \brief  33000, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH0_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0133000u)

/** \brief  33004, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH0_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0133004u)

/** \brief  33008, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH0_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0133008u)

/** \brief  3300C, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH0_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013300Cu)

/** \brief  33010, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH0_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0133010u)

/** \brief  33014, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH0_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0133014u)

/** \brief  33018, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH0_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0133018u)

/** \brief  3301C, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH0_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013301Cu)

/** \brief  3302C, MCS Set Trigger Control Register */
#define GTM_MCS3_CH0_STRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH0_STRG*)0xF013302Cu)

/** Alias (User Manual Name) for GTM_MCS3_CH0_STRG.
* To use register names with standard convension, please use GTM_MCS3_CH0_STRG.
*/
#define	GTM_MCS3_STRG	(GTM_MCS3_CH0_STRG)

/** \brief  330A4, MCS Channel ACB Register */
#define GTM_MCS3_CH1_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01330A4u)

/** \brief  330A0, MCS Channel Control Register */
#define GTM_MCS3_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01330A0u)

/** \brief  330D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS3_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01330D4u)

/** \brief  330C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01330C8u)

/** \brief  330CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01330CCu)

/** \brief  330D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01330D0u)

/** \brief  330C4, MCS Channel interrupt notification register */
#define GTM_MCS3_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01330C4u)

/** \brief  330C0, MCS Channel Program Counter Register */
#define GTM_MCS3_CH1_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01330C0u)

/** \brief  33080, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH1_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0133080u)

/** \brief  33084, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH1_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0133084u)

/** \brief  33088, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH1_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0133088u)

/** \brief  3308C, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH1_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013308Cu)

/** \brief  33090, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH1_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0133090u)

/** \brief  33094, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH1_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0133094u)

/** \brief  33098, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH1_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0133098u)

/** \brief  3309C, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH1_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013309Cu)

/** \brief  33124, MCS Channel ACB Register */
#define GTM_MCS3_CH2_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0133124u)

/** \brief  33120, MCS Channel Control Register */
#define GTM_MCS3_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0133120u)

/** \brief  33154, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS3_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0133154u)

/** \brief  33148, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0133148u)

/** \brief  3314C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013314Cu)

/** \brief  33150, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0133150u)

/** \brief  33144, MCS Channel interrupt notification register */
#define GTM_MCS3_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0133144u)

/** \brief  33140, MCS Channel Program Counter Register */
#define GTM_MCS3_CH2_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0133140u)

/** \brief  33100, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH2_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0133100u)

/** \brief  33104, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH2_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0133104u)

/** \brief  33108, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH2_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0133108u)

/** \brief  3310C, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH2_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013310Cu)

/** \brief  33110, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH2_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0133110u)

/** \brief  33114, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH2_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0133114u)

/** \brief  33118, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH2_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0133118u)

/** \brief  3311C, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH2_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013311Cu)

/** \brief  331A4, MCS Channel ACB Register */
#define GTM_MCS3_CH3_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01331A4u)

/** \brief  331A0, MCS Channel Control Register */
#define GTM_MCS3_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01331A0u)

/** \brief  331D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS3_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01331D4u)

/** \brief  331C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01331C8u)

/** \brief  331CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01331CCu)

/** \brief  331D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01331D0u)

/** \brief  331C4, MCS Channel interrupt notification register */
#define GTM_MCS3_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01331C4u)

/** \brief  331C0, MCS Channel Program Counter Register */
#define GTM_MCS3_CH3_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01331C0u)

/** \brief  33180, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH3_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0133180u)

/** \brief  33184, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH3_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0133184u)

/** \brief  33188, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH3_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0133188u)

/** \brief  3318C, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH3_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013318Cu)

/** \brief  33190, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH3_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0133190u)

/** \brief  33194, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH3_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0133194u)

/** \brief  33198, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH3_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0133198u)

/** \brief  3319C, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH3_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013319Cu)

/** \brief  33224, MCS Channel ACB Register */
#define GTM_MCS3_CH4_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0133224u)

/** \brief  33220, MCS Channel Control Register */
#define GTM_MCS3_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0133220u)

/** \brief  33254, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS3_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0133254u)

/** \brief  33248, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0133248u)

/** \brief  3324C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013324Cu)

/** \brief  33250, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0133250u)

/** \brief  33244, MCS Channel interrupt notification register */
#define GTM_MCS3_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0133244u)

/** \brief  33240, MCS Channel Program Counter Register */
#define GTM_MCS3_CH4_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0133240u)

/** \brief  33200, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH4_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0133200u)

/** \brief  33204, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH4_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0133204u)

/** \brief  33208, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH4_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0133208u)

/** \brief  3320C, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH4_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013320Cu)

/** \brief  33210, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH4_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0133210u)

/** \brief  33214, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH4_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0133214u)

/** \brief  33218, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH4_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0133218u)

/** \brief  3321C, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH4_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013321Cu)

/** \brief  332A4, MCS Channel ACB Register */
#define GTM_MCS3_CH5_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01332A4u)

/** \brief  332A0, MCS Channel Control Register */
#define GTM_MCS3_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01332A0u)

/** \brief  332D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS3_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01332D4u)

/** \brief  332C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01332C8u)

/** \brief  332CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01332CCu)

/** \brief  332D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01332D0u)

/** \brief  332C4, MCS Channel interrupt notification register */
#define GTM_MCS3_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01332C4u)

/** \brief  332C0, MCS Channel Program Counter Register */
#define GTM_MCS3_CH5_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01332C0u)

/** \brief  33280, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH5_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0133280u)

/** \brief  33284, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH5_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0133284u)

/** \brief  33288, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH5_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0133288u)

/** \brief  3328C, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH5_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013328Cu)

/** \brief  33290, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH5_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0133290u)

/** \brief  33294, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH5_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0133294u)

/** \brief  33298, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH5_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0133298u)

/** \brief  3329C, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH5_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013329Cu)

/** \brief  33324, MCS Channel ACB Register */
#define GTM_MCS3_CH6_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0133324u)

/** \brief  33320, MCS Channel Control Register */
#define GTM_MCS3_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0133320u)

/** \brief  33354, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS3_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0133354u)

/** \brief  33348, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0133348u)

/** \brief  3334C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013334Cu)

/** \brief  33350, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0133350u)

/** \brief  33344, MCS Channel interrupt notification register */
#define GTM_MCS3_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0133344u)

/** \brief  33340, MCS Channel Program Counter Register */
#define GTM_MCS3_CH6_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0133340u)

/** \brief  33300, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH6_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0133300u)

/** \brief  33304, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH6_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0133304u)

/** \brief  33308, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH6_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0133308u)

/** \brief  3330C, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH6_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013330Cu)

/** \brief  33310, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH6_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0133310u)

/** \brief  33314, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH6_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0133314u)

/** \brief  33318, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH6_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0133318u)

/** \brief  3331C, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH6_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013331Cu)

/** \brief  333A4, MCS Channel ACB Register */
#define GTM_MCS3_CH7_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01333A4u)

/** \brief  333A0, MCS Channel Control Register */
#define GTM_MCS3_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01333A0u)

/** \brief  333D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS3_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01333D4u)

/** \brief  333C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS3_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01333C8u)

/** \brief  333CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS3_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01333CCu)

/** \brief  333D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS3_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01333D0u)

/** \brief  333C4, MCS Channel interrupt notification register */
#define GTM_MCS3_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01333C4u)

/** \brief  333C0, MCS Channel Program Counter Register */
#define GTM_MCS3_CH7_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01333C0u)

/** \brief  33380, MCS Channel Program Counter Register 0 */
#define GTM_MCS3_CH7_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0133380u)

/** \brief  33384, MCS Channel Program Counter Register 1 */
#define GTM_MCS3_CH7_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0133384u)

/** \brief  33388, MCS Channel Program Counter Register 2 */
#define GTM_MCS3_CH7_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0133388u)

/** \brief  3338C, MCS Channel Program Counter Register 3 */
#define GTM_MCS3_CH7_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013338Cu)

/** \brief  33390, MCS Channel Program Counter Register 4 */
#define GTM_MCS3_CH7_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0133390u)

/** \brief  33394, MCS Channel Program Counter Register 5 */
#define GTM_MCS3_CH7_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0133394u)

/** \brief  33398, MCS Channel Program Counter Register 6 */
#define GTM_MCS3_CH7_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0133398u)

/** \brief  3339C, MCS Channel Program Counter Register 7 */
#define GTM_MCS3_CH7_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013339Cu)

/** \brief  33074, MCS Control Register */
#define GTM_MCS3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRL*)0xF0133074u)

/** \brief  3307C, MCS Error Register */
#define GTM_MCS3_ERR /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF013307Cu)

/** \brief  33078, MCS Channel Reset Register */
#define GTM_MCS3_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_RST*)0xF0133078u)

/** \brief  34024, MCS Channel ACB Register */
#define GTM_MCS4_CH0_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0134024u)

/** \brief  34028, MCS Clear Trigger Control Register */
#define GTM_MCS4_CH0_CTRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH0_CTRG*)0xF0134028u)

/** Alias (User Manual Name) for GTM_MCS4_CH0_CTRG.
* To use register names with standard convension, please use GTM_MCS4_CH0_CTRG.
*/
#define	GTM_MCS4_CTRG	(GTM_MCS4_CH0_CTRG)

/** \brief  34020, MCS Channel Control Register */
#define GTM_MCS4_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0134020u)

/** \brief  34054, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS4_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0134054u)

/** \brief  34048, MCS Channel Interrupt Enable Register */
#define GTM_MCS4_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0134048u)

/** \brief  3404C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS4_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013404Cu)

/** \brief  34050, MCS IRQ Mode Configuration Register */
#define GTM_MCS4_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0134050u)

/** \brief  34044, MCS Channel interrupt notification register */
#define GTM_MCS4_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0134044u)

/** \brief  34040, MCS Channel Program Counter Register */
#define GTM_MCS4_CH0_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0134040u)

/** \brief  34000, MCS Channel Program Counter Register 0 */
#define GTM_MCS4_CH0_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0134000u)

/** \brief  34004, MCS Channel Program Counter Register 1 */
#define GTM_MCS4_CH0_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0134004u)

/** \brief  34008, MCS Channel Program Counter Register 2 */
#define GTM_MCS4_CH0_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0134008u)

/** \brief  3400C, MCS Channel Program Counter Register 3 */
#define GTM_MCS4_CH0_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013400Cu)

/** \brief  34010, MCS Channel Program Counter Register 4 */
#define GTM_MCS4_CH0_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0134010u)

/** \brief  34014, MCS Channel Program Counter Register 5 */
#define GTM_MCS4_CH0_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0134014u)

/** \brief  34018, MCS Channel Program Counter Register 6 */
#define GTM_MCS4_CH0_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0134018u)

/** \brief  3401C, MCS Channel Program Counter Register 7 */
#define GTM_MCS4_CH0_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013401Cu)

/** \brief  3402C, MCS Set Trigger Control Register */
#define GTM_MCS4_CH0_STRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH0_STRG*)0xF013402Cu)

/** Alias (User Manual Name) for GTM_MCS4_CH0_STRG.
* To use register names with standard convension, please use GTM_MCS4_CH0_STRG.
*/
#define	GTM_MCS4_STRG	(GTM_MCS4_CH0_STRG)

/** \brief  340A4, MCS Channel ACB Register */
#define GTM_MCS4_CH1_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01340A4u)

/** \brief  340A0, MCS Channel Control Register */
#define GTM_MCS4_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01340A0u)

/** \brief  340D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS4_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01340D4u)

/** \brief  340C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS4_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01340C8u)

/** \brief  340CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS4_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01340CCu)

/** \brief  340D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS4_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01340D0u)

/** \brief  340C4, MCS Channel interrupt notification register */
#define GTM_MCS4_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01340C4u)

/** \brief  340C0, MCS Channel Program Counter Register */
#define GTM_MCS4_CH1_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01340C0u)

/** \brief  34080, MCS Channel Program Counter Register 0 */
#define GTM_MCS4_CH1_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0134080u)

/** \brief  34084, MCS Channel Program Counter Register 1 */
#define GTM_MCS4_CH1_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0134084u)

/** \brief  34088, MCS Channel Program Counter Register 2 */
#define GTM_MCS4_CH1_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0134088u)

/** \brief  3408C, MCS Channel Program Counter Register 3 */
#define GTM_MCS4_CH1_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013408Cu)

/** \brief  34090, MCS Channel Program Counter Register 4 */
#define GTM_MCS4_CH1_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0134090u)

/** \brief  34094, MCS Channel Program Counter Register 5 */
#define GTM_MCS4_CH1_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0134094u)

/** \brief  34098, MCS Channel Program Counter Register 6 */
#define GTM_MCS4_CH1_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0134098u)

/** \brief  3409C, MCS Channel Program Counter Register 7 */
#define GTM_MCS4_CH1_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013409Cu)

/** \brief  34124, MCS Channel ACB Register */
#define GTM_MCS4_CH2_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0134124u)

/** \brief  34120, MCS Channel Control Register */
#define GTM_MCS4_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0134120u)

/** \brief  34154, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS4_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0134154u)

/** \brief  34148, MCS Channel Interrupt Enable Register */
#define GTM_MCS4_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0134148u)

/** \brief  3414C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS4_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013414Cu)

/** \brief  34150, MCS IRQ Mode Configuration Register */
#define GTM_MCS4_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0134150u)

/** \brief  34144, MCS Channel interrupt notification register */
#define GTM_MCS4_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0134144u)

/** \brief  34140, MCS Channel Program Counter Register */
#define GTM_MCS4_CH2_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0134140u)

/** \brief  34100, MCS Channel Program Counter Register 0 */
#define GTM_MCS4_CH2_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0134100u)

/** \brief  34104, MCS Channel Program Counter Register 1 */
#define GTM_MCS4_CH2_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0134104u)

/** \brief  34108, MCS Channel Program Counter Register 2 */
#define GTM_MCS4_CH2_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0134108u)

/** \brief  3410C, MCS Channel Program Counter Register 3 */
#define GTM_MCS4_CH2_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013410Cu)

/** \brief  34110, MCS Channel Program Counter Register 4 */
#define GTM_MCS4_CH2_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0134110u)

/** \brief  34114, MCS Channel Program Counter Register 5 */
#define GTM_MCS4_CH2_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0134114u)

/** \brief  34118, MCS Channel Program Counter Register 6 */
#define GTM_MCS4_CH2_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0134118u)

/** \brief  3411C, MCS Channel Program Counter Register 7 */
#define GTM_MCS4_CH2_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013411Cu)

/** \brief  341A4, MCS Channel ACB Register */
#define GTM_MCS4_CH3_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01341A4u)

/** \brief  341A0, MCS Channel Control Register */
#define GTM_MCS4_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01341A0u)

/** \brief  341D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS4_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01341D4u)

/** \brief  341C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS4_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01341C8u)

/** \brief  341CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS4_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01341CCu)

/** \brief  341D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS4_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01341D0u)

/** \brief  341C4, MCS Channel interrupt notification register */
#define GTM_MCS4_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01341C4u)

/** \brief  341C0, MCS Channel Program Counter Register */
#define GTM_MCS4_CH3_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01341C0u)

/** \brief  34180, MCS Channel Program Counter Register 0 */
#define GTM_MCS4_CH3_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0134180u)

/** \brief  34184, MCS Channel Program Counter Register 1 */
#define GTM_MCS4_CH3_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0134184u)

/** \brief  34188, MCS Channel Program Counter Register 2 */
#define GTM_MCS4_CH3_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0134188u)

/** \brief  3418C, MCS Channel Program Counter Register 3 */
#define GTM_MCS4_CH3_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013418Cu)

/** \brief  34190, MCS Channel Program Counter Register 4 */
#define GTM_MCS4_CH3_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0134190u)

/** \brief  34194, MCS Channel Program Counter Register 5 */
#define GTM_MCS4_CH3_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0134194u)

/** \brief  34198, MCS Channel Program Counter Register 6 */
#define GTM_MCS4_CH3_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0134198u)

/** \brief  3419C, MCS Channel Program Counter Register 7 */
#define GTM_MCS4_CH3_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013419Cu)

/** \brief  34224, MCS Channel ACB Register */
#define GTM_MCS4_CH4_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0134224u)

/** \brief  34220, MCS Channel Control Register */
#define GTM_MCS4_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0134220u)

/** \brief  34254, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS4_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0134254u)

/** \brief  34248, MCS Channel Interrupt Enable Register */
#define GTM_MCS4_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0134248u)

/** \brief  3424C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS4_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013424Cu)

/** \brief  34250, MCS IRQ Mode Configuration Register */
#define GTM_MCS4_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0134250u)

/** \brief  34244, MCS Channel interrupt notification register */
#define GTM_MCS4_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0134244u)

/** \brief  34240, MCS Channel Program Counter Register */
#define GTM_MCS4_CH4_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0134240u)

/** \brief  34200, MCS Channel Program Counter Register 0 */
#define GTM_MCS4_CH4_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0134200u)

/** \brief  34204, MCS Channel Program Counter Register 1 */
#define GTM_MCS4_CH4_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0134204u)

/** \brief  34208, MCS Channel Program Counter Register 2 */
#define GTM_MCS4_CH4_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0134208u)

/** \brief  3420C, MCS Channel Program Counter Register 3 */
#define GTM_MCS4_CH4_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013420Cu)

/** \brief  34210, MCS Channel Program Counter Register 4 */
#define GTM_MCS4_CH4_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0134210u)

/** \brief  34214, MCS Channel Program Counter Register 5 */
#define GTM_MCS4_CH4_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0134214u)

/** \brief  34218, MCS Channel Program Counter Register 6 */
#define GTM_MCS4_CH4_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0134218u)

/** \brief  3421C, MCS Channel Program Counter Register 7 */
#define GTM_MCS4_CH4_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013421Cu)

/** \brief  342A4, MCS Channel ACB Register */
#define GTM_MCS4_CH5_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01342A4u)

/** \brief  342A0, MCS Channel Control Register */
#define GTM_MCS4_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01342A0u)

/** \brief  342D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS4_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01342D4u)

/** \brief  342C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS4_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01342C8u)

/** \brief  342CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS4_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01342CCu)

/** \brief  342D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS4_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01342D0u)

/** \brief  342C4, MCS Channel interrupt notification register */
#define GTM_MCS4_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01342C4u)

/** \brief  342C0, MCS Channel Program Counter Register */
#define GTM_MCS4_CH5_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01342C0u)

/** \brief  34280, MCS Channel Program Counter Register 0 */
#define GTM_MCS4_CH5_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0134280u)

/** \brief  34284, MCS Channel Program Counter Register 1 */
#define GTM_MCS4_CH5_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0134284u)

/** \brief  34288, MCS Channel Program Counter Register 2 */
#define GTM_MCS4_CH5_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0134288u)

/** \brief  3428C, MCS Channel Program Counter Register 3 */
#define GTM_MCS4_CH5_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013428Cu)

/** \brief  34290, MCS Channel Program Counter Register 4 */
#define GTM_MCS4_CH5_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0134290u)

/** \brief  34294, MCS Channel Program Counter Register 5 */
#define GTM_MCS4_CH5_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0134294u)

/** \brief  34298, MCS Channel Program Counter Register 6 */
#define GTM_MCS4_CH5_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0134298u)

/** \brief  3429C, MCS Channel Program Counter Register 7 */
#define GTM_MCS4_CH5_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013429Cu)

/** \brief  34324, MCS Channel ACB Register */
#define GTM_MCS4_CH6_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0134324u)

/** \brief  34320, MCS Channel Control Register */
#define GTM_MCS4_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0134320u)

/** \brief  34354, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS4_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0134354u)

/** \brief  34348, MCS Channel Interrupt Enable Register */
#define GTM_MCS4_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0134348u)

/** \brief  3434C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS4_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013434Cu)

/** \brief  34350, MCS IRQ Mode Configuration Register */
#define GTM_MCS4_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0134350u)

/** \brief  34344, MCS Channel interrupt notification register */
#define GTM_MCS4_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0134344u)

/** \brief  34340, MCS Channel Program Counter Register */
#define GTM_MCS4_CH6_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0134340u)

/** \brief  34300, MCS Channel Program Counter Register 0 */
#define GTM_MCS4_CH6_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0134300u)

/** \brief  34304, MCS Channel Program Counter Register 1 */
#define GTM_MCS4_CH6_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0134304u)

/** \brief  34308, MCS Channel Program Counter Register 2 */
#define GTM_MCS4_CH6_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0134308u)

/** \brief  3430C, MCS Channel Program Counter Register 3 */
#define GTM_MCS4_CH6_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013430Cu)

/** \brief  34310, MCS Channel Program Counter Register 4 */
#define GTM_MCS4_CH6_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0134310u)

/** \brief  34314, MCS Channel Program Counter Register 5 */
#define GTM_MCS4_CH6_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0134314u)

/** \brief  34318, MCS Channel Program Counter Register 6 */
#define GTM_MCS4_CH6_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0134318u)

/** \brief  3431C, MCS Channel Program Counter Register 7 */
#define GTM_MCS4_CH6_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013431Cu)

/** \brief  343A4, MCS Channel ACB Register */
#define GTM_MCS4_CH7_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01343A4u)

/** \brief  343A0, MCS Channel Control Register */
#define GTM_MCS4_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01343A0u)

/** \brief  343D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS4_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01343D4u)

/** \brief  343C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS4_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01343C8u)

/** \brief  343CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS4_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01343CCu)

/** \brief  343D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS4_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01343D0u)

/** \brief  343C4, MCS Channel interrupt notification register */
#define GTM_MCS4_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01343C4u)

/** \brief  343C0, MCS Channel Program Counter Register */
#define GTM_MCS4_CH7_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01343C0u)

/** \brief  34380, MCS Channel Program Counter Register 0 */
#define GTM_MCS4_CH7_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0134380u)

/** \brief  34384, MCS Channel Program Counter Register 1 */
#define GTM_MCS4_CH7_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0134384u)

/** \brief  34388, MCS Channel Program Counter Register 2 */
#define GTM_MCS4_CH7_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0134388u)

/** \brief  3438C, MCS Channel Program Counter Register 3 */
#define GTM_MCS4_CH7_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013438Cu)

/** \brief  34390, MCS Channel Program Counter Register 4 */
#define GTM_MCS4_CH7_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0134390u)

/** \brief  34394, MCS Channel Program Counter Register 5 */
#define GTM_MCS4_CH7_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0134394u)

/** \brief  34398, MCS Channel Program Counter Register 6 */
#define GTM_MCS4_CH7_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0134398u)

/** \brief  3439C, MCS Channel Program Counter Register 7 */
#define GTM_MCS4_CH7_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013439Cu)

/** \brief  34074, MCS Control Register */
#define GTM_MCS4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRL*)0xF0134074u)

/** \brief  3407C, MCS Error Register */
#define GTM_MCS4_ERR /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF013407Cu)

/** \brief  34078, MCS Channel Reset Register */
#define GTM_MCS4_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_RST*)0xF0134078u)

/** \brief  35024, MCS Channel ACB Register */
#define GTM_MCS5_CH0_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0135024u)

/** \brief  35028, MCS Clear Trigger Control Register */
#define GTM_MCS5_CH0_CTRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH0_CTRG*)0xF0135028u)

/** Alias (User Manual Name) for GTM_MCS5_CH0_CTRG.
* To use register names with standard convension, please use GTM_MCS5_CH0_CTRG.
*/
#define	GTM_MCS5_CTRG	(GTM_MCS5_CH0_CTRG)

/** \brief  35020, MCS Channel Control Register */
#define GTM_MCS5_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0135020u)

/** \brief  35054, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS5_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0135054u)

/** \brief  35048, MCS Channel Interrupt Enable Register */
#define GTM_MCS5_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0135048u)

/** \brief  3504C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS5_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013504Cu)

/** \brief  35050, MCS IRQ Mode Configuration Register */
#define GTM_MCS5_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0135050u)

/** \brief  35044, MCS Channel interrupt notification register */
#define GTM_MCS5_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0135044u)

/** \brief  35040, MCS Channel Program Counter Register */
#define GTM_MCS5_CH0_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0135040u)

/** \brief  35000, MCS Channel Program Counter Register 0 */
#define GTM_MCS5_CH0_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0135000u)

/** \brief  35004, MCS Channel Program Counter Register 1 */
#define GTM_MCS5_CH0_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0135004u)

/** \brief  35008, MCS Channel Program Counter Register 2 */
#define GTM_MCS5_CH0_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0135008u)

/** \brief  3500C, MCS Channel Program Counter Register 3 */
#define GTM_MCS5_CH0_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013500Cu)

/** \brief  35010, MCS Channel Program Counter Register 4 */
#define GTM_MCS5_CH0_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0135010u)

/** \brief  35014, MCS Channel Program Counter Register 5 */
#define GTM_MCS5_CH0_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0135014u)

/** \brief  35018, MCS Channel Program Counter Register 6 */
#define GTM_MCS5_CH0_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0135018u)

/** \brief  3501C, MCS Channel Program Counter Register 7 */
#define GTM_MCS5_CH0_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013501Cu)

/** \brief  3502C, MCS Set Trigger Control Register */
#define GTM_MCS5_CH0_STRG /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH0_STRG*)0xF013502Cu)

/** Alias (User Manual Name) for GTM_MCS5_CH0_STRG.
* To use register names with standard convension, please use GTM_MCS5_CH0_STRG.
*/
#define	GTM_MCS5_STRG	(GTM_MCS5_CH0_STRG)

/** \brief  350A4, MCS Channel ACB Register */
#define GTM_MCS5_CH1_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01350A4u)

/** \brief  350A0, MCS Channel Control Register */
#define GTM_MCS5_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01350A0u)

/** \brief  350D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS5_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01350D4u)

/** \brief  350C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS5_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01350C8u)

/** \brief  350CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS5_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01350CCu)

/** \brief  350D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS5_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01350D0u)

/** \brief  350C4, MCS Channel interrupt notification register */
#define GTM_MCS5_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01350C4u)

/** \brief  350C0, MCS Channel Program Counter Register */
#define GTM_MCS5_CH1_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01350C0u)

/** \brief  35080, MCS Channel Program Counter Register 0 */
#define GTM_MCS5_CH1_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0135080u)

/** \brief  35084, MCS Channel Program Counter Register 1 */
#define GTM_MCS5_CH1_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0135084u)

/** \brief  35088, MCS Channel Program Counter Register 2 */
#define GTM_MCS5_CH1_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0135088u)

/** \brief  3508C, MCS Channel Program Counter Register 3 */
#define GTM_MCS5_CH1_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013508Cu)

/** \brief  35090, MCS Channel Program Counter Register 4 */
#define GTM_MCS5_CH1_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0135090u)

/** \brief  35094, MCS Channel Program Counter Register 5 */
#define GTM_MCS5_CH1_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0135094u)

/** \brief  35098, MCS Channel Program Counter Register 6 */
#define GTM_MCS5_CH1_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0135098u)

/** \brief  3509C, MCS Channel Program Counter Register 7 */
#define GTM_MCS5_CH1_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013509Cu)

/** \brief  35124, MCS Channel ACB Register */
#define GTM_MCS5_CH2_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0135124u)

/** \brief  35120, MCS Channel Control Register */
#define GTM_MCS5_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0135120u)

/** \brief  35154, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS5_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0135154u)

/** \brief  35148, MCS Channel Interrupt Enable Register */
#define GTM_MCS5_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0135148u)

/** \brief  3514C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS5_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013514Cu)

/** \brief  35150, MCS IRQ Mode Configuration Register */
#define GTM_MCS5_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0135150u)

/** \brief  35144, MCS Channel interrupt notification register */
#define GTM_MCS5_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0135144u)

/** \brief  35140, MCS Channel Program Counter Register */
#define GTM_MCS5_CH2_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0135140u)

/** \brief  35100, MCS Channel Program Counter Register 0 */
#define GTM_MCS5_CH2_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0135100u)

/** \brief  35104, MCS Channel Program Counter Register 1 */
#define GTM_MCS5_CH2_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0135104u)

/** \brief  35108, MCS Channel Program Counter Register 2 */
#define GTM_MCS5_CH2_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0135108u)

/** \brief  3510C, MCS Channel Program Counter Register 3 */
#define GTM_MCS5_CH2_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013510Cu)

/** \brief  35110, MCS Channel Program Counter Register 4 */
#define GTM_MCS5_CH2_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0135110u)

/** \brief  35114, MCS Channel Program Counter Register 5 */
#define GTM_MCS5_CH2_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0135114u)

/** \brief  35118, MCS Channel Program Counter Register 6 */
#define GTM_MCS5_CH2_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0135118u)

/** \brief  3511C, MCS Channel Program Counter Register 7 */
#define GTM_MCS5_CH2_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013511Cu)

/** \brief  351A4, MCS Channel ACB Register */
#define GTM_MCS5_CH3_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01351A4u)

/** \brief  351A0, MCS Channel Control Register */
#define GTM_MCS5_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01351A0u)

/** \brief  351D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS5_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01351D4u)

/** \brief  351C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS5_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01351C8u)

/** \brief  351CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS5_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01351CCu)

/** \brief  351D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS5_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01351D0u)

/** \brief  351C4, MCS Channel interrupt notification register */
#define GTM_MCS5_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01351C4u)

/** \brief  351C0, MCS Channel Program Counter Register */
#define GTM_MCS5_CH3_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01351C0u)

/** \brief  35180, MCS Channel Program Counter Register 0 */
#define GTM_MCS5_CH3_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0135180u)

/** \brief  35184, MCS Channel Program Counter Register 1 */
#define GTM_MCS5_CH3_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0135184u)

/** \brief  35188, MCS Channel Program Counter Register 2 */
#define GTM_MCS5_CH3_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0135188u)

/** \brief  3518C, MCS Channel Program Counter Register 3 */
#define GTM_MCS5_CH3_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013518Cu)

/** \brief  35190, MCS Channel Program Counter Register 4 */
#define GTM_MCS5_CH3_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0135190u)

/** \brief  35194, MCS Channel Program Counter Register 5 */
#define GTM_MCS5_CH3_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0135194u)

/** \brief  35198, MCS Channel Program Counter Register 6 */
#define GTM_MCS5_CH3_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0135198u)

/** \brief  3519C, MCS Channel Program Counter Register 7 */
#define GTM_MCS5_CH3_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013519Cu)

/** \brief  35224, MCS Channel ACB Register */
#define GTM_MCS5_CH4_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0135224u)

/** \brief  35220, MCS Channel Control Register */
#define GTM_MCS5_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0135220u)

/** \brief  35254, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS5_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0135254u)

/** \brief  35248, MCS Channel Interrupt Enable Register */
#define GTM_MCS5_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0135248u)

/** \brief  3524C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS5_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013524Cu)

/** \brief  35250, MCS IRQ Mode Configuration Register */
#define GTM_MCS5_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0135250u)

/** \brief  35244, MCS Channel interrupt notification register */
#define GTM_MCS5_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0135244u)

/** \brief  35240, MCS Channel Program Counter Register */
#define GTM_MCS5_CH4_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0135240u)

/** \brief  35200, MCS Channel Program Counter Register 0 */
#define GTM_MCS5_CH4_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0135200u)

/** \brief  35204, MCS Channel Program Counter Register 1 */
#define GTM_MCS5_CH4_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0135204u)

/** \brief  35208, MCS Channel Program Counter Register 2 */
#define GTM_MCS5_CH4_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0135208u)

/** \brief  3520C, MCS Channel Program Counter Register 3 */
#define GTM_MCS5_CH4_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013520Cu)

/** \brief  35210, MCS Channel Program Counter Register 4 */
#define GTM_MCS5_CH4_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0135210u)

/** \brief  35214, MCS Channel Program Counter Register 5 */
#define GTM_MCS5_CH4_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0135214u)

/** \brief  35218, MCS Channel Program Counter Register 6 */
#define GTM_MCS5_CH4_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0135218u)

/** \brief  3521C, MCS Channel Program Counter Register 7 */
#define GTM_MCS5_CH4_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013521Cu)

/** \brief  352A4, MCS Channel ACB Register */
#define GTM_MCS5_CH5_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01352A4u)

/** \brief  352A0, MCS Channel Control Register */
#define GTM_MCS5_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01352A0u)

/** \brief  352D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS5_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01352D4u)

/** \brief  352C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS5_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01352C8u)

/** \brief  352CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS5_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01352CCu)

/** \brief  352D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS5_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01352D0u)

/** \brief  352C4, MCS Channel interrupt notification register */
#define GTM_MCS5_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01352C4u)

/** \brief  352C0, MCS Channel Program Counter Register */
#define GTM_MCS5_CH5_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01352C0u)

/** \brief  35280, MCS Channel Program Counter Register 0 */
#define GTM_MCS5_CH5_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0135280u)

/** \brief  35284, MCS Channel Program Counter Register 1 */
#define GTM_MCS5_CH5_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0135284u)

/** \brief  35288, MCS Channel Program Counter Register 2 */
#define GTM_MCS5_CH5_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0135288u)

/** \brief  3528C, MCS Channel Program Counter Register 3 */
#define GTM_MCS5_CH5_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013528Cu)

/** \brief  35290, MCS Channel Program Counter Register 4 */
#define GTM_MCS5_CH5_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0135290u)

/** \brief  35294, MCS Channel Program Counter Register 5 */
#define GTM_MCS5_CH5_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0135294u)

/** \brief  35298, MCS Channel Program Counter Register 6 */
#define GTM_MCS5_CH5_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0135298u)

/** \brief  3529C, MCS Channel Program Counter Register 7 */
#define GTM_MCS5_CH5_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013529Cu)

/** \brief  35324, MCS Channel ACB Register */
#define GTM_MCS5_CH6_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF0135324u)

/** \brief  35320, MCS Channel Control Register */
#define GTM_MCS5_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF0135320u)

/** \brief  35354, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS5_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF0135354u)

/** \brief  35348, MCS Channel Interrupt Enable Register */
#define GTM_MCS5_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF0135348u)

/** \brief  3534C, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS5_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF013534Cu)

/** \brief  35350, MCS IRQ Mode Configuration Register */
#define GTM_MCS5_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF0135350u)

/** \brief  35344, MCS Channel interrupt notification register */
#define GTM_MCS5_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF0135344u)

/** \brief  35340, MCS Channel Program Counter Register */
#define GTM_MCS5_CH6_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF0135340u)

/** \brief  35300, MCS Channel Program Counter Register 0 */
#define GTM_MCS5_CH6_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0135300u)

/** \brief  35304, MCS Channel Program Counter Register 1 */
#define GTM_MCS5_CH6_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0135304u)

/** \brief  35308, MCS Channel Program Counter Register 2 */
#define GTM_MCS5_CH6_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0135308u)

/** \brief  3530C, MCS Channel Program Counter Register 3 */
#define GTM_MCS5_CH6_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013530Cu)

/** \brief  35310, MCS Channel Program Counter Register 4 */
#define GTM_MCS5_CH6_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0135310u)

/** \brief  35314, MCS Channel Program Counter Register 5 */
#define GTM_MCS5_CH6_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0135314u)

/** \brief  35318, MCS Channel Program Counter Register 6 */
#define GTM_MCS5_CH6_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0135318u)

/** \brief  3531C, MCS Channel Program Counter Register 7 */
#define GTM_MCS5_CH6_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013531Cu)

/** \brief  353A4, MCS Channel ACB Register */
#define GTM_MCS5_CH7_ACB /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_ACB*)0xF01353A4u)

/** \brief  353A0, MCS Channel Control Register */
#define GTM_MCS5_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_CTRL*)0xF01353A0u)

/** \brief  353D4, MCS_Channel Error Interrupt Enable Register */
#define GTM_MCS5_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_EIRQ_EN*)0xF01353D4u)

/** \brief  353C8, MCS Channel Interrupt Enable Register */
#define GTM_MCS5_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_EN*)0xF01353C8u)

/** \brief  353CC, MCS Channel Software Interrupt Generation Register */
#define GTM_MCS5_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_FORCINT*)0xF01353CCu)

/** \brief  353D0, MCS IRQ Mode Configuration Register */
#define GTM_MCS5_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_MODE*)0xF01353D0u)

/** \brief  353C4, MCS Channel interrupt notification register */
#define GTM_MCS5_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_IRQ_NOTIFY*)0xF01353C4u)

/** \brief  353C0, MCS Channel Program Counter Register */
#define GTM_MCS5_CH7_PC /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_PC*)0xF01353C0u)

/** \brief  35380, MCS Channel Program Counter Register 0 */
#define GTM_MCS5_CH7_R0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R0*)0xF0135380u)

/** \brief  35384, MCS Channel Program Counter Register 1 */
#define GTM_MCS5_CH7_R1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R1*)0xF0135384u)

/** \brief  35388, MCS Channel Program Counter Register 2 */
#define GTM_MCS5_CH7_R2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R2*)0xF0135388u)

/** \brief  3538C, MCS Channel Program Counter Register 3 */
#define GTM_MCS5_CH7_R3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R3*)0xF013538Cu)

/** \brief  35390, MCS Channel Program Counter Register 4 */
#define GTM_MCS5_CH7_R4 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R4*)0xF0135390u)

/** \brief  35394, MCS Channel Program Counter Register 5 */
#define GTM_MCS5_CH7_R5 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R5*)0xF0135394u)

/** \brief  35398, MCS Channel Program Counter Register 6 */
#define GTM_MCS5_CH7_R6 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R6*)0xF0135398u)

/** \brief  3539C, MCS Channel Program Counter Register 7 */
#define GTM_MCS5_CH7_R7 /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CH_R7*)0xF013539Cu)

/** \brief  35074, MCS Control Register */
#define GTM_MCS5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_CTRL*)0xF0135074u)

/** \brief  3507C, MCS Error Register */
#define GTM_MCS5_ERR /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_ERR*)0xF013507Cu)

/** \brief  35078, MCS Channel Reset Register */
#define GTM_MCS5_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_MCS_RST*)0xF0135078u)

/** \brief  9FE74, MCS Interrupt Clear Register */
#define GTM_MCSINTCLR /*lint --e(923)*/ (*(volatile Ifx_GTM_MCSINTCLR*)0xF019FE74u)

/** \brief  9FE70, MCS Interrupt Status Register */
#define GTM_MCSINTSTAT /*lint --e(923)*/ (*(volatile Ifx_GTM_MCSINTSTAT*)0xF019FE70u)

/** \brief  184, Monitor Activity Register 0 */
#define GTM_MON_ACTIVITY_0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MON_ACTIVITY_0*)0xF0100184u)

/** \brief  188, Monitor Activity Register 1 */
#define GTM_MON_ACTIVITY_1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MON_ACTIVITY_1*)0xF0100188u)

/** \brief  180, Monitor Status Register */
#define GTM_MON_STATUS /*lint --e(923)*/ (*(volatile Ifx_GTM_MON_STATUS*)0xF0100180u)

/** \brief  9FF64, MSC Input High Control Register */
#define GTM_MSCIN0_INHCON /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCIN_INHCON*)0xF019FF64u)

/** Alias (User Manual Name) for GTM_MSCIN0_INHCON.
* To use register names with standard convension, please use GTM_MSCIN0_INHCON.
*/
#define	GTM_MSC0INHCON	(GTM_MSCIN0_INHCON)

/** \brief  9FF60, MSC Input Low Control Register */
#define GTM_MSCIN0_INLCON /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCIN_INLCON*)0xF019FF60u)

/** Alias (User Manual Name) for GTM_MSCIN0_INLCON.
* To use register names with standard convension, please use GTM_MSCIN0_INLCON.
*/
#define	GTM_MSC0INLCON	(GTM_MSCIN0_INLCON)

/** \brief  9FF6C, MSC Input High Control Register */
#define GTM_MSCIN1_INHCON /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCIN_INHCON*)0xF019FF6Cu)

/** Alias (User Manual Name) for GTM_MSCIN1_INHCON.
* To use register names with standard convension, please use GTM_MSCIN1_INHCON.
*/
#define	GTM_MSC1INHCON	(GTM_MSCIN1_INHCON)

/** \brief  9FF68, MSC Input Low Control Register */
#define GTM_MSCIN1_INLCON /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCIN_INLCON*)0xF019FF68u)

/** Alias (User Manual Name) for GTM_MSCIN1_INLCON.
* To use register names with standard convension, please use GTM_MSCIN1_INLCON.
*/
#define	GTM_MSC1INLCON	(GTM_MSCIN1_INLCON)

/** \brief  9FF74, MSC Input High Control Register */
#define GTM_MSCIN2_INHCON /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCIN_INHCON*)0xF019FF74u)

/** Alias (User Manual Name) for GTM_MSCIN2_INHCON.
* To use register names with standard convension, please use GTM_MSCIN2_INHCON.
*/
#define	GTM_MSC2INHCON	(GTM_MSCIN2_INHCON)

/** \brief  9FF70, MSC Input Low Control Register */
#define GTM_MSCIN2_INLCON /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCIN_INLCON*)0xF019FF70u)

/** Alias (User Manual Name) for GTM_MSCIN2_INLCON.
* To use register names with standard convension, please use GTM_MSCIN2_INLCON.
*/
#define	GTM_MSC2INLCON	(GTM_MSCIN2_INLCON)

/** \brief  9FF00, MSC Set Control 0 Register */
#define GTM_MSCSET_1S0_CON0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF00u)

/** Alias (User Manual Name) for GTM_MSCSET_1S0_CON0.
* To use register names with standard convension, please use GTM_MSCSET_1S0_CON0.
*/
#define	GTM_MSCSET1CON0	(GTM_MSCSET_1S0_CON0)

/** \brief  9FF04, MSC Set Control 1 Register */
#define GTM_MSCSET_1S0_CON1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF04u)

/** Alias (User Manual Name) for GTM_MSCSET_1S0_CON1.
* To use register names with standard convension, please use GTM_MSCSET_1S0_CON1.
*/
#define	GTM_MSCSET1CON1	(GTM_MSCSET_1S0_CON1)

/** \brief  9FF08, MSC Set Control 2 Register */
#define GTM_MSCSET_1S0_CON2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF08u)

/** Alias (User Manual Name) for GTM_MSCSET_1S0_CON2.
* To use register names with standard convension, please use GTM_MSCSET_1S0_CON2.
*/
#define	GTM_MSCSET1CON2	(GTM_MSCSET_1S0_CON2)

/** \brief  9FF0C, MSC Set Control 3 Register */
#define GTM_MSCSET_1S0_CON3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF0Cu)

/** Alias (User Manual Name) for GTM_MSCSET_1S0_CON3.
* To use register names with standard convension, please use GTM_MSCSET_1S0_CON3.
*/
#define	GTM_MSCSET1CON3	(GTM_MSCSET_1S0_CON3)

/** \brief  9FF10, MSC Set Control 0 Register */
#define GTM_MSCSET_1S1_CON0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF10u)

/** Alias (User Manual Name) for GTM_MSCSET_1S1_CON0.
* To use register names with standard convension, please use GTM_MSCSET_1S1_CON0.
*/
#define	GTM_MSCSET2CON0	(GTM_MSCSET_1S1_CON0)

/** \brief  9FF14, MSC Set Control 1 Register */
#define GTM_MSCSET_1S1_CON1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF14u)

/** Alias (User Manual Name) for GTM_MSCSET_1S1_CON1.
* To use register names with standard convension, please use GTM_MSCSET_1S1_CON1.
*/
#define	GTM_MSCSET2CON1	(GTM_MSCSET_1S1_CON1)

/** \brief  9FF18, MSC Set Control 2 Register */
#define GTM_MSCSET_1S1_CON2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF18u)

/** Alias (User Manual Name) for GTM_MSCSET_1S1_CON2.
* To use register names with standard convension, please use GTM_MSCSET_1S1_CON2.
*/
#define	GTM_MSCSET2CON2	(GTM_MSCSET_1S1_CON2)

/** \brief  9FF1C, MSC Set Control 3 Register */
#define GTM_MSCSET_1S1_CON3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF1Cu)

/** Alias (User Manual Name) for GTM_MSCSET_1S1_CON3.
* To use register names with standard convension, please use GTM_MSCSET_1S1_CON3.
*/
#define	GTM_MSCSET2CON3	(GTM_MSCSET_1S1_CON3)

/** \brief  9FF20, MSC Set Control 0 Register */
#define GTM_MSCSET_1S2_CON0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF20u)

/** Alias (User Manual Name) for GTM_MSCSET_1S2_CON0.
* To use register names with standard convension, please use GTM_MSCSET_1S2_CON0.
*/
#define	GTM_MSCSET3CON0	(GTM_MSCSET_1S2_CON0)

/** \brief  9FF24, MSC Set Control 1 Register */
#define GTM_MSCSET_1S2_CON1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF24u)

/** Alias (User Manual Name) for GTM_MSCSET_1S2_CON1.
* To use register names with standard convension, please use GTM_MSCSET_1S2_CON1.
*/
#define	GTM_MSCSET3CON1	(GTM_MSCSET_1S2_CON1)

/** \brief  9FF28, MSC Set Control 2 Register */
#define GTM_MSCSET_1S2_CON2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF28u)

/** Alias (User Manual Name) for GTM_MSCSET_1S2_CON2.
* To use register names with standard convension, please use GTM_MSCSET_1S2_CON2.
*/
#define	GTM_MSCSET3CON2	(GTM_MSCSET_1S2_CON2)

/** \brief  9FF2C, MSC Set Control 3 Register */
#define GTM_MSCSET_1S2_CON3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF2Cu)

/** Alias (User Manual Name) for GTM_MSCSET_1S2_CON3.
* To use register names with standard convension, please use GTM_MSCSET_1S2_CON3.
*/
#define	GTM_MSCSET3CON3	(GTM_MSCSET_1S2_CON3)

/** \brief  9FF30, MSC Set Control 0 Register */
#define GTM_MSCSET_1S3_CON0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF30u)

/** Alias (User Manual Name) for GTM_MSCSET_1S3_CON0.
* To use register names with standard convension, please use GTM_MSCSET_1S3_CON0.
*/
#define	GTM_MSCSET4CON0	(GTM_MSCSET_1S3_CON0)

/** \brief  9FF34, MSC Set Control 1 Register */
#define GTM_MSCSET_1S3_CON1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF34u)

/** Alias (User Manual Name) for GTM_MSCSET_1S3_CON1.
* To use register names with standard convension, please use GTM_MSCSET_1S3_CON1.
*/
#define	GTM_MSCSET4CON1	(GTM_MSCSET_1S3_CON1)

/** \brief  9FF38, MSC Set Control 2 Register */
#define GTM_MSCSET_1S3_CON2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF38u)

/** Alias (User Manual Name) for GTM_MSCSET_1S3_CON2.
* To use register names with standard convension, please use GTM_MSCSET_1S3_CON2.
*/
#define	GTM_MSCSET4CON2	(GTM_MSCSET_1S3_CON2)

/** \brief  9FF3C, MSC Set Control 3 Register */
#define GTM_MSCSET_1S3_CON3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF3Cu)

/** Alias (User Manual Name) for GTM_MSCSET_1S3_CON3.
* To use register names with standard convension, please use GTM_MSCSET_1S3_CON3.
*/
#define	GTM_MSCSET4CON3	(GTM_MSCSET_1S3_CON3)

/** \brief  9FF40, MSC Set Control 0 Register */
#define GTM_MSCSET_1S4_CON0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF40u)

/** Alias (User Manual Name) for GTM_MSCSET_1S4_CON0.
* To use register names with standard convension, please use GTM_MSCSET_1S4_CON0.
*/
#define	GTM_MSCSET5CON0	(GTM_MSCSET_1S4_CON0)

/** \brief  9FF44, MSC Set Control 1 Register */
#define GTM_MSCSET_1S4_CON1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF44u)

/** Alias (User Manual Name) for GTM_MSCSET_1S4_CON1.
* To use register names with standard convension, please use GTM_MSCSET_1S4_CON1.
*/
#define	GTM_MSCSET5CON1	(GTM_MSCSET_1S4_CON1)

/** \brief  9FF48, MSC Set Control 2 Register */
#define GTM_MSCSET_1S4_CON2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF48u)

/** Alias (User Manual Name) for GTM_MSCSET_1S4_CON2.
* To use register names with standard convension, please use GTM_MSCSET_1S4_CON2.
*/
#define	GTM_MSCSET5CON2	(GTM_MSCSET_1S4_CON2)

/** \brief  9FF4C, MSC Set Control 3 Register */
#define GTM_MSCSET_1S4_CON3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF4Cu)

/** Alias (User Manual Name) for GTM_MSCSET_1S4_CON3.
* To use register names with standard convension, please use GTM_MSCSET_1S4_CON3.
*/
#define	GTM_MSCSET5CON3	(GTM_MSCSET_1S4_CON3)

/** \brief  9FF50, MSC Set Control 0 Register */
#define GTM_MSCSET_1S5_CON0 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON0*)0xF019FF50u)

/** Alias (User Manual Name) for GTM_MSCSET_1S5_CON0.
* To use register names with standard convension, please use GTM_MSCSET_1S5_CON0.
*/
#define	GTM_MSCSET6CON0	(GTM_MSCSET_1S5_CON0)

/** \brief  9FF54, MSC Set Control 1 Register */
#define GTM_MSCSET_1S5_CON1 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON1*)0xF019FF54u)

/** Alias (User Manual Name) for GTM_MSCSET_1S5_CON1.
* To use register names with standard convension, please use GTM_MSCSET_1S5_CON1.
*/
#define	GTM_MSCSET6CON1	(GTM_MSCSET_1S5_CON1)

/** \brief  9FF58, MSC Set Control 2 Register */
#define GTM_MSCSET_1S5_CON2 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON2*)0xF019FF58u)

/** Alias (User Manual Name) for GTM_MSCSET_1S5_CON2.
* To use register names with standard convension, please use GTM_MSCSET_1S5_CON2.
*/
#define	GTM_MSCSET6CON2	(GTM_MSCSET_1S5_CON2)

/** \brief  9FF5C, MSC Set Control 3 Register */
#define GTM_MSCSET_1S5_CON3 /*lint --e(923)*/ (*(volatile Ifx_GTM_MSCSET_CON3*)0xF019FF5Cu)

/** Alias (User Manual Name) for GTM_MSCSET_1S5_CON3.
* To use register names with standard convension, please use GTM_MSCSET_1S5_CON3.
*/
#define	GTM_MSCSET6CON3	(GTM_MSCSET_1S5_CON3)

/** \brief  9FDE8, OCDS Control and Status */
#define GTM_OCS /*lint --e(923)*/ (*(volatile Ifx_GTM_OCS*)0xF019FDE8u)

/** \brief  9FDDC, OCDS Debug Access Register */
#define GTM_ODA /*lint --e(923)*/ (*(volatile Ifx_GTM_ODA*)0xF019FDDCu)

/** \brief  9FDC4, OCDS TBU0 Trigger Register */
#define GTM_OTBU0T /*lint --e(923)*/ (*(volatile Ifx_GTM_OTBU0T*)0xF019FDC4u)

/** \brief  9FDC8, OCDS TBU1 Trigger Register */
#define GTM_OTBU1T /*lint --e(923)*/ (*(volatile Ifx_GTM_OTBU1T*)0xF019FDC8u)

/** \brief  9FDCC, OCDS TBU2 Trigger Register */
#define GTM_OTBU2T /*lint --e(923)*/ (*(volatile Ifx_GTM_OTBU2T*)0xF019FDCCu)

/** \brief  9FDD4, OCDS Trigger Set Control 0 Register */
#define GTM_OTSC0 /*lint --e(923)*/ (*(volatile Ifx_GTM_OTSC0*)0xF019FDD4u)

/** \brief  9FDD8, OCDS Trigger Set Control 1 Register */
#define GTM_OTSC1 /*lint --e(923)*/ (*(volatile Ifx_GTM_OTSC1*)0xF019FDD8u)

/** \brief  9FDD0, OCDS Trigger Set Select Register */
#define GTM_OTSS /*lint --e(923)*/ (*(volatile Ifx_GTM_OTSS*)0xF019FDD0u)

/** \brief  0, GTM Version Control Register */
#define GTM_REV /*lint --e(923)*/ (*(volatile Ifx_GTM_REV*)0xF0100000u)

/** \brief  4, GTM Global Reset Register */
#define GTM_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_RST*)0xF0100004u)

/** \brief  844, SPE Revolution Compare Register */
#define GTM_SPE0_CMP /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CMP*)0xF0100844u)

/** \brief  840, SPE Revolution Counter Register */
#define GTM_SPE0_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CNT*)0xF0100840u)

/** \brief  800, SPE Control Status Register */
#define GTM_SPE0_CTRL_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CTRL_STAT*)0xF0100800u)

/** \brief  83C, SPE Error Interrupt Enable Register */
#define GTM_SPE0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_EIRQ_EN*)0xF010083Cu)

/** \brief  830, SPE Interrupt Enable Register */
#define GTM_SPE0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_EN*)0xF0100830u)

/** \brief  834, SPE Interrupt Generation by Software */
#define GTM_SPE0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_FORCINT*)0xF0100834u)

/** \brief  838, SPE IRQ Mode Configuration Register */
#define GTM_SPE0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_MODE*)0xF0100838u)

/** \brief  82C, SPE Interrupt Notification Register */
#define GTM_SPE0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_NOTIFY*)0xF010082Cu)

/** \brief  828, SPE Output Control Register */
#define GTM_SPE0_OUT_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_CTRL*)0xF0100828u)

/** \brief  808, SPE Output Definition Register 0 */
#define GTM_SPE0_OUT_PAT0 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100808u)

/** \brief  80C, SPE Output Definition Register 0 */
#define GTM_SPE0_OUT_PAT1 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010080Cu)

/** \brief  810, SPE Output Definition Register 0 */
#define GTM_SPE0_OUT_PAT2 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100810u)

/** \brief  814, SPE Output Definition Register 0 */
#define GTM_SPE0_OUT_PAT3 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100814u)

/** \brief  818, SPE Output Definition Register 0 */
#define GTM_SPE0_OUT_PAT4 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100818u)

/** \brief  81C, SPE Output Definition Register 0 */
#define GTM_SPE0_OUT_PAT5 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010081Cu)

/** \brief  820, SPE Output Definition Register 0 */
#define GTM_SPE0_OUT_PAT6 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100820u)

/** \brief  824, SPE Output Definition Register 0 */
#define GTM_SPE0_OUT_PAT7 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100824u)

/** \brief  804, SPE Input Pattern Definition Register */
#define GTM_SPE0_PAT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_PAT*)0xF0100804u)

/** \brief  8C4, SPE Revolution Compare Register */
#define GTM_SPE1_CMP /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CMP*)0xF01008C4u)

/** \brief  8C0, SPE Revolution Counter Register */
#define GTM_SPE1_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CNT*)0xF01008C0u)

/** \brief  880, SPE Control Status Register */
#define GTM_SPE1_CTRL_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CTRL_STAT*)0xF0100880u)

/** \brief  8BC, SPE Error Interrupt Enable Register */
#define GTM_SPE1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_EIRQ_EN*)0xF01008BCu)

/** \brief  8B0, SPE Interrupt Enable Register */
#define GTM_SPE1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_EN*)0xF01008B0u)

/** \brief  8B4, SPE Interrupt Generation by Software */
#define GTM_SPE1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_FORCINT*)0xF01008B4u)

/** \brief  8B8, SPE IRQ Mode Configuration Register */
#define GTM_SPE1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_MODE*)0xF01008B8u)

/** \brief  8AC, SPE Interrupt Notification Register */
#define GTM_SPE1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_NOTIFY*)0xF01008ACu)

/** \brief  8A8, SPE Output Control Register */
#define GTM_SPE1_OUT_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_CTRL*)0xF01008A8u)

/** \brief  888, SPE Output Definition Register 0 */
#define GTM_SPE1_OUT_PAT0 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100888u)

/** \brief  88C, SPE Output Definition Register 0 */
#define GTM_SPE1_OUT_PAT1 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010088Cu)

/** \brief  890, SPE Output Definition Register 0 */
#define GTM_SPE1_OUT_PAT2 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100890u)

/** \brief  894, SPE Output Definition Register 0 */
#define GTM_SPE1_OUT_PAT3 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100894u)

/** \brief  898, SPE Output Definition Register 0 */
#define GTM_SPE1_OUT_PAT4 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100898u)

/** \brief  89C, SPE Output Definition Register 0 */
#define GTM_SPE1_OUT_PAT5 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010089Cu)

/** \brief  8A0, SPE Output Definition Register 0 */
#define GTM_SPE1_OUT_PAT6 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF01008A0u)

/** \brief  8A4, SPE Output Definition Register 0 */
#define GTM_SPE1_OUT_PAT7 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF01008A4u)

/** \brief  884, SPE Input Pattern Definition Register */
#define GTM_SPE1_PAT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_PAT*)0xF0100884u)

/** \brief  944, SPE Revolution Compare Register */
#define GTM_SPE2_CMP /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CMP*)0xF0100944u)

/** \brief  940, SPE Revolution Counter Register */
#define GTM_SPE2_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CNT*)0xF0100940u)

/** \brief  900, SPE Control Status Register */
#define GTM_SPE2_CTRL_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CTRL_STAT*)0xF0100900u)

/** \brief  93C, SPE Error Interrupt Enable Register */
#define GTM_SPE2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_EIRQ_EN*)0xF010093Cu)

/** \brief  930, SPE Interrupt Enable Register */
#define GTM_SPE2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_EN*)0xF0100930u)

/** \brief  934, SPE Interrupt Generation by Software */
#define GTM_SPE2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_FORCINT*)0xF0100934u)

/** \brief  938, SPE IRQ Mode Configuration Register */
#define GTM_SPE2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_MODE*)0xF0100938u)

/** \brief  92C, SPE Interrupt Notification Register */
#define GTM_SPE2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_NOTIFY*)0xF010092Cu)

/** \brief  928, SPE Output Control Register */
#define GTM_SPE2_OUT_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_CTRL*)0xF0100928u)

/** \brief  908, SPE Output Definition Register 0 */
#define GTM_SPE2_OUT_PAT0 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100908u)

/** \brief  90C, SPE Output Definition Register 0 */
#define GTM_SPE2_OUT_PAT1 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010090Cu)

/** \brief  910, SPE Output Definition Register 0 */
#define GTM_SPE2_OUT_PAT2 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100910u)

/** \brief  914, SPE Output Definition Register 0 */
#define GTM_SPE2_OUT_PAT3 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100914u)

/** \brief  918, SPE Output Definition Register 0 */
#define GTM_SPE2_OUT_PAT4 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100918u)

/** \brief  91C, SPE Output Definition Register 0 */
#define GTM_SPE2_OUT_PAT5 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010091Cu)

/** \brief  920, SPE Output Definition Register 0 */
#define GTM_SPE2_OUT_PAT6 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100920u)

/** \brief  924, SPE Output Definition Register 0 */
#define GTM_SPE2_OUT_PAT7 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100924u)

/** \brief  904, SPE Input Pattern Definition Register */
#define GTM_SPE2_PAT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_PAT*)0xF0100904u)

/** \brief  9C4, SPE Revolution Compare Register */
#define GTM_SPE3_CMP /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CMP*)0xF01009C4u)

/** \brief  9C0, SPE Revolution Counter Register */
#define GTM_SPE3_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CNT*)0xF01009C0u)

/** \brief  980, SPE Control Status Register */
#define GTM_SPE3_CTRL_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_CTRL_STAT*)0xF0100980u)

/** \brief  9BC, SPE Error Interrupt Enable Register */
#define GTM_SPE3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_EIRQ_EN*)0xF01009BCu)

/** \brief  9B0, SPE Interrupt Enable Register */
#define GTM_SPE3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_EN*)0xF01009B0u)

/** \brief  9B4, SPE Interrupt Generation by Software */
#define GTM_SPE3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_FORCINT*)0xF01009B4u)

/** \brief  9B8, SPE IRQ Mode Configuration Register */
#define GTM_SPE3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_MODE*)0xF01009B8u)

/** \brief  9AC, SPE Interrupt Notification Register */
#define GTM_SPE3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_IRQ_NOTIFY*)0xF01009ACu)

/** \brief  9A8, SPE Output Control Register */
#define GTM_SPE3_OUT_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_CTRL*)0xF01009A8u)

/** \brief  988, SPE Output Definition Register 0 */
#define GTM_SPE3_OUT_PAT0 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100988u)

/** \brief  98C, SPE Output Definition Register 0 */
#define GTM_SPE3_OUT_PAT1 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010098Cu)

/** \brief  990, SPE Output Definition Register 0 */
#define GTM_SPE3_OUT_PAT2 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100990u)

/** \brief  994, SPE Output Definition Register 0 */
#define GTM_SPE3_OUT_PAT3 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100994u)

/** \brief  998, SPE Output Definition Register 0 */
#define GTM_SPE3_OUT_PAT4 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF0100998u)

/** \brief  99C, SPE Output Definition Register 0 */
#define GTM_SPE3_OUT_PAT5 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF010099Cu)

/** \brief  9A0, SPE Output Definition Register 0 */
#define GTM_SPE3_OUT_PAT6 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF01009A0u)

/** \brief  9A4, SPE Output Definition Register 0 */
#define GTM_SPE3_OUT_PAT7 /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_OUT_PAT*)0xF01009A4u)

/** \brief  984, SPE Input Pattern Definition Register */
#define GTM_SPE3_PAT /*lint --e(923)*/ (*(volatile Ifx_GTM_SPE_PAT*)0xF0100984u)

/** \brief  108, TBU Channel 0 Base Register */
#define GTM_TBU_CH0_BASE /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CH0_BASE*)0xF0100108u)

/** \brief  104, TBU Channel 0 Control Register */
#define GTM_TBU_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CH0_CTRL*)0xF0100104u)

/** \brief  110, TBU Channel 1 Base Register */
#define GTM_TBU_CH1_BASE /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CH1_BASE*)0xF0100110u)

/** \brief  10C, TBU Channel 1 Control Register */
#define GTM_TBU_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CH1_CTRL*)0xF010010Cu)

/** \brief  118, TBU Channel 2 Base Register */
#define GTM_TBU_CH2_BASE /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CH2_BASE*)0xF0100118u)

/** \brief  114, TBU Channel 2 Control Register */
#define GTM_TBU_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CH2_CTRL*)0xF0100114u)

/** \brief  100, TBU Global Channel Enable Register */
#define GTM_TBU_CHEN /*lint --e(923)*/ (*(volatile Ifx_GTM_TBU_CHEN*)0xF0100100u)

/** \brief  1008, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH0_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101008u)

/** \brief  1010, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH0_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101010u)

/** \brief  1024, TIM Channel Control Register */
#define GTM_TIM0_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101024u)

/** \brief  100C, TIM Channel Edge Counter Register */
#define GTM_TIM0_CH0_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010100Cu)

/** \brief  1028, TIM Channel External Capture Control Register */
#define GTM_TIM0_CH0_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101028u)

/** \brief  103C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM0_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010103Cu)

/** \brief  1020, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH0_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101020u)

/** \brief  101C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH0_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010101Cu)

/** \brief  1000, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH0_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101000u)

/** \brief  1004, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH0_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101004u)

/** \brief  1030, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101030u)

/** \brief  1034, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101034u)

/** \brief  1038, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101038u)

/** \brief  102C, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010102Cu)

/** \brief  1014, TIM Channel TDUC Register */
#define GTM_TIM0_CH0_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101014u)

/** \brief  1018, TIM Channel TDUV Register */
#define GTM_TIM0_CH0_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101018u)

/** \brief  1088, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH1_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101088u)

/** \brief  1090, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH1_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101090u)

/** \brief  10A4, TIM Channel Control Register */
#define GTM_TIM0_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01010A4u)

/** \brief  108C, TIM Channel Edge Counter Register */
#define GTM_TIM0_CH1_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010108Cu)

/** \brief  10A8, TIM Channel External Capture Control Register */
#define GTM_TIM0_CH1_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01010A8u)

/** \brief  10BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM0_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01010BCu)

/** \brief  10A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH1_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01010A0u)

/** \brief  109C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH1_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010109Cu)

/** \brief  1080, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH1_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101080u)

/** \brief  1084, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH1_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101084u)

/** \brief  10B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01010B0u)

/** \brief  10B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01010B4u)

/** \brief  10B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01010B8u)

/** \brief  10AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01010ACu)

/** \brief  1094, TIM Channel TDUC Register */
#define GTM_TIM0_CH1_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101094u)

/** \brief  1098, TIM Channel TDUV Register */
#define GTM_TIM0_CH1_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101098u)

/** \brief  1108, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH2_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101108u)

/** \brief  1110, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH2_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101110u)

/** \brief  1124, TIM Channel Control Register */
#define GTM_TIM0_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101124u)

/** \brief  110C, TIM Channel Edge Counter Register */
#define GTM_TIM0_CH2_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010110Cu)

/** \brief  1128, TIM Channel External Capture Control Register */
#define GTM_TIM0_CH2_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101128u)

/** \brief  113C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM0_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010113Cu)

/** \brief  1120, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH2_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101120u)

/** \brief  111C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH2_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010111Cu)

/** \brief  1100, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH2_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101100u)

/** \brief  1104, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH2_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101104u)

/** \brief  1130, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101130u)

/** \brief  1134, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101134u)

/** \brief  1138, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101138u)

/** \brief  112C, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010112Cu)

/** \brief  1114, TIM Channel TDUC Register */
#define GTM_TIM0_CH2_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101114u)

/** \brief  1118, TIM Channel TDUV Register */
#define GTM_TIM0_CH2_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101118u)

/** \brief  1188, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH3_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101188u)

/** \brief  1190, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH3_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101190u)

/** \brief  11A4, TIM Channel Control Register */
#define GTM_TIM0_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01011A4u)

/** \brief  118C, TIM Channel Edge Counter Register */
#define GTM_TIM0_CH3_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010118Cu)

/** \brief  11A8, TIM Channel External Capture Control Register */
#define GTM_TIM0_CH3_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01011A8u)

/** \brief  11BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM0_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01011BCu)

/** \brief  11A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH3_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01011A0u)

/** \brief  119C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH3_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010119Cu)

/** \brief  1180, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH3_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101180u)

/** \brief  1184, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH3_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101184u)

/** \brief  11B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01011B0u)

/** \brief  11B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01011B4u)

/** \brief  11B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01011B8u)

/** \brief  11AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01011ACu)

/** \brief  1194, TIM Channel TDUC Register */
#define GTM_TIM0_CH3_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101194u)

/** \brief  1198, TIM Channel TDUV Register */
#define GTM_TIM0_CH3_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101198u)

/** \brief  1208, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH4_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101208u)

/** \brief  1210, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH4_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101210u)

/** \brief  1224, TIM Channel Control Register */
#define GTM_TIM0_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101224u)

/** \brief  120C, TIM Channel Edge Counter Register */
#define GTM_TIM0_CH4_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010120Cu)

/** \brief  1228, TIM Channel External Capture Control Register */
#define GTM_TIM0_CH4_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101228u)

/** \brief  123C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM0_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010123Cu)

/** \brief  1220, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH4_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101220u)

/** \brief  121C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH4_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010121Cu)

/** \brief  1200, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH4_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101200u)

/** \brief  1204, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH4_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101204u)

/** \brief  1230, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101230u)

/** \brief  1234, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101234u)

/** \brief  1238, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101238u)

/** \brief  122C, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010122Cu)

/** \brief  1214, TIM Channel TDUC Register */
#define GTM_TIM0_CH4_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101214u)

/** \brief  1218, TIM Channel TDUV Register */
#define GTM_TIM0_CH4_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101218u)

/** \brief  1288, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH5_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101288u)

/** \brief  1290, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH5_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101290u)

/** \brief  12A4, TIM Channel Control Register */
#define GTM_TIM0_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01012A4u)

/** \brief  128C, TIM Channel Edge Counter Register */
#define GTM_TIM0_CH5_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010128Cu)

/** \brief  12A8, TIM Channel External Capture Control Register */
#define GTM_TIM0_CH5_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01012A8u)

/** \brief  12BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM0_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01012BCu)

/** \brief  12A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH5_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01012A0u)

/** \brief  129C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH5_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010129Cu)

/** \brief  1280, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH5_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101280u)

/** \brief  1284, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH5_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101284u)

/** \brief  12B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01012B0u)

/** \brief  12B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01012B4u)

/** \brief  12B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01012B8u)

/** \brief  12AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01012ACu)

/** \brief  1294, TIM Channel TDUC Register */
#define GTM_TIM0_CH5_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101294u)

/** \brief  1298, TIM Channel TDUV Register */
#define GTM_TIM0_CH5_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101298u)

/** \brief  1308, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH6_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101308u)

/** \brief  1310, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH6_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101310u)

/** \brief  1324, TIM Channel Control Register */
#define GTM_TIM0_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101324u)

/** \brief  130C, TIM Channel Edge Counter Register */
#define GTM_TIM0_CH6_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010130Cu)

/** \brief  1328, TIM Channel External Capture Control Register */
#define GTM_TIM0_CH6_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101328u)

/** \brief  133C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM0_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010133Cu)

/** \brief  1320, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH6_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101320u)

/** \brief  131C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH6_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010131Cu)

/** \brief  1300, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH6_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101300u)

/** \brief  1304, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH6_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101304u)

/** \brief  1330, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101330u)

/** \brief  1334, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101334u)

/** \brief  1338, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101338u)

/** \brief  132C, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010132Cu)

/** \brief  1314, TIM Channel TDUC Register */
#define GTM_TIM0_CH6_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101314u)

/** \brief  1318, TIM Channel TDUV Register */
#define GTM_TIM0_CH6_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101318u)

/** \brief  1388, TIM Channel SMU Counter Register */
#define GTM_TIM0_CH7_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101388u)

/** \brief  1390, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM0_CH7_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101390u)

/** \brief  13A4, TIM Channel Control Register */
#define GTM_TIM0_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01013A4u)

/** \brief  138C, TIM Channel Edge Counter Register */
#define GTM_TIM0_CH7_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010138Cu)

/** \brief  13A8, TIM Channel External Capture Control Register */
#define GTM_TIM0_CH7_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01013A8u)

/** \brief  13BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM0_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01013BCu)

/** \brief  13A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM0_CH7_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01013A0u)

/** \brief  139C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM0_CH7_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010139Cu)

/** \brief  1380, TIM Channel General Purpose 0 Register */
#define GTM_TIM0_CH7_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101380u)

/** \brief  1384, TIM Channel General Purpose 1 Register */
#define GTM_TIM0_CH7_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101384u)

/** \brief  13B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM0_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01013B0u)

/** \brief  13B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM0_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01013B4u)

/** \brief  13B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM0_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01013B8u)

/** \brief  13AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM0_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01013ACu)

/** \brief  1394, TIM Channel TDUC Register */
#define GTM_TIM0_CH7_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101394u)

/** \brief  1398, TIM Channel TDUV Register */
#define GTM_TIM0_CH7_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101398u)

/** \brief  1078, TIM_IN_SRC Long Name */
#define GTM_TIM0_IN_SRC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_IN_SRC*)0xF0101078u)

/** \brief  107C, TIM Global Software Reset Register */
#define GTM_TIM0_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF010107Cu)

/** \brief  1808, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH0_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101808u)

/** \brief  1810, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH0_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101810u)

/** \brief  1824, TIM Channel Control Register */
#define GTM_TIM1_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101824u)

/** \brief  180C, TIM Channel Edge Counter Register */
#define GTM_TIM1_CH0_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010180Cu)

/** \brief  1828, TIM Channel External Capture Control Register */
#define GTM_TIM1_CH0_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101828u)

/** \brief  183C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM1_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010183Cu)

/** \brief  1820, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH0_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101820u)

/** \brief  181C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH0_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010181Cu)

/** \brief  1800, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH0_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101800u)

/** \brief  1804, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH0_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101804u)

/** \brief  1830, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101830u)

/** \brief  1834, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101834u)

/** \brief  1838, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101838u)

/** \brief  182C, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010182Cu)

/** \brief  1814, TIM Channel TDUC Register */
#define GTM_TIM1_CH0_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101814u)

/** \brief  1818, TIM Channel TDUV Register */
#define GTM_TIM1_CH0_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101818u)

/** \brief  1888, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH1_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101888u)

/** \brief  1890, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH1_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101890u)

/** \brief  18A4, TIM Channel Control Register */
#define GTM_TIM1_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01018A4u)

/** \brief  188C, TIM Channel Edge Counter Register */
#define GTM_TIM1_CH1_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010188Cu)

/** \brief  18A8, TIM Channel External Capture Control Register */
#define GTM_TIM1_CH1_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01018A8u)

/** \brief  18BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM1_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01018BCu)

/** \brief  18A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH1_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01018A0u)

/** \brief  189C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH1_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010189Cu)

/** \brief  1880, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH1_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101880u)

/** \brief  1884, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH1_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101884u)

/** \brief  18B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01018B0u)

/** \brief  18B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01018B4u)

/** \brief  18B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01018B8u)

/** \brief  18AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01018ACu)

/** \brief  1894, TIM Channel TDUC Register */
#define GTM_TIM1_CH1_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101894u)

/** \brief  1898, TIM Channel TDUV Register */
#define GTM_TIM1_CH1_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101898u)

/** \brief  1908, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH2_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101908u)

/** \brief  1910, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH2_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101910u)

/** \brief  1924, TIM Channel Control Register */
#define GTM_TIM1_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101924u)

/** \brief  190C, TIM Channel Edge Counter Register */
#define GTM_TIM1_CH2_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010190Cu)

/** \brief  1928, TIM Channel External Capture Control Register */
#define GTM_TIM1_CH2_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101928u)

/** \brief  193C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM1_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010193Cu)

/** \brief  1920, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH2_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101920u)

/** \brief  191C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH2_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010191Cu)

/** \brief  1900, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH2_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101900u)

/** \brief  1904, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH2_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101904u)

/** \brief  1930, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101930u)

/** \brief  1934, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101934u)

/** \brief  1938, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101938u)

/** \brief  192C, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010192Cu)

/** \brief  1914, TIM Channel TDUC Register */
#define GTM_TIM1_CH2_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101914u)

/** \brief  1918, TIM Channel TDUV Register */
#define GTM_TIM1_CH2_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101918u)

/** \brief  1988, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH3_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101988u)

/** \brief  1990, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH3_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101990u)

/** \brief  19A4, TIM Channel Control Register */
#define GTM_TIM1_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01019A4u)

/** \brief  198C, TIM Channel Edge Counter Register */
#define GTM_TIM1_CH3_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010198Cu)

/** \brief  19A8, TIM Channel External Capture Control Register */
#define GTM_TIM1_CH3_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01019A8u)

/** \brief  19BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM1_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01019BCu)

/** \brief  19A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH3_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01019A0u)

/** \brief  199C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH3_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010199Cu)

/** \brief  1980, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH3_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101980u)

/** \brief  1984, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH3_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101984u)

/** \brief  19B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01019B0u)

/** \brief  19B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01019B4u)

/** \brief  19B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01019B8u)

/** \brief  19AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01019ACu)

/** \brief  1994, TIM Channel TDUC Register */
#define GTM_TIM1_CH3_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101994u)

/** \brief  1998, TIM Channel TDUV Register */
#define GTM_TIM1_CH3_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101998u)

/** \brief  1A08, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH4_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101A08u)

/** \brief  1A10, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH4_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101A10u)

/** \brief  1A24, TIM Channel Control Register */
#define GTM_TIM1_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101A24u)

/** \brief  1A0C, TIM Channel Edge Counter Register */
#define GTM_TIM1_CH4_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0101A0Cu)

/** \brief  1A28, TIM Channel External Capture Control Register */
#define GTM_TIM1_CH4_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101A28u)

/** \brief  1A3C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM1_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0101A3Cu)

/** \brief  1A20, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH4_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101A20u)

/** \brief  1A1C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH4_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101A1Cu)

/** \brief  1A00, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH4_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101A00u)

/** \brief  1A04, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH4_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101A04u)

/** \brief  1A30, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101A30u)

/** \brief  1A34, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101A34u)

/** \brief  1A38, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101A38u)

/** \brief  1A2C, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101A2Cu)

/** \brief  1A14, TIM Channel TDUC Register */
#define GTM_TIM1_CH4_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101A14u)

/** \brief  1A18, TIM Channel TDUV Register */
#define GTM_TIM1_CH4_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101A18u)

/** \brief  1A88, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH5_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101A88u)

/** \brief  1A90, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH5_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101A90u)

/** \brief  1AA4, TIM Channel Control Register */
#define GTM_TIM1_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101AA4u)

/** \brief  1A8C, TIM Channel Edge Counter Register */
#define GTM_TIM1_CH5_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0101A8Cu)

/** \brief  1AA8, TIM Channel External Capture Control Register */
#define GTM_TIM1_CH5_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101AA8u)

/** \brief  1ABC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM1_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0101ABCu)

/** \brief  1AA0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH5_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101AA0u)

/** \brief  1A9C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH5_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101A9Cu)

/** \brief  1A80, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH5_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101A80u)

/** \brief  1A84, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH5_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101A84u)

/** \brief  1AB0, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101AB0u)

/** \brief  1AB4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101AB4u)

/** \brief  1AB8, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101AB8u)

/** \brief  1AAC, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101AACu)

/** \brief  1A94, TIM Channel TDUC Register */
#define GTM_TIM1_CH5_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101A94u)

/** \brief  1A98, TIM Channel TDUV Register */
#define GTM_TIM1_CH5_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101A98u)

/** \brief  1B08, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH6_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101B08u)

/** \brief  1B10, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH6_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101B10u)

/** \brief  1B24, TIM Channel Control Register */
#define GTM_TIM1_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101B24u)

/** \brief  1B0C, TIM Channel Edge Counter Register */
#define GTM_TIM1_CH6_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0101B0Cu)

/** \brief  1B28, TIM Channel External Capture Control Register */
#define GTM_TIM1_CH6_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101B28u)

/** \brief  1B3C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM1_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0101B3Cu)

/** \brief  1B20, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH6_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101B20u)

/** \brief  1B1C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH6_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101B1Cu)

/** \brief  1B00, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH6_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101B00u)

/** \brief  1B04, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH6_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101B04u)

/** \brief  1B30, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101B30u)

/** \brief  1B34, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101B34u)

/** \brief  1B38, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101B38u)

/** \brief  1B2C, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101B2Cu)

/** \brief  1B14, TIM Channel TDUC Register */
#define GTM_TIM1_CH6_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101B14u)

/** \brief  1B18, TIM Channel TDUV Register */
#define GTM_TIM1_CH6_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101B18u)

/** \brief  1B88, TIM Channel SMU Counter Register */
#define GTM_TIM1_CH7_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0101B88u)

/** \brief  1B90, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM1_CH7_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0101B90u)

/** \brief  1BA4, TIM Channel Control Register */
#define GTM_TIM1_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0101BA4u)

/** \brief  1B8C, TIM Channel Edge Counter Register */
#define GTM_TIM1_CH7_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0101B8Cu)

/** \brief  1BA8, TIM Channel External Capture Control Register */
#define GTM_TIM1_CH7_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0101BA8u)

/** \brief  1BBC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM1_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0101BBCu)

/** \brief  1BA0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM1_CH7_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0101BA0u)

/** \brief  1B9C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM1_CH7_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0101B9Cu)

/** \brief  1B80, TIM Channel General Purpose 0 Register */
#define GTM_TIM1_CH7_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0101B80u)

/** \brief  1B84, TIM Channel General Purpose 1 Register */
#define GTM_TIM1_CH7_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0101B84u)

/** \brief  1BB0, TIM Channel Interrupt Enable Register */
#define GTM_TIM1_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0101BB0u)

/** \brief  1BB4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM1_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0101BB4u)

/** \brief  1BB8, TIM IRQ Mode Configuration Register */
#define GTM_TIM1_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0101BB8u)

/** \brief  1BAC, TIM Channel Interrupt Notification Register */
#define GTM_TIM1_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0101BACu)

/** \brief  1B94, TIM Channel TDUC Register */
#define GTM_TIM1_CH7_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0101B94u)

/** \brief  1B98, TIM Channel TDUV Register */
#define GTM_TIM1_CH7_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0101B98u)

/** \brief  1878, TIM_IN_SRC Long Name */
#define GTM_TIM1_IN_SRC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_IN_SRC*)0xF0101878u)

/** \brief  187C, TIM Global Software Reset Register */
#define GTM_TIM1_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF010187Cu)

/** \brief  2008, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH0_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102008u)

/** \brief  2010, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH0_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102010u)

/** \brief  2024, TIM Channel Control Register */
#define GTM_TIM2_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102024u)

/** \brief  200C, TIM Channel Edge Counter Register */
#define GTM_TIM2_CH0_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010200Cu)

/** \brief  2028, TIM Channel External Capture Control Register */
#define GTM_TIM2_CH0_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102028u)

/** \brief  203C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM2_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010203Cu)

/** \brief  2020, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH0_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102020u)

/** \brief  201C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH0_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010201Cu)

/** \brief  2000, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH0_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102000u)

/** \brief  2004, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH0_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102004u)

/** \brief  2030, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102030u)

/** \brief  2034, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102034u)

/** \brief  2038, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102038u)

/** \brief  202C, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010202Cu)

/** \brief  2014, TIM Channel TDUC Register */
#define GTM_TIM2_CH0_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102014u)

/** \brief  2018, TIM Channel TDUV Register */
#define GTM_TIM2_CH0_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102018u)

/** \brief  2088, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH1_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102088u)

/** \brief  2090, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH1_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102090u)

/** \brief  20A4, TIM Channel Control Register */
#define GTM_TIM2_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01020A4u)

/** \brief  208C, TIM Channel Edge Counter Register */
#define GTM_TIM2_CH1_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010208Cu)

/** \brief  20A8, TIM Channel External Capture Control Register */
#define GTM_TIM2_CH1_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01020A8u)

/** \brief  20BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM2_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01020BCu)

/** \brief  20A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH1_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01020A0u)

/** \brief  209C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH1_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010209Cu)

/** \brief  2080, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH1_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102080u)

/** \brief  2084, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH1_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102084u)

/** \brief  20B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01020B0u)

/** \brief  20B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01020B4u)

/** \brief  20B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01020B8u)

/** \brief  20AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01020ACu)

/** \brief  2094, TIM Channel TDUC Register */
#define GTM_TIM2_CH1_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102094u)

/** \brief  2098, TIM Channel TDUV Register */
#define GTM_TIM2_CH1_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102098u)

/** \brief  2108, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH2_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102108u)

/** \brief  2110, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH2_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102110u)

/** \brief  2124, TIM Channel Control Register */
#define GTM_TIM2_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102124u)

/** \brief  210C, TIM Channel Edge Counter Register */
#define GTM_TIM2_CH2_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010210Cu)

/** \brief  2128, TIM Channel External Capture Control Register */
#define GTM_TIM2_CH2_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102128u)

/** \brief  213C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM2_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010213Cu)

/** \brief  2120, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH2_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102120u)

/** \brief  211C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH2_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010211Cu)

/** \brief  2100, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH2_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102100u)

/** \brief  2104, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH2_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102104u)

/** \brief  2130, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102130u)

/** \brief  2134, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102134u)

/** \brief  2138, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102138u)

/** \brief  212C, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010212Cu)

/** \brief  2114, TIM Channel TDUC Register */
#define GTM_TIM2_CH2_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102114u)

/** \brief  2118, TIM Channel TDUV Register */
#define GTM_TIM2_CH2_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102118u)

/** \brief  2188, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH3_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102188u)

/** \brief  2190, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH3_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102190u)

/** \brief  21A4, TIM Channel Control Register */
#define GTM_TIM2_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01021A4u)

/** \brief  218C, TIM Channel Edge Counter Register */
#define GTM_TIM2_CH3_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010218Cu)

/** \brief  21A8, TIM Channel External Capture Control Register */
#define GTM_TIM2_CH3_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01021A8u)

/** \brief  21BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM2_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01021BCu)

/** \brief  21A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH3_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01021A0u)

/** \brief  219C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH3_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010219Cu)

/** \brief  2180, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH3_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102180u)

/** \brief  2184, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH3_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102184u)

/** \brief  21B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01021B0u)

/** \brief  21B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01021B4u)

/** \brief  21B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01021B8u)

/** \brief  21AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01021ACu)

/** \brief  2194, TIM Channel TDUC Register */
#define GTM_TIM2_CH3_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102194u)

/** \brief  2198, TIM Channel TDUV Register */
#define GTM_TIM2_CH3_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102198u)

/** \brief  2208, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH4_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102208u)

/** \brief  2210, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH4_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102210u)

/** \brief  2224, TIM Channel Control Register */
#define GTM_TIM2_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102224u)

/** \brief  220C, TIM Channel Edge Counter Register */
#define GTM_TIM2_CH4_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010220Cu)

/** \brief  2228, TIM Channel External Capture Control Register */
#define GTM_TIM2_CH4_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102228u)

/** \brief  223C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM2_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010223Cu)

/** \brief  2220, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH4_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102220u)

/** \brief  221C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH4_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010221Cu)

/** \brief  2200, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH4_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102200u)

/** \brief  2204, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH4_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102204u)

/** \brief  2230, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102230u)

/** \brief  2234, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102234u)

/** \brief  2238, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102238u)

/** \brief  222C, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010222Cu)

/** \brief  2214, TIM Channel TDUC Register */
#define GTM_TIM2_CH4_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102214u)

/** \brief  2218, TIM Channel TDUV Register */
#define GTM_TIM2_CH4_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102218u)

/** \brief  2288, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH5_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102288u)

/** \brief  2290, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH5_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102290u)

/** \brief  22A4, TIM Channel Control Register */
#define GTM_TIM2_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01022A4u)

/** \brief  228C, TIM Channel Edge Counter Register */
#define GTM_TIM2_CH5_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010228Cu)

/** \brief  22A8, TIM Channel External Capture Control Register */
#define GTM_TIM2_CH5_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01022A8u)

/** \brief  22BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM2_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01022BCu)

/** \brief  22A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH5_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01022A0u)

/** \brief  229C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH5_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010229Cu)

/** \brief  2280, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH5_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102280u)

/** \brief  2284, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH5_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102284u)

/** \brief  22B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01022B0u)

/** \brief  22B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01022B4u)

/** \brief  22B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01022B8u)

/** \brief  22AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01022ACu)

/** \brief  2294, TIM Channel TDUC Register */
#define GTM_TIM2_CH5_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102294u)

/** \brief  2298, TIM Channel TDUV Register */
#define GTM_TIM2_CH5_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102298u)

/** \brief  2308, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH6_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102308u)

/** \brief  2310, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH6_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102310u)

/** \brief  2324, TIM Channel Control Register */
#define GTM_TIM2_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102324u)

/** \brief  230C, TIM Channel Edge Counter Register */
#define GTM_TIM2_CH6_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010230Cu)

/** \brief  2328, TIM Channel External Capture Control Register */
#define GTM_TIM2_CH6_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102328u)

/** \brief  233C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM2_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010233Cu)

/** \brief  2320, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH6_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102320u)

/** \brief  231C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH6_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010231Cu)

/** \brief  2300, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH6_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102300u)

/** \brief  2304, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH6_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102304u)

/** \brief  2330, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102330u)

/** \brief  2334, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102334u)

/** \brief  2338, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102338u)

/** \brief  232C, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010232Cu)

/** \brief  2314, TIM Channel TDUC Register */
#define GTM_TIM2_CH6_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102314u)

/** \brief  2318, TIM Channel TDUV Register */
#define GTM_TIM2_CH6_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102318u)

/** \brief  2388, TIM Channel SMU Counter Register */
#define GTM_TIM2_CH7_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102388u)

/** \brief  2390, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM2_CH7_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102390u)

/** \brief  23A4, TIM Channel Control Register */
#define GTM_TIM2_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01023A4u)

/** \brief  238C, TIM Channel Edge Counter Register */
#define GTM_TIM2_CH7_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010238Cu)

/** \brief  23A8, TIM Channel External Capture Control Register */
#define GTM_TIM2_CH7_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01023A8u)

/** \brief  23BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM2_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01023BCu)

/** \brief  23A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM2_CH7_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01023A0u)

/** \brief  239C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM2_CH7_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010239Cu)

/** \brief  2380, TIM Channel General Purpose 0 Register */
#define GTM_TIM2_CH7_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102380u)

/** \brief  2384, TIM Channel General Purpose 1 Register */
#define GTM_TIM2_CH7_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102384u)

/** \brief  23B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM2_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01023B0u)

/** \brief  23B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM2_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01023B4u)

/** \brief  23B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM2_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01023B8u)

/** \brief  23AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM2_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01023ACu)

/** \brief  2394, TIM Channel TDUC Register */
#define GTM_TIM2_CH7_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102394u)

/** \brief  2398, TIM Channel TDUV Register */
#define GTM_TIM2_CH7_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102398u)

/** \brief  2078, TIM_IN_SRC Long Name */
#define GTM_TIM2_IN_SRC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_IN_SRC*)0xF0102078u)

/** \brief  207C, TIM Global Software Reset Register */
#define GTM_TIM2_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF010207Cu)

/** \brief  2808, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH0_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102808u)

/** \brief  2810, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH0_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102810u)

/** \brief  2824, TIM Channel Control Register */
#define GTM_TIM3_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102824u)

/** \brief  280C, TIM Channel Edge Counter Register */
#define GTM_TIM3_CH0_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010280Cu)

/** \brief  2828, TIM Channel External Capture Control Register */
#define GTM_TIM3_CH0_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102828u)

/** \brief  283C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM3_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010283Cu)

/** \brief  2820, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH0_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102820u)

/** \brief  281C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH0_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010281Cu)

/** \brief  2800, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH0_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102800u)

/** \brief  2804, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH0_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102804u)

/** \brief  2830, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102830u)

/** \brief  2834, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102834u)

/** \brief  2838, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102838u)

/** \brief  282C, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010282Cu)

/** \brief  2814, TIM Channel TDUC Register */
#define GTM_TIM3_CH0_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102814u)

/** \brief  2818, TIM Channel TDUV Register */
#define GTM_TIM3_CH0_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102818u)

/** \brief  2888, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH1_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102888u)

/** \brief  2890, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH1_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102890u)

/** \brief  28A4, TIM Channel Control Register */
#define GTM_TIM3_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01028A4u)

/** \brief  288C, TIM Channel Edge Counter Register */
#define GTM_TIM3_CH1_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010288Cu)

/** \brief  28A8, TIM Channel External Capture Control Register */
#define GTM_TIM3_CH1_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01028A8u)

/** \brief  28BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM3_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01028BCu)

/** \brief  28A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH1_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01028A0u)

/** \brief  289C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH1_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010289Cu)

/** \brief  2880, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH1_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102880u)

/** \brief  2884, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH1_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102884u)

/** \brief  28B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01028B0u)

/** \brief  28B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01028B4u)

/** \brief  28B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01028B8u)

/** \brief  28AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01028ACu)

/** \brief  2894, TIM Channel TDUC Register */
#define GTM_TIM3_CH1_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102894u)

/** \brief  2898, TIM Channel TDUV Register */
#define GTM_TIM3_CH1_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102898u)

/** \brief  2908, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH2_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102908u)

/** \brief  2910, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH2_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102910u)

/** \brief  2924, TIM Channel Control Register */
#define GTM_TIM3_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102924u)

/** \brief  290C, TIM Channel Edge Counter Register */
#define GTM_TIM3_CH2_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010290Cu)

/** \brief  2928, TIM Channel External Capture Control Register */
#define GTM_TIM3_CH2_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102928u)

/** \brief  293C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM3_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010293Cu)

/** \brief  2920, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH2_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102920u)

/** \brief  291C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH2_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010291Cu)

/** \brief  2900, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH2_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102900u)

/** \brief  2904, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH2_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102904u)

/** \brief  2930, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102930u)

/** \brief  2934, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102934u)

/** \brief  2938, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102938u)

/** \brief  292C, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010292Cu)

/** \brief  2914, TIM Channel TDUC Register */
#define GTM_TIM3_CH2_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102914u)

/** \brief  2918, TIM Channel TDUV Register */
#define GTM_TIM3_CH2_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102918u)

/** \brief  2988, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH3_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102988u)

/** \brief  2990, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH3_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102990u)

/** \brief  29A4, TIM Channel Control Register */
#define GTM_TIM3_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01029A4u)

/** \brief  298C, TIM Channel Edge Counter Register */
#define GTM_TIM3_CH3_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010298Cu)

/** \brief  29A8, TIM Channel External Capture Control Register */
#define GTM_TIM3_CH3_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01029A8u)

/** \brief  29BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM3_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01029BCu)

/** \brief  29A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH3_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01029A0u)

/** \brief  299C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH3_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010299Cu)

/** \brief  2980, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH3_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102980u)

/** \brief  2984, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH3_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102984u)

/** \brief  29B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01029B0u)

/** \brief  29B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01029B4u)

/** \brief  29B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01029B8u)

/** \brief  29AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01029ACu)

/** \brief  2994, TIM Channel TDUC Register */
#define GTM_TIM3_CH3_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102994u)

/** \brief  2998, TIM Channel TDUV Register */
#define GTM_TIM3_CH3_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102998u)

/** \brief  2A08, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH4_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102A08u)

/** \brief  2A10, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH4_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102A10u)

/** \brief  2A24, TIM Channel Control Register */
#define GTM_TIM3_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102A24u)

/** \brief  2A0C, TIM Channel Edge Counter Register */
#define GTM_TIM3_CH4_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0102A0Cu)

/** \brief  2A28, TIM Channel External Capture Control Register */
#define GTM_TIM3_CH4_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102A28u)

/** \brief  2A3C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM3_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0102A3Cu)

/** \brief  2A20, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH4_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102A20u)

/** \brief  2A1C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH4_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102A1Cu)

/** \brief  2A00, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH4_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102A00u)

/** \brief  2A04, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH4_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102A04u)

/** \brief  2A30, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102A30u)

/** \brief  2A34, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102A34u)

/** \brief  2A38, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102A38u)

/** \brief  2A2C, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102A2Cu)

/** \brief  2A14, TIM Channel TDUC Register */
#define GTM_TIM3_CH4_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102A14u)

/** \brief  2A18, TIM Channel TDUV Register */
#define GTM_TIM3_CH4_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102A18u)

/** \brief  2A88, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH5_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102A88u)

/** \brief  2A90, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH5_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102A90u)

/** \brief  2AA4, TIM Channel Control Register */
#define GTM_TIM3_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102AA4u)

/** \brief  2A8C, TIM Channel Edge Counter Register */
#define GTM_TIM3_CH5_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0102A8Cu)

/** \brief  2AA8, TIM Channel External Capture Control Register */
#define GTM_TIM3_CH5_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102AA8u)

/** \brief  2ABC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM3_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0102ABCu)

/** \brief  2AA0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH5_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102AA0u)

/** \brief  2A9C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH5_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102A9Cu)

/** \brief  2A80, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH5_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102A80u)

/** \brief  2A84, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH5_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102A84u)

/** \brief  2AB0, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102AB0u)

/** \brief  2AB4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102AB4u)

/** \brief  2AB8, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102AB8u)

/** \brief  2AAC, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102AACu)

/** \brief  2A94, TIM Channel TDUC Register */
#define GTM_TIM3_CH5_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102A94u)

/** \brief  2A98, TIM Channel TDUV Register */
#define GTM_TIM3_CH5_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102A98u)

/** \brief  2B08, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH6_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102B08u)

/** \brief  2B10, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH6_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102B10u)

/** \brief  2B24, TIM Channel Control Register */
#define GTM_TIM3_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102B24u)

/** \brief  2B0C, TIM Channel Edge Counter Register */
#define GTM_TIM3_CH6_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0102B0Cu)

/** \brief  2B28, TIM Channel External Capture Control Register */
#define GTM_TIM3_CH6_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102B28u)

/** \brief  2B3C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM3_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0102B3Cu)

/** \brief  2B20, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH6_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102B20u)

/** \brief  2B1C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH6_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102B1Cu)

/** \brief  2B00, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH6_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102B00u)

/** \brief  2B04, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH6_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102B04u)

/** \brief  2B30, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102B30u)

/** \brief  2B34, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102B34u)

/** \brief  2B38, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102B38u)

/** \brief  2B2C, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102B2Cu)

/** \brief  2B14, TIM Channel TDUC Register */
#define GTM_TIM3_CH6_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102B14u)

/** \brief  2B18, TIM Channel TDUV Register */
#define GTM_TIM3_CH6_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102B18u)

/** \brief  2B88, TIM Channel SMU Counter Register */
#define GTM_TIM3_CH7_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0102B88u)

/** \brief  2B90, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM3_CH7_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0102B90u)

/** \brief  2BA4, TIM Channel Control Register */
#define GTM_TIM3_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0102BA4u)

/** \brief  2B8C, TIM Channel Edge Counter Register */
#define GTM_TIM3_CH7_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0102B8Cu)

/** \brief  2BA8, TIM Channel External Capture Control Register */
#define GTM_TIM3_CH7_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0102BA8u)

/** \brief  2BBC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM3_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0102BBCu)

/** \brief  2BA0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM3_CH7_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0102BA0u)

/** \brief  2B9C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM3_CH7_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0102B9Cu)

/** \brief  2B80, TIM Channel General Purpose 0 Register */
#define GTM_TIM3_CH7_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0102B80u)

/** \brief  2B84, TIM Channel General Purpose 1 Register */
#define GTM_TIM3_CH7_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0102B84u)

/** \brief  2BB0, TIM Channel Interrupt Enable Register */
#define GTM_TIM3_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0102BB0u)

/** \brief  2BB4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM3_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0102BB4u)

/** \brief  2BB8, TIM IRQ Mode Configuration Register */
#define GTM_TIM3_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0102BB8u)

/** \brief  2BAC, TIM Channel Interrupt Notification Register */
#define GTM_TIM3_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0102BACu)

/** \brief  2B94, TIM Channel TDUC Register */
#define GTM_TIM3_CH7_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0102B94u)

/** \brief  2B98, TIM Channel TDUV Register */
#define GTM_TIM3_CH7_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0102B98u)

/** \brief  2878, TIM_IN_SRC Long Name */
#define GTM_TIM3_IN_SRC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_IN_SRC*)0xF0102878u)

/** \brief  287C, TIM Global Software Reset Register */
#define GTM_TIM3_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF010287Cu)

/** \brief  3008, TIM Channel SMU Counter Register */
#define GTM_TIM4_CH0_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103008u)

/** \brief  3010, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM4_CH0_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103010u)

/** \brief  3024, TIM Channel Control Register */
#define GTM_TIM4_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103024u)

/** \brief  300C, TIM Channel Edge Counter Register */
#define GTM_TIM4_CH0_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010300Cu)

/** \brief  3028, TIM Channel External Capture Control Register */
#define GTM_TIM4_CH0_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103028u)

/** \brief  303C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM4_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010303Cu)

/** \brief  3020, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM4_CH0_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103020u)

/** \brief  301C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM4_CH0_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010301Cu)

/** \brief  3000, TIM Channel General Purpose 0 Register */
#define GTM_TIM4_CH0_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103000u)

/** \brief  3004, TIM Channel General Purpose 1 Register */
#define GTM_TIM4_CH0_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103004u)

/** \brief  3030, TIM Channel Interrupt Enable Register */
#define GTM_TIM4_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103030u)

/** \brief  3034, TIM Channel Software Interrupt Force Register */
#define GTM_TIM4_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103034u)

/** \brief  3038, TIM IRQ Mode Configuration Register */
#define GTM_TIM4_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103038u)

/** \brief  302C, TIM Channel Interrupt Notification Register */
#define GTM_TIM4_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010302Cu)

/** \brief  3014, TIM Channel TDUC Register */
#define GTM_TIM4_CH0_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103014u)

/** \brief  3018, TIM Channel TDUV Register */
#define GTM_TIM4_CH0_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103018u)

/** \brief  3088, TIM Channel SMU Counter Register */
#define GTM_TIM4_CH1_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103088u)

/** \brief  3090, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM4_CH1_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103090u)

/** \brief  30A4, TIM Channel Control Register */
#define GTM_TIM4_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01030A4u)

/** \brief  308C, TIM Channel Edge Counter Register */
#define GTM_TIM4_CH1_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010308Cu)

/** \brief  30A8, TIM Channel External Capture Control Register */
#define GTM_TIM4_CH1_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01030A8u)

/** \brief  30BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM4_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01030BCu)

/** \brief  30A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM4_CH1_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01030A0u)

/** \brief  309C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM4_CH1_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010309Cu)

/** \brief  3080, TIM Channel General Purpose 0 Register */
#define GTM_TIM4_CH1_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103080u)

/** \brief  3084, TIM Channel General Purpose 1 Register */
#define GTM_TIM4_CH1_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103084u)

/** \brief  30B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM4_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01030B0u)

/** \brief  30B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM4_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01030B4u)

/** \brief  30B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM4_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01030B8u)

/** \brief  30AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM4_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01030ACu)

/** \brief  3094, TIM Channel TDUC Register */
#define GTM_TIM4_CH1_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103094u)

/** \brief  3098, TIM Channel TDUV Register */
#define GTM_TIM4_CH1_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103098u)

/** \brief  3108, TIM Channel SMU Counter Register */
#define GTM_TIM4_CH2_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103108u)

/** \brief  3110, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM4_CH2_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103110u)

/** \brief  3124, TIM Channel Control Register */
#define GTM_TIM4_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103124u)

/** \brief  310C, TIM Channel Edge Counter Register */
#define GTM_TIM4_CH2_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010310Cu)

/** \brief  3128, TIM Channel External Capture Control Register */
#define GTM_TIM4_CH2_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103128u)

/** \brief  313C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM4_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010313Cu)

/** \brief  3120, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM4_CH2_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103120u)

/** \brief  311C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM4_CH2_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010311Cu)

/** \brief  3100, TIM Channel General Purpose 0 Register */
#define GTM_TIM4_CH2_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103100u)

/** \brief  3104, TIM Channel General Purpose 1 Register */
#define GTM_TIM4_CH2_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103104u)

/** \brief  3130, TIM Channel Interrupt Enable Register */
#define GTM_TIM4_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103130u)

/** \brief  3134, TIM Channel Software Interrupt Force Register */
#define GTM_TIM4_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103134u)

/** \brief  3138, TIM IRQ Mode Configuration Register */
#define GTM_TIM4_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103138u)

/** \brief  312C, TIM Channel Interrupt Notification Register */
#define GTM_TIM4_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010312Cu)

/** \brief  3114, TIM Channel TDUC Register */
#define GTM_TIM4_CH2_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103114u)

/** \brief  3118, TIM Channel TDUV Register */
#define GTM_TIM4_CH2_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103118u)

/** \brief  3188, TIM Channel SMU Counter Register */
#define GTM_TIM4_CH3_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103188u)

/** \brief  3190, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM4_CH3_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103190u)

/** \brief  31A4, TIM Channel Control Register */
#define GTM_TIM4_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01031A4u)

/** \brief  318C, TIM Channel Edge Counter Register */
#define GTM_TIM4_CH3_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010318Cu)

/** \brief  31A8, TIM Channel External Capture Control Register */
#define GTM_TIM4_CH3_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01031A8u)

/** \brief  31BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM4_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01031BCu)

/** \brief  31A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM4_CH3_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01031A0u)

/** \brief  319C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM4_CH3_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010319Cu)

/** \brief  3180, TIM Channel General Purpose 0 Register */
#define GTM_TIM4_CH3_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103180u)

/** \brief  3184, TIM Channel General Purpose 1 Register */
#define GTM_TIM4_CH3_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103184u)

/** \brief  31B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM4_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01031B0u)

/** \brief  31B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM4_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01031B4u)

/** \brief  31B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM4_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01031B8u)

/** \brief  31AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM4_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01031ACu)

/** \brief  3194, TIM Channel TDUC Register */
#define GTM_TIM4_CH3_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103194u)

/** \brief  3198, TIM Channel TDUV Register */
#define GTM_TIM4_CH3_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103198u)

/** \brief  3208, TIM Channel SMU Counter Register */
#define GTM_TIM4_CH4_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103208u)

/** \brief  3210, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM4_CH4_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103210u)

/** \brief  3224, TIM Channel Control Register */
#define GTM_TIM4_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103224u)

/** \brief  320C, TIM Channel Edge Counter Register */
#define GTM_TIM4_CH4_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010320Cu)

/** \brief  3228, TIM Channel External Capture Control Register */
#define GTM_TIM4_CH4_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103228u)

/** \brief  323C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM4_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010323Cu)

/** \brief  3220, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM4_CH4_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103220u)

/** \brief  321C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM4_CH4_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010321Cu)

/** \brief  3200, TIM Channel General Purpose 0 Register */
#define GTM_TIM4_CH4_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103200u)

/** \brief  3204, TIM Channel General Purpose 1 Register */
#define GTM_TIM4_CH4_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103204u)

/** \brief  3230, TIM Channel Interrupt Enable Register */
#define GTM_TIM4_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103230u)

/** \brief  3234, TIM Channel Software Interrupt Force Register */
#define GTM_TIM4_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103234u)

/** \brief  3238, TIM IRQ Mode Configuration Register */
#define GTM_TIM4_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103238u)

/** \brief  322C, TIM Channel Interrupt Notification Register */
#define GTM_TIM4_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010322Cu)

/** \brief  3214, TIM Channel TDUC Register */
#define GTM_TIM4_CH4_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103214u)

/** \brief  3218, TIM Channel TDUV Register */
#define GTM_TIM4_CH4_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103218u)

/** \brief  3288, TIM Channel SMU Counter Register */
#define GTM_TIM4_CH5_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103288u)

/** \brief  3290, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM4_CH5_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103290u)

/** \brief  32A4, TIM Channel Control Register */
#define GTM_TIM4_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01032A4u)

/** \brief  328C, TIM Channel Edge Counter Register */
#define GTM_TIM4_CH5_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010328Cu)

/** \brief  32A8, TIM Channel External Capture Control Register */
#define GTM_TIM4_CH5_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01032A8u)

/** \brief  32BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM4_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01032BCu)

/** \brief  32A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM4_CH5_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01032A0u)

/** \brief  329C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM4_CH5_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010329Cu)

/** \brief  3280, TIM Channel General Purpose 0 Register */
#define GTM_TIM4_CH5_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103280u)

/** \brief  3284, TIM Channel General Purpose 1 Register */
#define GTM_TIM4_CH5_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103284u)

/** \brief  32B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM4_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01032B0u)

/** \brief  32B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM4_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01032B4u)

/** \brief  32B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM4_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01032B8u)

/** \brief  32AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM4_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01032ACu)

/** \brief  3294, TIM Channel TDUC Register */
#define GTM_TIM4_CH5_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103294u)

/** \brief  3298, TIM Channel TDUV Register */
#define GTM_TIM4_CH5_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103298u)

/** \brief  3308, TIM Channel SMU Counter Register */
#define GTM_TIM4_CH6_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103308u)

/** \brief  3310, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM4_CH6_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103310u)

/** \brief  3324, TIM Channel Control Register */
#define GTM_TIM4_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103324u)

/** \brief  330C, TIM Channel Edge Counter Register */
#define GTM_TIM4_CH6_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010330Cu)

/** \brief  3328, TIM Channel External Capture Control Register */
#define GTM_TIM4_CH6_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103328u)

/** \brief  333C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM4_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010333Cu)

/** \brief  3320, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM4_CH6_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103320u)

/** \brief  331C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM4_CH6_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010331Cu)

/** \brief  3300, TIM Channel General Purpose 0 Register */
#define GTM_TIM4_CH6_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103300u)

/** \brief  3304, TIM Channel General Purpose 1 Register */
#define GTM_TIM4_CH6_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103304u)

/** \brief  3330, TIM Channel Interrupt Enable Register */
#define GTM_TIM4_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103330u)

/** \brief  3334, TIM Channel Software Interrupt Force Register */
#define GTM_TIM4_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103334u)

/** \brief  3338, TIM IRQ Mode Configuration Register */
#define GTM_TIM4_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103338u)

/** \brief  332C, TIM Channel Interrupt Notification Register */
#define GTM_TIM4_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010332Cu)

/** \brief  3314, TIM Channel TDUC Register */
#define GTM_TIM4_CH6_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103314u)

/** \brief  3318, TIM Channel TDUV Register */
#define GTM_TIM4_CH6_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103318u)

/** \brief  3388, TIM Channel SMU Counter Register */
#define GTM_TIM4_CH7_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103388u)

/** \brief  3390, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM4_CH7_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103390u)

/** \brief  33A4, TIM Channel Control Register */
#define GTM_TIM4_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01033A4u)

/** \brief  338C, TIM Channel Edge Counter Register */
#define GTM_TIM4_CH7_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010338Cu)

/** \brief  33A8, TIM Channel External Capture Control Register */
#define GTM_TIM4_CH7_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01033A8u)

/** \brief  33BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM4_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01033BCu)

/** \brief  33A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM4_CH7_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01033A0u)

/** \brief  339C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM4_CH7_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010339Cu)

/** \brief  3380, TIM Channel General Purpose 0 Register */
#define GTM_TIM4_CH7_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103380u)

/** \brief  3384, TIM Channel General Purpose 1 Register */
#define GTM_TIM4_CH7_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103384u)

/** \brief  33B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM4_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01033B0u)

/** \brief  33B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM4_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01033B4u)

/** \brief  33B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM4_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01033B8u)

/** \brief  33AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM4_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01033ACu)

/** \brief  3394, TIM Channel TDUC Register */
#define GTM_TIM4_CH7_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103394u)

/** \brief  3398, TIM Channel TDUV Register */
#define GTM_TIM4_CH7_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103398u)

/** \brief  3078, TIM_IN_SRC Long Name */
#define GTM_TIM4_IN_SRC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_IN_SRC*)0xF0103078u)

/** \brief  307C, TIM Global Software Reset Register */
#define GTM_TIM4_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF010307Cu)

/** \brief  3808, TIM Channel SMU Counter Register */
#define GTM_TIM5_CH0_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103808u)

/** \brief  3810, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM5_CH0_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103810u)

/** \brief  3824, TIM Channel Control Register */
#define GTM_TIM5_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103824u)

/** \brief  380C, TIM Channel Edge Counter Register */
#define GTM_TIM5_CH0_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010380Cu)

/** \brief  3828, TIM Channel External Capture Control Register */
#define GTM_TIM5_CH0_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103828u)

/** \brief  383C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM5_CH0_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010383Cu)

/** \brief  3820, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM5_CH0_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103820u)

/** \brief  381C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM5_CH0_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010381Cu)

/** \brief  3800, TIM Channel General Purpose 0 Register */
#define GTM_TIM5_CH0_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103800u)

/** \brief  3804, TIM Channel General Purpose 1 Register */
#define GTM_TIM5_CH0_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103804u)

/** \brief  3830, TIM Channel Interrupt Enable Register */
#define GTM_TIM5_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103830u)

/** \brief  3834, TIM Channel Software Interrupt Force Register */
#define GTM_TIM5_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103834u)

/** \brief  3838, TIM IRQ Mode Configuration Register */
#define GTM_TIM5_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103838u)

/** \brief  382C, TIM Channel Interrupt Notification Register */
#define GTM_TIM5_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010382Cu)

/** \brief  3814, TIM Channel TDUC Register */
#define GTM_TIM5_CH0_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103814u)

/** \brief  3818, TIM Channel TDUV Register */
#define GTM_TIM5_CH0_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103818u)

/** \brief  3888, TIM Channel SMU Counter Register */
#define GTM_TIM5_CH1_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103888u)

/** \brief  3890, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM5_CH1_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103890u)

/** \brief  38A4, TIM Channel Control Register */
#define GTM_TIM5_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01038A4u)

/** \brief  388C, TIM Channel Edge Counter Register */
#define GTM_TIM5_CH1_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010388Cu)

/** \brief  38A8, TIM Channel External Capture Control Register */
#define GTM_TIM5_CH1_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01038A8u)

/** \brief  38BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM5_CH1_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01038BCu)

/** \brief  38A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM5_CH1_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01038A0u)

/** \brief  389C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM5_CH1_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010389Cu)

/** \brief  3880, TIM Channel General Purpose 0 Register */
#define GTM_TIM5_CH1_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103880u)

/** \brief  3884, TIM Channel General Purpose 1 Register */
#define GTM_TIM5_CH1_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103884u)

/** \brief  38B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM5_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01038B0u)

/** \brief  38B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM5_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01038B4u)

/** \brief  38B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM5_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01038B8u)

/** \brief  38AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM5_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01038ACu)

/** \brief  3894, TIM Channel TDUC Register */
#define GTM_TIM5_CH1_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103894u)

/** \brief  3898, TIM Channel TDUV Register */
#define GTM_TIM5_CH1_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103898u)

/** \brief  3908, TIM Channel SMU Counter Register */
#define GTM_TIM5_CH2_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103908u)

/** \brief  3910, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM5_CH2_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103910u)

/** \brief  3924, TIM Channel Control Register */
#define GTM_TIM5_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103924u)

/** \brief  390C, TIM Channel Edge Counter Register */
#define GTM_TIM5_CH2_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010390Cu)

/** \brief  3928, TIM Channel External Capture Control Register */
#define GTM_TIM5_CH2_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103928u)

/** \brief  393C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM5_CH2_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF010393Cu)

/** \brief  3920, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM5_CH2_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103920u)

/** \brief  391C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM5_CH2_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010391Cu)

/** \brief  3900, TIM Channel General Purpose 0 Register */
#define GTM_TIM5_CH2_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103900u)

/** \brief  3904, TIM Channel General Purpose 1 Register */
#define GTM_TIM5_CH2_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103904u)

/** \brief  3930, TIM Channel Interrupt Enable Register */
#define GTM_TIM5_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103930u)

/** \brief  3934, TIM Channel Software Interrupt Force Register */
#define GTM_TIM5_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103934u)

/** \brief  3938, TIM IRQ Mode Configuration Register */
#define GTM_TIM5_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103938u)

/** \brief  392C, TIM Channel Interrupt Notification Register */
#define GTM_TIM5_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF010392Cu)

/** \brief  3914, TIM Channel TDUC Register */
#define GTM_TIM5_CH2_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103914u)

/** \brief  3918, TIM Channel TDUV Register */
#define GTM_TIM5_CH2_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103918u)

/** \brief  3988, TIM Channel SMU Counter Register */
#define GTM_TIM5_CH3_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103988u)

/** \brief  3990, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM5_CH3_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103990u)

/** \brief  39A4, TIM Channel Control Register */
#define GTM_TIM5_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF01039A4u)

/** \brief  398C, TIM Channel Edge Counter Register */
#define GTM_TIM5_CH3_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF010398Cu)

/** \brief  39A8, TIM Channel External Capture Control Register */
#define GTM_TIM5_CH3_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF01039A8u)

/** \brief  39BC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM5_CH3_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF01039BCu)

/** \brief  39A0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM5_CH3_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF01039A0u)

/** \brief  399C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM5_CH3_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF010399Cu)

/** \brief  3980, TIM Channel General Purpose 0 Register */
#define GTM_TIM5_CH3_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103980u)

/** \brief  3984, TIM Channel General Purpose 1 Register */
#define GTM_TIM5_CH3_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103984u)

/** \brief  39B0, TIM Channel Interrupt Enable Register */
#define GTM_TIM5_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF01039B0u)

/** \brief  39B4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM5_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF01039B4u)

/** \brief  39B8, TIM IRQ Mode Configuration Register */
#define GTM_TIM5_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF01039B8u)

/** \brief  39AC, TIM Channel Interrupt Notification Register */
#define GTM_TIM5_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF01039ACu)

/** \brief  3994, TIM Channel TDUC Register */
#define GTM_TIM5_CH3_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103994u)

/** \brief  3998, TIM Channel TDUV Register */
#define GTM_TIM5_CH3_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103998u)

/** \brief  3A08, TIM Channel SMU Counter Register */
#define GTM_TIM5_CH4_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103A08u)

/** \brief  3A10, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM5_CH4_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103A10u)

/** \brief  3A24, TIM Channel Control Register */
#define GTM_TIM5_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103A24u)

/** \brief  3A0C, TIM Channel Edge Counter Register */
#define GTM_TIM5_CH4_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0103A0Cu)

/** \brief  3A28, TIM Channel External Capture Control Register */
#define GTM_TIM5_CH4_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103A28u)

/** \brief  3A3C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM5_CH4_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0103A3Cu)

/** \brief  3A20, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM5_CH4_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103A20u)

/** \brief  3A1C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM5_CH4_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0103A1Cu)

/** \brief  3A00, TIM Channel General Purpose 0 Register */
#define GTM_TIM5_CH4_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103A00u)

/** \brief  3A04, TIM Channel General Purpose 1 Register */
#define GTM_TIM5_CH4_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103A04u)

/** \brief  3A30, TIM Channel Interrupt Enable Register */
#define GTM_TIM5_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103A30u)

/** \brief  3A34, TIM Channel Software Interrupt Force Register */
#define GTM_TIM5_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103A34u)

/** \brief  3A38, TIM IRQ Mode Configuration Register */
#define GTM_TIM5_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103A38u)

/** \brief  3A2C, TIM Channel Interrupt Notification Register */
#define GTM_TIM5_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0103A2Cu)

/** \brief  3A14, TIM Channel TDUC Register */
#define GTM_TIM5_CH4_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103A14u)

/** \brief  3A18, TIM Channel TDUV Register */
#define GTM_TIM5_CH4_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103A18u)

/** \brief  3A88, TIM Channel SMU Counter Register */
#define GTM_TIM5_CH5_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103A88u)

/** \brief  3A90, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM5_CH5_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103A90u)

/** \brief  3AA4, TIM Channel Control Register */
#define GTM_TIM5_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103AA4u)

/** \brief  3A8C, TIM Channel Edge Counter Register */
#define GTM_TIM5_CH5_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0103A8Cu)

/** \brief  3AA8, TIM Channel External Capture Control Register */
#define GTM_TIM5_CH5_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103AA8u)

/** \brief  3ABC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM5_CH5_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0103ABCu)

/** \brief  3AA0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM5_CH5_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103AA0u)

/** \brief  3A9C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM5_CH5_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0103A9Cu)

/** \brief  3A80, TIM Channel General Purpose 0 Register */
#define GTM_TIM5_CH5_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103A80u)

/** \brief  3A84, TIM Channel General Purpose 1 Register */
#define GTM_TIM5_CH5_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103A84u)

/** \brief  3AB0, TIM Channel Interrupt Enable Register */
#define GTM_TIM5_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103AB0u)

/** \brief  3AB4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM5_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103AB4u)

/** \brief  3AB8, TIM IRQ Mode Configuration Register */
#define GTM_TIM5_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103AB8u)

/** \brief  3AAC, TIM Channel Interrupt Notification Register */
#define GTM_TIM5_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0103AACu)

/** \brief  3A94, TIM Channel TDUC Register */
#define GTM_TIM5_CH5_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103A94u)

/** \brief  3A98, TIM Channel TDUV Register */
#define GTM_TIM5_CH5_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103A98u)

/** \brief  3B08, TIM Channel SMU Counter Register */
#define GTM_TIM5_CH6_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103B08u)

/** \brief  3B10, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM5_CH6_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103B10u)

/** \brief  3B24, TIM Channel Control Register */
#define GTM_TIM5_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103B24u)

/** \brief  3B0C, TIM Channel Edge Counter Register */
#define GTM_TIM5_CH6_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0103B0Cu)

/** \brief  3B28, TIM Channel External Capture Control Register */
#define GTM_TIM5_CH6_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103B28u)

/** \brief  3B3C, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM5_CH6_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0103B3Cu)

/** \brief  3B20, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM5_CH6_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103B20u)

/** \brief  3B1C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM5_CH6_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0103B1Cu)

/** \brief  3B00, TIM Channel General Purpose 0 Register */
#define GTM_TIM5_CH6_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103B00u)

/** \brief  3B04, TIM Channel General Purpose 1 Register */
#define GTM_TIM5_CH6_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103B04u)

/** \brief  3B30, TIM Channel Interrupt Enable Register */
#define GTM_TIM5_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103B30u)

/** \brief  3B34, TIM Channel Software Interrupt Force Register */
#define GTM_TIM5_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103B34u)

/** \brief  3B38, TIM IRQ Mode Configuration Register */
#define GTM_TIM5_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103B38u)

/** \brief  3B2C, TIM Channel Interrupt Notification Register */
#define GTM_TIM5_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0103B2Cu)

/** \brief  3B14, TIM Channel TDUC Register */
#define GTM_TIM5_CH6_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103B14u)

/** \brief  3B18, TIM Channel TDUV Register */
#define GTM_TIM5_CH6_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103B18u)

/** \brief  3B88, TIM Channel SMU Counter Register */
#define GTM_TIM5_CH7_CNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNT*)0xF0103B88u)

/** \brief  3B90, TIM Channel SMU Shadow Counter Register */
#define GTM_TIM5_CH7_CNTS /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CNTS*)0xF0103B90u)

/** \brief  3BA4, TIM Channel Control Register */
#define GTM_TIM5_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_CTRL*)0xF0103BA4u)

/** \brief  3B8C, TIM Channel Edge Counter Register */
#define GTM_TIM5_CH7_ECNT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECNT*)0xF0103B8Cu)

/** \brief  3BA8, TIM Channel External Capture Control Register */
#define GTM_TIM5_CH7_ECTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_ECTRL*)0xF0103BA8u)

/** \brief  3BBC, TIM Channel Error Interrupt Enable Register */
#define GTM_TIM5_CH7_EIRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_EIRQ_EN*)0xF0103BBCu)

/** \brief  3BA0, TIM Channel Filter Parameter 1 Register */
#define GTM_TIM5_CH7_FLT_FE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_FE*)0xF0103BA0u)

/** \brief  3B9C, GTM_TIM Channel Filter Parameter 0 Register */
#define GTM_TIM5_CH7_FLT_RE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_FLT_RE*)0xF0103B9Cu)

/** \brief  3B80, TIM Channel General Purpose 0 Register */
#define GTM_TIM5_CH7_GPR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR0*)0xF0103B80u)

/** \brief  3B84, TIM Channel General Purpose 1 Register */
#define GTM_TIM5_CH7_GPR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_GPR1*)0xF0103B84u)

/** \brief  3BB0, TIM Channel Interrupt Enable Register */
#define GTM_TIM5_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_EN*)0xF0103BB0u)

/** \brief  3BB4, TIM Channel Software Interrupt Force Register */
#define GTM_TIM5_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_FORCINT*)0xF0103BB4u)

/** \brief  3BB8, TIM IRQ Mode Configuration Register */
#define GTM_TIM5_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_MODE*)0xF0103BB8u)

/** \brief  3BAC, TIM Channel Interrupt Notification Register */
#define GTM_TIM5_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_IRQ_NOTIFY*)0xF0103BACu)

/** \brief  3B94, TIM Channel TDUC Register */
#define GTM_TIM5_CH7_TDUC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUC*)0xF0103B94u)

/** \brief  3B98, TIM Channel TDUV Register */
#define GTM_TIM5_CH7_TDUV /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_CH_TDUV*)0xF0103B98u)

/** \brief  3878, TIM_IN_SRC Long Name */
#define GTM_TIM5_IN_SRC /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_IN_SRC*)0xF0103878u)

/** \brief  387C, TIM Global Software Reset Register */
#define GTM_TIM5_RST /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_RST*)0xF010387Cu)

/** \brief  40, GTM TIM  AUX_IN_SRC */
#define GTM_TIM_AUX_IN_SRC0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_AUX_IN_SRC*)0xF0100040u)

/** Alias (User Manual Name) for GTM_TIM_AUX_IN_SRC0.
* To use register names with standard convension, please use GTM_TIM_AUX_IN_SRC0.
*/
#define	GTM_TIM0_AUX_IN_SRC	(GTM_TIM_AUX_IN_SRC0)

/** \brief  44, GTM TIM  AUX_IN_SRC */
#define GTM_TIM_AUX_IN_SRC1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_AUX_IN_SRC*)0xF0100044u)

/** Alias (User Manual Name) for GTM_TIM_AUX_IN_SRC1.
* To use register names with standard convension, please use GTM_TIM_AUX_IN_SRC1.
*/
#define	GTM_TIM1_AUX_IN_SRC	(GTM_TIM_AUX_IN_SRC1)

/** \brief  48, GTM TIM  AUX_IN_SRC */
#define GTM_TIM_AUX_IN_SRC2 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_AUX_IN_SRC*)0xF0100048u)

/** Alias (User Manual Name) for GTM_TIM_AUX_IN_SRC2.
* To use register names with standard convension, please use GTM_TIM_AUX_IN_SRC2.
*/
#define	GTM_TIM2_AUX_IN_SRC	(GTM_TIM_AUX_IN_SRC2)

/** \brief  4C, GTM TIM  AUX_IN_SRC */
#define GTM_TIM_AUX_IN_SRC3 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_AUX_IN_SRC*)0xF010004Cu)

/** Alias (User Manual Name) for GTM_TIM_AUX_IN_SRC3.
* To use register names with standard convension, please use GTM_TIM_AUX_IN_SRC3.
*/
#define	GTM_TIM3_AUX_IN_SRC	(GTM_TIM_AUX_IN_SRC3)

/** \brief  50, GTM TIM  AUX_IN_SRC */
#define GTM_TIM_AUX_IN_SRC4 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_AUX_IN_SRC*)0xF0100050u)

/** Alias (User Manual Name) for GTM_TIM_AUX_IN_SRC4.
* To use register names with standard convension, please use GTM_TIM_AUX_IN_SRC4.
*/
#define	GTM_TIM4_AUX_IN_SRC	(GTM_TIM_AUX_IN_SRC4)

/** \brief  54, GTM TIM  AUX_IN_SRC */
#define GTM_TIM_AUX_IN_SRC5 /*lint --e(923)*/ (*(volatile Ifx_GTM_TIM_AUX_IN_SRC*)0xF0100054u)

/** Alias (User Manual Name) for GTM_TIM_AUX_IN_SRC5.
* To use register names with standard convension, please use GTM_TIM_AUX_IN_SRC5.
*/
#define	GTM_TIM5_AUX_IN_SRC	(GTM_TIM_AUX_IN_SRC5)

/** \brief  800C, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010800Cu)

/** \brief  8010, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108010u)

/** \brief  8014, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108014u)

/** \brief  8000, TOM Channel Control Register’ */
#define GTM_TOM0_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108000u)

/** \brief  8020, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108020u)

/** \brief  8024, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108024u)

/** \brief  8028, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108028u)

/** \brief  801C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010801Cu)

/** \brief  8004, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108004u)

/** \brief  8008, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108008u)

/** \brief  8018, TOM Channel Status Register */
#define GTM_TOM0_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108018u)

/** \brief  828C, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH10_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010828Cu)

/** \brief  8290, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH10_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108290u)

/** \brief  8294, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH10_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108294u)

/** \brief  8280, TOM Channel Control Register’ */
#define GTM_TOM0_CH10_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108280u)

/** \brief  82A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH10_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01082A0u)

/** \brief  82A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH10_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01082A4u)

/** \brief  82A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH10_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01082A8u)

/** \brief  829C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH10_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010829Cu)

/** \brief  8284, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH10_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108284u)

/** \brief  8288, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH10_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108288u)

/** \brief  8298, TOM Channel Status Register */
#define GTM_TOM0_CH10_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108298u)

/** \brief  82CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH11_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01082CCu)

/** \brief  82D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH11_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01082D0u)

/** \brief  82D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH11_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01082D4u)

/** \brief  82C0, TOM Channel Control Register’ */
#define GTM_TOM0_CH11_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01082C0u)

/** \brief  82E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH11_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01082E0u)

/** \brief  82E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH11_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01082E4u)

/** \brief  82E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH11_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01082E8u)

/** \brief  82DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH11_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01082DCu)

/** \brief  82C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH11_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01082C4u)

/** \brief  82C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH11_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01082C8u)

/** \brief  82D8, TOM Channel Status Register */
#define GTM_TOM0_CH11_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01082D8u)

/** \brief  830C, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH12_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010830Cu)

/** \brief  8310, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH12_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108310u)

/** \brief  8314, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH12_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108314u)

/** \brief  8300, TOM Channel Control Register’ */
#define GTM_TOM0_CH12_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108300u)

/** \brief  8320, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH12_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108320u)

/** \brief  8324, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH12_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108324u)

/** \brief  8328, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH12_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108328u)

/** \brief  831C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH12_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010831Cu)

/** \brief  8304, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH12_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108304u)

/** \brief  8308, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH12_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108308u)

/** \brief  8318, TOM Channel Status Register */
#define GTM_TOM0_CH12_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108318u)

/** \brief  834C, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH13_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010834Cu)

/** \brief  8350, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH13_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108350u)

/** \brief  8354, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH13_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108354u)

/** \brief  8340, TOM Channel Control Register’ */
#define GTM_TOM0_CH13_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108340u)

/** \brief  8360, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH13_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108360u)

/** \brief  8364, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH13_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108364u)

/** \brief  8368, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH13_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108368u)

/** \brief  835C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH13_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010835Cu)

/** \brief  8344, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH13_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108344u)

/** \brief  8348, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH13_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108348u)

/** \brief  8358, TOM Channel Status Register */
#define GTM_TOM0_CH13_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108358u)

/** \brief  838C, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH14_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010838Cu)

/** \brief  8390, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH14_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108390u)

/** \brief  8394, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH14_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108394u)

/** \brief  8380, TOM Channel Control Register’ */
#define GTM_TOM0_CH14_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108380u)

/** \brief  83A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH14_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01083A0u)

/** \brief  83A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH14_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01083A4u)

/** \brief  83A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH14_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01083A8u)

/** \brief  839C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH14_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010839Cu)

/** \brief  8384, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH14_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108384u)

/** \brief  8388, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH14_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108388u)

/** \brief  8398, TOM Channel Status Register */
#define GTM_TOM0_CH14_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108398u)

/** \brief  83CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH15_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01083CCu)

/** \brief  83D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH15_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01083D0u)

/** \brief  83D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH15_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01083D4u)

/** \brief  83C0, TOM Channel Control Register’ */
#define GTM_TOM0_CH15_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01083C0u)

/** \brief  83E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH15_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01083E0u)

/** \brief  83E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH15_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01083E4u)

/** \brief  83E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH15_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01083E8u)

/** \brief  83DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH15_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01083DCu)

/** \brief  83C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH15_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01083C4u)

/** \brief  83C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH15_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01083C8u)

/** \brief  83D8, TOM Channel Status Register */
#define GTM_TOM0_CH15_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01083D8u)

/** \brief  804C, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010804Cu)

/** \brief  8050, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108050u)

/** \brief  8054, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108054u)

/** \brief  8040, TOM Channel Control Register’ */
#define GTM_TOM0_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108040u)

/** \brief  8060, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108060u)

/** \brief  8064, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108064u)

/** \brief  8068, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108068u)

/** \brief  805C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010805Cu)

/** \brief  8044, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108044u)

/** \brief  8048, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108048u)

/** \brief  8058, TOM Channel Status Register */
#define GTM_TOM0_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108058u)

/** \brief  808C, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010808Cu)

/** \brief  8090, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108090u)

/** \brief  8094, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108094u)

/** \brief  8080, TOM Channel Control Register’ */
#define GTM_TOM0_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108080u)

/** \brief  80A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01080A0u)

/** \brief  80A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01080A4u)

/** \brief  80A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01080A8u)

/** \brief  809C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010809Cu)

/** \brief  8084, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108084u)

/** \brief  8088, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108088u)

/** \brief  8098, TOM Channel Status Register */
#define GTM_TOM0_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108098u)

/** \brief  80CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01080CCu)

/** \brief  80D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01080D0u)

/** \brief  80D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01080D4u)

/** \brief  80C0, TOM Channel Control Register’ */
#define GTM_TOM0_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01080C0u)

/** \brief  80E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01080E0u)

/** \brief  80E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01080E4u)

/** \brief  80E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01080E8u)

/** \brief  80DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01080DCu)

/** \brief  80C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01080C4u)

/** \brief  80C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01080C8u)

/** \brief  80D8, TOM Channel Status Register */
#define GTM_TOM0_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01080D8u)

/** \brief  810C, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010810Cu)

/** \brief  8110, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108110u)

/** \brief  8114, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108114u)

/** \brief  8100, TOM Channel Control Register’ */
#define GTM_TOM0_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108100u)

/** \brief  8120, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108120u)

/** \brief  8124, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108124u)

/** \brief  8128, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108128u)

/** \brief  811C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010811Cu)

/** \brief  8104, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108104u)

/** \brief  8108, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108108u)

/** \brief  8118, TOM Channel Status Register */
#define GTM_TOM0_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108118u)

/** \brief  814C, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010814Cu)

/** \brief  8150, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108150u)

/** \brief  8154, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108154u)

/** \brief  8140, TOM Channel Control Register’ */
#define GTM_TOM0_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108140u)

/** \brief  8160, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108160u)

/** \brief  8164, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108164u)

/** \brief  8168, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108168u)

/** \brief  815C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010815Cu)

/** \brief  8144, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108144u)

/** \brief  8148, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108148u)

/** \brief  8158, TOM Channel Status Register */
#define GTM_TOM0_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108158u)

/** \brief  818C, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010818Cu)

/** \brief  8190, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108190u)

/** \brief  8194, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108194u)

/** \brief  8180, TOM Channel Control Register’ */
#define GTM_TOM0_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108180u)

/** \brief  81A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01081A0u)

/** \brief  81A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01081A4u)

/** \brief  81A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01081A8u)

/** \brief  819C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010819Cu)

/** \brief  8184, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108184u)

/** \brief  8188, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108188u)

/** \brief  8198, TOM Channel Status Register */
#define GTM_TOM0_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108198u)

/** \brief  81CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01081CCu)

/** \brief  81D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01081D0u)

/** \brief  81D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01081D4u)

/** \brief  81C0, TOM Channel Control Register’ */
#define GTM_TOM0_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01081C0u)

/** \brief  81E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01081E0u)

/** \brief  81E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01081E4u)

/** \brief  81E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01081E8u)

/** \brief  81DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01081DCu)

/** \brief  81C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01081C4u)

/** \brief  81C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01081C8u)

/** \brief  81D8, TOM Channel Status Register */
#define GTM_TOM0_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01081D8u)

/** \brief  820C, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH8_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010820Cu)

/** \brief  8210, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH8_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108210u)

/** \brief  8214, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH8_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108214u)

/** \brief  8200, TOM Channel Control Register’ */
#define GTM_TOM0_CH8_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108200u)

/** \brief  8220, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH8_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108220u)

/** \brief  8224, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH8_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108224u)

/** \brief  8228, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH8_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108228u)

/** \brief  821C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH8_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010821Cu)

/** \brief  8204, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH8_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108204u)

/** \brief  8208, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH8_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108208u)

/** \brief  8218, TOM Channel Status Register */
#define GTM_TOM0_CH8_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108218u)

/** \brief  824C, TOM Channel CCU0 Compare Register */
#define GTM_TOM0_CH9_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010824Cu)

/** \brief  8250, TOM Channel CCU1 Compare Register */
#define GTM_TOM0_CH9_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108250u)

/** \brief  8254, TOM Channel CCU0 Counter Register */
#define GTM_TOM0_CH9_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108254u)

/** \brief  8240, TOM Channel Control Register’ */
#define GTM_TOM0_CH9_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108240u)

/** \brief  8260, TOM Channel Interrupt Enable Register */
#define GTM_TOM0_CH9_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108260u)

/** \brief  8264, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM0_CH9_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108264u)

/** \brief  8268, TOM IRQ Mode Configuration Register */
#define GTM_TOM0_CH9_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108268u)

/** \brief  825C, TOM Channel Interrupt Notification Register */
#define GTM_TOM0_CH9_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010825Cu)

/** \brief  8244, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM0_CH9_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108244u)

/** \brief  8248, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM0_CH9_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108248u)

/** \brief  8258, TOM Channel Status Register */
#define GTM_TOM0_CH9_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108258u)

/** \brief  8034, TOM TGC0 Action Time Base Register */
#define GTM_TOM0_TGC0_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ACT_TB*)0xF0108034u)

/** \brief  8070, TOM TGC0 Enable/Disable Control Register */
#define GTM_TOM0_TGC0_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ENDIS_CTRL*)0xF0108070u)

/** \brief  8074, TOM TGC0 Enable/Disable Status Register */
#define GTM_TOM0_TGC0_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ENDIS_STAT*)0xF0108074u)

/** \brief  8038, TOM TGC0 Force Update Control Register */
#define GTM_TOM0_TGC0_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_FUPD_CTRL*)0xF0108038u)

/** \brief  8030, TOM TGC0 Global Control Register */
#define GTM_TOM0_TGC0_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_GLB_CTRL*)0xF0108030u)

/** \brief  803C, TOM TGC0 Internal Trigger Control Register */
#define GTM_TOM0_TGC0_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_INT_TRIG*)0xF010803Cu)

/** \brief  8078, TOM TGC0 Output Enable Control Register */
#define GTM_TOM0_TGC0_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_OUTEN_CTRL*)0xF0108078u)

/** \brief  807C, TOM TGC0 Output Enable Status Register */
#define GTM_TOM0_TGC0_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_OUTEN_STAT*)0xF010807Cu)

/** \brief  8234, TOM TGC1 Action Time Base Register */
#define GTM_TOM0_TGC1_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ACT_TB*)0xF0108234u)

/** \brief  8270, TOM TGC1 Enable/Disable Control Register */
#define GTM_TOM0_TGC1_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ENDIS_CTRL*)0xF0108270u)

/** \brief  8274, TOM TGC1 Enable/Disable Status Register */
#define GTM_TOM0_TGC1_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ENDIS_STAT*)0xF0108274u)

/** \brief  8238, TOM TGC1 Force Update Control Register */
#define GTM_TOM0_TGC1_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_FUPD_CTRL*)0xF0108238u)

/** \brief  8230, TOM TGC1 Global Control Register */
#define GTM_TOM0_TGC1_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_GLB_CTRL*)0xF0108230u)

/** \brief  823C, TOM TGC1 Internal Trigger Control Register */
#define GTM_TOM0_TGC1_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_INT_TRIG*)0xF010823Cu)

/** \brief  8278, TOM TGC1 Output Enable Control Register */
#define GTM_TOM0_TGC1_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_OUTEN_CTRL*)0xF0108278u)

/** \brief  827C, TOM TGC1 Output Enable Status Register */
#define GTM_TOM0_TGC1_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_OUTEN_STAT*)0xF010827Cu)

/** \brief  880C, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010880Cu)

/** \brief  8810, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108810u)

/** \brief  8814, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108814u)

/** \brief  8800, TOM Channel Control Register’ */
#define GTM_TOM1_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108800u)

/** \brief  8820, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108820u)

/** \brief  8824, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108824u)

/** \brief  8828, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108828u)

/** \brief  881C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010881Cu)

/** \brief  8804, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108804u)

/** \brief  8808, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108808u)

/** \brief  8818, TOM Channel Status Register */
#define GTM_TOM1_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108818u)

/** \brief  8A8C, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH10_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108A8Cu)

/** \brief  8A90, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH10_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108A90u)

/** \brief  8A94, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH10_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108A94u)

/** \brief  8A80, TOM Channel Control Register’ */
#define GTM_TOM1_CH10_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108A80u)

/** \brief  8AA0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH10_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108AA0u)

/** \brief  8AA4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH10_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108AA4u)

/** \brief  8AA8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH10_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108AA8u)

/** \brief  8A9C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH10_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108A9Cu)

/** \brief  8A84, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH10_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108A84u)

/** \brief  8A88, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH10_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108A88u)

/** \brief  8A98, TOM Channel Status Register */
#define GTM_TOM1_CH10_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108A98u)

/** \brief  8ACC, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH11_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108ACCu)

/** \brief  8AD0, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH11_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108AD0u)

/** \brief  8AD4, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH11_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108AD4u)

/** \brief  8AC0, TOM Channel Control Register’ */
#define GTM_TOM1_CH11_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108AC0u)

/** \brief  8AE0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH11_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108AE0u)

/** \brief  8AE4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH11_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108AE4u)

/** \brief  8AE8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH11_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108AE8u)

/** \brief  8ADC, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH11_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108ADCu)

/** \brief  8AC4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH11_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108AC4u)

/** \brief  8AC8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH11_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108AC8u)

/** \brief  8AD8, TOM Channel Status Register */
#define GTM_TOM1_CH11_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108AD8u)

/** \brief  8B0C, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH12_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108B0Cu)

/** \brief  8B10, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH12_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108B10u)

/** \brief  8B14, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH12_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108B14u)

/** \brief  8B00, TOM Channel Control Register’ */
#define GTM_TOM1_CH12_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108B00u)

/** \brief  8B20, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH12_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108B20u)

/** \brief  8B24, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH12_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108B24u)

/** \brief  8B28, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH12_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108B28u)

/** \brief  8B1C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH12_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108B1Cu)

/** \brief  8B04, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH12_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108B04u)

/** \brief  8B08, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH12_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108B08u)

/** \brief  8B18, TOM Channel Status Register */
#define GTM_TOM1_CH12_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108B18u)

/** \brief  8B4C, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH13_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108B4Cu)

/** \brief  8B50, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH13_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108B50u)

/** \brief  8B54, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH13_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108B54u)

/** \brief  8B40, TOM Channel Control Register’ */
#define GTM_TOM1_CH13_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108B40u)

/** \brief  8B60, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH13_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108B60u)

/** \brief  8B64, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH13_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108B64u)

/** \brief  8B68, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH13_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108B68u)

/** \brief  8B5C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH13_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108B5Cu)

/** \brief  8B44, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH13_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108B44u)

/** \brief  8B48, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH13_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108B48u)

/** \brief  8B58, TOM Channel Status Register */
#define GTM_TOM1_CH13_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108B58u)

/** \brief  8B8C, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH14_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108B8Cu)

/** \brief  8B90, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH14_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108B90u)

/** \brief  8B94, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH14_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108B94u)

/** \brief  8B80, TOM Channel Control Register’ */
#define GTM_TOM1_CH14_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108B80u)

/** \brief  8BA0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH14_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108BA0u)

/** \brief  8BA4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH14_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108BA4u)

/** \brief  8BA8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH14_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108BA8u)

/** \brief  8B9C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH14_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108B9Cu)

/** \brief  8B84, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH14_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108B84u)

/** \brief  8B88, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH14_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108B88u)

/** \brief  8B98, TOM Channel Status Register */
#define GTM_TOM1_CH14_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108B98u)

/** \brief  8BCC, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH15_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108BCCu)

/** \brief  8BD0, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH15_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108BD0u)

/** \brief  8BD4, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH15_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108BD4u)

/** \brief  8BC0, TOM Channel Control Register’ */
#define GTM_TOM1_CH15_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108BC0u)

/** \brief  8BE0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH15_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108BE0u)

/** \brief  8BE4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH15_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108BE4u)

/** \brief  8BE8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH15_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108BE8u)

/** \brief  8BDC, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH15_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108BDCu)

/** \brief  8BC4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH15_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108BC4u)

/** \brief  8BC8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH15_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108BC8u)

/** \brief  8BD8, TOM Channel Status Register */
#define GTM_TOM1_CH15_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108BD8u)

/** \brief  884C, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010884Cu)

/** \brief  8850, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108850u)

/** \brief  8854, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108854u)

/** \brief  8840, TOM Channel Control Register’ */
#define GTM_TOM1_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108840u)

/** \brief  8860, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108860u)

/** \brief  8864, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108864u)

/** \brief  8868, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108868u)

/** \brief  885C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010885Cu)

/** \brief  8844, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108844u)

/** \brief  8848, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108848u)

/** \brief  8858, TOM Channel Status Register */
#define GTM_TOM1_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108858u)

/** \brief  888C, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010888Cu)

/** \brief  8890, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108890u)

/** \brief  8894, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108894u)

/** \brief  8880, TOM Channel Control Register’ */
#define GTM_TOM1_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108880u)

/** \brief  88A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01088A0u)

/** \brief  88A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01088A4u)

/** \brief  88A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01088A8u)

/** \brief  889C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010889Cu)

/** \brief  8884, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108884u)

/** \brief  8888, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108888u)

/** \brief  8898, TOM Channel Status Register */
#define GTM_TOM1_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108898u)

/** \brief  88CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01088CCu)

/** \brief  88D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01088D0u)

/** \brief  88D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01088D4u)

/** \brief  88C0, TOM Channel Control Register’ */
#define GTM_TOM1_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01088C0u)

/** \brief  88E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01088E0u)

/** \brief  88E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01088E4u)

/** \brief  88E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01088E8u)

/** \brief  88DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01088DCu)

/** \brief  88C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01088C4u)

/** \brief  88C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01088C8u)

/** \brief  88D8, TOM Channel Status Register */
#define GTM_TOM1_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01088D8u)

/** \brief  890C, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010890Cu)

/** \brief  8910, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108910u)

/** \brief  8914, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108914u)

/** \brief  8900, TOM Channel Control Register’ */
#define GTM_TOM1_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108900u)

/** \brief  8920, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108920u)

/** \brief  8924, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108924u)

/** \brief  8928, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108928u)

/** \brief  891C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010891Cu)

/** \brief  8904, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108904u)

/** \brief  8908, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108908u)

/** \brief  8918, TOM Channel Status Register */
#define GTM_TOM1_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108918u)

/** \brief  894C, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010894Cu)

/** \brief  8950, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108950u)

/** \brief  8954, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108954u)

/** \brief  8940, TOM Channel Control Register’ */
#define GTM_TOM1_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108940u)

/** \brief  8960, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108960u)

/** \brief  8964, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108964u)

/** \brief  8968, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108968u)

/** \brief  895C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010895Cu)

/** \brief  8944, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108944u)

/** \brief  8948, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108948u)

/** \brief  8958, TOM Channel Status Register */
#define GTM_TOM1_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108958u)

/** \brief  898C, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010898Cu)

/** \brief  8990, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108990u)

/** \brief  8994, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108994u)

/** \brief  8980, TOM Channel Control Register’ */
#define GTM_TOM1_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108980u)

/** \brief  89A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01089A0u)

/** \brief  89A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01089A4u)

/** \brief  89A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01089A8u)

/** \brief  899C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010899Cu)

/** \brief  8984, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108984u)

/** \brief  8988, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108988u)

/** \brief  8998, TOM Channel Status Register */
#define GTM_TOM1_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108998u)

/** \brief  89CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01089CCu)

/** \brief  89D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01089D0u)

/** \brief  89D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01089D4u)

/** \brief  89C0, TOM Channel Control Register’ */
#define GTM_TOM1_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01089C0u)

/** \brief  89E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01089E0u)

/** \brief  89E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01089E4u)

/** \brief  89E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01089E8u)

/** \brief  89DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01089DCu)

/** \brief  89C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01089C4u)

/** \brief  89C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01089C8u)

/** \brief  89D8, TOM Channel Status Register */
#define GTM_TOM1_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01089D8u)

/** \brief  8A0C, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH8_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108A0Cu)

/** \brief  8A10, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH8_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108A10u)

/** \brief  8A14, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH8_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108A14u)

/** \brief  8A00, TOM Channel Control Register’ */
#define GTM_TOM1_CH8_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108A00u)

/** \brief  8A20, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH8_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108A20u)

/** \brief  8A24, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH8_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108A24u)

/** \brief  8A28, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH8_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108A28u)

/** \brief  8A1C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH8_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108A1Cu)

/** \brief  8A04, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH8_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108A04u)

/** \brief  8A08, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH8_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108A08u)

/** \brief  8A18, TOM Channel Status Register */
#define GTM_TOM1_CH8_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108A18u)

/** \brief  8A4C, TOM Channel CCU0 Compare Register */
#define GTM_TOM1_CH9_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0108A4Cu)

/** \brief  8A50, TOM Channel CCU1 Compare Register */
#define GTM_TOM1_CH9_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0108A50u)

/** \brief  8A54, TOM Channel CCU0 Counter Register */
#define GTM_TOM1_CH9_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0108A54u)

/** \brief  8A40, TOM Channel Control Register’ */
#define GTM_TOM1_CH9_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0108A40u)

/** \brief  8A60, TOM Channel Interrupt Enable Register */
#define GTM_TOM1_CH9_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0108A60u)

/** \brief  8A64, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM1_CH9_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0108A64u)

/** \brief  8A68, TOM IRQ Mode Configuration Register */
#define GTM_TOM1_CH9_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0108A68u)

/** \brief  8A5C, TOM Channel Interrupt Notification Register */
#define GTM_TOM1_CH9_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0108A5Cu)

/** \brief  8A44, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM1_CH9_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0108A44u)

/** \brief  8A48, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM1_CH9_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0108A48u)

/** \brief  8A58, TOM Channel Status Register */
#define GTM_TOM1_CH9_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0108A58u)

/** \brief  8834, TOM TGC0 Action Time Base Register */
#define GTM_TOM1_TGC0_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ACT_TB*)0xF0108834u)

/** \brief  8870, TOM TGC0 Enable/Disable Control Register */
#define GTM_TOM1_TGC0_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ENDIS_CTRL*)0xF0108870u)

/** \brief  8874, TOM TGC0 Enable/Disable Status Register */
#define GTM_TOM1_TGC0_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ENDIS_STAT*)0xF0108874u)

/** \brief  8838, TOM TGC0 Force Update Control Register */
#define GTM_TOM1_TGC0_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_FUPD_CTRL*)0xF0108838u)

/** \brief  8830, TOM TGC0 Global Control Register */
#define GTM_TOM1_TGC0_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_GLB_CTRL*)0xF0108830u)

/** \brief  883C, TOM TGC0 Internal Trigger Control Register */
#define GTM_TOM1_TGC0_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_INT_TRIG*)0xF010883Cu)

/** \brief  8878, TOM TGC0 Output Enable Control Register */
#define GTM_TOM1_TGC0_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_OUTEN_CTRL*)0xF0108878u)

/** \brief  887C, TOM TGC0 Output Enable Status Register */
#define GTM_TOM1_TGC0_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_OUTEN_STAT*)0xF010887Cu)

/** \brief  8A34, TOM TGC1 Action Time Base Register */
#define GTM_TOM1_TGC1_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ACT_TB*)0xF0108A34u)

/** \brief  8A70, TOM TGC1 Enable/Disable Control Register */
#define GTM_TOM1_TGC1_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ENDIS_CTRL*)0xF0108A70u)

/** \brief  8A74, TOM TGC1 Enable/Disable Status Register */
#define GTM_TOM1_TGC1_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ENDIS_STAT*)0xF0108A74u)

/** \brief  8A38, TOM TGC1 Force Update Control Register */
#define GTM_TOM1_TGC1_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_FUPD_CTRL*)0xF0108A38u)

/** \brief  8A30, TOM TGC1 Global Control Register */
#define GTM_TOM1_TGC1_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_GLB_CTRL*)0xF0108A30u)

/** \brief  8A3C, TOM TGC1 Internal Trigger Control Register */
#define GTM_TOM1_TGC1_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_INT_TRIG*)0xF0108A3Cu)

/** \brief  8A78, TOM TGC1 Output Enable Control Register */
#define GTM_TOM1_TGC1_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_OUTEN_CTRL*)0xF0108A78u)

/** \brief  8A7C, TOM TGC1 Output Enable Status Register */
#define GTM_TOM1_TGC1_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_OUTEN_STAT*)0xF0108A7Cu)

/** \brief  900C, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010900Cu)

/** \brief  9010, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109010u)

/** \brief  9014, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109014u)

/** \brief  9000, TOM Channel Control Register’ */
#define GTM_TOM2_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109000u)

/** \brief  9020, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109020u)

/** \brief  9024, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109024u)

/** \brief  9028, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109028u)

/** \brief  901C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010901Cu)

/** \brief  9004, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109004u)

/** \brief  9008, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109008u)

/** \brief  9018, TOM Channel Status Register */
#define GTM_TOM2_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109018u)

/** \brief  928C, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH10_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010928Cu)

/** \brief  9290, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH10_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109290u)

/** \brief  9294, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH10_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109294u)

/** \brief  9280, TOM Channel Control Register’ */
#define GTM_TOM2_CH10_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109280u)

/** \brief  92A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH10_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01092A0u)

/** \brief  92A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH10_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01092A4u)

/** \brief  92A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH10_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01092A8u)

/** \brief  929C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH10_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010929Cu)

/** \brief  9284, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH10_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109284u)

/** \brief  9288, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH10_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109288u)

/** \brief  9298, TOM Channel Status Register */
#define GTM_TOM2_CH10_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109298u)

/** \brief  92CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH11_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01092CCu)

/** \brief  92D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH11_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01092D0u)

/** \brief  92D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH11_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01092D4u)

/** \brief  92C0, TOM Channel Control Register’ */
#define GTM_TOM2_CH11_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01092C0u)

/** \brief  92E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH11_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01092E0u)

/** \brief  92E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH11_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01092E4u)

/** \brief  92E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH11_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01092E8u)

/** \brief  92DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH11_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01092DCu)

/** \brief  92C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH11_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01092C4u)

/** \brief  92C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH11_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01092C8u)

/** \brief  92D8, TOM Channel Status Register */
#define GTM_TOM2_CH11_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01092D8u)

/** \brief  930C, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH12_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010930Cu)

/** \brief  9310, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH12_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109310u)

/** \brief  9314, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH12_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109314u)

/** \brief  9300, TOM Channel Control Register’ */
#define GTM_TOM2_CH12_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109300u)

/** \brief  9320, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH12_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109320u)

/** \brief  9324, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH12_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109324u)

/** \brief  9328, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH12_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109328u)

/** \brief  931C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH12_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010931Cu)

/** \brief  9304, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH12_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109304u)

/** \brief  9308, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH12_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109308u)

/** \brief  9318, TOM Channel Status Register */
#define GTM_TOM2_CH12_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109318u)

/** \brief  934C, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH13_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010934Cu)

/** \brief  9350, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH13_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109350u)

/** \brief  9354, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH13_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109354u)

/** \brief  9340, TOM Channel Control Register’ */
#define GTM_TOM2_CH13_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109340u)

/** \brief  9360, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH13_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109360u)

/** \brief  9364, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH13_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109364u)

/** \brief  9368, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH13_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109368u)

/** \brief  935C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH13_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010935Cu)

/** \brief  9344, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH13_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109344u)

/** \brief  9348, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH13_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109348u)

/** \brief  9358, TOM Channel Status Register */
#define GTM_TOM2_CH13_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109358u)

/** \brief  938C, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH14_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010938Cu)

/** \brief  9390, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH14_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109390u)

/** \brief  9394, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH14_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109394u)

/** \brief  9380, TOM Channel Control Register’ */
#define GTM_TOM2_CH14_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109380u)

/** \brief  93A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH14_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01093A0u)

/** \brief  93A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH14_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01093A4u)

/** \brief  93A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH14_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01093A8u)

/** \brief  939C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH14_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010939Cu)

/** \brief  9384, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH14_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109384u)

/** \brief  9388, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH14_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109388u)

/** \brief  9398, TOM Channel Status Register */
#define GTM_TOM2_CH14_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109398u)

/** \brief  93CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH15_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01093CCu)

/** \brief  93D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH15_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01093D0u)

/** \brief  93D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH15_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01093D4u)

/** \brief  93C0, TOM Channel Control Register’ */
#define GTM_TOM2_CH15_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01093C0u)

/** \brief  93E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH15_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01093E0u)

/** \brief  93E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH15_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01093E4u)

/** \brief  93E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH15_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01093E8u)

/** \brief  93DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH15_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01093DCu)

/** \brief  93C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH15_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01093C4u)

/** \brief  93C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH15_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01093C8u)

/** \brief  93D8, TOM Channel Status Register */
#define GTM_TOM2_CH15_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01093D8u)

/** \brief  904C, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010904Cu)

/** \brief  9050, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109050u)

/** \brief  9054, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109054u)

/** \brief  9040, TOM Channel Control Register’ */
#define GTM_TOM2_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109040u)

/** \brief  9060, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109060u)

/** \brief  9064, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109064u)

/** \brief  9068, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109068u)

/** \brief  905C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010905Cu)

/** \brief  9044, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109044u)

/** \brief  9048, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109048u)

/** \brief  9058, TOM Channel Status Register */
#define GTM_TOM2_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109058u)

/** \brief  908C, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010908Cu)

/** \brief  9090, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109090u)

/** \brief  9094, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109094u)

/** \brief  9080, TOM Channel Control Register’ */
#define GTM_TOM2_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109080u)

/** \brief  90A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01090A0u)

/** \brief  90A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01090A4u)

/** \brief  90A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01090A8u)

/** \brief  909C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010909Cu)

/** \brief  9084, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109084u)

/** \brief  9088, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109088u)

/** \brief  9098, TOM Channel Status Register */
#define GTM_TOM2_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109098u)

/** \brief  90CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01090CCu)

/** \brief  90D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01090D0u)

/** \brief  90D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01090D4u)

/** \brief  90C0, TOM Channel Control Register’ */
#define GTM_TOM2_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01090C0u)

/** \brief  90E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01090E0u)

/** \brief  90E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01090E4u)

/** \brief  90E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01090E8u)

/** \brief  90DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01090DCu)

/** \brief  90C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01090C4u)

/** \brief  90C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01090C8u)

/** \brief  90D8, TOM Channel Status Register */
#define GTM_TOM2_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01090D8u)

/** \brief  910C, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010910Cu)

/** \brief  9110, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109110u)

/** \brief  9114, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109114u)

/** \brief  9100, TOM Channel Control Register’ */
#define GTM_TOM2_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109100u)

/** \brief  9120, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109120u)

/** \brief  9124, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109124u)

/** \brief  9128, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109128u)

/** \brief  911C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010911Cu)

/** \brief  9104, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109104u)

/** \brief  9108, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109108u)

/** \brief  9118, TOM Channel Status Register */
#define GTM_TOM2_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109118u)

/** \brief  914C, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010914Cu)

/** \brief  9150, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109150u)

/** \brief  9154, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109154u)

/** \brief  9140, TOM Channel Control Register’ */
#define GTM_TOM2_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109140u)

/** \brief  9160, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109160u)

/** \brief  9164, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109164u)

/** \brief  9168, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109168u)

/** \brief  915C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010915Cu)

/** \brief  9144, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109144u)

/** \brief  9148, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109148u)

/** \brief  9158, TOM Channel Status Register */
#define GTM_TOM2_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109158u)

/** \brief  918C, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010918Cu)

/** \brief  9190, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109190u)

/** \brief  9194, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109194u)

/** \brief  9180, TOM Channel Control Register’ */
#define GTM_TOM2_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109180u)

/** \brief  91A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01091A0u)

/** \brief  91A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01091A4u)

/** \brief  91A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01091A8u)

/** \brief  919C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010919Cu)

/** \brief  9184, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109184u)

/** \brief  9188, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109188u)

/** \brief  9198, TOM Channel Status Register */
#define GTM_TOM2_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109198u)

/** \brief  91CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01091CCu)

/** \brief  91D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01091D0u)

/** \brief  91D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01091D4u)

/** \brief  91C0, TOM Channel Control Register’ */
#define GTM_TOM2_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01091C0u)

/** \brief  91E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01091E0u)

/** \brief  91E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01091E4u)

/** \brief  91E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01091E8u)

/** \brief  91DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01091DCu)

/** \brief  91C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01091C4u)

/** \brief  91C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01091C8u)

/** \brief  91D8, TOM Channel Status Register */
#define GTM_TOM2_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01091D8u)

/** \brief  920C, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH8_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010920Cu)

/** \brief  9210, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH8_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109210u)

/** \brief  9214, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH8_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109214u)

/** \brief  9200, TOM Channel Control Register’ */
#define GTM_TOM2_CH8_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109200u)

/** \brief  9220, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH8_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109220u)

/** \brief  9224, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH8_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109224u)

/** \brief  9228, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH8_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109228u)

/** \brief  921C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH8_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010921Cu)

/** \brief  9204, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH8_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109204u)

/** \brief  9208, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH8_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109208u)

/** \brief  9218, TOM Channel Status Register */
#define GTM_TOM2_CH8_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109218u)

/** \brief  924C, TOM Channel CCU0 Compare Register */
#define GTM_TOM2_CH9_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010924Cu)

/** \brief  9250, TOM Channel CCU1 Compare Register */
#define GTM_TOM2_CH9_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109250u)

/** \brief  9254, TOM Channel CCU0 Counter Register */
#define GTM_TOM2_CH9_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109254u)

/** \brief  9240, TOM Channel Control Register’ */
#define GTM_TOM2_CH9_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109240u)

/** \brief  9260, TOM Channel Interrupt Enable Register */
#define GTM_TOM2_CH9_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109260u)

/** \brief  9264, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM2_CH9_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109264u)

/** \brief  9268, TOM IRQ Mode Configuration Register */
#define GTM_TOM2_CH9_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109268u)

/** \brief  925C, TOM Channel Interrupt Notification Register */
#define GTM_TOM2_CH9_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010925Cu)

/** \brief  9244, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM2_CH9_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109244u)

/** \brief  9248, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM2_CH9_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109248u)

/** \brief  9258, TOM Channel Status Register */
#define GTM_TOM2_CH9_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109258u)

/** \brief  9034, TOM TGC0 Action Time Base Register */
#define GTM_TOM2_TGC0_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ACT_TB*)0xF0109034u)

/** \brief  9070, TOM TGC0 Enable/Disable Control Register */
#define GTM_TOM2_TGC0_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ENDIS_CTRL*)0xF0109070u)

/** \brief  9074, TOM TGC0 Enable/Disable Status Register */
#define GTM_TOM2_TGC0_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ENDIS_STAT*)0xF0109074u)

/** \brief  9038, TOM TGC0 Force Update Control Register */
#define GTM_TOM2_TGC0_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_FUPD_CTRL*)0xF0109038u)

/** \brief  9030, TOM TGC0 Global Control Register */
#define GTM_TOM2_TGC0_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_GLB_CTRL*)0xF0109030u)

/** \brief  903C, TOM TGC0 Internal Trigger Control Register */
#define GTM_TOM2_TGC0_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_INT_TRIG*)0xF010903Cu)

/** \brief  9078, TOM TGC0 Output Enable Control Register */
#define GTM_TOM2_TGC0_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_OUTEN_CTRL*)0xF0109078u)

/** \brief  907C, TOM TGC0 Output Enable Status Register */
#define GTM_TOM2_TGC0_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_OUTEN_STAT*)0xF010907Cu)

/** \brief  9234, TOM TGC1 Action Time Base Register */
#define GTM_TOM2_TGC1_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ACT_TB*)0xF0109234u)

/** \brief  9270, TOM TGC1 Enable/Disable Control Register */
#define GTM_TOM2_TGC1_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ENDIS_CTRL*)0xF0109270u)

/** \brief  9274, TOM TGC1 Enable/Disable Status Register */
#define GTM_TOM2_TGC1_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ENDIS_STAT*)0xF0109274u)

/** \brief  9238, TOM TGC1 Force Update Control Register */
#define GTM_TOM2_TGC1_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_FUPD_CTRL*)0xF0109238u)

/** \brief  9230, TOM TGC1 Global Control Register */
#define GTM_TOM2_TGC1_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_GLB_CTRL*)0xF0109230u)

/** \brief  923C, TOM TGC1 Internal Trigger Control Register */
#define GTM_TOM2_TGC1_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_INT_TRIG*)0xF010923Cu)

/** \brief  9278, TOM TGC1 Output Enable Control Register */
#define GTM_TOM2_TGC1_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_OUTEN_CTRL*)0xF0109278u)

/** \brief  927C, TOM TGC1 Output Enable Status Register */
#define GTM_TOM2_TGC1_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_OUTEN_STAT*)0xF010927Cu)

/** \brief  980C, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010980Cu)

/** \brief  9810, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109810u)

/** \brief  9814, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109814u)

/** \brief  9800, TOM Channel Control Register’ */
#define GTM_TOM3_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109800u)

/** \brief  9820, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109820u)

/** \brief  9824, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109824u)

/** \brief  9828, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109828u)

/** \brief  981C, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010981Cu)

/** \brief  9804, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109804u)

/** \brief  9808, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109808u)

/** \brief  9818, TOM Channel Status Register */
#define GTM_TOM3_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109818u)

/** \brief  9A8C, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH10_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109A8Cu)

/** \brief  9A90, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH10_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109A90u)

/** \brief  9A94, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH10_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109A94u)

/** \brief  9A80, TOM Channel Control Register’ */
#define GTM_TOM3_CH10_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109A80u)

/** \brief  9AA0, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH10_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109AA0u)

/** \brief  9AA4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH10_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109AA4u)

/** \brief  9AA8, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH10_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109AA8u)

/** \brief  9A9C, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH10_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0109A9Cu)

/** \brief  9A84, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH10_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109A84u)

/** \brief  9A88, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH10_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109A88u)

/** \brief  9A98, TOM Channel Status Register */
#define GTM_TOM3_CH10_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109A98u)

/** \brief  9ACC, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH11_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109ACCu)

/** \brief  9AD0, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH11_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109AD0u)

/** \brief  9AD4, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH11_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109AD4u)

/** \brief  9AC0, TOM Channel Control Register’ */
#define GTM_TOM3_CH11_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109AC0u)

/** \brief  9AE0, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH11_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109AE0u)

/** \brief  9AE4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH11_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109AE4u)

/** \brief  9AE8, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH11_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109AE8u)

/** \brief  9ADC, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH11_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0109ADCu)

/** \brief  9AC4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH11_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109AC4u)

/** \brief  9AC8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH11_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109AC8u)

/** \brief  9AD8, TOM Channel Status Register */
#define GTM_TOM3_CH11_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109AD8u)

/** \brief  9B0C, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH12_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109B0Cu)

/** \brief  9B10, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH12_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109B10u)

/** \brief  9B14, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH12_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109B14u)

/** \brief  9B00, TOM Channel Control Register’ */
#define GTM_TOM3_CH12_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109B00u)

/** \brief  9B20, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH12_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109B20u)

/** \brief  9B24, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH12_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109B24u)

/** \brief  9B28, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH12_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109B28u)

/** \brief  9B1C, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH12_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0109B1Cu)

/** \brief  9B04, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH12_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109B04u)

/** \brief  9B08, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH12_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109B08u)

/** \brief  9B18, TOM Channel Status Register */
#define GTM_TOM3_CH12_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109B18u)

/** \brief  9B4C, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH13_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109B4Cu)

/** \brief  9B50, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH13_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109B50u)

/** \brief  9B54, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH13_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109B54u)

/** \brief  9B40, TOM Channel Control Register’ */
#define GTM_TOM3_CH13_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109B40u)

/** \brief  9B60, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH13_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109B60u)

/** \brief  9B64, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH13_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109B64u)

/** \brief  9B68, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH13_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109B68u)

/** \brief  9B5C, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH13_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0109B5Cu)

/** \brief  9B44, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH13_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109B44u)

/** \brief  9B48, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH13_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109B48u)

/** \brief  9B58, TOM Channel Status Register */
#define GTM_TOM3_CH13_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109B58u)

/** \brief  9B8C, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH14_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109B8Cu)

/** \brief  9B90, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH14_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109B90u)

/** \brief  9B94, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH14_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109B94u)

/** \brief  9B80, TOM Channel Control Register’ */
#define GTM_TOM3_CH14_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109B80u)

/** \brief  9BA0, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH14_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109BA0u)

/** \brief  9BA4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH14_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109BA4u)

/** \brief  9BA8, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH14_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109BA8u)

/** \brief  9B9C, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH14_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0109B9Cu)

/** \brief  9B84, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH14_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109B84u)

/** \brief  9B88, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH14_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109B88u)

/** \brief  9B98, TOM Channel Status Register */
#define GTM_TOM3_CH14_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109B98u)

/** \brief  9BCC, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH15_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109BCCu)

/** \brief  9BD0, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH15_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109BD0u)

/** \brief  9BD4, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH15_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109BD4u)

/** \brief  9BC0, TOM Channel Control Register’ */
#define GTM_TOM3_CH15_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109BC0u)

/** \brief  9BE0, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH15_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109BE0u)

/** \brief  9BE4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH15_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109BE4u)

/** \brief  9BE8, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH15_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109BE8u)

/** \brief  9BDC, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH15_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0109BDCu)

/** \brief  9BC4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH15_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109BC4u)

/** \brief  9BC8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH15_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109BC8u)

/** \brief  9BD8, TOM Channel Status Register */
#define GTM_TOM3_CH15_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109BD8u)

/** \brief  984C, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010984Cu)

/** \brief  9850, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109850u)

/** \brief  9854, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109854u)

/** \brief  9840, TOM Channel Control Register’ */
#define GTM_TOM3_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109840u)

/** \brief  9860, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109860u)

/** \brief  9864, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109864u)

/** \brief  9868, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109868u)

/** \brief  985C, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010985Cu)

/** \brief  9844, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109844u)

/** \brief  9848, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109848u)

/** \brief  9858, TOM Channel Status Register */
#define GTM_TOM3_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109858u)

/** \brief  988C, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010988Cu)

/** \brief  9890, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109890u)

/** \brief  9894, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109894u)

/** \brief  9880, TOM Channel Control Register’ */
#define GTM_TOM3_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109880u)

/** \brief  98A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01098A0u)

/** \brief  98A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01098A4u)

/** \brief  98A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01098A8u)

/** \brief  989C, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010989Cu)

/** \brief  9884, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109884u)

/** \brief  9888, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109888u)

/** \brief  9898, TOM Channel Status Register */
#define GTM_TOM3_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109898u)

/** \brief  98CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01098CCu)

/** \brief  98D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01098D0u)

/** \brief  98D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01098D4u)

/** \brief  98C0, TOM Channel Control Register’ */
#define GTM_TOM3_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01098C0u)

/** \brief  98E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01098E0u)

/** \brief  98E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01098E4u)

/** \brief  98E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01098E8u)

/** \brief  98DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01098DCu)

/** \brief  98C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01098C4u)

/** \brief  98C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01098C8u)

/** \brief  98D8, TOM Channel Status Register */
#define GTM_TOM3_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01098D8u)

/** \brief  990C, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010990Cu)

/** \brief  9910, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109910u)

/** \brief  9914, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109914u)

/** \brief  9900, TOM Channel Control Register’ */
#define GTM_TOM3_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109900u)

/** \brief  9920, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109920u)

/** \brief  9924, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109924u)

/** \brief  9928, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109928u)

/** \brief  991C, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010991Cu)

/** \brief  9904, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109904u)

/** \brief  9908, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109908u)

/** \brief  9918, TOM Channel Status Register */
#define GTM_TOM3_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109918u)

/** \brief  994C, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010994Cu)

/** \brief  9950, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109950u)

/** \brief  9954, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109954u)

/** \brief  9940, TOM Channel Control Register’ */
#define GTM_TOM3_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109940u)

/** \brief  9960, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109960u)

/** \brief  9964, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109964u)

/** \brief  9968, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109968u)

/** \brief  995C, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010995Cu)

/** \brief  9944, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109944u)

/** \brief  9948, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109948u)

/** \brief  9958, TOM Channel Status Register */
#define GTM_TOM3_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109958u)

/** \brief  998C, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010998Cu)

/** \brief  9990, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109990u)

/** \brief  9994, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109994u)

/** \brief  9980, TOM Channel Control Register’ */
#define GTM_TOM3_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109980u)

/** \brief  99A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01099A0u)

/** \brief  99A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01099A4u)

/** \brief  99A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01099A8u)

/** \brief  999C, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010999Cu)

/** \brief  9984, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109984u)

/** \brief  9988, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109988u)

/** \brief  9998, TOM Channel Status Register */
#define GTM_TOM3_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109998u)

/** \brief  99CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF01099CCu)

/** \brief  99D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF01099D0u)

/** \brief  99D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF01099D4u)

/** \brief  99C0, TOM Channel Control Register’ */
#define GTM_TOM3_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF01099C0u)

/** \brief  99E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF01099E0u)

/** \brief  99E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF01099E4u)

/** \brief  99E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF01099E8u)

/** \brief  99DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF01099DCu)

/** \brief  99C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF01099C4u)

/** \brief  99C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF01099C8u)

/** \brief  99D8, TOM Channel Status Register */
#define GTM_TOM3_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF01099D8u)

/** \brief  9A0C, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH8_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109A0Cu)

/** \brief  9A10, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH8_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109A10u)

/** \brief  9A14, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH8_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109A14u)

/** \brief  9A00, TOM Channel Control Register’ */
#define GTM_TOM3_CH8_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109A00u)

/** \brief  9A20, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH8_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109A20u)

/** \brief  9A24, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH8_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109A24u)

/** \brief  9A28, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH8_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109A28u)

/** \brief  9A1C, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH8_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0109A1Cu)

/** \brief  9A04, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH8_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109A04u)

/** \brief  9A08, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH8_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109A08u)

/** \brief  9A18, TOM Channel Status Register */
#define GTM_TOM3_CH8_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109A18u)

/** \brief  9A4C, TOM Channel CCU0 Compare Register */
#define GTM_TOM3_CH9_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF0109A4Cu)

/** \brief  9A50, TOM Channel CCU1 Compare Register */
#define GTM_TOM3_CH9_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF0109A50u)

/** \brief  9A54, TOM Channel CCU0 Counter Register */
#define GTM_TOM3_CH9_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF0109A54u)

/** \brief  9A40, TOM Channel Control Register’ */
#define GTM_TOM3_CH9_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF0109A40u)

/** \brief  9A60, TOM Channel Interrupt Enable Register */
#define GTM_TOM3_CH9_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF0109A60u)

/** \brief  9A64, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM3_CH9_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF0109A64u)

/** \brief  9A68, TOM IRQ Mode Configuration Register */
#define GTM_TOM3_CH9_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF0109A68u)

/** \brief  9A5C, TOM Channel Interrupt Notification Register */
#define GTM_TOM3_CH9_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF0109A5Cu)

/** \brief  9A44, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM3_CH9_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF0109A44u)

/** \brief  9A48, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM3_CH9_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF0109A48u)

/** \brief  9A58, TOM Channel Status Register */
#define GTM_TOM3_CH9_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF0109A58u)

/** \brief  9834, TOM TGC0 Action Time Base Register */
#define GTM_TOM3_TGC0_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ACT_TB*)0xF0109834u)

/** \brief  9870, TOM TGC0 Enable/Disable Control Register */
#define GTM_TOM3_TGC0_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ENDIS_CTRL*)0xF0109870u)

/** \brief  9874, TOM TGC0 Enable/Disable Status Register */
#define GTM_TOM3_TGC0_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ENDIS_STAT*)0xF0109874u)

/** \brief  9838, TOM TGC0 Force Update Control Register */
#define GTM_TOM3_TGC0_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_FUPD_CTRL*)0xF0109838u)

/** \brief  9830, TOM TGC0 Global Control Register */
#define GTM_TOM3_TGC0_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_GLB_CTRL*)0xF0109830u)

/** \brief  983C, TOM TGC0 Internal Trigger Control Register */
#define GTM_TOM3_TGC0_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_INT_TRIG*)0xF010983Cu)

/** \brief  9878, TOM TGC0 Output Enable Control Register */
#define GTM_TOM3_TGC0_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_OUTEN_CTRL*)0xF0109878u)

/** \brief  987C, TOM TGC0 Output Enable Status Register */
#define GTM_TOM3_TGC0_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_OUTEN_STAT*)0xF010987Cu)

/** \brief  9A34, TOM TGC1 Action Time Base Register */
#define GTM_TOM3_TGC1_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ACT_TB*)0xF0109A34u)

/** \brief  9A70, TOM TGC1 Enable/Disable Control Register */
#define GTM_TOM3_TGC1_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ENDIS_CTRL*)0xF0109A70u)

/** \brief  9A74, TOM TGC1 Enable/Disable Status Register */
#define GTM_TOM3_TGC1_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ENDIS_STAT*)0xF0109A74u)

/** \brief  9A38, TOM TGC1 Force Update Control Register */
#define GTM_TOM3_TGC1_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_FUPD_CTRL*)0xF0109A38u)

/** \brief  9A30, TOM TGC1 Global Control Register */
#define GTM_TOM3_TGC1_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_GLB_CTRL*)0xF0109A30u)

/** \brief  9A3C, TOM TGC1 Internal Trigger Control Register */
#define GTM_TOM3_TGC1_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_INT_TRIG*)0xF0109A3Cu)

/** \brief  9A78, TOM TGC1 Output Enable Control Register */
#define GTM_TOM3_TGC1_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_OUTEN_CTRL*)0xF0109A78u)

/** \brief  9A7C, TOM TGC1 Output Enable Status Register */
#define GTM_TOM3_TGC1_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_OUTEN_STAT*)0xF0109A7Cu)

/** \brief  A00C, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH0_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A00Cu)

/** \brief  A010, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH0_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A010u)

/** \brief  A014, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH0_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A014u)

/** \brief  A000, TOM Channel Control Register’ */
#define GTM_TOM4_CH0_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A000u)

/** \brief  A020, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH0_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A020u)

/** \brief  A024, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH0_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A024u)

/** \brief  A028, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH0_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A028u)

/** \brief  A01C, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH0_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A01Cu)

/** \brief  A004, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH0_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A004u)

/** \brief  A008, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH0_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A008u)

/** \brief  A018, TOM Channel Status Register */
#define GTM_TOM4_CH0_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A018u)

/** \brief  A28C, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH10_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A28Cu)

/** \brief  A290, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH10_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A290u)

/** \brief  A294, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH10_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A294u)

/** \brief  A280, TOM Channel Control Register’ */
#define GTM_TOM4_CH10_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A280u)

/** \brief  A2A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH10_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A2A0u)

/** \brief  A2A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH10_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A2A4u)

/** \brief  A2A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH10_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A2A8u)

/** \brief  A29C, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH10_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A29Cu)

/** \brief  A284, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH10_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A284u)

/** \brief  A288, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH10_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A288u)

/** \brief  A298, TOM Channel Status Register */
#define GTM_TOM4_CH10_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A298u)

/** \brief  A2CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH11_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A2CCu)

/** \brief  A2D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH11_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A2D0u)

/** \brief  A2D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH11_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A2D4u)

/** \brief  A2C0, TOM Channel Control Register’ */
#define GTM_TOM4_CH11_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A2C0u)

/** \brief  A2E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH11_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A2E0u)

/** \brief  A2E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH11_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A2E4u)

/** \brief  A2E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH11_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A2E8u)

/** \brief  A2DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH11_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A2DCu)

/** \brief  A2C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH11_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A2C4u)

/** \brief  A2C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH11_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A2C8u)

/** \brief  A2D8, TOM Channel Status Register */
#define GTM_TOM4_CH11_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A2D8u)

/** \brief  A30C, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH12_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A30Cu)

/** \brief  A310, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH12_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A310u)

/** \brief  A314, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH12_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A314u)

/** \brief  A300, TOM Channel Control Register’ */
#define GTM_TOM4_CH12_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A300u)

/** \brief  A320, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH12_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A320u)

/** \brief  A324, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH12_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A324u)

/** \brief  A328, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH12_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A328u)

/** \brief  A31C, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH12_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A31Cu)

/** \brief  A304, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH12_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A304u)

/** \brief  A308, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH12_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A308u)

/** \brief  A318, TOM Channel Status Register */
#define GTM_TOM4_CH12_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A318u)

/** \brief  A34C, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH13_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A34Cu)

/** \brief  A350, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH13_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A350u)

/** \brief  A354, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH13_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A354u)

/** \brief  A340, TOM Channel Control Register’ */
#define GTM_TOM4_CH13_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A340u)

/** \brief  A360, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH13_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A360u)

/** \brief  A364, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH13_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A364u)

/** \brief  A368, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH13_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A368u)

/** \brief  A35C, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH13_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A35Cu)

/** \brief  A344, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH13_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A344u)

/** \brief  A348, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH13_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A348u)

/** \brief  A358, TOM Channel Status Register */
#define GTM_TOM4_CH13_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A358u)

/** \brief  A38C, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH14_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A38Cu)

/** \brief  A390, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH14_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A390u)

/** \brief  A394, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH14_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A394u)

/** \brief  A380, TOM Channel Control Register’ */
#define GTM_TOM4_CH14_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A380u)

/** \brief  A3A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH14_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A3A0u)

/** \brief  A3A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH14_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A3A4u)

/** \brief  A3A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH14_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A3A8u)

/** \brief  A39C, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH14_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A39Cu)

/** \brief  A384, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH14_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A384u)

/** \brief  A388, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH14_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A388u)

/** \brief  A398, TOM Channel Status Register */
#define GTM_TOM4_CH14_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A398u)

/** \brief  A3CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH15_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A3CCu)

/** \brief  A3D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH15_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A3D0u)

/** \brief  A3D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH15_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A3D4u)

/** \brief  A3C0, TOM Channel Control Register’ */
#define GTM_TOM4_CH15_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A3C0u)

/** \brief  A3E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH15_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A3E0u)

/** \brief  A3E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH15_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A3E4u)

/** \brief  A3E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH15_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A3E8u)

/** \brief  A3DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH15_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A3DCu)

/** \brief  A3C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH15_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A3C4u)

/** \brief  A3C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH15_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A3C8u)

/** \brief  A3D8, TOM Channel Status Register */
#define GTM_TOM4_CH15_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A3D8u)

/** \brief  A04C, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH1_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A04Cu)

/** \brief  A050, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH1_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A050u)

/** \brief  A054, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH1_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A054u)

/** \brief  A040, TOM Channel Control Register’ */
#define GTM_TOM4_CH1_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A040u)

/** \brief  A060, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH1_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A060u)

/** \brief  A064, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH1_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A064u)

/** \brief  A068, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH1_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A068u)

/** \brief  A05C, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH1_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A05Cu)

/** \brief  A044, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH1_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A044u)

/** \brief  A048, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH1_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A048u)

/** \brief  A058, TOM Channel Status Register */
#define GTM_TOM4_CH1_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A058u)

/** \brief  A08C, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH2_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A08Cu)

/** \brief  A090, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH2_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A090u)

/** \brief  A094, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH2_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A094u)

/** \brief  A080, TOM Channel Control Register’ */
#define GTM_TOM4_CH2_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A080u)

/** \brief  A0A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH2_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A0A0u)

/** \brief  A0A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH2_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A0A4u)

/** \brief  A0A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH2_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A0A8u)

/** \brief  A09C, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH2_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A09Cu)

/** \brief  A084, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH2_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A084u)

/** \brief  A088, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH2_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A088u)

/** \brief  A098, TOM Channel Status Register */
#define GTM_TOM4_CH2_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A098u)

/** \brief  A0CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH3_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A0CCu)

/** \brief  A0D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH3_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A0D0u)

/** \brief  A0D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH3_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A0D4u)

/** \brief  A0C0, TOM Channel Control Register’ */
#define GTM_TOM4_CH3_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A0C0u)

/** \brief  A0E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH3_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A0E0u)

/** \brief  A0E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH3_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A0E4u)

/** \brief  A0E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH3_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A0E8u)

/** \brief  A0DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH3_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A0DCu)

/** \brief  A0C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH3_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A0C4u)

/** \brief  A0C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH3_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A0C8u)

/** \brief  A0D8, TOM Channel Status Register */
#define GTM_TOM4_CH3_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A0D8u)

/** \brief  A10C, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH4_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A10Cu)

/** \brief  A110, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH4_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A110u)

/** \brief  A114, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH4_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A114u)

/** \brief  A100, TOM Channel Control Register’ */
#define GTM_TOM4_CH4_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A100u)

/** \brief  A120, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH4_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A120u)

/** \brief  A124, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH4_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A124u)

/** \brief  A128, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH4_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A128u)

/** \brief  A11C, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH4_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A11Cu)

/** \brief  A104, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH4_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A104u)

/** \brief  A108, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH4_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A108u)

/** \brief  A118, TOM Channel Status Register */
#define GTM_TOM4_CH4_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A118u)

/** \brief  A14C, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH5_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A14Cu)

/** \brief  A150, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH5_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A150u)

/** \brief  A154, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH5_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A154u)

/** \brief  A140, TOM Channel Control Register’ */
#define GTM_TOM4_CH5_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A140u)

/** \brief  A160, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH5_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A160u)

/** \brief  A164, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH5_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A164u)

/** \brief  A168, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH5_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A168u)

/** \brief  A15C, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH5_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A15Cu)

/** \brief  A144, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH5_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A144u)

/** \brief  A148, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH5_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A148u)

/** \brief  A158, TOM Channel Status Register */
#define GTM_TOM4_CH5_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A158u)

/** \brief  A18C, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH6_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A18Cu)

/** \brief  A190, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH6_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A190u)

/** \brief  A194, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH6_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A194u)

/** \brief  A180, TOM Channel Control Register’ */
#define GTM_TOM4_CH6_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A180u)

/** \brief  A1A0, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH6_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A1A0u)

/** \brief  A1A4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH6_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A1A4u)

/** \brief  A1A8, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH6_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A1A8u)

/** \brief  A19C, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH6_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A19Cu)

/** \brief  A184, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH6_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A184u)

/** \brief  A188, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH6_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A188u)

/** \brief  A198, TOM Channel Status Register */
#define GTM_TOM4_CH6_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A198u)

/** \brief  A1CC, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH7_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A1CCu)

/** \brief  A1D0, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH7_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A1D0u)

/** \brief  A1D4, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH7_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A1D4u)

/** \brief  A1C0, TOM Channel Control Register’ */
#define GTM_TOM4_CH7_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A1C0u)

/** \brief  A1E0, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH7_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A1E0u)

/** \brief  A1E4, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH7_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A1E4u)

/** \brief  A1E8, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH7_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A1E8u)

/** \brief  A1DC, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH7_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A1DCu)

/** \brief  A1C4, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH7_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A1C4u)

/** \brief  A1C8, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH7_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A1C8u)

/** \brief  A1D8, TOM Channel Status Register */
#define GTM_TOM4_CH7_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A1D8u)

/** \brief  A20C, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH8_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A20Cu)

/** \brief  A210, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH8_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A210u)

/** \brief  A214, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH8_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A214u)

/** \brief  A200, TOM Channel Control Register’ */
#define GTM_TOM4_CH8_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A200u)

/** \brief  A220, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH8_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A220u)

/** \brief  A224, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH8_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A224u)

/** \brief  A228, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH8_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A228u)

/** \brief  A21C, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH8_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A21Cu)

/** \brief  A204, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH8_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A204u)

/** \brief  A208, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH8_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A208u)

/** \brief  A218, TOM Channel Status Register */
#define GTM_TOM4_CH8_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A218u)

/** \brief  A24C, TOM Channel CCU0 Compare Register */
#define GTM_TOM4_CH9_CM0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM0*)0xF010A24Cu)

/** \brief  A250, TOM Channel CCU1 Compare Register */
#define GTM_TOM4_CH9_CM1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CM1*)0xF010A250u)

/** \brief  A254, TOM Channel CCU0 Counter Register */
#define GTM_TOM4_CH9_CN0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CN0*)0xF010A254u)

/** \brief  A240, TOM Channel Control Register’ */
#define GTM_TOM4_CH9_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_CTRL*)0xF010A240u)

/** \brief  A260, TOM Channel Interrupt Enable Register */
#define GTM_TOM4_CH9_IRQ_EN /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_EN*)0xF010A260u)

/** \brief  A264, TOM Channel Software Interrupt Generation Register */
#define GTM_TOM4_CH9_IRQ_FORCINT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_FORCINT*)0xF010A264u)

/** \brief  A268, TOM IRQ Mode Configuration Register */
#define GTM_TOM4_CH9_IRQ_MODE /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_MODE*)0xF010A268u)

/** \brief  A25C, TOM Channel Interrupt Notification Register */
#define GTM_TOM4_CH9_IRQ_NOTIFY /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_IRQ_NOTIFY*)0xF010A25Cu)

/** \brief  A244, TOM Channel CCU0 Compare Shadow Register */
#define GTM_TOM4_CH9_SR0 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR0*)0xF010A244u)

/** \brief  A248, TOM Channel CCU1 Compare Shadow Register */
#define GTM_TOM4_CH9_SR1 /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_SR1*)0xF010A248u)

/** \brief  A258, TOM Channel Status Register */
#define GTM_TOM4_CH9_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_CH_STAT*)0xF010A258u)

/** \brief  A034, TOM TGC0 Action Time Base Register */
#define GTM_TOM4_TGC0_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ACT_TB*)0xF010A034u)

/** \brief  A070, TOM TGC0 Enable/Disable Control Register */
#define GTM_TOM4_TGC0_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ENDIS_CTRL*)0xF010A070u)

/** \brief  A074, TOM TGC0 Enable/Disable Status Register */
#define GTM_TOM4_TGC0_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_ENDIS_STAT*)0xF010A074u)

/** \brief  A038, TOM TGC0 Force Update Control Register */
#define GTM_TOM4_TGC0_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_FUPD_CTRL*)0xF010A038u)

/** \brief  A030, TOM TGC0 Global Control Register */
#define GTM_TOM4_TGC0_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_GLB_CTRL*)0xF010A030u)

/** \brief  A03C, TOM TGC0 Internal Trigger Control Register */
#define GTM_TOM4_TGC0_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_INT_TRIG*)0xF010A03Cu)

/** \brief  A078, TOM TGC0 Output Enable Control Register */
#define GTM_TOM4_TGC0_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_OUTEN_CTRL*)0xF010A078u)

/** \brief  A07C, TOM TGC0 Output Enable Status Register */
#define GTM_TOM4_TGC0_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC0_OUTEN_STAT*)0xF010A07Cu)

/** \brief  A234, TOM TGC1 Action Time Base Register */
#define GTM_TOM4_TGC1_ACT_TB /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ACT_TB*)0xF010A234u)

/** \brief  A270, TOM TGC1 Enable/Disable Control Register */
#define GTM_TOM4_TGC1_ENDIS_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ENDIS_CTRL*)0xF010A270u)

/** \brief  A274, TOM TGC1 Enable/Disable Status Register */
#define GTM_TOM4_TGC1_ENDIS_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_ENDIS_STAT*)0xF010A274u)

/** \brief  A238, TOM TGC1 Force Update Control Register */
#define GTM_TOM4_TGC1_FUPD_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_FUPD_CTRL*)0xF010A238u)

/** \brief  A230, TOM TGC1 Global Control Register */
#define GTM_TOM4_TGC1_GLB_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_GLB_CTRL*)0xF010A230u)

/** \brief  A23C, TOM TGC1 Internal Trigger Control Register */
#define GTM_TOM4_TGC1_INT_TRIG /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_INT_TRIG*)0xF010A23Cu)

/** \brief  A278, TOM TGC1 Output Enable Control Register */
#define GTM_TOM4_TGC1_OUTEN_CTRL /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_OUTEN_CTRL*)0xF010A278u)

/** \brief  A27C, TOM TGC1 Output Enable Status Register */
#define GTM_TOM4_TGC1_OUTEN_STAT /*lint --e(923)*/ (*(volatile Ifx_GTM_TOM_TGC1_OUTEN_STAT*)0xF010A27Cu)

/** \brief  9FE04, Trigger Output Register */
#define GTM_TRIGOUT00 /*lint --e(923)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE04u)

/** \brief  9FE08, Trigger Output Register */
#define GTM_TRIGOUT01 /*lint --e(923)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE08u)

/** \brief  9FE0C, Trigger Output Register */
#define GTM_TRIGOUT02 /*lint --e(923)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE0Cu)

/** \brief  9FE10, Trigger Output Register */
#define GTM_TRIGOUT03 /*lint --e(923)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE10u)

/** \brief  9FE14, Trigger Output Register */
#define GTM_TRIGOUT04 /*lint --e(923)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE14u)

/** \brief  9FE18, Trigger Output Register */
#define GTM_TRIGOUT05 /*lint --e(923)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE18u)

/** \brief  9FE44, Trigger Output Register */
#define GTM_TRIGOUT10 /*lint --e(923)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE44u)

/** \brief  9FE48, Trigger Output Register */
#define GTM_TRIGOUT11 /*lint --e(923)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE48u)

/** \brief  9FE4C, Trigger Output Register */
#define GTM_TRIGOUT12 /*lint --e(923)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE4Cu)

/** \brief  9FE50, Trigger Output Register */
#define GTM_TRIGOUT13 /*lint --e(923)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE50u)

/** \brief  9FE54, Trigger Output Register */
#define GTM_TRIGOUT14 /*lint --e(923)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE54u)

/** \brief  9FE58, Trigger Output Register */
#define GTM_TRIGOUT15 /*lint --e(923)*/ (*(volatile Ifx_GTM_TRIGOUT*)0xF019FE58u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXGTM_REG_H */
