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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * d2cm_public_defs.h
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
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __D2CM_PUBLIC_DEFS_H__
#define __D2CM_PUBLIC_DEFS_H__

#include "kal_public_defs.h"
#include "atcmd_struct.h"
#include "ddm_common_struct.h"
#include "d2pm_public_defs.h"
#include "netinfo_common_struct.h"

// Type denifitions
typedef atcmd_request_type_enum d2cm_act_data_call_req_type_enum;
typedef ip_info_struct d2cm_act_data_call_ip_info_struct;
typedef net_info_struct d2cm_act_data_call_net_info_struct;
typedef if_info_struct d2cm_act_data_call_if_info_struct;
typedef retry_info_struct d2cm_act_data_call_retry_info_struct;
typedef ip_info_struct d2cm_ho_ip_info_struct;
typedef net_info_struct d2cm_ho_net_info_struct;
typedef retry_info_struct d2cm_get_retry_tmr_retry_info_struct;
typedef retry_info_struct d2cm_reset_retry_tmr_retry_info_struct;

typedef enum
{
    // a single CID or the final CID 
    D2CM_PDN_STATUS_FAIL = -1, 
    D2CM_PDN_STATUS_DEACT, 
    D2CM_PDN_STATUS_ACT, 
    D2CM_PDN_STATUS_UNUSABLE, 
    D2CM_PDN_STATUS_MAX = 0x7FFFFFFF
}d2cm_pdn_state_enum;

typedef enum
{
    // a single CID or the final CID 
    D2CM_RES_NONE = D2PM_RES_NONE, 
    D2CM_RES_FAIL = D2PM_RES_FAIL, 
    D2CM_RES_SUCC = D2PM_RES_SUCC , 
    // a subsequent CID
    D2CM_RES_FAIL_ABORT = D2PM_RES_FAIL_ABORT, 
    D2CM_RES_SUCC_ABORT = D2PM_RES_SUCC_ABORT, 
    D2CM_RES_FAIL_CONT = D2PM_RES_FAIL_CONT, 
    D2CM_RES_SUCC_CONT = D2PM_RES_SUCC_CONT, 
    // otherwise
    D2CM_RES_REJ = D2PM_RES_REJ, 
    D2CM_RES_RETRY = D2PM_RES_RETRY, 
    D2CM_RES_MAX = 0x7FFFFFFF
}d2cm_res_enum;

typedef enum
{
    D2CM_SUFF_COND_NONE = (0x00000000), 
    D2CM_SUFF_COND_IPV4 = (0x00000001), 
    D2CM_SUFF_COND_IPV6 = (0x00000002), 
    D2CM_SUFF_COND_IPVX = (0x00000004), 
    D2CM_SUFF_COND_IF_UP = (0x00000010), 
    D2CM_SUFF_COND_MAX = (0x7FFFFFFF)
}d2cm_suff_cond_enum;

typedef enum
{
    D2CM_IPV4V6_FB_PREF_DISABLE_IPV4_FIRST = 0, 
    D2CM_IPV4V6_FB_PREF_DISABLE_IPV6_FIRST, 
    D2CM_IPV4V6_FB_PREF_ENABLE_IPV4_FIRST, 
    D2CM_IPV4V6_FB_PREF_ENABLE_IPV6_FIRST, 
    D2CM_IPV4V6_FB_PREF_MAX = (0x7FFFFFFF)
}d2cm_ipv4v6_fb_pref_enum;

typedef enum
{
    D2CM_EVENT_NONE = (0x00000000), 
    D2CM_EVENT_PDN_PROFILE_CHG = (0x00000001), 
    D2CM_EVENT_PRE_ACT_DATA_CALL = (0x00000002), 
    D2CM_EVENT_POST_ACT_DATA_CALL = (0x00000004), 
    D2CM_EVENT_PRE_DEACT_DATA_CALL = (0x00000008), 
    D2CM_EVENT_POST_DEACT_DATA_CALL = (0x00000010), 
    D2CM_EVENT_IPV6_RA_INIT_FAIL = (0x00000020), 
    D2CM_EVENT_IPV6_RA_REFRESH_FAIL = (0x00000040), 
    D2CM_EVENT_MAX = (0x7FFFFFFF)
}d2cm_event_enum;

typedef enum
{
    D2CM_EVENT_ACTION_NONE = (0x00000000), 
    D2CM_EVENT_ACTION_REJ = (0x00000001), 
    D2CM_EVENT_ACTION_MAX = (0x7FFFFFFF)
}d2cm_event_action_enum;

typedef struct
{
    module_type mod_id;
    sap_type sap_id;
    int attr;
}d2cm_custom_usr_profile_struct;

// Macros
#define D2CM_INVAL_UID    (-1)
#define D2CM_INVAL_CID    (D2PM_INVAL_CID)
#define D2CM_MIN_CID (D2PM_MIN_CID)
#define D2CM_MAX_CID (D2PM_MAX_CID)
#define D2CM_CID_BITMAP_SIZE (((D2PM_MAX_CID - D2PM_MIN_CID) >> 3) + 1)
#define D2CM_INVAL_APN_IDX    (D2PM_INVAL_APN_IDX)
#define D2CM_ENGAGED_APN_IDX    (D2CM_INVAL_APN_IDX)
#define D2CM_MAX_NUM_OF_USR    (16)
// => Flags
// => => ACT_DATA_CALL_REQ
#define D2CM_ACT_DATA_CALL_REQ_FLAG_NONE    (0x00000000)
#define D2CM_ACT_DATA_CALL_REQ_FLAG_REQ_ONLY    (0x00000001)
#define D2CM_ACT_DATA_CALL_REQ_FLAG_RSP_ONLY    (0x00000002)
#define D2CM_ACT_DATA_CALL_REQ_FLAG_DANGLING    (0x00000004)
#define D2CM_ACT_DATA_CALL_REQ_FLAG_REUSE    (0x00000008)    // only effective when the PDN is avticated
// => => GET_PDN_PROFILE_REQ
#define D2CM_GET_PDN_PROFILE_REQ_FLAG_NONE    (0x00000000)
#define D2CM_GET_PDN_PROFILE_REQ_FLAG_INCL_ALIAS    (0x00000001)
#define D2CM_GET_PDN_PROFILE_REQ_FLAG_INCL_APN_IDX    (0x00000002)
#define D2CM_GET_PDN_PROFILE_REQ_FLAG_INCL_ALL    (0xFFFFFFFF)    // NEED_TO_BE_NOTICED, maybe different from all flags set in the current definition
// => => GET_PDN_PROFILE_IND
#define D2CM_GET_PDN_PROFILE_IND_FLAG_NONE    (0x00000000)
#define D2CM_GET_PDN_PROFILE_IND_FLAG_UNUSABLE    (0x00000001)
// => Custom
// => => User profile attributes
// => => => Bitmap
#define D2CM_ATTR_AUTH_MASK    (0x0000000F)
#define D2CM_ATTR_NO_AUTH    (0x00000000)
#define D2CM_ATTR_PDN_AUTH    (0x00000001)
#define D2CM_ATTR_EVENT_AUTH    (0x00000002)
#define D2CM_ATTR_ADMIN_AUTH    (D2CM_ATTR_AUTH_MASK)
// => => => Distinct value
#define D2CM_ATTR_MSG_MASK    (0x000000F0)
#define D2CM_ATTR_NO_MSG    (0x00000000)
#define D2CM_ATTR_AT_MSG    (0x00000010)
#define D2CM_ATTR_ILM_MSG    (0x00000020)
#define D2CM_ATTR_CB_MSG    (0x00000030)
#define D2CM_ATTR_NETIF_MASK    (0x00000F00)
#define D2CM_ATTR_NO_NETIF    (0x00000000)
#define D2CM_ATTR_AP_NETIF    (0x00000100)
#define D2CM_ATTR_MD_NETIF    (0x00000200)

// => Utility
#define D2CM_NORMAL_RES_SHIFT    (0)
#define D2CM_NORMAL_RES_MASK    (0x000000FF)
#define D2CM_NORMAL_RES_LEN    (8)
#define D2CM_NW_CAUSE_SHIFT    (8)
#define D2CM_NW_CAUSE_MASK    (0x00FFFF00)
#define D2CM_NW_CAUSE_LEN    (16)
// ---- WORKAROUND ----
#define D2CM_ESM_CAUSE_SHIFT    (D2CM_NW_CAUSE_SHIFT)
#define D2CM_ESM_CAUSE_MASK    (D2CM_NW_CAUSE_MASK)
#define D2CM_ESM_CAUSE_LEN    (D2CM_NW_CAUSE_LEN)
// ++++ WORKAROUND ++++

// APIs, NEED_TO_BE_NOTICED, uint32-based, just a quick solution, To-Do later
#define d2cm_sign_ext(x, shift, mask, len)    (((x) & (1 << ((len) - 1))) ? (x) | ~((mask) >> (shift)) : (x))
#define d2cm_reset_normal_res(res)    ((res) &= ~D2CM_NORMAL_RES_MASK)
#define d2cm_set_normal_res(res, x)    ((res) = ((res) & ~D2CM_NORMAL_RES_MASK) | (((x) << D2CM_NORMAL_RES_SHIFT) & D2CM_NORMAL_RES_MASK))
#define d2cm_get_normal_res(res)    (d2cm_sign_ext(((res) & D2CM_NORMAL_RES_MASK) >> D2CM_NORMAL_RES_SHIFT, D2CM_NORMAL_RES_SHIFT, D2CM_NORMAL_RES_MASK, D2CM_NORMAL_RES_LEN))
#define d2cm_reset_nw_cause(res)    ((res) &= ~D2CM_NW_CAUSE_MASK)
#define d2cm_set_nw_cause(res, x)    ((res) = ((res) & ~D2CM_NW_CAUSE_MASK) | (((x) << D2CM_NW_CAUSE_SHIFT) & D2CM_NW_CAUSE_MASK))
#define d2cm_get_nw_cause(res)    (((res) & D2CM_NW_CAUSE_MASK) >> D2CM_NW_CAUSE_SHIFT)
// ---- WORKAROUND ----
#define d2cm_reset_esm_cause(res)    (d2cm_reset_nw_cause((res)))
#define d2cm_set_esm_cause(res, x)    (d2cm_set_nw_cause((res), (x)))
#define d2cm_get_esm_cause(res)    (d2cm_get_nw_cause((res)))
// ++++ WORKAROUND ++++

#endif
