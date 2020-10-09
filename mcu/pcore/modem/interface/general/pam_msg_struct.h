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
 * PAM_MSG_STRUCT.H
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
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef PAM_MSG_STRUCT_H
#define PAM_MSG_STRUCT_H

/* struct */
#include "kal_public_defs.h"

#include "nwsel_eval_struct.h"

/* Multimode */
#include "irat_common_struct.h"
#include "mcd_l3_inc_gprs_struct.h"
#include "l3_inc_enums.h"
#include "mcd_l3_inc_struct.h"

#ifndef MAX_BEARER_CTXT_NUM
#define MAX_BEARER_CTXT_NUM 11
#endif

typedef struct {
    LOCAL_PARA_HDR    
} tcm_pam_start_req_struct;

typedef struct {
    LOCAL_PARA_HDR    
} tcm_pam_attach_context_defined_notify_req_struct;

typedef struct {
    LOCAL_PARA_HDR    
    kal_bool    is_ue_voice_centric ;           /* Configured by AT+CEUS (voice/data centric) */
    kal_bool    is_ims_roaming_supported ;      /* Configured by IMS */
    kal_bool    is_mobile_data_on ;             /* Configured by AT+ECNCFG (from Android UI) */
    kal_bool    is_mobile_data_roaming_on ;     /* Configured by AT+ECNCFG (from Android UI) */
    
    kal_bool    is_vzw_ims_test_mode_on ;       /* IMS Test Mode is defined by VZW requirements */
} tcm_pam_cellular_network_config_req_struct ;

/** Used by ESM/SM, to notify PAM stopping all T3396 timers. */
typedef struct {
    LOCAL_PARA_HDR 
} pam_stop_all_t3396_ind_struct;

/** Used by ESM/SM, to notify PAM that PDP numbers is currently sync'd with NW. */
typedef struct {
    LOCAL_PARA_HDR 
} pam_pdp_synced_ind_struct;


/***** VZW(OP12) message structure *****/
typedef struct {
    LOCAL_PARA_HDR
    kal_bool                   is_valid_available_apn_num;
    kal_uint8                  available_apn_num;
    plmn_id_struct             current_plmn_id;
} pam_esm_available_apn_info_req_struct; // __VZW__ __VZW_2__

typedef struct 
{
    LOCAL_PARA_HDR
    plmn_id_struct             current_plmn_id;
} pam_esm_t3402_stop_ind_struct; // __VZW__ __VZW_3__

typedef struct
{
    LOCAL_PARA_HDR
    // Indicates the below current_plmn_id should be used or not. 
    kal_bool                   is_valid_current_plmn_id;
    // current_plmn_id for stopping throttling timer
    plmn_id_struct             current_plmn_id;
} pam_esm_stop_all_pdn_thrott_timer_ind_struct; // __VZW__ __VZW_10__

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32                 ebi_est_num;                   
    kal_uint8                  ebi_est_list[MAX_BEARER_CTXT_NUM];
    // Indicates the below current_plmn_id should be used or not. 
    kal_bool                   is_valid_current_plmn_id;
    // current_plmn_id for connection (DRB) establish
    plmn_id_struct             current_plmn_id;
} pam_esm_conn_est_ind_struct; // __VZW__ __VZW_4__

/***** AT&T(OP07) message structure *****/
typedef nwsel_eval_t3402_change_ind_struct  pam_esm_t3402_change_ind_struct;

#endif /* PAM_MSG_STRUCT_H */
