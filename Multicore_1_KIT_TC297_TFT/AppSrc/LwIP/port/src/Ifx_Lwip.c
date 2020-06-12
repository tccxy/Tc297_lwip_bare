/**
 * \file Ifx_Lwip.c
 * \brief lwIP (Light-weight TCP/IP Stack) Ported into AURIX
 *
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 * \author Dian Tresna Nugraha <dian.nugraha@infineon.com>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 *
 * This file is part of the AURIX lwIP TCP/IP stack.
 */

#include "Ifx_Lwip.h"
#include "Stm/Std/IfxStm.h"
#include "Scu/Std/IfxScuCcu.h"
#include "Cpu/Std/IfxCpu_Intrinsics.h"

#include <string.h>
#include <stdarg.h>

//________________________________________________________________________________________
// BASIC FUNCTIONS

#define IFX_LWIP_TIMER_TICK_MS (1U) // number of timer ticks per millisecond

#define IFX_LWIP_ARP_PERIOD (ARP_TMR_INTERVAL / IFX_LWIP_TIMER_TICK_MS)
#define IFX_LWIP_TCP_FAST_PERIOD (TCP_FAST_INTERVAL / IFX_LWIP_TIMER_TICK_MS)
#define IFX_LWIP_TCP_SLOW_PERIOD (TCP_SLOW_INTERVAL / IFX_LWIP_TIMER_TICK_MS)
#define IFX_LWIP_DHCP_COARSE_PERIOD (DHCP_COARSE_TIMER_MSECS / IFX_LWIP_TIMER_TICK_MS)
#define IFX_LWIP_DHCP_FINE_PERIOD (DHCP_FINE_TIMER_MSECS / IFX_LWIP_TIMER_TICK_MS)
#define IFX_LWIP_LINK_PERIOD (100U / IFX_LWIP_TIMER_TICK_MS) /* 100 ms */

#define IFX_LWIP_FLAG_ARP (1U << 1)
#define IFX_LWIP_FLAG_TCP_FAST (1U << 2)
#define IFX_LWIP_FLAG_TCP_SLOW (1U << 3)
#define IFX_LWIP_FLAG_LINK (1U << 4)
#define IFX_LWIP_FLAG_DHCP_COARSE (1U << 5)
#define IFX_LWIP_FLAG_DHCP_FINE (1U << 6)

#ifdef __DCC__
__attribute__((section(".g_Lwip")))
#endif
Ifx_Lwip Ifx_g_Lwip; /**< \brief LWIP-related global variable */

#define Ifx_Lwip_timerIncr(var, PERIOD, FLAG) \
    {                                         \
        var += 1;                             \
        if (var >= PERIOD)                    \
        {                                     \
            var = 0;                          \
            timerFlags |= FLAG;               \
        }                                     \
    }

/** \brief Timer interrupt callback */
void Ifx_Lwip_onTimerTick(void)
{
    Ifx_Lwip *lwip = &Ifx_g_Lwip;
    uint32 timerFlags = lwip->timerFlags;

    Ifx_Lwip_timerIncr(lwip->timer.arp, IFX_LWIP_ARP_PERIOD, IFX_LWIP_FLAG_ARP);

    Ifx_Lwip_timerIncr(lwip->timer.tcp_fast, IFX_LWIP_TCP_FAST_PERIOD, IFX_LWIP_FLAG_TCP_FAST);
    Ifx_Lwip_timerIncr(lwip->timer.tcp_slow, IFX_LWIP_TCP_SLOW_PERIOD, IFX_LWIP_FLAG_TCP_SLOW);

    Ifx_Lwip_timerIncr(lwip->timer.dhcp_coarse, IFX_LWIP_DHCP_COARSE_PERIOD, IFX_LWIP_FLAG_DHCP_COARSE);
    Ifx_Lwip_timerIncr(lwip->timer.dhcp_fine, IFX_LWIP_DHCP_FINE_PERIOD, IFX_LWIP_FLAG_DHCP_FINE);

    Ifx_Lwip_timerIncr(lwip->timer.link, IFX_LWIP_LINK_PERIOD, IFX_LWIP_FLAG_LINK);

    lwip->timerFlags = timerFlags;
}

/** \brief Polling the timer event flags */
void Ifx_Lwip_pollTimerFlags(void)
{
    Ifx_Lwip *lwip = &Ifx_g_Lwip;
    uint32 timerFlags = __swap(&lwip->timerFlags, 0);

    if (timerFlags & IFX_LWIP_FLAG_DHCP_COARSE)
    {
        dhcp_coarse_tmr();
    }

    if (timerFlags & IFX_LWIP_FLAG_DHCP_FINE)
    {
        dhcp_fine_tmr();
    }

    if (timerFlags & IFX_LWIP_FLAG_TCP_FAST)
    {
        tcp_fasttmr();
    }

    if (timerFlags & IFX_LWIP_FLAG_TCP_SLOW)
    {
        tcp_slowtmr();
    }

    if (timerFlags & IFX_LWIP_FLAG_ARP)
    {
        etharp_tmr();
    }

    if (timerFlags & IFX_LWIP_FLAG_LINK)
    {
    }
}

/** \brief Polling the ETH receive event flags */
void Ifx_Lwip_pollReceiveFlags(void)
{
    err_t err = ERR_OK;
    /**
     * We are assuming that the only interrupt source is an incoming packet
     */
    //while (err == ERR_OK)
    {
        err = ethernetif_tc2x_input(&Ifx_g_Lwip.netif);
    }; // while (err == ERR_OK);
}

//________________________________________________________________________________________
// INITIALIZATION FUNCTION

/** \brief LWIP initialization function
 *
 * The followings are executed: */
void Ifx_Lwip_init(const Ifx_Lwip_Config *config)
{
    Ifx_Lwip *lwip = &Ifx_g_Lwip;

    LWIP_DEBUGF(IFX_LWIP_DEBUG, ("Ifx_Lwip_init start!\r\n"));

    /** - initialise LWIP (lwip_init()) */
    lwip_init();

    /** - initialise and add a \ref netif */
    lwip->eth_addr = config->ethAddr;
    netif_add(&lwip->netif, &config->ipAddr, &config->netMask, &config->gateway,
              (void *)0, ethernetif_tc2x_init, ethernet_input);
    netif_set_default(&lwip->netif);
    netif_set_up(&lwip->netif);


#if 0
    /** - assign \ref dhcp to \ref netif */
    dhcp_set_struct(&lwip->netif, &lwip->dhcp);
    dhcp_start(&lwip->netif);

    LWIP_DEBUGF(IFX_LWIP_DEBUG, ("Ifx_Lwip_init end!\n"));

    {   /** - initialise some network applications (ping, echo, httpd) */
        void ping_init(void);
        void echo_init(void);
        void httpd_init(void);

        //ping_init();
        //echo_init();
        httpd_init();
    }
#endif

    if (sizeof(ip_addr_t) != 4)
    {
        __debug();
    }
}

//________________________________________________________________________________________
// DEBUGGING FUNCTIONS

#include "Comm/Ifx_Console.h"
#include "wPub.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#define MAXCHARS 256

s8_t Ifx_Lwip_printf(const char *format, ...)
{
    /* WNC do not have console port */
    s8_t result = -13;
    if (!g_ascStandardInterface.txDisabled)
    {
        char message[STDIF_DPIPE_MAX_PRINT_SIZE + 1];
        Ifx_SizeT count;
        va_list args;
        va_start(args, format);
        vsprintf((char *)message, format, args);
        va_end(args);
        count = (Ifx_SizeT)strlen(message);
        IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, count < STDIF_DPIPE_MAX_PRINT_SIZE);
        //return
        IfxStdIf_DPipe_write(&g_ascStandardInterface, (void *)message, &count, TIME_INFINITE);
    }
    else
    {
        //return TRUE;
    }
    return result;
}

//________________________________________________________________________________________
// OSEK Tasks

/**
 * @brief LWIP timers task.
 *
 * This task calls ARP, TCP and DHCP timer functions.
 */
TASK(LwipTaskPeriodic)
{
    GetResource(Com_Mutex);
    Ifx_Lwip_pollTimerFlags();
    ReleaseResource(Com_Mutex);
}

/**
 * @brief LWIP reception task.
 *
 * This task handles incoming packets.
 */
TASK(LwipTaskReceive)
{
    LWIP_DEBUGF(IFX_LWIP_DEBUG, ("LwipTaskReceive task start!\n"));
    GetResource(Com_Mutex);
    Ifx_Lwip_pollReceiveFlags();
    ReleaseResource(Com_Mutex);
    LWIP_DEBUGF(IFX_LWIP_DEBUG, ("LwipTaskReceive task end!\n"));
}
