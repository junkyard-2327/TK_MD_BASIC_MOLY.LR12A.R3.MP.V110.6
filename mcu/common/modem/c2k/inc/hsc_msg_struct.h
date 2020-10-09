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
* FILE NAME   :hsc_msg_struct.h 
*
* DESCRIPTION :This module defines the Layer 1 ILM messgae struct for HSC
*
*
* HISTORY     :
*     1.File Create by atlas.xu, 2016,2,5
*
*****************************************************************************/

#ifndef _HSC_MSG_STRUCT_H
#define _HSC_MSG_STRUCT_H

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "kal_public_defs.h"
#include "hscapi.h"
#include "hscapiex.h"
#include "do_mpaapi.h"
#include "cl1tskll1aapi.h"
#include "cl1fhrtbaif.h"
#include "hscdefs.h"
#include "do_clcapi.h"
#include "l1dapi.h"

typedef struct
{
    LOCAL_PARA_HDR
    HscClcOosaSleepCmdMsgT msg;
} hsc_clc_oosa_sleep_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    HscClcOosaSleepCmdMsgT msg;
} hsc_clc_oosa_cont_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    HscClcOosaSleepCmdMsgT msg;
} l1d_oosa_cont_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    HscInfiniteSleepReqMsgT msg;
} hsc_infinite_sleep_req_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    Ll1aIdpSignalProtectStatusIndT msg;
} hsc_clc_ll1a_idp_signal_protect_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    HscCssSuspendResumeCmdMsgT msg;
} hsc_css_suspend_resume_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} hsc_ssm_deque_signal_cmd_msg_struct;

/* LL1A_PSW_SIGNAL_PROTECT_STATUS_IND */
typedef struct
{
   LOCAL_PARA_HDR
   Ll1aPswSignalProtectStatusIndT msg;
} ll1a_psw_signal_protect_status_ind_struct;

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
/* HSC_SIB8_TIMING_SYNC_REQ */
typedef struct
{
   LOCAL_PARA_HDR
   HscSib8TimingSyncReqMsgT msg;
} hsc_sib8_timing_sync_req_struct;

/* HSC_SIB8_TIMING_SYNC_CNF */
typedef struct
{
   LOCAL_PARA_HDR
   HscSib8TimingSyncCnfMsgT msg;
} hsc_sib8_timing_sync_cnf_struct;
#endif
/* MSG_ID_HSC_SLEEPOVER_INT_COMP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   HscSleepOverCompMsgT msg;
} hsc_sleepover_int_comp_msg_struct;

/* MSG_ID_HSC_SET_SHDR_SVDO_OP_MODE_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   HscSetShdrSvdoOpModeT msg;
} hsc_set_shdr_svdo_op_mode_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
    LOCAL_PARA_HDR
    HscClcSib8InfoCfgMsgT msg;   
} hsc_clc_sib8_info_cfg_msg_struct;
#endif

typedef struct
{
    LOCAL_PARA_HDR
    HscC2kRecoverTimingCnfMsgT msg;
} hsc_recover_timing_cnf_struct;


/* HSC_CLc_CAL_START_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HscClkCalStartMsgT msg;   
} hsc_clc_cal_start_msg_struct;


/* MSG_ID_HSC_CLK_CAL_START_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HscClkCalStartMsgT msg;   
} hsc_clk_cal_start_msg_struct;

/* HSC_IDP_SLEEP_CMD_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   HscIdpSleepCmdMsgT msg;
} hsc_idp_sleep_cmd_msg_struct;

/* MPA_RF_ANTENNA_ASSIGN_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   MpaRspMsgT msg;
} hsc_mpa_rf_antenna_assign_msg_struct;

/* L1D_MPA_RF_PREEMPT_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    MpaReqMsgT msg;
} l1d_mpa_rf_preempt_req_msg_struct;


/* MPA_RF_ANTENNA_RELEASE_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    MpaReqMsgT msg;
} mpa_rf_antenna_release_req_msg_struct;
  
/* MPA_RF_ANTENNA_REQUEST_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   MpaReqMsgT msg;
} mpa_rf_antenna_request_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   MpaRspMsgT msg;
} mpa_rf_release_ind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   MpaRspMsgT msg;
} mpa_rf_antenna_request_cancel_msg_struct;

/* LL1A_CLC_LTE_SCAN_C2K_ACTIVE_PARAMS_IND */
typedef struct
{
   LOCAL_PARA_HDR
   Ll1aClcLteScanC2kActiveParamsIndT    msg;
} ll1a_clc_lte_scan_c2k_active_params_ind_struct;

/* LL1A_L1D_MODE_STATUS_IND */
typedef struct
{
   LOCAL_PARA_HDR
   Ll1aL1dModeStatusIndMsgT      msg;
} ll1a_l1d_mode_status_ind_struct;


typedef struct
{
   LOCAL_PARA_HDR
   Ll1aEvStandbyMeasDoneIndMsgT msg;
} ll1a_evstandby_meas_done_ind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   Ll1aEvStandbyMeasReqMsgT msg;
} ll1a_evstandby_measure_req_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   Ll1aIdpSignalProtectStatusIndT msg;
} ll1a_idp_signal_protect_status_struct;

/* MSG_ID_HSC_IDP_ENABLE_DO_SLOTTED_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   HscIdpSPageParmsMsgT msg;
} hsc_idp_enable_do_slotted_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HscRmcMiniAcqErrMsgT msg;
} hsc_rmc_miniacq_result_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   Ll1aRmcModeStatusIndMsgT msg;
} ll1a_rmc_mode_status_ind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   Ll1aRmcRatStatusIndMsgT msg;
} ll1a_rmc_rat_status_ind_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   Ll1aRmcActiveMeasInfoIndMsgT msg;
} ll1a_rmc_active_measure_info_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpHscResyncDeniedMsgT msg;
} hsc_do_resync_denied_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpHscWakeupIndMsgT msg;
} hsc_wake_ind_msg_struct;


#if defined (MTK_DEV_C2K_IRAT)
/*MSG_ID_HSC_C2K_SIM_INDEX_INFO_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    HscC2kSimIndexInfoMsgT  msg;
}hsc_c2k_sim_index_info_msg_struct;

/* MSG_ID_HSC_C2K_MMO_GAP_INFO_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    HscC2kMmoGapPatternIndMsgT msg;
}hsc_c2k_mmo_gap_info_msg_struct;
#endif

/* HSC_IDP_WAKE_CMD_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   HscIdpWakeCmdMsgT msg;
} hsc_idp_wake_cmd_msg_struct;


#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
/* HSC_1X_PRIORITY_BOOST_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   Hsc1xPriorityBoostMsgT  msg;
}hsc_1x_priority_boost_msg_struct;
#endif
typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8    rxDiversityCtrl;
}hsc_rx_div_ctrl_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    L1dOosaReqMsgT msg;
}l1d_oosa_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    HscFrcSyncInfoReptMsgT msg;
} hsc_frc_sync_info_rept_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    HscDoPriorityBoostMsgT msg;
} hsc_Do_priority_boost_msg_struct;

typedef struct
{
   HscSysAirInterfaceT   ResyncOwner;
   HscSysAirInterfaceT   UpdateOwner;
   HscResyncT            Resync;
} HscSpResyncRecordMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    HscSpResyncRecordMsgT msg;
} hsc_sp_resync_record_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8  index;
#if defined(__UE_SIMULATOR__)
    kal_char   string[256];
  #else
    kal_char   string[128];
#endif
} c2k_sleep_ctrl_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    HscTimeProfileMsgT msg;
} hsc_time_profile_msg_struct;

/* MSG_ID_HSC_CSS_PSEUDO_SET_RAT_IND */
typedef struct
{ 
   LOCAL_PARA_HDR 
   HscCssPseudoSetRatIndT    msg;
}  hsc_css_pseudo_set_rat_ind_struct;

#endif
