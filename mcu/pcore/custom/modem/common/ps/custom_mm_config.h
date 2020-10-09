/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
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
 *
 * Filename:
 * ---------
 * custom_mm_config.c
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *   This file is used to define the MM configuration.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
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
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
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
 *
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _CUSTOM_MM_CONFIG_H
#define _CUSTOM_MM_CONFIG_H

#include "kal_general_types.h"
#include "ps_public_utility.h"

/*************************************************************************
* Constant
*************************************************************************/
#define ALL_MCC_ALLOWED 0xfff
#define NO_MCC_ALLOWED 0xffffffff

extern const kal_uint32 ECC_IMSI_MCC_LIST[];
extern const kal_uint32 ECC_IMSI_MCC_NUM;

extern const kal_uint32 LR_BEFORE_ECC_MCC_LIST[];
extern const kal_uint32 LR_BEFORE_ECC_MCC_NUM;

extern const char *LR_BEFORE_CSFB_ECC_PLMN_LIST[];
extern const kal_uint32 LR_BEFORE_CSFB_ECC_PLMN_NUM;
#define LR_BEFORE_CSFB_ECC_PLMN_SET_END "FFFFFF"

#define CUSTOM_TEST_PLMN_SET_END "FFFFFF"
extern const char *CUSTOM_TEST_PLMN[];
extern const kal_uint32 CUSTOM_TEST_PLMN_NUM;

/* Set FOR bit False in GMM ATTACH for PLMN  in custom PLMN list */
#define SET_FOR_BIT_FALSE_IN_ATTACH_FOR_CUSTOM_PLMN_END "FFFFFF"
extern const char *SET_FOR_BIT_FALSE_IN_ATTACH_FOR_CUSTOM_PLMN[];
extern const kal_uint32 SET_FOR_BIT_FALSE_IN_ATTACH_FOR_CUSTOM_PLMN_NUM;

extern const char *ALLOW_PDP_ACTIVATION_OVER_NEW_CONNECTION_WHEN_RAU_FOR_FALSE_FOR_CUSTOM_PLMN[];
extern const kal_uint32 ALLOW_PDP_ACTIVATION_OVER_NEW_CONNECTION_WHEN_RAU_FOR_FALSE_FOR_CUSTOM_PLMN_NUM;

#define INVALID_CUSTOM_PLMN "FFFFFF"
extern const char *CUSTOM_PLMN_IRAT_TAU_TYPE[];
extern const kal_uint32 CUSTOM_PLMN_IRAT_TAU_TYPE_NUM;

extern const char *CUSTOM_RESET_GMM_KEYS_LIST[];
extern const kal_uint32 CUSTOM_RESET_GMM_KEYS_LIST_NUM;

extern const char *CUSTOM_MM_STAY_ON_LA_OF_REGIONAL_PROVISIONAL_SERVICE_PLMN_LIST[];
extern const kal_uint32 CUSTOM_MM_STAY_ON_LA_OF_REGIONAL_PROVISIONAL_SERVICE_PLMN_LIST_NUM;

/* Add Old LAI in combined procedure if valid LAI & support EMM procedure */ 
#define INVALID_CUST_PLMN "FFFFFF"
extern const char *CUSTOM_PLMN_OLD_LAI_LIST[];
extern const kal_uint32 CUSTOM_PLMN_OLD_LAI_LIST_NUM;

/* Convert reject cause for CM_SERVICE_REJECT in MM wait for additional outgoing state through custom array */
extern const char *CUSTOM_CM_SERV_REJ_CAUSE_CONVERT_TO_17_FOR_ADDIT_OUTGOING_MM_CONN_LIST[];
extern const kal_uint32 CUSTOM_CM_SERV_REJ_CAUSE_CONVERT_TO_17_FOR_ADDIT_OUTGOING_MM_CONN_LIST_NUM;

/* Trigger GMM ATTACH REQUEST with IMSI as MS identity */
extern const char *CUSTOM_TRIGGER_ATTACH_WITH_IMSI_LIST[];
extern const kal_uint32 CUSTOM_TRIGGER_ATTACH_WITH_IMSI_LIST_NUM;

/* Ignore Reject cause 7, GPRS serive not allowed, in ATTACH REJECT or 
   in ROUTING AREA UPDATING REJECT message when roaming. Reject Cause 
   14, GPRS serive not allowed in this PLMN, insteads of */
#define IGNORE_GPRS_SERVICE_NOT_ALLOWED_WHEN_ROAMING_OPERATOR_SET_END "FFFFFF"
extern const char *IGNORE_GPRS_SERVICE_NOT_ALLOWED_WHEN_ROAMING_OPERATOR[];
extern const kal_uint32 IGNORE_GPRS_SERVICE_NOT_ALLOWED_WHEN_ROAMING_OPERATOR_NUM;

/* Convert  Attach Reject cause 14, GPRS  not allowed in the PLMN  to cause #111 for
   specific PLMN  */
#define CONVERT_GPRS_NOT_ALLOWED_IN_PLMN_TO_PROTOCOL_ERROR_SET_END "FFFFFF"
extern const char *CONVERT_GPRS_NOT_ALLOWED_IN_PLMN_TO_PROTOCOL_ERROR[];
extern const kal_uint32 CONVERT_GPRS_NOT_ALLOWED_IN_PLMN_TO_PROTOCOL_ERROR_NUM;

/* Convert  RAU Reject cause 7, GPRS  not allowed, to cause #111 for
   specific PLMN  */
#define CONVERT_GPRS_NOT_ALLOWED_TO_PROTOCOL_ERROR_SET_END "FFFFFF"
extern const char *CONVERT_GPRS_NOT_ALLOWED_TO_PROTOCOL_ERROR[];
extern const kal_uint32 CONVERT_GPRS_NOT_ALLOWED_TO_PROTOCOL_ERROR_NUM;

#define DISABLE_SRVCC_IE_PLMN_SET_END "FFFFFF"
extern const char *DISABLE_SRVCC_IE_PLMN[];
extern const kal_uint32 DISABLE_SRVCC_IE_PLMN_NUM;

/* Disable CSMT flag in paging response for specific PLMNs */
#define DISABLE_PAGING_CSMT_FLAG_PLMN_END "FFFFFF"
extern const char *DISABLE_PAGING_CSMT_FLAG_PLMN[];
extern const kal_uint32 DISABLE_PAGING_CSMT_FLAG_PLMN_NUM;

/* Enable CSMT flag in paging response for specific PLMNs */
#define ENABLE_PAGING_CSMT_FLAG_PLMN_END "FFFFFF"
extern const char *ENABLE_PAGING_CSMT_FLAG_PLMN[];
extern const kal_uint32 ENABLE_PAGING_CSMT_FLAG_PLMN_NUM;

#define CUSTOM_CAUSE_PLMN_SET_ANY "FFFFFF"
extern const char *CUSTOM_CAUSE_PLMN[];
extern const kal_uint32 CUSTOM_CAUSE_PLMN_NUM;

/* Configure user set rat detach specific PLMNs */
#define CONFIGURE_USER_SET_RAT_DETACH_G2L_PLMN_END "FFFFFF"
extern const char *CONFIGURE_USER_SET_RAT_DETACH_G2L_PLMN[];
extern const kal_uint32 CONFIGURE_USER_SET_RAT_DETACH_G2L_PLMN_NUM;

/* Configure SKIP_LU_AFTER_CSFB_FOR_EAFR specific PLMNs */
#define CONFIGURE_SKIP_LU_AFTER_CSFB_FOR_EAFR_PLMN_END "FFFFFF"
extern const char *CONFIGURE_SKIP_LU_AFTER_CSFB_FOR_EAFR_PLMN[];
extern const kal_uint32 CONFIGURE_SKIP_LU_AFTER_CSFB_FOR_EAFR_PLMN_NUM;

/*Configure PLMN_LIST_TO_DISABLE_DOS*/
#define PLMN_LIST_TO_DISABLE_DOS_END "FFFFFF"
extern const char *PLMN_LIST_TO_DISABLE_DOS[];
extern const kal_uint32 PLMN_LIST_TO_DISABLE_DOS_NUM;
/* Configure user set rat detach G2W specific PLMNs */
#define CONFIGURE_USER_SET_RAT_DETACH_G2W_PLMN_END "FFFFFF"
extern const char *CONFIGURE_USER_SET_RAT_DETACH_G2W_PLMN[];
extern const kal_uint32 CONFIGURE_USER_SET_RAT_DETACH_G2W_PLMN_NUM;

#define INVALID_CUSTOM_PLMN "FFFFFF"
extern const char *CUSTOM_IRAT_TAU_TYPE_FOR_LAZY_GMM[];
extern const kal_uint32 CUSTOM_IRAT_TAU_TYPE_FOR_LAZY_GMM_NUM;

/* Set FOR bit in GMM ATTACH or RAU when data is enabled and PDP Activation will follow */
#define SET_FOR_BIT_IN_ATTACH_RAU_WHEN_DATA_ENABLED_PLMN_END "FFFFFF"
extern const char *SET_FOR_BIT_IN_ATTACH_RAU_WHEN_DATA_ENABLED_PLMN[];
extern const kal_uint32 SET_FOR_BIT_IN_ATTACH_RAU_WHEN_DATA_ENABLED_PLMN_NUM;

/* Custom array of PLMNs containing VPLMN on which PS reject cause #7 shall be converted to #15 */
#define CUSTOM_VPLMN_PS_REJ_CAUSE_7TO15_PLMN_END "FFFFFF"
extern const char *CUSTOM_VPLMN_PS_REJ_CAUSE_7TO15_PLMN[];
extern const kal_uint32 CUSTOM_VPLMN_PS_REJ_CAUSE_7TO15_PLMN_NUM;

extern const kal_uint32 CUSTOM_GMM_SYNC_RAU_GUARD_TIMER_VALUE;

/* Set retry ECC call after CM_SERVICE_REJECT in 23G*/
#define CUSTOM_RETRY_ECC_CALL_AFTER_CM_SERV_REJ_IN23G_PLMN_END "FFFFFF"
extern const char *CUSTOM_RETRY_ECC_CALL_AFTER_CM_SERV_REJ_IN23G_PLMN[];
extern const kal_uint32 CUSTOM_RETRY_ECC_CALL_AFTER_CM_SERV_REJ_IN23G_PLMN_NUM;

/*************************************************************************
* Enum
*************************************************************************/
typedef enum
{
    MM_ENABLE_LR_REJ111_RETRY,
    MM_ENABLE_HPPLMN_SEARCH_FORCE_RELEASE_PCH_CONNECTION
}mm_setting_enum;

typedef enum
{
    MM_STAY_ON_LA_OF_REGIONAL_PROVISIONAL_SERVICE,
    MM_STAY_ON_LA_OF_REGIONAL_PROVISIONAL_ONLY_IF_TEST_SIM_TEST_MODE,
    MM_NOT_STAY_ON_LA_OF_REGINOAL_PROVISIONAL_SERVICE
}mm_rej_12_handle_enum;

typedef enum
{
    MM_CUSTOM_UNKNOWN_PLMN_TYPE,
    MM_CUSTOM_HPLMN,
    MM_CUSTOM_R_E_PLMN
}mm_custom_plmn_type;

typedef enum
{
    MM_CUSTOM_MM,
    MM_CUSTOM_GMM,
}mm_custom_proc_type;

typedef enum
{
    CUST_MM_MSG_LU_REJECT,
    CUST_MM_MSG_CM_SERVICE_REJECT,
    CUST_MM_MSG_ABORT,
    CUST_GMM_MSG_ATTACH_ACCEPT,
    CUST_GMM_MSG_ATTACH_REJECT,
    CUST_GMM_MSG_RAU_ACCEPT,
    CUST_GMM_MSG_RAU_REJECT,
    CUST_GMM_MSG_DETACH_REQUEST,
    CUST_GMM_MSG_SERVICE_REJECT
}mm_custom_proc_msg;

/*************************************************************************
* Function
*************************************************************************/
extern kal_bool mm_custom_registration_related_setting(mm_setting_enum setting);

extern mm_rej_12_handle_enum mm_custom_stay_on_la_of_regional_provisional_service(protocol_id_enum ps_id);

/* MAUI_03014009 Russia Operator BeeLine request to use ECC with IMEI */
extern kal_bool mm_custom_force_ecc_with_imei(void);

#if 0
/* under construction !*/
#endif 

extern kal_bool mm_custom_start_timer_for_mt_mm_conn(void);

extern kal_uint32 mm_custom_get_erase_forbidden_la_list_timer_period(void);

extern kal_bool mm_custom_enable_early_oos_ind(protocol_id_enum ps_id);

extern kal_bool mm_custom_reattach_for_mt_gprs_detach_other_cause(protocol_id_enum ps_id);

extern kal_bool mm_custom_imsi_detach_when_mm_conn_active(protocol_id_enum ps_id);
extern kal_bool mm_custom_enable_dynamic_set_modem2_imei(kal_uint8 sim_index);

extern kal_uint32 mm_custom_get_t3x11_period(protocol_id_enum ps_id);

extern kal_bool mm_custom_report_reg_when_csfb_ecc_lu_delayed(mm_custom_plmn_type current_plmn_type);

extern kal_uint8 mm_custom_get_customize_cause(protocol_id_enum ps_id,kal_uint8 cause, mm_custom_proc_type proc, kal_bool is_on_hplmn, kal_bool is_test, kal_bool convert_vplmn_ps_cause7to15, kal_bool is_aka_sim);

#ifdef __TC7__CS__SUPPORT__
extern kal_bool mm_custom_fake_lu_needed(void);
#endif
extern kal_uint32 mm_custom_get_paging_guard_timer_period(void);
extern kal_uint32 mm_custom_get_T3311_timer_period_on_rsim_stack(protocol_id_enum ps_id);
extern kal_uint32 mm_custom_get_T3311_timer_period_on_aka_stack(protocol_id_enum ps_id);

extern kal_uint32 mm_custom_get_T3240_timer_value_for_specific_plmn(kal_uint8 *oplmn);

extern kal_uint32 mm_custom_get_sync_rau_guard_timer_period(void);

extern kal_bool mm_custom_is_ecc_retry_after_cm_serv_rej_in_23g(kal_bool is_on_hplmn, protocol_id_enum protocol_id);

extern kal_uint32 mm_custom_get_T3310_timer_period_on_rsim_stack(protocol_id_enum ps_id);
extern kal_bool mm_custom_skip_force_lu(protocol_id_enum ps_id);

#endif /* _CUSTOM_MM_CONFIG_H */

