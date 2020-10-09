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

/*******************************************************************************
 * Filename:
 * ---------
 *	l4b_vdm_enum.h
 *
 * Description:
 * ------------
 *   This file is intends for L4B/VDM interface
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 *
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _L4B_VDM_ENUM_H
#define _L4B_VDM_ENUM_H


#define L4BCC_MAX_CALL_NUM            7

typedef enum
{
    L4B_CALL_RELATED_SS_TYPE_REL_HELD_OR_UDUB,                  // AT+CHLD=0
    L4B_CALL_RELATED_SS_TYPE_REL_ACTIVE_AND_ACCEPT,             // AT+CHLD=1
    L4B_CALL_RELATED_SS_TYPE_REL_SPECIFIC_CALL,                 // AT+CHLD=1x
    L4B_CALL_RELATED_SS_TYPE_HOLD_ACTIVE_AND_ACCEPT,            // AT+CHLD=2
    L4B_CALL_RELATED_SS_TYPE_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL,  // AT+CHLD=2x
    L4B_CALL_RELATED_SS_TYPE_ADD_HELD_CALL,                     // AT+CHLD=3
    L4B_CALL_RELATED_SS_TYPE_EXPLICIT_CALL_TRANSFER,            // AT+CHLD=4
    L4B_CALL_RELATED_SS_TYPE_ACTIVATE_CCBS_CALL,                // AT+CHLD=5
    L4B_CALL_RELATED_SS_TYPE_REL_ALL,                           // AT+CHLD=6
    L4B_CALL_RELATED_SS_TYPE_REL_CALL_REJECT,                   // AT+CHLD=8
    L4B_CALL_RELATED_SS_TYPE_VT_FALL_TO_VOICE,                  // AT+CHLD=9x
    L4B_CALL_RELATED_SS_TYPE_INVALID                    
} l4b_call_related_ss_type_enum;


typedef enum
{
    L4B_RCODE_OK,
    L4B_RCODE_CONNECT,
    L4B_RCODE_RING,
    L4B_RCODE_NO_CARRIER,        //3
    L4B_RCODE_ERROR,             //4
    L4B_RCODE_BUSY = 7,

    /* Below are MTK proprietary result codes */
    L4B_RCODE_CONNECT_PS = 100,

    /* Below are result codes added for IMS */

} l4b_result_code_enum;


typedef enum
{
    L4B_ERR_PHONE_FAILURE = 0,
    L4B_ERR_OPERATION_NOT_ALLOWED_ERR = 3,
    L4B_ERR_OPERATION_NOT_SUPPORTED = 4,
    L4B_ERR_PH_SIM_PIN_REQUIRED = 5,
    L4B_ERR_PH_FSIM_PIN_REQUIRED = 6, 
    L4B_ERR_PH_FSIM_PUK_REQUIRED = 7,
    L4B_ERR_SIM_NOT_INSERTED = 10,
    L4B_ERR_SIM_PIN_REQUIRED = 11,
    L4B_ERR_SIM_PUK_REQUIRED = 12,
    L4B_ERR_SIM_FAILURE = 13,
    L4B_ERR_SIM_BUSY = 14,
    L4B_ERR_SIM_WRONG = 15,
    L4B_ERR_INCORRECT_PASSWD = 16,
    L4B_ERR_SIM_PIN2_REQUIRED = 17,
    L4B_ERR_SIM_PUK2_REQUIRED = 18,
    L4B_ERR_MEM_FULL = 20,
    L4B_ERR_INVALID_INDEX = 21,
    L4B_ERR_NO_FOUND = 22,
    L4B_ERR_TEXT_ERRSTRING_TOO_LONG_ERR = 24,
    L4B_ERR_INVALID_CHARACTERS_IN_TEXT_ERRSTRING_ERR = 25,
    L4B_ERR_DIAL_ERRSTRING_TOO_LONG_ERR = 26, 
    L4B_ERR_INVALID_CHARACTERS_IN_DIAL_ERRSTRING_ERR = 27,
    L4B_ERR_NO_NW_SERVICE = 30,
    L4B_ERR_NETWORK_TIMEOUT = 31,
    L4B_ERR_NETWORK_NOT_ALLOWED = 32,
    L4B_ERR_NW_PERSON_PIN_REQUIRED = 40,
    L4B_ERR_NW_PERSON_PUK_REQUIRED = 41,
    L4B_ERR_NW_SUB_PERSON_PIN_REQUIRED = 42,
    L4B_ERR_NW_SUB_PERSON_PUK_REQUIRED = 43,
    L4B_ERR_SP_PERSON_PIN_REQUIRED = 44,
    L4B_ERR_SP_PERSON_PUK_REQUIRED = 45,
    L4B_ERR_CORP_PERSON_PIN_REQUIRED = 46,
    L4B_ERR_CORP_PERSON_PUK_REQUIRED = 47,
    L4B_ERR_UNKNOWN = 100,
    L4B_ERR_ILLEGAL_MS = 103,
    L4B_ERR_ILLEGAL_ME = 106,
    L4B_ERR_GPRS_NOT_ALLOWED = 107,
    L4B_ERR_PLMN_NOT_ALLOWED = 111,
    L4B_ERR_LA_NOT_ALLOWED = 112,
    L4B_ERR_ROAMING_AREA_NOT_ALLOWED = 113,
    L4B_ERR_SERV_OPTION_NOT_SUPPORTED = 132,
    L4B_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED = 133,
    L4B_ERR_SERV_OPTION_TEMP_OUT_OF_ORDER = 134,
    L4B_ERR_GPRS_UNSPECIFIED_ERROR = 148,
    L4B_ERR_PDP_AUTH_FAIL = 149,
    L4B_ERR_INVALID_MOBILE_CLASS = 150,
    L4B_ERR_LINK_NS_SP_PERSON_PIN_REQUIRED = 151,
    L4B_ERR_LINK_NS_SP_PERSON_PUK_REQUIRED = 152,
    L4B_ERR_LINK_SIM_C_PERSON_PIN_REQUIRED = 153,
    L4B_ERR_LINK_SIM_C_PERSON_PUK_REQUIRED = 154,

    /* Below are MTK proprietary error codes */
    L4B_ERR_COMMAND_CONFLICT = 302,
    L4B_NO_ERR = 600,
    L4B_ERR_UNRECOGNIZED_CMD = 601,
    L4B_ERR_RETURN_ERROR = 602,
    L4B_ERR_SYNTEX_ERROR = 603,
    L4B_ERR_UNSPECIFIED = 604,
    L4B_ERR_DATA_TRANSFER_ALREADY = 605,
    L4B_ERR_ACTION_ALREADY = 606,
    L4B_ERR_NOT_AT_CMD = 607,
    L4B_ERR_MULTI_CMD_TOO_LONG = 608,
    L4B_ERR_ABORT_COPS = 609,
    L4B_ERR_NO_CALL_DISC = 610,
    L4B_ERR_BT_SAP_UNDEFINED = 611,
    L4B_ERR_BT_SAP_NOT_ACCESSIBLE = 612,
    L4B_ERR_BT_SAP_CARD_REMOVED = 613,
    L4B_ERR_AT_NOT_ALLOWED_BY_CUSTOMER = 614

} l4b_err_id_enum;





typedef enum
{
    L4B_CALL_DIR_MO_CALL = 0,
    L4B_CALL_DIR_MT_CALL = 1,
} l4b_call_dir_enum;


typedef enum
{
    L4B_CALL_MODE_CS_DOMAIN_BEGIN     = 0,
    L4B_CALL_MODE_CS_VOICE_CALL       = L4B_CALL_MODE_CS_DOMAIN_BEGIN,
    L4B_CALL_MODE_CS_DATA_CALL,
    L4B_CALL_MODE_CS_FAX_CALL,
    L4B_CALL_MODE_CS_VFD_VOICE,     /* voice followed by data, voice mode */
    L4B_CALL_MODE_CS_AVD_VOICE,     /* alternating voice/data, voice mode */
    L4B_CALL_MODE_CS_AVF_VOICE,     /* alternating voice/fax, voice mode */
    L4B_CALL_MODE_CS_VFD_DATA,      /* voice followed by data, data mode */
    L4B_CALL_MODE_CS_AVD_DATA,      /* alternating voice/data, data mode */
    L4B_CALL_MODE_CS_AVF_FAX,       /* alternating voice/fax, fax mode */
    L4B_CALL_MODE_CS_UNKNOWN_MODE,
    L4B_CALL_MODE_CS_VIDEO_CALL,

    L4B_CALL_MODE_IMS_DOMAIN_BEGIN    = 20,
    L4B_CALL_MODE_IMS_VOICE_CALL      = L4B_CALL_MODE_IMS_DOMAIN_BEGIN,
    L4B_CALL_MODE_IMS_VIDEO_CALL,
    L4B_CALL_MODE_IMS_VOICE_CONF,
    L4B_CALL_MODE_IMS_VIDEO_CONF,
    L4B_CALL_MODE_IMS_VOICE_CONF_PARTS, // voice conference call participant
    L4B_CALL_MODE_IMS_VIDEO_CONF_PARTS, // video conference call participant
    L4B_CALL_MODE_IMS_DOMAIN_END      = 39,

    L4B_CALL_MODE_C2K_DOMAIN_BEGIN    = 40,
    L4B_CALL_MODE_C2K_VOICE_CALL      = L4B_CALL_MODE_C2K_DOMAIN_BEGIN,
    L4B_CALL_MODE_C2K_OTASP_CALL_STD,
    L4B_CALL_MODE_C2K_OTASP_CALL_NO_STD,
    L4B_CALL_MODE_C2K_ECC_CALL,
    L4B_CALL_MODE_C2K_DOMAIN_END
} l4b_call_mode_enum;


typedef enum
{
    L4B_CLCCS_CALL_MODE_CS_VOICE_CALL      = 1,
    L4B_CLCCS_CALL_MODE_CS_DATA_CALL,     /* = 2  */
    L4B_CLCCS_CALL_MODE_CS_FAX_CALL,      /* = 3 */
    L4B_CLCCS_CALL_MODE_CS_VFD_VOICE,     /* = 4 voice followed by data, voice mode */
    L4B_CLCCS_CALL_MODE_CS_AVD_VOICE,     /* = 5 alternating voice/data, voice mode */
    L4B_CLCCS_CALL_MODE_CS_AVF_VOICE,     /* = 6 alternating voice/fax, voice mode */
    L4B_CLCCS_CALL_MODE_CS_VFD_DATA,      /* = 7 voice followed by data, data mode */
    L4B_CLCCS_CALL_MODE_CS_AVD_DATA,      /* = 8 alternating voice/data, data mode */
    L4B_CLCCS_CALL_MODE_CS_AVF_FAX,       /* = 9 alternating voice/fax, fax mode */
    L4B_CLCCS_CALL_MODE_CS_VIDEO_CALL,    /* = 10 */

    L4B_CLCCS_CALL_MODE_IMS_DOMAIN_BEGIN    = 20, // align to CLCC call mode
    L4B_CLCCS_CALL_MODE_IMS_VOICE_CALL      = L4B_CLCCS_CALL_MODE_IMS_DOMAIN_BEGIN,
    L4B_CLCCS_CALL_MODE_IMS_VIDEO_CALL,
    L4B_CLCCS_CALL_MODE_IMS_VOICE_CONF,
    L4B_CLCCS_CALL_MODE_IMS_VIDEO_CONF,
    L4B_CLCCS_CALL_MODE_IMS_VOICE_CONF_PARTS, // voice conference call participant
    L4B_CLCCS_CALL_MODE_IMS_VIDEO_CONF_PARTS, // video conference call participant
    L4B_CLCCS_CALL_MODE_IMS_DOMAIN_END      = 39,

    L4B_CLCCS_CALL_MODE_C2K_DOMAIN_BEGIN    = 40,
    L4B_CLCCS_CALL_MODE_C2K_VOICE_CALL      = L4B_CLCCS_CALL_MODE_C2K_DOMAIN_BEGIN,
    L4B_CLCCS_CALL_MODE_C2K_OTASP_CALL_STD,
    L4B_CLCCS_CALL_MODE_C2K_OTASP_CALL_NO_STD,
    L4B_CLCCS_CALL_MODE_C2K_ECC_CALL,
    L4B_CLCCS_CALL_MODE_C2K_DOMAIN_END
} l4b_clccs_call_mode_enum;


typedef enum
{
    L4B_CALL_TYPE_INVALIDE      = 0,
    L4B_CALL_TYPE_NATIONAL      = 129,
    L4B_CALL_TYPE_INTERNATIONAL	= 145,
} l4b_call_type_enum;


typedef enum
{
    L4B_CALL_CCSTATUS_IDLE = 1,
    L4B_CALL_CCSTATUS_CALLING_MO,      //2 map to CLCC_CALL_DIALING
    L4B_CALL_CCSTATUS_CONNECTING_MO,   //3
    L4B_CALL_CCSTATUS_ALERTING_MO,     //4 map to CLCC_CALL_ALERTING
    L4B_CALL_CCSTATUS_ALERTING_MT,     //5 mpa to CLCC_CALL_INCOMING
    L4B_CALL_CCSTATUS_ACTIVE,          //6 map to CLCC_CALL_ACTIVE
    L4B_CALL_CCSTATUS_RELEASED_MO,     //7
    L4B_CALL_CCSTATUS_RELEASED_MT,     //8
    L4B_CALL_CCSTATUS_USER_BUSY,       //9
    L4B_CALL_CCSTATUS_UDUB,            //10
    L4B_CALL_CCSTATUS_WAITING_MO,      //11
    L4B_CALL_CCSTATUS_WAITING_MT,      //12
    L4B_CALL_CCSTATUS_HOLD_MO,         //13 map to CLCC_CALL_HELD
    L4B_CALL_CCSTATUS_HOLD_MT,         //14 map to CLCC_CALL_HELD
    L4B_CALL_CCSTATUS_INVALID_STATE = 0xff
} l4b_call_ccstatus_enum;


typedef enum
{
    L4B_CALL_NUMBER_TYPE_NONE,
    L4B_CALL_NUMBER_TYPE_URI,
    L4B_CALL_NUMBER_TYPE_TEL,
} l4b_call_number_type_enum;


typedef enum
{
    L4B_CC_EAIC_ALLOWED = 0,
    L4B_CC_EAIC_NOT_ALLOWED
} l4b_cc_eaic_result_enum;



typedef enum
{
    L4B_EXT_ERROR_REPORT_NORMAL_CLEARING                = 16,
    L4B_EXT_ERROR_REPORT_RESOURCE_UNAVAILABLE           = 47,
    L4B_EXT_ERROR_REPORT_UNOBTAINABLE_NUMBER            = 1,
    L4B_EXT_ERROR_REPORT_NORMAL_UNSPECIFIED             = 31,
    L4B_EXT_ERROR_REPORT_BEARER_NOT_AVAIL               = 58,
    L4B_EXT_ERROR_REPORT_USER_BUSY                      = 17,
    L4B_EXT_ERROR_REPORT_SERVICE_NOT_AVAILABLE          = 63,
    L4B_EXT_ERROR_REPORT_FDN_RESTRICTION                = 2600, // refer to ps_cause_enum
    L4B_EXT_ERROR_REPORT_TEMPORTARY_FAILURE             = 41,
    L4B_EXT_ERROR_REPORT_QOS_NOT_AVAIL                  = 49,
    L4B_EXT_ERROR_REPORT_INVALID_CMD                    = 0,
    L4B_EXT_ERROR_REPORT_FACILITY_REJECTED              = 29,
    L4B_EXT_ERROR_REPORT_CALL_REJECTED                  = 21,
    L4B_EXT_ERROR_REPORT_DEDICATED_BEARER_TIMEOUT       = 1000, // may reselect CS domain
    L4B_EXT_ERROR_REPORT_GENERIC_RETRY_CS               = 1001, // may reselect CS domain
    L4B_EXT_ERROR_REPORT_GENERIC_NO_RETRY               = 1002,
    L4B_EXT_ERROR_REPORT_GENERIC_RETRY_IMS_CS           = 1003, // may retry IMS once, then CS domain
    L4B_EXT_ERROR_REPORT_TIMER_B_EXPIRY                 = 1004,
    L4B_EXT_ERROR_REPORT_NON_UE_DETECT_EMERG            = 380, // report to AP to trigger normal to ecc redial
    L4B_EXT_ERROR_REPORT_SILENT_REDIAL_3GPP2            = 2001, 
    L4B_EXT_ERROR_REPORT_DIAL_1XRTT_DIRECTLY            = 2002, 
    L4B_EXT_ERROR_REPORT_NEED_GLOBAL_MODE_FOR_EMERG     = 2003,
} l4b_ext_error_report_enum;


typedef enum
{
    L4B_CALL_STATE_ACTIVE       = 0,
    L4B_CALL_STATE_HELD         = 1,
    L4B_CALL_STATE_MO_DIALING   = 2,
    L4B_CALL_STATE_MO_ALERTING  = 3,
    L4B_CALL_STATE_MT_INCOMING  = 4,
    L4B_CALL_STATE_MT_WAITING   = 5,
} l4b_call_state_enum;


typedef enum
{
    L4B_STK_CALL_DOMAIN_WG      = 0,
    L4B_STK_CALL_DOMAIN_IMS     = 1,
    L4B_STK_CALL_DOMAIN_C2K     = 2,
    L4B_STK_CALL_DOMAIN_INVALID
} l4b_stk_call_domain_enum;

typedef enum
{
    L4B_TR_TRIGGER_MD_SEDN_STK_CALL_SETUP = 0,
    L4B_TR_TRIGGER_MD_SEDN_STK_CALL_SETUP_BUT_ICON_COULD_NOT_DSPL = 4
} l4b_stk_type_enum;

typedef enum
{
    L4B_SETUP_CALL_BUT_ONLY_IF_NOT_CURRENTLY_BUSY_ON_ANOTHER_CALL = 0,
	L4B_SETUP_CALL_BUT_ONLY_IF_NOT_CURRENTLY_BUSY_ON_ANOTHER_CALL_WITH_REDIAL = 1,
    L4B_SETUP_CALL_PUTTINGALL_OTHER_CALLS_IF_ANY_ON_HOLD = 2,
    L4B_SETUP_CALL_PUTTINGALL_OTHER_CALLS_IF_ANY_ON_HOLD_WITH_REDIAL = 3,
    L4B_SETUP_CALL_DISCONNECTING_ALL_OTHER_CALLS_IF_ANY = 4,
    L4B_SETUP_CALL_DISCONNECTING_ALL_OTHER_CALLS_IF_ANY_WITH_REDIAL = 5
}l4b_stk_redial_setting_enum;

typedef enum
{
    L4B_STK_MEDIA_TYPE_VOICE = 0,
	L4B_STK_MEDIA_TYPE_VIDEO = 1
}l4b_stk_media_type_enum;
#endif /* _L4B_VDM_ENUM_H */

