/**
 * \file IfxLmu_reg.h
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
 * \defgroup IfxLld_Lmu_Cfg Lmu address
 * \ingroup IfxLld_Lmu
 * 
 * \defgroup IfxLld_Lmu_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Lmu_Cfg
 * 
 * \defgroup IfxLld_Lmu_Cfg_Lmu 2-LMU
 * \ingroup IfxLld_Lmu_Cfg
 * 
 */
#ifndef IFXLMU_REG_H
#define IFXLMU_REG_H 1
/******************************************************************************/
#include "IfxLmu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_Cfg_BaseAddress
 * \{  */

/** \brief  LMU object */
#define MODULE_LMU /*lint --e(923)*/ (*(Ifx_LMU*)0xF8700800u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_Cfg_Lmu
 * \{  */

/** \brief  10, LMU Access Enable Register 0 */
#define LMU_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_LMU_ACCEN0*)0xF8700810u)

/** \brief  14, LMU Access Enable Register 1 */
#define LMU_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_LMU_ACCEN1*)0xF8700814u)

/** \brief  30, LMU Buffer Control Register */
#define LMU_BUFCON0 /*lint --e(923)*/ (*(volatile Ifx_LMU_BUFCON*)0xF8700830u)

/** \brief  34, LMU Buffer Control Register */
#define LMU_BUFCON1 /*lint --e(923)*/ (*(volatile Ifx_LMU_BUFCON*)0xF8700834u)

/** \brief  38, LMU Buffer Control Register */
#define LMU_BUFCON2 /*lint --e(923)*/ (*(volatile Ifx_LMU_BUFCON*)0xF8700838u)

/** \brief  0, LMU Clock Control Register */
#define LMU_CLC /*lint --e(923)*/ (*(volatile Ifx_LMU_CLC*)0xF8700800u)

/** \brief  20, LMU Memory Control Register */
#define LMU_MEMCON /*lint --e(923)*/ (*(volatile Ifx_LMU_MEMCON*)0xF8700820u)

/** \brief  8, LMU Module ID Register */
#define LMU_MODID /*lint --e(923)*/ (*(volatile Ifx_LMU_MODID*)0xF8700808u)

/** \brief  58, LMU Region Access Enable Register */
#define LMU_RGN0_ACCENA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENA*)0xF8700858u)

/** Alias (User Manual Name) for LMU_RGN0_ACCENA.
* To use register names with standard convension, please use LMU_RGN0_ACCENA.
*/
#define	LMU_RGNACCENA0	(LMU_RGN0_ACCENA)

/** \brief  5C, LMU Region Access Enable Register */
#define LMU_RGN0_ACCENB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENB*)0xF870085Cu)

/** Alias (User Manual Name) for LMU_RGN0_ACCENB.
* To use register names with standard convension, please use LMU_RGN0_ACCENB.
*/
#define	LMU_RGNACCENB0	(LMU_RGN0_ACCENB)

/** \brief  50, LMU Region Lower Address Register */
#define LMU_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8700850u)

/** Alias (User Manual Name) for LMU_RGN0_LA.
* To use register names with standard convension, please use LMU_RGN0_LA.
*/
#define	LMU_RGNLA0	(LMU_RGN0_LA)

/** \brief  54, LMU Region Upper Address Register */
#define LMU_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8700854u)

/** Alias (User Manual Name) for LMU_RGN0_UA.
* To use register names with standard convension, please use LMU_RGN0_UA.
*/
#define	LMU_RGNUA0	(LMU_RGN0_UA)

/** \brief  68, LMU Region Access Enable Register */
#define LMU_RGN1_ACCENA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENA*)0xF8700868u)

/** Alias (User Manual Name) for LMU_RGN1_ACCENA.
* To use register names with standard convension, please use LMU_RGN1_ACCENA.
*/
#define	LMU_RGNACCENA1	(LMU_RGN1_ACCENA)

/** \brief  6C, LMU Region Access Enable Register */
#define LMU_RGN1_ACCENB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENB*)0xF870086Cu)

/** Alias (User Manual Name) for LMU_RGN1_ACCENB.
* To use register names with standard convension, please use LMU_RGN1_ACCENB.
*/
#define	LMU_RGNACCENB1	(LMU_RGN1_ACCENB)

/** \brief  60, LMU Region Lower Address Register */
#define LMU_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8700860u)

/** Alias (User Manual Name) for LMU_RGN1_LA.
* To use register names with standard convension, please use LMU_RGN1_LA.
*/
#define	LMU_RGNLA1	(LMU_RGN1_LA)

/** \brief  64, LMU Region Upper Address Register */
#define LMU_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8700864u)

/** Alias (User Manual Name) for LMU_RGN1_UA.
* To use register names with standard convension, please use LMU_RGN1_UA.
*/
#define	LMU_RGNUA1	(LMU_RGN1_UA)

/** \brief  78, LMU Region Access Enable Register */
#define LMU_RGN2_ACCENA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENA*)0xF8700878u)

/** Alias (User Manual Name) for LMU_RGN2_ACCENA.
* To use register names with standard convension, please use LMU_RGN2_ACCENA.
*/
#define	LMU_RGNACCENA2	(LMU_RGN2_ACCENA)

/** \brief  7C, LMU Region Access Enable Register */
#define LMU_RGN2_ACCENB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENB*)0xF870087Cu)

/** Alias (User Manual Name) for LMU_RGN2_ACCENB.
* To use register names with standard convension, please use LMU_RGN2_ACCENB.
*/
#define	LMU_RGNACCENB2	(LMU_RGN2_ACCENB)

/** \brief  70, LMU Region Lower Address Register */
#define LMU_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8700870u)

/** Alias (User Manual Name) for LMU_RGN2_LA.
* To use register names with standard convension, please use LMU_RGN2_LA.
*/
#define	LMU_RGNLA2	(LMU_RGN2_LA)

/** \brief  74, LMU Region Upper Address Register */
#define LMU_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8700874u)

/** Alias (User Manual Name) for LMU_RGN2_UA.
* To use register names with standard convension, please use LMU_RGN2_UA.
*/
#define	LMU_RGNUA2	(LMU_RGN2_UA)

/** \brief  88, LMU Region Access Enable Register */
#define LMU_RGN3_ACCENA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENA*)0xF8700888u)

/** Alias (User Manual Name) for LMU_RGN3_ACCENA.
* To use register names with standard convension, please use LMU_RGN3_ACCENA.
*/
#define	LMU_RGNACCENA3	(LMU_RGN3_ACCENA)

/** \brief  8C, LMU Region Access Enable Register */
#define LMU_RGN3_ACCENB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENB*)0xF870088Cu)

/** Alias (User Manual Name) for LMU_RGN3_ACCENB.
* To use register names with standard convension, please use LMU_RGN3_ACCENB.
*/
#define	LMU_RGNACCENB3	(LMU_RGN3_ACCENB)

/** \brief  80, LMU Region Lower Address Register */
#define LMU_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8700880u)

/** Alias (User Manual Name) for LMU_RGN3_LA.
* To use register names with standard convension, please use LMU_RGN3_LA.
*/
#define	LMU_RGNLA3	(LMU_RGN3_LA)

/** \brief  84, LMU Region Upper Address Register */
#define LMU_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8700884u)

/** Alias (User Manual Name) for LMU_RGN3_UA.
* To use register names with standard convension, please use LMU_RGN3_UA.
*/
#define	LMU_RGNUA3	(LMU_RGN3_UA)

/** \brief  98, LMU Region Access Enable Register */
#define LMU_RGN4_ACCENA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENA*)0xF8700898u)

/** Alias (User Manual Name) for LMU_RGN4_ACCENA.
* To use register names with standard convension, please use LMU_RGN4_ACCENA.
*/
#define	LMU_RGNACCENA4	(LMU_RGN4_ACCENA)

/** \brief  9C, LMU Region Access Enable Register */
#define LMU_RGN4_ACCENB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENB*)0xF870089Cu)

/** Alias (User Manual Name) for LMU_RGN4_ACCENB.
* To use register names with standard convension, please use LMU_RGN4_ACCENB.
*/
#define	LMU_RGNACCENB4	(LMU_RGN4_ACCENB)

/** \brief  90, LMU Region Lower Address Register */
#define LMU_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8700890u)

/** Alias (User Manual Name) for LMU_RGN4_LA.
* To use register names with standard convension, please use LMU_RGN4_LA.
*/
#define	LMU_RGNLA4	(LMU_RGN4_LA)

/** \brief  94, LMU Region Upper Address Register */
#define LMU_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8700894u)

/** Alias (User Manual Name) for LMU_RGN4_UA.
* To use register names with standard convension, please use LMU_RGN4_UA.
*/
#define	LMU_RGNUA4	(LMU_RGN4_UA)

/** \brief  A8, LMU Region Access Enable Register */
#define LMU_RGN5_ACCENA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENA*)0xF87008A8u)

/** Alias (User Manual Name) for LMU_RGN5_ACCENA.
* To use register names with standard convension, please use LMU_RGN5_ACCENA.
*/
#define	LMU_RGNACCENA5	(LMU_RGN5_ACCENA)

/** \brief  AC, LMU Region Access Enable Register */
#define LMU_RGN5_ACCENB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENB*)0xF87008ACu)

/** Alias (User Manual Name) for LMU_RGN5_ACCENB.
* To use register names with standard convension, please use LMU_RGN5_ACCENB.
*/
#define	LMU_RGNACCENB5	(LMU_RGN5_ACCENB)

/** \brief  A0, LMU Region Lower Address Register */
#define LMU_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF87008A0u)

/** Alias (User Manual Name) for LMU_RGN5_LA.
* To use register names with standard convension, please use LMU_RGN5_LA.
*/
#define	LMU_RGNLA5	(LMU_RGN5_LA)

/** \brief  A4, LMU Region Upper Address Register */
#define LMU_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF87008A4u)

/** Alias (User Manual Name) for LMU_RGN5_UA.
* To use register names with standard convension, please use LMU_RGN5_UA.
*/
#define	LMU_RGNUA5	(LMU_RGN5_UA)

/** \brief  B8, LMU Region Access Enable Register */
#define LMU_RGN6_ACCENA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENA*)0xF87008B8u)

/** Alias (User Manual Name) for LMU_RGN6_ACCENA.
* To use register names with standard convension, please use LMU_RGN6_ACCENA.
*/
#define	LMU_RGNACCENA6	(LMU_RGN6_ACCENA)

/** \brief  BC, LMU Region Access Enable Register */
#define LMU_RGN6_ACCENB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENB*)0xF87008BCu)

/** Alias (User Manual Name) for LMU_RGN6_ACCENB.
* To use register names with standard convension, please use LMU_RGN6_ACCENB.
*/
#define	LMU_RGNACCENB6	(LMU_RGN6_ACCENB)

/** \brief  B0, LMU Region Lower Address Register */
#define LMU_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF87008B0u)

/** Alias (User Manual Name) for LMU_RGN6_LA.
* To use register names with standard convension, please use LMU_RGN6_LA.
*/
#define	LMU_RGNLA6	(LMU_RGN6_LA)

/** \brief  B4, LMU Region Upper Address Register */
#define LMU_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF87008B4u)

/** Alias (User Manual Name) for LMU_RGN6_UA.
* To use register names with standard convension, please use LMU_RGN6_UA.
*/
#define	LMU_RGNUA6	(LMU_RGN6_UA)

/** \brief  C8, LMU Region Access Enable Register */
#define LMU_RGN7_ACCENA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENA*)0xF87008C8u)

/** Alias (User Manual Name) for LMU_RGN7_ACCENA.
* To use register names with standard convension, please use LMU_RGN7_ACCENA.
*/
#define	LMU_RGNACCENA7	(LMU_RGN7_ACCENA)

/** \brief  CC, LMU Region Access Enable Register */
#define LMU_RGN7_ACCENB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENB*)0xF87008CCu)

/** Alias (User Manual Name) for LMU_RGN7_ACCENB.
* To use register names with standard convension, please use LMU_RGN7_ACCENB.
*/
#define	LMU_RGNACCENB7	(LMU_RGN7_ACCENB)

/** \brief  C0, LMU Region Lower Address Register */
#define LMU_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF87008C0u)

/** Alias (User Manual Name) for LMU_RGN7_LA.
* To use register names with standard convension, please use LMU_RGN7_LA.
*/
#define	LMU_RGNLA7	(LMU_RGN7_LA)

/** \brief  C4, LMU Region Upper Address Register */
#define LMU_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF87008C4u)

/** Alias (User Manual Name) for LMU_RGN7_UA.
* To use register names with standard convension, please use LMU_RGN7_UA.
*/
#define	LMU_RGNUA7	(LMU_RGN7_UA)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXLMU_REG_H */
