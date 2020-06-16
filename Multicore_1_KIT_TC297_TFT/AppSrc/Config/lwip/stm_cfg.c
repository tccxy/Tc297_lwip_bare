/**
 * \file Stm_Cfg.c
 * \brief STM configuration
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
 * \copyright Copyright (C) 2012 Infineon Technologies AG
 * \author Simon Achatz <Simon.Achatz@Infineon.com>
 *
 * $Revision: 1 $
 * $Date: 2013-03-04 14:11:48 +0100 (Mon, 04 Mar 2013) $
 *
 * \defgroup configuration_comm_ascif ASC
 * \ingroup configuration_comm
 */

#include "Stm/Std/IfxStm.h"

#include "Interrupts_cfg.h"
//#include "CifServer/CifServer.h"


volatile uint32 Core0_Stm_1ms = 0;
volatile uint32 Core1_Stm_1ms = 0;
volatile uint32 Core2_Stm_1ms = 0;

/**
 * \brief Initialise the STM0 module
 */
void initStm0(void)
{
    Ifx_STM             *stm = &MODULE_STM0;
    IfxStm_CompareConfig stmCompareConfig;

    // suspend by debugger enabled
    IfxStm_enableOcdsSuspend(stm);

    //Call the constructor of configuration
    IfxStm_initCompareConfig(&stmCompareConfig);
    //Modify only the number of ticks and enable the trigger output
    stmCompareConfig.ticks                   = 100; /*Interrupt after 100 ticks from now */
    stmCompareConfig.triggerPriority = ISR_PRIORITY_STM_0;
    stmCompareConfig.typeOfService            = IfxSrc_Tos_cpu0;

    //Now Compare functionality is initialized
    IfxStm_initCompare(stm, &stmCompareConfig);
}




IFX_INTERRUPT(ISR_Stm0, 0, ISR_PRIORITY_STM_0);

/**
 * \ingroup interrupts
 *
 * This interrupt is raised by the STM0. The initialisation is done by initStm0().
 *
 * \isrProvider 0
 * \isrPriority \ref ISR_PRIORITY_STM_0;
 */
void ISR_Stm0(void)
{
    Ifx_STM *stm = &MODULE_STM0;
    //IfxStm_updateCompare(stm, IfxStm_Comparator_0, IfxStm_getLower(stm) + IFX_CFG_STM_TICKS_PER_MS);
    Core0_Stm_1ms++;
#if CIFSERV_USE_LWIP
    Ifx_Lwip_onTimerTick();
#endif
}


void initStm1(void)
{
    Ifx_STM             *stm = &MODULE_STM1;
    IfxStm_CompareConfig stmCompareConfig;

    // suspend by debugger enabled
    IfxStm_enableOcdsSuspend(stm);

    //Call the constructor of configuration
    IfxStm_initCompareConfig(&stmCompareConfig);
    //Modify only the number of ticks and enable the trigger output
    stmCompareConfig.ticks                   = 100; /*Interrupt after 100 ticks from now */
    stmCompareConfig.triggerPriority = ISR_PRIORITY_STM_1;
    stmCompareConfig.typeOfService            = IfxSrc_Tos_cpu1;

    //Now Compare functionality is initialized
    IfxStm_initCompare(stm, &stmCompareConfig);
}




IFX_INTERRUPT(ISR_Stm_1, 1, ISR_PRIORITY_STM_1);

/**
 * \ingroup interrupts
 *
 * This interrupt is raised by the STM1. The initialisation is done by initStm1().
 *
 * \isrProvider 1
 * \isrPriority \ref ISR_PRIORITY_STM_1
 */
void ISR_Stm_1(void)
{
    Ifx_STM *stm = &MODULE_STM1;
    //IfxStm_updateCompare(stm, IfxStm_Comparator_0, IfxStm_getLower(stm) + IFX_CFG_STM_TICKS_PER_MS);
    Core1_Stm_1ms++;
    //Ifx_Lwip_onTimerTick();
}


void initStm2(void)
{
    IfxStm_CompareConfig stmCompareConfig;
    // suspend by debugger enabled
    IfxStm_enableOcdsSuspend(&MODULE_STM2);

    //Call the constructor of configuration
    IfxStm_initCompareConfig(&stmCompareConfig);
    //Modify only the number of ticks and enable the trigger output
    stmCompareConfig.ticks                   = 100; /*Interrupt after 100 ticks from now */
    stmCompareConfig.triggerPriority = ISR_PRIORITY_STM_2;
    stmCompareConfig.typeOfService            = IfxSrc_Tos_cpu2;

    //Now Compare functionality is initialized
    IfxStm_initCompare(&MODULE_STM2, &stmCompareConfig);
}




IFX_INTERRUPT(ISR_Stm_2, 2, ISR_PRIORITY_STM_2);

/**
 * \ingroup interrupts
 *
 * This interrupt is raised by the STM2. The initialisation is done by initStm2().
 *
 * \isrProvider 2
 * \isrPriority \ref ISR_PRIORITY_STM_2
 */
void ISR_Stm_2(void)
{
    Ifx_STM *stm = &MODULE_STM2;
    //IfxStm_updateCompare(stm, IfxStm_Comparator_0, IfxStm_getLower(stm) + IFX_CFG_STM_TICKS_PER_MS);
    Core2_Stm_1ms++;
    //Ifx_Lwip_onTimerTick();
}

