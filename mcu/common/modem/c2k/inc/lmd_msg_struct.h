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

#ifndef _LMD_MSG_STRUCT_H
#define _LMD_MSG_STRUCT_H

/*****************************************************************************
* 
* FILE NAME   :lmd_msg_struct.h 
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
#include "c2k_lmd_model.h"
#include "lmddefs.h"

/* LMD Messages */
/*MSG_ID_LMD_L1D_FWD_DATA_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdL1dFwdDataIndMsgT msg;

} lmd_l1d_fwd_data_ind_msg_struct; 



/*MSG_ID_LMD_REVERSE_ACCESS_SIG_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
	LmdReverseAccessSigMsgT msg;
} lmd_reverse_access_sig_msg_struct;

/*MSG_ID_LMD_ACCESS_PROBE_ABORT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} lmd_access_probe_abort_msg_struct;

/*MSG_ID_LMD_TRAFFIC_CHAN_START_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdTrafficChanStartMsgT msg;
} lmd_traffic_chan_start_msg_struct;

/*MSG_ID_LMD_TRAFFIC_CHAN_STOP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} lmd_traffic_chan_stop_msg_struct;

/*MSG_ID_LMD_RLP_REV_FUNDICATED_DATA_REQ_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdRevFundicatedDataReqMsgT msg;
} lmd_rlp_rev_fundicated_data_req_msg_struct;

/* MSGs used in UT */
/*MSG_ID_UT_LMD_FWD_DATA_IND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    c2k_fwd_dbuf_mailbox_registers_struct c2k_fwd_dbuf_mailbox_registers;
} ut_lmd_fwd_data_ind_msg_struct;

/*MSG_ID_UT_LMD_REV_DATA_REQ_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    c2k_rev_dbuf_mailbox_registers_struct msg;
} ut_lmd_rev_data_req_msg_struct;

/*MSG_ID_LMD_SERVICE_CONFIGURATION_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdServiceConfigurationMsgT msg;
} lmd_service_configuration_msg_struct;

/*MSG_ID_LMD_SERVICE_CONFIG_NN_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdServiceConfigurationNnMsgT msg;
} lmd_service_config_nn_msg_struct;

/*MSG_ID_LMD_SERVICE_OPTION_CONTROL_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
	LmdServiceOptionControlMsgT msg;
} lmd_service_option_control_msg_struct;

/*MSG_ID_LMD_PWR_CTL_PARMS_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdPwrCtlParmsMsgT msg;
} lmd_pwr_ctl_parms_msg_struct;

/*MSG_ID_LMD_SCH_REV_TDSO_DATA_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdRevSchDataReqMsgT msg;
} lmd_sch_rev_tdso_data_msg_struct;

/*MSG_ID_LMD_FCH_REV_TDSO_DATA_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdRevFundicatedDataReqMsgT msg;
} lmd_fch_rev_tdso_data_msg_struct;

/*MSG_ID_LMD_RLP_REV_SCH_DATA_REQ_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdRevSchDataReqMsgT msg;
} lmd_rlp_rev_sch_data_req_msg_struct;

/*MSG_ID_LMD_TRANSMITTER_STATUS_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdTransmitterStatusMsgT msg;
} lmd_transmitter_status_msg_struct;

/*MSG_ID_LMD_SET_STAT_CNT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdSetStatCntMsgT msg;
} lmd_set_stat_cnt_msg_struct;

/*MSG_ID_LMD_GET_STAT_CNT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdGetStatCntMsgT msg;
} lmd_get_stat_cnt_msg_struct;

/*MSG_ID_LMD_SET_FER_STATS_NUM_FRAMES_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdSetFerStatsNumFramesMsgT msg;
} lmd_set_fer_stats_num_frames_msg_struct;

/*MSG_ID_LMD_GET_DEBUG_SCRN_INFO_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdGetDebugScrnInfoRequestT msg;
} lmd_get_debug_scrn_info_msg_struct;

/*MSG_ID_LMD_SPEECH_DISABLE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdSpeechDisableMsgT msg;
} lmd_speech_disable_msg_struct;

/*MSG_ID_LMD_COUNTER_SUSPEND_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdCounterSuspendMsgT msg;
} lmd_counter_suspend_msg_struct;

/*MSG_ID_LMD_RESOURCE_UPDATE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdResourceUpdateT msg;
} lmd_resource_update_msg_struct;

/*MSG_ID_LMD_FSCH_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdFschMsgT msg;
} lmd_fsch_msg_struct;

/*MSG_ID_LMD_FSCH_BURST_END_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdFschBurstEndMsgT msg;
} lmd_fsch_burst_end_msg_struct;

/*MSG_ID_LMD_RSCH_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdRschMsgT msg;
} lmd_rsch_msg_struct;

/*MSG_ID_LMD_FSCH_PDU_ORDER_CTRL_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdFschPduOrderCtrlMsgT msg;
} lmd_fsch_pdu_order_ctrl_msg_struct;

/*MSG_ID_LMD_MARKOV_SERVICE_OPTION_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
	LmdMsoFwdChDataMsgT msg;
} lmd_markov_service_option_msg_struct;

/*MSG_ID_LMD_CLEAR_MARKOV_STATS_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdMsoClearStatsMsgT msg;
} lmd_clear_markov_stats_msg_struct;

/*MSG_ID_LMD_LOOPBACK_SERVICE_OPTION_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
	IpcDsvSendSpkrVoiceFwdChPcktDataMsgT msg;
} lmd_loopback_service_option_msg_struct;

/* MSG_ID_LMD_REVERSE_TRAFFIC_SIG_MSG */
typedef struct
{
    LOCAL_PARA_HDR
	LmdReverseTrafficSigMsgT msg;
} lmd_reverse_traffic_sig_msg_struct;

/* MSG_ID_LMD_CONVERSATION_SUBSTATE_CONN_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} lmd_conversation_substate_conn_msg_struct;

/*MSG_ID_LMD_CONVERSATION_SUBSTATE_DISC_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} lmd_conversation_substate_disc_msg_struct;

/*MSG_ID_LMD_RSCH_STOP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} lmd_rsch_stop_msg_struct;



/*MSG_ID_LMD_RESET_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} lmd_reset_msg_struct;

/*MSG_ID_LMD_RLP_STOP_REQ_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} lmd_rlp_stop_req_msg_struct;



/*MSG_ID_LMD_TX_LOOPBACK_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
	IpcCpSpchDataRevChPacketMsgT msg;
} lmd_tx_loopback_msg_struct;

/*MSG_ID_LMD_TX_MARKOV_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
	IpcCpSpchDataRevChPacketMsgT msg;
} lmd_tx_markov_msg_struct;


/* LMD_S Messages */
/*MSG_ID_LMD_S_TDSO_CONNECT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdTdsoConnectMsgT msg;
} lmd_s_tdso_connect_msg_struct;

/*MSG_ID_LMD_S_TDSO_DISCONNECT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdTdsoDisconnectMsgT msg;
} lmd_s_tdso_disconnect_msg_struct;

/*MSG_ID_LMD_S_TDSO_CONTROL_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdServiceOptionControlMsgT msg;
} lmd_s_tdso_control_msg_struct;

/*MSG_ID_LMD_S_TDSO_DATA_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdTdsoFwdChDataMsgT msg;
} lmd_s_tdso_data_msg_struct;

/*MSG_ID_LMD_S_TDSO_CLEAR_STATS_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdTdsoClearStatsMsgT msg;
} lmd_s_tdso_clear_stats_msg_struct;

/*MSG_ID_LMD_S_TDSO_RANDOM_NUMBER_CALC_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdTdsoRandomNumberCalcMsgT msg;
} lmd_s_tdso_random_number_calc_msg_struct;

/*MSG_ID_LMD_EACH_SIG_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdReverseEACHSigMsgT msg;    
}lmd_each_sig_msg_struct;

/*MSG_ID_LMD_SIM_MSG*/
typedef struct
{
    LOCAL_PARA_HDR   
}lmd_sim_msg_struct;

/*MSG_ID_LMD_RESET_STAT_CNT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR   
}lmd_reset_stat_cnt_msg_struct;

/*MSG_ID_LMD_CLEAR_FWD_SCH_DTX_STATS_MSG*/
typedef struct
{
    LOCAL_PARA_HDR   
}lmd_clear_fwd_sch_dtx_stats_msg_struct;



#endif

