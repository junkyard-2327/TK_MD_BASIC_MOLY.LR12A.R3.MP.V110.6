/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2006
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
 *   custom_ssds.h
 *
 * Project:
 * --------
 *
 * Description:
 * ------------
 *    *
 * Author:
 * -------
 * -------
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __CUSTOM_SSDS_H__
#define __CUSTOM_SSDS_H__

#include "sim_exported_enum.h"
#include "l3_inc_enums_public.h"


#define CUSTOM_SSDS_REUSE_PDN_CONN_TIMEOUT_TICK         KAL_TICKS_1_SEC * 2 /* 2 sec */
#define CUSTOM_SSDS_REUSE_PDN_CONN_PCT_TIMEOUT_TICK     KAL_TICKS_1_SEC * 3600 /* 3600 sec */

typedef enum
{
    CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_FORWARDING,
    CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_FORWARDING,
    CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_WAITING,
    CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_WAITING,
    CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_BARRING,
    CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_BARRING,
    CUSTOM_SSDS_ATCMD_TYPE_SET_CLIR,
    CUSTOM_SSDS_ATCMD_TYPE_GET_CLIR,
    CUSTOM_SSDS_ATCMD_TYPE_SET_CLIP,
    CUSTOM_SSDS_ATCMD_TYPE_GET_CLIP,
    CUSTOM_SSDS_ATCMD_TYPE_SET_COLP,
    CUSTOM_SSDS_ATCMD_TYPE_GET_COLP,
    CUSTOM_SSDS_ATCMD_TYPE_SET_COLR,
    CUSTOM_SSDS_ATCMD_TYPE_GET_COLR,
    CUSTOM_SSDS_ATCMD_TYPE_UNKNOWN

}custom_ssds_atcmd_type;

typedef enum
{
    CUSTOM_SSDS_PATH_TYPE_PS_PREFER,          /*Support XCAP and CS. And with PS prefer*/
    CUSTOM_SSDS_PATH_TYPE_PS_ONLY,            /*XCAP only*/
    CUSTOM_SSDS_PATH_TYPE_CS_ONLY,            /*CS only*/
    CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_409,        /*not support: return error 409*/
    CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_832,        /*not support: return error 832*/
    CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_CCWA,        /*not support: return +CCWA:0xff,0, then OK*/
    CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_403,        /*not support: return error 403*/
    CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_100,        /*not support: return error 100*/
    CUSTOM_SSDS_PATH_TYPE_PS_ONLY_SET_TO_QUERY,           /*XCAP only, Specail for call waiting: change to query operation*/
    CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_31,         /*no csfb, return error 31*/
    CUSTOM_SSDS_PATH_TYPE_CS_ONLY_ALWAYS,         /*CS  even if IMS call exist*/
    CUSTOM_SSDS_PATH_TYPE_OPERATION_NOT_SUPPORTED_4,  /* return error 4 */
    CUSTOM_SSDS_PATH_TYPE_OPR_DTR_BARRING_8,          /* return error 8 */
    CUSTOM_SSDS_PATH_TYPE_CALL_BARRED_10,             /* return error 10 */
    CUSTOM_SSDS_PATH_TYPE_SIM_PIN_REQUIRED_11,        /* return error 11 */
    CUSTOM_SSDS_PATH_TYPE_SIM_PUK_REQUIRED_12,        /* return error 12 */
    CUSTOM_SSDS_PATH_TYPE_NOT_FOUND_404,              /* return error 404 */
    CUSTOM_SSDS_PATH_TYPE_PRECONDITION_FAILED_412,    /* return error 412 */
    CUSTOM_SSDS_PATH_TYPE_PHB_FDN_BLOCKED_2600        /* return error 2600 */

}custom_ssds_path_type;

typedef enum
{
    CUSTOM_SSDS_CSFB_TYPE_ALWAYS,               /*csfb: from now on till reboot*/
    CUSTOM_SSDS_CSFB_TYPE_ONCE,                 /*csfb: but only this time*/
    CUSTOM_SSDS_CSFB_TYPE_NO_CCWA,              /*no csfb, return +CCWA:0xff,0, then OK*/
    CUSTOM_SSDS_CSFB_TYPE_NO_832,               /*no csfb, return error 832*/
    CUSTOM_SSDS_CSFB_TYPE_NO_403,               /*no csfb, return error 403*/
    CUSTOM_SSDS_CSFB_TYPE_NO_409,               /*no csfb, return error 409*/
    CUSTOM_SSDS_CSFB_TYPE_NO_31,               /*no csfb, return error 31*/
    CUSTOM_SSDS_CSFB_TYPE_NO                    /*csfb: no*/

}custom_ssds_csfb_type;

typedef enum
{
    CUSTOM_SSDS_PDN_TYPE_XCAP,                 /*Need to setup XCAP PDN*/
    CUSTOM_SSDS_PDN_TYPE_INTERNET,             /*Need to setup internet PDN*/
    CUSTOM_SSDS_PDN_TYPE_NO,                   /*No need to setup PDN*/
    CUSTOM_SSDS_PDN_TYPE_NOT_MATCH,            /*The condition of setup PDN is not matched*/
    CUSTOM_SSDS_PDN_TYPE_NO_CONN,              /*Need report to AP there is no connection */

}custom_ssds_pdn_type;

typedef enum
{
    CUSTOM_SSDS_PDN_RAT_TYPE_ANY,              
    CUSTOM_SSDS_PDN_RAT_TYPE_WIFI_PREFER,      /*Choose WiFi Only APN at first*/
    CUSTOM_SSDS_PDN_RAT_TYPE_LTE_PREFER,       /*Choose Celluar APN at first*/
}custom_ssds_pdn_rat_type;

typedef enum
{
    CUSTOM_SSDS_ROAMING_TYPE_NO,               /*No roaming*/
    CUSTOM_SSDS_ROAMING_TYPE_UNKNOWN,          /*roaming, but can not tell if its domestic or international*/
    CUSTOM_SSDS_ROAMING_TYPE_DOMESTIC,         /*Domistic roaming*/
    CUSTOM_SSDS_ROAMING_TYPE_INTERNATIONAL,    /*International roaming*/

}custom_ssds_roaming_type;

typedef enum
{
    CUSTOM_SSDS_IMS_DOMAIN_TYPE_NONE,
    CUSTOM_SSDS_IMS_DOMAIN_TYPE_WFC,
    CUSTOM_SSDS_IMS_DOMAIN_TYPE_LTE,
    CUSTOM_SSDS_IMS_DOMAIN_TYPE_OTHERS

}custom_ssds_ims_domain_type;

typedef enum
{
    CUSTOM_SSDS_PDN_FAIL_PATH_TYPE_NO_CSFB,          /*No need CSFB,return error to AP*/
    CUSTOM_SSDS_PDN_FAIL_PATH_TYPE_CSFB_ONCE,        /*Need CSFB once*/
    CUSTOM_SSDS_PDN_FAIL_PATH_TYPE_CSFB_ALWAYS,      /*CSFB always*/
    CUSTOM_SSDS_PDN_FAIL_PATH_TYPE_NO_CSFB_31,       /*For CT No need CSFB,return error to AP*/

}custom_ssds_pdn_fail_path_type;

typedef enum
{
    CUSTOM_SSDS_RF_OFF,
    CUSTOM_SSDS_RF_ON,
}custom_ssds_rf_status;

typedef struct
{
    kal_int8                *atcmd_buff;
    kal_uint16              atcmd_len;
    custom_ssds_atcmd_type  atcmd_type;
}custom_ssds_atcmd_info;

typedef struct
{
	sim_interface_enum	sim_id;
	kal_uint8			sim_type;
    kal_char    mccmnc[7];

    kal_bool    is_ct_volte_enabled;
    kal_bool    is_ct_card;
    rat_enum    prefer_rat;

}custom_ssds_info_struct;

custom_ssds_path_type  custom_ssds_get_req_path_variable (    custom_ssds_info_struct  *req_info,
															  kal_uint32  op_id,                                                              
                                                              kal_bool    is_ims_registered,
                                                              custom_ssds_ims_domain_type   ims_domain,
                                                              custom_ssds_roaming_type     roaming_status,
                                                              kal_bool         is_mobile_data_setting_enabled,
                                                              kal_bool ps_status,
                                                              custom_ssds_rf_status rf_status,
                                                              custom_ssds_atcmd_info *atcmd_info
                                                         );


/*
*   Decide the CSFB after receiving the ATCMD response from XCAP with below case:
*   1. current ims status
*   3. response from XCAP
*/
void custom_ssds_get_rsp_path_variable(    custom_ssds_info_struct  	*rsp_info,
										   kal_uint32                   op_id,
                                           kal_bool                     is_ims_registered,
                                           custom_ssds_ims_domain_type  ims_domain,
                                           custom_ssds_roaming_type     roaming_status,
                                           custom_ssds_rf_status rf_status,
                                           custom_ssds_atcmd_info       *atcmd_info,
                                           kal_uint32                   rsp_id,
                                           custom_ssds_csfb_type        *csfb_type,
                                           kal_bool                     *trigger_ims_dereg);


/*
*   Check if setup-up PDN condition is matched with below case:
*   1. mobile data setting;
*   2. data_roaming_setting
*   3. data_roaming status
*/
void custom_ssds_get_pdn_setup_variable(  custom_ssds_info_struct  *pdn_info,
										  kal_uint32           op_id,
                                          kal_bool             is_mobile_data_setting_enabled,
                                          kal_bool             is_data_roaming_setting_enabled,
                                          custom_ssds_ims_domain_type   ims_domain,
                                          custom_ssds_roaming_type   roaming_status,
                                          custom_ssds_pdn_type    *pdn_type,
                                          custom_ssds_pdn_rat_type *pdn_rat_type,
                                          module_type module_id);


/*
*   Check if needing to release PDN when below case happened:
*   1. mobile data setting change;
*   2. data_roaming_setting change
*   3. data_roaming status change
*/
void custom_ssds_get_pdn_release_variable(  kal_uint32              op_id,
                                            kal_bool                is_mobile_data_setting_enabled,
                                            kal_bool                is_data_roaming_setting_enabled,
                                            custom_ssds_roaming_type   roaming_status,
                                            kal_bool                *need_to_release);

kal_uint32 custom_ssds_get_reuse_pdn_conn_timer_value( module_type src_module,
                                                       kal_uint32  op_id, kal_char	*mccmnc);
kal_bool ssds_need_retry_default_apn(module_type module_id, kal_uint32  op_id,kal_char *mccmnc);

void custom_ssds_get_pdn_fail_path_variable(kal_uint32 op_id,
                                            custom_ssds_info_struct path_req_info,
                                            custom_ssds_roaming_type roaming_type,
                                            kal_uint32 esm_cause,
                                            kal_bool ims_status,
                                            custom_ssds_ims_domain_type cus_ims_type,
                                            custom_ssds_pdn_fail_path_type *path_type);

kal_bool custom_ssds_is_csfb_allowed(kal_uint32 op_id, kal_char *mccmnc, custom_ssds_roaming_type roaming_type);

kal_bool custom_ssds_is_csfb_during_imsCall_allowed(kal_uint32 op_id,
                                                    kal_char *mccmnc,
                                                    custom_ssds_roaming_type roaming_type,
                                                    custom_ssds_ims_domain_type ims_domain,
                                                    kal_bool is_wfc_call);

kal_bool custom_only_ps_supported_atcmd( custom_ssds_info_struct  *req_info,
                                                              kal_uint32  op_id,
                                                              kal_bool    is_ims_registered,
                                                              custom_ssds_ims_domain_type   ims_domain,
                                                              custom_ssds_roaming_type     roaming_status,
                                                              kal_bool             is_mobile_data_setting_enabled,
                                                              kal_bool ps_status,
                                                              custom_ssds_rf_status rf_status,
                                                              custom_ssds_atcmd_info *atcmd_info,
                                                              custom_ssds_path_type           *atcmd_req_type );
                                                              
kal_bool custom_only_cs_supported_atcmd(custom_ssds_info_struct  *req_info,
                                                              kal_uint32  op_id,
                                                              kal_bool    is_ims_registered,
                                                              custom_ssds_ims_domain_type   ims_domain,
                                                              custom_ssds_roaming_type     roaming_status,
                                                              kal_bool             is_mobile_data_setting_enabled,
                                                              kal_bool ps_status,
                                                              custom_ssds_rf_status rf_status,
                                                              custom_ssds_atcmd_info *atcmd_info,
                                                              custom_ssds_path_type           *atcmd_req_type);

#endif

