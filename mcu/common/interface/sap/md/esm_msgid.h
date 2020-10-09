/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *   esm_sap.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   LTE NAS ESM related message identity definition
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 28 2019 kevin.gao
 * [MOLY00434902] [Gen93][LR12A.R3.MP] Add new ILM IA_APN_SET_REQ to solve the attach issue - Header Part
 * 	
 * 	[Gen93][LR12A.R3.MP][ESM] Add MSG_ID_EVAL_ESM_IA_APN_SET_REQ.
 *
 * 06 18 2019 rex.wu
 * [MOLY00413920] [Gen93][LR12A.R3.MP][PAM][Interface] Add new ILM: MSG_ID_xSMREG_LOCAL_PDP_DEACT_NTF relayed to xSM
 * 	
 * 	[Gen93][LR12A.R3.MP][PAM] Add new ILM: MSG_ID_xSMREG_LOCAL_PDP_DEACT_NTF relayed to xSM.
 *
 * 06 19 2018 rex.wu
 * [MOLY00334005] Customized handling in TMO SIM card and ESM UT Timer Expire Immediately.
 *
 * 05 04 2018 yu-hsin.lin
 * [MOLY00324014] [R3.MP][ESM INTERFACE][Merlot][O1][MP3][MTBF][HQ][4GMM][Lab][Ericsson][Fatal error(task)] err_code1:0x00000305 err_code2:0x888802DA err_code3:0xCCCCCCCC
 * [interface] is_emergency_bearer, enum, and msg struct for esm_ratdm_ac_bar_alleviate_req;
 *
 * 02 12 2018 yu-hsin.lin
 * [MOLY00307326] [R3][Volunteer Patch][IMS]Dual IMS registration enhacement
 * msgid for gemini_failure_start and end
 *
 * 12 08 2017 yu-hsin.lin
 * [MOLY00294894] [ATT][RnS][LTE-BTR-1-8909]#30: FAIL - EMERGENCY PDN connection establishment over WLAN is performed.
 * [Interface]Add ESM EMM interface MSG_ID_ESM_EMM_IMS_REG_STATUS_UPDATE_IND.
 *
 * 11 09 2016 vera.yeh
 * [MOLY00185907] [MT6293] [ENAS] UMOLY merge to UMOLYA
 * [ESM][re-arch] interface change for __RENAME_URGE_TO_EST__.
 * 	1) Define new msg ATTACH_NEEDED_GET_ESM_MSG_IND to replace URGE_TO_EST_IND/URGE_TO_EMC_IND
 * 	2) Replace EST_REQ as ATTACH_NEEDED_GET_ESM_MSG_RSP
 *
 * 09 26 2016 vera.yeh
 * [MOLY00205116] [6293][ESM][TFTLIB] new feature/re-arch item porting to UMOLYA trunk
 * [ESM][OA] PS.DEV proting to UMOLYA.Trunk.
 * 	1. wlan offload IEI/interface/enum/structure
 * 	2. iLM rename for GEMINI_suspend/resume
 * 	3. LTE QCI default value
 *
 * 06 27 2016 vera.yeh
 * [MOLY00185907] [MT6293] [ENAS] UMOLY merge to UMOLYA
 * [ESM][OA] proting from UMOLY Trunk up to MOLY00180729(CL2412641).
 *
 * 09 23 2015 tc.chang
 * [MOLY00141130] [ESM] element size reduction.
 *
 * 09 08 2015 tc.chang
 * [MOLY00139612] AT&T requirement - <CDR-DAM-2120> and <CDR-DAM-2130>.
 *
 * 08 18 2015 panu.peisa
 * [MOLY00121007] VZ_REQ_LTEDATARETRY_7743 to 6291
 * 	Integrated CL 1463334 to UMOLY. VzW fix: remove unused message PAM_ESM_T3402_START_IND.
 *
 * 07 16 2015 matti.moisanen
 * [MOLY00121007] VZ_REQ_LTEDATARETRY_7743 to 6291
 * 	VzW fix: remove unused message PAM_ESM_T3402_START_IND
 *
 * 06 18 2015 panu.peisa
 * [MOLY00122487] EMM, ESM & PAM module VzW feature porting from 6290 to 6291
 * 	SWRD part, change have dependency to LTE_SEC parts.
 *
 * 06 17 2015 matti.moisanen
 * VZ_REQ_LTEDATARETRY_7782 to UMOLY_DEV_VxW, SWRD part
 *
 * 06 17 2015 teemu.partanen
 * [VZ_REQ_LTEDATARETRY_7736] From Moly to UMOLY Cbr 1/2 (SWRD).
 *
 * 06 14 2015 mika.kaikkonen
 * [VZ_REQ_LTEDATARETRY_7789] Throttling state of an attach PDN - PAM implementation and new message ID's.
 *
 * 06 13 2015 mika.kaikkonen
 * [VZ_REQ_LTEDATARETRY_7785] Preparation: VzW specifc utility functions and interface updates
 *
 * 04 16 2015 carlson.lin
 * [MOLY00091769] [GEMINI] Trigger TAU/SR after GEMINI resume
 * Add iterface (OA Domain)
 *
 * 02 23 2015 bob.chiang
 * [MOLY00096607] Sync C2K CR
 * .
 *
 * 02 13 2015 carlson.lin
 * [MOLY00091822] RATDM reorganization
 * RATDM merge LTM, SM and ESM related interface checkin
 *
 * 11 12 2014 carlson.lin
 * [MOLY00084165] [UMOLY][R10][R11] NAS check-in from 6291_DEV to UMOLY Trunk
 * (Sync from MT6291_DEV upto CL 869855)
 *
 * 11 11 2014 carlson.lin
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * Sync MTC CBr to CL 863378
 *
 * 10 24 2014 joe.chang
 * [MOLY00081578] [K2][8430][EMC IT][Assert] esm_session_mng.c line:2602
 * [ESM] Add msgid for emergency call preference setting
 *
 * 10 15 2014 carlson.lin
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * <saved by Perforce>
 *
 * 09 10 2014 carlson.lin
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * <saved by Perforce>
 *
 * 08 15 2014 roy.lin
 * [MOLY00075547] [4G Gemini] Gemini Suspend/Resume interface for fast SIM1 UL data resume
 * [ESM] Add GEMINI suspend/resume related msg id
 *
 * 06 04 2014 carlson.lin
 * [MOLY00067710] [ESM] Sync latest ESM code to TK6291_DEV
 * <saved by Perforce>
 *
 * 02 17 2014 roy.lin
 * [MOLY00055341] [MP1 Post MP Patch][MT6290E2][LTE attach PDN] UE doesn't perform LTE attach due to TCM cmd conflict
 * Add EVAL_ESM_EPS_ATTACH_NEEDED_REJ_RSP msg id.
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 01 13 2014 joe.chang
 * [MOLY00053423] [MT6290_VOLTE] VoLTE development merge back to MOLY
 * [ESM] MSGID check-in
 *
 * 01 13 2014 allen.keh
 * [MOLY00053328] [MT6290E2][VoLTE] VoLTE development merge back to TRUNK.
 * 	Add message ids & SAP ids
 *
 * 10 18 2013 joe.chang
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * [ESM] Merge from MMDC pre-build CBr
 *
 * 10 16 2013 joe.chang
 * [MOLY00041280] [MT6290E1][MMDS_DC][82LTEv1][L+G] esm assert: esm_session_mng.c 460
 * Check in missing patch for esm_msgid.h
 *
 * 07 24 2013 joe.chang
 * [MOLY00031020] [MMDS_DC] Merge MMDC interface to MOLY
 * check in esm_msgid.h
 *
 * 06 06 2013 chewen.wu
 * [MOLY00025266] ESM EM support
 * ESM EM Development.
 *
 * 11 07 2012 roy.lin
 * [MOLY00005322] TATAKA merge to MOLY
 * Add ESM related interface(msgid, struct, enum).
 ****************************************************************************/

#ifndef _ESM_SAP_H
#define _ESM_SAP_H

#include "module_msg_range.h"

MODULE_MSG_BEGIN( MSG_ID_ESM_CODE_BEGIN )
/****************************************************************************
 *                          Destination: ESM (EVAL to ESM)
 ****************************************************************************/
MSG_ID_ESM_EVAL2ESM_BEGIN = MSG_ID_ESM_CODE_BEGIN,
MSG_ID_EVAL_ESM_EPS_ATTACH_NEEDED_REJ_RSP,

MSG_ID_EVAL_ESM_C2K_IRAT_COMPLETE_REQ,
MSG_ID_EVAL_ESM_IA_APN_SET_REQ,
MSG_ID_EVAL_ESM_C2L_TRANSFER_REQ,

/****************************************************************************
 *                          Destination: ESM (L4C to ESM)
 ****************************************************************************/
MSG_ID_ESM_L4C2ESM_BEGIN,
MSG_ID_L4CESM_RAT_CHANGE_REQ,
MSG_ID_L4CESM_RAT_CHANGE_RSP,
#ifdef __SGLTE__
MSG_ID_L4C_ESM_PS_SWITCH_CONTEXT_TRANSFER_REQ,
MSG_ID_L4C_ESM_PS_SWITCH_CONTEXT_TRANSFER_RSP,
#endif /* __SGLTE__ */

/****************************************************************************
 *                          Destination: ESM (ETCM to ESM)
 ****************************************************************************/
MSG_ID_ESM_TCM2ESM_BEGIN,
MSG_ID_ESMREG_PDN_CONN_EST_REQ,
MSG_ID_EVAL_ESM_PDN_CONN_EST_REQ = MSG_ID_ESMREG_PDN_CONN_EST_REQ,
MSG_ID_ESMREG_BEARER_RSC_ALLOC_REQ,
MSG_ID_EVAL_ESM_BEARER_RSC_ALLOC_REQ = MSG_ID_ESMREG_BEARER_RSC_ALLOC_REQ,
MSG_ID_ESMREG_BEARER_RSC_MOD_REQ,
MSG_ID_EVAL_ESM_BEARER_RSC_MOD_REQ = MSG_ID_ESMREG_BEARER_RSC_MOD_REQ,
MSG_ID_ESMREG_EPSB_DEACT_REQ,
MSG_ID_EVAL_ESM_EPSB_DEACT_REQ = MSG_ID_ESMREG_EPSB_DEACT_REQ,
MSG_ID_ESMREG_PDN_CONN_EST_RSP,
MSG_ID_EVAL_ESM_PDN_CONN_EST_RSP = MSG_ID_ESMREG_PDN_CONN_EST_RSP,
MSG_ID_ESMREG_PDN_CONN_UPDATE_RSP,
MSG_ID_EVAL_ESM_PDN_CONN_UPDATE_RSP = MSG_ID_ESMREG_PDN_CONN_UPDATE_RSP,

/****************************************************************************
 *                          Destination: ESM (PAM to ESM)
 ****************************************************************************/
MSG_ID_ESMREG_DUAL_PRIORITY_CONFIG_REQ,
MSG_ID_PAM_ESM_AVAILABLE_APN_INFO_REQ,
MSG_ID_ESMREG_LOCAL_PDN_DEACT_NTF,

/****************************************************************************
 *                          Destination: ESM (EMM to ESM)
 ****************************************************************************/
MSG_ID_ESM_EMM2ESM_BEGIN,
//[6293 re-arch] __RENAME_URGE_TO_EST__
//MSG_ID_ESM_EMM_URGE_TO_EST_IND,
MSG_ID_ESM_EMM_ATTACH_NEEDED_GET_ESM_MSG_IND,
MSG_ID_ESM_EMM_DEREG_IND,
MSG_ID_ESM_EMM_GET_ESM_CAUSE_IND,
MSG_ID_ESM_EMM_GET_EPSB_STATUS_IND,
MSG_ID_ESM_EMM_UPDATE_EPSB_STATUS_IND,
MSG_ID_ESM_EMM_DATA_SUSPEND_IND,
MSG_ID_ESM_EMM_DATA_RESUME_IND,
MSG_ID_ESM_EMM_EPSBEARER_DATA_IND,
MSG_ID_ESM_EMM_DATA_IND,
MSG_ID_ESM_EMM_DATA_SEND_IND,
MSG_ID_ESM_EMM_DATA_CNF,
MSG_ID_ESM_EMM_CONN_RELEASE_IND,
MSG_ID_ESM_EMM_REEST_REJ,
MSG_ID_ESM_EMM_ABORT_CNF,
MSG_ID_ESM_EMM_QUERY_UL_DATA_STATUS_IND,
MSG_ID_ESM_EMM_RAT_CHANGE_IND,
MSG_ID_ESM_EMM_RAT_CHANGE_CNF,
MSG_ID_ESM_EMM_GEMINI_SUSPEND_AND_NO_CELL_IND,
MSG_ID_ESM_EMM_GEMINI_RESUME_AND_WAIT_CELL_TO_PROCEED_IND,
MSG_ID_ESM_EMM_GEMINI_FAILURE_START_IND,
MSG_ID_ESM_EMM_GEMINI_FAILURE_END_IND,
MSG_ID_ESM_EMM_AC_BAR_ALLEVIATE_IND,

// Destination: ESM (EMM to ESM) (For MMDC use)
#if defined(__SGLTE__)
MSG_ID_ESM_EMM_PS_SWITCH_CONTEXT_TRANSFER_IND, // 4G -> 2G
MSG_ID_ESM_EMM_PS_SWITCH_CONTEXT_TRANSFER_CNF, // 2G -> 4G
#endif /* __SGLTE__ */
// Destination: ESM (EMM to ESM) (For IMS use)
MSG_ID_ESM_EMM_EMC_ATTACH_REJ_IND,
//[6293 re-arch] __RENAME_URGE_TO_EST__
//MSG_ID_ESM_EMM_URGE_TO_EMC_EST_IND,
MSG_ID_ESM_EMM_EMC_DATA_FAIL_IND,
MSG_ID_ESM_EMM_ENTER_EMC_ATTACH_IND,
MSG_ID_ESM_EMM_STOP_T3396_IND,

/************ (EMM -> ESM: For VzW usage) ************/
MSG_ID_ESM_EMM_T3402_STOP_IND,  // __VZW__ __VZW_3__
MSG_ID_ESM_EMM_STOP_PDN_THROTT_TIMER_IND, // __VZW__ __VZW_10__
MSG_ID_ESM_EMM_CELL_INFO_IND,  // __VZW__ __VZW_4__

/************ (EMM -> ESM: For AT&T usage) ************/
MSG_ID_ESM_EMM_T3402_CHANGE_IND, // __ATnT__
MSG_ID_ESM_EMM_IMS_REG_STATUS_UPDATE_IND, // __ATnT__ WIFI calling

/****************************************************************************
 *                          Destination: ESM (LTM/RATDM to ESM)
 ****************************************************************************/
/* RATDM -> ESM */
MSG_ID_ESM_RATDM2ESM_BEGIN,
MSG_ID_ESM_LTM2ESM_BEGIN = MSG_ID_ESM_RATDM2ESM_BEGIN,
MSG_ID_ESM_RATDM_IDLE_LEAVE_IND,
MSG_ID_ESM_LTM_IDLE_LEAVE_IND = MSG_ID_ESM_RATDM_IDLE_LEAVE_IND,
MSG_ID_ESM_RATDM_QUERY_UL_DATA_STATUS_CNF,
MSG_ID_ESM_LTM_QUERY_UL_DATA_STATUS_CNF = MSG_ID_ESM_RATDM_QUERY_UL_DATA_STATUS_CNF,


/****************************************************************************
 *                          Destination: ESM (SM to ESM)
 ****************************************************************************/
MSG_ID_ESM_SM2ESM_BEGIN,
MSG_ID_SM_ESM_EPSB_CONTEXT_TRANSFER_RSP,
MSG_ID_SM_ESM_PDP_CONTEXT_TRANSFER_REQ,
MSG_ID_SM_ESM_STANDBY_ON_OLD_RAT_REQ,


/****************************************************************************
 *                          Destination: ESM (ESM internal use)
 ****************************************************************************/
MSG_ID_ESM_MOD_GLOBAL_VAR_REQ,
MSG_ID_ESM_STATUS_REPORT_IND,
MSG_ID_ESM_STATUS_REPORT_RSP,
MSG_ID_ESM_SET_EMC_DOMAIN_PREFERENCE_REQ,
MSG_ID_ESM_UT_TIMER_EXPIRY_IMMEDIATELY,

/****************************************************************************
 *                          Destination: ESM (For EM use)
 ****************************************************************************/

MSG_ID_ESM_ENABLE_EM_INFO_IND_REQ,

/****************************************************************************
 *                          Destination: NIL (For ESM UT Checking GV use)
 ****************************************************************************/

MSG_ID_ESM_EPSBC_CHECK_GV,

MSG_ID_ESM_PT_CHECK_GV,

MSG_ID_ESM_DPC_CHECK_GV,
MSG_ID_ESM_DPC_CHECK_CERTAIN_EBI_DRB_GV,

MSG_ID_ESM_IMS_CHECK_GV,

MSG_ID_ESM_RAT_CHECK_GV,

MSG_ID_ESM_MISC_CHECK_GV,

MSG_ID_ESM_ACTIVATE_DEFAULT_EPS_BEARER_CONTEXT_REJECT_CHECK_GV,
MSG_ID_ESM_ACTIVATE_DEDICATED_EPS_BEARER_CONTEXT_REJECT_CHECK_GV,
MSG_ID_ESM_PDN_CONNECTIVITY_REQUEST_CHECK_GV,
MSG_ID_ESM_PDN_DISCONNECT_REQUEST_CHECK_GV,
MSG_ID_ESM_BEARER_RESOURCE_ALLOCATION_REQUEST_CHECK_GV,
MSG_ID_ESM_BEARER_RESOURCE_MODIFICATION_REQUEST_CHECK_GV,
MSG_ID_ESM_ESM_INFORMATION_RESPONSE_CHECK_GV,

/****************************************************************************
 *                          Destination: DHL (ESM ELT Log Debug Message)
 ****************************************************************************/

MSG_ID_ESM_LOG_ESM_EVENT_ERR_STS, // for logging NW Air Message: esm_event_err_sts_struct
MSG_ID_ESM_LOG_ESM_EVENT_ESM_MSG, // for logging NW Air Message: esm_event_esm_msg_struct
MSG_ID_ESM_LOG_TFT_INFO,
MSG_ID_ESM_LOG_TCMESM_PCO,

MSG_ID_ESM_CODE_END,

MODULE_MSG_END( MSG_ID_ESM_CODE_TAIL )

#endif
