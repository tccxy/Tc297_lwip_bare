/**
 * \file lwipopts.h
 * \brief Configuration file for AURIX LWIP port.
 * \ingroup lib_lwIP_opts
 *
 *
 * \defgroup lib_lwIP_opts Configuration
 * \ingroup lib_lwIP
 * This contains configuration for LWIP stack.
 * See also \ref configuration_comm_eth "AURIX ethernet configuration"
 *
 */
#ifndef __LWIPOPTS_H__
#define __LWIPOPTS_H__

/** \addtogroup lib_lwIP_opts
 * \{ */

//________________________________________________________________________________________
// ARCHITECTURE options
//
#define NO_SYS            1        /**< \brief single thread, no operating system */

//#define LWIP_SYS LWIP_SYS_EE
//#define LWIP_SYS LWIP_SYS_FREERTOS

#define LWIP_SYS_EE       1
#define LWIP_SYS_FREERTOS 2

//________________________________________________________________________________________
// MEMORY options
//

/* for HEAP */
#define MEM_ALIGNMENT              4           /**< \brief default for 32-bit machine */
#define MEM_SIZE                   (6 * 1024)  /**< \brief default is only 1600 */

/* for MEMPOOL */
#define MEMP_NUM_PBUF              16          /**< \brief default is 16 */

#define MEMP_OVERFLOW_CHECK 0

#if MEMP_OVERFLOW_CHECK == 0
#define MEMP_SEPARATE_POOLS        1           /**< \brief default is 0 */
#endif

//#define MEMP_NUM_RAW_PCB         4           /**< \brief default is 4 */
//#define MEMP_NUM_UDP_PCB         4           /**< \brief default is 4 */
//#define MEMP_NUM_TCP_PCB         10          /**< \brief default is 5 */
//#define MEMP_NUM_TCP_PCB_LISTEN  8           /**< \brief default is 8 */
//#define MEMP_NUM_TCP_SEG         16          /**< \brief default is 16 */
//#define MEMP_NUM_REASSDATA       5           /**< \brief default is 5 */
//#define MEMP_NUM_ARP_QUEUE       30          /**< \brief default is 30 */
//#define MEMP_NUM_IGMP_GROUP      8           /**< \brief default is 8 */
//#define MEMP_NUM_SYS_TIMEOUT     5           /**< \brief default is 3 */
//#define MEMP_NUM_TCPIP_MSG_API   8           /**< \brief default is 8 */
//#define MEMP_NUM_TCPIP_MSG_INPKT 8           /**< \brief default is 8 */

/*
 * The following four are used only with the sequential API and can be
 * set to 0 if the application only will use the raw API.
 */
#if NO_SYS
#define MEMP_NUM_NETBUF  0                  /**< \brief default is 2 */
#define MEMP_NUM_NETCONN 0                  /**< \brief default is 4 */
#endif
//#define MEMP_NUM_API_MSG        0
//#define MEMP_NUM_TCPIP_MSG      0

//________________________________________________________________________________________
// PBUF options
//
#define PBUF_POOL_SIZE      16              /**< \brief default is 16 */
#define PBUF_POOL_BUFSIZE   1536            /**< \brief this value is to accommodate ethernet frame. */
//#define PBUF_LINK_HLEN      16              /**< \brief default is (14 + ETH_PAD_SIZE) */

//________________________________________________________________________________________
// ARP options
//
#define LWIP_ARP            1               /**< \brief default is 1 */
//#define ETHARP_ALWAYS_INSERT    0
//#define ARP_TABLE_SIZE          10          /**< \brief default is 10 */
//#define ARP_QUEUEING            1           /**< \brief default is 0 */
#define ETHARP_TRUST_IP_MAC 1               /**< \brief default is 0 */

//________________________________________________________________________________________
// IP options
//
//#define IP_FORWARD              0           /**< \brief default is 0 */
//#define IP_OPTIONS_ALLOWED      1           /**< \brief default is 1 */
//#define IP_REASSEMBLY           0           /**< \brief default is 1 */
//#define IP_FRAG                 0           /**< \brief default is 1 */
//#define IP_REASS_MAXAGE         3           /**< \brief default is 3 */
//#define IP_REASS_MAX_PBUFS      10          /**< \brief default is 10 */
//#define IP_FRAG_USES_STATIC_BUF 1           /**< \brief default is 1 */
//#define IP_FRAG_MAX_MTU         1500        /**< \brief default is 1500 */
//#define IP_DEFAULT_TTL          255         /**< \brief default is 255 */

//________________________________________________________________________________________
// ICMP options
//
#define LWIP_ICMP          1                /**< \brief default is 1 */
//#define ICMP_TTL                (IP_DEFAULT_TTL)

//________________________________________________________________________________________
// RAW options
//
#define LWIP_RAW           1
//#define RAW_TTL                 (IP_DEFAULT_TTL)

//________________________________________________________________________________________
// DHCP options
//
#define LWIP_DHCP          1
//#define DHCP_DOES_ARP_CHECK     ((LWIP_DHCP) && (LWIP_ARP))

//________________________________________________________________________________________
// UDP options
//
#define LWIP_UDP           1                /**< \brief default is 1 */
//#define UDP_TTL                 255         /**< \brief default is (IP_DEFAULT_TTL) */
#define CHECKSUM_CHECK_UDP 0                /**< \brief default is 1 */
#define CHECKSUM_GEN_UDP   0                /**< \brief default is 1 */

//________________________________________________________________________________________
// TCP options
//
#define LWIP_TCP           1                /**< \brief default is 1 */
//#define TCP_TTL                 255         /**< \brief default is (IP_DEFAULT_TTL) */
//#define TCP_MSS                 (1500 - 40)	  /* TCP_MSS = (Ethernet MTU - IP header size - TCP header size) */
//#define TCP_SND_BUF             (4*TCP_MSS)
//#define TCP_SND_QUEUELEN        (6 * TCP_SND_BUF)/TCP_MSS
//#define TCP_QUEUE_OOSEQ         0
//#define TCP_WND                 (2*TCP_MSS)

//________________________________________________________________________________________
// Checksum generation
//
#define LWIP_USE_HW_CHECKSUM_ENGINE (1)

#if LWIP_USE_HW_CHECKSUM_ENGINE
#define CHECKSUM_GEN_IP    0                /**< \brief default is 1 */
#define CHECKSUM_GEN_ICMP  0                /**< \brief default is 1 */
#define CHECKSUM_GEN_TCP   0                /**< \brief default is 1 */

#define CHECKSUM_CHECK_IP   0
#define CHECKSUM_CHECK_ICMP 0
#define CHECKSUM_CHECK_TCP  0
#endif

//________________________________________________________________________________________
// LWIP callback options
//
#define LWIP_CALLBACK_API 1                 /**< \brief default is 1 */

//________________________________________________________________________________________
// Statistics options
//
#define LWIP_STATS        0                 /**< \brief default is 1 */

//________________________________________________________________________________________
// Netconn options
//
#define LWIP_NETCONN      0                 /**< \brief default is 1 */

//________________________________________________________________________________________
// Socket options
//
#define LWIP_SOCKET       0                 /**< \brief default is 1 */

//________________________________________________________________________________________
// Ethernet options
//
//#ifndef _WIN32
#define ETH_PAD_SIZE      2                 /**< \brief default is 0 */
//#endif

//________________________________________________________________________________________
// UPNP options
//
//#define LWIP_UPNP             0

//________________________________________________________________________________________
// PTPD options
//
//#define LWIP_PTPD             0

/** \} */

//________________________________________________________________________________________
// DEBUG options
//
#define __LWIP_DEBUG__

#ifdef __LWIP_DEBUG__
#undef LWIP_DEBUG     // Lwip DEBUG symbol
#endif

/** \addtogroup lib_lwIP_opts
 * \{ */
#ifndef IFX_LWIP_DEBUG
//#define IFX_LWIP_DEBUG          LWIP_DBG_OFF
#define IFX_LWIP_DEBUG          LWIP_DBG_ON
#endif
//#define ETHARP_DEBUG            LWIP_DBG_ON     /**< \brief default is OFF */
//#define NETIF_DEBUG             LWIP_DBG_ON     /**< \brief default is OFF */
//#define PBUF_DEBUG              LWIP_DBG_ON     /**< \brief default is OFF */
//#define API_LIB_DEBUG           LWIP_DBG_OFF
//#define API_MSG_DEBUG           LWIP_DBG_OFF
//#define SOCKETS_DEBUG           LWIP_DBG_OFF
//#define ICMP_DEBUG              LWIP_DBG_OFF
//#define IGMP_DEBUG              LWIP_DBG_OFF
//#define INET_DEBUG              LWIP_DBG_OFF
//#define IP_DEBUG                LWIP_DBG_ON     /**< \brief default is OFF */
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
//#define UDP_DEBUG               LWIP_DBG_ON     /**< \brief default is OFF */
//#define TCPIP_DEBUG             LWIP_DBG_OFF
//#define PPP_DEBUG               LWIP_DBG_OFF
//#define SLIP_DEBUG              LWIP_DBG_OFF
#define DHCP_DEBUG              LWIP_DBG_ON             /**<\brief default is OFF */
//#define AUTOIP_DEBUG            LWIP_DBG_OFF
//#define SNMP_MSG_DEBUG          LWIP_DBG_OFF
//#define SNMP_MIB_DEBUG          LWIP_DBG_OFF
//#define DNS_DEBUG               LWIP_DBG_OFF

#define HTTPD_DEBUG             LWIP_DBG_ON             /**<\brief default is OFF */
#define PING_DEBUG              LWIP_DBG_ON             /**<\brief default is OFF */
#define ECHO_DEBUG              LWIP_DBG_ON             /**<\brief default is OFF */

//________________________________________________________________________________________
// APPS options
//

#define HTTPD_USE_CUSTOM_FSDATA     1   /**<\brief default is 0 */
#define LWIP_HTTPD_DYNAMIC_HEADERS  1   /**<\brief default is 0 */

/** \} */

#endif /* __LWIPOPTS_H__ */
