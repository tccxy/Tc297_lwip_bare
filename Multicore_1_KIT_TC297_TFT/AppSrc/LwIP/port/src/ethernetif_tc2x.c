/**
 * \file
 * Ethernet Interface for TC2x LWIP TCP/IP stack
 *
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 * \author Dian Tresna Nugraha <dian.nugraha@infineon.com>
 *
 * This file is part of the AURIX lwIP TCP/IP stack.
 */

/*
 * Copyright (c) 2001-2004 Swedish Institute of Computer Science.
 * All rights reserved.
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
 * This file is part of the lwIP TCP/IP stack.
 *
 * Author: Adam Dunkels <adam@sics.se>
 *
 */

/**
 * This file is a skeleton for developing Ethernet network interface
 * drivers for lwIP. Add code to the low_level functions and do a
 * search-and-replace for the word "ethernetif" to replace it with
 * something that better describes your network interface.
 */

#include "hDrv.h"
#include "lwip/opt.h"

#include "lwip/def.h"
#include "lwip/mem.h"
#include "lwip/pbuf.h"
#include "lwip/sys.h"
#include <lwip/stats.h>
#include <lwip/snmp.h>
#include "netif/etharp.h"
#include "netif/ppp_oe.h"

#include "Ifx_Lwip.h"
#include "ethernetif_tc2x.h"
#include <string.h>

/* Define those to better describe your network interface. */
#define IFNAME0 'e'
#define IFNAME1 'n'

#if ETH_PAD_SIZE
#define PBUF_DROP_PAD(p)  pbuf_header(p, -ETH_PAD_SIZE)
#define PBUF_CLAIM_PAD(p) pbuf_header(p, ETH_PAD_SIZE)
#else
#define PBUF_DROP_PAD(p)
#define PBUF_CLAIM_PAD(p)
#endif

#define IFX_LWIP_ZERO_COPY_BUFFERS (4)
#define IFX_LWIP_ZERO_COPY_TX      (IFXETH_TX_BUFFER_BY_USER)
#define IFX_LWIP_ZERO_COPY_RX      (IFXETH_RX_BUFFER_BY_USER)

/* This function is used to get the low-level driver */
IfxEth *IfxEth_get(void);

/* Reference to a global low-level driver configuration */
extern const IfxEth_Config cfg_Eth;

struct
{
#if IFX_LWIP_ZERO_COPY_TX
    u32_t   tbuf[IFX_LWIP_ZERO_COPY_BUFFERS][IFXETH_RTX_BUFFER_SIZE / 4];
    u32_t   tidx;
    u32_t   chainedCount;
    u32_t   zeroCopyCount;
    pbuf_t *pbuf;
#endif
#if IFX_LWIP_ZERO_COPY_RX
    pbuf_t *rpbuf[IFXETH_MAX_RX_BUFFERS];
#endif
    IfxEth *eth;
} ethernetif_tc2x;

/**
 * In this function, the hardware should be initialized.
 * Called from ethernetif_init().
 *
 * @param netif the already initialized lwip network interface structure
 *        for this ethernetif
 */
static void low_level_init(netif_t *netif)
{
    IfxEth *eth = netif->state;
    int     i;

    /* set MAC hardware address length */
    netif->hwaddr_len = ETHARP_HWADDR_LEN;

    /* set MAC hardware address */
    for (i = 0; i < ETHARP_HWADDR_LEN; i++)
    {
        netif->hwaddr[i] = Ifx_g_Lwip.eth_addr.addr[i];
    }

    /* maximum transfer unit */
    netif->mtu = 1500;

    /* device capabilities */
    /* don't set NETIF_FLAG_ETHARP if this device is not an ethernet one */
    netif->flags = NETIF_FLAG_BROADCAST | NETIF_FLAG_ETHARP | NETIF_FLAG_LINK_UP;

    /* Do whatever else is needed to initialize interface. */
    {
        //IfxEth_Config config = cfg_Eth;
        //memcpy(g_drv_eth.eth.config.macAddress, netif->hwaddr, 6);
        //IfxEth_init(eth, &config);
        //init_eth_module();
        init_eth_module(netif->hwaddr);
#if IFX_LWIP_ZERO_COPY_RX

        for (i = 0; i < IFXETH_MAX_RX_BUFFERS; i++)
        {
            /* Pre-allocate a pbuf from the pool in order to support zero-copy receive.
             * We need to allocate at the maximum size as we don't know the size of the
             * yet to be received packet. */
            pbuf_t *p = pbuf_alloc(PBUF_RAW, IFXETH_RTX_BUFFER_SIZE, PBUF_POOL);

            if (p == NULL)
            {
                __debug();
                LWIP_DEBUGF(NETIF_DEBUG | LWIP_DBG_TRACE,
                    ("low_level_init: could not allocate RX pbuf (index=%d)\n", i));
            }
            else
            {
                /* pbufs allocated from the RAM pool should be non-chained. */
                LWIP_ASSERT("low_level_init: pbuf is not contiguous (chained)", pbuf_clen(p) <= 1);

                PBUF_DROP_PAD(p);

                /* Assign into an RX descriptor item */
                ethernetif_tc2x.rpbuf[i] = p;
                IfxEth_RxDescr_setBuffer(IfxEth_getActualRxDescriptor(eth), p->payload);
                IfxEth_freeReceiveBuffer(eth);
                eth->rxCount++;
            }
        }

        if (eth->pRxDescr != IfxEth_getBaseRxDescriptor(eth))
        {
            __debug();
        }
#endif
#if IFX_LWIP_ZERO_COPY_TX
        ethernetif_tc2x.tidx = 0;
#endif
#if LWIP_USE_HW_CHECKSUM_ENGINE
        IfxEth_setupChecksumEngine(eth, IfxEth_ChecksumMode_tcpUdpIcmpFull);
#endif
        IfxEth_startTransmitter(eth);
        IfxEth_startReceiver(eth);
    }
}


/**
 * This function should do the actual transmission of the packet. The packet is
 * contained in the pbuf that is passed to the function. This pbuf
 * might be chained.
 *
 * @param netif the lwip network interface structure for this ethernetif
 * @param p the MAC packet to send (e.g. IP packet including MAC addresses and type)
 * @return ERR_OK if the packet could be sent
 *         an err_t value if the packet couldn't be sent
 *
 * @note Returning ERR_MEM here if a DMA queue of your MAC is full can lead to
 *       strange results. You might consider waiting for space in the DMA queue
 *       to become availale since the stack doesn't retry to send a packet
 *       dropped because of memory failure (except for the TCP timers).
 */
static err_t low_level_output(netif_t *netif, pbuf_t *p)
{
    IfxEth *eth = netif->state;
    pbuf_t *q;

    u16_t   length = p->tot_len;
    LWIP_DEBUGF(NETIF_DEBUG | LWIP_DBG_TRACE, ("low_level_output (p=%#x)\n", p));

    PBUF_DROP_PAD(p);

    //initiate transfer();

#if !IFX_LWIP_ZERO_COPY_TX
    //if ((p->type == PBUF_REF) || (p->type == PBUF_ROM))
    {
        u8_t *tbuf = (u8_t *)IfxEth_waitTransmitBuffer(eth);
        u16_t l    = 0;

        for (q = p; q != NULL; q = q->next)
        {
            /* Send the data from the pbuf to the interface, one pbuf at a
             * time. The size of the data in each pbuf is kept in the ->len
             * variable. */
            memcpy(&tbuf[l], q->payload, q->len);
            l = l + q->len;
            LWIP_DEBUGF(NETIF_DEBUG | LWIP_DBG_TRACE, ("low_level_output: data=%#x, %d\n", q->payload, q->len));
            LWIP_ASSERT("low_level_output: length overflow the buffer\n", (l < IFXETH_RTX_BUFFER_SIZE));
        }

        IfxEth_sendTransmitBuffer(eth, l);
    }

#else

    LWIP_ASSERT("low_level_output: total length overflow the buffer\n", (p->tot_len < IFXETH_RTX_BUFFER_SIZE));

    boolean dmaSafe = TRUE;

    for (q = p; q != NULL; q = q->next)
    {
        //uint32 segment = (0xF0000000U & (uint32)q->payload);
        //dmaSafe = dmaSafe && ((segment != 0xA0000000U) && (segment != 0x80000000U));
        dmaSafe = dmaSafe && ((0x80000000U & (uint32)q->payload) == 0);

        if (!dmaSafe)
        {
            break;
        }
    }

    if (!dmaSafe)
    {
        u16_t l = 0;

        ethernetif_tc2x.pbuf = p;
        ethernetif_tc2x.chainedCount++;

        IfxEth_TxDescr *descr = IfxEth_getActualTxDescriptor(eth);
        while (IfxEth_TxDescr_isAvailable(descr) == FALSE)
        {}

        /* Since DMA can't access the payload address, we have to copy
         * into a special TX buffer */
        u32_t tidx = ethernetif_tc2x.tidx;
        u8_t *tbuf = (u8_t *)&(ethernetif_tc2x.tbuf[tidx][0]);
        ethernetif_tc2x.tidx = (tidx + 1) % IFX_LWIP_ZERO_COPY_BUFFERS;

        for (q = p; q != NULL; q = q->next)
        {
            memcpy(&tbuf[l], q->payload, q->len);
            l = l + q->len;
            LWIP_DEBUGF(NETIF_DEBUG | LWIP_DBG_TRACE, ("low_level_output: data=%#x, %d\n", q->payload, q->len));
        }

        IfxEth_TxDescr_setBuffer(IfxEth_getActualTxDescriptor(eth), tbuf);
        IfxEth_sendTransmitBuffer(eth, l);
    }
    else
    {
        u8_t            n     = 0;
        ethernetif_tc2x.zeroCopyCount++;

        IfxEth_TxDescr *descr = IfxEth_getActualTxDescriptor(eth);

        for (q = p; q != NULL; q = q->next)
        {
            while (IfxEth_TxDescr_isAvailable(descr) == FALSE)
            {}

            IfxEth_TxDescr_setBuffer(descr, q->payload);
            IfxEth_TxDescr_setup(descr, q->len, (n == 0), (q->next == NULL));
            descr = &descr[1];
            n++;
        }

        descr = IfxEth_getActualTxDescriptor(eth);

        for ( ; n > 0; n--)
        {
            IfxEth_TxDescr_release(descr);
            IfxEth_shuffleTxDescriptor(eth);
        }

        IfxEth_wakeupTransmitter(eth);
    }

#endif

    LWIP_DEBUGF(NETIF_DEBUG | LWIP_DBG_TRACE, ("low_level_output: signal length: %d\n", length));

    PBUF_CLAIM_PAD(p);

    LINK_STATS_INC(link.xmit);

    LWIP_DEBUGF(NETIF_DEBUG | LWIP_DBG_TRACE, ("low_level_output: return OK\n"));

    return ERR_OK;
}


/**
 * Should allocate a pbuf and transfer the bytes of the incoming
 * packet from the interface into the pbuf.
 *
 * @param netif the lwip network interface structure for this ethernetif
 * @return a pbuf filled with the received packet (including MAC header)
 *         NULL on memory error
 */
static pbuf_t *low_level_input(netif_t *netif)
{
    IfxEth *eth = netif->state;
    pbuf_t *p, *q;
    u16_t   len;

    len = IfxEth_getRxDataLength(eth);

    if (len == 0)
    {   /* no reception */
        p = (pbuf_t *)0;
    }
    else
    {
#if !IFX_LWIP_ZERO_COPY_RX
        len = len + (ETH_PAD_SIZE ? ETH_PAD_SIZE : 0); /* allow room for Ethernet padding */

        /* We allocate a pbuf chain of pbufs from the pool. */
        p = pbuf_alloc(PBUF_RAW, len, PBUF_POOL);

        if (p != NULL)
        {
            PBUF_DROP_PAD(p);
            u8_t *src = IfxEth_getReceiveBuffer(eth);

            /* We iterate over the pbuf chain until we have read the entire
             * packet into the pbuf. */
            for (q = p; q != NULL; q = q->next)
            {
                /* Read enough bytes to fill this pbuf in the chain. The
                 * available data in the pbuf is given by the q->len
                 * variable.
                 * This does not necessarily have to be a memcpy, you can also preallocate
                 * pbufs for a DMA-enabled MAC and after receiving truncate it to the
                 * actually received size. In this case, ensure the tot_len member of the
                 * pbuf is the sum of the chained pbuf len members.
                 */
                //read data into(q->payload, q->len);
                memcpy(q->payload, src, q->len);
                src = &src[q->len];

                LWIP_DEBUGF(NETIF_DEBUG | LWIP_DBG_TRACE, ("low_level_input: payload=0x%x, len=%d\n", q->payload, q->len));
            }

            //acknowledge that packet has been read();
            IfxEth_freeReceiveBuffer(eth);

            PBUF_CLAIM_PAD(p);
            LINK_STATS_INC(link.recv);
        }

#else

        /* Pre-allocate a pbuf from the pool in order to support zero-copy receive.
         * We need to allocate at the maximum size as we don't know the size of the
         * yet to be received packet. */
        p = pbuf_alloc(PBUF_RAW, IFXETH_RTX_BUFFER_SIZE, PBUF_POOL);

        if (p != NULL)
        {
            PBUF_DROP_PAD(p);

            u32_t idx = IfxEth_getActualRxIndex(eth);

            /* Get the actual pbuf containing received packet */
            q = ethernetif_tc2x.rpbuf[idx];

            /* Put the new pre-allocated pbuf into the slot for later reception */
            ethernetif_tc2x.rpbuf[idx] = p;
            IfxEth_RxDescr_setBuffer(IfxEth_getActualRxDescriptor(eth), p->payload);
            IfxEth_freeReceiveBuffer(eth);
            eth->rxCount++;

            /* Now the p is set to pbuf containing received packet */
            p = q;

            /* modify the length information */
            p->len     = len;
            p->tot_len = len;

            PBUF_CLAIM_PAD(p);

            if (IfxEth_isRxChecksumError(eth) != FALSE)
            {
                pbuf_free(q);
                p = NULL;
            }
            else
            {
                LINK_STATS_INC(link.recv);
            }
        }

#endif
        else
        {
            //TODO: drop packet();
            __debug();
            LINK_STATS_INC(link.memerr);
            LINK_STATS_INC(link.drop);
        }
    }

    return p;
}


/**
 * This function should be called when a packet is ready to be read
 * from the interface. It uses the function low_level_input() that
 * should handle the actual reception of bytes from the network
 * interface. Then the type of the received packet is determined and
 * the appropriate input function is called.
 *
 * @param netif the lwip network interface structure for this ethernetif
 */
err_t ethernetif_tc2x_input(netif_t *netif)
{
    //IfxEth *eth = netif->state;
    err_t      err = ERR_OK;
    eth_hdr_t *ethhdr;
    pbuf_t    *p;

    /* move received packet into a new pbuf */
    p = low_level_input(netif);

    /* no packet could be read, silently ignore this */
    if (p == NULL)
    {
        //LWIP_DEBUGF(NETIF_DEBUG, ("ethernetif_input: p == NULL!\n"));
        err = ERR_TIMEOUT;
    }
    else
    {
        /* points to packet payload, which starts with an Ethernet header */
        ethhdr = p->payload;

        switch (htons(ethhdr->type))
        {
        /* IP or ARP packet? */
        case ETHTYPE_IP:
        case ETHTYPE_ARP:
#if PPPOE_SUPPORT
        /* PPPoE packet? */
        case ETHTYPE_PPPOEDISC:
        case ETHTYPE_PPPOE:
#endif /* PPPOE_SUPPORT */

            /* full packet send to tcpip_thread to process */
            if (netif->input(p, netif) != ERR_OK)
            {
                LWIP_DEBUGF(NETIF_DEBUG, ("ethernetif_input: IP input error\n"));
                pbuf_free(p);
            }

            break;

        default:
            LWIP_DEBUGF(NETIF_DEBUG, ("ethernetif_input: type unknown\n"));
            pbuf_free(p);
            break;
        }
    }

    return err;
}


/**
 * Should be called at the beginning of the program to set up the
 * network interface. It calls the function low_level_init() to do the
 * actual setup of the hardware.
 *
 * This function should be passed as a parameter to netif_add().
 *
 * @param netif the lwip network interface structure for this ethernetif
 * @return ERR_OK if the loopif is initialized
 *         ERR_MEM if private data couldn't be allocated
 *         any other err_t on error
 */
err_t ethernetif_tc2x_init(netif_t *netif)
{
    err_t   err = ERR_OK;
    //IfxEth *eth = IfxEth_get();

    LWIP_ASSERT("netif != NULL", (netif != NULL));
    LWIP_DEBUGF(NETIF_DEBUG | LWIP_DBG_TRACE, ("ethernetif_init ( %#x)\n", netif));

    ethernetif_tc2x.eth = &g_drv_eth.eth;

    {
#if LWIP_NETIF_HOSTNAME
        /* Initialize interface hostname */
        netif->hostname = "lwip";
#endif /* LWIP_NETIF_HOSTNAME */

        /*
         * Initialize the snmp variables and counters inside the struct netif.
         * The last argument should be replaced with your link speed, in units
         * of bits per second.
         */
        //NETIF_INIT_SNMP(netif, snmp_ifType_ethernet_csmacd, LINK_SPEED_OF_YOUR_NETIF_IN_BPS);

        netif->state   = &g_drv_eth.eth;
        netif->name[0] = IFNAME0;
        netif->name[1] = IFNAME1;

        /* We directly use etharp_output() here to save a function call.
         * You can instead declare your own function an call etharp_output()
         * from it if you have to do some checks before sending (e.g. if link
         * is available...) */
        netif->output     = etharp_output;
        netif->linkoutput = low_level_output;

        /* initialize the hardware */
        low_level_init(netif);
    }

    return err;
}
