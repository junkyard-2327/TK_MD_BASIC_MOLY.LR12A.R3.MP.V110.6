/*******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2013
 *
 ******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   d2cm_custom_utility.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *   
 *
 ******************************************************************************/
 
#ifndef __D2CM_CUSTOM_UTILITY_H__
#define __D2CM_CUSTOM_UTILITY_H__

#include "kal_public_defs.h"
#include "d2cm_public_defs.h"
#include "d2cm_struct.h"

// Type definitions
typedef enum
{
    // a single CID or the final CID 
    D2CM_API_RES_NONE = D2CM_RES_NONE, 
    D2CM_API_RES_FAIL = D2CM_RES_FAIL,
    D2CM_API_RES_SUCC = D2CM_RES_SUCC,
    // a subsequent CID
    D2CM_API_RES_FAIL_ABORT = D2CM_RES_FAIL_ABORT,
    D2CM_API_RES_SUCC_ABORT = D2CM_RES_SUCC_ABORT,
    D2CM_API_RES_FAIL_CONT = D2CM_RES_FAIL_CONT,
    D2CM_API_RES_SUCC_CONT = D2CM_RES_SUCC_CONT,
    // otherwise
    D2CM_API_RES_REJ = D2CM_RES_REJ,
    D2CM_API_RES_RETRY = D2CM_RES_RETRY,
    D2CM_API_RES_MAX = 0x7FFFFFFF
}d2cm_api_res_enum;

typedef void (*d2cm_event_cb_t) (kal_uint32 ps_id, d2cm_event_ind_struct *ind_ptr, void *arg);
typedef void (*d2cm_get_pdn_profile_cb_t) (kal_uint32 ps_id, d2cm_get_pdn_profile_ind_struct *ind_ptr, void *arg);
typedef void (*d2cm_act_data_call_cb_t) (kal_uint32 ps_id, d2cm_act_data_call_cnf_struct *cnf_ptr, void *arg);
typedef void (*d2cm_deact_data_call_cb_t) (kal_uint32 ps_id, d2cm_deact_data_call_cnf_struct *cnf_ptr, void *arg);
#if 0
/* under construction !*/
#endif
typedef void (*d2cm_pre_act_data_call_cb_t) (kal_uint32 ps_id, d2cm_act_data_call_req_struct *req_ptr, void *arg);
typedef void (*d2cm_post_act_data_call_cb_t) (kal_uint32 ps_id, d2cm_act_data_call_cnf_struct *cnf_ptr, void *arg);
typedef void (*d2cm_pre_deact_data_call_cb_t) (kal_uint32 ps_id, d2cm_deact_data_call_req_struct *req_ptr, void *arg);
typedef void (*d2cm_post_deact_data_call_cb_t) (kal_uint32 ps_id, d2cm_deact_data_call_cnf_struct *cnf_ptr, void *arg);

// Macros
// N/A

// Functions
extern d2cm_api_res_enum d2cm_search_pdn_profile_by_apn_idx (kal_uint32 ps_id, module_type mod_id, const kal_char *apn, kal_int32 apn_idx, d2cm_get_pdn_profile_ind_struct *ind_ptr);
extern d2cm_api_res_enum d2cm_search_pdn_profile_by_cid (kal_uint32 ps_id, module_type mod_id, kal_int32 cid, d2cm_get_pdn_profile_ind_struct *ind_ptr);
extern d2cm_api_res_enum d2cm_get_pdn_profile (kal_uint32 ps_id, module_type mod_id, d2cm_get_pdn_profile_req_struct *req_ptr, d2cm_get_pdn_profile_cb_t hook_fp, void* arg);
extern d2cm_api_res_enum d2cm_act_data_call (kal_uint32 ps_id, module_type mod_id, d2cm_act_data_call_req_struct *req_ptr, d2cm_act_data_call_cb_t hook_fp, void* arg);
extern d2cm_api_res_enum d2cm_deact_data_call (kal_uint32 ps_id, module_type mod_id, d2cm_deact_data_call_req_struct *req_ptr, d2cm_deact_data_call_cb_t hook_fp, void* arg);
extern d2cm_api_res_enum d2cm_reg_event_cb (kal_uint32 ps_id, module_type mod_id, d2cm_event_enum event, d2cm_event_cb_t cb, void *arg);
extern d2cm_api_res_enum d2cm_dereg_event_cb (kal_uint32 ps_id, module_type mod_id, d2cm_event_enum event);
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
extern d2cm_api_res_enum d2cm_reg_post_act_data_call_cb (kal_uint32 ps_id, module_type mod_id, d2cm_post_act_data_call_cb_t cb, void *arg);
extern d2cm_api_res_enum d2cm_dereg_post_act_data_call_cb (kal_uint32 ps_id, module_type mod_id);
extern d2cm_api_res_enum d2cm_reg_post_deact_data_call_cb (kal_uint32 ps_id, module_type mod_id, d2cm_post_deact_data_call_cb_t cb, void *arg);
extern d2cm_api_res_enum d2cm_dereg_post_deact_data_call_cb (kal_uint32 ps_id, module_type mod_id);
    
#endif
