
/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 2002-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef UIMAPI_H
#define UIMAPI_H
/*****************************************************************************
 
  FILE NAME:  uimapi.h

  DESCRIPTION:

    This file contains all constants and typedefs needed to interface
    with the UIM unit via the Exe mail service routines.


*****************************************************************************/

#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "sbp_public_utility.h"

#include "sysapi.h"
#include "pswnam.h"
#include "pswcustom.h"
#include "uim_nvram.h"

#include "uim_msgid.h"
#include "sim_ps_struct_public.h"
#include "sim_ps_msgid.h"
#include "sim_public_enum_public.h"

#include "c2k_irat_msg_struct.h"

/*------------------------------------------------------------------------
 * Define constants
 *------------------------------------------------------------------------*/
#define C2K_MOD_UIM_PROXY MOD_UIM_PROXY

#define SW_OK    0x9000
#define TERM_PROFILE_LEN 20

#define MAX_NUM_OF_GID      20
#define C2K_HRPD_NAI_LEN    72

#define MAX_SUPPORT_SIM_TOTAL SUPPORT_SIM_TOTAL

#define UTK_TIMER_MANAGER_NUM 8

/* 5 bytes header: CLA, INS, P1, P2, Lc */
#define CUIM_APDU_REQ_HDR_LEN       5
/* 261 - 5 = 256 */
#define CUIM_APDU_REQ_BODY_MAX_LEN  APDU_REQ_MAX_LEN - CUIM_APDU_REQ_HDR_LEN
/* 258 - 2 bytes status word SW1 and SW2 = 256 */
#define CUIM_APDU_RSP_MAX_LEN       APDU_RSP_MAX_LEN - 2

#ifdef MTK_DEV_C2K_IRAT
#define UICC_ATR_MAX_LEN    40
#define UICC_BASIC_LCH      0 /* Basic Logical Channel */
#define UICC_AID_MAX_LEN    16
#define UICC_APP_LABEL_LEN  32
#endif

#ifdef MTK_CBP
#define MAXALPHALENGTH 40
#else
#define MAXALPHALENGTH 21
#endif
#define MAXSMSMSGLENGTH 253

#define UIM_PARAM_P_LEN 64
#define UIM_PARAM_G_LEN 20
#define UIM_MAX_BS_RESULT_LEN 64
#define UIM_MAX_PARAM_SIZE 200
#define UIM_MAX_OTA_DATA_BURST_SIZE 255
#define UIM_MAX_EF_NUM  6

#define UIM_SIM_SC_ADDRESS_LENGTH 0x0a
#define UIM_SIM_STATUS_OK     0
#define UIM_SIM_STATUS_NO_SIM 1
#define UIM_SIM_STATUS_NO_PIN 2
#define MAX_NUMBER_BCD_LEN 10

#ifdef MTK_CBP
#define MAX_EFPL_SIZE  8 * 2 /* Each language indicator takes 2 bytes, 8 languages should be supported at maximum according to spec C.R1001 */
#define MAX_NUMBER_FDN_BCD_LEN  20
#define UIM_EXT2_REC_ADD_DATA_TYPE  0x2
#define UIM_EXT2_REC_CALL_PARTY_SUBADD_TYPE  0x1
#define UIM_EXT2_REC_FREE_TYPE  0x0

#define UIM_ECC_NUMBER_BCD_LEN  3
#define MAX_ECC_LIST  10
#endif
#define C2K_EF_SF_EUIMID_SIZE   7

#define SESSIONID_LSH(id)  (id << 5)    // the LSB 5 bits are DFIndex, and the MSB 3 bits are SessionID
#define SESSIONID_RSH(id)  (id >> 5)
#define DFINDEX(idx)       (idx & 0x1f)

/* UTK Command Tag Definitions */
#define UTK_COMMAND_DETAILS_TAG 0X81
#define UTK_DEVICE_IDENT_TAG    0X02
#define UTK_RESULT_TAG          0X83
#define UTK_DURATION_TAG        0X04
#define UTK_ALPHA_IDENT_TAG     0X05
#define UTK_ADDRESS_TAG         0X06
#define UTK_CAPA_CONF_PARA_TAG  0X07
#define UTK_SUB_ADDRESS_TAG     0x08
#define UTK_CDMA_SMS_TPDU_TAG   0X48
#define UTK_TEXT_STR_TAG        0X0D
#define UTK_TONE_TAG            0X0E
#define UTK_ITEM_TAG            0X0F
#define UTK_ITEM_IDENT_TAG      0X10
#define UTK_RESP_LENGTH_TAG     0X11
#define UTK_FILE_LIST_TAG       0X12
#define UTK_LOCATION_INFO_TAG   0X13
#define UTK_IMEI_TAG            0X14
#define UTK_HELP_REQUEST_TAG    0X15
#define UTK_NET_MEASU_RESULT_TAG 0X16
#define UTK_DEFAULT_TEXT_TAG    0X17
#define UTK_ITEM_NEXT_ACT_INDIC_TAG 0X18
#define UTK_EVENT_LIST_TAG      0X19
#define UTK_LOCATION_STATUS_TAG 0x1B
#define UTK_ICON_IDENT_TAG      0X1E
#define UTK_ITEM_ICON_IDENT_LIST 0X1F
#define UTK_TIMER_ID_TAG        0X24
#define UTK_TIMER_VALUE_TAG     0X25
#define UTK_IMMEDIATE_RESP_TAG  0X2B
#define UTK_LANGUAGE_TAG        0X2D
#define UTK_DATE_TIME_TAG       0X26
#define UTK_DTMF_STRING_TAG     0X2C
#define UTK_AID_TAG             0x2F
#define UTK_ACCESS_TECHNOLOGY_TAG 0X3F

/*command code*/
#define UTK_SET_UP_MENU_CMD 0x25
#define UTK_SET_UP_CALL_CMD 0x10
#define UTK_SET_UP_SEND_SS  0x11
#define UTK_SET_UP_SEND_USSD 0x12

#define UTK_REFRESH_CMD 0x01
#define UTK_MORE_TIME_CMD 0x02
#define UTK_CDMA_SEND_SMS_CMD 0x13
#define UTK_SEND_DTMF_CMD 0x14
#define UTK_GEOGRAPHICAL_LOCATION_REQUEST 0x16

#define UTK_CAUSE_TAG     0x1A
#define UTK_TRANSACTION_IDENTIFIER_TAG 0x1C
#define UTK_PLAY_TONE_CMD 0x20
#define UTK_DISPLAY_TEXT_CMD 0x21
#define UTK_GET_INPUT_CMD 0x23
#define UTK_SELECT_ITEM_CMD 0X24
#define UTK_POLL_INTERVAL_CMD 0x03
#define UTK_POLLING_OFF_CMD 0x04
#define UTK_SETUP_EVENT_LIST 0x05
#define UTK_SESSION_END_CMD 0x81
#define UTK_PROVIDE_LOCAL_INFORMATION_CMD 0x26
#define UTK_TIMER_MANAGER_CMD 0x27
#define UTK_GET_INKEY_CMD 0x22

#define UTK_PERFORM_CARD_APDU 0x30
#define UTK_POWER_ON_CARD 0x31
#define UTK_POWER_OFF_CARD 0x32
#define UTK_GET_READER_STATUS 0x33
#define UTK_RUN_AT_COMMAND 0x34
#define UTK_SERVICE_SEARCH 0x45
#define UTK_GET_SERVICE_INFO 0x46
#define UTK_DECLARE_SERVICE 0x47
#define UTK_SET_FRAMES  0x50
#define UTK_GET_GRAMES_STATUS 0x51
#define UTK_RETRIEVE_MULTIMEDIA_MSG 0x60
#define UTK_SUBIT_MULTIMEDIA_MSG 0x61
#define UTK_DISPLAY_MULTIMEDIA_MSG 0x62
#define UTK_ACTIVATE 0x70
#define UTK_CONTACTLESS_STATE_CHANGED 0x71
#define UTK_COMMAND_CONTAINER 0x72
#define UTK_ENCAPSULATED_SESSION_CONTROL 0x73

#define UTK_ESN_TAG  0x46
#define UTK_MEID_TAG 0x6D

#define UTK_TIMER_EXPIRATION 1
#define UTK_TIMER_MANAGEMENT_START_STOP 1

#define UTK_MAX_CHANNEL_NUM_SUPPORT 7

#define UTK_TCP_CLIENT_REMOTE 1
#define UTK_UDP_CLIENT_REMOTE 1
#define UTK_TCP_SERVER 1
#define UTK_TCP_CLIENT_LOCAL 0
#define UTK_UCP_CLIENT_LOCAL 0

#ifdef __CARRIER_RESTRICTION__
#define UIM_EF_SPN_LENGTH 35
#endif              

#define UIM_CMD_MSG_CLASS   0x0000
#define UIM_NAM_MSG_CLASS   0x0100
#define UIM_APP_MSG_CLASS   0x0200
#define UIM_MNG_MSG_CLASS   0x0300

#define CARD_FAST_RECOVERY_COUNT   3

typedef enum
{
   VAL_UIM_CMD_RST_OK            = 0x00, /*Command performed successfully*/
   VAL_UIM_CMD_RST_OK_ICON_NOT_DISPLAYED = 0x4, /* command performed successfully,but request icon could not be displayed */    
   VAL_UIM_CMD_RST_REFRESH_PERFORM_BUT_NAA_NOT_ACTIVE = 0X08, 
   VAL_UIM_CMD_RST_NO_RESP_FROM_USER = 0x12, /*No response from user*/
   VAL_UIM_CMD_RST_ME_UNABLE     = 0x20, /*terminal currently unable to process command*/
   VAL_UIM_CMD_RST_NET_UNABLE,               /*Network currently unable to process command*/
   VAL_UIM_CMD_RST_USER_NOT_ACCEPT,          /*User did not accept the proactive command*/
   VAL_UIM_CMD_RST_USER_CLEAR_CALL,          /*User cleared down call before connection or network release*/
   VAL_UIM_CMD_RST_CMD_BYD_CAP       = 0x30, /*Command beyond terminal's capabilities*/
   VAL_UIM_CMD_RST_CMD_TYPE_NOT_UND,         /*Command type not understood by terminal*/
   VAL_UIM_CMD_RST_CMD_DATA_NOT_UND,         /*Command data not understood by terminal*/
   VAL_UIM_CMD_RST_CMD_NUM_UNK,              /*Command number not known by terminal*/
   VAL_UIM_CMD_RST_REQ_VAL_MISS      = 0x36, /*Error, required values are missing*/
}ValUimCmdGenRstT;

typedef enum
{
    VAL_UIM_CMD_ADD_INF_NO_CAUSE       = 0x00, /*No specific cause can be given*/
    VAL_UIM_CMD_ADD_INF_SCR_BUSY,              /*Screen is busy*/
    VAL_UIM_CMD_ADD_INF_BUSY_CALL,             /*terminal currently busy on call*/
    VAL_UIM_CMD_ADD_INF_NO_SERVICE     = 0x04, /*No service*/
    VAL_UIM_CMD_ADD_INF_ACC_CLASS_BAR  = 0x05, /*Access control class bar*/
    VAL_UIM_CMD_ADD_INF_RADIO_RES_NOT_GRANT=0x06,/*Radio resource not granted*/
    VAL_UIM_CMD_ADD_INF_NOT_SPEECH_CALL,       /*Not in speech call*/
} ValUimCmdAddInfoT;

#define C2K_UTK_FILE_NUM_MAX    50

/*----------------------------------------------------------------------------
      BER-TLV Tags
----------------------------------------------------------------------------*/

typedef enum
{
    VAL_UTK_REF_CMD_QUAL_UIM_INIT_FULL_FILE_CHANGE = 0,
    VAL_UTK_REF_CMD_QUAL_UIM_FILE_CHANGE = 1,
    VAL_UTK_REF_CMD_QUAL_UIM_INIT_FILE_CHANGE = 2,
    VAL_UTK_REF_CMD_QUAL_UIM_INIT = 3,
    VAL_UTK_REF_CMD_QUAL_UIM_RESET = 4,
    VAL_UTK_REF_CMD_QUAL_UIM_APP_RESET = 5,
    VAL_UTK_REF_CMD_QUAL_UIM_SESSION_RESET = 6,
    VAL_UTK_REF_CMD_QUAL_STEERING_ROAMING = 7,
    VAL_UTK_REF_CMD_QUAL_STEERING_ROAMING_FOR_I_WLAN = 8
    
}ValUtkRefreshCmdQualT;

typedef enum
{
    UTK_PROACTIVE_COMMAND_TAG = 0xD0,
    UTK_CDMA_SMSPP_DOWNLOAD_TAG = 0xD1,
    UTK_MENU_SELECTION_TAG = 0xD3,
    UTK_CALL_CONTROL_TAG = 0xD4,
    UTK_EVENT_DOWNLOAD_TAG = 0xD6,
    UTK_TIMER_EXPIR_TAG = 0xD7
}UtkBerTlvT;

/*----------------------------------------------------------------------------
     Device  Identities
----------------------------------------------------------------------------*/
typedef enum
{
    UTK_KEYPAD = 0x01,
    UTK_DISPLAY = 0x02,
    UTK_EARPIECE = 0x03,
    UTK_RUIM = 0x81,
    UTK_TERMINAL = 0x82,
    UTK_NETWORK = 0x83
}UtkDeviceT;

typedef enum
{
    UIM_MF = 0,
    UIM_DF_CDMA,
    UIM_DF_TELECOM,
    UIM_DF_GSM,
    UIM_DF_PHS,
    UIM_DF_CURRENTDF,
    UIM_DF_CSIM = 7,
    UIM_DF_USIM,
    UIM_DF_ISIM,
/*child DF*/
    UIM_DF_GLOBALPHB, /*,global phb,7f10/0x5F3A*/
    UIM_DF_CSIMPHB,/*app phb ,CSIM/0x5F3A*/
    UIM_DF_USIMPHB,/*app phb ,USIM/0x5F3A*/
    UIM_DF_GSM_ACCESS, /*0x5F3B*/
    UIM_DF_MAX_NUM
} UimDFIndexT;


/* UIM APP ID is used to diffirentiate each APP. Either CSIM or RUIM is active for MD3 */
typedef enum
{
    CARD_APP_ID_ISIM,
    CARD_APP_ID_USIM,
    CARD_APP_ID_CSIM,   
    CARD_APP_ID_SIM,
    CARD_APP_ID_RUIM,
    CARD_APP_ID_MAX_NUM,    
    CARD_APP_INVALID = 0xff
} UimCardAppIdT;

/*------------------------------------------------------------------------
* Define UIM message interface constants and structures
*------------------------------------------------------------------------*/
#define UIM_MAX_NAI_NUM     16 

typedef enum
{
    UIM_BOOT_UP_NORMAL = 0,
    UIM_BOOT_UP_EXCEPTION,
    UIM_BOOT_UP_NUM
} UimBootUpModeE;

typedef enum
{
    /* 3f00 */
    C2K_EF_ICCID_IDX,
    C2K_EF_PL_IDX,   
    C2K_EF_DIR_IDX,

    /* 7F20 for gsm file */ 
    C2K_EF_GSM_IMSI_IDX,
    C2K_EF_GSM_ECC_IDX,

    /* 7F10 for TELECOM file */
    C2K_T_EF_ADN_IDX,
    C2K_T_EF_FDN_IDX,
    C2K_T_EF_CCP_IDX,
    C2K_T_EF_ECCP_IDX,
    C2K_T_EF_MSISDN_IDX,
    C2K_T_EF_SMSP_IDX,
    C2K_T_EF_SMSS_IDX,
    C2K_T_EF_LND_IDX,
    C2K_T_EF_SMSR_IDX,
    C2K_T_EF_SDN_IDX,
    C2K_T_EF_EXT_1_IDX,
    C2K_T_EF_EXT_2_IDX,
    C2K_T_EF_EXT_3_IDX,
    C2K_T_EF_BDN_IDX,
    C2K_T_EF_EXT_4_IDX,
    C2K_T_EF_PSC_IDX,
    C2K_T_EF_CC_IDX,
    C2K_T_EF_PUID_IDX,
    C2K_T_EF_PBR_IDX,

    /* 7F25 for uim file */  
    C2K_U_EF_ECC_IDX,
    C2K_U_EF_SPN_IDX,
    C2K_U_EF_EPRL_IDX,
    C2K_U_EF_PRL_IDX,
    C2K_U_EF_OTA_IDX,
    C2K_U_EF_MECRP_IDX,

    C2K_U_EF_AD_IDX,
    C2K_U_EF_UIM_ID_IDX,
    C2K_U_EF_COUNT_IDX,
    C2K_U_EF_IMSI_M_IDX,
    C2K_U_EF_IMSI_T_IDX,
    C2K_U_EF_CDMA_HOME_IDX,
    C2K_U_EF_ACCOLC_IDX,
    C2K_U_EF_TERM_IDX,
    C2K_U_EF_SSCI_IDX,
    C2K_U_EF_OTAPASPC_IDX,
    C2K_U_EF_NAMLOCK_IDX,
    C2K_U_EF_MDN_IDX,
    C2K_U_EF_CST_IDX,
    C2K_U_EF_USGIND_IDX,
    C2K_U_EF_SFEUIMID_IDX,
    C2K_U_EF_SPCS_IDX, 
    C2K_U_EF_MEID_IDX,

    C2K_U_EF_TMSI_IDX,
    C2K_U_EF_ZNREGI_IDX,
    C2K_U_EF_SNREGI_IDX,
    C2K_U_EF_DISREGI_IDX,
    C2K_U_EF_SP_IDX,
    C2K_U_EF_REVISION_IDX,
    C2K_U_EF_RUIM_PL_IDX,
    C2K_U_EF_SMS_IDX,
    C2K_U_EF_SMSP_IDX,
    C2K_U_EF_SMSS_IDX,
    C2K_U_EF_SSFC_IDX,
    C2K_U_EF_MAXPRL_IDX,
    C2K_U_EF_ME3GPDOPC_IDX,
    C2K_U_EF_3GPDOPM_IDX,
    C2K_U_EF_SIPCAP_IDX,
    C2K_U_EF_MIPCAP_IDX,
    C2K_U_EF_SIPUPP_IDX,
    C2K_U_EF_MIPUPP_IDX,
    C2K_U_EF_SIPSP_IDX,
    C2K_U_EF_MIPSP_IDX,
    C2K_U_EF_SIPPAPSS_IDX,
    C2K_U_EF_PUZL_IDX,
    C2K_U_EF_MAXPUZL_IDX,
    C2K_U_EF_HRPDCAP_IDX,
    C2K_U_EF_HRPDUPP_IDX,
    C2K_U_EF_CSSPR_IDX,
    C2K_U_EF_ATC_IDX,
    C2K_U_EF_BCSMSCFG_IDX,
    C2K_U_EF_BCSMSPREF_IDX,
    C2K_U_EF_BCSMSTABLE_IDX,
    C2K_U_EF_BCSMSP_IDX,
    C2K_U_EF_DCK_IDX,
    C2K_U_EF_GID_1_IDX,
    C2K_U_EF_GID_2_IDX,
    C2K_U_EF_CDMACNL_IDX,
    C2K_U_EF_HOMETAG_IDX,
    C2K_U_EF_GROUPTAG_IDX,
    C2K_U_EF_MODEL_IDX,
    C2K_U_EF_SMSCAP_IDX,
    C2K_U_EF_IPV6CAP_IDX,
    C2K_U_EF_MIPFLAGS_IDX,
    C2K_U_EF_TCPCFG_IDX,
    C2K_U_EF_DATAGENCFG_IDX,
    C2K_U_EF_3GPDUPPEXT_IDX,  

    /* 7FFF for csim file */
    C2K_C_EF_ECC_IDX,
    C2K_C_EF_SPN_IDX,
    C2K_C_EF_EPRL_IDX,
    C2K_C_EF_PRL_IDX, 
    C2K_C_EF_OTA_IDX,
    C2K_C_EF_MECRP_IDX,

    C2K_C_EF_AD_IDX,
    C2K_C_EF_UIM_ID_IDX,
    C2K_C_EF_COUNT_IDX,
    C2K_C_EF_IMSI_M_IDX,
    C2K_C_EF_IMSI_T_IDX,
    C2K_C_EF_CDMA_HOME_IDX,
    C2K_C_EF_ACCOLC_IDX,
    C2K_C_EF_TERM_IDX,
    C2K_C_EF_SSCI_IDX,
    C2K_C_EF_OTAPASPC_IDX,
    C2K_C_EF_NAMLOCK_IDX,
    C2K_C_EF_MDN_IDX,
    C2K_C_EF_CST_IDX,
    C2K_C_EF_USGIND_IDX,
    C2K_C_EF_SFEUIMID_IDX,
    C2K_C_EF_SPCS_IDX,  
    C2K_C_EF_EST_IDX,
    C2K_C_EF_MEID_IDX,

    C2K_C_EF_TMSI_IDX,
    C2K_C_EF_ZNREGI_IDX,
    C2K_C_EF_SNREGI_IDX,
    C2K_C_EF_DISREGI_IDX,
    C2K_C_EF_SP_IDX,
    C2K_C_EF_LI_IDX,
    C2K_C_EF_FDN_IDX,
    C2K_C_EF_SMS_IDX,
    C2K_C_EF_SMSP_IDX,
    C2K_C_EF_SMSS_IDX,
    C2K_C_EF_SSFC_IDX,
    C2K_C_EF_MAXPRL_IDX,
    C2K_C_EF_ME3GPDOPC_IDX,
    C2K_C_EF_3GPDOPM_IDX,
    C2K_C_EF_SIPCAP_IDX,
    C2K_C_EF_MIPCAP_IDX,
    C2K_C_EF_SIPUPP_IDX,
    C2K_C_EF_MIPUPP_IDX,
    C2K_C_EF_SIPSP_IDX,
    C2K_C_EF_MIPSP_IDX,
    C2K_C_EF_SIPPAPSS_IDX,
    C2K_C_EF_PUZL_IDX,
    C2K_C_EF_MAXPUZL_IDX,
    C2K_C_EF_HRPDCAP_IDX,
    C2K_C_EF_HRPDUPP_IDX,
    C2K_C_EF_CSSPR_IDX,
    C2K_C_EF_ATC_IDX,
    C2K_C_EF_BCSMSCFG_IDX,
    C2K_C_EF_BCSMSPREF_IDX,
    C2K_C_EF_BCSMSTABLE_IDX,
    C2K_C_EF_BCSMSP_IDX,
    C2K_C_EF_DCK_IDX,
    C2K_C_EF_GID_1_IDX,
    C2K_C_EF_GID_2_IDX,
    C2K_C_EF_CDMACNL_IDX,
    C2K_C_EF_HOMETAG_IDX,
    C2K_C_EF_GROUPTAG_IDX,
    C2K_C_EF_SDN_IDX,
    C2K_C_EF_EXT_2_IDX,
    C2K_C_EF_EXT_3_IDX,
    C2K_C_EF_ICI_IDX,
    C2K_C_EF_OCI_IDX,
    C2K_C_EF_EXT_5_IDX,
    C2K_C_EF_CCP_2_IDX,
    C2K_C_EF_MODEL_IDX,
    C2K_C_EF_SMSCAP_IDX,
    C2K_C_EF_MIPFLAGS_IDX,
    C2K_C_EF_3GPDUPPEXT_IDX,
    C2K_C_EF_IPV6CAP_IDX,
    C2K_C_EF_TCPCFG_IDX,
    C2K_C_EF_DATAGENCFG_IDX,
    C2K_C_EF_PSC_IDX,
    C2K_C_EF_CC_IDX,
    C2K_C_EF_PUID_IDX,
    C2K_C_EF_PBR_IDX,
    C2K_EF_MAX_NUM
}cuim_file_idx_enum;

typedef enum
{
    C2K_C_EF_AD_SFI_ID = 1,
    C2K_C_EF_CST_SFI_ID,
    C2K_C_EF_ACCOLC_SFI_ID,
    C2K_C_EF_IMSI_M_SFI_ID,
    C2K_C_EF_IMSI_T_SFI_ID,
    C2K_C_EF_TMSI_SFI_ID,
    C2K_C_EF_PRL_SFI_ID,
    C2K_C_EF_SPN_SFI_ID,
    C2K_C_EF_ECC_SFI_ID,
    C2K_C_EF_LI_SFI_ID,
    C2K_C_EF_3GCIK_SFI_ID,
    C2K_C_EF_CDMA_HOME_SFI_ID,
    C2K_C_EF_SNREGI_SFI_ID,
    C2K_C_EF_EPRL_SFI_ID,
    C2K_C_EF_EST_SFI_ID,
    C2K_C_EF_ICI_SFI_ID,
    C2K_C_EF_OCI_SFI_ID,
    C2K_C_EF_CCP2_SFI_ID
}cuim_file_sfi_id_enum;

typedef struct
{
    kal_uint8 EccNum[UIM_ECC_NUMBER_BCD_LEN];/* ecc number value, encode with BCD format according to C.S0065 */
}UimEccContactT;

typedef struct
{
  kal_uint8           file_num;
  cuim_file_idx_enum  file_list[C2K_UTK_FILE_NUM_MAX];
  kal_bool            phb_file_existed;
}uimFileListStruct;

typedef enum
{
    UIM_UTK_FULL_FILE_CHANGED,
    UIM_UTK_INIT_WITH_FILE_CHANGED,
    UIM_UTK_FILE_CHANGED_ONLY
}uimUtkFileChangeTypeT;

typedef struct
{
  uimUtkFileChangeTypeT         file_change;
  kal_uint8         file_num;
  kal_uint16        file_id[C2K_UTK_FILE_NUM_MAX];
}uimUtkFileChangedIndMsgT;

typedef struct
{
    kal_bool call_connected;
}uimCallStatusMsgT;

typedef struct
{
    kal_bool  ims_registered;
}uimImsRegisterStatusMsgT;

/* Define UIM Rsp MSG information which will be used for UIM Response message */
typedef struct 
{
    module_type    DestModId;  
    kal_uint32         MsgId;        
    kal_uint8          ChanId;
} UimRspInfoT;

/* Define UIM msg header format */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
} UimMsgHeaderT;

/* Define UIM msg response for UIM_CMD_MSG_CLASS format */
typedef  struct 
{
    kal_uint32          MsgId; 
	module_type         DestModId;
    kal_uint8           ChanId;
	kal_bool            is_cdma_only_card;/* used only for UTK proactive command */
    kal_uint8           uim_index; /* used only for UTK proactive command */
    kal_uint16          Sw; /* status word, 0x9000 denotes ACK, 0x0000 denotes FAULT, other value see GSM11.11 */
    kal_uint16          Len;
    kal_uint8           Data[CUIM_APDU_RSP_MAX_LEN];
} UimRspMsgT;

/* Define UIM raw cmd msg command */
typedef struct 
{
    kal_uint16      Sw; /* status word, 0x9000 denotes ACK, 0x0000 denotes FAULT, other value see GSM11.11 */
    kal_uint8       CaveSeqId;
    kal_uint16      CaveMsgId;
    kal_uint16      Len;
    kal_uint8       Data[CUIM_APDU_RSP_MAX_LEN];
} UimRspToPsMsgT;

/* Define UIM raw cmd msg command */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Cmd[5];
    kal_uint16      Len;
    kal_uint8       Data[CUIM_APDU_REQ_BODY_MAX_LEN];
} UimRawCmdMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint16      Len;
    kal_uint8*      Data;
} UimExtendedRawCmdMsgT;

/* Define UIM select msg command */
typedef struct 
{
   UimRspInfoT      UimRspInfo;
   kal_bool             IsFullPath;  //Whether full path from MF
   kal_uint16           EfId;        //Used when IsFullPath = False
   UimDFIndexT      DfIndex;     //Used when IsFullPath = False
   kal_uint8            FullPathLen; //Used when IsFullPath = True
   kal_uint8            FullPath[8]; //Used when IsFullPath = True
} UimSelectMsgT;
/* Define UIM status msg command */
typedef struct 
{
   UimRspInfoT      UimRspInfo;
} UimStatusMsgT;

/* Define UIM read record msg command */
typedef struct 
{
   UimRspInfoT      UimRspInfo;
   kal_bool             IsFullPath;  //Whether full path from MF
   kal_uint16           EfId;        //Used when IsFullPath = False
   UimDFIndexT      DfIndex;     //Used when IsFullPath = False
   kal_uint8            FullPathLen; //Used when IsFullPath = True
   kal_uint8            FullPath[8]; //Used when IsFullPath = True
   kal_uint8            RecordIndex;
} UimReadRecordMsgT;

/* Define UIM update record msg command */
typedef struct 
{
   UimRspInfoT      UimRspInfo;
   kal_bool         IsFullPath;  //Whether full path from MF
   kal_uint16       EfId;        //Used when IsFullPath = False
   UimDFIndexT      DfIndex;     //Used when IsFullPath = False
   kal_uint8        FullPathLen; //Used when IsFullPath = True
   kal_uint8        FullPath[8]; //Used when IsFullPath = True
   kal_uint8        RecordIndex;
   kal_uint8        Len;
   kal_uint8        Data[CUIM_APDU_REQ_BODY_MAX_LEN];
} UimUpdateRecordMsgT;

/* Define UIM read binary msg command */
typedef struct 
{
   UimRspInfoT      UimRspInfo;
   kal_bool             IsFullPath;  //Whether full path from MF
   kal_uint16           EfId;        //Used when IsFullPath = False
   UimDFIndexT      DfIndex;     //Used when IsFullPath = False
   kal_uint8            FullPathLen; //Used when IsFullPath = True
   kal_uint8            FullPath[8]; //Used when IsFullPath = True
   kal_uint16           Offset;
   kal_uint8            Len;
} UimReadBinaryMsgT;

/* Define UIM update binary msg command */
typedef struct 
{
   UimRspInfoT      UimRspInfo;
   kal_bool             IsFullPath;  //Whether full path from MF
   kal_uint16           EfId;        //Used when IsFullPath = False
   UimDFIndexT      DfIndex;     //Used when IsFullPath = False
   kal_uint8            FullPathLen; //Used when IsFullPath = True
   kal_uint8            FullPath[8]; //Used when IsFullPath = True
   kal_uint16           Offset;
   kal_uint8            Len;
   kal_uint8            Data[CUIM_APDU_REQ_BODY_MAX_LEN];
} UimUpdateBinaryMsgT;

/************************************
  CHV command message definition 
  ************************************/
/* verify CHV msg */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8           ChvId;        /* Specify the CHV */
    kal_uint8           ChvLen;
    kal_uint8           ChvVal[8];    /* CHV value */
} UimVerifyCHVMsgT;

/* change CHV  msg */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8           ChvId;        /* Specify the CHV */
    kal_uint8           OldChvLen;
    kal_uint8           OldChvVal[8];    /* Old CHV value */
    kal_uint8           NewChvLen;
    kal_uint8           NewChvVal[8];    /* New CHV value */
} UimChangeCHVMsgT;

/*    Disable CHV Msg */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8           ChvLen;
    kal_uint8           Chv1Val[8];    /* CHV1 value */
} UimDisableCHVMsgT;

/*    Enable CHV Msg*/
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8           ChvLen;
    kal_uint8           Chv1Val[8];     /* CHV1 value */
} UimEnableCHVMsgT;

/* Unblock CHV Msg */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8           ChvId;          /* Specify the CHV */
    kal_uint8           UblkChvLen;
    kal_uint8           UblkChvVal[8];  /* Unblock CHV value */
    kal_uint8           NewChvLen;
    kal_uint8           NewChvVal[8];   /* New CHV value */
} UimUnblockCHVMsgT;

/***********************************************
                UTK  Commands 
************************************************/
/* UIM Terminal Profile command */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Profile[TERM_PROFILE_LEN]; /* The list of UIM Application Toolkit 
    facilities that are supported by the ME */
} UimTermProfileMsgT;

/* Define UIM Terminal Response  command */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8        Len;  /* Length of response data */
    kal_uint8        Data[CUIM_APDU_REQ_BODY_MAX_LEN]; /* Response data */
} UimTermRspMsgT;

/* Define UIM Envelope command */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Len;    /* Length of envelope data */
    kal_uint8       Data[CUIM_APDU_REQ_BODY_MAX_LEN];/* Envelope data */
} UimEnvelopeMsgT;
/***********************************************
        based OTASP\OPAPA Commands 
  ***********************************************/
typedef enum
{
    BCMCS_TYPE_RETRIEVE_SK = 0x00,
    BCMCS_TYPE_UPDATE_BAK,
    BCMCS_TYPE_DELETE_BAK,
    BCMCS_TYPE_RETRIEVE_SRTP_SK,
    BCMCS_TYPE_GEN_AUTH_SIGNATURE,
    BCMCS_TYPE_BCMCS_AUTH,
    BCMCS_TYPE_INVALID = 0xFF
} BcmcsTypeT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       RANDSeed[20];  
    kal_uint8       A_KEY_P_REV;
    kal_uint8       PLen;
    kal_uint8       GLen;
    kal_uint8       PARAM_P[UIM_PARAM_P_LEN];
    kal_uint8       PARAM_G[UIM_PARAM_G_LEN];    
} UimMSKeyMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Len;   
    kal_uint8       Result[UIM_MAX_BS_RESULT_LEN];
} UimKeyGenMsgT;

typedef struct 
{
    UimRspInfoT  UimRspInfo;
} UimCommitMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Block;   
    kal_uint8       Len;
    kal_uint8       Data[UIM_MAX_PARAM_SIZE];
} UimValidateMsgT;

typedef struct 
{
    UimRspInfoT  UimRspInfo;
    kal_uint8        Block;   
} UimConfigurationMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Block;   
    kal_uint8       Len;
    kal_uint8       Data[UIM_MAX_PARAM_SIZE];
} UimDownloadMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Block;   
    kal_uint16      ReqOffset;
    kal_uint8       ReqMax;
} UimSSPRConfigurationMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Block;   
    kal_uint8       Len;
    kal_uint8       Data[UIM_MAX_OTA_DATA_BURST_SIZE];
} UimSSPRDownloadMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Block;
} Uim3gpdConfigurationRequestMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Block;
    kal_uint8       Len;
    kal_uint8       Data[UIM_MAX_OTA_DATA_BURST_SIZE];
} Uim3gpdDownloadRequestMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       StartStop;
    kal_uint32      RANDSeed;
    kal_uint8       Esn[7];
} UimOTAPAMsgT;

/***********************************************
        ANSI-41-based Security-Related Commands 
  ***********************************************/
/* Base station challenge  msg command */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint32          RandSeed;    /* A random number generated by ME  */
    kal_uint8           RandSSD[7];  /* A random number generated by BS, received
                                    in Update SSD message */
    kal_uint8           ProcessCtrl; /* Process control */
    kal_uint32          Esn;         /* Electronic Serial Number */
} UimBSChallengeMsgT;

/* confirm SSD msg command */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint32          AuthBS;      /* Value of AUTHBS received in Base Station 
                                    Challenge Confirmation Order */
} UimConfirmSSDMsgT;

/* Run Cave msg command */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8           RandType;    /* Type of RandVal */
    kal_uint32          RandVal;     /* A random number generated by BS ,
                                    Global random challenge or Unique random challenge */
    kal_uint8           DigLen;      /* Length of digit */ 
    kal_uint8           Digit[3];    /* A subset of (coded) dialed digits*/
    kal_uint8           ProcessCtrl; /* Process control */
    kal_uint32          Esn;         /* Electronic Serial Number */
    kal_uint8           CaveSeqId;
    kal_uint16          CaveMsgId;
} UimRunCaveMsgT;

/* Generate Key/VPM msg command */
typedef struct 
{
    kal_uint8          VPMFirst;    /* First octet of VPM to be output */
    kal_uint8          VPMLast;     /* Last octet of VPM to be output */
    kal_uint8*         KeyDataP;    /* the pointer to key buffer */
    kal_uint8*         VPMDataP;    /* the pointer to vpm buffer */
} UimGenerateKeyVPMMsgT;

/* Store ESN_ME */
typedef struct
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Len;     
    kal_uint8       Esn[7];
    kal_bool       UsageInd;
} UimStoreEsnMeMsgT;

/*******************Related NAM data message************************/
/* Get Nam data from UIM card */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
} UimGetNamDataMsgT;

/* Define Cst and EST sevice list index */
typedef enum
{
    CHV_DISABLE_INDEX = 0, /*CHV disable function*/
    ADN_INDEX,      /*Abbreviated Dialing Numbers*/
    FDN_INDEX,      /*Fixed Dialing Numbers*/ 
    SDN_INDEX,      /*Service Dialing Numbers (SDN)*/
    SMS_INDEX,      /*Short Message Storage (SMS)*/
    SMP_INDEX,      /*Short Message Storage parameters*/
    HRPD_INDEX,     /*HRPD*/
    SMSBROADCAST_INDEX,/*Data Download via SMS Broadcast*/
    SMSPP_INDEX,         /*Data Download via SMS-PP*/
    EUIMID_INDEX,   /*SF_EUIMID-based EUIMID*/
    MEID_INDEX,     /*MEID, only used in RUIM*/
    CALL_CONTROL_INDEX,      /*Call Control*/
    SIP_INDEX,      /*3GPD-SIP*/
    MIP_INDEX,      /*3GPD-MIP*/
    AKA_INDEX,      /*AKA*/
    OCI_INDEX,      /*Outgoing Call Information (OCI)*/
    ICI_INDEX,      /*Incoming Call Information (ICI)*/
    EST_INDEX,      /*Enabled Services Table*/
    OMH_INDEX,
    IPV6_INDEX,     /* IPv6 */
    MESSAGE_3GPD_EXT_INDEX, /* message and 3GPD extensions */
    EXT2_INDEX,
    GID1_INDEX,
    GID2_INDEX,    
    ECST_MAX_NUM
}UimECstIndexT;

/* NAM structure in UIM */
typedef struct
{
    kal_uint8           COUNTsp;                    /* Call Count */
    kal_bool            IMSI_M_Valid;    /* IMSI_M    */
    IMSIType            IMSI_Mp;       
    kal_bool            IMSI_T_Valid;    /* IMSI_T    */
    IMSIType            IMSI_Tp;      
    kal_uint8           ASSIGNING_TMSI_ZONE_LENsp;    /* TMSI */
    kal_uint8           ASSIGNING_TMSI_ZONEsp[ CP_MAX_TMSI_ZONE_LEN ];
    kal_uint32          TMSI_CODEsp;    
    kal_uint32          TMSI_EXP_TIMEsp; 
    kal_uint16          HOME_SIDp;            /* Analog Home SID */
    kal_uint8           EXp;                            /* Analog Operational Parameters */
    kal_uint32          NXTREGsp;            /* Analog Location and Registration Indicators */
    kal_uint16          SIDsp;
    kal_uint16          LOCAIDsp;
    kal_bool            PUREGsp;
    kal_uint16          SIDp[MAX_POSITIVE_SIDS]; /* CDMA Home SID, NID */
    kal_uint16          NIDp[MAX_POSITIVE_SIDS];
    kal_uint8           NUM_POSITIVE_SID_NIDp;
    ZoneList            ZONE_LISTsp;            /* CDMA Zone-Based Registration Indicators */
    SidNidList          SID_NID_LISTsp;        /* CDMA System/Network Registration Indicators */
    kal_int32           BASE_LAT_REGsp;     /* CDMA Distance-Based Registration Indicators */
    kal_int32           BASE_LONG_REGsp;
    kal_uint16          REG_DIST_REGsp; 
    kal_uint8           ACCOLCp;                     /* access overload class */
    kal_uint8           MOB_TERM_HOMEp;/* Call Termination Mode Preferences */  
    kal_uint8           MOB_TERM_SIDp;   
    kal_uint8           MOB_TERM_NIDp;     
    kal_uint8           SLOT_CYCLE_INDEXp;/* Suggested Slot Cycle Index */
    kal_uint16          FIRSTCHPp;                /* Analog Channel Preferences */
    kal_uint16          FCCA; 
    kal_uint16          FCCB;
    kal_uint8           NUM_FCC_SCAN;
    kal_bool            ALLOW_OTAPA;    /* OTAPA/SPC_Enable */
    kal_bool            NAM_LOCKp;            /* NAM_LOCK */
    kal_uint8           MDN_NUM_DIGITS;    /* EF Mobile Directory Number */
    kal_uint8           Mdn[16];     
    kal_uint32          UimId;    /* UIMID */
    kal_uint8           ECST[ECST_MAX_NUM]; /*bit 0: allocated or not,bit 1: service activated or not*/
    kal_bool            SF_EUIMID_UsageInd;
    kal_uint8           SF_EUIMID[C2K_EF_SF_EUIMID_SIZE];
    kal_bool            UIM_ID_UsageInd;
    kal_uint8           PREF_SERV_BAND0p;/* Service Preferences */
    kal_uint8           SPC_Status;
}  UimNamT;

/* Response data structure of MSG_ID_UIM_GET_NAM_DATA_MSG */
typedef struct 
{
    UimNamT     UimNam;    /* Nam data in UIM */ 
} UimGetNamDataRspMsgT;

/* Request the update of NAM */
typedef struct
{
    UimRspInfoT     UimRspInfo;
    UimNamT         UimNam;
} UimUpdateNamDataMsgT;

/* Response of the update of NAM */
typedef struct
{
    kal_bool    Ack;
} UimUpdateNamDataRspMsgT;

typedef struct 
{
    kal_uint16          Sw; /* status word, 0x9000 denotes ACK, 0x0000 denotes FAULT, other value see GSM11.11 */
    kal_uint16          Len;
    kal_uint8           CST[ECST_MAX_NUM]; /* Refer to UimECstIndexT for each Service Option */
    kal_bool            IsCardReady; 
    kal_uint16          IsCSIMCard;        /* 0 for UIM, 1 for CSIM */
} UimGetCstRspMsgT;

/*****************************************************************************
 * Phonebook
 ****************************************************************************/
typedef enum              
{
    PHB_STOR_LND = 0x6f44, /*EFLND (Last number dialled)*/
    PHB_STOR_ADN = 0x6f3a, /*EFADN (Abbreviated dialling numbers)*/
    PHB_STOR_FDN = 0x6f3b, /*EFFDN (Fixed dialling numbers)*/
    PHB_STOR_SDN = 0x6f49, /*EFSDN (Service Dialling Numbers)*/
    PHB_STORE_EXT2 = 0x6f7a,
    PHB_STORE_EXT2_UIM = 0x6f4b,
    PHB_STOR_FILE_COUNT  
} UimPhbStorFileT;  /* phonebook storage */

typedef enum              /* phonebook storage */
{
    PHB_GLOBAL = 0, /*global phb*/
    PHB_CSIM = 1, /*Csim phb*/
    PHB_USIM = 2, /*Usim phb*/
    PHB_ISIM = 3, /*Isim phb*/
    PHB_MAX_LEVEL
} UimPhbLevelT;

/* Request phone book records Params*/
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    UimPhbStorFileT FileType;
    UimPhbLevelT    PhbLevel; 
} UimGetPhbRecParamsMsgT;

/* Response data structure of MSG_ID_UIM_GET_PHB_REC_PARAMS_MSG */
typedef struct 
{
    kal_bool            Ack;
    UimPhbStorFileT     FileType;
    kal_uint16          PhbRecCount;
    kal_uint8           PhbPerRecSize;
#ifdef MTK_CBP
    kal_bool            FdnEnabled;
    kal_uint8           FdnRecCount;
    kal_uint8           FdnRecSize;
#endif
} UimGetPhbRecParamsRspMsgT;

/* Request a record of phone book */
typedef struct 
{
    UimRspInfoT         UimRspInfo;
    UimPhbStorFileT     FileType;
    kal_uint8           RecordIndex;        
    UimPhbLevelT        PhbLevel; 
} UimGetPhoneRecMsgT;

/*Response data structure of MSG_ID_UIM_GET_PHB_REC_MSG */
typedef struct 
{
    kal_bool            Ack;
    UimPhbStorFileT FileType;
    kal_bool            IsFree; 
    kal_uint8           RecordIndex;
    kal_uint8           AlphaIdentifier[MAXALPHALENGTH];
    kal_uint8           PhoneNumber[MAX_NUMBER_BCD_LEN];
    kal_uint8           TON;
    kal_uint8           NPI;
} UimGetPhoneRecRspMsgT;


  /* Request the update of a record of phone book */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    UimPhbStorFileT FileType;
    kal_uint8           RecordIndex;
    kal_uint8           AlphaIdentifier[MAXALPHALENGTH];
    kal_uint8           PhoneNumber[MAX_NUMBER_BCD_LEN];
    kal_uint8           TON;
    kal_uint8           NPI;
    UimPhbLevelT    PhbLevel; 
} UimUpdatePhoneRecMsgT;


/* Response data of MSG_ID_UIM_UPDATE_PHB_REC_MSG */
typedef struct 
{
    kal_bool            Ack;
    UimPhbStorFileT FileType;
    kal_uint8           RecordIndex;
} UimUpdatePhoneRecRspMsgT;

/*Request to erase  a record of phone book */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    UimPhbStorFileT FileType;
    kal_uint8           RecordIndex;        
    UimPhbLevelT    PhbLevel;
} UimErasePhoneRecMsgT;

/* Response data of MSG_ID_UIM_ERASE_PHB_REC_MSG */
typedef struct 
{
    kal_bool            Ack;
    UimPhbStorFileT FileType;
    kal_uint8           RecordIndex;
} UimErasePhoneRecRspMsgT;


/* Request SMS(EFSMS) records sum*/
typedef struct 
{
    UimRspInfoT     UimRspInfo;
} UimGetSmsRecParamsMsgT;

/* Response data structure of UIM_GET_SMS_REC_ PARAMS _MSG */
typedef struct 
{
    kal_bool        Ack;
    kal_uint8       SmsRecCount;
    kal_uint8       SmsPerRecSize;
    kal_uint8       SmsNullRecLen;
    kal_uint8       SmsNullRec[CUIM_APDU_RSP_MAX_LEN]; /*pointer to record status*/
} UimGetSmsRecParamsRspMsgT;

/* Request a record of SMS */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       RecordIndex;
} UimGetSmsRecMsgT;

/*Response data structure of MSG_ID_UIM_GET_SMS_REC_MSG*/
typedef struct 
{
    kal_bool            Ack;
    kal_uint8           RecordIndex;
    kal_uint8           Status;
    kal_uint8           MsgLen;
    kal_uint8           MsgData[CUIM_APDU_RSP_MAX_LEN];     
} UimGetSmsRecRspMsgT;

 /* Request the update of SMS record */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       RecordIndex;
    kal_uint8       Status;
    kal_uint8       MsgLen;
    kal_uint8       MsgData[CUIM_APDU_REQ_BODY_MAX_LEN];    
} UimUpdateSmsRecMsgT;

 /* Response data of MSG_ID_UIM_UPDATE_SMS_REC_MSG*/
typedef struct 
{
    kal_bool            Ack;
    kal_uint8           RecordIndex;
} UimUpdateSmsRecRspMsgT;

 /* Request Erase SMS record */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8           RecordIndex;
} UimEraseSmsRecMsgT;

 /* Response data of MSG_ID_UIM_ERASE_SMS_REC_MSG*/
typedef struct 
{
    kal_bool            Ack;
    kal_uint8           RecordIndex;
} UimEraseSmsRecRspMsgT;

#ifdef MTK_CBP
/* Request the capability of SMS */
typedef struct 
{
    UimRspInfoT     UimRspInfo;
} UimGetSmsCapMsgT;

/*Response data structure of MSG_ID_UIM_GET_SMS_CAP_MSG */
typedef struct 
{
    kal_uint8           RetryPeriod;
    kal_uint8           RetryInterval;
    kal_uint8           Flags;
    kal_uint8           PrefSO;
} UimGetSmsCapRspMsgT;
#endif

/***************End of APP API about PhoneBook and SMS***************/

#ifdef MTK_DEV_C2K_IRAT
/*****************************************
    define the types for UIM Bluetooth SAP
******************************************/
typedef enum
{
    BTSAP_PRO_TYPE_0 = 0x00, /*Transport protocol type T=0*/
    BTSAP_PRO_TYPE_1 = 0x01, /*Transport protocol type T=1*/
    BTSAP_PRO_TYPE_0_1 = 0x02, /*Transport protocol type T=0 and T=1*/
    BTSAP_PRO_TYPE_INVALID = 0xFF, /* Invalid transport protocol type*/
}BtsapProTypeT;

/******************Bluetooth SAP related msg************************/
typedef struct 
{
    UimRspInfoT     UimRspInfo;
} UimBtsapConnectMsgT,
    UimBtsapDisconnectMsgT,
    UimBtsapPowerOffMsgT;

typedef struct 
{
    kal_uint16          result;
} UimBtsapDisconnectRspMsgT,
    UimBtsapPowerOffRspMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    BtsapProTypeT   transport_protocol_type;
} UimBtsapPowerOnMsgT,
    UimBtsapResetMsgT;

typedef struct 
{
    kal_uint16          result;
    BtsapProTypeT   current_transport_protocol_type;
    kal_uint16          atr_len;
    kal_uint8           atr[40];
} UimBtsapPowerOnRspMsgT,
    UimBtsapResetRspMsgT;

typedef struct 
{
    kal_uint16          result;
    BtsapProTypeT   current_transport_protocol_type;
    BtsapProTypeT   supported_transport_protocol_type_capability;
    kal_uint16          atr_len;
    kal_uint8           atr[40];
} UimBtsapConnectRspMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    BtsapProTypeT   transport_protocol_type;
    kal_uint16          apdu_req_len;
    kal_uint8           apdu_req[APDU_REQ_MAX_LEN];
} UimBtsapTransferApduMsgT;

typedef struct 
{
    kal_uint16          result;
    kal_uint16          apdu_rsp_len;
    kal_uint8           apdu_rsp[APDU_RSP_MAX_LEN];
} UimBtsapTransferApduRspMsgT;
/***************End of bluetooth SAP related msg***************/
#endif


/*********************************
Get Uim Card status
*********************************/
#define  NO_CARD      0x00
#define  UIM_CARD     0x01
#define  SIM_CARD     0x02
#define  UIM_SIM_CARD (UIM_CARD|SIM_CARD)
#define  UICC_CARD    0x04
#define  CSIM_CARD    0x10
#define  USIM_CARD    0x20
#define  ISIM_CARD    0x40
#define  UNKNOWN_CARD 0x80

#define  SIM_SWITCH_NO_RESET      0xa0
#define  UIM_INIT_BUSY            0xb0
#define  UIM_CARD_TYPE_CHANGE     0xc0

#ifdef MTK_CBP
#define  CSIM_USIM_CARD      (UICC_CARD|CSIM_CARD|USIM_CARD)
#define  USIM_ISIM_CARD      (UICC_CARD|USIM_CARD|ISIM_CARD)
#define  CSIM_USIM_ISIM_CARD (UICC_CARD|CSIM_CARD|USIM_CARD|ISIM_CARD)
#endif
#define  CARD_NOT_READY 0x100
#define  CT_CARD        0x400
#define  CT_UIM_CARD    (CT_CARD|UIM_CARD)
#define  CT_UIM_SIM_CARD (CT_CARD|UIM_SIM_CARD)
#define  CT_UICC_CARD    (CT_CARD|UICC_CARD)
#ifdef MTK_CBP
#define  CT_CSIM_CARD           (CT_UICC_CARD|CSIM_CARD)
#define  CT_CSIM_USIM_CARD      (CT_UICC_CARD|CSIM_USIM_CARD)
#define  CT_CSIM_USIM_ISIM_CARD (CT_UICC_CARD|CSIM_USIM_ISIM_CARD)
#endif

/*Can not get card type because of PIN status(CHV1_ENABLED_NOT_VERIFIED or CHV1_BLOCKED or CHV1_DEADLOCKED). 
 Application needs check CHV status to decide next step(input PIN/input PUK/deadcard) . */
#define NEED_PIN_CARD   0x1000
#ifdef MTK_DEV_C2K_IRAT
#define MD1_PIN_NEEDED_CARD  0x2000
#define MD1_CARD_LOCKED      0x5000
#endif

#ifdef __CARRIER_RESTRICTION__
#define UML_LOCKED_CARD      0x8000
#define UML_CARD_REBOOT      0x8080
#endif

typedef kal_uint16 UimCardTypeT;
/*CardStatus is compatible with the current design,but need different process to support new card type*/
typedef kal_uint16 CardStatusT;  

typedef enum
{
    UICC_NOT_INITIALIZED = 0, /* Initial state after powerup */
    UICC_BOOTUP,      /* UICC driver is trying to establish initial link */
    UICC_READY,       /* UICC link established and nominal */
    UICC_NOT_READY,   /* UICC link never established. Could be no UICC card */
    UICC_LINK_FAILURE, /* Initialization completed but lost UICC link afterwards */
} UiccCardStatusType;

typedef enum{
    CHV1_DISABLED,
    CHV1_ENABLED_NOT_VERIFIED,/*Waiting for correct chv1 entry*/
    CHV1_ENABLED_VERIFIED, /* chv is enabled and verified */
    CHV1_BLOCKED,    /*Waiting for UNBLOCK1 entry and new PIN1 code*/
    CHV1_DEADLOCKED, /* card is deadlocked */ 
#ifdef __CARRIER_RESTRICTION__
    CHV1_DISABLED_EXT_UML, /*chv disabled and locked by uml*/
    CHV1_ENABLED_VERIFIED_EXT_UML, /*chv verified and locked by uml*/
#endif
    CHV1_STATUS_ENUM_MAX,
} ChvStatusT;

#ifdef MTK_CBP
/* Indicates whether UIC is OMH card type */
typedef enum{
    UIM_IS_NOT_OMH_CARD  = 0,
    UIM_IS_OMH_CARD      = 1,
    UIM_OMH_CARD_UNKNOWN 
} UimOmhCardTypeT;

/* Indicates whether IMSI_M is programmed in UIM*/
typedef enum{
   IMSI_M_NOT_PROGRAMMED = 0,
   IMSI_M_PROGRAMMED     = 1,
   IMSI_M_PROGRAM_STATE_UNKNOWN, 
} UimImsiMProgramStateT;

#ifdef __CARRIER_RESTRICTION__
typedef struct
{
  kal_uint8 len_of_gid1;
  kal_uint8 gid1[MAX_NUM_OF_GID];
  kal_uint8 len_of_gid2;
  kal_uint8 gid2[MAX_NUM_OF_GID];  
}uim_gid_struct;
#endif

/* Define IMSI_M state ind message Struct */
typedef struct 
{
    UimImsiMProgramStateT  UimImsiMProgramState;
} UimImsimProgramStateIndMsgT;
#endif

typedef struct 
{   
    kal_uint8  atChannel;
    kal_uint8  sim_index;
} ValAtCmdInfoT;
/* Request uim card status */
typedef struct 
{
   UimRspInfoT      UimRspInfo;
   ValAtCmdInfoT    atInfo;
} UimCardStatusRecMsgT;

 /* Response to uim card status*/
typedef struct 
{
   CardStatusT  CardStatus;
   ChvStatusT   ChvStatus;
#ifdef MTK_DEV_C2K_IRAT
   kal_bool     UsimAppExisted;
   kal_bool     RemoteSimSwtichStart;/* dynamic remote sim switch happen or not */
#endif
   kal_uint8    Pin1Count;
   kal_uint8    Pin2Count;
   kal_uint8    Puk1Count;
   kal_uint8    Puk2Count;
   ValAtCmdInfoT    atInfo;
#ifdef __CARRIER_RESTRICTION__
   kal_uint8    SlotId;
#endif
} UimCardStatusRspMsgT;

/************************************
  APP CHV  message definition 
  ************************************/
typedef enum
{
    UIM_CHV_1 = 1,
    UIM_CHV_2
} UimChvIdT;

/* verify CHV msg */
typedef struct 
{
    UimRspInfoT         UimRspInfo;
    UimChvIdT           ChvId;        /* Specify the CHV */
    kal_uint8           ChvLen;
    kal_uint8           ChvVal[8];    /* CHV value */
#ifdef MTK_DEV_C2K_IRAT
    kal_bool            LocalPin;     /* Whether use local PIN from NV */
#endif
    ValAtCmdInfoT       atInfo;
} UimAppVerifyCHVMsgT;

typedef struct 
{
    UimRspInfoT         UimRspInfo;
    UimChvIdT           ChvId;        /* Specify the CHV */
    kal_uint8           OldChvLen;
    kal_uint8           OldChvVal[8];    /* Old CHV value */
    kal_uint8           NewChvLen;
    kal_uint8           NewChvVal[8];    /* New CHV value */
    ValAtCmdInfoT       atInfo;
} UimAppChangeCHVMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Chv1Len;
    kal_uint8       Chv1Val[8];  /* CHV1 value */
    ValAtCmdInfoT   atInfo;
} UimAppDisableCHVMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       Chv1Len;
    kal_uint8       Chv1Val[8];  /* CHV1 value */
    ValAtCmdInfoT   atInfo;
}  UimAppEnableCHVMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    UimChvIdT       ChvId;          /* Specify the CHV */
    kal_uint8       UblkChvLen;
    kal_uint8       UblkChvVal[8];  /* Unblock CHV value */
    kal_uint8       NewChvLen;
    kal_uint8       NewChvVal[8];   /* New CHV value */
    ValAtCmdInfoT   atInfo;
} UimAppUnblockCHVMsgT;

/* Define CHV operation response result */
typedef enum
{
    UIM_CHV_SUCCESS  =0, 
    UIM_CHV_NOT_INITIALIZE,   /* no CHV initialized */
    UIM_CHV_FAILURE_AND_PERMIT_ATTEMPT, /*  unsuccessful CHV/UNBLOCK CHV verification, at least one attempt left */
    UIM_CHV_CONTRADICTION_WITH_CHV_STATUS, /* in contradiction with CHV status */
    UIM_CHV_CONTRADICTION_WITH_INVALIDATION_STATE, /* in contradiction with invalidation status */
    UIM_CHV_FAILURE_AND_NO_ATTEMPT, /*unsuccessful CHV/UNBLOCK CHV verification, no attempt left;CHV/UNBLOCK CHV blocked*/
    UIM_CHV_FAILURE_RECOVERY,       /*fast recovery during CHV process*/
    UIM_CHV_FAILURE
}UimChvResultT;

/* APP CHV operation response message */
typedef struct
{
    UimChvResultT Result;
    kal_uint16        SW;
    ValAtCmdInfoT atInfo;
    CardStatusT   CardStatus;
    ChvStatusT    ChvStatus;
    kal_uint8         Pin1Count;
    kal_uint8         Pin2Count;
    kal_uint8         Puk1Count;
    kal_uint8         Puk2Count;    
} UimAppChvRspMsgT;

/************************************
  UIM_MNG_MSG_CLASS  message definition 
 ************************************/
  
/* Register/Deregister  the notify message of UIM status changed */
typedef struct
{
    UimRspInfoT     UimRspInfo;
    kal_bool        Register;
} UimNotifyRegisterMsgT;

/* Uim notify message */
typedef struct
{
  UiccCardStatusType Status;
  kal_bool               RemoteSimSwtichStart;/* dynamic remote sim switch happen or not */
  CardStatusT        CardStatus; /* notify card status directly only when card is not ready */
  ChvStatusT         ChvStatus;
  UimNamT            namData;
  kal_bool           nam_valid;
  kal_uint8          ef_ota_len;
  kal_uint8          ef_ota_data[255]; 
  kal_uint8              pin1_count;
  kal_uint8              puk1_count;
  kal_uint8              pin2_count;
  kal_uint8              puk2_count;    
  kal_bool                    iccid_valid;
  kal_uint8                   iccid[10];   
  
  uim_access_option_enum      sim_index;
  kal_bool           is_uicc_card;
  kal_bool           is_omh_card;  
  kal_bool                    is_utk_refresh;
  kal_bool           is_fdn_enabled;
  kal_bool           is_gsm_imsi_valid;
  kal_uint8          gsm_imsi[9];
  kal_uint8          utk_refresh_qualifier;
  kal_bool           is_extended_support;
#ifdef __CARRIER_RESTRICTION__
  kal_bool           is_cdma_only_card;
  kal_bool           spn_valid;
  kal_uint8          ef_spn_data[UIM_EF_SPN_LENGTH];
  uim_gid_struct     gid_info;
  kal_uint8          sim_slot_id;
#endif
} UimNotifyMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       ChapId;
    kal_uint8       NAIEntryId;
    kal_uint8       ChallengeLen;
    kal_uint8       *pChallengeData;
} Uim3GSipChapReqMsgT;

typedef struct 
{
   UimRspInfoT       UimRspInfo;
   kal_uint8         NAIEntryId; 
   kal_uint16        RRQLen;
   kal_uint8        *pRRQData;
} Uim3GMipMNHAAuthReqMsgT;

typedef struct {
    UimRspInfoT      UimRspInfo;
    kal_uint16       PreRRQLen;
    /*including Preceding Mobile IP data ||MN AAA Extension Header(Type, Subtype, Length, SPI), can be programmed into Lc already*/
    kal_uint8       *pPreRRQData;
} Uim3GMipRRQHashReqMsgT;

typedef struct {
    UimRspInfoT     UimRspInfo;
    kal_uint8       NAIEntryId;
    kal_uint16      ChallengeLen;
    kal_uint8      *pChallengeData;
} Uim3GMipMNAAAAuthReqMsgT;

typedef struct {
    UimRspInfoT     UimRspInfo;
    kal_uint8           RandLen;
    kal_uint8*          Rand;    /*RANDA*/
    kal_uint8           AutnLen;      /* Length of AUTN (L1) */ 
    kal_uint8*         Autn;         /* AUTN*/   
} Uim3GAkaAuthReqMsgT;

typedef struct {
   UimRspInfoT UimRspInfo;
   kal_uint8       ChapId;
   kal_uint8       ChallengeLen;
   kal_uint8      *pChallengeData;
   kal_bool        bFallbackCave;
   /*Indicate the type of Username is a complete NAI or MDN, if MDN, HLP will generate NAI based on it*/
   kal_bool       *bNAI;  
   kal_uint8      *UserNameLen;
   kal_uint8      *UserName;
} UimHlpAccessChapReqMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
} Uim3GPDOPCGetMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
   kal_uint8 opMode;   
} Uim3GPDOPCUpdateMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
} Uim3GPDOPMGetMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
   kal_uint8 opMode;   
} Uim3GPDOPMUpdateMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
} Uim3GPDSIPCapGetMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
} Uim3GPDMIPCapGetMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
} Uim3GPDSIPUPPGetMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
} Uim3GPDMIPUPPGetMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
} Uim3GPDSIPSPGetMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
   kal_uint8 ActNAIEntryIndex;   
} Uim3GPDSIPSPUpdateMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
} Uim3GPDMIPSPGetMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
} Uim3GPDIMSIGetMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo; 
} Uim3GPDADGetMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
   kal_uint8 ActNAIEntryIndex;
   kal_uint8 NumAddActNAI;
   kal_uint8 AddActNaiEntryIndex[UIM_MAX_NAI_NUM];
} Uim3GPDMIPSPUpdateMsgT;

typedef struct {
   UimRspInfoT     UimRspInfo;
} Uim3GPDSIPPAPSSGetMsgT;

#ifdef MTK_CBP
typedef struct {
   UimRspInfoT     UimRspInfo;
} Uim3GPDUppExtGetMsgT;
#endif

typedef struct {
   kal_uint8 NAIEntryIndex;
   kal_uint8 SSLen;
   kal_uint8 SS[72];
} SipPapSST;

typedef struct {
   UimRspInfoT     UimRspInfo;
   kal_uint8 NumNAI;
   SipPapSST SipPapSSRec[UIM_MAX_NAI_NUM];
} Uim3GPDSIPPAPSSUpdateMsgT;

typedef struct {
   UimRspInfoT  UimRspInfo;
   kal_uint16   FileSize;
} UimUsimFileDataGetMsgT;

typedef struct
{
    UimRspInfoT     UimRspInfo;
    kal_uint16      EfId;
    UimDFIndexT     DfIndex; 
} UimGetEFPropertyMsgT;

typedef enum
{
    UIM_FILE_TRANSPARENT = 0,
    UIM_FILE_FIXED = 1,
    UIM_FILE_CYCLIC = 3,
    UIM_FILE_UNKNWON_STRUCT
}UimEfStructureT;

typedef struct
{
    kal_bool            Ack;
    kal_uint16          FileId;
    kal_uint16          FileSize;
    UimEfStructureT     EFStructure;
    kal_uint8           RecordLen;
} UimGetEFPropertyRspMsgT;

typedef struct
{
    kal_uint16  TimeInterval; /* uint is "s", if =0: polling off */ 
} UimProactivePollingMsgT;

typedef struct
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       ChapId;
    kal_uint8       ChallengeLen;
    kal_uint8       pChallengeData[CUIM_APDU_REQ_BODY_MAX_LEN];
}  UimHrpdMD5AuthMsgT;

typedef enum 
{
    UICC_PARM_SET_FACTORY_MODE,
    UICC_PARM_GET_FACTORY_MODE,
    UICC_PARM_OPERATION_ID_END_LIST
} UiccParmOperationId;

typedef enum 
{
    UICC_PARM_MIN_VALUE,
    UICC_PARM_MAX_VALUE,
    UICC_PARM_DEFAULT_VALUE,
    UICC_PARM_CUSTOM_VALUE,
    UICC_PARM_OP_TYPE_LIST_END
} UiccParmOperationType;

typedef enum
{
    UICC_PARM_OPERATION_SUCCESS,
    UICC_PARM_OPERATION_FAIL_READ_NOT_ALLOWED,
    UICC_PARM_OPERATION_FAIL_WRITE_NOT_ALLOWED,
    UICC_PARM_OPERATION_PARAMETER_NOT_SUPPORTED,
    UICC_PARM_OPERATION_INTERFACE_NOT_SUPPORTED,
    UICC_PARM_OPERATION_FAIL_VALUE_OUT_OF_RANGE
} UiccParmAccessResultCode;

typedef struct
{
    kal_bool Mode;
} UiccFactoryMode_APIStruct;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_uint8       OperMode; /*1: init; 0:terminate*/
    kal_uint8       Aid[16];
} UimAppInitTermMsgT;

typedef enum
{
    Info_ATRGet =0,
    Info_Max
} UimExtInfoId;

typedef struct
{
   UimRspInfoT     UimRspInfo;
   UimExtInfoId infoid;
} UimExtSimInfoGetT;

typedef struct
{
   UimRspInfoT  UimRspInfo;
   kal_uint8    Aid_len;
   kal_uint8    Aid[16];
} UiccLogicChanOpenT;

typedef struct
{
   UimRspInfoT  UimRspInfo;
   kal_uint8    Sessionid;
} UiccLogicChanCloseT;

typedef struct
{
   UimRspInfoT UimRspInfo;
   kal_uint8       RecordIndex;
}  UimGetSimMdnRecMsgT;

typedef struct
{
   kal_bool   Ack;
   kal_uint8  RecordIndex;
   kal_uint8  MdnLen;
   kal_uint8  Mdn[MAX_NUMBER_BCD_LEN+1]; /* First byte is TON|NPI. */
}  UimGetSimMdnRecRspMsgT;

typedef struct 
{
   UimRspInfoT      UimRspInfo;
} UimResetMsgT;

#ifdef MTK_DEV_C2K_IRAT
typedef enum
{
    UIM_REFRESH_CSIM_INIT,
    UIM_REFRESH_CARD_RESET,
    UIM_REFRESH_FILE_CHANGE,
    UIM_REFRESH_SESSION_RESET
}UimRefreshTypeT;

typedef struct
{
    UimRspInfoT UimRspInfo;
    UimRefreshTypeT RefreshType;    
} UimUtkRefreshMsgT;

typedef struct
{
    kal_bool Success;
} UimUtkRefreshRspMsgT;
#endif

typedef struct
{
   kal_bool Ack;
} UimResetRspMsgT;

#ifdef MTK_CBP
typedef struct 
{
    UimRspInfoT     UimRspInfo;
    kal_bool            ActiveFdn;
    UimChvIdT       ChvId;        /* Specify the CHV */
    kal_uint8           ChvLen;
    kal_uint8           ChvVal[8];    /* CHV value */    
} UimSetFdnStatusMsgT;

typedef enum
{
  UIM_FDN_SET_OK,
  UIM_FDN_SET_PIN2_REQUIRED,
  UIM_FDN_SET_PIN2_PUK,
  UIM_FDN_SET_CARD_NOT_SUPPORTED,
  UIM_FDN_VERIFY_PIN2_FAIL,
  UIM_FDN_OPEATION_NOT_ALLOWED,
  UIM_FDN_UNKNOWN
}UimFdnSetCauseT;

typedef struct 
{
    UimFdnSetCauseT SetCause;   
    kal_bool            FdnEnabled;
    kal_bool            Pin2Updated;
    kal_uint8           Pin2Count;
    kal_uint8           Puk2Count;
} UimSetFdnStatusRspMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
} UimGetFdnStatusMsgT;

typedef struct 
{
    kal_bool            FdnEnabled;
} UimGetFdnStatusRspMsgT;

/*Response data structure of MSG_ID_UIM_GET_FDN_REC_MSG */
typedef struct 
{
    kal_bool            Ack;
    UimPhbStorFileT FileType;
    kal_bool            IsFree; 
    kal_uint8           RecordIndex;
    kal_uint8           AlphaIdentifier[MAXALPHALENGTH];
    kal_uint8           PhoneNumber[MAX_NUMBER_FDN_BCD_LEN];
    kal_uint8           TON;
    kal_uint8           NPI;
} UimGetFdnRecRspMsgT;

typedef struct 
{
    UimRspInfoT     UimRspInfo;
    UimPhbStorFileT FileType;
    kal_uint8           RecordIndex;
    kal_uint8           AlphaIdentifier[MAXALPHALENGTH];
    kal_uint8           PhoneNumber[MAX_NUMBER_FDN_BCD_LEN];
    kal_uint8           TON;
    kal_uint8           NPI;
    UimPhbLevelT    PhbLevel; 
} UimUpdateFdnRecMsgT;

typedef struct 
{
    kal_bool            Ack;
    UimPhbStorFileT FileType;
    kal_uint8           RecordIndex;
} UimUpdateFdnRecRspMsgT;

typedef struct
{
  kal_uint8           NumOfEccList;
  UimEccContactT  EccList[MAX_ECC_LIST];
} UimEccListIndMsgT;
#endif

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
    UimRspInfoT  UimRspInfo;
    kal_bool  ChangeSuccess;
} UimFileChangeRspMsgT;

typedef struct
{
  uim_access_option_enum SimAccessOption;
  kal_bool                   UnlockTestSim;
  kal_bool                   ClearLocalPin;
}UimSimAccessOptionMsgT;

#endif

#ifndef __CARRIER_RESTRICTION__
typedef struct
{
  kal_uint8 len_of_gid1;
  kal_uint8 gid1[MAX_NUM_OF_GID];
  kal_uint8 len_of_gid2;
  kal_uint8 gid2[MAX_NUM_OF_GID];  
}uim_gid_struct;
#endif

typedef enum
{
    C2K_UIM_CARD_INSIDE, 
    C2K_UICC_CSIM_INSIDE
} C2kCardtypeT;

typedef struct
{
    C2kCardtypeT VsimcardType;                  /* uicc_card_type_enum, 0: Not init, 1:SIM, 2:USIM for now */            
} c2kVsimProfileT;

/* c2k vsim data length */
#define EF_META_SIZE 32
#define EF_DATA_SIZE 48

#define MAX_VSIM_PROFILE_NUM  2
#define DF_META_DATA_LEN 23
#define EF_META_DATA_LEN 15
#define EF_FILE_DATA_START  sizeof(UimVsimFileMetaT)

typedef struct
{
    kal_uint8 fcp_length;
    kal_uint8 fcp_tmp[31];
}UimVsimFileMetaT;

typedef struct
{
  UimVsimFileMetaT  meta_data;
  kal_uint8 current_file_idx[2];
  kal_uint8 sim_status[DF_META_DATA_LEN];   /* Store SIM status of current DF */  
}VsimUimCardContextT;

typedef struct
{
    /* The first 32 bytes */
    kal_uint8 fcp_length;
    kal_uint8 fcp_tmp[95];
    /* ------32 bytes ------ */
}CsimVsimFileMetaT;

typedef struct
{
  CsimVsimFileMetaT  meta_data;
  kal_uint8 aid_len;
  kal_uint8 aid[16];
  kal_uint8 csim_status_len;  /* Store USIM status len*/
  kal_uint8 csim_status[95]; /* Store USIM status*/
}VsimCsimCardContextT;  

typedef struct
{
  kal_bool                  vsimIsOn;
  kal_uint8                 usedProfileIdx;
  c2kVsimProfileT           profile[MAX_VSIM_PROFILE_NUM];
  VsimUimCardContextT       uimCardInfo;
  VsimCsimCardContextT      csimCardInfo;
}UimVsimContextT;

typedef struct
{
  kal_bool      is_imsi_valid;
  kal_uint8     imsi[9];
  kal_bool      is_ad_valid;
  kal_uint8     ad[4];
}uim_gsm_file_info_struct;

typedef enum
{
   UIM_CARD_MTS = 1,
   UIM_CARD_TATA,
   UIM_CARD_RELIANCE,
   UIM_CARD_CARRIER_INVALID
}UimCarrierT;

extern UimCardTypeT UimGetCardType(void);
extern UimCarrierT UimGetCardCaiier(void);
extern kal_uint8* UimGetCsimAid(void);
extern kal_bool UimIsOmhCard(void);
extern kal_bool UimNeedUnlockTestSim(void);

#ifdef MTK_PLT_ON_PC
extern void UimSetCardType(UimCardTypeT type);
#endif

extern kal_bool cuim_is_dual_sim_mode(void);

#define CARD_IS_UICC()   ((sbp_query_md_feature_data_for_c2k(SBP_DATA_RUIM) != SBP_RUIM_DISABLED) && ((UimGetCardType() & (UICC_CARD)) == UICC_CARD))
#define CARD4CDMA_IS_UICC()  ((sbp_query_md_feature_data_for_c2k(SBP_DATA_RUIM) != SBP_RUIM_DISABLED) && ((UimGetCardType() & (UICC_CARD)) == UICC_CARD))
#define CARD_IS_OMH()   (UimIsOmhCard() == KAL_TRUE)
#define IsUsimCard  ((UimGetCardType() & (USIM_CARD)) == USIM_CARD)

#ifdef __cplusplus
extern "C" {
#endif

#define UiccDbmIsUimModeDisabled() UimDbmIsUimModeDisabled()
extern kal_bool UimDbmIsUimModeDisabled(void);

#ifdef __cplusplus
}
#endif
#endif /* UIMAPI_H */
/**Log information: \main\4 2012-04-06 05:34:47 GMT pzhang
** modify contact uim interface**/
/**Log information: \main\SMART\1 2013-04-22 02:37:48 GMT shirleyli
** HREF#22159:add function UimGetCSTValueByIndex into INC file for CSS access**/
/**Log information: \main\Trophy\Trophy_mwang_href22200\1 2013-05-09 02:54:33 GMT mwang
** HREF#22200:Add the support for CT UICC card.**/
/**Log information: \main\Trophy\2 2013-05-09 03:14:40 GMT cshen
** href#22200**/
/**Log information: \main\Trophy\Trophy_xjyang_href22322\1 2013-12-03 07:25:53 GMT xjyang
** href#22322 Ôö¼ÓUICCÀàÐÍ**/
/**Log information: \main\Trophy\3 2013-12-03 07:33:28 GMT cshen
** href#22322**/
/**Log information: \main\Trophy\Trophy_yzhang_href22324\1 2013-12-05 09:30:45 GMT yzhang
** HREF#22324:India MTS/TATA ESN Tracking SMS requirement**/
/**Log information: \main\Trophy\4 2013-12-06 02:32:21 GMT cshen
** href#22324**/
/**Log information: \main\Trophy\Trophy_xding_href22331\1 2013-12-10 07:18:06 GMT xding
** HREF#22331, ºÏ²¢MMCÏà¹Ø¹¦ÄÜµ½Trophy baselineÉÏ**/
/**Log information: \main\Trophy\5 2013-12-10 08:33:44 GMT jzwang
** href#22331:Merge MMC latest implementation from Qilian branch.**/
/**Log information: \main\Trophy\Trophy_xjyang_href22336\1 2013-12-23 02:32:17 GMT xjyang
** HREF#22336**/
/**Log information: \main\Trophy\6 2013-12-23 02:48:23 GMT cshen
** href#22336**/
/**Log information: \main\Trophy\9 2014-01-17 10:10:39 GMT xxing
** HREF#22414**/

