/******************************************************************************
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   ratdm_shaq_api.h
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
 * 04 27 2017 xiaokai.liu
 * [MOLY00244013] [Gen93][TDD 3G] RATDM Code SMP
 * odify SMP fucntion SHAQ_rlcQueryNormalQueueLeftBits for FDD not ready SMP..
 *
 * 04 26 2017 xiaokai.liu
 * [MOLY00244013] [Gen93][TDD 3G] RATDM Code SMP
 * .
 *
 * 03 30 2017 ravitej.ballakur
 * [MOLY00238716] [Gen93] 6M RATDM Multiple PS feature sync
 * M-PS changes for UMOLYA.
 *
 * 11 15 2016 ravitej.ballakur
 * [MOLY00195360] [3G][RATDM][PDCP] - Gen93 3G RATDM and PDCP code modification for new HW and MCU Archi
 * Fix for 14_6_6a,14_6_6b UESIM.
 *
 * 09 26 2016 ravitej.ballakur
 * [MOLY00195360] [3G][RATDM][PDCP] - Gen93 3G RATDM and PDCP code modification for new HW and MCU Archi
 * 	Merging 2G and WCDMA RATDM and PDCP changes from merge_CBr.
 *
 * 08 03 2016 ravitej.ballakur
 * [MOLY00195360] [3G][RATDM][PDCP] - Gen93 3G RATDM and PDCP code modification for new HW and MCU Archi
 * 3G RATDM and PDCP changes.
 *
 * 09 01 2015 head.hsu
 * [MOLY00136551] [LR11 UT] RATDM UT code refine
 *
 * 05 20 2015 head.hsu
 * [MOLY00089131] [MT6291 Gemini] L+W+W+W code revision check in
 * 	;RATDM/RABM/PDCP/CSR part check-in
 *
 * 05 30 2014 yungfu.chen
 * [MOLY00067307] [RATDM][SHAQ] API refine for RAB remapping
 *
 * 05 29 2014 yungfu.chen
 * [MOLY00067176] SERVICE REQUEST change design
 *
 * 04 09 2014 yungfu.chen
 * [MOLY00061711] [K2 MD2] Call for Checkin
 *
 * 01 05 2014 johnson.liu
 * [MOLY00052503] [MT6290E2][SGLTE][82LTEv2] [T+G]  After a while, Can't ping on the 3G after PS switch back to 3G
 * .
 *
 * 09 26 2013 yungfu.chen
 * [MOLY00038877] remove MAX_EXT_PDP_CONTEXT/MAX_INT_PDP_CONTEXT usage of RATDM code
 * 	.
 *
 * 09 12 2013 andrew.wu
 * [MOLY00037580] [RATDM/PDCP]__NDIS_SUPPORT__ related code removal
 * __NDIS_SUPPORT__ related code removal
 *
 * 04 24 2013 johnson.liu
 * [MOLY00020653] [TDD][RATDM][PDCP]UT Code Integration and VC Build Warning Remove
 * .
 *
 * 01 23 2013 andrew.wu
 * [MOLY00004240] [RABM/PDCP]LTE multimode modification
 * Integration change.
 *
 * 12 07 2012 andrew.wu
 * [MOLY00007098] LOCAL_PARA_HDR/PEER_BUF_HDR modification
 * LOCAL_PARA_HDR/PEER_BUF_HDR modification
 *
 * 10 01 2012 andrew.wu
 * [MOLY00004236] [interface][service][kal]remove stack_ltlcom.h
 *
 * Remove stack_ltlcom.h
 *
 * 08 22 2012 andrew.wu
 * [MOLY00002319] [MSBB] Remove Invalid Inter-Category Including.
 * modem related option move to modem internal
 *
 * 08 07 2012 andrew.wu
 * [MOLY00001588] [MT6575_ADAPT][LTE-BTR-1-7302] Bad audio qualilty in 12.2Kbps Uplink
 * [uas]URLC TM queue switchable modification
 *
 * 07 05 2012 jl.hsiao
 * [MOLY00000288] [RATDM] Removal of kal_internal_api.h
 * .
 *
 * 06 20 2012 carlson.lin
 * removed!
 * <saved by Perforce>
 *
 * 06 20 2012 carlson.lin
 * removed!
 * <saved by Perforce>
 *
 * 06 19 2012 carlson.lin
 * removed!
 * decide not to use mutex, decide to use lock IRQ to replace change_priority
 *
 *
 * 06 11 2012 carlson.lin
 * removed!
 * <saved by Perforce>
 *
 * 04 24 2012 wcpuser_integrator
 * removed!
 * .
 *
 * 03 16 2012 carlson.lin
 * removed!
 * <saved by Perforce>
 *
 * 02 01 2012 carlson.lin
 * removed!
 * <saved by Perforce>
 *
 * 01 13 2012 carlson.lin
 * removed!
 * <saved by Perforce>
 *
 * 01 11 2012 carlson.lin
 * removed!
 * <saved by Perforce>
 *
 * 08 12 2011 carlson.lin
 * removed!
 * <saved by Perforce>
 *
 * 04 25 2011 carlson.lin
 * removed!
 * <saved by Perforce>
 *
 *
 ******************************************************************************/
#ifndef _RATDM_SHAQ_API_H
#define _RATDM_SHAQ_API_H

#include "ratdm_shaq_application_api.h"

#ifdef __RATDM_UL_SHAQ__
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "mcd_l3_inc_gprs_struct.h"
#include "l3_inc_local.h"
#include "mmi_l3_enums.h"
#include "kal_public_api.h"
#include "ps_ratdm_struct.h"
#include "global_def.h"
#include "flc2_ent_functions.h"
#include "l3_inc_enums.h"
#include "mcd_l3_inc_struct.h"

#ifdef __GEMINI__
#include "sim_common_enums.h"
#endif

#ifdef __DIALUP_GPRS_COUNTER_SUPPORT__
#include "l4c_ratdm_struct.h"
#endif

#ifdef __UMTS_RAT__
#include "uas_common_enums.h"
#endif

/* MACRO DEFINITION */
#ifndef __UMTS_RAT__
#define LAST_EXTENDED_RB_ID (32)  //refer to uas_common_enums.h
#endif // ~ #ifndef __UMTS_RAT__

//#define __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__ // can be turn off
//#define __SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__ // can be turn off

#if defined (__SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__) || defined (__SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__)
#define __SHAQ_GUARD_PATTERN_CHECK__
#endif // ~ #if defined (__SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__) || defined (__SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__)

#define SHAQ_32BIT_GUARD_PATTERN (0x7D7E7D7E)
#define SHAQ_16BIT_GUARD_PATTERN (0x7D7E)
#define SHAQ_8BIT_GUARD_PATTERN (0x7D)
#define SHAQ_REASONABLE_MAXIMUM_SDU_SIZE MAX_VAL((MAX_L2_EXTERNAL_SDU_SIZE), 1520)

/*
    3 ways to protest the queue
        1. lock interrupt
         kal_uint32 savedIRQMask;
         savedIRQMask = SaveAndSetIRQMask();
         RestoreIRQMask(savedIRQMask);
        2. Disable scheduler
        3. change priority to equal to UL2 task
*/
#ifndef __SMP_ARCH__
#define M_SHAQ_IN_CRITICAL_ZONE(taskid,orig_prio) M_SHAQ_IN_CRITICAL_ZONE_USING_LOCK_IRQ()
#define M_SHAQ_OUT_CRITICAL_ZONE(taskid,orig_pri) M_SHAQ_OUT_CRITICAL_ZONE_USING_LOCK_IRQ()
#else
#define M_SHAQ_IN_CRITICAL_ZONE(taskid,orig_prio)
#define M_SHAQ_OUT_CRITICAL_ZONE(taskid,orig_pri)
#endif


#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif // ~ #if 0

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif // ~ #if 0

#ifndef __SMP_ARCH__

#define M_SHAQ_IN_CRITICAL_ZONE_USING_LOCK_IRQ() \
    savedIRQMask = SaveAndSetIRQMask();

#define M_SHAQ_OUT_CRITICAL_ZONE_USING_LOCK_IRQ() \
    RestoreIRQMask(savedIRQMask);
#else
#define M_SHAQ_IN_CRITICAL_ZONE_USING_LOCK_IRQ()
#define M_SHAQ_OUT_CRITICAL_ZONE_USING_LOCK_IRQ()
#endif

#define M_SHAQ_LOGGER(p)
// TODO: implement
#define M_SHAQ_PRINT(X)
// TODO: implement
#define M_SHAQ_SAP NULL
// TODO: implement?

#define MAX_CS_TM_Q_NUM (3)
#define MAX_CS_UM_Q_NUM (1)

#define M_SHAQ_ASSERT(X) ASSERT(X)
#define M_SHAQ_DEBUG_ASSERT(X) ASSERT(X) // TODO: this configuration can be turned off
#define M_SHAQ_MAX_Q_SIZE ((PS_TOT_NSAPI_NUM)+((MAX_CS_TM_Q_NUM)+(MAX_CS_UM_Q_NUM))+(1))
#define M_SHAQ_MINIMUM_CONTEXT_ID (1)
#define M_SHAQ_MAXIMUM_CONTEXT_ID ((PS_TOT_NSAPI_NUM)+((MAX_CS_TM_Q_NUM)+(MAX_CS_UM_Q_NUM)))

#define M_MIN_PS_SHAQ_NUMBER (M_SHAQ_MINIMUM_CONTEXT_ID)
#define M_MAX_PS_SHAQ_NUMBER (PS_TOT_NSAPI_NUM)
#define M_MIN_CS_SHAQ_NUMBER ((M_MAX_PS_SHAQ_NUMBER)+(1))
#define M_MAX_CS_SHAQ_NUMBER (M_SHAQ_MAXIMUM_CONTEXT_ID)

#define M_MIN_PS_CONTEXT_ID (M_MIN_PS_SHAQ_NUMBER)
#define M_MAX_PS_CONTEXT_ID (M_MAX_PS_SHAQ_NUMBER)
#define M_MIN_CS_CONTEXT_ID (M_MIN_CS_SHAQ_NUMBER)
#define M_MAX_CS_CONTEXT_ID (M_MAX_CS_SHAQ_NUMBER)

#define M_SHAQ_CS_TM_Q_NUM_1 (M_MIN_CS_CONTEXT_ID)
#define M_SHAQ_CS_TM_Q_NUM_2 ((M_MIN_CS_CONTEXT_ID)+(1))
#define M_SHAQ_CS_TM_Q_NUM_3 ((M_MIN_CS_CONTEXT_ID)+(2))
#define M_SHAQ_CS_UM_Q_NUM (M_MAX_CS_CONTEXT_ID)

#define M_SHAQ_MAX_NUM (MAX_SIM_NUM)
#define GET_SHAQ_IDX(sim) ((sim >= M_SHAQ_MAX_NUM)?0:sim)

#define M_SHAQ_MAX_NSAPI (15)
#define M_SHAQ_SOCKET_NSAPI_ARRAY_SIZE ((M_SHAQ_MAX_NSAPI)+((MAX_CS_TM_Q_NUM)+(MAX_CS_UM_Q_NUM))+(1))
#define M_SHAQ_SOCKET_CID_ARRAY_SIZE ((M_SHAQ_MAXIMUM_CONTEXT_ID)+(1))
#define M_SHAQ_SOCKET_RBID_ARRAY_SIZE ((LAST_EXTENDED_RB_ID)+(1))

#define M_SHAQ_FIND_Q_USING_CID(qPtr, cid, shaq_idx) qPtr = &(RATDM_SHAQ[shaq_idx][cid]);

#define M_SHAQ_PRINT_SHAQ_CONTENT(ap_Queue) SHAQ_int_print_queue(ap_Queue)
#define M_SHAQ_RECORD_SHAQ_IMPORTANT_CONTENT(ap_Queue) SHAQ_int_record_important_queue(ap_Queue)
#define M_SHAQ_PRINT_SHAQ_IMPORTANT_CONTENT(ap_Queue,queue_idx,cid_for_logging) SHAQ_int_print_important_queue(ap_Queue,queue_idx,cid_for_logging)
#if defined (__SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__) || defined (__SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__)
#define M_SHAQ_INIT_Q_GUARD_PATTERN(ap_Queue) SHAQ_int_init_q_guard_pattern(ap_Queue)
#define M_SHAQ_CHECK_Q_GUARD_PATTERN(ap_Queue) SHAQ_int_check_q_guard_pattern(ap_Queue)
#define M_SHAQ_INIT_SOCKET_GUARD_PATTERN() SHAQ_int_init_socket_guard_pattern()
#define M_SHAQ_CHECK_SOCKET_GUARD_PATTERN(sim_interface) SHAQ_int_check_socket_guard_pattern(sim_interface)
#define M_SHAQ_DOUBLE_CHECK_QUEUE_ELEMENT_NUMBERS_CONSISTENCY(ap_Queue) SHAQ_int_double_check_queue_element_numbers_consistency(ap_Queue)
#else
#define M_SHAQ_INIT_Q_GUARD_PATTERN(ap_Queue)
#define M_SHAQ_CHECK_Q_GUARD_PATTERN(ap_Queue)
#define M_SHAQ_INIT_SOCKET_GUARD_PATTERN()
#define M_SHAQ_CHECK_SOCKET_GUARD_PATTERN(sim_interface)
#define M_SHAQ_DOUBLE_CHECK_QUEUE_ELEMENT_NUMBERS_CONSISTENCY(ap_Queue)
#endif // ~ #if defined (__SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__) || defined (__SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__)

#define SHAQ_psProcessOneCTrackPkt(X,Y)

#ifdef __RATDM_UT__
#define RATDM_SHAQ_CALL_FLC_FREE(X,Y) kal_brief_trace(TRACE_GROUP_1, RATDM_SHAQ_FAKE_FLC_FREE_IN_UT, X, Y)
#else // #ifdef __RATDM_UT__
#define RATDM_SHAQ_CALL_FLC_FREE(X,Y) flc2_free_peer_buff(X,Y)
#endif // ~ #ifdef __RATDM_UT__

#ifdef __MTK_TARGET__
#define RATDM_GET_BITS(_uc, _s, _w) GET_BITS(_uc, _s, _w)
#else
#define RATDM_GET_BITS(_uc, _s, _w) get_bits(_uc, _s, _w)
#endif

/*
#define M_SHAQ_ELMT_HEADER \
	    PEER_BUFF_HDR \
            SHAQ_qElmtHeader* next_shaqElmt;
*/

/* memory free function */
typedef void (*pShaqFuncFree) (kal_uint8*);

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#ifdef __UMTS_RAT__
/* for CS only */
typedef struct
{
    /* Dont touch this part */
    //M_SHAQ_ELMT_HEADER
    PEER_BUFF_HDR
    struct SHAQ_qElmtHeader *next_shaqElmt;

    /* Hands off please */

    kal_uint16      bitLength;
    kal_uint16      frame_index;

    ExtendedRbId    RBId;
    kal_bool        queued_enabled;
    kal_uint16      dummy;

} SHAQ_csr_data_req_struct;
#endif //~#ifdef __UMTS_RAT__

typedef struct
{
    #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__
        kal_uint32        shareQMinLvlGuardPattern1;
    #endif // ~ #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__

    /* Main Queue */
    kal_uint32        m_qCount;
    kal_uint32        m_qDataQuantity; /* In BITs */
    #ifdef __SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__
        kal_uint32        shareQMaxLvlGuardPattern1;
    #endif // ~ #ifdef __SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__
    struct SHAQ_qElmtHeader *mp_tail;
    #ifdef __SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__
        kal_uint32        shareQMaxLvlGuardPattern2;
    #endif // ~ #ifdef __SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__
    struct SHAQ_qElmtHeader  m_sentinel;
    #ifdef __SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__
        kal_uint32        shareQMaxLvlGuardPattern3;
    #endif // ~ #ifdef __SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__

} SHAQ_linkListQEntity;

#ifdef __RATDM_SHAQ_HAS_PRIORITY_QUEUE__
typedef enum
{
    SHAQ_PRIORITY_QUEUE,
    SHAQ_NORMAL_QUEUE,
    SHAQ_NUMBER_OF_LINKED_LIST_QUEUE_FOR_A_RB
} SHAQ_LLQUEUE_IDX;
#else // #ifdef __RATDM_SHAQ_HAS_PRIORITY_QUEUE__
typedef enum
{
    SHAQ_NORMAL_QUEUE,
    SHAQ_PRIORITY_QUEUE = SHAQ_NORMAL_QUEUE,
    SHAQ_NUMBER_OF_LINKED_LIST_QUEUE_FOR_A_RB
} SHAQ_LLQUEUE_IDX;
#endif // ~ #ifdef __RATDM_SHAQ_HAS_PRIORITY_QUEUE__

typedef struct
{
    SHAQ_linkListQEntity ll_queue[SHAQ_NUMBER_OF_LINKED_LIST_QUEUE_FOR_A_RB];
    pShaqFuncFree mpf_free;     /* free function */
        #ifdef __SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__
        kal_uint32        shareQMaxLvlGuardPattern4;
        #endif // ~ #ifdef __SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__

    //kal_uint16  m_cTrackCount;  /* the count of current cTrack data (inc: PPP) (dec: PDCP) */
    //    #ifdef __SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__
    //    kal_uint16        shareQMaxLvlGuardPattern5;
    //    #endif // ~ #ifdef __SHAQ_MAXIMUM_LEVEL_GUARD_PATTERN_CHECK__

    kal_bool    m_isShaqInitiated;  /* Used to identify if Q is ready, for RLC to know if it need to check this Q or not */

        #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__
        kal_uint8        shareQMinLvlGuardPattern2;
        #endif // ~ #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__

} SHAQ_qEntity;

typedef struct rb_nsapi_cid_mapping_arrays_struct
{
        #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__
        kal_uint8        socketMinLvlGuardPattern11;
        #endif // ~ #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__
    kal_uint8 CID_nsapi_map[M_SHAQ_SOCKET_CID_ARRAY_SIZE];
        #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__
        kal_uint8        socketMinLvlGuardPattern12;
        #endif // ~ #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__
    kal_uint8 nsapi_CID_map[M_SHAQ_SOCKET_NSAPI_ARRAY_SIZE];
        #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__
        kal_uint8        socketMinLvlGuardPattern13;
        #endif // ~ #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__
    kal_uint8 RBId_nsapi_map[M_SHAQ_SOCKET_RBID_ARRAY_SIZE];
        #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__
        kal_uint8        socketMinLvlGuardPattern14;
        #endif // ~ #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__
    kal_uint8 nsapi_RBId_map[M_SHAQ_SOCKET_NSAPI_ARRAY_SIZE];
        #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__
        kal_uint8        socketMinLvlGuardPattern15;
        #endif // ~ #ifdef __SHAQ_MINIMUM_LEVEL_GUARD_PATTERN_CHECK__
    kal_bool RBId_already_occupied_by_lbm[M_SHAQ_SOCKET_RBID_ARRAY_SIZE]; // this is to remember if certain RB is occupied by LBM
    kal_uint8 RBId_RabId_lbm[M_SHAQ_SOCKET_RBID_ARRAY_SIZE]; //used for getting the SIT index
} rb_nsapi_cid_mapping_arrays_struct;

typedef struct ratdm_shaq_trace_data_for_a_llq{
    kal_uint32        m_qCount;
    kal_uint32        m_qDataQuantity; /* In BITs */
} ratdm_shaq_trace_data_for_a_llq;

typedef struct ratdm_shaq_trace_data_temp_buffer{
    SHAQ_qEntity *ap_Queue;
    SHAQ_qElmtHeader *ap_qElmt;
    ratdm_shaq_trace_data_for_a_llq llq_trace_info[SHAQ_NUMBER_OF_LINKED_LIST_QUEUE_FOR_A_RB];
    kal_uint16 ip_id;
    SHAQ_LLQUEUE_IDX queue_idx;
} ratdm_shaq_trace_data_temp_buffer;

typedef struct ratdm_shaq_print_ps_q_element_struct
{
    LOCAL_PARA_HDR

    ratdm_ps_data_req_struct ps_data_req;
} ratdm_shaq_print_ps_q_element_struct;

#ifdef __UMTS_RAT__
typedef struct {
    LOCAL_PARA_HDR

    SHAQ_csr_data_req_struct csr_data_req;
} ratdm_shaq_print_cs_q_element_struct;
#endif // ~ #ifdef __UMTS_RAT__

/* Structure */
// IPv4 Header
#define RATDM_IPV4_UPPER_LAYER_PROTOCOL_OFFSET (9)
#define RATDM_IPV4_UPPER_LAYER_PROTOCOL_TCP (6)
#define RATDM_IPV4_UPPER_LAYER_PROTOCOL_UDP (17)
#define RATDM_TCP_ACK_POSITION_OFFSET (13)
// IPv6 Header
#define RATDM_IPV6_FIRST_NEXT_HEADER_OFFSET (6)
#define RATDM_IPV6_NEXT_HEADER_TCP (6)
#define RATDM_IPV6_NO_EXT_HDR_HEADER_LENGTH (40)
// Judge TCP ACK
#ifdef __IPV6__
 #ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__
  #define REASONABLE_TCP_ACK_PKT_SIZE (62)
 #else // __PPP_TYPE_PDP_DIALUP_SUPPORT__
  #define REASONABLE_TCP_ACK_PKT_SIZE (60)
 #endif // ~ __PPP_TYPE_PDP_DIALUP_SUPPORT__
#else // #ifdef __IPV6__
 #ifdef __PPP_TYPE_PDP_DIALUP_SUPPORT__
  #define REASONABLE_TCP_ACK_PKT_SIZE (42)
 #else // __PPP_TYPE_PDP_DIALUP_SUPPORT__
  #define REASONABLE_TCP_ACK_PKT_SIZE (40)
 #endif // ~ __PPP_TYPE_PDP_DIALUP_SUPPORT__
#endif // ~ #ifdef __IPV6__

#ifdef __RATDM_UT__
#define NEED_TO_BE_CHECKED_PKT_SIZE (99)
#else // #ifdef __RATDM_UT__
#define NEED_TO_BE_CHECKED_PKT_SIZE ((REASONABLE_TCP_ACK_PKT_SIZE)+(16)) // 16 is a RD decided buffer value and can be adjusted based on observed TCP ACK size distributions
#endif // ~ #ifdef __RATDM_UT__

#define SHAQ_psFillRBIdRABIdMapping SHAQ_psFillRBIdNsapiMapping
#define SHAQ_psEraseRBIdRABIdMapping SHAQ_psEraseRBIdNsapiMapping

#ifdef __UMTS_RAT__
#ifdef UNIT_TEST
#define SHAQ_RLC_UT_CreateRB SHAQ_LBM_CreateRB
#define SHAQ_RLC_UT_ReleaseRB SHAQ_LBM_ReleaseRB
#endif
#endif // ~ #ifdef __UMTS_RAT__

#define SHAQ_dequeue_normal_queue(RB, LEFT_BITS, sim_interface) SHAQ_dequeue_diff_priority_queue(RB, LEFT_BITS, SHAQ_NORMAL_QUEUE, sim_interface)

#ifdef __RATDM_SHAQ_HAS_PRIORITY_QUEUE__
#define SHAQ_dequeue_priority_queue(RB, LEFT_BITS, sim_interface) SHAQ_dequeue_diff_priority_queue(RB, LEFT_BITS, SHAQ_PRIORITY_QUEUE, sim_interface)
#endif

#ifdef UNIT_TEST
#define SHAQ_pdcp_ut_check_queue_context(RBId, ut_module, sim_interface) SHAQ_pdcp_ut_check_queue_context_with_priority_info(RBId, ut_module, SHAQ_NORMAL_QUEUE, sim_interface)
#endif

/* EXPORT FUNCTIONS */
extern void SHAQ_bootup(void);
extern void SHAQ_psFillCidNsapiMapping(kal_uint8 CID, kal_uint8 nsapi, kal_uint8 sim_interface);
extern void SHAQ_psEraseCidNsapiMapping(kal_uint8 nsapi, kal_uint8 sim_interface);
extern void SHAQ_psFillRBIdNsapiMapping(kal_uint8 RBId, kal_uint8 nsapi, kal_uint8 sim_interface);
extern void SHAQ_psEraseRBIdNsapiMapping(kal_uint8 RBId, kal_uint8 sim_interface);
extern void SHAQ_change_turn_off_priority_queue_setting(kal_bool new_setting, kal_uint8 sim_interface);

#ifdef __UMTS_RAT__
extern void SHAQ_mountFreeFunc(kal_uint8 a_cid, pShaqFuncFree apf_free, kal_uint8 sim_interface);
extern pShaqFuncFree SHAQ_queryFreeFunc(ExtendedRbId RbId, kal_uint8 sim_interface);
extern kal_uint8 SHAQ_getCidFromRbid(ExtendedRbId RbId, kal_taskid taskid, kal_uint8 sim_interface);
extern kal_uint8 SHAQ_rlcGetCidFromRbid(ExtendedRbId RbId, kal_uint8 sim_interface);
extern kal_uint32 SHAQ_rlcQueryNormalQueueLeftBits_wt_lock(ExtendedRbId RbId, kal_uint8 sim_interface);
extern kal_uint32 SHAQ_rlcQueryNormalQueueLeftBits(ExtendedRbId RbId, kal_uint8 sim_interface);
extern SHAQ_qEntity *SHAQ_rlcFindQFromCid(kal_uint8 cid, kal_uint8 sim_interface);
extern SHAQ_qElmtHeader *SHAQ_dequeue_diff_priority_queue(kal_uint8 a_txRbId, kal_uint32 *queue_left_bits, SHAQ_LLQUEUE_IDX priority, kal_uint8 sim_interface);
extern SHAQ_retCode SHAQ_psPdcpEnqueue(ExtendedRbId RbId, SHAQ_qElmtHeader *pPeer, kal_taskid taskid, kal_uint8 sim_interface);
extern SHAQ_retCode SHAQ_csCsrEnqueue(kal_uint8 a_cid, SHAQ_qElmtHeader *ap_data, kal_uint8 sim_interface);
extern void SHAQ_csRBestablished(kal_uint8 CID, kal_uint8 RBId, kal_uint8 sim_interface);
extern void SHAQ_csRBreleased(kal_uint8 RBId, kal_uint8 sim_interface);
extern kal_uint8 SHAQ_LBM_CreateRB(kal_uint8 RBId, kal_uint8 sim_interface);
extern kal_bool SHAQ_LBM_ReleaseRB(kal_uint8 RBId, kal_uint8 sim_interface);
extern kal_uint16 SHAQ_get_activated_RAB_status(kal_uint8 sim_interface);
extern void SHAQ_clearPsKickUL2(ExtendedRbId RbId, kal_uint8 sim_interface);
extern void SHAQ_csKickUL2(module_type source_module, kal_uint8 sim_interface);
extern void SHAQ_psKickUL2(module_type source_module, ExtendedRbId RbId, kal_uint8 sim_interface);

#ifdef __RATDM_SHAQ_HAS_PRIORITY_QUEUE__
extern kal_uint32 SHAQ_rlcQueryPriorityQueueLeftBits_wt_lock(ExtendedRbId RbId, kal_uint8 sim_interface);
extern kal_uint32 SHAQ_rlcQueryPriorityQueueLeftBits(ExtendedRbId RbId, kal_uint8 sim_interface);
#endif

#ifdef UNIT_TEST
extern void SHAQ_RLC_UT_enqueue(SHAQ_qEntity *ap_Queue, struct SHAQ_qElmtHeader *ap_qElmt, SHAQ_LLQUEUE_IDX queue_idx);
extern struct SHAQ_qElmtHeader *SHAQ_RLC_UT_dequeue(SHAQ_qEntity *ap_queue, SHAQ_LLQUEUE_IDX queue_idx);
extern struct SHAQ_qElmtHeader *SHAQ_RLC_UT_dequeue_normal_queue(ExtendedRbId RbId, kal_uint32 *queue_left_bits, kal_uint8 sim_interface);
extern void SHAQ_csr_ut_check_queue_context(kal_uint8 a_cid, module_type ut_module, kal_uint8 sim_interface);
extern void SHAQ_pdcp_ut_check_queue_context_with_priority_info(ExtendedRbId RbId, module_type ut_module, SHAQ_LLQUEUE_IDX priority, kal_uint8 sim_interface);

#ifdef __RATDM_SHAQ_HAS_PRIORITY_QUEUE__
extern struct SHAQ_qElmtHeader *SHAQ_RLC_UT_dequeue_priority_queue(ExtendedRbId RbId, kal_uint32 *queue_left_bits, kal_uint8 sim_interface);
#endif // ~ #ifdef __RATDM_SHAQ_HAS_PRIORITY_QUEUE__
#endif // ~ #ifdef UNIT_TEST

#ifdef __RATDM_UT__
extern void SHAQ_fake_free_buff_func(kal_uint8 *pBuffer);
extern void SHAQ_test1(void);
extern void SHAQ_test2(void);
extern void SHAQ_test3(void);
#endif // ~ #ifdef __RATDM_UT__
#endif // ~ #ifdef __UMTS_RAT__
#endif // ~ #ifdef __RATDM_UL_SHAQ__

#endif /* _RATDM_SHAQ_API_H */
