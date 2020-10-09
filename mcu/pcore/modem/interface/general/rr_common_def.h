/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
 *   rr_common_def.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 04 07 2017 anurag.pancholi
 * [MOLY00239842] [SE2/SE3 internal][UMOLYA] SMP modifications : GAS, GL1
 * .SMP Check-in To UMOLYA.
 *
 * 02 19 2016 yu-po.wang
 * [MOLY00165413] [UMOLY] change the naming for TCM usage
 * .
 *
 * 09 15 2015 chi-chung.lin
 * [MOLY00141360] [GAS] LR11 build warning fix
 * 	.
 *
 * 05 27 2015 titi.wu
 * [MOLY00097502] SRVCC HO evaluation phase fail, trigger send SIP re-invite
 * .
 *
 * 03 20 2015 yu-po.wang
 * [MOLY00087619] [UMOLY][Universal Bin] GAS check in
 * Let the shared data with DSP be 4 byte aligned.
 *
 * 01 26 2015 tsung-wei.tu
 * [MOLY00087619] [UMOLY][Universal Bin] GAS check in
 * .
 *
 * 01 12 2015 ming.lee
 * [MOLY00087470] [Universal Bin] FDD GAS developement
 * .
 *
 * 01 12 2015 ming.lee
 * [MOLY00087470] [Universal Bin] FDD GAS developement
 * .
 *
 * 01 12 2015 ming.lee
 * [MOLY00087470] [Universal Bin] FDD GAS developement
 * Fix link error.
 *
 * 01 05 2015 ming.lee
 * [MOLY00087470] [Universal Bin] FDD GAS developement
 * xxx_enums.h not included (code not synced between peng-an CBr and UMOLY)
 *
 * 11 13 2014 ming.lee
 * [MOLY00080211] [MT6291_DEV][MT6291_UESIM_DEV] Check in low power to MT6291_DEV, MT6291_UESIM_DEV
 * GISE Paging.
 *
 * 11 05 2014 ming.lee
 * [MOLY00081154] [ATT_TMO_DEV] AT&T requirement merge back
 * CSG fingerprint GAS part.
 *
 * 04 08 2014 yu-po.wang
 * [MOLY00061711] [K2 MD2] Call for Checkin - [MPAL] reducing TCM usage for K2 MD2
 *
 * 03 17 2014 tangte.lo
 * [MOLY00058655] Add PSI_13 message trace decode support in ELT
 *
 * 10 03 2013 jeremiah.lin
 * [MOLY00040091] [MAC] MAC/ACS Peer Msg Decode
 *
 * 09 16 2013 henry.lai
 * [MOLY00037661] [MT6290] GAS development for AFR, L1 measurement control, backup IR measurement mechanism, and meaurement report
 * 	.
 *
 * 08 30 2013 katie.tseng
 * [MOLY00035887] [3G Gemini2.0+][GAS] Limit PS access channel protect duration in Gemini 2.0 projects
 * 	.
 *
 * 08 26 2013 james.chan
 * [MOLY00031373] [MOLY][SM][MM][RLC][RR] UNITDATA_CNF mechanism modification
 * .
 *
 * 04 29 2013 vend_rex.tung
 * [MOLY00020542] [SystemService][MOLY] To remove useless input sections by the request
 * [gas] Remove input section for input section central management
 *
 * 03 22 2013 vend_rex.tung
 * [MOLY00012031] [MODIS] WR8 warning fix on MOLY branch
 *
 * 03 15 2013 henry.lai
 * [MOLY00009222] [GAS][Multi-Mode Development] Merge GAS multi-mode development to MOLY
 * .
 *
 * 01 23 2013 henry.lai
 * [MOLY00009222] [GAS][Multi-Mode Development] Merge GAS multi-mode development to MOLY
 * .
 *
 * 01 11 2013 henry.lai
 * [Henry][Multi-Mode Development] GAS Development and R8 CR Sync
 *
 * 12 13 2012 katie.tseng
 * [MOLY00007446] [MOLY] MOLY LOCAL_PARA_HDR/PEER_BUFF_HDR replacement
 * .
 * 
 * 08 14 2012 peter.chien
 * [MOLY00002118] [PS1][GAS] Internal inject message test for MEAS IT
 * .
 * 
 * 08 14 2012 peter.chien
 * [MOLY00002118] [PS1][GAS] Internal inject message test for MEAS IT
 * .
 *
 * 05 22 2012 adeline.chang
 * removed!
 * .
 *
 * 05 17 2012 peter.chien
 * .
 *
 * 04 17 2012 yiting.cheng
 * removed!
 * .
 *
 * 04 13 2012 henry.lai
 * removed!
 * .
 *
 * 04 13 2012 yiting.cheng
 * removed!
 * .
 *
 * 04 13 2012 yiting.cheng
 * removed!
 * .
 *
 * 04 12 2012 yiting.cheng
 * removed!
 * .
 *
 * 04 12 2012 henry.lai
 * removed!
 * .
 *
 * 03 07 2012 adeline.chang
 * removed!
 * .
 *
 * 01 11 2012 henry.lai
 * removed!
 * .
 *
 * 12 20 2011 henry.lai
 * removed!
 * .
 *
 * 09 21 2011 jeremiah.lin
 * removed!
 * .
 *
 * 12 14 2010 nancy.chang
 * removed!
 * .
 *
 * 10 27 2010 henry.lai
 * removed!
 * .
 *
 * 10 16 2010 nancy.chang
 * removed!
 * .
 *
 * 09 21 2010 evelyn.wang
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
 * add to source control recursely
 *
 * removed!
 * removed!
 * Change rr to rr2.
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
 * add IR HO related enums into tbf_rel_type_enum
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
 * created by clearfsimport
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
 * this is a temporary solution to remove the compile option MTK_KAL_MNT from MoDIS
 *
 ******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#ifndef _RR_COMMON_DEF_H
#define _RR_COMMON_DEF_H

/* Nancy 20101005: Suggest Add for RHR */
#include "kal_public_api.h"
#include "kal_general_types.h"
/* for MODEM_WARNING_MESSAGE macro */
#include "event_info_utility.h"
#include "nvram_editor_data_item.h"
#include "bitstream.h"
#include "rr_common_enums.h"

/******************************************************************************
 * Constants
 ******************************************************************************/
#ifdef __MTK_INTERNAL__
#ifndef __GAS_INTERNAL_IT__
#define __GAS_INTERNAL_IT__
#endif /* __GAS_INTERNAL_IT__ */
#ifndef __GAS_INTERNAL_IR_IT__
#define __GAS_INTERNAL_IR_IT__
#endif /* __GAS_INTERNAL_IR_IT__ */
#endif /* __MTK_INTERNAL__ */

#define RLC_MAC_CTRL_BLK_SIZE  23

/* Evelyn 20090415: Merge R6 */
#ifdef __MTBF__
#define MULTIPLE_TBF_NUM 5
#else 
#define MULTIPLE_TBF_NUM 1
#endif /* __MTBF__ */

/* Vincent: defined for RR-MPAL */

#ifdef __PS_SERVICE__
#define PKT_CELL_CHANGE_FAILURE_MSG        0x00

/* RRBP response message types */
#define PKT_CTRL_ACK_MSG                   0x01 /* RRBP response to control messages */
#define PKT_DL_CTRL_ACK_MSG                0x03 /* RRBP response to data block with FBI in RLC UNACK mode */
#define PKT_DL_ACK_NACK_MSG                0x02 /* RRBP response to data block in RLC ACK mode */

#ifdef __R99__
/*
 * To indicate an RRBP responding to PUAN with FAI allowing for 
 * TBF-EST procedure should be sent later. The actual RRBP sent 
 * depends on whether RLC requests for TBF-EST and Control Ack Type
 */
#define PKT_CTRL_ACK_TBF_EST_MSG           0x04
/* Claire 041216 change : Implement R99 PFI */
#define RLC_MAC_INVALID_PFI                0xff
#endif /* __R99__ */ 

#define PKT_UL_DUMMY_CTRL_BURST_MSG        0x03
#define PKT_MEASUREMENT_REPORT_MSG         0x04
#define PKT_RESOURCE_REQ_MSG               0x05
#define PKT_MOBILE_TBF_STATUS_MSG          0x06
#define PKT_PSI_STATUS_MSG                 0x07
#ifdef __EGPRS_MODE__
#define EGPRS_PKT_DL_ACK_NACK_MSG          0x08
#endif 
#define PKT_PAUSE_MSG                      0x09
#define ADDITIONAL_MS_RADIO_ACCESS_MSG     0x0b
#define PKT_ENHANCED_MEASUREMENT_MSG       0x0a /* no error in standard */

/* Byron: Add for PKT SI Status */
#ifdef __GERAN_R4__
#define PKT_SI_STATUS_MSG       0x0d    /* no error in standard */
#define PKT_CELL_CHANGE_NOTIFICATION_MSG    0x0c
#endif 

/*
 * Downlink Peer-to-Peer Messages.(Network --> Mobile Station)The
 * * distribution messages start with 1 in their MSB and non-distribution
 * * messages start with 0 in their MSB(v6.4.0 sec 11.1.1)
 */
#define PKT_ACCESS_REJECT_MSG              0x21
#define PKT_CELL_CHANGE_ORDER_MSG          0x01
#define PKT_DL_ASSIGNMENT_MSG              0x02
#define PKT_MEASUREMENT_ORDER_MSG          0x03
#define PKT_PAGING_REQ_MSG                 0x22
#define PKT_PDCH_RELEASE_MSG               0x23
#define PKT_POLLING_REQ_MSG                0x04
#define PKT_PWR_CTRL_TIMING_ADVANCE_MSG    0x05
#define PKT_PRACH_PARAMS_MSG               0x24
#define PKT_QUEUING_NOTIFICATION_MSG       0x06
#define PKT_TIMESLOT_RECONFIG_MSG          0x07
#define PKT_TBF_RELEASE_MSG                0x08
#define PKT_TBF_RELEASE_UL_MSG             0xE8 /* To distinguish RRBP responding to PKT TBF RELEASE releasing UL TBF; see comment of rr_rrbp_resps_add() on date 030902 */
#define PKT_TBF_RELEASE_DL_MSG             0xF8 /* To distinguish RRBP responding to PKT TBF RELEASE releasing DL TBF; see comment of rr_rrbp_resps_add() on date 030902 */
#define PKT_UL_ACK_NACK_MSG                0x09
#define PKT_UL_ASSIGNMENT_MSG              0x0a
#define PKT_DL_DUMMY_CTRL_MSG              0x25
#define PKT_INVALID_MSG                    0xFF /* Exce 20040306: add invalid msg type for rr_check_nsend_rrbpresponse() */

/* Lanslo 20070706: NACC */
#ifdef __GERAN_R4__
#define PKT_CELL_CHANGE_CONTINUE_MSG   0x0b
#define PKT_NEIGH_CELL_DATA_MSG              0x0c
#define PKT_SERV_CELL_DATA_MSG                 0x0d
#endif /* __GERAN_R4__ */ 

/* Evelyn 20090415: Merge R6 */
/* Evelyn MTBF */
#ifdef __MTBF__
#define MTBF_DL_ASSIGNMENT_MSG           0x0f
#define MTBF_UL_ASSIGNMENT_MSG           0x10
#define MTBF_TIMESLOT_RECONFIG_MSG       0x11
#endif /* __MTBF__ */ 

#define PS_HANDOVER_COMMAND_MSG          0x15
#ifdef __PS_HO__
#define PKT_PHYSICAL_INFO_MSG            0x16
#endif /* __PS_HO__ */ 

#ifdef __GERAN_R6__
#define PKT_SERV_CELL_SI_MSG  0x20
#endif /* __GERAN_R6__ */

#ifdef __ETWS_SUPPORT__
#define PKT_APP_INFO_MSG 0x2d
#endif

/* PACKET SYSTEM INFORMATION Messages */
#define PSI1_MSG                           0x31
#define PSI2_MSG                           0x32
#define PSI3_MSG                           0x33
#define PSI3_BIS_MSG                       0x34
#define PSI4_MSG                           0x35
#define PSI5_MSG                           0x36
#define PSI13_MSG                          0x37

#ifdef __GERAN_R4__
#define PSI3_TER_MSG                       0x3c
#define PSI3_QUATER_MSG                   0x3d
#define PSI6_MSG                           0x30
#define PSI7_MSG                           0x38
#define PSI8_MSG                           0x39
#define PSI14_MSG                          0x3a
#define PSI15_MSG                          0x3e
#endif /* __GERAN_R4__ */

#ifdef __GERAN_R5__
#define PSI16_MSG                          0x28
#endif /* __GERAN_R5__ */

#define ALL_PSI_MSGS                       0x39

#define MAX_TIMESLOTS               8
/* Evelyn 20090905: Modify for High multislot class */
#if defined (__MULTISLOT_CLASS_45__)
#define MAX_TX_TIMESLOTS            6
#define MAX_RX_TIMESLOTS            6
#elif defined (__MULTISLOT_CLASS_34__)
#define MAX_TX_TIMESLOTS            5
#define MAX_RX_TIMESLOTS            5
#else
#define MAX_TX_TIMESLOTS            4
#define MAX_RX_TIMESLOTS            4
#endif

#define RR_INVALID_FN_NUMBER        0xFFFFFFFF

#define RR_INVALID_TN               0xFF        /* Exce 20040310: add invalid timeslot number */
#define RR_RTI_INVALID              0xFF        /* Exce 20040310: add invalid RTI value */

#define MPAL_RLC_CONTINUE_FLUSH_NEXT 0x1
#define MPAL_RLC_CONTINUE_FLUSH_CURRENT 0x2
#define MPAL_RLC_RESEG_CONTINUE_FLUSH_NEXT 0x3
#define MPAL_RLC_RESEGMENT_CURRENT 0x4
#endif /* __PS_SERVICE__ */

/* Information Element Identifiers (IEI) for RR mesgs */
/*****************************************************************************/
#define MOBILE_IDENTITY_IEI  0x17
#define STARTING_TIME_IEI    0x7c
#define CELL_CHAN_DESC_IEI             0x62

#define MULTISLOT_CONFIG_IEI           0x10
#define CHAN_MODE_SET_1_IEI            0x63
#define CHAN_MODE_SET_2_IEI            0x11
#define CHAN_MODE_SET_3_IEI            0x13
#define CHAN_MODE_SET_4_IEI            0x14
#define CHAN_MODE_SET_5_IEI            0x15
#define CHAN_MODE_SET_6_IEI            0x16
#define CHAN_MODE_SET_7_IEI            0x17
#define CHAN_MODE_SET_8_IEI            0x18

#define SECOND_CHAN_MODE_IEI           0x66

#define SECOND_CHAN_DESC_AFTER_TIME_IEI   0x64
#define FREQ_LIST_AFTER_TIME_IEI       0x05
#define MOB_ALLOC_AFTER_TIME_IEI       0x72
#define MOB_ALLOC_IEI                  0x72

#define FREQ_LIST_BEFORE_TIME_IEI      0x19
#define CHAN_DESC_BEFORE_TIME_IEI      0x1c
#define FREQ_CHAN_SEQ_BEFORE_TIME_IEI  0x1e
#define FREQ_CHAN_SEQ_AFTER_TIME_IEI   0x69
#define MOB_ALLOC_BEFORE_TIME_IEI      0x21
#define SECOND_CHAN_DESC_BEFORE_TIME_IEI  0x1d

#define CIPHER_MODE_SETTING_IEI        0x90

#define RR_PKT_UL_ASGN_IEI             0x22
#define RR_PKT_DL_ASGN_IEI             0x23
#define SYNC_IND_IEI                   0x0d
#define FREQ_SHORT_LIST_AFTER_TIME_IEI 0x02
#define REAL_TIME_DIFFERENCE_IEI       0x7b
#define TIMING_ADVANCE_IEI             0x7d
#define FREQUENCY_SHORT_LIST_BEFORE_TIME_IEI 0x12
#define MS_TIME_DIFF_IE       0x77
#define VGCS_TARGET_MODE_IND_IEI       0x01
#define MULTI_RATE_CONFIG_IEI          0x03

#define RR_BA_RANGE_IEI                0x73
#define RR_GROUP_CHANNEL_DESC_IEI      0x74
#define RR_GROUP_CIPHER_KEY_NUM_IEI    0x80
#define RR_GPRS_RESUME_IEI             0xc0
#define RR_BA_LIST_PREF_IEI            0x75
#define RR_UTRAN_FREQ_LIST_IEI         0x76
#define RR_CELL_SELECTION_IND_IEI      0x77
#define RR_ENH_DTM_CS_REL_IND_IEI      0xa0
#define RR_VGCS_CIPHER_PARA_IEI        0x04
#define RR_GROUP_CHANNEL_DESC_2_IEI    0x78
#define RR_TALKER_IDENTITY_IEI         0x79
#define RR_TALKER_PRIO_STATUS_IEI      0x7A
#define RR_VGCS_AMR_CONFIG_IEI         0x7B
#define RR_INDIVIDUAL_PRIORITIES_IEI   0x7c

#define RR_CLASSMARK_ENQ_MASK_IEI      0x10
/*****************************************************************************/

#define RR_FAILURE                          0x00
#define RR_SUCCESS                          0x01
#define RR_VALID                            0x01
#define RR_INVALID_SYS_INFO_ID              0xff

/* 3GPP TS 04.18 v 8.7.0 sec 10.5.2.38
 * Calculation of start frame number.
 */
#define S_RR_FN_INTERVAL_42432 42432
#define S_RR_FRAME_NUM_32024 32024
#define S_RR_MOST_POSTIVE_DELAY 31623

/* Claire 041208 change : Solve rr_mpal_data_req_struct header missing problem */
#ifdef __EGPRS_MODE__
#define EGPRS_RLC_MAC_HEADER_LEN 6
#define EGPRS_SIZEOF_MCS1 22
#endif /* __EGPRS_MODE__ */ 

/* The following macros are defined in bits */
#define MAC_HEADER_LEN 8
#define RLC_MAC_MSG_TYPE_LEN 6
#define TLLI_LEN 32

/* Claire 050118 change : Add signaling macro for both RLC and MAC use  */
#define RR_IS_SIGNAL_PDU(cause) (cause == RR_CAUSE_GMM_SIGNALING || cause == RR_CAUSE_CELL_UPDATE || \
                  cause ==  RR_CAUSE_SM_SIGNALING || cause == RR_CAUSE_SND_SIGNALING                 \
                  || cause == RR_CAUSE_LLC_SIGNALING || cause == RR_CAUSE_PAGE_RESP || cause == RR_CAUSE_CELL_UPDATE_WITH_USER_DATA)

#ifdef __ARMCC_VERSION
#define __ZI__          __attribute__ ((zero_init))
#else
#define __ZI__
#endif

#ifdef __MTK_TARGET__
#include "sys/cdefs.h"                  /* GCC has different definition for __section in cdefs.h */
#undef __section                        /* undefined it to avoid re-define */
#define __section(S)    __attribute__ ((__section__(#S)))
#define __SECONDARY_ROCODE__            
#define __SECONDARY_RODATA__            __section(SECONDARY_RODATA)
#if defined(MT6752)
#if defined(__MD2__)
#define __INTERNCODE__                  
#else								
#define __INTERNCODE__                	__attribute__ ((section ("ISPRAM_ROCODE_CORE2")))
#endif            
#else
#ifdef __SMP_ARCH__
#define __INTERNCODE__  
#else
#define __INTERNCODE__                  __attribute__ ((section ("ISPRAM_ROCODE_CORE2")))
#endif
#endif
#define __EXTRAM_TXDATA__               __attribute__ ((section ("EXTRAM_TXDATA"), aligned(4)))   __ZI__
#define __EXTRAM_TXDATA_0__              __section(EXTRAM_TXDATA_0)   __ZI__
#else
#define __SECONDARY_ROCODE__
#define __SECONDARY_RODATA__
#define __INTERNCODE__
#define __EXTRAM_TXDATA__
#define __EXTRAM_TXDATA_0__
#endif


#if defined(__MTK_TARGET__)
#if defined (__ARMCC_VERSION)
#define INLINE __inline
#elif defined (__GNUC__)
#define INLINE inline
#endif /* ARMCC , GNUC */
#else  /* __MTK_TARGET__ */
#define INLINE __inline
#endif /* __MTK_TARGET__ */



/******************************************************************************
 * Enums Without Tags
 ******************************************************************************/

#ifdef __PS_SERVICE__
#ifdef EGPRS
#include "egprs_headers_struct.h"
#endif 
#endif /* __PS_SERVICE__ */

typedef kal_int32 TDMA_FRAME_NUMBER_TYPE;

/******************************************************************************
 * Structure Definition
 ******************************************************************************/
typedef struct
{
    kal_uint8 time_slot;
    kal_uint32 tdma_frame_number;
} ts_frame_no_struct;

typedef struct
{
    kal_uint8 valid;
    kal_uint8 t1;
    kal_uint8 t2;
    kal_uint8 t3;
} STARTING_TIME_STRUCT_1;

typedef struct
{
    kal_uint8 maio;
    kal_uint8 ma_num_index;
    kal_uint8 change_mark;
    kal_uint8 hsn;
} hopping_chan_desc;

typedef struct
{
    kal_uint8 is_valid;
    kal_uint8 pkt_or_ded;
    kal_uint8 chan_type;
    kal_uint8 tn;
    kal_uint8 tsc;
#ifdef __VAMOS_1__    
    rmc_tsc_set_type tsc_set;
#endif /* __VAMOS_1__ */
    ispresent hopp_or_non_hopp_tag;
    union
    {
        kal_uint16 arfcn;
        hopping_chan_desc hop_params;
    } hopp_or_non_hopp_value;
} channel_desc_struct;

typedef struct
{
    kal_uint8 valid;
    kal_uint8 value;
} timing_advance_struct;

typedef struct
{
    kal_uint16 arfcn;
    kal_uint8 bsic;
    kal_int32 frame_offset;
    kal_int32 ebit_offset;
} target_cell_timing_struct;

#ifdef __PS_SERVICE__
typedef struct res_req_struct
{
    /* Evelyn 20090415: Merge R6 */
    kal_uint8 ptc;              /* peak_throughput_class */
    kal_uint8 rp;               /* radio_priority */
    kal_uint8 rlc_mode;         /* rlc_mode_enum */
    kal_uint8 llc_pdu_type;     /* llc_pdu_type */
    kal_uint8 res_req_cause;    /* res_req_cause */
    kal_uint16 rlc_octets;
    kal_uint8 pfi;              /* Claire 041216 change : Implement R99 PFI */
    kal_uint8 modeflag;         /* Simon for SRB */
} res_req_struct;

/* Evelyn 20090415: Merge R6 */
/* Evelyn MTBF */


typedef struct multiple_res_req_struct
{
    LOCAL_PARA_HDR
    /* Katie 20130531: ps channel protect issue */
    /* mac_rmpc_pkt_access_req_struct and multiple_res_req_struct are the same struct */
    kal_uint8 is_protect_ps_channel; /* this variable only used in mac_rmpc_pkt_access_req_struct */
    kal_uint8 no_res_req;
    res_req_struct multi_res_req[MULTIPLE_TBF_NUM];
} multiple_res_req_struct;

#endif /* __PS_SERVICE__ */

typedef union
{
    nvram_ef_gas_csg_fingerprint_struct gas_csg_fg_info;
} rrm_struct_to_verify_union;

typedef struct
{
    LOCAL_PARA_HDR
    rrm_struct_to_verify_union struct_to_verify;
} rrm_verify_gv_for_ut_struct;


/******************************************************************************
 * Function Prototype definition
 ******************************************************************************/
extern kal_uint8 rr_get_spare_bit(bit_stream *bit_stream_ptr);
extern kal_bool rr_validate_rest_bit_number(kal_uint32 rest_len, kal_uint32 len_to_be_decoded);
#ifdef __ETWS_SUPPORT__
extern void rr_decode_group_call_info(bit_stream *bs_ptr, kal_uint16 *length, kal_bool *result);
extern void rr_decode_cell_global_count(bit_stream *bs_ptr, kal_uint16 *length, kal_bool *result);
extern void rr_decode_mbms_freq_para_ie(bit_stream *bs_ptr, kal_uint16* length, kal_bool *result);
extern void rr_decode_mbms_session_list_ie(bit_stream *bs_ptr, kal_uint16* length, kal_bool *result);
extern void rr_decode_mbms_channel_para_ie(bit_stream *bs_ptr, kal_uint16* length, kal_bool *result);
extern void rr_decode_mbms_para(bit_stream *bs_ptr, kal_uint16* length, kal_bool *result);
#ifdef __PS_SERVICE__
extern void rr_decode_page_info_struct(bit_stream *bs_ptr, kal_uint16 *length);
extern void rr_decode_repeated_iu_page_info(bit_stream *bs_ptr, kal_uint16 *length);
#endif /* __PS_SERVICE__ */
#endif /* __ETWS_SUPPORT__ */

#endif /* _RR_COMMON_DEF_H */

