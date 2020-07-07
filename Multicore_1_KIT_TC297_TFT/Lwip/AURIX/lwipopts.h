#ifndef __LWIPOPTS_H__
#define __LWIPOPTS_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Cpu/Std/IfxCpu_Intrinsics.h"

#define NO_SYS                  1

#define LWIP_SOCKET             0
#define LWIP_NETCONN            0

#define SYS_LIGHTWEIGHT_PROT    1

#define ETH_PAD_SIZE            2

#define MEM_ALIGNMENT           4

#define TCPIP_MBOX_SIZE             32
#define DEFAULT_TCP_RECVMBOX_SIZE   12
#define DEFAULT_UDP_RECVMBOX_SIZE   12
#define DEFAULT_RAW_RECVMBOX_SIZE   12
#define DEFAULT_ACCEPTMBOX_SIZE     12

#define DEFAULT_THREAD_PRIO     3
#define DEFAULT_THREAD_STACKSIZE configMINIMAL_STACK_SIZE
#define TCPIP_THREAD_PRIO       DEFAULT_THREAD_PRIO	
#define TCPIP_THREAD_STACKSIZE  1024

#define MEM_SIZE                12 * 1024

#define PBUF_POOL_SIZE          10
#define PBUF_POOL_BUFSIZE       1536
#define MEMP_NUM_PBUF           10
#define MEMP_NUM_UDP_PCB        6
#define MEMP_NUM_TCP_PCB        10
#define MEMP_NUM_TCP_PCB_LISTEN 6
#define MEMP_NUM_TCP_SEG        12

#define LWIP_UDP                1
#define LWIP_TCP                1
#define TCP_MSS                 1460
#define TCP_WND                 (2 * TCP_MSS)
#define TCP_SND_BUF             (2 * TCP_MSS)
#define TCP_SND_QUEUELEN        (6 * TCP_SND_BUF)/TCP_MSS

#define IP_OPTIONS_ALLOWED      0
#define IP_FRAG                 0
#define IP_REASSEMBLY           0

#define CHECKSUM_GEN_IP         0
#define CHECKSUM_GEN_UDP        0
#define CHECKSUM_GEN_TCP        0
#define CHECKSUM_GEN_ICMP       0
#define CHECKSUM_CHECK_IP       0
#define CHECKSUM_CHECK_UDP      0
#define CHECKSUM_CHECK_TCP      0

#define LWIP_DHCP               0
#define CHECKSUM_CHECK_UDP 0                /**< \brief default is 1 */
#define CHECKSUM_GEN_UDP   0                /**< \brief default is 1 */
#define LWIP_ARP            1               /**< \brief default is 1 */
#define LWIP_USE_HW_CHECKSUM_ENGINE (1)

#if LWIP_USE_HW_CHECKSUM_ENGINE
#define CHECKSUM_GEN_IP    0                /**< \brief default is 1 */
#define CHECKSUM_GEN_ICMP  0                /**< \brief default is 1 */
#define CHECKSUM_GEN_TCP   0                /**< \brief default is 1 */

#define CHECKSUM_CHECK_IP   0
#define CHECKSUM_CHECK_ICMP 0
#define CHECKSUM_CHECK_TCP  0
#endif

#define MEMP_NUM_SYS_TIMEOUT    (LWIP_TCP + IP_REASSEMBLY + LWIP_ARP + (2*LWIP_DHCP) + LWIP_AUTOIP + LWIP_IGMP + LWIP_DNS + (PPP_SUPPORT*6*MEMP_NUM_PPP_PCB) + (LWIP_IPV6 ? (1 + LWIP_IPV6_REASS + LWIP_IPV6_MLD) : 0) + 5)

#define LWIP_PLATFORM_ASSERT(x) do {__debug();} while(0)



#define LWIP_COMPAT_SOCKETS             1


#define LWIP_DBG_TYPES_ON               LWIP_DBG_ON

#define ETHARP_DEBUG            LWIP_DBG_ON     /**< \brief default is OFF */
#define NETIF_DEBUG             LWIP_DBG_ON     /**< \brief default is OFF */
//#define PBUF_DEBUG              LWIP_DBG_ON     /**< \brief default is OFF */
//#define API_LIB_DEBUG           LWIP_DBG_OFF
//#define API_MSG_DEBUG           LWIP_DBG_OFF
#define SOCKETS_DEBUG           LWIP_DBG_ON
//#define ICMP_DEBUG              LWIP_DBG_OFF
//#define IGMP_DEBUG              LWIP_DBG_OFF
//#define INET_DEBUG              LWIP_DBG_OFF
#define IP_DEBUG                LWIP_DBG_ON     /**< \brief default is OFF */
//#define IP_REASS_DEBUG          LWIP_DBG_OFF
//#define RAW_DEBUG               LWIP_DBG_OFF
//#define MEM_DEBUG               LWIP_DBG_OFF
//#define MEMP_DEBUG              LWIP_DBG_ON     /**< \brief default is OFF */
//#define SYS_DEBUG               LWIP_DBG_OFF
//#define TCP_DEBUG               LWIP_DBG_ON     /**< \brief default is OFF */
//#define TCP_INPUT_DEBUG         LWIP_DBG_ON     /**< \brief default is OFF */
//#define TCP_FR_DEBUG            LWIP_DBG_OFF
//#define TCP_RTO_DEBUG           LWIP_DBG_OFF
//#define TCP_CWND_DEBUG          LWIP_DBG_OFF
//#define TCP_WND_DEBUG           LWIP_DBG_OFF
//#define TCP_OUTPUT_DEBUG        LWIP_DBG_ON     /**< \brief default is OFF */
//#define TCP_RST_DEBUG           LWIP_DBG_OFF
//#define TCP_QLEN_DEBUG          LWIP_DBG_OFF
#define UDP_DEBUG               LWIP_DBG_ON     /**< \brief default is OFF */
//#define TCPIP_DEBUG             LWIP_DBG_OFF
//#define PPP_DEBUG               LWIP_DBG_OFF
//#define SLIP_DEBUG              LWIP_DBG_OFF
//#define DHCP_DEBUG              LWIP_DBG_ON             /**<\brief default is OFF */
//#define AUTOIP_DEBUG            LWIP_DBG_OFF
//#define SNMP_MSG_DEBUG          LWIP_DBG_OFF
//#define SNMP_MIB_DEBUG          LWIP_DBG_OFF
//#define DNS_DEBUG               LWIP_DBG_OFF

//#define HTTPD_DEBUG             LWIP_DBG_ON             /**<\brief default is OFF */
//#define PING_DEBUG              LWIP_DBG_ON             /**<\brief default is OFF */
//#define ECHO_DEBUG              LWIP_DBG_ON             /**<\brief default is OFF */

#ifdef __cplusplus
}
#endif
#endif /* __LWIPOPTS_H__ */

