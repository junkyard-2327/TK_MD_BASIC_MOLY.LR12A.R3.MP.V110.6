/*************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
*************************************************************/
/*****************************************************************************
*
* FILE NAME   : do_clc_msg_struct.h
*
* DESCRIPTION : Message structure definition for CLC (Connection Layer Control) task.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_CLC_MSG_STRUCT_H_
#define _DO_CLC_MSG_STRUCT_H_


#include "do_clcapi.h"
#include "pswapi.h"
#include "do_almpapi.h"
#include "hlpapi.h"
#include "do_inspapi.h"
#include "do_idpapi.h"
#ifdef MTK_DEV_C2K_IRAT
#include "clcomp.h"
#include "almpdefs.h"
#include "clcidp.h"
#include "cspdefs.h"
#include "inspdefs.h"
#include "clciratm.h"
#include "iratapi.h"
#endif
#include "valdbmapi.h"
typedef struct
{
    LOCAL_PARA_HDR
    AlmpOmpUpdateMsgT msg;
} almp_omp_update_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ClcTimerExpiredMsgT msg;
} clc_timer_expired_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    PswPowerMsgT msg;
} almp_psw_power_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AlmpInspNtwkAcqdMsgT msg;
} almp_insp_ntwk_acqd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AlmpIdpConnFailMsgT msg;
} almp_idp_conn_failed_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AlmpOmpAnRedirectMsgT msg;
} almp_omp_an_redirect_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AlmpCcmSupvFailMsgT msg;
} almp_ccm_supervsn_fail_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpConnStatusMsgT msg;
} hlp_almp_conn_released_msg_struct;

typedef struct
{
   LOCAL_PARA_HDR
   HlpConnStatusMsgT msg;
} hlp_almp_conn_closed_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    AlmpCssSysAcqReqMsgT msg;
} almp_css_sys_acq_req_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
    LOCAL_PARA_HDR
} almp_iratm_to_lte_meas_ctrl_cnf_struct;
#endif

typedef struct
{
    LOCAL_PARA_HDR
    InspRmcPilotAcqRspMsgT msg;
} insp_rmc_pilot_acq_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    InspRmcSyncOKMsgT msg;
} insp_rmc_sync_ok_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    InspCssFreqRspMsgT msg;
} insp_css_freq_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    InspCssOosaSleepReqMsgT msg;
} insp_css_oosa_sleep_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    InspCssOosaSleepReqMsgT msg;
} insp_css_oosa_cont_sleep_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR    
} clc_hsc_oosa_sleep_cnf_msg_struct; /* for NWSIM IT case check */


typedef struct
{
    LOCAL_PARA_HDR
} insp_css_acq_abort_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} smp_css_activate_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}almp_css_system_validated_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}omp_css_system_validated_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}smp_session_close_ets_cmd_struct;

typedef struct
{
    LOCAL_PARA_HDR
}amp_css_data_waiting_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}almp_css_oosa_wakeup_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}almp_notify_srv_status_to_upper_layer_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    InspHscOosaWakeupIndMsgT msg;
} insp_hsc_oosa_wakeup_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    InspRmcRFStatusMsgT msg;
} insp_rmc_rf_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpAlmpActiveMsgT msg;
} idp_almp_activate_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpAlmpDeactiveMsgT msg;
} idp_almp_deactivate_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpAlmpOpenConnMsgT msg;
} idp_almp_open_conn_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} idp_rup_connection_initiated_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpRupIHOResultMsg msg;
} idp_rup_iho_result_msg_struct;

/* MSG_ID_IDP_RMC_IHO_WAKE_REDUCTION_STATE_CNF_MSG */
typedef  struct
{
    LOCAL_PARA_HDR
    IdpRmcIHOWakeReductionStateCnfMsgT msg;
}idp_rmc_iho_wake_reduction_state_cnf_msg_struct;

/* MSG_ID_IDP_RMC_FORCE_ACQ_OVHD_IND_MSG */
typedef  struct
{
    LOCAL_PARA_HDR
    IdpRmcForceAcqOvhdIndMsgT msg;
}idp_rmc_force_acq_ovhd_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpHscResyncDeniedMsgT msg;
} idp_hsc_resync_denied_msg_struct;

/* MSG_ID_IDP_HSC_WAKEUP_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    IdpHscWakeupIndMsgT msg;
} idp_hsc_wakeup_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpAcmTxEndedMsgT msg;
} idp_acm_tx_ended_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpAcmProbeTxingProtectIndMsgT msg;
} idp_acm_probe_txing_protect_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpDsarSignalInteractiveCompleteMsgT msg;
} idp_dsar_signal_interactive_complete_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpSmpSessionClosedMsgT msg;
} idp_smp_session_closed_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpOmpUpdatedMsgT msg;
} idp_omp_updated_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpCspSuspendPeriodTimeMsgT msg;
} idp_csp_suspend_period_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpAmpSessionSeedMsgT msg;
} idp_amp_sessionseed_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpCcmOffsetMsgT msg;
} idp_ccm_offset_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpSlottedModeSetMsgT msg;
} idp_slotted_mode_set_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    Idp1XPsPagingMaskSetMsgT msg;
} idp_1xps_pagingmask_set_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpAlmpSysInfoUpdateMsgT msg;
} idp_almp_sysinfo_update_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpDsarAccessEndedMsgT msg;
} idp_dsar_access_ended_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    DoPrefCCModeSetMsgT msg;
} idp_pref_cc_cycle_set_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpRupChannelChangedIndMsgT msg;
} idp_rup_channel_changed_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpRupForceIHORspMsgT msg;
} idp_rup_force_iho_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpExtendedSlotCycleSetMsgT msg;
} idp_extended_slotcycle_set_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
    LOCAL_PARA_HDR
    IdpOmpOtherRatUpdatedMsgT msg;
} idp_omp_otherrat_updated_msg_struct;
#endif

typedef struct
{
    LOCAL_PARA_HDR
    IdpSmpSessionStatusMsgT msg;
} idp_smp_session_status_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpRupDfsEndMsgT msg;
} idp_rup_dfs_end_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpDfsTimerSetMsgT msg;
} idp_dfs_timer_set_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
#ifdef MTK_DEV_C2K_IRAT
    PswRsvasServiceOccupyResultT msg;
#endif
} idp_psw_rsvas_service_occupy_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
#ifdef MTK_DEV_C2K_IRAT
    IdpValPdnSetupStatusNotifyIndMsgT msg;
#endif
} idp_val_pdn_setup_status_notify_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CspAlmpCloseConnMsg msg;
} csp_almp_close_conn_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    OmpRupIdleHandoffMsgT msg;
} omp_rup_idle_handoff_msg_struct;

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
    LOCAL_PARA_HDR
    OmpEUTRANNeigborListRecT msg;
}iratm_omp_otherrat_updated_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}iratm_rup_idle_handoff_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratmRmcCcellMeasurementCnfT msg;
} iratm_rmc_ccell_measurement_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
}iratm_rmc_sync_msg_acq_start_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
}iratm_rmc_sync_msg_acq_tmr_out_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratmRmcCcellMeasIndT msg;
} iratm_rmc_ccell_meas_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratmRmcAcqCgiCnfT msg;
}iratm_rmc_acq_cgi_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
}iratm_rmc_cgi_acq_start_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
}iratm_rmc_pilot_acq_failed_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratmCssSetRatReqT msg;
}iratm_css_set_rat_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
}iratm_css_suspend_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
}iratm_css_virtual_suspend_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratmRupCurSectorMeasCnfT msg;
}iratm_rup_cur_sector_meas_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratmRupCurSectorSigChangedIndT msg;
} iratm_rup_cur_sector_sig_changed_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratmCssToLteMeasCtrlReqT msg;
}iratm_css_to_lte_meas_ctrl_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratmCssPlmnListUpdateReqT msg;
}iratm_css_plmn_list_update_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratmCssToLteReselFailInfoT msg;
}iratm_css_to_lte_resel_fail_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
}iratm_css_wakeup_cmp_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
}idp_css_rsvas_virtual_suspend_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratmAlmpToLteMeasCtrlReqT msg;
}iratm_almp_to_lte_meas_ctrl_req_struct;

typedef  struct
{
    LOCAL_PARA_HDR
    IratmTimerExpiredMsgT msg;
}iratm_timer_expired_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}iratm_rmc_rx_stop_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
}iratm_css_suspend_resume_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
}iratm_css_virtual_suspend_resume_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IratmCssPowerCtrlReqT msg;
}iratm_css_power_ctrl_req_struct;
#endif


/* DO_PARM_SET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValGenericSetParmMsgT msg;
} do_parm_set_msg_struct;


/* DO_PARM_GET_MSG */
typedef struct
{   LOCAL_PARA_HDR
    ValGenericGetParmMsgT msg;
} do_parm_get_msg_struct;


#ifdef MTK_PLT_ON_PC_UT
typedef struct
{
    LOCAL_PARA_HDR
    DsaFwdMsgT msg;
    kal_uint8 data[CPBUF_SIZE_FWD];  /* data for the cpbuffer */
} ut_clc_dsaf_fwd_msg_struct;

typedef struct
{
    sbp_md_feature_enum feature;
    kal_bool is_turned_on;
} UtClcConfigSbpMsgT;
typedef struct
{
    LOCAL_PARA_HDR
    UtClcConfigSbpMsgT msg;
} ut_clc_config_sbp_msg_struct;


#endif

/* MSG_ID_ELT_OMP_SUPERVISION_EXPIRED_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    OmpSupervisionExpiredCmdMsgT msg;
} elt_omp_supervision_expired_cmd_msg_struct;

#endif

