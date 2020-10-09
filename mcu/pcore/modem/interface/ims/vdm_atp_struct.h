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
 *   vdm_atp_struct.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines the interface messages between VDM and IMS Proxy.
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * 10 21 2019 yulong.chang
 * [MOLY00449400] 【?网??】[OC1-石家庄][PD1934][CS][?信]?端卡1?信VoLTE+卡2?信VoLTE，???端卡1?法成功呼叫?急??112（附?屏）（5/5）
 * 	
 * 	change type of is_new_call in +EMCSS
 *
 * 09 16 2019 delphine.wang
 * [MOLY00436796] [Gen93] DSDA-like feature check in
 * 	
 * 	.
 *
 * 06 26 2019 yulong.chang
 * [MOLY00416376] [VDM][TMO-EU][DTAG]  Add new AT command to know whether user approve leaving flight mode
 * 	
 * 	DTAG leaving airplane mode after receiving 380 design change
 *
 * 06 19 2019 yulong.chang
 * [MOLY00408923] [VDM][USCC] Extend AT+EMCSS to inform GMSS scan reason
 * 	
 * 	USCC requirement: to extend AT+EMCSS parameters (VDM part)
 *
 * 02 15 2019 yulong.chang
 * [MOLY00317371] [VDM][Softbank] Call rejection of calls from specified phone number - ATP/VDM part
 * extend +EAIC - VDM part
 *
 * 02 15 2019 yulong.chang
 * [MOLY00364936] [Gen93][TTA]VoLTE agreement:2.3 The unity of BYE REASON][Low Battery] (AT+ECHLD)
 * 	
 * 	patch sync AT+ECHLD from Gen95
 *
 * 02 15 2019 yulong.chang
 * [MOLY00364936] [Gen93][TTA]VoLTE agreement:2.3 The unity of BYE REASON][Low Battery] (AT+ECHLD)
 * patch sync AT+ECHLD from Gen95
 *
 * 02 01 2019 hsuanchang.chen
 * [MOLY00380816] [Gen93][patch back] LR12A.R3.TC01.SP to LR12A/LR12A.R3.MP
 * 	
 * 	. TC01 sync to R3
 *
 * 12 07 2018 yulong.chang
 * [MOLY00367332] [P693S10][通?】是否有方法判?????是否?接而?？
 * add redirect number in +EAIC (ATP/VDM part)
 *
 * 09 21 2018 yulong.chang
 * [MOLY00352806] [DSBP] patch back "D-SBP enhancment for all modem" to LR12A.R3.MP
 * EFUN/CFUN controlled by L4BPWR (VDM part)
 *
 * 06 21 2018 yulong.chang
 * [MOLY00334339] [URGENT][Cervino][MT6762][O1][MP2][SQC][VzW][Multi][SuppSig][2.18.2]Fail due to video call fail.
 * Vzw suppsig 2.18.2, extend +EACB to receive is_acb_skip_for_mmtel_video. Use is_acb_skip_for_mmtel_video to decide if IMS domain is allowed.
 *
 * 05 23 2018 yulong.chang
 * [MOLY00327671] [Rose][MERLOT][O1][BSP+][Initial Tool]The device was not regist network after some operate.(once)
 * VDM relay +CIEV:102,X to AP
 *
 * 05 03 2018 jerry.cheng
 * [MOLY00322938] ?信副卡不能注?VOLTE - notify C2K call end to L4 (VDM part)
 * .[R3] Send AT+EHVOLTE=0,2 to notify L4 C2K call end in order not to block switching to SRLTE mode
 *
 * 03 14 2018 yulong.chang
 * [MOLY00312879] [VDM][Vzw][CDMA-less][PCO] Trigger NWSEL search for Vzw CDMA less if UE has received PCO_FF00H=5 and AP radio control off and timer expired and UE is roaming (VDM main)
 * PCO FF00H 5 - VDM main part
 *
 * 02 23 2018 yulong.chang
 * [MOLY00309362] [Rose][Sylvia][O1][BSP+][Telephony switch]The ECC call will dialing all the time.(Once)
 * 	
 * 	improve +EMCSS (VDM part)
 *
 * 12 18 2017 yulong.chang
 * [MOLY00296177] [MT6293][GMSS] prefer RAT handling enhancement
 * Add one parameter in AT+EMCSS.
 * 	
 * 	AT+EMCSS=1,[<available_rat>,<prefer_rat>,<is_new_call>]
 *
 * 12 01 2017 yulong.chang
 * [MOLY00293536] [VDM][TMO-US][RTT] Redial voice only VoLTE EMCl when RTT VoLTE EMC fail (VDM part)
 * TMO RTT redial
 *
 * 12 01 2017 yulong.chang
 * Roll back MOLY00291130
 *
 *
 * 11 23 2017 jerry.cheng
 * [MOLY00291130] [R3][VZW feature] VZ_REQ_e911_30203 (EMC call type)
 * .rollback to resolve autosync conflict
 *
 * 11 21 2017 jerry.cheng
 * [MOLY00287748] [93][TMO][VDM] Digits implementation
 * .[TMO][Digits] modify query TRN AT cmd/URC format
 *
 * 11 21 2017 yulong.chang
 * [MOLY00288769] [Zion][N1][Free Test][MCD][TEFT]make a vilte call,the picture is unclear(5/5) (vdm part)
 * notify ERRC IMS call RAT (VDM part)
 *
 * 11 06 2017 jerry.cheng
 * [MOLY00287748] [93][TMO][VDM] Digits implementation
 * .Digits implementation - VDM part
 *
 * 09 01 2017 yulong.chang
 * [MOLY00274843] [CDMA-less][LR12] main CR (VDM part)
 * [LR11.MP5->UMOLYA sync] MOLY00262171 [CDMA-less][LR12] main CR (VDM part)
 *
 * 08 31 2017 yulong.chang
 * [MOLY00274168] [MT6293][NWSIM][Regression][TC_9_3_1_3] UE return CME error for ATD01234567890;
 * ALPS03464343 Bug fix (also reference At+CFUN)
 *
 * 08 30 2017 yulong.chang
 * [MOLY00274412] [6755][E66_DUGL][ITS#1174]Without SIM and make Emergency call:911, DUT will met call drop
 * [LR11.MP5->UMOLYA sync] MOLY00255649 [6755][E66_DUGL][ITS#1174]Without SIM and make Emergency call:911, DUT will met call drop
 *
 * 08 28 2017 yulong.chang
 * [MOLY00274096] [VzW] addl call_domain_cause - IMSP/VDM/IMC part
 * [LR11.MP5->UMOLYA sync] MOLY00254610 [VzW] addl call_domain_cause - IMSP/VDM/IMC part
 *
 * 08 24 2017 yulong.chang
 * [MOLY00272923] [Bianco][N1][MTK FT][SRLTE][CT 6M C][LZ][Random] call can't hang up (ATP part)
 * .
 *
 * 08 17 2017 jerry.cheng
 * [MOLY00271227] [UMOLYA] [Rose][Vinson][N1]The ECC call will can't be dial out success.(5/5)
 * [LR12->UMOLYA sync] [MOLY00259723] send call_status_req to NAS/AS : VDM/ATP - add call_type in AT+EVVS
 *
 * 08 17 2017 yulong.chang
 * [MOLY00271652] [TCL][MICKEY6T TMO] [IMS/VoLTE] - L_IMS_VoLTE_50944_1 - for VDM/IMSP check-in
 * [LR11.MP5->UMOLYA sync] MOLY00250915 [TCL][MICKEY6T TMO] [IMS/VoLTE] - L_IMS_VoLTE_50944_1 - for VDM/IMSP check-in
 *
 * 08 15 2017 jerry.cheng
 * [MOLY00210061] [93][VDM] UMOLY sync to UMOLYA
 * .[LR12->UMOLYA sync] MOLY00264006[LR12] patch back Skip ACB feature/VDM part to LR12
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
 * 06 26 2017 jerry.cheng
 * [MOLY00259370] .EVADSMOD rearch
 * .EVADSMOD rearch
 *
 * 04 25 2017 jerry.cheng
 * [MOLY00242146] [93][VDM] bug fix
 * .rename EVADSMOD parameter
 *
 * 04 19 2017 jerry.cheng
 * [MOLY00242146] [93][VDM] bug fix
 * .fix C2K ECPI
 *
 * 04 07 2017 jerry.cheng
 * [MOLY00240312] [93] CT VoLTE modem re-architecture
 * .[CT VoLTE] +CIEV: 102,2 for ECBM mode no need
 *
 * 04 07 2017 jerry.cheng
 * [MOLY00240312] [93] CT VoLTE modem re-architecture
 * .[CT VoLTE]  hVoLTE / E911 configuration, VDM re-arch, extend AT+EVADMOD, AT+EMVSS
 *
 * 04 05 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * 	
 * 	.AT+EVIVS support for indicating ERRC to occupy CS semaphore in VoLTE/ViTLE/VoWifFI/ViWiFI period
 *
 * 04 05 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .[M3] relay conference call number from UA to CSCC
 *
 * 04 05 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .[M3] CLCCS .remove CLCC cnf check for unsync call(C2K) in order to fulfill C2K call waiting
 *
 * 04 05 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .[M3] STK/UTK
 *
 * 04 05 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .[M3] EIMSCFG - VDM part
 *
 * 04 05 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .[M3] 380 redial as ECC by VDM
 *
 * 02 20 2017 jerry.cheng
 * [MOLY00221572] [Gen93][L4 integration][VDM]
 * .+EVPC2K.
 *
 * 01 06 2017 jerry.cheng
 * [MOLY00220510] [93 PREIT_DEV][UMOLYA] Rename IMSP interface/context/API to ATP and reorg folder layout
 * rename IMSP to ATP, ATP related files.
 *
 * 01 05 2017 jerry.cheng
 * [MOLY00220510] [93 PREIT_DEV][UMOLYA] Rename IMSP interface/context/API to ATP and reorg folder layout
 * rename IMSP to ATP.
 *
 * 01 05 2017 chinte.chen
 * [MOLY00220510] [93 PREIT_DEV][UMOLYA] Rename IMSP interface/context/API to ATP and reorg folder layout
 * fixed VDM codegen failure
 *
 * 11 02 2016 jerry.cheng
 * [MOLY00211075] [93][VDM][L4 Integration] CC AT cmd merge
 * sync [MOLY00204150] TK vzw hVoLTE/E911 implementation
 * 	
 * 	. ATP part.
 *
 * 11 02 2016 jerry.cheng
 * [MOLY00211075] [93][VDM][L4 Integration] CC AT cmd merge
 * sync [MOLY00204150] TK vzw hVoLTE/E911 implementation
 * 	
 * 	TK hVoLTE: L4/ATP/VDM.
 *
 * 10 13 2016 timo.korpela
 * [MOLY00206906] [FT][NL][VoLTE]he hidden caller ID does not work when make call to alphanumeric SIP-URI.
 * Implemented handling for CLIR parameter received in AT+CDU command.
 *
 * 08 11 2016 kuan-wei.chen
 * [MOLY00196499] [Jade N0][TK]Waiting call screen show "Unknown" when receive a waiting call from hiden number - vdm/atp source file
 * .
 *
 * 06 27 2016 lexel.yu
 * [MOLY00183611] [VZW_LC_IOT][PH1_VZW][Radio_Protocol][NDET_Lab] hVoLTE 2.2.40_Option-A fail
 * Add AT+EICE=3 workaround for silent redial
 *
 * 06 06 2016 yingfui.hung
 * [MOLY00171513] [PH1_VZW][joint-camp][GPS][Privacy Test] When Device's Location Setting is 'Location OFF', GPS work.
 * 	
 * 	.
 *
 * 06 01 2016 kuan-wei.chen
 * [MOLY00146327] [VzW] hVoLTE implementation
 * vzw patchback - L4, VDM
 *
 * 03 23 2016 yingfui.hung
 * [MOLY00168587] [MT6755][Jade M6][MP3][L+W][In-house FTA][Case Fail][VoLTE] TC_11.2.2 FAIL
 * 	
 * 	.
 *
 * 03 08 2016 yingfui.hung
 * [MOLY00167924] [L4][R12] Handling of SCM at VDM/SDM/L4 part
 * 	
 * 	.
 *
 * 12 16 2015 xinwei.cui
 * [MOLY00153299] [VILTE][Anite][v37][E40][12.21]FAIL
 * .
 *
 * 12 15 2015 kuan-wei.chen
 * [MOLY00153140] [D1][WFC][M0] WFC preference if wifi only, disable WFC, prompt "server unreachable" when make a call. - VDM part
 * wifi only mode is active only when AT+EIMSWFC=1
 *
 * 12 14 2015 kuan-wei.chen
 * [MOLY00150109] [IMS Feature] Non-UE detectable emergency call R12 feature
 * .
 *
 * 12 01 2015 kuan-wei.chen
 * [MOLY00133272] [NTT DOCOMO][VoLTE][IO030143] UE sends SM__ACTIVATE_PDP_CONTEXT_REQUEST unexpectedly
 * DCM, 1504929
 *
 * 11 26 2015 yingfui.hung
 * [MOLY00116938] [VOLTE][NTT DOCOMO] requirement 5A.7.1.1 Service category
 * 	
 * 	.
 *
 * 11 13 2015 lexel.yu
 * [MOLY00149112] [VDM] NAS should keep search network when IMS call over WiFi ongoing
 * 	
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
 * 06 11 2015 lexel.yu
 * [MOLY00085703] [VDM][MT6291] Sync MOLY to UMOLY
 * 	[MOLY00114718] [VDM][Volunteer Patch] Patch back for MOLY trunk
 * 	ATDC for conference call
 *
 * 06 10 2015 edwin.liu
 * [MOLY00120219] Merge MOLY ATP changes to UMOLY
 * 	.
 *
 * 06 05 2015 edwin.liu
 * ATP to UMOLY.
 *
 * 04 09 2015 lexel.yu
 * [MOLY00106459] [MT6291][IMS] VoLTE call event download
 * 	IMS Call Event Download
 *
 * 03 16 2015 lexel.yu
 * [MOLY00085703] [VDM][MT6291] Sync MOLY to UMOLY
 * 	[MOLY00080860] fix typo: replace vdm_atp_snd_ads_staus_req_struct by vdm_atp_snd_ads_status_req_struct
 * 	[MOLY00093643] [K2][CMCC][VoLTE][NS-IOT][R&S][TC 5.2.9.2][B3-E38]UE GSM??????^LTE?????????`? fail
 *
 * 02 24 2015 lexel.yu
 * [MOLY00085703] [VDM][MT6291] Sync MOLY to UMOLY
 * 	[MOLY00095972] [CMCC VoLTE][VDM] Add "4 to 23G" and "23G to 4" for IRAT event.
 *
 * 12 05 2014 lexel.yu
 * [MOLY00085703] [VDM][MT6291] Sync MOLY to UMOLY
 * 	[MOLY00085717] [VoLTE] Android L release VoLTE refactory for VDM and ATP
 *
 * 11 26 2014 lexel.yu
 * [MOLY00085703] [VDM][MT6291] Sync MOLY to UMOLY
 * 	[MOLY00083542] [L4]add a new internal URC to notify VDM STK call number (+ESTKCNUM)
 * 	VDM part
 *
 * 11 05 2014 lexel.yu
 * [MOLY00083035] [VDM] IMS call information
 * 	.
 *
 * 09 02 2014 allan.ke
 * [MOLY00075245] Change the algorithm of ADS SSAC timer control and include IMSVoPS as the conditions for domain selection when dialing emergency call
 *
 * 04 25 2014 tehuang.liu
 * [MOLY00063538] [6290E2][VoLTE][VDM] Support VoLTE Gemini architecture
 * not use compile options for VoLTE Gemini interface structures definition
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
 * 02 20 2014 benjamin.kuo
 * [MOLY00056441] Use string instead enum for call type in CRING
 * .
 *
 * 02 17 2014 benjamin.kuo
 * [MOLY00056253] Merge SRVCC implementation from personal CBr to MOLY trunk
 * SRVCC
 *
 * 02 14 2014 benjamin.kuo
 * [MOLY00055885] [6290E2][VoLTE][MWC] incorrect URC oder of VDM and ATP
 * +CRING
 *
 * 12 10 2013 vend_edwin.liu
 * ATP.
 *****************************************************************************/

#ifndef _VDM_ATP_STRUCT_H_
#define _VDM_ATP_STRUCT_H_

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ims_common_def.h"
#include "vdm_imc_struct.h"
#include "vdm_atp_enums.h"
#include "ps_public_enum.h"
#include "l3_inc_enums.h"
#include "sim_public_enum.h"
#include "mcd_l3_inc_struct.h"
#include "c2k_irat_msg_struct.h"
#include "l4b_vdm_struct.h"

typedef enum 
{
    VDM_IRAT_STATUS_IDLE = 0,
    VDM_IRAT_STATUS_FROM_4_TO_2,
    VDM_IRAT_STATUS_FROM_4_TO_3,
    VDM_IRAT_STATUS_FROM_2_TO_4,
    VDM_IRAT_STATUS_FROM_3_TO_4,
    // below two items may be used when IRAT request is triggered by NWSEL with rat GAS_UAS_TBD
    VDM_IRAT_STATUS_FROM_4_TO_23,
    VDM_IRAT_STATUS_FROM_23_TO_4,
} vdm_irat_status_enum;


typedef enum
{
    ADS_PROGRESS_ATTEMPT = 0,
    ADS_PROGRESS_SUCCESS
} ads_indication_progress_enum;


typedef enum
{
    ADS_DOMAIN_CS = 0,
    ADS_DOMAIN_IMS
} ads_indication_domain_enum;


// mirror from rmmi_reg_state_enum
typedef enum 
{
   NAS_REG_STATUS_NOT_REGISTERED = 0,
   NAS_REG_STATUS_REGISTERED_HOME,
   NAS_REG_STATUS_NOT_REGISTERED_SEARCHING,
   NAS_REG_STATUS_REG_DENIED,   
   NAS_REG_STATUS_OUT_OF_COVERAGE,
   NAS_REG_STATUS_REGISTERED_ROAMING,
   NAS_REG_STATUS_SMS_ONLY_HOME,
   NAS_REG_STATUS_SMS_ONLY_ROAMING,
   NAS_REG_STATUS_EMERGENCY_ONLY,
   NAS_REG_STATUS_CSFB_NOT_PREFERRED_HOME,
   NAS_REG_STATUS_CSFB_NOT_PREFERRED_ROAMING
} nas_reg_status_enum;

typedef enum
{
    AP_CALL_STATE_IDLE                 = 0,
    AP_CALL_STATE_RINGRING_FOR_MT_ONLY,
    AP_CALL_STATE_OFFHOOK,
} ap_call_state_enum;

typedef enum
{
    AP_CALL_REASON_NORMAL = 0,
    AP_CALL_REASON_SILENT_REDIAL,
} ap_call_reason_enum;

typedef enum
{
    AP_CALL_TYPE_VOICE = 0,
    AP_CALL_TYPE_VIDEO,
} ap_call_type_enum;

/******************************************************************************
 * Common AT command structure
 *****************************************************************************/

/*
 *  temp. for UT by MSC
 */
typedef struct
{
    kal_uint8                       at_cmd_string[128];
    
} at_cmd_buf_struct;


typedef struct 
{  
    LOCAL_PARA_HDR 
    ims_result_code_enum            result;
    ims_err_id_enum                 err_id;
} vdm_atp_common_at_rsp_struct;


typedef vdm_atp_common_at_rsp_struct vdm_atp_common_at_cnf_struct;


typedef struct {
    LOCAL_PARA_HDR
    kal_uint8               call_id;
    kal_uint8               ecpi_type;
    ims_ecpi_info_struct    ecpi_info;
} vdm_atp_common_cs_cc_epci_ind_struct;


/******************************************************************************
 * ATD<num> or ATD<num>;
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8               dial_num[MAX_CC_ATD_NUM_LEN];
    kal_bool                is_video_call;
} vdm_atp_cmd_dial_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_dial_rsp_struct;

typedef vdm_atp_cmd_dial_ind_struct vdm_atp_cs_cc_mo_call_req_struct;
typedef vdm_atp_common_at_cnf_struct vdm_atp_cs_cc_mo_call_cnf_struct;
/******************************************************************************
 * AT+CDU=1,<uri>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8               dial_uri[MAX_CC_CDU_URI_LEN];
    kal_bool                video_call;
    kal_uint8               clir;
} vdm_atp_cmd_dial_uri_ind_struct;


typedef struct 
{  
    LOCAL_PARA_HDR 
    ims_result_code_enum            result;
    ims_err_id_enum                 err_id;
    kal_uint8                       call_id;
} vdm_atp_cmd_dial_uri_rsp_struct;


/******************************************************************************
 * AT+STKCALL=0 
 * NOTE: This AT command is forwarded from ATP to VDM.
 * NOTE: For AT_STKCALL=x where x!=0, this AT command is not forwarded to VDM.
 *****************************************************************************/

typedef struct
{
    LOCAL_PARA_HDR
    vdm_stk_type_enum stk_type; // o or 4
} vdm_atp_cmd_stk_call_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_stk_call_rsp_struct;
typedef vdm_atp_common_at_cnf_struct vdm_atp_cs_cc_stk_call_cnf_struct;


/******************************************************************************
 * AT+STKCALL=x 
 * NOTE: VDM can ask ATP to send AT+STKCALL=x to CS domain for sending a TR.
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    sat_terminal_res_enum tr;
} vdm_atp_snd_stk_call_tr_req_struct;


/******************************************************************************
 * AT+EVADSMOD=<mode>,<ecc_preferred_domain>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    vdm_ads_mode_enum                   ads_mode;
    vdm_ads_ecc_preferred_domain_enum   ads_ecc_preferred_domain;
} vdm_atp_cmd_ads_mode_ind_struct;


/******************************************************************************
 * AT+EVADSREP=<mode>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    vdm_ads_result_report_mode_enum   ads_result_report_mode;
} vdm_atp_cmd_ads_result_report_ind_struct;




/******************************************************************************
 * ATDE<num>;
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8               dial_num[MAX_CC_ATD_NUM_LEN];
} vdm_atp_cmd_dial_emerg_ind_struct;

/******************************************************************************
 * ATDER=<num>,<call_id>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8               dial_num[MAX_CC_ATD_NUM_LEN];
    kal_uint8               call_id;
} vdm_atp_cmd_dial_emerg_retry_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_dial_emerg_rsp_struct;

typedef vdm_atp_cmd_dial_emerg_ind_struct vdm_atp_cs_cc_emerg_call_req_struct;
typedef vdm_atp_common_at_cnf_struct vdm_atp_cs_cc_emerg_call_cnf_struct;


/******************************************************************************
 * ATDF<dial_string>,<from_line>[;]
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8               dial_num[MAX_CC_ATD_NUM_LEN];
    kal_uint8               from_line[IMC_MAX_URI_LENGTH];
    kal_bool                is_video_call;
} vdm_atp_cmd_dial_from_line_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_dial_from_line_rsp_struct;


/******************************************************************************
 * AT+ECALLPULL
 * This command is used to dial with call pull
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8               dial_uri[MAX_CC_CDU_URI_LEN];
    kal_bool                video_call;
} vdm_atp_cmd_dial_call_pull_ind_struct;

typedef struct 
{  
    LOCAL_PARA_HDR 
    ims_result_code_enum            result;
    ims_err_id_enum                 err_id;
    kal_uint8                       call_id;
} vdm_atp_cmd_dial_call_pull_rsp_struct;

/******************************************************************************
 * AT+EWFCP=<profile>;
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    wfc_profile_enum wfc_profile;
} vdm_atp_cmd_wfc_profile_ind_struct;


/******************************************************************************
 * AT+EIMSWFC=<wfc_switch>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool wfc_switch;
} vdm_atp_cmd_wfc_switch_ind_struct;

/******************************************************************************
 * AT+EVPC2K=<is_voice_prefer_c2k>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_voice_prefer_c2k;
} vdm_atp_cmd_voice_call_prefer_c2k_ind_struct;


/******************************************************************************
 * +ECPI:<call_id>,<msg_type=130>,<is_ibt>,<is_tch>,<dir>,
 *       <call_mode>,[<number>,<type>],"<pau">,[<disc_cause>]
 *****************************************************************************/
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8               call_id;
    ims_ecpi_info_struct    ecpi_info;
} vdm_atp_snd_ecpi_mo_call_id_alloc_req_struct;


typedef vdm_atp_common_cs_cc_epci_ind_struct vdm_atp_cs_cc_mo_call_id_ind_struct;


/******************************************************************************
 * +ECPI:<call_id>,<msg_type=0>,<is_ibt>,<is_tch>,<dir>,
 *       <call_mode>,[<number>,<type>],"<pau>",[<disc_cause>]
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8               call_id;
    ims_ecpi_info_struct    ecpi_info;
} vdm_atp_snd_ecpi_mt_call_setup_req_struct;

typedef vdm_atp_common_cs_cc_epci_ind_struct vdm_atp_cs_cc_mt_call_setup_ind_struct;

/******************************************************************************
 * +ECPI:<call_id>,<msg_type=133>,<is_ibt>,<is_tch>,<dir>,
 *       <call_mode>,[<number>,<type>],"<pau>",[<disc_cause>]
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8                   call_id;
    ims_ecpi_info_struct        ecpi_info;
    kal_bool                    is_far_end;
} vdm_atp_snd_ecpi_call_release_req_struct;

/******************************************************************************
 * +ECPI:<call_id>,<msg_type=137>,<is_ibt>,<is_tch>,<dir>,
 *       <call_mode>,[<number>,<type>],"<pau>",[<disc_cause>]
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8                   call_id;
    ims_ecpi_info_struct        ecpi_info;
} vdm_atp_snd_ecpi_rtt_redial_req_struct;

typedef vdm_atp_common_cs_cc_epci_ind_struct vdm_atp_cs_cc_call_disconnect_ind_struct;

/******************************************************************************
 * +ECPI:<call_id>,<msg_type!=0,130,133>,<is_ibt>,<is_tch>,<dir>,
 *       <call_mode>,[<number>,<type>],"<pau>",[<disc_cause>]
 *****************************************************************************/
typedef vdm_atp_common_cs_cc_epci_ind_struct vdm_atp_cs_cc_ecpi_translate_ind_struct;

typedef vdm_atp_cs_cc_ecpi_translate_ind_struct vdm_atp_cs_cc_ecpi_translate_rsp_struct;
typedef vdm_atp_cs_cc_ecpi_translate_ind_struct vdm_atp_c2k_cc_ecpi_translate_rsp_struct;


/******************************************************************************
 * AT+CHLD=[<n>]
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8                       call_id;
    ims_call_related_ss_type_enum   opcode;
    ims_cc_mo_disconnect_cause_enum cause;
} vdm_atp_cmd_call_related_ss_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_call_related_ss_rsp_struct;

typedef vdm_atp_cmd_call_related_ss_ind_struct vdm_atp_cs_cc_call_related_ss_req_struct;

typedef vdm_atp_common_at_cnf_struct vdm_atp_cs_cc_call_related_ss_cnf_struct;

/******************************************************************************
 * ATH
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
} vdm_atp_cmd_hangup_all_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_hangup_all_rsp_struct;

typedef vdm_atp_cmd_hangup_all_ind_struct vdm_atp_cs_cc_hangup_all_req_struct;

typedef vdm_atp_common_at_cnf_struct vdm_atp_cs_cc_hangup_all_cnf_struct;

/******************************************************************************
 * AT+ECHUP=<call_id>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8 call_id;
} vdm_atp_cmd_force_hangup_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_force_hangup_rsp_struct;

typedef vdm_atp_cmd_force_hangup_ind_struct vdm_atp_cs_cc_force_hangup_req_struct;
typedef vdm_atp_common_at_cnf_struct vdm_atp_cs_cc_force_hangup_cnf_struct;

/******************************************************************************
 * Combine ims_cc_eaic_info_struct with l4b_cc_eaic_info_struct
 *****************************************************************************/
typedef struct 
{
    kal_uint8               number[MAX_CC_ECPI_NUM_LEN];
    ims_call_type_enum      call_type;
    ims_call_mode_enum      call_mode;
    kal_uint8               redirect_num[MAX_CC_ECPI_NUM_LEN];          // CS CC
    kal_uint8               digit_to_line_number[IMC_MAX_URI_LENGTH];   // IMS CC
} vdm_atp_cc_eaic_info_struct;

/******************************************************************************
 * +EAIC: <call_id>,<number>,<type>,<call_mode>,<seq_no>[,<redirec_num>[,<digit_to_line_num>]]
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8                       call_id;
    vdm_atp_cc_eaic_info_struct     eaic_info;
    kal_uint8                       seq_no;
    vdm_enh_volte_si_flow_enum      evoltesi_flow;
} vdm_atp_snd_mt_call_approve_req_struct;

typedef vdm_atp_snd_mt_call_approve_req_struct vdm_atp_cs_cc_mt_call_present_ind_struct;


/******************************************************************************
 * AT+EAIC=<mode>,<call_id>,<seq_no>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8                       call_id;
    kal_uint8                       seq_no;
    ims_cc_eaic_result_enum         eaic_result;
    kal_uint16                      reject_cause;
} vdm_atp_cmd_mt_call_approve_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_mt_call_approve_rsp_struct;

typedef vdm_atp_cmd_mt_call_approve_ind_struct vdm_atp_cs_cc_mt_call_present_rsp_struct;

/******************************************************************************
 * ATA
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
} vdm_atp_cmd_mt_call_accept_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_mt_call_accept_rsp_struct;

typedef vdm_atp_cmd_mt_call_accept_ind_struct vdm_atp_cs_cc_mt_call_accept_req_struct;
typedef vdm_atp_common_at_cnf_struct vdm_atp_cs_cc_mt_call_accept_cnf_struct;

/******************************************************************************
 * VTS=<dtmf>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8   digit;
} vdm_atp_cmd_dtmf_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_dtmf_rsp_struct;

typedef vdm_atp_cmd_dtmf_ind_struct vdm_atp_cs_cc_send_digit_req_struct;
typedef vdm_atp_common_at_cnf_struct vdm_atp_cs_cc_send_digit_cnf_struct;

/******************************************************************************
 * AT+EVTS=<action>,<digit>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    ims_dtmf_action_enum            action;
    kal_uint8                       digit;
} vdm_atp_cmd_ext_dtmf_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_ext_dtmf_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                       digit;
} vdm_atp_cs_cc_start_send_digit_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
} vdm_atp_cs_cc_stop_send_digit_req_struct;


typedef vdm_atp_common_at_cnf_struct vdm_atp_cs_cc_start_send_digit_cnf_struct;
typedef vdm_atp_common_at_cnf_struct vdm_atp_cs_cc_stop_send_digit_cnf_struct;

/******************************************************************************
 * AT+CEER
 * +CEER:<cause>,<report>
 * NOTE: ATP maps <ceer_cause> (int) to <report> (char string)
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
} vdm_atp_cmd_ext_error_report_ind_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    ims_ext_error_report_enum       ceer_cause;
    ims_result_code_enum            result;
    ims_err_id_enum                 err_id;
    kal_uint16                      ecc_category;
} vdm_atp_cmd_ext_error_report_rsp_struct;

typedef vdm_atp_cmd_ext_error_report_ind_struct vdm_atp_cs_cc_ext_error_report_req_struct;

typedef vdm_atp_cmd_ext_error_report_rsp_struct vdm_atp_cs_cc_ext_error_report_cnf_struct;

/******************************************************************************
 * AT+CSTA:<type>
 * NOTE: ATP multicasts this command to VDM (without rsp) and ATCI 
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8       type;
} vdm_atp_cmd_select_type_of_addr_ind_struct;


/******************************************************************************
 * AT+CLCC
 * +CLCC:<idx>,<dir>,<stat>,<mode>,<mpty>,[<number>,<type>[,<alpha>[,<priority>[,<CLI_validity>]]]]... 
 *****************************************************************************/
typedef vdm_imc_ims_cc_list_current_calls_req_struct 
        vdm_atp_cmd_list_current_calls_ind_struct;

//avoid modifying ims_interface_md.h, declare new structure for CS CLCC
typedef struct {
    kal_uint8               call_id;
    ims_call_dir_enum       dir;
    ims_call_state_enum     call_state;
    ims_call_mode_enum      call_mode;
    kal_bool                mpty;  // FALSE: is NOT conference call, TRUE: is conference call
    ims_call_type_enum      call_type;
    kal_uint8               number[MAX_CC_ATD_NUM_LEN];
    kal_uint8               cli_validity;
} vdm_atp_call_list_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   total_call;
    vdm_atp_call_list_struct   call_list[IMS_MAX_CALL_NUM];
} vdm_atp_cmd_list_current_calls_rsp_struct;


/******************************************************************************
 * AT+CLCC
 * +CLCCS: <ccid1>,<dir>,<neg_status_present>,<neg_status>,<SDP_md>,<cs_mode>,<ccstatus>,<mpty>,[,<numbertype>,<ton>,<number>[,<priority_present>,<priority>[,<CLI_validity_present>,<CLI_validity>]]]
 *****************************************************************************/
typedef vdm_atp_cmd_list_current_calls_ind_struct 
        vdm_atp_cmd_list_current_calls_ext_ind_struct;

typedef vdm_l4b_cs_cc_list_current_calls_ext_cnf_struct vdm_atp_cmd_list_current_calls_ext_rsp_struct;

/******************************************************************************
 * AT+EAPPROVE:<dial_string>
 * +EAPPROVE:<is_allowed>,<is_emergency>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8                       dial_num[MAX_CC_ATD_NUM_LEN];
} vdm_atp_fdn_ecc_check_req_struct;

typedef struct 
{  
    LOCAL_PARA_HDR
    kal_bool                        is_allowed;
    kal_bool                        is_emergency;
    kal_uint16                      emergency_service_category;
} vdm_atp_fdn_ecc_check_cnf_struct;


/******************************************************************************
 * +CIREPI: <nwimsvops>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                        is_imsvops_support;
} vdm_atp_ims_vops_supp_ind_struct;


/******************************************************************************
 * +CIREPH: <srvcch>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    srvcc_status_enum               status;
} vdm_atp_srvcc_status_update_ind_struct;


/******************************************************************************
 * +CNEMS1: <emb_S1_supp>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                        is_emb_s1_support;
} vdm_atp_emb_s1_supp_ind_struct;


/******************************************************************************
 * +ECVMOD: <voice_mode>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    voice_mode_enum                 voice_mode;
} vdm_atp_voice_mode_ind_struct;


/******************************************************************************
 * +ECEVDP: <eutran_vdp>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    l4_voice_domain_preference_enum eutran_vdp;
} vdm_atp_eutran_vdp_ind_struct;


/******************************************************************************
 * +ECEMODE: <ue_mode>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    ue_mode_enum                    ue_mode;
} vdm_atp_ue_mode_ind_struct;


/******************************************************************************
 * AT+ENWSEL=<search_type>,<rat>
 * +ENWSEL: <rat>,<emc_support>
 *  OK/ERROR
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    vdm_nw_selection_type_enum      search_type;
    rat_enum                        rat;
} vdm_atp_nw_select_req_struct;

typedef struct 
{  
    LOCAL_PARA_HDR 
    rat_enum                        rat;
    kal_bool                        is_limited_service_emc_support;
    ims_result_code_enum            result;
    ims_err_id_enum                 err_id;
	plmn_id_struct                  plmn_id;
}vdm_atp_nw_select_cnf_struct;

/******************************************************************************
 * AT+ENWSEL=2,<abort_cause>
 *  OK/ERROR
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    enwsel_search_abort_cause_enum cause;
} vdm_atp_abort_nw_select_req_struct;

typedef vdm_atp_common_at_cnf_struct vdm_atp_abort_nw_select_cnf_struct;


/******************************************************************************
 * +ERAT: <rat>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    rat_enum                        rat;
} vdm_atp_rat_mode_ind_struct;


/******************************************************************************
 * +EIRAT: <rat>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    vdm_irat_status_enum             irat_status;
    kal_bool                         irat_result;
} vdm_atp_inter_rat_status_ind_struct;


/******************************************************************************
 * +ENW: <is_searching>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                        is_searching;
} vdm_atp_nw_search_status_ind_struct;


/******************************************************************************
 * +ECAMPON: <service_type>
 *****************************************************************************/
#if 1
typedef struct 
{  
    LOCAL_PARA_HDR 
} vdm_atp_oos_start_ind_struct;

typedef struct 
{  
    LOCAL_PARA_HDR 
} vdm_atp_oos_end_ind_struct;
#endif


/******************************************************************************
 * +EADS: <progress>,<domain>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    ads_indication_progress_enum    progress;
    ads_indication_domain_enum      domain;
} vdm_atp_snd_ads_status_req_struct;

/******************************************************************************
 * +CREG/+CGREG/+CEREG: <stat>
 * (1) +CREG => is_for_ps_domain = KAL_FALSE
 * (2) +CGREG/+CEREG => is_for_ps_domain = KAL_TRUE 
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    nas_reg_status_enum             nas_reg_status; 
    kal_bool                        is_for_ps_domain;
    mm_cause_enum                   nas_reg_cause;
} vdm_atp_nas_reg_status_ind_struct;


/******************************************************************************
 * +EIMSINFO: <rat>,<cell_id>,<cell_service>, <plmn_id>,<plmn_type>,
 *            <lac>,<tac>,<support_emc>,<lte_underly_cs_plmn_id>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    rat_enum                        rat;
    cell_service_enum               cell_service;
    kal_bool                        is_limited_service_emc_support;
    kal_uint32                      cell_id;
    plmn_id_struct                  plmn_id;
    domain_id_enum                  domain_id;
    plmn_id_struct                  lte_cs_plmn_id;//LTE underlying CS PLMN ID, only available for LTE combined attach UE
} vdm_atp_cell_info_update_ind_struct;


/******************************************************************************
 * IMS Registration relayed by ATP (source: IMC)
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    ims_reg_state_enum              reg_state;
    ims_reg_type_enum               reg_type;
    ims_access_rat_enum             rat;
    ims_reg_service_enum            reg_service;
	ims_reg_event_enum              reg_event;
    imcb_imc_sip_cause_enum         sip_cause;
} vdm_atp_ims_reg_status_ind_struct;


/******************************************************************************
 * TODO
 *****************************************************************************/

typedef vdm_imc_ims_cc_list_current_calls_req_struct 
        vdm_atp_cs_cc_list_current_calls_req_struct;


typedef vdm_atp_cmd_list_current_calls_rsp_struct
        vdm_atp_cs_cc_list_current_calls_cnf_struct;


/******************************************************************************
 * AT+CSSAC
 * +CSSAC:<bfvoice>,<bfvideo>,<btvoice>,<btvideo>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR
    kal_uint8 bfvoice;
    kal_uint8 bfvideo;
    kal_uint8 btvoice;
    kal_uint8 btvideo;
} vdm_atp_get_ssac_param_cnf_struct;


/******************************************************************************
 * AT+ESRVCCTFR: <call_no>[,<call1_id>,<call1_mode>,<call1_direction>,<call1_state>,<call1_ecc_category>,
 * <call1_number type>,<call1_number>,<call1_alpha>,<call1_CLI validity>[,<call2_id>,<call2_mode>,<call2_direction>,
 * <call2_state>,<call2_ecc_category>,<call2_number type>,<call2_number>,<call2_alpha>,<call_2CLI validity> [,…]]] 
 *****************************************************************************/
 typedef struct
{
    kal_uint8                           call_id;      /* call_id_ims = call_id_ap */
    ims_srvcc_call_mode_enum            call_mode;
    ims_srvcc_call_direction_enum       call_direction;
    ims_srvcc_call_state_enum           call_state;
    ims_srvcc_call_ecc_category_enum    call_ecc_category;
    ims_srvcc_call_number_format_enum   call_number_format;
    kal_uint8                           call_number[IMC_MAX_URI_LENGTH];
#ifdef __TC01_IMS_SUPPORT__   
    //these two parameter is defined by L4 but seems not used by IMS CC, so we wrap it with compile option
    kal_uint8                           call_alpha[MAX_PS_NAME_SIZE + 1]; // MAX_PS_NAME_SIZE: 42
    kal_uint8                           cli;

    //just for TK compatible, not sure how to use this in TC01 project
    kal_uint8                           num_of_conf_parts;    
#endif
} ims_srvcc_call_ctxt_to_cs_struct;

typedef struct
{    
    LOCAL_PARA_HDR    
    kal_uint32                          num_call;    
    ims_srvcc_call_ctxt_to_cs_struct	srvcc_call_ctxt_to_cs_domain[IMS_MAX_CALL_NUM];
} vdm_atp_srvcc_context_transfer_req_struct;

/******************************************************************************
 * +ESRVCCTFR: <call_no>[,<call1_id>[,<call2_id>[,...]]]
 *****************************************************************************/
typedef struct 
{      
    LOCAL_PARA_HDR     
    kal_uint32                   num_of_call_instances;    
    kal_uint32                   call_id_table[IMS_MAX_CALL_NUM];
} vdm_atp_srvcc_context_transfer_cnf_struct;

typedef struct 
{  
    LOCAL_PARA_HDR 
    // TODO 
} vdm_atp_snd_ads_attempt_notification_req_struct;

typedef struct 
{  
    LOCAL_PARA_HDR 
    // TODO 
} vdm_atp_snd_ads_end_notification_req_struct;


/******************************************************************************
 * +CRING: <type>
 * NOTE: <type> is string type but without ""
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
} vdm_atp_snd_mt_call_ring_req_struct;

#if 0 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/******************************************************************************
 * AT+EGMC: <OP>,<Configure_Name>,<Set_Value>
 * NOTE:in game mode to release ERRC
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
} vdm_atp_cmd_general_modem_configure_set_struct;

/******************************************************************************
 * AT+EVOLTESI: <mode>
 * NOTE:Enhanced VOLTE Short Interruption is ON/OFF
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
    vdm_trk_enh_volte_si_enum is_enh_volte_si;
} vdm_atp_cmd_enh_volte_si_ind_struct;

/******************************************************************************
 * +ECONFSRVCC: <call_no>,<call1_id>[,<call2_id>[,<call3_id>[,...]]]
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32                   num_of_conf_parts;
    kal_uint32                   call_id_table[IMS_MAX_CALL_NUM];
} vdm_atp_snd_srvcc_conf_call_id_req_struct;


/******************************************************************************
 * +EVADSREP: <domain>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    vdm_ads_result_enum     ads_result;
} vdm_atp_snd_ads_result_report_req_struct;


/******************************************************************************
 * +ERDECCIND: <call_id>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8               call_id;
} vdm_atp_snd_ads_switch_to_emergency_req_struct;


/******************************************************************************
 * AT+EVVS=<vdm_voice_status>
 * This command is used to perform Gemini CS semaphore operations
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
    call_status_enum    vdm_voice_status;
    kal_bool            is_emergency;
} vdm_atp_vdm_voice_status_req_struct;

/******************************************************************************
 * AT+EVIVS=<vdm_ims_voice_status>, <rat>
 * This command is used to perform Gemini CS semaphore operations
 * <rat> is domain selection result of this IMS call
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
    vdm_ims_voice_status_enum vdm_ims_voice_status;
    ims_access_rat_enum rat;
} vdm_atp_vdm_ims_voice_status_req_struct;

/******************************************************************************
 * IMS Handover (WIFI/LTE) status relayed by ATP (source: IMC)
 *****************************************************************************/
typedef struct 
{ 
    LOCAL_PARA_HDR 
    ims_access_rat_enum             source_rat;
    ims_access_rat_enum             target_rat;
} vdm_atp_ims_handover_start_ind_struct;

typedef struct 
{ 
    LOCAL_PARA_HDR 
    ims_access_rat_enum             source_rat;
    ims_access_rat_enum             target_rat;
    kal_bool                        result;
} vdm_atp_ims_handover_end_ind_struct;
/******************************************************************************
 * AT+EIMSCI=<vdm_voice_over_ims_ongoing>,<is_emergency>
 * This command is used to update IMS information
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
    kal_bool voice_over_ims_ongoing;
    kal_bool is_emergency;
    ims_access_rat_enum ims_access_rat;
} vdm_atp_ims_call_info_req_struct;


/******************************************************************************
 * +ESTKCNUM: <call_number>, <call_type>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                    stk_call_num[MAX_CC_ATD_NUM_LEN];
    ims_call_type_enum           stk_call_type;
} vdm_atp_stk_call_num_ind_struct;


/******************************************************************************
 * +EICE: <ims_call_exist>,<is_emergency>,<ims_access_rat>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32                  is_ims_call_exist;    
    kal_bool                    is_emergency;  
    ims_access_rat_enum         ims_access_rat;
    kal_uint32                  call_id; 
    ap_call_state_enum          call_state;
    ap_call_reason_enum         call_reason;
    ap_call_type_enum           call_type;
    
} vdm_atp_cmd_ims_call_exist_ind_struct;

#ifdef __TC01_IMS_SUPPORT__
/******************************************************************************
 * AT+EMCSS: <mode>,<available_rat>,<prefer_rat>,<is_new_call>,<trans_id>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   mode;
    rat_enum                    available_rat;
    rat_enum                    prefer_rat;
    kal_uint8                   is_new_call;
    kal_uint8                   trans_id;
} vdm_atp_cmd_emc_service_scan_ind_struct;


/******************************************************************************
 * +EMCSS: <available_rat>,<cause>,<trans_id>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    rat_enum                     available_rat;
    kal_uint8                    cause;
    kal_uint8                    trans_id;

} vdm_atp_snd_emc_service_scan_uri_req_struct;

/******************************************************************************
 * AT+ESRVCCTFR: <call_num>, <call1_id>,<call1_mode>,<call1_direction>,<call1_state>,<call1_ecc_category>,<call1_number type>,<call1_number>,<call1_alpha>,<call1_CLI validity>
 *****************************************************************************/
typedef vdm_atp_srvcc_context_transfer_req_struct vdm_atp_cmd_srvcc_context_transfer_ind_struct; //MSG_ID_VDM_ATP_CMD_SRVCC_CONTEXT_TRANSFER_IND

/******************************************************************************
 * +ESRVCCTFR: <call_no>[,<call1_id>[,<call2_id>[,...]]]
 *****************************************************************************/
typedef vdm_atp_srvcc_context_transfer_cnf_struct vdm_atp_cmd_srvcc_context_transfer_rsp_struct; //MSG_ID_VDM_ATP_CMD_SRVCC_CONTEXT_TRANSFER_RSP


#endif 
/******************************************************************************
 * AT+EDCONF
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8               conf_call_participants;
    kal_uint8               conf_call_number_list[IMS_MAX_CALL_NUM_IN_CONF][MAX_CC_ATD_NUM_LEN];
    kal_bool                is_video_call;
} vdm_atp_cmd_dial_conf_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_dial_conf_rsp_struct;

/******************************************************************************
 * +ECONFCHECK:<num_of_conf_call_members>,<is_allowed>[,<is_allowed>...
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                    conf_call_participants;
    kal_bool                     is_allowed[IMS_MAX_CALL_NUM_IN_CONF];
} vdm_atp_snd_conf_check_result_req_struct;


/******************************************************************************
 * +QUERYTRN: <call_id>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
    kal_uint8                   dial_string[MAX_CC_ECPI_NUM_LEN];
    kal_uint8                   from_line[IMC_MAX_URI_LENGTH];
} vdm_atp_snd_digits_trn_query_req_struct;

/******************************************************************************
 * AT+DIGITSTRN=<call_id>,<TRN>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8                   call_id;
    kal_uint8                   trn[MAX_CC_ATD_NUM_LEN];
} vdm_atp_cmd_ads_digits_trn_ind_struct;


/******************************************************************************
 * EVTA
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8                   call_id;
    ims_cc_evta_mode_enum       mode;
} vdm_atp_cmd_mt_vt_special_accept_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_mt_vt_special_accept_rsp_struct;

/******************************************************************************
 * AT+EIMSCCP=<op> / AT+ECCP=<op>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    vdm_video_capability_enum   video_capability;
    kal_bool                    on_off;
} vdm_atp_cmd_video_capability_ind_struct;

/******************************************************************************
 * AT+EIMSCFG = <volte_cfg>, <vilte_cfg>, <vowifi_cfg>, <viwifi_cfg>, <ims_sms_cfg>, <eims_cfg>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_bool is_volte_enable;   // currently not used by VDM
    kal_bool is_vilte_enable;   // previous AT+EIMSCCP
    kal_bool is_vowifi_enable;  // previous AT+EIMSWFC
    kal_bool is_viwifi_enable;  // previous AT+EIMSCCP, AP did not have this configuration
} vdm_atp_cmd_ims_config_ind_struct;

/******************************************************************************
 * +ERLQ:<Event>, <Band>
 * Event: 4G radio link monitor event type
 *   0 – LTE weak signal
 *   1 – LTE OOS searching
 * Band: current 4G band 
 *   0 – Invalid band value (used for LTE OOS search)
 *   1-256: possible LTE band value range
 * only care about Event
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32 event_type;
} vdm_atp_radio_link_quality_ind_struct;

/******************************************************************************
 * +ERPRAT: 9,<new_reported_rat>,<is_home>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    rat_enum               new_reported_rat;
    kal_bool               is_home;
} vdm_atp_reported_rat_change_ind_struct;

/******************************************************************************
 * +EC2KREG: <domain>,<state>,<service>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    domain_id_enum               domain;
    kal_bool                     state;
    irat_ps_type_enum            service;
} vdm_atp_c2k_service_state_ind_struct;

/******************************************************************************
 * +EC2KCI: <is_cs_conn_ongoing>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                    is_cs_conn_ongoing;
} vdm_atp_c2k_1x_conn_status_ind_struct;

/******************************************************************************
 * +EXXX: <reported_rat>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                    reported_rat;
} vdm_atp_reported_rat_ind_struct;

/******************************************************************************
 * AT+EHVOLTE=<mode>,<submode>
 * This command is used to set hvolte mode
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
    hvolte_mode_enum mode;
    kal_uint8 submode;
} vdm_atp_gmss_set_hvolte_mode_req_struct;

typedef vdm_atp_common_at_cnf_struct vdm_atp_gmss_set_hvolte_mode_cnf_struct;

/******************************************************************************
 * AT+EMCS=<mode>
 * This command is used to set emergency call session start and end
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
} vdm_atp_emc_session_start_ind_struct;

typedef struct 
{
    LOCAL_PARA_HDR
} vdm_atp_emc_session_stop_ind_struct;

/******************************************************************************
 * AT+EMCB=<mode>
 * This command is used to set emergency callback mode
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
} vdm_atp_emcb_mode_start_req_struct;

typedef struct 
{
    LOCAL_PARA_HDR
} vdm_atp_emcb_mode_stop_req_struct;

/******************************************************************************
 * AT+VMEMEXIT
 * This command is used to exit emergency callback mode
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
} vdm_atp_cmd_exit_emcb_ind_struct;

/******************************************************************************
 * AT+EMCSS=1,[<available_rat>,<prefer_rat>,<is_new_call>,<trans_id>,<scan_reason>]
 * This command is used to scan emergency service
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
    rat_enum available_rat;
    rat_enum prefer_rat;
    kal_bool is_new_call;
    kal_uint8 trans_id;
    vdm_ads_emcss_reason_enum scan_reason;
} vdm_atp_emc_service_scan_req_struct;

typedef vdm_atp_common_at_cnf_struct vdm_atp_emc_service_scan_cnf_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    rat_enum        avaliable_rat;
    kal_uint8       cause;
    kal_uint8       trans_id;
} vdm_atp_emc_service_ind_struct;


/******************************************************************************
 * +ESVC:<emergency_service_category>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                   emergency_service_category;
} vdm_atp_cmd_emerg_serv_cat_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_emerg_serv_cat_rsp_struct;

typedef vdm_atp_cmd_emerg_serv_cat_ind_struct vdm_atp_cs_cc_emerg_serv_cat_req_struct;
typedef vdm_atp_common_at_cnf_struct vdm_atp_cs_cc_emerg_serv_cat_cnf_struct;

/******************************************************************************
 * AT+CSCM=<application>,<start-end indication>
 * This command is used to start and stop for smart congestion mitigation
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    ims_scm_info_type_enum      application;
    ims_scm_info_action_enum    indication;

} vdm_atp_ims_call_scm_req_struct;

typedef vdm_atp_common_at_cnf_struct vdm_atp_ims_call_scm_cnf_struct;

/******************************************************************************
 * +EIMSPS: rat,type[,cause]
 * indication for silent redial event from AP to MD
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
    rat_enum        rat;
    kal_uint8       type;// bitmask, 0x01 for Voice , 0x02 for SMS
    hvolte_mode_change_cause_enum  cause;
} vdm_atp_ims_domain_preference_ind_struct;


/******************************************************************************
 * +EACB:
 * indication for access barring information
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
    /**/
    kal_uint8 bf_mo_data;
    kal_uint8 bt_mo_data;
    kal_uint8 special_ac_mo_data;
    kal_uint8 bf_mo_signalling;
    kal_bool  is_acb_skip_for_mmtel_voice;
    kal_bool  is_acb_skip_for_mmtel_video;
} vdm_atp_access_barring_ind_struct;


/******************************************************************************
 * AT+EHVOLTE=0,1
 * indication for silent redial event from AP to MD
 *****************************************************************************/
typedef struct 
{
    LOCAL_PARA_HDR
} vdm_atp_hvolte_silent_redial_ind_struct;

/******************************************************************************
 * AT+ECBM
 * This command is used to enter/exit emergency callback mode
 *****************************************************************************/
 
typedef struct
{
    LOCAL_PARA_HDR
    rat_enum                ecbm_rat_mode;
} vdm_atp_ecbm_mode_start_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    rat_enum                ecbm_rat_mode;
} vdm_atp_ecbm_mode_stop_req_struct;

/******************************************************************************
 * +CIEV:102,2
 * This URC is used to notify AP no need to enter ECBM mode
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
} vdm_atp_snd_ecbm_mode_disabled_req_struct;

/******************************************************************************
 * +CIEV:102,0
 * This URC is used to notify AP exit ECBM mode
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
} vdm_atp_snd_exit_ecbm_req_struct;

/******************************************************************************
 * AT+ECFGSET=<cfg_name>,<cfg_value>
 * Set VDM setting through this AT command
 *****************************************************************************/
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8    name[64];      
    kal_uint8    value[128];    
} vdm_atp_ecfg_set_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_ecfg_set_rsp_struct;

/******************************************************************************
 * AT+EIMSRTT=<op>
 * Set rtt_capability through this AT command
 *****************************************************************************/
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8           operation;      
} vdm_atp_cmd_rtt_capability_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_rtt_capability_rsp_struct;

/******************************************************************************
 * AT+ESELFACT="<key>","<value>"
 * Set Vzw self-activation feature related value through this AT command
 *****************************************************************************/
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8           key[16];
    kal_uint8           value[16];
} vdm_atp_cmd_self_activation_ind_struct;

typedef vdm_atp_common_at_rsp_struct vdm_atp_cmd_self_activation_rsp_struct;

/******************************************************************************
 * AT+ERDECCAPV=<is_approve>,<call_id>
 * Set leaving flight mode result through this AT command
 *****************************************************************************/
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8   is_approve;
    kal_uint8   call_id;
} vdm_atp_cmd_switch_to_emergency_ind_struct;

#endif // _VDM_ATP_STRUCT_H_

