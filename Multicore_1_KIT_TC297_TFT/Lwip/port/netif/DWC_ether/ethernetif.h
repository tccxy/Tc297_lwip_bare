#ifndef ETHERNETIF_H
#define ETHERNETIF_H

#include "err.h"
#include "netif.h"
#include "hDrv.h"



struct ethernetif_tc2x
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
};

#ifdef __cplusplus
extern "C" {
#endif

err_t ethernetif_init(struct netif *netif);
void ethernetif_input(struct netif *netif);
void ethernetif_poll(struct netif *netif);


#ifdef __cplusplus
}
#endif

#endif 
