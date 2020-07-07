/**
 * \file Cpu0_Main.h
 * \brief System initialization and main program implementation.
 *
 * \version iLLD_Demos_1_0_0_0_0
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 *
 *                                 IMPORTANT NOTICE
 *
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
 * \defgroup IfxLld_Demo_Eth_SrcDoc Source code documentation
 * \ingroup IfxLld_Demo_Eth
 */

#ifndef _hDRV_H
#define _hDRV_H

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/
#include "Bsp.h"
#include "Cpu/Std/Ifx_Types.h"
#include "IfxScuWdt.h"
#include "Ifx_Types.h"
#include "IfxCpu.h"
#include "IfxEth_Phy_Pef7071.h"
#include "IfxEth.h"
#include "IfxPort.h"
#include "IfxMultican_Can.h"
#include "IfxMultican.h"
#include "IfxAsclin_Asc.h"
#include "Ifx_Shell.h"
#include "Ifx_Console.h"
#include "Ifx_Assert.h"
#include "IfxStdIf_DPipe.h"
#include "_Utilities/Ifx_Assert.h"
#include "Assert.h"
#include "sys_arch.h"
/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*------------------------------Type Definitions------------------------------*/
/******************************************************************************/
#define LED1 &MODULE_P13, 0 /* LED D107                             */
#define LED2 &MODULE_P13, 1 /* LED D108                             */
#define LED3 &MODULE_P13, 2 /* LED D109                             */
#define LED4 &MODULE_P13, 3 /* LED D110                             */

#define ASC_TX_BUFFER_SIZE 64 /* Define the TX buffer size in byte    */
#define ASC_RX_BUFFER_SIZE 64 /* Define the RX buffer size in byte    */
struct drv_asc_lin_uart
{
    uint8 uart_tx_buffer[ASC_TX_BUFFER_SIZE + sizeof(Ifx_Fifo) + 8];
    uint8 uart_rx_buffer[ASC_RX_BUFFER_SIZE + sizeof(Ifx_Fifo) + 8];

    IfxStdIf_DPipe asc_sandard_interface; /* Standard interface object            */
    IfxAsclin_Asc asclin;                 /* ASCLIN module object                 */
};

struct drv_eth
{
    IfxEth eth;
};

struct drv_multi_can
{
    IfxMultican_Can                 can;                   /* CAN module handle to HW module SFR set                 */
    IfxMultican_Can_Config          can_config;             /* CAN module configuration structure                     */
    IfxMultican_Can_Node            can_node;            /* CAN source node handle data structure                  */
    IfxMultican_Can_NodeConfig      can_node_config;         /* CAN node configuration structure                       */
    IfxMultican_Can_MsgObj          can_send_msgobj;          /* CAN source message object handle data structure        */
    IfxMultican_Can_MsgObj          can_rcv_msgobj;          /* CAN destination message object handle data structure   */
    IfxMultican_Can_MsgObjConfig    can_msg_obj_config;       /* CAN message object configuration structure             */
    IfxMultican_Message             can_tx_msg;                 /* Transmitted CAN message structure                      */
    IfxMultican_Message             can_rx_msg;                 /* Received CAN message structure                         */
};
/******************************************************************************/
/*------------------------------Global variables------------------------------*/
/******************************************************************************/

IFX_EXTERN struct drv_eth g_drv_eth;
IFX_EXTERN struct drv_asc_lin_uart g_drv_asc_lin_uart;
//IFX_EXTERN SemaphoreHandle_t s_xSemaphore;
IFX_EXTERN int ddddd_flag;
void init_uart_module(void);
void Ifx_print(pchar format, ...);

void init_led(void);
void led_107_on(void);
void led_107_off(void);
void led_107_blink(void);
void led_108_on(void);
void led_108_off(void);
void led_108_blink(void);
void led_109_on(void);
void led_109_off(void);
void led_109_blink(void);

void init_eth_module(uint8 *mac_addr);
void set_eth_loop(void);
void eth_demo_run(void);

void init_multi_can_module(void);
void multi_can_send_msg(void);
#endif
