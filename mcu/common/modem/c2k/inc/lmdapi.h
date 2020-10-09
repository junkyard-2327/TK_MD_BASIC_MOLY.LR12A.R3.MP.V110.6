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
* Copyright (c) 1998-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef _LMDAPI_H_
#define _LMDAPI_H_
/*****************************************************************************
* 
* FILE NAME   : lmdapi.h
*
* DESCRIPTION :
*
*   This is the interface include file for LMD.
*   It is organized by first defining the EXE mailboxes and signals used.
*   After this, the enumerated message IDs are defined.  Basic typedefs follow
*   this and Following that is the message structure for each message.
*
*   NOTE: At the end of the file are typedefs that the PS had expected to find in
*         this file during CBP3 development.  These are included here as a temporary
*         workaround until these issues can be resolved.
*
* HISTORY     :
*   See Log at end of file
*
*****************************************************************************/


/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/

#include "sysdefs.h"
#include "sysapi.h"
#include "rlpwapi.h"
#include "lmd_msgid.h"
#include "lmd_audio.h"

/*----------------------------------------------------------------------------
* EXE Interfaces - Definition of Signals and Mailboxes
*----------------------------------------------------------------------------*/
/* array size for long code mask */
#define LMD_LONG_CODE_MASK_SIZE     6
#define MOD_DUMMY                   0

/* Voice Memo prefetch buffer size = (max size frame + the rate word) X 4.
 *
 * LMD defines a static buffer SpchData[] where it prefetches the speech
 * data during voice memo or answering machine playback.  There are
 * conditions where FSM is late in doing the block reads and LMD would
 * be starving of data.  By making the buffer size 4 times bigger than
 * the maximun speech packet size we guarantee that LMD will always have
 * at least one packet in prefetch buffer.
 */

/*---------------------------------------------------------------
*  Message IDs for signals and commands sent to LMD
*---------------------------------------------------------------*/
/* Maximum number of SCH */

#ifdef SYS_OPTION_SCH_RAM_INUSE
#define  MAX_PDU_NUM         8  /* now 8 for one SCH */
#else
#define  MAX_PDU_NUM         1  /* now 8 for one SCH */
#endif

#define MAX_ACCESS_MSG_LEN          111
#define MAX_MSG_LEN                 255
#define PCH_FRAME_LEN               24
#define MAX_FCH_FRAME_BYTE_LEN      34

/*
** Messages of LmdCmdMsgIdT type
** should be sent to the LMD_CMD_MAILBOX.
*/
#include "lmd_msgid.h"


/*Move some structures form dspmapi.h to here*/
/* Forward channel modem channel buffer sizes in kal_uint16 */
#define IPC_DTA_MBOX_M2C_CH0_SIZE     17
#define IPC_DTA_MBOX_M2C_CH1_SIZE     30
#define IPC_DTA_MBOX_M2C_CH2_SIZE     47

/* Reverse channel modem channel buffer sizes in kal_uint16 */
#define IPC_DTA_MBOX_C2M_CH0_SIZE     17
#define IPC_DTA_MBOX_C2M_CH1_SIZE     17
#define IPC_DTA_MBOX_C2M_CH2_SIZE     390
/* Reverse channel signaling buffer size in kal_uint16 */
#define IPC_DTA_MBOX_C2M_SIGBUF_SIZE  5

/* define for varais in lmddbuf.c*/
#define  IPC_DTA_MBOX_C2M_CH0_SIZE_IN_DB_WORDS 9
#define  IPC_DTA_MBOX_C2M_CH2_SIZE_IN_DB_WORDS 195

typedef enum
{
   LMD_REV_NULL_CHNL        = 0,
   LMD_REV_ACCESS_CHNL,
   LMD_REV_EACH_CHNL,
   LMD_REV_TRAFFIC_CHNL
} LmdRevChanTypeT;

typedef enum                      /* Rev fch rate */
{
  R_FULL = 0,
  R_HALF,
  R_QUARTER,
  R_EIGHTH,
  R_ZERO
} LmdRevFundRateTypeT;

typedef enum
{
   IPC_FWD_FRAME_BLANK       = 0x0,
   IPC_FWD_FRAME_EIGHTH      = 0x1,
   IPC_FWD_FRAME_QUARTER     = 0x2,   /* not used for SSO 3 */
   IPC_FWD_FRAME_HALF        = 0x3,
   IPC_FWD_FRAME_FULL        = 0x4,
   IPC_FWD_FRAME_ERASURE     = 0xE,
   IPC_FWD_FRAME_FULL_LIKELY = 0xF    /* used only for SSO's 1&3 */
} LmdFwdFrameRateT;

typedef enum
{
   FER_FCH = 0,
   FER_SCH,
   FER_MAX_CHANNELS
} LmdFerStatsChannelsT;

typedef enum
{
   FSYNC,
   FPAGE,
   FBCCH,
   FQPCH,
   FCPCCH,
   FCACH,
   FCCCH,
   FDCCH,
   FFCH,   /* also for traffic channel in IS95 FTCH */
   FSCH,
   F_MON_CHNL,
   FPDCH,
   FWD_MAX_CHNL_TYPS
} LmdFwdChnlTypeT;

/*---------------------------------------------------------------
*  Basic Types
*---------------------------------------------------------------*/

/*
** The Logic To Physical Mapping (LPM) table is used in
** the service configuration messages.
*/
#define MAX_LPM_ENTRIES 15

typedef struct
{
    kal_uint8    SrId;
    kal_uint8    LogicalResource;
    kal_uint8    PhysicalResource;
    kal_bool     ForwardFlag;
    kal_bool     ReverseFlag;
    kal_uint8    Priority;
} LmdLpmT;


/*---------------------------------------------------------------
*  Message Definitions
*       There is a section for each defined message type.  If
*       there is no MsgT shown, there is no data associated with
*       the message.
*---------------------------------------------------------------*/

/*LMD_L1D_FWD_DATA_IND_MSG*/
typedef struct
{
    kal_bool   FchChnlQuality;
    kal_bool   SchChnlReady;
    kal_bool   SchChnlQuality;
    kal_uint16 FchEbNt;
    kal_uint16 DecodeSucPcgIndex;
    kal_uint16 AckReceivePcgIndex;
    LmdFwdFrameRateT FchRate;
    kal_uint16 FchDataLength;
    kal_uint16 SchEbNt;
    kal_uint16 SchDataLength;
    kal_uint32  *FchDataAddress;
    kal_uint32  *SchDataAddress;
} LmdL1dFwdDataIndMsgT;








/* 
** LMD_REVERSE_ACCESS_SIG_MSG
*/
typedef struct
{       
    kal_uint8   MsgLength;  /* Length of the message in bytes */
    kal_uint8   MsgData[MAX_ACCESS_MSG_LEN]; /* Starting address of the message            */
}  LmdReverseAccessSigMsgT;

/* The follwoing is for EACH frame durations*/
typedef enum
{
	LMD_FRAME_DURATION_5MS,
	LMD_FRAME_DURATION_10MS,
	LMD_FRAME_DURATION_20MS
}LmdFrameDurationT;

/* 
** LMD_EACH_SIG_MSG
*/
typedef struct
{ 
    kal_uint16            FrameNumBits;   /* number of bits per frame */
	LmdFrameDurationT FrameDuration; /* Frame duration of EACH:5ms,10ms,20ms*/
    kal_uint16            MsgLength;      /* Message length in bytes */
    kal_uint8             MsgData[1];     /* Starting address of the message */
} LmdReverseEACHSigMsgT;

/* 
** LMD_REVERSE_TRAFFIC_SIG_MSG
*/
typedef struct
{
    kal_uint8   PrevInUse;  /* minimum of mob_p_rev and p_rev */
    kal_uint8   retryCount;
    kal_uint16  MsgLength;  /* Length of message in bytes */
    kal_uint8   MsgData[MAX_MSG_LEN];
} LmdReverseTrafficSigMsgT;

/*
** LMD_ACCESS_PROBE_ABORT_MSG
*/

/* 
** LMD_TRAFFIC_CHAN_START_MSG
*/
typedef struct
{
    kal_uint8     LcMask[LMD_LONG_CODE_MASK_SIZE];    /* Long code Mask */
    kal_uint8     ChInd;          /* Channel Indicator: 1=FCH, 2=DCCH, 3=BOTH */
								/* Note that the ch_ind has additional new entries 
												corresponding to the ExtChInd for PDCH channel 
												configurations, as follows:
	        									4 = FPDCH_FCPCCH_RFCH,
        										5 = FPDCH_FCPCCH_RDCCH,
        										6 = FPDCH_FFCH_RFCH,
        										7 = FPDCH_FDCCH_RDCCH,
        										8 = FPDCH_RFCH_FFCH_RDCCH,
        										9 = FPDCH_RFCH_FFCH_RDCCH_FDCCH   */

    kal_uint16    ForMuxOption;
    kal_uint16    RevMuxOption;
    kal_uint8     ForRc;          /* RC for FCH and DCCH, see Table 3.7.2.3.2.21-3 */
    kal_uint8     RevRc;          /* RC for FCH and DCCH, see Table 3.7.2.3.2.21-3 */
    kal_uint8     NumLpmEntries;
    LmdLpmT   LpmEntries[MAX_LPM_ENTRIES];
    kal_uint8     FrameOffset;
} LmdTrafficChanStartMsgT;

/* 
** LMD_SERVICE_CONFIGURATION_MSG
*/
#define     LMD_MAX_CON_REC     5
#define     LMD_MAX_SCH_NUM     2

typedef enum
{
    LMD_NO_TRAFFIC,
    LMD_PRIMARY_TRAFFIC,
    LMD_SECONDARY_TRAFFIC
} LmdTrafficTypeT;

typedef struct
{
    kal_uint8           ConRef;         /* service option connection reference  */
    kal_uint16          ServiceOption;  /* associated service option    */
    LmdTrafficTypeT ForTraffic;     /* forward traffic type */
    LmdTrafficTypeT RevTraffic;     /* reverse traffic type */
    kal_uint8           SrId;
} LmdConnectionRecordT;

typedef struct
{
   kal_uint8         SchId;
   kal_bool          Coding; /*  True-- Turbo is On */
   kal_uint16        SchMux; /* MuxOption of */
   kal_uint8         SchRc;
} LmdSchChanConfigT;

typedef struct
{
    kal_uint16              ForMuxOption;
    kal_uint16              RevMuxOption;
    kal_uint8               ForNumBits;
    kal_uint8               RevNumBits;
    kal_uint8               NumConRec;
    LmdConnectionRecordT    ConRec[LMD_MAX_CON_REC];        
    kal_bool                FchCcIncl;            
    SysFchFrameSizeT    FchFrameSize;       /* valid only if FchCcIncl = 1 */
    kal_uint8               FchForRc;
    kal_uint8               FchRevRc;
    kal_bool                DcchCcIncl;
    SysDcchFrameSizeT   DcchFrameSize;      /* valid only if dcch_cc_incl = 1 */
    kal_uint8               DcchForRc;
    kal_uint8               DcchRevRc;
    kal_bool                ForSchCcIncl;
    kal_uint8               NumForSch;          /* Number of Fwd SCH*/
    LmdSchChanConfigT   ForSchConfig[LMD_MAX_SCH_NUM];
    kal_bool                RevSchCcIncl;
    kal_uint8               NumRevSch;          /* number of Rev SCH*/
    LmdSchChanConfigT   RevSchConfig[LMD_MAX_SCH_NUM];

    kal_bool                ForPdchCcIncl;		/* If T, the following F-PDCH fields apply */
    kal_uint16              ForPdchMuxOption;         
    kal_uint8   			ForPdchRc;   
} LmdServiceConfigurationT;

/*used for lmdsrvcfg.c*/
typedef struct
{
   kal_uint8           FwdLogicalRes;
   kal_uint8           FwdPhysicalResCount;
   kal_uint8           FwdPhysicalRes;/* bit map */
   kal_uint8           FwdPhysicalResOn;
   LmdTrafficTypeT FwdTraffic;
}ForwardConfigT;

typedef struct
{
   kal_uint8           RevLogicalRes;
   kal_uint8           RevPhysicalResCount;
   kal_uint8           RevPhysicalRes;/* bit map*/
   kal_uint8           RevPhysicalResOn;
   LmdTrafficTypeT RevTraffic;
}ReverseConfigT;

typedef struct
{
   LmdServiceOptionT ServiceOpt;
   kal_uint16        SvcTaskId;
}ServiceConfigT;

typedef struct
{
   kal_uint8          priority;
   ForwardConfigT forward;
   ReverseConfigT reverse;
   ServiceConfigT service;
}LmdSridDataT;

typedef struct
{
    LmdServiceConfigurationT SrvcConfig;    /* traffic channel service configuration */
    SysActionTimeT           ActTime;       /* Time this message takes effect */
    kal_bool                     SrvcConfigNonNegInc;
} LmdServiceConfigurationMsgT;


/* 
** LMD_SERVICE_CONFIG_NN_MSG
*/
typedef struct
{
    kal_uint8           NumLpmEntries;
    LmdLpmT         LpmEntries[MAX_LPM_ENTRIES];
    SysActionTimeT  ActTime;         /* Time this message takes effect */
} LmdServiceConfigurationNnMsgT;

typedef struct
{
   SysActionTimeT    ActTime;       /* system time (uint=20 ms) to  */
                                    /* send message                 */
   LmdServiceOptionT ServiceOption; /* service option number        */
   kal_uint8             ConRef;        /* connection reference being controled */
   kal_uint8             DataSize;      /* control data size in bytes   */
   kal_uint8             Data[MAX_MSG_LEN];       /* control data                 */
} LmdServiceOptionControlMsgT;

/* 
** LMD_CONVERSATION_SUBSTATE_CONN_MSG
*/

/* 
** LMD_CONVERSATION_SUBSTATE_DISC_MSG
*/

/* 
** LMD_PWR_CTL_PARMS_MSG
*/
typedef struct
{ 
   kal_uint8    ChanMonitor;           /* 0 = FCH, 1 = DCCH */
   kal_bool     PwrThreshEnable;
   kal_uint8    PwrRepThresh;
   kal_bool     PwrPeriodEnable;
   kal_uint8    PwrRepFrames;
   kal_uint8    PwrRepDelay;
   kal_bool     ResetFPC;
} LmdPwrCtlParmsMsgT;


typedef struct 
{
   kal_uint16 ParmId;
   kal_uint32 Value;
} LmdRevStatT;

typedef struct
{
   kal_uint16      NumRecs;
   LmdRevStatT Rec[1];
} LmdRevStatSetMsgT;

typedef enum
{
   LMD_FULL_RATE     = 0x80,
   LMD_HALF_RATE     = 0x40,
   LMD_QUARTER_RATE  = 0x20,
   LMD_EIGHTH_RATE   = 0x10,
   LMD_NULL_RATE     = 0x00
} LmdRatesT;


 /*
 ** LMD_RLP_REV_FUNDICATED_DATA_REQ_MSG
 */
 
#define MAX_FUNDICATED_FRAME_SIZE 34   /* Max. size per RLP frame in byte.  */
 typedef struct
 {
   kal_uint8  priSrId;                /* SR_ID for Primary Traffic     */
   SysRlpFrameRateE priRate;      /* frame rate for primary        */ 
   kal_uint8  priData[MAX_FUNDICATED_FRAME_SIZE];  /* data buffer for primary       */
     
   kal_uint8  secSrId;                /* SR_ID for Secondary Traffic   */
   SysRlpFrameRateE secRate;      /* frame rate for secondary      */
   kal_uint8  secData[MAX_FUNDICATED_FRAME_SIZE];  /* data buffer for secondary     */
 } LmdRevFundicatedDataReqMsgT;

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
#endif
/*
** LMD_RLP_REV_SCH_DATA_REQ_MSG
*/
#define NUM_RSCH_FRAMES                   8
#define REV_SCH_NON_RLP_IND           0xFF
#define REV_SCH_RLP_IND                   0

 typedef struct
 {
   kal_uint8      srId;
   kal_uint8      frameFormat; /* The first 2 bits of RLP frame at SCH goes to the lower
                                   2 bits of frameType */
   SysRlpFrameRateE frameRate;      /* The number of byte */
   kal_uint8     pduType;  /* MuxPdu Type used for TDSO */
   kal_uint16   frameLen;
   kal_uint8*    dataPtr;
 } LmdPduT;
 
 typedef struct
 {
   kal_uint8       schUser;    /* Used to indicate if RLP or TDSO uses R-SCH */
   kal_uint8        numSchFrames; /* Number of PDU data packets    */
   LmdPduT  schFrames[NUM_RSCH_FRAMES];    /* data type defined in PDUOctet */
 } LmdRevSchDataReqMsgT;

/*
** LMD_SCCH_REV_DATA_MSG
*/
typedef  struct
{
   kal_bool       IsSecondary;    /* False=Primary, True=Secondary */
   kal_uint8      NumberOfSCCH;   /* Number of SCCH included       */
   kal_uint8*     Data[7];        /* data pointed by Data          */
} LmdScchRevDataMsgT;

/*
** LMD_SEC_HIGH_MSG,
*/
typedef struct
{
   kal_bool SecPriorityHigh;
} LmdSecHighMsgT;

typedef enum
{
   LMD_TRANSMITTER_STATUS_ON, /* Transmitter is off */
   LMD_TRANSMITTER_STATUS_OFF /* Transmitter is on */
} LmdTransmitterStatusT;

/*
** LMD_TRANSMITTER_STATUS_MSG,
*/
typedef struct
{
   LmdTransmitterStatusT Status;
}  LmdTransmitterStatusMsgT;

/*
** LMD_SET_STAT_CNT_MSG,
*/

typedef  struct {
   kal_uint8          Offset;              /* Offset from first element     */
   kal_uint32         Value;               /* Value received from BS        */
}  SetValueT;

/*
** LMD_SET_STAT_CNT_MSG,
*/
typedef struct {
   StatCounterT   StatCounter;         /* Statistics counter            */
   kal_uint8          NumSetValue;         /* Number of set value included  */
   SetValueT      SetValue[MAX_STAT_ELEMENT];
}  LmdSetStatCntMsgT;

/*
** LMD_GET_STAT_CNT_MSG,
*/
typedef struct {
  StatCounterT    StatCounter;         /* Statistics counter */
} LmdGetStatCntMsgT;

/*
** LMD_SET_FER_STATS_NUM_FRAMES_MSG,
*/
typedef struct {
  kal_uint16    NumFrames;                /* Number of frames for running average */
} LmdSetFerStatsNumFramesMsgT;

/*
**LMD_GET_DEBUG_SCRN_INFO_MSG,
*/
typedef struct {
  ExeRspMsgT  RspInfo;                    /* Response routing information */
} LmdGetDebugScrnInfoRequestT;

typedef struct {
  kal_uint16 badframes;
  kal_uint16 totframes;
} LmdGetDebugScrnInfoResponseT;

/*
** LMD_SPEECH_DISABLE_MSG,
*/
typedef struct 
{
   kal_bool Disable;
   kal_bool Restart;    /* KAL_TRUE if speech connection to be restarted, 
                       KAL_FALSE if just disabling routing of speech but remain connected */
} LmdSpeechDisableMsgT;

/****************FSCH muxHwPdu********************/
/* MuxPDU Type Definitions */
typedef enum
{
   LMD_MP_MUXTYPE_1 = 0,
   LMD_MP_MUXTYPE_2,
   LMD_MP_MUXTYPE_3,
   LMD_MP_MUXTYPE_5,
   LMD_MP_MUXTYPE_MAX
} LmdMpMuxTypeT;

/* MuxPDU Header */
typedef struct
{
   kal_uint16      sr_id;
   kal_uint16      Len;
   kal_uint16      ExtHeader;
   kal_uint16      Padding[1];
   CpBufferT       *MpBufPtr;            /* MuxPDU RAM buffer pointer */
} LmdSchHeaderT; /* 12 bytes */

/* MuxPDU Configuration */
typedef struct
{
   kal_uint8       MuxType;          /* 1/2/3/5 */
   kal_uint16      FrameLength;      /* Frame length in bits - used in BYPASS mode  */
} LmdMpConfigT;

//extern kal_bool LmdMpRawSpyEnabled;
#define  LMD_MP_MAX_PDUS            100

typedef enum
{
   MUX1_REV_FCH_1    = 1,      
   MUX1_REV_FCH_2,     
   MUX1_REV_FCH_3,      
   MUX1_REV_FCH_4,
   MUX1_REV_FCH_5,             
   MUX1_REV_FCH_6,     
   MUX1_REV_FCH_7,      
   MUX1_REV_FCH_8,
   MUX1_REV_FCH_9,     /* Reserved */
   MUX1_REV_FCH_10,    /* Reserved */
   MUX1_REV_FCH_11,            
   MUX1_REV_FCH_12,    
   MUX1_REV_FCH_13,     
   MUX1_REV_FCH_14,
   MUX1_FOR_FCH_1    = 15,     
   MUX1_FOR_FCH_2,     
   MUX1_FOR_FCH_3,      
   MUX1_FOR_FCH_4,
   MUX1_FOR_FCH_5,             
   MUX1_FOR_FCH_6,     
   MUX1_FOR_FCH_7,      
   MUX1_FOR_FCH_8,
   MUX1_FOR_FCH_9,             
   MUX1_FOR_FCH_10,    
   MUX1_FOR_FCH_11,     
   MUX1_FOR_FCH_12,
   MUX1_FOR_FCH_13,            
   MUX1_FOR_FCH_14,
   PAG_1             = 29,    /* number of paging ch messages received         */
   PAG_2,                     /* number of paging ch messages with bad crc     */
   PAG_3,                     /* number of paging ch msgs addressed to mobile  */
   PAG_4,                     /* number of paging ch half frames received      */
   PAG_5,                     /* # pag half frames rec. part of a valid message*/
   PAG_6,                     /* number of times loss of paging ch declared    */
   PAG_7,                     /* number of idle handoffs                       */   
   ACC_1             = 36,    /* number of layer 3 requests messages generated */
   ACC_2,                     /* number of layer 3 response messages generated */
   ACC_3,                     /* number of times access probe was gen. 2 times */
   ACC_4,                     /* number of times access probe was gen. 3 times */
   ACC_5,                     /* number of times access probe was gen. 4 times */
   ACC_6,                     /* number of times access probe was gen. 5 times */
   ACC_7,                     /* number of times access probe was gen. 6 times */
   ACC_8,                     /* number of unsuccessful access attempts        */
   LAYER2_RTC1       = 44,     
   LAYER2_RTC2,        
   LAYER2_RTC3,         
   LAYER2_RTC4,
   LAYER2_RTC5,
   OTHER_SYS_TIME    = 49,
   MUX2_REV_FCH_1    = 50,     
   MUX2_REV_FCH_2,     
   MUX2_REV_FCH_3,      
   MUX2_REV_FCH_4,
   MUX2_REV_FCH_5,             
   MUX2_REV_FCH_6,     
   MUX2_REV_FCH_7,      
   MUX2_REV_FCH_8,
   MUX2_REV_FCH_9,             
   MUX2_REV_FCH_10,    
   MUX2_REV_FCH_11,     
   MUX2_REV_FCH_12,
   MUX2_REV_FCH_13,            
   MUX2_REV_FCH_14,    
   MUX2_REV_FCH_15,     
   MUX2_REV_FCH_16,
   MUX2_REV_FCH_17,            
   MUX2_REV_FCH_18,    
   MUX2_REV_FCH_19,     
   MUX2_REV_FCH_20,
   MUX2_REV_FCH_21,            
   MUX2_REV_FCH_22,    
   MUX2_REV_FCH_23,     
   MUX2_REV_FCH_24,
   MUX2_REV_FCH_25,            
   MUX2_REV_FCH_26,
   MUX2_FOR_FCH_1    = 76,     
   MUX2_FOR_FCH_2,     
   MUX2_FOR_FCH_3,      
   MUX2_FOR_FCH_4,
   MUX2_FOR_FCH_5,             
   MUX2_FOR_FCH_6,     
   MUX2_FOR_FCH_7,      
   MUX2_FOR_FCH_8,
   MUX2_FOR_FCH_9,             
   MUX2_FOR_FCH_10,    
   MUX2_FOR_FCH_11,     
   MUX2_FOR_FCH_12,
   MUX2_FOR_FCH_13,            
   MUX2_FOR_FCH_14,    
   MUX2_FOR_FCH_15,     
   MUX2_FOR_FCH_16,
   MUX2_FOR_FCH_17,            
   MUX2_FOR_FCH_18,    
   MUX2_FOR_FCH_19,     
   MUX2_FOR_FCH_20,
   MUX2_FOR_FCH_21,            
   MUX2_FOR_FCH_22,    
   MUX2_FOR_FCH_23,     
   MUX2_FOR_FCH_24,
   MUX2_FOR_FCH_25,            
   MUX2_FOR_FCH_26,
   /* reverse SCCH  not supported in CBP4 */
   SCCH1_REV_S       = 102,    
   SCCH1_REV_P,        
   SCCH2_REV_S,         
   SCCH2_REV_P,  
   SCCH3_REV_S,                
   SCCH3_REV_P,        
   SCCH4_REV_S,         
   SCCH4_REV_P,  
   SCCH5_REV_S,                
   SCCH5_REV_P,        
   SCCH6_REV_S,         
   SCCH6_REV_P,  
   SCCH7_REV_S,                
   SCCH7_REV_P,             
   /* forward SCCH  not supported in CBP4 */
   SCCH1_FOR_S       = 116,    
   SCCH1_FOR_P,        
   SCCH2_FOR_S,         
   SCCH2_FOR_P,
   SCCH3_FOR_S,                
   SCCH3_FOR_P,        
   SCCH4_FOR_S,         
   SCCH4_FOR_P,
   SCCH5_FOR_S,                
   SCCH5_FOR_P,        
   SCCH6_FOR_S,         
   SCCH6_FOR_P,
   SCCH7_FOR_S,                
   SCCH7_FOR_P,
   /* MM RTC not supported in CBP4 */
   MM_RTC1           = 130,    
   MM_RTC2,            
   MM_RTC3,             
   MM_RTC4,
   MM_RTC5,
   
   MUX1_REV_FCH_15   = 135,    /* Reserved */      
   MUX1_REV_FCH_5_ms,          /* not supported in CBP4 */
   MUX1_FOR_FCH_15,            /* Reserved */      
   MUX1_FOR_FCH_5_ms,          /* not supported in CBP4 */
   MUX2_REV_FCH_27,            /* Reserved */      
   MUX2_REV_FCH_5_ms,          /* not supported in CBP4 */
   MUX2_FOR_FCH_27,            /* Reserved */      
   MUX2_FOR_FCH_5_ms,          /* not supported in CBP4 */
   
   MUX1_REV_DCCH_1   = 143,    
   MUX1_REV_DCCH_2,    
   MUX1_REV_DCCH_3,     
   MUX1_REV_DCCH_4,
   MUX1_REV_DCCH_5,            
   MUX1_REV_DCCH_6,    
   MUX1_REV_DCCH_7,     
   MUX1_REV_DCCH_8,
   MUX1_REV_DCCH_9,            
   MUX1_REV_DCCH_10,   
   MUX1_REV_DCCH_11,    
   MUX1_REV_DCCH_12,
   MUX1_REV_DCCH_13,           
   MUX1_REV_DCCH_14,   
   MUX1_REV_DCCH_15,   
   MUX1_REV_DCCH_5_ms,  /* not supported in CBP4 */
  
   MUX1_FOR_DCCH_1   = 159,    
   MUX1_FOR_DCCH_2,    
   MUX1_FOR_DCCH_3,     
   MUX1_FOR_DCCH_4,
   MUX1_FOR_DCCH_5,            
   MUX1_FOR_DCCH_6,    
   MUX1_FOR_DCCH_7,     
   MUX1_FOR_DCCH_8,
   MUX1_FOR_DCCH_9,            
   MUX1_FOR_DCCH_10,   
   MUX1_FOR_DCCH_11,    
   MUX1_FOR_DCCH_12,
   MUX1_FOR_DCCH_13,           
   MUX1_FOR_DCCH_14,   
   MUX1_FOR_DCCH_15,   
   MUX1_FOR_DCCH_5_ms,  /* not supported in CBP4 */

   MUX2_REV_DCCH_1   = 175,    
   MUX2_REV_DCCH_2,    
   MUX2_REV_DCCH_3,     
   MUX2_REV_DCCH_4,
   MUX2_REV_DCCH_5,            
   MUX2_REV_DCCH_6,    
   MUX2_REV_DCCH_7,     
   MUX2_REV_DCCH_8,
   MUX2_REV_DCCH_9,            
   MUX2_REV_DCCH_10,   
   MUX2_REV_DCCH_11,    
   MUX2_REV_DCCH_12,
   MUX2_REV_DCCH_13,           
   MUX2_REV_DCCH_14,   
   MUX2_REV_DCCH_15,    
   MUX2_REV_DCCH_16,
   MUX2_REV_DCCH_17,           
   MUX2_REV_DCCH_18,   
   MUX2_REV_DCCH_19,    
   MUX2_REV_DCCH_20, 
   MUX2_REV_DCCH_21,           
   MUX2_REV_DCCH_22,   
   MUX2_REV_DCCH_23,    
   MUX2_REV_DCCH_24,    
   MUX2_REV_DCCH_25,           
   MUX2_REV_DCCH_26,   
   MUX2_REV_DCCH_27,
   MUX2_REV_DCCH_5_ms,  /* not supported in CBP4 */
  
   MUX2_FOR_DCCH_1   = 203,    
   MUX2_FOR_DCCH_2,    
   MUX2_FOR_DCCH_3,     
   MUX2_FOR_DCCH_4,
   MUX2_FOR_DCCH_5,            
   MUX2_FOR_DCCH_6,    
   MUX2_FOR_DCCH_7,     
   MUX2_FOR_DCCH_8,
   MUX2_FOR_DCCH_9,            
   MUX2_FOR_DCCH_10,   
   MUX2_FOR_DCCH_11,    
   MUX2_FOR_DCCH_12,
   MUX2_FOR_DCCH_13,           
   MUX2_FOR_DCCH_14,   
   MUX2_FOR_DCCH_15,    
   MUX2_FOR_DCCH_16,
   MUX2_FOR_DCCH_17,           
   MUX2_FOR_DCCH_18,   
   MUX2_FOR_DCCH_19,    
   MUX2_FOR_DCCH_20, 
   MUX2_FOR_DCCH_21,           
   MUX2_FOR_DCCH_22,   
   MUX2_FOR_DCCH_23,    
   MUX2_FOR_DCCH_24,    
   MUX2_FOR_DCCH_25,           
   MUX2_FOR_DCCH_26,   
   MUX2_FOR_DCCH_27,
   MUX2_FOR_DCCH_5_ms,  /* not supported in CBP4 */

   SCH0_REV_1X       = 231,    
   SCH0_REV_2X,        
   SCH0_REV_4X,         
   SCH0_REV_8X,
   SCH0_REV_16X,             
   SCH0_REV_LTU,       
   SCH0_REV_LTUOK,  /* not supported in CBP4 */

   /*  reverse SCH1 not supported in CBP4 */
   SCH1_REV_1X       = 238,    
   SCH1_REV_2X,        
   SCH1_REV_4X,         
   SCH1_REV_8X,
   SCH1_REV_16X,
   SCH1_REV_LTU,
   SCH1_REV_LTUOK,   /* not supported in CBP4 */

   SCH0_FOR_1X       = 245,    
   SCH0_FOR_2X,        
   SCH0_FOR_4X,         
   SCH0_FOR_8X,
   SCH0_FOR_16X,
   SCH0_FOR_LTU,
   SCH0_FOR_LTUOK,   /* not supported in CBP4 */

   /*  forward SCH1 not supported in CBP4 */
   SCH1_FOR_1X       = 252,    
   SCH1_FOR_2X,        
   SCH1_FOR_4X,         
   SCH1_FOR_8X,
   SCH1_FOR_16X,
   SCH1_FOR_LTU,
   SCH1_FOR_LTUOK,    /* not supported in CBP4 */
   BCCH_1,/* = 259 */      
   BCCH_2,    
   BCCH_3,
   BCCH_4,
   BCCH_5,
   FCCCH_1,
   FCCCH_2,
   FCCCH_3,
   FCCCH_4,
/* EACH */
 #ifdef LMD_EACH_ON
   EACH_BA_1         = 470,
   EACH_BA_2,
   EACH_BA_3,
   EACH_BA_4,
   EACH_BA_5,
   EACH_BA_6,
   EACH_BA_7,
   EACH_BA_8,
 #endif
   PCG_0_FOR_FCH_1 = 661,
   PCG_0_FOR_FCH_2,
   PCG_0_FOR_FCH_3,
   PCG_0_FOR_FCH_4,
   PCG_1_FOR_FCH_1,
   PCG_1_FOR_FCH_2,
   PCG_1_FOR_FCH_3,
   PCG_1_FOR_FCH_4,
   PCG_2_FOR_FCH_1,
   PCG_2_FOR_FCH_2,
   PCG_2_FOR_FCH_3,
   PCG_2_FOR_FCH_4,
   PCG_3_FOR_FCH_1,
   PCG_3_FOR_FCH_2,
   PCG_3_FOR_FCH_3,
   PCG_3_FOR_FCH_4,
   PCG_4_FOR_FCH_1,
   PCG_4_FOR_FCH_2,
   PCG_4_FOR_FCH_3,
   PCG_4_FOR_FCH_4,
   PCG_5_FOR_FCH_1,
   PCG_5_FOR_FCH_2,
   PCG_5_FOR_FCH_3,
   PCG_5_FOR_FCH_4,
   PCG_6_FOR_FCH_1,
   PCG_6_FOR_FCH_2,
   PCG_6_FOR_FCH_3,
   PCG_6_FOR_FCH_4,
   PCG_7_FOR_FCH_1,
   PCG_7_FOR_FCH_2,
   PCG_7_FOR_FCH_3,
   PCG_7_FOR_FCH_4,
   PCG_8_FOR_FCH_1,
   PCG_8_FOR_FCH_2,
   PCG_8_FOR_FCH_3,
   PCG_8_FOR_FCH_4,
   PCG_9_FOR_FCH_1,
   PCG_9_FOR_FCH_2,
   PCG_9_FOR_FCH_3,
   PCG_9_FOR_FCH_4,
   PCG_10_FOR_FCH_1,
   PCG_10_FOR_FCH_2,
   PCG_10_FOR_FCH_3,
   PCG_10_FOR_FCH_4,
   PCG_11_FOR_FCH_1,
   PCG_11_FOR_FCH_2,
   PCG_11_FOR_FCH_3,
   PCG_11_FOR_FCH_4,
   PCG_12_FOR_FCH_1,
   PCG_12_FOR_FCH_2,
   PCG_12_FOR_FCH_3,
   PCG_12_FOR_FCH_4,
   PCG_13_FOR_FCH_1,
   PCG_13_FOR_FCH_2,
   PCG_13_FOR_FCH_3,
   PCG_13_FOR_FCH_4,
   PCG_14_FOR_FCH_1,
   PCG_14_FOR_FCH_2,
   PCG_14_FOR_FCH_3,
   PCG_14_FOR_FCH_4,
   PCG_15_FOR_FCH_1,
   PCG_15_FOR_FCH_2,
   PCG_15_FOR_FCH_3,
   PCG_15_FOR_FCH_4,
   PCG_0_FOR_SCH_1 = 725,
   ACK_TX_PCG_0_FCH = 805,
   ACK_TX_PCG_1_FCH,
   ACK_TX_PCG_2_FCH,
   ACK_TX_PCG_3_FCH,
   ACK_TX_PCG_4_FCH,
   ACK_TX_PCG_5_FCH,
   ACK_TX_PCG_6_FCH,
   ACK_TX_PCG_7_FCH,
   ACK_TX_PCG_8_FCH,
   ACK_TX_PCG_9_FCH,
   ACK_TX_PCG_10_FCH,
   ACK_TX_PCG_11_FCH,
   ACK_TX_PCG_12_FCH,
   ACK_TX_PCG_13_FCH,
   ACK_TX_PCG_14_FCH,
   ACK_TX_PCG_15_FCH,
   ACK_TX_PCG_0_SCH = 821,
   ACK_RX_PCG_1_FCH = 837,
   ACK_RX_PCG_2_FCH,
   ACK_RX_PCG_3_FCH,
   ACK_RX_PCG_4_FCH,
   ACK_RX_PCG_5_FCH,
   ACK_RX_PCG_6_FCH,
   ACK_RX_PCG_7_FCH,
   ACK_RX_PCG_8_FCH,
   ACK_RX_PCG_9_FCH,
   ACK_RX_PCG_10_FCH,
   ACK_RX_PCG_11_FCH,
   ACK_RX_PCG_12_FCH,
   ACK_RX_PCG_13_FCH,
   ACK_RX_PCG_14_FCH,
   ACK_RX_PCG_15_FCH,
   ACK_RX_PCG_1_SCH = 852,
   END_OF_LIST
 } RetrievableAndSettableParametersT;

typedef enum
{
    R_NULL = 0,
	R_ACCESS,
	R_EACH,
	R_TRAFFIC

}RevChnlTypeT;

typedef struct
{
  kal_bool  CounterSuspend;
} LmdCounterSuspendMsgT;

typedef struct
{
  SysActionTimeT     ActTime;
  kal_uint8              ch_ind;		/* Channel Indicator: 1=FCH, 2=DCCH, 3=BOTH */
									/* Note that the ch_ind has additional new entries 
												corresponding to the ExtChInd for PDCH channel 
												configurations, as follows:
	        									4 = FPDCH_FCPCCH_RFCH,
        										5 = FPDCH_FCPCCH_RDCCH,
        										6 = FPDCH_FFCH_RFCH,
        										7 = FPDCH_FDCCH_RDCCH,
        										8 = FPDCH_RFCH_FFCH_RDCCH,
        										9 = FPDCH_RFCH_FFCH_RDCCH_FDCCH   */
  kal_bool               SrvConfigNonNegInc;
} LmdResourceUpdateT;

/*-----------------------------------------
*   The Forward SCH  Msg.
*------------------------------------------*/

typedef struct
{
  kal_uint8               ForSchId;
  kal_uint8               ForSchDuration;
  kal_uint8               ForSchRate;

} LmdFschRecT;

typedef struct
{
   kal_bool             PilotGatingUseRate;
   kal_bool             ForSchFerRep;
   kal_uint8            NumForSch; /* number of SCH assigned.*/  
   LmdFschRecT      FschRec[2];

} LmdFschMsgT;

typedef struct
{
  kal_uint8 sch_id;
  kal_bool  FinalBurst;
  
} LmdFschBurstEndMsgT;
/*-----------------------------------------
*   The Reverse SCH  Msg.
*------------------------------------------*/
typedef struct
{
  kal_uint8              RevSchId;
  kal_uint8              RevSchDuration;
  kal_uint8              RevSchRate;

} LmdRschRecT;

typedef struct
{
   kal_uint8            RevSchDtxDuration;
   kal_uint8            NumRevSch; /* number of SCH assigned.*/
   LmdRschRecT      RschRec[LMD_MAX_SCH_NUM];
   
} LmdRschMsgT;


/* The Fwd RLP Data Reading Order revert Msg */
typedef struct
{

   kal_bool   ReadSwap;

} LmdFschPduOrderCtrlMsgT;

/*========================================================================================
==========================================================================================
===================== The following sections need to be resolved. ========================
==========================================================================================
========================================================================================*/


typedef enum
{
  LMD_PRIORITY_NO_MSG,
  LMD_PRIORITY_HIGH,  /* send in < 200 msec */
  LMD_PRIORITY_MEDIUM,  /* send in < 300 msec */
  LMD_PRIORITY_LOW  /* send in < 500 msec */
} LmdMsgPriorityT;

/*---------------------------------------------------------------
*  Miscellaneous Typedefs
*       These typedefs are not used in any of the messages defined
*       so far.  They are here in case other units need these definitions
*       to compile.  If they do not eventually move to message definitions,
*       they should be removed from this file.
*---------------------------------------------------------------*/

typedef enum
{
    LMD_FRAME_RATE_FULL,
    LMD_FRAME_RATE_HALF,
    LMD_FRAME_RATE_QUARTER,
    LMD_FRAME_RATE_EIGHTH,
    LMD_FRAME_ERASURE,
    LMD_FRAME_RATE_FULL_LIKELY,
    LMD_FRAME_RATE       = 0x7FFFFFFF
} LmdFrameRateFwdT;

typedef struct
{
   kal_uint8 Frames;
} LmdPowerReportFramesT;

typedef enum
{
  LMD_RTC_PREAMBLE = 0,
  LMD_RTC_SIGNALING_ONLY,
  LMD_RTC_TRAFFIC
} LmdRTCTrafficT;
/* Tx signal Control data type */
typedef enum
{
  LMD_REV_TX_DISABLE =0,
  LMD_REV_TX_ENABLE=1

}LmdTxSignalControlT;

/* PT DATA */
typedef struct
{
    kal_uint16 MsgId;
    IpcCpSpchDataRevChPacketMsgT* PtDataMsgP;
} LmdRevPtDataT;
/* DS FCH DATA */
typedef struct
{
    kal_uint16 MsgId;
    LmdRevFundicatedDataReqMsgT* fchDataMsgP;
} LmdRevDsFchDataT;
/* DS SCH DATA */
typedef struct
{
    kal_uint16 MsgId;
    LmdRevSchDataReqMsgT* schDataMsgP;
}LmdRevDsSchDataT;

/*---------------------------------------------------------------
**  Global function prototypes for use outside LMD
**---------------------------------------------------------------*/
/*--forward channel functions--*/
extern void LmdIpcUpdateFwdStats(LmdFwdChnlTypeT ChnlType, kal_uint16 TotalFrames, kal_uint16 BadFrames);

#if 0
/* under construction !*/
/* under construction !*/
#endif

/*--- Reverse Tx Signal Control handler----------*/
extern void LmdRevTxSignalControl(LmdTxSignalControlT  TxSigControl, RevChnlTypeT Channel, kal_uint8  PcgIdx);


/*--- Rev Sch Transmission Status --- */
extern void LmdRevSchTxStatusSet(kal_bool RschTxAllowed);
void LmdGetFrameInfo(kal_uint16 *badframes, kal_uint16 *totframes);

/*--- Interrupt handlers --- */
//extern void LmdMpLisr (void);
//extern void LmdMpFIQIsr (void);

extern void LmdFwdSetFrameOffset (kal_uint8 FrameOffset);
extern void LmdFwdSetFwdBlankingDutyCycles (kal_uint8 FwdBlankingDutyCycle);
extern void LmdFwdSetRevBlankingDutyCycles (kal_uint8 RevBlankingDutyCycle);

/*---------------------------------------------------------------
**  Global variable prototypes for use outside LMD
**---------------------------------------------------------------*/

//extern kal_uint16	LmdFerConsecutiveBadFrames[FER_MAX_CHANNELS]; /* 0: FCH, 1: SCH */
//extern kal_uint16	LmdFerStats[FER_MAX_CHANNELS]; /* 0: FCH, 1: SCH */

/*****************************************************************************
* End of File
*****************************************************************************/
#endif
/**Log information: \main\Trophy_SO73\1 2013-07-10 07:00:01 GMT yanliu
** HREF#0000: 1x advance SD 20130708_1xAdvanced version merge**/
/**Log information: \main\2 2013-07-17 08:16:12 GMT yanliu
** HREF#0000: 1x advance SD 20130708_1xAdvanced version merge**/

