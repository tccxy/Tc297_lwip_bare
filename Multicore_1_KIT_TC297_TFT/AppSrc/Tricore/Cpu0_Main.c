/**
 * \file Cpu0_Main.c
 * \brief System initialisation and main program implementation.
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
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "wPub.h"
#include "SysSe/Bsp/Bsp.h"
#include "Ifx_Lwip.h"
#include "IfxPort_PinMap.h"
#include "IfxPort_Io.h"
#include "IfxPort_cfg.h"

/******************************************************************************/
/*------------------------Inline Function Prototypes--------------------------*/
/******************************************************************************/

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*------------------------Private Variables/Constants-------------------------*/
/******************************************************************************/

/******************************************************************************/
/*------------------------------Global variables------------------------------*/
/******************************************************************************/
App_Cpu0 g_AppCpu0; /**< \brief CPU 0 global data */
#define UDP_SERVER_PORT 8080
/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

/** \brief Main entry point after CPU boot-up.
 *
 *  It initialise the system and enter the endless loop that handles the demo
 */
volatile void *ethRam;
IfxCpu_syncEvent g_cpuSyncEvent = 0;
char data[10] = {0x01};

int core0_main(void)
{
    udp_pcb_t *udp;
    err_t err;
    ip_addr_t dest_addr;
    struct pbuf *ppkt_buf;
    Ifx_Lwip_Config config;
    int i = 0;

    IfxCpu_enableInterrupts();
    /*
     * !!WATCHDOG0 AND SAFETY WATCHDOG ARE DISABLED HERE!!
     * Enable the watchdog in the demo if it is required and also service the watchdog periodically
     * */
    IfxScuWdt_disableCpuWatchdog(IfxScuWdt_getCpuWatchdogPassword());
    IfxScuWdt_disableSafetyWatchdog(IfxScuWdt_getSafetyWatchdogPassword());

    /* Wait for CPU sync event */
    IfxCpu_emitEvent(&g_cpuSyncEvent);
    IfxCpu_waitEvent(&g_cpuSyncEvent, 1);

    init_led();

    initTime();

    init_uart();

    Ifx_print("hello \r\n");

    //init_eth_module();

    //set_eth_loop();
    //eth_demo_run();

    IP4_ADDR(&config.ipAddr, 192, 168, 5, 123);
    IP4_ADDR(&config.netMask, 255, 255, 255, 0);
    IP4_ADDR(&config.gateway, 192, 168, 5, 1);
    MAC_ADDR(&config.ethAddr, 0x00, 0x20, 0x30, 0x40, 0x50, 0x60);

    Ifx_Lwip_init(&config);

    IP4_ADDR(&dest_addr, 192, 168, 5, 196);

    ethRam = NULL_PTR;

    udp = udp_new();

    udp_bind(udp, IP_ADDR_ANY, 0);

    err = udp_connect(udp, &dest_addr, UDP_SERVER_PORT);


    if (err == ERR_OK)
    {
        while (TRUE)
        {
            if (g_Eth.config.phyLink())
            {
                Ifx_Lwip_pollTimerFlags();
                Ifx_Lwip_pollReceiveFlags();
                netif_set_up(&Ifx_g_Lwip.netif);
                IfxEth_startTransmitter(Ifx_g_Lwip.netif.state);
            }
            //Ifx_print("report.mdio_stat %d test 1\r\n", report.mdio_stat);
            wait(TimeConst_10ms);
            //wait(TimeConst_1s);

            //if (g_Eth.config.phyLink() && (ethRam = IfxEth_getTransmitBuffer(&g_Eth)))
            if (g_Eth.config.phyLink())
            {
                ppkt_buf = pbuf_alloc(PBUF_TRANSPORT, 10, PBUF_POOL);
                if (ppkt_buf != NULL)
                {
                    Ifx_print("send -- %d- msg\r\n", i++);
                    memcpy(ppkt_buf->payload, data, 10);
                    udp_sendto(udp, ppkt_buf, &dest_addr, UDP_SERVER_PORT);
                    //System_Periodic_Handle();
                    pbuf_free(ppkt_buf);
                }
            }
            else
            {
            }
            //REGRESSION_RUN_STOP_PASS;
        }
    }
    udp_remove(udp);

    return 0;
}
