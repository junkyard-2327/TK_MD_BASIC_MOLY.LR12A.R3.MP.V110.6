/*************************************************************
*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
* FILE NAME   :uim_msg_struct.h
*
* DESCRIPTION :
*
*
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/
#ifndef _UIM_MSG_STRUCT_H
#define _UIM_MSG_STRUCT_H

#include "uimapi.h"
#include "valdbmapi.h"
#include "valuimapi.h"

/* MSG_ID_UIM_RAW_CMD_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimRawCmdMsgT msg;
} uim_raw_cmd_msg_struct;

/* MSG_ID_UIM_SELECT_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimSelectMsgT msg;
} uim_select_msg_struct;

/* MSG_ID_UIM_STATUS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimStatusMsgT msg;
} uim_status_msg_struct;

/* MSG_ID_UIM_READ_BINARY_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimReadBinaryMsgT msg;
} uim_read_binary_msg_struct;

/* MSG_ID_UIM_UPDATE_BINARY_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimUpdateBinaryMsgT msg;
} uim_update_binary_msg_struct;

/* MSG_ID_UIM_READ_RECORD_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimReadRecordMsgT msg;
} uim_read_record_msg_struct;

/* MSG_ID_UIM_UPDATE_RECORD_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimUpdateRecordMsgT msg;
} uim_update_record_msg_struct;

/* MSG_ID_UIM_VERIFY_CHV_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimVerifyCHVMsgT msg;
} uim_verify_chv_msg_struct;

/* MSG_ID_UIM_CHANGE_CHV_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimChangeCHVMsgT msg;
} uim_change_chv_msg_struct;

/* MSG_ID_UIM_ENABLE_CHV_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimEnableCHVMsgT msg;
} uim_enable_chv_msg_struct;

/* MSG_ID_UIM_DISABLE_CHV_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimDisableCHVMsgT msg;
} uim_disable_chv_msg_struct;

/* MSG_ID_UIM_UNBLOCK_CHV_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimUnblockCHVMsgT msg;
} uim_unblock_chv_msg_struct;

/* MSG_ID_UIM_BS_CHALLENGE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimBSChallengeMsgT msg;
} uim_bs_challenge_msg_struct;

/* MSG_ID_UIM_CONFIRM_SSD_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimConfirmSSDMsgT msg;
} uim_confirm_ssd_msg_struct;

/* MSG_ID_UIM_RUN_CAVE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimRunCaveMsgT msg;
} uim_run_cave_msg_struct;

/* MSG_ID_UIM_GENERATE_KEY_VPM_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGenerateKeyVPMMsgT msg;
} uim_generate_key_vpm_msg_struct;

/* MSG_ID_UIM_STORE_ESN_ME_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimStoreEsnMeMsgT msg;
} uim_store_esn_me_msg_struct;

/* MSG_ID_UIM_TERMINAL_PROFILE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimTermProfileMsgT msg;
} uim_terminal_profile_msg_struct;

/* MSG_ID_UIM_TERMINAL_RESPONSE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimTermRspMsgT msg;
} uim_terminal_response_msg_struct;

/* MSG_ID_UIM_ENVELOPE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimEnvelopeMsgT msg;
} uim_envelope_msg_struct;

/* MSG_ID_UIM_HLP_ACCESS_CHAP_REQ_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimHlpAccessChapReqMsgT msg;
} uim_hlp_access_chap_req_msg_struct;

/* MSG_ID_UIM_3GPD_OPC_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDOPCGetMsgT msg;
} uim_3gpd_opc_get_msg_struct;

/* MSG_ID_UIM_3GPD_OPC_UPDATE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDOPCUpdateMsgT msg;
} uim_3gpd_opc_update_msg_struct;

/* MSG_ID_UIM_3GPD_OPM_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDOPMGetMsgT msg;
} uim_3gpd_opm_get_msg_struct;

/* MSG_ID_UIM_3GPD_OPM_UPDATE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDOPMUpdateMsgT msg;
} uim_3gpd_opm_update_msg_struct;

/* MSG_ID_UIM_3GPD_SIPCAP_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDSIPCapGetMsgT msg;
} uim_3gpd_sipcap_get_msg_struct;

/* MSG_ID_UIM_3GPD_MIPCAP_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDMIPCapGetMsgT msg;
} uim_3gpd_mipcap_get_msg_struct;

/* MSG_ID_UIM_3GPD_SIPUPP_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDSIPUPPGetMsgT msg;
} uim_3gpd_sipupp_get_msg_struct;

/* MSG_ID_UIM_3GPD_MIPUPP_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDMIPUPPGetMsgT msg;
} uim_3gpd_mipupp_get_msg_struct;

/* MSG_ID_UIM_3GPD_SIPSP_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDSIPSPGetMsgT msg;
} uim_3gpd_sipsp_get_msg_struct;

/* MSG_ID_UIM_3GPD_SIPSP_UPDATE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDSIPSPUpdateMsgT msg;
} uim_3gpd_sipsp_update_msg_struct;

/* MSG_ID_UIM_3GPD_MIPSP_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDMIPSPGetMsgT msg;
} uim_3gpd_mipsp_get_msg_struct;

/* MSG_ID_UIM_3GPD_MIPSP_UPDATE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDMIPSPUpdateMsgT msg;
} uim_3gpd_mipsp_update_msg_struct;

/* MSG_ID_UIM_3GPD_SIPPAPSS_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDSIPPAPSSGetMsgT msg;
} uim_3gpd_sippapss_get_msg_struct;

/* MSG_ID_UIM_3GPD_SIPPAPSS_UPDATE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDSIPPAPSSUpdateMsgT msg;
} uim_3gpd_sippapss_update_msg_struct;

/* MSG_ID_UIM_3GPD_UPPEXT_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GPDUppExtGetMsgT msg;
} uim_3gpd_uppext_get_msg_struct;

/* HLP_UIM_GET_USIM_FILE_LENGTH_RSP_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGetEFPropertyRspMsgT msg;
} hlp_uim_get_usim_file_length_rsp_msg_struct;

/* MSG_ID_UIM_USIM_UST_DATA_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimUsimFileDataGetMsgT msg;
} uim_usim_ust_data_get_msg_struct;

/* MSG_ID_UIM_USIM_EST_DATA_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimUsimFileDataGetMsgT msg;
} uim_usim_est_data_get_msg_struct;

/* MSG_ID_UIM_USIM_ACL_DATA_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimUsimFileDataGetMsgT msg;
} uim_usim_acl_data_get_msg_struct;

/* MSG_ID_UIM_MS_KEY_REQUEST_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimMSKeyMsgT msg;
} uim_ms_key_request_msg_struct;

/* MSG_ID_UIM_KEY_GENERATION_REQUEST_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimKeyGenMsgT msg;
} uim_key_generation_request_msg_struct;

/* MSG_ID_UIM_COMMIT_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimCommitMsgT msg;
} uim_commit_msg_struct;

/* MSG_ID_UIM_VALIDATE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimValidateMsgT msg;
} uim_validate_msg_struct;

/* MSG_ID_UIM_CONFIGURATION_REQUEST_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimConfigurationMsgT msg;
} uim_configuration_request_msg_struct;

/* MSG_ID_UIM_DOWNLOAD_REQUEST_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimDownloadMsgT msg;
} uim_download_request_msg_struct;

/* MSG_ID_UIM_SSPR_CONFIGURATION_REQUEST_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimSSPRConfigurationMsgT msg;
} uim_sspr_configuration_request_msg_struct;

/* MSG_ID_UIM_SSPR_DOWNLOAD_REQUEST_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimSSPRDownloadMsgT msg;
} uim_sspr_download_request_msg_struct;

/* MSG_ID_UIM_3GPD_CONFIGURATION_REQUEST_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3gpdConfigurationRequestMsgT msg;
} uim_3gpd_configuration_request_msg_struct;

/* MSG_ID_UIM_3GPD_DOWNLOAD_REQUEST_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3gpdDownloadRequestMsgT msg;
} uim_3gpd_download_request_msg_struct;

/* MSG_ID_UIM_OTAPA_REQUEST_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimOTAPAMsgT msg;
} uim_otapa_request_msg_struct;

/* MSG_ID_UIM_OTA_RUN_CAVE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimRunCaveMsgT msg;
} uim_ota_run_cave_msg_struct;

/* MSG_ID_UIM_PROACTIVE_POLLING_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimProactivePollingMsgT msg;
} uim_proactive_polling_msg_struct;

/* MSG_ID_UIM_HRPD_MD5_AUTH_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimHrpdMD5AuthMsgT msg;
} uim_hrpd_md5_auth_msg_struct;


/* MSG_ID_UIM_CARD_TYPE_GET_MSG
 * Handler not found for this message in UIM Manager
 * The structure is obscure, leave blank for now*/



/* MSG_ID_UIM_3G_SIP_CHAP_REQ_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GSipChapReqMsgT msg;
} uim_3g_sip_chap_req_msg_struct;

/* MSG_ID_UIM_3G_MIP_MNHA_AUTH_REQ_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GMipMNHAAuthReqMsgT msg;
} uim_3g_mip_mnha_auth_req_msg_struct;

/* MSG_ID_UIM_3G_MIP_RRQ_HASH_REQ_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GMipRRQHashReqMsgT msg;
} uim_3g_mip_rrq_hash_req_msg_struct;

/* MSG_ID_UIM_3G_MIP_MNAAA_AUTH_REQ_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GMipMNAAAAuthReqMsgT msg;
} uim_3g_mip_mnaaa_auth_req_msg_struct;

/* MSG_ID_UIM_3G_AKA_AUTH_REQ_MSG */
typedef struct
{   LOCAL_PARA_HDR
    Uim3GAkaAuthReqMsgT msg;
} uim_3g_aka_auth_req_msg_struct;

/* MSG_ID_UIM_APP_INIT_TERM_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimAppInitTermMsgT msg;
} uim_app_init_term_msg_struct;

/* MSG_ID_UIM_EXT_INFO_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimExtSimInfoGetT msg;
} uim_ext_info_get_msg_struct;

/* MSG_ID_UICC_LOGI_CHAN_OPEN_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UiccLogicChanOpenT msg;
} uicc_logi_chan_open_msg_struct;

/* MSG_ID_UICC_LOGI_CHAN_CLOSE_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UiccLogicChanCloseT msg;
} uicc_logi_chan_close_msg_struct;

/* MSG_ID_UIM_RESET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimResetMsgT msg;
} uim_reset_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
/* MSG_ID_UIM_UTK_REFRESH_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimUtkRefreshMsgT msg;
} uim_utk_refresh_msg_struct;
#endif
/* MSG_ID_UIM_GET_NAM_DATA_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGetNamDataMsgT msg;
} uim_get_nam_data_msg_struct;


/* MSG_ID_UIM_GET_PRL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} uim_get_prl_msg_struct;

/* MSG_ID_UIM_GET_EXT_PRL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} uim_get_ext_prl_msg_struct;

/* MSG_ID_UIM_GET_USIM_IMSI_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimMsgHeaderT   msg;
} uim_get_usim_imsi_msg_struct;

/* MSG_ID_UIM_GET_USIM_AD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UimMsgHeaderT   msg;
} uim_get_usim_ad_msg_struct;

/* MSG_ID_UIM_UPDATE_NAM_DATA_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimUpdateNamDataMsgT msg;
} uim_update_nam_data_msg_struct;

/* MSG_ID_UIM_GET_CST_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimMsgHeaderT msg;
} uim_get_cst_msg_struct;

/* MSG_ID_UIM_GET_UIMID_EUIMID_MSG
 * Handler not found for this message in UIM Manager */
typedef struct
{   LOCAL_PARA_HDR
    UimGetNamDataMsgT msg; /* Structure type is deduced from the msg sent from VAL */
} uim_get_uimid_euimid_msg_struct;

/* MSG_ID_UIM_GET_IMSI_MSG
 * Handler not found for this message in UIM Manager
 * The structure is obscure, leave blank for now */

/* MSG_ID_UIM_OTA_UPDATE_NAM_MSG */
typedef struct
{   LOCAL_PARA_HDR
} uim_ota_update_nam_msg_struct;


/* MSG_ID_UIM_CARD_TYPE_GET_MSG
 * Handler not found for this message in UIM Manager
 * The structure is obscure, leave blank for now */

/* MSG_ID_UIM_SET_CARDTYPE_MSG
 * Handler not found for this message in UIM Manager
 * The structure is obscure, leave blank for now */

#ifdef MTK_DEV_C2K_IRAT
/* MSG_ID_UIM_SIM_ACCESS_OPTION_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimSimAccessOptionMsgT msg;
} uim_access_option_msg_struct;
#endif
/* MSG_ID_UIM_FULL_RECOVERY_MSG */
typedef struct
{   LOCAL_PARA_HDR
} uim_full_recovery_msg_struct;

/* MSG_ID_UIM_GET_PHB_REC_PARAMS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGetPhbRecParamsMsgT msg;
} uim_get_phb_rec_params_msg_struct;

/* MSG_ID_UIM_GET_PHB_REC_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGetPhoneRecMsgT msg;
} uim_get_phb_rec_msg_struct;

/* MSG_ID_UIM_GET_FDN_REC_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGetPhoneRecMsgT msg;
} uim_get_fdn_rec_msg_struct;

/* MSG_ID_UIM_UPDATE_PHB_REC_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimUpdatePhoneRecMsgT msg;
} uim_update_phb_rec_msg_struct;

/* MSG_ID_UIM_ERASE_PHB_REC_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimErasePhoneRecMsgT msg;
} uim_erase_phb_rec_msg_struct;

/* MSG_ID_UIM_ERASE_FDN_REC_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimErasePhoneRecMsgT msg;
} uim_erase_fdn_rec_msg_struct;

/* MSG_ID_UIM_UPDATE_FDN_REC_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimUpdateFdnRecMsgT msg;
} uim_update_fdn_rec_msg_struct;

/* MSG_ID_UIM_SET_FDN_STATUS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimSetFdnStatusMsgT msg;
} uim_set_fdn_status_msg_struct;

/* MSG_ID_UIM_GET_FDN_STATUS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGetFdnStatusMsgT msg;
} uim_get_fdn_status_msg_struct;

/* MSG_ID_UIM_GET_SMS_CAP_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGetSmsCapMsgT msg;
} uim_get_sms_cap_msg_struct;

/* MSG_ID_UIM_GET_SMS_REC_PARAMS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGetSmsRecParamsMsgT msg;
} uim_get_sms_rec_params_msg_struct;

/* MSG_ID_UIM_GET_SMS_REC_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGetSmsRecMsgT msg;
} uim_get_sms_rec_msg_struct;

/* MSG_ID_UIM_UPDATE_SMS_REC_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimUpdateSmsRecMsgT msg;
} uim_update_sms_rec_msg_struct;

/* MSG_ID_UIM_ERASE_SMS_REC_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimEraseSmsRecMsgT msg;
} uim_erase_sms_rec_msg_struct;

/* MSG_ID_UIM_GET_STATUS_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimCardStatusRecMsgT msg;
} uim_get_status_msg_struct;

/* MSG_ID_UIM_CARD_DETECT_MSG */
typedef struct
{   LOCAL_PARA_HDR

} uim_card_detect_msg_struct;

/* MSG_ID_UIM_APP_VERIFY_CHV_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimAppVerifyCHVMsgT msg;
} uim_app_verify_chv_msg_struct;

/* MSG_ID_UIM_APP_CHANGE_CHV_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimAppChangeCHVMsgT msg;
} uim_app_change_chv_msg_struct;

/* MSG_ID_UIM_APP_ENABLE_CHV_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimAppEnableCHVMsgT msg;
} uim_app_enable_chv_msg_struct;

/* MSG_ID_UIM_APP_DISABLE_CHV_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimAppDisableCHVMsgT msg;
} uim_app_disable_chv_msg_struct;

/* MSG_ID_UIM_APP_UNBLOCK_CHV_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimAppUnblockCHVMsgT msg;
} uim_app_unblock_chv_msg_struct;

/* MSG_ID_UIM_GET_EF_PROPERTY_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimGetEFPropertyMsgT msg;
} uim_get_ef_property_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
/*MSG_ID_UIM_BTSAP_CONNECT_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimBtsapConnectMsgT msg;
} uim_btsap_connect_msg_struct;

/* MSG_ID_UIM_BTSAP_DISCONNECT_MSG*/
typedef struct
{   LOCAL_PARA_HDR
    UimBtsapDisconnectMsgT msg;
} uim_btsap_disconnect_msg_struct;

/* MSG_ID_UIM_BTSAP_POWER_ON_MSG*/
typedef struct
{   LOCAL_PARA_HDR
    UimBtsapPowerOnMsgT msg;
} uim_btsap_power_on_msg_struct;

/* MSG_ID_UIM_BTSAP_POWER_OFF_MSG*/
typedef struct
{   LOCAL_PARA_HDR
    UimBtsapPowerOffMsgT msg;
} uim_btsap_power_off_msg_struct;

/* MSG_ID_UIM_BTSAP_RESET_MSG*/
typedef struct
{   LOCAL_PARA_HDR
    UimBtsapResetMsgT msg;
} uim_btsap_reset_msg_struct;

/* MSG_ID_UIM_BTSAP_TRANSFER_APDU_MSG*/
typedef struct
{   LOCAL_PARA_HDR
    UimBtsapTransferApduMsgT msg;
} uim_btsap_transfer_apdu_msg_struct;
#endif

/* MSG_ID_UIM_NOTIFY_REGISTER_MSG */
typedef struct
{   LOCAL_PARA_HDR
    UimNotifyRegisterMsgT msg;
} uim_notify_register_msg_struct;

/* MSG_ID_UIM_SET_PARM_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValGenericSetParmMsgT msg;
} uim_set_parm_msg_struct;

/* UIM_SET_FACTORY_MODE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool factory_mode;
}uim_set_factory_mode_msg_struct;

/* UIM_GET_FACTORY_MODE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
}uim_get_factory_mode_msg_struct;

/* MSG_ID_UIM_GET_PARM_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValGenericGetParmMsgT msg;
} uim_get_parm_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
/* MSG_ID_UIM_FILE_CHANGE_RSP_MSG */
typedef struct
{
  LOCAL_PARA_HDR
  UimFileChangeRspMsgT msg;
}uim_file_change_rsp_msg_struct;
#endif

/*Response data of MSG_ID_UIM_SET_FDN_STATUS_MSG*/
typedef struct
{
  LOCAL_PARA_HDR
  UimSetFdnStatusRspMsgT msg;
}uim_set_fdn_status_rsp_msg_struct;

/*Response data of MSG_ID_UIM_GET_FDN_STATUS_MSG*/
typedef struct
{
  LOCAL_PARA_HDR
  UimGetFdnStatusRspMsgT msg;
}uim_get_fdn_status_rsp_msg_struct;

/*Response data of MSG_ID_UIM_GET_FDN_REC_MSG*/
typedef struct
{
  LOCAL_PARA_HDR
  UimGetFdnRecRspMsgT msg;
}uim_get_fdn_rec_rsp_msg_struct;

/*Response data of MSG_ID_UIM_ERASE_FDN_REC_MSG & MSG_ID_UIM_ERASE_PHB_REC_MSG*/
typedef struct
{
  LOCAL_PARA_HDR
  UimErasePhoneRecRspMsgT msg;
}uim_erase_phone_rec_rsp_msg_struct;

/*Response data of MSG_ID_UIM_UPDATE_FDN_REC_MSG*/
typedef struct
{
  LOCAL_PARA_HDR
  UimUpdateFdnRecRspMsgT msg;
}uim_update_fdn_rec_rsp_msg_struct;

/* Response data of MSG_ID_UIM_GET_PHB_REC_PARAMS_MSG */
typedef struct
{
  LOCAL_PARA_HDR
  UimGetPhbRecParamsRspMsgT msg;
}uim_get_phb_rec_params_rsp_msg_struct;

/*Response data structure of MSG_ID_UIM_GET_PHB_REC_MSG */
typedef struct
{
  LOCAL_PARA_HDR
  UimGetPhoneRecRspMsgT msg;
}uim_get_phone_rec_rsp_msg_struct;

/* Response data of MSG_ID_UIM_UPDATE_PHB_REC_MSG */
typedef struct
{
  LOCAL_PARA_HDR
  UimUpdatePhoneRecRspMsgT msg;
}uim_update_phone_rec_rsp_msg_struct;

/* Response data structure of UIM_GET_SMS_REC_ PARAMS _MSG */
typedef struct
{
  LOCAL_PARA_HDR
  UimGetSmsRecParamsRspMsgT msg;
}uim_get_sms_rec_params_rsp_msg_struct;

/*Response data structure of MSG_ID_UIM_GET_SMS_REC_MSG*/
typedef struct
{
  LOCAL_PARA_HDR
  UimGetSmsRecRspMsgT msg;
}uim_get_sms_rec_rsp_msg_struct;

/* Response data of MSG_ID_UIM_UPDATE_SMS_REC_MSG*/
typedef struct
{
  LOCAL_PARA_HDR
  UimUpdateSmsRecRspMsgT msg;
}uim_update_sms_rec_rsp_msg_struct;

/* Response data of MSG_ID_UIM_ERASE_SMS_REC_MSG*/
typedef struct
{
  LOCAL_PARA_HDR
  UimEraseSmsRecRspMsgT msg;
}uim_erase_sms_rec_rsp_msg_struct;

/*Response data structure of MSG_ID_UIM_GET_SMS_CAP_MSG */
typedef struct
{
  LOCAL_PARA_HDR
  UimGetSmsCapRspMsgT msg;
}uim_get_sms_cap_rsp_msg_struct;

/* APP CHV operation response message */
typedef struct
{
  LOCAL_PARA_HDR
  UimAppChvRspMsgT msg;
}uim_app_chv_rsp_msg_struct;

/* Response to uim card status*/
typedef struct
{
  LOCAL_PARA_HDR
  UimCardStatusRspMsgT msg;
}uim_card_status_rsp_msg_struct;

/* Generic uim command response*/
typedef struct
{
  LOCAL_PARA_HDR
  UimRspInfoT msg;
}uim_generic_rsp_msg_struct;


#define CUIM_MAX_MDN_RECORD 10

typedef struct
{
  kal_uint8 mdn_raw_data[MAX_NUMBER_BCD_LEN+1];
}cuim_mdn_raw_data_struct;

typedef struct
{
  kal_uint8                      num_of_mdn;
  cuim_mdn_raw_data_struct   mdn_data[CUIM_MAX_MDN_RECORD];
}cuim_mdn_ef_data_struct;

typedef struct
{
  cuim_mdn_ef_data_struct ef_mdn_data;
  kal_uint16                  status_word;
}uim_get_mdn_cnf_struct;
typedef struct
{
  LOCAL_PARA_HDR
  uim_get_mdn_cnf_struct msg;  
}c2k_uim_get_mdn_cnf_struct;

typedef struct
{
  UimRspInfoT  RspInfo;
}uim_get_mdn_req_struct;

typedef struct
{
  LOCAL_PARA_HDR
  uim_get_mdn_req_struct msg;
}c2k_uim_get_mdn_req_struct;

typedef struct
{
  UimRspInfoT  RspInfo;
}uim_get_home_sid_nid_req_struct;

typedef struct
{
  LOCAL_PARA_HDR
  uim_get_home_sid_nid_req_struct msg;
}c2k_uim_get_home_sid_nid_req_struct;

typedef struct
{
  kal_uint16          SIDp[MAX_POSITIVE_SIDS]; /* CDMA Home SID, NID */
  kal_uint16          NIDp[MAX_POSITIVE_SIDS];
  kal_uint8           NUM_POSITIVE_SID_NIDp;
  kal_uint16          status_word;
}uim_get_home_sid_nid_cnf_struct;

typedef struct
{
  LOCAL_PARA_HDR
    uim_get_home_sid_nid_cnf_struct msg;
}c2k_uim_get_home_sid_nid_cnf_struct;

typedef struct
{
  UimRspInfoT  RspInfo;
}uim_get_imsi_req_struct;

typedef struct
{
  LOCAL_PARA_HDR
  uim_get_imsi_req_struct msg;
}c2k_uim_get_imsi_req_struct;

typedef struct
{
  kal_bool            IMSI_M_Valid;    /* IMSI_M    */
  IMSIType        IMSI_Mp;       
  kal_bool            IMSI_T_Valid;    /* IMSI_T    */
  IMSIType        IMSI_Tp;      
  kal_uint16          status_word;
}uim_get_imsi_cnf_struct;

typedef struct
{
  LOCAL_PARA_HDR
    uim_get_imsi_cnf_struct msg;
}c2k_uim_get_imsi_cnf_struct;

typedef struct
{
  UimRspInfoT  RspInfo;
}uim_get_iccid_req_struct;

typedef struct
{
  LOCAL_PARA_HDR
    uim_get_iccid_req_struct msg;
}c2k_uim_get_iccid_req_struct;

typedef struct
{
  kal_bool            ICCID_Valid;
  kal_uint8           ICCID[UICC_ICCID_DATA_LEN];   
  kal_uint16          status_word;
}uim_get_iccid_cnf_struct;

typedef struct
{
  LOCAL_PARA_HDR
    uim_get_iccid_cnf_struct msg;
}c2k_uim_get_iccid_cnf_struct;

typedef struct
{
  UimRspInfoT    RspInfo;
  UimCardAppIdT APP_Id;  
}uim_get_card_app_info_req_struct;

typedef struct
{
  LOCAL_PARA_HDR
    uim_get_card_app_info_req_struct msg;
}c2k_uim_get_card_app_info_req_struct;

typedef struct
{
  kal_uint8 power_on_mode;
}uim_set_power_on_mode_req_struct;

typedef struct
{
  LOCAL_PARA_HDR
    uim_set_power_on_mode_req_struct msg;
}c2k_uim_set_power_on_mode_req_struct;

typedef struct
{
  UimCardAppIdT APP_Id;
  kal_uint8 Slot_Id;
  kal_uint8 Iccid[UICC_ICCID_DATA_LEN];
  kal_uint8 Channel_Id;
  kal_uint8 AID_Len;
  kal_uint8 AID[UICC_AID_MAX_LEN];
  kal_uint8 APP_Label_Len;
  kal_uint8 APP_Label[UICC_APP_LABEL_LEN];
  kal_bool  PIN1_Enabled;
  kal_bool  PIN1_Verified;
  kal_bool  PIN2_Enabled;
  kal_bool  PIN2_Verified;
  kal_uint8 PIN1_Count;
  kal_uint8 PIN2_Count;
  kal_uint8 PUK1_Count;
  kal_uint8 PUK2_Count;
  kal_uint16 status_word;
}uim_get_card_app_info_cnf_struct;

typedef struct
{
  LOCAL_PARA_HDR
    uim_get_card_app_info_cnf_struct msg;
}c2k_uim_get_card_app_info_cnf_struct;

typedef struct
{
  kal_uint8 Protocol_Id;
  kal_uint8 Channel_Id;
  kal_uint8 AID_Len;
  kal_uint8 AID[UICC_AID_MAX_LEN];
  kal_uint8 APP_Label_Len;
  kal_uint8 APP_Label[UICC_APP_LABEL_LEN];
  kal_bool  PIN1_Enabled;
  kal_bool  PIN2_Enabled;
  kal_uint8 PIN1_Count;
  kal_uint8 PIN2_Count;
  kal_uint8 PUK1_Count;
  kal_uint8 PUK2_Count;
  kal_bool  IccidValid;
  kal_uint8 Iccid[UICC_ICCID_DATA_LEN];
  kal_bool  UimidValid;
  kal_uint32 UimId;
#ifdef __CARRIER_RESTRICTION__
  kal_uint8 SlotId;
#endif
}uim_card_app_info_ind_struct;

typedef struct
{
  kal_uint8 Protocol_Id;
  kal_bool  PIN1_Enabled;
  kal_bool  PIN2_Enabled;
  kal_uint8 PIN1_Count;
  kal_uint8 PIN2_Count;
  kal_uint8 PUK1_Count;
  kal_uint8 PUK2_Count;
  kal_uint8  ChvStatus;
#ifdef __CARRIER_RESTRICTION__
  kal_uint8  SlotId;
#endif
  kal_uint16 CardStatus;
}uim_card_pin_info_ind_struct;

typedef struct
{
  kal_uint8 Protocol_Id;
  UimFileTypeT  file_type;
  kal_uint8	  file_path_len;
  kal_uint8	  file_path[VAL_UIM_MAX_FULLPATH_LENGTH];
  ValCacheFcpInfoT fcp_info;
}uim_cache_fcp_info_ind_struct;

typedef struct
{
  kal_uint8 Protocol_Id;
  UimFileTypeT  file_type;
  kal_uint8	  file_path_len;
  kal_uint8	  file_path[VAL_UIM_MAX_FULLPATH_LENGTH];
  ValCacheRecordInfoT record_info;
}uim_cache_record_info_ind_struct;

typedef struct
{
  kal_uint8 Protocol_Id;
  UimFileTypeT  file_type;
  kal_uint8	  file_path_len;
  kal_uint8	  file_path[VAL_UIM_MAX_FULLPATH_LENGTH];
  ValCacheBinaryInfoT binary_info;
}uim_cache_binary_info_ind_struct;

typedef struct
{  
    LOCAL_PARA_HDR
    uim_access_option_enum      uim_index;
    kal_uint16                  card_type;  
    UimOmhCardTypeT             omh_card_type;
    kal_uint8                   sim_slot_id;
    usim_logic_channel_enum     USIMchan;
    usim_logic_channel_enum     ISIMchan;
    usim_logic_channel_enum     CSIMchan;
    kal_uint8                   atr_length;
    kal_uint8                   atr[40];
    kal_uint8                   remote_sim_protocol_task;
    kal_bool                    iccid_valid;
    kal_uint8                   iccid[10];
    kal_uint8                   NumOfEccList;
    UimEccContactT              EccList[MAX_ECC_LIST];  
    UimNamT                     namData;
    kal_bool                    nam_valid;
    kal_uint8                   meidInCard[7];
    kal_uint8                   meidLen;
    kal_uint8                   ef_ota_len;
    kal_uint8                   ef_ota_data[255]; 
    kal_uint8                   pin1_count;
    kal_uint8                   puk1_count;
    kal_uint8                   pin2_count;
    kal_uint8                   puk2_count;  
    CardStatusT                 CardStatus;
    ChvStatusT                  ChvStatus;
    kal_uint8                   Csim_AID[16];
    kal_uint8                   Usim_AID[16];
    kal_uint8                   Isim_AID[16];
    uim_gsm_file_info_struct    gsm_file_info;
    kal_bool                    is_fdn_enabled;
    kal_bool                    is_extended_support;
#ifdef __CARRIER_RESTRICTION__
    kal_bool                    is_cdma_only_card;
    kal_bool                    spn_valid;
    kal_uint8                   ef_spn_data[35];
    uim_gid_struct              gid_info;
#endif              
}uim_card_status_info_ind_struct;

typedef uim_sim_apdu_access_req_struct  c2k_uim_sim_apdu_access_req_struct;

typedef uim_sim_apdu_access_cnf_struct  c2k_uim_sim_apdu_access_cnf_struct;

typedef uim_sim_error_ind_struct  c2k_uim_sim_error_ind_struct;

typedef uim_card_status_info_ind_struct  c2k_uim_card_status_info_ind_struct;

typedef uim_sim_status_ind_struct c2k_uim_vsim_status_ind_struct;

typedef uim_sat_file_change_res_struct  c2k_uim_sat_file_change_res_struct;

typedef uim_sim_read_cnf_struct c2k_sim_read_cnf_struct;

typedef uim_sim_read_req_struct c2k_sim_read_req_struct;


typedef struct
{
  LOCAL_PARA_HDR
}c2k_uim_index_register_cnf_struct;

typedef struct
{
   LOCAL_PARA_HDR
   uimUtkFileChangedIndMsgT msg;
} c2k_uim_file_changed_ind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   uimCallStatusMsgT msg;
} uim_call_status_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   uimImsRegisterStatusMsgT msg;
} uim_ims_register_status_msg_struct;


typedef struct
{
  UimRspInfoT  RspInfo;
}uim_get_uimid_req_struct;

typedef struct
{
  LOCAL_PARA_HDR
  uim_get_uimid_req_struct msg;
}c2k_uim_get_uimid_req_struct;

typedef struct
{
  kal_uint32          uimid;      
  kal_uint16          status_word;
}uim_get_uimid_cnf_struct;

typedef struct
{
  UimRspInfoT  RspInfo;
}uim_get_extended_support_info_req_struct;

/*MSG_ID_C2K_UIM_GET_EXTENDED_SUPPORT_INFO_REQ*/
typedef struct
{
  LOCAL_PARA_HDR
  uim_get_extended_support_info_req_struct msg; 
}c2k_uim_get_extended_support_info_req_struct;

typedef struct
{
  kal_uint8  chan_id;
  kal_uint16 status_word;
  kal_bool is_extended_support;
}uim_get_extended_support_info_cnf_struct;

typedef struct
{
  LOCAL_PARA_HDR
  uim_get_extended_support_info_cnf_struct msg; 
}c2k_uim_get_extended_support_info_cnf_struct;

typedef c2k_uim_get_extended_support_info_cnf_struct val_uim1_get_extended_support_info_rsp_struct;
typedef c2k_uim_get_extended_support_info_cnf_struct val_uim2_get_extended_support_info_rsp_struct;

typedef struct
{
  LOCAL_PARA_HDR
  UimExtendedRawCmdMsgT msg;
}uim_extended_raw_cmd_msg_struct;

typedef struct
{
  kal_uint8  chan_id;
  kal_uint16 status_word;
  kal_uint16 len;
  kal_uint8* data;
}c2k_uim_extended_raw_cmd_data_msg_struct;

typedef struct
{
  LOCAL_PARA_HDR
  c2k_uim_extended_raw_cmd_data_msg_struct msg;
}uim_extended_raw_cmd_data_msg_struct;

typedef uim_extended_raw_cmd_data_msg_struct val_uim1_extended_raw_cmd_data_msg_struct;
typedef uim_extended_raw_cmd_data_msg_struct val_uim2_extended_raw_cmd_data_msg_struct;

#ifdef __CARRIER_RESTRICTION__
typedef struct
{
	kal_uint8 slot_id;
}uim_cval_card_error_ind_struct;
#endif

#endif /* _UIM_MSG_STRUCT_H */

