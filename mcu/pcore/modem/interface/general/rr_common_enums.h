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
 *      rr_common_enums.h
 *
 * Project:
 * --------
 *   MAUI
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
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

#ifndef _RR_COMMON_ENUMS_H
#define _RR_COMMON_ENUMS_H

typedef enum
{
    RR_PSI_1_MSG_TYPE = 0x31,
    RR_PSI_2_MSG_TYPE = 0x32,
    RR_PSI_3_MSG_TYPE = 0x33,
    RR_PSI_3_BIS_MSG_TYPE = 0x34,
    RR_PSI_4_MSG_TYPE = 0x35,
    RR_PSI_5_MSG_TYPE = 0x36,
    RR_PSI_6_MSG_TYPE = 0x30,
    RR_PSI_7_MSG_TYPE = 0x38,
    RR_PSI_3_TER_MSG_TYPE = 0x3C,
    RR_PSI_3_QUATER_MSG_TYPE = 0x3D,
    RR_PSI_13_MSG_TYPE = 0x37,
    RR_PSI_8_MSG_TYPE = 0x39,
    RR_PSI_14_MSG_TYPE = 0x3a
} rr_psi_msg_type;

typedef enum
{
    PSI_NO_BANDINFO,
    PSI_DCS1800,
    PSI_PCS1900
} band_indicator_enum;

typedef enum
{
    /* Note that the sequence and the value of each item can't be changed because the
     * content of pbcch_mode_mapping[] is designed according to this define value! */
    PSI_POSITION_NONE = 0,
    PSI_POSITION_PSI1 = 1,
    PSI_POSITION_LR = 2,
    PSI_POSITION_HR = 4,
    PSI_POSITION_UNKNOWN = 8    /* default value for psi_position[] */
} psi_position_enum;

#ifdef __PS_SERVICE__
/* enum for indicating hopping or non-hopping pbcch */
typedef enum
{
    PSI_SI_NON_HOPPING_PBCCH,
    PSI_SI_HOPPING_PBCCH
}
PBCCH_TYPE;
#endif /* __PS_SERVICE__ */ 

typedef enum
{
    SAPI0 = 0,
    SAPI3 = 3
} lapdm_sapi_header;

typedef enum
{
    UNUSED_ESTB,
    NORMAL_ESTB,
    CORES_ESTB
} LAPDM_ESTB_MODE;

typedef enum
{
    UNUSED_REL,
    NORMAL_REL,
    LOCAL_END_REL,
    ABNORMAL_REL
} LAPDM_REL_MODE;

typedef enum
{
    NORMAL_HEADER = 1,
    SHORT_HEADER
} lapdm_l2_header;

typedef enum
{
    LOW_PRIO = 1,
    NORMAL_PRIO,
    HIGH_PRIO
} lapdm_priority;

#ifdef __AGPS_CONTROL_PLANE__
typedef enum
{
    RRM_APDU_INITIAL_VALUE = 0, //inital value
    RRM_APDU_SINGLE_MESSAGE = 1, // APDU without segment
    RRM_APDU_FIRST_SEGMENT = 2, // APDU with first segment
    RRM_APDU_MIDDLE_SEGMENT = 3, // APDU with middle segment
    RRM_APDU_LAST_SEGMENT = 4, // APDU with last segment
    RRM_NORMAL_LAYER3_MESG = 5 // Normal Layer3 message
} lapdm_layer3_message_type_enum;

#endif /* __AGPS_CONTROL_PLANE__ */ 

typedef enum
{
    ERROR_NO = 1,
    ERROR_TIMER_EXPD_N200_ABNORMAL_REL,
    ERROR_RE_EST_REQ,
    ERROR_UNSOL_UA,
    ERROR_UNSOL_DM,
    ERROR_UNSOL_DM_ESTD_STATE_ABNORMAL_REL,
    ERROR_UNSOL_S_RESP,
    ERROR_SEQ_ERROR_ABNORMAL_REL,
    ERROR_U_INCORRECT_PARA,
    ERROR_SHORT_L2_TYPE1_NOT_SUP,
    ERROR_SHORTL2TYPE1_NOT_APP,
    ERROR_S_INCORRECT_PARA,
    ERROR_I_INCORRECT_M,
    ERROR_I_INCORRECT_LEN,
    ERROR_FRAME_NOT_IMPL,
    ERROR_SABM_ESTD_STATE,
    ERROR_SABM_INFO_NOT_ALL,
    ERROR_SABM_INFO_MISMATCH,
    ERROR_RADIO_LINK_FAILURE,
    ERROR_SAPI0_NOT_ESTABLISHED,
    ERROR_EXCEED_MAX_L3_LEN,
    ERROR_SAPI3_NOT_ESTABLISHED
    //ERROR_RCVD_NW_DISC
} LAPDM_ERROR_CAUSE;

/* Evelyn: R7 Latency Reducation Development */
#ifdef __GERAN_RTTI__
typedef enum
{
   RR_BTTI_MODE = 0,
   RR_RTTI_MODE
} tti_config_enum;
typedef enum
{
   RR_BTTI_USF_MODE = 0,
   RR_RTTI_USF_MODE
} usf_mode_enum;
#endif/* __GERAN_RTTI__ */

#ifdef __GERAN_FANR__
typedef enum
{
   RLC_NORMAL_POLLING = 0,
   RLC_PAN_POLLING
} rlc_polling_type_enum;
#endif/* __GERAN_FANR__ */

typedef enum
{
    ABSENT,
    PRESENT
} ispresent;

typedef enum
{
    ZERO = 0,
    ONE = 1,
    TWO = 2,
    THREE = 3
} twobit;

/* Prot Disc for RR mesgs */
typedef enum
{
    RR_PD = 0x06,
    SMS_PD = 0x09,
    TEST_PD = 0x0f,
    RESERV_PD = 0x0e
} RR_PD_TYPE;

typedef enum
{
    DEDICATED,
    TBF
} CHANNEL_RESOURCE_TYPE;

typedef enum
{
    RMC_CHANNEL_DESCRIPTION_1,
    RMC_CHANNEL_DESCRIPTION_2
} CHANNEL_DESCRIPTION_TYPE;

#ifdef __VAMOS_1__
typedef enum
{
    RMC_TSC_SET_1,
    RMC_TSC_SET_2
} rmc_tsc_set_type;

#endif /* __VAMOS_1__ */

typedef enum
{
    NO_CIPHERING,
    CIPHERING
} CIPHERING_MODE_SETTING;

typedef enum
{
    AFTER_BEFORE,
    AFTER_ONLY,
    OLD_CHANNEL_DESC
} DED_CHAN_PARAMS;

typedef enum
{
    CHAN_DESC1,
    CHAN_DESC2
} CHAN_DESC_IE_TYPE;

typedef enum
{
    CN_ANY_CHAN,
    CN_SDCCH,
    CN_TCH_F,
    CN_TCH_F_H
} CHAN_NEEDED;

typedef enum
{
    TWO_PHASE,
    PAGE_RESPONSE,
    CELL_UPDATE,
    GMM_PROC,
    SHORT_ACCESS,
    ONE_PHASE,
    MEAS_PROC,
    CELL_CHANGE_FAILURE,
#ifdef __EGPRS_MODE__
    SIGNALLING,
#endif 
    GSM_PROC    /* Vincent add (for GSM) */
} ACCESS_TYPE;

/* Vincent */
typedef enum
{
    SAPI_NOT_ESTABLISHED,
    SAPI_ESTABLISHING,
    SAPI_ESTABLISHED
} sapi_status_enum;

#ifdef __PS_SERVICE__
typedef enum
{
    FREQUENCY_NOT_IMPLEMENTED,
    NO_RESPONSE_ON_TARGET_CELL,
    REJECT_ON_TARGET_CELL,
    ON_GOING_CS_CONNECTION,
#ifdef __PS_HO__
    PS_HANDOVER_FAILURE_OTHERS,
#else 
    ANOYMOUS_ACCESS,
#endif 
    MS_GMM_STANDBY_STATE,
    MS_GMM_FORCED_TO_STANDBY,
    CELL_CHG_UNUSED_VALUE
} cell_change_failure_cause_enum;

typedef enum
{
    CELL_CHANGE_BSIC_SYNC_IN_PROGRESS,
    CELL_CHANGE_ABORT_SUCCESS
} CELL_CHANGE_ABORT_RESULT_ENUM;

typedef enum
{
    PL_DATA_BLOCK,
    PL_CTRL_BLOCK1,
    PL_CTRL_BLOCK2,
    PL_RESERVED
} pay_load_type_enum;

typedef enum
{
    ARFCN_TYPE = 0,
    INDIRECT_ENCOD = 1,
    DIRECT_ENCOD1 = 2,
    DIRECT_ENCOD2 = 3
} freq_enum;

typedef enum
{
    MSID_GLOBALTFI = 0,
    MSID_TLLI = 2,
    MSID_TQI = 6,
    MSID_PKTREQREF = 7
} msid_enum;

typedef enum
{
    MSID1_TLLI = 1,
    MSID1_TQI = 6,
    MSID1_PKTREQREF = 7,
    MSID1_GLOBALTFI = 0
} msid1_enum;

typedef enum
{
    DYNAMIC = 1,
    SINGLEBLK = 2,
    EXTENSION = 0,
    FIXED_TYPE = 3
} challoc_enum;

typedef enum
{
    TLLI1 = 0,
    PKTREQREF1 = 2,
    GLOBALTFI1 = 3
} add_enum;

typedef enum
{
    ACCESS_BURST_TYPE_8_BITS,
    ACCESS_BURST_TYPE_11_BITS
} access_burst_type_enum;

typedef enum
{
    RLC_MAC_DATA_BLOCK,
    CONTROL_BLOCK_WITHOUT_OPT_OCTETS,
    CONTROL_BLOCK_WITH_OPT_OCTETS
} blk_type_enum;

/* Evelyn 20090415: Merge R6 */
typedef enum
{
    PS_HO_TO_A_GB_PAYLOAD,
    PS_HO_TO_UTRAN_PAYLOAD
} ps_ho_payload;

typedef enum
{
    PS_HO_RR_INFO
} ps_ho_rr;

/* Claire 050128 change : Implement EGPRS SRB mode */
#ifdef __EGPRS_MODE__
typedef enum
{
    EGPRS_SRB_LOOPBACK_ON_WITHOUT_OPT_OCTETS,   /* 0x00 */
    EGPRS_SRB_LOOPBACK_OFF_WITHOUT_OPT_OCTETS,  /* 0x01 */
    EGPRS_SRB_LOOPBACK_ON_WITH_OPT_OCTETS,      /* 0x10 */
    EGPRS_SRB_LOOPBACK_OFF_WITH_OPT_OCTETS      /* 0x11 */
} egprs_srb_blk_type_enum;
#endif /* __EGPRS_MODE__ */ 

typedef enum
{
   /****** SI ******/
    SI_INFO_READY = 0,                      /* 0 */
    SI_INFO_NOT_READY,                      /* 1 */
    SI_INFO_NOT_READY_AS_CELL_SEL,          /* 2 */
    SI_INFO_NOT_READY_AS_LIMITED_SERVICE,   /* 3 */
    SI_INFO_NOT_READY_AS_NO_SERVICE,        /* 4 */
    SI_INFO_GPRS_TO_EGPRS,                  /* 5 */
    SI_INFO_EGPRS_TO_GPRS,                  /* 6 */

   /****** CS SERVICE ******/
    RAND_ACCESS_FAILURE = 20,   /* 20 */
    ACCESS_NOT_ALLOWED,         /* 21 */
    GPRS_SUSPEND,               /* 22 */
    GPRS_RESUME_NOT_POSSIBLE,   /* 23 */
    GPRS_RESUME_POSSIBLE,       /* 24 */
    GPRS_RESUME_CS_ACCESS_FAIL, /* 25 */

   /****** PS SERVICE ******/
    TBF_ESTABLISHMENT_FAILURE = 40,     /* 40 */
    PAN_MAX_REINIT,                     /* 41 */
    TBF_REL_NORMAL,                     /* 42 */
    TBF_REL_ABNORMAL,                   /* 43 */
    TBF_REL_RND_ACCESS,                 /* 44 */
    TBF_REL_CELL_RESEL,                 /* 45 */
    TBF_REL_RETURN_PCCCH,               /* 46 */
    TBF_REL_RETURN_SI,                  /* 47 */
    TBF_REL_ACCESSREJECT_END,           /* 48 */
    TBF_REL_DETACH,                     /* 49 */
    TBF_REL_NO_SIM,                     /* 50 */
    TBF_REL_ATT_REJ,                    /* 51 */
    TBF_REL_T3142_T3172_RUNING,         /* 52 */
    DL_SINGLE_BLOCK_PROC_IN_PROGRESS,   /* 53 */
    DL_SINGLE_BLOCK_PROC_END,           /* 54 */
    UL_SINGLE_BLOCK_PROC_IN_PROGRESS,   /* 55 */
    UL_SINGLE_BLOCK_PROC_END,           /* 56 */
    UL_SINGLE_BLOCK_PROC_FAIL,          /* 57 */
    RAU_PROC_BEGIN,                     /* 58 */
    RAU_PROC_SUCCESS,                   /* 59 */
    RAU_PROC_FAILURE,                   /* 60 */
    TBF_REL_POWER_OFF,                  /* 61 */
    TBF_EST_FAIL_WITH_RETURN_SI,        /* 62 */
    TBF_EST_FAIL_WITH_MAX_RETRY,        /* 63 */
#ifdef __TBF_EST__
    TBF_REL_FOR_TBF_EST,                /* 64 */
#endif /* __TBF_EST__ */

#ifdef __GEMINI__
    RR_SUSPEND_DUAL_SIM,    /* 65 */
#endif /* __GEMINI__ */
#ifdef __PS_HO__
    TBF_REL_FOR_HO_RESET,   /* 66 */
#endif /* __PS_HO__ */

    TBF_REL_ACCESSREJECT_WAIT_IND,  /* 67 */
    TBF_REL_UNSOLICITED_FINAL_PUAN, /* 68 */

   /****** CELL RESELECTION ******/
    ABNORMAL_RESEL_BEGIN = 80,          /* 80 */
    /* If RPMC reselects back to original cell, ABNORMAL_RESEL_FAIL will be sent
     * to prevent RLC clearing its signaling queue */
    ABNORMAL_RESEL_FAIL,                /* 81 */
    /* Added for C2 and PCCO based resel scenarios */
    C1_C2_RESEL_BEGIN,                  /* 82 */
    C1_C2_RESEL_SUCCESS,                /* 83 */
    C1_C2_RESEL_FAIL,                   /* 84 */
    C1_C2_RESEL_FAIL_GSM_CELL,          /* 85 */
    C31_C32_RESEL_BEGIN,                /* 86 */
    C31_C32_RESEL_SUCCESS,              /* 87 */
    C31_C32_RESEL_FAIL,                 /* 88 */
    NW_CTRL_RESEL_BEGIN,                /* 89 */
    NW_CTRL_RESEL_FAIL,                 /* 90 */
    NW_CTRL_RESEL_SUCCESS,              /* 91 */
    PCCO_RESEL_SUCCESS,                 /* 92 */
    PCCO_RESEL_BEGIN,                   /* 93 */
    PCCO_RESEL_FAIL,                    /* 94 */
    PCCO_RESEL_INTERMEDIATE_SUCCESS,    /* 95 */
    PCCO_RESEL_INTERMEDIATE_FAIL,       /* 96 */
    /* ABNORMAL_RESEL_SUCCESS informs RLC to clear its signaling queue */
    ABNORMAL_RESEL_SUCCESS,             /* 97 */

   /****** Iter-RAT CELL RESELECTION ******/
    IR_RESEL_BEGIN = 120,                   /* 120 */
    IR_RESEL_SUCCESS,                       /* 121 */
    IR_RESEL_FAIL,                          /* 122 */
    /* Byron: 2007/05/08: When CCO Activation time timer is running, can not do access */
    TBF_REL_CCO_ACTIVATION_TIME_ONGOING,    /* 123 */
    /* Byron: 2007/05/28: To tell RLC the GSM RAT changes to standby */
    IR_RAT_CHANGE_GSM_STANDBY,              /* 124 */

    /* brwang, 070205, to avoid RLC assert due to not paired RESUME_NOT_POSSIBLE */
   /****** Iter-RAT HO ******/
    IR_HO_BEGIN = 140,  /* 140 */
    IR_HO_TO_UTRAN,     /* 141 */
    IR_HO_FROM_UTRAN,   /* 142 */

    /* Evelyn 20090415: Merge R6 */
#if defined(__PS_HO__) && defined (__UMTS_R6__)
    PSHO_TO_UTRAN_SUCCESS,  /* 143 */
#endif 

    /* To Indicate VIRTUAL MODE to MAC */
    RR_GEMINI_VIRTUAL,  /* 144 */
    /* To Indicate NORMAL MODE to MAC */
    RR_GEMINI_NORMAL,  /* 145 */
    	/*It is in virtual but can also trigger PS access*/
	RR_GEMINI_VIRTUAL_ALLOW, /*146*/
    TBF_REL_PKT_TBF_REL_ABNORMAL_MAX,  /* 147 */
    TOTAL_TBF_REL_TYPE_ENUM = 255   /* 255 */
} tbf_rel_type_enum;

typedef enum
{
    DYNAMIC_MODE,
    EXT_DYNAMIC_MODE,
    FIXED_WITHOUT_HALF_DUPLEX_MODE,
    FIXED_WITH_HALF_DUPLEX_MODE,
    SINGLE_BLOCK_WITHOUT_TBF,
    SINGLE_BLOCK_FOR_TWO_PHASE,
#ifdef __EGPRS_MODE__
    MULTI_BLOCK_FOR_TWO_PHASE,
#endif /* __EGPRS_MODE__ */
    DYNAMIC_TEST_MODE,
    EXT_DYNAMIC_TEST_MODE,
    NO_MAC_MODE,    /* MAC mode is not assigned by the Network, eg, downlink IMM ASSIGN */
    TOTAL_MAC_MODE_ENUM
} mac_mode_enum;

/* Exce 030917: Add an invalid value for engineering mode */
typedef enum
{
    CS1,
    CS2,
    CS3,
    CS4,
    /* Claire 041118 change : Modify MCS enums */
#ifdef __EGPRS_MODE__
    MCS1,
    MCS2,
    MCS3,
    MCS4,
    MCS5,
    MCS6,
    MCS7,
    MCS8,
    MCS9,
    MCS5_7,
    MCS6_9,
#endif /* __EGPRS_MODE__ */ 

/* Evelyn: R7 Latency Reducation Development */
#ifdef __GERAN_RTTI__
    MCS0,
#endif /* __GERAN_RTTI__ */ 

    CS_INVALID
} gprs_cs_enum;

/* Exce 20040116: `rrbp_mode' is to provide an interface to RMPC for adjusting PCA/PDAN/NB prority dynamically */
typedef enum
{
    RRBP_MODE_NORMAL = 0,
    RRBP_MODE_NB_PRIORITY_OVER_PDAN
} rrbp_mode_enum;

typedef enum
{
    PKT_ASSIGN,
    IMM_PKT_ASSIGN,
    PDCH_ASSIGN
} pkt_assign_type_enum;

#ifdef EGPRS
#include "egprs_headers_struct.h"
#endif 

#ifdef __EGPRS_MODE__

typedef enum
{
    MODULATION_GMSK,
    MODULATION_8PSK
} MODULATION_TYPE;

/* Claire 041118 change : Modify MCS enums */
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* 0 */ 

typedef enum
{
    GPRS_TBF,
    EGPRS_TBF
} TBF_TYPE;

#endif /* __EGPRS_MODE__ */

/* Lanslo 20050801 Ref: 3GPP TS 04.60 V8.25.0 2004-09 */
typedef enum
{
    /* --------------------------------------------------*/
    /* Downlink RLC/MAC control messages */
    /* --------------------------------------------------*/
    RR__DL_MSG_TYPE_VALUE_0,                    /* 0 */
    RR__PACKET_CELL_CHANGE_ORDER,               /* 1 */
    RR__PACKET_DOWNLINK_ASSIGNMENT,             /* 2 */
    RR__PACKET_MEASUREMENT_ORDER,               /* 3 */
    RR__PACKET_POLLING_REQUEST,                 /* 4 */
    RR__PACKET_POWER_CONTROL_TIMING_ADVANCE,    /* 5 */
    RR__PACKET_QUEUEING_NOTIFICATION,           /* 6 */
    RR__PACKET_TIMESLOT_RECONFIGURE,            /* 7 */
    RR__PACKET_TBF_RELEASE,                     /* 8 */
    RR__PACKET_UPLINK_ACK_NACK,                 /* 9 */
    RR__PACKET_UPLINK_ASSIGNMENT,               /* 10 */
    RR__PKT_CELL_CHANGE_CONTINUE,               /* 11 */
    RR__PACKET_NEIGH_CELL_DATA,                 /* 12 */
    RR__PACKET_SERV_CELL_DATA,                  /* 13 */
    RR__DL_MSG_TYPE_VALUE_14,                   /* 14 */
    RR__MTBF_DL_ASSIGNMENT,                     /* 15 */
    RR__MTBF_UL_ASSIGNMENT,                     /* 16 */
    RR__MTBF_TIMESLOT_RECONFIG,                 /* 17 */
    RR__DL_MSG_TYPE_VALUE_18,                   /* 18 */
    RR__DL_MSG_TYPE_VALUE_19,                   /* 19 */
    RR__DL_MSG_TYPE_VALUE_20,                   /* 20 */
    RR__PS_HANDOVER_COMMAND,                    /* 21 */
    RR__PKT_PHYSICAL_INFO,                      /* 22 */
    RR__DL_MSG_TYPE_VALUE_23,                   /* 23 */
    RR__DL_MSG_TYPE_VALUE_24,                   /* 24 */
    RR__DL_MSG_TYPE_VALUE_25,                   /* 25 */
    RR__DL_MSG_TYPE_VALUE_26,                   /* 26 */
    RR__DL_MSG_TYPE_VALUE_27,                   /* 27 */
    RR__DL_MSG_TYPE_VALUE_28,                   /* 28 */
    RR__DL_MSG_TYPE_VALUE_29,                   /* 29 */
    RR__DL_MSG_TYPE_VALUE_30,                   /* 30 */
    RR__DL_MSG_TYPE_VALUE_31,                   /* 31 */
    RR__PACKET_SERV_CELL_SI,                    /* 32*/
    RR__PACKET_ACCESS_REJECT,                   /* 33 */
    RR__PACKET_PAGING_REQUEST,                  /* 34 */
    RR__PACKET_PDCH_RELEASE,                    /* 35 */
    RR__PACKET_PRACH_PARAMETERS,                /* 36 */
    RR__PACKET_DUMMY_CONTROL,                   /* 37 */
    RR__DL_MSG_TYPE_VALUE_38,                   /* 38 */
    RR__DL_MSG_TYPE_VALUE_39,                   /* 39 */
    RR__PSI_16,                                 /* 40 */
    RR__DL_MSG_TYPE_VALUE_41,                   /* 41 */
    RR__DL_MSG_TYPE_VALUE_42,                   /* 42 */
    RR__DL_MSG_TYPE_VALUE_43,                   /* 43 */
    RR__DL_MSG_TYPE_VALUE_44,                   /* 44 */
    RR__PACKET_APPLICATION_INFO,                /* 45 */
    RR__DL_MSG_TYPE_VALUE_46,                   /* 46 */
    RR__DL_MSG_TYPE_VALUE_47,                   /* 47 */
    RR__PSI_6,                                  /* 48 */
    RR__PSI_1,                                  /* 49 */
    RR__PSI_2,                                  /* 50 */
    RR__PSI_3,                                  /* 51 */
    RR__PSI_3_bis,                              /* 52 */
    RR__PSI_4,                                  /* 53 */
    RR__PSI_5,                                  /* 54 */
    RR__PSI_13,                                 /* 55 */
    RR__PSI_7,                                  /* 56 */
    RR__PSI_8,                                  /* 57 */
    RR__PSI_14,                                 /* 58 */
    RR__DL_MSG_TYPE_VALUE_59,                   /* 59 */
    RR__PSI_3_ter,                              /* 60 */
    RR__PSI_3_quater,                           /* 61 */
    RR__PSI_15,                                 /* 62 */
    RR__DL_MSG_TYPE_VALUE_63                    /* 63 */
} rr_gprs_dl_peer_msg_name_enum;

typedef enum
{
    /* --------------------------------------------------*/
    /* Uplink RLC/MAC control messages (*/
    /* --------------------------------------------------*/
    RR__PACKET_CELL_CHANGE_FAILURE,             /* 0 */
    RR__PACKET_CONTROL_ACKNOWLEDGE,             /* 1 */
    RR__PACKET_DOWNLINK_ACK_NACK,               /* 2 */
    RR__PACKET_UL_DUMMY_CTRL,                   /* 3 */
    RR__PACKET_MEASUREMENT_REPORT,              /* 4 */
    RR__PACKET_RESOURCE_REQUEST,                /* 5 */
    RR__PACKET_MOBILE_TBF_STATUS,               /* 6 */
    RR__PACKET_PSI_STATUS,                      /* 7 */
    RR__EGPRS_PKT_DL_ACK_NACK,                  /* 8 */
    RR__UL_MSG_TYPE_VALUE_9,                    /* 9 */
    RR__PACKET_ENHANCED_MEASUREMENT_REPORT,     /*0x0a */
    RR__ADDITIONAL_MS_RADIO_ACCESS_CAP,         /*0x0b */
    RR__PACKET_CELL_CHANGE_NOTIFCATION,         /*0x0c */
    RR__PACKET_SI_STATUS                       /*  0x0d */
} rr_gprs_ul_peer_msg_name_enum;

/* Evelyn 20090415: Merge R6 */
typedef enum
{
    FAILURE = 0,
    SUCCESS
} result_type_enum;

typedef enum
{
    PMR_NC = 0 ,
#ifdef __PKT_EXT_MEAS__
    PMR_EXT ,
#endif /* __PKT_EXT_MEAS__ */    
    PMR_ENH ,
    PCCF,
    PCCN,
    PSS,
    PPS
} rmpc_mac_ctrl_msg_type_enum;

typedef enum
{
    CS_PAGING = 0,
    PCCO,
    PMO,
#ifdef __GERAN_R4__
    PCCC,
    PSCD,
    PNCD,
#endif /* __GERAN_R4__ */ 
#ifdef __GERAN_R6__
    PSCS,
#endif /* __GERAN_R6__ */
#ifndef __MTK_TARGET__ 
    PSI_13_MSG,
#endif /* __MTK_TARGET__ */
    MAC_RMPC_CTRL_MSG_NUM
}
mac_rmpc_ctrl_msg_type_enum;

/* Adeline: Relpace cs paging, PCCO, PMO, PCCC, PSCD, PNCD, PSCS */
#ifdef __PS_HO__

typedef enum
{
    PS_HO_ABORT_FAIL_DUE_TO_IR_PROCEDURE,
    PS_HO_ABORT_IN_INCOMPATIBLE_SUBSTATE,
    PS_HO_ABORT_SUCCESS
} PS_HO_ABORT_RESULT_ENUM;

typedef enum
{
    PS_HO_GERAN_TO_GERAN = 0,
    PS_HO_UTRAN_TO_GERAN,
    PS_HO_GERAN_TO_UTRAN
} ps_ho_dir_enum;

typedef enum
{
    PS_HO_SUCCESS = 0,
    PS_HO_FAILURE,
    PS_HO_EVAL_SUCCESS,
    PS_HO_EVAL_FAILURE
} ps_ho_result_enum;

typedef enum
{
    FROM_UTRAN_EVALUATION = 0,
    FROM_UTRAN_ACTIVE
} ps_ho_utran_status_enum;

typedef enum
{
    NO_RESPONSE_FROM_TARGET_CELL,
    PS_HO_FAILURE_OTHERS,
    PS_HO_UNUSED_VALUE
} ps_ho_failure_cause_enum;

typedef enum
{
    GPRS_MAC_IDLE = 0,
    GPRS_MAC_PKT_ACCESS,
    GPRS_MAC_UL,
    GPRS_MAC_DL,
    GPRS_MAC_UL_DL,
    GPRS_MAC_NUM_STATES
} gprs_mac_state_enum;

typedef enum
{
    ERROR_ON_GREAN,
    ERROR_ON_UTRAN_EVALUATION,
    ERROR_ON_UTRAN_ACTIVATION
} ps_ho_error_rsp_enum;

#endif /* __PS_HO__ */

/* Katie 20130531: ps channel protect issue */
typedef enum
{
    PROTECT_CHANNEL = 0,
    NOT_PROTECT_CHANNEL
} is_protect_ps_channel_type_enum;

/* Simon20051222 for FLC2 */
typedef enum
{
    GPRS_SAPI3_MEM,
    GPRS_SAPI5_MEM,
    GPRS_SAPI9_MEM,
    GPRS_SAPI11_MEM,
    GPRS_NUM_SAPIS,
    GPRS_INVALID_SAPI
} gprs_flc_sapi_type_enum;

#endif /* __PS_SERVICE__ */

typedef enum
{
    RR_ZERO_CELL    = 0,
    RR_ONE_CELL     = 1,
    RR_TWO_CELL     = 2,
    RR_THREE_CELL   = 3,
    RR_FOUR_CELL    = 4,
    RR_FIVE_CELL    = 5,
    RR_SIX_CELL     = 6,
    RR_SEVEN_CELL   = 7,
    RR_EIGHT_CELL   = 8
} rr_cell_num_enum;

typedef enum
{
    RR_NO_PAGE_PENDING,
    RR_CS_IMSI_PAGE_PENDING,
    RR_CS_TMSI_PAGE_PENDING,
    RR_PS_IMSI_PAGE_PENDING,
    RR_PS_PTMSI_PAGE_PENDING
} page_type_enum;

typedef enum
{
    RR1 = 0,
    RR2 = 1,
    RR3 = 2,
    RR4 = 3,
    MAX_RR = 4
} rr_current_cntx_ptr_enum;

#ifdef __GEMINI__
/* The current semaphore is owned by which module */
typedef enum
{
    RR_OWNER_NONE,
    RR_OWNER_OF_CNTX_1,
    RR_OWNER_OF_CNTX_2
} rr_semaphore_owner_enum;

/* Is current PS session ongoing */
typedef enum
{
    RR_PS_SESSION_NONE,
    RR_PS_SESSION_ONGOING
} rr_ps_session_enum;

typedef enum
{
    RR_NONE_SERVICE,
    RR_CS_SERVICE,
    RR_TRANSFER_FROM_CS_TO_PS_SERVICE,
    RR_TRANSFER_FROM_CS_TO_PS_HPS_SERVICE,
    RR_TRANSFER_FROM_CS_TO_PS_MPS_SERVICE,
    RR_PS_SERVICE,
    RR_TRANSFER_FROM_PS_TO_CS_SERVICE,
    RR_TRANSFER_FROM_PS_TO_PS_HPS_SERVICE,
    RR_TRANSFER_FROM_PS_TO_PS_MPS_SERVICE,  /*mps preempts current ps*/
    RR_TRANSFER_FROM_PS_MPS_TO_PS_MPS_HPS_SERVICE,
    RR_TRANSFER_FROM_PS_HPS_TO_PS_MPS_HPS_SERVICE,
    RR_TRANSFER_FROM_PS_HPS_TO_CS_SERVICE,
    RR_TRANSFER_FROM_PS_MPS_TO_CS_SERVICE,  /*cs preempts current ps+mps*/
    RR_TRANSFER_FROM_PS_MPS_HPS_TO_CS_SERVICE,  /*cs preempts current ps+mps+hps*/
    RR_PS_HPS_SERVICE, /* For Multi PS, Only HPS is not possible */
    RR_PS_MPS_SERVICE, /*For Medium PS*/
    RR_PS_MPS_HPS_SERVICE
} rr_cs_ps_service_enum;

typedef enum
{
    GAS_SEMA_RELEASE,
    GAS_SEMA_OCCUPY,
    GAS_SEMA_OCCUPY_DURING_ABORT
} gas_sema_status_enum;

#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
typedef enum
{
    RR_GEMINI_NORMAL_MODE = 0,
    RR_GEMINI_VIRTUAL_MODE = 1,
    RR_GEMINI_SUSPEND_MODE = 2
#ifdef __REMOTE_SIM__
    , RR_GEMINI_VIRTUAL_CONNECTED_MODE = 3
#endif /* __REMOTE_SIM__ */
} rr_monitor_peer_paging_mode;
#endif

#endif /* __GEMINI__ */ 

typedef enum
{
    LIMITED_SERVICE,
    NORMAL_SERVICE,
    NO_PLMN_SERVICE
} rr_service_type_enum;

typedef enum
{
    RRM_RAT_GSM = 0,
    RRM_RAT_UMTS = 1,
    RRM_RAT_LTE = 2
} rr_support_rat_enum;

typedef enum
{
    QMSG_TYPE_SI2TER,
    QMSG_TYPE_SI2Q,
    QMSG_TYPE_SI2N,

    QMSG_TYPE_PSI2,
    QMSG_TYPE_PSI3BIS,
    QMSG_TYPE_PSI3TER,
    QMSG_TYPE_PSI3Q,
    QMSG_TYPE_PSI5,

    QMSG_TYPE_MI,
    QMSG_TYPE_PMO,

    QMSG_TYPE_PNCD_FOR_SI,
    QMSG_TYPE_PNCD_FOR_PSI
}
queue_msg_type_enum;

typedef enum
{
    QMSG_NOT_REQUIRED_ABNORAML  = 0,
    QMSG_NOT_REQUIRED_COMPLETE  = 1,
    QMSG_REQUIRED_FOR_DECODE = 2
} QUEUE_STATUS_ENUM;

typedef enum
{
    FORCE_SLEEP_IR_NULL                     = 0,

    FORCE_SLEEP_XG2IR_SEND_ACTIVATE_CNF     = 0x01,
    FORCE_SLEEP_XG2IR_SEND_CHANGE_COMPLETE,
    FORCE_SLEEP_XG2IR_REVERT_RAT_TO_INACTIVE,

    FORCE_SLEEP_2GXIR_SET_RAT_TO_INACTIVE = 0x10,
    FORCE_SLEEP_2GXIR_PENDING_ACTIVATE_CNF,
    FORCE_SLEEP_2GXIR_FAIL_BSIC_SYNC,
    FORCE_SLEEP_2GXIR_PENDING_CHANGE_COMPLETE,
    FORCE_SLEEP_2GXIR_PEND_IR_MEAS_REQ,

    FORCE_SLEEP_CGI_SCAN = 0x20,
    FORCE_SLEEP_CGI_BSIC,
    FORCE_SLEEP_CGI_SI,
    FORCE_SLEEP_CGI_COMPLETE,
} rr_force_sleep_during_2gir_enum;

typedef enum
{
    RR_RTI_STATUS_INVALID,  /* Note that this value is also responsible for TBF-EST procedure */
    RR_RTI_STATUS_NO_MATCH,
    RR_RTI_STATUS_FIRST_BLOCK,
    RR_RTI_STATUS_MATCH
} rr_rti_status_enum;

typedef enum
{
    RR_NO_ERROR_MSG_RETURN,
    RR_INCOMPATIBLE_STATE_MSG_RETURN,
    RR_UNKNOWN_MSG_RETURN,
    RR_DIST_PART_ERR_RETURN,
    RR_ADDRESS_PART_ERR_RETURN,
    RR_NON_DIST_PART_ERROR_RETURN,
    RR_MSG_ESC_ERROR_RETURN,
    RR_IGNORE_LABEL_ERR_RETURN,
    RR_TRUNCATED_CONCACT_ERR_RETURN,
    RR_PSI_INCONSISTENCE_RETURN,
    RR_INSTANCE_NOT_COMPLETE
} rr_msg_ret_result_enum;

typedef enum
{
    RR_DL_BLK_INVALID,
    RR_DL_BLK_INVALID_PAYLOAD_TYPE,
    RR_DL_BLK_INVALID_RBSN_FS,
    RR_DL_BLK_DATA_BLK,
    RR_DL_BLK_CTRL_MSG_UNSGEMENTED, /* unsegemented control message */
    RR_DL_BLK_CTRL_MSG_SEGMENTED,   /* segmented control message, if returned pointer of rr_common_mpal_data_ind_hldr() is not NULL, then control message is concatenated */
    RR_DL_BLK_CTRL_BLK_NOT_FOR_US,
    RR_DL_BLK_CTRL_BLK_NON_CS1      /* Exce 20040210: To distinguish RLC/MAC control blocks with non-CS1 coding scheme. */
} rr_dl_blk_type_enum;

typedef enum
{
    RR_EM_TBF_IDLE,
    RR_EM_TBF_PKT_ACCESS,
    RR_EM_TBF_ONGOING,
    RR_EM_TBF_UL_RELEASING,
    RR_EM_TBF_DL_RELEASING_T3192,
    RR_EM_TBF_DL_RELEASING_PKT_TBF_REL
} rr_em_tbf_status_enum;

// TODO: Refine these status may be necessary...
typedef enum
{
    RR_EM_TBF_UL_INACTIVE,
    RR_EM_TBF_UL_ACCESS,
    RR_EM_TBF_UL_ACTIVE,
    RR_EM_TBF_UL_INVALID
} rr_em_tbf_status_ul_enum;

typedef enum
{
    RR_EM_TBF_DL_INACTIVE,
    RR_EM_TBF_DL_ACTIVE,
    RR_EM_TBF_DL_REL_PEND,
    RR_EM_TBF_DL_INVALID
} rr_em_tbf_status_dl_enum;

/************************ 3G & 4G Part ****************************************/

typedef enum
{
    BARRED_CELL_OBJ,
    BARRED_GROUP_CELL_OBJ,
    BARRED_FREQ_OBJ
} barred_obj_enum;

typedef enum
{
    BARRED_CAUSE_REMOVED,
    BARRED_CAUSE_ADDED
} ir_bar_cause_action_enum;

typedef enum
{
    IR_RESEL_MODE_RANKING = 0

#if defined(__LTE_RAT__) || defined(__23G_PRI_RESEL_SUPPORT__)
    , IR_RESEL_MODE_PRIORITY
#endif /* defined(__LTE_RAT__) || defined(__23G_PRI_RESEL_SUPPORT__) */

} ir_resel_mode_enum;

typedef enum
{
    IR_RESEL_NO_CRITERIA_HIT = 0x00,
    IR_RESEL_RANKING_CRITERIA_HIT = 0x01
   
#ifdef __WCDMA_PREFERRED__
    , IR_RESEL_WCDMA_PREFER_HIT  = 0x02
#endif /* __WCDMA_PREFERRED__ */
   
#if defined(__LTE_RAT__) || defined(__23G_PRI_RESEL_SUPPORT__)
    , IR_RESEL_HIGH_PRIORITY_HIT = 0x10,
      IR_RESEL_LOW_PRIORITY_HIT  = 0x20,
      IR_RESEL_ANY_PRIORITY_HIT  = 0x40
#endif /* defined(__LTE_RAT__) || defined(__23G_PRI_RESEL_SUPPORT__) */
} ir_resel_criteria_hit_enum;

typedef enum
{
     IR_RESEL_CRITERIA_CHECK_NOT_ALLOW_RAT_MODE_INVALID,
     IR_RESEL_CRITERIA_CHECK_NOT_ALLOW_MEAS_STOPPED,
     IR_RESEL_CRITERIA_CHECK_NOT_ALLOW_RRM_STATE_INVALID,
     IR_RESEL_CRITERIA_CHECK_NOT_ALLOW_MS_IN_VIRTUAL_MODE,
     IR_RESEL_CRITERIA_CHECK_NOT_ALLOW_MS_IN_NC2_MODE,
     IR_RESEL_CRITERIA_CHECK_NOT_ALLOW_SYS_INFO_NOT_SENT,
     IR_RESEL_CRITERIA_CHECK_NOT_ALLOW_SERV_RLA_INVALID,
     IR_RESEL_CRITERIA_CHECK_NOT_ALLOW_RESEL_PARA_INVALID,
     IR_RESEL_CRITERIA_CHECK_NOT_ALLOW_RAT_CAP_DISEABLED,
     IR_RESEL_CRITERIA_CHECK_ALLOW
} IR_RESEL_CRITERIA_CHECK_ALLOW_STATUS_ENUM;

typedef enum
{
    IR_RESEL_WITH_BACKUP_RESULT_NOT_ALLOW,
    IR_RESEL_WITH_BACKUP_RESULT_SUSPEND,
    IR_RESEL_WITH_BACKUP_RESULT_ALLOW
} IR_RESEL_WITH_BACKUP_RESULT_STATUS_ENUM;

typedef enum{
    IR_QSEARCH_CRITERIA_CHECK_PURPOSE_MEAS,
    IR_QSEARCH_CRITERIA_CHECK_PURPOSE_REPORT    
} ir_qsearch_criteria_check_purpose_enum;

typedef enum
{
    NO_INDIV_PRIO = 0,
    NEW_INDIV_PRIO,
    DEL_INDIV_PRIO
} indiv_prio_action_enum;

typedef enum
{
    INDIV_PRIO_SRC_CHL_REL,
    INDIV_PRIO_SRC_PMO,
    INDIV_PRIO_SRC_PCCO
} indiv_prio_src_enum;

typedef enum
{
    SERV_PRIO_SRC_INVALID,
    SERV_PRIO_SRC_SI,
    SERV_PRIO_SRC_PMO
} serving_prio_src_enum;  

typedef enum{
    NO_RPLMN,
    NO_INDIVI_PRIO_STORE_IN_SCSI,
    INDIVI_PRIO_NOT_BELONG_TO_EQ_PLMN_LIST,
    MS_IN_ANY_CELL_STATE,
    INVALID_INDIVI_PRIO_SET,
    MS_NOT_CAMP_ON_CELL,
    PCCO_NOT_SUCCESS
}apply_indivi_prio_faill_cause_enum;

typedef enum{
    DEPRIO_NO_RPLMN,
    DEPRIO_NO_INFO_IN_SCSI,
    DEPRIO_MS_IN_ANY_CELL_STATE
}apply_deprio_info_faill_cause_enum;

typedef enum{
    PRIO_COMMON = 0,
    PRIO_COMMON_DEFAULT = 1,
    PRIO_INDIVI  = 2,
    PRIO_INDIVI_DEFAULT = 3   
}prio_info_source_enum;

typedef enum{
    COMMON_PRIO_CHECK,
    INDIVI_PRIO_CHECK
} prio_info_check_src_enum;

typedef enum
{
    CHECK_SEARCH_CSG_CELL_REQ_ALLOWED = 0,
    CHECK_START_T_RESEL_TIMER_ALLOWED,
    CHECK_EVALUATE_CSG_CELL_REQ_ALLOWED,
    CHECK_ACTIVATE_CSG_CELL_ALLOWED  
} CHECK_PURPOSE;

typedef enum
{
    REPORT_CGI_NULL_STATE,
    REPORT_CGI_POWER_SCAN_STATE,
    REPORT_CGI_BSIC_READ_STATE,
    REPORT_CGI_SI_INFO_READ_STATE
} report_cgi_state_enum;

typedef enum
{
    REPORT_CGI_INFO_STATUS_NO_ERROR,
    REPORT_CGI_INFO_STATUS_POWER_SCAN_ERROR,
    REPORT_CGI_INFO_STATUS_BSIC_ERROR,
    REPORT_CGI_INFO_STATUS_SI_INFO_ERROR
} report_cgi_error_status_enum;

/************************ 3G Only Part ****************************************/
typedef enum
{
    UMTS_CARRIER = 0,
    UMTS_CELL = 1
} umts_carrier_or_cell_enum;

typedef enum
{
    FROM_NW = 0,
    FROM_MS = 1
#ifdef __CMCC_STD_FR__
	  ,
	  FROM_FR = 2
#endif
} umts_from_nw_or_ms_enum;

typedef enum
{
    UMTS_CELL_LIST_INVALID,
    UMTS_CELL_LIST_FROM_SI2T,
    UMTS_CELL_LIST_FROM_SI2Q,
    UMTS_CELL_LIST_FROM_PSI3Q,
    UMTS_CELL_LIST_FROM_PMO,
    UMTS_CELL_LIST_FROM_MI,
#if (defined(__UMTS_RAT__) && defined(__FDD_REDIRECTION__)) || defined(__UMTS_R6__)
    /* ZY : R6 redirection */
    UMTS_CELL_LIST_FROM_CH_REL,
#endif /* (defined(__UMTS_RAT__) && defined(__FDD_REDIRECTION__)) || defined(__UMTS_R6__) */
    UMTS_CELL_LIST_FROM_PCCO
} umts_cell_list_src_enum;

typedef enum
{
    UMTS_CARRIER_LIST_SRC_SI2TER,
    UMTS_CARRIER_LIST_SRC_SI2Q
} UMTS_CARRIER_LIST_SRC;

typedef enum {
    UMTS_REP_QUAN_RSCP,
    UMTS_REP_QUAN_ECN0,
    UMTS_REP_QUAN_RSSI
} umts_rep_quan;

typedef enum{
    UCELL_SORT_PURPOSE_RESEL,
    UCELL_SORT_PURPOSE_MEAS_REP,
    UCELL_SORT_PURPOSE_PCCN_REP
} ucell_sort_purpose_enum;

typedef enum
{
    QSEARCH_I_TYPE,
    QSEARCH_P_TYPE,
    QSEARCH_C_TYPE,
    QSEARCH_C_INIT_TYPE
} umts_qsearch_value_type_enum;

typedef enum{
    UMTS_TOP_POWERFUL_CELL = 0,
    UMTS_LOW_PRIORITY_CELL = 1,
    UMTS_RESEL_CANDIDATE   = 2,
    UMTS_RESEL_TARGET      = 3,
    UMTS_CR3_BARRED_CELL   = 4,
    UMTS_CR3_UNBARRED_CELL = 5,
    UMTS_BARRED_CELL_TIME  = 6,
    UMTS_UNBARRED_CELL     = 7,
    UMTS_TEMP_FAILURE_CELL_TIME  = 8,
    UMTS_UN_TEMP_FAILURE_CELL  = 9   
}umts_trace_type_enum;

typedef enum 
{
    SI2Q_UMTS_INFO_EXIST_STATUS_UNKNOWN = 0,
    SI2Q_UMTS_INFO_NOT_BROADCAST,
    SI2Q_UMTS_INFO_NOT_AVAIL_Q_NOT_EXIST,
    SI2Q_UMTS_INFO_NOT_AVAIL_Q_NOT_FULL_FACQ_NOT_DONE,
    SI2Q_UMTS_INFO_PARTIAL_AVAIL_Q_NOT_FULL_FACQ_NOT_DONE,
    SI2Q_UMTS_INFO_AVAIL_Q_NOT_EXIST,
    SI2Q_UMTS_INFO_AVAIL_Q_NOT_FULL_FACQ_NOT_DONE,
    SI2Q_UMTS_INFO_AVAIL_Q_NOT_FULL_FACQ_DONE,
    SI2Q_UMTS_INFO_AVAIL_Q_FULL_FACQ_DONE,
    SI2Q_UMTS_INFO_AVAIL_Q_FULL_FACQ_NOT_DONE
} SI2Q_UMTS_INFO_RCVD_STATUS;

typedef enum 
{
    SI2T_UMTS_INFO_EXIST_STATUS_UNKNOWN = 0,
    SI2T_UMTS_INFO_NOT_BROADCAST,
    SI2T_UMTS_INFO_NOT_AVAIL_Q_NOT_EXIST,
    SI2T_UMTS_INFO_NOT_AVAIL_Q_NOT_FULL,
    SI2T_UMTS_INFO_PARTIAL_AVAIL_Q_NOT_FULL,
    SI2T_UMTS_INFO_AVAIL_Q_NOT_EXIST,
    SI2T_UMTS_INFO_AVAIL_Q_NOT_FULL,
    SI2T_UMTS_INFO_AVAIL_Q_FULL
} SI2T_UMTS_INFO_RCVD_STATUS;

typedef enum 
{
    MI_UMTS_INFO_NOT_AVAIL_Q_NOT_EXIST = 0,
    MI_UMTS_INFO_NOT_AVAIL_Q_NOT_FULL_FACQ_NOT_DONE,
    MI_UMTS_INFO_AVAIL_Q_NOT_EXIST,
    MI_UMTS_INFO_AVAIL_Q_NOT_FULL_FACQ_NOT_DONE,
    MI_UMTS_INFO_AVAIL_Q_NOT_FULL_FACQ_DONE,
    MI_UMTS_INFO_AVAIL_Q_FULL_FACQ_DONE,
    MI_UMTS_INFO_AVAIL_Q_FULL_FACQ_NOT_DONE
} MI_UMTS_INFO_RCVD_STATUS;

typedef enum 
{
    PSI_UMTS_INFO_EXIST_STATUS_UNKNOWN = 0,
    PSI_UMTS_INFO_BROADCAST,
    PSI_UMTS_INFO_EXIST
} PSI_UMTS_INFO_RCVD_STATUS;

typedef enum 
{
    UMTS_RANKING_RESEL_PARA_NO_RCVD = 0x00,
    UMTS_RANKING_RESEL_PARA_QSEARCH_I_RCVD = 0x01
#ifdef __UMTS_FDD_MODE__   
    , UMTS_RANKING_RESEL_PARA_FDD_Q_OFFSET_RCVD = 0x02
    , UMTS_RANKING_RESEL_PARA_FDD_Q_MIN_RCVD = 0x04
#ifdef __GERAN_R5__    
    , UMTS_RANKING_RESEL_PARA_FDD_Q_MIN_OFFSET_RCVD = 0x08
    , UMTS_RANKING_RESEL_PARA_FDD_RSCP_MIN_RCVD = 0x10
    , UMTS_RANKING_RESEL_PARA_FDD_ALL_RCVD_WO_3G_ADD_PARA = 0x07
    , UMTS_RANKING_RESEL_PARA_FDD_ALL_RCVD = 0x1F
#else /* __GERAN_R5__ */
    , UMTS_RANKING_RESEL_PARA_FDD_ALL_RCVD = 0x07    
#endif /* __GERAN_R5__ */
#endif /* __UMTS_FDD_MODE__ */
#ifdef __UMTS_TDD128_MODE__
    , UMTS_RANKING_RESEL_PARA_TDD_Q_OFFSET_RCVD = 0x22
    , UMTS_RANKING_RESEL_PARA_TDD_ALL_RCVD = 0x23
#endif /* __UMTS_TDD128_MODE__ */

} UMTS_RANKING_RESEL_PARA_RCVD_STATUS;

typedef enum
{
    UMTS_MEAS_LIST_NO_RCVD = 0,
    UMTS_MEAS_LIST_PARIAL_RCVD,
    UMTS_MEAS_LIST_ALL_RCVD
} UMTS_MEAS_LIST_RCVD_STATUS;

typedef enum
{
    WCDMA_PREFER_ALLOW  = 0,
    WCDMA_PREFER_NOT_ALLOW  = 1,
    WCDMA_PREFER_NOT_ALLOW_FOR_NW_CONTROL = 2
} WCDMA_PREFER_STATUS_ENUM;

typedef enum {
    UMTS_sort_method_s_non_serving,
    UMTS_sort_method_priority_n_s_non_serving
} umts_prio_resel_sort_method_enum;

/************************ 4G Only Part ****************************************/
typedef enum{
    LAI_UNKNOWN_AS_MM_LAI,
    LAI_SAME_AS_MM_LAI,
    LAI_DIFF_AS_MM_LAI    
} lte_lai_status_in_csfb_geran_si;

typedef enum {
    LTE_REP_QUAN_RSRP,
    LTE_REP_QUAN_RSRQ,
} lte_rep_quan_enum;

typedef enum {
    LTE_CS_3BIT_THRESHOLD,
    LTE_CS_6BIT_THRESHOLD,
    LTE_PS_6BIT_THRESHOLD
} lte_rep_thres_src_enum;

typedef enum
{
    LTE_SUITABILITY_CHECK_INVALID = 0, 
    LTE_RSRQ_SUITABILITY_CHECK,
    LTE_RSRP_SUITABILITY_CHECK
} lte_suitability_check_enum;

typedef enum
{
    LTE_PARA_INVALID = 0,
    LTE_PARA_FROM_SI2Q = 1,
    LTE_PARA_FROM_MI = 2,
    LTE_PARA_FROM_PMO = 3
} lte_para_src_enum;

typedef enum
{
    LTE_MEAS_LIST_NO_RCVD = 0,
    LTE_MEAS_LIST_PARIAL_RCVD,
    LTE_MEAS_LIST_ALL_RCVD
} LTE_MEAS_LIST_RCVD_STATUS;

typedef enum 
{
    SI2Q_LTE_INFO_EXIST_STATUS_UNKNOWN = 0,
    SI2Q_LTE_INFO_NOT_BROADCAST,
    SI2Q_LTE_INFO_NOT_AVAIL_Q_NOT_EXIST,
    SI2Q_LTE_INFO_NOT_AVAIL_Q_NOT_FULL_FACQ_NOT_DONE,
    SI2Q_LTE_INFO_PARTIAL_AVAIL_Q_NOT_FULL_FACQ_NOT_DONE,
    SI2Q_LTE_INFO_AVAIL_Q_NOT_EXIST,
    SI2Q_LTE_INFO_AVAIL_Q_NOT_FULL_FACQ_NOT_DONE,
    SI2Q_LTE_INFO_AVAIL_Q_NOT_FULL_FACQ_DONE,
    SI2Q_LTE_INFO_AVAIL_Q_FULL_FACQ_DONE,
    SI2Q_LTE_INFO_AVAIL_Q_FULL_FACQ_NOT_DONE
} SI2Q_LTE_INFO_RCVD_STATUS;

typedef enum{
    LTE_TOP_POWERFUL_CELL = 0,
    LTE_LOW_PRIORITY_CELL = 1,
    LTE_RESEL_CANDIDATE   = 2,
    LTE_RESEL_TARGET      = 3,
    LTE_CR3_BARRED_CELL   = 4,
    LTE_CR3_UNBARRED_CELL = 5,
    LTE_BARRED_CELL_TIME  = 6,
    LTE_UNBARRED_CELL     = 7,
    LTE_TEMP_FAILURE_CELL_TIME  = 8,
    LTE_UN_TEMP_FAILURE_CELL  = 9   
} lte_trace_type_enum;

typedef enum
{
    LTE_QSEARCH_TYPE_INVALID,
    LTE_QSEARCH_C_INIT_TYPE,        
    LTE_QSEARCH_C_TYPE,
    LTE_QSEARCH_P_TYPE
} lte_qsearch_value_type_enum;

typedef enum{
    EUTRAN_CAP_UPDATE_HANDLE_NOT_ALLOW,
    EUTRAN_CAP_UPDATE_HANDLE_ALLOW,
    EUTRAN_CAP_UPDATE_HANDLE_SUSPEND
} eutran_cap_update_handle_enum;

typedef enum
{
    LU_FOR_CSFB_SERVICE_NONE = 0,
    LU_FOR_CSFB_MO_CALL_SERVICE = 1,
    LU_FOR_CSFB_MO_SS_SERVICE = 2,
    LU_FOR_CSFB_MO_LCS_SERVICE = 3,
    LU_FOR_CSFB_MO_UNKNOWN_SERVICE = 4,
    LU_FOR_CSFB_MT_CALL_SERVICE = 5,
    LU_FOR_CSFB_MT_SS_SERVICE = 6,
    LU_FOR_CSFB_MT_LCS_SERVICE = 7,
    LU_FOR_CSFB_MT_UNKNOWN_SERVICE = 8
} lu_for_csfb_service_type_enum;

#ifdef __LTE_RAT__
/*The abort reason for LTE background search*/
typedef enum
{
    ABORT_BY_LTE_RESEL_SUCCESS,
    ABORT_BY_UMTS_RESEL_SUCCESS,
    ABORT_BY_DEACTIVATE_REQ,
    ABORT_BY_PLMN_SEARCH_REQ,
    ABORT_BY_EUTRAN_UPDATE_REQ,
    ABORT_BY_CELL_SEL,
    ABORT_BY_CS_CALL,
    ABORT_BY_LTE_MEAS,
    ABORT_BY_MEAS_TICK,
    ABORT_BY_GEMINI,
    ABORT_BY_AFR
} lte_bg_srch_abort_reason_enum;
#endif /* __LTE_RAT__ */


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
/* under construction !*/
/* under construction !*/
#endif /* 0 */ 

#ifdef __PS_SERVICE__
typedef enum
{
    COMPLETE,
    PSI1_ONLY,
    HR_ONLY,
    LR_ONLY,
    HR_AND_PSI1,
    LR_AND_PSI1,
    HR_AND_LR,
    PSI1_B0_ONLY,
    NO_PSI
} psi_mode_enum;

typedef enum
{
    INT_AS_REQUEST,
    INT_NEW_TBF
} int_meas_freq_enum;

#endif /* __PS_SERVICE__ */

typedef enum
{
    GSM_IDLE_MODE,
    CCCH_PACKET_IDLE_MODE,
    CS_ACCESS_WITH_PBCCH
} rr_mode_enum;

typedef enum
{
    GSM_MEAS_MODE,
    GPRS_MEAS_MODE
} nbr_meas_mode_enum;

typedef enum
{
    MPAL_BOTH_CHANGE = 0,
    MPAL_BOTH_CHANGE_PCCCH,
    MPAL_POWER_CLASS_CHANGE,
    MPAL_MS_TXPWR_CHANGE,
    MPAL_MS_TXPWR_CHANGE_PCCCH
} change_cause_enum;

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef enum
{
    RR_GOOD_BLOCK = 0,
    RR_BAD_BLOCK = 1,
    RR_CONFLICT_WITH_SELF_CHANNEL = 2,

    /* __GEMINI_GSM__ */
    RR_SHARING_WITH_PEER_GSM_PCH = 3,       /* channel sharing when conflict with peer-PCH */
    RR_SHARING_WITH_PEER_GSM_BCCH = 4,      /* channel sharing when conflict with peer-BCCH */

    RR_CONFLICT_WITH_PEER_GSM_NBCCH = 5,    /* channel conflict with peer-NBCCH */
    RR_CONFLICT_WITH_PEER_GSM_PCH = 6,      /* channel conflict with peer-PCH */
    RR_CONFLICT_WITH_PEER_GSM_BCCH = 7,     /* channel conflict with peer-BCCH */
    RR_CONFLICT_WITH_PEER_GSM_OTHERS = 8,   /* channel conflict with peer misc. channels */

    /* __CDMA2000_RAT__ */
    RR_CONFLICT_WITH_PEER_CDMA2000 = 9,     /* channel conflict with high priority peer-C2K channels. */

    /* __GEMINI__ + __UMTS_RAT__ */
    RR_CONFLICT_WITH_PEER_UMTS_BCH_HIGH = 10,   /* channel conflict with high priority peer-BCH */
    RR_CONFLICT_WITH_PEER_UMTS_PICH = 11,      /* channel conflict with peer-PICH */
    RR_CONFLICT_WITH_PEER_UMTS_BCH_LOW = 12,   /* channel conflict with low priority peer-BCH */
    RR_CONFLICT_WITH_PEER_UMTS_CTCH = 13,      /* channel conflict with peer misc. channels */

    /* __GEMINI__ + __LTE_RAT__ */
    RR_CONFLICT_WITH_PEER_LTE_SRV_BCH = 14,    /* channel conflict with peer-BCH */
    RR_CONFLICT_WITH_PEER_LTE_NBCCH_HIGH = 15, /* channel conflict with high priority peer-NBCCH */
    RR_CONFLICT_WITH_PEER_LTE_NBCCH_MID = 16,  /* channel conflict with mid priority peer-NBCCH */
    RR_CONFLICT_WITH_PEER_LTE_NBCCH_LOW = 17,  /* channel conflict with low priority peer-NBCCH */
    RR_CONFLICT_WITH_PEER_LTE_PCH = 18,        /* channel conflict with peer-PCH */
    RR_CONFLICT_WITH_PEER_LTE_OTHERS = 19      /* channel conflict with peer misc. channels */
} rr_block_monitor_enum;

typedef enum
{
    ONE_ACCESS_BURST_OF_TYPE_8_BITS,
    ONE_ACCESS_BURST_OF_TYPE_11_BITS,
    FOUR_ACCESS_BURST_OF_TYPE_8_BITS,
    FOUR_ACCESS_BURST_OF_TYPE_11_BITS,
    DUMMY_BURST,
    NORMAL_CS_1_RADIO_BLK_BURST,
    NORMAL_CS_2_RADIO_BLK_BURST,
    NORMAL_CS_3_RADIO_BLK_BURST,
    NORMAL_CS_4_RADIO_BLK_BURST,
#ifdef __EGPRS_MODE__
    NORMAL_MCS_1_RADIO_BLK_BURST,
    NORMAL_MCS_2_RADIO_BLK_BURST,
    NORMAL_MCS_3_RADIO_BLK_BURST,
    NORMAL_MCS_4_RADIO_BLK_BURST,
    NORMAL_MCS_5_RADIO_BLK_BURST,
    NORMAL_MCS_6_RADIO_BLK_BURST,
    NORMAL_MCS_7_RADIO_BLK_BURST,
    NORMAL_MCS_8_RADIO_BLK_BURST,
    NORMAL_MCS_9_RADIO_BLK_BURST,
#endif /* __EGPRS_MODE__ */ 

    NORMAL_BURST = NORMAL_CS_1_RADIO_BLK_BURST
} burst_type_enum;

#ifndef __EGPRS_MODE__
typedef enum
{
    PRACH_REQ,
    RACH_REQ
} rach_req_type_enum;
#else /* __EGPRS_MODE__ */ 
typedef enum
{
    PRACH_REQ,
    RACH_REQ,
    E_PRACH_REQ,
    E_RACH_REQ
} rach_req_type_enum;
#endif /* __EGPRS_MODE__ */ 

#ifdef __EGPRS_MODE__
typedef enum
{
    NONE_ATS,
    TS1,
    TS2
} ats_type_enum;
#endif /* __EGPRS_MODE__ */ 

typedef enum
{
    ATC_MANDATORY = 0,
    ATC_OPTIONAL
} handover_atc_enum;

typedef enum
{
    NO_ERROR,
    TA_OUT_OF_RANGE,    /* L1A set this cause in m11125.c */
    T3124_TIMEOUT,
    BLIND_HANDOVER_BSIC_INVALID
} handover_fail_cause_enum;

#ifdef __PS_SERVICE__

typedef enum
{
    TBF_DL,
    TBF_UL,
    TBF_UL_DL,
    NO_TBF
} tbf_dir_enum;

typedef enum
{
    RRBP_BLK,
    CTRL_BLK,
    DATA_BLK,
    DUMMY_BLK
} block_type_enum;

typedef enum
{
    CH_CONNECT_IND_NOT_NEEDED,
    CH_CONNECT_IND_NEEDED
} ch_connect_ind_enum;
#endif /* __PS_SERVICE__ */

#ifdef __GEMINI__
/* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__, Gemini 2.0 */
typedef enum{
    PROTECT_CH_NONE     = 0x0000,
    
    /* CCCH: accesss proecedure */
    PROTECT_CH_RACH     = 0x0001,
    PROTECT_CH_AGCH     = 0x0002,
    PROTECT_CH_PCH      = 0x0004,
    PROTECT_CH_CCCH     = 0x0007, /* CCCH = RACH | AGCH | PCH, for access procedure */

    /* FB+SB: PS HO, PCCO, IR CCO, IRCR */
    PROTECT_CH_FBSB     = 0x0008,

    /* PCCCH: accesss proecedure */
    PROTECT_CH_PRACH    = 0x0010,
    PROTECT_CH_PAGCH    = 0x0020,
    PROTECT_CH_PPCH     = 0x0040,
    PROTECT_CH_PCCCH    = 0x0070, /* PCCCH = PRACH | PAGCH | PPCH, for access procedure */

    /* POLLING RESPONSE timer: for accesss procedure */
    PROTECT_CH_POLLRESP = 0x0080, 

    /* PTMCH: RAU or ATTACH proecedure */
    PROTECT_CH_PDTCH    = 0x0100,
    PROTECT_CH_PACCH    = 0x0200,
    PROTECT_CH_PTCCH    = 0x0400,
    PROTECT_CH_PTMCH    = 0x0700, /* PTMCH = PDTCH | PACCH | PTCCH, for RAU or GPRS attach procedure */

    /* PACCH_SB: UL SB */
    PROTECT_CH_ULSB     = 0x0800,

    /* (N)(P)BCCH: reseleciton proecudre */
    PROTECT_CH_BCCH     = 0x1000,
    PROTECT_CH_NBCCH    = 0x2000,
    PROTECT_CH_PBCCH    = 0x4000,
    PROTECT_CH_NPBCCH   = 0x8000,
    
    /* MIX CHANNEL PROTECTION */
    PROTECT_CH_CCCH_PTMCH = (PROTECT_CH_CCCH | PROTECT_CH_PTMCH), /* For one-phase in PS Session */
    PROTECT_CH_FBSB_PTMCH = (PROTECT_CH_FBSB | PROTECT_CH_PTMCH), /* For Blind PS HO */
    PROTECT_CH_CCCH_ULSB_PTMCH = (PROTECT_CH_CCCH | PROTECT_CH_ULSB | PROTECT_CH_PTMCH), /* For two-phase in PS Session */
    PROTECT_CH_CCCH_ULSB = (PROTECT_CH_CCCH | PROTECT_CH_ULSB), /* For two-phase acesss */
    PROTECT_CH_CCCH_ULSB_POLLRESP = (PROTECT_CH_CCCH | PROTECT_CH_ULSB | PROTECT_CH_POLLRESP) /* For acesss */
} protect_channel_enum;
/* end of __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
#endif /* __GEMINI__ */ 

typedef enum
{
    RR_SPARE_BIT_L,
    RR_SPARE_BIT_H
}
rr_spare_bit_enum;

typedef enum
{
    RR_MSG_DECODE_SUCCESS,
    RR_NO_ERROR,
    RR_IGNORE_MSG,
    RR_UNKNOWN_MSG_IN_ACK,
    RR_MSG_IN_INCOMPATIBLE_STATE,
    RR_SYNT_INCORRECT_MSG,
    RR_UNKNOWN_IE_COMP_REQD,
    RR_OUT_SEQ_IE_COMP_REQD,
    RR_CONDITIONAL_IE_ERROR,
    RR_SEM_INCORRECT_IE
    /* brwang, 06/03/16, [MAUI_00179775] { */
#ifdef __AMR_SUPPORT__
    ,RR_INCONSISTENT_MULTIRATE
#endif
    /* brwang, 06/03/16, [MAUI_00179775] } */  
    /* brwang, 06/03/25, [MAUI_00182129] { */    
    ,RR_CH_MODE_NOT_SUPPORT
    /* brwang, 06/03/25, [MAUI_00182129] } */    
    /* brwang, 20070205, [error handling of HO from UTRAN] { */    
    ,RR_CA_NOT_AVAILABLE
    /* brwang, 20070205, [error handling of HO from UTRAN]  } */  
    /* brwang, 20070408, to check if cipher mode setting is contained in HO from UTRAN */
    ,RR_CIPHER_MODE_IE_NOT_RECEIVED
    ,RR_CIPHER_STATUS_INCONSISTENT
    ,RR_FREQ_NOT_IMPLEMENTED
}
rr_gsm_ret_code;

#ifdef __NBR_CELL_INFO__
typedef enum
{
    RR_NBR_CELL_INFO_IND,
    RR_NBR_CELL_INFO_CNF
}
rr_nbr_cell_info_report_type;
#endif /* __NBR_CELL_INFO__ */ 

typedef enum
{
    TO_SRV_CELL_SI_CNTX = 0,
    TO_NBR_TARGET_CELL_SI_CNTX = 1,
    TO_SRV_CELL_PSI_CNTX = 2,
    TO_MEAS_CNTX = 3,
    TO_RMC_CNTX = 4
} target_context_enum;

typedef enum
{
    RMPC_OLD_CELL,
    RMPC_NEW_CELL,
    RMPC_INVALID_CELL
} RMPC_CELL_SELECTION_TYPE;

typedef enum
{
    RMPC_HPLMN_START,
    RMPC_HPLMN_STOP
} HPLMN_SRCH_TYPE;

typedef enum
{
    SI_INFO_INVALID = 0,
    SI_INFO_VALID
}
SI_INFO_TYPE;

/* Claire 040407 change: Store SI13 row data when SI1 is not received yet */
typedef enum
{
    SI_GROUP_NONE = 0,
    SI_GROUP_SERVING_CELL,
    SI_GROUP_TARGET_CELL
}
SI_GROUP_ID;

typedef enum
{
    BA_STATE_NOT_COMPLETE,
    BA_STATE_COMPLETE,
    BA_STATE_FULL,
    BA_STATE_FULL_PLUS_BSIC_INFO
} BA_STATE_ENUM;

#ifdef __GERAN_R6__
typedef enum
{
    SI2N_NOT_SUPPORTED,
    SI2N_ON_PACCH,
    SI2N_ON_PACCH_AND_BCCH_NORM,
    SI2N_ON_PACCH_AND_BCCH_EXT
} SI2N_SUPPORT;
#endif /* __GERAN_R6__ */ 

typedef enum
{
    SERVICE_TYPE_GSM,
    SERVICE_TYPE_GPRS
} service_type_enum;

typedef enum
{
    SI_DECODE_FAIL  = 0,
    SI_DECODE_SUCC  = 1,
    SI_NOT_COMPLETE = 2,    /* only for SI2q and SI2n */
    SI_QUEUED       = 3     /* queued for waiting SI1 or SI2 */
} SI_DECODE_STATUS_ENUM;

typedef enum
{
    TC0,
    TC1,
    TC2,
    TC3,
    TC4,
    TC5,
    TC6,
    TC7,
    TC_NONE
}
tc_on_bcch_enum;

typedef enum
{
    CBCH_CHAN_DESC = 0x64,
    CBCH_MOBILE_ALLOC = 0x72
} iei_enum_type;

typedef enum
{
    BAR_REMOVE_NONE,
    BAR_REMOVE_OTHER,
    BAR_REMOVE_TIMEOUT,
}
bar_remove_enum;


typedef enum
{
    BAR_TYPE_NONE,
    BAR_TYPE_TEST,
    BAR_TYPE_AUTHFAIL,
    BAR_TYPE_REJ,
    BAR_TYPE_RACHFAIL,
    BAR_TYPE_FOREVER,
}
bar_type_enum;

typedef enum
{
    PEER_SERVICE_NONE,
    PEER_SERVICE_HPS,
    PEER_SERVICE_PS,
	PEER_SERVICE_CS,
	PEER_SERVICE_MPS
} peer_service_type;

#if (defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__))
typedef enum                     
{
    EM_TO_ELT, //replace EM_FROM_CATCHER
    EM_TO_RMMI, /* tommy add for RMMI EM support */
    EM_TO_BOTH,
    EM_TO_NONE
} em_dest_enum;
#endif  /* (defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__)) */

#endif /* _RR_COMMON_ENUMS_H */
