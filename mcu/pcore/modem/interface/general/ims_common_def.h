/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 * Filename:
 * ------------
 *   ims_common_def.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines structures and enums commonly used by IMC, ATP, and xDM.
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * 05 20 2019 savvas.chou
 * [MOLY00407635] [VzW][2019_Feb][Visible] IMC part
 * VzW Visible SIM feature
 *
 * 05 10 2019 savvas.chou
 * [MOLY00405688] [US_DEV][VzW][2019_Feb][Visible]
 * VZW visible sim for NVRAM customization
 *
 * 07 31 2018 savvas.chou
 * [MOLY00342215] [Pre-sanity][caseFail][alps-mp-o1.mp1][k63v1us_64_bsp_na_cxp][2018.07.23.11.00][TC_201][userdebug]
 * RCS feature handler refine
 *
 * 07 31 2018 savvas.chou
 * [MOLY00342215] [Pre-sanity][caseFail][alps-mp-o1.mp1][k63v1us_64_bsp_na_cxp][2018.07.23.11.00][TC_201][userdebug]
 * RCS feature handler refine
 *
 * 07 16 2018 savvas.chou
 * [MOLY00334020] [IMC][RCS] Support AT+ERCSIMS=3 & 4 for ROI reg. & dereg. events
 * Support AT+ERCSIMS=3 & 4 for ROI reg. & dereg. events
 *
 * 02 12 2018 ben.chiu
 * [MOLY00307326] [R3][Volunteer Patch][IMS]Dual IMS registration enhacement
 * R3, IMS part - Dual IMS registration latency improvement
 *
 * 01 09 2018 ben.chiu
 * [MOLY00299550] [MP2][MT6763][Bianco][N1][India FT][Chennai][WW FT][IMS][FDD][RJIO][V-ECC_011]Emergency call is getting disconnected when we remove sim card during ECC call - IMS part
 * 	
 * 	IMS part - ECC call and plug-out SIM
 *
 * 11 22 2017 yulong.chang
 * [MOLY00291144] [VDM][Verizon][WiFi] UE will not select CS domain when T_ePDG_CS is ongoing (VDM part)
 * VzW_2017June_VZ_REQ_WIFI_2990111  T_ePDG_CS (VDM part)
 *
 * 11 22 2017 yulong.chang
 * [MOLY00290314] [VDM][Hugeland Tool] Enhanced the delay release CS semaphore mechanism  (VDM part)
 * 	
 * 	Enhanced delay release CS semaphore (VDM part)
 *
 * 11 22 2017 yulong.chang
 * [MOLY00290314] [VDM][Hugeland Tool] Enhanced the delay release CS semaphore mechanism  (VDM part)
 * Enhanced delay release CS semaphore (VDM part)
 *
 * 11 16 2017 ben.chiu
 * [MOLY00290015] [LR12A.R2.MP] L+L New Feature: Occupy HPS for IMS RE-REG (IMS common header)
 * 	
 * 	IMS request HPS for re-reg/re-sub - IMS common interface
 *
 * 08 04 2017 ssu-hsien.wu
 * [MOLY00268620] [VzW][CDMA-less][UMOLYA][Volunteer Patch] IMC patch back.
 *
 * 04 07 2017 yingfui.hung
 * [MOLY00240312] [93] CT VoLTE modem re-architecture
 * 	
 * 	.
 *
 * 01 11 2017 ben.chiu
 * [MOLY00220510] [93 PREIT_DEV][UMOLYA] Rename IMSP interface/context/API to ATP and reorg folder layout
 * 	
 * 	[IMC]ATP rename patch back
 *
 * 06 24 2016 benjamin.kuo
 * [MOLY00185907] [MT6293] [ENAS] UMOLY merge to UMOLYA
 * sync. UMOLY to UMOLYA: common part
 *
 * 06 01 2016 kuan-wei.chen
 * [MOLY00146327] [VzW] hVoLTE implementation
 * vzw patchback - L4, VDM
 *
 * 03 28 2016 shih-che.chou
 * [MOLY00171298] [RAC] Sync from LR11 to UMOLY
 * .
 *
 * 12 31 2015 ariel.lin
 * [MOLY00155610] [91VzW] IMS over eHRPD patch back
 * .
 *
 * 12 23 2015 allen.hsu
 * [MOLY00154513] [MT6755][VzW][chipset][RDIT][Intertek][Sprient][Multi][LTEC2K][iRAT][4.5] IMS abnormal trigger register on MD3 1xRTT or eHRPD
 * 	
 * 	add RAT_NONE for +EIMSINFO.
 *
 * 09 17 2015 ben.chiu
 * [MOLY00141935] [IMS interface][version#0x39]IMS interface v1.2 check-in
 * 	(v1.2)ims interface re-org
 *
 * 08 26 2015 ben.chiu
 * [MOLY00138217] [ViLTE] M0 migration ViLTE feature Interface
 * ViLTE interface patch back
 *
 * 07 31 2015 lexel.yu
 * [MOLY00085703] [VDM][MT6291] Sync MOLY to UMOLY
 * 	[MOLY00090762] [LTE][E911]Device is unable to initiate VoLTE E-911 calls with No SIM card
 *
 * 07 30 2015 ariel.lin
 * [MOLY00125491] [Interface][MPGATE][MT6795][L1][VoLTE][HongKong][FT][Cross-Operators] swap the hold call then hang up one call , UE-A can not unhold the another call
 * add new call stop cause.
 *
 * 07 09 2015 nick.wang
 * [MOLY00127009] WFC Patch back to UMOLY- interface part
 * .moly wfc interface patch
 *
 * 07 09 2015 nick.wang
 * [MOLY00127009] WFC Patch back to UMOLY- interface part
 * 	.jade interface sync
 *
 * 07 03 2015 ariel.lin
 * [MOLY00125491] [Interface][MPGATE][MT6795][L1][VoLTE][HongKong][FT][Cross-Operators] swap the hold call then hang up one call , UE-A can not unhold the another call
 * add new call stop cause.
 *
 * 06 17 2015 nick.wang
 * [MOLY00118763] [WFC] feature patch back IMS interface for MD (MP7)
 * 	.IMS interface
 *
 * 06 09 2015 benjamin.kuo
 * [MOLY00119265] [WFC] feature patch back for VDM/SDM/ATP - interface/SAP parts
 * 	interface - common part.
 * 04 17 2015 nick.wang
 * [MOLY00098970] [ALPS01981207] [L][WFC] firt patch feature in
 * .merge 1224875
 *
 * 04 17 2015 ben.chiu
 * [MOLY00108033] [VoLTE][TMOUS][Volunteer Patch] CALL ERROR CODE HANDLING(CALL PERFORMANCE)
 * TMOUS MOS patch back
 * 04 09 2015 nick.wang
 * [MOLY00098970] [ALPS01981207] [L][WFC] firt patch feature in
 * .
 * 	confirm patched
 *
 * 04 02 2015 benjamin.kuo
 * [MOLY00105813] [WFC] migrate VDM from WFC.FPB to CMCCVOLTE.WFC.FPB
 * .
 *
 * 04 02 2015 benjamin.kuo
 * [MOLY00105813] [WFC] migrate VDM from WFC.FPB to CMCCVOLTE.WFC.FPB
 * 	.interface part
 *
 * 04 01 2015 danny.kuo
 * [MOLY00097520] [WFC] SDM wifi calling support
 * 	.
 *
 * 04 01 2015 danny.kuo
 * [MOLY00097520] [WFC] SDM wifi calling support
 * 	.
 *
 * 04 01 2015 danny.kuo
 * [MOLY00097520] [WFC] SDM wifi calling support
 * .
 *
 * 03 03 2015 allan.ke
 * [MOLY00097577] [K2][CMCC][DSDS][VoLTE][HZ][NV-IOT][Conference] 6.4.5.9 VoLTE MT hangup after it happens SRVCC.
 * .
 *
 * 02 13 2015 allan.ke
 * [MOLY00096007] [L MR1] Transfer call number to CS domain when performing SRVCC
 * .
 *
 * 02 05 2015 allan.ke
 * [MOLY00095053] [CMCC VoLTE][VDM] Report AP correct call disconnect reason to trigger normal to emergency redial
 * .
 *
 * 02 04 2015 ariel.lin
 * [MOLY00093808] [VoLTE][Volunteer Patch] Migration from Lrefac/CMCC to MP7 (MR0 --> MR1 activity)
 * Merge from MP6.CMCC3 to MP7.FPB.
 *
 * 02 04 2015 allan.ke
 * [MOLY00092209] [CMCC VoLTE] @o_Conference call
 *
 * 02 04 2015 allan.ke
 * [MOLY00092209] [CMCC VoLTE] @o_Conference call
 * .
 * 04 27 2015 ben.chiu
 * [MOLY00109234] [VoLTE][Volunteer Patch] MP7.CMCCVOLTE.FPB merge back to MP7/MP7.CMCC
 * MP7.CMCCVOLTE.FPB merge back to MP7
 *
 *
 * 04 27 2015 ben.chiu
 * [MOLY00109234] [VoLTE][Volunteer Patch] MP7.CMCCVOLTE.FPB merge back to MP7/MP7.CMCC
 * MP7.CMCCVOLTE.FPB merge back to MP7
 *
 * 12 12 2014 ben.chiu
 * [MOLY00059341] [6290E1][VoLTE][IT][Volunteer Patch]
 * CMCC requirement 6.7, 380 handling
 *
 * 08 14 2014 jinghan.wang
 * [MOLY00075286] [VDM] IMS MO call timeout (dedicated bearer setup failure) trigger call retry on CS domain
 * 	IMS MO call timeout trigger call retry on CS domain - VDM TRK part
 *
 * 08 13 2014 ariel.lin
 * [MOLY00064412] [VoLTE][Volunteer Patch]
 * MP6 merge back to TRUNK
 *
 * 07 09 2014 ariel.lin
 * [MOLY00071716] [VoLTE][volunteer patch] Add timer for protect the period of sending INVITE request to bandwidth reservation
 * 	link to ALPS01634796
 *
 * 07 07 2014 benjamin.kuo
 * [MOLY00071459] Add Mobility Management for IMS Voice Termination
 * MMIVT2MP6
 *
 * 07 07 2014 benjamin.kuo
 * [MOLY00071459] Add Mobility Management for IMS Voice Termination
 * MMIVT2MOLY
 *
 * 06 04 2014 ben.chiu
 * [MOLY00059341] [6290E1][VoLTE][IT][Volunteer Patch]
 * Integration change for 504 cause
 *
 * 06 04 2014 ben.chiu
 * [MOLY00059341] [6290E1][VoLTE][IT][Volunteer Patch]
 * 504 cause
 *
 * 03 17 2014 ben.chiu
 * [MOLY00059341] [6290E1][VoLTE][IT][Volunteer Patch]
 * SRVCC cause mapping to error report
 *
 * 03 17 2014 ben.chiu
 * [MOLY00059341] [6290E1][VoLTE][IT][Volunteer Patch]
 * Add SRVCC cause
 *
 * 02 17 2014 ben.chiu
 * [MOLY00056189] [6290E2][VoLTE][SRVCC] New feature for SRVCC R10 - IMC part
 * check-in SRVCC R10 feature for IMC and /modem_interface/ims
 *
 * 02 05 2014 benjamin.kuo
 * [MOLY00055409] [MT6582LTE][VoLTE][AdvIT][MO] NO AT Command Response for AT+CMMIVT? command
 * Fix build error.
 *
 * 01 22 2014 ben.chiu
 * [MOLY00054726] [6290E2][VoLTE][AdvIT][Emerg] change IMS reg state enum and disable emergency IMS reg state indication to AP
 * change IMS reg state enum
 *
 * 01 14 2014 ben.chiu
 * [MOLY00053410] [VoLTE][IMC] merge IMC to MOLY TRUNK
 * AT+CDU=0 feature in
 *
 * 01 14 2014 ben.chiu
 * [MOLY00053410] [VoLTE][IMC] merge IMC to MOLY TRUNK
 * Add IMC handle for ads ctrl to VDM
 *
 * 01 13 2014 ben.chiu
 * [MOLY00053410] [VoLTE][IMC] merge IMC to MOLY TRUNK
 * Add ads_ctrl message to VDM for Test Mode
 *
 * 12 09 2013 ben.chiu
 * [MOLY00049586] [6290E1][VoLTE][IT][Volunteer Patch] submit advanced call feature
 * SS phase2 conferce call check-in
 * for IMCB pre-checkin (if failed the Basic IT, it will be rollback)
 *
 * 12 10 2013 vend_edwin.liu
 * ATP.
 *
 * 11 27 2013 ben.chiu
 * [MOLY00048108] [MT6582LTE][IMS][VoLTE][Basic IT][Volunteer Patch] IMS enable/disable feature-in
 * IMS enable/disable feature-in for IMC related part
 *
 * 11 27 2013 chinte.chen
 * [MOLY00048106] [MT6582LTE][IMS][VoLTE][Basic IT][IT3-144] add result to RecvSMSRsp to handle multiple MT SMS simulatously
 * .
 *
 * 11 25 2013 ben.chiu
 * [MOLY00047708] [6290E1][VoLTE][IT][Volunteer Patch] Add IMS enable/disable feature
 * pre-checkin ims_dereg_cause_enum
 *
 * 09 12 2013 ben.chiu
 * [MOLY00037010] [6290E1][VoLTE][IT]IMS DEV IMC code check-in
 * IMC merge code v1, sync to Ben's CBR CL: 258323
 *****************************************************************************/

#ifndef _IMS_COMMON_DEF_H_
#define _IMS_COMMON_DEF_H_

#include "kal_general_types.h"
#include "kal_public_defs.h"

// To use some enums such as ue_mode_enum, voice_domain_preference_enum, ...
#include "l3_inc_enums.h"
#include "ps_public_enum.h"
#include "ims_interface_md.h"

/******************************************************************************
 *                              Constant
 *****************************************************************************/
#define IMC_SMS_SUCCESS (1)
#define IMC_SMS_FAIL    (0)
/******************************************************************************
 *                               Enum
 *****************************************************************************/
#ifdef __MULTIPLE_IMS_SUPPORT__
typedef enum
{
    IMS_SEMAPHORE_SERVICE_START = 0,
    IMS_SEMAPHORE_SERVICE_STOP
} ims_semaphore_service_status_enum;

typedef enum
{
    IMS_SEMAPHORE_NONE = 0x0000,
    IMS_SEMAPHORE_CS = 0x0001,
    IMS_SEMAPHORE_HPS = 0x0002,
    IMS_SEMAPHORE_CS_AND_HPS = 0x0003,
} ims_semaphore_service_type_enum;
#endif

typedef enum
{
    IMS_RAT_TYPE_2G = 0,
    IMS_RAT_TYPE_3G_FDD,
    IMS_RAT_TYPE_3G_TDD,
    IMS_RAT_TYPE_4G_FDD,
    IMS_RAT_TYPE_4G_TDD,
    IMS_RAT_TYPE_NONE = 0xFF
} ims_rat_type_enum;

typedef enum
{
    C2K_RAT_TYPE_NONE = 0,
    C2K_RAT_TYPE_1XRTT,
    C2K_RAT_TYPE_HRPD,
    C2K_RAT_TYPE_EHRPD,
} c2k_rat_type_enum;

typedef enum
{
    IMS_RCODE_OK,
    IMS_RCODE_CONNECT,
    IMS_RCODE_RING,
    IMS_RCODE_NO_CARRIER,        //3
    IMS_RCODE_ERROR,             //4
    IMS_RCODE_BUSY = 7,

    /* Below are MTK proprietary result codes */
    IMS_RCODE_CONNECT_PS = 100,

    /* Below are result codes added for IMS */

} ims_result_code_enum;

typedef enum
{
    IMS_ERR_PHONE_FAILURE = 0,
    IMS_ERR_OPERATION_NOT_ALLOWED_ERR = 3,
    IMS_ERR_OPERATION_NOT_SUPPORTED = 4,
    IMS_ERR_PH_SIM_PIN_REQUIRED = 5,
    IMS_ERR_PH_FSIM_PIN_REQUIRED = 6, 
    IMS_ERR_PH_FSIM_PUK_REQUIRED = 7,
    IMS_ERR_SIM_NOT_INSERTED = 10,
    IMS_ERR_SIM_PIN_REQUIRED = 11,
    IMS_ERR_SIM_PUK_REQUIRED = 12,
    IMS_ERR_SIM_FAILURE = 13,
    IMS_ERR_SIM_BUSY = 14,
    IMS_ERR_SIM_WRONG = 15,
    IMS_ERR_INCORRECT_PASSWD = 16,
    IMS_ERR_SIM_PIN2_REQUIRED = 17,
    IMS_ERR_SIM_PUK2_REQUIRED = 18,
    IMS_ERR_MEM_FULL = 20,
    IMS_ERR_INVALID_INDEX = 21,
    IMS_ERR_NO_FOUND = 22,
    IMS_ERR_TEXT_ERRSTRING_TOO_LONG_ERR = 24,
    IMS_ERR_INVALID_CHARACTERS_IN_TEXT_ERRSTRING_ERR = 25,
    IMS_ERR_DIAL_ERRSTRING_TOO_LONG_ERR = 26, 
    IMS_ERR_INVALID_CHARACTERS_IN_DIAL_ERRSTRING_ERR = 27,
    IMS_ERR_NO_NW_SERVICE = 30,
    IMS_ERR_NETWORK_TIMEOUT = 31,
    IMS_ERR_NETWORK_NOT_ALLOWED = 32,
    IMS_ERR_NW_PERSON_PIN_REQUIRED = 40,
    IMS_ERR_NW_PERSON_PUK_REQUIRED = 41,
    IMS_ERR_NW_SUB_PERSON_PIN_REQUIRED = 42,
    IMS_ERR_NW_SUB_PERSON_PUK_REQUIRED = 43,
    IMS_ERR_SP_PERSON_PIN_REQUIRED = 44,
    IMS_ERR_SP_PERSON_PUK_REQUIRED = 45,
    IMS_ERR_CORP_PERSON_PIN_REQUIRED = 46,
    IMS_ERR_CORP_PERSON_PUK_REQUIRED = 47,
    IMS_ERR_UNKNOWN = 100,
    IMS_ERR_ILLEGAL_MS = 103,
    IMS_ERR_ILLEGAL_ME = 106,
    IMS_ERR_GPRS_NOT_ALLOWED = 107,
    IMS_ERR_PLMN_NOT_ALLOWED = 111,
    IMS_ERR_LA_NOT_ALLOWED = 112,
    IMS_ERR_ROAMING_AREA_NOT_ALLOWED = 113,
    IMS_ERR_SERV_OPTION_NOT_SUPPORTED = 132,
    IMS_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED = 133,
    IMS_ERR_SERV_OPTION_TEMP_OUT_OF_ORDER = 134,
    IMS_ERR_GPRS_UNSPECIFIED_ERROR = 148,
    IMS_ERR_PDP_AUTH_FAIL = 149,
    IMS_ERR_INVALID_MOBILE_CLASS = 150,
    IMS_ERR_LINK_NS_SP_PERSON_PIN_REQUIRED = 151,
    IMS_ERR_LINK_NS_SP_PERSON_PUK_REQUIRED = 152,
    IMS_ERR_LINK_SIM_C_PERSON_PIN_REQUIRED = 153,
    IMS_ERR_LINK_SIM_C_PERSON_PUK_REQUIRED = 154,

    /* Below are MTK proprietary error codes */
    IMS_ERR_COMMAND_CONFLICT = 302,
    IMS_NO_ERR = 600,
    IMS_ERR_UNRECOGNIZED_CMD = 601,
    IMS_ERR_RETURN_ERROR = 602,
    IMS_ERR_SYNTEX_ERROR = 603,
    IMS_ERR_UNSPECIFIED = 604,
    IMS_ERR_DATA_TRANSFER_ALREADY = 605,
    IMS_ERR_ACTION_ALREADY = 606,
    IMS_ERR_NOT_AT_CMD = 607,
    IMS_ERR_MULTI_CMD_TOO_LONG = 608,
    IMS_ERR_ABORT_COPS = 609,
    IMS_ERR_NO_CALL_DISC = 610,
    IMS_ERR_BT_SAP_UNDEFINED = 611,
    IMS_ERR_BT_SAP_NOT_ACCESSIBLE = 612,
    IMS_ERR_BT_SAP_CARD_REMOVED = 613,
    IMS_ERR_AT_NOT_ALLOWED_BY_CUSTOMER = 614

} ims_err_id_enum;

typedef enum
{
    IMS_ECPI_DISC_CAUSE_XXX = 0
} ims_ecpi_disc_cause_enum;

typedef enum 
{
    WFC_PROFILE_CELLULAR_ONLY = 0,
    WFC_PROFILE_WIFI_PREFERRED,
    WFC_PROFILE_CELLULAR_PREFERRED,
    WFC_PROFILE_WIFI_ONLY,
    WFC_PROFILE_NUM
} wfc_profile_enum;

typedef enum 
{
    IMS_HANDOVER_STATUS_NONE = 0,
    IMS_HANDOVER_STATUS_LTE_TO_WIFI,
    IMS_HANDOVER_STATUS_WIFI_TO_LTE,
    IMS_HANDOVER_STATUS_MAX,
} ims_handover_status_enum; 

// For extended DTMF operation commands from ATP to VDM
typedef enum 
{
    IMS_DTMF_ACTION_START = 0,
    IMS_DTMF_ACTION_STOP
} ims_dtmf_action_enum;

typedef enum 
{
    IMS_SERVICE_NORMAL_SERVICE = 0, /* NAS registration success */
    IMS_SERVICE_LIMITED_SERVICE,
    IMS_SERVICE_NO_SERVICE   /* plmn loss/idle oos happen */
} ims_service_enum;

typedef enum 
{
    CELL_NORMAL_SERVICE = 0,
    CELL_LIMITED_SERVICE
} cell_service_enum;

typedef enum 
{
    C2K_CELL_NO_SERVICE = 0,
    C2K_CELL_NORMAL_SERVICE
} c2k_cell_service_enum;

typedef enum
{
    IMS_URI_TYPE_SIP = 0x01,
    IMS_URI_TYPE_TEL = 0x02,
    IMS_URI_TYPE_URN = 0x04
}ims_uri_type_enum;

/**
 *  MM means generic mobility management
 *  not for 2G MM module
 */
typedef enum
{
    MM_IMS_VOICE_TERMINATION_DISABLED = 1,
    MM_IMS_VOICE_TERMINATION_ENABLED
} mm_ims_voice_termination;

typedef enum 
{
    IMS_SRVCC_CALL_NUM_FORMAT_UNSPECIFIED = 0,
    IMS_SRVCC_CALL_NUM_FORMAT_URI         = 1,
    IMS_SRVCC_CALL_NUM_FORMAT_BCD         = 2,
    IMS_SRVCC_CALL_NUM_FORMAT_MAX,
}ims_srvcc_call_number_format_enum;

typedef enum 
{
    HVOLTE_SRLTE_MODE       = 0,    // call domain in C2K
    HVOLTE_LTE_ONLY_MODE    = 1,    // Suspend 1xRTT tune-away, call domain in IMS
}hvolte_mode_enum;

typedef enum 
{
    HVOLTE_CALL_DOMAIN_C2K    = 0,
    HVOLTE_CALL_DOMAIN_IMS    = 1,
}hvolte_call_domain_enum;

typedef enum
{
    HVOLTE_DIAL_NONE = 0,
    HVOLTE_DIAL_SILENT_REDIAL,
    HVOLTE_DIAL_C2K_DIRECTLY,
    HVOLTE_DIAL_MAX
}hvolte_dial_type_enum;

typedef enum 
{
    HVOLTE_DISABLE = 0,
    HVOLTE_AUTO_MODE,//=1
    HVOLTE_MANUAL_MODE,//=2
    HVOLTE_STATUS_MAX   = HVOLTE_MANUAL_MODE
}hvolte_enable_status_enum;

typedef enum
{
    IMS_DEDICATED_EPS_BEARER_DEACTIVATE = 0,
    IMS_DEDICATED_EPS_BEARER_ACTIVATE    
} ims_dedicated_eps_bearer_status_enum;

typedef enum {
    IMS_CALL_STATUS_BEGIN = 0,
    IMS_CALL_STATUS_CONNECTED,
    IMS_CALL_STATUS_END,
} ims_call_status_enum;

typedef enum {
    IMS_SPECIAL_EVENT_NORMAL      = IMS_REG_EVENT_NORMAL,  /* default */
    IMS_SPECIAL_EVENT_PCO_FF00H_5 = IMS_REG_EVENT_PCO_FF00H_5,
    IMS_SPECIAL_EVENT_CALL_OUTAGE_TEXT,
    IMS_SPECIAL_EVENT_MAX
} ims_special_event_enum;

typedef enum
{
    TIMER_EPDG_CS_STOP = 0,
    TIMER_EPDG_CS_START    
} timer_epdg_cs_status_enum;

typedef enum {
    IMS_INET_METHOD_SIP_REGISTER,
    IMS_INET_METHOD_SIP_INVITE,
    IMS_INET_METHOD_SIP_REFER,
    IMS_INET_METHOD_SIP_UPDATE,
    IMS_INET_METHOD_SIP_CANCEL,
    IMS_INET_METHOD_SIP_MESSAGE,
    IMS_INET_METHOD_SIP_ACK,
    IMS_INET_METHOD_SIP_BYE,
    IMS_INET_METHOD_SIP_OPTIONS,
    IMS_INET_METHOD_SIP_SUBSCRIBE,
    IMS_INET_METHOD_SIP_NOTIFY,
    IMS_INET_METHOD_SIP_PUBLISH,
    IMS_INET_METHOD_SIP_INFO,
    IMS_INET_METHOD_SIP_PRACK,
    IMS_INET_METHOD_HTTP_GET,
    IMS_INET_METHOD_HTTP_POST,
    IMS_INET_METHOD_HTTP_TRACE,
    IMS_INET_METHOD_HTTP_HEAD,
    IMS_INET_METHOD_HTTP_PUT,
    IMS_INET_METHOD_HTTP_DELETE,
    IMS_INET_METHOD_HTTP_CONNECT,
    IMS_INET_METHOD_RTSP_OPTIONS,
    IMS_INET_METHOD_RTSP_REDIRECT,
    IMS_INET_METHOD_RTSP_DESCRIBE,
    IMS_INET_METHOD_RTSP_SETUP,
    IMS_INET_METHOD_RTSP_PLAY,
    IMS_INET_METHOD_RTSP_PAUSE,
    IMS_INET_METHOD_RTSP_TEARDOWN,
    IMS_INET_METHOD_RTSP_SET_PARAMETER,
    IMS_INET_METHOD_PXY_DEBUG,
    IMS_INET_METHOD_UNRECOGNIZED,
    IMS_INET_METHOD_NUM,
}ims_inet_method_enum;

typedef enum {
    RCS_REG_FEATURE_OFF = 0,
    RCS_REG_FEATURE_ON,
    RCS_REG_FEATURE_RE_TRANSMIT,
    RCS_REG_STATE_REGISTERED,
    RCS_REG_STATE_UNREGISTERED
}rcs_reg_state_enum;

typedef enum {
    IMS_SPECIAL_PROFILE_NONE = 0,
    IMS_SPECIAL_PROFILE_VISIBLE_SIM = 1<<1
}ims_special_profile_enum;

/******************************************************************************
 *                                Struct
 *****************************************************************************/
// <pau> field of +ECPI
typedef struct
{
    kal_uint8 p_asserted_uri[IMS_P_ASSERT_URI_LEN]; 
} pau_info_struct;

#endif /* _IMS_COMMON_DEF_H_ */

