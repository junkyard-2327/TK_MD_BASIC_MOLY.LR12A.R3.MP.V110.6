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

/*************************************************************
*
*
*************************************************************/
#ifndef _ELT_MSG_STRUCT_H
#define _ELT_MSG_STRUCT_H

/*****************************************************************************
*
* FILE NAME   :elt_msg_struct.h
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
#ifndef RLP_STATISTIC
#define RLP_STATISTIC                      1
#endif
#include "fcpdefs.h"
#include "pafrlp.h"
#include "valgps.h"
#include "hlpdef.h"
#include "hlpapi.h"
#include "hlpmip.h"
#include "do_rcpapi.h"
#include "rtm.h"
#include "rtmqos.h"
#include "ParRlp.h"
#include "rlp_data.h"
#include "scc_prot.h"
#include "pswapi.h"
#include "lmdtdso.h"
#include "valsmsapi.h"
#include "do_slcapi.h"
#include "do_clcapi.h"
#include "clcidp.h"
#include "lmddefs.h"
#include "etsapi.h"
#include "sysKeydef.h"
#include "mmiapi.h"
#include "valpswapi.h"
#include "lecapi.h"
#include "do_clc_msg_struct.h"


/*** 1xRTT ***/
/* MSG_ID_UTS_LMD_FWD_FCH_CFG_MSG */
typedef  struct
{
   LmdFwdChnlTypeT PhysChan;
   kal_uint16 PrimaryNumBits;
   kal_uint16 PrimaryRouting;
   kal_uint16 SignalingNumBits;
   kal_uint16 SignalingRouting;
   kal_uint16 SignalingCategory;
   kal_uint16 HeaderBits;
   kal_uint8 NullFramePossible;

}  UtsLmdFwdFchCfgMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    UtsLmdFwdFchCfgMsgT msg;
} uts_lmd_fwd_fch_cfg_msg_struct;

/* MSG_ID_UTS_LMD_REV_FCH_CFG_MSG */
typedef  struct
{
   kal_uint16 PtRate;
   kal_uint8  MuxPdu;
   kal_uint8  Header;
   kal_uint16 PtBits;
   kal_uint16 SigBits;
   kal_uint16 SigInsBits;
   kal_uint8  NullFrame;
   kal_uint8  HeaderSize;
}  UtsLmdRevFchCfgMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    UtsLmdRevFchCfgMsgT msg;
} uts_lmd_rev_fch_cfg_msg_struct;

typedef enum
{
    ELT_FIX_TXDRC_SET     = 0,
    ELT_FIX_TXDRC_DISABLE = 1
}FcpTestFixDrcValModeE;

typedef struct
{
    FcpTestFixDrcValModeE       EltFixDrcValMode;
    kal_uint8                   EltFixDrcVal;
} FcpTestFixDrcValMsg;

typedef struct
{
    LOCAL_PARA_HDR
    FcpTestFixDrcValMsg msg;
} elt_fcp_fix_drcval_msg_struct;


/* MSG_ID_UTS_LMD_SVC_FSCH_CFG_MSG */
typedef  struct
{
   kal_uint8   FschId;
   kal_uint8   LtuBits;
   kal_uint16  NumLtu;
   kal_uint8   MuxPduType;
   kal_uint8   NumPdu;
   kal_uint16  PduBits;
   kal_uint8  PduHeaderBits;
   kal_uint8   PduSrid;
   kal_uint16 PrimaryRouting;
   SysRlpFrameRateE  PduRate;
   SysMultiplexOptionT  MuxOpt;
   kal_uint32  MsgId;
}  UtsLmdSvcFschCfgMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    UtsLmdSvcFschCfgMsgT msg;
} uts_lmd_svc_fsch_cfg_msg_struct;

/* MSG_ID_UTS_LMD_SVC_RSCH_CFG_MSG */
typedef  struct
{
   kal_uint8   RschId;
   kal_uint8   LtuBits;
   kal_uint16  NumLtu;
   kal_uint16  PduHeader;
   kal_uint8   NumPdu;
   kal_uint8   NumFilledPdu;
   kal_uint8   MuxPduType;
   kal_uint16  PduBits;
   kal_uint8   HeaderBits;
   SysMultiplexOptionT  MuxOpt;
   kal_uint8  TurboCoding;
}  UtsLmdSvcRschCfgMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    UtsLmdSvcRschCfgMsgT msg;
} uts_lmd_svc_rsch_cfg_msg_struct;

/* MSG_ID_UTS_LMD_FWD_TRAFFIC_BAD_FRAME_MSG */
typedef  struct
{
   LmdFwdChnlTypeT PhysChan;
}  UtsLmdFwdTrafficBadFrameMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    UtsLmdFwdTrafficBadFrameMsgT msg;
} uts_lmd_fwd_traffic_bad_frame_msg_struct;

/* MSG_ID_UTS_LMD_FWD_FER_STATS_MSG */
typedef  struct
{
   kal_uint16 fchFer;/* FFCH FER(%), kal_uint16, scale=Q8, format=%4.2f */
   kal_uint16 schFer;/* FSCH FER(%), kal_uint16, scale=Q8, format=%4.2f */
}  UtsLmdFwdFerStatsMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    UtsLmdFwdFerStatsMsgT msg;
} uts_lmd_fwd_fer_stats_msg_struct;

/* MSG_ID_UTS_LMD_FWD_STATS_MSG */
typedef  struct
{
   kal_uint32 FSYNCT;
   kal_uint32 FPAGET;
   kal_uint32 FFCHT;
   kal_uint32 FSCHT;
   kal_uint32 FSYNCB;
   kal_uint32 FPAGEB;
   kal_uint32 FFCHB;
   kal_uint32 FSCHB;
}  UtsLmdFwdStatsMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    UtsLmdFwdStatsMsgT msg;
} uts_lmd_fwd_stats_msg_struct;

/* MSG_ID_UTS_LMD_TDSO_FCH_RX_STATS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    TdsoFundRxSpyT msg;
/*
   Counters[0] TDSO_E1_R1, kal_uint32, base=10
   Counters[1] TDSO_E1_RD, kal_uint32, base=10
   Counters[2] TDSO_E1_RO, kal_uint32, base=10
   Counters[3] TDSO_E1_RB, kal_uint32, base=10
   Counters[4] TDSO_E1_RFL, kal_uint32, base=10
   Counters[5] TDSO_E1_RE, kal_uint32, base=10
   Counters[6] TDSO_E1_RERR, kal_uint32, base=10
   Counters[7] TDSO_EN_RN, kal_uint32, base=10
   Counters[8] TDSO_EN_RB, kal_uint32, base=10
   Counters[9] TDSO_EN_RO, kal_uint32, base=10
*/
} uts_lmd_tdso_fch_rx_stats_msg_struct;

/* MSG_ID_UTS_LMD_TDSO_FCH_TX_STATS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    TdsoFundTxSpyT msg;
/*
    Counters[0] TDSO_E1_T1, kal_uint32, base=10
    Counters[1] TDSO_E1_TD, kal_uint32, base=10
    Counters[2] TDSO_E1_TB, kal_uint32, base=10
    Counters[3] TDSO_EB_TB, kal_uint32, base=10
    Counters[4] TDSO_EB_TO, kal_uint32, base=10

*/
} uts_lmd_tdso_fch_tx_stats_msg_struct;

/* MSG_ID_UTS_LMD_TDSO_SUPP_TX_STATS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    TdsoSuppTxSpyT msg;
/*
rate :
 One Times Base Rate, 1,
 Two Times Base Rate, 2,
 Four Times Base Rate, 4,
 Eight Times Base Rate, 8,
 Sixteen Times Base Rate, 16,

Counters[0] TDSO_ENx_TNx, kal_uint32, base=10
Counters[1] TDSO_ENx_TB, kal_uint32, base=10
Counters[2] TDSO_EB_TB, kal_uint32, base=10
Counters[3] TDSO_EB_TO, kal_uint32, base=10

*/

} uts_lmd_tdso_supp_tx_stats_msg_struct;

/* MSG_ID_UTS_LMD_TDSO_SUPP_RX_STATS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    TdsoSuppRxSpyT msg;
/*
rate :
 One Times Base Rate, 1,
 Two Times Base Rate, 2,
 Four Times Base Rate, 4,
 Eight Times Base Rate, 8,
 Sixteen Times Base Rate, 16,

Counters[0] TDSO_ENx_RNx = 0,
Counters[1] TDSO_ENx_RERR,
Counters[2] TDSO_ENx_RE,
Counters[3] TDSO_ENx_RB,
Counters[4] TDSO_EB_RB,
Counters[5] TDSO_EB_RO,

*/
} uts_lmd_tdso_supp_rx_stats_msg_struct;

/* MSG_ID_UTS_LMD_TDSO_SUPP_PDU_RX_STATS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    TdsoSuppPduRxSpyT msg;
/*

    Counters[0] TDSO_E3_R3, kal_uint32, base=10
    Counters[1] TDSO_E3_RERR, kal_uint32, base=10
    Counters[2] TDSO_E3_RE, kal_uint32, base=10
    Counters[3] TDSO_E2_R2, kal_uint32, base=10
    Counters[4] TDSO_E2_RERR, kal_uint32, base=10
    Counters[5] TDSO_E2_RE, kal_uint32, base=10
    Counters[6] TDSO_E1a_R1a, kal_uint32, base=10
    Counters[7] TDSO_E1a_RERR, kal_uint32, base=10
    Counters[8] TDSO_E1a_RE, kal_uint32, base=10
    Counters[9] TDSO_E1b_R1b, kal_uint32, base=10
    Counters[10] TDSO_E1b_RERR, kal_uint32, base=10
    Counters[11] TDSO_E1b_RE, kal_uint32, base=10

*/
} uts_lmd_tdso_supp_pdu_rx_stats_msg_struct;


/* MSG_ID_UTS_XRLP_FWD_FRAME_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RlpFrameEvent msg;
} uts_xrlp_fwd_frame_msg_struct;

/* MSG_ID_UTS_XRLP_REV_FRAME_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RlpFrameEvent msg;
} uts_xrlp_rev_frame_msg_struct;

/* MSG_ID_UTS_XRLP_EVENT_STATS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RlpStatsEvent msg;
} uts_xrlp_event_stats_msg_struct;

/* MSG_ID_UTS_PSW_LOC_TX_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 data[255];
} uts_psw_loc_tx_msg_struct;

/* MSG_ID_UTS_PSW_LOC_RX_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 data[255];
} uts_psw_loc_rx_msg_struct;

/* MSG_ID_UTS_PE_ERI_VAL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValRoamIndicationMsgT msg;
} uts_pe_eri_val_msg_struct;


/* MSG_ID_UTS_PE_QPCH_MEAS_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    QpchSpyData msg;
} uts_pe_qpch_meas_msg_struct;

/* MSG_ID_UTS_SCC_PS_PKT_HAT_HT_TMR_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool HAindicator;
    kal_bool HATStart;
    kal_bool HTStart;
} uts_scc_ps_pkt_hat_ht_tmr_msg_struct;

/* MSG_ID_UTS_SCC_PS_PKT_ZONE_LIST_MSG */

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 len;
    kal_uint8 num;
    PZone list[SOC_PKT_CON_LIST_LEN_MAX];
} uts_scc_ps_pkt_zone_list_msg_struct;

/* MSG_ID_UTS_PE_MSG_WAITING_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 msgCount;
} uts_pe_msg_waiting_msg_struct;

/* MSG_ID_UTS_PE_SIGNAL_INFO_RECORD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32 signalType;
    kal_uint32 alertPitch;
    kal_uint32 signal;
} uts_pe_signal_info_record_msg_struct;
/* MSG_ID_UTS_PSW_REPORT_EVENT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CallProcessingEventT evntType;
} uts_psw_report_event_msg_struct;

/* MSG_ID_UTS_PS_SMS_SUCC_BS_SMS_ACK_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 seqNum;
} uts_ps_sms_succ_bs_sms_ack_msg_struct;

/* VAL SMS */
typedef enum
{
  SMS_ELT_UIM,
  SMS_ELT_FLASH
} ValSmsEltStorageT;

typedef enum
{
  SMS,
  EMS
} ValSmsEltEmsFlagT;

typedef enum
{
  ASCII,
  UNICODE
} ValSmsEltPhbTypeT;

typedef enum
{
  DontSave,
  Save
} ValSmsEltSaveT;

typedef enum
{
  NotConfirmed,
  Confirmed
} ValSmsEltConfirmationT;

typedef enum
{
  SMS_ERROR_CLASS_NO_ERROR,
  SMS_ERROR_CLASS_RSVD,
  SMS_ERROR_CLASS_TEMP,
  SMS_ERROR_CLASS_PERM
} ValSmsEltErrClassT;

/* MSG_ID_UTS_SMS_ETS_API_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8  Event;
    /* Event, kal_uint8, base=enum:Added/Deleted/Modified/Received/Sent */
    ValSmsEltStorageT  Storage;
    kal_uint16 Index;
} uts_sms_ets_api_msg_struct;

/* MSG_ID_UTS_OTASP_UPDATE_DATA_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} uts_otasp_update_data_msg_struct;

/* MSG_ID_UTS_CP_STATE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CPState state;
} uts_cp_state_msg_struct;


/* for spy measurement results */
typedef struct
{
   kal_bool     Valid;
   kal_uint16   PnPhase;
   kal_uint8    PnOffset;
   kal_uint8    EcIo;  /* unit: -0.5dB */
} PswPilotMeasResultT;

typedef  struct
{
   kal_int16  PilotSeq;
   kal_uint16 ReferencePN;
   kal_uint8  NumActive;                        /* Number of active set pilot measurements */
   kal_uint8  NumCandidate;                     /* Number of candidate set pilot measurements */
   kal_uint8  NumNeighbor;                      /* Number of neighbor set pilot measurements */
   kal_uint8  NumRemaining;                     /* Number of remaining set pilot measurements */
   PswPilotMeasResultT Active [SYS_CP_MAX_ACTIVE_LIST_PILOTS];
   PswPilotMeasResultT Candidate [SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
   PswPilotMeasResultT Neighbor [SYS_CP_MAX_NEIGHBOR_LIST_PILOTS];
   PswPilotMeasResultT Remaining [SYS_CP_MAX_NEIGHBOR_LIST_PILOTS];
} UtsPswMeasurementResultMsgT;

/* MSG_ID_UTS_PSW_MEASUREMENT_RESULT_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UtsPswMeasurementResultMsgT msg;
} uts_psw_measurement_result_msg_struct;

typedef  struct
{
   kal_bool             match;
   kal_int8	            mismatchStep;
   CPState 	            cpState;
   CpIdleSubStateT      idleSubState;
   kal_int8             accessReason;
   kal_bool             pageDuplicate;
   kal_bool	            voiceAllowed;
   SysServiceTypeT      currServiceType;
   SysServiceTypeT	    pagingServiceType;
   kal_int16	        prevSoInSameGpm;
   kal_int8	            pendedUserEvent;
   kal_bool	            e911Mode;
   kal_bool	            isPoweringDown;
   kal_bool	            SBP_STATUS_SPRINT_SMS;
   kal_bool	            CP_1XMO_BKOFF_TIMER;
   kal_bool	            CP_SILENT_RETRY_RESET_TIMER;
   ConnStateT	        HlpGetCurrentConnStatus;
   NspeAppT	            AppType;
   kal_int8	            HlpCheckCAMState;
   kal_bool	            ddtmEnabled;
   kal_bool	            UiccDbmIsUimModeDisabled;
   kal_bool	            PswUiccGetFactoryMode;
   UiccCardStatusType   PswUimGetUimCardStatus;
#ifdef MTK_DEV_C2K_IRAT
   kal_bool	            IRATGet1XRegEnabled;
   kal_bool	            IRATGet1XPSEnabled;
   rsvas_sim_enum       rsvasGetCurrentSimId;
#endif
} UtsPswIngoreMatchedPageParamMsgT;

/* MSG_ID_UTS_PSW_IGNORE_MATCHED_PAGE_PARAM_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    UtsPswIngoreMatchedPageParamMsgT msg;
} uts_psw_ignore_matched_page_param_msg_struct;


/*** EVDO ***/
/** FCP **/
/* DSAF */
typedef  struct
{
    DoChanTypeT  chanType;
    kal_uint16       subType;
    kal_uint16       dataLen;
    kal_uint8        data[600];
}  UtsFcpSnpRawDataMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    UtsFcpSnpRawDataMsgT msg;
} uts_cp_fcp_snp_raw_data_msg_struct;

/* PAF */
typedef struct
{
    LOCAL_PARA_HDR
    EVDORLPStatsMeasT  msg;
} uts_cp_fcp_paf_dparlp_stat_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    EVDORevAFwdMFRLPStatsMeasT  FwdMFRLPStats[4];
} uts_cp_fcp_paf_mfparlp_stat_msg_struct;

/* FTM */
typedef struct
{
    LOCAL_PARA_HDR
    PacketRecSpyT  msg;

    /*
        packetRec array of 32 elements
        Drc_C2i array of 32 elements
    */
} uts_cp_fcp_packet_rec_cdm_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    FcpPacketPerfStatT  msg;
    /*
    TotalBits, kal_uint32, scale=Q3, format=%10.2f
    FwdPER(percent), kal_uint16, scale=Q8, format=%4.2f
    AN_ThrPut(kbps), kal_uint16, scale=Q4, format=%4.2f
    AT_ThrPut(kbps), kal_uint16, scale=Q4, format=%4.2f
    */
} uts_cp_fcp_perf_stat_msg_struct;

/* MSG_ID_ELT_CCM_SUPERVISION_EXPIRED_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    EltCcmSupervisionExpiredRspMsgT msg;
} elt_ccm_supervision_expired_rsp_msg_struct;

/** RCP **/
/* DSAR */
typedef  struct
{
    DoChanTypeT  chanType;
    kal_uint16       subType;
    kal_uint16       protocolType;
    kal_uint16       dataLen;
    kal_uint8        data[300];
}  UtsRcpSnpRawDataMsgT;

typedef struct
{
    LOCAL_PARA_HDR
    UtsRcpSnpRawDataMsgT  msg;
} uts_cp_rcp_snp_raw_data_msg_struct;

/* PAR */
typedef struct
{
    LOCAL_PARA_HDR
    EVDORevARevMFRLPStatsMeasT RlpStatsMeas[4];
} uts_cp_rcp_par_rlp_stat_msg_struct;

/* RTM */
typedef struct
{
    LOCAL_PARA_HDR
    Rtm3SpyPktInfoStatesT Rtm3SpyPktInfoStates[RTM_MAX_STATES_SPY_SUBFR_NO];

    /*
    TransmitMode, kal_uint8, base=enum:0: HICAP/1: LOLAT
    txT2Pmax, kal_uint16,  scale=Q2, format=%10.8f
    potentialT2POutflow0, kal_uint32,  scale=Q8, format=%10.8f
    */
} uts_cp_rcp_rtm3_packet_info_states_msg_struct;
/* MSG_ID_UTS_CP_RCP_RTM3_STATES_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    Rtm3SpyStatesT Rtm3SpyStates[RTM_MAX_STATES_SPY_SUBFR_NO];
    /*
     TransmitModeAck, kal_uint8, base=10, base=enum:0: HICAP/1: LOLAT
     TransmitModeNak, kal_uint8, base=10, base=enum:0: HICAP/1: LOLAT
     TransmitMode, kal_uint8, base=10, base=enum:0: HICAP/1: LOLAT
    */
} uts_cp_rcp_rtm3_states_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    RtmQoSSpyDataT RtmQoSSpyData[RTM_QOS_SPY_SUBFR_NO];
    /*
    txT2P, kal_uint16,  scale=Q7, format=%10.8f, indent=1
    pilotStrength, kal_int16,  scale=Q2, format=%10.8f
    frab, kal_int8,  scale=Q7, format=%10.8f
    t2POutflow0, kal_int32,  scale=Q8, format=%10.8f
    bucketLevelSat0, kal_int32,  scale=Q7, format=%10.8f
    deltaT2PInflow0, kal_int32,  scale=Q8, format=%10.8f
    t2PInflow0, kal_int32,  scale=Q8, format=%10.8f
    bucketLevel0, kal_int32,  scale=Q6, format=%10.8f
    bucketFactor0, kal_int32,  scale=Q8, format=%10.8f
    */

} uts_cp_rcp_rtm3_t2p_stat_states_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   combBB;
    kal_uint8   currRate;
    kal_uint8   x;
    kal_uint8   transProb;
    kal_uint8   maxRate;
} uts_cp_rcp_rtm_grant7_msg_struct;


/* TXH */
typedef struct
{
    LOCAL_PARA_HDR
    RcpTxAgcDataT  msg;
    /*
     TxAgcMode                kal_uint16,  base=enum:RCP Tx AGC Type {RPC_TXAGC_DISABLED / RPC_TXAGC_DO_ACCESS / RPC_TXAGC_DO_TRAFFIC / RPC_TXAGC_1xRTT_REVERSE / RPC_TXAGC_TEST_MODE}
     TxGainStateSlot,         kal_uint16,  base=enum:RCP Tx AGC Gain State {HWD_LOW_GAIN_STATE / HWD_MED_GAIN_STATE / HWD_HIGH_GAIN_STATE}
     TxGainStateHslot,        kal_uint16,  base=enum:RCP Tx AGC Gain State{HWD_LOW_GAIN_STATE / HWD_MED_GAIN_STATE / HWD_HIGH_GAIN_STATE}

     PowerBaseALog2 (Alog2),          kal_int16,  scale=Q7, format=%4.2f
     OpenLoopRxPwrFiltALog2 (Alog2), kal_int16,  scale=Q7, format=%4.2f
     PowerBase (dBm),            kal_int16,  scale=Q7, format=%4.2f
     OpenLoopRxPwrFilt (dBm),   kal_int16,  scale=Q7, format=%4.2f

     CloseLoopAdjALog2 (Alog2),       kal_int16,  scale=Q7, format=%4.2f
     CloseLoopAdj (dBm),            kal_int16,  scale=Q7, format=%4.2f

     UnadjPwrALog2 (Alog2),       kal_int16,  scale=Q7, format=%4.2f
     TotalAdjALog2 (Alog2),        kal_int16,  scale=Q7, format=%4.2f
     TxPwrALog2Slot (Alog2),      kal_int16,  scale=Q7, format=%4.2f
     TxPwrALog2Hslot (Alog2),     kal_int16,  scale=Q7, format=%4.2f
     UnadjPwr (dBm),                 kal_int16,  scale=Q7, format=%4.2f
     TotalAdj (dBm),                  kal_int16,  scale=Q7, format=%4.2f
     TotalTxPwrSlot (dBm),         kal_int16,  scale=Q7, format=%4.2f
     TotalTxPwrHslot(dBm),         kal_int16,  scale=Q7, format=%4.2f

     Slot_Ks (linear),                kal_uint16, scale=Q7, format=%4.2f
     Slot_KsALog2 (Alog2),        kal_int16,  scale=Q7, format=%4.2f
     Slot_KsDbm (dBm),            kal_int16,  scale=Q7, format=%4.2f

     Hslot_Ks (linear),                kal_uint16, scale=Q7, format=%4.2f
     Hslot_KsALog2 (Alog2),        kal_int16,  scale=Q7, format=%4.2f
     Hslot_KsDbm (dBm),            kal_int16,  scale=Q7, format=%4.2f

     TotalMaxTxPwrALog2(ALog2),      kal_int16,  scale=Q7, format=%4.2f
     TotalMaxTxPwr(dBm),                 kal_int16,  scale=Q7, format=%4.2f

     TotalMinTxPwrALog2 (ALog2),      kal_int16,  scale=Q7, format=%4.2f
     TotalMinTxPwr (dBm),                 kal_int16,  scale=Q7, format=%4.2f

     TxDacValueSlot,               kal_uint16, base=16
     TxDacValueHslot,              kal_uint16, base=16
     */

} uts_cp_rcp_txagc_msg_struct;

/** define Tx AGC control command message */
/** MSG_ID_ELT_RCP_TX_AGC_CTRL_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RcpTstTxAgcCtrlCmdT Msg;
} elt_rcp_tx_agc_ctrl_cmd_msg_struct;

/** define Tx AGC control response message */
/** MSG_ID_ELT_RCP_TX_AGC_CTRL_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RcpTstTxAgcCtrlRspT    Msg;
} elt_rcp_tx_agc_ctrl_rsp_msg_struct;

/** CLC **/
typedef struct
{
    LOCAL_PARA_HDR
    MonSpyL3StateT  msg;
    /* Begin Enum, AlmpState:Init,0; Idle,1; ConnectionSetup,2; Connected,3; End */
    /* Begin Enum, InspState:Inactive,0; NetworkDetermination,1; PilotAcq,2;
     *                       Sync,3; TimingChange,4; INSP_WFR_1XASSIST_SIG,5;
     * End
     */
    /* Begin Enum, IdpState:Inactive,0; Monitor,1; Sleep,2; ConnectionSetup,3;
     *                      FreezePending,4; Freeze,5; ConnFrozen,6; WaitFor1XAssistAcqSignal,7;
     * End
     */
    /* Begin Enum, CspState:Inactive,0; Closing,1; Open,2; End */
    /* Begin Enum, RupState:Inactive,0; Idle,1; Connected,2; IRAT_MEASURE,3; End */
    /* Begin Enum, OmpState:Inactive,0; Active,1; End */
    /* bHybridOn:0->Off, 1->On. */
} uts_cp_clc_l3_state_msg_struct;

/** SLC **/
typedef struct
{
    LOCAL_PARA_HDR
    MonSpySessionStateT  msg;
} uts_cp_slc_session_state_msg_struct;

/** VAL **/
typedef struct
{
    LOCAL_PARA_HDR
    ValGpsLocationUpdateSpy2MsgT  msg;
/*
Instance ID, kal_uint32
LocationInfoIncl, kal_uint8,  base=kal_bool

Validity Mask, kal_uint32,exist=(LocationInfoIncl==1)
UTC Time, ValGpsSystemTimeT,exist=(LocationInfoIncl==1)
Latitude, kal_int32,exist=(LocationInfoIncl==1)
Longitude, kal_int32,exist=(LocationInfoIncl==1)
Speed, double,exist=(LocationInfoIncl==1)
Heading, double,exist=(LocationInfoIncl==1)
Magnetic Variation, double,exist=(LocationInfoIncl==1)
Altitude WRT Sea Level, double,exist=(LocationInfoIncl==1)
Altitude WRT Ellipsoid, double,exist=(LocationInfoIncl==1)
Fix Quality, ValGpsFixQualityT,exist=(LocationInfoIncl==1)
Fix Type, ValGpsFixTypeT,exist=(LocationInfoIncl==1)
Selection Type, ValGpsSelectionTypeT,exist=(LocationInfoIncl==1)
Position Dilution Of Precision, double,exist=(LocationInfoIncl==1)
Horizontal Dilution Of Precision, double,exist=(LocationInfoIncl==1)
Vertical Dilution Of Precision, double,exist=(LocationInfoIncl==1)
Satellite Count, kal_uint32,exist=(LocationInfoIncl==1)
Satellites Used PRNs, array,type=kal_uint32,maxsize=12,columns=16,exist=(LocationInfoIncl==1)
Satellites In View, kal_uint32,exist=(LocationInfoIncl==1)
Satellites In View PRNs, array,type=kal_uint32,maxsize=12,columns=16,exist=(LocationInfoIncl==1)
Satellites In View Elevation, array,type=kal_uint32,maxsize=12,columns=16,exist=(LocationInfoIncl==1)
Satellites In View Azimuth, array,type=kal_uint32,maxsize=12,columns=16,exist=(LocationInfoIncl==1)
Satellites In View SNR, array,type=kal_uint32,maxsize=12,columns=16,exist=(LocationInfoIncl==1)
GPS Position Error, record,type=VAL GPS Position Error Rec,maxsize=1,exist=(LocationInfoIncl==1)
Fix Mode, kal_uint8,base=enum:VAL GPS Fix Mode,exist=(LocationInfoIncl==1)
GPS Session Count, kal_uint32,exist=(LocationInfoIncl==1)
Number Of Positions, kal_uint32,exist=(LocationInfoIncl==1)
Horizontal Velocity, kal_uint32,exist=(LocationInfoIncl==1)
Vertical Velocity, kal_uint32,exist=(LocationInfoIncl==1)

*/
} uts_cp_val_gps_loc_update_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValGpsSearchEventRspSpyT  msg;
    /* SearchEvent:
    CP_VAL_GPS_SEARCH_START,
    CP_VAL_GPS_SEARCH_STOP,
    CP_VAL_GPS_INPRORESS,
    */

    /* searchType
      CP_VAL_GPS_FIX_MODE_UNKNOWN, 0,
      CP_VAL_GPS_FIX_MODE_MSA,
      CP_VAL_GPS_FIX_MODE_MSB,
      CP_VAL_GPS_FIX_MODE_MSS,
      CP_VAL_GPS_FIX_MODE_AFLT,
      CP_VAL_GPS_FIX_MODE_SPEED_OPTIMAL,
      CP_VAL_GPS_FIX_MODE_ACCURACY_OPTIMAL,
      CP_VAL_GPS_FIX_MODE_DATA_OPTIMAL,
      CP_VAL_GPS_FIX_MODE_CONTROL_PLANE,
      CP_VAL_GPS_FIX_MODE_COUNT,
    */
} uts_cp_val_gps_search_event_msg_struct;

/* MSG_ID_UTS_CP_VAL_GPS_SESS_EVENT_MSG */
typedef struct
{
LOCAL_PARA_HDR
	ValGpsSessStateSpyT msg;
}uts_cp_val_gps_sess_event_msg_struct;

/* MSG_ID_UTS_CP_VAL_GPS_LOC_RESP_MSG */
typedef struct
{
LOCAL_PARA_HDR
	ValGpsLocRespSpyT msg;
}uts_cp_val_gps_loc_resp_msg_struct;

/* MSG_ID_UTS_CP_VAL_GPS_CP_LOC_RESP_MSG */
typedef struct
{
LOCAL_PARA_HDR
	ValGpsETSCpLocRespMsgT msg;
}uts_cp_val_gps_cp_loc_resp_msg_struct;

/* MSG_ID_ELT_GPS_IS801_FLOW_MS_RSP_MSG */
typedef struct
{
LOCAL_PARA_HDR
	PswIs801FlowMsRspMsg msg;
}elt_gps_is801_flow_ms_rsp_msg_struct;

/* MSG_ID_ELT_GPS_IS801_FLOW_MS_REQ_MSG */
typedef struct
{
LOCAL_PARA_HDR
	PswIs801FlowMsReqMsg msg;
}elt_gps_is801_flow_ms_req_msg_struct;

/* MSG_ID_ELT_GPS_IS801_FLOW_BS_REQ_MSG */
typedef struct
{
LOCAL_PARA_HDR
	PswIs801FlowBsReqMsg msg;
}elt_gps_is801_flow_bs_req_msg_struct;

/* MSG_ID_ELT_GPS_IS801_FLOW_BS_RSP_MSG */
typedef struct
{
LOCAL_PARA_HDR
	PswIs801FlowBsRspMsg msg;
}elt_gps_is801_flow_bs_rsp_msg_struct;


/* Trace spy end */

/* elt cmd rsp start */
/* Add ilm message */
typedef struct
{
    LOCAL_PARA_HDR
    ValAllDataInitMsgT  msg;
} elt_val_all_data_init_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ValPswPowerMsgT  msg;
} elt_val_power_ctrl_msg_struct;

/* MSG_ID_ELT_HLP_GET_ACT_PROFILE_ID_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_act_profile_id_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_ACT_PROFILE_ID_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpActiveProfile_APIStruct  msg;
} elt_hlp_get_act_profile_id_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_ACT_PROFILE_ID_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpActiveProfile_APIStruct  msg;
} elt_hlp_set_act_profile_id_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_ACT_PROFILE_ID_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_act_profile_id_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_AN_NAI_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_an_nai_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_AN_NAI_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpANNAI_APIStruct  msg;
} elt_hlp_get_an_nai_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_AN_NAI_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpANNAI_APIStruct  msg;
} elt_hlp_set_an_nai_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_AN_NAI_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_an_nai_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_AN_PASSWORD_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_an_password_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_AN_PASSWORD_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpAnPassword_APIStruct  msg;
} elt_hlp_get_an_password_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_AN_PASSWORD_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpAnPassword_APIStruct  msg;
} elt_hlp_set_an_password_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_AN_PASSWORD_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_an_password_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_AN_BINARY_PASSWORD_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpAnBinaryPassword_APIStruct  msg;
} elt_hlp_set_an_binary_password_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_AN_BINARY_PASSWORD_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_an_binary_password_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_QNC_ENABLED_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_qnc_enabled_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_QNC_ENABLED_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpQncEnabled_APIStruct  msg;
} elt_hlp_get_qnc_enabled_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_QNC_ENABLED_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpQncEnabled_APIStruct  msg;
} elt_hlp_set_qnc_enabled_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_QNC_ENABLED_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_qnc_enabled_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_DATA_SO_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_data_so_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_DATA_SO_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpDataSOType                 SOType;
} elt_hlp_get_data_so_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_DATA_SO_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpDataSOType              SOType;
} elt_hlp_set_data_so_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_DATA_SO_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_data_so_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_DORMANT_TIMER_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_dormant_timer_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_DORMANT_TIMER_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpDormantTimerData_APIStruct  msg;
} elt_hlp_get_dormant_timer_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_DORMANT_TIMER_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpDormantTimerData_APIStruct  msg;
} elt_hlp_set_dormant_timer_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_DORMANT_TIMER_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_dormant_timer_rsp_msg_struct;




/* MSG_ID_ELT_HLP_GET_HSPD_PROFILE_DATA_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    kal_uint8       ProfileId;
} elt_hlp_get_hspd_profile_data_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_HSPD_PROFILE_DATA_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpProfileData_APIStruct      msg;
} elt_hlp_get_hspd_profile_data_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_HSPD_PROFILE_DATA_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpProfileData_APIStruct   msg;
} elt_hlp_set_hspd_profile_data_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_HSPD_PROFILE_DATA_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_hspd_profile_data_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_HSPD_SECURE_SEG_PROFILE_DATA_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    kal_uint8       ProfileId;
} elt_hlp_get_hspd_secure_seg_profile_data_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_HSPD_SECURE_SEG_PROFILE_DATA_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpSecureProfileData_APIStruct  msg;
} elt_hlp_get_hspd_secure_seg_profile_data_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_HSPD_SECURE_SEG_PROFILE_BYTE_DATA_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpSecureProfileData_APIStruct  msg;
} elt_hlp_set_hspd_secure_seg_profile_byte_data_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_HSPD_SECURE_SEG_PROFILE_BYTE_DATA_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_hspd_secure_seg_profile_byte_data_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_MIP_BINARY_PASSWORD_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    kal_uint8       ProfileId;
} elt_hlp_get_mip_binary_password_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_MIP_BINARY_PASSWORD_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpMIPPasswordHex_APIStruct  msg;
} elt_hlp_get_mip_binary_password_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_MIP_BINARY_PASSWORD_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpMIPPasswordHex_APIStruct  msg;
} elt_hlp_set_mip_binary_password_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_MIP_BINARY_PASSWORD_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_mip_binary_password_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_REG_BACKOFF_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_reg_backoff_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_REG_BACKOFF_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpReRegBackoff_APIStruct  msg;
} elt_hlp_get_reg_backoff_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_REG_BACKOFF_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpReRegBackoff_APIStruct  msg;
} elt_hlp_set_reg_backoff_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_REG_BACKOFF_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_reg_backoff_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_NUM_REG_RETRIES_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_num_reg_retries_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_NUM_REG_RETRIES_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpNumRegRetries_APIStruct  msg;
} elt_hlp_get_num_reg_retries_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_NUM_REG_RETRIES_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpNumRegRetries_APIStruct  msg;
} elt_hlp_set_num_reg_retries_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_NUM_REG_RETRIES_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_num_reg_retries_rsp_msg_struct;


/* MSG_ID_ELT_HLP_GET_MIP_MODE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_mip_mode_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_MIP_MODE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    IPServiceTypeT                mipMode;
} elt_hlp_get_mip_mode_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_MIP_MODE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    IPServiceTypeT             mipMode;
} elt_hlp_set_mip_mode_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_MIP_MODE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_mip_mode_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_MN_HA_AUTH_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_mn_ha_auth_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_MN_HA_AUTH_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode    result;
    HAAuthNumber               MN_HA_Auth_mode;
} elt_hlp_get_mn_ha_auth_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_MN_HA_AUTH_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HAAuthNumber               MN_HA_Auth_mode;
} elt_hlp_set_mn_ha_auth_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_MN_HA_AUTH_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_mn_ha_auth_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_NPKOID_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_npkoid_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_NPKOID_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpPKOID_APIStruct  msg;
} elt_hlp_get_npkoid_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_NPKOID_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpPKOID_APIStruct  msg;
} elt_hlp_set_npkoid_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_NPKOID_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_npkoid_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_NUM_PROFILE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_num_profile_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_NUM_PROFILE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpNumProfiles_APIStruct  msg;
} elt_hlp_get_num_profile_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_NUM_PROFILE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpNumProfiles_APIStruct  msg;
} elt_hlp_set_num_profile_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_NUM_PROFILE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_num_profile_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_SIP_NAI_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_sip_nai_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_SIP_NAI_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpSIPNAI_APIStruct  msg;
} elt_hlp_get_sip_nai_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_SIP_NAI_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpSIPNAI_APIStruct  msg;
} elt_hlp_set_sip_nai_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_SIP_NAI_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_sip_nai_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_SIP_DUN_NAI_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_sip_dun_nai_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_SIP_DUN_NAI_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpSIPDUNNAI_APIStruct  msg;
} elt_hlp_get_sip_dun_nai_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_SIP_DUN_NAI_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpSIPDUNNAI_APIStruct  msg;
} elt_hlp_set_sip_dun_nai_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_SIP_DUN_NAI_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_sip_dun_nai_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_SIP_BINARY_PASSWORD_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_sip_binary_password_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_SIP_BINARY_PASSWORD_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    kal_uint8 passwordLength;
    kal_uint8 Password[16];
    //HlpSIPDUNNAI_APIStruct  msg;
} elt_hlp_get_sip_binary_password_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_SIP_BINARY_PASSWORD_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpSIPPasswordHex_APIStruct   msg;
    //kal_uint8 passwordLength;
    //kal_uint8 Password[16];
} elt_hlp_set_sip_binary_password_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_SIP_BINARY_PASSWORD_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_sip_binary_password_rsp_msg_struct;

/* MSG_ID_ELT_HLP_GET_DATA_PPP_UM_CONFIG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
} elt_hlp_get_data_ppp_um_config_cmd_msg_struct;

/* MSG_ID_ELT_HLP_GET_DATA_PPP_UM_CONFIG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
    HlpPppUmCfg_APIStruct   msg;
} elt_hlp_get_data_ppp_um_config_rsp_msg_struct;

/* MSG_ID_ELT_HLP_SET_DATA_PPP_UM_CONFIG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmOperationType       opType;
    HlpPppUmCfg_APIStruct   msg;
} elt_hlp_set_data_ppp_um_config_cmd_msg_struct;

/* MSG_ID_ELT_HLP_SET_DATA_PPP_UM_CONFIG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    HlpParmAccessResultCode       result;
} elt_hlp_set_data_ppp_um_config_rsp_msg_struct;


/* ETS CMD LMD */
/* MSG_ID_ELT_LMD_CLEAR_FER_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_lmd_clear_fer_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    LmdMsoClearStatsMsgT msg;
} elt_lmd_clear_markov_stats_cmd_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    LmdTdsoClearStatsMsgT msg;
} elt_lmd_clear_tdso_stats_cmd_msg_struct;


/* ETS CMD PSW */

/*ELT_PSW_CALL_HANGUP_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_call_hangup_cmd_msg_struct;

/*ELT_PSW_CLEAR_MRU_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_clear_mru_cmd_msg_struct;


/*ELT_PSW_GET_CURRENT_TIME_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_get_current_time_cmd_msg_struct;

typedef  struct
{
   kal_uint8 SysTime[SYS_SYSTIME_SIZE];
}   PswSystemTimeMsgT;

/*ELT_PSW_GET_CURRENT_TIME_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    ValNwkRptSystemTimeMsgT msg;
    //PswSystemTimeMsgT msg;
    /* msg.SysTime[] : Full System Time, bit,count=36,base=16,pos=none */
} elt_psw_get_current_time_rsp_msg_struct;

/*ELT_PSW_GET_ACTIVE_NAM_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_get_active_nam_cmd_msg_struct;

/*ELT_PSW_GET_ACTIVE_NAM_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    PswGetActiveNamResponseMsgT msg;
    /*
    msg.CurrentActiveNam:
    typedef enum
    {
        NAM_1 = 1,
        NAM_2
    } NamNumber;
    */
} elt_psw_get_active_nam_rsp_msg_struct;

/*ELT_PSW_GET_RETRIEVABLE_STATISTICS_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    PswGetRetrievableParameterMsgT msg;
} elt_psw_get_retrievable_statistics_cmd_msg_struct;

/*ELT_PSW_GET_RETRIEVABLE_STATISTICS_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    GetRetrievableParameterRspMsgT msg;
/*
    msg.StatCounter:
    Begin Enum, GroupID
        MUX1_REV_FCH, 0x00, RO
        MUX1_FOR_FCH, 0x01, RO
        PAG, 0x02, RO
        ACC, 0x03, RO
        LAYER2_RTC, 0x04, RO
        MUX2_REV_FCH, 0x05, RO
        MUX2_FOR_FCH, 0x06, RO
        SCCH_REV, 0x07, RO
        SCCH_FOR, 0x08, RO
        MUX1_REV_DCCH, 0x09, RO
        MUX1_FOR_DCCH, 0x0a, RO
        MUX2_REV_DCCH, 0x0b, RO
        MUX2_FOR_DCCH, 0x0c, RO
        SCH0_REV, 0x0d, RO
        SCH1_REV, 0x0e, RO
        SCH0_FOR, 0x0f, RO
        SCH1_FOR, 0x10, RO
    End

    msg.Value[]:
    kal_uint32        Value[MAX_STAT_ELEMENT];
Begin Message, CP Get Retrievable Statistics MUX1_REV_FCH Rsp
    MUX1 REV FCH  1, kal_uint32, indent=1
    MUX1 REV FCH  2, kal_uint32, indent=1
    MUX1 REV FCH  3, kal_uint32, indent=1
    MUX1 REV FCH  4, kal_uint32, indent=1
    MUX1 REV FCH  5, kal_uint32, indent=1
    MUX1 REV FCH  6, kal_uint32, indent=1
    MUX1 REV FCH  7, kal_uint32, indent=1
    MUX1 REV FCH  8, kal_uint32, indent=1
    MUX1 REV FCH  9, kal_uint32, indent=1
    MUX1 REV FCH 10, kal_uint32, indent=1
    MUX1 REV FCH 11, kal_uint32, indent=1
    MUX1 REV FCH 12, kal_uint32, indent=1
    MUX1 REV FCH 13, kal_uint32, indent=1
    MUX1 REV FCH 14, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics MUX1_FOR_FCH Rsp
    MUX1 FOR FCH  1, kal_uint32, indent=1
    MUX1 FOR FCH  2, kal_uint32, indent=1
    MUX1 FOR FCH  3, kal_uint32, indent=1
    MUX1 FOR FCH  4, kal_uint32, indent=1
    MUX1 FOR FCH  5, kal_uint32, indent=1
    MUX1 FOR FCH  6, kal_uint32, indent=1
    MUX1 FOR FCH  7, kal_uint32, indent=1
    MUX1 FOR FCH  8, kal_uint32, indent=1
    MUX1 FOR FCH  9, kal_uint32, indent=1
    MUX1 FOR FCH 10, kal_uint32, indent=1
    MUX1 FOR FCH 11, kal_uint32, indent=1
    MUX1 FOR FCH 12, kal_uint32, indent=1
    MUX1 FOR FCH 13, kal_uint32, indent=1
    MUX1 FOR FCH 14, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics PAG Rsp
    PAG_1, kal_uint32, indent=1
    PAG_2, kal_uint32, indent=1
    PAG_3, kal_uint32, indent=1
    PAG_4, kal_uint32, indent=1
    PAG_5, kal_uint32, indent=1
    PAG_6, kal_uint32, indent=1
    PAG_7, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics ACC Rsp
    ACC_1, kal_uint32, indent=1
    ACC_2, kal_uint32, indent=1
    ACC_3, kal_uint32, indent=1
    ACC_4, kal_uint32, indent=1
    ACC_5, kal_uint32, indent=1
    ACC_6, kal_uint32, indent=1
    ACC_7, kal_uint32, indent=1
    ACC_8, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics LAYER2_RTC Rsp
    LAYER2_RTC1, kal_uint32, indent=1
    LAYER2_RTC2, kal_uint32, indent=1
    LAYER2_RTC3, kal_uint32, indent=1
    LAYER2_RTC4, kal_uint32, indent=1
    LAYER2_RTC5, kal_uint32, indent=1
    OTHER_SYS_TIME1, kal_uint32, indent=1
    OTHER_SYS_TIME2, kal_uint32, indent=1
    OTHER_SYS_TIME3, kal_uint32, indent=1
    OTHER_SYS_TIME4, kal_uint32, indent=1
    OTHER_SYS_TIME5, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics MUX2_REV_FCH Rsp
    MUX2_REV_FCH_1, kal_uint32, indent=1
    MUX2_REV_FCH_2, kal_uint32, indent=1
    MUX2_REV_FCH_3, kal_uint32, indent=1
    MUX2_REV_FCH_4, kal_uint32, indent=1
    MUX2_REV_FCH_5, kal_uint32, indent=1
    MUX2_REV_FCH_6, kal_uint32, indent=1
    MUX2_REV_FCH_7, kal_uint32, indent=1
    MUX2_REV_FCH_8, kal_uint32, indent=1
    MUX2_REV_FCH_9, kal_uint32, indent=1
    MUX2_REV_FCH_10, kal_uint32, indent=1
    MUX2_REV_FCH_11, kal_uint32, indent=1
    MUX2_REV_FCH_12, kal_uint32, indent=1
    MUX2_REV_FCH_13, kal_uint32, indent=1
    MUX2_REV_FCH_14, kal_uint32, indent=1
    MUX2_REV_FCH_15, kal_uint32, indent=1
    MUX2_REV_FCH_16, kal_uint32, indent=1
    MUX2_REV_FCH_17, kal_uint32, indent=1
    MUX2_REV_FCH_18, kal_uint32, indent=1
    MUX2_REV_FCH_19, kal_uint32, indent=1
    MUX2_REV_FCH_20, kal_uint32, indent=1
    MUX2_REV_FCH_21, kal_uint32, indent=1
    MUX2_REV_FCH_22, kal_uint32, indent=1
    MUX2_REV_FCH_23, kal_uint32, indent=1
    MUX2_REV_FCH_24, kal_uint32, indent=1
    MUX2_REV_FCH_25, kal_uint32, indent=1
    MUX2_REV_FCH_26, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics MUX2_FOR_FCH Rsp
    MUX2_FOR_FCH_1, kal_uint32, indent=1
    MUX2_FOR_FCH_2, kal_uint32, indent=1
    MUX2_FOR_FCH_3, kal_uint32, indent=1
    MUX2_FOR_FCH_4, kal_uint32, indent=1
    MUX2_FOR_FCH_5, kal_uint32, indent=1
    MUX2_FOR_FCH_6, kal_uint32, indent=1
    MUX2_FOR_FCH_7, kal_uint32, indent=1
    MUX2_FOR_FCH_8, kal_uint32, indent=1
    MUX2_FOR_FCH_9, kal_uint32, indent=1
    MUX2_FOR_FCH_10, kal_uint32, indent=1
    MUX2_FOR_FCH_11, kal_uint32, indent=1
    MUX2_FOR_FCH_12, kal_uint32, indent=1
    MUX2_FOR_FCH_13, kal_uint32, indent=1
    MUX2_FOR_FCH_14, kal_uint32, indent=1
    MUX2_FOR_FCH_15, kal_uint32, indent=1
    MUX2_FOR_FCH_16, kal_uint32, indent=1
    MUX2_FOR_FCH_17, kal_uint32, indent=1
    MUX2_FOR_FCH_18, kal_uint32, indent=1
    MUX2_FOR_FCH_19, kal_uint32, indent=1
    MUX2_FOR_FCH_20, kal_uint32, indent=1
    MUX2_FOR_FCH_21, kal_uint32, indent=1
    MUX2_FOR_FCH_22, kal_uint32, indent=1
    MUX2_FOR_FCH_23, kal_uint32, indent=1
    MUX2_FOR_FCH_24, kal_uint32, indent=1
    MUX2_FOR_FCH_25, kal_uint32, indent=1
    MUX2_FOR_FCH_26, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics SCCH_REV Rsp
    SCCH1_REV_S, kal_uint32, indent=1
    SCCH1_REV_P, kal_uint32, indent=1
    SCCH2_REV_S, kal_uint32, indent=1
    SCCH2_REV_P, kal_uint32, indent=1
    SCCH3_REV_S, kal_uint32, indent=1
    SCCH3_REV_P, kal_uint32, indent=1
    SCCH4_REV_S, kal_uint32, indent=1
    SCCH4_REV_P, kal_uint32, indent=1
    SCCH5_REV_S, kal_uint32, indent=1
    SCCH5_REV_P, kal_uint32, indent=1
    SCCH6_REV_S, kal_uint32, indent=1
    SCCH6_REV_P, kal_uint32, indent=1
    SCCH7_REV_S, kal_uint32, indent=1
    SCCH7_REV_P, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics SCCH_FOR Rsp
    SCCH1_FOR_S, kal_uint32, indent=1
    SCCH1_FOR_P, kal_uint32, indent=1
    SCCH2_FOR_S, kal_uint32, indent=1
    SCCH2_FOR_P, kal_uint32, indent=1
    SCCH3_FOR_S, kal_uint32, indent=1
    SCCH3_FOR_P, kal_uint32, indent=1
    SCCH4_FOR_S, kal_uint32, indent=1
    SCCH4_FOR_P, kal_uint32, indent=1
    SCCH5_FOR_S, kal_uint32, indent=1
    SCCH5_FOR_P, kal_uint32, indent=1
    SCCH6_FOR_S, kal_uint32, indent=1
    SCCH6_FOR_P, kal_uint32, indent=1
    SCCH7_FOR_S, kal_uint32, indent=1
    SCCH7_FOR_P, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics MUX1_REV_DCCH Rsp
    MUX1_REV_DCCH_1, kal_uint32, indent=1
    MUX1_REV_DCCH_2, kal_uint32, indent=1
    MUX1_REV_DCCH_3, kal_uint32, indent=1
    MUX1_REV_DCCH_4, kal_uint32, indent=1
    MUX1_REV_DCCH_5, kal_uint32, indent=1
    MUX1_REV_DCCH_6, kal_uint32, indent=1
    MUX1_REV_DCCH_7, kal_uint32, indent=1
    MUX1_REV_DCCH_8, kal_uint32, indent=1
    MUX1_REV_DCCH_9, kal_uint32, indent=1
    MUX1_REV_DCCH_10, kal_uint32, indent=1
    MUX1_REV_DCCH_11, kal_uint32, indent=1
    MUX1_REV_DCCH_12, kal_uint32, indent=1
    MUX1_REV_DCCH_13, kal_uint32, indent=1
    MUX1_REV_DCCH_14, kal_uint32, indent=1
    MUX1_REV_DCCH_15, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics MUX1_FOR_DCCH Rsp
    MUX1_FOR_DCCH_1, kal_uint32, indent=1
    MUX1_FOR_DCCH_2, kal_uint32, indent=1
    MUX1_FOR_DCCH_3, kal_uint32, indent=1
    MUX1_FOR_DCCH_4, kal_uint32, indent=1
    MUX1_FOR_DCCH_5, kal_uint32, indent=1
    MUX1_FOR_DCCH_6, kal_uint32, indent=1
    MUX1_FOR_DCCH_7, kal_uint32, indent=1
    MUX1_FOR_DCCH_8, kal_uint32, indent=1
    MUX1_FOR_DCCH_9, kal_uint32, indent=1
    MUX1_FOR_DCCH_10, kal_uint32, indent=1
    MUX1_FOR_DCCH_11, kal_uint32, indent=1
    MUX1_FOR_DCCH_12, kal_uint32, indent=1
    MUX1_FOR_DCCH_13, kal_uint32, indent=1
    MUX1_FOR_DCCH_14, kal_uint32, indent=1
    MUX1_FOR_DCCH_15, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics MUX2_REV_DCCH Rsp
    MUX2_REV_DCCH_1, kal_uint32, indent=1
    MUX2_REV_DCCH_2, kal_uint32, indent=1
    MUX2_REV_DCCH_3, kal_uint32, indent=1
    MUX2_REV_DCCH_4, kal_uint32, indent=1
    MUX2_REV_DCCH_5, kal_uint32, indent=1
    MUX2_REV_DCCH_6, kal_uint32, indent=1
    MUX2_REV_DCCH_7, kal_uint32, indent=1
    MUX2_REV_DCCH_8, kal_uint32, indent=1
    MUX2_REV_DCCH_9, kal_uint32, indent=1
    MUX2_REV_DCCH_10, kal_uint32, indent=1
    MUX2_REV_DCCH_11, kal_uint32, indent=1
    MUX2_REV_DCCH_12, kal_uint32, indent=1
    MUX2_REV_DCCH_13, kal_uint32, indent=1
    MUX2_REV_DCCH_14, kal_uint32, indent=1
    MUX2_REV_DCCH_15, kal_uint32, indent=1
    MUX2_REV_DCCH_16, kal_uint32, indent=1
    MUX2_REV_DCCH_17, kal_uint32, indent=1
    MUX2_REV_DCCH_18, kal_uint32, indent=1
    MUX2_REV_DCCH_19, kal_uint32, indent=1
    MUX2_REV_DCCH_20, kal_uint32, indent=1
    MUX2_REV_DCCH_21, kal_uint32, indent=1
    MUX2_REV_DCCH_22, kal_uint32, indent=1
    MUX2_REV_DCCH_23, kal_uint32, indent=1
    MUX2_REV_DCCH_24, kal_uint32, indent=1
    MUX2_REV_DCCH_25, kal_uint32, indent=1
    MUX2_REV_DCCH_26, kal_uint32, indent=1
    MUX2_REV_DCCH_27, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics MUX2_FOR_DCCH Rsp
    MUX2_FOR_DCCH_1, kal_uint32, indent=1
    MUX2_FOR_DCCH_2, kal_uint32, indent=1
    MUX2_FOR_DCCH_3, kal_uint32, indent=1
    MUX2_FOR_DCCH_4, kal_uint32, indent=1
    MUX2_FOR_DCCH_5, kal_uint32, indent=1
    MUX2_FOR_DCCH_6, kal_uint32, indent=1
    MUX2_FOR_DCCH_7, kal_uint32, indent=1
    MUX2_FOR_DCCH_8, kal_uint32, indent=1
    MUX2_FOR_DCCH_9, kal_uint32, indent=1
    MUX2_FOR_DCCH_10, kal_uint32, indent=1
    MUX2_FOR_DCCH_11, kal_uint32, indent=1
    MUX2_FOR_DCCH_12, kal_uint32, indent=1
    MUX2_FOR_DCCH_13, kal_uint32, indent=1
    MUX2_FOR_DCCH_14, kal_uint32, indent=1
    MUX2_FOR_DCCH_15, kal_uint32, indent=1
    MUX2_FOR_DCCH_16, kal_uint32, indent=1
    MUX2_FOR_DCCH_17, kal_uint32, indent=1
    MUX2_FOR_DCCH_18, kal_uint32, indent=1
    MUX2_FOR_DCCH_19, kal_uint32, indent=1
    MUX2_FOR_DCCH_20, kal_uint32, indent=1
    MUX2_FOR_DCCH_21, kal_uint32, indent=1
    MUX2_FOR_DCCH_22, kal_uint32, indent=1
    MUX2_FOR_DCCH_23, kal_uint32, indent=1
    MUX2_FOR_DCCH_24, kal_uint32, indent=1
    MUX2_FOR_DCCH_25, kal_uint32, indent=1
    MUX2_FOR_DCCH_26, kal_uint32, indent=1
    MUX2_FOR_DCCH_27, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics SCH0_REV Rsp
    SCH0_REV_1X, kal_uint32, indent=1
    SCH0_REV_2X, kal_uint32, indent=1
    SCH0_REV_4X, kal_uint32, indent=1
    SCH0_REV_8X, kal_uint32, indent=1
    SCH0_REV_16X, kal_uint32, indent=1
    SCH0_REV_LTU, kal_uint32, indent=1
    SCH0_REV_LTUOK, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics SCH1_REV Rsp
    SCH1_REV_1X, kal_uint32, indent=1
    SCH1_REV_2X, kal_uint32, indent=1
    SCH1_REV_4X, kal_uint32, indent=1
    SCH1_REV_8X, kal_uint32, indent=1
    SCH1_REV_16X, kal_uint32, indent=1
    SCH1_REV_LTU, kal_uint32, indent=1
    SCH1_REV_LTUOK, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics SCH0_FOR Rsp
    SCH0_FOR_1X, kal_uint32, indent=1
    SCH0_FOR_2X, kal_uint32, indent=1
    SCH0_FOR_4X, kal_uint32, indent=1
    SCH0_FOR_8X, kal_uint32, indent=1
    SCH0_FOR_16X, kal_uint32, indent=1
    SCH0_FOR_LTU, kal_uint32, indent=1
    SCH0_FOR_LTUOK, kal_uint32, indent=1
End

Begin Message, CP Get Retrievable Statistics SCH1_FOR Rsp
    SCH1_FOR_1X, kal_uint32, indent=1
    SCH1_FOR_2X, kal_uint32, indent=1
    SCH1_FOR_4X, kal_uint32, indent=1
    SCH1_FOR_8X, kal_uint32, indent=1
    SCH1_FOR_16X, kal_uint32, indent=1
    SCH1_FOR_LTU, kal_uint32, indent=1
    SCH1_FOR_LTUOK, kal_uint32, indent=1
End
*/
} elt_psw_get_retrievable_statistics_rsp_msg_struct;

/*ELT_PSW_GET_SPC_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_get_spc_cmd_msg_struct;

/*ELT_PSW_GET_SPC_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    PswGetSpcRspMsgT msg;
} elt_psw_get_spc_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_get_ssd_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    PswGetSSDRspMsgT msg;
} elt_psw_get_ssd_rsp_msg_struct;

/*ELT_PSW_GET_P_REV_IN_USE_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_get_p_rev_in_use_cmd_msg_struct;

/*ELT_PSW_GET_P_REV_IN_USE_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    PswGetPRevInUseResponseMsgT msg;
    /* msg.P_Rev_In_Use:
       Begin Enum, P_REV
           JST_008, 1
           IS_95, 2
           IS_95A, 3
           IS_95B Custom, 4
           IS_95B, 5
           IS_2000, 6
       End
     */
} elt_psw_get_p_rev_in_use_rsp_msg_struct;

/*ELT_PSW_READ_RAW_IMSI_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_read_raw_imsi_cmd_msg_struct;

/*ELT_PSW_READ_RAW_IMSI_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    PswReadRawIMSIRspT msg;
} elt_psw_read_raw_imsi_rsp_msg_struct;

/*ELT_PSW_SELECT_ACTIVE_NAM_CMD_MSG*/
/*
    SelectActiveNam:
    typedef enum
    {
        NAM_1 = 1,
        NAM_2
    } NamNumber;
    */
typedef struct
{
    LOCAL_PARA_HDR
    PswSelectActiveNamMsgT msg;
} elt_psw_select_active_nam_cmd_msg_struct;

/*ELT_PSW_SELECT_ACTIVE_NAM_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    PswSelectActiveNamResponseMsgT msg;
} elt_psw_select_active_nam_rsp_msg_struct;

/* MSG_ID_ELT_PSW_SET_PKZID_HYSTERESIS_TIMER_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSetPkzidHysterTmrMsgT msg;
} elt_psw_set_pkzid_hysteresis_timer_cmd_msg_struct;

/* MSG_ID_ELT_PSW_SET_PKZID_HYSTERESIS_TIMER_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_set_pkzid_hysteresis_timer_rsp_msg_struct;

/* MSG_ID_ELT_PSW_SET_PRIVACY_MODE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSetPrivacyModeMsgT msg;
} elt_psw_set_privacy_mode_cmd_msg_struct;

/* MSG_ID_ELT_PSW_SET_PRIVACY_MODE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_set_privacy_mode_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_parm_get_voice_privacy_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiVoicePrivacyMode  VoicePrivacy;
} elt_psw_parm_get_voice_privacy_rsp_msg_struct;

/* MSG_ID_ELT_PSW_SET_RETRIEVABLE_STATISTICS_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSetRetrievableParameterMsgT msg;
} elt_psw_set_retrievable_statistics_cmd_msg_struct;

/* MSG_ID_ELT_PSW_SET_RETRIEVABLE_STATISTICS_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_set_retrievable_statistics_rsp_msg_struct;

/* MSG_ID_ELT_PSW_SET_SERVICE_OPTION_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSetServiceConfigMsgT msg;
    /*
    msg.ServiceOption:
    Begin Enum, Service Options
        Srv Opt 1  Basic 8K Vocoder, 1,
        Srv Opt 2  8K Mobile Loopback, 2 ,
        Srv Opt 3  Enhanced 8K Vocoder, 3 ,
        Srv Opt 4  Asyn Data Rate Set 1, 4 ,
        Srv Opt 5  Fax Rate Set 1, 5 ,
        Srv Opt 6  SMS Rate Set 1, 6 ,
        Srv Opt 9  13K Mobile Loopback, 9 ,
        Srv Opt 12 Async Data Pref Rate Set 2, 12 ,
        Srv Opt 13 Fax Pref Rate Set 2, 13 ,
        Srv Opt 14 SMS Rate Set 2, 14 ,
        Srv Opt 15 Low Speed Packet Data RS2, 15 ,
        Srv Opt 17 Basic 13K Vocoder, 17 ,
        Srv Opt 18 Otasp Pref Rate Set 1, 18 ,
        Srv Opt 19 Otasp Pref Rate Set 2, 19 ,
        Srv Opt 25 Medium Speed Packet Data RS2, 25 ,
        Srv Opt 32 Test Data Service Option, 32 ,
        Srv Opt 33 High Speed Packet Data, 33 ,
        Srv Opt 35 Location Services RS 1, 35 ,
        Srv Opt 36 Location Services RS 2, 36 ,
        Srv Opt 54 Markov 2000, 54 ,
        Srv Opt 55 FCH Loopback, 55 ,
        Srv Opt 68 EVRC-B Vocoder, 68 ,
        Srv Opt 73 EVRC-NW Vocoder, 73 ,
        Srv Opt 75 1xAdv Loopback, 75 ,
        Srv Opt 4100 Async Data Pref Rate Set 1, 0x1004 ,
        Srv Opt 4101 Fax Pref Rate Set 1, 0x1005 ,
        Srv Opt 32768 Basic 13K Vocoder, 0x8000 ,
        Srv Opt 32798 Markov RS1, 0x801E ,
        Srv Opt 32799 Markov RS2, 0x801F ,
        Srv Opt 32858 High Speed Packet Data, 0x805A ,
        Srv Opt 32859 High Speed Packet Data, 0x805B ,
        AMPS Analog Voice, 0xFFFF ,
        Set All SOs or Reset All to default, 0 ,
    End

    msg.forRc:
    msg.revRc:
    Begin Enum, RcPrefType
        RC_PREF_1, 1
        RC_PREF_2, 2
        RC_PREF_3, 3
        RC_PREF_4, 4
        RC_PREF_5, 5
        RC_PREF_6, 6
        RC_PREF_7, 7
        RC_PREF_8, 8
        RC_PREF_9, 9
    End

    */
} elt_psw_set_service_option_cmd_msg_struct;

/* MSG_ID_ELT_PSW_SET_SERVICE_OPTION_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_set_service_option_rsp_msg_struct;

/* MSG_ID_ELT_PSW_SET_SPC_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSetSPCMsgT msg;
} elt_psw_set_spc_cmd_msg_struct;

/* MSG_ID_ELT_PSW_SET_SPC_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSetSecureDataRspMsgT msg;
} elt_psw_set_spc_rsp_msg_struct;

/* MSG_ID_ELT_PSW_STATUS_REQUEST_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_status_request_cmd_msg_struct;

/* MSG_ID_ELT_PSW_STATUS_REQUEST_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswStatusResponseMsgT msg;
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
} elt_psw_status_request_rsp_msg_struct;

/* MSG_ID_ELT_PSW_TEST_MODE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswEngineTestModeMsgT msg;
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
} elt_psw_test_mode_cmd_msg_struct;

/* MSG_ID_ELT_PSW_TEST_MODE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_test_mode_rsp_msg_struct;

/* ELT PSW PARM GET CMD common */
typedef  struct
{
    PswParmOperationId      parmOpId;
    PswParmOperationType    opType;
} eltPswParmGetCmdCommon;

/* MSG_ID_ELT_PSW_PARM_GET_SLOTTED_MODE_ALLOWED_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_slotted_mode_allowed_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_SLOTTED_MODE_ALLOWED_RSP_MSG */
typedef  struct
{
    PswParmOperationId                  parmOpId;
    PswParmOperationType                opType;
    PswSlottedModeAllowed_APIStruct     slottedModeAllowedRsp;
} eltPswParmGetSlottedModeAllowedRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetSlottedModeAllowedRsp msg;
} elt_psw_parm_get_slotted_mode_allowed_rsp_msg_struct;


/* MSG_ID_ELT_PSW_PARM_GET_ACCESS_OVERLOAD_CLASS_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_access_overload_class_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_ACCESS_OVERLOAD_CLASS_RSP_MSG */
typedef  struct
{
    PswParmOperationId      parmOpId;
    PswParmOperationType    opType;
    PswAccolc_APIStruct     accolcRsp;
} eltPswParmGetAccOverloadClassRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetAccOverloadClassRsp msg;
} elt_psw_parm_get_access_overload_class_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_CDMA_PREF_AORB_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_cdma_pref_aorb_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_CDMA_PREF_AORB_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswPrefCDMA_AorB_APIStruct  prefCmdaAorbRsp;
} eltPswParmGetCdmaPrefAorbRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCdmaPrefAorbRsp msg;
} elt_psw_parm_get_cdma_pref_aorb_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_DISTANCE_BASED_PARMS_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_distance_based_parms_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_DISTANCE_BASED_PARMS_RSP_MSG */
typedef  struct
{
    PswParmOperationId              parmOpId;
    PswParmOperationType            opType;
    PswDistanceBasedParms_APIStruct distanceBaseParmsRsp;
} eltPswParmGetDistanceBasedParmsRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetDistanceBasedParmsRsp msg;
} elt_psw_parm_get_distance_based_parms_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_ENCODED_MSID_CMD_MSG */
typedef  struct
{
    PswParmOperationId      parmOpId;
    PswParmOperationType    opType;
    PswGetEncodedMSIDMsg_APIStruct  enCodedMsidGet;
} eltPswParmGetEncodedMsidCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetEncodedMsidCmd msg;
} elt_psw_parm_get_encoded_msid_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_ENCODED_MSID_RSP_MSG */
typedef  struct
{
    PswParmOperationId      parmOpId;
    PswParmOperationType    opType;
    PswGetEncodedMSIDRsp_APIStruct  enCodedMsidRsp;
} eltPswParmGetEncodedMsidRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetEncodedMsidRsp msg;
} elt_psw_parm_get_encoded_msid_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_ESN_MEID_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_esn_meid_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_ESN_MEID_RSP_MSG */
typedef  struct
{
    PswParmOperationId      parmOpId;
    PswParmOperationType    opType;
    PswEsnMeid_APIStruct    esnMeidRsp;
} eltPswParmGetEsnMeidRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetEsnMeidRsp msg;
} elt_psw_parm_get_esn_meid_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_FOREIGN_NID_REG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_foreign_nid_reg_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_FOREIGN_NID_REG_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswForeignNidReg_APIStruct  foreignNidRegRsp;
} eltPswParmGetForeignNidRegRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetForeignNidRegRsp msg;
} elt_psw_parm_get_foreign_nid_reg_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_FOREIGN_SID_REG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_foreign_sid_reg_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_FOREIGN_SID_REG_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswForeignSidReg_APIStruct  foreignSidRegRsp;
} eltPswParmGetForeignSidRegRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetForeignSidRegRsp msg;
} elt_psw_parm_get_foreign_sid_reg_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_HOME_SYS_REG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_home_sys_reg_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_HOME_SYS_REG_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswHomeSysReg_APIStruct     homeSysRegRsp;
} eltPswParmGetHomeSysRegRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetHomeSysRegRsp msg;
} elt_psw_parm_get_home_sys_reg_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_IMSI_S1_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswGetIMSIS12_APIStruct     imsiS1Get;
} eltPswParmGetImsiS1Cmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetImsiS1Cmd msg;
} elt_psw_parm_get_imsi_s1_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_IMSI_S1_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswGetIMSIS1Rsp_APIStruct   imsiS1Rsp;
} eltPswParmGetImsiS1Rsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetImsiS1Rsp msg;
} elt_psw_parm_get_imsi_s1_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_IMSI_S2_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswGetIMSIS12_APIStruct     imsiS2Get;
} eltPswParmGetImsiS2Cmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetImsiS2Cmd msg;
} elt_psw_parm_get_imsi_s2_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_IMSI_S2_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswGetIMSIS2Rsp_APIStruct   imsiS2Rsp;
} eltPswParmGetImsiS2Rsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetImsiS2Rsp msg;
} elt_psw_parm_get_imsi_s2_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_MDN_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_mdn_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_MDN_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswRawMdn_APIStruct         rawMdnRsp;
} eltPswParmGetMdnRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetMdnRsp msg;
} elt_psw_parm_get_mdn_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_MSID_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_msid_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_MSID_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswGetRawMSID_APIStruct     rawMsidRsp;
} eltPswParmGetMsidRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetMsidRsp msg;
} elt_psw_parm_get_msid_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_POSITIVE_SID_NID_LIST_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_positive_sid_nid_list_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_POSITIVE_SID_NID_LIST_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSIDNIDList_APIStruct     pSidNidListRsp;
} eltPswParmGetPositiveSidNidListRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetPositiveSidNidListRsp msg;
} elt_psw_parm_get_positive_sid_nid_list_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_PREF_HOME_MO_SO_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_pref_home_mo_so_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_PREF_HOME_MO_SO_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswPrefHomeMOSO_APIStruct   prefHomeMoSoRsp;
} eltPswParmGetPrefHomeMoSoRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetPrefHomeMoSoRsp msg;
} elt_psw_parm_get_pref_home_mo_so_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_PREF_HOME_MT_SO_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_pref_home_mt_so_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_PREF_HOME_MT_SO_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswPrefHomeMTSO_APIStruct   prefHomeMtSoRsp;
} eltPswParmGetPrefHomeMtSoRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetPrefHomeMtSoRsp msg;
} elt_psw_parm_get_pref_home_mt_so_rsp_msg_struct;

/* pref service option:
 Begin Enum, Pref Voice Service Options
     Srv Opt 1  Basic 8K Vocoder, 1,
     Srv Opt 3  Enhanced 8K Vocoder, 3,
     Srv Opt 17 Basic 13K Vocoder, 17,
     Srv Opt EVRC-B, 68,
     Srv Opt EVRC-NW, 73,
     Srv Opt QUALCOMM 17, 0x8000,
 End
 */

/* MSG_ID_ELT_PSW_PARM_GET_PREF_ROAM_MO_SO_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_pref_roam_mo_so_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_PREF_ROAM_MO_SO_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswPrefRoamMOSO_APIStruct   prefRoamMoSoRsp;
} eltPswParmGetPrefRoamMoSoRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetPrefRoamMoSoRsp msg;
} elt_psw_parm_get_pref_roam_mo_so_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_PREV_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_prev_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_PREV_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswPRev_APIStruct           prevRsp;
} eltPswParmGetPrevRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetPrevRsp msg;
} elt_psw_parm_get_prev_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_PRL_INFO_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_prl_info_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_PRL_INFO_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswPrlInfo_APIStruct        prlInfoRsp;
} eltPswParmGetPrlInfoRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetPrlInfoRsp msg;
} elt_psw_parm_get_prl_info_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_SCM_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_scm_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_SCM_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSCM_APIStruct            scmRsp;
} eltPswParmGetScmRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetScmRsp msg;
} elt_psw_parm_get_scm_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_SO_SUPPORT_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswGetSOSupport_APIStruct   soSupportGet;
} eltPswParmGetSoSupportCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetSoSupportCmd msg;
} elt_psw_parm_get_so_support_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_SO_SUPPORT_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSOSupport_APIStruct      soSupportRsp;
} eltPswParmGetSoSupportRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetSoSupportRsp msg;
} elt_psw_parm_get_so_support_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_SID_NID_LIST_SP_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_sid_nid_list_sp_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_SID_NID_LIST_SP_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSidNidListsp_APIStruct   sidNidListSpRsp;
} eltPswParmGetSidNidListSpRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetSidNidListSpRsp msg;
} elt_psw_parm_get_sid_nid_list_sp_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_SLOT_CYCLE_INDEX_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_slot_cycle_index_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_SLOT_CYCLE_INDEX_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSlotCycleIndex_APIStruct slotCycleIndexRsp;
} eltPswParmGetSlotCycleIndexRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetSlotCycleIndexRsp msg;
} elt_psw_parm_get_slot_cycle_index_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_SPC_CHANGE_ENABLE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_spc_change_enable_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_SPC_CHANGE_ENABLE_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSPCChangeEnable_APIStruct spcChangeEnableRsp;
} eltPswParmGetSpcChangeEnableRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetSpcChangeEnableRsp msg;
} elt_psw_parm_get_spc_change_enable_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_GET_SYSTEM_SELECT_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmdCommon msg;
} elt_psw_parm_get_system_select_cmd_msg_struct;


/* MSG_ID_ELT_PSW_PARM_GET_SYSTEM_SELECT_RSP_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSysSelect_APIStruct      sysSelectRsp;
} eltPswParmGetSystemSelectRsp;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetSystemSelectRsp msg;
} elt_psw_parm_get_system_select_rsp_msg_struct;

typedef  struct
{
    PswParmOperationId      parmOpId;
    PswParmOperationType    opType;
    union eltPswParmGetUnion
    {
        /* for PSW_PARM_GET_ENCODED_MSID */
        PswGetEncodedMSIDMsg_APIStruct  enCodedMsidGet;

        /* for PSW_PARM_GET_IMSI_S1 */
        PswGetIMSIS12_APIStruct         imsiS1Get;

        /* for PSW_PARM_GET_IMSI_S2 */
        PswGetIMSIS12_APIStruct         imsiS2Get;

        /* PSW_PARM_GET_SO_SUPPORT */
        PswGetSOSupport_APIStruct       soSupportGet;
    }u;
} eltPswParmGetCmd;

/*
eltPswParmGetCmd parmOpId u:
{
    PSW_PARM_GET_ENCODED_MSID enCodedMsidGet;
    PSW_PARM_GET_IMSI_S1 imsiS1Get;
    PSW_PARM_GET_IMSI_S2 imsiS2Get;
    PSW_PARM_GET_SO_SUPPORT soSupportGet;
};*/

/* so support:
 Begin Enum, Service Options
     Srv Opt 1  Basic 8K Vocoder, 1,
     Srv Opt 2  8K Mobile Loopback, 2 ,
     Srv Opt 3  Enhanced 8K Vocoder, 3 ,
     Srv Opt 4  Asyn Data Rate Set 1, 4 ,
     Srv Opt 5  Fax Rate Set 1, 5 ,
     Srv Opt 6  SMS Rate Set 1, 6 ,
     Srv Opt 9  13K Mobile Loopback, 9 ,
     Srv Opt 12 Async Data Pref Rate Set 2, 12 ,
     Srv Opt 13 Fax Pref Rate Set 2, 13 ,
     Srv Opt 14 SMS Rate Set 2, 14 ,
     Srv Opt 15 Low Speed Packet Data RS2, 15 ,
     Srv Opt 17 Basic 13K Vocoder, 17 ,
     Srv Opt 18 Otasp Pref Rate Set 1, 18 ,
     Srv Opt 19 Otasp Pref Rate Set 2, 19 ,
     Srv Opt 25 Medium Speed Packet Data RS2, 25 ,
     Srv Opt 32 Test Data Service Option, 32 ,
     Srv Opt 33 High Speed Packet Data, 33 ,
     Srv Opt 35 Location Services RS 1, 35 ,
     Srv Opt 36 Location Services RS 2, 36 ,
     Srv Opt 54 Markov 2000, 54 ,
     Srv Opt 55 FCH Loopback, 55 ,
     Srv Opt 68 EVRC-B Vocoder, 68 ,
     Srv Opt 73 EVRC-NW Vocoder, 73 ,
     Srv Opt 75 1xAdv Loopback, 75 ,
     Srv Opt 4100 Async Data Pref Rate Set 1, 0x1004 ,
     Srv Opt 4101 Fax Pref Rate Set 1, 0x1005 ,
     Srv Opt 32768 Basic 13K Vocoder, 0x8000 ,
     Srv Opt 32798 Markov RS1, 0x801E ,
     Srv Opt 32799 Markov RS2, 0x801F ,
     Srv Opt 32858 High Speed Packet Data, 0x805A ,
     Srv Opt 32859 High Speed Packet Data, 0x805B ,
     AMPS Analog Voice, 0xFFFF ,
     Set All SOs or Reset All to default, 0 ,
 End
 */

/* MSG_ID_ELT_PSW_PARM_GET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetCmd msg;
} elt_psw_parm_get_cmd_msg_struct;

typedef  struct
{
    PswParmOperationId      parmOpId;
    PswParmOperationType    opType;
    union eltPswParmRspUnion
    {
        /* for PSW_PARM_GET_ACCESS_OVERLOAD_CLASS */
        PswAccolc_APIStruct             accolcRsp;

        /* for PSW_PARM_GET_CDMA_PREF_AorB */
        PswPrefCDMA_AorB_APIStruct      prefCmdaAorbRsp;

        /* for PSW_PARM_GET_DISTANCE_BASED_PARMS */
        PswDistanceBasedParms_APIStruct distanceBaseParmsRsp;

        /* for PSW_PARM_GET_ENCODED_MSID */
        PswGetEncodedMSIDRsp_APIStruct  enCodedMsidRsp;

        /* for PSW_PARM_GET_ESN_MEID */
        PswEsnMeid_APIStruct            esnMeidRsp;

        /* for PSW_PARM_GET_FOREIGN_NID_REGISTRATION */
        PswForeignNidReg_APIStruct      foreignNidRegRsp;

        /* for PSW_PARM_GET_FOREIGN_SID_REGISTRATION */
        PswForeignSidReg_APIStruct      foreignSidRegRsp;

        /* for PSW_PARM_GET_HOME_SYS_REGISTRATION */
        PswHomeSysReg_APIStruct         homeSysRegRsp;

        /* for PSW_PARM_GET_IMSI_S1 */
        PswGetIMSIS1Rsp_APIStruct       imsiS1Rsp;

        /* for PSW_PARM_GET_IMSI_S2 */
        PswGetIMSIS2Rsp_APIStruct       imsiS2Rsp;

        /* for PSW_PARM_GET_MDN */
        PswRawMdn_APIStruct             rawMdnRsp;

        /* for PSW_PARM_GET_MSID */
        PswGetRawMSID_APIStruct         rawMsidRsp;

        /* for PSW_PARM_GET_PREF_HOME_MO_SO */
        PswPrefHomeMOSO_APIStruct       prefHomeMoSoRsp;

        /* PSW_PARM_GET_PREF_HOME_MT_SO */
        PswPrefHomeMTSO_APIStruct       prefHomeMtSoRsp;

        /* PSW_PARM_GET_PREF_ROAM_MO_SO */
        PswPrefRoamMOSO_APIStruct       prefRoamMoSoRsp;

        // PSW_PARM_GET_PREV
        PswPRev_APIStruct               prevRsp;

        // PSW_PARM_GET_PRL_INFO
        PswPrlInfo_APIStruct            prlInfoRsp;

        // PSW_PARM_GET_SCM
        PswSCM_APIStruct                scmRsp;

        /* PSW_PARM_GET_SO_SUPPORT */
        PswSOSupport_APIStruct          soSupportRsp;

        /* PSW_PARM_GET_SID_NID_LIST_SP */
        PswSidNidListsp_APIStruct       sidNidListSpRsp;

        // PSW_PARM_GET_SLOT_CYCLE_INDEX
        PswSlotCycleIndex_APIStruct     slotCycleIndexRsp;

        // PSW_PARM_GET_SPC_CHANGE_ENABLE
        PswSPCChangeEnable_APIStruct    spcChangeEnableRsp;

        // PSW_PARM_GET_SYSTEM_SELECT
        PswSysSelect_APIStruct          sysSelectRsp;

        /* for PSW_PARM_GET_SLOTTED_MODE_ALLOWED */
        PswSlottedModeAllowed_APIStruct slottedModeAllowedRsp;

        // PSW_PARM_GET_POSITIVE_SID_NID_LIST
        PswSIDNIDList_APIStruct         pSidNidListRsp;
    }u;
} eltPswParmGetRsp;

/*
eltPswParmGetRsp parmOpId u:
{
     PSW_PARM_GET_ACCESS_OVERLOAD_CLASS accolcRsp;

     PSW_PARM_GET_CDMA_PREF_AorB prefCmdaAorbRsp;

     PSW_PARM_GET_DISTANCE_BASED_PARMS distanceBaseParmsRsp;

     PSW_PARM_GET_ENCODED_MSID enCodedMsidRsp;

     PSW_PARM_GET_ESN_MEID esnMeidRsp;

     PSW_PARM_GET_FOREIGN_NID_REGISTRATION foreignNidRegRsp;

     PSW_PARM_GET_FOREIGN_SID_REGISTRATION foreignSidRegRsp;

     PSW_PARM_GET_HOME_SYS_REGISTRATION homeSysRegRsp;

     PSW_PARM_GET_IMSI_S1 imsiS1Rsp;

     PSW_PARM_GET_IMSI_S2 imsiS2Rsp;

     PSW_PARM_GET_MDN rawMdnRsp;

     PSW_PARM_GET_MSID rawMsidRsp;

     PSW_PARM_GET_PREF_HOME_MO_SO prefHomeMoSoRsp;

     PSW_PARM_GET_PREF_HOME_MT_SO prefHomeMtSoRsp;

     PSW_PARM_GET_PREF_ROAM_MO_SO prefRoamMoSoRsp;


     PSW_PARM_GET_PREV prevRsp;

     PSW_PARM_GET_PRL_INFO prlInfoRsp;

     PSW_PARM_GET_SCM scmRsp;

     PSW_PARM_GET_SO_SUPPORT   soSupportRsp;

     PSW_PARM_GET_SID_NID_LIST_SP  sidNidListSpRsp;

     PSW_PARM_GET_SLOT_CYCLE_INDEX slotCycleIndexRsp;

     PSW_PARM_GET_SPC_CHANGE_ENABLE spcChangeEnableRsp;

     PSW_PARM_GET_SYSTEM_SELECT sysSelectRsp;

     PSW_PARM_GET_SLOTTED_MODE_ALLOWED slottedModeAllowedRsp;

     PSW_PARM_GET_POSITIVE_SID_NID_LIST pSidNidListRsp;
};*/

/* MSG_ID_ELT_PSW_PARM_GET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmGetRsp msg;
} elt_psw_parm_get_rsp_msg_struct;

typedef  struct
{
    PswParmOperationId      parmOpId;
    PswParmOperationType    opType;
    union eltPswParmSetUnion
    {
        PswAccolc_APIStruct             accolcSet;
        PswAkey_APIStruct               akeySet;
        PswPrefCDMA_AorB_APIStruct      prefCmdaAorbSet;
        PswSetEncodedMSID_APIStruct     enCodedMsidSet;
        PswForeignNidReg_APIStruct      foreignNidRegSet;
        PswForeignSidReg_APIStruct      foreignSidRegSet;
        PswHomeSysReg_APIStruct         homeSysRegSet;
        PswSetIMSIS1_APIStruct          imsiS1Set;
        PswSetIMSIS2_APIStruct          imsiS2Set;
        PswRawMdn_APIStruct             rawMdnSet;
        PswSetRawMSID_APIStruct         rawMsidSet;
        PswSIDNIDList_APIStruct         pSidNidListSet;
        PswPrefHomeMOSO_APIStruct       prefHomeMoSoSet;
        PswPrefHomeMTSO_APIStruct       prefHomeMtSoSet;
        PswPrefRoamMOSO_APIStruct       prefRoamMoSoSet;
        PswPRev_APIStruct               prevSet;
        PswSCM_APIStruct                scmSet;
        PswSOSupport_APIStruct          soSupportSet;
        PswSidNidListsp_APIStruct       sidNidListSpSet;
        PswSlotCycleIndex_APIStruct     slotCycleIndexSet;
        PswSPCChangeEnable_APIStruct    spcChangeEnableSet;
        PswSysSelect_APIStruct          sysSelectSet;
    }u;
} eltPswParmSetCmd;

/*
eltPswParmSetCmd parmOpId u:
{
    PSW_PARM_SET_ACCESS_OVERLOAD_CLASS accolcSet;

    PSW_PARM_SET_AKEY akeySet;

    PSW_PARM_SET_CDMA_PREF_AorB prefCmdaAorbSet;

    PSW_PARM_SET_ENCODED_MSID enCodedMsidSet;

    PSW_PARM_SET_FOREIGN_SID_REGISTRATION foreignNidRegSet;

    PSW_PARM_SET_FOREIGN_NID_REGISTRATION foreignSidRegSet;

    PSW_PARM_SET_HOME_SYS_REGISTRATION homeSysRegSet;

    PSW_PARM_SET_IMSI_S1 imsiS1Set;

    PSW_PARM_SET_IMSI_S2 imsiS2Set;

    PSW_PARM_SET_MDN rawMdnSet;

    PSW_PARM_SET_MSID rawMsidSet;

    PSW_PARM_SET_PREF_HOME_MO_SO prefHomeMoSoSet;

    PSW_PARM_SET_PREF_HOME_MT_SO prefHomeMtSoSet;

    PSW_PARM_SET_PREF_ROAM_MO_SO prefRoamMoSoSet;

    PSW_PARM_SET_PREV prevSet;

    PSW_PARM_SET_SCM scmSet;

    PSW_PARM_SET_SO_SUPPORT soSupportSet;

    PSW_PARM_SET_SID_NID_LIST_SP sidNidListSpSet;

    PSW_PARM_SET_SLOT_CYCLE_INDEX slotCycleIndexSet;

    PSW_PARM_SET_SPC_CHANGE_ENABLE spcChangeEnableSet;

    PSW_PARM_SET_SYSTEM_SELECT sysSelectSet;
};*/

/* MSG_ID_ELT_PSW_PARM_SET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCmd msg;
} elt_psw_parm_set_cmd_msg_struct;

typedef  struct
{
    PswParmOperationId parmOpId;
    kal_bool           result;
} eltPswParmSetCommonRsp;

/* MSG_ID_ELT_PSW_PARM_SET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_ACCESS_OVERLOAD_CLASS_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswAccolc_APIStruct         accolcSet;
} eltPswParmSetAccOverloadClassCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetAccOverloadClassCmd msg;
} elt_psw_parm_set_access_overload_class_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_ACCESS_OVERLOAD_CLASS_RSP_MSG */

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_access_overload_class_rsp_msg_struct;


/* MSG_ID_ELT_PSW_PARM_SET_AKEY_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswAkey_APIStruct           akeySet;
} eltPswParmSetAkeyCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetAkeyCmd msg;
} elt_psw_parm_set_akey_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_AKEY_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_akey_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_CDMA_PREF_AORB_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswPrefCDMA_AorB_APIStruct  prefCmdaAorbSet;
} eltPswParmSetCdmaPrefAorbCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCdmaPrefAorbCmd msg;
} elt_psw_parm_set_cdma_pref_aorb_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_CDMA_PREF_AORB_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_cdma_pref_aorb_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_ENCODED_MSID_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSetEncodedMSID_APIStruct enCodedMsidSet;
} eltPswParmSetEncodedMsidCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetEncodedMsidCmd msg;
} elt_psw_parm_set_encoded_msid_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_ENCODED_MSID_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_encoded_msid_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_FOREIGN_NID_REG_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswForeignNidReg_APIStruct  foreignNidRegSet;
} eltPswParmSetForeignNidRegCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetForeignNidRegCmd msg;
} elt_psw_parm_set_foreign_nid_reg_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_FOREIGN_NID_REG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_foreign_nid_reg_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_FOREIGN_SID_REG_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswForeignSidReg_APIStruct  foreignSidRegSet;
} eltPswParmSetForeignSidRegCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetForeignSidRegCmd msg;
} elt_psw_parm_set_foreign_sid_reg_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_FOREIGN_SID_REG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_foreign_sid_reg_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_HOME_SYS_REG_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswHomeSysReg_APIStruct     homeSysRegSet;
} eltPswParmSetHomeSysRegCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetHomeSysRegCmd msg;
} elt_psw_parm_set_home_sys_reg_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_HOME_SYS_REG_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_home_sys_reg_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_IMSI_S1_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSetIMSIS1_APIStruct      imsiS1Set;
} eltPswParmSetImsiS1Cmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetImsiS1Cmd msg;
} elt_psw_parm_set_imsi_s1_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_IMSI_S1_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_imsi_s1_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_IMSI_S2_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSetIMSIS2_APIStruct      imsiS2Set;
} eltPswParmSetImsiS2Cmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetImsiS2Cmd msg;
} elt_psw_parm_set_imsi_s2_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_IMSI_S2_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_imsi_s2_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_MDN_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswRawMdn_APIStruct         rawMdnSet;
} eltPswParmSetMdnCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetMdnCmd msg;
} elt_psw_parm_set_mdn_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_MDN_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_mdn_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_MSID_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSetRawMSID_APIStruct     rawMsidSet;
} eltPswParmSetMsidCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetMsidCmd msg;
} elt_psw_parm_set_msid_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_MSID_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_msid_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_POSITIVE_SID_NID_LIST_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSIDNIDList_APIStruct     pSidNidListSet;
} eltPswParmSetPositiveSidNidListCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetPositiveSidNidListCmd msg;
} elt_psw_parm_set_positive_sid_nid_list_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_POSITIVE_SID_NID_LIST_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_positive_sid_nid_list_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_PREF_HOME_MO_SO_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswPrefHomeMOSO_APIStruct   prefHomeMoSoSet;
} eltPswParmSetPrefHomeMoSoCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetPrefHomeMoSoCmd msg;
} elt_psw_parm_set_pref_home_mo_so_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_PREF_HOME_MO_SO_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_pref_home_mo_so_rsp_msg_struct;

/* pref service option:
 Begin Enum, Pref Voice Service Options
     Srv Opt 1  Basic 8K Vocoder, 1,
     Srv Opt 3  Enhanced 8K Vocoder, 3,
     Srv Opt 17 Basic 13K Vocoder, 17,
     Srv Opt EVRC-B, 68,
     Srv Opt EVRC-NW, 73,
     Srv Opt QUALCOMM 17, 0x8000,
 End
 */

/* MSG_ID_ELT_PSW_PARM_SET_PREF_HOME_MT_SO_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswPrefHomeMTSO_APIStruct   prefHomeMtSoSet;
} eltPswParmSetPrefHomeMtSoCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetPrefHomeMtSoCmd msg;
} elt_psw_parm_set_pref_home_mt_so_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_PREF_HOME_MT_SO_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_pref_home_mt_so_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_PREF_ROAM_MO_SO_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswPrefRoamMOSO_APIStruct   prefRoamMoSoSet;
} eltPswParmSetPrefRoamMoSoCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetPrefRoamMoSoCmd msg;
} elt_psw_parm_set_pref_roam_mo_so_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_PREF_ROAM_MO_SO_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_pref_roam_mo_so_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_PREV_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswPRev_APIStruct           prevSet;
} eltPswParmSetPrevCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetPrevCmd msg;
} elt_psw_parm_set_prev_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_PREV_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_prev_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_SCM_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSCM_APIStruct            scmSet;
} eltPswParmSetScmCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetScmCmd msg;
} elt_psw_parm_set_scm_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_SCM_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_scm_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_SO_SUPPORT_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSOSupport_APIStruct      soSupportSet;
} eltPswParmSetSoSupportCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetSoSupportCmd msg;
} elt_psw_parm_set_so_support_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_SO_SUPPORT_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_so_support_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_SID_NID_LIST_SP_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSidNidListsp_APIStruct   sidNidListSpSet;
} eltPswParmSetSidNidListSpCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetSidNidListSpCmd msg;
} elt_psw_parm_set_sid_nid_list_sp_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_SID_NID_LIST_SP_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_sid_nid_list_sp_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_SLOT_CYCLE_INDEX_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSlotCycleIndex_APIStruct slotCycleIndexSet;
} eltPswParmSetSlotCycleIndexCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetSlotCycleIndexCmd msg;
} elt_psw_parm_set_slot_cycle_index_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_SLOT_CYCLE_INDEX_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_slot_cycle_index_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_SPC_CHANGE_ENABLE_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSPCChangeEnable_APIStruct spcChangeEnableSet;
} eltPswParmSetSpcChangeEnableCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetSpcChangeEnableCmd msg;
} elt_psw_parm_set_spc_change_enable_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_SPC_CHANGE_ENABLE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_spc_change_enable_rsp_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_SYSTEM_SELECT_CMD_MSG */
typedef  struct
{
    PswParmOperationId          parmOpId;
    PswParmOperationType        opType;
    PswSysSelect_APIStruct      sysSelectSet;
} eltPswParmSetSystemSelectCmd;

typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetSystemSelectCmd msg;
} elt_psw_parm_set_system_select_cmd_msg_struct;

/* MSG_ID_ELT_PSW_PARM_SET_SYSTEM_SELECT_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    eltPswParmSetCommonRsp msg;
} elt_psw_parm_set_system_select_rsp_msg_struct;


/* MSG_ID_ELT_PSW_GET_CP_BC_TO_CDMA_BC_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_get_cp_bc_to_cdma_bc_cmd_msg_struct;

/* MSG_ID_ELT_PSW_GET_CP_BC_TO_CDMA_BC_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswGetCpBcToCdmaBcRspMsgT msg;
    /*
      msg.bandClass:
Begin Enum, Cdma Band
    BAND_CLASS_0,
    BAND_CLASS_1,
    BAND_CLASS_2,
    BAND_CLASS_3,
    BAND_CLASS_4,
    BAND_CLASS_5,
    BAND_CLASS_6,
    BAND_CLASS_7,
    BAND_CLASS_8,
    BAND_CLASS_9,
    BAND_CLASS_10,
    BAND_CLASS_11,
    BAND_CLASS_12,
    BAND_CLASS_13,
    BAND_CLASS_14,
    BAND_CLASS_15,
    BAND_CLASS_16,
End

      msg.calibTable:
Begin enum, Hwd Calib Table Id
    0 BAND A,
    1 BAND B,
    2 BAND C,
    3 BAND D,
    4 BAND E,
End
     */
} elt_psw_get_cp_bc_to_cdma_bc_rsp_msg_struct;

/* MSG_ID_ELT_PSW_NST_POWERUP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswNstPowerupMsgT msg;
} elt_psw_nst_powerup_msg_struct;

/* MSG_ID_ELT_PSW_NST_TRANSMIT_TCH_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswNstTransmitTchMsgT msg;
} elt_psw_nst_transmit_tch_msg_struct;

/* MSG_ID_ELT_PSW_NST_EXIT_TEST_MODE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswNstExitMsgT msg;
} elt_psw_nst_exit_test_mode_msg_struct;

/* MSG_ID_ELT_PSW_NST_RX_PWR_REQ_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswNstRxPwrReqMsgT msg;
} elt_psw_nst_rx_pwr_req_msg_struct;

/* MSG_ID_ELT_PSW_NST_TX_PWR_LEVEL_SET_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswNstTxPwrLevelSetMsgT msg;
} elt_psw_nst_tx_pwr_level_set_msg_struct;

/* MSG_ID_ELT_PSW_SET_IMSI_M_VALID_STATUS_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    PswSetImsiMValidT msg;
} elt_psw_set_imsi_m_valid_status_cmd_msg_struct;

/* MSG_ID_ELT_PSW_SET_IMSI_M_VALID_STATUS_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_psw_set_imsi_m_valid_status_rsp_msg_struct;

/* MSG_ID_ELT_PSW_SET_MOBILE_ID_CMD_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   PswSetMobileIDMsgT msg;
} elt_psw_set_mobile_id_cmd_msg_struct;

typedef  struct
{
    kal_bool           result;
} eltPswCommonRsp;

/* MSG_ID_ELT_PSW_SET_MOBILE_ID_RSP_MSG */
typedef struct
{
   LOCAL_PARA_HDR
   eltPswCommonRsp msg;
} elt_psw_set_mobile_id_rsp_msg_struct;


/* CLC TASK START */
typedef struct
{
    LOCAL_PARA_HDR
    ClcInitTstMsgT msg;
    /* RmcRFMode:0->NO RF1->1 RF;
     * Begin Enum, RFPaths
     *             Main, 1
     *             Diversity, 2
     *             Main and Diversity, 3
     *  End
     * C3Enabled: 0->Disable;1->Enable;
     * SessionAutoMode:0->Disable;1->Enable;
     * CssEnabled:0->False;1->True;
     */
} elt_clc_initacq_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_clc_initacq_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_clc_get_l3_status_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    MonSpyL3StateT msg;
    /* Begin Enum, AlmpState:Init,0; Idle,1; ConnectionSetup,2; Connected,3; End */
    /* Begin Enum, InspState:Inactive,0; NetworkDetermination,1; PilotAcq,2;
     *                       Sync,3; TimingChange,4; INSP_WFR_1XASSIST_SIG,5;
     * End
     */
    /* Begin Enum, IdpState:Inactive,0; Monitor,1; Sleep,2; ConnectionSetup,3;
     *                      FreezePending,4; Freeze,5; ConnFrozen,6; WaitFor1XAssistAcqSignal,7;
     * End
     */
    /* Begin Enum, CspState:Inactive,0; Closing,1; Open,2; End */
    /* Begin Enum, RupState:Inactive,0; Idle,1; Connected,2; IRAT_MEASURE,3; End */
    /* Begin Enum, OmpState:Inactive,0; Active,1; End */
    /* bHybridOn:0->Off, 1->On. */
} elt_clc_get_l3_status_rsp_msg_struct;

typedef enum
{
  PARM_MIN_VALUE,
  PARM_MAX_VALUE,
  PARM_DEFAULT_VALUE,
  PARM_CUSTOM_VALUE
} ParmOperationType;

typedef struct
{
    DoParmOperationId parmId;
    ParmOperationType opType;
}clcDoParaCmdInfoT;

typedef struct
{
    DoParmOperationId parmId;
    DoParmAccessResultCode resultCode;
}clcDoParaRspInfoT;

typedef struct
{
    clcDoParaCmdInfoT paraInfo;
    DoHybridModeData_APIStruct hybridModeSet;
    /* Begin Enum,HybridMode:
                        Non-Hybrid,
                        Hybrid,
            End
         */
}clcDoHybridSetT;
typedef struct
{
    clcDoParaCmdInfoT paraInfo;
    DoPrefCCCycleData_APIStruct ccCycleSet;
    /*PrefCCCycleEnable:0->False,1->True.*/
}clcDoCcCycleSetT;
typedef struct
{
    clcDoParaCmdInfoT paraInfo;
    DoStreamConfiguration_APIStruct strConfigSet;
}clcDoStrConfigSetT;
typedef struct
{
    clcDoParaCmdInfoT paraInfo;
    DoForceRel0NegoData_APIStruct forceRel0NegSet;
    /*ScpForceRel0Config::0->Diable,1->Enable.*/
}clcDoForceRel0NegSetT;
typedef struct
{
    clcDoParaCmdInfoT paraInfo;
    DoNotDisturbData_APIStruct notDisturbSet;
    /*NotDisturb::0->Diable,1->Enable.*/
}clcDoNotDisturbSetT;
typedef struct
{
    clcDoParaCmdInfoT paraInfo;
    DoFtMacDrcGatingData_APIStruct ftMacDrcGatSet;
    /* Begin Enum, FtMacDrcGating
                       Continous,
                       Discontinous,
           End
         */
}clcDoFtMacDrcGatSetT;

typedef struct
{
    clcDoParaCmdInfoT paraInfo;
    DoLUPUnsolicitedData_APIStruct lupUnsolicitedSet;
    /*LUPUnsolicitedEnable:
            Begin Enum, LUPUnsolicitedEnable
                  Disable,
                  Enable,
            End
        */
}clcDoLupUnsolicitedSetT;
typedef struct
{
    clcDoParaCmdInfoT paraInfo;
    DoRxDiversityCtrlData_APIStruct rxDiversityCtrlSet;
}clcDoRxDiversityCtrlSetT;
typedef struct
{
    clcDoParaCmdInfoT paraInfo;
    DoExtendedSlotCycleData_APIStruct extendedSlotCycleSet;
    /*T_Dual_Idle:unit in second.
          Begin Enum, T_HRPD_ExtendedSC/T_1x_ExtendedSC:
                      3072  slots(5.12s), 0x09,
                      6144  slots(10.24s), 0x0a,
                      12288 slots(20.48s), 0x0b,
                      24576 slots(40.96s), 0x0c,
          End
         */
}clcDoExtendedSlotCycleSetT;

typedef struct
{
    clcDoParaCmdInfoT paraInfo;
    DoPrefModeData_APIStruct prefModeSet;
    /*Begin Enum, PrefMode:
                    Eng Pref Mode Analog, 0
                    Eng Pref Mode Cdma, 1
                    Eng Pref Mode Analog Only, 2
                    Eng Pref Mode Cdma Only, 3
                    Automatic, 4
                    Emergency, 5
                    Home Only, 6
                    Cdma Only, 7
                    HDR Only, 8
                    Hybrid Only, 9
                    SHDR Only, 10
                    End
        */

}clcDoPrefModeSetT;

typedef  struct
{
    clcDoParaCmdInfoT paraInfo;
    DoeHRPDModeData_APIStruct eHRPDModeSet;
    /*Disable::0->Diable,1->Enable.*/
} clcDoEHRPDModeSetT;


typedef struct
{
    LOCAL_PARA_HDR
    clcDoHybridSetT msg;
} elt_clc_do_hybrid_mode_set_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaRspInfoT msg;
} elt_clc_do_hybrid_mode_set_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoCcCycleSetT msg;
} elt_clc_do_pref_cc_cycle_set_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaRspInfoT msg;
} elt_clc_do_pref_cc_cycle_set_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoStrConfigSetT msg;
} elt_clc_do_stream_config_set_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaRspInfoT msg;
} elt_clc_do_stream_config_set_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoForceRel0NegSetT msg;
} elt_clc_do_force_r0_set_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaRspInfoT msg;
} elt_clc_do_force_r0_set_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoNotDisturbSetT msg;
} elt_clc_do_not_disturb_set_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaRspInfoT msg;
} elt_clc_do_not_disturb_set_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoFtMacDrcGatSetT msg;
} elt_clc_do_ft_mac_drc_gating_set_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaRspInfoT msg;
} elt_clc_do_ft_mac_drc_gating_set_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoLupUnsolicitedSetT msg;
} elt_clc_do_lup_unsolicited_set_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaRspInfoT msg;
} elt_clc_do_lup_unsolicited_set_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoRxDiversityCtrlSetT msg;
} elt_clc_do_rx_diversity_ctrl_set_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaRspInfoT msg;
} elt_clc_do_rx_diversity_ctrl_set_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoExtendedSlotCycleSetT msg;
} elt_clc_do_ext_slot_cycle_set_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaRspInfoT msg;
} elt_clc_do_ext_slot_cycle_set_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoPrefModeSetT msg;
} elt_clc_do_pref_mode_set_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaRspInfoT msg;
} elt_clc_do_pref_mode_set_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoEHRPDModeSetT msg;
} elt_clc_do_ehrpd_mode_set_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaRspInfoT msg;
} elt_clc_do_ehrpd_mode_set_rsp_msg_struct;


typedef struct
{
    clcDoParaRspInfoT paraInfo;
    DoHybridModeData_APIStruct hybridModeGet;
    /* Begin Enum,HybridMode:
                        Non-Hybrid,
                        Hybrid,
            End
         */
}clcDoHybridGetT;
typedef struct
{
    clcDoParaCmdInfoT paraInfo;
    DoPrefCCCycleData_APIStruct ccCycleGet;
    /*PrefCCCycleEnable:0->False,1->True.*/
}clcDoCcCycleGetT;
typedef struct
{
    clcDoParaRspInfoT paraInfo;
    DoStreamConfiguration_APIStruct strConfigGet;
}clcDoStrConfigGetT;
typedef struct
{
    clcDoParaRspInfoT paraInfo;
    DoForceRel0NegoData_APIStruct forceRel0NegGet;
    /*ScpForceRel0Config::0->Diable,1->Enable.*/
}clcDoForceRel0NegGetT;
typedef struct
{
    clcDoParaRspInfoT paraInfo;
    DoNotDisturbData_APIStruct notDisturbGet;
    /*NotDisturb::0->Diable,1->Enable.*/
}clcDoNotDisturbGetT;
typedef struct
{
    clcDoParaRspInfoT paraInfo;
    DoFtMacDrcGatingData_APIStruct ftMacDrcGatGet;
    /* Begin Enum, FtMacDrcGating
                       Continous,
                       Discontinous,
           End
         */
}clcDoFtMacDrcGatGetT;

typedef struct
{
    clcDoParaRspInfoT paraInfo;
    DoLUPUnsolicitedData_APIStruct lupUnsolicitedGet;
    /*LUPUnsolicitedEnable:
            Begin Enum, LUPUnsolicitedEnable
                  Disable,
                  Enable,
            End
        */
}clcDoLupUnsolicitedGetT;
typedef struct
{
    clcDoParaRspInfoT paraInfo;
    DoRxDiversityCtrlData_APIStruct rxDiversityCtrlGet;
}clcDoRxDiversityCtrlGetT;
typedef struct
{
    clcDoParaRspInfoT paraInfo;
    DoExtendedSlotCycleData_APIStruct extendedSlotCycleGet;
    /*T_Dual_Idle:unit in second.
          Begin Enum, T_HRPD_ExtendedSC/T_1x_ExtendedSC:
                      3072  slots(5.12s), 0x09,
                      6144  slots(10.24s), 0x0a,
                      12288 slots(20.48s), 0x0b,
                      24576 slots(40.96s), 0x0c,
          End
         */
}clcDoExtendedSlotCycleGetT;

typedef struct
{
    clcDoParaRspInfoT paraInfo;
    DoPrefModeData_APIStruct prefModeGet;
    /*Begin Enum, PrefMode:
                    Eng Pref Mode Analog, 0
                    Eng Pref Mode Cdma, 1
                    Eng Pref Mode Analog Only, 2
                    Eng Pref Mode Cdma Only, 3
                    Automatic, 4
                    Emergency, 5
                    Home Only, 6
                    Cdma Only, 7
                    HDR Only, 8
                    Hybrid Only, 9
                    SHDR Only, 10
                    End
        */

}clcDoPrefModeGetT;

typedef  struct
{
    clcDoParaRspInfoT paraInfo;
    DoeHRPDModeData_APIStruct eHRPDModeGet;
    /*Disable::0->Diable,1->Enable.*/
} clcDoEHRPDModeGetT;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaCmdInfoT msg;
} elt_clc_do_hybrid_mode_get_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoHybridGetT msg;
} elt_clc_do_hybrid_mode_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaCmdInfoT msg;
} elt_clc_do_pref_cc_cycle_get_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoCcCycleGetT msg;
} elt_clc_do_pref_cc_cycle_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaCmdInfoT msg;
} elt_clc_do_stream_config_get_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoStrConfigGetT msg;
} elt_clc_do_stream_config_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaCmdInfoT msg;
} elt_clc_do_force_r0_get_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoForceRel0NegGetT msg;
} elt_clc_do_force_r0_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaCmdInfoT msg;
} elt_clc_do_not_disturb_get_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoNotDisturbGetT msg;
} elt_clc_do_not_disturb_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaCmdInfoT msg;
} elt_clc_do_ft_mac_drc_gating_get_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoFtMacDrcGatGetT msg;
} elt_clc_do_ft_mac_drc_gating_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaCmdInfoT msg;
} elt_clc_do_lup_unsolicited_get_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoLupUnsolicitedGetT msg;
} elt_clc_do_lup_unsolicited_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaCmdInfoT msg;
} elt_clc_do_rx_diversity_ctrl_get_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoRxDiversityCtrlGetT msg;
} elt_clc_do_rx_diversity_ctrl_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaCmdInfoT msg;
} elt_clc_do_ext_slot_cycle_get_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoExtendedSlotCycleGetT msg;
} elt_clc_do_ext_slot_cycle_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaCmdInfoT msg;
} elt_clc_do_pref_mode_get_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoPrefModeGetT msg;
} elt_clc_do_pref_mode_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    clcDoParaCmdInfoT msg;
} elt_clc_do_ehrpd_mode_get_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    clcDoEHRPDModeGetT msg;
} elt_clc_do_ehrpd_mode_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_clc_idp_do_sys_status_get_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    EtsGetDoSysStatusRspT msg;
    /* bSloteMode:0->Disable;1->Enable.*/
} elt_clc_idp_do_sys_status_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpSlottedModeSetMsgT msg;
    /*bSlottedModeEnabled::0->Disable;1->Enable.*/
} elt_clc_idp_slotted_mode_set_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpSlottedModeSetRspT msg;
} elt_clc_idp_slotted_mode_set_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_clc_almp_open_conn_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_clc_almp_open_conn_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_clc_almp_rel_conn_cmd_msg_struct,elt_clc_almp_rel_conn_shdr_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ClcAlmpRelConnRspT msg;
} elt_clc_almp_rel_conn_rsp_msg_struct,elt_clc_almp_rel_conn_shdr_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    IdpEltHandoffMsgT msg;
} elt_clc_idp_handoff_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_clc_idp_handoff_rsp_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    ClcNstTstMsgT msg;
} elt_clc_nst_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_clc_connreq_cmd_msg_struct;

/* CLC TASK END */


/* SLC TASK START */
typedef struct
{
    LOCAL_PARA_HDR
} elt_slc_state_get_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    MonSpySessionStateT msg;
} elt_slc_state_get_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_slc_smp_session_close_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
} elt_slc_smp_session_close_rsp_msg_struct;
/* SLC TASK END */

/* CSS TASK START */
/* CSS_DBM_INIT_NVRAM_TO_DEFAULT_MSG */
/* MSG_ID_ELT_CSS_DBM_INIT_NVRAM_TO_DEFAULT_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssDbmInitDBToDefaultMsgT msg;
} elt_css_dbm_init_nvram_to_default_cmd_msg_struct;

/* CSS_TEST_CFG_MSG */
/* MSG_ID_ELT_CSS_TEST_CFG_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssTestCfgT msg;
} elt_css_test_cfg_cmd_msg_struct;

/* CSS_1X_CLEAR_MRU_MSG */
/* MSG_ID_ELT_CSS_1X_CLEAR_MRU_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
}elt_css_1x_clear_mru_cmd_msg_struct;

/* CSS_DO_CLEAR_MRU_MSG */
/* MSG_ID_ELT_CSS_DO_CLEAR_MRU_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
}elt_css_do_clear_mru_cmd_msg_struct;

/* CSS_GET_PRL_ID_MSG */
/* MSG_ID_ELT_CSS_GET_PRL_ID_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_css_get_prl_id_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CssGetPrlIdRspMsgT msg;
} elt_css_get_prl_id_rsp_msg_struct;

/* CSS_OOSA_SET_PARMS_MSG */
/* MSG_ID_ELT_CSS_OOSA_SET_PARMS_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssOOSASetPhaseParmsMsgT msg;
}elt_css_oosa_set_parms_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CssOOSASetPhaseParmsRspMsgT msg;
}elt_css_oosa_set_parms_rsp_msg_struct;


/* CSS_OOSA_GET_PARMS_MSG */
/* MSG_ID_ELT_CSS_OOSA_GET_PARMS_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CssOOSAGetPhaseParmsMsgT msg;
}elt_css_oosa_get_parms_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CssOOSAGetPhaseParmsRspMsgT msg;
}elt_css_oosa_get_parms_rsp_msg_struct;

/* CSS_OOSA_SET_ENABLE_MSG */
/* MSG_ID_ELT_CSS_OOSA_SET_ENABLE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CpsmOOSASetEnable_APIStruct msg;
}elt_css_oosa_set_enable_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CpsmOOSASetEnableRsp_APIStruct msg;
}elt_css_oosa_set_enable_rsp_msg_struct;

/* CSS_OOSA_GET_ENABLE_MSG */
/* MSG_ID_ELT_CSS_OOSA_GET_ENABLE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CpsmOOSAGetEnable_APIStruct msg;
}elt_css_oosa_get_enable_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CpsmOOSAGetEnableRsp_APIStruct msg;
} elt_css_oosa_get_enable_rsp_msg_struct;

/* CSS_OOSA_SET_NUM_PHASES_MSG */
/* MSG_ID_ELT_CSS_OOSA_SET_NUM_PHASES_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CpsmOOSASetNumPhases_APIStruct msg;
} elt_css_oosa_set_num_phases_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CpsmOOSASetNumPhasesRsp_APIStruct msg;
} elt_css_oosa_set_num_phases_rsp_msg_struct;

/* CSS_OOSA_GET_NUM_PHASES_MSG */
/* MSG_ID_ELT_CSS_OOSA_GET_NUM_PHASES_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CpsmOOSAGetNumPhases_APIStruct msg;
} elt_css_oosa_get_num_phases_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CpsmOOSAGetNumPhasesRsp_APIStruct msg;
} elt_css_oosa_get_num_phases_rsp_msg_struct;

/* CSS_OOSA_SET_CURRENT_STAGE_MSG */
/* MSG_ID_ELT_CSS_OOSA_SET_CURRENT_STAGE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CpsmOOSASetCurrentStage_APIStruct msg;
} elt_css_oosa_set_current_stage_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CpsmOOSASetCurrentStageRsp_APIStruct msg;
} elt_css_oosa_set_current_stage_rsp_msg_struct;

/* CSS_OOSA_GET_CURRENT_STAGE_MSG */
/* MSG_ID_ELT_CSS_OOSA_GET_CURRENT_STAGE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CpsmOOSAGetCurrentStage_APIStruct msg;
}elt_css_oosa_get_current_stage_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CpsmOOSAGetCurrentStageRsp_APIStruct msg;
}elt_css_oosa_get_current_stage_rsp_msg_struct;

/* CSS_GET_MCC_MSG */
/* MSG_ID_ELT_CSS_GET_MCC_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CpsmGetMccT msg;
} elt_css_get_mcc_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CpsmGetMcccRspT msg;
} elt_css_get_mcc_rsp_msg_struct;

/* CSS_GET_ERI_VERSION_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_css_get_eri_version_number_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    CssEriVersionNumberRspMsgT msg;
} elt_css_get_eri_version_number_rsp_msg_struct;
/* CSS TASK END */

/* ETS CMD GPS */
typedef struct
{
LOCAL_PARA_HDR
    ValPswIs801TcpConnReqMsgT msg;
}     elt_gps_loc_tcp_conn_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
}     elt_gps_loc_tcp_conn_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
}     elt_gps_loc_tcp_close_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
}     elt_gps_loc_tcp_close_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValNMEACfgSetMsgT msg;
}     elt_gps_nmea_cfg_set_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
}     elt_gps_nmea_cfg_set_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValNmeaCfgGetReqMsgT msg;
}     elt_gps_nmea_cfg_get_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValNmeaCfgGetReqMsgT msg;
}     elt_gps_nmea_cfg_get_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsOpenDeviceHwInitMsgT msg;
}     elt_gps_open_device_hw_init_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsOpenDeviceHwInitRspMsgT msg;
}     elt_gps_open_device_hw_init_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsCloseDeviceMsgT msg;
}     elt_gps_close_device_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsCloseDeviceRspMsgT msg;
}     elt_gps_close_device_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsPositionGetMsgT msg;
}     elt_gps_position_get_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsPositionGetRspMsgT msg;
}     elt_gps_position_get_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
        ValGpsStartFixMsgT msg;
}     elt_gps_start_fix_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
        ValGpsStartFixRspMsgT msg;
}     elt_gps_start_fix_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsQueryFixMsgT msg;
}     elt_gps_query_fix_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsQueryFixRspMsgT msg;
}     elt_gps_query_fix_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsStopFixMsgT msg;
}     elt_gps_stop_fix_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsStopFixRspMsgT msg;
}     elt_gps_stop_fix_rsp_msg_struct;

/* MSG_ID_ELT_GPS_CONFIG_FIX_MODE_SET_CMD_MSG */
typedef struct
{
LOCAL_PARA_HDR
    ValGpsFixModeConfigMsgT msg;
}     elt_gps_config_fix_mode_set_cmd_msg_struct;

/* MSG_ID_ELT_GPS_CONFIG_FIX_MODE_SET_RSP_MSG */
typedef struct
{
LOCAL_PARA_HDR
    ValGpsFixModeConfigRspMsgT msg;
}     elt_gps_config_fix_mode_set_rsp_msg_struct;

/*MSG_ID_ELT_GPS_CONFIG_FIX_RATE_SET_CMD_MSG*/
typedef struct
{
LOCAL_PARA_HDR
    ValGpsFixRateConfigMsgT msg;
}     elt_gps_config_fix_rate_set_cmd_msg_struct;

/*MSG_ID_ELT_GPS_CONFIG_FIX_RATE_SET_RSP_MSG*/
typedef struct
{
LOCAL_PARA_HDR
    ValGpsFixRateConfigRspMsgT msg;
}     elt_gps_config_fix_rate_set_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsQosConfigMsgT msg;
}     elt_gps_config_qos_set_cmd_msg_struct;

/* MSG_ID_ELT_GPS_CONFIG_QOS_SET_RSP_MSG */
typedef struct
{
LOCAL_PARA_HDR
    ValGpsQosConfigRspMsgT msg;
}     elt_gps_config_qos_set_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    kal_bool bAddrValid;
    kal_bool  IPType; /*0: IPV4; 1: IPV6*/
    kal_uint8 Ipv4Addr[4];
    kal_uint32 IPv6Addr[4];
    kal_uint32 PortNum;
    kal_bool   bURLValid;
    kal_uint8  URLAddr[256];
}     elt_gps_write_server_config_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsStatusT Status;
}     elt_gps_write_server_config_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
}     elt_gps_read_server_config_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool bAddrValid;
    kal_bool  IPType; /*0: IPV4; 1: IPV6*/
    kal_uint8 Ipv4Addr[4];
    kal_uint32 IPv6Addr[4];
    kal_uint32 PortNum;
    kal_bool   bURLValid;
    kal_uint8  URLAddr[256];
} elt_gps_read_server_config_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsEnableSecurityMsgT msg;
}     elt_gps_enable_security_cmd_msg_struct;
/* MSG_ID_ELT_GPS_ENABLE_SECURITY_RSP_MSG */
typedef struct
{
LOCAL_PARA_HDR
    ValGpsEnableSecurityRspMsgT msg;
}     elt_gps_enable_security_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsWriteSecurityConfigMsgT msg;
}     elt_gps_write_security_config_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsWriteSecurityConfigRspMsgT msg;
}     elt_gps_write_security_config_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsReadSecurityConfigMsgT msg;
}     elt_gps_read_security_config_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsReadSecurityConfigRspMsgT msg;
}     elt_gps_read_security_config_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsReadSecurityConfigMsgT msg;
}     elt_gps_read_security_config_w_status_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsReadSecurityConfigRspWithStatusMsgT msg;
}     elt_gps_read_security_config_w_status_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsReadEncryptConfigMsgT msg;
}     elt_gps_read_encrypt_config_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsReadEncryptConfigRspMsgT msg;
}     elt_gps_read_encrypt_config_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsReadEncryptConfigMsgT msg;
}     elt_gps_read_encrypt_config_w_status_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsReadEncryptConfigRspWithStatusMsgT msg;
}     elt_gps_read_encrypt_config_w_status_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsLbsPrivacySettingGetMsgT msg;
}     elt_gps_lbs_privacy_setting_get_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsLbsPrivacySettingGetRspMsgT msg;
}     elt_gps_lbs_privacy_setting_get_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsLbsPrivacySettingsSetMsgT msg;
}     elt_gps_lbs_privacy_setting_set_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsLbsPrivacySettingsSetRspMsgT msg;
}     elt_gps_lbs_privacy_setting_set_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsBaseSSDGetMsgT msg;
}     elt_gps_basessd_get_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsBaseSSDGetRspMsgT msg;
}     elt_gps_basessd_get_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsRandPeriodSetMsgT msg;
}     elt_gps_rand_period_set_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsRandPeriodSetRspMsgT msg;
}     elt_gps_rand_period_set_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsResetAssistMsgT msg;
}     elt_gps_reset_assist_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsResetAssistRspMsgT msg;
}     elt_gps_reset_assist_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsRestartFixMsgT msg;
}     elt_gps_restart_fix_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32 InstanceID;
    kal_uint8 Status;
    /*  Status:
    CP_VAL_GPS_SUCCESS, 0,
    CP_VAL_GPS_ERROR_INVALID_PARM,
    CP_VAL_GPS_ERROR_INVALID_SECURITY_STATUS,
    CP_VAL_GPS_ERROR_LOCATION_REQ_QUEUE_FULL,
    CP_VAL_GPS_ERROR_PREV_LOCATION_REQ_PENDING,
    */
}     elt_gps_restart_fix_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsSetSecMsgT msg;
}     elt_gps_sec_set_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsSetSecRspMsgT msg;
}     elt_gps_sec_set_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsConfigTechMsgT msg;
}     elt_gps_config_tech_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
}     elt_gps_config_tech_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
}     elt_pgps_cfg_set_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
}     elt_pgps_cfg_set_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
}     elt_pgps_cfg_get_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
}     elt_pgps_cfg_get_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
}     elt_pgps_start_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
}     elt_pgps_start_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsWriteOffsetInfoMsgT msg;
}     elt_gps_write_offset_info_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsWriteOffsetInfoRspMsgT msg;
}     elt_gps_write_offset_info_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsReadOffsetInfoMsgT msg;
}     elt_gps_read_offset_info_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsReadOffsetInfoRspMsgT msg;
}     elt_gps_read_offset_info_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsNmeaOuputSettingsMsgT msg;
}     elt_gps_nmea_output_setting_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsNmeaOuputSettingsRspMsgT msg;
}     elt_gps_nmea_output_setting_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsFixRateConfigGetMsgT msg;
}     elt_gps_config_fix_rate_get_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsFixRateConfigGetRspMsgT msg;
}     elt_gps_config_fix_rate_get_rsp_msg_struct;

typedef struct
{
LOCAL_PARA_HDR
    ValGpsCTMpcCfgMsgT msg;
}elt_gps_ct_mpc_ip_cfg_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsCTMpcCfgRspMsgT msg;
}elt_gps_ct_mpc_ip_cfg_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
ValGpsBaseSSDSetMsgT msg;
}elt_gps_basessd_set_cmd_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsBaseSSDSetRspMsgT msg;
}elt_gps_basessd_set_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsCTMpcPasswrdUsernameCfgMsgT msg;
}elt_gps_mpc_ip_username_passwrd_cfg_set_cmd_struct;

typedef struct
{
LOCAL_PARA_HDR
    ValGpsCTMpcPasswrdUsernameCfgRspMsgT msg;
}elt_gps_mpc_ip_username_passwrd_cfg_set_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsTestModeSetT msg;
}elt_gps_test_mode_set_cmd_msg_struct;

typedef struct
{
LOCAL_PARA_HDR
    ValGpsTestModeSetRspMsgT msg;
}elt_gps_test_mode_set_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsStateGetMsgT msg;
}elt_gps_lbs_state_get_cmd_msg_struct;

typedef struct
{
LOCAL_PARA_HDR
    ValGpsStateGetRspMsgT msg;
}elt_gps_lbs_state_get_rsp_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsStartModeSetMsgT msg;
}elt_gps_start_mode_set_cmd_msg_struct;
typedef struct
{
LOCAL_PARA_HDR
    ValGpsStartModeSetRspMsgT msg;
}elt_gps_start_mode_set_rsp_msg_struct;

/* MSG_ID_ELT_GPS_CP_VAL_MPC_MSG */
typedef struct
{
LOCAL_PARA_HDR
    ValGpsCpValMpcMsgT msg;
}elt_gps_cp_val_mpc_msg_struct;

/* MSG_ID_ELT_GPS_CP_LOC_RESP_MSG */
typedef struct
{
LOCAL_PARA_HDR
	ValGpsLocRespMsgT msg;
}elt_gps_cp_loc_resp_msg_struct;

/* MSG_ID_ELT_GPS_LOC_STATE_MSG */
typedef struct
{
LOCAL_PARA_HDR
	ValGpsStateChangeParamsSpyMsgT msg;
}elt_gps_loc_state_msg_struct;


/*LEC*/
typedef struct
{
LOCAL_PARA_HDR
    LecPgpsOnOffMsgT msg;
}elt_lec_tst_gps_pgps_on_off_cmd_msg_struct;

typedef struct
{
LOCAL_PARA_HDR
    LecPgpsOnOffMsgRspT msg;
}elt_lec_tst_gps_pgps_on_off_rsp_msg_struct;


/* UI */
/* MSG_ID_ELT_VAL_SET_SMS_CH_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool isTraffic;
}   elt_val_set_sms_ch_cmd_msg_struct;
typedef struct
{
    LOCAL_PARA_HDR
}   elt_val_set_sms_ch_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
}   elt_val_ui_parm_get_auto_answer_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
    kal_bool                AutoAnswerMode;
    kal_uint8               Rings;
}   elt_val_ui_parm_get_auto_answer_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
}   elt_val_ui_parm_get_auto_redial_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId       UiParmId;
    UiParmOperationType     opType;
    kal_bool                    AutoRedialMode;
    AutoRedialIntervalType  Interval;
}   elt_val_ui_parm_get_auto_redial_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}   elt_val_ui_parm_get_dtmf_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiDTMFMode          DTMFMode;
}   elt_val_ui_parm_get_dtmf_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
}   elt_val_ui_parm_get_lock_code_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
    kal_uint8               LockCode[NUM_UI_LOCK_CODE_DIGITS];
}   elt_val_ui_parm_get_lock_code_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
}   elt_val_ui_parm_get_voice_privacy_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
    UiVoicePrivacyMode  VoicePrivacy;
}   elt_val_ui_parm_get_voice_privacy_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
}   elt_val_ui_parm_get_voice_privacy_alert_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
    kal_bool                VoicePrivacyAlertMode;
}   elt_val_ui_parm_get_voice_privacy_alert_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
    kal_bool                AutoAnswerMode;
    kal_uint8               Rings;
}   elt_val_ui_parm_set_auto_answer_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
}   elt_val_ui_parm_set_auto_answer_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
    kal_bool                    AutoRedialMode;
    AutoRedialIntervalType  Interval;
}   elt_val_ui_parm_set_auto_redial_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
}   elt_val_ui_parm_set_auto_redial_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiDTMFMode          DTMFMode;
}   elt_val_ui_parm_set_dtmf_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
}   elt_val_ui_parm_set_dtmf_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
    kal_uint8               LockCode[NUM_UI_LOCK_CODE_DIGITS];
}   elt_val_ui_parm_set_lock_code_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
}   elt_val_ui_parm_set_lock_code_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
    UiVoicePrivacyMode  VoicePrivacy;
}   elt_val_ui_parm_set_voice_privacy_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
}   elt_val_ui_parm_set_voice_privacy_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
    kal_bool                VoicePrivacyAlertMode;
}   elt_val_ui_parm_set_voice_privacy_alert_cmd_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    UiParmOperationId   UiParmId;
    UiParmOperationType opType;
}   elt_val_ui_parm_set_voice_privacy_alert_rsp_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    EtsDispTextMsgT etsDispTextInfo;
}   elt_val_ui_cp_display_rsp_msg_struct;

typedef enum
{
    VAL_KEY_PRESS,
    VAL_KEY_RELEASE,
    VAL_KEY_HOLD,
    VAL_KEY_STATUS_NUM
}ValKeyStatusT;

typedef  struct
{
    ValKeyStatusT   Status;
    SysKeyIdT       KeyId;
}  ValKeypadMsgT;


typedef struct
{
    LOCAL_PARA_HDR
    ValKeypadMsgT   valKeyInfo;
}   elt_val_ui_cp_key_press_cmd_msg_struct;

typedef  struct
{
  ValSmsEtsStatT   Status;
  ValSmsEtsMsgTypeT Type;
  ValSmsEltStorageT Storage;
  kal_uint16 Index;
  ValSmsEltEmsFlagT EmsFlag;
  kal_uint8 EmsSegment;
  kal_uint8 EmsLast;
  ValSmsEltPhbTypeT PhbType;
  kal_uint8 PhbByteCount;
  kal_uint8 Phonebook[32];
  kal_uint8 Pdu_data[256];
}   ValSmsEltGetMsgRspMsgT;

/* MSG_ID_ELT_VAL_SMS_DEL_ALL_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEtsMsgTypeT Type;
    ValSmsEltStorageT Storage;
} elt_val_sms_del_all_cmd_msg_struct;

/* MSG_ID_ELT_VAL_SMS_DEL_ALL_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEtsStatT Status;
    ValSmsEtsMsgTypeT Type;
    ValSmsEltStorageT Storage;
} elt_val_sms_del_all_rsp_msg_struct;

/* MSG_ID_ELT_VAL_SMS_DEL_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 Index;
    ValSmsEltStorageT  Storage;
} elt_val_sms_del_cmd_msg_struct;

/* MSG_ID_ELT_VAL_SMS_DEL_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEtsStatT Status;
    kal_uint16 Index;
    ValSmsEltStorageT Storage;
} elt_val_sms_del_rsp_msg_struct;

/* MSG_ID_ELT_VAL_SMS_GET_FIRST_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEtsMsgTypeT Type;
    ValSmsEltStorageT Storage;
} elt_val_sms_get_first_cmd_msg_struct;

/* MSG_ID_ELT_VAL_SMS_GET_FIRST_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEltGetMsgRspMsgT      msg;
} elt_val_sms_get_first_rsp_msg_struct;

/* MSG_ID_ELT_VAL_SMS_GET_NEXT_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_val_sms_get_next_cmd_msg_struct;

/* MSG_ID_ELT_VAL_SMS_GET_NEXT_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEltGetMsgRspMsgT      msg;
} elt_val_sms_get_next_rsp_msg_struct;

/* MSG_ID_ELT_VAL_SMS_GET_COUNT_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEltStorageT Storage;
} elt_val_sms_get_count_cmd_msg_struct;

/* MSG_ID_ELT_VAL_SMS_GET_COUNT_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEtsGetCountRspMsgT        msg;
} elt_val_sms_get_count_rsp_msg_struct;

/* MSG_ID_ELT_VAL_SMS_SEND_INDEX_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEltStorageT      Storage;
    kal_uint16                 Index;
    ValSmsEltSaveT         SaveFlag;
    ValSmsEltConfirmationT ConfirmFlag;
} elt_val_sms_send_index_cmd_msg_struct;

/* MSG_ID_ELT_VAL_SMS_SEND_INDEX_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEtsStatT         Status;
    ValSmsEltStorageT      Storage;
    kal_uint16                 Index;
} elt_val_sms_send_index_rsp_msg_struct;

/* MSG_ID_ELT_VAL_SMS_SEND_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEltStorageT Storage;
    kal_uint16 Index;
    ValSmsEltEmsFlagT EmsFlag;
    kal_uint8 EmsSegment;
    kal_uint8 EmsLast;
    ValSmsEltSaveT         SaveFlag;
    ValSmsEltConfirmationT ConfirmFlag;
    kal_uint8 pdu_len;
    kal_uint8 Pdu_data[253];
} elt_val_sms_send_cmd_msg_struct;

/* MSG_ID_ELT_VAL_SMS_SEND_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEtsStatT         Status;
    ValSmsEltStorageT      Storage;
    kal_uint16                 Index;
    kal_uint8                  EmsSegment;
    kal_uint16                 RefNum;
    ValSmsEltErrClassT     ErrorClass;
} elt_val_sms_send_rsp_msg_struct;

/* MSG_ID_ELT_VAL_SMS_SET_STATUS_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEltStorageT      Storage;
    kal_uint16                 Index;
    kal_bool                   Read;
} elt_val_sms_set_status_cmd_msg_struct;

/* MSG_ID_ELT_VAL_SMS_SET_STATUS_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEtsStatT         Status;
    ValSmsEltStorageT      Storage;
    kal_uint16                 Index;
} elt_val_sms_set_status_rsp_msg_struct;

/* MSG_ID_ELT_VAL_SMS_WRITE_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEtsMsgTypeT Type;
    ValSmsEltStorageT Storage;
    kal_uint16 Index;
    ValSmsEltEmsFlagT EmsFlag;
    kal_uint8 EmsSegment;
    kal_uint8 EmsLast;
    kal_uint8 pdu_len;
    kal_uint8 Pdu_data[253];
} elt_val_sms_write_cmd_msg_struct;

/* MSG_ID_ELT_VAL_SMS_WRITE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValSmsEtsStatT    Status;
    ValSmsEltStorageT Storage;
    kal_uint16 Index;
    kal_uint8  EmsSegment;
    kal_uint16 RefNum;
    ValSmsEltErrClassT ErrorClass;
} elt_val_sms_write_rsp_msg_struct;

/* MSG_ID_ELT_RCP_RTM_TEST_TXCHANSTAT_GET_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
} elt_rcp_rtm_test_txchanstat_get_cmd_msg_struct;

/* MSG_ID_ELT_RCP_RTM_TEST_TXCHANSTAT_GET_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RtmTestTxChanStatGetRspMsgT msg;
/*
pilotChanGain (Q6), kal_uint16, base=10
drcChanGain (Q7), kal_uint16, base=10
ackChanGain (Q6), kal_uint16, base=10
dataChanGain (Q5), kal_uint16, base=10
rriChanGain (Q6), kal_uint16, base=10
drcLockPeriod, kal_uint16, base=10
*/
} elt_rcp_rtm_test_txchanstat_get_rsp_msg_struct;

/* MSG_ID_ELT_VAL_GET_ALERT_STATUS_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
}elt_val_get_alert_status_cmd_msg_struct;

/* MSG_ID_ELT_VAL_GET_ALERT_STATUS_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    ValAlertStatusRspMsgT msg;
}elt_val_get_alert_status_rsp_msg_struct;

/* MSG_ID_ELT_C2K_VERSION_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
}elt_c2k_version_cmd_msg_struct;

/* MSG_ID_ELT_C2K_VERSION_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 version[128];
}elt_c2k_version_rsp_msg_struct;

/* MSG_ID_ELT_UIM_SET_FACTORY_MODE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
}elt_uim_set_factory_mode_rsp_msg_struct;

/* MSG_ID_ELT_UIM_GET_FACTORY_MODE_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool factory_mode;
}elt_uim_get_factory_mode_rsp_msg_struct;

/* MSG_ID_ELT_C2K_LOOPBACK_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32 size;
    kal_uint8 msg[128];
}elt_c2k_loopback_cmd_msg_struct;

/* Data Sturcture for CP Loopback Rsp Msg */
typedef struct
{
    kal_uint32 size;
    kal_uint8 msg[128];
} C2kLoopbackRspMsgT;

/* MSG_ID_ELT_C2K_LOOPBACK_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    C2kLoopbackRspMsgT lpdata;
}elt_c2k_loopback_rsp_msg_struct;

/* MSG_ID_ELT_C2K_CONFIGURATION_CMD_MSG */
typedef struct
{
    LOCAL_PARA_HDR
}elt_c2k_configuration_cmd_struct;

/* Data Sturcture for CP Config Info Rsp Msg */
typedef struct
{
   kal_uint8    AsicType;
   kal_uint8    CPVersion;
   kal_uint8    DSMPatchId;
   kal_uint8    DSVPatchId;
   kal_uint8    RFOption;
   kal_uint8    RefClockFreq;
   kal_bool     UIMEnabled;
   kal_bool     FileSysEnabled;
   kal_bool     DataSvcEnabled;
   kal_bool     SchEnabled;
   kal_bool     DiversityEnabled;
   kal_bool     GPSEnabled;
   kal_bool     AuxAdcPollingEnabled;
   kal_bool     DigitalRxAgcEnabled;
   kal_uint8    ManufactureId[20];
   kal_uint8    ModelId[20];
   kal_uint8    VerInfo[3];
   kal_uint8    MobileIdType;
   kal_bool     EPRL_Supported;
} C2kConfigInfoRspMsgT;
typedef enum
{
   ESN_Only = 1,
   MEIDorESN= 2

} CPMobileIDType;

/* MSG_ID_ELT_C2K_CONFIGURATION_RSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    C2kConfigInfoRspMsgT info;
}elt_c2k_configuration_rsp_msg_struct;
/* MSG_ID_ELT_SYS_C2K_FRC_SYNC */


typedef struct
{
   kal_int16 Band;
   kal_int32 Groupdelay;
}AgpsGroupDelayMsgT;

/*MSG_ID_ELT_L1D_GET_AGPS_GROUP_DELAY_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    AgpsGroupDelayMsgT info[5];
}elt_l1d_get_agps_group_delay_rsp_msg_struct;

/*MSG_ID_ELT_L1D_SET_AGPS_GROUP_DELAY_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    AgpsGroupDelayMsgT setinfo;
}elt_l1d_set_agps_group_delay_cmd_msg_struct;

/*MSG_ID_ELT_L1D_GET_AGPS_GROUP_DELAY_CMD_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}elt_l1d_get_agps_group_delay_cmd_msg_struct;

/*MSG_ID_ELT_L1D_SET_AGPS_GROUP_DELAY_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
	AgpsGroupDelayMsgT info[5];
}elt_l1d_set_agps_group_delay_rsp_msg_struct;

#endif
