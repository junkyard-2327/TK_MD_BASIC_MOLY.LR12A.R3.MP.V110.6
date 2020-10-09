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

/******************************************************************************
 * Filename:
 * ---------
 *      mac_enums.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *
 * Author:
 * -------
 * -------
 *
 *=============================================================================
 *                              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *=============================================================================
 ******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#ifndef _MAC_ENUMS_H
#define _MAC_ENUMS_H

typedef enum
{
    MAC_IDLE,
    MAC_PKT_ACCESS,
    MAC_UL,
    MAC_DL,
    MAC_UL_DL,
#ifdef __PS_HO__
    MAC_PS_HO,
#endif 
    MAC_NUM_STATES
} mac_state_enum;

/* Jelly Substate -bg- */
typedef enum
{
    DL_NULL,
    DL_SINGLE_BLK_IN_PROG,
    DL_SINGLE_BLK_ACK_SENDING,
    DL_TBF_PEND,
    DL_TRANSFER,
    DL_TRANSFER_REALLOC_TBF_PEND,
    DL_TRANSFER_FINAL_ACK_PACKED,
    DL_TRANSFER_FAI_SENT_T3192_STARTED,
    DL_TRANSFER_TBF_PENDING_FROM_T3192,
    DL_TRANSFER_ABNORMAL_REL_PEND,
    DL_DISCONNECTING,
    DL_SUBSTATE_NUM
} mac_dl_substate_enum;

typedef enum
{
    ACS_NULL,
    ACS_RLC_RES_REQ_SENT,
    ACS_ONE_PHASE_TBF_PEND,
    ACS_ONE_PHASE_CONTENTION,
    ACS_ONE_PHASE_CONTENTION_REALLOC_PEND,
    ACS_TWO_PHASE_SINGLE_BLK_PEND,
    ACS_TWO_PHASE_PRR_SENT,
    ACS_TWO_PHASE_TBF_PEND,
    ACS_RMPC_RES_REQ_SENT,
    ACS_UL_SINGLE_BLK_IN_PROG,
    ACS_UL_SINGLE_BLK_DELETE,
    ACS_SUBSTATE_NUM
} mac_acs_substate_enum;

typedef enum
{
    UL_NULL,
    UL_TRANSFER,
    UL_TRANSFER_TBF_PEND,
    UL_TRANSFER_REL_PEND,
    UL_TRANSFER_ABNORMAL_REL_PEND,
#ifdef __TBF_EST__
    UL_TBF_EST_WAITING,
    UL_TBF_EST_ADDED,
    UL_TBF_EST_SENT_AB,
    UL_TBF_EST_SENT_NB,
    UL_TBF_EST_SENT_AB_PUAS_POLL,
    UL_TBF_EST_PEND_AB,
    UL_TBF_EST_PEND_NB,
#endif /* __TBF_EST__ */ 
    UL_SUBSTATE_NUM
} mac_ul_substate_enum;

typedef enum
{
    RES_REQ_INVALID,
    RES_REQ_RMPC_IN_RACH_IDLE,
    RES_REQ_RLC_IN_RACH_IDLE,
    RES_REQ_RLC_IN_CTRL_MSG_Q_ACS,
    RES_REQ_RLC_SENT_ACS,
    RES_REQ_RLC_PEND_TRANSFER,
    RES_REQ_RLC_IN_CTRL_MSG_Q_TRANSFER,
    RES_REQ_RLC_IN_PDAN_TRANSFER,
    RES_REQ_RLC_SENT_TRANSFER,
    RES_REQ_RLC_TBF_EST_SENT_IDLE,
    RES_REQ_STATUS_NUM
} mac_res_req_status_enum;

#ifdef __PS_HO__
typedef enum
{
    MAC_PS_HO_STATUS_INVALID = 0,
    MAC_PS_HO_RECV_MSG,
    MAC_PS_HO_G2G_START,
    MAC_PS_HO_G2G_BSIC_SYNC_FAIL,
    MAC_PS_HO_G2G_NEW_CELL,
    MAC_PS_HO_G2G_FAIL,
    MAC_PS_HO_G2U_ACTIVE,
    MAC_PS_HO_G2U_ACTIVE_FAIL,
    MAC_PS_HO_U2G_EVALUATION,
    MAC_PS_HO_U2G_START,
    MAC_PS_HO_U2G_NEW_CELL,
    MAC_PS_HO_SUBSTATE_NUM
} mac_ps_ho_substate_enum;
#endif /* __PS_HO__ */

/* Jelly Substate -ed- */

typedef enum
{
    INVALID_TBF,    /* Suppose this value is only used by PKT TS RECONFIG */
    DL_TBF,
    UL_TBF
} mac_tbf_direction_enum;

typedef enum
{
    CELL_CHANGE_FAIL,
    /* Lanslo 20070705: NACC */
#ifdef __GERAN_R4__
    NACC_PCCN,
    NACC_SI_STATUS,
#endif /* __GERAN_R4__ */ 
    /* eo Lanslo 20070705: NACC */
    PKT_MOBILE_TBF_STATUS,
    MEASUREMENT_REPORT,
    PKT_PSI_STATUS,
    PKT_UL_DUMMY_CTRL,

#ifdef __EGPRS_MODE__
    RESOURCE_REQ,
    EGPRS_RES_REQ,
    EGPRS_ARAC
#else /* __EGPRS_MODE__ */ 
    RESOURCE_REQ
#endif /* __EGPRS_MODE__ */ 
} mac_prioritized_ctrl_msg_enum;

typedef enum
{
    NORMAL_EVENT,
    UNSPECIFIED_STATUS,
    NON_DIST_PART_ERROR,
    MSG_ESCAPE_ERROR,
    NON_COMPATIBLE_MSG
} mac_tbf_cause_enum;

typedef enum
{
    FREQ_PARAMS_NOTVALID,
    FREQ_PARAMS_NOTINBAND,
    FREQ_PARAMS_MISMATCH,
    FREQ_PARAMS_OK
} mac_freq_params_enum;

typedef enum
{
    BLOCKS,
    BLOCK_PERIODS
} mac_blk_or_blk_period_enum;

typedef enum
{
    DL_ASSIGN_NOT_VALID,
    PKT_DL_ASSIGN_VALID,
    IMM_DL_ASSIGN_VALID,
    PDCH_DL_ASSIGN_VALID,
    MTDAS_DL_ASSIGN_VALID
} mac_dl_assign_type_enum;

/* Exce 030707: To identify which direction of TBF the incoming CON_IND is for */
typedef enum
{
    CON_IND_UNMATCH,
    CON_IND_FOR_DL,
    CON_IND_FOR_UL,
    CON_IND_FOR_TS_RECONFIG
} mac_con_ind_enum;

/* Exce 031128: For PKT PDCH RELEASE */
typedef enum
{
    MAC_PDCH_REL_LIMIT_OLD = 0,
    MAC_PDCH_REL_LIMIT_ALL
} pdch_release_limit_enum;

typedef enum
{
    MAC_PDTCH_NORMAL = 0,
    MAC_PS_HO_START,
    MAC_PS_HO_RECONN_ACTIVE,
    MAC_PS_HO_RECONN_INACTIVE,
    MAC_PDTCH_INACTIVE_AFTER_PS_HO
} mac_pdtch_connect_cause_enum;

typedef enum
{                       /* shall sync with MAC_TIMER_NUM_MSGS value */
    MAC_T3164_TIMER_ID = 0,
    MAC_T3166_TIMER_ID, /*1*/
    MAC_T3168_TIMER_ID, /*2*/
    MAC_T3180_TIMER_ID, /*3*/ 
    MAC_T3188_TIMER_ID, /*4*/
    MAC_T3190_TIMER_ID, /*5*/
    MAC_T3192_TIMER_ID, /*6*/
#ifdef __PS_HO__
    MAC_T3216_TIMER_ID, /*7*/
    MAC_T3218_TIMER_ID, /*8*/
#endif 
    /* Katie 20130108: for RRBP to PUAN with FAI not sent, 
       wait 5 sec for retransmitted PUAN */
    MAC_GuardPUAN_TIMER_ID, /*9*/
    MAC_PACCH_PROTECT_TIMER_ID, /*10*/                            
#ifdef __MAC_RANDOM_PATTERN_TEST__
    MAC_FakeMessage_TIMER_ID,
#endif
    MAC_TOTAL_TIMER_NUM
} mac_timer_id_enum;    /* MAC_TIMER Message Type */

#ifndef __MTK_TARGET__
typedef enum
{
    MAC_TIMER_START,
    MAC_TIMER_STOP,
    MAC_TIMER_TIMEOUT
} mac_timer_action_enum;
#endif



/* Claire 050128 change : Implement EGPRS SRB mode */
#ifdef __EGPRS_MODE__
typedef enum
{
    MAC_EGPRS_SRB_LOOP_NONE,                /* SRB mode is not active */
    MAC_EGPRS_SRB_LOOP_UL_TBF_ESTABLISHING, /* MAC is waiting for UL assignment */
    MAC_EGPRS_SRB_LOOP_SUBMODE_ON,          /* EGPRS SRB Loopback submode ON */
    MAC_EGPRS_SRB_LOOP_SUBMODE_OFF          /* EGPRS SRB Loopback submode OFF */
} egprs_srb_status_enum;
#endif /* __EGPRS_MODE__ */ 

#ifdef __PS_HO__

typedef enum
{
    MAC_PS_HO_TYPE_NON_SYNC,
    MAC_PS_HO_TYPE_SYNC,
    MAC_PS_HO_TYPE_PRE_SYNC,
    MAC_PS_HO_TYPE_INVALID
} mac_ps_ho_type_enum;

#endif /* __PS_HO__ */ 

/* Exce 030818: New exception handling mechanism for MAC */
typedef enum
{
    MAC_MSG_EX_NO_EXCEPTION,

    MAC_MSG_EX_INCOMPATIBLE_STATE,      /* 1 */
    MAC_MSG_EX_UNKNOWN_MSG,             /* 2 */
    MAC_MSG_EX_DIST_PART_ERR,           /* 3 */
    MAC_MSG_EX_ADDRESS_PART_ERR,        /* 4 */
    MAC_MSG_EX_NON_DIST_PART_ERR,       /* 5 */
    MAC_MSG_EX_MSG_ESC_ERR,             /* 6 */
    MAC_MSG_EX_IGNORE_LABEL_ERR,        /* 7 */
    MAC_MSG_EX_TRUNCATED_CONCACT_ERR,   /* 8 */
    MAC_MSG_EX_DECODE_ERR,              /* 9 */

    MAC_MSG_EX_MA_INVALID,                                  /* 10 */
    MAC_MSG_EX_SINGLE_BLOCK_GAP_TOO_SHORT,                  /* 11 */
    MAC_MSG_EX_STARTING_TIME_NOT_PRESENT_FOR_FIXED_ALLOC,   /* 12 */
    MAC_MSG_EX_TFI_NOT_ASSIGNED,                            /* 13 */
    MAC_MSG_EX_MULTISLOT_CAP_NOT_MEET,                      /* 14 */
    MAC_MSG_EX_BEFORE_TIME_VALID_FOR_NON_DYNAMIC_ALLOC,     /* 15 */
    MAC_MSG_EX_FREQ_PARAM_NOT_PRESENT,                      /* 16 */
    MAC_MSG_EX_FREQ_PARAM_INVALID,                          /* 17 */
    MAC_MSG_EX_FREQ_PARAM_NOTINBAND,                        /* 18 */
    MAC_MSG_EX_FREQ_PARAM_MISMATCH,                         /* 19 */
    MAC_MSG_EX_MAC_MODE_MISMATCH,                           /* 20 */
    MAC_MSG_EX_TBF_MODE_MISMATCH,                           /* 21 */

    /* Exce 20040218: TLLI_MISMATCH_IN_ONE_PHASE ~ NO_UL_TS_IN_UL_ASSIGN are used by mac_pkt_access_exception_hdlr() only */
    MAC_MSG_EX_TLLI_MISMATCH_IN_ONE_PHASE,                  /* 22 */
    MAC_MSG_EX_TLLI_ABSENT_IN_ONE_PHASE,                    /* 23 */
    MAC_MSG_EX_REACH_N3104_MAX_IN_ONE_PHASE,                /* 24 */
    MAC_MSG_EX_NOT_SENT_AS_T3164_TIMEOUT,                   /* 25 */
    MAC_MSG_EX_SENT_NO_RESPONSE_AS_T3166_TIMEOUT,           /* 26 */
    MAC_MSG_EX_TLLI_MISMATCH_IN_TWO_PHASE,                  /* 27 */
    MAC_MSG_EX_SENT_NO_RESPONSE_AS_T3168_TIMEOUT,           /* 28 */
    MAC_MSG_EX_TWO_PHASE_REQUESTED_BUT_ONE_PHASE_ASSIGNED,  /* 29 */
    MAC_MSG_EX_PKT_PDCH_REL_DURING_TWO_PHASE_CONTENTION,    /* 30 */
    MAC_MSG_EX_NO_UL_TS_IN_UL_ASSIGN,                       /* 31 */

    MAC_MSG_EX_INCOMPATIBLE_CTRL_ACK_T3192,     /* 32 */
    MAC_MSG_EX_RLC_MODE_MISMATCH,               /* 33 */
    MAC_MSG_EX_MAC_MODE_INVALID_ASSIGNED_BY_NW, /* 34 */

#ifdef __TBF_EST__
    MAC_MSG_EX_SINGLE_BLOCK_GAP_TOO_SHORT_TBF_EST,  /* 35 */
#endif 

#ifdef __PS_HO__
    MAC_MSG_EX_NO_VALID_UL_TBF_FOR_PS_HO,   /* 36 */
#endif 

#if defined(__MTBF__) || defined(__PS_HO__)
    MAC_MSG_EX_NO_CANNEL_CODING_COMMAND,    /* 37 */
    MAC_MSG_EX_NO_EGPRS_WINDOW_SIZE,        /* 38 */
    MAC_MSG_EX_NO_REL6_PART,                /* 39 */
    MAC_MSG_EX_REL6_PART_ERROR,             /* 40 */

#endif /* defined(__MTBF__) || defined(__PS_HO__) */ 

#if defined(__GERAN_RTTI__) || defined(__GERAN_FANR__)
    MAC_MSG_EX_REL7_PART_ERROR,             /* 41 */
#endif
    TOTAL_MAC_MSG_EX_END
} mac_msg_exception_enum;

typedef enum
{
    OLD_TBF_POS_INVALID = 0,
    BACK_UP_ALLOC,
    ACTIVE_ALLOC
} old_tbf_para_pos_in_ps_ho_enum;

typedef enum
{
    BSIC_SYNC_FAIL = 0,
    T3216_TIMEOUT,
    T3218_TIMEOUT,
    G2U_ACTIVE_FAIL
} mac_ps_ho_fail_cause;

typedef enum
{
    MAC_NON_TBF_VALID = 0,
    MAC_ACTIVE_VALID,
    MAC_INACTIVE_VALID
} mac_backup_tbf_status;

typedef enum
{
    MAC_FIND_FIRST_1_FROM_MSB_TO_LSB,
    MAC_FIND_FIRST_1_FROM_LSB_TO_MSB
} mac_find_first_1_dir_enum;

typedef enum
{
    MAC_RXED_BLK_BITMAP_INVALID,
    MAC_RXED_BLK_BITMAP_ALL_NACKED,
    MAC_RXED_BLK_BITMAP_SOME_NACKED,
    MAC_RXED_BLK_BITMAP_ALL_ACKED
} mac_rxed_blk_bitmap_enum;

typedef enum
{
    MAC_TFI_NOT_MATCH,
    MAC_TFI_NOT_MATCH_FROM_NON_PACCH,
    MAC_TFI_MATCH
} mac_tfi_match_status_enum;

#ifdef __MODEM_EM_MODE__
typedef enum
{
    MAC_EM_UL_TBF_ONE_PHASE_ACCESS_IN_CHANNEL_REQUEST = 1,                                   /*1*/
    MAC_EM_UL_TBF_SINGLE_BLOCK_OR_TWO_PHASE_ACCESS_IN_CHANNEL_REQUEST = 2,                   /*2*/ 
    MAC_EM_UL_TBF_ONE_PHASE_ACCESS_IN_PACKET_CHANNEL_REQUEST = 11,                           /*11*/
    MAC_EM_UL_TBF_TWO_PHASE_ACCESS_IN_PACKET_CHANNEL_REQUEST = 12,                           /*12*/
    MAC_EM_UL_TBF_PAGE_RESPONSE_IN_PACKET_CHANNEL_REQUEST = 13,                              /*13*/
    MAC_EM_UL_TBF_CELL_UPDATE_IN_PACKET_CHANNEL_REQUEST = 14,                                /*14*/
    MAC_EM_UL_TBF_MM_PROCEDURE_IN_PACKET_CHANNEL_REQUEST = 15,                               /*15*/
    MAC_EM_UL_TBF_SINGLE_BLOCK_WITHOUT_TBF_ESTABLISHMENT_IN_PACKET_CHANNEL_REQUEST = 16,     /*16*/
    MAC_EM_UL_TBF_ONE_PHASE_ACCESS_IN_RLC_UNACK_MODE_IN_PACKET_CHANNEL_REQUEST = 17,         /*17*/
    MAC_EM_UL_TBF_ONE_PHASE_ACCESS_IN_EGPRS_PACKET_CHANNEL_REQUEST = 21,                     /*21*/
    MAC_EM_UL_TBF_TWO_PHASE_ACCESS_IN_EGPRS_PACKET_CHANNEL_REQUEST = 22,                     /*22*/
    MAC_EM_UL_TBF_SIGNALLING_IN_EGPRS_PACKET_CHANNEL_REQUEST = 23,                           /*23*/
    MAC_EM_UL_TBF_ONE_PHASE_ACCESS_IN_RLC_UNACK_MODE_IN_EGPRS_PACKET_CHANNEL_REQUEST = 24,   /*24*/
    MAC_EM_UL_TBF_CHANNEL_REQUEST_IN_PACKET_DOWNLINK_ACK_NACK = 31,                          /*31*/
    MAC_EM_UL_TBF_CHANNEL_REQUEST_IN_EGPRS_PACKET_DOWNLINK_ACK_NACK = 32,                    /*32*/
    MAC_EM_UL_TBF_USER_DATA_IN_DTM_REQUEST = 51,                                             /*51*/
    MAC_EM_UL_TBF_PAGE_RESPONSE_IN_DTM_REQUEST = 52,                                         /*52*/
    MAC_EM_UL_TBF_CELL_UPDATE_IN_DTM_REQUEST = 53,                                           /*53*/
    MAC_EM_UL_TBF_MM_PROCEDURE_IN_DTM_REQUEST = 54                                           /*54*/
} mac_em_ul_tbf_establishment_cause; 

typedef enum
{
    MAC_EM_UL_TBF_ONE_PHASE_ACCESS = 1,                                                      /*1*/
    MAC_EM_UL_TBF_TWO_PHASE_ACCESS = 2,                                                      /*2*/ 
    MAC_EM_UL_TBF_SINGLE_BLOCK_OR_MULTI_BLOCK_ACCESS = 3,                                    /*3*/
    MAC_EM_UL_TBF_GPRS_OR_EGPRS_PACKET_DOWNLINK_ACK_NACK_CHANNEL_REQUEST = 4,                /*4*/
    MAC_EM_UL_TBF_DTM_REQUEST = 5                                                            /*5*/
} mac_em_ul_tbf_establishment_type;

typedef enum
{
    MAC_EM_UL_TBF_SUCCEEDED = 1,                                                             /*1*/
    MAC_EM_UL_TBF_FAILED = 2,                                                                /*2*/ 
    MAC_EM_UL_TBF_REJECTED = 3,                                                              /*3*/
    MAC_EM_UL_TBF_ABORTED = 4                                                                /*4*/
} mac_em_ul_tbf_establishment_status;
#endif /* __MODEM_EM_MODE__ */ 

#endif /* _MAC_ENUMS_H */
