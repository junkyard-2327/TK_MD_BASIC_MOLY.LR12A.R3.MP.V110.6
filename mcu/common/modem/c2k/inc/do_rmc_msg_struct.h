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
* FILE NAME   : do_rmc_msg_struct.h
*
* DESCRIPTION : Message structure definition for RMC task.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_RMC_MSG_STRUCT_H_
#define _DO_RMC_MSG_STRUCT_H_


#include "do_rmcapi.h"
#include "do_mpaapi.h"
#include "do_fmpapi.h"
#include "rmcrupmsp.h"
#include "fcpdefs.h"
#include "rcpcsm.h"

#include "rmcdrcdefs.h"
#include "cl1fhrtbaif.h"
#include "cl1tskll1aapi.h"
#include "evl1shrxbsrpctrl.h"


/* RMC */
typedef struct
{
    LOCAL_PARA_HDR
    RmcInspPilotAcqMsgT msg;
} rmc_insp_pilot_acq_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcInsp1XAssistPilotAcqMsgT msg;
} rmc_insp_1xassist_doacq_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcRupRxDeactivateMsgT msg;
} rmc_almp_deactivate_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcIdpInterHoCmdMsgT msg;
} rmc_idp_inter_ho_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcIdpIhoWakeReductionStateReqMsgT msg;
} rmc_idp_iho_wake_reduction_state_req_msg_struct;


/* MSG_ID_RMC_FCP_FTM_STATE_UPDATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    FcpFtmStateT msg;
} rmc_fcp_ftm_state_update_msg_struct;

/* MSG_ID_RMC_FCP_DRC_DEFAULT_ATTRI_UPDATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    FtmDefaultAttributesT msg;
} rmc_fcp_drc_default_attri_update_msg_struct;

/* MSG_ID_RMC_FCP_DRC_ENHANCE_ATTRI_UPDATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    FtmEnhanceAttributesT msg;
} rmc_fcp_drc_enhance_attri_update_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    MpaReqMsgT msg;
} rmc_mpa_rf_shutoff_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcFmpModeChangeMsgT msg;
} rmc_fmp_mode_change_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcHscRxActivateMsgT msg;
} rmc_hsc_rxactivate_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcHscStopTxMsgT msg;
} rmc_hsc_stop_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcRupRxDeactivateMsgT msg;
} rmc_rup_rxdeactivate_msg_struct;

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
typedef struct
{
    LOCAL_PARA_HDR
    RmcRupDfsInfoMsgT msg;
} rmc_rup_dfs_info_msg_struct;
#endif
typedef struct
{
    LOCAL_PARA_HDR
    RmcHscRxActivateMsgT msg;
} rmc_ets_rxactivate_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcHscStopTxMsgT msg;
} rmc_hsc_stop_tx_msg_struct;

/*RMC_IRATM_SET_RAT_REQ*/
typedef struct
{
    LOCAL_PARA_HDR
    RmcFhRatUpdateIndT msg;
} rmc_fh_rat_update_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcFhModemStateUpdateIndT msg;
} rmc_fh_modem_state_update_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcSchShStartIndT msg;
} rmc_sch_sh_start_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ClcDoRxDiversityCtrlMsgT msg;
} elt_rmc_rx_div_ctrl_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    RcpCsmTestSwtichParamT msg;
}elt_csm_test_cell_switch_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcTempAdjUpdateT msg;
} rmc_temp_adj_update_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcFreqAdjUpdateT msg;
} rmc_freq_adj_update_msg_struct;

#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
/*RMC_IRATM_CCELL_MEAS_REQ*/
typedef struct
{
    LOCAL_PARA_HDR
    //RmcIratmCcellMeasReqT msg;
}rmc_iratm_ccell_meas_req_struct;

/* RMC_IRATM_SYNC_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcIratmSyncMsgT msg;
} rmc_iratm_sync_msg_struct;

/*RMC_IRATM_ACQ_CGI_REQ*/
typedef struct
{
    LOCAL_PARA_HDR
    RmcIratmAcqCgiReqT msg;
} rmc_iratm_acq_cgi_req_struct;

/*RMC_IRATM_SET_RAT_REQ*/
typedef struct
{
    LOCAL_PARA_HDR
    RmcIratmSetRatReqT msg;
}rmc_iratm_set_rat_req_struct;

/** MSG_ID_EVSTANDBY_LL1A_GAP_NOTIFY_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    EvStandbyLl1aGapNotifyIndMsgT msg;
}evstandby_ll1a_gap_notify_ind_struct;

/** MSG_ID_EVSTANDBY_LL1A_AUTO_GAP_CNF_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    EvStandbyLl1aAutoGapCnfMsgT msg;
}evstandby_ll1a_auto_gap_cnf_struct;

#endif

/* SCH segment */
typedef struct
{
    LOCAL_PARA_HDR
    SchParmUpdateMsgT msg;
} sch_rup_searchparms_update_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SchPilotUpdateMsgT msg;
} sch_rup_pilot_update_msg_struct;

#ifdef SYS_OPTION_SINGLECHIP_MULTIMODE
/* ASPEN IRAT LTE Idle and Active DO measurement */

typedef struct
{
    LOCAL_PARA_HDR
    RmcIratMeasReqT msg;
} rmc_irat_srch_cfg_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcIratDoMeasAbortT msg;
} rmc_cdmal1_domeas_abort_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcIratDOInactivateReqT msg;
} rmc_irat_do_inactivate_req_struct;
#endif

/* FMP segment */
typedef struct
{
    LOCAL_PARA_HDR
    FmpInspSyncMsgT msg;
} fmp_insp_sync_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    FmpCcmCcShortPktIndMsgT msg;
} fmp_ccm_ccshortpktind_msg_struct;

/*RMC RUP*/
typedef struct
{
    LOCAL_PARA_HDR
    RupSearchResultRptMsgT msg;
} rup_sch_result_rpt_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RupIdpConnTmStateMsgGT msg;
} rup_idp_connst_tmstate_cmd_msg_struct;

/* RUP segment */

typedef struct
{
    LOCAL_PARA_HDR
    RupOmpUpdatedMsgGT msg;
} rup_omp_update_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RupAlmpActiveMsgGT msg;
} rup_almp_activate_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RupTimerExpiredMsgT msg;
} rup_timer_expired_cmd_msg_struct;

#ifdef MTK_DEV_C2K_IRAT

typedef struct
{
    LOCAL_PARA_HDR
    RupIratRATSigMonReqT msg;
} rup_irat_rat_sig_mon_req_struct;
#endif

typedef struct
{
    LOCAL_PARA_HDR
    RmcCssDoScanSlotNumInd msg;
} rmc_css_doscan_slotnum_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcRcpRtapCfgT msg;
}RmcRcpRtapCfgMsgStruct;


typedef struct
{
    LOCAL_PARA_HDR
    RupIdpDfsStartMsgT msg;
} rup_idp_dfs_start_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RupClcDfsSettingsMsgT msg;
} rup_clc_dfs_settings_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RupIopGetDfsInfoMsgT msg;
} rup_iop_get_dfs_info_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcRupDfsCfgMsgT msg;
} rmc_rup_dfs_cfg_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} rmc_rup_dfs_abort_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcRupInterHoMsgT msg;
} rmc_rup_inter_ho_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcRupIntraHoMsgT msg;
} rmc_rup_intra_ho_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    RupRmcCampOnChannelCompleteMsgT msg;
} rup_rmc_camp_on_channel_complete_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RupRmcInterHoNotifyMsgT msg;
} rup_rmc_inter_ho_notify_msg_struct;


#ifdef MTK_DEV_C2K_IRAT
#ifdef MTK_DEV_C2K_SRLTE

/*RUP_IRATM_CUR_SECTOR_MEAS_REQ*/
typedef struct
{
    LOCAL_PARA_HDR
}rup_iratm_cur_sector_meas_req_struct;

/*RUP_IRATM_CUR_SECTOR_SIG_MON_REQ*/
typedef  struct
{
    LOCAL_PARA_HDR
    RupIratmCurSectorSigMonReqT msg;
} rup_iratm_cur_sector_sig_mon_req_struct;

/*RUP_IRATM_DFS_FREQ_NUM_SENT_REQ*/
typedef  struct
{
    LOCAL_PARA_HDR
    RupIratmDfsFreqNumSentReqT msg;
} rup_iratm_dfs_freq_num_sent_req_struct;

/*RUP_CSS_IHO_DISABLE_REQ*/
typedef struct
{
    LOCAL_PARA_HDR
    RupCssIhoDisableReqT msg;
} rup_css_iho_disable_req_struct;

/*RUP_CSS_IHO_ENABLE_REQ*/
typedef struct
{
    LOCAL_PARA_HDR
    RupCssIhoEnableReqT msg;
} rup_css_iho_enable_req_struct;

/* RUP_IDP_CONNST_TMSTATE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RupIdpConnTmStateMsgGT msg;
} rup_idp_conn_tm_state_msg_struct;

/* RMC_IDP_ACCESS_PROTECTION_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcIdpAccessProtectionMsgT msg;
} rmc_idp_access_protection_msg_struct, rmc_idp_traffic_protection_msg_struct;

/* RMC_CLC_IDLE_MODE_CFG_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RmcClcIdleModeCfgMsgT msg;
} rmc_clc_idle_mode_cfg_msg_struct;

/**MSG_ID_RMC_BRP_DRC_RATE_DETERMINATE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RmcDrcPacketRecordDataT msg;
} rmc_drc_packet_record_data_msg_struct;

/** MSG_ID_RMC_SH_DRC_CHTYPE_ESTIMATE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    Evl1ShBsrpDrcValMonitorT msg;
} rmc_sh_drc_chtype_estimate_msg_struct;


/* RMC_RTBA_RF_RESERVE_END_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Cl1RtbaRfReserveEndIndMsgT msg;
} rmc_rtba_rf_reserve_end_ind_msg_struct;

/*typedef struct
{
    LOCAL_PARA_HDR
    RmcTstSetIdpDfsChCntMsgT msg;
}RmcTstSetIdpDfsChCntMsgStruct;*/

typedef struct
{
    LOCAL_PARA_HDR
    RmcTstSetIdpDfsChCntMsgT msg;
}rmc_test_do_set_dfs_chcnt_cmd_struct;

/* MSG_ID_ELT_RUP_PILOT_SUPERVISION_EXPIRED_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    EltRupPilotSupervisionExpiredCmdMsgT msg;
}elt_rup_pilot_supervision_expired_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcFhRatUpdateIndT msg;
}RmcFhRatUpdateMsgStruct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcFcpFtapCfgT msg;
}RmcFcpFtapCfgMsgStruct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcRcpRtapCfgT msg;
}RmcFcpRtapCfgMsgStruct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcFhModemStateUpdateIndT msg;
}RmcFhModemStateUpdateMsgStruct;

typedef struct
{
    LOCAL_PARA_HDR
    RmcTstDoDfsMeet1xWakeupMsgT msg;
}RmcTstDoDfsMeet1xWakeupMsgStruct;

#endif
#endif

typedef struct
{
    LOCAL_PARA_HDR
    RmcRfcValDatSarCfgMsgT msg;
}rmc_val_do_dat_cfg_msg_struct;

/** define the command execute status enumeration */
typedef enum
{
    RMCTST_REQ_SUCCESS,
    RMCTST_REQ_FAILURE,
    RMCTST_REQ_NOT_SUPPORT,
    RMCTST_REQ_INVALID = 0x7FFFFFFF    /* 32 bits aligned */
} RmcTstReqStatusE;

typedef enum
{
    RMC_AFC_MODIFY_FOE_INIT_ICS_TYPE   = 0, /* modify initial FOE */
    RMC_AFC_MODIFY_FOE_INIT_MINI_ACQ_TYPE,
    RMC_AFC_MODIFY_FOE_INIT_STANDBY_TYPE,
    RMC_AFC_MODIFY_FOE_NORMAL_TYPE = 0x00000011, /* modify FOE when rx is already on, 32 bits aligned */
    
} RmcAfcModifyFoeTypeE;

typedef enum
{
    EVL1_AFC_MODIFY_FOE_RELATIVE_METHOD = 0, /* FOE modification value is a relative offset */
    EVL1_AFC_MODIFY_FOE_ABSOLUTE_METHOD = 0x00000001, /* FOE modification value is a absolute value, 32 bits aligned */

} Evl1ShAfcModifyFoeMethodE;

typedef struct
{
    kal_uint32                ModifyFoeFlag;
    RmcAfcModifyFoeTypeE      ModifyFoeType;
    Evl1ShAfcModifyFoeMethodE ModifyFoeMethod;
    kal_int16                 ModifyFoeHz;   /* FOE modification value, in Hz */
    kal_uint16                Reserved;

} RmcAfcModifyFoeCmdMsgT;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE    Status;

} RmcAfcModifyFoeRspMsgT;

typedef enum
{
    RMC_AFC_FOE_QUERY_SCH_TYPE = 0, /* query FOE calculated by searcher */
    RMC_AFC_FOE_QUERY_FNG_TYPE = 0x00000001, /* query FOE calculated by finger, 32 bits aligned */

} RmcAfcFoeQueryTypeE;

typedef struct
{
    RmcAfcFoeQueryTypeE FoeQueryType;
    
} RmcAfcFoeQueryCmdMsgT;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE    Status;
    kal_int16           FoeHz;
    kal_uint16          Reserved;
    
} RmcAfcFoeQueryRspMsgT;

/* parameter of MSG_ID_ELT_RMC_POWER_MODE_TEST_MODE_CMD_MSG */
typedef struct
{
    kal_uint8  AdaptiveRxTestMode; /*0: auto mode   1: test mode */
    kal_uint8  PwrModeInTstMode;   /*0: HPM,   1: LPM*/
    kal_uint16 Reserved;

} RmcRxAgcPwrModeTestModeCmdMsgT;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE   Status;

} RmcRxAgcPwrModeTestModeRspMsgT;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE   Status;

    kal_int16          MainImmRssidBmQ5;
    kal_int16          DivImmRssidBmQ5;
    kal_int16          SecImmRssidBmQ5;
    kal_uint16         Reserved1;
    kal_uint8          MainPwrMode;  /*0: HPM,   1: LPM*/
    kal_uint8          DivPwrMode;
    kal_uint8          SecPwrMode;
    kal_uint8          Reserved2;
    
} RmcRxAgcRssiPwrModeQueryRspMsgT;

typedef struct {
   kal_uint32    DfsTstServingFlag; 
   
} RmcDoDfsServChCmdMsgT;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE   Status;

} RmcDoDfsServChRspMsgT;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE   Status;
} RmcTestDoSetDfsChCntRspMsgT;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE   Status;
} RupSupervisionExpiredRspMsgT;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE   Status;
    kal_uint32  PilotPn;
} RmcSchPilotUpdateRspMsgT;


typedef struct
{
    kal_uint32 Reserve;
} RmcMmAfcStateQueryCmdMsgT;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE   Status;
    kal_uint32         MmAfcState; /* 0: flight state */
                                   /* 1: standby state */
                                   /* 2: active idle state */
                                   /* 3: active dedicate state */

} RmcMmAfcStateQueryRspMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    RmcDoDfsServChCmdMsgT msg;
}RmcTestDO_DFSServChMsgStruct;

typedef struct
{
    kal_uint32 Reserve;
} RmcRxTxActSlotQueryCmdMsgT;

typedef struct
{
    /* Request execute status */
    RmcTstReqStatusE   Status;
    kal_uint32         RxActiveSlot;
    kal_uint32         TxActiveSlot[5];
    
} RmcRxTxActSlotQueryRspMsgT;


#endif
