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
 *   vdm_msgid.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines the identities of the messages received by VDM and the identities of
 *   VDM internal messages.
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * 03 18 2020 yulong.chang
 * [MOLY00504484] [Gen93][VDM][Orange] Add VDM-IMC interface for IMC query CS availability (VDM part)
 * 	
 * 	Orange feature - cs_availability query patch back to GEN93 (VDM)
 *
 * 09 16 2019 delphine.wang
 * [MOLY00436796] [Gen93] DSDA-like feature check in
 * 	
 * 	.
 *
 * 08 08 2019 yulong.chang
 * [MOLY00428497] [HMD][MT6761][AL1670][FT][OA][Proximus BE]ALPS04670351  continue dialing via SIM toolkit/Proximenu, CSFB is always performe d
 * 	
 * 	STK call over IMS VDM part
 *
 * 06 26 2019 yulong.chang
 * [MOLY00416376] [VDM][TMO-EU][DTAG]  Add new AT command to know whether user approve leaving flight mode
 * 	
 * 	DTAG leaving airplane mode after receiving 380 design change
 *
 * 05 17 2019 yulong.chang
 * [MOLY00407149] [URGENT][Cervino][MT6762][P0][MP2][Sprint][FT_REG][Kansas][SI2][VoLTE][TC-SPCSHVOLTE-002]lost VoLTE and cannot back
 * ALPS04426996
 *
 * 02 01 2019 hsuanchang.chen
 * [MOLY00380816] [Gen93][patch back] LR12A.R3.TC01.SP to LR12A/LR12A.R3.MP
 * 	
 * 	. TC01 sync to R3
 *
 * 09 21 2018 yulong.chang
 * [MOLY00352806] [DSBP] patch back "D-SBP enhancment for all modem" to LR12A.R3.MP
 * EFUN/CFUN controlled by L4BPWR (VDM part)
 *
 * 05 23 2018 yulong.chang
 * [MOLY00327671] [Rose][MERLOT][O1][BSP+][Initial Tool]The device was not regist network after some operate.(once)
 * VDM relay +CIEV:102,X to AP
 *
 * 05 22 2018 jerry.cheng
 * [MOLY00327539] [Cervino][O1 BSP+][SRLTE][om c2k6m][FT][CT hVoLTE][SH][Auto][CAT] md1:(MCU_core0,vpe0,tc0(VPE0)) [ASSERT] file:mcu/pcore/modem/atp/src/atp_other_funcs.c line:134 (VDM R3.MP)
 * .[R3] AT+EHVOLTE always return cnf success, VDM should resume ads when receives +EGMSSC2K: 1
 *
 * 03 14 2018 yulong.chang
 * [MOLY00312879] [VDM][Vzw][CDMA-less][PCO] Trigger NWSEL search for Vzw CDMA less if UE has received PCO_FF00H=5 and AP radio control off and timer expired and UE is roaming (VDM main)
 * PCO FF00H 5 - VDM main part
 *
 * 12 01 2017 yulong.chang
 * [MOLY00293536] [VDM][TMO-US][RTT] Redial voice only VoLTE EMCl when RTT VoLTE EMC fail (VDM part)
 * TMO RTT redial
 *
 * 12 01 2017 yulong.chang
 * Roll back MOLY00291130
 *
 * 11 23 2017 jerry.cheng
 * [MOLY00291130] [R3][VZW feature] VZ_REQ_e911_30203 (EMC call type)
 * .rollback to resolve autosync conflict
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
 * 11 06 2017 jerry.cheng
 * [MOLY00287748] [93][TMO][VDM] Digits implementation
 * .Digits implementation - VDM part
 *
 * 08 31 2017 yulong.chang
 * [MOLY00274168] [MT6293][NWSIM][Regression][TC_9_3_1_3] UE return CME error for ATD01234567890;
 * ALPS03464343 Bug fix (also reference At+CFUN)
 *
 * 08 24 2017 yulong.chang
 * [MOLY00272923] [Bianco][N1][MTK FT][SRLTE][CT 6M C][LZ][Random] call can't hang up (ATP part)
 * .
 *
 * 08 14 2017 jerry.cheng
 * [MOLY00268350] [BIANCO][MT6763][C2K]DISABLE ECBM in CHINA
 * .relay +CIEV: 102,2 for disable ECBM in C2K to guarantee +CIEV: 102,2 send after +ECPI 133
 *
 * 07 25 2017 jerry.cheng
 * [MOLY00262992] [93][VDM] IMS parameter OTA update
 * .OPPO IMS parameter OTA update
 *
 * 07 19 2017 jerry.cheng
 * [MOLY00210061] [93][VDM] UMOLY sync to UMOLYA
 * .[LR11.MP5 to UMOLYA]. 
 * 	porting [MOLY00215268] [VDM][ATT] ACB enable, select CS domain to dial up call. VDM part.
 * 	porting [MOLY00215276] [VDM][ATT] ACB enable, select CS domain to dial up call. NVRAM part
 *
 * 07 19 2017 jerry.cheng
 * [MOLY00210061] [93][VDM] UMOLY sync to UMOLYA
 * .[LR11.MP5 to UMOLYA] porting [MOLY00206357] [VzW] Call Pull & VICE Feature
 *
 * 04 07 2017 jerry.cheng
 * [MOLY00240312] [93] CT VoLTE modem re-architecture
 * .[CT VoLTE] +CIEV: 102,2 for ECBM mode no need
 *
 * 04 05 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * 	
 * 	.AT+EVIVS support for indicating ERRC to occupy CS semaphore in VoLTE/ViTLE/VoWifFI/ViWiFI period
 *
 * 04 05 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .[M3] CLCCS .remove CLCC cnf check for unsync call(C2K) in order to fulfill C2K call waiting
 *
 * 04 05 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .[M3] EIMSCFG - VDM part
 *
 * 04 05 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .[M3] 380 redial as ECC by VDM
 *
 * 02 23 2017 jerry.cheng
 * [MOLY00210061] [93][VDM] UMOLY sync to UMOLYA
 * .sync [MOLY00225997] [VOLTE][NS-IOT][Anite][V55][5.6.4_DCS1800][E38]FAIL.VERDICT_FAIL.
 *
 * 02 23 2017 yingfui.hung
 * [MOLY00209737] [MT6293] LWTG and C2K L4 integration check in
 * 	- L4BCC STK call modification.
 * 	
 * 	.
 *
 * 02 23 2017 yingfui.hung
 * [MOLY00230255] [L4BCC] implement CLCCS command
 * 	
 * 	.
 *
 * 02 20 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .+EVPC2K.
 *
 * 02 20 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .DSBP
 *
 * 01 11 2017 jerry.cheng
 * [MOLY00220510] [93 PREIT_DEV][UMOLYA] Rename IMSP interface/context/API to ATP and reorg folder layout
 * 	
 * 	[VDM] rename IMSP to ATP.
 *
 * 12 28 2016 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * CC AT cmd merge- M1 interfaces.
 *
 * 12 14 2016 jerry.cheng
 * [MOLY00210061] [93][VDM] UMOLY sync to UMOLYA
 * .sync [MOLY00204150] TK vzw hVoLTE/E911 implementation
 * 	
 * 	TK hVoLTE.
 *
 * 10 27 2016 jerry.cheng
 * [MOLY00210061] [93][VDM] UMOLY sync to UMOLYA
 * 	
 * 	[MOLY00191944] multiple IMS : VDM part.
 *
 * 09 26 2016 jerry.cheng
 * [MOLY00205203] [VDM] sync UMOLYA.PS.DEV and cross_core integration changes back to UMOLYA
 * [VDM] cross core interface integration.
 *
 * 09 26 2016 jerry.cheng
 * [MOLY00205203] [VDM] sync UMOLYA.PS.DEV and cross_core integration changes back to UMOLYA
 * [VDM] SCM feature - VDM part.
 *
 * 06 28 2016 kuan-wei.chen
 * [MOLY00186867] L4/CM/SIM code sync
 * .
 *
 * 03 08 2016 yingfui.hung
 * [MOLY00167924] [L4][R12] Handling of SCM at VDM/SDM/L4 part
 * 	
 * 	.
 *
 * 12 18 2015 lexel.yu
 * [MOLY00085703] [VDM][MT6291] Sync MOLY to UMOLY
 * 	
 * 	[MOLY00081515] [MUSE] IMS Development for requirement 1-16, VDM part
 * 	AT+EICE
 *
 * 12 15 2015 kuan-wei.chen
 * [MOLY00153140] [D1][WFC][M0] WFC preference if wifi only, disable WFC, prompt "server unreachable" when make a call. - VDM part
 * wifi only mode is active only when AT+EIMSWFC=1
 *
 * 11 30 2015 yingfui.hung
 * [MOLY00146337] Dynamic SBP
 * 	
 * 	.
 *
 * 11 26 2015 yingfui.hung
 * [MOLY00116938] [VOLTE][NTT DOCOMO] requirement 5A.7.1.1 Service category
 * 	
 * 	.
 *
 * 10 13 2015 lexel.yu
 * [MOLY00144959] [UMOLY][LR11][TMO][WFC] Revert to cellular for emergency call
 * 	.
 *
 * 09 14 2015 lexel.yu
 * [MOLY00141573] [UMOLY][LR11][TMO][IMS] bCSFB
 * 	.
 *
 * 08 26 2015 ben.chiu
 * [MOLY00138217] [ViLTE] M0 migration ViLTE feature Interface
 * ViLTE interface patch back
 *
 * 07 09 2015 nick.wang
 * [MOLY00127009] WFC Patch back to UMOLY- interface part
 * .moly wfc interface patch
 *
 * 07 09 2015 nick.wang
 * [MOLY00127009] WFC Patch back to UMOLY- interface part
 * 	.jade interface sync
 *
 * 06 17 2015 nick.wang
 * [MOLY00118763] [WFC] feature patch back IMS interface for MD (MP7)
 * 	.IMS interface
 *
 * 06 09 2015 benjamin.kuo
 * [MOLY00119265] [WFC] feature patch back for VDM/SDM/ATP - interface/SAP parts
 * 	interface - SAP part.
 *
 * 04 02 2015 benjamin.kuo
 * [MOLY00105813] [WFC] migrate VDM from WFC.FPB to CMCCVOLTE.WFC.FPB
 * 	.interface part
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
 * 02 04 2015 allan.ke
 * [MOLY00092209] [CMCC VoLTE] ?@???o?_Conference call
 *
 * 02 04 2015 allan.ke
 * [MOLY00092209] [CMCC VoLTE] ?@???o?_Conference call
 * .

 * 04 27 2015 allan.ke
 * [MOLY00109430] [H][CMCC VoLTE] ?@???o?_Conference call
 * Patch back to MP7 for MOLY00092209, non-VDM headers
 *
 *
 * 04 27 2015 ben.chiu
 * [MOLY00109234] [VoLTE][Volunteer Patch] MP7.CMCCVOLTE.FPB merge back to MP7/MP7.CMCC
 * MP7.CMCCVOLTE.FPB merge back to MP7
 *
 * 04 27 2015 ben.chiu
 * [MOLY00109234] [VoLTE][Volunteer Patch] MP7.CMCCVOLTE.FPB merge back to MP7/MP7.CMCC
 * MP7.CMCCVOLTE.FPB merge back to MP7 
 *
 * 11 25 2014 allan.ke
 * [MOLY00085717] [VoLTE] Android L release VoLTE refactory for VDM and ATP
 * .
 *
 * 11 25 2014 danny.kuo
 * [MOLY00085717] [VoLTE] Android L release VoLTE refactory for VDM and ATP
 * .
 *
 * 11 11 2014 allan.ke
 * [MOLY00083542] [L4]add a new internal URC to notify VDM STK call number (+ESTKCNUM)
 * VDM/ATP part
 *
 * 04 23 2014 tehuang.liu
 * [MOLY00063538] [6290E2][VoLTE][VDM] Support VoLTE Gemini architecture
 * Check in VoLTE+Gemini related interfaces for VDM, ATP, L4C, EVAL, and ERRC
 *
 * 04 11 2014 tehuang.liu
 * [MOLY00062327] [6290E2][VoLTE][VDM] Support STKCALL in CS domain
 * .
 *
 * 04 09 2014 jinghan.wang
 * [MOLY00062091] [IMS][VoLTE] Check in STKCALL part for VDM TRK
 * .
 *
 * 02 17 2014 tehuang.liu
 * [MOLY00056277] [6290E2][VoLTE][VDM] Rel-10 SRVCC check-in
 * check in VDM_VCC implementation for Rel-10 SRVCC
 *
 * 02 14 2014 benjamin.kuo
 * [MOLY00055885] [6290E2][VoLTE][MWC] incorrect URC oder of VDM and ATP
 * +CRING
 *
 * 01 16 2014 tehuang.liu
 * [MOLY00053947] [6290E2][VoLTE][VDM] Enable IMS test mode for always directing MO calls to IMS domain
 * Check in VDM code to enable IMS test mode (AUTO or IMS_ALWAYS)
 *
 * 01 13 2014 ben.chiu
 * [MOLY00053410] [VoLTE][IMC] merge IMC to MOLY TRUNK
 * Add ads_ctrl message to VDM for Test Mode
 *
 * 12 10 2013 vend_edwin.liu
 * ATP.
 *****************************************************************************/

#ifndef _VDM_MSGID_H_
#define _VDM_MSGID_H_

#include "module_msg_range.h"


MODULE_MSG_BEGIN( MSG_ID_VDM_CODE_BEGIN )

/****************************************************************************
 *                       <1> Desitnation: VDM
 ****************************************************************************/

// <1.1> From ATP

// for VDM TRK
MSG_ID_VDM_ATP_CMD_DIAL_IND                    = MSG_ID_VDM_CODE_BEGIN,
MSG_ID_VDM_ATP_CMD_DIAL_URI_IND,
MSG_ID_VDM_ATP_CMD_DIAL_EMERG_IND,
MSG_ID_VDM_ATP_CMD_DIAL_EMERG_RETRY_IND,
MSG_ID_VDM_ATP_CMD_DIAL_CONF_IND,
MSG_ID_VDM_ATP_CMD_STK_CALL_IND,
MSG_ID_VDM_ATP_CMD_DIAL_CALL_PULL_IND,
MSG_ID_VDM_ATP_CMD_DIAL_FROM_LINE_IND,
MSG_ID_VDM_ATP_CMD_MT_CALL_APPROVE_IND,
MSG_ID_VDM_ATP_CMD_MT_CALL_ACCEPT_IND,
MSG_ID_VDM_ATP_CMD_MT_VT_SPECIAL_ACCEPT_IND,
MSG_ID_VDM_ATP_CMD_HANGUP_ALL_IND,
MSG_ID_VDM_ATP_CMD_FORCE_HANGUP_IND,
MSG_ID_VDM_ATP_CMD_CALL_RELATED_SS_IND,
MSG_ID_VDM_ATP_CMD_DTMF_IND,
MSG_ID_VDM_ATP_CMD_EXT_DTMF_IND,
MSG_ID_VDM_ATP_CMD_EXT_ERROR_REPORT_IND,
MSG_ID_VDM_ATP_CMD_LIST_CURRENT_CALLS_IND,
MSG_ID_VDM_ATP_CMD_LIST_CURRENT_CALLS_EXT_IND,
MSG_ID_VDM_ATP_CMD_ADS_RESULT_REPORT_IND,
MSG_ID_VDM_ATP_STK_CALL_NUM_IND,
MSG_ID_VDM_ATP_CMD_IMS_CALL_EXIST_IND,
MSG_ID_VDM_ATP_CMD_EMERG_SERV_CAT_IND,

MSG_ID_VDM_ATP_CMD_EXIT_ECBM_IND,
MSG_ID_VDM_ATP_CMD_ENTER_ECBM_IND,
MSG_ID_VDM_ATP_CMD_DISABLE_ECBM_IND,
MSG_ID_VDM_ATP_CMD_EMC_SESSION_START_IND,
MSG_ID_VDM_ATP_CMD_EMC_SESSION_STOP_IND,

MSG_ID_VDM_ATP_CS_CC_MO_CALL_CNF,
MSG_ID_VDM_ATP_CS_CC_EMERG_CALL_CNF,
MSG_ID_VDM_ATP_CS_CC_STK_CALL_CNF,
MSG_ID_VDM_ATP_CS_CC_MO_CALL_ID_IND,
MSG_ID_VDM_ATP_CS_CC_MT_CALL_PRESENT_IND,
MSG_ID_VDM_ATP_CS_CC_MT_CALL_SETUP_IND,
MSG_ID_VDM_ATP_CS_CC_MT_CALL_ACCEPT_CNF,
MSG_ID_VDM_ATP_CS_CC_HANGUP_ALL_CNF,
MSG_ID_VDM_ATP_CS_CC_FORCE_HANGUP_CNF,
MSG_ID_VDM_ATP_CS_CC_CALL_DISCONNECT_IND,
MSG_ID_VDM_ATP_CS_CC_CALL_RELATED_SS_CNF,
MSG_ID_VDM_ATP_CS_CC_EXT_ERROR_REPORT_CNF,
MSG_ID_VDM_ATP_CS_CC_SEND_DIGIT_CNF,
MSG_ID_VDM_ATP_CS_CC_START_SEND_DIGIT_CNF,
MSG_ID_VDM_ATP_CS_CC_STOP_SEND_DIGIT_CNF,
MSG_ID_VDM_ATP_CS_CC_LIST_CURRENT_CALLS_CNF,
MSG_ID_VDM_ATP_CS_CC_ECPI_TRANSLATE_IND,
MSG_ID_VDM_ATP_CS_CC_EMERG_SERV_CAT_CNF,

MSG_ID_VDM_ATP_IMS_CALL_SCM_CNF,
MSG_ID_VDM_ATP_CMD_RTT_CAPABILITY_IND,

MSG_ID_VDM_ATP_CMD_ENH_VOLTE_SI_IND,

// for VDM ADS
MSG_ID_VDM_ATP_FDN_ECC_CHECK_CNF,
MSG_ID_VDM_ATP_GET_SSAC_PARAM_CNF,
MSG_ID_VDM_ATP_IMS_VOPS_SUPP_IND,
MSG_ID_VDM_ATP_EMB_S1_SUPP_IND,
MSG_ID_VDM_ATP_VOICE_MODE_IND,
MSG_ID_VDM_ATP_EUTRAN_VDP_IND,
MSG_ID_VDM_ATP_UE_MODE_IND,
MSG_ID_VDM_ATP_NAS_REG_STATUS_IND,
MSG_ID_VDM_ATP_CELL_INFO_UPDATE_IND,
MSG_ID_VDM_ATP_RAT_MODE_IND,
MSG_ID_VDM_ATP_INTER_RAT_STATUS_IND,
MSG_ID_VDM_ATP_NW_SEARCH_STATUS_IND,
MSG_ID_VDM_ATP_NW_SELECT_CNF,
MSG_ID_VDM_ATP_ABORT_NW_SELECT_CNF,
MSG_ID_VDM_ATP_OOS_START_IND,
MSG_ID_VDM_ATP_OOS_END_IND,
MSG_ID_VDM_ATP_IMS_REG_STATUS_IND,
MSG_ID_VDM_ATP_CMD_ADS_MODE_IND,
MSG_ID_VDM_ATP_RADIO_LINK_QUALITY_IND,
MSG_ID_VDM_ATP_CMD_WFC_PROFILE_IND,
MSG_ID_VDM_ATP_IMS_HANDOVER_START_IND,
MSG_ID_VDM_ATP_IMS_HANDOVER_END_IND,
MSG_ID_VDM_ATP_CMD_VIDEO_CAPABILITY_IND,
MSG_ID_VDM_ATP_CMD_WFC_SWITCH_IND,
MSG_ID_VDM_ATP_CMD_VOICE_CALL_PREFER_C2K_IND,
MSG_ID_VDM_ATP_CMD_IMS_CONFIG_IND,
MSG_ID_VDM_ATP_CMD_ADS_DIGITS_TRN_IND,
MSG_ID_VDM_ATP_CMD_SELF_ACTIVATION_IND,
MSG_ID_VDM_ATP_CMD_SWITCH_TO_EMERGENCY_IND,

MSG_ID_VDM_ATP_REPORTED_RAT_CHANGE_IND,
MSG_ID_VDM_ATP_C2K_SERVICE_STATE_IND,
MSG_ID_VDM_ATP_C2K_1X_CONN_STATUS_IND,
MSG_ID_VDM_ATP_GMSS_SET_HVOLTE_MODE_CNF,
MSG_ID_VDM_ATP_EMC_SERVICE_SCAN_CNF,
MSG_ID_VDM_ATP_EMC_SERVICE_IND,
MSG_ID_VDM_ATP_IMS_DOMAIN_PREFERENCE_IND,
MSG_ID_VDM_ATP_HVOLTE_SILENT_REDIAL_IND,

MSG_ID_VDM_ATP_ACCESS_BARRING_IND,
MSG_ID_VDM_ATP_ECFG_SET_IND,
MSG_ID_VDM_ATP_RF_STATE_IND,
MSG_ID_VDM_ATP_CMD_EMC_SERVICE_SCAN_IND,
MSG_ID_VDM_ATP_CMD_EMC_SERVICE_SCAN_RESULT_URI_IND,

MSG_ID_VDM_ATP_GMSS_TRIGGER_C2K_SEARCH_IND,

// for VDM VCC
MSG_ID_VDM_ATP_SRVCC_STATUS_UPDATE_IND,
MSG_ID_VDM_ATP_SRVCC_CONTEXT_TRANSFER_CNF,
MSG_ID_VDM_ATP_CMD_SRVCC_CONTEXT_TRANSFER_IND,


// for VDM CTRL
MSG_ID_VDM_ATP_CS_CC_MT_CALL_RING_IND,


// <1.2> From IMC

// for VDM TRK
MSG_ID_VDM_IMC_IMS_CC_MO_CALL_CNF,
MSG_ID_VDM_IMC_IMS_CC_STK_CALL_CNF,
MSG_ID_VDM_IMC_IMS_CC_MO_CALL_DOMAIN_CONFLICT_RSP,
MSG_ID_VDM_IMC_IMS_CC_MO_CONF_CALL_CNF,
MSG_ID_VDM_IMC_IMS_CC_MT_CALL_PRESENT_IND,
MSG_ID_VDM_IMC_IMS_CC_MT_CALL_SETUP_IND,
MSG_ID_VDM_IMC_IMS_CC_MT_CALL_ABORT_IND,
MSG_ID_VDM_IMC_IMS_CC_MT_CALL_ACCEPT_CNF,
MSG_ID_VDM_IMC_IMS_CC_MT_VT_SPECIAL_ACCEPT_CNF,
MSG_ID_VDM_IMC_IMS_CC_HANGUP_ALL_CNF,
MSG_ID_VDM_IMC_IMS_CC_FORCE_HANGUP_CNF,
MSG_ID_VDM_IMC_IMS_CC_CALL_DISCONNECT_IND,
MSG_ID_VDM_IMC_IMS_CC_CALL_RELATED_SS_CNF,
MSG_ID_VDM_IMC_IMS_CC_EXT_ERROR_REPORT_CNF,
MSG_ID_VDM_IMC_IMS_CC_SEND_DIGIT_CNF,
MSG_ID_VDM_IMC_IMS_CC_START_SEND_DIGIT_CNF,
MSG_ID_VDM_IMC_IMS_CC_STOP_SEND_DIGIT_CNF,
MSG_ID_VDM_IMC_IMS_CC_LIST_CURRENT_CALLS_CNF,
MSG_ID_VDM_IMC_IMS_CC_ALLOC_CONF_CALL_IND,
MSG_ID_VDM_IMC_DEDICATED_EPS_BEARER_STATUS_IND,

// for VDM ADS
MSG_ID_VDM_IMC_ADS_CTRL_IND,
MSG_ID_VDM_IMC_IMS_CC_SET_HVOLTE_CALL_DOMAIN_CNF,
MSG_ID_VDM_IMC_TIMER_EPDG_CS_STATUS_IND,
MSG_ID_VDM_IMC_IS_CS_ALLOWED_REQ,

// for VDM VCC
MSG_ID_VDM_IMC_SRVCC_CONTEXT_TRANSFER_IND,

// for VDM CTRL
MSG_ID_VDM_IMC_IMS_CC_MT_CALL_RING_IND,

// <1.3> From CVAL

// for VDM ADS
MSG_ID_VDM_CVAL_SEND_DCN_START_IND,
MSG_ID_VDM_CVAL_SEND_DCN_END_IND,


// <1.4> From L4B

// for VDM TRK
MSG_ID_VDM_L4B_CS_CC_MO_CALL_CNF,
MSG_ID_VDM_L4B_CS_CC_EMERG_CALL_CNF,
MSG_ID_VDM_L4B_CS_CC_STK_CALL_CNF,
MSG_ID_VDM_L4B_CS_CC_MO_CALL_ID_IND,
MSG_ID_VDM_L4B_CS_CC_MT_CALL_PRESENT_IND,
MSG_ID_VDM_L4B_CS_CC_MT_CALL_SETUP_IND,
MSG_ID_VDM_L4B_CS_CC_MT_CALL_ACCEPT_CNF,
MSG_ID_VDM_L4B_CS_CC_HANGUP_ALL_CNF,
MSG_ID_VDM_L4B_CS_CC_FORCE_HANGUP_CNF,
MSG_ID_VDM_L4B_CS_CC_CALL_DISCONNECT_IND,
MSG_ID_VDM_L4B_CS_CC_CALL_RELATED_SS_CNF,
MSG_ID_VDM_L4B_CS_CC_EXT_ERROR_REPORT_CNF,
MSG_ID_VDM_L4B_CS_CC_SEND_DIGIT_CNF,
MSG_ID_VDM_L4B_CS_CC_START_SEND_DIGIT_CNF,
MSG_ID_VDM_L4B_CS_CC_STOP_SEND_DIGIT_CNF,
MSG_ID_VDM_L4B_CS_CC_LIST_CURRENT_CALLS_CNF,
MSG_ID_VDM_L4B_CS_CC_LIST_CURRENT_CALLS_EXT_CNF,
MSG_ID_VDM_L4B_CS_CC_ECPI_TRANSLATE_IND,
MSG_ID_VDM_L4B_CS_CC_EMERG_SERV_CAT_CNF,

MSG_ID_VDM_L4B_C2K_CC_MO_CALL_CNF,
MSG_ID_VDM_L4B_C2K_CC_EMERG_CALL_CNF,
MSG_ID_VDM_L4B_C2K_CC_STK_CALL_CNF,
MSG_ID_VDM_L4B_C2K_CC_MO_CALL_ID_IND,
MSG_ID_VDM_L4B_C2K_CC_MT_CALL_PRESENT_IND,
MSG_ID_VDM_L4B_C2K_CC_MT_CALL_SETUP_IND,
MSG_ID_VDM_L4B_C2K_CC_MT_CALL_ACCEPT_CNF,
MSG_ID_VDM_L4B_C2K_CC_HANGUP_ALL_CNF,
MSG_ID_VDM_L4B_C2K_CC_FORCE_HANGUP_CNF,
MSG_ID_VDM_L4B_C2K_CC_CALL_DISCONNECT_IND,
MSG_ID_VDM_L4B_C2K_CC_CALL_RELATED_SS_CNF,
MSG_ID_VDM_L4B_C2K_CC_EXT_ERROR_REPORT_CNF,
MSG_ID_VDM_L4B_C2K_CC_SEND_DIGIT_CNF,
MSG_ID_VDM_L4B_C2K_CC_START_SEND_DIGIT_CNF,
MSG_ID_VDM_L4B_C2K_CC_STOP_SEND_DIGIT_CNF,
MSG_ID_VDM_L4B_C2K_CC_LIST_CURRENT_CALLS_CNF,
MSG_ID_VDM_L4B_C2K_CC_ECPI_TRANSLATE_IND,
MSG_ID_VDM_L4B_C2K_CC_EMERG_SERV_CAT_CNF,

MSG_ID_VDM_L4B_STK_CALL_NUM_IND,

// for VDM ADS
MSG_ID_VDM_L4B_FDN_ECC_CHECK_CNF,

// <1.5> From GMSS
MSG_ID_VDM_GMSS_EMC_SERVICE_SCAN_ABORT_CNF,

// <1.6> From L4C
MSG_ID_L4CVDM_DATA_ALLOW_REQ,

/****************************************************************************
 *                   <2> Destination: VDM TRK
 ****************************************************************************/

// <2.1> From VDM CTRL
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_IND,
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_URI_IND,
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_EMERG_IND,
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_EMERG_RETRY_IND,
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_CONF_IND,
MSG_ID_VDM_CTRL_TRK_CMD_STK_CALL_IND,
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_CALL_PULL_IND,
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_FROM_LINE_IND,
MSG_ID_VDM_CTRL_TRK_CMD_MT_CALL_APPROVE_IND,
MSG_ID_VDM_CTRL_TRK_CMD_MT_CALL_ACCEPT_IND,
MSG_ID_VDM_CTRL_TRK_CMD_MT_VT_SPECIAL_ACCEPT_IND,
MSG_ID_VDM_CTRL_TRK_CMD_HANGUP_ALL_IND,
MSG_ID_VDM_CTRL_TRK_CMD_FORCE_HANGUP_IND,
MSG_ID_VDM_CTRL_TRK_CMD_CALL_RELATED_SS_IND,
MSG_ID_VDM_CTRL_TRK_CMD_DTMF_IND,
MSG_ID_VDM_CTRL_TRK_CMD_EXT_DTMF_IND,
MSG_ID_VDM_CTRL_TRK_CMD_EXT_ERROR_REPORT_IND,
MSG_ID_VDM_CTRL_TRK_CMD_LIST_CURRENT_CALLS_IND,
MSG_ID_VDM_CTRL_TRK_CMD_LIST_CURRENT_CALLS_EXT_IND,
MSG_ID_VDM_CTRL_TRK_CMD_ADS_RESULT_REPORT_IND,

MSG_ID_VDM_CTRL_TRK_CMD_EXIT_ECBM_IND,
MSG_ID_VDM_CTRL_TRK_CMD_EMC_SESSION_START_IND,
MSG_ID_VDM_CTRL_TRK_CMD_EMC_SESSION_STOP_IND,

MSG_ID_VDM_CTRL_TRK_STK_CALL_NUM_IND,
MSG_ID_VDM_CTRL_TRK_CMD_IMS_CALL_EXIST_IND,
MSG_ID_VDM_CTRL_TRK_CMD_EMERG_SERV_CAT_IND,
MSG_ID_VDM_CTRL_TRK_CMD_RTT_CAPABILITY_IND,

MSG_ID_VDM_CTRL_TRK_CS_CC_MO_CALL_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_STK_CALL_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_EMERG_CALL_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_MO_CALL_ID_IND,
MSG_ID_VDM_CTRL_TRK_CS_CC_MT_CALL_PRESENT_IND,
MSG_ID_VDM_CTRL_TRK_CS_CC_MT_CALL_SETUP_IND,
MSG_ID_VDM_CTRL_TRK_CS_CC_MT_CALL_ACCEPT_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_HANGUP_ALL_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_FORCE_HANGUP_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_CALL_DISCONNECT_IND,
MSG_ID_VDM_CTRL_TRK_CS_CC_CALL_RELATED_SS_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_EXT_ERROR_REPORT_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_SEND_DIGIT_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_START_SEND_DIGIT_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_STOP_SEND_DIGIT_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_ECPI_TRANSLATE_IND,
MSG_ID_VDM_CTRL_TRK_CS_CC_LIST_CURRENT_CALLS_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_LIST_CURRENT_CALLS_EXT_CNF,
MSG_ID_VDM_CTRL_TRK_CS_CC_EMERG_SERV_CAT_CNF,

MSG_ID_VDM_CTRL_TRK_C2K_CC_MO_CALL_CNF,
MSG_ID_VDM_CTRL_TRK_C2K_CC_STK_CALL_CNF,
MSG_ID_VDM_CTRL_TRK_C2K_CC_EMERG_CALL_CNF,
MSG_ID_VDM_CTRL_TRK_C2K_CC_MO_CALL_ID_IND,
MSG_ID_VDM_CTRL_TRK_C2K_CC_MT_CALL_PRESENT_IND,
MSG_ID_VDM_CTRL_TRK_C2K_CC_MT_CALL_SETUP_IND,
MSG_ID_VDM_CTRL_TRK_C2K_CC_MT_CALL_ACCEPT_CNF,
MSG_ID_VDM_CTRL_TRK_C2K_CC_HANGUP_ALL_CNF,
MSG_ID_VDM_CTRL_TRK_C2K_CC_FORCE_HANGUP_CNF,
MSG_ID_VDM_CTRL_TRK_C2K_CC_CALL_DISCONNECT_IND,
MSG_ID_VDM_CTRL_TRK_C2K_CC_CALL_RELATED_SS_CNF,
MSG_ID_VDM_CTRL_TRK_C2K_CC_EXT_ERROR_REPORT_CNF,
MSG_ID_VDM_CTRL_TRK_C2K_CC_SEND_DIGIT_CNF,
MSG_ID_VDM_CTRL_TRK_C2K_CC_START_SEND_DIGIT_CNF,
MSG_ID_VDM_CTRL_TRK_C2K_CC_STOP_SEND_DIGIT_CNF,
MSG_ID_VDM_CTRL_TRK_C2K_CC_ECPI_TRANSLATE_IND,
MSG_ID_VDM_CTRL_TRK_C2K_CC_LIST_CURRENT_CALLS_CNF,
MSG_ID_VDM_CTRL_TRK_C2K_CC_EMERG_SERV_CAT_CNF,

MSG_ID_VDM_CTRL_TRK_IMS_CALL_SCM_CNF,

MSG_ID_VDM_CTRL_TRK_IMS_CC_MO_CALL_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_STK_CALL_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_MO_CONF_CALL_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_MT_CALL_PRESENT_IND,
MSG_ID_VDM_CTRL_TRK_IMS_CC_MT_CALL_SETUP_IND,
MSG_ID_VDM_CTRL_TRK_IMS_CC_MT_CALL_ABORT_IND,
MSG_ID_VDM_CTRL_TRK_IMS_CC_MT_CALL_ACCEPT_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_MT_VT_SPECIAL_ACCEPT_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_HANGUP_ALL_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_FORCE_HANGUP_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_CALL_DISCONNECT_IND,
MSG_ID_VDM_CTRL_TRK_IMS_CC_CALL_RELATED_SS_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_EXT_ERROR_REPORT_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_SEND_DIGIT_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_START_SEND_DIGIT_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_STOP_SEND_DIGIT_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_LIST_CURRENT_CALLS_CNF,
MSG_ID_VDM_CTRL_TRK_IMS_CC_ALLOC_CONF_CALL_IND,
MSG_ID_VDM_CTRL_TRK_DEDICATED_EPS_BEARER_STATUS_IND,
MSG_ID_VDM_CTRL_TRK_PCO_UPDATE_IND,
MSG_ID_VDM_CTRL_TRK_IMS_CC_MT_CALL_RING_IND,
MSG_ID_VDM_CTRL_TRK_DATA_ALLOW_IND,
MSG_ID_VDM_CTRL_TRK_ENH_VOLTE_SI_IND,

MSG_ID_VDM_CTRL_TRK_TIMER_EXPIRY_IND,

// <2.2> From VDM ADS
MSG_ID_VDM_TRK_ADS_INIT_CNF,
MSG_ID_VDM_TRK_ADS_SELECT_CNF,
MSG_ID_VDM_TRK_ADS_END_CNF,
MSG_ID_VDM_TRK_ADS_IMS_HANDOVER_START_IND,
MSG_ID_VDM_TRK_ADS_IMS_HANDOVER_END_IND,

// <2.3> From VDM VCC
MSG_ID_VDM_TRK_VCC_SRVCC_START_IND,
MSG_ID_VDM_TRK_VCC_SRVCC_END_IND,
MSG_ID_VDM_TRK_VCC_CONF_SRVCC_IND, // for R10 SRVCC
MSG_ID_VDM_TRK_VCC_ATP_SRVCC_CONTEXT_TRANSFER_IND,

/****************************************************************************
 *                          <3> Destination: VDM ADS
 ****************************************************************************/

// <3.1> From VDM CTRL
MSG_ID_VDM_CTRL_ADS_FDN_ECC_CHECK_CNF,
MSG_ID_VDM_CTRL_ADS_GET_SSAC_PARAM_CNF,
MSG_ID_VDM_CTRL_ADS_IMS_VOPS_SUPP_IND,
MSG_ID_VDM_CTRL_ADS_EMB_S1_SUPP_IND,
MSG_ID_VDM_CTRL_ADS_VOICE_MODE_IND,
MSG_ID_VDM_CTRL_ADS_EUTRAN_VDP_IND,
MSG_ID_VDM_CTRL_ADS_UE_MODE_IND,
MSG_ID_VDM_CTRL_ADS_NAS_REG_STATUS_IND,
MSG_ID_VDM_CTRL_ADS_CELL_INFO_UPDATE_IND,
MSG_ID_VDM_CTRL_ADS_RAT_MODE_IND,
MSG_ID_VDM_CTRL_ADS_INTER_RAT_STATUS_IND,
MSG_ID_VDM_CTRL_ADS_NW_SEARCH_STATUS_IND,
MSG_ID_VDM_CTRL_ADS_NW_SELECT_CNF,
MSG_ID_VDM_CTRL_ADS_ABORT_NW_SELECT_CNF,
MSG_ID_VDM_CTRL_ADS_OOS_START_IND,
MSG_ID_VDM_CTRL_ADS_OOS_END_IND,
MSG_ID_VDM_CTRL_ADS_IMS_REG_STATUS_IND,
MSG_ID_VDM_CTRL_ADS_ADS_CTRL_IND,
MSG_ID_VDM_CTRL_ADS_TIMER_EXPIRY_IND,
MSG_ID_VDM_CTRL_ADS_CMD_ADS_MODE_IND,
MSG_ID_VDM_CTRL_ADS_RADIO_LINK_QUALITY_IND,
MSG_ID_VDM_CTRL_ADS_CMD_WFC_PROFILE_IND,
MSG_ID_VDM_CTRL_ADS_IMS_HANDOVER_START_IND,
MSG_ID_VDM_CTRL_ADS_IMS_HANDOVER_END_IND,
MSG_ID_VDM_CTRL_ADS_CMD_VIDEO_CAPABILITY_IND,
MSG_ID_VDM_CTRL_ADS_CMD_IMS_CONFIG_IND,
MSG_ID_VDM_CTRL_ADS_CMD_ADS_DIGITS_TRN_IND,
MSG_ID_VDM_CTRL_ADS_ME_RECONFIGURE_IND,
MSG_ID_VDM_CTRL_ADS_ME_IMS_RECONFIGURE_IND,
MSG_ID_VDM_CTRL_ADS_ME_DSBP_RECONFIGURE_IND,
MSG_ID_VDM_CTRL_ADS_CMD_WFC_SWITCH_IND,
MSG_ID_VDM_CTRL_ADS_CMD_VOICE_CALL_PREFER_C2K_IND,
MSG_ID_VDM_CTRL_ADS_CMD_SELF_ACTIVATION_IND,
MSG_ID_VDM_CTRL_ADS_CMD_SWITCH_TO_EMERGENCY_IND,
MSG_ID_VDM_CTRL_ADS_GMSS_TRIGGER_C2K_SEARCH_IND,

MSG_ID_VDM_CTRL_ADS_REPORTED_RAT_CHANGE_IND,
MSG_ID_VDM_CTRL_ADS_C2K_SERVICE_STATE_IND,
MSG_ID_VDM_CTRL_ADS_C2K_1X_CONN_STATUS_IND,
MSG_ID_VDM_CTRL_ADS_REPORTED_RAT_IND,
MSG_ID_VDM_CTRL_ADS_GMSS_SET_HVOLTE_MODE_CNF,
MSG_ID_VDM_CTRL_ADS_IMC_SET_HVOLTE_CALL_DOMAIN_CNF,
MSG_ID_VDM_CTRL_ADS_EMC_SERVICE_SCAN_CNF,
MSG_ID_VDM_CTRL_ADS_EMC_SERVICE_IND,
MSG_ID_VDM_CTRL_ADS_CVAL_SEND_DCN_START_IND,
MSG_ID_VDM_CTRL_ADS_CVAL_SEND_DCN_END_IND,
MSG_ID_VDM_CTRL_ADS_IMC_IMS_CC_MO_CALL_DOMAIN_CONFLICT_RSP,
MSG_ID_VDM_CTRL_ADS_IMS_DOMAIN_PREFERENCE_IND,
MSG_ID_VDM_CTRL_ADS_HVOLTE_SILENT_REDIAL_IND,

MSG_ID_VDM_CTRL_ADS_ACCESS_BARRING_IND,
MSG_ID_VDM_CTRL_ADS_ECFG_SET_IND,
MSG_ID_VDM_CTRL_ADS_PHONE_STATE_IND,
MSG_ID_VDM_CTRL_ADS_TIMER_EPDG_CS_STATUS_IND,
MSG_ID_VDM_CTRL_ADS_EMC_SERVICE_SCAN_IND,
MSG_ID_VDM_CTRL_ADS_EMC_SERVICE_SCAN_URI_IND,
MSG_ID_VDM_CTRL_ADS_EMC_SERVICE_SCAN_ABORT_CNF,
MSG_ID_VDM_CTRL_ADS_GENERAL_MODEM_CONFIGURE_QUERY_REQ,
MSG_ID_VDM_CTRL_ADS_GENERAL_MODEM_CONFIGURE_SET_REQ,
MSG_ID_VDM_CTRL_ADS_IS_CS_ALLOWED_REQ,

// <3.2> From VDM TRK
MSG_ID_VDM_TRK_ADS_INIT_REQ,
MSG_ID_VDM_TRK_ADS_SELECT_REQ,
MSG_ID_VDM_TRK_ADS_END_REQ,


// <3.3> From VDM VCC
MSG_ID_VDM_ADS_VCC_SRVCC_START_IND,
MSG_ID_VDM_ADS_VCC_SRVCC_END_IND,


/****************************************************************************
 *                          <4> Destination: VDM VCC
 ****************************************************************************/

// <4.1> From VDM CTRL
MSG_ID_VDM_CTRL_VCC_SRVCC_STATUS_UPDATE_IND,
MSG_ID_VDM_CTRL_VCC_SRVCC_CONTEXT_TRANSFER_CNF,

MSG_ID_VDM_CTRL_VCC_SRVCC_CONTEXT_TRANSFER_IND,

MSG_ID_VDM_CTRL_VCC_TIMER_EXPIRY_IND,
MSG_ID_VDM_CTRL_VCC_ATP_SRVCC_CONTEXT_TRANSFER_IND,



// <4.2> From VDM TRK
MSG_ID_VDM_TRK_VCC_CONF_SRVCC_RSP, // for R10 SRVCC


// <4.3> From VDM ADS


/****************************************************************************
 *                          <5> Destination: VDM CTRL
 ****************************************************************************/

// <5.1> From VDM TRK
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_URI_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_EMERG_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_EMERG_RETRY_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_FROM_LINE_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_DIAL_CONF_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_STK_CALL_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_MT_CALL_APPROVE_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_MT_CALL_RING_REQ,
MSG_ID_VDM_CTRL_TRK_CMD_MT_CALL_ACCEPT_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_MT_VT_SPECIAL_ACCEPT_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_HANGUP_ALL_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_FORCE_HANGUP_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_CALL_RELATED_SS_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_DTMF_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_EXT_DTMF_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_EXT_ERROR_REPORT_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_LIST_CURRENT_CALLS_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_LIST_CURRENT_CALLS_EXT_RSP,
MSG_ID_VDM_CTRL_TRK_CMD_RTT_CAPABILITY_RSP,
MSG_ID_VDM_CTRL_TRK_SND_ECPI_MO_CALL_ID_ALLOC_REQ,
MSG_ID_VDM_CTRL_TRK_SND_ECPI_MT_CALL_SETUP_REQ,
MSG_ID_VDM_CTRL_TRK_SND_ECPI_CALL_RELEASE_REQ,
MSG_ID_VDM_CTRL_TRK_SND_MT_CALL_APPROVE_REQ,
MSG_ID_VDM_CTRL_TRK_SND_GENERAL_MODEM_CONFIGURE_SET_REQ,
MSG_ID_VDM_CTRL_TRK_SND_IMS_CALL_INFO_REQ,
MSG_ID_VDM_CTRL_TRK_SND_STK_CALL_TR_REQ,
MSG_ID_VDM_CTRL_TRK_VDM_VOICE_STATUS_REQ,
MSG_ID_VDM_CTRL_TRK_VDM_IMS_VOICE_STATUS_REQ,
MSG_ID_VDM_CTRL_TRK_SND_ADS_RESULT_REPORT_REQ,
MSG_ID_VDM_CTRL_TRK_SND_CONF_CHECK_RESULT_REQ,
MSG_ID_VDM_CTRL_TRK_SND_ADS_SWITCH_TO_EMERGENCY_REQ,
MSG_ID_VDM_CTRL_TRK_CMD_EMERG_SERV_CAT_RSP,
MSG_ID_VDM_CTRL_TRK_ECBM_MODE_START_REQ,
MSG_ID_VDM_CTRL_TRK_ECBM_MODE_STOP_REQ,
MSG_ID_VDM_CTRL_TRK_SND_ECBM_MODE_DISABLED_REQ,
MSG_ID_VDM_CTRL_TRK_SND_EXIT_ECBM_REQ,
MSG_ID_VDM_CTRL_TRK_SND_IMS_CALL_SCM_REQ,
MSG_ID_VDM_CTRL_TRK_SND_ECPI_RTT_REDIAL_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_1X_CALL_STATUS_IND,

MSG_ID_VDM_CTRL_TRK_CS_CC_MO_CALL_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_EMERG_CALL_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_STK_CALL_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_MT_CALL_PRESENT_RSP,
MSG_ID_VDM_CTRL_TRK_CS_CC_MT_CALL_ACCEPT_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_HANGUP_ALL_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_FORCE_HANGUP_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_CALL_RELATED_SS_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_EXT_ERROR_REPORT_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_SEND_DIGIT_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_START_SEND_DIGIT_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_STOP_SEND_DIGIT_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_ECPI_TRANSLATE_RSP,
MSG_ID_VDM_CTRL_TRK_CS_CC_LIST_CURRENT_CALLS_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_LIST_CURRENT_CALLS_EXT_REQ,
MSG_ID_VDM_CTRL_TRK_CS_CC_EMERG_SERV_CAT_REQ,

MSG_ID_VDM_CTRL_TRK_C2K_CC_MO_CALL_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_CC_EMERG_CALL_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_CC_STK_CALL_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_CC_MT_CALL_PRESENT_RSP,
MSG_ID_VDM_CTRL_TRK_C2K_CC_MT_CALL_ACCEPT_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_CC_HANGUP_ALL_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_CC_FORCE_HANGUP_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_CC_CALL_RELATED_SS_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_CC_EXT_ERROR_REPORT_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_CC_SEND_DIGIT_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_CC_START_SEND_DIGIT_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_CC_STOP_SEND_DIGIT_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_CC_ECPI_TRANSLATE_RSP,
MSG_ID_VDM_CTRL_TRK_C2K_CC_LIST_CURRENT_CALLS_REQ,
MSG_ID_VDM_CTRL_TRK_C2K_CC_EMERG_SERV_CAT_REQ,

MSG_ID_VDM_CTRL_TRK_IMS_CC_MO_CALL_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_STK_CALL_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_MO_CONF_CALL_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_MT_CALL_PRESENT_RSP,
MSG_ID_VDM_CTRL_TRK_IMS_CC_MT_CALL_ACCEPT_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_MT_VT_SPECIAL_ACCEPT_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_HANGUP_ALL_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_FORCE_HANGUP_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_CALL_RELATED_SS_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_EXT_ERROR_REPORT_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_SEND_DIGIT_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_START_SEND_DIGIT_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_STOP_SEND_DIGIT_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_LIST_CURRENT_CALLS_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_ALLOC_CONF_CALL_RSP,
MSG_ID_VDM_CTRL_TRK_IMS_CC_REVERT_TO_CELLULAR_START_REQ,
MSG_ID_VDM_CTRL_TRK_IMS_CC_REVERT_TO_CELLULAR_END_REQ,

// <5.2> From VDM ADS
MSG_ID_VDM_CTRL_ADS_SND_ADS_ATTEMPT_NOTIFICATION_REQ,
MSG_ID_VDM_CTRL_ADS_SND_ADS_END_NOTIFICATION_REQ,
MSG_ID_VDM_CTRL_ADS_FDN_ECC_CHECK_REQ,
MSG_ID_VDM_CTRL_ADS_GET_SSAC_PARAM_REQ,
MSG_ID_VDM_CTRL_ADS_NW_SELECT_REQ,
MSG_ID_VDM_CTRL_ADS_ABORT_NW_SELECT_REQ,
MSG_ID_VDM_CTRL_ADS_SND_CONF_CHECK_RESULT_REQ,
MSG_ID_VDM_CTRL_ADS_SND_DIGITS_TRN_QUERY_REQ,
MSG_ID_VDM_CTRL_ADS_SND_ME_IMS_RECONFIGURE_CNF,
MSG_ID_VDM_CTRL_ADS_GMSS_SET_HVOLTE_MODE_REQ,
MSG_ID_VDM_CTRL_ADS_IMC_SET_HVOLTE_CALL_DOMAIN_REQ,
MSG_ID_VDM_CTRL_ADS_EMC_SERVICE_SCAN_REQ,
MSG_ID_VDM_CTRL_ADS_CVAL_SEND_DCN_REQ,
MSG_ID_VDM_CTRL_ADS_CVAL_SEND_DCN_START_RSP,
MSG_ID_VDM_CTRL_ADS_CVAL_IMS_REG_STATUS_IND,
MSG_ID_VDM_CTRL_ADS_SND_ME_RECONFIGURE_CNF,
MSG_ID_VDM_CTRL_ADS_SND_ME_DSBP_RECONFIGURE_CNF,
MSG_ID_VDM_CTRL_ADS_IMC_IMS_CC_MO_CALL_DOMAIN_CONFLICT_IND,
MSG_ID_VDM_CTRL_ADS_ECFG_SET_RSP,
MSG_ID_VDM_CTRL_ADS_CMD_SELF_ACTIVATION_RSP,
MSG_ID_VDM_CTRL_ADS_PHONE_STATE_RSP,
MSG_ID_VDM_CTRL_ADS_SND_EMC_SERVICE_SCAN_URI_REQ,
MSG_ID_VDM_CTRL_ADS_EMC_SERVICE_SCAN_ABORT_REQ,
MSG_ID_VDM_CTRL_ADS_GENERAL_MODEM_CONFIGURE_QUERY_CNF,
MSG_ID_VDM_CTRL_ADS_GENERAL_MODEM_CONFIGURE_SET_CNF,
MSG_ID_VDM_CTRL_ADS_IS_CS_ALLOWED_CNF,

// <5.3> From VDM VCC
MSG_ID_VDM_CTRL_VCC_SRVCC_STATUS_UPDATE_REQ,
MSG_ID_VDM_CTRL_VCC_SRVCC_CONTEXT_TRANSFER_REQ,
MSG_ID_VDM_CTRL_VCC_SND_SRVCC_CONF_CALL_ID_REQ,
MSG_ID_VDM_CTRL_VCC_ATP_SRVCC_CONTEXT_TRANSFER_RSP,


/****************************************************************************
 *                   <6> For UT
 ****************************************************************************/
// For VDM UT
MSG_ID_VDM_UT_CONFIG,
MSG_ID_VDM_UT_READ_STATUS,
MSG_ID_VDM_UT_STATUS_REPORT,

// For VDM TRK UT
MSG_ID_VDM_TRK_UT_CONFIG,
MSG_ID_VDM_TRK_UT_READ_STATUS,
MSG_ID_VDM_TRK_UT_STATUS_REPORT,

// For VDM ADS UT
MSG_ID_VDM_ADS_UT_CONFIG,
MSG_ID_VDM_ADS_UT_READ_STATUS,
MSG_ID_VDM_ADS_UT_STATUS_REPORT,

// For VDM VCC UT
MSG_ID_VDM_VCC_UT_CONFIG,
MSG_ID_VDM_VCC_UT_READ_STATUS,
MSG_ID_VDM_VCC_UT_STATUS_REPORT,

MSG_ID_VDM_CODE_END,

MODULE_MSG_END( MSG_ID_VDM_CODE_TAIL )


#endif // _VDM_MSGID_H_
