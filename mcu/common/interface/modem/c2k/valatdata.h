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
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSKAL_TRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*************************************************************************
 *
 * File Name:       valatdata.h
 *
 * Description:  IS-707 Mobile Terminal AT Commands Engine, API
 *               data definitions.
 *
 *
 ************************************************************************/

#ifndef _AT_DATA_H
#define _AT_DATA_H 1


enum _AtService
{
  ATS_AsyncData,
  ATS_Fax,
  ATS_Rejected,
  ATS_PacketRelayRm,
  ATS_SingleStackQNC,
  ATS_UpBrowser,
  ATS_AsyncUpBrowser,
  ATS_TcpCktBrowser,
  ATS_TcpPktBrowser,
  ATS_PacketNtwkRm,
  ATS_PPPOnly,
  NUM_ATSs
};

typedef kal_uint8 AtService;

enum _AtBreakType
{
  BKT_NonExpeditedNonDestructive,
  BKT_ExpeditedNonDestructive,
  BKT_ExpeditedDestructive,
  NUM_BKTs
};

typedef kal_uint8 AtBreakType;

enum _AttState
{
  ATT_Command,
  ATT_Online,
  ATT_OnlineCommand,
  NUM_ATTs
};

typedef kal_uint8 AtState;

enum _AtError
{
  ATE_ChCmRCQOverflow,
  ATE_ChInvalidBreak,
  ATE_Invalid617Chars,
  ATE_ChIwfFlowCtlErr,
  ATE_ChRflctAtCmdBufOverflow,
  ATE_ChUnknownInBandCmd,
  ATE_ChUnknownExtend0Cmd,
  ATE_ChUnknownExtend1Cmd,
  ATE_CmInvalidBrowserDigitLen,
  ATE_CmInvalidDialStringType,
  ATE_CmNonMatchingSvcOpt,
  ATE_CmUnexpectedEvent,
  ATE_CmUnexpectedExtend0Cmd,
  ATE_CmUnexpectedInBandCmd,
  ATE_CmUnexpectedReflectedAtCmd,
  ATE_DhInvalidC108BehaviorParm,
  ATE_DhRlpRxIndErr,
  ATE_RdInvalidRfcCmd,
  ATE_RdRxBusy,
  ATE_TmDpdTxNotReady,
  ATE_TmCnTxNotReady,
  ATE_UdInvalidCmdChar,
  NUM_ATEs
};
typedef kal_uint8 AtError;

enum _AtOrigFailReason
{
  ATOF_Intercept,
  ATOF_Reorder,
  ATOF_Release,
  ATOF_Reject,
  ATOF_Disabled,
  ATOF_Busy,
  NUM_ATOFs
};
typedef kal_uint8 AtOrigFailReason;

enum _AtReleaseReason
{
  ATR_Normal,
  ATR_Fade,
  ATR_PowerDown,
  NUM_ATRs
};
typedef kal_uint8 AtReleaseReason;

enum _AtNspeStatus  /* This definition shall agree with defines found in 7074API.h */
{
  ANS_ConnectSuccess,
  ANS_ConnectFailTCP,
  ANS_ConnectFailPPP,
  ANS_ConnectFailRLP,
  ANS_ConnectFailUart,
  ANS_DisconnectNormal = 5,
  NUM_ANSs
};
typedef kal_uint8 AtNspeStatus;

enum _DialStringType
{
  DST_Normal,
  DST_Restricted,
  DST_QNC,
  NUM_DSTs
};
typedef kal_uint8 DialStringType;

enum _AtConnFailType
{
  ACFT_CONNECT_FAIL_TCP,        /* connection fails on TCP  */
  ACFT_CONNECT_FAIL_PPP,        /* connection fails on PPP  */
  ACFT_CONNECT_FAIL_RLP,        /* connection fails on RLP  */
  ACFT_CONNECT_FAIL_UART,       /* not use                  */
  ACFT_CONNECT_FAIL_TRAFFIC,    /* connection fails on traffic */
  ACFT_CONNECT_FAIL_NOSVC,      /* connection fails on no src  */ 
  NUM_ACFTs
};
typedef kal_uint8 AtConnFailType;

enum _AtDisconnectType
{
  ADT_DISCONNECT_NORMAL,  
  ADT_DISCONNECT_MS,
  ADT_DISCONNECT_FADE,  
  NUM_ADTs
};
typedef kal_uint8 AtDisconnectType;
/* These defines include the NULL terminator */
#define MAX_CFG_LEN 249
#define MAX_DROPPED_FAX_LINE_STR_LEN 65535
#define MAX_FLI_LEN 21
#define MAX_FSA_LEN 21
#define MAX_FPA_LEN 21
#define MAX_FPI_LEN 21
#define MAX_FPW_LEN 21
#define MAX_GCAP_LEN 65535
#define MAX_GMI_LEN 2047
#define MAX_GMM_LEN 2047
#define MAX_GMR_LEN 2047
#define MAX_GOI_LEN 2047
#define MAX_GSN_LEN 2047

/* aiCfgGetCSS definitions */
enum _AtBandClass
{
  ABC_Unknown,
  ABC_800MHz,
  ABC_1900MHz,
  NUM_ABCs
};
typedef kal_uint8 AtBandClass;

#define CSS_BAND_NONE   0x47 /* Displayed as: 'Z'.
                              * Server dosen't like 'G'*/

#define CSS_SID_NONE 32768   /* Displayed as: '99999' */

/* aiCfgGetCSQ definitions */
#define CSQ_SQM_UNKNOWN 32   /* Displayed as: '99' */
#define CSQ_FER_UNKNOWN  8   /* Displayed as: '99' */


/* aiCfgGetCBC definitions */
#define CBC_BCS_BatteryPower  0
#define CBC_BCS_ExternalPower 1
#define CBC_BCS_NotAvailable  2
#define CBC_BCS_PowerFault    3


/* DPD Carrier index definitions */
#define CR_V90        0
#define CR_V34B       1
#define CR_V34        2
#define CR_V32B       3
#define CR_V32        4
#define CR_V27TC      5
#define CR_V26B       6
#define CR_V23C       7
#define CR_V23S       8
#define CR_V22B       9
#define CR_V22        10
#define CR_V21        11
#define CR_V17        12
#define CR_B212       13
#define CR_B209       14
#define CR_B208       15
#define CR_B202       16
#define CR_B201       17
#define CR_B103       18
#define CR_UNUSED     255
#define AT_NUM_CRs    19

/* FAX serial rate definintions */
#define FR_AUTOBAUD   0
#define FR_2400       1
#define FR_4800       2
#define FR_9600       4
#define FR_19200      8
#define FR_38400      16
#define FR_57600      24
#define FR_115200     48
/* aiCfgGetMA definitions */
#define NUM_MA_CARRIERS    8

/* aiCfgGetCAD return values */
enum _CAD
{
 CAD_NoSvc,
 CAD_CDMA,
 CAD_TDMA,
 CAD_Analog,
 NUM_CADs
};

/* NSPE definitions */
#define TCP_ACTIVE         0 
#define TCP_PASSIVE        1

#define IP_MAX_THRUPUT     0
#define IP_LOW_DELAY       1

#define RLP_NON_TRANS      0
#define RLP_TRANS          1

#define RLP_CHAN_PRIMARY   0
#define RLP_CHAN_SECONDARY 1

enum _AtPacketCallEvent
{
  PCE_EnterIdle,
  PCE_IdleHandoffSameSystem,
  PCE_IdleHandoffNewSystem,
  PCE_PageReceived,
  PCE_OriginationSent,
  PCE_TrafficChannelAssigned,
  PCE_HardHandoff,
  NUM_PCEs
};
typedef kal_uint8 AtPacketCallEvent;

enum _AtPacketCallState
{
  PCS_Inactive,
  PCS_InitIdle,
  PCS_InitTraffic,
  PCS_ConnectedPrimary,
  PCS_ConnectedSecondary,
  PCS_DormantIdle,
  PCS_DormantTraffic,
  PCS_ReconnectIdle,
  PCS_ReconnectTraffic,
  NUM_PCSs
};
typedef kal_uint8 AtPacketCallState;

enum _BrowserConnectStatus
{
  BS_Success,
  BS_Busy,
  BS_Rejected,
  BS_Failed,
  BS_NoSvc,
  BS_DisconnectNormal,
  BS_ConnectionDropped,
  BS_Dormant,
  BS_Reconnected,
  NUM_BSs
};
typedef kal_uint8 BrowserConnectStatus;

enum _AtUnexpectedEventId
{
  EVID_Internal, /* Unexpected internal events are not logged.  */
  EVID_CpAlertInd,
  EVID_CpConnectInd,
  EVID_CpDormantInd,
  EVID_CpOrigFailInd,
  EVID_CpPageInd,
  EVID_CpReleaseInd,
  EVID_NspeBrowserConnectReq,
  EVID_NspeBrowserDormantReq,
  EVID_NspeBrowserHangupReq,
  EVID_NspePppConnectRsp,
  EVID_NspeStatusInd,
  EVID_RlpCloseRsp,
  EVID_RlpInactivityInd,
  EVID_RlpOpenRsp,
  NUM_EVIDs
};

enum _AtOrigFailReleaseReason /* see scc_data.h */
{
  General_orig_fail,
  Cancel_orig_fail,
  Inetrcept_orig_fail,
  Reorder_orig_fail,
  Release_orig_fail,
  Reject_orig_fail,
  Disabled_orig_fail,
  Busy_orig_fail,
  Invalid_cfg_orig_fail,
  Paged_orig_fail,
  Releasing_orig_fail,
  Amps_orig_fail,
  No_Release_reason,
  Normal_release_reason,
  Fade_release_reason,
  Disabled_release_reason,
  Rejected_release_reason,
  Swicth_complete_release_reason,
  Swicth_fail_not_connected,
  Svctype_mismatch_release_reason
};

typedef kal_uint8 AtUnexpectedEventId;

typedef  struct
{
  kal_uint8 bcs;
  kal_uint8 bcl;
}   AtCbc;

typedef  struct
{
  kal_uint8  direction;
  kal_bool   compressionNegotiation;
  kal_uint16 maxDict;
  kal_uint8  maxString;
}   AtDs;

typedef  struct
{
  kal_uint8 sqm;
  kal_uint8 fer;
}   AtCsq;

typedef  struct
{
  AtBandClass bandClass;
  char band;
  kal_uint16 sid;
}   AtCss;

typedef  struct
{
  kal_uint8 breakSelection;
  kal_bool timed;
  kal_uint8 defaultLen;
}   AtEb;

typedef  struct
{
  kal_uint8 origRqst;
  kal_uint8 origFbk;
  kal_uint8 ansFbk;
}   AtEs;

typedef  struct
{
  kal_uint8 pendingTd;
  kal_uint8 pendingRd;
  kal_uint8 timer;
}   AtEtbm;

typedef  struct
{
  kal_bool sub;
  kal_bool sep;
  kal_bool pwd;
}   AtFap;

typedef  struct
{
  kal_bool vr;
  kal_uint8 br;
  kal_uint8 wd;
  kal_uint8 ln;
  kal_uint8 df;
  kal_bool ec;
  kal_bool bf;
  kal_uint8 st;
}   AtFcc;

typedef  struct
{
  kal_uint8 rq;
  kal_uint8 tq;
}   AtFcq;

typedef  struct
{
  kal_uint8 vrc;
  kal_uint8 dfc;
  kal_uint8 lnc;
  kal_uint8 wdc;
}   AtFfc;

typedef  struct
{
  kal_bool rpr;
  kal_bool tpr;
  kal_bool idr;
  kal_bool nsr;
}   AtFnr;

#define MAX_FIF_LEN 90

typedef  struct
{
  kal_uint8 buf[MAX_FIF_LEN];
  kal_uint8 len;
}   AtFif;

typedef  struct
{
  kal_uint8 pgl;
  kal_uint8 cbl;
}   AtFrq;

typedef  struct
{
  kal_uint8 format;
  kal_uint8 parity;
}   AtIcf;

typedef  struct
{
  kal_uint8 dceByDte;
  kal_uint8 dteByDce;
}   AtIfc;

typedef  struct
{
  kal_uint8 carrier;
  kal_bool automode;
  kal_uint16 minRate;
  kal_uint16 maxRate;
  kal_uint16 minRxRate;
  kal_uint16 maxRxRate;
}   AtMs;

typedef  struct
{
  kal_uint8 mode;
  kal_uint8 dfltAnsMode;
  kal_bool fbkTimeEnable;
}   AtMv18s;

/* Compression direction bit definitions */
#define CMP_DIR_DTE_TO_DCE BIT0
#define CMP_DIR_DCE_TO_DTE 0x02

/* DPD Baud rate bit definitions */
/* BIT0 reserved for auto-baud */
#define BR_NONE       0
#define BR_300        0x02
#define BR_1200       0x04
#define BR_2400       0x08
#define BR_4800       0x10
#define BR_9600       0x20
#define BR_19200      0x40
#define BR_38400      0x80
#define BR_57600      0x100
#define BR_115200     0x200
#define BR_230400     0x400


typedef  struct
{
   kal_uint8        Mode;
   kal_uint8        Subset;
   kal_uint8        PortSpeed;
   kal_uint16       N1;
   kal_uint8        T1;
   kal_uint8        N2;
   kal_uint8        T2;
   kal_uint8        T3;
   kal_uint8        K; 
}  AtMuxParmsT;

enum
{
    AT_CHAN_PPP = 0, /* used for AT and DATA*/
    AT_CHAN_ATCMD_1,  /* AT only, include the Enhanced AT commands*/
#ifdef SYS_OPTION_ATCMD_CH_2
    AT_CHAN_ATCMD_2,/* AT only, include the Enhanced AT commands*/
#ifdef SYS_OPTION_ATCMD_CH_3
    AT_CHAN_ATCMD_3, 
#ifdef SYS_OPTION_ATCMD_CH_4
    AT_CHAN_ATCMD_4,    
#ifdef SYS_OPTION_MORE_AT_CHANNEL
    AT_CHAN_ATCMD_5,
    AT_CHAN_ATCMD_6,
    AT_CHAN_ATCMD_7,
    AT_CHAN_ATCMD_8,
#endif /* SYS_OPTION_MORE_AT_CHANNEL */
#endif /* SYS_OPTION_ATCMD_CH_2 */
#endif /* SYS_OPTION_ATCMD_CH_3 */
#endif /* SYS_OPTION_ATCMD_CH_4 */
#ifdef MTK_DEV_ETS_ENHANCEMENT
    AT_CHAN_ETS,
#endif
    AT_CHAN_NUM
};
#ifdef SYS_OPTION_MORE_AT_CHANNEL
#define AT_EXTRA_CHAN_NUM 4
#else
#define AT_EXTRA_CHAN_NUM 3
#endif

#ifdef MTK_DEV_C2K_IRAT
#ifdef MTK_DEV_ETS_ENHANCEMENT
#define    MAX_AT_CHAN_NUM_FOR_AP   AT_CHAN_ETS - 1
#else
#define    MAX_AT_CHAN_NUM_FOR_AP   AT_CHAN_NUM - 1
#endif
#endif    

#define AT_MUX_EN_BIT 1
#define AT_IOP_MUX_EN_BIT 2

#endif /* _AT_DATA_H */
