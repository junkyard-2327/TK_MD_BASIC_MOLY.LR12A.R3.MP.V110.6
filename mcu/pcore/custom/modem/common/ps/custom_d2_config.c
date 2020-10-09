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
*  LAWS PRINIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#if defined(__MTK_TARGET__) || defined(__NANO_UT__)
#include <string.h>
#else
#include <windows.h>
#include <shlwapi.h>
#define strcasecmp _stricmp
#define strcasestr StrStrI
#endif

#include <stdlib.h>

#include "custom_d2_config.h"
#include "md_sap.h"
#include "d2_msgid.h"
#include "sim_public_api.h"
#include "sbp_public_utility.h"
//#include "ccci_if.h" //for SBP ccci misc info
#include "ps_public_utility.h"
#include "pdn_public_defs.h"
#include "d2cm_public_defs.h"
//#include "gmss_public.h"

#include "d2pm_d2rm_struct.h"
#include "rmmi_common_enum.h"
#include "d2cm_struct.h"
#include "d2pm_struct.h"
#include "d2cm_custom_utility.h"
#include "l4_ps_api.h"

event_scheduler *custom_d2_event_scheduler[MAX_SIM_NUM];
ddm_deact_dangling_cid_ptr ddm_deact_dangling_cid_func_ptr;
ddm_deact_used_cid_ptr ddm_deact_used_cid_func_ptr;
ddm_reset_retry_timer_on_apn_config_change_func_ptr ddm_reset_retry_timer_on_apn_config_change_callback;


// Type definitions
extern kal_bool is_wifi_en(kal_uint8 ps_id);

extern kal_uint32 default_sbp_id;

static void DTAG_dual_apn(kal_uint8);
static kal_bool hasOperatorId(const char *apn_full, char *apn_network_id);

// Macros
#define INVALID_INTERNET_CID (0xff)
kal_uint8 internet_cid[MAX_SIM_NUM];


#define MOD_D2VZW    D2CM_CUSTOM_MOD_ID_OP
#ifdef __GEMINI__
#define MOD_D2VZW_2    D2CM_CUSTOM_MOD_ID_OP
#if (GEMINI_PLUS >= 3)
#define MOD_D2VZW_3    D2CM_CUSTOM_MOD_ID_OP
#if (GEMINI_PLUS >= 4)
#define MOD_D2VZW_4    D2CM_CUSTOM_MOD_ID_OP
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */


// Global variables
static kal_bool ddm_deact_cid_state[11];

/*************************************************/
/* ---- D2PM Custom PDN Profile Table Start ---- */
/*************************************************/
d2pm_custom_pdn_profile_struct d2pm_custom_pdn_profile_tbl[] = 
{
/*********************************************************************/
/*                           Built-in Part                           */
/*                        Do NOT modify them.                        */
/*********************************************************************/
    // Emergency
    {"", 0, "emergency", "IPv4v6", "IPv4v6", "", "", D2PM_AUTH_TYPE_CHAP, 131071}, 

/*********************************************************************/
/*                            Custom Part                            */
/*        Caution!Exact one profile for each PS is necessary.        */
/*********************************************************************/
    // N/A
};

int d2pm_iterate_custom_pdn_profile_tbl (unsigned int ps_id, d2pm_custom_pdn_profile_tbl_cb_t cb, void *arg)
{
    int i;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || cb == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_iterate_custom_pdn_profile_tbl(): Invalid argument!!\n");
        goto D2PM_ITERATE_CUSTOM_PDN_PROFILE_TBL_ERR_1;
    }

    // iterating the d2cm_custom_usr_info_tbl
    for(i = 0; i < sizeof(d2pm_custom_pdn_profile_tbl) / sizeof(d2pm_custom_pdn_profile_struct); i++)
    {

// ---- DEBUG ----
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_iterate_custom_pdn_profile_tbl(): before the callback at PS %d!!\n", ps_id);
// ++++ DEBUG ++++

        cb(ps_id, (const d2pm_custom_pdn_profile_struct*)((&d2pm_custom_pdn_profile_tbl[i])), arg);

// ---- DEBUG ----
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_iterate_custom_pdn_profile_tbl(): after the callback at PS %d!!\n", ps_id);
// ++++ DEBUG ++++

    }

    return 0;

    // withdrawing what this function did
D2PM_ITERATE_CUSTOM_PDN_PROFILE_TBL_ERR_1:
    return -1;
}
/***********************************************/
/* ++++ D2PM Custom PDN Profile Table End ++++ */
/***********************************************/


/**********************************************/
/* ---- D2PM Is APN Index Reusable Start ---- */
/**********************************************/
static kal_bool d2pm_is_apn_idx_reusable_cond (unsigned int ps_id, const char *apn, const d2cm_get_pdn_profile_ind_struct *dst_pdn_profile_ptr, const d2cm_get_pdn_profile_ind_struct *src_pdn_profile_ptr);
static kal_bool d2cm_is_apn_idx_reusable_cond (unsigned int ps_id, const char *apn, const d2cm_get_pdn_profile_ind_struct *dst_pdn_profile_ptr, const d2cm_get_pdn_profile_ind_struct *src_pdn_profile_ptr);
static kal_bool d2rm_is_apn_idx_reusable_cond (unsigned int ps_id, const char *apn, const d2cm_get_pdn_profile_ind_struct *dst_pdn_profile_ptr, const d2cm_get_pdn_profile_ind_struct *src_pdn_profile_ptr);

static void d2pm_is_apn_idx_reusable_hdl (kal_uint32 ps_id, d2cm_get_pdn_profile_ind_struct *ind_ptr, void *arg)
{
    struct
    {
        const char *apn;
        int dst_apn_idx, src_apn_idx;
        d2cm_get_pdn_profile_ind_struct dst_pdn_profile, src_pdn_profile;
    }*hdl_arg_ptr = arg;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || ind_ptr == NULL || arg == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable_hdl(): Invalid argument!!\n");
        goto D2PM_IS_APN_INDEX_REUSABLE_HDL_ERR_1;
    }

    if(strncasecmp((const char*)(ind_ptr->apn), hdl_arg_ptr->apn, sizeof(ind_ptr->apn)) == 0)
    {
        if(hdl_arg_ptr->dst_apn_idx != -1 && ind_ptr->apn_idx == hdl_arg_ptr->dst_apn_idx)
        {
            memcpy((void*)(&(hdl_arg_ptr->dst_pdn_profile)), (const void*)ind_ptr, sizeof(hdl_arg_ptr->dst_pdn_profile));
            hdl_arg_ptr->dst_apn_idx = -1;
        }
        else if(hdl_arg_ptr->src_apn_idx != -1 && ind_ptr->apn_idx == hdl_arg_ptr->src_apn_idx)
        {
            memcpy((void*)(&(hdl_arg_ptr->src_pdn_profile)), (const void*)ind_ptr, sizeof(hdl_arg_ptr->src_pdn_profile));
            hdl_arg_ptr->src_apn_idx = -1;
        }
    }

    return;

    // withdrawing what this function did
D2PM_IS_APN_INDEX_REUSABLE_HDL_ERR_1:
    return;
}

kal_bool d2pm_is_apn_idx_reuseable (unsigned int ps_id, const char *apn, int dst_apn_idx, int src_apn_idx)
{
    d2cm_get_pdn_profile_req_struct req;
    struct
    {
        const char *apn;
        int dst_apn_idx, src_apn_idx;
        d2cm_get_pdn_profile_ind_struct dst_pdn_profile, src_pdn_profile;
    }hdl_arg;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || apn == NULL || dst_apn_idx < 0 || src_apn_idx < 0)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable(): Invalid argument!!\n");
        goto D2PM_IS_APN_IDX_REUSABLE_ERR_1;
    }

    // initializing the variables
    hdl_arg.apn = apn;
    hdl_arg.dst_apn_idx = dst_apn_idx;
    hdl_arg.src_apn_idx = src_apn_idx;

    // getting the PDN profiles
    memset((void*)(&req), 0, sizeof(req));
    req.flag |= D2CM_GET_PDN_PROFILE_REQ_FLAG_INCL_APN_IDX;
    if(d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &req, d2pm_is_apn_idx_reusable_hdl, (void*)(&hdl_arg)) == D2CM_API_RES_FAIL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable(): d2cm_get_pdn_profile() error!!\n");
        goto D2PM_IS_APN_IDX_REUSABLE_ERR_1;
    }

    // checking the dst_apn_idx and src_apn_idx
    if(hdl_arg.dst_apn_idx != -1 || hdl_arg.src_apn_idx != -1)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable(): No data available!!\n");
        goto D2PM_IS_APN_IDX_REUSABLE_ERR_1;
    }

    // comparing whether the src_pdn_profile is reusable to the dst_pdn_profile for D2PM
    if(d2pm_is_apn_idx_reusable_cond(ps_id, apn, (const d2cm_get_pdn_profile_ind_struct *)(&(hdl_arg.dst_pdn_profile)), (const d2cm_get_pdn_profile_ind_struct *)(&(hdl_arg.src_pdn_profile))) == KAL_FALSE)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable(): d2pm_is_apn_idx_reusable_cond() error!!\n");
        goto D2PM_IS_APN_IDX_REUSABLE_ERR_2;
    }
    else if(d2cm_is_apn_idx_reusable_cond(ps_id, apn, (const d2cm_get_pdn_profile_ind_struct *)(&(hdl_arg.dst_pdn_profile)), (const d2cm_get_pdn_profile_ind_struct *)(&(hdl_arg.src_pdn_profile))) == KAL_FALSE)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable(): d2cm_is_apn_idx_reusable_cond() error!!\n");
        goto D2PM_IS_APN_IDX_REUSABLE_ERR_2;
    }
    else if(d2rm_is_apn_idx_reusable_cond(ps_id, apn, (const d2cm_get_pdn_profile_ind_struct *)(&(hdl_arg.dst_pdn_profile)), (const d2cm_get_pdn_profile_ind_struct *)(&(hdl_arg.src_pdn_profile))) == KAL_FALSE)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable(): d2rm_is_apn_idx_reusable_cond() error!!\n");
        goto D2PM_IS_APN_IDX_REUSABLE_ERR_2;
    }

    return KAL_TRUE;

    // withdrawing what this function did
D2PM_IS_APN_IDX_REUSABLE_ERR_2:

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable(): %s(%d vs. %d), %d, %x, %d, %d!!\n", hdl_arg.src_pdn_profile.apn, hdl_arg.dst_pdn_profile.apn_idx, hdl_arg.src_pdn_profile.apn_idx, hdl_arg.src_pdn_profile.state, hdl_arg.src_pdn_profile.p_cid, hdl_arg.src_pdn_profile.fb_cid);
// ++++ DEBUG ++++

    if(hdl_arg.src_pdn_profile.state == D2CM_PDN_STATUS_ACT)
    {
        // deactivating the p_cid
        if(hdl_arg.src_pdn_profile.p_cid != D2CM_INVAL_CID && hdl_arg.src_pdn_profile.num_of_p_cid_usr == 0)
        {

            if(ddm_deact_cid_state[hdl_arg.src_pdn_profile.p_cid] == KAL_FALSE)
            {

// ---- DEBUG ----
                kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable(): CID %d triggerred deactivation or detach!!\n", hdl_arg.src_pdn_profile.p_cid);
// ++++ DEBUG ++++

                custom_ddm_deact_dangling_cid(ps_id, hdl_arg.src_pdn_profile.p_cid, DDM_EVENT_IS_INDEX_CONFLICT);

                // setting the ddm_deact_cid_state
                ddm_deact_cid_state[hdl_arg.src_pdn_profile.p_cid] = KAL_TRUE;
            }

            // deactivating the fb_cid
            if(hdl_arg.src_pdn_profile.fb_cid != D2CM_INVAL_CID && hdl_arg.src_pdn_profile.num_of_fb_cid_usr == 0 && ddm_deact_cid_state[hdl_arg.src_pdn_profile.fb_cid] == KAL_FALSE)
            {

// ---- DEBUG ----
                kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable(): CID %d triggerred deactivation or detach!!\n", hdl_arg.src_pdn_profile.fb_cid);
// ++++ DEBUG ++++

                custom_ddm_deact_dangling_cid(ps_id, hdl_arg.src_pdn_profile.fb_cid, DDM_EVENT_IS_INDEX_CONFLICT);

                // setting the ddm_deact_cid_state
                ddm_deact_cid_state[hdl_arg.src_pdn_profile.fb_cid] = KAL_TRUE;
            }
        }
    }

D2PM_IS_APN_IDX_REUSABLE_ERR_1:
    return KAL_FALSE;
}

static kal_bool d2pm_is_apn_idx_reusable_cond (unsigned int ps_id, const char *apn, const d2cm_get_pdn_profile_ind_struct *dst_pdn_profile_ptr, const d2cm_get_pdn_profile_ind_struct *src_pdn_profile_ptr)
{
    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || apn == NULL || dst_pdn_profile_ptr == NULL || src_pdn_profile_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable_cond(): Invalid argument!!\n");
        goto D2PM_IS_APN_IDX_REUSABLE_COND_ERR_1;
    }

    // checking the pdp_type, NEED_TO_BE_NOTICED, to check the existing ip_info is better
    if(strncasecmp((const char*)(&(dst_pdn_profile_ptr->pdp_type)), "IPv4v6", sizeof(dst_pdn_profile_ptr->pdp_type)) != 0 && \
       strncasecmp((const char*)(&(src_pdn_profile_ptr->pdp_type)), "IPv4v6", sizeof(src_pdn_profile_ptr->pdp_type)) != 0 && \
       strncasecmp((const char*)(&(dst_pdn_profile_ptr->pdp_type)), (const char*)(&(src_pdn_profile_ptr->pdp_type)), sizeof(dst_pdn_profile_ptr->pdp_type)) != 0)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable_cond(): mismatching pdp_type \"%s\" vs. \"%s\"!!\n", (const char*)(dst_pdn_profile_ptr->pdp_type), (const char*)(src_pdn_profile_ptr->pdp_type));
        goto D2PM_IS_APN_IDX_REUSABLE_COND_ERR_1;
    }

    // checking the username and password
    if((dst_pdn_profile_ptr->auth_type == D2PM_AUTH_TYPE_PAP && src_pdn_profile_ptr->auth_type == D2PM_AUTH_TYPE_PAP) && \
       (strncmp((const char*)(&(dst_pdn_profile_ptr->username)), (const char*)(&(src_pdn_profile_ptr->username)), sizeof(src_pdn_profile_ptr->username)) != 0 || \
       strncmp((const char*)(&(dst_pdn_profile_ptr->passwd)), (const char*)(&(src_pdn_profile_ptr->passwd)), sizeof(src_pdn_profile_ptr->passwd)) != 0))
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_idx_reusable_cond(): mismatching auth_type %d vs. %d, or username and password!!\n", dst_pdn_profile_ptr->auth_type, src_pdn_profile_ptr->auth_type);
        goto D2PM_IS_APN_IDX_REUSABLE_COND_ERR_1;
    }

    return KAL_TRUE;

D2PM_IS_APN_IDX_REUSABLE_COND_ERR_1:
    return KAL_FALSE;
}

static kal_bool d2cm_is_apn_idx_reusable_cond (unsigned int ps_id, const char *apn, const d2cm_get_pdn_profile_ind_struct *dst_pdn_profile_ptr, const d2cm_get_pdn_profile_ind_struct *src_pdn_profile_ptr)
{
    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || apn == NULL || dst_pdn_profile_ptr == NULL || src_pdn_profile_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2cm_is_apn_idx_reusable_cond(): Invalid argument!!\n");
        goto D2CM_IS_APN_IDX_REUSABLE_COND_ERR_1;
    }

    return KAL_TRUE;

D2CM_IS_APN_IDX_REUSABLE_COND_ERR_1:
    return KAL_FALSE;
}
/********************************************/
/* ---- D2PM Is APN Index Reusable End ---- */
/********************************************/


/**************************************************/
/* ---- D2CM Custom User Profile Table Start ---- */
/**************************************************/
d2cm_custom_usr_profile_struct d2cm_custom_usr_profile_tbl[][MAX_SIM_NUM] = 
{
/*****************************************************************************/
/*                               Built-in Part                               */
/*                            Do NOT modify them.                            */
/* The mod_id can be the same among PS, but must be different among modules. */
/*****************************************************************************/
    // D2CM
    {
        {MOD_D2CM, ME_D2CM_SAP, D2CM_ATTR_ADMIN_AUTH | D2CM_ATTR_NO_MSG | D2CM_ATTR_NO_NETIF}, 
#ifdef __GEMINI__
        {MOD_D2CM_2, ME_D2CM_SAP, D2CM_ATTR_ADMIN_AUTH | D2CM_ATTR_NO_MSG | D2CM_ATTR_NO_NETIF}, 
#if (GEMINI_PLUS >= 3)
        {MOD_D2CM_3, ME_D2CM_SAP, D2CM_ATTR_ADMIN_AUTH | D2CM_ATTR_NO_MSG | D2CM_ATTR_NO_NETIF}, 
#if (GEMINI_PLUS >= 4)
        {MOD_D2CM_4, ME_D2CM_SAP, D2CM_ATTR_ADMIN_AUTH | D2CM_ATTR_NO_MSG | D2CM_ATTR_NO_NETIF}, 
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
    }, 

    // D2AM
    {
        {MOD_D2AM, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_CB_MSG | D2CM_ATTR_NO_NETIF}, 
#ifdef __GEMINI__
        {MOD_D2AM_2, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_CB_MSG | D2CM_ATTR_NO_NETIF}, 
#if (GEMINI_PLUS >= 3)
        {MOD_D2AM_3, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_CB_MSG | D2CM_ATTR_NO_NETIF}, 
#if (GEMINI_PLUS >= 4)
        {MOD_D2AM_4, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_CB_MSG | D2CM_ATTR_NO_NETIF}, 
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
    }, 

    // ATP
    {
        {MOD_ATP, ATP_D2AT_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_AT_MSG | D2CM_ATTR_AP_NETIF}, 
#ifdef __GEMINI__
        {MOD_ATP_2, ATP_D2AT_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_AT_MSG | D2CM_ATTR_AP_NETIF}, 
#if (GEMINI_PLUS >= 3)
        {MOD_ATP_3, ATP_D2AT_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_AT_MSG | D2CM_ATTR_AP_NETIF}, 
#if (GEMINI_PLUS >= 4)
        {MOD_ATP_4, ATP_D2AT_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_AT_MSG | D2CM_ATTR_AP_NETIF}, 
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
    }, 

    // D2AT
    {
        {MOD_D2AT, ATP_D2AT_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_AT_MSG | D2CM_ATTR_AP_NETIF}, 
#ifdef __GEMINI__
        {MOD_D2AT_2, ATP_D2AT_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_AT_MSG | D2CM_ATTR_AP_NETIF},  
#if (GEMINI_PLUS >= 3)
        {MOD_D2AT_3, ATP_D2AT_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_AT_MSG | D2CM_ATTR_AP_NETIF}, 
#if (GEMINI_PLUS >= 4)
        {MOD_D2AT_4, ATP_D2AT_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_AT_MSG | D2CM_ATTR_AP_NETIF}, 
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
    }, 

    // IMSM
    {
        {MOD_IMSM, IMSM_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF}, 
#ifdef __GEMINI__
        {MOD_IMSM_2, IMSM_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF},  
#if (GEMINI_PLUS >= 3)
        {MOD_IMSM_3, IMSM_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF}, 
#if (GEMINI_PLUS >= 4)
        {MOD_IMSM_4, IMSM_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF}, 
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
    }, 

    // SSDS
    {
        {MOD_SSDS, SSDS_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF}, 
#ifdef __GEMINI__
        {MOD_SSDS_2, SSDS_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF},  
#if (GEMINI_PLUS >= 3)
        {MOD_SSDS_3, SSDS_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF}, 
#if (GEMINI_PLUS >= 4)
        {MOD_SSDS_4, SSDS_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF}, 
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
    }, 

#ifdef __BIP_SUPPORT__
    // BIP
    {
        {MOD_BIP_CONN_MGR, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_MD_NETIF}, 
#ifdef __GEMINI__
        {MOD_BIP_CONN_MGR, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_MD_NETIF},  
#if (GEMINI_PLUS >= 3)
        {MOD_BIP_CONN_MGR, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_MD_NETIF}, 
#if (GEMINI_PLUS >= 4)
        {MOD_BIP_CONN_MGR, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_MD_NETIF}, 
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
    }, 
#endif /* __BIP_SUPPORT__ */

#ifdef __XCAP_SUPPORT__
    // XCAP
    {
        {MOD_XCAP_CM, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF}, 
#ifdef __GEMINI__
        {MOD_XCAP_CM, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF},  
#if (GEMINI_PLUS >= 3)
        {MOD_XCAP_CM, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF}, 
#if (GEMINI_PLUS >= 4)
        {MOD_XCAP_CM, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF}, 
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
    }, 
#endif /* __XCAP_SUPPORT__ */

    // MOD_SIM
    {
        {MOD_SIM, ME_D2CM_SAP, D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF}, 
#ifdef __GEMINI__
        {MOD_SIM_2, ME_D2CM_SAP, D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF},  
#if (GEMINI_PLUS >= 3)
        {MOD_SIM_3, ME_D2CM_SAP, D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF}, 
#if (GEMINI_PLUS >= 4)
        {MOD_SIM_4, ME_D2CM_SAP, D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_ILM_MSG | D2CM_ATTR_AP_NETIF}, 
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
    }, 

/*********************************************************************/
/*                            Custom Part                            */
/*        Caution!Exact one profile for each PS is necessary.        */
/*********************************************************************/
    // D2 Data UT
    {
        {D2CM_CUSTOM_MOD_ID_UT, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_CB_MSG | D2CM_ATTR_NO_NETIF}, 
#ifdef __GEMINI__
        {D2CM_CUSTOM_MOD_ID_UT, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_CB_MSG | D2CM_ATTR_NO_NETIF},  
#if (GEMINI_PLUS >= 3)
        {D2CM_CUSTOM_MOD_ID_UT, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_CB_MSG | D2CM_ATTR_NO_NETIF}, 
#if (GEMINI_PLUS >= 4)
        {D2CM_CUSTOM_MOD_ID_UT, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_CB_MSG | D2CM_ATTR_NO_NETIF}, 
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
    }, 


    // Operator-specific
    {
        {D2CM_CUSTOM_MOD_ID_OP, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_CB_MSG | D2CM_ATTR_NO_NETIF}, 
#ifdef __GEMINI__
        {D2CM_CUSTOM_MOD_ID_OP, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_CB_MSG | D2CM_ATTR_NO_NETIF},  
#if (GEMINI_PLUS >= 3)
        {D2CM_CUSTOM_MOD_ID_OP, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_CB_MSG | D2CM_ATTR_NO_NETIF}, 
#if (GEMINI_PLUS >= 4)
        {D2CM_CUSTOM_MOD_ID_OP, ME_D2CM_SAP, D2CM_ATTR_PDN_AUTH | D2CM_ATTR_EVENT_AUTH | D2CM_ATTR_CB_MSG | D2CM_ATTR_NO_NETIF}, 
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
    }, 
};

size_t d2cm_sizeof_custom_usr_profile_tbl ()
{
    return sizeof(d2cm_custom_usr_profile_tbl) / sizeof(d2cm_custom_usr_profile_struct);
}

d2cm_custom_usr_profile_struct* d2cm_search_custom_usr_profile_tbl_by_mod (unsigned int ps_id, module_type mod_id)
{
    int i, j;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM)
    {
        kal_prompt_trace(MOD_D2CM + ps_id, "d2cm_search_custom_usr_profile_tbl_by_mod(): Invalid argument!!\n");
        goto D2CM_SEARCH_CUSTOM_USR_PROFILE_TBL_BY_MOD_ERR_1;
    }

    // searching the d2cm_custom_usr_info_tbl
    for(i = 0; i < sizeof(d2cm_custom_usr_profile_tbl) / (sizeof(d2cm_custom_usr_profile_struct) * MAX_SIM_NUM); i++)
    {
        for(j = 0; j < MAX_SIM_NUM; j++)
            if(d2cm_custom_usr_profile_tbl[i][j].mod_id == mod_id)
                break;
        if(j < MAX_SIM_NUM)
            break;
    }    

    if(i >= sizeof(d2cm_custom_usr_profile_tbl) / (sizeof(d2cm_custom_usr_profile_struct) * MAX_SIM_NUM))
    {
        kal_prompt_trace(MOD_D2CM + ps_id, "d2cm_search_custom_usr_profile_tbl_by_mod(): Invalid request code %d!!\n", mod_id);
        goto D2CM_SEARCH_CUSTOM_USR_PROFILE_TBL_BY_MOD_ERR_1;
    }

    return &(d2cm_custom_usr_profile_tbl[i][ps_id]);

    // withdrawing what this function did
D2CM_SEARCH_CUSTOM_USR_PROFILE_TBL_BY_MOD_ERR_1:
    return NULL;
}

int d2cm_iterate_custom_usr_profile_tbl (unsigned int ps_id, d2cm_custom_usr_profile_tbl_cb_t cb, void *arg)
{
    int i;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || cb == NULL)
    {
        kal_prompt_trace(MOD_D2CM, "d2cm_iterate_custom_usr_profile_tbl(): Invalid argument!!\n");
        goto D2CM_ITERATE_CUSTOM_USR_PROFILE_TBL_ERR_1;
    }

    // iterating the d2cm_custom_usr_info_tbl
    for(i = 0; i < sizeof(d2cm_custom_usr_profile_tbl) / (sizeof(d2cm_custom_usr_profile_struct) * MAX_SIM_NUM); i++)
    {

// ---- DEBUG ----
        kal_prompt_trace(MOD_D2CM + ps_id, "d2cm_iterate_custom_usr_profile_tbl(): before the callback at PS %d!!\n", ps_id);
// ++++ DEBUG ++++

        cb(ps_id, (const d2cm_custom_usr_profile_struct*)((&d2cm_custom_usr_profile_tbl[i][ps_id])), arg);

// ---- DEBUG ----
        kal_prompt_trace(MOD_D2CM + ps_id, "d2cm_iterate_custom_usr_profile_tbl(): after the callback at PS %d!!\n", ps_id);
// ++++ DEBUG ++++

    }

    return 0;

    // withdrawing what this function did
D2CM_ITERATE_CUSTOM_USR_PROFILE_TBL_ERR_1:
    return -1;
}
/************************************************/
/* ++++ D2CM Custom User Profile Table End ++++ */
/************************************************/


/******************************/
/* ---- VzW Custom Start ---- */
/******************************/
static void vzw_d2cm_is_vzw_hdl (kal_uint32 ps_id, d2cm_get_pdn_profile_ind_struct *ind_ptr, void *arg)
{
    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || arg == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_is_vzw_hdl(): Invalid argument!!\n");
        goto VZW_D2CM_DEACT_DATA_CALL_HDL_ERR_1;
    }

#if defined(__MTK_TARGET__) || defined(__NANO_UT__)
    if((*((kal_bool*)arg) == KAL_FALSE && strcasestr(ind_ptr->apn, "VzW") != NULL) || (*((kal_bool*)arg) == KAL_FALSE && strcasestr(ind_ptr->apn, "VSBL") != NULL))
#else
    if((*((kal_bool*)arg) == KAL_FALSE && StrStrI(ind_ptr->apn, "VzW") != NULL) || (*((kal_bool*)arg) == KAL_FALSE && StrStrI(ind_ptr->apn, "VSBL") != NULL))
#endif
    {

// ---- DEBUG ----
        kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_is_vzw_hdl(VzW): APN \"%s\" has been found!!\n", ind_ptr->apn);
// ++++ DEBUG ++++

        *((kal_bool*)arg) = KAL_TRUE;
    }

    return;
    
    // withdrawing what this function did
VZW_D2CM_DEACT_DATA_CALL_HDL_ERR_1:
    return;
}

static void vzw_d2cm_deact_data_call_hdl (kal_uint32 ps_id, d2cm_deact_data_call_cnf_struct *cnf_ptr, void *arg)
{
//    int i;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || cnf_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_deact_data_call_hdl(): Invalid argument!!\n");
        goto VZW_D2CM_DEACT_DATA_CALL_HDL_ERR_1;
    }

// ---- DEBUG ----
    if(d2cm_get_normal_res(cnf_ptr->res) == D2CM_RES_FAIL)
        kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_deact_data_call_hdl(VzW): deactivating CID %d has failed with cause %d!!\n", cnf_ptr->cid, d2cm_get_esm_cause(cnf_ptr->res));
    else
        kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_deact_data_call_hdl(VzW): deactivating CID %d has succeeded!!\n", cnf_ptr->cid);
// ++++ DEBUG ++++

    return;
    
    // withdrawing what this function did
VZW_D2CM_DEACT_DATA_CALL_HDL_ERR_1:
    return;
}

static void vzw_d2cm_pdn_profile_chg_hdl (kal_uint32 ps_id, d2cm_get_pdn_profile_ind_struct *ind_ptr, void *arg)
{
    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || ind_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_pdn_profile_chg_hdl(): Invalid argument!!\n");
        goto VZW_D2CM_PDN_PROFILE_CHG_HDL_ERR_1;
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_pdn_profile_chg_hdl(VzW): %s, %u!!\n", ind_ptr->apn, ind_ptr->op.vzw.apncl);
// ++++ DEBUG ++++

    if((ind_ptr->flag & D2CM_GET_PDN_PROFILE_IND_FLAG_UNUSABLE) != 0)
    {
        // deactivating the p_cid
        if(ind_ptr->p_cid != D2CM_INVAL_CID)
        {
            d2cm_deact_data_call_req_struct req;

            memset((void*)(&req), 0, sizeof(req));
            req.cid = ind_ptr->p_cid;
            req.reason = ATCMD_DEACT_CAUSE_EGACT_CAUSE_DEACT_NORMAL;
            if(d2cm_deact_data_call(ps_id, MOD_D2VZW, &req, vzw_d2cm_deact_data_call_hdl, NULL) == D2CM_API_RES_FAIL)
            {
                kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_pdn_profile_chg_hdl(): d2cm_deact_data_call() error!!\n");
                goto VZW_D2CM_PDN_PROFILE_CHG_HDL_ERR_1;
            }

            // deactivating the fb_cid
            if(ind_ptr->fb_cid != D2CM_INVAL_CID)
            {
                memset((void*)(&req), 0, sizeof(req));
                req.cid = ind_ptr->fb_cid;
                req.reason = ATCMD_DEACT_CAUSE_EGACT_CAUSE_DEACT_NORMAL;
                if(d2cm_deact_data_call(ps_id, MOD_D2VZW, &req, vzw_d2cm_deact_data_call_hdl, NULL) == D2CM_API_RES_FAIL)
                {
                    kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_pdn_profile_chg_hdl(): d2cm_deact_data_call() error!!\n");
                    goto VZW_D2CM_PDN_PROFILE_CHG_HDL_ERR_1;
                }
            }
        }
    }

    return;
    
    // withdrawing what this function did
VZW_D2CM_PDN_PROFILE_CHG_HDL_ERR_1:
    return;
}

static void vzw_d2cm_ipv6_no_ra_hdl (kal_uint32 ps_id, d2cm_get_pdn_profile_ind_struct *ind_ptr, void *arg)
{
    struct
    {
        void *arg;
        atcmd_deact_cause_enum deact_cause;
    }*hdl_arg = arg;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || ind_ptr == NULL || arg == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_ipv6_no_ra_hdl(): Invalid argument!!\n");
        goto VZW_D2CM_IPV6_NO_RA_HDL_ERR_1;
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_ipv6_no_ra_hdl(VzW): %s, %u!!\n", ind_ptr->apn, ind_ptr->op.vzw.apncl);
// ++++ DEBUG ++++

    // deactivating the p_cid
    if(ind_ptr->p_cid != D2CM_INVAL_CID)
    {
        d2cm_deact_data_call_req_struct req;

        memset((void*)(&req), 0, sizeof(req));
        req.cid = ind_ptr->p_cid;
        req.reason = hdl_arg->deact_cause;
        if(d2cm_deact_data_call(ps_id, MOD_D2VZW, &req, vzw_d2cm_deact_data_call_hdl, NULL) == D2CM_API_RES_FAIL)
        {
            kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_ipv6_no_ra_hdl(): d2cm_deact_data_call() error!!\n");
            goto VZW_D2CM_IPV6_NO_RA_HDL_ERR_1;
        }

        // deactivating the fb_cid
        if(ind_ptr->fb_cid != D2CM_INVAL_CID)
        {
            memset((void*)(&req), 0, sizeof(req));
            req.cid = ind_ptr->fb_cid;
            req.reason = hdl_arg->deact_cause;
            if(d2cm_deact_data_call(ps_id, MOD_D2VZW, &req, vzw_d2cm_deact_data_call_hdl, NULL) == D2CM_API_RES_FAIL)
            {
                kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_ipv6_no_ra_hdl(): d2cm_deact_data_call() error!!\n");
                goto VZW_D2CM_IPV6_NO_RA_HDL_ERR_1;
            }
        }
    }

    return;
    
    // withdrawing what this function did
VZW_D2CM_IPV6_NO_RA_HDL_ERR_1:
    return;
}

static void vzw_d2cm_post_act_data_call_hdl (kal_uint32 ps_id, d2cm_get_pdn_profile_ind_struct *ind_ptr, void *arg)
{
    d2cm_deact_data_call_req_struct req;
    struct
    {
        d2cm_act_data_call_cnf_struct *act_data_call_cnf_ptr;
        void *arg;
    }*hdl_arg = arg;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || ind_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_post_act_data_call_hdl(): Invalid argument!!\n");
        goto VZW_D2CM_POST_ACT_DATA_CALL_HDL_ERR_1;
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_post_act_data_call_hdl(VzW): %s, %u!!\n", ind_ptr->apn, ind_ptr->op.vzw.apncl);
// ++++ DEBUG ++++

    // deactivating the p_cid
    if(ind_ptr->p_cid == hdl_arg->act_data_call_cnf_ptr->cid && ind_ptr->rat_type == IWLAN_RAN_MOBILE_3GPP)
    {
        memset((void*)(&req), 0, sizeof(req));
        req.cid = ind_ptr->p_cid;
        req.reason = ATCMD_DEACT_CAUSE_EGACT_CAUSE_DEACT_NO_PCSCF;
        if(d2cm_deact_data_call(ps_id, MOD_D2VZW, &req, vzw_d2cm_deact_data_call_hdl, NULL) == D2CM_API_RES_FAIL)
        {
            kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_post_act_data_call_hdl(): d2cm_deact_data_call() error!!\n");
            goto VZW_D2CM_POST_ACT_DATA_CALL_HDL_ERR_1;
        }
    }

    // deactivating the fb_cid
    if(ind_ptr->fb_cid == hdl_arg->act_data_call_cnf_ptr->cid)
    {
        memset((void*)(&req), 0, sizeof(req));
        req.cid = ind_ptr->fb_cid;
        req.reason = ATCMD_DEACT_CAUSE_EGACT_CAUSE_DEACT_NO_PCSCF;
        if(d2cm_deact_data_call(ps_id, MOD_D2VZW, &req, vzw_d2cm_deact_data_call_hdl, NULL) == D2CM_API_RES_FAIL)
        {
            kal_prompt_trace(MOD_D2CUST + ps_id, "vzw_d2cm_post_act_data_call_hdl(): d2cm_deact_data_call() error!!\n");
            goto VZW_D2CM_POST_ACT_DATA_CALL_HDL_ERR_1;
        }
    }

    return;
    
    // withdrawing what this function did
VZW_D2CM_POST_ACT_DATA_CALL_HDL_ERR_1:
    return;
}
/****************************/
/* ++++ VzW Custom End ++++ */
/****************************/


/*****************************************/
/* ---- DDM Forced DEACT CID Start  ---- */
/*****************************************/
static void ddm_pdn_profile_chg_hdl (kal_uint32 ps_id, d2cm_get_pdn_profile_ind_struct *ind_ptr, void *arg)
{
    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || ind_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "ddm_pdn_profile_chg_hdl(): Invalid argument!!\n");
        goto DDM_PDN_PROFILE_CHG_HDL_ERR_1;
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "ddm_pdn_profile_chg_hdl(): %s(%d), %d, %x, %d, %d!!\n", ind_ptr->apn, ind_ptr->apn_idx, ind_ptr->state, ind_ptr->flag, ind_ptr->p_cid, ind_ptr->fb_cid);
// ++++ DEBUG ++++

    if(ind_ptr->state == D2CM_PDN_STATUS_ACT && (ind_ptr->flag & D2CM_GET_PDN_PROFILE_IND_FLAG_UNUSABLE) != 0)    // NEED_TO_BE_NOTICED, equal to APN has been deleted? Carefully review it!
    {
        // deactivating the p_cid
        if(default_sbp_id == 1 && (test_mode_consider_sim(ps_id) == PS_CONF_TEST_FTA))
        {
            kal_prompt_trace(MOD_D2CUST + ps_id, "Don't trigger deactivation or detach when cmcc + FTA mode!!\n");
        }
        else if(ind_ptr->p_cid != D2CM_INVAL_CID && ind_ptr->num_of_p_cid_usr == 0)
        {

            if(ddm_deact_cid_state[ind_ptr->p_cid] == KAL_FALSE)
            {

// ---- DEBUG ----
                kal_prompt_trace(MOD_D2CUST + ps_id, "ddm_pdn_profile_chg_hdl(): CID %d triggerred deactivation or detach!!\n", ind_ptr->p_cid);
// ++++ DEBUG ++++

                custom_ddm_deact_dangling_cid(ps_id, ind_ptr->p_cid, DDM_EVENT_IS_CLEAN_TABLE);

                // setting the ddm_deact_cid_state
                ddm_deact_cid_state[ind_ptr->p_cid] = KAL_TRUE;
            }

            // deactivating the fb_cid
            if(ind_ptr->fb_cid != D2CM_INVAL_CID && ind_ptr->num_of_fb_cid_usr == 0 && ddm_deact_cid_state[ind_ptr->fb_cid] == KAL_FALSE)
            {

// ---- DEBUG ----
                kal_prompt_trace(MOD_D2CUST + ps_id, "ddm_pdn_profile_chg_hdl(): CID %d triggerred deactivation or detach!!\n", ind_ptr->fb_cid);
// ++++ DEBUG ++++

                custom_ddm_deact_dangling_cid(ps_id, ind_ptr->fb_cid, DDM_EVENT_IS_CLEAN_TABLE);

                // setting the ddm_deact_cid_state
                ddm_deact_cid_state[ind_ptr->fb_cid] = KAL_TRUE;
            }
        }
    }

    // Check if need to reset retry timer, when APN config change
    ddm_reset_retry_timer_on_apn_config_change_callback(ps_id, sbp_get_sim_sbp_id(ps_id), ind_ptr->apn);

    return;
    
    // withdrawing what this function did
DDM_PDN_PROFILE_CHG_HDL_ERR_1:
    return;
}


/***************************************/
/* ++++ DDM Forced DEACT CID End  ++++ */
/***************************************/


/**************************/
/* DTAG Dual APN Start */
/**************************/
static kal_uint8 current_ps_id[MAX_SIM_NUM];
static rat_enum current_attached_rat[MAX_SIM_NUM];
static kal_uint8 current_is_roaming[MAX_SIM_NUM];
static kal_uint8 current_plmn[MAX_SIM_NUM][MAX_PLMN_LEN+1];
static kal_uint8 nodata_name[MAX_SIM_NUM][APN_STRING_LEN];
static rat_enum last_attached_rat[MAX_SIM_NUM];
static kal_uint8 last_is_roaming[MAX_SIM_NUM];
typedef enum {
    NODATA_TARGET_STATE_DEACT = 0,
    NODATA_TARGET_STATE_ACT,
} nodata_target_state_enum;
static nodata_target_state_enum nodata_target_state[MAX_SIM_NUM];
typedef enum {
    NODATA_STATE_IDLE = 0,
    NODATA_STATE_ACTING,
    NODATA_STATE_TIMER,
} nodata_state_enum;
static nodata_state_enum nodata_state[MAX_SIM_NUM];
static kal_uint32 nodata_retry_count[MAX_SIM_NUM];
static d2cm_act_data_call_req_struct dtag_act_data_call_req[MAX_SIM_NUM];
static eventid nodata_evid[MAX_SIM_NUM];

d2cm_act_data_call_req_struct *dtag_act_data_call_req_ptr = &dtag_act_data_call_req[0];

static char dtag_dual_apn_list[][MAX_PLMN_LEN+1] = {
#if 0 //For DEBUG only
/* under construction !*/
#endif
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
"ZZZZZ",
};
static int dtag_dual_apn_list_sz = sizeof(dtag_dual_apn_list)/(MAX_PLMN_LEN+1);
static void DTAG_dual_apn_act_data_call(kal_uint8 ps_id, d2cm_act_data_call_req_struct *req_ptr);

static void DTAG_dual_apn_act_data_call_timer(void *param)
{
    kal_uint8 ps_id = *(kal_uint8 *)param;

    kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG dual apn timer expired");
    if (nodata_target_state[ps_id] == NODATA_TARGET_STATE_ACT) { 
        DTAG_dual_apn_act_data_call(ps_id, &dtag_act_data_call_req[ps_id]);
    } else {
        nodata_state[ps_id] = NODATA_STATE_IDLE;
    }
}

static void DTAG_dual_apn_act_data_call_cb(kal_uint32 ps_id, d2cm_act_data_call_cnf_struct *cnf_ptr, void* arg)
{
    // checking the inputs
    if (ps_id >= MAX_SIM_NUM || cnf_ptr == NULL) {
        kal_prompt_trace(MOD_DAST, "DTAG_dual_apn_act_data_call_cb(): Invalid argument!!\n");
        goto DTAG_DUAL_APN_ACT_DATA_CALL_CB_ERR_1;
    }

    nodata_state[ps_id] = NODATA_STATE_IDLE;

    kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG_dual_apn_act_data_call_cb(): res = %d, cid = %d!!\n", cnf_ptr->res, cnf_ptr->cid);

    //check result
    if (cnf_ptr->res == D2CM_RES_SUCC) {
        return;
    }
    //if not success, check nodata_target_state (keep retry?)
    if (nodata_target_state[ps_id] == NODATA_TARGET_STATE_ACT) {
        kal_uint32 timeout;
        if (nodata_retry_count[ps_id] < 16) {
            timeout = KAL_TICKS_1_SEC;
        } else if (nodata_retry_count[ps_id] < (16 + 32)) {
            timeout = KAL_TICKS_2_SEC;
        } else if (nodata_retry_count[ps_id] < (16 + 32 + 64)) {
            timeout = KAL_TICKS_5_SEC;
        } else {
	    timeout = KAL_TICKS_1_MIN;
        }
        //start a retry timer
        kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG dual apn start timer");
        nodata_state[ps_id] = NODATA_STATE_TIMER;

        nodata_evid[ps_id] = evshed_set_event(custom_d2_event_scheduler[ps_id], (kal_timer_func_ptr)DTAG_dual_apn_act_data_call_timer, (void *)&current_ps_id[ps_id], timeout);
    }

    return;

DTAG_DUAL_APN_ACT_DATA_CALL_CB_ERR_1:
    return;
}

static void DTAG_dual_apn_act_data_call(kal_uint8 ps_id, d2cm_act_data_call_req_struct *req_ptr)
{
    if (nodata_state[ps_id] == NODATA_STATE_ACTING) return; //already activating

    nodata_state[ps_id] = NODATA_STATE_ACTING;
    nodata_retry_count[ps_id]++;

    kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG dual apn retry#%d", nodata_retry_count[ps_id]);

    //save parameters to dtag_act_data_call_req[ps_id]
    if (req_ptr != &dtag_act_data_call_req[ps_id]) {
        memcpy(&dtag_act_data_call_req[ps_id], req_ptr, sizeof(d2cm_act_data_call_req_struct));
        // setting the act_data_call_req
        dtag_act_data_call_req[ps_id].apn_idx = D2CM_ENGAGED_APN_IDX;
        strncpy((char*)(dtag_act_data_call_req[ps_id].apn_type), "default", sizeof(dtag_act_data_call_req[ps_id].apn_type) - 1);
        dtag_act_data_call_req[ps_id].apn_type[sizeof(dtag_act_data_call_req[ps_id].apn_type) - 1] = '\0';
        dtag_act_data_call_req[ps_id].suff_cond = D2CM_SUFF_COND_NONE;
        dtag_act_data_call_req[ps_id].flag = D2CM_ACT_DATA_CALL_REQ_FLAG_DANGLING;
        dtag_act_data_call_req[ps_id].ipv4v6_fb_pref = D2CM_IPV4V6_FB_PREF_DISABLE_IPV4_FIRST;
    }

    // activating the apn
    if (d2cm_act_data_call(ps_id, D2CM_CUSTOM_MOD_ID_OP, &dtag_act_data_call_req[ps_id], DTAG_dual_apn_act_data_call_cb, NULL) == D2CM_API_RES_FAIL) {
        kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG_dual_apn_act_data_call(): Invalid argument!!\n");
        nodata_state[ps_id] = NODATA_STATE_IDLE;
        goto DTAG_DUAL_APN_ACT_DATA_CALL_ERR_1;
    }

    return;

DTAG_DUAL_APN_ACT_DATA_CALL_ERR_1:
    return;
}

static void dtag_get_pdn_profile_cb(kal_uint32 ps_id, d2cm_get_pdn_profile_ind_struct *pdn_profile_ptr, void* arg)
{
    d2cm_act_data_call_req_struct *act_data_call_req_ptr;
    kal_int32 cids[2];

    if (pdn_profile_ptr == NULL || arg == NULL) return;

    act_data_call_req_ptr = (d2cm_act_data_call_req_struct *)arg;
    cids[0] = pdn_profile_ptr->p_cid;
    cids[1] = pdn_profile_ptr->fb_cid;

    //checking the inputs
    if (ps_id >= MAX_SIM_NUM || pdn_profile_ptr == NULL) {
        kal_prompt_trace((MOD_D2CUST + ps_id), "dtag_get_pdn_profile_cb(): Invalid argument!!\n");
        goto DTAG_GET_PDN_PROFILE_CB_ERR_1;
    }

    kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG: p_cid=%d, fb_cid=%d, apn=[%s], state=%d", cids[0], cids[1], pdn_profile_ptr->apn, pdn_profile_ptr->state);

    //name is matched and (cid or f_cid) is invalid/de-activated
    if (strncmp((char *)pdn_profile_ptr->apn, (char *)nodata_name[ps_id], strlen((char *)nodata_name[ps_id])) == 0 &&
        (pdn_profile_ptr->state == D2CM_PDN_STATUS_DEACT) && ((cids[0] == D2CM_INVAL_CID))) {
        strncpy((char *)act_data_call_req_ptr->apn, (char *)pdn_profile_ptr->apn, sizeof(act_data_call_req_ptr->apn) - 1);
        act_data_call_req_ptr->apn[sizeof(act_data_call_req_ptr->apn) - 1] = '\0';
    } 

    return;

DTAG_GET_PDN_PROFILE_CB_ERR_1:
    return;
}

static void DTAG_dual_apn(kal_uint8 ps_id)
{
    int k;
    kal_bool found;

    kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG_dual_apn check");
    //1: check if LTE
    if (current_attached_rat[ps_id] != RAT_LTE) {
        kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG non LTE, skip");
        nodata_target_state[ps_id] = NODATA_TARGET_STATE_DEACT;
        return;
    }

    //2: check HPLMN
    do {
        kal_uint8 l4c_imsi[9] = {0};
        kal_uint8 i = 0, j = 0;
        kal_uint8 ch1, ch2;
        kal_uint8 imsi[17];
        l4csmu_get_imsi_by_idx(l4c_imsi, ps_id);
        while(i < 8) {
            ch1 = l4c_imsi[i] & 0x0f;
            ch2 = (l4c_imsi[i] & 0xf0) >> 4;
            *((kal_uint8*)imsi + j) = '0' + ch1;
            if(0x0f == ch2) {
                *((kal_uint8*)imsi + j + 1) = '\0';
                break;
            } else {
                *((kal_uint8*)imsi + j + 1) = '0'+ch2;
            }
            i++;
            j+=2;
        }
        imsi[16] = '\0';

        //kal_brief_trace(TRACE_GROUP_1, D2CUST_DTAG_IMSI, &imsi[1]);

        found = KAL_FALSE;
        for (k = 0; k < dtag_dual_apn_list_sz; k++) {
            if (strncmp(dtag_dual_apn_list[k], (char *)&imsi[1], strlen(dtag_dual_apn_list[k])) == 0) {
                //kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG Compare [%s] found", dtag_dual_apn_list[k]);
                found = KAL_TRUE;
            } else {
                //kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG Compare [%s] not found", dtag_dual_apn_list[k]);
            }
        }
        if (!found) {
            kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG HPLMN didn't belong to dual apn, skip");
            nodata_target_state[ps_id] = NODATA_TARGET_STATE_DEACT;
            return;
        }
    } while(0);

    //check camped PLMN
    kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG PLMN [%s]", &current_plmn[0]);
    found = KAL_FALSE;
    for (k = 0; k < dtag_dual_apn_list_sz; k++) {
        if (strncmp(dtag_dual_apn_list[k], (char *)&current_plmn[0], strlen(dtag_dual_apn_list[k])) == 0) {
            //kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG Compare [%s] found", dtag_dual_apn_list[k]);
            found = KAL_TRUE;
        } else {
            //kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG Compare [%s] not found", dtag_dual_apn_list[k]);
        }
    }
    if (!found) {
        kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG camped PLMN didn't belong to dual apn, skip");
        nodata_target_state[ps_id] = NODATA_TARGET_STATE_DEACT;
        return;
    }

    //3: check if NODATA PDN exist
    do {
        d2cm_get_pdn_profile_req_struct dtag_get_pdn_profile_req;
        d2cm_act_data_call_req_struct act_data_call_req;

        //get PDN list
        memset((void*)(&dtag_get_pdn_profile_req), 0, sizeof(d2cm_get_pdn_profile_req_struct));

        kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG dual APN state check");
        // initializing the variables
        act_data_call_req.apn[0] = '\0';    // assumed NOT ""
        // searching the pdn_tbl
        if (d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &dtag_get_pdn_profile_req, dtag_get_pdn_profile_cb, &act_data_call_req) == D2CM_API_RES_FAIL) {
            kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG_dual_apn(): Invalid argument!!\n");
            goto DTAG_DUAL_APN_ERR_1;
        }

        if (act_data_call_req.apn[0] != '\0') { //found but it's de-activated
            kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG dual APN deactivated, then activate one %d", nodata_state[ps_id]);

            nodata_target_state[ps_id] = NODATA_TARGET_STATE_ACT;
            if (nodata_state[ps_id] == NODATA_STATE_TIMER) {
                evshed_cancel_event(custom_d2_event_scheduler[ps_id], &nodata_evid[ps_id]);
                nodata_retry_count[ps_id] = 0;
                kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG_dual_apn_act_data_call & cancel old timer");
                DTAG_dual_apn_act_data_call(ps_id, &act_data_call_req);
            } else if (nodata_state[ps_id] == NODATA_STATE_IDLE) {
                nodata_retry_count[ps_id] = 0;
                kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG_dual_apn_act_data_call");
                DTAG_dual_apn_act_data_call(ps_id, &act_data_call_req);
            }

        } else {
            //activating, activated or deactivating
            kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG dual APN activated/activating/deactivating do nothing");
        }
    } while(0);

    return;

DTAG_DUAL_APN_ERR_1:
    return;
}

void custom_d2_ia_success(d2ia_ddm_attach_pdn_activate_success_ind_struct *ind, kal_uint8 ps_id)
{
    char apn_network_id[APN_STRING_LEN];

    //remove suffix
    hasOperatorId((char *)ind->apn, apn_network_id);

    memcpy(nodata_name[ps_id], apn_network_id, APN_STRING_LEN);
    kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG dual APN IA [%s]", nodata_name[ps_id]);
}

void custom_d2_attached_rat_ind(l4bnw_attached_rat_ind_struct *ind, kal_uint8 ps_id)
{
    //save current RAT
    current_attached_rat[ps_id] = ind->attached_network_info.currently_attached_rat;
    current_is_roaming[ps_id] = ind->attached_network_info.is_roaming;
    //save current plmn
    memcpy(current_plmn[ps_id], ind->attached_network_info.plmn, sizeof(ind->attached_network_info.plmn));

    kal_prompt_trace((MOD_D2CUST + ps_id), "DTAG RAT[%s] ps_id=%d %d to %d, roaming %d to %d", current_plmn[ps_id], ps_id, last_attached_rat[ps_id], current_attached_rat[ps_id], last_is_roaming[ps_id], current_is_roaming[ps_id]);

    //DTAG dual APN, When to check dual-APN:
    //Condition1: non-4G to 4G
    //Condition2: 4G and home to roaming
    if (current_attached_rat[ps_id] == RAT_LTE) {
        if (((last_attached_rat[ps_id] != RAT_NONE && last_attached_rat[ps_id] != RAT_LTE)) || 
            ((last_is_roaming[ps_id] == 0) && current_is_roaming[ps_id])) {
            DTAG_dual_apn(ps_id);
        }
    } else {
        nodata_target_state[ps_id] = NODATA_TARGET_STATE_DEACT;
    }

    last_attached_rat[ps_id] = ind->attached_network_info.currently_attached_rat;
    last_is_roaming[ps_id] = ind->attached_network_info.is_roaming;
}

/************************/
/* DTAG Dual APN Code End */
/************************/
static void update_internet_cid(kal_uint8 ps_id, kal_uint8 cid, char *engaged_apn_type, char *profile_apn_type, char *apn_name)
{
    
    kal_uint32 sbp_id;

    // List all the OP IDs, which do not want to keep Internet PDN.
    // Code goes here.
    sbp_id = sbp_get_sim_sbp_id(ps_id);


    // Return from here without updating internet_cid.
    switch (sbp_id)
    {
        case 0:
        // Add more cases here
        {
            if(default_sbp_id == 0) {
                kal_prompt_trace(MOD_D2CUST + ps_id, "update_internet_cid(): test sim and OM.");
                //internet_cid[ps_id] = cid; 
                return;
            }
            break;
        }
        case 1:
        {
#if defined(__MTK_TARGET__) || defined(__NANO_UT__)
            if(NULL == strcasestr(apn_name,"cmnet"))
            {
                kal_prompt_trace(MOD_D2CUST + ps_id, "update_internet_cid(): CMCC_SIM, ignore non-cmnet apn to avoid case fail");
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
                return;
            }
#else
            if(NULL == StrStrI(apn_name,"cmnet"))
            {
                kal_prompt_trace(MOD_D2CUST + ps_id, "update_internet_cid(): CMCC_SIM, ignore non-cmnet apn to avoid case fail");
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
                return;
            }
#endif
            else
            {
                 internet_cid[ps_id] = cid;
                 return;
            }
            break;
        }
        default:
        {
            // Allow this cid.
            break;
        }
    }
    // Check if APN type = "default" for Internet PDN.
#if defined(__MTK_TARGET__) || defined(__NANO_UT__)
    if (((strcasestr((char*)engaged_apn_type, "default")) == NULL) &&
        (!((strcasecmp((char*)engaged_apn_type, "unknown") == 0) && (strcasestr((char*)profile_apn_type, "default"))))) {
        if (cid == internet_cid[ps_id]) 
        {
            internet_cid[ps_id] = INVALID_INTERNET_CID;
        }
        return;
    }
#else
    if (((StrStrI((char*)engaged_apn_type, "default")) == NULL) &&
        (!((strcasecmp((char*)engaged_apn_type, "unknown") == 0) && (StrStrI((char*)profile_apn_type, "default"))))) {
        if (cid == internet_cid[ps_id]) 
        {
            internet_cid[ps_id] = INVALID_INTERNET_CID;
        }
        return;
    }
#endif
    internet_cid[ps_id] = cid;
}

void check_internet_cid(kal_uint8 ps_id, kal_uint8 cid, char *apn)
{
    kal_uint32 sbp_id;

    sbp_id = sbp_get_sim_sbp_id(ps_id);

    switch(sbp_id) {
        case 124: { //APTG
            if (strcmp("gtnet", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 18: { // RJIL
            if (strcmp("jionet", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 1003: { // Erricson
            if (strcmp("apn03.ert.com", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 1: {
            if (strcmp("cmnet", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 5: {
            if (strcmp("internet.telekom", apn) == 0) { //matched
                        internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 145: // AT&T
        case 196: // AT&T
        case 7: {
            if (strcmp("nxtgenphone", apn) == 0 || strcmp("firstnet-phone", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 12: {
            if (strcmp("vzwinternet", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 111: { // Vodafone
            if (strcmp("www", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 120: { // Claro
            if (strcmp("java.claro.com.br", apn) == 0 || strcmp("claro.pe", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 121: { // Bell
            if (strcmp("pda.bell.ca", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 186: { // Idea
            if (strcmp("internet", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 147: { // Airtel
            if (strcmp("airtelgprs.com", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 150: { // Swisscomm
            if (strcmp("gprs.swisscom.ch", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 6: { // web.vodafone
            if (strcmp("web.vodafone.de", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 178: { // smart
            if (strcmp("smart", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
        case 151: { // sunsurf
            if (strcmp("sunsurf", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        } 
        case 132: { // movistar.pe
            if (strcmp("movistar.pe", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }  
        case 134: { // internet
            if (strcmp("internet", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }  
        case 136: { // entel.pe
            if (strcmp("entel.pe", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        } 
        case 104: { // shwap
            if (strcmp("shwap", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }    
        case 103: { // e-ideas
            if (strcmp("e-ideas", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        } 
        case 210: { // bsnlnet
            if (strcmp("bsnlnet", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }   
        case 112: { // internet.itelcel.com
            if (strcmp("internet.itelcel.com", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }   
        case 211: { // apn01.cwpanama.com.pa
            if (strcmp("apn01.cwpanama.com.pa", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }  
        case 129: { //KDDI
            if (strcmp("unod.au-net.ne.jp", apn) == 0) { //matched
                internet_cid[ps_id] = cid;
            } else { //not matched
                if (cid == internet_cid[ps_id]) {
                    internet_cid[ps_id] = INVALID_INTERNET_CID;
                }
            }
            break;
        }
    }
}

kal_bool isTestSim(kal_uint8 ps_id)
{
#if defined(__GEMINI__)
    return(is_test_sim(ps_id));
#else
    return(is_test_sim());   
#endif
}

static kal_bool hasOperatorId(const char *apn_full, char *apn_network_id)
{
    int i;
    char *saveptr;
    char *token[16];
    char *str;
    char apn[APN_STRING_LEN];

    if (apn_full == NULL || apn_network_id == NULL) ASSERT(0);

    //according to 3GPP TS 23.003:
    //The APN is composed of two parts as follows:
    //- The APN Network Identifier; this defines to which external network the GGSN is connected and optionally a requested service by the MS. This part of the APN is mandatory
    //- The APN Operator Identifier; this defines in which PLMN GPRS backbone the GGSN is located. This part of the APN is optional. 
    //  The APN Operator Identifier format should be: mncXXX.mccYYY.gprs

    //strncpy(apn, apn_full, APN_STRING_LEN);
    strncpy((char*)apn, apn_full, sizeof(apn) - 1);
    apn[sizeof(apn) - 1] = '\0';

    str = apn;
    for(i = 0; i < (sizeof(token)/(sizeof(char *))); i++) {
        token[i] = strtok_r(str, ".", &saveptr);
        str = NULL;
        if (token[i] == NULL) break;
    }
    if (i > 3) {
        if ((strcasecmp(token[i - 1], "gprs") == 0) && (strncasecmp(token[i - 2], "mcc", 3) == 0)&& (strncasecmp(token[i - 3], "mnc", 3) == 0)) {
            //try APN Network Identifier again
            strncpy(apn_network_id, apn_full, (token[i - 3] - token[0]) - 1);
            apn_network_id[(token[i - 3] - token[0]) - 1] = '\0';
            return (KAL_TRUE);
        }
    }

    strcpy(apn_network_id, apn_full);
    return (KAL_FALSE);
}

static void ddm_post_act_data_call_internet_check_hdl (kal_uint32 ps_id, d2cm_get_pdn_profile_ind_struct *ind_ptr, void *arg)
{
    const d2cm_act_data_call_cnf_struct *act_data_call_cnf_ptr;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || ind_ptr == NULL || arg == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "ddm_post_act_data_call_internet_check_hdl(): Invalid argument!!\n");
        goto D2PM_IS_APN_INDEX_REUSABLE_HDL_ERR_1;
    }

    // initializing the variables
    act_data_call_cnf_ptr = (const d2cm_act_data_call_cnf_struct*)arg;

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "ddm_post_act_data_call_internet_check_hdl(): ps_id = %d, apn = \"%s\", p_cid = %d, fb_cid = %d!!\n", ps_id, ind_ptr->apn, ind_ptr->p_cid, ind_ptr->fb_cid);
// ++++ DEBUG ++++

    if(ind_ptr->p_cid == act_data_call_cnf_ptr->cid || ind_ptr->fb_cid == act_data_call_cnf_ptr->cid)
    {
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
#else
        kal_prompt_trace(
            (MOD_D2CUST + ps_id), 
            "ddm_post_act_data_call_internet_check cid=%d apn=[%s] engaged_apn_type=[%s] apn_type=[%s] OP_ID=%d SBP_ID=%d test_sim=%d", 
            act_data_call_cnf_ptr->cid, 
            ind_ptr->apn, 
            ind_ptr->engaged_apn_type,
            ind_ptr->apn_type,
            default_sbp_id, 
            sbp_get_sim_sbp_id(ps_id), 
            (isTestSim(ps_id)) ? 1 : 0);

        update_internet_cid(ps_id, act_data_call_cnf_ptr->cid, ind_ptr->engaged_apn_type, ind_ptr->apn_type, ind_ptr->apn);
#endif
    }

    return;

    // withdrawing what this function did
D2PM_IS_APN_INDEX_REUSABLE_HDL_ERR_1:
    return;
}


static void ddm_post_act_data_call_internet_check (kal_uint32 ps_id, const d2cm_act_data_call_cnf_struct *act_data_call_cnf_ptr, void* arg)
{
    d2cm_get_pdn_profile_req_struct req;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || act_data_call_cnf_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "ddm_post_act_data_call_internet_check(): Invalid argument!!\n");
        return;
    }

    // getting the PDN profiles
    memset((void*)(&req), 0, sizeof(req));
    if(d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &req, ddm_post_act_data_call_internet_check_hdl, (void*)act_data_call_cnf_ptr) == D2CM_API_RES_FAIL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "ddm_post_act_data_call_internet_check(): d2cm_get_pdn_profile() error!!\n");
        return;
    }

    return;
}

kal_bool custom_reset_data_retry(kal_uint32 sbp_id, apn_data_retry_info_t *apn_retry_info, retrytime_reset_event_enum event)
{
    switch (event) {
        case RETRY_RESET_POWER_CYCLE_ON:
            if (apn_retry_info->has_power_off) {
                kal_prompt_trace(MOD_DDM, "RETRY_RESET_POWER_CYCLE_ON %s: reset", apn_retry_info->apn);
                if(sbp_id == 3 && apn_retry_info->apn_type & DDM_APN_TYPE_IMS){
                    kal_prompt_trace(MOD_DDM, "RETRY_RESET_POWER_CYCLE_ON Don't reset for IMS PDN");
                    return KAL_FALSE;
                }
                return KAL_TRUE;
            } else {
                kal_prompt_trace(MOD_DDM, "RETRY_RESET_POWER_CYCLE_ON %s", apn_retry_info->apn);
            }
            break;
        case RETRY_RESET_POWER_CYCLE_OFF:
            kal_prompt_trace(MOD_DDM, "RETRY_RESET_POWER_CYCLE_OFF %s", apn_retry_info->apn);
            apn_retry_info->has_power_off = KAL_TRUE;
            break;
        case RETRY_RESET_APN_CONFIG_CHANGED:
            {
                kal_bool result = KAL_FALSE;
            
                kal_prompt_trace(MOD_D2CUST, 
                    "APN config changed. SBP ID = %d, APN = %s, Error cause = %d", 
                    sbp_id, 
                    apn_retry_info->apn, 
                    apn_retry_info->error_cause);
            
                // Telstra 19
                if(default_sbp_id == 19 || sbp_id == 19)
                {
                    if (apn_retry_info->error_cause == RMMI_ERR_OPERATOR_BARRING ||
                        apn_retry_info->error_cause == RMMI_ERR_USER_AUTH_FAIL ||
                        apn_retry_info->error_cause == RMMI_ERR_SERV_OPTION_NOT_SUPPORTED ||
                        apn_retry_info->error_cause == RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED)
                    {
                        kal_prompt_trace(MOD_D2CUST, "Reset retry timer.");
                        result = KAL_TRUE;
                    }
                    else
                    {
                        kal_prompt_trace(MOD_D2CUST, "No reset retry timer for err # %d", apn_retry_info->error_cause);
                    }
                }
                else
                {
                    // Please add above this 'else' for other opertors.
                    kal_prompt_trace(MOD_D2CUST, "No customization!");
                }
            
                return result;
            }
            break;
    } 

    return KAL_FALSE;
}


static void d2pm_fetch_apn_type_hdl (kal_uint32 ps_id, d2cm_get_pdn_profile_ind_struct *ind_ptr, void *arg)
{
    struct
    {
        kal_uint8 *apn;
        kal_char *engaged_apn_type;
    }*hdl_arg_ptr = arg;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || ind_ptr == NULL || arg == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_type_default_hdl(): Invalid argument!!\n");
        return;
    }

    if(strncasecmp((const char*)(ind_ptr->apn), (char *)hdl_arg_ptr->apn, sizeof(ind_ptr->apn)) == 0)
    {
        strncpy(hdl_arg_ptr->engaged_apn_type, (const char*)(ind_ptr->engaged_apn_type), sizeof(ind_ptr->engaged_apn_type) - 1);
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_type_default_hdl(): hdl_arg_ptr->engaged_apn_type \"%s\" ", hdl_arg_ptr->engaged_apn_type);
    }
    return;
}

void d2pm_fetch_apn_type (kal_uint32 ps_id, kal_uint8 *apn, kal_char *apn_type)
{

    d2cm_get_pdn_profile_req_struct req;
    struct
    {
        kal_uint8 *apn;
        kal_char *engaged_apn_type;
    }hdl_arg;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || apn == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_type_default(): Invalid argument!!\n");
        return;
    }

    // initializing the variables
    hdl_arg.apn = apn;
    hdl_arg.engaged_apn_type = apn_type;

    // getting the PDN profiles
    memset((void*)(&req), 0, sizeof(req));
    req.flag |= D2CM_GET_PDN_PROFILE_REQ_FLAG_INCL_APN_IDX;
    if(d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &req, d2pm_fetch_apn_type_hdl, (void*)(&hdl_arg)) == D2CM_API_RES_FAIL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_type_default(): d2cm_get_pdn_profile() error!!\n");
        return;
    }
    kal_prompt_trace(MOD_D2CUST + ps_id, "hdl_arg.engaged_apn_type %s \n", hdl_arg.engaged_apn_type);
    return;

}


void custom_handle_data_retry(kal_uint32 sbp_id, apn_data_retry_info_t *apn_retry_info, kal_uint16 err_cause, kal_uint32 ps_id, rat_enum rat, kal_uint8 *plmn, kal_bool is_roaming)
{
    switch (sbp_id) {
        case 129:
            { // KDDI
                kal_char current_apn_type[APN_TYPE_STRING_LEN];
                memset((void*)(current_apn_type), 0, sizeof(kal_char)*APN_TYPE_STRING_LEN);
                d2pm_fetch_apn_type(ps_id, apn_retry_info->apn, current_apn_type);
                kal_prompt_trace(MOD_D2CUST + ps_id, "d2pm_is_apn_type_default():  %s \n", current_apn_type);

                if(apn_retry_info->apn_type & DDM_APN_TYPE_EMERGENCY)
                { 
                    if(apn_retry_info->retrytime_type != RETRY_TYPE_WITH_SUGGEST) 
                    { // ensuring backoff timer is not affected
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 1;
                    }
                } 
                else if(strcasecmp(current_apn_type, "dun") == 0 
                            && (RMMI_ERR_MISSING_APN == err_cause 
                                || RMMI_ERR_UNKNOWN_PDP_ADDR == err_cause 
                                || RMMI_ERR_USER_AUTH_FAIL == err_cause 
                                || RMMI_ERR_ACTIVATION_REJ_UNSPECIFIED == err_cause 
                                || ESM_NETWORK_FAILURE == err_cause))
                {
                    //Modified based on AP expectation.
                    kal_prompt_trace(MOD_D2CUST + ps_id, "inside the dun case \n");
                }
                else
                {
                    if(apn_retry_info->retrytime_type != RETRY_TYPE_WITH_SUGGEST) 
                    { // ensuring backoff timer is not affected
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 60;
                        apn_retry_info->end_time = 60 + kal_ticks_to_secs(kal_get_systicks());
                    }
                }
                break;  
            }
        case 12:
            {
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
#endif
                if (TCM_ESM_FAIL_CAUSE_REQ_RES_APN_MISMATCH == err_cause)
                {
                    kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] Blocking if APN mismatch from NW");
                    apn_retry_info->error_occured = KAL_TRUE;
                    apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;	
                    apn_retry_info->retry_time = RETRYTIME_NO_RETRY;   
                }

                //apn_retry_info->error_occured = KAL_FALSE;
                //apn_retry_info->retrytime_type = RETRY_TYPE_NO_SUGGEST;
                //apn_retry_info->retry_time = 0;
                break;    
            }
        case 19:
            { // Telstra
                if(RMMI_ERR_INSUFF_RESOURCE == err_cause || RMMI_ERR_MISSING_APN == err_cause || RMMI_ERR_UNKNOWN_PDP_ADDR == err_cause || RMMI_ERR_ACTIVATION_REJ_UNSPECIFIED == err_cause || RMMI_ERR_SERV_OPTION_TEMP_OUT_OF_ORDER == err_cause || ESM_NETWORK_FAILURE == err_cause || RMMI_ERR_ACTIVATION_REJ_BY_GGSN == err_cause) {
                    apn_retry_info->error_occured = KAL_TRUE;
                    apn_retry_info->error_cause = err_cause;
                    apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                    apn_retry_info->retry_count++;
                    kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] Telstra , retry count :%d", apn_retry_info->retry_count);
                    if(apn_retry_info->retry_count < 240) {
                        apn_retry_info->retry_time = apn_retry_info->retry_count * (12 * 60);
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                    } else {
                        kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] Telstra retry count is larger than 240");
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;   
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;   
                    }
                    kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] Telstra , end_time :%d", apn_retry_info->end_time);
                } else if(RMMI_ERR_OPERATOR_BARRING == err_cause || RMMI_ERR_USER_AUTH_FAIL == err_cause || RMMI_ERR_SERV_OPTION_NOT_SUPPORTED == err_cause || RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                    kal_prompt_trace(MOD_D2CUST + ps_id, "[MOD_DDM DEBUG][%d][%d]", __LINE__, err_cause);
                    apn_retry_info->error_occured = KAL_TRUE;
                    apn_retry_info->error_cause = err_cause;
                    apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;   
                    apn_retry_info->retry_time = RETRYTIME_NO_RETRY; 
                } else {
                    apn_retry_info->error_occured = KAL_FALSE;
                    apn_retry_info->error_cause = 0;
                    apn_retry_info->retrytime_type = RETRY_TYPE_NO_SUGGEST;
                    apn_retry_info->retry_time = 0;
                }
                break;    
            }
        case 145: // AT&T
        case 196: // AT&T
        case 7: 
            { // ATT
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause || RMMI_ERR_UNKNOWN_PDP_ADDR == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                        kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] ATT enter no retry scenario");    
                    }
                } else {
                    if(apn_retry_info->retry_count_setted == KAL_FALSE) {
                        apn_retry_info->retry_count_setted = KAL_TRUE;
                        if(SM_LOCAL_REJECT_ACT_REQ_DUE_TO_REACH_RETRY_COUNTER == err_cause) { // we needed to make sure the no of attempts should be <= 60 in 1 hr
                            apn_retry_info->retry_count = 12;
							apn_retry_info->retry_time = 160;
                        } else {                            
                            apn_retry_info->retry_count = 20;
							apn_retry_info->retry_time = 5;
                        }
                        apn_retry_info->end_time = (60 * 60) + kal_ticks_to_secs(kal_get_systicks());
                    }

                    apn_retry_info->error_occured = KAL_TRUE;
                    apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;

                    apn_retry_info->retry_count--;
                    if(apn_retry_info->retry_count == 0) {
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    }
                }
                break;
            }
        case 6:
            { // Vodafone
                if(INVALID_CHARACTERS_IN_DIAL_ERRSTRING_ERR == err_cause || NO_NW_SERVICE == err_cause) {
                    apn_retry_info->error_occured = KAL_TRUE;
                    apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;    
                    apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                }
                else if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS){
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;    
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_MISSING_APN == err_cause) {
                        if(!is_roaming) {
                            apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                            apn_retry_info->retry_time = 22 * 60 * 60; //24 hours
                            apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                            apn_retry_info->error_occured = KAL_TRUE;
                        } else {
                            apn_retry_info->error_occured = KAL_TRUE;
                            apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;    
                            apn_retry_info->retry_time = RETRYTIME_NO_RETRY;                            
                        }
                    } else if(RMMI_ERR_INSUFF_RESOURCE == err_cause) {
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 22 * 60 * 60; //22 hours
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                        apn_retry_info->error_occured = KAL_TRUE;
                    }
                }
                break;
            }
        case 3:
            { // Orange
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->error_cause = RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED;
                        apn_retry_info->retry_time = 24 * 60 * 60; //24 hours
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                    } else if(RMMI_ERR_MISSING_APN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->error_cause = RMMI_ERR_MISSING_APN;
                        apn_retry_info->retry_time = 24 * 60 * 60; //24 hours
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());

                    } else if (RMMI_ERR_ACTIVATION_REJ_BY_GGSN == err_cause
                        || RMMI_ERR_ACTIVATION_REJ_UNSPECIFIED == err_cause
                        || RMMI_ERR_SERV_OPTION_TEMP_OUT_OF_ORDER == err_cause
                        || ESM_NETWORK_FAILURE == err_cause) {

                        kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] orange , error cause :%d", err_cause);
                        kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] orange , retry count before :retry_count = %d, end_time = %d", apn_retry_info->retry_count, apn_retry_info->end_time);

                        if(apn_retry_info->retry_count_setted == KAL_FALSE && apn_retry_info->retry_count == 0) {
                            apn_retry_info->retry_count_setted = KAL_TRUE;
                            apn_retry_info->retry_count_exhaustible = KAL_TRUE;
                            apn_retry_info->retry_count = 11;
                            apn_retry_info->end_time = 60*60 + 26*60 + kal_ticks_to_secs(kal_get_systicks());//1 hour+ 26min
                        }

                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;

                        switch (apn_retry_info->retry_count) {
                            case 11:
                                apn_retry_info->retry_time = 1;
                                break;
                            case 10:
                                apn_retry_info->retry_time = 2;
                                break;
                            case 9:
                                apn_retry_info->retry_time = 4;
                                break;
                            case 8:
                                apn_retry_info->retry_time = 8;
                                break;
                            case 7:
                                apn_retry_info->retry_time = 16;
                                break;
                            case 6:   
                                apn_retry_info->retry_time = 32;
                                break;
                            case 5:   
                                apn_retry_info->retry_time = 64;
                                break;
                            case 4:   
                                apn_retry_info->retry_time = 128;
                                break;
                            case 3:   
                                apn_retry_info->retry_time = 256;
                                break;
                            case 2:
                                apn_retry_info->retry_time = 512;
                                break;
                            case 1:   
                                apn_retry_info->retry_time = 1024;
                                apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                               break;
                            default:
                                apn_retry_info->retry_time = 1024;
                                apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                                break;
                        }
                        if (apn_retry_info->retry_count > 0) {
                            apn_retry_info->retry_count--;
                        } 
                     } else {
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_SUGGEST;
                        apn_retry_info->retry_time = 0; 
                        apn_retry_info->end_time = 0;
                    }
                } 
                break;
            }
        case 5:
            { // DTAG
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_ACTIVATION_REJ_BY_GGSN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    }
                }
                break;    
            }
        case 107:
            { // SFR
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_MISSING_APN == err_cause || RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60; //24 hours   
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                    }    
                }
                break;    
            }
        case 108:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    }
                }
                break;
            }
        case 109:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    }
                }
                break;
            }
        case 110:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    }
                }
                break;
            }
        case 124:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    }
                    else if(RMMI_ERR_MISSING_APN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60;
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                    }
                }
                break;
            }

        // Entel
        case 136: 
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        kal_uint8 *mcc71617 =(kal_uint8 *) "71617";
                        if (strncmp((char *)plmn, (char *)mcc71617, strlen((char *)mcc71617)) == 0) {
                            apn_retry_info->error_occured = KAL_TRUE;
                            apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                            apn_retry_info->retry_time = 5 * 60;
                        }
                    }
                    break;
                }
            }

        // movistar.pe
        case 132:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        kal_uint8 *mcc724 =(kal_uint8 *) "724";
                        kal_uint8 *mcc722 =(kal_uint8 *) "722";

                        if (strncmp((char *)plmn, (char *)mcc724, strlen((char *)mcc724)) == 0) {
                            apn_retry_info->error_occured = KAL_TRUE;
                            apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                            apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                        }
                        if (strncmp((char *)plmn, (char *)mcc722, strlen((char *)mcc722)) == 0) {
                            apn_retry_info->error_occured = KAL_TRUE;
                            apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                            apn_retry_info->retry_time = 12 * 60 * 60;
                        }
                    }
                }
                break;
            }

        case 176:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    }
                }
                break;
            }
        case 1003:
            {
                if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                    apn_retry_info->error_occured = KAL_TRUE;
                    apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                    apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                }
                break;
            }
        case 8: // TMO
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 60;    
                    }    
                }
                if(RMMI_ERR_MISSING_APN == err_cause) {
                    apn_retry_info->error_occured = KAL_TRUE;
                    apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                    apn_retry_info->retry_time = RETRYTIME_NO_RETRY;    
                }   
                break; 
            }
        case 186:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_INSUFF_RESOURCE == err_cause || ESM_NETWORK_FAILURE == err_cause) {
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 30;
                    }
                }
                break;
            }
        case 189:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_MISSING_APN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60;
                    }
                }
                break;
            }
        case 17:
            {   // DoCoMo
                if(RMMI_ERR_MISSING_APN == err_cause || RMMI_ERR_UNKNOWN_PDP_ADDR == err_cause || ESM_PTI_ALREADY_USED == err_cause || ESM_PDN_TYPE_IPV4_ONLY_ALLOWED == err_cause || ESM_PDN_TYPE_IPV6_ONLY_ALLOWED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;   
                } else if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(rat == RAT_LTE) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 5 * 60;    
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                    }
                } else {
                    apn_retry_info->error_occured = KAL_TRUE;
                    apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                    apn_retry_info->retry_time = 30; // Operator does not specify retry time, we set 30 sec as default 
                    apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                }   
                break; 
            }
        case 50:
            {   //Softbank
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(apn_retry_info->retry_count_setted == KAL_FALSE) {
                        apn_retry_info->retry_count_setted = KAL_TRUE;
                        apn_retry_info->retry_count = 0;
						apn_retry_info->end_time = 44*60*60 + 45*60 + kal_ticks_to_secs(kal_get_systicks());
                    }
                    apn_retry_info->error_occured = KAL_TRUE;
                    apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                    switch (apn_retry_info->retry_count) {
						case 6:
							apn_retry_info->retry_time = 24 * 60 * 60;
							break;
                        case 5:
                            apn_retry_info->retry_time = 12 * 60 * 60;
                            break;
                        case 4:
                            apn_retry_info->retry_time = 6 * 60 * 60;
                            break;
                        case 3:
                            apn_retry_info->retry_time = 60 * 60;
                            break;
                        case 2:
                            apn_retry_info->retry_time = 30 * 60;
                            break;
                        case 1:   
                            apn_retry_info->retry_time = 10 * 60;
                            break;
						case 0:   
							apn_retry_info->retry_time = 5 * 60;
							break;
                        default:
							if(apn_retry_info->retry_count > 6) {
								apn_retry_info->retry_time = 24 * 60 * 60;
								apn_retry_info->end_time = 2*apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                            }
							else {
                                apn_retry_info->retrytime_type = RETRY_TYPE_NO_SUGGEST;
                                apn_retry_info->retry_time = 0; 
                                apn_retry_info->end_time = 0;
							}
                            break;
                    }
                    apn_retry_info->retry_count++;
                } else {
                    apn_retry_info->retrytime_type = RETRY_TYPE_NO_SUGGEST;
                    apn_retry_info->retry_time = 0;        
                }
                break;
            }
        case 156:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_MISSING_APN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60;
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());                        
                    }
                }
                break;
            }
        case 120: // claro
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_MISSING_APN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60;
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());                        
                    }
                } else {
                    if(RMMI_ERR_USER_AUTH_FAIL == err_cause) {
                        if(apn_retry_info->retry_count_setted == KAL_FALSE) {
                            apn_retry_info->retry_count = 2;
                            apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                            apn_retry_info->retry_time = 45;
                            apn_retry_info->retry_count_setted = KAL_TRUE;
                        }
                        apn_retry_info->retry_count--;
                        if(apn_retry_info->retry_count == 0) {
                            apn_retry_info->error_occured = KAL_TRUE;
                            apn_retry_info->retry_count_setted = KAL_FALSE;
                        }
                    } else if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        if(apn_retry_info->retry_count_setted == KAL_FALSE) {
                            apn_retry_info->retry_count = 2;
                            apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                            apn_retry_info->retry_time = 45;
                            apn_retry_info->retry_count_setted = KAL_TRUE;
                        }
                        apn_retry_info->retry_count--;
                        if(apn_retry_info->retry_count == 0) {
                            apn_retry_info->error_occured = KAL_TRUE;
                            apn_retry_info->retry_time = 12 * 60;
                            apn_retry_info->end_time = 7200 + kal_ticks_to_secs(kal_get_systicks());
                            apn_retry_info->retry_count_setted = KAL_FALSE;
                        }
                    }
                }    
                break;
            }
        case 130: // Tim
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_USER_AUTH_FAIL == err_cause) {
                        if(apn_retry_info->retry_count_setted == KAL_FALSE) {
                            apn_retry_info->retry_count = 4;
                            apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                            apn_retry_info->retry_time = 8;
                            apn_retry_info->retry_count_setted = KAL_TRUE;
                        }
                        apn_retry_info->retry_count--;
                        if(apn_retry_info->retry_count == 0) {
                            apn_retry_info->error_occured = KAL_TRUE;
                            apn_retry_info->retry_count_setted = KAL_FALSE;
                        }
                    }
                }
                break;
            }
        case 112: // telcel
            {
                if(KAL_TRUE == sbp_query_md_feature_by_ps(SBP_CLEAR_CODE_33_29_NO_RETRY, ps_id)) { // Apply new CC33
                    kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] Apply telcel new cc33");
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause || RMMI_ERR_USER_AUTH_FAIL == err_cause || ESM_MULTIPLE_PDN_APN_NOT_ALLOWED == err_cause){
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 2 * 60 * 60;
                        apn_retry_info->end_time = 7200 + kal_ticks_to_secs(kal_get_systicks());
                    }
                } else if(KAL_TRUE == sbp_query_md_feature_by_ps(SBP_CLEAR_CODE_33, ps_id)) { // Apply old CC33
                    kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] Apply telcel old cc33");
                   if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause || RMMI_ERR_USER_AUTH_FAIL == err_cause || ESM_MULTIPLE_PDN_APN_NOT_ALLOWED == err_cause){
                       apn_retry_info->error_occured = KAL_TRUE;
                        if(apn_retry_info->retry_count_setted == KAL_FALSE) {
                            apn_retry_info->retry_count_setted = KAL_TRUE;
                            apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                            if(rat == RAT_LTE) {
                                apn_retry_info->retry_count = 5;
                                apn_retry_info->retry_time = 10;    
                            } else if(rat == RAT_UMTS) {
                                apn_retry_info->retry_count = 2;
                                apn_retry_info->retry_time = 45;
                            }
                            apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());   
                        } else {
                           apn_retry_info->retry_count--;
                           if(apn_retry_info->retry_count == 0) {
                                apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                                apn_retry_info->retry_time = 2 * 60 * 60; // 2 hour bartimer
                                apn_retry_info->retry_count_setted = KAL_FALSE;           
                           } else {
                                if(rat == RAT_LTE) {
                                    apn_retry_info->retry_time = 10;    
                                } else if(rat == RAT_UMTS) {
                                    apn_retry_info->retry_time = 45;
                                }   
                           }   
                           apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                        }   
                    } 
                }
                break;
            }

        case 154:
            {
                if (apn_retry_info->apn_type & DDM_APN_TYPE_IMS) 
                {
                    if ((RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) ||
                        (ESM_MULTIPLE_PDN_APN_NOT_ALLOWED == err_cause) ||
                        (RMMI_ERR_MISSING_APN == err_cause))
                    {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } 
                    else 
                    {
                        apn_retry_info->error_occured = KAL_FALSE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_SUGGEST;
                        apn_retry_info->retry_time = 0;        
                    }
                }
                break;
            }

        case 137:
            {
                if (apn_retry_info->apn_type & DDM_APN_TYPE_IMS) 
                {
                    if ((RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) ||
                        (RMMI_ERR_MISSING_APN == err_cause))
                    {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } 
                    else 
                    {
                        apn_retry_info->error_occured = KAL_FALSE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_SUGGEST;
                        apn_retry_info->retry_time = 0;        
                    }
                }
                break;
            }

        case 178:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_MISSING_APN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60;
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());                        
                    }
                }
                break;
            }
        case 211: //C&W Panama
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_MISSING_APN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60;
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());                        
                    }
                }
                break;
            }
        case 127:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_MISSING_APN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60;
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());                        
                    }
                }
                break;
            }
        case 216: //Zong Pakistan
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_MISSING_APN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60;
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());                        
                    }
                }
                break;
            }
        case 219: //Mytel Myanmar
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_MISSING_APN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60;
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());                        
                    }
                }
                break;
            }
        case 227: //Wind Greece
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_MISSING_APN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60;
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());                        
                    }
                }
                break;
            }

        case 237: //ICE Norway
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    } else if(RMMI_ERR_MISSING_APN == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60;
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());                        
                    }
                }
                break;
            }
        case 157:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_MISSING_APN == err_cause || RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;    
                    }
                }
                break;
            }
        case 126: // Avea
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60; //24 hours
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                   }
              }  
               break;
            }
        case 217:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                        apn_retry_info->retry_time = 24 * 60 * 60; //24 hours
                        apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());
                   }
              }  
               break;
            }
        case 15: //telefonica: This eventually results in CC#55, and the expectation is that the UE will stop retrying until power cycled
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(ESM_MULTIPLE_PDN_APN_NOT_ALLOWED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;    
                    }
                    else if(RMMI_ERR_USER_AUTH_FAIL == err_cause) {
                        kal_uint8 *mcc214 =(kal_uint8 *) "214";
                        if (strncmp((char *)plmn, (char *)mcc214, strlen((char *)mcc214)) == 0) {
                            apn_retry_info->error_occured = KAL_TRUE;
                            apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                            apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                        }
                    }
                }
                break;
            }
        case 102:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                    }
                }
                break;
            }
        case 103: 
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(ESM_MULTIPLE_PDN_APN_NOT_ALLOWED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;    
                    }
                }
                break;
            }
        case 0:
            {
                if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                    if(ESM_MULTIPLE_PDN_APN_NOT_ALLOWED == err_cause) {
                        apn_retry_info->error_occured = KAL_TRUE;
                        apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                        apn_retry_info->retry_time = RETRYTIME_NO_RETRY;    
                    }
                }
                break;
            }
        case 221: //TGP Singapore
        {
            if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                    apn_retry_info->error_occured = KAL_TRUE;
                    apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                    apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                } else if(RMMI_ERR_MISSING_APN == err_cause) {
                    apn_retry_info->error_occured = KAL_TRUE;
                    apn_retry_info->retrytime_type = RETRY_TYPE_WITH_SUGGEST;
                    apn_retry_info->retry_time = 24 * 60 * 60;
                    apn_retry_info->end_time = apn_retry_info->retry_time + kal_ticks_to_secs(kal_get_systicks());                        
                }
            }
            break;
        }
        case 20: //Sprint
        {
            if(apn_retry_info->apn_type & DDM_APN_TYPE_IMS) {
                if(RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause) {
                    apn_retry_info->error_occured = KAL_TRUE;
                    apn_retry_info->retrytime_type = RETRY_TYPE_NO_RETRY;
                    apn_retry_info->retry_time = RETRYTIME_NO_RETRY;
                }
            }
            break;
        }
        default:
                //apn_retry_info->error_occured = KAL_FALSE;
                //apn_retry_info->retrytime_type = RETRY_TYPE_NO_SUGGEST;
                //apn_retry_info->retry_time = 0;
                break;
    }    
}
kal_bool custom_d2_keep_internet_pdn(kal_uint32 cid, kal_uint8 ps_id, kal_bool mobile_data_on, kal_bool data_switch_on, rat_enum rat)
{
    kal_uint32 sbp_id = sbp_get_sim_sbp_id(ps_id);
    switch(default_sbp_id) {
        case 1: // CMCC
            if(test_mode_consider_sim(ps_id) == PS_CONF_TEST_FTA) {
                if(rat == RAT_LTE)
                    return (internet_cid[ps_id] == cid) ? KAL_TRUE : KAL_FALSE;
                else
                    return KAL_FALSE;    
            }
            if(internet_cid[ps_id] == cid)
                return KAL_TRUE;
            else
                return KAL_FALSE;
            break;
        case 0: // OM
        case 145: // AT&T
        case 196: // AT&T
        case 7: // AT&T
        case 12: // VzW
        case 16: {// EE
#if 0
/* under construction !*/
/* under construction !*/
#endif
            kal_prompt_trace(MOD_DDM, "[MOD_DDM_DEBUG] is wifi enable : %d,  mobile data on =  %d,  internet_cid[ps_id] = %d, cid = %d", is_wifi_en(ps_id), mobile_data_on, internet_cid[ps_id], cid);
            if(sbp_id == 5 && rat == RAT_LTE) {
                if(internet_cid[ps_id] == cid)
                    return KAL_TRUE;
            }
            if(sbp_id == 8) {
                return (internet_cid[ps_id] == cid) ? KAL_TRUE : KAL_FALSE;    
            }
            if((sbp_id == 7 || sbp_id == 145 || sbp_id == 196) && rat == RAT_LTE) { //AT&T
                return (internet_cid[ps_id] == cid) ? KAL_TRUE : KAL_FALSE;
            }
			if(sbp_id == 1 && rat == RAT_LTE) { //CMCC
                return (internet_cid[ps_id] == cid) ? KAL_TRUE : KAL_FALSE;
            }
            if(sbp_id == 121) {
                if(internet_cid[ps_id] == cid && rat == RAT_LTE)
                    return KAL_TRUE;
                else
                    return KAL_FALSE;
            }
            if(is_wifi_en(ps_id) == KAL_TRUE && mobile_data_on == KAL_TRUE && rat == RAT_LTE) {
                if(sbp_id == 12) {
                    return (internet_cid[ps_id] == cid) ? KAL_TRUE : KAL_FALSE;
                }
            }
#if 0
/* under construction !*/
/* under construction !*/
#endif
            if(data_switch_on == KAL_TRUE && rat == RAT_LTE)
                return KAL_FALSE;
            else if(is_wifi_en(ps_id) == KAL_TRUE && mobile_data_on == KAL_TRUE && rat == RAT_LTE) {
                kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] WiFi Enable, mobile_data_on, consider to keep internet");
                if(sbp_id == 17) {
                    kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] For Docomo no need to keep internet");
                    return KAL_FALSE;   
                }
                if(internet_cid[ps_id] == cid)
                    return KAL_TRUE;
                else
                    return KAL_FALSE;
            } else if(mobile_data_on == KAL_FALSE && rat == RAT_LTE) {
                if(sbp_id == 17) {
                    kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] For Docomo no need to keep internet");
                    return KAL_FALSE;   
                }
                if(sbp_id == 12) {
                    return KAL_FALSE;
                }
                return (internet_cid[ps_id] == cid) ? KAL_TRUE : KAL_FALSE;
            } else {
                return KAL_FALSE;    
            }
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
        }
		case 18: { // RJIL
				kal_prompt_trace(MOD_DDM, "[MOD_DDM_DEBUG] is wifi enable : %d,  mobile data on =  %d,	internet_cid[ps_id] = %d, cid = %d", is_wifi_en(ps_id), mobile_data_on, internet_cid[ps_id], cid);
				if(sbp_id == 5 && rat == RAT_LTE) {
					if(internet_cid[ps_id] == cid)
						return KAL_TRUE;
				}
				if(sbp_id == 8) {
					return (internet_cid[ps_id] == cid) ? KAL_TRUE : KAL_FALSE;	 
				}
				if((sbp_id == 7 || sbp_id == 145 || sbp_id == 196) && rat == RAT_LTE) { //AT&T
					return (internet_cid[ps_id] == cid) ? KAL_TRUE : KAL_FALSE;
				}
				if(sbp_id == 1 && rat == RAT_LTE) { //CMCC
					return (internet_cid[ps_id] == cid) ? KAL_TRUE : KAL_FALSE;
				}
				if(sbp_id == 121) {
					if(internet_cid[ps_id] == cid && rat == RAT_LTE)
						return KAL_TRUE;
					else
						return KAL_FALSE;
				}
				if(sbp_id == 18 && rat == RAT_LTE && is_wifi_en(ps_id) == KAL_TRUE) { //RJIO
					return (internet_cid[ps_id] == cid) ? KAL_TRUE : KAL_FALSE;
				}
				if(is_wifi_en(ps_id) == KAL_TRUE && mobile_data_on == KAL_TRUE && rat == RAT_LTE) {
					if(sbp_id == 12) {
						return (internet_cid[ps_id] == cid) ? KAL_TRUE : KAL_FALSE;
					}
				}
				if(data_switch_on == KAL_TRUE && rat == RAT_LTE)
					return KAL_FALSE;
				else if(is_wifi_en(ps_id) == KAL_TRUE && mobile_data_on == KAL_TRUE && rat == RAT_LTE) {
					kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] WiFi Enable, mobile_data_on, consider to keep internet");
					if(sbp_id == 17) {
						kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] For Docomo no need to keep internet");
						return KAL_FALSE;	
					}
					if(internet_cid[ps_id] == cid)
						return KAL_TRUE;
					else
						return KAL_FALSE;
				} else if(mobile_data_on == KAL_FALSE && rat == RAT_LTE) {
                    if(sbp_id == 17) {
                        kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] For Docomo no need to keep internet");
                        return KAL_FALSE;   
                    }
					if(sbp_id == 12) {
						return KAL_FALSE;
					}
					return (internet_cid[ps_id] == cid) ? KAL_TRUE : KAL_FALSE;
				} else {
					return KAL_FALSE;	 
				}
			}
        case 8:
            if(sbp_id == 8 || isTestSim(ps_id) == KAL_TRUE)
                return (0 == cid) ? KAL_TRUE : KAL_FALSE;
            else
                return KAL_FALSE;
            break;
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
#endif
        default:
            kal_prompt_trace(MOD_DDM, "[MOD_DDM_DEBUG] is wifi enable : %d,  mobile data on =  %d ", is_wifi_en(ps_id), mobile_data_on);
            if(is_wifi_en(ps_id) == KAL_TRUE && mobile_data_on == KAL_TRUE) {
                kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] WiFi Enable, mobile_data_on, consider to keep internet");
                if(sbp_id == 17) {
                    kal_prompt_trace(MOD_DDM, "[MOD_DDM DEBUG] For Docomo no need to keep internet");
                    return KAL_FALSE;   
                }
                if(internet_cid[ps_id] == cid)
                    return KAL_TRUE;
                else
                    return KAL_FALSE;
            } else {
                return KAL_FALSE;
            }
    } 
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
#endif

}

/*****************************************************************************
* FUNCTION
*  custom_d2_judge_clean_unused
* DESCRIPTION
*  when some module need no unused pdn connection, use this api to judge if 
*  we should deact the dangling(unused) pdn connection using air signalling.
*  Customer can decide to use api custom_ddm_deact_dangling_cid() to deact 
*  current cid. When call the api, should return KAL_TRUE.
*  this request comes from ALPS04184123
* PARAMETERS
*  ps_id                [IN]     ps id
*  cid                  [IN]     current cid
*  sim_sbp_id           [IN]     current sim_sbp_id
*  is_default_sim       [IN]     is this pdn connection is on the default SIM card?
*  pdn_info_for_custom  [IN]     detail information for current pdn connection
* RETURNS
*  kal_bool : if customer judged to deactivate this pdn connection using air signalling
*****************************************************************************/
kal_bool custom_d2_judge_clean_unused(unsigned int ps_id, kal_uint32 sim_sbp_id, kal_uint32 cid, kal_bool is_default_sim, d2am_pdn_info_for_custom_struct *pdn_info_for_custom)
{
    kal_bool result = KAL_FALSE;
    //only secondary SIM may perform deact dangling cid, because primary sim(default sim) need to use internet
    if(KAL_FALSE == is_default_sim)
    {
        switch(sim_sbp_id)
        {
            //CAUTION: CMCC, should always return FALSE because of case819 of CMCC request
            case 1:
                result = KAL_FALSE;
                break;
            //CAUTION: CU, should always return FALSE because of potential case of CU request
            case 2:
                result = KAL_FALSE;
                break;
            default:
                result = KAL_FALSE;
                break;
        }
    }
    if(KAL_TRUE == result)
    {
        custom_ddm_deact_dangling_cid(ps_id, cid, DDM_EVENT_IS_CLEAN_UNUSED);
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2_judge_clean_unused(): decide to deact cid: %d", cid);        
    }
    return result;
}

pdp_type_enum custom_d2_determine_reactivate_data_call_type(kal_uint32 sbp_id, kal_bool is_roamming, kal_uint16 err_cause, pdp_addr_type_enum  pdp_addr_type, kal_uint32 apn_type, kal_uint32 fail_count)
{
    switch(sbp_id) {
        case 8: //TMO
            if(is_roamming == KAL_TRUE && pdp_addr_type == IPV6_ADDR_TYPE) {
                if(err_cause == RMMI_ERR_UNKNOWN_PDP_ADDR || err_cause == RMMI_ERR_ACTIVATION_REJ_UNSPECIFIED || err_cause == RMMI_ERR_SERV_OPTION_NOT_SUPPORTED || err_cause == RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED || err_cause == RMMI_ERR_SERV_OPTION_TEMP_OUT_OF_ORDER || err_cause == ESM_CAUSE_PDN_TYPE_IPV4_ONLY_ALLOWED || err_cause == ESM_PDN_TYPE_IPV4_ONLY_ALLOWED) {
                    if(fail_count < 3)
                        return IS_IPV4_ADDR_TYPE;
                    else
                        return NULL_ADDR_TYPE;    
                } else {
                    return NULL_ADDR_TYPE;    
                }   
            } else {
                return NULL_ADDR_TYPE;
            }
        default:
            return NULL_ADDR_TYPE;
    }
}


////////////////////////////////////////////////////
/// MTU size customization /////////////////////////
////////////////////////////////////////////////////
kal_int32 custom_ddm_get_mtu_size(kal_bool is_mtu_present, kal_uint32 assigned_mtu_size, kal_uint32 sbp_id, kal_int8 rat_type, kal_int8 apn_type)
{
    // return -1 to ignore customization.
    kal_int32 result = -1;

    ///////////////////////////////////////////////////////////////////////////
    // Logging
    kal_prompt_trace(MOD_D2CUST, 
                    "custom_ddm_get_mtu_size(): is_mtu_present = %d, assigned_mtu_size = %d, sbp_id = %d, rat_type = %d, apn_type = %d,", 
                    is_mtu_present, assigned_mtu_size, sbp_id, rat_type, apn_type);
    ///////////////////////////////////////////////////////////////////////////

    // KDDI
    if(sbp_id == 129) 
    {
        // IMS EMERGENCY XCAP over WIFI 
        if (rat_type == IWLAN_RAN_WIFI && 
            (apn_type == IWLAN_PDN_APN_TYPE_IMS 
            || apn_type == IWLAN_PDN_APN_TYPE_EMERGENCY 
            || apn_type == IWLAN_PDN_APN_TYPE_XCAP)
        )
        {
            result = 1280;
        }
        // LTE
        else if (rat_type == IWLAN_RAN_MOBILE_3GPP)
        {
            if ((is_mtu_present == KAL_TRUE) && (assigned_mtu_size < 1440))
            {
                result = assigned_mtu_size;
            }
            else // In both cases --> 1. mtu_present == KAL_FALSE or --> 2. mtu size is greater than 1440.
            {
                result = 1440;
            }
        }
        //other
        else
        {
            result = assigned_mtu_size;
        }
    }

    // Add mtu customization for other operators, above this line.
    ///////////////////////////////////////////////////////////////////////////

    kal_prompt_trace(MOD_D2CUST, "custom_ddm_get_mtu_size() : result = %d", result);
    return result;
}

kal_bool is_custom_d2_apn_cfg_chg_notify_support(kal_uint32 ps_id)
{
    kal_uint32 sbp_id;
    sbp_id = sbp_get_sim_sbp_id(ps_id);
    kal_prompt_trace(MOD_D2AM+ps_id, "is_custom_d2_apn_cfg_chg_notify_support() SBPID in custom = %d", sbp_id);

    switch(sbp_id) {
        case 129:{ //KDDI         
            return KAL_TRUE;
            break;
        }
        default:
            return KAL_FALSE;
    }
}

static void ddm_pdn_profile_deact_hdl (kal_uint32 ps_id, d2cm_get_pdn_profile_ind_struct *ind_ptr, void *arg)
{
    struct
    {
        int p_cid;
        int fb_cid;
        kal_bool is_dangling;
    }*cid_ptr = arg;;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || ind_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "ddm_pdn_profile_deact_hdl(): Invalid argument!!\n");
        goto DDM_PDN_PROFILE_DEACT_HDL_ERR_1;
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "KDDI ddm_pdn_profile_deact_hdl(): %s(%d), %d, %x, %d, %d!!\n", ind_ptr->apn, ind_ptr->apn_idx, ind_ptr->state, ind_ptr->flag, ind_ptr->p_cid, ind_ptr->fb_cid);
// ++++ DEBUG ++++

    if(ind_ptr->state == D2CM_PDN_STATUS_ACT)    // NEED_TO_BE_NOTICED, equal to APN has been deleted? Carefully review it!
    {
        // deactivating the p_cid
        if(ind_ptr->p_cid != D2CM_INVAL_CID && ind_ptr->p_cid == cid_ptr->p_cid)
        {

            if(ddm_deact_cid_state[ind_ptr->p_cid] == KAL_FALSE)
            {

// ---- DEBUG ----
                kal_prompt_trace(MOD_D2CUST + ps_id, "KDDI ddm_pdn_profile_deact_hdl(): CID %d triggerred deactivation or detach!!\n", ind_ptr->p_cid);
// ++++ DEBUG ++++
                if(cid_ptr->is_dangling == KAL_TRUE)
                    custom_ddm_deact_dangling_cid(ps_id, ind_ptr->p_cid, DDM_EVENT_IS_CLEAN_TABLE);
                else
                    custom_ddm_deact_used_cid(ps_id, ind_ptr->p_cid, DDM_EVENT_IS_CLEAN_TABLE);

                // setting the ddm_deact_cid_state
                ddm_deact_cid_state[ind_ptr->p_cid] = KAL_TRUE;
            }

            // deactivating the fb_cid
            if(ind_ptr->fb_cid != D2CM_INVAL_CID && ddm_deact_cid_state[ind_ptr->fb_cid] == KAL_FALSE && ind_ptr->fb_cid == cid_ptr->fb_cid)
            {

// ---- DEBUG ----
                kal_prompt_trace(MOD_D2CUST + ps_id, "KDDI ddm_pdn_profile_deact_hdl(): CID %d triggerred deactivation or detach!!\n", ind_ptr->fb_cid);
// ++++ DEBUG ++++
                if(cid_ptr->is_dangling == KAL_TRUE)
                    custom_ddm_deact_dangling_cid(ps_id, ind_ptr->fb_cid, DDM_EVENT_IS_CLEAN_TABLE);
                else
                    custom_ddm_deact_used_cid(ps_id, ind_ptr->fb_cid, DDM_EVENT_IS_CLEAN_TABLE);

                // setting the ddm_deact_cid_state
                ddm_deact_cid_state[ind_ptr->fb_cid] = KAL_TRUE;
            }
        }
    }

    return;
    
    // withdrawing what this function did
DDM_PDN_PROFILE_DEACT_HDL_ERR_1:
    return;
}

void custom_d2_apn_change_deact_pdn(int ps_id, int p_cid, int fb_cid, kal_bool is_dangling)
{
	d2cm_get_pdn_profile_req_struct req;
    struct
    {
        int p_cid;
        int fb_cid;
        kal_bool is_dangling;
    }cid_info;

    cid_info.p_cid = p_cid;
    cid_info.fb_cid = fb_cid;
    cid_info.is_dangling = is_dangling;

    // getting the PDN profiles
    memset((void*)(&req), 0, sizeof(req));
    if(d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &req, ddm_pdn_profile_deact_hdl, (void*)(&cid_info)) == D2CM_API_RES_FAIL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_event_cb(): d2cm_get_pdn_profile() error!!\n");
        //goto CUSTOM_D2CM_EVENT_CB_ERR_1;
    }

}

kal_bool custom_d2_signalling_flag(kal_bool apn_type_is_ims, kal_uint32 default_sbp_id, kal_uint32 sbp_id, char *apn)
{
    if((apn_type_is_ims == KAL_TRUE) || (default_sbp_id == 1) || (default_sbp_id == 0 && sbp_id == 1) || (default_sbp_id == 0 && sbp_id == 147)) {
        if(default_sbp_id == 1 || (default_sbp_id == 0 && sbp_id == 1) || (default_sbp_id == 0 && sbp_id == 147)) // CMCC
            return KAL_FALSE;
        else
            return KAL_TRUE;
    } else {
        if(default_sbp_id == 0 && sbp_id == 6 && (strcmp(apn, "") == 0))
            return KAL_TRUE;

        if(default_sbp_id == 0 && sbp_id == 17 && (strcmp(apn, "") == 0))
            return KAL_TRUE;

        if(default_sbp_id == 0 && sbp_id == 3 && (strcmp(apn, "") == 0))
            return KAL_TRUE;

        return KAL_FALSE;
    }

}
kal_bool custom_d2_pcscf_discovery_flag(kal_bool apn_type_is_ims, kal_bool apn_type_is_rcs, kal_uint32 default_sbp_id, kal_uint32 sbp_id, char *apn)
{
    if(sbp_id == 114 || sbp_id == 115 || sbp_id == 116){
        return KAL_TRUE;
    }
    if((apn_type_is_ims == KAL_TRUE) || (apn_type_is_rcs == KAL_TRUE) || (default_sbp_id == 1) || (default_sbp_id == 0 && sbp_id == 1)) {
        return KAL_TRUE;
    } else {
        if(default_sbp_id == 0 && sbp_id == 6 && (strcmp(apn, "") == 0))
            return KAL_TRUE;

        if(default_sbp_id == 0 && sbp_id == 17 && (strcmp(apn, "") == 0))
            return KAL_TRUE;

        if(default_sbp_id == 0 && sbp_id == 3 && (strcmp(apn, "") == 0))
            return KAL_TRUE;

        return KAL_FALSE;
    }
}
kal_bool custom_d2_need_to_fallback(kal_uint32 sbp_id, kal_uint16 err_cause)
{
    switch(sbp_id) {
        case 6: // Vodafone
            {
                if(err_cause == INVALID_CHARACTERS_IN_DIAL_ERRSTRING_ERR || err_cause == NO_NW_SERVICE)
                    return KAL_FALSE;
                break;
            }
        case 157: // Telus
            {
                if(RMMI_ERR_MISSING_APN == err_cause || RMMI_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED == err_cause)
                    return KAL_FALSE;
                break;    
            }
        default:
            return KAL_TRUE;
            break;
    }
    return KAL_TRUE;
}
kal_bool custom_d2_need_to_get_pco_info(kal_uint32 sbp_id)
{
    switch(sbp_id) {
        case 12:
            return KAL_TRUE;
        default:
            return KAL_FALSE;    
    }
    return KAL_FALSE;
}
kal_bool custom_d2_need_to_set_pco_info(kal_uint32 sbp_id)
{
    switch(sbp_id) {
        case 12:
            return KAL_TRUE;
        default:
            if(default_sbp_id == 12)
                return KAL_TRUE;
            return KAL_FALSE;    
    }
    return KAL_FALSE;
}
kal_bool custom_d2_is_ia_need_fallback(kal_uint32 sbp_id, kal_uint8 ps_id)
{
    switch(default_sbp_id) {
        case 145: // AT&T
        case 196: // AT&T
        case 7:   // AT&T
            return isTestSim(ps_id) ? KAL_TRUE : KAL_FALSE;
        default:
            if(sbp_id == 19)
                return KAL_TRUE;
            if(isTestSim(ps_id))
                return (sbp_id == 7 || sbp_id == 0) ? KAL_TRUE : KAL_FALSE;
            else
                return KAL_FALSE;
    }
}
kal_bool custom_d2_need_to_deact_and_act_for_emergency(kal_uint32 sbp_id)
{
    switch(default_sbp_id) {
        case 12:
            return KAL_TRUE;
        default:
            return (sbp_id == 12) ? KAL_TRUE : KAL_FALSE;
    }    
}
kal_bool custom_d2_need_to_reactivate_data_call(kal_uint32 sbp_id, kal_uint16 err_cause, kal_uint32 fail_cnt)
{
    switch(default_sbp_id) {
        case 12:
            if((err_cause == PAM_VZW_PDN_ACCESS_REJECT_DISABLE_IN_APN_TABLE || err_cause == PAM_VZW_PDN_ACCESS_REJECT_STOP_ATTACH_FOR_CLASS1_AND_CLASS2_NOT_ENABLED) && fail_cnt < 20)
                return KAL_TRUE;
            else
                return KAL_FALSE;
        default:
            if(sbp_id == 12) {
                if((err_cause == PAM_VZW_PDN_ACCESS_REJECT_DISABLE_IN_APN_TABLE || err_cause == PAM_VZW_PDN_ACCESS_REJECT_STOP_ATTACH_FOR_CLASS1_AND_CLASS2_NOT_ENABLED) && fail_cnt < 20)
                    return KAL_TRUE;
                else
                    return KAL_FALSE;
            } else {
                return KAL_FALSE;
            }
    }
}

kal_bool custom_d2_need_to_retry_with_timer(kal_uint32 ps_id, kal_uint32 sbp_id, kal_uint16 err_cause, kal_uint32 apn_type, kal_uint32 fail_cnt, kal_uint32 *time_duration)
{
    kal_bool ret_value = KAL_FALSE;

    // Check for default SBP ID first.
    switch(default_sbp_id)
    {
        case 129:
        {
            if (apn_type == DDM_APN_TYPE_EMERGENCY && fail_cnt < 5)
            {
                *time_duration = 1;
                ret_value = KAL_TRUE;
                break;
            }
        }
        default:
        {
            // Check SIM SBP ID now.
            switch(sbp_id)
            {
                case 129:
                {
                    if (apn_type == DDM_APN_TYPE_EMERGENCY && fail_cnt < 5)
                    {
                        *time_duration = 1;
                        ret_value = KAL_TRUE;
                        break;
                    }
                }
            }
        }
    }

    kal_prompt_trace(
        MOD_D2CUST + ps_id, 
        "[%d] sbp id = %d, is_retry = %d, err_cause = %d, apn_type = %d, fail_cnt = %d, time_duration = %d.", 
        __LINE__,
        sbp_id,
        ret_value,
        err_cause,
        apn_type,
        fail_cnt,
        *time_duration);

    return ret_value;
}

static kal_bool custom_check_uid_filter(kal_uint32 ps_id, kal_uint32 cid) {
    d2cm_get_pdn_profile_ind_struct pdn_profile;
    kal_uint32 i;

    // d2cm_get_pdn_profile()
    // Used2cm_search_pdn_profile_by_cid, and search if the p_cid_usr_list[] contains MOD_D2AT ~ MOD_D2AT_4.

    if(d2cm_search_pdn_profile_by_cid(ps_id, MOD_DDM, cid, &pdn_profile) == D2CM_API_RES_FAIL)
    {
        kal_prompt_trace(MOD_DDM + ps_id, "custom_check_uid_filter(): d2cm_search_pdn_profile_by_cid() error!\n");
        return KAL_FALSE;
    }

    if (pdn_profile.num_of_p_cid_usr <= 0) {
        kal_prompt_trace(MOD_DDM + ps_id, "custom_check_uid_filter(): No user!\n");
        return KAL_FALSE;
    }

    for (i = 0; i < pdn_profile.num_of_p_cid_usr; i++) {
        module_type usr_id = pdn_profile.p_cid_usr_list[i];

        if (usr_id == MOD_IMSM) {
            break;
        }

#ifdef __GEMINI__
        if (usr_id == MOD_IMSM_2) {
            break;
        }
#if (GEMINI_PLUS >= 3)
        if (usr_id == MOD_IMSM_3) {
            break;
        }
#if (GEMINI_PLUS >= 4)
        if (usr_id == MOD_IMSM_4) {
            break;
        }
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
    }

    if (i >= pdn_profile.num_of_p_cid_usr) {
        kal_prompt_trace(MOD_DDM + ps_id, "custom_check_uid_filter(): IMSM not user!\n");
        return KAL_FALSE;
    }
    return KAL_TRUE;
}


static void d2cm_netif_send_imsm_intermediate_cnf(kal_uint32 ps_id, const d2cm_act_data_call_cnf_struct *act_data_call_cnf_ptr, void* arg){

    // ---- DEBUG ----
    //kal_prompt_trace(MOD_D2CM + ps_id, "d2cm_netif_send_imsm_intermediate_cnf(INPUT): ps_id = %d!!\n", ps_id);
    // ++++ DEBUG ++++

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || act_data_call_cnf_ptr == NULL)
    {
        //kal_prompt_trace(MOD_D2CM + ps_id, "d2cm_netif_send_imsm_intermediate_cnf(): Invalid argument!!\n");
        goto D2CM_NETIF_SEND_IMSM_INTERMEDIATE_CNF_ERR_1;
    }

    // ---- DEBUG ----
    //kal_prompt_trace(MOD_D2CM + ps_id, "d2cm_netif_send_imsm_intermediate_cnf(): res = %d, cid = %d!!\n", act_data_call_cnf_ptr->res, act_data_call_cnf_ptr->cid);
    // ++++ DEBUG ++++

    // initializing the variables
    // N/A
    // checking the res
    if(custom_check_uid_filter(ps_id, act_data_call_cnf_ptr->cid) == KAL_TRUE)
    {
        if(act_data_call_cnf_ptr->res == D2CM_RES_SUCC || act_data_call_cnf_ptr->res == D2CM_RES_SUCC_ABORT || act_data_call_cnf_ptr->res == D2CM_RES_SUCC_CONT)
            {
                if(act_data_call_cnf_ptr->cid == act_data_call_cnf_ptr->p_cid)
                {
                    d2cm_netif_send_imsm_intermediate_cnf_struct *intermediate_cnf_ptr = NULL;

                    // allocating the event_ind_ptr
                    if((intermediate_cnf_ptr = (d2cm_netif_send_imsm_intermediate_cnf_struct*)construct_local_para(sizeof(d2cm_netif_send_imsm_intermediate_cnf_struct), TD_RESET)) == NULL)
                    {
                        //kal_prompt_trace(MOD_D2CM + ps_id, "d2cm_netif_send_imsm_intermediate_cnf(): mdfx_event_alloc() error!!\n");
                        goto D2CM_NETIF_SEND_IMSM_INTERMEDIATE_CNF_ERR_1;
                    }
                    //intermediate_cnf_ptr = act_data_call_cnf_ptr;

                    intermediate_cnf_ptr->src_id = act_data_call_cnf_ptr->src_id;
                    intermediate_cnf_ptr->cid = act_data_call_cnf_ptr->cid;
                    intermediate_cnf_ptr->p_cid = act_data_call_cnf_ptr->p_cid;
                    intermediate_cnf_ptr->fb_cid = act_data_call_cnf_ptr->fb_cid;
                    memcpy((void*)(&(intermediate_cnf_ptr->ip_info)), (const void*)(&(act_data_call_cnf_ptr->ip_info)), sizeof(act_data_call_cnf_ptr->ip_info));
                    memcpy((void*)(&(intermediate_cnf_ptr->net_info)), (const void*)(&(act_data_call_cnf_ptr->net_info)), sizeof(act_data_call_cnf_ptr->net_info));
                    intermediate_cnf_ptr->if_info.if_type = act_data_call_cnf_ptr->if_info.if_type;
                    intermediate_cnf_ptr->if_info.if_id = act_data_call_cnf_ptr->if_info.if_id;
                    memcpy((void*)(&(intermediate_cnf_ptr->prv.imsm.ims_info)), (const void*)(&(act_data_call_cnf_ptr->prv.imsm.ims_info)), sizeof(act_data_call_cnf_ptr->prv.imsm.ims_info));
                    memset((void*)(&(intermediate_cnf_ptr->retry_info)), 0, sizeof(act_data_call_cnf_ptr->retry_info));
                    intermediate_cnf_ptr->prv.imsm.rat_type = act_data_call_cnf_ptr->prv.imsm.rat_type;
                    kal_prompt_trace(MOD_D2CM + ps_id, "intermediate_cnf_ptr->cid %d", intermediate_cnf_ptr->cid);
                    kal_prompt_trace(MOD_D2CM + ps_id, "intermediate_cnf_ptr->p_cid %d", intermediate_cnf_ptr->p_cid);
                    kal_prompt_trace(MOD_D2CM + ps_id, "intermediate_cnf_ptr->prv.imsm.rat_type %d", intermediate_cnf_ptr->prv.imsm.rat_type);
                    kal_prompt_trace(MOD_D2CM + ps_id, ".d2cm_act_data_call_cnf_struct.ip_info.PDPv4_addr_present %d", intermediate_cnf_ptr->ip_info.PDPv4_addr_present);
                    kal_prompt_trace(MOD_D2CM + ps_id, ".d2cm_act_data_call_cnf_struct.ip_info.PDPv6_addr_present %d", intermediate_cnf_ptr->ip_info.PDPv6_addr_present);

                    //memcpy((d2cm_act_data_call_cnf_struct*)intermediate_cnf_ptr, act_data_call_cnf_ptr, sizeof(d2cm_act_data_call_cnf_struct));

                    // sending the event_ptr
                    msg_send6(MOD_D2CM + ps_id, MOD_IMSM + ps_id, IMSM_D2CM_SAP, MSG_ID_D2CM_NETIF_SEND_IMSM_INTERMEDIATE_CNF, (local_para_struct*)intermediate_cnf_ptr, NULL);
                }
            }

            // ---- DEBUG ----
            //kal_prompt_trace(MOD_D2CM + ps_id, "d2cm_netif_send_imsm_intermediate_cnf(OUTPUT): ps_id = %d!!\n", ps_id);
            // ++++ DEBUG ++++
            return;

           // withdrawing what this function did
           D2CM_NETIF_SEND_IMSM_INTERMEDIATE_CNF_ERR_1:
           return;
    }
}

void custom_ddm_register_reset_retry_timer_on_apn_config_change_func(ddm_reset_retry_timer_on_apn_config_change_func_ptr func)
{
    ddm_reset_retry_timer_on_apn_config_change_callback = func;
}

void custom_ddm_register_ddm_deact_dangling_cid(ddm_deact_dangling_cid_ptr func)
{
    ddm_deact_dangling_cid_func_ptr = func;
}
void custom_ddm_register_ddm_deact_used_cid(ddm_deact_used_cid_ptr func)
{
    ddm_deact_used_cid_func_ptr = func;
}

void custom_ddm_deact_dangling_cid(unsigned int ps_id, kal_uint32 cid, ddm_deact_event_enum reason)
{
    ddm_deact_dangling_cid_func_ptr(ps_id, cid, reason);    
}

void custom_ddm_deact_used_cid(unsigned int ps_id, kal_uint32 cid, ddm_deact_event_enum reason)
{
    ddm_deact_used_cid_func_ptr(ps_id, cid, reason);    
}


static kal_bool d2rm_is_apn_idx_reusable_cond (unsigned int ps_id, const char *apn, const d2cm_get_pdn_profile_ind_struct *dst_pdn_profile_ptr, const d2cm_get_pdn_profile_ind_struct *src_pdn_profile_ptr)
{
    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || apn == NULL || dst_pdn_profile_ptr == NULL || src_pdn_profile_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "d2rm_is_apn_idx_reusable_cond(): Invalid argument!!\n");
        goto D2RM_IS_APN_IDX_REUSABLE_COND_ERR_1;
    }

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
#endif

    return KAL_TRUE;

    // withdrawing what this function did
D2RM_IS_APN_IDX_REUSABLE_COND_ERR_1:
    return KAL_FALSE;
}

static void custom_ddm_QoS_pdn_profile_cb(kal_uint32 ps_id, d2cm_get_pdn_profile_ind_struct *pdn_profile_ptr, void* arg)
{
    //checking the inputs
    if (ps_id >= MAX_SIM_NUM || pdn_profile_ptr == NULL) {
        kal_prompt_trace((MOD_D2CUST + ps_id), "custom_ddm_QoS_pdn_profile_cb(): Invalid argument!!\n");
        return;
    }

    kal_prompt_trace((MOD_D2CUST + ps_id), "custom_ddm_QoS_pdn_profile_cb: PDN profile apn_type=[%s] engaged_apn_type=[%s]", pdn_profile_ptr->apn_type, pdn_profile_ptr->engaged_apn_type);

    // Copying the PDN profile
    memcpy(arg, (const void*)pdn_profile_ptr, sizeof(d2cm_get_pdn_profile_ind_struct));
}


#define QOS_DATA_STRING_TOKENS_MAX      3
#define QOS_DATA_STRING_TOKEN_LEN       6
/** custom_ddm_check_nw_limit_QoS *****
 * ps_id                    SIM ID
 * cid                      CID, to check PDN type
 * param(last_plmn)         Last PLMN
 * param(qos_info)          MBR/AMBR info
 * param(qos_data_string)   NVRAM stored MBR/AMBR info
 *
 * RETURN Value
 *  kal_uint32          value          Sends URC <+ENWLIMIT:value> to AP
 *      -1              Do not send URC
 *      0               <+ENWLIMIT:0>  NW did not limit QoS
 *      1               <+ENWLIMIT:1>  NW limits the QoS
 */
kal_int32 custom_ddm_check_nw_limit_QoS(kal_uint8 ps_id, kal_uint32 cid, const char* last_plmn, const QosInfo_t *qos_info, const char* qos_data_string) {
    // Customization

    ////////////////////////////////////////////////////////////
    // Split the qos_data_string.
    // Example : split "3968,3968,460xx" to uint32,uint32,string
    int i;
    char *saveptr;
    char *token[QOS_DATA_STRING_TOKENS_MAX];
    char *str;
    char qos_data[256];
    unsigned int token1 = 0, token2 = 0;
    char token3[QOS_DATA_STRING_TOKEN_LEN];


    ////////////////////////////////////////////////////////////
    // Reference code to identify if need to send URC back to AP
    // Check if PDN is for Internet
    d2cm_get_pdn_profile_req_struct request;
    d2cm_get_pdn_profile_ind_struct pdn_profile;

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_ddm_check_nw_limit_QoS(): Invalid argument!!\n");
        return -1;
    }

    if(qos_data_string == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_ddm_check_nw_limit_QoS(): qos_data_string is NULL!!\n");
        return -1;
    }

    // Fetching PDN profiles
    memset((void*)(&pdn_profile), 0, sizeof(pdn_profile));
    memset((void*)(&request), 0, sizeof(request));
    request.cid_present = KAL_TRUE;
    request.cid = cid;

    if(d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &request, custom_ddm_QoS_pdn_profile_cb, &pdn_profile) == D2CM_API_RES_FAIL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_ddm_check_nw_limit_QoS(): d2cm_get_pdn_profile() error!!\n");
        return -1;
    }

    // Check if APN type = "default" for Internet PDN.
    if (((strcasestr((char*)pdn_profile.engaged_apn_type, "default")) == NULL) &&
        (!((strcasecmp((char*)pdn_profile.engaged_apn_type, "unknown") == 0) && (strcasestr((char*)pdn_profile.apn_type, "default"))))) {
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_ddm_check_nw_limit_QoS(): APN type error!\n");
        return -1;
    }

    // split the tokens
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_ddm_check_nw_limit_QoS(): qos_data_string - %s.", qos_data_string != NULL ? qos_data_string : "");

    memset((void*)(qos_data), 0, sizeof(qos_data));
    strncpy((char*)qos_data, qos_data_string, sizeof(qos_data) - 1);

    str = qos_data;
    // Use these values as required.
    for(i = 0; i < QOS_DATA_STRING_TOKENS_MAX; i++) {
        token[i] = strtok_r(str, ",", &saveptr);
        str = NULL;
        if (token[i] == NULL) break;
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_ddm_check_nw_limit_QoS(): QoS data [%d] - %s.", i, token[i]);
    }

    if (i < QOS_DATA_STRING_TOKENS_MAX) {
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_ddm_check_nw_limit_QoS(): ERROR : QoS data insufficient. Num of tokens = %d.", i);
        return -1;
    }

    // Token # 1. Uint32
    token1 = strtoul(token[0], NULL, 10);
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_ddm_check_nw_limit_QoS(): token1 = %d", token1);

    // Token # 2. Uint32
    token2 = strtoul(token[1], NULL, 10);
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_ddm_check_nw_limit_QoS(): token2 = %d", token2);

    // Token # 3. String of size 5 characters
    memset((void*)(token3), 0, sizeof(token3));
    memcpy(token3, (const void*)(token[2]), sizeof(token3) - 1);
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_ddm_check_nw_limit_QoS(): token3 = %s", token3);

    // Use the tokens, as you like.

    // If NW limits QoS, return 1; otherwise 0. Please write customization logic.
    // May need to check MBR/AMBR values if they are present in the struct.
    return 1;
}


kal_bool custom_d2_report_ewopdnerr_l2who_fail ()
{
    return KAL_FALSE;
}

kal_bool custom_d2_report_ewopdnerr_config(kal_uint32 pdn_type)
{
	if(D2RM_CUSTOM_WO_PDN_ERROR_URC_CONFIG_MASK & D2RM_PDN_TYPE_MASK(pdn_type))
		return KAL_TRUE;
	else
		return KAL_FALSE;

}

kal_uint32 custom_d2_w2lho_disconn_src_duration (kal_uint8 ps_id)
{
    /* This function is for customizing the duration of UE sending PDN
     * deactivation request after handover from IWLAN to Celluar NW.
     * By default, the value is 3000 ms.
     * It's just a default value, as there is no operator requirement for it.
     *
     * For AT&T testcase, the value is changed to 1500, for passing the test. */

    /* For AT&T testcase LTE-BTR-5-7224, machine allows UE deact PDN in 2 seconds */
    if (default_sbp_id == SBP_ID_ATT && isTestSim(ps_id)) {
        return 1500;
    }

    return 3000;
}

kal_uint32 custom_d2_l2who_disconn_src_duration (kal_uint8 ps_id)
{
    /* This function is for customizing the duration of UE sending PDN
     * deactivation request after handover from Celluar NW to IWLAN.
     * By default, the value is 3000 ms.
     * It's just a default value, as there is no operator requirement for it.
     *
     * For AT&T testcase, the value is changed to 1500, for passing the test. */

    return custom_d2_w2lho_disconn_src_duration(ps_id);
}

/****************************************************/
/* ---- Custom D2CM Utility Registration Start ---- */
/****************************************************/
void custom_d2cm_event_cb (kal_uint32 ps_id, d2cm_event_ind_struct *ind_ptr, void *arg)
{
    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || ind_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_event_cb(): Invalid argument!!\n");
        goto CUSTOM_D2CM_EVENT_CB_ERR_1;
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_event_cb(): event = %d, apn_present = %d, cid_present = %d!!\n", ind_ptr->event, ind_ptr->info.apn_present, ind_ptr->info.cid_present);
    if(ind_ptr->info.apn_present == KAL_TRUE)
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_event_cb(): apn = \"%s\", apn_idx = %d!!\n", ind_ptr->info.apn, ind_ptr->info.apn_idx);
    if(ind_ptr->info.cid_present == KAL_TRUE)
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_event_cb(): cid = %d!!\n", ind_ptr->info.cid);
// ++++ DEBUG ++++

    switch(ind_ptr->event)
    {
        case D2CM_EVENT_PDN_PROFILE_CHG:
        {
            d2cm_get_pdn_profile_req_struct req;
            kal_bool is_vzw;

/*****************/
/* ==== VzW ==== */
/*****************/
            // checking it is VzW or not, NEED_TO_BE_NOTICED, to be replaced by sbp_get_sim_sbp_id()
            memset((void*)(&req), 0, sizeof(req));
            is_vzw = KAL_FALSE;
            if(d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &req, vzw_d2cm_is_vzw_hdl, (void*)(&is_vzw)) == D2CM_API_RES_FAIL)
            {
                kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_event_cb(): d2cm_get_pdn_profile() error!!\n");
                goto CUSTOM_D2CM_EVENT_CB_ERR_1;
            }            

            if(is_vzw == KAL_TRUE)
            {
                // getting the PDN profiles
                req.mcc_mnc = 310012;
                req.op.vzw.apncl = 3;
                if(d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &req, vzw_d2cm_pdn_profile_chg_hdl, arg) == D2CM_API_RES_FAIL)
                {
                    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_event_cb(): d2cm_get_pdn_profile() error!!\n");
                    goto CUSTOM_D2CM_EVENT_CB_ERR_1;
                }
            }

/*****************/
/* ==== DDM ==== */
/*****************/
            // getting the PDN profiles
            memset((void*)(&req), 0, sizeof(req));
            if(d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &req, ddm_pdn_profile_chg_hdl, arg) == D2CM_API_RES_FAIL)
            {
                kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_event_cb(): d2cm_get_pdn_profile() error!!\n");
                goto CUSTOM_D2CM_EVENT_CB_ERR_1;
            }
            break;
        }
        case D2CM_EVENT_IPV6_RA_INIT_FAIL:
        case D2CM_EVENT_IPV6_RA_REFRESH_FAIL:
        {
            d2cm_get_pdn_profile_req_struct req;
            kal_bool is_vzw;
            struct
            {
                void *arg;
                atcmd_deact_cause_enum deact_cause;
            }hdl_arg;

/*****************/
/* ==== VzW ==== */
/*****************/
            // checking it is VzW or not, NEED_TO_BE_NOTICED, to be replaced by sbp_get_sim_sbp_id()
            memset((void*)(&req), 0, sizeof(req));
            is_vzw = KAL_FALSE;
            if(d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &req, vzw_d2cm_is_vzw_hdl, (void*)(&is_vzw)) == D2CM_API_RES_FAIL)
            {
                kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_event_cb(): d2cm_get_pdn_profile() error!!\n");
                goto CUSTOM_D2CM_EVENT_CB_ERR_1;
            } 

            if(is_vzw == KAL_TRUE)
            {
                // checking the inputs
                if(ind_ptr->info.apn_present == KAL_FALSE && ind_ptr->info.cid_present == KAL_FALSE)
                {
                    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_event_cb(): Invalid request code %d, %d!!\n", ind_ptr->info.apn_present, ind_ptr->info.cid_present);
                    goto CUSTOM_D2CM_EVENT_CB_ERR_1;
                }

                // getting the PDN profiles
                if((req.apn_present = ind_ptr->info.apn_present) == KAL_TRUE)
                {
                    strncpy((char*)(&req.apn), (const char*)(ind_ptr->info.apn), sizeof(req.apn) - 1);
                    req.apn[sizeof(req.apn) - 1] = '\0';
                }
                if((req.cid_present = ind_ptr->info.cid_present) == KAL_TRUE)
                    req.cid = ind_ptr->info.cid;
                req.mcc_mnc = 310012;
                req.op.vzw.apncl = 1;
                hdl_arg.arg = arg;
                hdl_arg.deact_cause = ind_ptr->event == D2CM_EVENT_IPV6_RA_REFRESH_FAIL ? ATCMD_DEACT_CAUSE_EGACT_CAUSE_DEACT_RA_REFRESH_ERROR : ATCMD_DEACT_CAUSE_EGACT_CAUSE_DEACT_RA_INITIAL_ERROR;
                if(d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &req, vzw_d2cm_ipv6_no_ra_hdl, (void*)(&hdl_arg)) == D2CM_API_RES_FAIL)
                {
                    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_event_cb(): d2cm_get_pdn_profile() error!!\n");
                    goto CUSTOM_D2CM_EVENT_CB_ERR_1;
                }
            }
            break;
        }
        default:
        {

// ---- DEBUG ----
            kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_event_cb(): event %d has no action!!\n", ind_ptr->event);
// ++++ DEBUG ++++

            // N/A
            break;
        }
    }

    return;
    
    // withdrawing what this function did
CUSTOM_D2CM_EVENT_CB_ERR_1:
    return;
}

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
#endif

void custom_d2cm_post_act_data_call_cb (kal_uint32 ps_id, d2cm_act_data_call_cnf_struct *cnf_ptr, void *arg)
{
    d2cm_get_pdn_profile_req_struct req;
    kal_bool is_vzw;
    struct
    {
        d2cm_act_data_call_cnf_struct *act_data_call_cnf_ptr;
        void *arg;
    }hdl_arg;

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_act_data_call_cb(INPUT): ps_id = %d!!\n", ps_id);
// ++++ DEBUG ++++

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || cnf_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_act_data_call_cb(): Invalid argument!!\n");
        goto CUSTOM_D2CM_POST_ACT_DATA_CALL_CB_ERR_1;
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_act_data_call_cb(VzW): res = %d, cid = %d!!\n", cnf_ptr->res, cnf_ptr->cid);
// ++++ DEBUG ++++

/*****************/
/* ==== VzW ==== */
/*****************/
    // checking it is VzW or not, NEED_TO_BE_NOTICED, to be replaced by sbp_get_sim_sbp_id()
    memset((void*)(&req), 0, sizeof(req));
    is_vzw = KAL_FALSE;
    if(d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &req, vzw_d2cm_is_vzw_hdl, (void*)(&is_vzw)) == D2CM_API_RES_FAIL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_act_data_call_cb(): d2cm_get_pdn_profile() error!!\n");
        goto CUSTOM_D2CM_POST_ACT_DATA_CALL_CB_ERR_1;
    } 

    if(is_vzw == KAL_TRUE)
    {
        if((cnf_ptr->res == D2CM_RES_SUCC || cnf_ptr->res == D2CM_RES_SUCC_ABORT || cnf_ptr->res == D2CM_RES_SUCC_CONT) && cnf_ptr->net_info.pcscfv4_num == 0 && cnf_ptr->net_info.pcscfv6_num == 0)
        {
            // getting the PDN profiles
            req.mcc_mnc = 310012;
            req.op.vzw.apncl = 1;
            hdl_arg.act_data_call_cnf_ptr = cnf_ptr;
            hdl_arg.arg = arg;
            if(d2cm_get_pdn_profile(ps_id, D2CM_CUSTOM_MOD_ID_OP, &req, vzw_d2cm_post_act_data_call_hdl, (void*)(&hdl_arg)) == D2CM_API_RES_FAIL)
            {
                kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_act_data_call_cb(): d2cm_get_pdn_profile() error!!\n");
                goto CUSTOM_D2CM_POST_ACT_DATA_CALL_CB_ERR_1;
            }
        }
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_act_data_call_cb(DDM): res = %d, cid = %d!!\n", cnf_ptr->res, cnf_ptr->cid);
// ++++ DEBUG ++++

/*****************/
/* ==== DDM ==== */
/*****************/
    ddm_post_act_data_call_internet_check(ps_id, (const d2cm_act_data_call_cnf_struct*)cnf_ptr, arg);

    d2cm_netif_send_imsm_intermediate_cnf(ps_id, (const d2cm_act_data_call_cnf_struct*)cnf_ptr, arg);
// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_act_data_call_cb(OUTPUT): ps_id = %d!!\n", ps_id);
// ++++ DEBUG ++++

    return;
    
    // withdrawing what this function did
CUSTOM_D2CM_POST_ACT_DATA_CALL_CB_ERR_1:
    return;
}

void sim_d2cm_post_act_data_call_cb (kal_uint32 ps_id, d2cm_act_data_call_cnf_struct *cnf_ptr, void *arg)
{
// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "sim_d2cm_post_act_data_call_cb(INPUT): ps_id = %d!!\n", ps_id);
// ++++ DEBUG ++++

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || cnf_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "sim_d2cm_post_act_data_call_cb(): Invalid argument!!\n");
        goto SIM_D2CM_POST_ACT_DATA_CALL_CB_ERR_1;
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "sim_d2cm_post_act_data_call_cb(): res = %d, cid = %d!!\n", cnf_ptr->res, cnf_ptr->cid);
// ++++ DEBUG ++++

    // initializing the variables
    // N/A

     // checking the res
    if(cnf_ptr->res == D2CM_RES_SUCC || cnf_ptr->res == D2CM_RES_SUCC_ABORT || cnf_ptr->res == D2CM_RES_SUCC_CONT)
    {
        d2cm_get_pdn_profile_ind_struct get_pdn_profile_ind;

         // searching the cid
        if(d2cm_search_pdn_profile_by_cid(ps_id, D2CM_CUSTOM_MOD_ID_OP, cnf_ptr->cid, &get_pdn_profile_ind) == D2CM_API_RES_FAIL)
        {
            kal_prompt_trace(MOD_D2CUST + ps_id, "sim_d2cm_post_act_data_call_cb(): d2cm_search_pdn_profile_by_cid() errpr!!\n");
            goto SIM_D2CM_POST_ACT_DATA_CALL_CB_ERR_1;
        }

        if(cnf_ptr->cid == get_pdn_profile_ind.p_cid || ((1 << cnf_ptr->cid) & get_pdn_profile_ind.p_ded_cid) != 0 || \
           cnf_ptr->cid == get_pdn_profile_ind.fb_cid || ((1 << cnf_ptr->cid) & get_pdn_profile_ind.fb_ded_cid) != 0)
        {
            d2cm_event_ind_struct *event_ind_ptr;

// ---- DEBUG ----
            kal_prompt_trace(MOD_D2CUST + ps_id, "sim_d2cm_post_act_data_call_cb(): (p_cid, fb_cid, p_ded_cid, fb_ded_cid) = (%d, %d, %x, %x) has APN \"%s\"!!\n", get_pdn_profile_ind.p_cid, get_pdn_profile_ind.fb_cid, get_pdn_profile_ind.p_ded_cid, get_pdn_profile_ind.fb_ded_cid, get_pdn_profile_ind.apn);
// ++++ DEBUG ++++

            // allocating the event_ind_ptr
            if((event_ind_ptr = (d2cm_event_ind_struct*)construct_local_para(sizeof(d2cm_event_ind_struct), TD_RESET)) == NULL)
            {
                kal_prompt_trace(MOD_D2CUST + ps_id, "sim_d2cm_post_act_data_call_cb(): mdfx_event_alloc() error!!\n");
                goto SIM_D2CM_POST_ACT_DATA_CALL_CB_ERR_1;
            }

            // setting the event_ind_ptr
//            memset((void*)((uint8_t*)event_ind_ptr + offsetof(d2cm_event_ind_struct, event)), 0, sizeof(d2cm_event_ind_struct) - offsetof(d2cm_event_ind_struct, event));
            event_ind_ptr->event = D2CM_EVENT_POST_ACT_DATA_CALL;
            event_ind_ptr->info.cid_present = KAL_TRUE;
            event_ind_ptr->info.cid = cnf_ptr->cid;
            strncpy((char*)event_ind_ptr->info.apn, (const char*)(get_pdn_profile_ind.apn), sizeof(event_ind_ptr->info.apn) - 1);
            event_ind_ptr->info.apn[sizeof(event_ind_ptr->info.apn) - 1] = '\0';
            event_ind_ptr->info.apn_idx = get_pdn_profile_ind.apn_idx;
            event_ind_ptr->info.apn_present = KAL_TRUE;

            // sending the event_ptr
            msg_send6(MOD_D2CM + ps_id, MOD_SIM + ps_id, ME_D2CM_SAP, MSG_ID_D2CM_EVENT_IND, (local_para_struct*)event_ind_ptr, NULL);
        }
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "sim_d2cm_post_act_data_call_cb(OUTPUT): ps_id = %d!!\n", ps_id);
// ++++ DEBUG ++++

    return;
    
    // withdrawing what this function did
SIM_D2CM_POST_ACT_DATA_CALL_CB_ERR_1:
     return;
}

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
#endif

void custom_d2cm_post_deact_data_call_cb (kal_uint32 ps_id, d2cm_deact_data_call_cnf_struct *cnf_ptr, void *arg)
{

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_deact_data_call_cb(INPUT): ps_id = %d!!\n", ps_id);
// ++++ DEBUG ++++

    //checking the inputs
    if(ps_id >= MAX_SIM_NUM || cnf_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_deact_data_call_cb(): Invalid argument!!\n");
        goto CUSTOM_D2CM_POST_DEACT_DATA_CALL_CB_ERR_1;
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_deact_data_call_cb(DTAG): res = %d, cid = %d!!\n", cnf_ptr->res, cnf_ptr->cid);
// ++++ DEBUG ++++

/*****************/
/* ==== DTAG ==== */
/*****************/
    DTAG_dual_apn(ps_id);

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_deact_data_call_cb(DDM): res = %d, cid = %d!!\n", cnf_ptr->res, cnf_ptr->cid);
// ++++ DEBUG ++++

/*****************/
/* ==== DDM ==== */
/*****************/
    if(ddm_deact_cid_state[cnf_ptr->cid] == KAL_TRUE)
    {
        // resetting the ddm_deact_cid_state
        ddm_deact_cid_state[cnf_ptr->cid] = KAL_FALSE;

// ---- DEBUG ----
        kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_deact_data_call_cb(): CID %d completed deactivation or detach!!\n", cnf_ptr->cid);
// ++++ DEBUG ++++

    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "custom_d2cm_post_deact_data_call_cb(OUTPUT): ps_id = %d!!\n", ps_id);
// ++++ DEBUG ++++

    return;

    // withdrawing what this function did
CUSTOM_D2CM_POST_DEACT_DATA_CALL_CB_ERR_1:
    return;
}

void sim_d2cm_post_deact_data_call_cb (kal_uint32 ps_id, d2cm_deact_data_call_cnf_struct *cnf_ptr, void *arg)
{
    d2cm_event_ind_struct *event_ind_ptr;

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "sim_d2cm_post_deact_data_call_cb(INPUT): ps_id = %d!!\n", ps_id);
// ++++ DEBUG ++++

    // checking the inputs
    if(ps_id >= MAX_SIM_NUM || cnf_ptr == NULL)
    {
        kal_prompt_trace(MOD_D2CUST + ps_id, "sim_d2cm_post_deact_data_call_cb(): Invalid argument!!\n");
        goto SIM_D2CM_POST_DEACT_DATA_CALL_CB_ERR_1;
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "sim_d2cm_post_deact_data_call_cb(): res = %d, cid = %d!!\n", cnf_ptr->res, cnf_ptr->cid);
// ++++ DEBUG ++++

    // initializing the variables
    event_ind_ptr = NULL;

    // checking the res
    if(cnf_ptr->res == D2CM_RES_SUCC)
    {
        // allocating the event_ptr
        if((event_ind_ptr = (d2cm_event_ind_struct*)construct_local_para(sizeof(d2cm_event_ind_struct), TD_RESET)) == NULL)
        {
            kal_prompt_trace(MOD_D2CUST + ps_id, "sim_d2cm_post_deact_data_call_cb(): mdfx_event_alloc() error!!\n");
            goto SIM_D2CM_POST_DEACT_DATA_CALL_CB_ERR_1;
        }

        // setting the data
//        memset((void*)((uint8_t*)event_ind_ptr + offsetof(d2cm_event_ind_struct, event)), 0, sizeof(d2cm_event_ind_struct) - offsetof(d2cm_event_ind_struct, event));
        event_ind_ptr->event = D2CM_EVENT_POST_DEACT_DATA_CALL;
        event_ind_ptr->info.apn_present = KAL_FALSE;
        event_ind_ptr->info.cid_present = KAL_TRUE;
        event_ind_ptr->info.cid = cnf_ptr->cid;


        // sending the event_ptr
        msg_send6(MOD_D2CM + ps_id, MOD_SIM + ps_id, ME_D2CM_SAP, MSG_ID_D2CM_EVENT_IND, (local_para_struct*)event_ind_ptr, NULL);
    }

// ---- DEBUG ----
    kal_prompt_trace(MOD_D2CUST + ps_id, "sim_d2cm_post_deact_data_call_cb(OUTPUT): ps_id = %d!!\n", ps_id);
// ++++ DEBUG ++++

    return;
    
    // withdrawing what this function did

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

SIM_D2CM_POST_DEACT_DATA_CALL_CB_ERR_1:
    return;
}


/**************************************************/
/* ---- Custom D2CM Utility Registration End ---- */
/**************************************************/


void custom_d2_init()
{
    int i;
    kal_uint8 timer_name[20];

    // initializing the variables
    memset((void*)ddm_deact_cid_state, 0, sizeof(ddm_deact_cid_state));

    for (i = 0; i < MAX_SIM_NUM; i++) {
        // D2CM utility registration
        d2cm_reg_event_cb(i, D2CM_CUSTOM_MOD_ID_OP, D2CM_EVENT_PDN_PROFILE_CHG | D2CM_EVENT_IPV6_RA_INIT_FAIL | D2CM_EVENT_IPV6_RA_REFRESH_FAIL, custom_d2cm_event_cb, NULL);
        // => ACT PDN
//        d2cm_reg_pre_act_data_call_cb(i, D2CM_CUSTOM_MOD_ID_OP, custom_d2cm_pre_act_data_call_cb, NULL);
        d2cm_reg_post_act_data_call_cb(i, D2CM_CUSTOM_MOD_ID_OP, custom_d2cm_post_act_data_call_cb, NULL);
        d2cm_reg_post_act_data_call_cb(i, MOD_SIM, sim_d2cm_post_act_data_call_cb, NULL);    // NEED_TO_BE_NOTICED, a WORKAROUND before reg_post_act_data_call integrated into reg_event_cb
        // => DEACT PDN
//        d2cm_reg_pre_deact_data_call_cb(i, D2CM_CUSTOM_MOD_ID_OP, custom_d2cm_pre_deact_data_call_cb, NULL);
        d2cm_reg_post_deact_data_call_cb(i, D2CM_CUSTOM_MOD_ID_OP, custom_d2cm_post_deact_data_call_cb, NULL);
        d2cm_reg_post_deact_data_call_cb(i, MOD_SIM, sim_d2cm_post_deact_data_call_cb, NULL);    // NEED_TO_BE_NOTICED, a WORKAROUND before reg_post_deact_data_call integrated into reg_event_cb

        // ????
        internet_cid[i] = INVALID_INTERNET_CID;
        current_ps_id[i] = i;
        current_attached_rat[i] = RAT_NONE;
        current_is_roaming[i] = 0;
        current_plmn[i][0] = '\0';
        sprintf((char *)nodata_name[i], "NODATA");
        last_attached_rat[i] = RAT_NONE;
        last_is_roaming[i] = 0;
        nodata_target_state[i] = NODATA_TARGET_STATE_DEACT;
        nodata_state[i] = NODATA_STATE_IDLE;

        //
        memset(&timer_name[0], 0, sizeof(timer_name));
        kal_snprintf((char *)&timer_name[0], 19, "D2CUST_%d_TIMER", i + 1);
        custom_d2_event_scheduler[i] = evshed_create((kal_char *)timer_name, (module_type)MOD_D2RM + i, 0, 255); //TODO should be MOD_D2CUST
    }
}
