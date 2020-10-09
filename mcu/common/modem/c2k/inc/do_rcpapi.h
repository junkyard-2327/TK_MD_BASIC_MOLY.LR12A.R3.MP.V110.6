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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.
*
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
*
* Copyright (c) 2002-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************
*
* FILE NAME   : do_rcpapi.h
*
* DESCRIPTION : API definition for RCP (Reverse Channel Processing) task.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_RCPAPI_H_
#define _DO_RCPAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "sysdefs.h"
#include "cpbuf.h"
#include "hlpapi.h"
#include "do_rmcapi.h"
#include "kal_public_defs.h"
#include "evl1rcpapi.h"
#include "rcptxagc.h"
#include "slc_nvram.h"
#include "dspmapi.h"
#include "cl1tsteltif.h"
/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
#define MAX_STREAM_NUM          4
#define MAX_NUM_DATAPKT_REC     120
#define MAX_NUM_REVMACPKT_REC   10
#define MAX_NUM_TXDMALLD_REC    120
/* Fenix: Changed from 4 to 6, since Ericsson supports 5. */
#define MAX_RLP_HLP_PKT_NUM       6

#define MAX_FORMAT_B_SESSION_LAYER_LEN   255
#define INVALID_REVMACID        0xFF
#define MAX_REVMACID            0xFE

#define INVALID_REVMACFLOWID        0xFF

#define CONNLAYER_FORMATA       0
#define CONNLAYER_FORMATB       1

#define TXHW_ACCESS_CHAN        0
#define TXHW_REV_TRAFFIC_CHAN   1

#define MAX_RCP_RI_CPBUF_FREE_NUM 30

/* SysTime Hw */
#define ST_TX_MIL_0_MASK     0x0000FFFF
#define ST_TX_MIL_1_MASK     0xFFFF0000
#define ST_TX_MIL_1_SHIFT    16

/* Macros used for Tx AGC Clipper threshold settings (should be the same as
** clipper settings sent down to the DSPM for 1xRTT operations */
#define RCP_REV_CLIP_MAX_LEVEL         0x03FF   /* <10,2,u> = 3.996 - effectively disables reverse clipping */
#define RCP_REV_CLIP_THRESHOLD_LIMIT   0x007F   /* <7,0,u>  = i.e., fractional ratio - no value greater than one */
#define RCP_REV_CLIP_DEFAULT           0x02c0   /* same as SYS_DSPM_REV_REVMIXSIGPARM3_DEFAULT */

#define RCP_REV_DELAY_LOAD_WINDOW_DEFAULT           0x3C /* delay loading window value: 60 chips */
#define CHIP_OFFSET_BETWEEN_ON_AIR_AND_SLOT_INT     13
/** Define DDPC control mode */
#define DDPC_BYPASS           0   //DDPC disable in normal mode
#define DDPC_OL_AB            1   //DDPC open loop,Delta using Absolute algorithm in normal mode
#define DDPC_OL_REL           2   //DDPC open loop,Delta using Relative algorithm in normal mode
#define DDPC_CL_AB            3   //DDPC closed loop,Delta using Absolute algorithm in normal mode
#define DDPC_CL_REL           4   //DDPC closed loop,Delta using Relative algorithm in normal mode
#define DDPC_TST_ENABLE       6  //DDPC loop enable, used in calibration mode, couplerLoss calibration
#define DDPC_CAL_ENABLE       7  //DDPC loop diable, used in calibration mode, PA calibration
#define RCP_MAX_NUM_PILOTS   6
#define RCP_MAX_NUM_PCGS     6
#define RCP_TX_DATA_ACK_ARRAY_SIZE  1 //RCP TX data buffer ACK arrary size
#define RCP_TX_DATA_NAK_ARRAY_SIZE  3 //RCP TX data buffer NAK arrary size
#define RCP_TX_DATA_ARRAY_SIZE      (RCP_TX_DATA_ACK_ARRAY_SIZE + RCP_TX_DATA_NAK_ARRAY_SIZE)
#define RCP_TX_DATA_BUFF_SIZE   1536//add one byte for 2 bits MAC trailer, and 128 alignment as well


extern kal_bool bAcmSupervisionExpiredTest;
#define ACM_SUPERVISION_FAIL_TEST (bAcmSupervisionExpiredTest == KAL_TRUE)

/*----------------------------------------------------------------------------
 Mailbox IDs
----------------------------------------------------------------------------*/
#define RCP_CMD_MAILBOX         EXE_MAILBOX_1_ID
#define RCP_DATA_MAILBOX        EXE_MAILBOX_2_ID
#define RCP_OTAMSG_MAILBOX      EXE_MAILBOX_3_ID
#define RCP_TEST_MAILBOX        EXE_MAILBOX_4_ID

/** PA mode enumeration */
typedef enum
{
   HWD_PA_MODE_HIGH = 0,
   HWD_PA_MODE_MID  = 1,
   HWD_PA_MODE_LOW  = 2,
   HWD_PA_MODE_NUM
}HwdRfPaModeEnumT;


#ifdef PKT_SIM
/* temp solution for task ID */
typedef enum   /*_Task_ID_define*/
{
   EXE_HSC_ID_23     = 23,  /* DO defines. */
   EXE_SLC_ID_24     = 24,
   EXE_CLC_ID_25     = 25,
   EXE_RMC_ID_26     = 26,  /* DO defines */
   EXE_FCP_ID_27     = 27,
   EXE_RCP_ID_28     = 28,
   EXE_NUM_TASKS_end

}ExeTaskIdT_PktSim;
#endif

/* Enumeration for ACMAC */
typedef enum
{
   DEFAULT_ACMAC = 0,
   ENHANCED_ACMAC
} AcmacSubtypeE;

/* define the timer ID for timers in ACMAC */
typedef enum
{
  ACM_RTOS_TRANSMISSION_FAIL_TIMER,
  ACM_RTOS_AP_SUPERVISION_TIMER,
  ACM_RTOS_TRANSACTION_TIMER,
  ACM_RTOS_TRANSACTION_TIMER1,
  ACM_RTOS_TRANSACTION_TIMER2,
  ACM_RTOS_TRANSACTION_TIMER3,
  NUM_ACMTMRs
} AcmTimerIdT;

typedef enum
{
   ACM_CTL_INACTIVE_ST,
   ACM_CTL_IDLE_ST,
   ACM_CTL_PARMUPD_ST,
   ACM_CTL_ACTXING_ST
} AcmCtlStateE;

/* CTL SM events */
typedef enum {
   ACM_START_ACCESS_EV,
   ACM_ACCESS_PARMS_UPD_EV,
   ACM_OMP_SYS_PARMS_UPD_EV,
   ACM_ACTIVATE_EV,
   ACM_DEACTIVATE_EV,
   ACM_RUP_ACCESS_HO_EV,
   ACM_RMC_RF_READY_EV,
   ACM_RMC_RF_RELEASE_EV,
   ACM_ACK_EV,
   ACM_STOP_TRANS_EV
} AcmCtlEventE;

/* ACMAC RB state machine states and handler table */
typedef enum
{
   ACM_RB_INACTIVE_ST,
   ACM_RB_INTERSEQ_ST,
   ACM_RB_PROBING_ST,
   ACM_RB_INTERPROBE_ST
} AcmRbStateE;

/* RB SM events */
typedef enum {
   ACM_RB_ACTIVATE_EV,
   ACM_RB_DEACTIVATE_EV,
   ACM_RB_RF_RELEASE_EV,
   ACM_RB_RF_READY_EV,
   ACM_RB_HANDOFF_EV,
   ACM_RB_PREAMBLE_SIG_EV,
   ACM_RB_DATA_SIG_EV,
   ACM_RB_INTER_SEQ_BACKOFF_TIMEOUT_EV,
   ACM_RB_TEST_DELAY_TIMEOUT_EV,
   ACM_TXOFF_CB_EV
} AcmRbEventE;

typedef enum
{
    RTM_INACTIVE = 0,
    RTM_INACTIVE_NORF,
    RTM_SETUP,
    RTM_SETUP_NORF,
    RTM_OPEN,
    RTM_OPEN_NORF,
    RTM_SETUP_SILENT,
    RTM_SETUP_NORF_SILENT,
    RTM_OPEN_SILENT,
    RTM_OPEN_NORF_SILENT
} RtmRmmStateT;

typedef enum
{
    /* TX_SETTLE_DOWN_ST means TX is already at opened state or closed state
       and doesn't plan to open or close */
    TX_SETTLE_DOWN_ST = 0,
    TXPATH_WAIT_FOR_SET_ST,
    TXPATH_WAIT_FOR_RELEASE_ST,
    TX_INVALID_ST
} RtmTxStateT;

typedef enum
{
    RTM_TX_PATH_RELEASE_EV = 0,
    //RTM_TX_PATH_SET_EV,
    RTM_RUP_ACTIVATE_EV,
    RTM_RUP_DEACTIVATE_EV,
    //RTM_TXAGC_OFF_EV,
    RTM_RF_RELEASE_EV,
    RTM_RF_READY_EV,
    RTM_RTC_ACK_EV,
    RTM_SILENT_ENTRY_EV,
    RTM_SILENT_EXIT_EV,
    RTM_RCP_TASK_SIG_EV,
    RTM_INVALID_EV
} RtmEvent;

/*----------------------------------------------------------------------------
     OTA Message IDs, for RCP_OTAMSG_MAILBOX
----------------------------------------------------------------------------*/
typedef enum /*_Message_ID_define*/
{
   /* ACM_OTA_SIGNALING_MSG =  RCP_OTAMSG_MSGID_START, */
   ACM_ACK_MSG,                       /* 0x00 */
   ACM_ACCESS_PARMS_MSG,    /* 0x01 */
   ACM_SCP_CONFIG_REQ_MSG           = 0x50,
   ACM_SCP_CONFIG_RSP_MSG           = 0x51,
   ACM_ATTRIBUTE_UPDATE_REQUEST_MSG = 0x52,
   ACM_ATTRIBUTE_UPDATE_ACCEPT_MSG,
   ACM_ATTRIBUTE_UPDATE_REJECT_MSG,

   Acm_OTA_MSG_MSGID_LAST
} AcmOTAMsgIdT;


/*----------------------------------------------------------------------------
     RCP Test Message IDs, for RCP_TEST_MAILBOX
----------------------------------------------------------------------------*/
typedef enum /*_Message_ID_define*/
{
    RCP_TST_TX_CDMA_CTRL_MSG,

    /* RTM Test Msgs */
    RTM_TEST_CFG_MSG,
    RTM_TEST_MBPMACBITSOUTPUT_MSG,
    RTM_TEST_MFCGRANTCAL23_MSG,
    RTM_TEST_PARM_GET_MSG,
    RTM_TEST_PARM_SET_MSG,
    RTM_TEST_TXCHANSTAT_GET_MSG,

    /* ACM Test Msgs */
    ACM_TEST_CFG_MSG,
    ACM_TEST_ACACK_MSG,

    /* PHY CHAN Test Msgs */
    RCP_PHY_ACH_TEST_MSG,
    RCP_PHY_TCH0_TEST_MSG,
    RCP_PHY_TCH2_TEST_MSG,
    RCP_TXDMA_TEST_CFG_MSG,
    RCP_TXDMA_TEST_START_MSG,
    RCP_TXDMA_TEST_READ_MSG,
    RCP_PHY_TCH_TEST_DATA_WRITE_MSG,
    RCP_PACKET_PERF_STAT_RESET_MSG,
    RCP_RTM_QOS_TXMODE_SELECTION_MSG,

    /* CpBuf Test Msgs */
    SYS_CPBUF_TEST_GET_CMD_MSG,
    SYS_CPBUF_TEST_FREE_CMD_MSG,
    SYS_CPBUF_TEST_STATS_CMD_MSG,

    TAP_TEST_INIT_MSG,
    TAP_CONN_CLOSE_MSG,

    FTAP_TEST_INIT_MSG,
    FTAP_CONN_CLOSE_MSG,

    ETS_SET_STRAPP_MSG,
    ETS_MFPA_SET_SIMPLE_ATTR,
    ETS_MFPA_SET_FlowNNIdentification_Attr,
    ETS_MFPA_SET_FlowNNReservation_Attr,
    ETS_MFPA_SET_FlowNNTimers_Attr,
    ETS_MFPA_SET_SupportedHLProtocols_Attr,
    ETS_MFPA_SET_ATSupportedQoSProfiles_Attr,
    ETS_MFPA_READ_SUBSCRIB_QOS_PROFILE,
    ETS_MFPA_IPFlow_Request_Attr,
    ETS_MFPA_SET_CURLABEL_Attr,
    ETS_MFPA_Delete_Flow,
    ETS_MFPA_PPP_OPEN,
    ETS_MFPA_RLP_STAT_RESET_MSG,
    ETS_MFPA_RLP_STAT_PEEK_MSG,
    ETS_MFPA_SEND_DOS_MSG,

    ETS_DSAR_MSG_BLK_MSG,
    RCP_TEST_MSG_MSGID_LAST

} RcpTestMsgT;

/* DecodeMessageResult*/
typedef enum
{
   RCP_DECODE_MSG_OK,
   RCP_DECODE_MSG_DUP,  /*duplicate message, discard but not print error*/
   RCP_DECODE_MSG_ERROR
} RcpDecodeMsgResultE;

/*----------------------------------------------------------------------------
     define signals used by RCP task
----------------------------------------------------------------------------*/
#define RCP_CMD_MAILBOX_EVENT           EXE_MESSAGE_MBOX_1   /* EXE_MAILBOX_1 */
#define RCP_DATA_MAILBOX_EVENT          EXE_MESSAGE_MBOX_2   /* EXE_MAILBOX_2 */
#define RCP_OTAMSG_MAILBOX_EVENT        EXE_MESSAGE_MBOX_3   /* EXE_MAILBOX_3 */
#define RCP_TEST_MAILBOX_EVENT          EXE_MESSAGE_MBOX_4   /* EXE_MAILBOX_4 */

/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/
/** Define TX Calibration Type */
typedef enum
{
   RCP_SIG_TYPE_PILOT = 0,
   RCP_SIG_TYPE_ST2,
   RCP_SIG_TYPE_PHYUT
}RcpTstSigTypeT;

/** define the command action enumeration */
typedef enum
{
    RCP_ACTION_OFF,
    RCP_ACTION_ON
} RcpTstActionT;

/* RCP_ETS_TX_AVAILABLE_PWR_TEST_MODE_MSG*/
typedef enum
{
   TX_AVAILABLE_PWR_NORMAL_MODE = 0,
   TX_AVAILABLE_PWR_NO_ACK_MODE,
   TX_AVAILABLE_PWR_NO_ACK_DSC_MODE
} RcpTxAvailPwrTestModeT;

/* RCP_ETS_SET_HW_TRIGGER_MSG*/
typedef PACKED_PREFIX struct
{
   kal_uint8    Trigger;  /* Disable, Access, Traffic*/
   kal_uint8    FrameDelay;
   kal_uint16   LongCodeMIL0;  /* non-zero is for long code mask override*/
   kal_uint16   LongCodeMIL1;
   kal_uint16   LongCodeMIH0;
} PACKED_POSTFIX  RcpEtsSetHwTriggerMsgT;

/* HW trigger type */
typedef enum
{
   HW_TRIGGER_DISABLE=0,
   HW_TRIGGER_ACCESS,
   HW_TRIGGER_TRAFFIC
} RcpHwTriggerT;

/* array size for long code mask */
#define RCP_LONG_CODE_MASK_SIZE     6

typedef PACKED_PREFIX struct
{
    kal_uint16 frameOffset;
    kal_uint16 prePilotScale;         /* 9,3,u */
    kal_uint16 pilotScale;              /* 9,3,u */
    kal_uint16 rriDataAck0;           /* Access Rate 1:9.6k, 2:19.2k, 3:38.4k */
    kal_uint16 dataScale0Ack;       /* 11,6,u */
    kal_uint16 sDScale1;               /* 4,3,t */
    kal_uint16 sDScale2;               /* 4,3,t */
    kal_uint32 frameData[32];       /* 2 frame data 512 bits */
    kal_uint16 bbCaptureFrame;
    kal_uint16 testCase;
} PACKED_POSTFIX RcpPhyAchTestMsgT;

typedef PACKED_PREFIX struct
{
    kal_uint16 pilotScale;              /* 9,3,u */
    kal_uint16 dRCGating;
    kal_uint16 dRCLen;
    kal_uint16 dRCScale;
    kal_uint16 ackSUPScale;
    kal_uint16 ackMUPScale;
    kal_uint16 rriDataAck1[4];           /* Access Rate 1:9.6k, 2:19.2k, 3:38.4k */
    kal_uint16 dataScale0Ack[4];       /* 11,6,u per frame */
    kal_uint16 sDScale1[4];               /* 4,3,t */
    kal_uint16 sDScale2[4];               /* 4,3,t */
    kal_uint16 dRCCover;
    kal_uint16 dRCValue;
    kal_uint16 rRIScaleAck;
    kal_uint16 bbCaptureFrame;
    kal_uint16 testCase;
} PACKED_POSTFIX RcpPhyTch01TestMsgT;

typedef PACKED_PREFIX struct
{
    kal_uint16 pilotScale;              /* 9,3,u */
    kal_uint16 dRCGating;
    kal_uint16 dRCLen;
    kal_uint16 dRCScale;
    kal_uint16 ackSUPScale;
    kal_uint16 ackMUPScale;
    kal_uint16 rriDataAck2[12];
    kal_uint16 rriDataNak2[12];
    kal_uint16 dataScale0Ack[12];       /* 11,6,u per frame */
    kal_uint16 dataScale0Nak[12];       /* 11,6,u per frame */
    kal_uint16 dataScale1Ack[12];       /* 11,6,u per frame */
    kal_uint16 dataScale1Nak[12];       /* 11,6,u per frame */
    kal_uint16 dataScale2Ack[12];       /* 11,6,u per frame */
    kal_uint16 dataScale2Nak[12];       /* 11,6,u per frame */
    kal_uint16 dataScale3Ack[12];       /* 11,6,u per frame */
    kal_uint16 dataScale3Nak[12];       /* 11,6,u per frame */
    kal_uint16 dataScaleAck[12];       /* 11,6,u per frame */
    kal_uint16 revAckData[12];
    kal_uint16 twoBitAckNak[12];
    kal_uint16 dRCLenBoost[12];
    kal_uint16 dSCLenBoost[12];
    kal_uint16 fwdAckData[48];
    kal_uint16 rRIScaleAck;
    kal_uint16 rRIScaleNak;
    kal_uint16 dSCScale;
    kal_uint16 dRCScaleBoost;
    kal_uint16 dSCScaleBoost;
    kal_uint16 auxPilotMinPayload;
    kal_uint16 auxPilotScale;
    kal_uint16 bbCaptureFrame;
    kal_uint16 testCase;
} PACKED_POSTFIX RcpPhyTch2TestMsgT;

typedef PACKED_PREFIX struct
{
    kal_uint32 offsetAddr;
    kal_uint32 dataLen;
    kal_uint32 testData[128];
} PACKED_POSTFIX RcpPhyTch01TestDataWriteMsgT;

typedef PACKED_PREFIX struct
{
    kal_uint32  lldAddress;
    kal_uint32  srcAddress;
    kal_uint32  destAddress;
    kal_uint32  nextLldAddress;
    kal_uint8   srcData[32];
    kal_uint16  dataLen;
    kal_uint16  ackNak;
    kal_uint16  firstLld;
    kal_uint16  width;
} PACKED_POSTFIX RcpTxDMATestMsgT;

typedef PACKED_PREFIX struct
{
    kal_bool   ackNak;
} PACKED_POSTFIX RcpTxDMATestStartMsgT;

typedef PACKED_PREFIX struct
{
   ExeRspMsgT   RspInfo;
   kal_uint16   NumWords;
   kal_uint32   Address;
} PACKED_POSTFIX  RcpTxDmaReadMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint8            Data[1];
} PACKED_POSTFIX  RcpTxDmaReadRspMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint16   slot_no;

   kal_int16    ksd_scale_1st;
   kal_int16    ksd_scale_2nd;
   kal_int16    ksd_log2_1st;
   kal_int16    ksd_log2_2nd;
   kal_int16    ksd_index_1st;
   kal_int16    ksd_index_2nd;
} PACKED_POSTFIX  RcpTxKsDataT;

typedef PACKED_PREFIX struct
{
  kal_uint32    TransATI;
  kal_uint8     TransATIType;
} PACKED_POSTFIX AcmAmpATIListMsgT;

typedef PACKED_PREFIX struct
{
   kal_bool     bUpdated;
   kal_uint16   AccessSignature;
   kal_uint8    ColorCode;
   kal_uint32   SectorId;
   kal_uint8    ReverseLinkSilencePeriod;
   kal_uint8    ReverseLinkSilenceDuration;
} PACKED_POSTFIX AcmOmpUpdatedMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint8  reason;     /* 0--normal; 1--after preempt; */
} PACKED_POSTFIX AcmRupActivateMsgT;

typedef PACKED_PREFIX struct {
  kal_uint8   action;    /* 0--reset msg queue; 1--stop current msg; 2--*/
} PACKED_POSTFIX AcmProtStopAccessMsgT;


/* ETS ACM Test Cmd */
typedef PACKED_PREFIX struct
{
   kal_uint8    AcmTestMode;
   kal_uint8    AccessDataRate;
   kal_uint8    AccessCycleDuration;
   kal_uint8    PreambleLength;
   kal_uint8    ProbeSequenceMax;
   kal_uint8    ProbeNumStep;
   kal_uint8    ColorCode;
   kal_uint32   SectorId;
   kal_uint8    RpcTestMode;
} PACKED_POSTFIX AcmTestCfgMsgT;

typedef PACKED_PREFIX struct
{
   kal_bool  TxStatus;

} PACKED_POSTFIX RtmDrcTxControlMsgT;

/* Tx Rate Test Message */
typedef struct
{
    /* Turn on or off action*/
    RcpTstActionT       Action;

    /* 0: reverse EVDO pilot only for EVDO
       1: reverse EVDO subtype2 for EVDO */
    RcpTstSigTypeT      DoSigType;
    kal_uint16          EvChannelType;
    kal_uint16          EvProtocolSubtype;
    kal_uint16          EvAuxPilotMiniPayload;
    kal_uint16          EvDrcGating;
    kal_uint16          EvDrcBoostLength;
    kal_uint16          EvDscBoostLength;
    kal_uint16          EvDrcLength;
    kal_uint16          EvFrameOffset;
    kal_uint16          EvDataRate;
    kal_uint16          EvDRCCover;
    kal_uint16          EvDRCCover1;
    kal_uint16          EvDRCCover2;
    kal_uint16          EvDRCValue;
    kal_uint16          EvDRCValue1;
    kal_uint16          EvDSCValue;
    kal_uint16          EvDSCValue1;
    kal_uint16          EvDSCValue2;
    kal_uint16          EvAckEnalble;
    kal_uint16          EvAckUserType;
    kal_uint16          EvAckBits;
    kal_uint16          EvAckBits1;
    kal_uint16          EvAckSuScale;
    kal_uint16          EvAckMuScale;
    kal_uint16          EvPreSlot;
    kal_uint16          EvCapFrame;
} RcpTstTxCdmaCtrlMsgT;

/** define Tx CDMA channel contorl message*/
typedef struct
{
    LOCAL_PARA_HDR
    RcpTstTxCdmaCtrlMsgT    msg;
} rcp_tst_tx_cdma_ctrl_msg_struct;

typedef struct
{
    /* Request execute status */
    kal_uint32              Status;
    kal_int16               ReqPwr;    /* Q6 dBm */
    kal_uint16              Reserved;
} RcpTstTxAgcCtrlRspT;

/*define MSG_ID_ELT_ACC_RTB_RSP_MSG */
typedef struct
{
    kal_uint16 TxsthAcStatus;  /*0 txsth_status_Idle;1 txsth_status_access; 2 txsth_status_traffic ;3 txsth_status_FREEZE*/
    kal_uint16 TxsthEventType; /*0 txsth_unfreeze; 1 txsth_freeze*/
    kal_uint16 RaNum;          /* random access numbers*/
} Evl1TxsthAccRtbPreemptionRspMsgT;

/** define Tx CDMA channel contorl message*/
/** MSG_ID_RCP_TST_TX_AGC_CTRL_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RcpTstTxAgcCtrlCmdT Msg;
} rcp_tst_tx_agc_ctrl_msg_struct;

/** define Random access preemption contorl message*/
/** MSG_ID_RCP_ACC_RTB_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    RcpTxSthRtbHscPreemptCtrlCmdT  AccPreemptMsg;
} rcp_acc_rtb_msg_struct;

/*----------------------------------------------------------------------------
 Global typedefs
----------------------------------------------------------------------------*/

/* RCP Mode */
typedef enum
{
   RCP_INACTIVE=0,
   RCP_ACCESS,
   RCP_TRAFFIC,
   RCP_TX_CHAN_SWEEP
} RcpModeT;


/* RCP Component Protocol Types */
typedef enum
{
   RCP_ACM=2,
   RCP_RTM=4
} RcpProtocolTypeT;

typedef enum
{
 AccessChannel,
 TrafficChannel,
 AccessTrafficChannel
}RevChannelTypeT;

typedef  struct {
  kal_uint8     pktpriority;
  kal_uint32    timestamp;
} BestPktInfoT;


/* Grant Allocation */
/* The Grant Allocation consists of the flows which are allocated for this grant,
   for each subframe (phy2) or frame (phy0/1).
   Each flow's macFlowId and the grantSize in bytes are calculated by the reverse
   MAC and given to PCP and higher layer applications to fulfill the grant.
   Note that each grant is identified by a revMacId when the grant is allocated. */

typedef struct
{
   kal_uint8  macFlowID;
   kal_uint16 grantByteSize;
} GrantAllocationT;

typedef struct
{
   kal_uint8        NumFlowsRcvingThisGrant;
   kal_uint8        revMacId;
   GrantAllocationT Grants[ MAX_MAC_FLOW_NUM];
} PcpAcmRtmGrantAllocationT;



/* Datapkt */
/* This is a data pkt which contains a pointer to a chunk of cpbuffer.
   The offset and len specifies the location of this data pkt */
typedef struct datapkt
{
#ifdef PKT_SIM
   BestPktInfoT     pktinfo;  // SS: Added this here. It will save lot of test-code
   kal_uint8        pktSrc;          // SS: helps debugging for-B pkts. Identifies, the App-Q
                          // from which the pkt was assembled from.
#endif
   kal_uint16       len;/* The length of this datapkt.  */
   kal_uint16       offset;/* The starting location for the datapkt.  */
   CpBufferT        *buffer;/* The buffer which makes up this datapkt. This is a ptr */
                                /* to a single cpbuffer in the cpbuffer pool.  */
#if defined (RCP_RI_HRT_DEV)
   CpBufferT        headBuffer;
   kal_uint32       headData[4]; /* reserved to header buffer */
#endif
   struct datapkt   *next;
} DatapktGT;


/* Datapktlist */
/* A List descriptor which keeps track of the DataPkt queue params */
typedef struct
{
   kal_uint8        count;
   kal_uint8        hdrcount;           /* The number of hdr pkts */
   kal_uint8        connLayerFormat;    /* Format A/B   */
   kal_uint32       totalLen;           /* Total length of all the Datapkts in this linked-list*/
   DatapktGT        *head;
   DatapktGT        *tail;
   DatapktGT        *lastHdr;
} DatapktlistGT;



/* RevMacPkt */
/* The reverse MAC Pkt that is sent every frame/subframe, consisting of a DatapktList
   of security/conn layer packets */
typedef struct revMacPktGT
{
   DatapktlistGT        pktList;        /* linked-list of machdr, sechdr, connlayer pkts, sectrailer, mactrailer */
   kal_uint8            revMacPktId;    /* used for correlating the revMacPkt with the app pkt sent */

   kal_uint8            revRate;        /* For prog RRIData: RTM0/1=rateIndex */
   kal_uint8            revPktSz;       /* For prog RRIData: RTM2/3=pkSzIndex */
   kal_uint8            macLayerFormat; /* For prog MAC trailer */
                                    /* RTM3: This will be the Transmission Mode:
                                       1-LowLatency, 0-HighCapacity. */

   kal_uint16           dataGainScale;  /* RTM0/1=(dataOffNom+dataOffxx) -> from SCM cfg data *//* store as Q7 */
                                    /* RTM2/3=(T2Pxxx): MFC will prov this each time */ /* store as Q5 */

   /* Note: RTM2/3=>The MFC will recalc this for old/new pkts based on T2P, since it will be diff for each subpkt */
   kal_uint16           dataGainScale0; /* RTM3 only */
   kal_uint16           dataGainScale1; /* RTM3 only */
   kal_uint16           dataGainScale2; /* RTM3 only */
   kal_uint16           dataGainScale3; /* RTM3 only */
   kal_uint16           rriGainScale;   /* RTM3 only: RRI gain assoc with the revRate */ /* store as Q6 */
                                    /* MFC will provide this for old/new pkt, since it dep on subpktN */

   struct revMacPktGT  *next;
} RevMacPktGT;

typedef struct RevMacPktListGT
{
   RevMacPktGT  *head;
   RevMacPktGT  *tail;
   kal_uint32   count;

}RevMacPktListGT;


/* 1X Slotted Overlap */
typedef struct
{
   kal_bool         valid;
   FrameRecT        startFrame1x;  /* 1X frame in which 1X slotted wakes up */ /* TODO: need to convert these to the DO times */
   kal_uint8        startSlot1x;   /* 1X slot in which 1X slotted wakes up */
   FrameRecT        startFrame;    /* DO frame in which 1X slotted overlap start slot overlaps */
   kal_uint8        startSubFrame; /* DO subframe in which 1X slotted overlap start slot overlaps. from 0-3 */
} Rcp1XSlotOverlapT;


/* Sent by the SCP ==> RCP, after session negotiation. */
/* It is going to be populated with the Phy-SubType information after it is negotiated. */
typedef struct
{
  kal_uint8 phySubType;

} RcpSubTypeInfoT;



/*----------------*/
/* TxH Structures */
/*----------------*/
/* Define RCP Test Mode Flags */
typedef struct
{
   kal_bool         FixRatiInd;

   /* Response info*/
   ExeRspMsgT       RspInfo;
} RcpTestModesT;

/* Generic Tx AGC Data structure used for tracking AGC variables and providing periodic
** ETS Tx AGC measurement reports - can be used regardless of active air interface */
typedef struct
{

   /* Close Loop Tx Power adjustments */
   kal_int16  CloseLoopAdj;         /** Bryan_Keep */

   /* Tx Power Adjustments */
   kal_int16  UnadjPwr;             /* Unadjusted Tx antenna power, in dBm */
   kal_int16  TotalAdj;             /* Total Tx AGC adjustments, in dBm */

   /* Tx Gain Scaling values */

   /* Max Allowed Tx Power */
   kal_int16  TotalMaxTxPwr;        /* Adjusted Max Tx antenna power allowed, in dBm */

   /* External RF settings */
   kal_uint16 TxGainStateSlot;      /* Current Tx AGC gain state: Bryan_Keep */
} RcpTxAgcDataT;

/* Defince RCP Boundary load identifiers */
typedef enum
{
   TX_IMMEDIATE_LOAD=0,        /* Load/latch Tx values immediately */
   TX_SLOT_BOUNDARY_LOAD,      /* Load/latch Tx values on DO Slot boundary */
   TX_HALFSLOT_BOUNDARY_LOAD   /* Load/latch Tx values on DO Half-slot boundary */

} RcpTxLoadBoundaryT;

/* Structure specific to RCP RI */
#if defined (RCP_RI_HRT_DEV)
typedef struct rcpRiTimeCheckNode
{
    kal_uint64                  destTime;
    kal_uint32                  checkerId;/* signalId or timerId */
    void*                       paramPtr;
    kal_uint32                  delay;
    kal_uint32                  period;
    kal_timer_func_ptr          Routine;
    struct rcpRiTimeCheckNode   *next;
    kal_bool                    bRescheduled;
} RcpRiTimeCheckNodeT;

typedef struct
{
    RcpRiTimeCheckNodeT *head;
    RcpRiTimeCheckNodeT *tail;
    kal_uint32          count;
} RcpRiTimeCheckListT;
#endif

/* DO RCP protocol subtype identifiers */
typedef enum
{
   RCP_PROTOCOL_SUBTYPE_0_1=0,
   RCP_PROTOCOL_SUBTYPE_2

} RcpProtocolSubtypeT;

/* DO-specifc Reverse Channel identifiers */
typedef enum
{
   RCP_REV_PILOT_CHANNEL=0,
   RCP_REV_AUX_PILOT_CHANNEL,
   RCP_REV_RRI_CHANNEL,
   RCP_REV_DSC_CHANNEL,
   RCP_REV_DRC_CHANNEL,
   RCP_REV_ACK_CHANNEL,
   RCP_REV_DATA_CHANNEL

} RcpRevChanT;

/* Identifier use to indicate channel scale units (i.e., in dB or in linear gain) */
typedef enum
{
   RCP_CHAN_SCALE_TYPE_DB=0,
   RCP_CHAN_SCALE_TYPE_LINEAR

} RcpChanScaleTypeT;

/* DO-specifc Reverse Channel Scales used to program RCP/Transmitter hardware */
typedef enum
{
   RCP_REV_PILOT_SCALE=0,
   RCP_REV_PREAMBLE_SCALE,  /* Pilot Channel scale during preample portion of Access Channel */
   RCP_REV_AUX_PILOT_ACK_SCALE,
   RCP_REV_AUX_PILOT_NAK_SCALE,
   RCP_REV_RRI_ACK_SCALE,   /* RRI Channel when transmitting in response to an ACK */
   RCP_REV_RRI_NAK_SCALE,   /* RRI Channel when transmitting in response to a NAK */
   RCP_REV_ACK_SUP_SCALE,   /* ACK Channel when acknowledging a single-user packet */
   RCP_REV_ACK_MUP_SCALE,   /* ACK Channel when acknowledging a multi-user packet */
   RCP_REV_DSC_SCALE,
   RCP_REV_DSC_BOOST_SCALE,
   RCP_REV_DRC_SCALE,
   RCP_REV_DRC_BOOST_SCALE,
   RCP_REV_DATA_ACK_SCALE,  /* Data Channel scale in reponse to an ACK dependant on packet sizes (see DO transmitter spec) */
   RCP_REV_DATA_ACK_SCALE0, /* Data Channel scale in reponse to an ACK dependant on packet sizes (see DO transmitter spec) */
   RCP_REV_DATA_ACK_SCALE1, /* Data Channel scale in reponse to an ACK dependant on packet sizes (see DO transmitter spec) */
   RCP_REV_DATA_ACK_SCALE2, /* Data Channel scale in reponse to an ACK dependant on packet sizes (see DO transmitter spec) */
   RCP_REV_DATA_ACK_SCALE3, /* Data Channel scale in reponse to an ACK dependant on packet sizes (see DO transmitter spec) */
   RCP_REV_DATA_NAK_SCALE,  /* Data Channel scale in reponse to an NAK dependant on packet sizes (see DO transmitter spec) */
   RCP_REV_DATA_NAK_SCALE0, /* Data Channel scale in reponse to an NAK dependant on packet sizes (see DO transmitter spec) */
   RCP_REV_DATA_NAK_SCALE1, /* Data Channel scale in reponse to an NAK dependant on packet sizes (see DO transmitter spec) */
   RCP_REV_DATA_NAK_SCALE2, /* Data Channel scale in reponse to an NAK dependant on packet sizes (see DO transmitter spec) */
   RCP_REV_DATA_NAK_SCALE3, /* Data Channel scale in reponse to an NAK dependant on packet sizes (see DO transmitter spec) */

   RCP_REV_NUM_SCALE_REGS   /* Number of hardware RCP scale registers */

} RcpRevChanScaleT;

/* Define RCP Gain Scaling tracking parameters */
typedef struct
{
   kal_int16  ScaleDb;         /* Reverse Channel Scaling Adjustment, in dB, Q=7 */
   kal_uint16 ScaleLinear;     /* Reverse Channel Scaling ADjustment, in linear notation, Q=7 */
   kal_uint8  RegQValue;       /* Hardware register Q-value (is not uniform across the hw interface) */
} RcpRevChanScaleParamsT;

typedef enum
{
   RCP_FIRST_DELAY_ADDR = 0,
   RCP_SECOND_DELAY_ADDR,

   RCP_MAX_DELAY_ADDR

} RcpDelayAddrT;

/* for delay load mode selection */
typedef enum
{
   HWD_DELAY_TX_DAC=0,
   HWD_DELAY_TX_ON0,
   HWD_DELAY_TX_ON1,
   HWD_DELAY_TX_ON2,
   HWD_DELAY_TX_ON3,
   HWD_DELAY_TX_ON4,
   HWD_DELAY_TX_ON5,
   HWD_DELAY_TX_ON6,
   HWD_DELAY_TX_ON7,
   HWD_DELAY_TX_ON8,
   HWD_DELAY_TX_MAX
} HwdDelayTxOnTypeT;

typedef enum
{
   HWD_DELAY_MASK_TX_ON0=0,
   HWD_DELAY_MASK_TX_ON1,
   HWD_DELAY_MASK_TX_ON2,
   HWD_DELAY_MASK_TX_ON3,
   HWD_DELAY_MASK_TX_ON4,
   HWD_DELAY_MASK_TX_ON5,
   HWD_DELAY_MASK_TX_ON6,
   HWD_DELAY_MASK_TX_ON7,
   HWD_DELAY_MASK_TX_ON8,
   HWD_DELAY_MASK_TX_DAC,
   HWD_DELAY_MASK_MAX
} HwdDelayModeTxOnTypeT;

typedef enum
{
   HWD_DELAY_PDM0 = 0,
   HWD_DELAY_PDM1 = 1,
   HWD_DELAY_PDM2 = 2,
   HWD_DELAY_PDM3 = 3,
   HWD_DELAY_PDM4 = 4,
   HWD_DELAY_PDM5 = 5,
   HWD_DELAY_PDM6 = 6
}HwdDelayPdmT;

/* Define Tx AGC Closed-Loop Step Size enum */
typedef enum
{
   RCP_TXAGC_STEP_SIZE_HALF_DB = 0,
   RCP_TXAGC_STEP_SIZE_ONE_DB,
   RCP_TXAGC_STEP_SIZE_QUARTER_DB

} RcpTxAgcClosedLoopStepSizeT;

/*---------------*/
/* ETS Test Cmds */
/*---------------*/
typedef PACKED_PREFIX struct
{
   kal_uint8         type;         /* For CpBufGet, CpBufStats. The pool partition type */
} PACKED_POSTFIX CpBufTestCmdMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint8         freeAllFlag;  /* For freeing all the cpbufs alloc earlier */
   kal_uint32        freeIndex;    /* For CpBufFree, index of the cpbuf alloc previously */
} PACKED_POSTFIX CpBufTestFreeCmdMsgT;


/*---------------*/
/* DSAR, PCPR Structures */
/*---------------*/
typedef PACKED_PREFIX struct {
    kal_uint8 msgSeq;       /* sequence number of msg this Ack is for */
} PACKED_POSTFIX  DsarAckMsgInfoT;

typedef PACKED_PREFIX struct {
    kal_uint8 msgSeq;       /* sequence number of msg requiring Ack */
} PACKED_POSTFIX  DsarAckReqMsgInfoT;

typedef DsarAckMsgInfoT DsarResetMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint8  MacFlowId;
   kal_uint8  SubStreamNum;
} PACKED_POSTFIX  MacFlow2StrFlowInfoT;

typedef PACKED_PREFIX struct
{
  MacFlow2StrFlowInfoT     Info[MAX_RLP_FLOW_SUPPORTED];
  kal_uint8                    Num;
} PACKED_POSTFIX MacFlow2StrFlowMappingT;


/*------------------------*/
/* PAR message structure definitions*/
/*------------------------*/
/* structure for message with HLP  */

typedef PACKED_PREFIX struct
{
   kal_uint8  nAppType;
   kal_uint8  nRlpFlowId;
   kal_bool   bBusy;
} PACKED_POSTFIX  HlpParBufStatMsg;

typedef  struct {
   CpBufferT   *dataPtr;
   kal_uint16   offset;
   kal_uint16   dataLen;
   kal_uint16 tcpTag;
   kal_uint32 tcpPort;
   kal_uint32 srcIpAddr;
   kal_uint32 dstIpAddr;
} ParHlpRevDataPktT;

typedef  struct
{
   kal_uint8       nAppType;
   kal_uint8       nRLPFlowId;
   kal_uint8       numHlpFrames;
   ParHlpRevDataPktT   hlpFrames[MAX_RLP_HLP_PKT_NUM];
} ParHlpDataTxMsgT;/*PAR_HLP_DATA_TX_MSG*/

typedef PACKED_PREFIX struct
{
   kal_uint8 nAppType;
   kal_uint8 nRlpFlowId;
   kal_uint8 Route; /*0-Route A, 1-Route B*/
   kal_uint8 nRevLable;
   kal_bool  bAckRequired;
   kal_uint8 Reset;
   kal_uint16     dataLen;
   kal_uint16     Offset;
   CpBufferT   *dataPtr;
   kal_uint8  nPriority;
} PACKED_POSTFIX  ParHlpDOSTxMsgT;/*PAR_HLP_DOS_TX_MSG*/

/*------------------------*/
/* structure for Flow Control Protocol */
/*------------------------*/

typedef enum
{
   PAR_FLOWCTRL_CLOSE_ST,
   PAR_FLOWCTRL_OPEN_ST,
   PAR_FLOW_CTL_MAX
} ParFlowCtrlStateT;

typedef enum
{
   PAR_AccessStream,
   PAR_ServiceStream,
   PAR_STREAM_MAX
} PARAppStreamT;

typedef PACKED_PREFIX struct
{
   PARAppStreamT     StreamType;
   ParFlowCtrlStateT Status;
} PACKED_POSTFIX  ParPafFlowCtlStatMsgT;
typedef PACKED_PREFIX struct
{
   kal_uint8 AppType;
   kal_uint16 ProtocolType;
   kal_uint8 RlpFlow;
} PACKED_POSTFIX ParPafRlpResetReqMsgT;

#ifdef CBP7_EHRPD
typedef enum {
   RSP_AOPENBSETTING_ST,
   RSP_AOPENBRISING_ST,
   RSP_ASETTINGBOPEN_ST,
   RSP_ARISINGBOPEN_ST,
   RSP_MAX_ST
}ParRspStateT;

typedef enum {
   OCTET_STREAM,
   PACKET_STREAM
} RlpStreamPduT;

typedef enum {
   OCTET_DATAUNIT,
   PACKET_DATAUNIT
} RlpDataUnitT;

typedef enum {
   RSP_ROUTE_A,
   RSP_ROUTE_B,
   RSP_MAX_RT
} ParRspRouteT;


typedef struct {
   kal_uint8 FlowProtocolPDU;
   kal_uint8 RouteProtocolPDU;
   kal_uint8 FlowDataUnit;
   kal_uint8 FlowProtocolID;
   RevRohcProtocolParmsT FlowProtocolParms;
   kal_uint8 RouteProtocolID;
   RevRohcProtocolParmsT RouteProtocolParms;
} ParFlowInstanceT;

typedef struct {
   PARAppStreamT     StreamType;
   ParRspStateT            stRsp;
} ParPafRspStatusMsgT;
#endif

typedef PACKED_PREFIX struct
{
  kal_uint16 FwdSysTime;   /* in uint of 16 slot! */
  kal_uint8 TCAMsgSeq;
  kal_uint8 DRCCover;
  kal_uint8 FwdPhysSlots;
  kal_uint8 FwdMACPkts;
  kal_uint8 FwdPayloadSizeIndex; /*used for fetap*/
  kal_uint16 FwdSeq;
} PACKED_POSTFIX FtaprFcpTestPktMsgT;

typedef PACKED_PREFIX struct
{
  kal_bool bActive;
} PACKED_POSTFIX FtaprLoopBackStatusMsgT;


typedef PACKED_PREFIX struct
{
  kal_uint16 AppType[4];
} PACKED_POSTFIX EtsAppCfgT;


typedef PACKED_PREFIX struct
{
   ExeRspMsgT      RspInfo;
} PACKED_POSTFIX  ParRlpStatPeekMsgT;

typedef struct
{
  CpBufferT* pBuf;
}ParSnKKQosReqMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint8  Link;/*0-Rev, 1-Fwd*/
  kal_uint8  Label;
} PACKED_POSTFIX ReservationInfoT;

typedef PACKED_PREFIX struct
{
  kal_bool    bOn;
  kal_uint8   Count;
  ReservationInfoT LabelInfo[8];
} PACKED_POSTFIX ParRlpReservationOnOffMsgT;

typedef struct
{
  kal_int32 EVDORLPStatsFlowId;
  kal_uint32 EVDORLPStatsResetTime;
  kal_int32 EVDORLPStatsNaksReceived;
  kal_int32 EVDORLPStatsReXmitsNotFound;
  kal_int64 EVDORLPStatsANNakBytesRequested;
  kal_int64 EVDORLPStatsRxDuplicateBytes;
  kal_int64 EVDORLPStatsRxReXmitsBytes;
  kal_int64 EVDORLPStatsRxNewDataBytes;
  kal_int64 EVDORLPStatsRxTotalBytes;
  kal_int32 EVDORLPStatsNaksSent;
  kal_int64 EVDORLPStatsATNakBytesRequested;
  kal_int64 EVDORLPStatsTxReXmitsBytes;
  kal_int64 EVDORLPStatsTxNewDataBytes;
  kal_int64 EVDORLPStatsTxTotalBytes;
  kal_int32 EVDORLPStatsNakTimesOuts;
  kal_int32 EVDORLPStatsResetCount;
  kal_int32 EVDORLPStatsATResetRequestCount;
  kal_int32 EVDORLPStatsANResetAckCount;
  kal_int32 EVDORLPStatsANResetRequestCount;
} EVDORLPStatsMeasT;

typedef struct
{
  EVDORLPStatsMeasT rlpMeas;
}  EVDORLPStatsEventT;

typedef PACKED_PREFIX struct
{
   kal_uint8 protocolType;
   kal_uint8 msgId;
   kal_bool bNeedTxStatus;
} PACKED_POSTFIX DsarDelMsgCmdMsgT;

typedef PACKED_PREFIX struct
{
   /* Change for CR ALPS02665609,  if  bEmptyConfigReqsOnly is TRUE, only delete pending un-acked ConfigurationRequests.*/
   kal_bool bEmptyConfigReqsOnly;
} PACKED_POSTFIX DsarAmpResetMsgCmdMsgT;

typedef PACKED_PREFIX struct {
   kal_uint16   Stream0Configuration;
   kal_uint16   Stream1Configuration;
   kal_uint16   Stream2Configuration;
   kal_uint16   Stream3Configuration;
} PACKED_POSTFIX  DoStreamConfigurationSetMsgT;

typedef PACKED_PREFIX struct
{
   kal_bool enable;
} PACKED_POSTFIX LUPUnsolicitedCfgMsgT;


/*  Packet performance measurement */
typedef PACKED_PREFIX struct
{
  kal_uint32    TotalRevPhySubFrame;      /* Count how many subframes have been used.*/
  kal_uint32    TotalAckBits;                     /* in unit of 128 bit*/
  kal_uint32    NakSubPackets;                 /* missing sub-packet on AN side*/
  kal_uint32    NakPackets;                      /* missing packet on AN side*/
  kal_uint32    TotalTxSubPacket;             /* Number of sub-packet sent by AT */
  kal_uint32    TotalTxPacket;                   /* Number of packet sent by AT */
  kal_uint32    RevSubPER;                      /* NakSubPackets/TotalTxPacket*/
  kal_uint32    RevPER;                           /* NakPackets/TotalTxPacket*/
  kal_uint32    PHY_ThrPut;                      /* TotalAckBits/TotalRevPhySubFrame*/
  kal_uint32    AT_ThrPut;                        /* TotalBits/time*/
} PACKED_POSTFIX RcpPacketPerfStatT;

extern RcpPacketPerfStatT RcpPacketPerfStat;
extern void RcpPerfDataReset(void);

typedef PACKED_PREFIX struct
{
   kal_bool Mode;
} PACKED_POSTFIX RcpRtmQosTxModeSelectionAlgoMsgT;

/*----------------------------------------------------------------------------
 define for RCP_ADJ_UPDATE_MSG
----------------------------------------------------------------------------*/
typedef struct
{
   kal_int16 TxMaxPwr;
   kal_int16 TxMinPwr;
   void *TxAdjPtr;
}RcpAdjUpdateT;



typedef PACKED_PREFIX struct
{
   kal_uint16  PilotPN;
   kal_uint16  PcgId;
   kal_uint16 ServCell;
   kal_uint16  MacId;
   kal_uint16  DRCCover;
   kal_uint16  DSC;
   kal_uint16 PwrEst;
} PACKED_POSTFIX  SecInfoT;


typedef PACKED_PREFIX struct
{
   kal_bool  MacCfgChangeFlag;
   kal_uint16  ServingPN;
   kal_uint8  NumPcg;
   kal_uint8  NumSec;
   kal_uint8  PcgRenumId[RCP_MAX_NUM_PCGS];
   kal_uint8  SecRenumId[RCP_MAX_NUM_PILOTS];
   SecInfoT SectorInfo[RCP_MAX_NUM_PILOTS];
} PACKED_POSTFIX  RcpUpdateSectorInfoMsg;


typedef PACKED_PREFIX struct
{
    kal_uint8  DRCLockValid;       /* 0->NotVal, 1->Valid, Valid occurs every */
    kal_uint8 DRCLockPcgFinal[RCP_MAX_NUM_PCGS];
} PACKED_POSTFIX  RcpUpdateC2IMsg;

/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/
extern RcpModeT  RcpMode;

/* RCP RF Control AGC Management Boolean flags */
/* Trigger Tx_Ons in TxAGC after 4 slots delay - for tx power gating at the start time*/
extern kal_bool RcpTxAgcEnabled;

/* delay mode register control bit position - RCP local variable */
extern kal_uint8  RcpTxDlyModeBitMaskPA, RcpTxDlyModeBitMaskGATE, RcpTxDlyModeBitMaskPDM;
extern kal_uint8  RcpTxDlyModeBitMaskPA2;

extern kal_uint32 RcpPA1DlyMaskRegAddress;
extern kal_uint32 RcpPA2DlyMaskRegAddress;
extern kal_uint32 RcpPA1DlyMaskReadRegAddress;
extern kal_uint32 RcpPA2DlyMaskReadRegAddress;

/* delay mask register control bit position - RCP local variable */
extern kal_uint8 RcpTxDlyMaskBitMaskPA, RcpTxDlyMaskBitMaskGATE;
extern kal_uint8 RcpTxDlyMaskBitMaskPA2;

extern HwdRfBandT RmcIsrCurrentMainRfBand;
extern HwdRfBandT RmcIsrCurrentDivRfBand;

extern kal_bool RcpHwdRfSpiDlyEnable;

extern RtmRmmStateT RtmState;

extern kal_uint8 *RcpTxDataAckPtr;
extern kal_uint8 *RcpTxDataNakPtr[RCP_TX_DATA_NAK_ARRAY_SIZE];

/*----------------------------------------------------------------------------
 Global DO TXHA Register Macro Prototypes
----------------------------------------------------------------------------*/

/* Define Macros that manage the HWD_DO_TXHA_RRI_ACK0 register */
#define DOTX_RRI_ACCESS_RATE_0BPS      0x0000
#define DOTX_RRI_ACCESS_RATE_9600BPS   0x0011
#define DOTX_RRI_ACCESS_RATE_19200BPS  0x001a
#define DOTX_RRI_ACCESS_RATE_38400BPS  0x002b
#define DOTX_RRI_ACCESS_RATE_76800BPS  0x003c
#define DOTX_RRI_ACCESS_RATE_153600BPS 0x004d


/* Define Macros that manages the HWD_DO_TXHA_RRI_ACK1 register */
#define DOTX_RRI_SYMBOL_RATE_ZERO       0x0000
#define DOTX_RRI_SYMBOL_RATE_9600BPS    0x0011
#define DOTX_RRI_SYMBOL_RATE_19200BPS   0x001a
#define DOTX_RRI_SYMBOL_RATE_38400BPS   0x002b
#define DOTX_RRI_SYMBOL_RATE_76800BPS   0x003c
#define DOTX_RRI_SYMBOL_RATE_153600BPS  0x004d

/* Define Macros that manages the HWD_DO_TXHA_RRI_ACK2 register, in 6293, it is used at RriDataNak in Evl1TrafficDataTransT*/
#define DOTX_RRI_PAYLOAD_IDX_0          0x0000 << 2 /* HWD_DO_TXHA_RRI_ACK2[5:2] */
#define DOTX_RRI_PAYLOAD_IDX_128        0x0001 << 2
#define DOTX_RRI_PAYLOAD_IDX_256        0x0002 << 2
#define DOTX_RRI_PAYLOAD_IDX_512        0x0003 << 2
#define DOTX_RRI_PAYLOAD_IDX_768        0x0004 << 2
#define DOTX_RRI_PAYLOAD_IDX_1024       0x0005 << 2
#define DOTX_RRI_PAYLOAD_IDX_1536       0x0006 << 2
#define DOTX_RRI_PAYLOAD_IDX_2048       0x0007 << 2
#define DOTX_RRI_PAYLOAD_IDX_3072       0x0008 << 2
#define DOTX_RRI_PAYLOAD_IDX_4096       0x0009 << 2
#define DOTX_RRI_PAYLOAD_IDX_6144       0x000A << 2
#define DOTX_RRI_PAYLOAD_IDX_8192       0x000B << 2
#define DOTX_RRI_PAYLOAD_IDX_12288      0x000C << 2

#define DOTX_RRI_SUBPACKET_IDX_0        0x0000      /* HWD_DO_TXHA_RRI_ACK2[1:0] */
#define DOTX_RRI_SUBPACKET_IDX_1        0x0001
#define DOTX_RRI_SUBPACKET_IDX_2        0x0002
#define DOTX_RRI_SUBPACKET_IDX_3        0x0003

/* payload first and then subpacketId set - always pair */

/* Define Macros that manages the HWD_DO_TXHA_RRI_ACK2 register RRI ACK Payload and
** Subpacket Indexes */

/* Define Macros that manages the HWD_DO_TXHA_CHNL_TYPE register */
#define DOTX_CHNL_TYPE_ACCESS           0x0000
#define DOTX_CHNL_TYPE_TRAFFIC          0x0001

/* Define Macros that manages the HWD_DO_TXHA_PROTOCOL_SUBTYP register */
#define DOTX_CHNL_SUBTYPE_0_ACCESS      0x0000
#define DOTX_CHNL_SUBTYPE_1_ACCESS      0x0001
#define DOTX_CHNL_SUBTYPE_2_ACCESS      0x0001
#define DOTX_CHNL_SUBTYPE_0_TRAFFIC     0x0000
#define DOTX_CHNL_SUBTYPE_1_TRAFFIC     0x0000
#define DOTX_CHNL_SUBTYPE_2_TRAFFIC     0x0001


/* Define Macros that manages the HWD_DO_TXHA_TX_RESET register */
#define HWD_DO_TXHA_TX_RESET_PWR        0x0001
#define HWD_DO_TXHA_TX_RESET_RESET      0x0002
#define HWD_DO_TXHA_TX_RESET_FCS        0x0004
#define HWD_DO_TXHA_TX_RESET_SYMBOL     0x0008


/* Define Macros that manages the HWD_DO_TXHA_STATUS register */
#define HWD_DO_TXHA_STATUS_INTERLACE_MODE       0x0001   /* for data rate 12 */
#define HWD_DO_TXHA_STATUS_TX_EARLY_EN          0x0002
#define HWD_DO_TXHA_STATUS_FCS_IDLE             0x0004
#define HWD_DO_TXHA_STATUS_FCS_ERROR            0x0008
#define HWD_DO_TXHA_STATUS_SYMBOL_ERROR         0x0010
#define HWD_DO_TXHA_STATUS_CHANNEL_RD_ERROR     0x0020


/* Define Macros that manages the HWD_DO_TXHA_DRC_LENGTH register */
#define DOTX_DRC_LENGTH_1_SLOT      0x0000
#define DOTX_DRC_LENGTH_2_SLOTS     0x0001
#define DOTX_DRC_LENGTH_4_SLOTS     0x0002
#define DOTX_DRC_LENGTH_8_SLOTS     0x0003



/* Define Macros that manages the HWD_DO_TXHA_DSC_LENGTH register */
#define DOTX_DSC_LENGTH_8_SLOTS     0x0001
#define DOTX_DSC_LENGTH_16_SLOTS    0x0002
#define DOTX_DSC_LENGTH_24_SLOTS    0x0003
#define DOTX_DSC_LENGTH_32_SLOTS    0x0004
#define DOTX_DSC_LENGTH_40_SLOTS    0x0005
#define DOTX_DSC_LENGTH_48_SLOTS    0x0006
#define DOTX_DSC_LENGTH_56_SLOTS    0x0007
#define DOTX_DSC_LENGTH_64_SLOTS    0x0008
#define DOTX_DSC_LENGTH_72_SLOTS    0x0009
#define DOTX_DSC_LENGTH_80_SLOTS    0x000A
#define DOTX_DSC_LENGTH_88_SLOTS    0x000B
#define DOTX_DSC_LENGTH_96_SLOTS    0x000C
#define DOTX_DSC_LENGTH_104_SLOTS   0x000D
#define DOTX_DSC_LENGTH_112_SLOTS   0x000E
#define DOTX_DSC_LENGTH_120_SLOTS   0x000F
#define DOTX_DSC_LENGTH_128_SLOTS   0x0010
#define DOTX_DSC_LENGTH_136_SLOTS   0x0011
#define DOTX_DSC_LENGTH_144_SLOTS   0x0012
#define DOTX_DSC_LENGTH_152_SLOTS   0x0013
#define DOTX_DSC_LENGTH_160_SLOTS   0x0014
#define DOTX_DSC_LENGTH_168_SLOTS   0x0015
#define DOTX_DSC_LENGTH_176_SLOTS   0x0016
#define DOTX_DSC_LENGTH_184_SLOTS   0x0017
#define DOTX_DSC_LENGTH_192_SLOTS   0x0018
#define DOTX_DSC_LENGTH_200_SLOTS   0x0019
#define DOTX_DSC_LENGTH_208_SLOTS   0x001A
#define DOTX_DSC_LENGTH_216_SLOTS   0x001B
#define DOTX_DSC_LENGTH_224_SLOTS   0x001C
#define DOTX_DSC_LENGTH_232_SLOTS   0x001D
#define DOTX_DSC_LENGTH_240_SLOTS   0x001E
#define DOTX_DSC_LENGTH_248_SLOTS   0x001F
#define DOTX_DSC_LENGTH_256_SLOTS   0x0020
#define DOTX_DSC_LENGTH_264_SLOTS   0x0021
#define DOTX_DSC_LENGTH_272_SLOTS   0x0022
#define DOTX_DSC_LENGTH_280_SLOTS   0x0023
#define DOTX_DSC_LENGTH_288_SLOTS   0x0024
#define DOTX_DSC_LENGTH_296_SLOTS   0x0025
#define DOTX_DSC_LENGTH_304_SLOTS   0x0026
#define DOTX_DSC_LENGTH_312_SLOTS   0x0027
#define DOTX_DSC_LENGTH_320_SLOTS   0x0028
#define DOTX_DSC_LENGTH_328_SLOTS   0x0029
#define DOTX_DSC_LENGTH_336_SLOTS   0x002A
#define DOTX_DSC_LENGTH_344_SLOTS   0x002B
#define DOTX_DSC_LENGTH_352_SLOTS   0x002C
#define DOTX_DSC_LENGTH_360_SLOTS   0x002D
#define DOTX_DSC_LENGTH_368_SLOTS   0x002E
#define DOTX_DSC_LENGTH_376_SLOTS   0x002F
#define DOTX_DSC_LENGTH_384_SLOTS   0x0030
#define DOTX_DSC_LENGTH_392_SLOTS   0x0031
#define DOTX_DSC_LENGTH_400_SLOTS   0x0032
#define DOTX_DSC_LENGTH_408_SLOTS   0x0033
#define DOTX_DSC_LENGTH_416_SLOTS   0x0034
#define DOTX_DSC_LENGTH_424_SLOTS   0x0035
#define DOTX_DSC_LENGTH_432_SLOTS   0x0036
#define DOTX_DSC_LENGTH_440_SLOTS   0x0037
#define DOTX_DSC_LENGTH_448_SLOTS   0x0038
#define DOTX_DSC_LENGTH_456_SLOTS   0x0039
#define DOTX_DSC_LENGTH_464_SLOTS   0x003A
#define DOTX_DSC_LENGTH_472_SLOTS   0x003B
#define DOTX_DSC_LENGTH_480_SLOTS   0x003C
#define DOTX_DSC_LENGTH_488_SLOTS   0x003D
#define DOTX_DSC_LENGTH_496_SLOTS   0x003E
#define DOTX_DSC_LENGTH_504_SLOTS   0x003F
#define DOTX_DSC_LENGTH_512_SLOTS   0x0040


/* Define Macros that manages the HWD_DO_TXHA_DRC_BOOST_LEN register */
#define DOTX_DRC_BOOST_LENGTH_2_SLOTS    0x0001
#define DOTX_DRC_BOOST_LENGTH_4_SLOTS    0x0002
#define DOTX_DRC_BOOST_LENGTH_6_SLOTS    0x0003
#define DOTX_DRC_BOOST_LENGTH_8_SLOTS    0x0004
#define DOTX_DRC_BOOST_LENGTH_10_SLOTS   0x0005
#define DOTX_DRC_BOOST_LENGTH_12_SLOTS   0x0006
#define DOTX_DRC_BOOST_LENGTH_14_SLOTS   0x0007
#define DOTX_DRC_BOOST_LENGTH_16_SLOTS   0x0008
#define DOTX_DRC_BOOST_LENGTH_18_SLOTS   0x0009
#define DOTX_DRC_BOOST_LENGTH_20_SLOTS   0x000A
#define DOTX_DRC_BOOST_LENGTH_22_SLOTS   0x000B
#define DOTX_DRC_BOOST_LENGTH_24_SLOTS   0x000C
#define DOTX_DRC_BOOST_LENGTH_26_SLOTS   0x000D
#define DOTX_DRC_BOOST_LENGTH_28_SLOTS   0x000E
#define DOTX_DRC_BOOST_LENGTH_30_SLOTS   0x000F
#define DOTX_DRC_BOOST_LENGTH_32_SLOTS   0x0010
#define DOTX_DRC_BOOST_LENGTH_34_SLOTS   0x0011
#define DOTX_DRC_BOOST_LENGTH_36_SLOTS   0x0012
#define DOTX_DRC_BOOST_LENGTH_38_SLOTS   0x0013
#define DOTX_DRC_BOOST_LENGTH_40_SLOTS   0x0014
#define DOTX_DRC_BOOST_LENGTH_42_SLOTS   0x0015
#define DOTX_DRC_BOOST_LENGTH_44_SLOTS   0x0016
#define DOTX_DRC_BOOST_LENGTH_46_SLOTS   0x0017
#define DOTX_DRC_BOOST_LENGTH_48_SLOTS   0x0018
#define DOTX_DRC_BOOST_LENGTH_50_SLOTS   0x0019
#define DOTX_DRC_BOOST_LENGTH_52_SLOTS   0x001A
#define DOTX_DRC_BOOST_LENGTH_54_SLOTS   0x001B
#define DOTX_DRC_BOOST_LENGTH_56_SLOTS   0x001C
#define DOTX_DRC_BOOST_LENGTH_58_SLOTS   0x001D
#define DOTX_DRC_BOOST_LENGTH_60_SLOTS   0x001E
#define DOTX_DRC_BOOST_LENGTH_62_SLOTS   0x001F
#define DOTX_DRC_BOOST_LENGTH_64_SLOTS   0x0020


/* Define Macros that manages the HWD_DO_TXHA_DSC_BOOST_LENGTH register */
#define DOTX_DSC_BOOST_LENGTH_8_SLOTS     0x0001
#define DOTX_DSC_BOOST_LENGTH_16_SLOTS    0x0002
#define DOTX_DSC_BOOST_LENGTH_24_SLOTS    0x0003
#define DOTX_DSC_BOOST_LENGTH_32_SLOTS    0x0004
#define DOTX_DSC_BOOST_LENGTH_40_SLOTS    0x0005
#define DOTX_DSC_BOOST_LENGTH_48_SLOTS    0x0006
#define DOTX_DSC_BOOST_LENGTH_56_SLOTS    0x0007
#define DOTX_DSC_BOOST_LENGTH_64_SLOTS    0x0008
#define DOTX_DSC_BOOST_LENGTH_72_SLOTS    0x0009
#define DOTX_DSC_BOOST_LENGTH_80_SLOTS    0x000A
#define DOTX_DSC_BOOST_LENGTH_88_SLOTS    0x000B
#define DOTX_DSC_BOOST_LENGTH_96_SLOTS    0x000C
#define DOTX_DSC_BOOST_LENGTH_104_SLOTS   0x000D
#define DOTX_DSC_BOOST_LENGTH_112_SLOTS   0x000E
#define DOTX_DSC_BOOST_LENGTH_120_SLOTS   0x000F
#define DOTX_DSC_BOOST_LENGTH_128_SLOTS   0x0010
#define DOTX_DSC_BOOST_LENGTH_136_SLOTS   0x0011
#define DOTX_DSC_BOOST_LENGTH_144_SLOTS   0x0012
#define DOTX_DSC_BOOST_LENGTH_152_SLOTS   0x0013
#define DOTX_DSC_BOOST_LENGTH_160_SLOTS   0x0014
#define DOTX_DSC_BOOST_LENGTH_168_SLOTS   0x0015
#define DOTX_DSC_BOOST_LENGTH_176_SLOTS   0x0016
#define DOTX_DSC_BOOST_LENGTH_184_SLOTS   0x0017
#define DOTX_DSC_BOOST_LENGTH_192_SLOTS   0x0018
#define DOTX_DSC_BOOST_LENGTH_200_SLOTS   0x0019
#define DOTX_DSC_BOOST_LENGTH_208_SLOTS   0x001A
#define DOTX_DSC_BOOST_LENGTH_216_SLOTS   0x001B
#define DOTX_DSC_BOOST_LENGTH_224_SLOTS   0x001C
#define DOTX_DSC_BOOST_LENGTH_232_SLOTS   0x001D
#define DOTX_DSC_BOOST_LENGTH_240_SLOTS   0x001E
#define DOTX_DSC_BOOST_LENGTH_248_SLOTS   0x001F
#define DOTX_DSC_BOOST_LENGTH_256_SLOTS   0x0020
#define DOTX_DSC_BOOST_LENGTH_264_SLOTS   0x0021
#define DOTX_DSC_BOOST_LENGTH_272_SLOTS   0x0022
#define DOTX_DSC_BOOST_LENGTH_280_SLOTS   0x0023
#define DOTX_DSC_BOOST_LENGTH_288_SLOTS   0x0024
#define DOTX_DSC_BOOST_LENGTH_296_SLOTS   0x0025
#define DOTX_DSC_BOOST_LENGTH_304_SLOTS   0x0026
#define DOTX_DSC_BOOST_LENGTH_312_SLOTS   0x0027
#define DOTX_DSC_BOOST_LENGTH_320_SLOTS   0x0028
#define DOTX_DSC_BOOST_LENGTH_328_SLOTS   0x0029
#define DOTX_DSC_BOOST_LENGTH_336_SLOTS   0x002A
#define DOTX_DSC_BOOST_LENGTH_344_SLOTS   0x002B
#define DOTX_DSC_BOOST_LENGTH_352_SLOTS   0x002C
#define DOTX_DSC_BOOST_LENGTH_360_SLOTS   0x002D
#define DOTX_DSC_BOOST_LENGTH_368_SLOTS   0x002E
#define DOTX_DSC_BOOST_LENGTH_376_SLOTS   0x002F
#define DOTX_DSC_BOOST_LENGTH_384_SLOTS   0x0030
#define DOTX_DSC_BOOST_LENGTH_392_SLOTS   0x0031
#define DOTX_DSC_BOOST_LENGTH_400_SLOTS   0x0032
#define DOTX_DSC_BOOST_LENGTH_408_SLOTS   0x0033
#define DOTX_DSC_BOOST_LENGTH_416_SLOTS   0x0034
#define DOTX_DSC_BOOST_LENGTH_424_SLOTS   0x0035
#define DOTX_DSC_BOOST_LENGTH_432_SLOTS   0x0036
#define DOTX_DSC_BOOST_LENGTH_440_SLOTS   0x0037
#define DOTX_DSC_BOOST_LENGTH_448_SLOTS   0x0038
#define DOTX_DSC_BOOST_LENGTH_456_SLOTS   0x0039
#define DOTX_DSC_BOOST_LENGTH_464_SLOTS   0x003A
#define DOTX_DSC_BOOST_LENGTH_472_SLOTS   0x003B
#define DOTX_DSC_BOOST_LENGTH_480_SLOTS   0x003C
#define DOTX_DSC_BOOST_LENGTH_488_SLOTS   0x003D
#define DOTX_DSC_BOOST_LENGTH_496_SLOTS   0x003E
#define DOTX_DSC_BOOST_LENGTH_504_SLOTS   0x003F
#define DOTX_DSC_BOOST_LENGTH_512_SLOTS   0x0040


/* Define Macros that manages the DO_TXHA_AUXPLTMIN_PYLD register */
#define DOTX_AUXPILOT_MIN_PYLD_128_SLOTS      0x0000
#define DOTX_AUXPILOT_MIN_PYLD_256_SLOTS      0x0001
#define DOTX_AUXPILOT_MIN_PYLD_512_SLOTS      0x0002
#define DOTX_AUXPILOT_MIN_PYLD_768_SLOTS      0x0003
#define DOTX_AUXPILOT_MIN_PYLD_1024_SLOTS     0x0004
#define DOTX_AUXPILOT_MIN_PYLD_1536_SLOTS     0x0005
#define DOTX_AUXPILOT_MIN_PYLD_2048_SLOTS     0x0006
#define DOTX_AUXPILOT_MIN_PYLD_3072_SLOTS     0x0007
#define DOTX_AUXPILOT_MIN_PYLD_4096_SLOTS     0x0008
#define DOTX_AUXPILOT_MIN_PYLD_6144_SLOTS     0x0009
#define DOTX_AUXPILOT_MIN_PYLD_8192_SLOTS     0x000A
#define DOTX_AUXPILOT_MIN_PYLD_12288_SLOTS    0x000B


/* Define default ks_calc strobe setup time before fiq - HWD_STDO_KS_CALC_STB register */
#define DO_TXHA_KS_CALC_STB_SETUP_FIQ 4


#ifdef MTK_PLT_ON_PC_UT
extern SysTimeFullT RcpDoGetUtSysTimer(kal_bool UseFrameOffset);
#define L2GetDoSysFullTime(UseFrameOffset) RcpDoGetUtSysTimer(UseFrameOffset)
#else
#define L2GetDoSysFullTime(UseFrameOffset) SysDoTimeFullGet(UseFrameOffset)

#endif


#if (!defined (MTK_PLT_ON_PC)) && (defined (RCP_RI_HRT_DEV))
#define PAR_ERR_WARNING(p1, p2, p3, TraceInfo, func, line) EVL2TRACE_RCP_RI_PAR_ERR(TraceInfo, line)
#define RCP_FAULT_WARNING(p1, p2, p3, TraceInfo) EVL2TRACE_RCP_RI_RCP_FAULT(TraceInfo, __LINE__)
#define RTM_ERR_INVALID_ATTR_ID_WARNING(p1, p2, p3, TraceInfo, func, line) \
        EVL2TRACE_RTM_ERR_INVALID_ATTR_ID(TraceInfo, line)
#define RTM_ERR_AN_REJECT_WARNING(p1, p2, p3, func, line) \
        EVL2TRACE_RTM_ERR_AN_REJECT(line)
#define RCP_RTM_INVALID_EVENT_WARNING(p1, p2, p3, p4, p5, p6, p7, p8) \
        EVL2TRACE_RCP_RTM_INVALID_EVENT(p4, p5, p6, p8)
#define RTM_ERR_INVALID_VALUE_ID_WARNING(p1, p2, p3, TraceInfo, func, line) \
        EVL2TRACE_RTM_ERR_INVALID_VALUE_ID(TraceInfo, line)
#define RTM_ERR_INVALID_ATTR_LEN_WARNING(p1, p2, p3, TraceInfo, func, line) \
        EVL2TRACE_RTM_ERR_INVALID_ATTR_LEN(TraceInfo, line)
#define RCP_RTM_TXPKT3_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10) \
        EVL2TRACE_RCP_RTM_TXPKT3(p4, p5, p6, p7, p8, p9, p10)
#define RCP_RTM_TXPKT_SWEEP_MODE_INFO(p1, p2, p3, p4, p5, p6, p7) \
        EVL2TRACE_RCP_RI_TXPKT_SWEEP_MODE(p4, p5, p6, p7)
#define RCP_RTM_QOS_MINPKTSIZE_CONDITION_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12) \
        EVL2TRACE_RCP_RI_QOS_MINPKTSIZE_CONDITION(p4, p5, p6, p7, p8, p9, p10, p11, p12)
#define RCP_RTM_QOS_POTENTIAL_T2P_OUTFLOW_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9) \
        EVL2TRACE_RCP_RI_QOS_POTENTIAL_T2P_OUTFLOW_INFO(p4, p5, p6, p7, p8, p9)
#define RCP_RI_RTM_TX_DUMMY_PKT(p1, p2, p3, p4, p5) \
        EVL2TRACE_RCP_RI_RTM_TX_DUMMY_PKT(p4, p5)
#define RCP_FORM_DUMMY_PKT(p1, p2, p3, p4) \
        EVL2TRACE_RCP_RI_PCP_FORM_DUMMY_PKT(p4)
#define RCP_RTM_DATA_TXNULLPKT_PARAM1_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9)   \
        EVL2TRACE_RCP_RI_RTM_DATA_TXPKT1_PARAM1(p4, p5, p6, p7, p8, p9)
#define RCP_RTM_DATA_TXNULLPKT_PARAM2_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)   \
        EVL2TRACE_RCP_RI_RTM_DATA_TXPKT1_PARAM2(p4, p5, p6, p7, p8, p9, p10, p11)
#define RCP_RTM_DATA_TXPKT1_PARAM1_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9)   \
        EVL2TRACE_RCP_RI_RTM_DATA_TXPKT1_PARAM1(p4, p5, p6, p7, p8, p9)
#define RCP_RTM_DATA_TXPKT1_PARAM2_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)   \
        EVL2TRACE_RCP_RI_RTM_DATA_TXPKT1_PARAM2(p4, p5, p6, p7, p8, p9, p10, p11)
#define RCP_RTM_DATA_TXPKT2_PARAM1_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9)   \
        EVL2TRACE_RCP_RI_RTM_DATA_TXPKT2_PARAM1(p4, p5, p6, p7, p8, p9)
#define RCP_RTM_DATA_TXPKT2_PARAM2_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)   \
        EVL2TRACE_RCP_RI_RTM_DATA_TXPKT2_PARAM2(p4, p5, p6, p7, p8, p9, p10, p11)
#define RCP_ACM_FORM_PARAM_INFO(p1, p2, p3, p4, p5, p6, p7)   \
        EVL2TRACE_RCP_RI_ACM_FORM_PARAM (p4, p5, p6, p7)        
#else
#define PAR_ERR_WARNING(p1, p2, p3, TraceInfo, func, line) dhl_trace(p1, p2, p3, TraceInfo, func, line)
#define RCP_FAULT_WARNING(p1, p2, p3, TraceInfo) dhl_trace(p1, p2, p3, TraceInfo, __FUNCTION__, __LINE__)
#define RCP_RTM_INVALID_EVENT_WARNING(p1, p2, p3, p4, p5, p6, p7, p8) \
        dhl_trace(p1, p2, p3, p4, p5, p6, p7, p8)
#define RTM_ERR_INVALID_ATTR_ID_WARNING(p1, p2, p3, TraceInfo, func, line) \
        dhl_trace(p1, p2, p3, TraceInfo, func, line)
#define RTM_ERR_AN_REJECT_WARNING(p1, p2, p3, func, line) \
        dhl_trace(p1, p2, p3, func, line)
#define RTM_ERR_INVALID_VALUE_ID_WARNING(p1, p2, p3, TraceInfo, func, line) \
        dhl_trace(p1, p2, p3, TraceInfo, func, line)
#define RTM_ERR_INVALID_ATTR_LEN_WARNING(p1, p2, p3, TraceInfo, func, line) \
        dhl_trace(p1, p2, p3, TraceInfo, func, line)
#define RCP_RTM_TXPKT3_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10) \
        dhl_trace(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10)
#define RCP_RTM_TXPKT_SWEEP_MODE_INFO(p1, p2, p3, p4, p5, p6, p7) \
        dhl_trace(p1, p2, p3, p4, p5, p6, p7)
#define RCP_RTM_QOS_MINPKTSIZE_CONDITION_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12) \
        dhl_trace(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12)
#define RCP_RTM_QOS_POTENTIAL_T2P_OUTFLOW_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9) \
        dhl_trace(p1, p2, p3, p4, p5, p6, p7, p8, p9)
#define RCP_RI_RTM_TX_DUMMY_PKT(p1, p2, p3, p4, p5) \
        dhl_trace(p1, p2, p3, p4, p5)
#define RCP_FORM_DUMMY_PKT(p1, p2, p3, p4) \
        dhl_trace(p1, p2, p3, p4)
#define RCP_RTM_DATA_TXNULLPKT_PARAM1_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9)   \
        dhl_trace(p1, p2, p3, p4, p5, p6, p7, p8, p9)
#define RCP_RTM_DATA_TXNULLPKT_PARAM2_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)   \
        dhl_trace(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)
#define RCP_RTM_DATA_TXPKT1_PARAM1_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9)   \
        dhl_trace(p1, p2, p3, p4, p5, p6, p7, p8, p9)
#define RCP_RTM_DATA_TXPKT1_PARAM2_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)   \
        dhl_trace(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)
#define RCP_RTM_DATA_TXPKT2_PARAM1_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9)   \
        dhl_trace(p1, p2, p3, p4, p5, p6, p7, p8, p9)
#define RCP_RTM_DATA_TXPKT2_PARAM2_INFO(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)   \
        dhl_trace(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)
#define RCP_ACM_FORM_PARAM_INFO(p1, p2, p3, p4, p5, p6, p7)   \
        dhl_trace(p1, p2, p3, p4, p5, p6, p7)
#endif


/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/
/* rcptask.c */
extern void RcpInit( void );
extern void rcp_process_ilm(ilm_struct *current_ilm);

/**************************************************************************************
 SS: the CpBufTypeT parameter was added to take care of the
 special case, when the DatapktGT* was being allocated for a
 HDR i.e. when used as: DatapktGet( CPBUF_HEADER ); Refer code for details..
 In all other cases, the type field is a don't care. i.e. when invoked as follows
 (a) DatapktGet( CPBUF_REV ) (b) DatapktGet( CPBUF_SIGNALING_MSG )
*************************************************************************************/
extern DatapktGT* DatapktGet( CpBufTypeT type );
                               /* The CpBufTypeT parameter was added to take care of the
                                  special case, when the DatapktGT* was being allocated for a
                                  HDR i.e. when used as: DatapktGet( CPBUF_HEADER ); Refer code for details..
                                  In all other cases, the type field is a don't care. i.e. when invoked as follows
                                  (a) DatapktGet( CPBUF_REV ) (b) DatapktGet( CPBUF_SIGNALING_MSG ) */

extern void       DatapktFree( DatapktGT *pdu );        /* Frees pdu, add back to Pool */
extern void       DatapktlistAdd( DatapktlistGT *pktlist, DatapktGT *newDatapkt );  /* Adds to tail of a pktlist */
extern void       DatapktlistInit( DatapktlistGT *pktlist );
extern kal_uint16 DatapktCpy(DatapktGT *pktPtr, kal_uint8 *dataPtr, kal_bool isLimitLen, kal_uint16 cpyLenLimit);
extern RevMacPktGT* RevMacPktGet( void );               /* Get a new pdu from RevMacPktPool */
extern void         RevMacPktFree( RevMacPktGT *pkt );  /* Frees revMacPkt */

extern void RcpStHwProgFrameOffset( kal_uint8 frameOffset );
extern void DatapktlistRemoveLast(DatapktlistGT * pktlist);



/* rcptest.c */
extern kal_bool   RcpProcTestMsg(void *MsgDataPtr, RcpTestMsgT MsgId, kal_uint32 MsgSize);

/* CPBuf Test Cmds */
extern kal_uint8 CpBufTestBufferCount;


/* rcptxh.c */
extern void   RcpTxhInit(void);
extern kal_uint16 RcpGetChannelScale(RcpRevChanScaleT Channel, RcpChanScaleTypeT Type, kal_int16 ChanGain, kal_uint8 Qval);
extern kal_uint32 RcpLinearChanScaleConv(kal_int16 Scale);
extern kal_int16  RcpGetTchInitialKsAdjust(kal_int8 drcChanGainBase, kal_int8 ackChanGainBase);
#if (defined(MTK_PLT_ON_PC))
extern void   RcpRtmQosTxModeSelectionAlgo(RcpRtmQosTxModeSelectionAlgoMsgT *MsgDataPtr);

extern void   CpBufProcessTestStatsCmd( CpBufTestCmdMsgT *MsgDataPtr);
extern void   CpBufProcessTestGetCmd( CpBufTestCmdMsgT *MsgDataPtr);
extern void   CpBufProcessTestFreeCmd( CpBufTestFreeCmdMsgT *MsgDataPtr);
#endif

/*pcpr.c*/
extern kal_uint32 PcpRFormRevDummyMacPkt ( PcpAcmRtmGrantAllocationT *grant, DatapktlistGT* pktList);
extern kal_uint32 PcpRProcessGrant( PcpAcmRtmGrantAllocationT *grant, DatapktlistGT* datapktList) ;
extern kal_uint8  PcpRProcessGrantAcm(PcpAcmRtmGrantAllocationT *rcvdGrant, DatapktlistGT* datapktList);
extern kal_uint8  PcprMacFlowListAddFuncPtrs(kal_uint16 SubType,
                                                               MacFlow2StrFlowMappingT* pTable,
                                                               kal_bool  (*getMaxPktPriorityFunc)( BestPktInfoT*, kal_uint8),
                                                               void  (*phyTrafficAckedFunc)(kal_uint8,kal_uint8),
                                                               void  (*phyTrafficMissedFunc)(kal_uint8,kal_uint8),
                                                               void  (*pktSentFunc)(kal_uint8,kal_uint8),
                                                               void  (*pktNotSentFunc)(kal_uint8,kal_uint8),
                                                               kal_uint16 (*grant)( DatapktlistGT* , kal_uint16 grantSize, kal_uint8 revMacId, kal_uint8 subStreamNum),
                                                               kal_uint32 (*getPktQueSz)(kal_uint8 macFlowId, kal_uint8 subStreamNum)
                                                               );
extern kal_bool PcpRAddPadBits( DatapktlistGT* datapktList, kal_uint16 val );
extern void PcpRPktSent( kal_uint8 revMacId );
extern void PcpRPktNotSent( kal_uint8 revMacId );
extern void PcpRPhyTrafficAcked( kal_uint8 revMacId );
extern void PcpRPhyTrafficMissed( kal_uint8 revMacId );
extern void RcpAddNodeToMacFlowList( kal_uint8 macFlowId, kal_uint16 streamId, kal_uint8 substreamId, kal_bool NoCheckRlpActive );
extern void RcpAddAppToMacFlow(kal_uint16 AppType, kal_uint8 StreamNum);
extern kal_uint16 RcpFindAppTypeByStreamNum(kal_bool InUse,kal_uint8 StreamNum);
extern kal_uint8  RcpFindStreamNumByAppType(kal_bool InUse,kal_uint16 AppType);
extern void RcpDeleteNodeFromMacFlowList( void );

extern void StreamInit(void);
extern void StreamHandleStrCommitMsg(void);
extern void StreamHandleStrReconfiguredMsg(void);
extern void StreamCommit(void);

extern kal_bool GetRtapTestPktMode(void);

extern void PcpProcessGrantRtmTest
(
   PcpAcmRtmGrantAllocationT *grant,
   DatapktlistGT             *pktlist );

#if defined (MTK_DEV_OPTIMIZE_EVL1)
/* NST: used in NST */
extern void PcpProcessGrantRtmNST(DatapktlistGT *pktlist);
#endif

#ifdef MTK_DEV_C2K_IRAT
extern void RcpIratTxPowerReqHandler(void);
#endif /* MTK_DEV_C2K_IRAT */

/* Timing Profile Measurement */
/* Macro does nothing */
#define RCP_TIME_PROFILE_START() ((void) 0)
#define RCP_TIME_PROFILE_END()   ((void) 0)

void  RcpGetTxDataStat(kal_uint32* pTotalTxBytes, kal_uint32* pTotalTxNewPkts);
void  RcpParSetDefServiceRlpFlow(kal_uint8 RlpFlow);
kal_uint8 RcpParGetDefServiceRlpFlow(void);

extern void RcpTxChanSweepModeRtmCommit(void);
extern void RtmTxPathNotSetStHandleRcpTaskSig( void );
extern void RtmSetupHandleRcpTaskSig(void);
extern void RtmTxhProgActivateTCH(void);
extern kal_uint8 RtmStateSilentChk(void);
extern void RcpSendEltMsg(msg_type msg_id, local_para_struct *log_msg_ptr);
#if defined (RCP_RI_HRT_DEV)
extern void RcpRiStartTimer (kal_uint32 delay, kal_uint32 timerId, void* paramPtr,
                             kal_timer_func_ptr Routine, kal_uint32 period);
extern void RcpRiStopTimer (kal_uint32 timerId);
extern kal_uint32 RcpRiCreateTimer (void);
extern kal_uint32 RCP_CREATE_TIMER (kal_char *timer_name_ptr);
extern void RCP_SET_TIMER (kal_uint32           ext_t_id,
                           kal_timer_func_ptr   handler_func_ptr,
                           void*                handler_param_ptr,
                           kal_uint32           delay,
                           kal_uint32           reshedule_time);
extern void RCP_CANCEL_TIMER (kal_uint32 ext_timer);
extern void RCP_CALLBACK_REG (kal_uint32 ActionTime, kal_uint16 SlotNum, SysTagTypeT TagType,
                       SysEventTypeT EventType, module_type module_id, msg_type message,
                       void (*Routine) (kal_uint32));
extern void RCP_CALLBACK_REG_CANCEL (kal_uint32 ActionTime, kal_uint16 SlotNum, SysTagTypeT TagType,
                                     SysEventTypeT EventType, module_type module_id, msg_type message,
                                     void (*Routine) (kal_uint32));
extern void rcp_cpbuf_free (const char *moduleName, unsigned lineNumber, CpBufferT *cpPktPtr);
extern void RcpRiEvtHandler(void*  EvtPtr);
extern void RcpRiTrigger(void);
#define RCP_CPBUF_FREE(cpPktPtr) rcp_cpbuf_free (__FUNCTION__, __LINE__, cpPktPtr)
#else
extern event_scheduler * pRcpEs;

#define RCP_CREATE_TIMER(timer_name_ptr) NULL
#define RCP_SET_TIMER(timer_id, handler_func_ptr, handler_param_ptr, delay, reshedule_time) \
        timer_id = evshed_set_event(pRcpEs, handler_func_ptr, handler_param_ptr, kal_milli_secs_to_ticks(delay))
#define RCP_CANCEL_TIMER(timer_id) \
        if (timer_id) evshed_cancel_event(pRcpEs, &timer_id)
#if (defined (MTK_PLT_ON_PC_UT))
#define RCP_CALLBACK_REG(ActionTime, SlotNum, TagType, EventType, module_id, message, Routine) \
        UNUSED_PARAMETER(ActionTime)
#define RCP_CALLBACK_REG_CANCEL(ActionTime, SlotNum, TagType, EventType, module_id, message, Routine) \
        UNUSED_PARAMETER(ActionTime)
#else
#define RCP_CALLBACK_REG(ActionTime, SlotNum, TagType, EventType, module_id, message, Routine) \
        C2kSysCallbackRegister(ActionTime, SlotNum, TagType, EventType, module_id, message, Routine)
#define RCP_CALLBACK_REG_CANCEL(ActionTime, SlotNum, TagType, EventType, module_id, message, Routine) \
        C2kSysCallbackRegisterCancel(ActionTime, SlotNum, TagType, EventType, module_id, message, Routine)
#endif
#define RCP_CPBUF_FREE(cpPktPtr) CpBufFree(cpPktPtr)
#endif

#if (!defined (MTK_PLT_ON_PC_UT)) && (defined (RCP_RI_HRT_DEV))
extern void RCP_MSG_SEND4(module_type _src_mod_id, module_type _dest_mod_id, sap_type _sap_id, msg_type _msg_id);
extern void RCP_MSG_SEND5(module_type _dest_mod_id, msg_type _msg_id, kal_uint8 *_msg_ptr, kal_uint16 _msg_length);
extern void RcpRiSendUtsMsgToRcpTask(kal_uint32 msgId, kal_uint8* msg_ptr, kal_uint16 length);
#else
#define RCP_MSG_SEND4(_src_mod_id, _dest_mod_id, _sap_id, _msg_id) \
        msg_send4(_src_mod_id, _dest_mod_id, _sap_id, _msg_id)
#endif
/*****************************************************************************
* End of File
*****************************************************************************/
#endif
/**Log information: \main\Trophy\Trophy_ylxiao_href22033\1 2013-03-18 14:15:23 GMT ylxiao
** HREF#22033, merge 4.6.0**/
/**Log information: \main\Trophy\1 2013-03-19 05:19:41 GMT hzhang
** HREF#22033 to merge 0.4.6 code from SD.**/

