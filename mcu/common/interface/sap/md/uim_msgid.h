/*****************************************************************************
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
* FILE NAME   :uim_msgid.h
*
* DESCRIPTION :
*
*
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/
#ifndef _UIM_MSG_ID_H
#define _UIM_MSG_ID_H


#include "module_msg_range.h"

MODULE_MSG_BEGIN( MSG_ID_CUIM_CODE_BEGIN )

   MSG_ID_UIM_RAW_CMD_MSG = MSG_ID_CUIM_CODE_BEGIN + 0x0000, /* 0x8858 base */
   MSG_ID_UIM_SELECT_MSG,
   MSG_ID_UIM_STATUS_MSG,
   MSG_ID_UIM_READ_BINARY_MSG,
   MSG_ID_UIM_UPDATE_BINARY_MSG,
   MSG_ID_UIM_READ_RECORD_MSG,
   MSG_ID_UIM_UPDATE_RECORD_MSG,
   MSG_ID_UIM_VERIFY_CHV_MSG,
   MSG_ID_UIM_CHANGE_CHV_MSG,
   MSG_ID_UIM_ENABLE_CHV_MSG,
   MSG_ID_UIM_DISABLE_CHV_MSG,
   MSG_ID_UIM_UNBLOCK_CHV_MSG,
   MSG_ID_UIM_BS_CHALLENGE_MSG,
   MSG_ID_UIM_CONFIRM_SSD_MSG,
   MSG_ID_UIM_RUN_CAVE_MSG,
   MSG_ID_UIM_GENERATE_KEY_VPM_MSG,
   MSG_ID_UIM_STORE_ESN_ME_MSG,
   MSG_ID_UIM_HLP_ACCESS_CHAP_REQ_MSG,

   MSG_ID_UIM_3GPD_OPC_GET_MSG,   /* obsolete! */ /*Get EFME3GPDOPC*/
   MSG_ID_UIM_3GPD_OPC_UPDATE_MSG,  /*Update EFME3GPDOPC*/
   MSG_ID_UIM_3GPD_OPM_GET_MSG,   /* obsolete! */ /*Get EF3GPDOPM*/
   MSG_ID_UIM_3GPD_OPM_UPDATE_MSG,  /*Update EF3GPDOPM*/
   MSG_ID_UIM_3GPD_SIPCAP_GET_MSG,   /*Get EFSIPCAP*/
   MSG_ID_UIM_3GPD_MIPCAP_GET_MSG,  /* Get EFMIPCAP */
   MSG_ID_UIM_3GPD_SIPUPP_GET_MSG,  /* Get EFSIPUPP */
   MSG_ID_UIM_3GPD_MIPUPP_GET_MSG,  /*Get EFMIPUPP */
   MSG_ID_UIM_3GPD_SIPSP_GET_MSG,    /* Get EFSIPSP */
   MSG_ID_UIM_3GPD_SIPSP_UPDATE_MSG,  /* Update EFSIPSP */
   MSG_ID_UIM_3GPD_MIPSP_GET_MSG,        /*Get EFMIPSP*/
   MSG_ID_UIM_3GPD_MIPSP_UPDATE_MSG,  /* Update EFMIPSP */
   MSG_ID_UIM_3GPD_SIPPAPSS_GET_MSG,   /* Get SIPPAPSS */
   MSG_ID_UIM_3GPD_SIPPAPSS_UPDATE_MSG, /* Update SIPPAPSS*/

   MSG_ID_UIM_3GPD_IPV6_CAP_GET_MSG,            /* obsolete! */ /* Get EFIPV6CAP 7F25/6F77 in UIM or 7FFF/6F87 in CSIM */
   MSG_ID_UIM_3GPD_MIP_FLAGS_GET_MSG,           /* obsolete! */ /* Get EFMIPFlags  7F25/6F78 in UIM or 7FFF/6F84 in CSIM */
   MSG_ID_UIM_3GPD_TCP_CONFIG_GET_MSG,          /* obsolete! */ /* Get EFTCPCONFIG 7F25/6F79 in UIM or 7FFF/6F88 in CSIM */
   MSG_ID_UIM_3GPD_DATA_GENERIC_CONFIG_GET_MSG, /* obsolete! */ /* Get EFDCG       7F25/6F7A in UIM or 7FFF/6F89 in CSIM */
   MSG_ID_UIM_3GPD_UPPEXT_GET_MSG,              /* Get EFSIPUPPEXT 7F25/6F7D in UIM or 7FFF/6F85 in CSIM, referred to as 3GPDUpp in latest Spec */

   MSG_ID_UIM_MS_KEY_REQUEST_MSG,
   MSG_ID_UIM_KEY_GENERATION_REQUEST_MSG,
   MSG_ID_UIM_COMMIT_MSG,
   MSG_ID_UIM_VALIDATE_MSG,
   MSG_ID_UIM_CONFIGURATION_REQUEST_MSG,
   MSG_ID_UIM_DOWNLOAD_REQUEST_MSG,
   MSG_ID_UIM_SSPR_CONFIGURATION_REQUEST_MSG,
   MSG_ID_UIM_SSPR_DOWNLOAD_REQUEST_MSG,

   MSG_ID_UIM_PUZL_CONFIGURATION_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_PUZL_DOWNLOAD_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_3GPD_CONFIGURATION_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_3GPD_DOWNLOAD_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_MMD_CONFIGURATION_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_MMD_DOWNLOAD_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_MMS_CONFIGURATION_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_MMS_DOWNLOAD_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_SYSTEM_TAG_CONFIGURATION_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_SYSTEM_TAG_DOWNLOAD_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_MMSS_CONFIGURATION_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_MMSS_DOWNLOAD_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_SECURE_MODE_MSG, /* obsolete! */
   MSG_ID_UIM_FRESH_MSG, /* obsolete! */
   MSG_ID_UIM_SERVICE_KEY_GENERATION_REQUEST_MSG, /* obsolete! */
   MSG_ID_UIM_BCMCS_MSG, /* obsolete! */
   MSG_ID_UIM_APPLICATION_AUTHENTION_MSG, /* obsolete! */
   MSG_ID_UIM_UMAC_GENERATION_MSG, /* obsolete! */
   MSG_ID_UIM_CONFIRM_KEYS_MSG,  /* obsolete! */

   MSG_ID_UIM_OTAPA_REQUEST_MSG,
   MSG_ID_UIM_OTA_RUN_CAVE_MSG,

   MSG_ID_UIM_HRPD_MD5_AUTH_MSG,
   MSG_ID_UIM_CARD_TYPE_GET_MSG,
   MSG_ID_UIM_3G_SIP_CHAP_REQ_MSG,
   MSG_ID_UIM_3G_MIP_MNHA_AUTH_REQ_MSG,
   MSG_ID_UIM_3G_MIP_RRQ_HASH_REQ_MSG,
   MSG_ID_UIM_3G_MIP_MNAAA_AUTH_REQ_MSG,
   MSG_ID_UIM_GET_ISIM_IMPU_MSG, /* obsolete! */
   MSG_ID_UIM_APP_INIT_TERM_MSG, /* UIM application initialization or termination */
   
   MSG_ID_UIM_EXT_INFO_GET_MSG,
   MSG_ID_UICC_LOGI_CHAN_OPEN_MSG,
   MSG_ID_UICC_LOGI_CHAN_CLOSE_MSG,
   MSG_ID_UIM_RESET_MSG,

   MSG_ID_UIM_GET_PRL_MSG,
   MSG_ID_UIM_GET_EXT_PRL_MSG,
   MSG_ID_UIM_GET_EFPL_MSG, /* obsolete! */

   MSG_ID_UIM_TERMINAL_PROFILE_MSG = MSG_ID_CUIM_CODE_BEGIN + 0x0A0,
   MSG_ID_UIM_TERMINAL_RESPONSE_MSG,
   MSG_ID_UIM_ENVELOPE_MSG,
   MSG_ID_UIM_UTK_REFRESH_MSG,
   MSG_ID_UIM_FILE_CHANGE_RSP_MSG,
   MSG_ID_UIM_PROACTIVE_REGISTER_MSG,  /* obsolete! */
   MSG_ID_UIM_PROACTIVE_POLLING_MSG,
   MSG_ID_C2K_UIM_SAT_FILE_CHANGE_RES,


   MSG_ID_UIM_3G_AKA_AUTH_REQ_MSG = MSG_ID_CUIM_CODE_BEGIN + 0x0C0,
   MSG_ID_UIM_3G_AKA_READ_EFKEYSPS_MSG, /* obsolete! */
   MSG_ID_UIM_3G_AKA_UPDATE_EFKEYSPS_MSG, /* obsolete! */
   MSG_ID_UIM_GET_USIM_AD_MSG, /*Administrative Data*/
   MSG_ID_UIM_GET_USIM_IMSI_MSG,
   MSG_ID_UIM_USIM_UST_DATA_GET_MSG,   /* Get ust */
   MSG_ID_UIM_USIM_EST_DATA_GET_MSG,   /* Get est */
   MSG_ID_UIM_USIM_ACL_DATA_GET_MSG,   /* Get acl */

   MSG_ID_UIM_EXTENDED_RAW_CMD_MSG,

   MSG_ID_UIM_GET_NAM_DATA_MSG = MSG_ID_CUIM_CODE_BEGIN + 0x0100,
   MSG_ID_UIM_UPDATE_NAM_DATA_MSG,
   MSG_ID_UIM_GET_CST_MSG,
   MSG_ID_UIM_GET_UIMID_EUIMID_MSG,
   MSG_ID_UIM_GET_IMSI_MSG,

   MSG_ID_UIM_OTA_UPDATE_NAM_MSG,/* NAM data updated by OTAPA/OTASP */


   MSG_ID_UIM_GET_PHB_REC_PARAMS_MSG= MSG_ID_CUIM_CODE_BEGIN + 0x0200,
   MSG_ID_UIM_GET_PHB_REC_MSG,
   MSG_ID_UIM_UPDATE_PHB_REC_MSG,
   MSG_ID_UIM_ERASE_PHB_REC_MSG,
   MSG_ID_UIM_GET_SMS_REC_PARAMS_MSG,
   MSG_ID_UIM_GET_SMS_REC_MSG,
   MSG_ID_UIM_UPDATE_SMS_REC_MSG,
   MSG_ID_UIM_ERASE_SMS_REC_MSG,

   MSG_ID_UIM_GET_STATUS_MSG,
   MSG_ID_UIM_CARD_DETECT_MSG,

   /* CHV APP */
   MSG_ID_UIM_APP_VERIFY_CHV_MSG,
   MSG_ID_UIM_APP_CHANGE_CHV_MSG,
   MSG_ID_UIM_APP_ENABLE_CHV_MSG,
   MSG_ID_UIM_APP_DISABLE_CHV_MSG,
   MSG_ID_UIM_APP_UNBLOCK_CHV_MSG,

   MSG_ID_UIM_GET_EF_PROPERTY_MSG,
   MSG_ID_UIM_SET_CARDTYPE_MSG,

   MSG_ID_UIM_FULL_RECOVERY_MSG,
   MSG_ID_UIM_FAST_RECOVERY_MSG,
   MSG_ID_UIM_UTK_REFRESH_TIMEOUT_MSG,
   MSG_ID_UIM_BTSAP_CONNECT_MSG,
   MSG_ID_UIM_BTSAP_DISCONNECT_MSG,
   MSG_ID_UIM_BTSAP_POWER_ON_MSG,
   MSG_ID_UIM_BTSAP_POWER_OFF_MSG,
   MSG_ID_UIM_BTSAP_RESET_MSG,
   MSG_ID_UIM_BTSAP_TRANSFER_APDU_MSG,


   MSG_ID_UIM_GET_FDN_REC_MSG,
   MSG_ID_UIM_UPDATE_FDN_REC_MSG,
   MSG_ID_UIM_ERASE_FDN_REC_MSG,
   MSG_ID_UIM_SET_FDN_STATUS_MSG,
   MSG_ID_UIM_GET_FDN_STATUS_MSG,
   MSG_ID_UIM_GET_SMS_CAP_MSG,
   MSG_ID_UIM_OTA_COMPLETE_IND_MSG,
   
   MSG_ID_UIM_CALL_STATUS_MSG,
   MSG_ID_UIM_IMS_REGISTER_STATUS_MSG,


   MSG_ID_UIM_NOTIFY_REGISTER_MSG = MSG_ID_CUIM_CODE_BEGIN + 0x0300,
   MSG_ID_UIM_SET_PARM_MSG,
   MSG_ID_UIM_GET_PARM_MSG,
   MSG_ID_UIM_ACCESS_OPTION_MSG,
   
   MSG_ID_C2K_UIM_SIM_APDU_ACCESS_CNF = MSG_ID_CUIM_CODE_BEGIN + 0x0320 ,
   MSG_ID_C2K_UIM_SIM_ERROR_IND,
   MSG_ID_C2K_UIM_CARD_STATUS_INFO_IND,
   MSG_ID_C2K_UIM_INDEX_REGISTER_CNF,
   MSG_ID_C2K_UIM_IMS_DEREG_TIMER_MSG,    

   MSG_ID_C2K_UIM_SIM_APDU_ACCESS_REQ,   
   MSG_ID_C2K_UIM_GET_MDN_REQ,
   MSG_ID_C2K_UIM_GET_HOME_SID_NID_REQ,
   MSG_ID_C2K_UIM_GET_IMSI_REQ,
   MSG_ID_C2K_UIM_GET_ICCID_REQ,
   MSG_ID_C2K_UIM_GET_CARD_APP_INFO_REQ, 
   MSG_ID_C2K_UIM_SET_POWER_ON_MODE_REQ,
   MSG_ID_C2K_UIM_SAT_TERMINAL_RSP_REQ,
   MSG_ID_C2K_UIM_SAT_TERMINAL_RSP_CNF,
   MSG_ID_C2K_UIM_SAT_ENVELOPE_REQ,
   MSG_ID_C2K_UIM_SAT_ENVELOPE_CNF,
   MSG_ID_C2K_UIM_SAT_PROACTIVE_CMD_IND,
   MSG_ID_C2K_UIM_FILE_CHANGED_IND_MSG,
   
   MSG_ID_C2K_UIM_VSIM_STATUS_IND,
   MSG_ID_C2K_UIM_GET_UIMID_REQ,
   MSG_ID_C2K_SIM_READ_REQ,
   MSG_ID_C2K_SIM_READ_CNF,


   MSG_ID_UIM_SIM_C2K_BATCH_FILE_READ_CNF,
   MSG_ID_UIM_SIM_APDU_ACCESS_CNF,
   MSG_ID_UIM_SIM_READ_CNF,  
   MSG_ID_UIM_SIM_ERROR_IND,
   MSG_ID_UIM_SIM_STATUS_IND,
   MSG_ID_UIM_SAT_TERMINAL_RSP_CNF,
   MSG_ID_UIM_SAT_ENVELOPE_CNF,
   MSG_ID_UIM_SAT_PROACTIVE_CMD_IND,
   MSG_ID_UIM_SIM_AUTHENTICATE_CNF,
   MSG_ID_BT_UIM_SIM_RESET_CNF,
   MSG_ID_BT_UIM_SIM_POWER_ON_CNF,
   MSG_ID_BT_UIM_SIM_POWER_OFF_CNF,
   MSG_ID_UIM_SIM_MDSTATUS_UPDATE_IND,
   MSG_ID_SIM_UIM_PIN_SYNC_IND,
   

   MSG_ID_UIM_SET_FACTORY_MODE_MSG,
   MSG_ID_UIM_GET_FACTORY_MODE_MSG,  
   MSG_ID_UIM_SIM_STARTUP_READ_FINISH_IND,
   MSG_ID_UIM_SIM_APP_READY_IND,
   MSG_ID_UIM_SIM_APP_ERROR_IND,

   MSG_ID_UIM_FILE_INFO_REQ,
   MSG_ID_UIM_FILE_INFO_CNF,
   MSG_ID_UIM_READ_REQ,
   MSG_ID_UIM_READ_CNF,
   MSG_ID_UIM_WRITE_REQ,
   MSG_ID_UIM_WRITE_CNF,
   MSG_ID_UIM_SEARCH_RECORD_REQ,
   MSG_ID_UIM_SEARCH_RECORD_CNF,
   MSG_ID_UIM_UTK_FILE_CHANGE_IND,
   MSG_ID_UIM_UTK_FILE_CHANGE_RES,
   MSG_ID_UIM_PHB_STARTUP_REQ,
   MSG_ID_UIM_PHB_STARTUP_CNF,

   MSG_ID_UIM_SIM_CARD_TYPE_CHANGE_IND,

   MSG_ID_UIM_UT_DUMMY_REQ,
   MSG_ID_UIM_UT_DUMMY_CNF,
   MSG_ID_UIM_SIM_CALL_STATUS_IND,

   MSG_ID_UIM_L4BSBP_READY_IND,
   
   MSG_ID_C2K_UIM_GET_EXTENDED_SUPPORT_INFO_REQ,
   MSG_ID_UIM_SIM_RECOVERY_REQ,

MODULE_MSG_END(MSG_ID_CUIM_CODE_TAIL)

#endif

