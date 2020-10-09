/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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

#ifndef  _D2PM_DDM_STRUCT_H
#define  _D2PM_DDM_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "atcmd_struct.h"
#include "ps_public_enum.h"
#include "pdn_public_defs.h"
#include "d2pm_public_defs.h"
#include "ddm_common_struct.h"
#include "l3_inc_enums_public.h"
#include "l4bnw_public_struct.h"
#include "l4c_common_enum.h"
#include "ddm_nwsel_struct.h"

// Type definitions
typedef struct
{
    kal_uint32 src_id;
}d2pm_ddm_comm_ind_prv_struct;

typedef struct
{
    kal_uint32 src_id;
}d2pm_ddm_comm_req_prv_struct;

typedef struct
{
    kal_uint32 src_id;
}d2pm_ddm_comm_cnf_prv_struct;

typedef ddm_res_enum d2pm_d2rm_res_enum;
typedef ddm_ip_info_struct d2pm_d2rm_ip_info_struct;
typedef ddm_net_info_struct d2pm_d2rm_net_info_struct;
typedef ddm_retry_info_struct d2pm_d2rm_retry_info_struct;
typedef ddm_req_type_enum d2pm_d2rm_act_data_call_req_type_enum;

typedef ddm_ip_info_struct d2pm_ddm_ip_info_struct;
typedef ddm_net_info_struct d2pm_ddm_net_info_struct;
typedef ddm_ims_info_struct d2pm_ddm_ims_info_struct;
typedef ddm_ims_info_struct d2pm_ddm_ims_prv_data_t; // for D2PM_IWLAN and D2CM

// => REQ
typedef d2pm_ddm_comm_req_prv_struct d2pm_ddm_get_data_call_list_req_prv_struct;
typedef d2pm_ddm_comm_req_prv_struct d2pm_ddm_get_dynamic_param_req_prv_struct;
typedef ddm_get_secondary_dynamic_param_req_struct d2pm_ddm_get_secondary_dynamic_param_req_prv_struct;
typedef ddm_get_pdp_address_req_struct d2pm_ddm_get_pdp_address_req_prv_struct;
typedef ddm_get_qos_req_struct d2pm_ddm_get_qos_req_prv_struct;
typedef ddm_get_tft_req_struct d2pm_ddm_get_tft_req_prv_struct;
typedef ddm_set_packet_filter_req_struct d2pm_ddm_set_packet_filter_req_prv_struct;
typedef ddm_get_packet_filter_req_struct d2pm_ddm_get_packet_filter_req_prv_struct;
typedef d2pm_ddm_comm_req_prv_struct d2pm_ddm_mod_data_call_req_prv_struct;
// => CNF
typedef d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_get_data_call_list_cnf_prv_struct;
typedef d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_get_dynamic_param_cnf_prv_struct;
typedef ddm_get_secondary_dynamic_param_cnf_struct d2pm_ddm_get_secondary_dynamic_param_cnf_prv_struct;
typedef ddm_get_pdp_address_cnf_struct d2pm_ddm_get_pdp_address_cnf_prv_struct;
typedef ddm_get_qos_cnf_struct  d2pm_ddm_get_qos_cnf_prv_struct;
typedef ddm_get_tft_cnf_struct d2pm_ddm_get_tft_cnf_prv_struct;
typedef ddm_set_packet_filter_cnf_struct d2pm_ddm_set_packet_filter_cnf_prv_struct;
typedef ddm_get_packet_filter_cnf_struct d2pm_ddm_get_packet_filter_cnf_prv_struct;
typedef d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_mod_data_call_cnf_prv_struct;    // [GT] at_cgcmod_req_struct does NOT exist
// => IND
typedef d2pm_ddm_comm_ind_prv_struct d2pm_ddm_get_data_call_list_ind_prv_struct;
typedef ddm_get_secondary_dynamic_param_ind_struct d2pm_ddm_get_secondary_dynamic_param_ind_prv_struct;
typedef ddm_get_pdp_address_ind_struct d2pm_ddm_get_pdp_address_ind_prv_struct;
typedef ddm_get_qos_ind_struct d2pm_ddm_get_qos_ind_prv_struct;
typedef ddm_get_tft_ind_struct d2pm_ddm_get_tft_ind_prv_struct;
typedef ddm_set_packet_filter_ind_struct d2pm_ddm_set_packet_filter_ind_prv_struct;
typedef ddm_get_packet_filter_ind_struct d2pm_ddm_get_packet_filter_ind_prv_struct;
//typedef d2pm_ddm_comm_ind_prv_struct d2pm_ddm_mod_data_call_ind_prv_struct;    // [GT] at_cgcmod_req_struct does NOT exist
typedef struct
{
    kal_uint32 src_id;
    data_call_change_reason_enum data_call_change_reason;
}d2pm_ddm_mod_data_call_ind_prv_struct;
typedef struct
{
    kal_uint32 src_id;
    at_cgcontrdp_ind_struct cmd;
}d2pm_ddm_get_dynamic_param_ind_prv_struct;

typedef enum
{
//    D2PM_DDM_RES_SUCC_RETRY, not exist
    D2PM_DDM_RES_NONE = D2PM_RES_NONE, 
    D2PM_DDM_RES_FAIL = D2PM_RES_FAIL, 
    D2PM_DDM_RES_SUCC = D2PM_RES_SUCC, 
    // a subsequent CID
    D2PM_DDM_RES_FAIL_ABORT = D2PM_RES_FAIL_ABORT, 
    D2PM_DDM_RES_SUCC_ABORT = D2PM_RES_SUCC_ABORT, 
    D2PM_DDM_RES_FAIL_CONT = D2PM_RES_FAIL_CONT, 
    D2PM_DDM_RES_SUCC_CONT = D2PM_RES_SUCC_CONT, 
    // otherwise
    D2PM_DDM_RES_REJ = D2PM_RES_REJ, 
    D2PM_DDM_RES_RETRY = D2PM_RES_RETRY, 
    D2PM_DDM_RES_MAX = 0x7FFFFFFF
}d2pm_ddm_res_enum;

typedef enum
{
    D2AM_DDM_EVENT_IS_EMERGENCY,
    D2AM_DDM_EVENT_IS_IMS,
	D2AM_DDM_EVENT_IS_APN_CONFLICT,
 	D2AM_DDM_EVENT_IS_APN_CLEAR_DEACT,
    D2AM_DDM_EVENT_MAX = 0x7FFFFFFF
}d2am_ddm_detach_event_enum;
// Macros

//VoLTE
#define MAX_PCSCF_NUMBER 6

#define D2PM_DDM_REQ_LOCAL_PARA_HDR    \
    LOCAL_PARA_HDR \
    kal_uint32 src_id;

#define D2PM_DDM_CNF_LOCAL_PARA_HDR    \
    LOCAL_PARA_HDR \
    kal_uint32 src_id;

#define D2PM_DDM_IND_LOCAL_PARA_HDR    \
    LOCAL_PARA_HDR \
    kal_uint32 src_id;
            
#define D2PM_DDM_RSP_LOCAL_PARA_HDR    \
    LOCAL_PARA_HDR \
    kal_uint32 src_id;

// Functions
// N/A

// Implementation
/*******************************************************************************
* D2PM to DDM REQ                                                              *
*******************************************************************************/

typedef struct
{
    kal_uint32 src_id;
    kal_bool p_cid_present;
    kal_uint32 p_cid;
    kal_bool fb_cid_present;
    kal_uint32 fb_cid;
    kal_bool fb_ipv4_first;
    kal_uint32 auth_type;
    kal_uint8 pdp_type[PDP_TYPE_STRING_LEN];
    kal_uint8 roam_prot[ROAMING_IP_TYPE_STRING_LEN];
    kal_uint8 username[USERID_STRING_LEN];
    kal_uint8 passwd[PASSWORD_STRING_LEN];
    kal_bool carrier_enabled;
    kal_uint32 max_conn;
    kal_uint32 max_conn_time;
    kal_uint32 wait_time;
    kal_uint32 inact_time;
    kal_bool pcscf_restore;
    if_info_struct if_info;
    apn_type_info_struct apn_type_info;
    kal_uint32 test_mode_flag;
}d2pm_ddm_act_data_call_req_prv_struct;
typedef d2pm_ddm_act_data_call_req_prv_struct d2pm_ddm_act_data_call_reject_cnf_prv_struct;
typedef d2pm_ddm_mod_data_call_req_prv_struct d2pm_ddm_mod_data_call_reject_cnf_prv_struct;

typedef struct
{
    kal_uint32 src_id;
    atcmd_deact_cause_enum cause;
    kal_uint32 test_mode_flag;
}d2pm_ddm_deact_data_call_req_prv_struct;
typedef d2pm_ddm_deact_data_call_req_prv_struct d2pm_ddm_deact_data_call_reject_cnf_prv_struct;
typedef d2pm_ddm_deact_data_call_req_prv_struct d2pm_ddm_abort_data_call_req_prv_struct;
typedef d2pm_ddm_deact_data_call_req_prv_struct d2pm_ddm_abort_data_call_reject_cnf_prv_struct;

typedef enum {
    DDM_DEACT_MODE_NORMAL = 0x00000000,
    DDM_DEACT_MODE_UNBIND = 0x00000001,
    DDM_DEACT_MODE_LOCAL_RELEASE = 0x00000002,
    DDM_DEACT_MODE_FORCE_DEACT = 0x00000004,
    DDM_DEACT_MODE_EDALLOW_DEACT = 0x00000008,
} deact_mode_enum;
typedef struct {
    kal_uint32 deact_mode;
} d2am_ddm_deact_data_call_req_prv_struct;
typedef d2am_ddm_deact_data_call_req_prv_struct d2am_ddm_abort_data_call_req_prv_struct;

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
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#endif
typedef struct
{
   retrytime_type_enum retrytime_type;
   kal_uint32 retry_time;     
}d2pm_ddm_data_retry_prv_data_t;

typedef struct
{
    kal_uint32 src_id;
    kal_uint32 fb_cid_present;
    kal_uint32 fb_cid;
#if 0
/* under construction !*/
#endif
#if 0
/* under construction !*/
#endif
    d2pm_ddm_ims_info_struct ims_prv_data;
    d2pm_ddm_data_retry_prv_data_t data_retry_prv_data;
    pco_info_t pco_info;
    kal_uint16  err_cause;
    kal_bool is_dangling;
}d2pm_ddm_act_data_call_cnf_prv_struct;
typedef d2pm_ddm_act_data_call_cnf_prv_struct d2pm_ddm_act_data_call_ind_prv_struct;

typedef struct
{
    kal_uint32 src_id;
    kal_bool is_dangling;
    kal_uint16 cause;
    pco_info_t pco_info;
}d2pm_ddm_deact_data_call_cnf_prv_struct;
typedef d2pm_ddm_deact_data_call_cnf_prv_struct d2pm_ddm_abort_data_call_cnf_prv_struct;

typedef struct
{
    kal_uint32  src_id;
#if 0
/* under construction !*/
/* under construction !*/
#endif
    at_cgev_ind_struct cgev_cmd;
    kal_bool ims_info_present;
    d2pm_ddm_ims_info_struct ims_info;
    kal_bool is_dangling_present;
    kal_bool is_dangling;
    ps_cause_enum deact_cause;
}d2pm_ddm_urc_cgev_ind_prv_struct;
typedef d2pm_ddm_urc_cgev_ind_prv_struct d2pm_ddm_pdn_nw_act_ind_prv_struct;
typedef d2pm_ddm_urc_cgev_ind_prv_struct d2pm_ddm_pdn_nw_deact_ind_prv_struct;

/*******************************************************************************
* DDM TO D2PM IND                                                              *
*******************************************************************************/
typedef atcmd_reason_enum ddm_reason_enum;
typedef struct
{
    kal_char apn[APN_STRING_LEN];
    kal_uint32 cid;
    d2pm_ddm_ip_info_struct ip_info; // at_cgpaddr_ind_struct
    d2pm_ddm_net_info_struct net_info;
    kal_bool ims_info_present;
    d2pm_ddm_ims_info_struct ims_info;
    kal_bool is_dangling;
    ddm_reason_enum           reason;
    d2pm_ddm_res_enum res;
}me_pdn_act_struct;
typedef struct
{
    kal_uint32 cid;

    kal_bool is_dangling;
}me_pdn_deact_struct;
typedef struct
{
    kal_uint32 cid;
    kal_bool is_dangling;
    ps_cause_enum deact_cause;
}nw_pdn_deact_struct;
typedef struct
{
    kal_uint32 cid;
    kal_uint32 p_cid;
    kal_bool ip_info_present;
    d2pm_ddm_ip_info_struct ip_info; // at_cgpaddr_ind_struct
    kal_bool net_info_present;
    d2pm_ddm_net_info_struct net_info;
    kal_bool ims_info_present;
    d2pm_ddm_ims_info_struct ims_info;
    kal_bool is_dangling;
}nw_act_struct;
typedef struct
{
    kal_uint32 cid;
    kal_uint32 p_cid;
    ps_cause_enum deact_cause;
    kal_bool is_dangling;
}nw_deact_struct;
typedef struct
{
    kal_uint32 cid;
    kal_uint32 p_cid;
    kal_bool ip_info_present;
    d2pm_ddm_ip_info_struct ip_info; // at_cgpaddr_ind_struct
    kal_bool net_info_present;
    d2pm_ddm_net_info_struct net_info;
    kal_bool ims_info_present;
    d2pm_ddm_ims_info_struct ims_info;
}nw_modify_struct;
// +CGEV: use at_cgev_ind_struct directly
typedef struct
{
    D2PM_DDM_IND_LOCAL_PARA_HDR
    cgev_event_enum event;
    union {
        me_pdn_act_struct me_pdn_act;        
        me_pdn_deact_struct me_pdn_deact;
        nw_pdn_deact_struct nw_pdn_deact;
        nw_act_struct nw_act;
        nw_deact_struct nw_deact;
        nw_modify_struct nw_modify;
    } info;
}d2pm_ddm_urc_cgev_ind_struct;

// MSG_ID_D2PM_DDM_DEFINE_ATTACH_PDN_IND
typedef struct 
{
    D2PM_DDM_IND_LOCAL_PARA_HDR
    data_retry_reset_user_enum reset_user;    
}d2pm_ddm_reset_data_retry_timer_ind_struct;
// MSG_ID_D2PM_DDM_ATTACHED_RAT_IND
typedef struct 
{
    D2PM_DDM_IND_LOCAL_PARA_HDR
    l4bnw_public_attached_network_info_struct attached_network_info;
}d2ia_ddm_attached_rat_ind_struct;
// MSG_ID_D2PM_DDM_DEFINE_ATTACH_PDN_IND
typedef struct 
{
    D2PM_DDM_IND_LOCAL_PARA_HDR
    kal_bool is_suggested_handover;
}d2ia_ddm_define_attach_pdn_ind_struct;
// MSG_ID_D2PM_DDM_NEED_DETACH_PDN_IND
typedef struct 
{
    D2PM_DDM_IND_LOCAL_PARA_HDR
    kal_uint32 cid;
    d2am_ddm_detach_event_enum event;
}d2ia_ddm_need_detach_pdn_ind_struct;

typedef struct 
{
    D2PM_DDM_IND_LOCAL_PARA_HDR
    kal_uint8 cid;
    kal_uint8 apn[APN_STRING_LEN];
    pdp_addr_type_enum pdp_type;
}d2ia_ddm_attach_pdn_activate_success_ind_struct;

typedef struct 
{
    D2PM_DDM_IND_LOCAL_PARA_HDR
    kal_uint8 cid;
    ps_cause_enum err_cause;
    kal_bool is_change_to_apn_class_present;
    kal_uint8 change_to_apn_class;
}d2ia_ddm_attach_pdn_activate_failure_ind_struct;

typedef struct
{
    D2PM_DDM_IND_LOCAL_PARA_HDR
    kal_bool                                is_success;
    kal_uint16                              err_cause;
}d2ia_ddm_edallow_cnf_struct;

// MSG_ID_D2AM_DDM_EVZWAPFCIA_CNF
typedef struct
{
    D2PM_DDM_IND_LOCAL_PARA_HDR
    kal_bool                                is_success;
    kal_uint16                              err_cause;
}d2am_ddm_evzwapfcia_cnf_struct;

// MSG_ID_D2AM_DDM_EUTRAN_DISABLE_CHECK_IND
typedef struct
{
    D2PM_DDM_IND_LOCAL_PARA_HDR
}d2am_ddm_eutran_disable_check_ind_struct;

// MSG_ID_D2AM_DDM_EUTRAN_DISABLE_CHECK_RSP
typedef struct
{
    D2PM_DDM_IND_LOCAL_PARA_HDR
    kal_bool is_ps_detach_needed;
    ddm_nwsel_detach_cause_enum cause;
}d2am_ddm_eutran_disable_check_rsp_struct;

/*******************************************************************************
* D2PM TO DDM RSP                                                              *
*******************************************************************************/
// MSG_ID_D2IA_DDM_EDALLOW_REQ
typedef struct
{
    D2PM_DDM_RSP_LOCAL_PARA_HDR
    atcmd_is_data_allowed_enum   is_data_allowed;
	kal_uint16 bitmask_edallow_deact;
}d2ia_ddm_edallow_req_struct;

// MSG_ID_D2AM_DDM_EVZWAPFCIA_REQ
typedef struct
{
    D2PM_DDM_RSP_LOCAL_PARA_HDR
    at_evzwapfcia_req_struct   cmd;
}d2am_ddm_evzwapfcia_req_struct;
// MSG_ID_D2PM_DDM_DEFINE_ATTACH_PDN_RSP
typedef struct {
    D2PM_DDM_RSP_LOCAL_PARA_HDR
    kal_bool is_success;
    ps_cause_enum err_cause;
    kal_uint32 cid;
    kal_bool fb_cid_present;
    kal_uint32 fb_cid;
    atcmd_request_type_enum req_type;
    kal_uint8 apn[APN_STRING_LEN];
    kal_uint8 pdp_type[PDP_TYPE_STRING_LEN];
    kal_uint8 roam_prot[ROAMING_IP_TYPE_STRING_LEN];
    kal_uint32 auth_type;
    kal_uint8 username[USERID_STRING_LEN];
    kal_uint8 passwd[PASSWORD_STRING_LEN];
    kal_bool is_cid_allocated;
    kal_bool apn_type_is_ims;
    kal_bool apn_type_is_rcs;
    kal_bool cgdcont_req_present;
    at_cgdcont_req_struct cgdcont_req;
} d2ia_ddm_define_attach_pdn_rsp_struct;

//MSG_ID_D2AM_DDM_PS_TYPE_CONFIG_REQ
typedef struct {
    D2PM_DDM_RSP_LOCAL_PARA_HDR
    l4_ps_type_config_enum  ps_type;
    kal_bool follow_on_request;
} d2am_ddm_ps_type_config_req_struct;

//MSG_ID_D2AM_DDM_PS_TYPE_CONFIG_CNF
typedef struct {
    D2PM_DDM_IND_LOCAL_PARA_HDR
    l4_ps_config_result_enum   result;
} d2am_ddm_ps_type_config_cnf_struct;

//MSG_ID_D2AM_DDM_PS_REATTACH_CONFIG_REQ
typedef struct {
    D2PM_DDM_RSP_LOCAL_PARA_HDR
    kal_bool    is_reattach;
} d2am_ddm_ps_reattach_config_req_struct;
// MSG_ID_D2AM_DDM_ECNCFG_REQ_IND
typedef struct {
    D2PM_DDM_RSP_LOCAL_PARA_HDR
    at_ecncfg_req_struct    cmd;
} d2am_ddm_ecncfg_req_ind_struct;

// MSG_ID_D2AM_DDM_EVZWAPFCIA_IND
typedef struct
{
    D2PM_DDM_RSP_LOCAL_PARA_HDR
    at_evzwapfcia_ind_struct   cmd;
}d2am_ddm_evzwapfcia_ind_struct;

// MSG_ID_D2AM_DDM_RELEASE_FB_CID_IND
typedef struct
{
    D2PM_DDM_RSP_LOCAL_PARA_HDR
    kal_uint32 fb_cid;
}d2am_ddm_release_fb_cid_ind_struct;
/*******************************************************************************
* D2PM TO DDM REQ                                                              *
*******************************************************************************/

// MSG_ID_D2PM_DDM_SET_SBP_ID_REQ, this is only for debugging
typedef struct {
    D2PM_DDM_REQ_LOCAL_PARA_HDR
    kal_uint32 sbp_id;     
}d2pm_ddm_set_sbp_id_req_struct;
#endif
