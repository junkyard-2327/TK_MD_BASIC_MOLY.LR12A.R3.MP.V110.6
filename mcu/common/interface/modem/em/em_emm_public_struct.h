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
 *   em_emm_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_EMM_PUBLIC_STRUCT_H
#define _EM_EMM_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "em_nwsel_common_public_struct.h"

/********************* begin of EMM definition ****************************/

typedef enum
{
    EM_EMM_EU1_UPDATE = 0,
    EM_EMM_EU2_NOT_UPDATE,
    EM_EMM_EU3_ROAMING_NOT_ALLOWED
} em_emm_update_status_enum;

typedef enum
{
    EM_EMM_SIM_REMOVE,
    EM_EMM_SIM_INVALID,
    EM_EMM_SIM_VALID,
} em_emm_sim_status_enum;

typedef enum
{
    EM_EMM_TIN_DELETED    = 0,
    EM_EMM_TIN_PTMSI,
    EM_EMM_TIN_RAT_RELATED_TMSI,
    EM_EMM_TIN_GUTI
} em_emm_tin_enum;

typedef struct
{
    plmn_struct  plmn_id;
    kal_uint8   mme_gid[2];
    kal_uint8   mme_code;
    kal_uint8   mtmsi[4];
} em_emm_guti_struct;

typedef enum
{
    EM_ECM_IDLE=0,
    EM_ECM_CONNECTED
}em_emm_ecm_status_enum;

typedef enum
{
    EM_NORMAL_CELL    = 0,
    EM_CSG_CELL,
    EM_HYBRID_CELL
} em_csg_access_mode_enum;

typedef enum
{
    EM_DUPLEX_TYPE_FDD    = 0,
    EM_DUPLEX_TYPE_TDD,
    EM_DUPLEX_TYPE_UNKNOWN
} em_lte_duplex_type_enum;

typedef enum
{
    EM_TYPE_NONE                    = 0,
    EM_TYPE_SERVICE_REQ,
    EM_TYPE_EXTENDED_SERVICE_REQ,
    EM_TYPE_MAX
} em_sr_type_enum;

// RRC Establishment cause mapping (valid for R11 and earlier implementations)
typedef enum
{
    EM_CAUSE_MO_SIGNAL              = 0,
    EM_CAUSE_MO_DATA,
    EM_CAUSE_MT,
    EM_CAUSE_EMERGENCY,
    EM_CAUSE_MO_CSFB,
    EM_CAUSE_MO_MMTEL_VOICE,
    EM_CAUSE_MO_MMTEL_VIDEO,
    EM_CAUSE_MO_SMS,
    EM_CAUSE_INVALID
} em_sr_cause_enum;

// RRC Establishment cause mapping (valid from R12 implementation onwards)
typedef enum
{
    EM_EST_CAUSE_MO_SIGNAL              = 0,
    EM_EST_CAUSE_MO_DATA,
    EM_EST_CAUSE_MT_ACCESS,
    EM_EST_CAUSE_EMERGENCY,
    EM_EST_CAUSE_DELAY_TOLERANT,
    EM_EST_CAUSE_INVALID
} em_sr_est_cause_enum;

// RRC Establishment type mapping (valid from R12 implementation onwards)
typedef enum
{
    EM_EST_TYPE_MO_SIGNAL              = 0,
    EM_EST_TYPE_MO_DATA,
    EM_EST_TYPE_MT,
    EM_EST_TYPE_EMERGENCY,
    EM_EST_TYPE_MO_CSFB,
    EM_EST_TYPE_MO_MMTEL_VOICE,
    EM_EST_TYPE_MO_MMTEL_VIDEO,
    EM_EST_TYPE_MO_SMS,
    EM_EST_TYPE_INVALID
} em_sr_est_type_enum;

typedef enum
{
    EM_MO_CSFB_TYPE_INVALID         = 0,
    EM_MO_CSFB_TYPE_NORMAL_CALL,
    EM_MO_CSFB_TYPE_EMERGENCY_CALL,
    EM_MO_CSFB_TYPE_SS,
    EM_MO_CSFB_TYPE_LCS,
    EM_MO_CSFB_TYPE_RESERVED
} em_mo_csfb_cause_enum;

typedef enum
{
    EM_MT_CSFB_PAGING_ID_INVALID    = 0,
    EM_MT_CSFB_PAGING_ID_IMSI,
    EM_MT_CSFB_PAGING_ID_TMSI
} em_mt_csfb_paging_id_enum;

typedef enum
{
    EM_EMM_CAUSE_CAUSE_NONE = 0x00,
    EM_EMM_CAUSE_IMSI_UNKNOWN_IN_HSS    = 0x02,
    EM_EMM_CAUSE_ILLEGAL_UE    = 0x03,
    EM_EMM_CAUSE_IMEI_NOT_ACCEPTED    = 0x05,
    EM_EMM_CAUSE_ILLEGAL_ME    = 0x06,
    EM_EMM_CAUSE_EPS_NOT_ALLOWED    = 0x07,
    EM_EMM_CAUSE_EPS_NON_EPS_NOT_ALLOWED    = 0x08,
    EM_EMM_CAUSE_UE_ID_NOT_DERIVED_BY_NW    = 0x09,
    EM_EMM_CAUSE_IMPLICIT_DETACH    = 0x0a,
    EM_EMM_CAUSE_PLMN_NOT_ALLOWED    = 0x0b,
    EM_EMM_CAUSE_TA_NOT_ALLOWED    = 0x0c,
    EM_EMM_CAUSE_ROAMING_NOT_ALLOWED_IN_TA    = 0x0d,
    EM_EMM_CAUSE_EPS_NOT_ALLOWED_IN_PLMN    = 0x0e,
    EM_EMM_CAUSE_NO_SUITABLE_CELL_IN_TA    = 0x0f,
    EM_EMM_CAUSE_MSC_NOT_REACHABLE    = 0x10,
    EM_EMM_CAUSE_NW_FAILURE    = 0x11,
    EM_EMM_CAUSE_CS_NOT_AVAILABLE    = 0x12,
    EM_EMM_CAUSE_ESM_FAILURE    = 0x13,
    EM_EMM_CAUSE_MAC_FAILURE    = 0x14,
    EM_EMM_CAUSE_SYNCH_FAILURE    = 0x15,
    EM_EMM_CAUSE_CONGESTION    = 0x16,
    EM_EMM_CAUSE_UE_SEC_CAPA_MISMATCH    = 0x17,
    EM_EMM_CAUSE_SEC_MODE_REJ_UNSPECIFIED    = 0x18,
    EM_EMM_CAUSE_NOT_AUTH_FOR_CSG    = 0x19,
    EM_EMM_CAUSE_NON_EPS_AUTH_UNACCEPTABLE    = 0x1a,
    EM_EMM_CAUSE_REQUEST_SERVICE_OPTION_NOT_AUTHORIZED_IN_PLMN = 0x23,
    EM_EMM_CAUSE_CS_TEMP_NOT_AVAILABLE    = 0x27,
    EM_EMM_CAUSE_NO_EPS_CTXT_ACT    = 0x28,
    EM_EMM_CAUSE_SEVERE_NW_FAILURE    = 0x2a,
    EM_EMM_CAUSE_SEMANTIC_INCORRECT    = 0x5f,
    EM_EMM_CAUSE_INVALID_MANDATORY_INFO    = 0x60,
    EM_EMM_CAUSE_MSG_TYPE_NOT_EXIST    = 0x61,
    EM_EMM_CAUSE_MSG_TYPE_NOT_COMPATIBLE    = 0x62,
    EM_EMM_CAUSE_IE_NOT_EXIST    = 0x63,
    EM_EMM_CAUSE_CONDITIONAL_IE_ERROR    = 0x64,
    EM_EMM_CAUSE_MESSAGE_NOT_COMPATIBLE    = 0x65,
    EM_EMM_CAUSE_PROTOCOL_ERROR    = 0x6f,

    EM_EMM_CAUSE_FORBIDDEN_PLMN                    = 0x70,
    EM_EMM_CAUSE_NO_COVERAGE                       = 0x72,
    EM_EMM_CAUSE_EPS_SERV_NOT_ALLOWED              = 0x73,
    EM_EMM_CAUSE_SIM_REMOVED                       = 0x76,
    EM_EMM_CAUSE_SIM_INVALID_FOR_PS                = 0x78,
    EM_EMM_CAUSE_SIM_INVALID_FOR_CS                = 0x79,
    EM_EMM_CAUSE_SIM_INVALID_FOR_CS_AND_PS         = 0x80,
    EM_EMM_CAUSE_EAS_IN_SUSPEND_MODE               = 0x8b,
    EM_EMM_CAUSE_LIMITED_SERVICE                   = 0x8d,
    EM_EMM_CAUSE_SIM_INVALID_FOR_LTE_BECAUSE_NON_USIM_INSERTED = 0x8f,
    EM_EMM_CAUSE_OOS_IND   = 0x90
} em_emm_cause_enum;


typedef enum
{
    EM_EMM_ATTACH_TYPE_INVALID = 0,
    EM_EMM_ATTACH_TYPE_EPS_ATTACH    = 1,
    EM_EMM_ATTACH_TYPE_COMBINED_ATTACH    = 2,
    EM_EMM_ATTACH_TYPE_EMERGENCY_ATTACH    = 6
} em_emm_attach_type_enum;

typedef enum
{
    EM_EMM_ATTACH_RESULT_EPS_ONLY_ATTACHED    = 1,
    EM_EMM_ATTACH_RESULT_COMBINED_ATTACHED
} em_emm_attach_result_enum;

typedef enum
{
    EM_EMM_TYPE_NO_ADDITIONAL_INFO = 1,
    EM_EMM_TYPE_SMS_ONLY
}em_emm_additional_update_type_enum;

typedef enum
{
    EM_EMM_RESULT_NO_ADDITIONAL_INFO = 0,
    EM_EMM_RESULT_CSFB_NOT_PREFERRED = 1,
    EM_EMM_RESULT_SMS_ONLY           = 2
}em_emm_additional_update_result_enum;

typedef enum
{
    EM_EMM_UPDATE_TYPE_TAU    = 0,
    EM_EMM_UPDATE_TYPE_COMBINED_TAU,
    EM_EMM_UPDATE_TYPE_COMBINED_TAU_IMSI_ATTACH,
    EM_EMM_UPDATE_TYPE_PERIODIC_TAU,
    EM_EMM_UPDATE_TYPE_INVALID
} em_emm_update_type_enum;

typedef enum
{
    EM_EMM_UPDATE_RESULT_TA_UPDATED = 0,
    EM_EMM_UPDATE_RESULT_COMBINED_UPDATED = 1,
    EM_EMM_UPDATE_RESULT_TA_UPDATED_ISR_ACTIVATED = 4,
    EM_EMM_UPDATE_RESULT_COMBINED_UPDATED_ISR_ACTIVATED = 5,
    EM_EMM_UPDATE_RESULT_INVALID
} em_emm_update_result_enum;

typedef enum
{
    EM_EMM_USER_DETACH_EPS_DETACH  = 1,
    EM_EMM_USER_DETACH_IMSI_DETACH ,
    EM_EMM_USER_DETACH_COMBINED_EPS_IMSI_DETACH
}em_emm_user_detach_type_enum;

typedef enum
{
    EM_EMM_NW_DETACH_TYPE_RE_ATTACH_REQUIRED = 1,
    EM_EMM_NW_DETACH_TYPE_RE_ATTACH_NOT_REQUIRED,
    EM_EMM_NW_DETACH_TYPE_IMSI_DETACH
}em_emm_nw_detach_type_enum;

typedef enum
{
    EM_EMM_IMS_VOICE_OVER_PS_SESSION_IN_S1_MODE_NOT_SUPPORT = 0,
    EM_EMM_IMS_VOICE_OVER_PS_SESSION_IN_S1_MODE_SUPPORT
}em_emm_ims_service_ind_enum;

typedef enum
{
    EM_EMM_EMERGENCY_BEARER_SERVICE_IN_S1_MODE_NOT_SUPPORT = 0,
    EM_EMM_EMERGENCY_BEARER_SERVICE_IN_S1_MODE_SUPPORT
}em_emm_emergency_service_ind_enum;

typedef enum
{
    EM_EMM_ATTACH_NEEDED = 0,
    EM_EMM_ATTACH_REQUEST,
    EM_EMM_ATTACH_COMPLETE,
    EM_EMM_ATTACH_SUCCESS,
    EM_EMM_23G_ATTACH_SUCCESS
}em_emm_attach_status;

typedef enum
{
    EM_EMM_TAU_ONGOING_BEFORE_TAU_REQ = 0,
    EM_EMM_TAU_REQUEST,
    EM_EMM_TAU_COMPLETE,
    EM_EMM_TAU_SUCCESS,
    EM_EMM_TAU_FAIL,
    EM_EMM_TAU_NO_TAU_EVER
}em_emm_tau_status;

//Sync from EMM internal cause
//emm_call_fail_trigger_enum
typedef enum
{
    EM_EMM_CALL_FAIL_TRIG_SUCCESS  = 0,
    EM_EMM_CALL_FAIL_TRIG_EST_FAIL = 1,
    EM_EMM_CALL_FAIL_TRIG_REL_IND  = 2,
    EM_EMM_CALL_FAIL_TRIG_RETRANS  = 3,
    EM_EMM_CALL_FAIL_TRIG_REJECT   = 4,
    EM_EMM_CALL_FAIL_TRIG_T3417TO  = 9,
    EM_EMM_CALL_FAIL_TRIG_AC_BARRED= 15,
    EM_EMM_CALL_FAIL_TRIG_AUTH_REJ = 17,
} em_emm_call_fail_trigger_enum;

//Sync from EMM internal cause
//emm_call_est_cause_enum
typedef enum
{
    EM_EMM_CALL_EST_CAUSE_SUCCESS           =  0,
    EM_EMM_CALL_EST_CAUSE_AC_BARRED         =  1,
    EM_EMM_CALL_EST_CAUSE_NW_REJ_CONN       =  2,
    EM_EMM_CALL_EST_CAUSE_CONN_FAIL         =  3,
    EM_EMM_CALL_EST_CAUSE_AC_BARRED_MO_CSFB = 11,
    EM_EMM_CALL_EST_CAUSE_CONGESTION        = 12,
} em_emm_call_est_cause_enum;

//Sync from EMM internal cause
//emm_call_rel_cause_enum
typedef enum
{
    EM_EMM_CALL_REL_CAUSE_REL_OTHER         =  1,
    EM_EMM_CALL_REL_CAUSE_REEST_FAIL        =  2,
    EM_EMM_CALL_REL_CAUSE_REEST_CSFB_HIGH   =  3,
    EM_EMM_CALL_REL_CAUSE_REEST_LOCAL_REL   =  5,
} em_emm_call_rel_cause_enum;

//Sync from EMM internal cause
//emm_call_ignore_paging_cause_enum
typedef enum
{
    EM_EMM_CALL_IGNORE_PAGING_NONE                  =  0,
    EM_EMM_CALL_IGNORE_PAGING_UNEXPECTED_TYPE       =  1,
    EM_EMM_CALL_IGNORE_PAGING_IMS_CALL_ONGOING      =  2,
    EM_EMM_CALL_IGNORE_PAGING_CS_NOT_ALLOW          =  3,
    EM_EMM_CALL_IGNORE_PAGING_ID_ERROR              =  4,
    EM_EMM_CALL_IGNORE_PAGING_NOT_SUITABLE_CELL     =  5,
    EM_EMM_CALL_IGNORE_PAGING_NO_CS_INSTANCE        =  6,
    EM_EMM_CALL_IGNORE_PAGING_INTERRAT              =  7,
    EM_EMM_CALL_IGNORE_PAGING_TMSI_ERROR            =  8,
    EM_EMM_CALL_IGNORE_PAGING_WAIT_ATTACH_END       =  9,
    EM_EMM_CALL_IGNORE_PAGING_RSIM_AUTH_DOWNLOAD    =  10,
} em_emm_call_ignore_paging_cause_enum;

typedef enum
{
    EM_EMM_MAINSTATE_EMM_NULL = 0,
    EM_EMM_MAINSTATE_EMM_DEREGISTERED,
    EM_EMM_MAINSTATE_EMM_DEREGISTERED_INITIATED,
    EM_EMM_MAINSTATE_EMM_REGISTERED,
    EM_EMM_MAINSTATE_EMM_REGISTERED_INITIATED,
    EM_EMM_MAINSTATE_EMM_TRACKING_AREA_UPDATING_INITIATED,
    EM_EMM_MAINSTATE_EMM_SERVICE_REQUEST_INITIATED
} em_emm_mainstate_enum;

typedef enum
{
    EM_EMM_SUBSTATE_INVALID = 0,
    EM_EMM_SUBSTATE_NORMAL_SERVICE,
    EM_EMM_SUBSTATE_LIMITED_SERVICE,
    EM_EMM_SUBSTATE_ATTEMPTING_TO_ATTACH,
    EM_EMM_SUBSTATE_PLMN_SEARCH,
    EM_EMM_SUBSTATE_NO_IMSI,
    EM_EMM_SUBSTATE_ATTACH_NEEDED,
    EM_EMM_SUBSTATE_NO_CELL_AVAILABLE,
    EM_EMM_SUBSTATE_ATTEMPTING_TO_UPDATE,
    EM_EMM_SUBSTATE_UPDATE_NEEDED,
    EM_EMM_SUBSTATE_ATTEMPTING_TO_UPDATE_MM,
    EM_EMM_SUBSTATE_IMSI_DETACH_INITIATED
} em_emm_substate_enum;

typedef enum {
    EMM_EM_TIMERMNG_TINVALID = 0,
    EMM_EM_TIMERMNG_T3410,
    EMM_EM_TIMERMNG_T3346
} emm_em_timermng_timer_id_enum;

typedef struct
{
    plmn_struct plmn_id;
    kal_uint8 lac[2];
}em_emm_lai_struct;

typedef enum
{
    EM_EMM_CAUSE_FROM_NONE = 0,
    EM_EMM_CAUSE_FROM_ATTACH_REJECT,
    EM_EMM_CAUSE_FROM_TAU_REJECT,
    EM_EMM_CAUSE_FROM_SERVICE_REJECT,
    EM_EMM_CAUSE_FROM_DETACH_REQUEST,
    EM_EMM_CAUSE_FROM_ATTACH_ACCEPT,
    EM_EMM_CAUSE_FROM_TAU_ACCEPT,
} em_emm_cause_source_enum;

typedef enum
{
	EMMREG_IMSI = 1,
	EMMREG_NATIVE_GUTI,
	EMMREG_MAPPED_GUTI,
	EMMREG_IMEI
}em_emm_reg_eps_mobile_identity_type_enum;

typedef enum
{
	EMMREG_NO_ADDITIONAL_INFO = 1,
	EMMREG_SMS_ONLY
}em_emm_reg_additional_update_type_enum;

typedef enum
{
	EMMREG_LAST_ATT_NONE = 0,
	EMMREG_LAST_ATT_EPS_ATT_SUCCESS,
	EMMREG_LAST_ATT_COMB_ATT_SUCCESS,
	EMMREG_LAST_ATT_COMB_ATT_BUT_EPS,
	EMMREG_LAST_ATT_ATT_REJECT,
	EMMREG_LAST_ATT_COMB_ATT_CAUSE_OTHER,
	EMMREG_LAST_ATT_ATT_ACCPT_FAIL,
	EMMREG_LAST_ATT_ATT_ACCPT_INVALID,
	EMMREG_LAST_ATT_ABNORAMAL_LOWER_LAYER_FAILURE,
	EMMREG_LAST_ATT_ABNORAMAL_T3410_TIMEOUT,
	EMMREG_LAST_ATT_ABNORAMAL_ATT_REQ_NEW_TA,
	EMMREG_LAST_ATT_ABNORAMAL_ATT_ACCPT_NEW_TA,
	EMMREG_LAST_ATT_ABNORAMAL_ATT_COMP_NEW_TA,
	EMMREG_LAST_ATT_ABNORAMAL_ATT_REQ_SEND_FAIL,
	EMMREG_LAST_ATT_ABNORAMAL_ATT_COMP_SEND_FAIL,
	EMMREG_LAST_ATT_ABNORAMAL_MO_DETACH,
	EMMREG_LAST_ATT_ABNORAMAL_MT_DETACH,
	EMMREG_LAST_ATT_ABNORAMAL_ESM_DETACH,
	EMMREG_LAST_ATT_ATT_REQ_RAT_CHANGE,
	EMMREG_LAST_ATT_ATT_COMP_RAT_CHANGE,
	EMMREG_LAST_ATT_WRAP_AROUND,
	EMMREG_LAST_ATT_AUTH_REJECT,
	EMMREG_LAST_ATT_COMMPROC_FAILURE,
	EMMREG_LAST_ATT_E2UG_SUCCESS,
	EMMREG_LAST_ATT_ABORT
}em_emm_reg_last_attach_result_enum;	

typedef enum
{
	EMMREG_NOTATT_INITIAL = 0,
	EMMREG_NOTATT_USIM_REMOVED,
	EMMREG_NOTATT_USIM_REMOVING,
	EMMREG_NOTATT_USIM_INVALID,
	EMMREG_NOTATT_WAIT_UG2E_FINISH,
	EMMREG_NOTATT_WAIT_NW_RELEASING,
	EMMREG_NOTATT_WAIT_ATTACH_REQ,
	EMMREG_NOTATT_NOT_ACTIVE_RAT,
	EMMREG_NOTATT_WAIT_E2UG_FINISH,
	EMMREG_NOTATT_WAIT_NEW_CELL_INFO,
	EMMREG_NOTATT_WAIT_SUITABLE_CELL,
	EMMREG_NOTATT_WAIT_CONTINUE_REQ,
	EMMREG_NOTATT_WAIT_TIMER_TIMEOUT,
	EMMREG_NOTATT_WAIT_AC_BAR_END,
	EMMREG_NOTATT_WAIT_ESM_MSG,
	EMMREG_NOTATT_WAIT_PLMNSEL_SELECTION_FINISH,
	EMMREG_NOTATT_WAIT_CONN_RELEASING,
// #ifdef __REL10__ // t3346
	EMMREG_NOTATT_WAIT_T3346_END,
// #endif
	EMMREG_NOTATT_ESM_MSG_IGNORE,
	EMMREG_NOTATT_EVTCTRL_SUSPEND,
	EMMREG_NOTATT_EVTCTRL_REJECT,
	EMMREG_NOTATT_CONN_FAIL_CEL_RESEL,
	EMMREG_NOTATT_CONN_FAIL_IRCR,
	EMMREG_NOTATT_CONN_FAIL_IDLE_OOS,
	EMMREG_NOTATT_CONN_FAIL_AC_BAR,
	EMMREG_NOTATT_CONN_FAIL_NW_REJECT,
	EMMREG_NOTATT_CONN_PEND_ACCPTABLE_CELL,
	EMMREG_NOTATT_CONN_PEND_NO_CELL,
	EMMREG_NOTATT_MO_DETACH,
	EMMREG_NOTATT_ENCODE_ATT_REQ_FAILURE,
	EMMREG_NOTATT_ABORT,
	EMMREG_NOTATT_E2UG_SUCCESS,
	EMMREG_NOTATT_SUCCESS
}em_emm_reg_not_att_reason_enum;	

typedef enum
{
    EMMREG_STATUS_INITIAL = 0,
    EMMREG_STATUS_ATTACH_NEEDED,
    EMMREG_STATUS_ATTACH_REQUEST,
    EMMREG_STATUS_ATTACH_COMPLETE,
    EMMREG_STATUS_TAU_START,
    EMMREG_STATUS_TAU_REQUEST,
    EMMREG_STATUS_TAU_COMPLETE,
    EMMREG_STATUS_23G_ATTACH_SUCCESS,
    EMMREG_STATUS_PROC_FINISH
}em_emm_reg_proc_status_enum;

typedef enum
{
    EMMREG_USER_DETACH_TYPE_NONE = 0,
    EMMREG_USER_DETACH_TYPE_EPS_DETACH,
    EMMREG_USER_DETACH_TYPE_IMSI_DETACH,
    EMMREG_USER_DETACH_TYPE_EPS_IMSI_DETACH    
}em_emm_reg_user_detach_type_enum;

typedef enum
{
    EMMREG_NW_DETACH_TYPE_NONE = 0,
    EMMREG_NW_DETACH_TYPE_RE_ATTACH_REQUIRED,
    EMMREG_NW_DETACH_TYPE_RE_ATTACH_NOT_REQUIRED,
    EMMREG_NW_DETACH_TYPE_IMSI_DETACH
}em_emm_reg_nw_detach_type_enum;

typedef enum
{
	EMMREG_DEREG_NONE = 0,
	EMMREG_DEREG_USER_DETACH_SUCCESS,
	EMMREG_DEREG_NW_DETACH_SUCCESS,
	EMMREG_DEREG_NW_USER_DETACH_SUCCESS,
	EMMREG_DEREG_LOCAL_DET_NOT_EU1,
	EMMREG_DEREG_LOCAL_DET_ACCEPTABLE_CELL,
	EMMREG_DEREG_LOCAL_DET_NO_CELL,
	EMMREG_DEREG_LOCAL_DET_AC_BAR,
	EMMREG_DEREG_LOCAL_DET_THROTTLING_TIMER_ACTIVE,
	EMMREG_DEREG_LOCAL_DET_PLMNSEL_SEARCHING,
	EMMREG_DEREG_LOCAL_DET_TAU_BUT_SIM_DET,
	EMMREG_DEREG_LOCAL_DET_TDETACH_TIMEOUT,
	EMMREG_DEREG_LOCAL_DET_CONN_FAIL_AC_BAR,
	EMMREG_DEREG_LOCAL_DET_CONN_FAIL_NW_REJECT,
	EMMREG_DEREG_LOCAL_DET_CONN_FAIL_IDLE_OOS,
	EMMREG_DEREG_LOCAL_DET_CONN_FAIL_GEMINI,
	EMMREG_DEREG_LOCAL_DET_CONN_FAIL_OTHER,
	EMMREG_DEREG_LOCAL_DET_CONN_ACCEPTABLE_CELL,
	EMMREG_DEREG_LOCAL_DET_CONN_NO_CELL,
	EMMREG_DEREG_LOCAL_DET_LOWER_LAYER_FAILURE,
	EMMREG_DEREG_LOACL_DET_COUNTER_MAX,
	EMMREG_DEREG_LOCAL_DET_NEW_TA_BUT_SIM_DET,
	EMMREG_DEREG_LOCAL_DET_ENCODE_DET_REQ_FAILURE,
	EMMREG_DEREG_LOCAL_DET_UNREGISTED,
	EMMREG_DEREG_LOCAL_DET_NEW_TA_BUT_UNREGISTED,
	EMMREG_DEREG_LOCAL_DET_ESM_DET_BUT_E2UG,
	EMMREG_DEREG_LOCAL_DET_ABORT,
	EMMREG_DEREG_LOCAL_DET_TAU_FAILURE_DETACH_PENDING,
	EMMREG_DEREG_LOCAL_DET_TAU_NEW_TA,
	EMMREG_DEREG_LOCAL_DET_RETRY_TAU,
	EMMREG_DEREG_LOCAL_DET_NW_DET_NEW_TA,
	EMMREG_DEREG_LOCAL_DET_NW_DET_ACCEPTABLE_CELL,
	EMMREG_DEREG_LOCAL_DET_SR_REJECT_DETACH_PENDING,
	EMMREG_DEREG_SR_REJECT,
	EMMREG_DEREG_LOCAL_DET_IMSI_PAGING,
	EMMREG_DEREG_LOCAL_DET_WRAP_AROUND,
	EMMREG_DEREG_LOCAL_DET_AUTH_REJECT,
	EMMREG_DEREG_TAU_REJECT,
	EMMREG_DEREG_E2UG_SUCCESS,
	EMMREG_DEREG_ESM_LOCAL_DET_AND_REAATACH,
	EMMREG_DEREG_MO_DETACH_IN_DEREG,
	EMMREG_DEREG_2G3G_ENTER_DEREG,
	EMMREG_DEREG_LOCAL_DET_AUTH_TRIGGER_END_DETACH,
	EMMREG_DEREG_LOCAL_DET_MT_CSFB_TO_3GRAT
}em_emm_reg_dereg_reason_enum;

typedef enum
{
	EMMREG_LAST_TAU_NONE = 0,
	EMMREG_LAST_TAU_NORMAL_TAU_SUCCESS,
	EMMREG_LAST_TAU_COMB_TAU_SUCCESS,
	EMMREG_LAST_TAU_COMB_TAU_BUT_EPS,
	EMMREG_LAST_TAU_COMB_TAU_CAUSE_OTHER,
	EMMREG_LAST_TAU_TAU_REJECT,
	EMMREG_LAST_TAU_TAU_ACCPT_FAIL,
	EMMREG_LAST_TAU_TAU_ACCPT_INVALID,
	EMMREG_LAST_TAU_ABNORMAL_LOWER_LAYER_FAILURE,
	EMMREG_LAST_TAU_ABNORMAL_T3430_TIMEOUT,
	EMMREG_LAST_TAU_ABNORMAL_TAU_REQ_NEW_TA,
	EMMREG_LAST_TAU_ABNORMAL_TAU_COMP_NEW_TA,
	EMMREG_LAST_TAU_ABNORMAL_TAU_REQ_SEND_FAIL,
	EMMREG_LAST_TAU_ABNORMAL_TAU_COMP_SEND_FAIL,
	EMMREG_LAST_TAU_ABNORMAL_TAU_BUT_MT_DETACH,
	EMMREG_LAST_TAU_ABNORMAL_TAU_BUT_MO_DETACH,
	EMMREG_LAST_TAU_ABNORMAL_TAU_BUT_LOCAL_DETACH,
	EMMREG_LAST_TAU_TAU_REQ_RAT_CHANGE,
	EMMREG_LAST_TAU_TAU_COMP_RAT_CHANGE,
	EMMREG_LAST_TAU_WRAP_AROUND,
	EMMREG_LAST_TAU_AUTH_REJECT,
	EMMREG_LAST_TAU_COMMPROC_FAILURE,
	EMMREG_LAST_TAU_ABORT,
	EMMREG_LAST_TAU_E2UG_SUCCESS
}em_emm_reg_last_tau_result_enum;	

typedef enum
{
	EMMREG_NOTTAU_INITIAL = 0,
	EMMREG_NOTTAU_NOT_ACTIVE_RAT,
	EMMREG_NOTTAU_E2UG,
	EMMREG_NOTTAU_WAIT_NEW_CELL_INFO,
	EMMREG_NOTTAU_LOCAL_DETACH,
	EMMREG_NOTTAU_ACCEPTABLE_CELL,
	EMMREG_NOTTAU_NO_CELL,
	EMMREG_NOTTAU_TAU_BUT_MO_DETACH,
	EMMREG_NOTTAU_CONN_RELEASING,
	EMMREG_NOTTAU_AC_BAR,
	EMMREG_NOTTAU_WAIT_THROTTLING_TIMER_TIMEOUT,
	EMMREG_NOTTAU_WAIT_T3402_TIMEOUT,
	EMMREG_NOTTAU_EVTCTRL_SUSPEND,
	EMMERG_NOTTAU_EVTCTRL_REJECT,
	EMMREG_NOTTAU_WAIT_PLMNSEL_SELECTION_FINISH,
	EMMREG_NOTTAU_PERIODIC_TAU_BUT_EXSR,
	EMMREG_NOTTAU_CONN_PEND_BY_OTHER,
	EMMREG_NOTTAU_CONN_FAIL_CEL_RESEL,
	EMMREG_NOTTAU_CONN_FAIL_IRCR,
	EMMREG_NOTTAU_CONN_FAIL_AC_BAR,
	EMMREG_NOTTAU_CONN_FAIL_NW_REJECT,
	EMMREG_NOTTAU_CONN_FAIL_IDLE_OOS,
	EMMREG_NOTTAU_CONN_PEND_ACCPTABLE_CELL,
	EMMREG_NOTTAU_CONN_PEND_NO_CELL,
	EMMREG_NOTTAU_ENCODE_TAU_REQ_FAILURE,
	EMMREG_NOTTAU_ABORT,
	EMMREG_NOTTAU_WRAP_AROUND,
	EMMREG_NOTTAU_IMSI_PAGING,
	EMMREG_NOTTAU_LOW_LAYER_FAILURE,
	EMMREG_NOTTAU_PERIODIC_TAU_CANCEL,
	EMMREG_NOTTAU_AUTH_REJECT,
	EMMREG_NOTTAU_MT_DETACH,
	EMMREG_NOTTAU_E2UG_SUCCESS,
	EMMREG_NOTTAU_SUCCESS
}em_emm_reg_not_tau_reason_enum;	

typedef struct
{
	/* indicate if power down detach is triggered or not */
	kal_bool 							powerDownDetach;

	/* indicate if SIM detach is triggered or not */
	kal_bool 							simDetach;

	/* indicate if EPS detach or combined EPS detach is triggered or not */
	kal_bool 							epsDetach;

	/* indicate if ESM detach is triggered or not */
	kal_bool 							esmDetach;

	/* indicate if RB detach is triggered or not */
	kal_bool 							rbDetach;

	/* indicate if IMSI detach is triggered or not */
	kal_bool 							imsiDetach;

	/* calculated detach type to construct DETACH-REQUEST to network */
	em_emm_reg_user_detach_type_enum 	detachType;
}em_emm_reg_user_detach_type_struct;

typedef struct
{
    kal_bool                    imsiDetach;
    
    kal_bool                    tauGmmstateCombinedIMSI;
    
    kal_bool                    regFailCauseOfImsiAtt;
    
    kal_bool                    periodicTimerTimeoutCovOut;
    
    kal_bool                    enterCsPsMode;
    
}em_emm_reg_combined_tau_info_type_struct;

typedef struct
{
	/* trigger TAU because change into a new TAI not in TAI list or target
	* TAI (abnorma case).
	*
	* Priority(V.S. PS detach): High
	* Reason: The registration status is not valid for NW.
	* PS detach conflict result: TAU first, then PS detach
	*/
	kal_bool movedInTai;

	/* trigger TAU because connection is released with load balancing
	*
	* Priority(V.S. PS detach): High
	* Reason: Load balancing is kind of meaning that the registration status
	* is not valid for current MME
	* PS detach conflict result: TAU first, then PS detach
	*/
	kal_bool loadBalancing;

	/* trigger TAU becuase signaling recovery without pending UL data or signaling
	*
	* Priority(V.S. PS detach): Low
	* Reason: PS detach is kind of UL signalling.
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool nasSignallingRecovery;

	/* trigger TAU because an EPS bearer is locally released by ESM
	*
	* Priority(V.S. PS detach): Low
	* Reason: The regsiteration status is valid for NW and the EPS bearer sync
	* is not very urgent. So forget it!
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool epsBearerLocalRel;

	/* trigger TAU because retrying TAU after T3411 timeout.
	* Note: REG will clear all triggers after TAU failure and start T3411.
	*
	* Priority(V.S. PS detach): Low
	* Reason: depend on update status. EU1 means previous TAU is for low
	* pirority TAU and registration status is still valid for NW
	* PS detach conflict result: if EU1, PS detach and ignore this trigger
	* if not EU1, no such case, PS detach will
	*                            local detach right awary after procedure judge
	*/
	kal_bool                    t3411Timeout;

	/* trigger TAU because retrying TAU after T3402 timeout.
	* Note: REG will clear all triggers after TAU failure and start T3402.
	*
	* Priority(V.S. PS detach): Low
	* Reason: depend on update status. EU1 means previous TAU is for low
	* pirority TAU and registration status is still valid for NW
	* PS detach conflict result: if EU1, PS detach and ignore this trigger
	* if not EU1, no such case, PS detach will
	* local detach right awary after procedure judge
	*/
	kal_bool t3402Timeout;

	/* trigger TAU because T3412 timeout
	* Priority(V.S. PS detach): Low
	* Reason: sync location is not necessary because UE want to detach
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool periodicTimerTimeout;

	/* trigger TAU because T3346 timeout in REGISTERED.attempting-to-update.
	*
	* Priority(V.S. PS detach): High
	* Reason: The registration status is not valid for NW due to EU2
	* PS detach conflict result: TAU, but the judge result will local detach
	* due to EU2
	*
	*/
	kal_bool t3346Timeout;

	/* trigger TAU because CALL want REG perform immediately without waiting
	 * T3411 or T3402.
	 *
	 * Priority(V.S. PS detach): Low
	 * Reason: If the PS detach exists, the SR or EXSR is not important any
	 *         more. So forget it!
	 * PS detach conflict result: PS detach and ignore this trigger
	 */
    kal_bool                    callRequired;

	/* trigger TAU because current TAU-REQUEST is sent but current TAU
	* procedure is aborted by other higher priority event. Since original TAU
	* trigger may be canceled, REG needs tauCancel to trigger TAU event when
	* original trigger is canceled.
	*
	* Priority(V.S. PS detach): Low
	* Reason: depend on other trigger. If there is no other trigger, it means
	* the trigger may not be high priority.
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool tauCancel;

	/* (r) upon reception paign indication using S-TMSI, if the timer T3346 is
	* running and the UE is in the EMM.REGISTERED.ATTEMPTING.TO.UPDATE. All
	* the condition is checked by EMM_CALL.
	*
	* CR2724_R14_C1-170086
	* MT paging is come at state EMM.REGISTERED.ATTEMPTING.TO.UPDATE, no
	* matter the T3346 is running or not, CALL will trigger REG to do TAU.
	*
	* Priority(V.S. PS detach): Low
	* Reason: depend on update status. EU1 means valid registration status.
	* But if this happen, EMM_CALL must be something wrong because
	* it can perform SR directly. If EU2, EMM_REG will local detach
	* before receive TAU_INIT_REQ
	* PS detach conflict result: If EU1, PS detach and ignore this trigger
	* if not EU1, no such case, PS detach will
	*                            local detach right awary after procedure judge
	*/
	kal_bool                    responseMtPaging;

	/* CR1604, CR1772, CR1795, CR1828, CR1854
	* When CSFB fails or cancel, UE should set EU2 and need to perform TAU
	* to prevent missing PS paging. This decision and modification is done
	* by EMM_CALL.
	*
	* Priority(V.S. PS detach): High
	* Reason: NW does not know UE back to LTE
	* PS detach conflict result: TAU first, then PS detach
	*/
	kal_bool csfbFailureOrCancel;

	/* [multimode]
	* trigger TAU because there is no EPS bearer after inter RAT UG2E.
	*
	* Priority(V.S. PS detach): Low
	* Reason: The regsiteration status is valid for NW and the EPS bearer sync
	* is not very urgent. So forget it!
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool noEpsbCtxtRatChg;

	/* [multimode]
	* trigger TAU because inter RAT UG2E with HO and T3402 is running
	* (skip T3402) or inter RAT UG2E and TIN is P-TMSI.
	*
	* Priority(V.S. PS detach): High
	* Reason: NW does not know UE back to LTE
	* PS detach conflict result: TAU first, then PS detach
	*/
	kal_bool interRatChg;

	/* [multimode]
	* trigger TAU because E2UG success, and T3411 or T3401 is running or
	* current TAU type is not invalid. It is for a case that E2UG and back
	* to LTE immediately.
	*
	* Priority(V.S. PS detach): Low
	* Reason: This case will not happen. If 4G23 IRAT success, then MM will
	* finish PS detach before IRAT 23G4.
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool e2UgSuccess;

	/* [multimode]
	 * trigger TAU because NW initiated IMSI detach
	 *
	 * Priority(V.S. PS detach): Low
	 * Reason: Only CS registration is invalid but PS registration is valid.
	 * PS detach conflict result: PS detach and ignore this trigger
	 */
	kal_bool                    imsiDetach;

	/* [multimode]
	* trigger TAU because 2G3G required after inter RAT UG2E
	*
	* Priority(V.S. PS detach): High
	* Reason: NW does not know UE back to LTE
	* PS detach conflict result: TAU first, then PS detach
	*/
	kal_bool tauGmmstateRequired;

	/* [multimode]
	* trigger combined TAU with IMSI attach because 2G3G required after
	* inter RAT UG2E
	*
	* Priority(V.S. PS detach): High
	* Reason: NW does not know UE back to LTE
	* PS detach conflict result: TAU first, then PS detach
	*/
	kal_bool tauGmmstateCombinedIMSI;

	/* [multimode]
	* trigger TAU because UE mode is changed from PS mode to CS/PS mode
	*
	* Priority(V.S. PS detach): Low
	* Reason: capability change is not urgent. Forget it!
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool enterCsPsMode;

	/* trigger TAU because some capability is changed (e.g., voice domain
	* preference or usage setting).
	*
	* Priority(V.S. PS detach): Low
	* Reason: capability change is not urgent. Forget it!
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool capabilityChanged;

#ifdef __VOLTE_SUPPORT__
	/* [IMS]
	 * trigger TAU because UE activates mobility management for IMS voice 
	 * termination and TIN is RAT-related TMSI
	 *
	 * Priority(V.S. PS detach): Low
	 * Reason: Registration status is still valid due to ISR.
	 * PS detach conflict result: PS detach and ignore this trigger
	 */
	kal_bool  actMmForImsVoice;

	/* [IMS]
	* trigger TAU because A/Gb to S1 and and TIN is RAT-related TMSI, but
	* annex P.4 in TS 24.008 is meet
	*
	* Priority(V.S. PS detach): Low
	* Reason: Registration status is still valid due to ISR.
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool iratImsVoiceTerm;
#endif /* __VOLTE_SUPPORT__ */

// #ifdef __REL10__: t3245
	/* trigger TAU because T3245 timeout in REGISTERED.attempting-to-update.
	*
	* Priority(V.S. PS detach): Low
	* Reason:Only CS registration is invalid but PS registration is valid.
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool csInvalidSIMRecovered;
// #endif

	/* trigger TAU because user manual CSG selection. REG only checks if
	* current CSG cell is in allowed CSG list or not.
	*
	* Priority (V.S. PS detach): High
	* Reason: The registration status is not valid for NW.
	* PS detach conflict result: TAU first, then PS detach
	*/
	kal_bool manualCsgSelect;

	/* trigger TAU if deplex type change
	*
	* Priority(V.S. PS detach): Low
	* Reason: No need to sync connection with NW because PS detach will proceed
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool duplexTypeChange;

	/* trigger TAU if inter rat to 23G fail. 
     * Work around solution only for GIONEE customer. 
     * Currently, this trigger is set only if redirection 23G failure.
     *
     * Priority(V.S. PS detach): Low
     * Reason: No need to sync connection with NW because PS detach will proceed
     * PS detach conflict result: PS detach and ignore this trigger
     */
    kal_bool e2UgFail;

	/*
	* VZ_REQ_LTEDATA_6800
	* trigger TAU because dynamic UE specific DRX setting has been
	* requested byhigher layers.
	*
	* Priority(V.S. PS detach): Low
	* Reason: capability change is not urgent. Forget it!
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool dynamicDrx;

#ifdef __CDMA2000_RAT__
	/* [C2K + SRLTE] [CT spec]
	* trigger TAU because DL data is suspend by NW when ExtSR is sent for 1xRTT
	* C2K call to network, after this call procedure is end (might be: call
	* disconnected, call abort, any other reason make call procedure end),
	* TAU need to be perform to resume DL data in network side.
	*
	* Priority(V.S. PS detach): High
	* Reason: NW does not know UE back to LTE
	* PS detach conflict result: TAU first, then PS detach
	*/
	kal_bool extSRSentForC2K;
#endif /* __CDMA2000_RAT__ */

	/* Trigger TAU because user manual selection and T3402 is running in
	* verizon. Due to verizon requirement, T3402 is running, UE cannot
	* do TAU. User manual selection is an exception to let UE do tau.
	* MTK design not verizon requirement, but related to VZ_REQ_LTEMMO_7399
	* e.g. Manual System Selection functionality.
	*
	* Priority(V.S. PS detach): Low
	* Reason: Since PS detach exists, it is not necessary to perform TAU
	*         for manual selection.
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool                    manualCellSelect;

	/* trigger TAU if local release due to plmn list in connected mode
	*
	* Priority(V.S. PS detach): Low
	* Reason: No need to sync connection with NW because PS detach will proceed
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool plmnlistInConnected;

#if defined(__VOLTE_SUPPORT__) && defined(__CDMA2000_RAT__)
	/* [IMS] [C2K]
	* [ALPS02585002] for VZ hVoLTE, E911 test
	* trigger TAU because SRLTE mode to LTE-only mode or LTE-only mode
	* to SRLTE mode in hVoLTE state.
	*
	* Priority(V.S. PS detach): High (TBD)
	* Reason: TBD
	* PS detach conflict result: TAU first, then PS detach
	*/
	kal_bool hvolteModeChange;
#endif

	/* When RRC notify "ENASAS_ACTION_TAU" in REL_IND, REG will set this
	* trigger and perform TAU to let NW knows UE is keep staying in LTE.
	*/
	kal_bool syncConnStatus;

#if defined(__REMOTE_SIM__)
	/* This trigger is for connection locally released during RSIM Auth abort. Since
	* signalling status is unsync with network, will need to further sync with NW.
	*
	* Priority(V.S. PS detach): Low
	* Reason: PS detach is kind of UL signalling.
	* PS detach conflict result: PS detach and ignore this trigger
	*/
	kal_bool authAbortInConnected;
#endif /* __REMOTE_SIM__ */

}em_emm_reg_tau_trigger_struct; //Same as emm_reg_tau_trigger_struct

typedef struct
{
    em_sr_type_enum              service_request_type;
    em_sr_cause_enum             service_request_cause; // RRC establishment cause (valid for R11 and earlier implementation)
    em_sr_est_cause_enum         service_request_est_cause; // RRC establishment cause (valid from R12 implementation onwards)
    em_sr_est_type_enum          service_request_est_type; // RRC establishment type (valid from R12 implementation onwards)
    em_mo_csfb_cause_enum        mo_csfb_cause;
    em_mt_csfb_paging_id_enum    mt_csfb_paging_id;
    em_emm_cause_enum            ext_service_reject_cause;
}l4c_em_emm_call_para_struct;


typedef struct
{
    em_emm_ecm_status_enum ecm_status;
    kal_uint8                              ac_barring_status;
}l4c_em_emm_conn_para_struct;


typedef struct
{
    em_emm_attach_type_enum                 eps_attach_type;
    em_emm_additional_update_type_enum      attach_additional_update_type;
    em_emm_attach_result_enum               eps_attach_result;
    em_emm_additional_update_result_enum    attach_additional_update_result;
    em_emm_cause_enum                       attach_emm_cause;
    kal_uint32                              attach_attempt_count;
    em_emm_attach_status                    attach_status;

    em_emm_update_type_enum                 tau_req_update_type;
    em_emm_additional_update_type_enum      tau_additional_update_type;
    em_emm_update_result_enum               tau_update_result;
    em_emm_additional_update_result_enum    tau_additional_update_result;
    em_emm_cause_enum                       tau_emm_cause;
    kal_uint32                              tau_attempt_count;
    em_emm_tau_status                       tau_status;

    em_emm_user_detach_type_enum            user_detach_type;
    em_emm_nw_detach_type_enum              nw_detach_type;
    em_emm_cause_enum                       nw_detach_emm_cause;
    kal_uint32                              detach_attempt_count;

    em_emm_ims_service_ind_enum             ims_service_ind;
    em_emm_emergency_service_ind_enum       emergency_service_ind;

    em_emm_lai_struct                       lai;

    em_emm_cause_source_enum                emm_cause_source;
    kal_uint32                              emm_cause;
}l4c_em_emm_reg_para_struct;

typedef struct
{
    plmn_struct selected_plmn;
    kal_uint16        tac;
    em_csg_access_mode_enum  csg_access_mode;
    kal_uint32        csg_id;
    em_lte_duplex_type_enum  duplex_type;
    kal_uint32        cell_id;
}l4c_em_emm_plmnsel_para_struct;

typedef struct
{
    em_emm_update_status_enum update_status;
    em_emm_sim_status_enum cs_sim_status;
    em_emm_sim_status_enum ps_sim_status;
    em_emm_guti_struct guti;

}l4c_em_emm_usimsrv_para_struct;

typedef struct
{
    em_emm_tin_enum tin;
}l4c_em_emm_nvmsrv_para_struct;

typedef struct
{
    kal_uint16  t3402_remaining_time;   //in second
}l4c_em_emm_timersrv_para_struct;

typedef struct
{
    em_emm_mainstate_enum  emm_mainstate;
    em_emm_substate_enum    emm_substate;
}l4c_em_emm_statesrv_para_struct;

typedef struct
{
    kal_uint8  integrity_alg;
    kal_uint8  ciphering_alg;
    kal_bool   is_last_auth_rej;
} l4c_em_emm_sec_para_struct;

typedef struct
{
    kal_bool                       is_valid;
    em_emm_call_fail_trigger_enum  call_fail_trigger;
    em_emm_call_est_cause_enum     call_est_cause;
    em_emm_call_rel_cause_enum     call_rel_cause;
    em_emm_call_ignore_paging_cause_enum     call_ignore_paging_cause;
}l4c_em_emm_call_csfb_para_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                            em_info;
    l4c_em_emm_call_para_struct             emm_call_para;
    l4c_em_emm_conn_para_struct             emm_conn_para;
    l4c_em_emm_reg_para_struct              emm_reg_para;
    l4c_em_emm_plmnsel_para_struct          emm_plmnsel_para;
    l4c_em_emm_usimsrv_para_struct          emm_usimsrv_para;
    l4c_em_emm_nvmsrv_para_struct           emm_nvmsrv_para;
    l4c_em_emm_timersrv_para_struct         emm_timersrv_para;
    l4c_em_emm_sec_para_struct              emm_sec_para;
    l4c_em_emm_statesrv_para_struct         emm_statesrv_para;
	l4c_em_emm_call_csfb_para_struct        emm_call_csfb_para; 
} em_emm_l4c_emm_info_ind_struct;

typedef em_emm_l4c_emm_info_ind_struct em_emm_elt_emm_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum    em_info;
    l4c_em_emm_call_para_struct             emm_call_para;
    l4c_em_emm_call_csfb_para_struct        emm_call_csfb_para;     
} em_emm_l4c_csfb_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum    em_info;
}em_emm_l4c_lai_change_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum    em_info;
    kal_bool        is_auth_rej;
}em_emm_sec_event_info_ind_struct;
/*
 * Structure for EM_EMM_REG_EVENT_INFO_IND message
 */

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                                 em_info;
    kal_bool                                     is_attach_rej_cause_valid;
    em_emm_cause_enum                            emm_attach_rej_cause; //[MOLY00170623] VzW MDMI KPI - emmFailureCauseEvent

	/* CHR requirement - event (only one should be true) */
	kal_bool                                     is_attach_request;
	kal_bool                                     is_attach_accept;
	kal_bool                                     is_attach_reject;
	kal_bool                                     is_t3410_expiry;
	kal_bool                                     is_tau_request;
	kal_bool                                     is_tau_accept;
	kal_bool                                     is_tau_reject;
	kal_bool                                     is_imsi_paging;
	kal_bool                                     is_nw_detach;
	kal_bool                                     is_ue_detach;

    /* CHR requirement - value */
	// valid when is_attach_reject is KAL_TRUE
	em_emm_attach_type_enum                      attach_type;
	// valid when is_tau_reject is KAL_TRUE
	em_emm_update_type_enum                      tau_type;
    em_emm_cause_enum                            emm_tau_rej_cause;
	// always valid
	kal_bool                                     is_data_sim;
    em_emm_cause_enum                            emm_attach_rej_original_cause;
	em_emm_cause_enum                            emm_tau_rej_original_cause;
}em_emm_reg_event_info_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum    em_info;
    l4c_em_emm_call_para_struct             emm_call_para;
}em_emm_l4c_call_info_ind_struct;

/*
* Structure for EM_EMM_REG_ATTACH_INFO_IND message
*/

typedef struct
{
	LOCAL_PARA_HDR
	em_info_enum em_info;
	em_emm_attach_type_enum eps_attach_type;
	em_emm_reg_eps_mobile_identity_type_enum mobile_id_type;
	em_emm_reg_additional_update_type_enum additional_update_type;
	em_emm_attach_result_enum eps_attach_result;
	em_emm_cause_enum emm_cause;
	kal_uint32 attach_attempt_count;
	/* The last attach procedure result */
	em_emm_reg_last_attach_result_enum last_attach_proc_result;
	/* The reason why can not do attach */
	em_emm_reg_not_att_reason_enum not_attach_reason;
	em_emm_reg_proc_status_enum                    attach_status;
}em_emm_reg_attach_info_ind_struct;

/*
* Structure for EM_EMM_REG_DETACH_INFO_IND message
*/

typedef struct
{
	LOCAL_PARA_HDR
	em_info_enum em_info;
	em_emm_reg_user_detach_type_struct user_detach_type;
	em_emm_reg_nw_detach_type_enum nw_detach_type;
	em_emm_cause_enum nw_detach_cause;
	kal_uint32 retry_count;
	em_emm_reg_dereg_reason_enum                last_dereg_reason;
	em_emm_reg_user_detach_type_struct          last_user_detach_type;
	em_emm_reg_nw_detach_type_enum              last_nw_detach_type;
	em_emm_cause_enum							last_nw_detach_cause;
}em_emm_reg_detach_info_ind_struct;

/*
* Structure for EM_EMM_REG_TAU_INFO_IND message
*/

typedef struct
{
	LOCAL_PARA_HDR
	em_info_enum em_info;
	em_emm_update_type_enum eps_update_type;
	kal_bool active_flag;
	em_emm_reg_eps_mobile_identity_type_enum mobile_id_type;
	em_emm_reg_additional_update_type_enum additional_update_type;
	em_emm_update_result_enum eps_update_result;
	em_emm_cause_enum emm_cause;
	kal_uint32 tau_attempt_count;
	/* indicate why do combined tau with imsi attach */
	em_emm_reg_combined_tau_info_type_struct combined_tau_imsi_info;
	/* The last tau procedure result */
	em_emm_reg_last_tau_result_enum last_tau_proc_result;
	/* The last tau procedure trigger event */
	em_emm_reg_tau_trigger_struct last_tau_trigger_event;
	/* The reason why can not do tau */
	em_emm_reg_not_tau_reason_enum not_tau_reason;
	em_emm_reg_proc_status_enum tau_status;
	/* the total counts that TAU-request has been sent */
	kal_uint16                                     tau_accumulated_count;    
	    
}em_emm_reg_tau_info_ind_struct;

/********************* end of EMM definition ****************************/


#endif /* _EM_EMM_PUBLIC_STRUCT_H */

