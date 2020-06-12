/**
 * \file IfxEbu_regdef.h
 * \brief
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC29XB_UM_V1.3.R0
 * Specification: tc29xB_um_v1.3_MCSFR.xml (Revision: UM_V1.3)
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
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
 * \defgroup IfxLld_Ebu Ebu
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Ebu_Bitfields Bitfields
 * \ingroup IfxLld_Ebu
 * 
 * \defgroup IfxLld_Ebu_union Union
 * \ingroup IfxLld_Ebu
 * 
 * \defgroup IfxLld_Ebu_struct Struct
 * \ingroup IfxLld_Ebu
 * 
 */
#ifndef IFXEBU_REGDEF_H
#define IFXEBU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Ebu_Bitfields
 * \{  */

/** \brief  EBU Access Enable Register 0 */
typedef struct _Ifx_EBU_ACCEN0_Bits
{
    Ifx_Strict_32Bit EN0:1;                 /**< \brief [0:0] Access Enable for Master TAG ID 0 (rw) */
    Ifx_Strict_32Bit EN1:1;                 /**< \brief [1:1] Access Enable for Master TAG ID 1 (rw) */
    Ifx_Strict_32Bit EN2:1;                 /**< \brief [2:2] Access Enable for Master TAG ID 2 (rw) */
    Ifx_Strict_32Bit EN3:1;                 /**< \brief [3:3] Access Enable for Master TAG ID 3 (rw) */
    Ifx_Strict_32Bit EN4:1;                 /**< \brief [4:4] Access Enable for Master TAG ID 4 (rw) */
    Ifx_Strict_32Bit EN5:1;                 /**< \brief [5:5] Access Enable for Master TAG ID 5 (rw) */
    Ifx_Strict_32Bit EN6:1;                 /**< \brief [6:6] Access Enable for Master TAG ID 6 (rw) */
    Ifx_Strict_32Bit EN7:1;                 /**< \brief [7:7] Access Enable for Master TAG ID 7 (rw) */
    Ifx_Strict_32Bit EN8:1;                 /**< \brief [8:8] Access Enable for Master TAG ID 8 (rw) */
    Ifx_Strict_32Bit EN9:1;                 /**< \brief [9:9] Access Enable for Master TAG ID 9 (rw) */
    Ifx_Strict_32Bit EN10:1;                /**< \brief [10:10] Access Enable for Master TAG ID 10 (rw) */
    Ifx_Strict_32Bit EN11:1;                /**< \brief [11:11] Access Enable for Master TAG ID 11 (rw) */
    Ifx_Strict_32Bit EN12:1;                /**< \brief [12:12] Access Enable for Master TAG ID 12 (rw) */
    Ifx_Strict_32Bit EN13:1;                /**< \brief [13:13] Access Enable for Master TAG ID 13 (rw) */
    Ifx_Strict_32Bit EN14:1;                /**< \brief [14:14] Access Enable for Master TAG ID 14 (rw) */
    Ifx_Strict_32Bit EN15:1;                /**< \brief [15:15] Access Enable for Master TAG ID 15 (rw) */
    Ifx_Strict_32Bit EN16:1;                /**< \brief [16:16] Access Enable for Master TAG ID 16 (rw) */
    Ifx_Strict_32Bit EN17:1;                /**< \brief [17:17] Access Enable for Master TAG ID 17 (rw) */
    Ifx_Strict_32Bit EN18:1;                /**< \brief [18:18] Access Enable for Master TAG ID 18 (rw) */
    Ifx_Strict_32Bit EN19:1;                /**< \brief [19:19] Access Enable for Master TAG ID 19 (rw) */
    Ifx_Strict_32Bit EN20:1;                /**< \brief [20:20] Access Enable for Master TAG ID 20 (rw) */
    Ifx_Strict_32Bit EN21:1;                /**< \brief [21:21] Access Enable for Master TAG ID 21 (rw) */
    Ifx_Strict_32Bit EN22:1;                /**< \brief [22:22] Access Enable for Master TAG ID 22 (rw) */
    Ifx_Strict_32Bit EN23:1;                /**< \brief [23:23] Access Enable for Master TAG ID 23 (rw) */
    Ifx_Strict_32Bit EN24:1;                /**< \brief [24:24] Access Enable for Master TAG ID 24 (rw) */
    Ifx_Strict_32Bit EN25:1;                /**< \brief [25:25] Access Enable for Master TAG ID 25 (rw) */
    Ifx_Strict_32Bit EN26:1;                /**< \brief [26:26] Access Enable for Master TAG ID 26 (rw) */
    Ifx_Strict_32Bit EN27:1;                /**< \brief [27:27] Access Enable for Master TAG ID 27 (rw) */
    Ifx_Strict_32Bit EN28:1;                /**< \brief [28:28] Access Enable for Master TAG ID 28 (rw) */
    Ifx_Strict_32Bit EN29:1;                /**< \brief [29:29] Access Enable for Master TAG ID 29 (rw) */
    Ifx_Strict_32Bit EN30:1;                /**< \brief [30:30] Access Enable for Master TAG ID 30 (rw) */
    Ifx_Strict_32Bit EN31:1;                /**< \brief [31:31] Access Enable for Master TAG ID 31 (rw) */
} Ifx_EBU_ACCEN0_Bits;

/** \brief  EBU Access Enable Register 1 */
typedef struct _Ifx_EBU_ACCEN1_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_EBU_ACCEN1_Bits;

/** \brief  EBU Address Select Register */
typedef struct _Ifx_EBU_ADDRSEL_Bits
{
    Ifx_Strict_32Bit REGENAB:1;             /**< \brief [0:0] Memory Region Enable (rw) */
    Ifx_Strict_32Bit ALTENAB:1;             /**< \brief [1:1] Alternate Segment Comparison Enable (rw) */
    Ifx_Strict_32Bit WPROT:1;               /**< \brief [2:2] Memory Region Write Protect (rw) */
    Ifx_Strict_32Bit GLOBALCS:1;            /**< \brief [3:3] Combined Chip Select Control (rw) */
    Ifx_Strict_32Bit MASK:4;                /**< \brief [7:4] Memory Region Address Mask (rw) */
    Ifx_Strict_32Bit ALTSEG:4;              /**< \brief [11:8] Memory Region Alternate Segment (rw) */
    Ifx_Strict_32Bit BASE:20;               /**< \brief [31:12] Memory Region Base Address (rw) */
} Ifx_EBU_ADDRSEL_Bits;

/** \brief  EBU Bus Read Access Parameter Register */
typedef struct _Ifx_EBU_BUSRAP_Bits
{
    Ifx_Strict_32Bit RDDTACS:4;             /**< \brief [3:0] Recovery Cycles between Different Regions (rw) */
    Ifx_Strict_32Bit RDRECOVC:3;            /**< \brief [6:4] Recovery Cycles after Read Accesses (rw) */
    Ifx_Strict_32Bit WAITRDC:5;             /**< \brief [11:7] Programmed Wait States for read accesses (rw) */
    Ifx_Strict_32Bit DATAC:4;               /**< \brief [15:12] Data Hold Cycles for Read Accesses (rw) */
    Ifx_Strict_32Bit EXTCLOCK:2;            /**< \brief [17:16] Frequency of external clock at pin BFCLKO or SDCLKO (rw) */
    Ifx_Strict_32Bit EXTDATA:2;             /**< \brief [19:18] Extended data (rw) */
    Ifx_Strict_32Bit CMDDELAY:4;            /**< \brief [23:20] Command Delay Cycles (rw) */
    Ifx_Strict_32Bit AHOLDC:4;              /**< \brief [27:24] Address Hold Cycles (rw) */
    Ifx_Strict_32Bit ADDRC:4;               /**< \brief [31:28] Address Cycles (rw) */
} Ifx_EBU_BUSRAP_Bits;

/** \brief  EBU Bus Configuration Register */
typedef struct _Ifx_EBU_BUSRCON_Bits
{
    Ifx_Strict_32Bit FETBLEN:3;             /**< \brief [2:0] Burst Length for Synchronous Burst (rw) */
    Ifx_Strict_32Bit FBBMSEL:1;             /**< \brief [3:3] Synchronous burst buffer mode select (rw) */
    Ifx_Strict_32Bit RESERVED:1;            /**< \brief [4:4] Reserved (r) */
    Ifx_Strict_32Bit FDBKEN:1;              /**< \brief [5:5] Burst FLASH Clock Feedback Enable (rw) */
    Ifx_Strict_32Bit BFCMSEL:1;             /**< \brief [6:6] Burst Flash Clock Mode Select (rw) */
    Ifx_Strict_32Bit NAA:1;                 /**< \brief [7:7] Enable flash non-array access workaround (rw) */
    Ifx_Strict_32Bit RES1:8;                /**< \brief [15:8] Reserved (r) */
    Ifx_Strict_32Bit ECSE:1;                /**< \brief [16:16] Early Chip Select for Synchronous Burst (rw) */
    Ifx_Strict_32Bit EBSE:1;                /**< \brief [17:17] Early Burst Signal Enable for Synchronous Burst (rw) */
    Ifx_Strict_32Bit DBA:1;                 /**< \brief [18:18] Disable Burst Address Wrapping (rw) */
    Ifx_Strict_32Bit WAITINV:1;             /**< \brief [19:19] Reversed polarity at WAIT (rw) */
    Ifx_Strict_32Bit BCGEN:2;               /**< \brief [21:20] Byte Control Signal Control (rw) */
    Ifx_Strict_32Bit PORTW:2;               /**< \brief [23:22] Device Addressing Mode (rw) */
    Ifx_Strict_32Bit WAIT:2;                /**< \brief [25:24] External Wait Control (rw) */
    Ifx_Strict_32Bit AAP:1;                 /**< \brief [26:26] Asynchronous Address phase: (rw) */
    Ifx_Strict_32Bit LCKABRT:1;             /**< \brief [27:27] Lock Abort (rwh) */
    Ifx_Strict_32Bit AGEN:4;                /**< \brief [31:28] Device Type for Region (rw) */
} Ifx_EBU_BUSRCON_Bits;

/** \brief  EBU Bus Write Access Parameter Register */
typedef struct _Ifx_EBU_BUSWAP_Bits
{
    Ifx_Strict_32Bit WRDTACS:4;             /**< \brief [3:0] Recovery Cycles between Different Regions (rw) */
    Ifx_Strict_32Bit WRRECOVC:3;            /**< \brief [6:4] Recovery Cycles after Write Accesses (rw) */
    Ifx_Strict_32Bit WAITWRC:5;             /**< \brief [11:7] Programmed Wait States for write accesses (rw) */
    Ifx_Strict_32Bit DATAC:4;               /**< \brief [15:12] Data Hold Cycles for Write Accesses (rw) */
    Ifx_Strict_32Bit EXTCLOCK:2;            /**< \brief [17:16] Frequency of external clock at pin BFCLKO or SDCLKO (rw) */
    Ifx_Strict_32Bit EXTDATA:2;             /**< \brief [19:18] Extended data (rw) */
    Ifx_Strict_32Bit CMDDELAY:4;            /**< \brief [23:20] Command Delay Cycles (rw) */
    Ifx_Strict_32Bit AHOLDC:4;              /**< \brief [27:24] Address Hold Cycles (rw) */
    Ifx_Strict_32Bit ADDRC:4;               /**< \brief [31:28] Address Cycles (rw) */
} Ifx_EBU_BUSWAP_Bits;

/** \brief  EBU Bus Write Configuration Register */
typedef struct _Ifx_EBU_BUSWCON_Bits
{
    Ifx_Strict_32Bit FETBLEN:3;             /**< \brief [2:0] Burst Length for Synchronous Burst (rw) */
    Ifx_Strict_32Bit FBBMSEL:1;             /**< \brief [3:3] Synchronous burst buffer mode select (rw) */
    Ifx_Strict_32Bit RES:3;                 /**< \brief [6:4] Reserved, always reads 0 (r) */
    Ifx_Strict_32Bit NAA:1;                 /**< \brief [7:7] Enable flash non-array access workaround (r) */
    Ifx_Strict_32Bit RES0:8;                /**< \brief [15:8] Reserved (r) */
    Ifx_Strict_32Bit ECSE:1;                /**< \brief [16:16] Early Chip Select for Synchronous Burst (rw) */
    Ifx_Strict_32Bit EBSE:1;                /**< \brief [17:17] Early Burst Signal Enable for Synchronous Burst (rw) */
    Ifx_Strict_32Bit RES1:1;                /**< \brief [18:18] Reserved, always reads 0 (r) */
    Ifx_Strict_32Bit WAITINV:1;             /**< \brief [19:19] Reversed polarity at WAIT (rw) */
    Ifx_Strict_32Bit BCGEN:2;               /**< \brief [21:20] Byte Control Signal Control (rw) */
    Ifx_Strict_32Bit PORTW:2;               /**< \brief [23:22] Device Addressing Mode (r) */
    Ifx_Strict_32Bit WAIT:2;                /**< \brief [25:24] External Wait Control (rw) */
    Ifx_Strict_32Bit AAP:1;                 /**< \brief [26:26] Asynchronous Address phase: (rw) */
    Ifx_Strict_32Bit LOCKCS:1;              /**< \brief [27:27] Lock Chip Select (rw) */
    Ifx_Strict_32Bit AGEN:4;                /**< \brief [31:28] Device Type for Region (rw) */
} Ifx_EBU_BUSWCON_Bits;

/** \brief  EBU Clock Control Register */
typedef struct _Ifx_EBU_CLC_Bits
{
    Ifx_Strict_32Bit DISR:1;                /**< \brief [0:0] EBU Disable Request Bit (rw) */
    Ifx_Strict_32Bit DISS:1;                /**< \brief [1:1] EBU Disable Status Bit (r) */
    Ifx_Strict_32Bit reserved_2:6;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EPE:1;                 /**< \brief [8:8] Endinit Protection Enable (rw) */
    Ifx_Strict_32Bit reserved_9:7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SYNC:1;                /**< \brief [16:16] EBU Clocking Mode (rw) */
    Ifx_Strict_32Bit DIV2:1;                /**< \brief [17:17] DIV2 Clocking Mode (rw) */
    Ifx_Strict_32Bit EBUDIV:2;              /**< \brief [19:18] EBU Clock Divide Ratio (rw) */
    Ifx_Strict_32Bit SYNCACK:1;             /**< \brief [20:20] EBU Clocking Mode Status (r) */
    Ifx_Strict_32Bit DIV2ACK:1;             /**< \brief [21:21] DIV2 Clocking Mode Status (r) */
    Ifx_Strict_32Bit EBUDIVACK:2;           /**< \brief [23:22] EBU Clock Divide Ratio Status (r) */
    Ifx_Strict_32Bit reserved_24:8;         /**< \brief \internal Reserved */
} Ifx_EBU_CLC_Bits;

/** \brief  EBU External Boot Configuration Register */
typedef struct _Ifx_EBU_EXTBOOT_Bits
{
    Ifx_Strict_32Bit CFGEND:1;              /**< \brief [0:0] Configuration End (rh) */
    Ifx_Strict_32Bit CFGERR:1;              /**< \brief [1:1] Configuration Fetch Error (rh) */
    Ifx_Strict_32Bit reserved_2:29;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EBUCFG:1;              /**< \brief [31:31] Configuration Word Fetch (w) */
} Ifx_EBU_EXTBOOT_Bits;

/** \brief  EBU Module Identification Register */
typedef struct _Ifx_EBU_ID_Bits
{
    Ifx_Strict_32Bit ID_VALUE:32;           /**< \brief [31:0] Module Identification Value (r) */
} Ifx_EBU_ID_Bits;

/** \brief  EBU Configuration Register */
typedef struct _Ifx_EBU_MODCON_Bits
{
    Ifx_Strict_32Bit STS:1;                 /**< \brief [0:0] Memory Status Bit (r) */
    Ifx_Strict_32Bit LCKABRT:1;             /**< \brief [1:1] Lock Abort (rwh) */
    Ifx_Strict_32Bit SDTRI:1;               /**< \brief [2:2] SDRAM Tristate (rw) */
    Ifx_Strict_32Bit CLK_COMB:1;            /**< \brief [3:3] Combined External Bus Clock (rw) */
    Ifx_Strict_32Bit EXTLOCK:1;             /**< \brief [4:4] External Bus Lock Control (rw) */
    Ifx_Strict_32Bit ARBSYNC:1;             /**< \brief [5:5] Arbitration Signal Synchronization Control (rw) */
    Ifx_Strict_32Bit ARBMODE:2;             /**< \brief [7:6] Arbitration Mode Selection (rw) */
    Ifx_Strict_32Bit TIMEOUTC:8;            /**< \brief [15:8] Bus Time-out Control (rw) */
    Ifx_Strict_32Bit LOCKTIMEOUT:8;         /**< \brief [23:16] Lock Timeout Counter Preload (rw) */
    Ifx_Strict_32Bit FIFO_BYPASS:1;         /**< \brief [24:24] Reserved (rw) */
    Ifx_Strict_32Bit FAST_SRI:1;            /**< \brief [25:25] Clock Cycles used for SRI Address Decode (rw) */
    Ifx_Strict_32Bit OCDS_SUSP_DIS:1;       /**< \brief [26:26] OCDS SUSPEND Disable (rw) */
    Ifx_Strict_32Bit reserved_27:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit BUSSTATE:1;            /**< \brief [30:30] External Bus State (rh) */
    Ifx_Strict_32Bit ALE:1;                 /**< \brief [31:31] ALE Mode (rw) */
} Ifx_EBU_MODCON_Bits;

/** \brief  EBU SDRAM Control Register */
typedef struct _Ifx_EBU_SDR_CON_Bits
{
    Ifx_Strict_32Bit CRAS:4;                /**< \brief [3:0] Row to precharge delay counter (rw) */
    Ifx_Strict_32Bit CRFSH:4;               /**< \brief [7:4] Initialization refresh commands counter (rw) */
    Ifx_Strict_32Bit CRSC:2;                /**< \brief [9:8] Mode register set-up time (rw) */
    Ifx_Strict_32Bit CRP:2;                 /**< \brief [11:10] Row precharge time counter (rw) */
    Ifx_Strict_32Bit AWIDTH:2;              /**< \brief [13:12] Width of column address (rw) */
    Ifx_Strict_32Bit CRCD:2;                /**< \brief [15:14] Row to column delay counter (rw) */
    Ifx_Strict_32Bit CRC:6;                 /**< \brief [21:16] Refresh cycle time counter (rw) */
    Ifx_Strict_32Bit BANKM:3;               /**< \brief [24:22] Mask for bank tag (rw) */
    Ifx_Strict_32Bit reserved_25:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLKDIS:1;              /**< \brief [28:28] Disable SDRAM clock output (rw) */
    Ifx_Strict_32Bit PWR_MODE:2;            /**< \brief [30:29] Power Save Mode used for gated clock mode (rw) */
    Ifx_Strict_32Bit SDCMSEL:1;             /**< \brief [31:31] SDRAM clock mode select (rw) */
} Ifx_EBU_SDR_CON_Bits;

/** \brief  EBU SDRAM Mode Register */
typedef struct _Ifx_EBU_SDR_MOD_Bits
{
    Ifx_Strict_32Bit BURSTL:3;              /**< \brief [2:0] Burst length (rw) */
    Ifx_Strict_32Bit BTYP:1;                /**< \brief [3:3] Burst type (rw) */
    Ifx_Strict_32Bit CASLAT:3;              /**< \brief [6:4] CAS latency (rw) */
    Ifx_Strict_32Bit OPMODE:7;              /**< \brief [13:7] Operation Mode (rw) */
    Ifx_Strict_32Bit reserved_14:1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit COLDSTART:1;           /**< \brief [15:15] SDRAM coldstart (w) */
    Ifx_Strict_32Bit XOPM:14;               /**< \brief [29:16] Extended Operation Mode (rw) */
    Ifx_Strict_32Bit XBA:2;                 /**< \brief [31:30] Extended Operation Bank Select (rw) */
} Ifx_EBU_SDR_MOD_Bits;

/** \brief  EBU SDRAM Refresh Control Register */
typedef struct _Ifx_EBU_SDR_REF_Bits
{
    Ifx_Strict_32Bit REFRESHC:6;            /**< \brief [5:0] Refresh counter period (rw) */
    Ifx_Strict_32Bit REFRESHR:3;            /**< \brief [8:6] Number of refresh commands (rw) */
    Ifx_Strict_32Bit SELFREXST:1;           /**< \brief [9:9] Self Refresh Exit Status. (rh) */
    Ifx_Strict_32Bit SELFREX:1;             /**< \brief [10:10] Self Refresh Exit (Power Up). (rw) */
    Ifx_Strict_32Bit SELFRENST:1;           /**< \brief [11:11] Self Refresh Entry Status. (rh) */
    Ifx_Strict_32Bit SELFREN:1;             /**< \brief [12:12] Self Refresh Entry (rw) */
    Ifx_Strict_32Bit AUTOSELFR:1;           /**< \brief [13:13] Automatic Self Refresh (rw) */
    Ifx_Strict_32Bit ERFSHC:2;              /**< \brief [15:14] Extended Refresh Counter Period (rw) */
    Ifx_Strict_32Bit SELFREX_DLY:8;         /**< \brief [23:16] Self Refresh Exit Delay (rw) */
    Ifx_Strict_32Bit ARFSH:1;               /**< \brief [24:24] Auto Refresh on Self refresh Exit (rw) */
    Ifx_Strict_32Bit RES_DLY:3;             /**< \brief [27:25] Delay on Power Down Exit (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_EBU_SDR_REF_Bits;

/** \brief  EBU SDRAM Status Register */
typedef struct _Ifx_EBU_SDR_STAT_Bits
{
    Ifx_Strict_32Bit REFERR:1;              /**< \brief [0:0] SDRAM Refresh Error (rwh) */
    Ifx_Strict_32Bit SDRMBUSY:1;            /**< \brief [1:1] SDRAM Busy (rh) */
    Ifx_Strict_32Bit SDERR:1;               /**< \brief [2:2] SDRAM read error (rwh) */
    Ifx_Strict_32Bit reserved_3:29;         /**< \brief \internal Reserved */
} Ifx_EBU_SDR_STAT_Bits;

/** \brief  EBU Test/Control Configuration Register */
typedef struct _Ifx_EBU_USERCON_Bits
{
    Ifx_Strict_32Bit DIP:1;                 /**< \brief [0:0] Disable Internal Pipelining (rw) */
    Ifx_Strict_32Bit NAF:7;                 /**< \brief [7:1] No Assigned Function (rw) */
    Ifx_Strict_32Bit RES1:8;                /**< \brief [15:8] Reserved (r) */
    Ifx_Strict_32Bit ADDIO:4;               /**< \brief [19:16] Address Pins to GPIO Mode (rw) */
    Ifx_Strict_32Bit reserved_20:8;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RES:2;                 /**< \brief [29:28] Byte Control Enable (r) */
    Ifx_Strict_32Bit ADVIO:1;               /**< \brief [30:30] ADV Pin to GPIO Mode (rw) */
    Ifx_Strict_32Bit ADDLSW:1;              /**< \brief [31:31] Enable Address LSW, A(15:0) for GPIO (rw) */
} Ifx_EBU_USERCON_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ebu_union
 * \{  */

/** \brief  EBU Access Enable Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_ACCEN0_Bits B;                  /**< \brief Bitfield access */
} Ifx_EBU_ACCEN0;

/** \brief  EBU Access Enable Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_ACCEN1_Bits B;                  /**< \brief Bitfield access */
} Ifx_EBU_ACCEN1;

/** \brief  EBU Address Select Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_ADDRSEL_Bits B;                 /**< \brief Bitfield access */
} Ifx_EBU_ADDRSEL;

/** \brief  EBU Bus Read Access Parameter Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_BUSRAP_Bits B;                  /**< \brief Bitfield access */
} Ifx_EBU_BUSRAP;

/** \brief  EBU Bus Configuration Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_BUSRCON_Bits B;                 /**< \brief Bitfield access */
} Ifx_EBU_BUSRCON;

/** \brief  EBU Bus Write Access Parameter Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_BUSWAP_Bits B;                  /**< \brief Bitfield access */
} Ifx_EBU_BUSWAP;

/** \brief  EBU Bus Write Configuration Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_BUSWCON_Bits B;                 /**< \brief Bitfield access */
} Ifx_EBU_BUSWCON;

/** \brief  EBU Clock Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_CLC_Bits B;                     /**< \brief Bitfield access */
} Ifx_EBU_CLC;

/** \brief  EBU External Boot Configuration Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_EXTBOOT_Bits B;                 /**< \brief Bitfield access */
} Ifx_EBU_EXTBOOT;

/** \brief  EBU Module Identification Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_ID_Bits B;                      /**< \brief Bitfield access */
} Ifx_EBU_ID;

/** \brief  EBU Configuration Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_MODCON_Bits B;                  /**< \brief Bitfield access */
} Ifx_EBU_MODCON;

/** \brief  EBU SDRAM Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_SDR_CON_Bits B;                 /**< \brief Bitfield access */
} Ifx_EBU_SDR_CON;

/** \brief  EBU SDRAM Mode Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_SDR_MOD_Bits B;                 /**< \brief Bitfield access */
} Ifx_EBU_SDR_MOD;

/** \brief  EBU SDRAM Refresh Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_SDR_REF_Bits B;                 /**< \brief Bitfield access */
} Ifx_EBU_SDR_REF;

/** \brief  EBU SDRAM Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_SDR_STAT_Bits B;                /**< \brief Bitfield access */
} Ifx_EBU_SDR_STAT;

/** \brief  EBU Test/Control Configuration Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EBU_USERCON_Bits B;                 /**< \brief Bitfield access */
} Ifx_EBU_USERCON;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ebu_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */

/** \brief  Bus object */
typedef volatile struct _Ifx_EBU_BUS
{
    Ifx_EBU_BUSRCON RCON;                   /**< \brief 0, EBU Bus Configuration Register */
    Ifx_EBU_BUSRAP RAP;                     /**< \brief 4, EBU Bus Read Access Parameter Register */
    Ifx_EBU_BUSWCON WCON;                   /**< \brief 8, EBU Bus Write Configuration Register */
    Ifx_EBU_BUSWAP WAP;                     /**< \brief C, EBU Bus Write Access Parameter Register */
} Ifx_EBU_BUS;

/** \brief  SDRAM object */
typedef volatile struct _Ifx_EBU_SDR
{
    Ifx_EBU_SDR_CON CON;                    /**< \brief 0, EBU SDRAM Control Register */
    Ifx_EBU_SDR_MOD MOD;                    /**< \brief 4, EBU SDRAM Mode Register */
    Ifx_EBU_SDR_REF REF;                    /**< \brief 8, EBU SDRAM Refresh Control Register */
    Ifx_EBU_SDR_STAT STAT;                  /**< \brief C, EBU SDRAM Status Register */
} Ifx_EBU_SDR;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ebu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief  EBU object */
typedef volatile struct _Ifx_EBU
{
    Ifx_EBU_CLC CLC;                        /**< \brief 0, EBU Clock Control Register */
    Ifx_EBU_MODCON MODCON;                  /**< \brief 4, EBU Configuration Register */
    Ifx_EBU_ID ID;                          /**< \brief 8, EBU Module Identification Register */
    Ifx_EBU_USERCON USERCON;                /**< \brief C, EBU Test/Control Configuration Register */
    Ifx_EBU_EXTBOOT EXTBOOT;                /**< \brief 10, EBU External Boot Configuration Register */
    unsigned char reserved_14[4];           /**< \brief 14, \internal Reserved */
    Ifx_EBU_ADDRSEL ADDRSEL[3];             /**< \brief 18, EBU Address Select Register */
    unsigned char reserved_24[4];           /**< \brief 24, \internal Reserved */
    Ifx_EBU_BUS BUS[3];                     /**< \brief 28, Bus objects */
    unsigned char reserved_58[16];          /**< \brief 58, \internal Reserved */
    Ifx_EBU_SDR SDR;                        /**< \brief 68, SDRAM object */
    unsigned char reserved_78[56];          /**< \brief 78, \internal Reserved */
    Ifx_EBU_ACCEN0 ACCEN0;                  /**< \brief B0, EBU Access Enable Register 0 */
    Ifx_EBU_ACCEN1 ACCEN1;                  /**< \brief B4, EBU Access Enable Register 1 */
    unsigned char reserved_B8[840];         /**< \brief B8, \internal Reserved */
} Ifx_EBU;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEBU_REGDEF_H */
