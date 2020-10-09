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

#ifndef  _D2RM_DDM_STRUCT_H
#define  _D2RM_DDM_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "atcmd_struct.h"
#include "atcmd_enum.h"
#include "ps_public_enum.h"
#include "ddm_common_struct.h"
#include "d2pm_ddm_struct.h"
#include "d2pm_d2rm_struct.h"

// Implementation
/*******************************************************************************
* D2RM to DDM REQ                                                              *
*******************************************************************************/
typedef ddm_ip_info_struct d2rm_ddm_ip_info_struct;
typedef ddm_net_info_struct d2rm_ddm_net_info_struct;
typedef ddm_retry_info_struct d2rm_ddm_retry_info_struct;
typedef ddm_ims_info_struct d2rm_ddm_ims_info_struct;
// MSG_ID_D2RM_DDM_ACT_DATA_CALL_REQ

typedef struct
{
    kal_uint8 pdp_type[PDP_TYPE_STRING_LEN]; //home protocol
    kal_uint8 roam_prot[ROAMING_IP_TYPE_STRING_LEN]; //roam protocol
    kal_char apn_type[APN_TYPE_STRING_LEN];
    kal_bool is_ia_ongoing;
}d2rm_ddm_act_data_call_req_prv_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;    
    kal_uint8  apn[APN_STRING_LEN];
    atcmd_request_type_enum req_type;
    kal_bool is_dangling;
    kal_bool cgdcont_req_present;
    at_cgdcont_req_struct cgdcont_req;
    kal_bool  is_egact_needed; //if cell rat restricted to certain cell tech
    kal_uint8 assign_rat; //atcmd_rat_enum

    /* private part */
    d2rm_ddm_act_data_call_req_prv_struct   d2rm_ddm_prv;
    d2pm_ddm_act_data_call_req_prv_struct    d2pm_ddm_prv;
}d2rm_ddm_act_data_call_req_struct;

// MSG_ID_D2RM_DDM_DEACT_DATA_CALL_REQ

typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    /* private part */
    d2pm_ddm_deact_data_call_req_prv_struct d2pm_ddm_prv;
    d2am_ddm_deact_data_call_req_prv_struct d2am_ddm_prv;
}d2rm_ddm_deact_data_call_req_struct;

// MSG_ID_D2RM_DDM_ABORT_DATA_CALL_REQ
typedef d2rm_ddm_deact_data_call_req_struct d2rm_ddm_abort_data_call_req_struct;

// MSG_ID_D2RM_DDM_GET_DATA_CALL_LIST_REQ
typedef struct
{
    LOCAL_PARA_HDR

    at_cgact_req_struct cmd;
    d2pm_ddm_comm_req_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_data_call_list_req_struct;

// MSG_ID_D2RM_DDM_GET_DYNAMIC_PARAM_REQ
typedef struct
{
    LOCAL_PARA_HDR

    at_cgcontrdp_req_struct cmd;
    d2pm_ddm_comm_req_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_dynamic_param_req_struct;

// MSG_ID_D2RM_DDM_GET_PDP_ADDRESS_REQ
typedef struct
{
    LOCAL_PARA_HDR
    
    at_cgpaddr_req_struct cmd;
    d2pm_ddm_comm_req_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_pdp_address_req_struct;

//MSG_ID_D2RM_DDM_GET_SECONDARY_DYNAMIC_PARAM_REQ
typedef struct
{
    LOCAL_PARA_HDR
    
    at_cgscontrdp_req_struct cmd;
    d2pm_ddm_comm_req_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_secondary_dynamic_param_req_struct;

// MSG_ID_D2RM_DDM_GET_QOS_REQ
typedef struct
{
    LOCAL_PARA_HDR
    
    at_cgeqosrdp_req_struct cmd;
    d2pm_ddm_comm_req_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_qos_req_struct;

// MSG_ID_D2RM_DDM_GET_TFT_REQ
typedef struct
{
    LOCAL_PARA_HDR
    
    at_cgtftrdp_req_struct cmd;
    d2pm_ddm_comm_req_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_tft_req_struct;

// MSG_ID_D2RM_DDM_SET_PACKET_FILTER_REQ
typedef struct
{
    LOCAL_PARA_HDR
    
    at_eglnkpf_req_struct cmd;
    d2pm_ddm_comm_req_prv_struct d2pm_ddm_prv;
}d2rm_ddm_set_packet_filter_req_struct;

//MSG_ID_D2RM_DDM_GET_PACKET_FILTER_REQ
/*atp_cmd_mode_enum: ATP_READ_MODE, cid_parse_result: AT_TOKEN_PARSE_RESULT_NOT_FOUND*/
typedef d2rm_ddm_set_packet_filter_req_struct d2rm_ddm_get_packet_filter_req_struct;

// MSG_ID_D2RM_DDM_MODIFY_DATA_CALL_REQ
typedef struct
{
    LOCAL_PARA_HDR
    
    at_cgcmod_req_struct cmd;
    d2pm_ddm_comm_req_prv_struct d2pm_ddm_prv;
}d2rm_ddm_modify_data_call_req_struct;

// MSG_ID_D2RM_DDM_GET_RETRYTMR_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];

    /* private part */
    d2pm_ddm_comm_req_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_retrytmr_req_struct;

// MSG_ID_D2RM_DDM_SET_RETRYTMR_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_uint8 cmd;

    /* private part */
    d2pm_ddm_comm_req_prv_struct d2pm_ddm_prv;
}d2rm_ddm_set_retrytmr_req_struct;

// MSG_ID_D2RM_DDM_GET_EPDG_INFO_REQ
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32 cid;
} d2rm_ddm_get_epdg_info_req_struct;

// MSG_ID_D2RM_DDM_VZWAPNE_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 txid, num_of_apn;
    struct
    {
        kal_char apn[APN_STRING_LEN];
        kal_int32 apn_idx;
    }apn_list[DDM_MAX_NUM_OF_APN];

    /* private part */
    // N/A
}d2rm_ddm_vzwapne_req_struct;

// MSG_ID_D2RM_DDM_VZWAPNETMR_REQ
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 txid, num_of_apn;
    struct
    {
        kal_char apn[APN_STRING_LEN];
        kal_int32 apn_idx;
    }apn_list[DDM_MAX_NUM_OF_APN];

    /* private part */
    // N/A
}d2rm_ddm_vzwapnetmr_req_struct;

/*******************************************************************************
* DDM TO D2RM CNF                                                              *
*******************************************************************************/


// MSG_ID_D2RM_DDM_ACT_DATA_CALL_CNF
typedef struct
{
    kal_bool  errcause_present;
    kal_int32 errcause;
    kal_bool  retrytime_present;
    kal_int32 retrytime;
}d2rm_ddm_act_data_call_cnf_prv_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /*common part*/
    kal_uint32 cid;
    kal_uint8 apn[APN_STRING_LEN];
#if 0
/* under construction !*/
/* under construction !*/
#endif
    d2rm_ddm_ip_info_struct ip_info;    // for IP address
    d2rm_ddm_net_info_struct net_info;    // for Internet information

    // ddm_res_enum res_code;
    kal_uint32 res_code;
    /* private part */
    d2rm_ddm_act_data_call_cnf_prv_struct d2rm_ddm_prv;
    d2pm_ddm_act_data_call_cnf_prv_struct d2pm_ddm_prv;
    
    d2rm_ddm_retry_info_struct retry_info; 
}d2rm_ddm_act_data_call_cnf_struct;

// MSG_ID_D2RM_DDM_DEACT_DATA_CALL_CNF
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_uint32 cid;
    ddm_res_enum res_code;
    /* private part */
    d2pm_ddm_deact_data_call_cnf_prv_struct d2pm_ddm_prv;
}d2rm_ddm_deact_data_call_cnf_struct;

// MSG_ID_D2RM_DDM_ABORT_DATA_CALL_CNF
typedef d2rm_ddm_deact_data_call_cnf_struct d2rm_ddm_abort_data_call_cnf_struct;

// MSG_ID_D2RM_DDM_GET_DATA_CALL_LIST_CNF
typedef struct
{
    LOCAL_PARA_HDR

    ddm_res_enum res_code;
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_data_call_list_cnf_struct;

// MSG_ID_D2RM_DDM_GET_DYNAMIC_PARAM_CNF
typedef struct
{
    LOCAL_PARA_HDR
    
    ddm_res_enum res_code;
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_dynamic_param_cnf_struct;

// MSG_ID_D2RM_DDM_GET_PDP_ADDRESS_CNF
typedef struct
{
    LOCAL_PARA_HDR
    
    ddm_res_enum res_code;
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_pdp_address_cnf_struct;

//MSG_ID_D2RM_DDM_GET_SECONDARY_DYNAMIC_PARAM_CNF
typedef struct
{
    LOCAL_PARA_HDR
    
    ddm_res_enum res_code;
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_secondary_dynamic_param_cnf_struct;

// MSG_ID_D2RM_DDM_GET_QOS_CNF
typedef struct
{
    LOCAL_PARA_HDR
    
    ddm_res_enum res_code;
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_qos_cnf_struct;

// MSG_ID_D2RM_DDM_GET_TFT_CNF
typedef struct
{
    LOCAL_PARA_HDR
    
    ddm_res_enum res_code;
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_tft_cnf_struct;

//MSG_ID_D2RM_DDM_SET_PACKET_FILTER_CNF
typedef struct
{
    LOCAL_PARA_HDR
    
    ddm_res_enum res_code;
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
}d2rm_ddm_set_packet_filter_cnf_struct;
//MSG_ID_D2RM_DDM_GET_PACKET_FILTER_CNF
typedef struct
{
    LOCAL_PARA_HDR
    
    ddm_res_enum res_code;
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_packet_filter_cnf_struct;
//MSG_ID_D2RM_DDM_MODIFY_DATA_CALL_CNF
typedef struct
{
    LOCAL_PARA_HDR
    
    ddm_res_enum res_code;
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
}d2rm_ddm_modify_data_call_cnf_struct;

// MSG_ID_D2RM_DDM_GET_RETRYTMR_CNF
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    d2rm_ddm_retry_info_struct retry_info; 

    /* private part */
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_retrytmr_cnf_struct;

// MSG_ID_D2RM_DDM_SET_RETRYTMR_CNF
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_char apn[APN_STRING_LEN];
    kal_bool is_succ;

    /* private part */
    d2pm_ddm_comm_cnf_prv_struct d2pm_ddm_prv;
}d2rm_ddm_set_retrytmr_cnf_struct;

// MSG_ID_D2RM_DDM_GET_EPDG_INFO_CNF
typedef struct
{
    LOCAL_PARA_HDR

    kal_int32 cid;    
    kal_bool is_success;
}d2rm_ddm_get_epdg_info_cnf_struct;


/*******************************************************************************
* DDM TO D2RM IND                                                              *
*******************************************************************************/


// MSG_ID_D2RM_DDM_ACT_DATA_CALL_IND
typedef d2rm_ddm_act_data_call_cnf_prv_struct d2rm_ddm_act_data_call_ind_prv_struct;
typedef struct
{
    LOCAL_PARA_HDR

    /*common part*/
    kal_uint32 cid;
    kal_uint8 apn[APN_STRING_LEN];
#if 0
/* under construction !*/
/* under construction !*/
#endif
    d2rm_ddm_ip_info_struct ip_info;
    d2rm_ddm_net_info_struct net_info;
    ddm_res_enum res_code;
    /* private part */
    d2rm_ddm_act_data_call_ind_prv_struct d2rm_ddm_prv;
    d2pm_ddm_act_data_call_ind_prv_struct d2pm_ddm_prv;
}d2rm_ddm_act_data_call_ind_struct;
typedef struct
{
    LOCAL_PARA_HDR

    /* common part */
    kal_bool apn_present;
    kal_uint8 apn[APN_STRING_LEN];
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    kal_bool ip_info_present;
    d2rm_ddm_ip_info_struct ip_info;
    kal_bool net_info_present;
    d2rm_ddm_net_info_struct net_info;
    at_cgev_ind_struct cgev_cmd;
    kal_uint32 cid;
    ps_cause_enum deact_cause;
    /*private part */
    d2pm_ddm_urc_cgev_ind_prv_struct d2pm_ddm_prv;
}d2rm_ddm_urc_cgev_ind_struct;

// MSG_ID_D2RM_DDM_GET_DATA_CALL_LIST_IND
typedef struct
{
    LOCAL_PARA_HDR

    at_cgact_ind_struct cmd;
    d2pm_ddm_comm_ind_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_data_call_list_ind_struct;

// MSG_ID_D2RM_DDM_GET_DYNAMIC_PARAM_IND
typedef struct
{
    LOCAL_PARA_HDR
    
    kal_uint32 cid;
    
    d2pm_ddm_get_dynamic_param_ind_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_dynamic_param_ind_struct;

// MSG_ID_D2RM_DDM_GET_PDP_ADDRESS_IND
typedef struct
{
    LOCAL_PARA_HDR
    
    at_cgpaddr_ind_struct cmd;
    d2pm_ddm_comm_ind_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_pdp_address_ind_struct;

//MSG_ID_D2RM_DDM_GET_SECONDARY_DYNAMIC_PARAM_IND
typedef struct
{
    LOCAL_PARA_HDR
    
    at_cgscontrdp_ind_struct cmd;
    d2pm_ddm_comm_ind_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_secondary_dynamic_param_ind_struct;

// MSG_ID_D2RM_DDM_GET_QOS_IND
typedef struct
{
    LOCAL_PARA_HDR
    
    at_cgeqosrdp_ind_struct cmd;
    d2pm_ddm_comm_ind_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_qos_ind_struct;

// MSG_ID_D2RM_DDM_GET_TFT_IND
typedef struct
{
    LOCAL_PARA_HDR
    
    at_cgtftrdp_ind_struct cmd;
    d2pm_ddm_comm_ind_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_tft_ind_struct;

//MSG_ID_D2RM_DDM_GET_PACKET_FILTER_IND
typedef struct
{
    LOCAL_PARA_HDR
    
    at_eglnkpf_ind_struct cmd;
    d2pm_ddm_comm_ind_prv_struct d2pm_ddm_prv;
}d2rm_ddm_get_packet_filter_ind_struct;

// MSG_ID_D2RM_DDM_URC_EGEV_IND
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32 cid;
    kal_uint8 apn[APN_STRING_LEN];
    d2rm_ddm_ip_info_struct ip_info;
    d2rm_ddm_net_info_struct net_info;
    d2rm_ddm_ims_info_struct ims_info;
    /* private part */
    d2pm_ddm_mod_data_call_ind_prv_struct d2pm_ddm_prv;
}d2rm_ddm_mod_data_call_ind_struct;

// MSG_ID_D2RM_DDM_RST_RETRYTMR_IND
typedef struct{
    LOCAL_PARA_HDR
    
    /* common part */
    kal_bool apn_present;
    kal_char apn[APN_STRING_LEN];
    kal_uint32 cause; //TBD: if needed
    
    /* private part */
    d2pm_ddm_comm_ind_prv_struct d2pm_ddm_prv;
}d2rm_ddm_rst_retrytmr_ind_struct;

// MSG_ID_D2RM_DDM_GET_EPDG_INFO_IND
typedef struct
{
    LOCAL_PARA_HDR

    kal_int32 cid;
    ip_info_struct ip_info;
}d2rm_ddm_get_epdg_info_ind_struct;
/*******************************************************************************
* D2RM TO DDM RSP                                                              *
*******************************************************************************/

#endif

