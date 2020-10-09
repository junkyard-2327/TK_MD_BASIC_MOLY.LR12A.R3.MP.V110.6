/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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

/*******************************************************************************
 * Filename:
 * ---------
 *   uas_common_enums.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 * ----------------------------------------------------------------------------
 * $Log:$
 *
 * 07 28 2017 hamilton.liang
 * [MOLY00266853] [Bianco/Zion] gmn sw check-in
 * 	
 * 	GMN SW for 3G L2 part
 *
 * 04 12 2017 cen.chen
 * [MOLY00240270] [6293][Gemini][T+W] Phase 1: Common Interface Changes Check in.
 * UAS_TDD_RRCE part.
 *
 * 04 12 2017 jen-de.lai
 * [MOLY00240270] [6293][Gemini][T+W] Phase 1: Common Interface Changes Check in
 *
 * 03 31 2017 jen-de.lai
 * [MOLY00195317] [URLC][TX] - Gen93 URLC TX code modification for new HW and MCU Archi
 * 	
 * 	[UL2] - FDD T+W ubin share memory
 *
 * 01 12 2016 charlescm.wu
 * [MOLY00156239] [UMOLY][LR11] 3G FDD/TDD L2 big size memory union
 * [FDD|TDD common]  UBin 3G L2 memory reduction by union
 *
 * 08 21 2015 jen-de.lai
 * [MOLY00136103] [COPY CR][WW FT][Mexico-Mexico][Denali-1][MT6735][Telcel][E-RACH] ][ASSERT] Fatal Error (0x840, 0xf25e3c30)
 *
 * 12 31 2014 nancy.chang
 * [MOLY00087510] [Universal Bin] FDD DBME & LDBME development
 * .
 *
 * 12 30 2014 charlescm.wu
 * [MOLY00087679] [UMOLY][FDD][UAS COMMON][UL2 COMMON/URLC/BMC/SEQ]U-Bin CBr to UMOLY TRUNCK.
 *
 * 12 26 2014 chi-chung.lin
 * [MOLY00089131] [MT6291 Gemini] L+W+W+W code revision check in
 * .
 *
 * 12 24 2014 tc.chang
 * [MOLY00087434] [Universal Bin] Check in.
 *
 * 12 16 2014 charlescm.wu
 * [MOLY00087679] [UMOLY][FDD][UAS COMMON][UL2 COMMON/URLC/BMC/SEQ]U-Bin CBr to UMOLY TRUNCK.
 *
 * 12 15 2014 charlescm.wu
 * [MOLY00087679] [UMOLY][FDD][UAS COMMON][UL2 COMMON/URLC/BMC/SEQ]U-Bin CBr to UMOLY TRUNCK.
 *
 * 12 12 2014 chin-chia.chang
 * [MOLY00087443] [Universal Bin] [FDD] [UAS] [URR/Common] Check-in
 * [UniBin] [FDD] [UMOLY] uas_common_enums.h
 *
 * 12 12 2014 tc.chang
 * [MOLY00087434] [Universal Bin] Check in.
 * PDCP and CSR exported APIs.
 *
 * 11 14 2014 yenchih.yang
 * [MOLY00084256] [MEME] sync MT6291 to UMOLY
 * URR/MEME.
 *
 * 11 13 2014 claud.li
 * [MOLY00084256] [MEME] sync MT6291 to UMOLY
 * [MEME] interface check in
 *
 * 06 20 2014 jinpeng.hu
 * [MOLY00067841] [Klocwork] in //MOLY/TRUNK/MOLY/mcu/modem/uas_tdd128/ul2/urlc/src/crlc_fsm.c, line 7636.
 *
 * 06 05 2014 head.hsu
 * [MOLY00068511] [WW FT][Singapore][MT6595][M1] Assert: rabm_fsm.c line:663
 *  .
 *
 * 01 22 2014 yanjuan.feng
 * [MOLY00054324] [4G Gemini][Merge] MOLY.MM.GEMINI.DEV Merge back to MOLY
 * .
 *
 * 11 21 2013 rachel.liu
 * [MOLY00045854] [PS1267 HG+WG] Check-in Gemini HG+WG modification
 * Common files.
 *
 * 11 05 2013 johnson.liu
 * [MOLY00042658] [SHAQ] UAS related header split
 * .
 *
 * 11 05 2013 andrew.wu
 * [MOLY00042658] [SHAQ] UAS related header split
 * <saved by Perforce>
 *
 * 08 26 2013 tereasa.huang
 * [MOLY00034869] [HG+WG] PS6 code check in MOLY
 * [HG WG] Common macro defination and modification.
 *
 * 06 26 2013 hsiu-chi.hsu
 * [MOLY00027582] [R7R8][URLC] Stop Timer_Poll_Periodic in PCH state if no un-acked PDU to reduce standby power consumption
 * .
 *
 * 04 26 2013 huifeng.jing
 * MOLY00013224 moly
 *
 * 04 09 2013 yungfu.chen
 * [MOLY00013224] ??�q????��???��?��
 * .
 * 
 * 10 10 2012 young.zhou
 * [MOLY00004148] [3G TDD][URLC]TDD R9 Dev Patch back to Moly
 * Sync uas_common_enums.h
 *
 * 06 21 2012 hsiu-chi.hsu
 * removed!
 * .
 *
 * 04 17 2012 yiting.cheng
 * removed!
 * .
 *
 * 04 16 2012 yiting.cheng
 * removed!
 * .
 *
 * 04 11 2012 yiting.cheng
 * removed!
 * .
 *
 * 01 12 2012 peng-an.chen
 * removed!
 * .
 *
 * 01 09 2012 kathie.ho
 * removed!
 * Migrate RLC RX part of make file, sap, urlc\inc.
 *
 * 11 08 2011 weimin.zeng
 * removed!
 * merge MSBB.
 *
 * 08 30 2011 mengsung.wu
 * removed!
 * .
 *
 * 02 24 2011 tc.chang
 * removed!
 * .
 *
 * 02 14 2011 tc.chang
 * removed!
 * .
 *
 * 01 26 2011 max.yin
 * removed!
 * .
 *
 * 12 31 2010 max.yin
 * removed!
 * .
 *
 * 12 16 2010 peng-an.chen
 * removed!
 * .
 *
 * 12 14 2010 nicky.chou
 * removed!
 * .
 *
 * 10 25 2010 max.yin
 * removed!
 * .
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
 * constant values modification for test loop mode & BMC
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * Add copyright header.
 ******************************************************************************/

#ifndef _UAS_COMMON_ENUMS_H
#define _UAS_COMMON_ENUMS_H

/* Nicky 20101008: include header files for redundant header file removal */
#include "as_common.h"
#include "kal_general_types.h"
#include "global_def.h"

/* Universal Bin: merge TDD and FDD UAS/URR: begin */

/* [H/G + W/G] Used by URR, UL2, UL2D context declaration */
#define MAXIMUM_UAS_CNTX (MAX_UMTS_NUM)

/* [H/G + W/G] Used by URR, UL2, UL2D context indication */
typedef enum {
    UAS1 = 0,
    UAS2 = 1,
    UAS3 = 2,
    UAS4 = 3
} UAS_CURRENT_CNTX_PTR_enum;

typedef enum {
    TDD_UAS_SIM1 = 0,
    TDD_UAS_MAX_SIM_NUM
} TDD_UAS_SIM_INDEX_enum;


/* Offset in uplink DRLC PDU */
#define NUM_DRLC_OFFSET (8)

/* Max Yin 2009-10-19: Safe space for RLC header space 
 * sizeof(pdcp_ps_data_req_struct) - sizeof(PEER_BUFF_HDR) + 4 (reserved for ReTx from RATDM)
 */
#define DRLC_SAFE_HEADER_SPACE_OFFSET   24  

// Used by SAP_RRCE_SIBE, SAP_MEME_SIBE.
#define FDD_MAX_MEAS_CELLS (32)
#define TDD_MAX_MEAS_CELLS  (32)


/* Description: Maximum number of scrambling code per frequency.  The
   frequency carrier information may contain up to 32 scrambling codes
   (m) [ref:31.102;270] */
/* John Tang 2005/10/24. */
#define MAX_NUM_SCRAMBLING_CODE 32

#define MAX_NUM_TRCH             8


/**
* Database indexor
*/
#define FDD_DBIdx RRC_FDD_DB_Cell_Idx
#define TDD_DBIdx RRC_TDD_DB_Cell_Idx
#define DB_INVALID_INDEX (-1)

#define MAX_RBS_IN_RAB             (3)

#ifdef __UMTS_R5__
#define MAX_RB_LOOPED_BACK    (5) /* refer to 34.109 V5.5.0 section 6.2, the maximum number of loopback RB is 5 */
#else /* __UMTS_R5__ */
#define MAX_RB_LOOPED_BACK    (4) /* refer to 34.109 V3.a.0 section 6.2, the maximum number of loopback RB is 4 */
#endif /* __UMTS_R5__ */

// UniBin modify:  FDD(1800), TDD(1560),  TDD align to FDD
#define MAX_L2_EXTERNAL_SDU_SIZE   (1800) 

/*
 * Theoretically Max SDU size for TM mode in SRB is Max MAC-ehs PDU size. This is possible in e-FACH BCCH/PCCH mapped onto ehs.
 */
#define MAX_L2_TM_SDU_SIZE (2048)

#ifdef __CSHSPA_SUPPORT__
#define MAX_CS_UL_MEM_NUM (40) /* 5+1 for RLC discard timer, 32 for UMAC HARQ process, 2 for internal delay */
/*
 *  HARQ worst case
 *  1. [10ms TTI] Max time for one process is 16 * 40ms (duration for the same process to transmit)  = 640ms  ==> 32 pieces
 *
 *  2. [2ms TTI] Max time for one process is 16 * 16ms (duration for the same process to transmit) = 256ms  ==> 13 pieces
 */
#define MAX_CS_DL_HSPA_DATA_SIZE (84) /* 1 byte for PDCP header, 3 bytes alignment*/
#endif

#define MAX_CS_DATA_SIZE (160)  /* don't need to leave 8 bytes for RLC and 1byte for PDCP  because they would allocated in free header*/
#define MAX_RLC_CS_DATA_SIZE (NUM_DRLC_OFFSET + MAX_CS_DATA_SIZE) /* RLC needs to reserve NUM_DRLC_OFFSET(8) bytes for extra info in csr_tm_data_req */

/* definition for HP8960 LBM: extra CRC bytes - 3. */
#define MAX_CS_DL_DATA_SIZE (480+4)

#define FIRST_EXTENDED_USER_RB_ID (EXT_RB_ID_DCCH_RB4 + 1)
#define EXTENDED_RB_ID_NONE (FIRST_EXTENDED_RB_ID-1)
#define IS_VALID_EXTENDED_RB_ID(id) IS_INRANGE((id), FIRST_EXTENDED_RB_ID, LAST_EXTENDED_RB_ID)

#define INRANGE_RB1_RB32(id)   IS_INRANGE((id), EXT_RB_ID_DCCH_RB1, EXT_RB_ID_RB32)

#define INVALID_T308_DURATION        0xFFFF

/* Eric: Moved here since it's shared by MEME & UMAC */
#define FDD_INVALID_MEASUREMENT_ID      33
#define TDD_INVALID_MEASUREMENT_ID      17

#define FDD_MAX_NUM_TVM_CFG             32
#define TDD_MAX_NUM_TVM_CFG             16

/* Macro for information extracted above */
typedef enum tTxRxTag
{
    TX,
    RX
} tTxRx;

typedef enum tRLCEntityModeTag
{
    RLC_TM = 1,
    RLC_UM,
    RLC_AM
} tRLCEntityMode;

/* Jeff Wu */
#define RABM_MAX_NSAPI     11
#define MIN_NSAPI 5
#define MAX_NSAPI 15

/* 2011.02.14: Set 5 for passing GCF TC 7.1.5.2 */
#define MAX_VAL(VAL_A, VAL_B)   (((VAL_A) > (VAL_B)) ? (VAL_A):(VAL_B))
#define NUM_OF_NSAPI MAX_VAL(GPRS_MAX_PDP_SUPPORT, 5)

// UniBin modify:  FDD
// FDD:  #define RABM_MAX_PS_RABS (11)
// TDD: #define RABM_MAX_PS_RABS MAX_VAL(GPRS_MAX_PDP_SUPPORT, 5)
#define RABM_MAX_PS_RABS (11)

/* CN domain embedded in MUI. */
#define MUI_PS_DOMAIN 0x00000100 /* mask to get CN Domain. */
#define MUI_DOMAIN_POS 8 /* the position to indicate CN Domain is at bit MUI_DOMAIN_POS+1. */
/* BMC level 2 DRX bitmap size. */
#define UAS_BMC_MAX_BITMAP_SIZE (32)
#define MAX_AM_DATA_CNF (8)

/* Max Yin */
#define PDCP_DL_PDU_FREE_HEADER_SPACE       4

#define SHAQ_PDCP_NO_HDR_PDU_HDR_LEN         0

#define  FACH_BCH_AICH_SUPPORTED KAL_TRUE

typedef enum
{
   /* Extended Bearer IDs */
   /* IDs 4..31 for user plane (DTCH), routed to/from UUS SAP */

   /* Broadcast control channel */
   EXT_RB_ID_ALL = -6,
   FIRST_EXTENDED_RB_ID = -5,
   EXT_RB_ID_CTCH = FIRST_EXTENDED_RB_ID, /* -5 allocated to CTCH */
   EXT_RB_ID_BCCH_FACH, /* -4 allocated to BCCH/FACH */
   EXT_RB_ID_BCCH_BCH0, /* -3 allocated to BCCH' for SFN timing measurement */
   EXT_RB_ID_BCCH_BCH1, /* -2 allocated to BCCH/BCH */
   EXT_RB_ID_PCCH,      /* -1 Paging control channel */
   EXT_RB_ID_CCCH,      /*  0 Common control channel */
   EXT_RB_ID_DCCH_RB1,  /*  1 Dedicated control channel, UM bearer */
   EXT_RB_ID_DCCH_RB2,  /*  2 Dedicated control channel, AM bearer */
   EXT_RB_ID_DCCH_RB3,  /*  3 For high priority SAPI 0 NAS DT messages */
   EXT_RB_ID_DCCH_RB4,   /*  4 For low priority SAPI 3 NAS DT messages */
   EXT_RB_ID_RB5, 
   EXT_RB_ID_RB6, 
   EXT_RB_ID_RB7, 
   EXT_RB_ID_RB8, 
   EXT_RB_ID_RB9, 
   EXT_RB_ID_RB10, 
   EXT_RB_ID_RB11, 
   EXT_RB_ID_RB12, 
   EXT_RB_ID_RB13, 
   EXT_RB_ID_RB14, 
   EXT_RB_ID_RB15, 
   EXT_RB_ID_RB16, 
   EXT_RB_ID_RB17, 
   EXT_RB_ID_RB18, 
   EXT_RB_ID_RB19, 
   EXT_RB_ID_RB20, 
   EXT_RB_ID_RB21, 
   EXT_RB_ID_RB22, 
   EXT_RB_ID_RB23, 
   EXT_RB_ID_RB24, 
   EXT_RB_ID_RB25, 
   EXT_RB_ID_RB26, 
   EXT_RB_ID_RB27, 
   EXT_RB_ID_RB28, 
   EXT_RB_ID_RB29, 
   EXT_RB_ID_RB30, 
   EXT_RB_ID_RB31, 
   EXT_RB_ID_RB32, 
   LAST_EXTENDED_RB_ID = EXT_RB_ID_RB32
//   DUMMY_EXTENDED_RB_ID = 0x7FFFFFFF /* frost: remove it */
} ExtendedRbId;

typedef enum
{
    TriggerGMNFeatureFatal = 0,
    TriggerGMNFeatureAssert,
    TriggerGMNFeatureRandomTimer,
    TriggerGMNFeatureNone
} GMNtriggerType;

/* Jeff Wu */
typedef enum
{
    RAB_RELEASE_BY_NW,
    RAB_RELEASE_BY_RRC_CONN_RELEASE,
    RAB_RELEASE_BY_LOST_COVERAGE,
    RAB_RELEASE_BY_INTER_RAT,
    RAB_RELEASE_BY_UNSPECIFIED
} rab_release_cause_enum;

typedef enum
{
    L2_RRC_IDLE,
    L2_RRC_CELL_DCH,
    L2_RRC_CELL_FACH,
    L2_RRC_CELL_PCH,
    L2_RRC_URA_PCH,
    L2_RRC_INVALID_STATE
} L2_RRC_STATE;

typedef enum CMAC_TrafficVolumeEventType {
    e4a = 0,
    e4b = 1,
    eInvalid=3
} CMAC_TrafficVolumeEventType;


typedef enum
{
    FIRST_LOGICAL_CHANNEL_PDU_TYPE,
    PDU_TYPE_CONTROL = FIRST_LOGICAL_CHANNEL_PDU_TYPE,
    PDU_TYPE_DATA,
    PDU_TYPE_NA,
    LAST_LOGICAL_CHANNEL_PDU_TYPE = PDU_TYPE_NA
}tRlcPduType ;


typedef kal_uint16 RLCEntityID;

/* [MODIFICATION] Kathie */
typedef enum{
    REASM_CAUSE_NORMAL,
    REASM_CAUSE_MRW,
    /* REASM_CAUSE_RESET, */
    REASM_CAUSE_NUM
}tReasmCause;


typedef enum
{
    AM_RLC_SDU_ACK = 0,
    AM_RLC_SDU_ALL_TX,
    AM_RLC_SDU_NOT_ALL_TX
} tAmRlcSduTxResult;

typedef enum
{
    UAS_DL_ADM = 0,
    GRLC_DL_ADM_FIRST_PART,
    GRLC_DL_ADM_SECOND_PART,
    UAS_DL_IDLE_ADM
} uas_dl_adm_index_enum;



typedef kal_uint16 RLCEntityID;

/* UMAC R7 */
/* Author : David */
/* Temp Enum. After code merge with RLC, i need to replace it with RLC-SLCE interface.*/
typedef enum
{
    Flexible = 0,
    Fixed = 1
} tRlcFixedFlexible;


typedef enum
{
    swF8AlgoUea0 = 0/* No Cipher */
   ,swF8AlgoUea1
   ,swF8AlgoUea2
} swF8Algo;


/* Enum to indicate the ubin memory is initialized to None / FDD / TDD.*/
typedef enum
{
   UL2_UBIN_MEM_INIT_IN_NONE = 0,   /* Initialization state, ul2 ubin memory doesn't init to FDD or TDD */
   UL2_UBIN_MEM_INIT_IN_FDD,        /* ul2 ubin memory is initialized to FDD */
   UL2_UBIN_MEM_INIT_IN_TDD,        /* ul2 ubin memory is initialized to TDD */
   UL2_UBIN_MEM_TASK_IN_NONE,
   UL2_UBIN_MEM_TASK_IN_FDD,        /* ul2 ubin memory is initialized to FDD */
   UL2_UBIN_MEM_TASK_IN_TDD         /* ul2 ubin memory is initialized to TDD */
} ul2_ubin_mem_init_state_e;

#endif /* _UAS_COMMON_ENUMS_H */

