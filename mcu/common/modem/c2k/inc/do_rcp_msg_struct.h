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
* FILE NAME   :do_rcp_msg_struct.h
*
* DESCRIPTION :
*
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/
/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#ifndef _DO_RCP_MSG_STRUCT_H
#define _DO_RCP_MSG_STRUCT_H
#include "par.h"
#include "rtap.h"
#include "ftapf.h"
#include "rtm.h"
#include "rtmqos.h"
#include "rcpcsm.h"
#include "do_rcpapi.h"
#include "do_slapi.h"
#include "do_dsaapi.h"

/* MACRO definitions */
#define MAX_LLD_LOG_DATA_LEN    16
#define MAX_LLD_LOG_NUM         10

/* EvDO RCP Message */
/* RCP_DATA_MAILBOX */

/* UT_RCP_DSAF_FWD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsaFwdMsgT msg;
    kal_uint8 data[CPBUF_SIZE_FWD];  /* data for the cpbuffer */
} ut_rcp_dsaf_fwd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16   data_size;
    kal_uint16   lld_num;
    struct
    {
        kal_uint16 data_len;
        kal_uint8  data[MAX_LLD_LOG_DATA_LEN]; /* MAC data of each LLD for UT check */
    }lld_data[MAX_LLD_LOG_NUM];
} ut_rcp_dma_data_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RtmCfgDataT msg;
} ut_rcp_rtm_commit_msg_struct;

#ifdef MTK_PLT_ON_PC_UT
/* UT_PAR_DSA_FWD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsaFwdMsgT msg;
    kal_uint8 data[CPBUF_SIZE_FWD];  /* data for the cpbuffer */
} ut_par_dsa_fwd_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 acm_subtype;
    AcmAttributesT acmAttribute;
} ut_rcp_acm_commit_msg_struct;

/* UT_PAR_QOM_SEND_QOSREQUEST_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 data[CPBUF_SIZE_REV];
} ut_par_qom_send_qosrequest_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8  revMacId;
} rcp_tst_phy_traffic_acked_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8  revMacId;
} rcp_tst_phy_traffic_missed_struct;

/*MSG_ID_RCP_TST_PKT_SENT*/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   macid;
} rcp_tst_pkt_sent_msg_struct;

/*MSG_ID_RCP_TST_PKT_NOT_SENT*/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   macid;
} rcp_tst_pkt_not_sent_msg_struct;

/* MSG_ID_RCP_TST_CREATE_MAC_FLOW_LIST*/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   macid;
    kal_uint8   streamId;
    kal_uint8   SSid;
    kal_uint8   stype;
} rcp_tst_create_mac_flow_list_msg_struct;

/* RCP_TST_MAC_FLOW_LIST_INTEGRITY*/
typedef struct
{
    LOCAL_PARA_HDR
} rcp_tst_mac_flow_list_integrity_msg_struct;

/* MSG_ID_RCP_TST_COMMIT_APP_FN_PTRS*/
typedef struct
{
    LOCAL_PARA_HDR
} rcp_tst_commit_app_fn_ptrs_msg_struct;

/* MSG_ID_RCP_TST_ADD_MSG_TO_QUE*/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   appsubtype;
    kal_uint8   size;
    kal_uint8   prio;
} rcp_tst_add_msg_to_que_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} rcp_tst_print_app_ques_msg_struct;

/* MSG_ID_RCP_TST_GRANT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   NumFlowsRcvingThisGrant;
    kal_uint8   grantByteSize[4];
} rcp_tst_grant_msg_struct;


/* MSG_ID_RCP_TST_PRINT_ASSEMBLED_PKT_LIST*/
typedef struct
{
    LOCAL_PARA_HDR
} rcp_tst_print_assembled_pkt_list_struct;


#endif

typedef struct
{
    LOCAL_PARA_HDR
    StreamConfigAttribT msg;
} ut_stream_commit_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 subtype;
} ut_stream1_commit_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 subtype;
} ut_stream2_commit_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ParServiceConfigDataT serviceConfigData;
} ut_stream3_commit_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16        signalId;
    kal_uint32        action;
    kal_uint16        slot;
} ut_acm_log_out_signal_msg_struct;


/* used to set mac bits */
typedef struct
{
    LOCAL_PARA_HDR
    RtmTestMbpMacBitsOutputMsgT mbpMacBitsOutput;
} ut_mbp_mac_bits_output_msg_struct;

/* used to set do systime */
typedef struct
{
    LOCAL_PARA_HDR
    SysTimeFullT sysTimeFull;
} ut_set_stdo_msg_struct;

/* DSAF_FWD_MSG, only for from SNP to RCP */
typedef struct
{
    LOCAL_PARA_HDR
    DsaFwdMsgT msg;
} dsaf_fwd_msg_struct;


/* RCP_ADJ_UPDATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RcpAdjUpdateT msg;
} rcp_adj_update_msg_struct;


/* RCP_CMD_MAILBOX */
/* RCP_RMC_RFREADY_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} rcp_rmc_rfready_msg_struct;

/* RCP_RMC_RFRELEASE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} rcp_rmc_rfrelease_msg_struct;

/* MSG_ID_RCP_CSM_SECTOR_INFO_UPDATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RcpUpdateSectorInfoMsg msg;
} rcp_csm_sector_info_update_msg_struct;

/* MSG_ID_RCP_CSM_SECTOR_C2I_UPDATE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RcpUpdateC2IMsg msg;
} rcp_rmc_sector_c2i_update_msg_struct;

/*RCP_CSM_ACTIVE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RcpCsmActiveMsgT msg;
} rcp_csm_active_msg_struct;

/*RCP_CSM_DEACTIVE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rcp_csm_deactive_msg_struct;

/*RCP_CSM_SECTOR_INFO_REQ_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rcp_csm_sector_info_req_struct;

/*RCP_CSM_DONE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rcp_csm_done_msg_struct;


/*RCP_CSM_FORCE_DEDICATE_COVER_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rcp_csm_force_dedicate_cover_struct;

/*RCP_CSM_HSC_PREEMPT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RcpCsmHscStopTxMsgT msg;
} rcp_csm_hsc_preempt_struct;

/*RCP_CSM_HSC_RESUME_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rcp_csm_hsc_resume_struct;

/*RCP_CSM_TX_FREEZE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rcp_csm_tx_freeze_struct;

/*RCP_CSM_TX_UNFREEZE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rcp_csm_tx_unfreeze_struct;

/*RCP_CSM_TCA_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    RcpCsmTcaIndMsgT msg;
} rcp_csm_tca_ind_msg_struct;

/*MSG_ID_RCP_CSM_CELLSWRDY_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    Evl1CsmRdyMsgT msg;
} rcp_csm_cellswrdy_msg_struct;


/*MSG_ID_RCP_CSM_C2I_RD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    Evl1CsmC2iRdMsgT msg;
} rcp_csm_c2i_rd_msg_struct;


/*RCP_SH_RFREADY_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rcp_sh_rfready_msg_struct;

/*RCP_SH_RFRELEASE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} rcp_sh_rfrelease_msg_struct;


/* RCP_AMP_ATILIST_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    AcmAmpATIListMsgT msg;
} rcp_amp_atilist_msg_struct;

/* RTM_TXOFF_INIT_BUFFER_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RtmTxOffInitBufferMsgT msg;  /* rtm.h */
} rtm_txoff_init_buffer_msg_struct;

/* MSG_ID_RTM_AMP_TXATI_UPDATE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    AcmAmpATIListMsgT msg;
} rtm_amp_txati_update_msg_struct;


/* ACM_RUP_ACTIVATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    AcmRupActivateMsgT msg;
} acm_rup_activate_msg_struct;

/* ACM_RUP_DEACTIVATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} acm_rup_deactivate_msg_struct;

/* ACM_DSA_ADD_BYTE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} acm_dsa_add_byte_msg_struct;

/* ACM_OMP_SECTORPARMS_UPDATED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    AcmOmpUpdatedMsgT msg;
} acm_omp_sectorparms_updated_msg_struct;

/* ACM_TIMER_EXPIRED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} acm_timer_expired_msg_struct;

/* ACM_RUP_ACCESS_HO_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} acm_rup_access_ho_ind_msg_struct;

/* ACM_PROT_STOP_ACCESS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    AcmProtStopAccessMsgT msg;
} acm_prot_stop_access_msg_struct;

/* ACM_SCP_RECONFIGURED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} acm_scp_reconfigured_msg_struct;

/* ACM_SCP_COMMITTED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} acm_scp_committed_msg_struct;

/* RTM_RUP_ACTIVATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} rtm_rup_activate_msg_struct;

/* RTM_RUP_DEACTIVATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} rtm_rup_deactivate_msg_struct;

/* RTM_RUP_TCHASSIGN_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RtmRupTchAssignMsgT msg;
} rtm_rup_tchassign_msg_struct;

/* RTM_OMP_SECTORPARMS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RtmOmpSectorParmsMsgT msg;
} rtm_omp_sectorparms_msg_struct;

/* RTM_FTM_CFG_DATA_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RtmFtmCfgDataMsgT msg;
} rtm_ftm_cfg_data_msg_struct;

/* RTM_SMP_SESSION_OPEN_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RtmSmpSessionOpenMsgT msg;
} rtm_smp_session_open_msg_struct;

/* RTM_CSS_SEARCH_END_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RtmCssSearchEndMsgT msg;
} rtm_css_search_end_msg_struct;


/* RTM_RTAP_MODE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RtmRtapModeMsgT msg;
} rtm_rtap_mode_msg_struct;

/* RTM_TMR_EXPIRED_MSG */

/* RMC_RCP_RTAP_MODE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool RtapModeEn;
} rtm_rmc_rtap_cfg_msg_struct;

/* RMC_FCP_FTAP_MODE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool FtapModeEn;
} fcp_rmc_ftapr_cfg_msg_struct;


/* RTM_TMR_EXPIRED_MSG */

typedef struct
{
    LOCAL_PARA_HDR
    RtmTmrExpiredMsgT msg;
} rtm_tmr_expired_msg_struct;

/* RTM_DRC_TX_CONTROL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RtmDrcTxControlMsgT msg;
} rtm_drc_tx_control_msg_struct;

/* RTM_SCP_RECONFIGURED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} rtm_scp_reconfigured_msg_struct;

/* RTM_SCP_COMMITTED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} rtm_scp_committed_msg_struct;

/* SPY_RTM3_T2P_STATE_MSG */
typedef struct
{
	LOCAL_PARA_HDR
	RtmQoSSpyDataT RtmQoSSpyData[RTM_QOS_SPY_SUBFR_NO];
} spy_rtm3_t2p_state_msg_struct;

/* UT_RTM_SWEEP_MODE_ACTIVATE_MSG */
/* UT_DSAR_REV_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ut_rtm_sweep_mode_active_msg_struct;

/* UT_RTM_SWEEP_MODE_DEACTIVATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ut_rtm_sweep_mode_deactive_msg_struct;

/* UT_DSAR_REV_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsaRevMsgT msg;
    /* kal_uint8 dataLen; */
    kal_uint8 data[CPBUF_SIZE_SIG];  /* data for the cpbuffer */
} ut_dsar_rev_msg_struct;

/* DSAR_REV_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsaRevMsgT msg;
} dsar_rev_msg_struct;

/* DSAR_REV_MULTI_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsaRevMultiMsgT multiMsg;
} dsar_rev_multi_msg_struct;

/* DSAR_TX_STATUS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsarTxStatusMsgT msg;
} dsar_tx_status_msg_struct;

/* DSAR_DSAF_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsarAckMsgInfoT msg;
} dsar_dsaf_ack_msg_struct;

/* DSAR_DSAF_ACK_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsarAckReqMsgInfoT msg;
} dsar_dsaf_ack_req_msg_struct;

/* DSAR_DSAF_RESET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsarResetMsgT msg;
} dsar_dsaf_reset_msg_struct;

/* DSAR_RUP_CONNECTION_INIT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} dsar_rup_connection_init_msg_struct;

/* DSAR_RTM_LINK_ACQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} dsar_rtm_link_acq_msg_struct;

/* DSAR_TIME_EXP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsarTimeExpMsgT msg;
} dsar_time_exp_msg_struct;

/* DSAR_SENT_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsarTransmitRespMsgT msg;
} dsar_sent_ind_msg_struct;

/* DSAR_NOT_SENT_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsarTransmitRespMsgT msg;
} dsar_not_sent_ind_msg_struct;

/* DSAR_ALMP_CONNECTION_CLOSED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} dsar_almp_connection_closed_msg_struct;

/* DSAR_ALMP_DEL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsarDelMsgCmdMsgT msg;
} dsar_almp_del_msg_struct;

/* DSAR_RUP_DEL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsarDelMsgCmdMsgT msg;
} dsar_rup_del_msg_struct;

/* DSAR_ALMP_POWER_DOWN_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} dsar_almp_power_down_msg_struct;

/* DSAR_AMP_RESET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsarAmpResetMsgCmdMsgT msg;
} dsar_amp_reset_msg_struct;

/* DSAR_RUP_IDLE_HHO_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} dsar_rup_idle_hho_msg_struct;

/* DSAR_CSS_CHAN_SCAN_START_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} dsar_css_chan_scan_start_msg_struct;

/* DSAR_CSS_CHAN_SCAN_DONE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} dsar_css_chan_scan_done_msg_struct;

/* DSAR_IDP_TX_AVAIL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} dsar_idp_tx_avail_msg_struct;

/* PAR_QOM_RESERVATION_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ParRlpReservationOnOffMsgT msg;
} par_qom_reservation_req_msg_struct;

/* PAR_QOM_SEND_QOSREQUEST_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ParSnKKQosReqMsgT msg;
} par_qom_send_qosrequest_msg_struct;

/* PAR_LUP_UNSOLICITED_CFG_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    LUPUnsolicitedCfgMsgT msg;
} par_lup_unsolicited_cfg_msg_struct;

/* PAR_HLP_CLEANUP_QUEUE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} paf_hlp_stop_svcstrm_xoff_msg_struct;

/* PAR_HLP_CLEANUP_QUEUE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} par_hlp_cleanup_queue_msg_struct;

/* RTAP_ALMP_CONN_OPENED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} rtap_almp_conn_opened_msg_struct;

/* RTAP_ALMP_CONN_RELEASED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} rtap_almp_conn_released_msg_struct;

/* RTAP_ALMP_CONN_CLOSED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} rtap_almp_conn_closed_msg_struct;

/* RTAP_ALMP_CONN_FAILED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} rtap_almp_conn_failed_msg_struct;

/*RTAP_TIMER_EXPIRED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RtapTimerExpiredMsgT msg;
} rtap_timer_expired_msg_struct;


/* RTAP_BURSTTIMER_EXPIRED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RtapTimerExpiredMsgT msg;
} rtap_bursttimer_expired_msg_struct;

/* RTAP_DSA_FWD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsaFwdMsgT msg;
} rtap_dsa_fwd_msg_struct;

/* STR_SCP_COMMITTED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} str_scp_committed_msg_struct;

/* STR1_SCP_COMMITTED_MSG */
/* STR_SCP_RECONFIGURED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} str1_scp_committed_msg_struct;

/* STR2_SCP_COMMITTED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} str2_scp_committed_msg_struct;

/* STR3_SCP_COMMITTED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} str3_scp_committed_msg_struct;

/* STR_SCP_RECONFIGURED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} str_scp_reconfigured_msg_struct;

/* STR1_SCP_RECONFIGURED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} str1_scp_reconfigured_msg_struct;

/* STR2_SCP_RECONFIGURED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} str2_scp_reconfigured_msg_struct;

/* STR3_SCP_RECONFIGURED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} str3_scp_reconfigured_msg_struct;

/* RCP_APP_TO_NEG_SET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DoStreamConfigurationSetMsgT msg;
} rcp_app_to_neg_set_msg_struct;

/* AUTH_SHA_KEP_RPCAUTHKEY_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    AuthKepRPCAuthKeyMsgT msg;
} auth_sha_kep_rpcauthkey_msg_struct;


/* AUTH_UPDATE_SECTORID_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    AuthOmpSectorIDMsgT msg;
} auth_update_sectorid_msg_struct;


/* FTAPR_FTAPF_LOOPBACK_STATUS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    FtaprLoopBackStatusMsgT msg;
} ftapr_ftapf_loopback_status_msg_struct;

/* FTAPR_FTAPF_TEST_PKT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    FtaprFcpTestPktMsgT msg;
} ftapr_ftapf_test_pkt_msg_struct;

/* FTAPR_RTM_STATUS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ftapr_rtm_status_msg_struct;

/* PAR_DSA_FWD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsaFwdMsgT msg;
} par_dsa_fwd_msg_struct;

/* UT_PAR_HLP_DATA_TX_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ParHlpDataTxMsgT msg;
    kal_uint8 data[MAX_RLP_HLP_PKT_NUM][CPBUF_SIZE_REV];  /* data for cpbuffer */
} ut_par_hlp_data_tx_msg_struct;


/* PAR_PAF_FLOWCTL_STATUS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ParPafFlowCtlStatMsgT msg;
} par_paf_flowctl_status_msg_struct;

/* PAR_PAF_RLP_RESET_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ParPafRlpResetReqMsgT msg;
} par_paf_rlp_reset_req_msg_struct;


/* PAR_PAF_RSP_STATUS_MSG */
/* PAR_IDP_CONN_OPENED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ParPafRspStatusMsgT msg;
} par_paf_rsp_status_msg_struct;


/* PAR_IDP_CONN_OPENED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} par_idp_conn_opened_msg_struct;

/* PAR_CSP_CONN_CLOSE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} par_csp_conn_close_msg_struct;

/* PAR_HLP_DOS_TX_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ParHlpDOSTxMsgT msg;
} par_hlp_dos_tx_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ParTExpireMsgT msg;
} par_access_timer_expire_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ParTExpireMsgT msg;
} par_service_timer_expire_msg_struct;


/* PAR_RESERVATION_TRANSITION_TIMER_EXPIRE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ParTExpireMsgT msg;
} par_reservation_transition_timer_expire_msg_struct;

/* PAR_GAUP_TM_EXPIRE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} par_gaup_tm_expire_msg_struct;



/* AUTH_SCP_RECONFIGURED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} auth_scp_reconfigured_msg_struct;

/* AUTH_SCP_COMMITED_MSG */

typedef struct
{
    LOCAL_PARA_HDR
} auth_scp_commited_msg_struct;

/* SEC_SCP_COMMITTED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} sec_scp_commited_msg_struct;



/* 93 adaptive interface */
typedef struct
{
    kal_uint8       length;
    kal_uint8       data[MAX_LLD_LOG_DATA_LEN]; /* MAC data of each LLD for UT check */
} data_node_struct;

/* 93 adaptive interface */
typedef struct
{
    kal_uint16          data_size;
    kal_uint16          node_num;
    data_node_struct    data_node[MAX_LLD_LOG_NUM];/* Each node for head or pkt content */
} ut_rev_data_req_info_struct;

/* Access */
typedef struct
{
    LOCAL_PARA_HDR
    Evl1AccessPreambleT msg;
} ut_acm_preamble_start_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    Evl1AccessCapsuleT msg;
} ut_acm_data_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool immAction;
} ut_acm_trans_stop_msg_struct;

/* Traffic */
typedef struct
{
    LOCAL_PARA_HDR
    Evl1TrafficParamInitT msg;
} ut_rtm_param_init_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    Evl1TrafficParamReCfgT msg;
} ut_rtm_param_recfg_msg_struct;

typedef struct
{
    Evl1TrafficTransStartT trafficTransStart;
    kal_bool               isSlientExit;
} ut_rtm_traffic_trans_start_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ut_rtm_traffic_trans_start_info_struct msg;
} ut_rtm_trans_start_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    Evl1TrafficDataTransT       trafficDataInfo;
    ut_rev_data_req_info_struct dataContent;
} ut_rtm_data_req_msg_struct;

typedef struct
{
    kal_bool                    immAction;
    Evl1TxTrafficReleaseTypeT   releaseType;
} ut_rtm_trans_stop_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ut_rtm_trans_stop_info_struct msg;
} ut_rtm_trans_stop_msg_struct;


typedef struct {
   kal_uint8    *DataP;
   kal_uint32   NumBytes;
} GatherItemT;

typedef struct {
  ProtocolTypeE protocolType;
  kal_uint8 subType;
  kal_uint8 msgId;
  GatherItemT ListP[10];
  kal_uint8 NumSeg;
} ota_msg_info_struct;


typedef struct
{
    LOCAL_PARA_HDR
    ota_msg_info_struct msg;
} dsar_ota_msg_struct;

typedef struct
{
    CpBufferT* freeCpBufList[MAX_RCP_RI_CPBUF_FREE_NUM];
} cp_buf_free_list_struct;

/* MSG_ID_RCP_CP_BUF_LIST_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    cp_buf_free_list_struct  msg;
} rcp_cp_buf_list_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    RcpCsmHscStopTxMsgT msg;
} rcp_csm_hsc_preempt_msg_struct;

typedef struct
{
    kal_uint16 pktSize;
    kal_uint8 *dataPtr;
} RcpPktInfoMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    RcpPktInfoMsgT msg;
} rcp_pkt_info_msg_struct;


#define MAX_UTS_RCP_RI_MSG_LENGTH 504
typedef struct
{
    kal_uint32 msg_id;
    kal_uint16 length;
    CpBufferT* uts_msg_content_ptr;
} uts_msg_content_struct;

typedef struct
{
    LOCAL_PARA_HDR
    uts_msg_content_struct msg;
} uts_rcp_ri_msg_to_rcp_msg_struct;

/* MSG_ID_ELT_ACM_SUPERVISION_EXPIRED_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_acm_supervision_expired_cmd_msg_struct;

/*  end of rcp task msg */

#endif

