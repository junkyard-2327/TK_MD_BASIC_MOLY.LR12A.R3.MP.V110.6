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
* FILE NAME   :fcp_msg_struct.h 
*
* DESCRIPTION :This module defines the Layer 2 ILM messgae IDs for the 1xRTT Protocol Stack.
*
*
* HISTORY     :
*     1.File Create by atlas.xu, 2016,1,27
*
*****************************************************************************/

#ifndef _FCP_MSG_STRUCT_H
#define _FCP_MSG_STRUCT_H

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "kal_public_defs.h"
#include "do_rcpapi.h"
#include "do_rtmapi.h"
#include "do_fcpapi.h"
#include "ftapf.h"

#include "fcpdefs.h"


/* EvDO FCP Message */

/* FCP_BRP_FWD_PKT_MSG */
typedef struct
{
    kal_uint32 CrcResult;
    kal_uint32 PreambleMacId;
    kal_uint32 SupMacId;
    kal_uint32 EpSize;
    kal_uint32 SlotCount;
    kal_uint32 DrcIndex;
    kal_uint32 TimeStamp;
    CpBufferT* RxDmaBufPtr;
} fcp_brp_fwd_pkt_msg;

/* MSG_ID_ELT_CCM_SUPERVISION_EXPIRED_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    EltCcmSupervisionExpiredCmdMsgT msg;
} elt_ccm_supervision_expired_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    fcp_brp_fwd_pkt_msg msg;
} fcp_brp_fwd_pkt_msg_struct;


/* CCM_SCM_SESSION_OPENED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ccm_scm_session_opened_msg_struct;

/* CCM_SCM_SESSION_CLOSED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ccm_scm_session_closed_msg_struct;

/* CCM_CSP_ACTIVATE_CMD */
typedef struct
{
    LOCAL_PARA_HDR
} ccm_csp_activate_cmd_struct;

/* CCM_IDP_ACTIVATE_CMD */
typedef struct
{
    LOCAL_PARA_HDR
} ccm_idp_activate_cmd_struct;

/* CCM_INSP_ACTIVATE_CMD */
typedef struct
{
    LOCAL_PARA_HDR
} ccm_insp_activate_cmd_struct;

/* CCM_IDP_DEACTIVATE_CMD */
typedef struct
{
    LOCAL_PARA_HDR
} ccm_idp_deactivate_cmd_struct;

/* CCM_INSP_DEACTIVATE_CMD */
typedef struct
{
    LOCAL_PARA_HDR
} ccm_insp_deactivate_cmd_struct;

/* CCM_ALMP_DEACTIVATE_CMD */
typedef struct
{
    LOCAL_PARA_HDR
} ccm_almp_deactivate_cmd_struct;

/* CCM_SCM_KEEPALIVE_CFG_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CcmSmpKeepAliveCfgT msg;
} ccm_scm_keepalive_cfg_msg_struct;

/* CCM_SCM_KEEPALIVE_RESET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ccm_scm_keepalive_reset_msg_struct;


/* FCP_RCP_STREAM_CONFIG_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    FcpRcpStreamConfigMsgT msg;
} fcp_rcp_stream_config_msg_struct;

/* DSAF_RTM_LINK_ACQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} dsaf_rtm_link_acq_msg_struct;

/* DSA_CCM_INTERRUPTED_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} dsa_ccm_interrupted_ind_msg_struct;

/* PAF_RUP_NETWORK_LOST_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} paf_rup_network_losg_msg_struct;

/* DSAF_RUP_CONNECTION_INIT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} dsaf_rup_connection_init_msg_struct;

/* FTM_RUP_TCA_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    FTCMACParmsGT ftcMacParams;
} ftm_rup_tca_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    FtmFtapDrcAckConfigT ftcMacParams;
} ftm_ftap_drc_ack_config_msg_struct;

/* FTAP_FTAPR_INIT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    FtaprFtapfInitMsgT msg;
} ftap_ftapr_init_msg_struct;

/* FTAP_ALMP_ST_UPDATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    FtapAlmpStateupdateMsgT msg;
} ftap_almp_st_update_msg_struct;

/* FTAP_RUP_IDLEHO_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ftap_rup_idleho_msg_struct;

/* FTAP_RUP_SERVING_SECTOR_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ftap_ccm_first_sync_cc_msg_struct;

/* FTAP_RUP_SERVING_SECTOR_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ftap_rup_serving_sector_msg_struct;

/* FTAP_RUP_TRAFFICCHANASSIGN_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    FtapRupTrafficChanAssignMsgT msg;
} ftap_rup_trafficchanassign_msg_struct;


/* FTAP_ALMP_CONN_CLOSED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ftap_almp_conn_closed_msg_struct;

/* FTAP_ALMP_CONN_FAILED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ftap_almp_conn_failed_msg_struct;

/* FTAP_ALMP_CONN_RELEASED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ftap_almp_conn_released_msg_struct;

/* FTAP_ALMP_CONN_OPENED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ftap_lmp_conn_opened_msg_struct;

/* DRC_CSM_CELL_SWITCH_REQED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} drc_csm_cell_switch_reqed_msg_struct;

/* DRC_CSM_CELL_SWITCH_OCCUR_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} drc_csm_cell_switch_occur_msg_struct;

/* CCM_CLC_SUP_TIMER_RST_CMD */
typedef struct
{
    LOCAL_PARA_HDR
} ccm_clc_sup_timer_rst_cmd_struct;

/* UT_FCP_DSAF_FWD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    DsaFwdMsgT msg;
    kal_uint8 data[CPBUF_SIZE_FWD];  /* data for the cpbuffer */
} ut_fcp_dsaf_fwd_msg_struct;

/* FTM_RUP_ACTIVATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ftm_rup_activate_msg_struct;

/* FTM_RUP_DEACTIVATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} ftm_rup_deactivate_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    PafDpaRlpStatPeekMsgT msg;
} paf_dparlp_stat_peek_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    PafMfpaRlpStatPeekMsgT msg;
} paf_mfparlp_stat_peek_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ParPafRspStatusMsgT msg;
} paf_paf_rsp_status_msg_struct;

#ifdef PKT_TEST
/*PAF_OTTS_FWD_DATA_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    PafOttsFwdDataIndMsgT msg;
} paf_otts_fwd_data_ind_msg_struct;
#endif

typedef struct
{
    LOCAL_PARA_HDR
    HlpRlpRouteChangedMsgT msg;
} hlp_fcp_rlproute_changed_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    PafTimerExpiredMsgT msg;
} paf_timer_expired_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    FcpTestFixDrcValMsgT msg;
} fcp_est_fix_drcval_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ScpProtReconfigCnfMsgT msg;
} scp_prot_reconfig_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    PafHlpFlowCtrlMsgT msg;
} paf_hlp_flow_ctrl_msg_struct;

/* PAF_RCP_SESSION_CONFIG_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PafRcpSessionConfigMsgT msg;
} paf_rcp_session_config_msg_struct;


/* DSAF_SLP_BUF_FREE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32* ptrPktList;
    kal_bool bCpbufFree;
} dsaf_slp_buf_free_msg_struct;


/* PAF_IDP_CONN_OPENED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} paf_idp_conn_opened_msg_struct;

/* PAF_CSP_CONN_CLOSED_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} paf_csp_conn_closed_msg_struct;

#ifdef MTK_PLT_ON_PC_UT
typedef struct
{
    LOCAL_PARA_HDR
    FcpHlpRevDataReqMsgT msg;
} ut_fcp_hlp_rev_data_req_msg_struct;

/* UT_CCM_AMP_ATILIST_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UtCcmAmpATIListMsgT msg;
} ut_ccm_amp_atilist_msg_struct;

/* UT_FCP_CCM_COMMIT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UtFcpCcmCommitMsgT msg;
} ut_fcp_ccm_commit_msg_struct;

/* FCP_TEST_RTM_DATA_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PafTestRtmDataIndMsgT msg;
} fcp_test_rtm_data_ind_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UtFtmGetAttribRspMsgT msg;
} ut_fcp_ftm_get_attrib_rsp_msg_struct;

/* UT_FCP_FWD_DATA_IND_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    FcpFwdPktMsgT msg;
    kal_uint8 RxDmaBufPtr[4][CPBUF_SIZE_FWD];   /* data for four cpbuffers */
} ut_fcp_fwd_data_ind_msg_struct;

/* UT_EVT_ID_FTAP_TO_EVL1_SH_ACK_PARAM_IND */
typedef struct
{
    LOCAL_PARA_HDR
    uint8 FtapAckParam;
    uint8 FtapModParam;
} ut_fcp_ftap_ack_param_ind_event_struct;
#endif

/*FCP_RMC_4_SLOT_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} ut_fcp_rmc_4_slot_ind_msg_struct;

/*MSG_ID_FCP_START_PCPF_OPERATIONS*/
typedef struct
{
    LOCAL_PARA_HDR
} fcp_start_pcpf_operations_msg_struct;

/*MSG_ID_FCP_START_STREAM_LAYER_OPERATIONS*/
typedef struct
{
    LOCAL_PARA_HDR
} fcp_start_stream_layer_operations_msg_struct;

/* MSG_ID_FCP_ETS_FTAP_STATS_CLR_REQ_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    FtapEtsStatClrGetReqMsgT msg;
} fcp_ets_ftap_stats_clr_req_msg_struct;

/* MSG_ID_FCP_ETS_FTAP_STATS_GET_REQ_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    FtapEtsStatClrGetReqMsgT msg;
} fcp_ets_ftap_stats_get_req_msg_struct;

/* MSG_ID_FCP_TST_CCM_INITIALIZE*/
typedef struct
{
    LOCAL_PARA_HDR
} fcp_tst_ccm_initialize_msg_struct;

/* MSG_ID_FCP_TST_CCM_ACTIVATE*/
typedef struct
{
    LOCAL_PARA_HDR
} fcp_tst_ccm_activate_msg_struct;

/* MSG_ID_FCP_TST_CCM_DEACTIVATE*/
typedef struct
{
    LOCAL_PARA_HDR
} fcp_tst_ccm_deactivate_msg_struct;

/* MSG_ID_FCP_TST_MAC_PKT_LIST_INTEGRITY*/
typedef struct
{
    LOCAL_PARA_HDR
} fcp_tst_mac_pkt_list_integrity_msg_struct;
    
/* MSG_ID_FCP_TST_CONN_LAYER_PKT_LIST_INTEGRITY*/
typedef struct
{
    LOCAL_PARA_HDR
} fcp_tst_conn_layer_pkt_list_integrity_msg_struct;
#endif
