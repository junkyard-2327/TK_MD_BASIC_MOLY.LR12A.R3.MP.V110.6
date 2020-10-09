/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2009
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   tl1_cnst.h
 *
 * Project:
 * --------------------------------------------------------
 *   
 *
 * Description:
 * --------------------------------------------------------
 *   
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 04 12 2017 weimin.zeng
 * [MOLY00240270] [6293][Gemini][T+W] Phase 1: Common Interface Changes Check in
 * 	
 * 	, 3G TDD UMAC PCH buffer.
 *
 * 01 13 2017 weimin.zeng
 * [MOLY00224780] [MT6293][UMOLYA][UMAC] memory shrink.
 * 	
 * 	.
 *
 * 04 29 2015 rong.yang
 * [MOLY00109047] [UMOLY][new feature] Pich false alarm Optimization
 * .
 *
 * 03 11 2015 marco.zhang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	__MAC_EHS_SUPPORT__ update to __TDD_MAC_EHS_SUPPORT__.
 *
 * 03 04 2015 chengwei.liu
 * [MOLY00093594] [TK6291][3G TDD][FPGA DVT][MD8470][UPA.001.001]PING ²»Í¨
 * .
 *
 * 12 29 2014 marco.zhang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	build error.
 *
 * 12 29 2014 marco.zhang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	.
 *
 * 12 23 2014 marco.zhang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	.
 *
 * 12 21 2014 marco.zhang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	prefix.
 *
 * 12 11 2014 rong.yang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * .revise umac part about shared memory on tl1_ps_shared_mem.h/.c
 *
 * 12 10 2014 rong.yang
 * [MOLY00087194] [3G UMAC] merge 6291 code from MOLY.U3G.90IT.DEV
 * .
 *
 * 09 17 2013 shouzhu.zhang
 * [MOLY00037556] remove compile option __ADD_MEAS_FREQ_NUM__
 * <saved by Perforce>
 *
 * 04 01 2013 shouzhu.zhang
 * [MOLY00013249] MM TL1 Code check in
 * [TL1] Merge lastes WR8 + R9 + MM code to MOLY..
 * 
 * 09 24 2012 xiaoyun.mao
 * [MOLY00004069] [MOLY]TDD_R9_DEV Patch back to MOLY
 * TDD_R9_DEV patch back to MOLY
 * 
 * 09 19 2012 xiaoyun.mao
 * [MOLY00002766] 
 * warning remove about CFN_IMMEIDATE: oxFFFF changed to -1
 *
 * 05 03 2012 wcpuser_integrator
 * removed!
 * .
 *
 * 03 02 2012 shuyang.yin
 * removed!
 * .
 * (TL1 SAP)
 *
 * 02 24 2012 shuyang.yin
 * removed!
 * .
 *
 * 01 18 2011 xinqiu.wang
 * removed!
 * Add RHR feature to tl1 interface files.
 *
 * 12 01 2010 popcafa.shih
 * removed!
 * .
 *
 * 11 04 2010 xinqiu.wang
 * removed!
 * 1. Add ul_mac_event to cphy_dch_setup/modify/release_req
 * 2. Add two ticks and structs for mac-tl1 interface.
 * 3. Add two simulation structs according to MAC's requeset.
 *
 * 11 03 2010 xinqiu.wang
 * removed!
 * 1.SLCE-TL1 SAP Modify for R7
 * 2. MAC-TL1 SAP Modify for UPA
 *
 * 08 24 2010 popcafa.shih
 * removed!
 * .
 *
 * 08 02 2010 qing.zhang
 * removed!
 * 1. Change the value of MAX_UL_TB from 16 to 32, change the value of MAX_DL_DATA from 953 to 1187, and change the value of MAX_UL_DATA from 829 to 1187 according to the requirement of UMAC.
 *
 * removed!
 * removed!
 * 1.Modify the description of MAX_HSDSCH_SIZE.
 * 2.Modify BLER_INVALID to -64 according to the discussion result with SLCE.
 *
 * removed!
 * removed!
 * 1.Add max and min value of tm, off, rssi, rscp, iscp, sir, tx_power, tadv, doff, cpid, meas_id, bler.
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 1.Add HSUPA related cnst (MAX_EAGCH_NUM, MAX_EHICH_NUM, MAX_REF_BETA_NUM,MAX_EDCH_HARQ_PROC_PER_MODE )
 *
 * removed!
 * removed!
 * Add MAX_PREFERRED_PSC to solve tempory build error.
 *
 * removed!
 * removed!
 * 1.Add MAX_NUM_MEAS_CELL to solve tempory build error.
 *
 * removed!
 * removed!
 * 1.Delete pre-declare check of __UMTS_TDD128_MODE__
 *
 * removed!
 * removed!
 * Add check out history comments of last check in.
 * 1.add check pre-declare of __UMTS_TDD128_MODE__
 * 2.delete macro define of MAX_NUM_MEAS_CELL and MAX_PREFERRED_PSC
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * Add TM_VALID and OFF_VALID in 
 *
 * removed!
 * removed!
 * Rename __UMTS_TDD128_RAT__ to __UMTS_TDD128_MODE__
 *
 * removed!
 * removed!
 * correct the file name in the file header 
 *
 * removed!
 * removed!
 * add log section for tl1interface header files
 *
 *******************************************************************************/

#ifndef _TL1_CNST_H
#define _TL1_CNST_H

/*-------- BCH related constant  ----------------------*/
#define  TDD_MAX_SIB_PATTERN         (28)                /* The maximum number of BCH SIB blocks */
#define  TDD_MAX_SIB_SEG_COUNT       (16)                /* The maximum number of segments in 1 BCH SIB */

/*-------- TrCH related constant (For UL/DL 384Kbps capability) ----------------------*/
#define  TDD_MAX_TRCH_NUM            (8)                 /* Maximum Simultaneous TrCHs of any kind (DL or UL).For 384kbps capability*/
#define  TDD_MAX_DL_TB               (32)                /* Maximum simultaneous DL TBs, For 384kbps capability.*/
#define  TDD_MAX_DL_TFC              (128)               /* Maximum number of TFCs per DL CCTrCH, For 384kbps capability */
#define  TDD_MAX_DL_TFs              (64)                /* Maximum numbre of TFs per DL CCTrCH,For 384kbps capability */
#define  TDD_MAXTF                   (32)                /* Maximum number of TF per UL or DL TrCH TFS */
#define  TDD_MAXFACHPCH              (8)                 /* Maximum number of FACHs and PCHs mapped onto one S-CCPCHs */
#define  TDD_MAX_UL_TFC              (64)                /* Maximum number of TFCs per UL CCTrCH,For 384kbps capability*/
#define  TDD_MAX_UL_TB               (32)                /* Maximum simultaneous DUL TBs */
#define  TDD_MAX_UL_TFs              (32)                /* Maximum numbre of TFs per UL CCTrCH, For 384kbps capability. */
#define  TDD_MAX_UL_TRCH             (8)                 /* Maximum number of UL TrCH,UE declared capability. */
#define  TDD_MAX_DL_TRCH             (8)                 /* Maximum number of DL TrCH,UE declared capability.*/

/*(336/8)*24+(144+4)/8+80*2 = 1187*/
#define  TDD_MAX_DL_DATA             (1187)              /* Maximum DL transport block array size. */
#define  TDD_MAX_UL_DATA             (1187)              /* Maximum UL transport block array size. */



/*-------- FS/Measurement related constant ----------------------*/
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
#define  TDD_MAX_FREQ_RANGE          (36) 
#else
#define  TDD_MAX_FREQ_RANGE          (8)                 /* Max size of frequency ranges for frequency scan. */
#endif
#define  TDD_MAX_FREQ_LIST           (33)                /* Max size of stored frequency list for frequency scan */
#define  TDD_MAX_PREFERRED_CELL      (96)                /* Max number of preferred cells on 1 frequency for frequency scan */
#define  TDD_MAX_PREFERRED_PSC       (96)                /* Max number of preferred cells on 1 frequency for frequency scan */
#define  TDD_MAX_NUM_REPORT_CELL     (32)                /* Max number of reported cells in the CPHY_MEASUREMENT_CELL_IND */
#define  TDD_MAX_NUM_MEASURED_CELL   (64)                /* Max number of monitored cells in the CPHY_MEASUREMENT_CONFIG_CELL_REQ*/
#define  TDD_MAX_NUM_MEAS_CELL       (64)                /* Max number of monitored cells in the measurement cell request primitive */
#define  TDD_MAX_MEAS_EVENT          (8)                 /* Maximum number of measurement events */
#define  TDD_MAX_UMTS_FREQ           (13)                 /* Maximum number of DPCH radio links in TDD128 */
#define  TDD_MAX_NUM_MEAS_ID         (16)                /* Maximum number of "Measurement Identity" */
#define  TDD_REPORT_INFINITY         (0xFF)              /* Tx_power measurement report number infinity*/

#define  TDD_MAX_RSSI_SNIFFER_SCAN_LIST   (36)            /*Maximum number of RSSI SNIFFER UARFCN (Add by Janet) */

/*-------- Magic value related constant ----------------------*/
#define  TDD_TM_INVALID             (-1)                  /* Default value representing Tm unknown. */
#define  TDD_TM_VALID               (6400*8)              /* Default value representing Tm known. */  
#define  TDD_MAX_TM                 (6400*8-1)            /* Maximum effective value of tm.*/
#define  TDD_MIN_TM                 (0)                   /* Minimum effective value of tm.*/ 
#define  TDD_OFF_INVALID            (-1)                  /* Default value representing OFF unknown. */
#define  TDD_OFF_VALID              (8192)                /* Default value representing Tm known. 8192 */  
#define  TDD_MAX_OFF                (8191)                /* Maximum effective value of off.*/
#define  TDD_MIN_OFF                (0)                   /* Minimum effective value of off.*/ 
#define  TDD_RSSI_INVALID           (-32768)              /* Default value representing RSSI unknown. */
#define  TDD_MAX_RSSI               (-100)                /* Maximum effective value of rssi.*/
#define  TDD_MIN_RSSI               (-400)                /* Minimum effective value of rssi.*/ 
#define  TDD_RSCP_INVALID           (0)                   /* Default value representing RSCP unknown. */
#define  TDD_MAX_RSCP               (-100)                /* Maximum effective value of rscp.*/
#define  TDD_MIN_RSCP               (-500)                /* Minimum effective value of rscp.*/
#define  TDD_ISCP_INVALID           (0)                   /* Default value representing ISCP unknown. */
#define  TDD_MAX_ISCP               (-100)                /* Maximum effective value of iscp.*/
#define  TDD_MIN_ISCP               (-480)                /* Minimum effective value of iscp.*/
#define  TDD_SIR_INVALID            (-32768)              /* Default value representing SIR unknown. */
#define  TDD_MAX_SIR                (40)                  /* Maximum effective value of sir.*/
#define  TDD_MIN_SIR                (-28)                 /* Minimum effective value of sir.*/
#define  TDD_TX_POWER_INVALID       (-32768)              /* Default value representing UE TX POWER unknown. */
#define  TDD_MAX_TX_POWER           (136)                 /* Maximum effective value of UE tx_power.*/
#define  TDD_MIN_TX_POWER           (-200)                /* Minimum effective value of UE tx_power.*/
#define  TDD_TADV_INVALID           (-1)                  /* Default value representing tadv unknown. */
#define  TDD_MAX_TADV               (8191)                /* Maximum effective value of tadv.*/
#define  TDD_MIN_TADV               (0)                   /* Minimum effective value of tadv.*/
#define  TDD_UARFCN_INVALID         (65535)               /* Invalid UARFCN for setting empty freq. entry in meas. config req. */
#define  TDD_DOFF_INVALID           (-1)                  /* Default value representing DOFF unknown. */
#define  TDD_MAX_DOFF               (7)                   /* Maximum effective value of doff.*/
#define  TDD_MIN_DOFF               (0)                   /* Minimum effective value of doff.*/
#define  TDD_CPID_INVALID           (255)                 /* Default value representing CELL_PARAM_ID unknown. */
#define  TDD_MAX_CPID               (127)                 /* Maximum effective value of CPID.*/
#define  TDD_MIN_CPID               (0)                   /* Minimum effective value of CPID.*/
#define  TDD_MEAS_ID_INVALID        (0)                   /* Default value representing MEAS_ID unknown.Valid value range from 1 to 16. */
#define  TDD_MAX_MEAS_ID            (16)                  /* Maximum effective value of meas_id.*/
#define  TDD_MIN_MEAS_ID            (1)                   /* Minimum effective value of meas_id.*/
#define  TDD_BLER_INVALID           (-64)                 /* Default value representing BLER unknown. */
#define  TDD_MAX_BLER               (0)                   /* Maximum effective value of bler.*/
#define  TDD_MIN_BLER               (-63)                 /* Minimum effective value of bler.*/
#define  TDD_PCCPCH_TX_POWER_INVALID       (0)                /* Default value representing PCCPCH TX POWER unknown. */
#define  TDD_MAX_PCCPCH_TX_POWER             (43)               /* Maximum effective value of PCCPCH tx_power.*/
#define  TDD_MIN_PCCPCH_TX_POWER              (6)                /* Minimum effective value of PCCPCH tx_power.*/
    

/*-------- Activation time related constant  ----------------------*/
#define  TDD_CFN_IMMEDIATE           (-1)                 /* Immediate CFN activation time. */
#define  TDD_SFN_IMMEDIATE           (-1)                 /* Immediate SFN activation time. */

/*-------- PhyCh related constant ---------------------*/
#define  TDD_MAX_ASC                                  (8)      /* Maximum access service class number */
#define  TDD_MAX_RL                                   (1)      /* Maximum number of DPCH radio links in TDD128 */
#define  TDD_MAX_TIMESLOT_PER_SUBFRAME                (7)      /* Maximum number of noraml timeslosts(TS0 ~ TS6) in a subframe in TDD128 */
#define  TDD_MAX_DL_TIMESLOT_PER_SUBFRAME             (5)      /*Max downlink timeslot in one subframe, only noraml timeslot is count*/
#define  TDD_MAX_UL_TIMESLOT_PER_SUBFRAME             (5)      /*Max uplink timeslot in one subframe,only noraml timeslot is count */
#define  TDD_MAX_UL_PHYCH_PER_SLOT                    (2)      /*Max physical channel in one slot in uplink*/
#define  TDD_MAX_DL_PHYCH_PER_SLOT                    (16)     /* Max physical channel in one slot in downlink*/
#define  TDD_MAX_DL_PHYCH_PER_SUBFRAME                (48)     /*Max physical channel in one subframe in downlink*/
#define  TDD_MAX_PRACH_FPACH_NUM                       (8)   /*Maximum number of PRACH / FPACH pairs in a cell (1.28 Mcps TDD)*/

/*-------- HSDPA related constant ---------------------*/
#define  TDD_MAX_HSSCCH_NUM                           (4)      /*The maximum number of HSSCCH assigned to UE by NW*/
#define  TDD_MAX_HARQ_PROCESS_NUM                     (8)      /*Maximum number of HARQ process supported in R5.*/
#define  TDD_MAX_HSDSCH_QUEUE                         (8)      /*Maximum number of HS-DSCH queue supported in R5*/
#define  TDD_MAX_HSDSCH_SIZE                          (8)      /*Maximum number of HS-DSCH size per queue supported in R5*/

#ifdef __HSUPA_SUPPORT__ 
#define  TDD_MAX_EAGCH_NUM                            (4)      /*Maximum number of E-AGCH assigned to UE by NW.*/
#define  TDD_MAX_EHICH_NUM                            (4)      /*Maximum number of E-HICH assigned to UE by NW.*/
#define  TDD_MAX_REF_BETA_NUM                         (8)      /*Maximum number of reference Beta informationto UE by NW.*/
#define  TDD_MAX_EDCH_HARQ_PROC_PER_MODE              (4)      /*Maximum number of allocated E-DCH HARQ processes per granting mode.*/
#define  TDD_MAX_EHICH_RESULT_NUM                      (6)   /*Maximum number of E-HICH results can be sent to MAC at one time.*/
#define  TDD_MAX_ETFCI_BITMAP_SIZE                    (16)  /*supported_etfci_bitmap  array size. TDD_MAX_ETFCI_BITMAP_SIZE=64/4*/
#endif

//#ifdef __TDD128_HSPA_PLUS__
/*#define TDD_MAX_ERUCCH                 (256)   max number of ERUCCH*/
#define  TDD_MAX_ERUCCH                 (8)     /*max number of ERUCCH*/
#define  TDD_maxEDCHTxPattern_TDD128    (4)     /*max number of EDCH TX pattern for SPS*/
//#endif
//#if defined( __UMTS_R9__ ) && defined ( __AST3002__ )
#define  TDD_MAX_DMO_PATTERN_NUM						  (5)
//#endif

//replace enums temporarily
//#ifdef __PS_L1_DC_ARCH__
#define  TDD_T_W_DEDICATED_PCH_BUFFER 1
#define  TDD_gRxPchBuffQueueSize (2)
#define  TDD_gRxDchBuffQueueSize (8)
#define  TDD_gRxDschBuffQueueSize (12)

#define  TDD_MAX_NUM_OF_EDCH_HARQ_PROCESS           (8)
#define  TDD_MAC_E_PDU_MEMORY_SIZE                  (1408) // maximum 11160 for TDD128,1400->1408 for 64B Allign

//for HSDPA
//  MAX_MAC_HS_PDU_NUM = MAX_MAC_PDP_SUPPORT * 32(MAX_MAC_HS_WINDOW_SIZE)+MAC_HS_PDU_NUM_MARGIN
//  When support<3 PDP, we leave MAC_HS_PDU_NUM_MARGIN=20, 10 for UL1 pre-get MAC-hs PDU, 10 for margin
#define  TDD_MAX_MAC_PDP_SUPPORT     GPRS_MAX_PDP_SUPPORT
#if TDD_MAX_MAC_PDP_SUPPORT<3
#define  TDD_MAC_HS_PDU_NUM_MARGIN 20
#else
#define  TDD_MAC_HS_PDU_NUM_MARGIN 0
#endif

#define  TDD_MAX_MAC_HS_PDU_NUM  ((TDD_MAX_MAC_PDP_SUPPORT * 32) + TDD_MAC_HS_PDU_NUM_MARGIN)

#define  TDD_mBYTE_SIZE_TO_32_BYTE_ALIGN_INC(byteSize)       (((byteSize) + 31) & 0xFFE0)

#define  TDD_MAX_HS_PDU_SIZE_IN_BYTES   (((TDD_MAX_HS_PDU_SIZE_IN_BITS+32+31)/32)*4)

#if defined(__UMTS_R9__) && defined(__TDD_MAC_EHS_SUPPORT__)
#define  TDD_MAX_HS_PDU_SIZE_IN_BITS    21072
#else
#define  TDD_MAX_HS_PDU_SIZE_IN_BITS    14043
#endif

#ifdef __TDD_MAC_EHS_SUPPORT__
#define  TDD_DL_ADR_OFFSET (0)
#else
#define  TDD_DL_ADR_OFFSET (4)
#endif

//for RX
//@review code, TDD_gRxDchBuffQueueSize defined as 8, so we simply redefine TDD_MAX_MAC_DCH_PDU_NUM as 8 + 1
#if 0
/* under construction !*/
#else
#define  TDD_MAX_MAC_DCH_PDU_NUM      (6+1+2) 
#define  TDD_MAX_MAC_PCH_PDU_NUM      (TDD_gRxPchBuffQueueSize+1) /*mac buffer should > tl1 pch buffer, or fator. When receive PCH msg, lumac will alloc new buff if no more will fatal.*/
#endif
#define  TDD_MAX_MAC_DCH_PDU_SIZE       (1472)   
#define  TDD_MAX_MAC_PCH_PDU_SIZE       (1472)   
//#endif

#define  TDD_MAX_MAC_HS_PDU_SIZE  1804   // Category 6 : 14411 bits and need 4-byte alignment



#endif
