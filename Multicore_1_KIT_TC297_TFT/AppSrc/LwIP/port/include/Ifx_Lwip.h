/**
 * \file Ifx_Lwip.h
 * \brief lwIP (Light-weight TCP/IP Stack) Ported into AURIX
 * \ingroup lib_lwIP
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
 *
 * \defgroup lib_lwIP LWIP: Light-weight TCP/IP Stack Ported for AURIX
 * \ingroup library
 * - During system initialization, Ifx_Lwip_init() shall be called with proper configuration.
 * - Every 1ms, Ifx_Lwip_onTimerTick() shall be called.
 * - In the main loop or a dedicated task, Ifx_Lwip_pollTimerFlags() and 
 *   Ifx_Lwip_pollReceiveFlags() shall be called.
 *   The priority of Ifx_Lwip_onTimerTick() shall be higher than Ifx_Lwip_poll* functions.
 *
 * Initialisation example:
 * \code
 *  {
 *      Ifx_Lwip_Config config;
 *
 *      // - set the IP address configuration
 *      IP4_ADDR(&config.ipAddr, 192, 168, 178, 123);
 *      IP4_ADDR(&config.netMask, 255, 255, 255, 0);
 *      IP4_ADDR(&config.gateway, 192, 168, 178, 1);
 *      MAC_ADDR(&config.ethAddr, 0x10, 0x20, 0x30, 0x40, 0x50, 0x60);
 *
 *      // - setting up LWIP TCP/IP stack. See Ifx_Lwip_init()
 *      Ifx_Lwip_init(&config);
 *  }
 * \endcode
 */
#ifndef IFX_LWIP_H
#define IFX_LWIP_H

//________________________________________________________________________________________
// INCLUDES

#include "lwip/opt.h"
#include "lwip/def.h"
#include "lwip/mem.h"
#include "lwip/pbuf.h"
#include "lwip/sys.h"
#include "lwip/stats.h"
#include "lwip/snmp.h"
#include "lwip/ip.h"
#include "lwip/udp.h"
#include "lwip/tcp.h"
#include "lwip/tcp_impl.h"
#include "lwip/dhcp.h"
#include "lwip/init.h"
#include "netif/etharp.h"
#include "netif/ppp_oe.h"

#include "ethernetif_tc2x.h"

//________________________________________________________________________________________
// HELPER MACROS

#define MAC_ADDR(ptr, a, b, c, d, e, f) \
    (ptr)->addr[0] = a;                 \
    (ptr)->addr[1] = b;                 \
    (ptr)->addr[2] = c;                 \
    (ptr)->addr[3] = d;                 \
    (ptr)->addr[4] = e;                 \
    (ptr)->addr[5] = f;

//________________________________________________________________________________________
// TYPEDEFS

/* NOTE: these typedefs are shortcuts to the native LWIP struct types */
typedef struct netif          netif_t;
typedef struct pbuf           pbuf_t;
typedef struct dhcp           dhcp_t;
typedef struct eth_addr       eth_addr_t;
typedef struct eth_hdr        eth_hdr_t;
typedef union  ip_addr        ipaddr_t;
typedef struct udp_pcb        udp_pcb_t;
typedef struct tcp_pcb        tcp_pcb_t;
typedef struct tcp_pcb_listen tcp_pcb_listen_t;

//________________________________________________________________________________________
// DATA STRUCTURES

/** \brief Runtime structure of the AURIX LWIP stack */
typedef struct
{
    uint32     timerFlags;
    netif_t    netif;
#if LWIP_DHCP
    dhcp_t     dhcp;
#endif
    eth_addr_t eth_addr;
    struct
    {
        uint16 arp;
#if LWIP_DHCP
        uint16 dhcp_coarse;
        uint16 dhcp_fine;
#endif
        uint16 tcp_fast;
        uint16 tcp_slow;
        uint16 link;
    }      timer;
} Ifx_Lwip;

/** \brief Configuration structure for the AURIX LWIP stack */
typedef struct
{
    ip_addr_t  ipAddr;      /**< \brief IP address, e.g. : {192,168,220,123} */
    ip_addr_t  netMask;     /**< \brief Network mask, e.g. : {255,255,255,0} */
    ip_addr_t  gateway;     /**< \brief Gateway address, e.g. : {192,168,220,1} */
    eth_addr_t ethAddr;     /**< \brief Ethernet (MAC) address, e.g. : {0x10, 0x20, 0x30, 0x40, 0x50, 0x60} */
} Ifx_Lwip_Config;

//________________________________________________________________________________________
// GLOBAL VARIABLES

IFX_EXTERN Ifx_Lwip Ifx_g_Lwip;

//________________________________________________________________________________________
// FUNCTION PROTOTYPES

/** \addtogroup lib_lwIP
 * \{ */
IFX_EXTERN void      Ifx_Lwip_init(const Ifx_Lwip_Config *config);
IFX_EXTERN void      Ifx_Lwip_onTimerTick(void);
IFX_EXTERN void      Ifx_Lwip_pollTimerFlags(void);
IFX_EXTERN void      Ifx_Lwip_pollReceiveFlags(void);
IFX_EXTERN IfxEth   *Ifx_Lwip_getEth(void);
IFX_INLINE Ifx_Lwip *Ifx_Lwip_get(void);
IFX_INLINE netif_t  *Ifx_Lwip_getNetIf(void);
IFX_INLINE uint8    *Ifx_Lwip_getIpAddrPtr(void);
IFX_INLINE uint8    *Ifx_Lwip_getHwAddrPtr(void);

/** \} */
//________________________________________________________________________________________
// INLINE FUNCTION IMPLEMENTATIONS

/** \brief Returns pointer to the AURIX ethernet driver */
IFX_EXTERN IfxEth *Ifx_Lwip_getEth(void);


/** \brief Returns pointer to the AURIX LWIP global variable */
IFX_INLINE Ifx_Lwip *Ifx_Lwip_get(void)
{
    return &Ifx_g_Lwip;
}


/** \brief Returns pointer to the default network interface */
IFX_INLINE netif_t *Ifx_Lwip_getNetIf(void)
{
    return &Ifx_g_Lwip.netif;
}


/** \brief Returns pointer to the actual IP address */
IFX_INLINE uint8 *Ifx_Lwip_getIpAddrPtr(void)
{
    return (uint8 *)&Ifx_g_Lwip.netif.ip_addr.addr;
}


/** \brief Returns pointer to the actual H/W (MAC) address */
IFX_INLINE uint8 *Ifx_Lwip_getHwAddrPtr(void)
{
    return Ifx_g_Lwip.eth_addr.addr;
}


#endif /* __IFX_LWIP_H__ */
