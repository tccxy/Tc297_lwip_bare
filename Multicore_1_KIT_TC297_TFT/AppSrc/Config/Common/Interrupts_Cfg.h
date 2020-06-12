/**
 * \file    Interrupts_Cfg.h
 * \ingroup configuration_interrupts
 *
 * \brief Interrupts configuration.
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
 * $Revision: 601 $
 * $Date: 2013-02-20 17:13:43 +0100 (Wed, 20 Feb 2013) $
 *
 */

/**
 * \defgroup configuration_interrupts Interrupt Priorities
 * \ingroup configuration
 *
 * This list contains interrupt service priority and interrupt service provider
 * configuration.
 *
 * \see \ref interrupts.
 */

#ifndef CFG_INTERRUPTS_H
#define CFG_INTERRUPTS_H
//------------------------------------------------------------------------------
/**
 * \addtogroup configuration_interrupts
 * \{
 */
/**
 * \name Interrupt priority configuration
 *
 * The interrupt priority range is [0,255]. Higher number has higher priority. Priority=0
 * WILL NOT be serviced.
 * \{
 */

#define ISR_PRIORITY_STM_0      2       /**< \brief Define priority of the STM receive interrupt request.  */
#define ISR_PRIORITY_STM_1      3       /**< \brief Define priority of the STM receive interrupt request.  */
#define ISR_PRIORITY_STM_2      4       /**< \brief Define priority of the STM receive interrupt request.  */

#define ISR_PRIORITY_ASC_0_RX  10      /**< \brief Define priority of the ASC0 receive interrupt request.  */
#define ISR_PRIORITY_ASC_0_TX  12      /**< \brief Define priority of the ASC0 transmit interrupt request.  */
#define ISR_PRIORITY_ASC_0_ERR 14      /**< \brief Define priority of the ASC0 error interrupt request.  */

#define ISR_PRIORITY_ETH       32      /**< \brief Define priority of the ETHERNET interrupt request.  */

#define ISR_PRIORITY_CIF_VIS   52      /**< \brief Define priority of the vision processing interrupt request. */
#define ISR_PRIORITY_CIF_ISP   54      /**< \brief Define priority of the CIF on-frame-end interrupt request. */

/** \} */
/**
 * \name Interrupt provider configuration
 *
 * The interrupt provider range is {0,1,2} for {CPU0, CPU1, CPU2} respectively.
 * \{
 */

#define ISR_PROVIDER_ASC_0     0      /**< \brief Define CPU number which handles the ASC0 interrupt request.  */
#define ISR_PROVIDER_ETH       0      /**< \brief Define CPU number which handles the ETHERNET interrupt request.  */
#define ISR_PROVIDER_CIF_VIS   1      /**< \brief Define CPU number which handles the vision processing interrupt request. */
#define ISR_PROVIDER_CIF_ISP   0      /**< \brief Define CPU number which handles the CIF on-frame-end interrupt request.  */

/** \} */
/** \} */

#define ISR_SRCREG_CIF_VIS     SRC_GPSR00
//------------------------------------------------------------------------------

#endif
