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
* Copyright (c) 2003-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*******************************************************************************
 *
 * File Name:       RLP_API.h
 *
 * Creation Date:   Jan. 6, 2004
 *
 * Description    : It contains RLP API and the related data structure
 *
 *******************************************************************************
 ******************************************************************************/

#ifndef __RLP_API_H__
#define __RLP_API_H__

/*******************************************************************************
    Include Header Files
    (No absolute paths - paths handled by make file)
*******************************************************************************/
#include "sysdefs.h"
#include "cpbuf.h"
#include "rlp_msgid.h"

#include "module_msg_range.h"
/*******************************************************************************
    Macros
*******************************************************************************/
#define RLP_MAX_SPY_LEN             64   /* Max size for Monspy output  */
#define RLP_IOP_MAX_REV_SIZE        120  /* Max size per IOP->RLP data xfer at REV link */
                                        
#define RLP_MAILBOX_CMD             EXE_MAILBOX_1_ID
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/*******************************************************************************
    User-Defined Types (Typedefs)
*******************************************************************************/

typedef enum
{
  RLP_PRIMARY_CHANNEL = 0,     /* Do not change  */
  RLP_SECONDARY_CHANNEL,
  NUM_TRAFFIC_CHAN
} RlpChannelSelE;

typedef enum
{
  RLP_NON_TRANSPARENT = 0,    /* Do not change */
  RLP_TRANSPARENT
} RlpModeE;

typedef enum
{
  RLP_RATE_SET1 = 0,           
  RLP_RATE_SET2,
  NUM_RATE_SET
} RlpRateSetE;

typedef enum
{
  RLP_TYPE_1 = 0,   /* Do not change the starting value  */           
  RLP_TYPE_2,
  RLP_TYPE_3,
  NUM_RLP_TYPE
} RlpTypeE;

typedef enum
{
  RLP_FOR_HLP,
  RLP_FOR_IOP,
  RLP_AS_IS
} RlpClientT;

/*******************************************************************************
     Message Definitions 
*******************************************************************************/
/* RLP_PSW_INIT_CFG_MSG */
typedef  struct 
{
  kal_uint8            srId;             /* SR_ID                          */
  RlpChannelSelE   channel;          /* Primary or Secondary Channel.  */
  RlpRateSetE      fwdRateSet;       /* Rate set for forward link.     */
  RlpRateSetE      revRateSet;       /* Rate set for reverse link.     */
  RlpRateSetE      fwdSchRateSet;    /* Rate set for SCH forward link. */
  RlpRateSetE      revSchRateSet;    /* Rate set for SCH reverse link. */
  kal_uint16           fwdSchMuxOpt;     /* Mux option for fwd SCH         */
  kal_uint16           revSchMuxOpt;     /* Mux option for rev SCH         */
  RlpTypeE         rlpType;          /* RLP_TYPE_1, 2 and 3            */
  kal_bool             paramValid;       /* KAL_TRUE: valid in next two params */
  kal_uint32           rand;             /* To generate LTable.            */
  kal_uint8            SSDB[8];          /* To generate Data Key.          */
} RlpInitCfgMsgT;

typedef struct
{
   kal_uint8     RateCtrlParam;          /* Rate control parameter.        */
} RlpRateControlMsgT;

/* RLP_PSW_BLOB_CFG_MSG */
#define RLP3_MAX_ROUNDS_FWD  7
#define RLP3_MAX_ROUNDS_REV  7

typedef  struct 
{ 
  kal_bool    revSchSupported;   /* Whether RSCH is supported by BS or not */
  kal_uint16  fwdSchMuxOpt;      /* Mux option for fwd SCH                 */
  kal_uint16  revSchMuxOpt;      /* Mux option for rev SCH                 */
  kal_uint16  fwdPdchMuxOpt;     /* Mux option for fwd PDCH                */
  
  kal_uint8   rlpBlobType;
  kal_uint8   rlpVersion;

  kal_uint8   rtt;
  kal_uint8   ddw;
  kal_uint8   rexmit_timer;
  kal_bool    initVar;

  kal_uint32  bsExtSeqM;
  kal_uint32  msExtSeqM;
  
  kal_uint8   maxMsNakRoundsFwd;
  kal_uint8   maxMsNakRoundsRev;
  kal_uint8   nakRoundsFwd;
  kal_uint8   nakRoundsRev;

  kal_uint8   nakPerRoundFwd[RLP3_MAX_ROUNDS_FWD];
  kal_uint8   nakPerRoundRev[RLP3_MAX_ROUNDS_REV];
} RlpBlobMsgT; 

typedef struct
{
  kal_uint8            SrId;            /* SR_ID                          */
  RlpChannelSelE   ChannelSel;      /* Primary or Secondary Channel.  */
  RlpModeE         ModeType;        /* Non/transparent mode.          */
  RlpClientT       Client;
  kal_uint16           InActTimeOut;    /* 0 = disable, non_zero = number
                                       of 20 msec frames.             */
  ExeRspMsgT       fwdDataDest;     /* Destination for forward data.  */
  kal_bool             reOpen;          /* indicate it's a reopen triggered by RLP open failed. */
} RlpOpenMsgT;


/* RLP_AIW_CLOSE_CFG_MSG */
/* RLP_HLW_CLOSE_CFG_MSG */
typedef struct 
{
  kal_uint8            SrId;            /* SR_ID                          */
  RlpChannelSelE   ChannelSel;      /* Primary or Secondary Channel.  */
  kal_bool             FlushPending;    /* KAL_TRUE, to flush any pending RLP */
                                    /* data frame.                    */
                                    /* KAL_FALSE, RLP to transmit any     */
                                    /* pending data before close.     */               
} RlpCloseMsgT;


/* RLP_AIW_INACT_TIMEOUT_CFG_MSG */
/* RLP_HLW_INACT_TIMEOUT_CFG_MSG */
typedef struct 
{
  kal_uint8            srId;            
  RlpChannelSelE   channel;         /* Primary or Secondary Channel.  */
  kal_uint16           timeOutPeriod;   /* unit of second.                */ 
} RlpInActTimeOutMsgT; 

typedef enum
{                              
  SYS_RLP_RATE_BLANK =  0,          /* blank rate                     */
  SYS_RLP_RATE_1_16,                /* 1/16  rate                     */
  SYS_RLP_RATE_1_8,                 /* 1/8   rate                     */
  SYS_RLP_RATE_3_16,                /* 3/16  rate                     */
  SYS_RLP_RATE_1_4,                 /* 1/4 rate                       */
  SYS_RLP_RATE_3_8,                 /* rate 3/8                       */
  SYS_RLP_RATE_7_16,                /* rate 7/16                      */
  SYS_RLP_RATE_1_2,                 /* rate 1/2                       */
  SYS_RLP_RATE_3_4,                 /* rate 3/4                       */
  SYS_RLP_RATE_7_8,                 /* rate 7/8                       */
  SYS_RLP_RATE_1,                   /* full rate                      */
  SYS_RLP_RATE_1x,                  /* 1x rate for SCH                */
  SYS_RLP_RATE_2x,                  /* 2x rate for SCH                */
  SYS_RLP_RATE_TOTAL,               /* number of rates                */
  SYS_RLP_RATE_NON_CRITICAL,        /* NON_CRITICAL                   */
  SYS_RLP_RATE_BAD = 255            /* erasure frame                  */
} SysRlpFrameRateE;

typedef enum
{                              
  B_NEW            = 0x40,
  B_REXMIT         = 0x60,
  Blank            = 0x10,
  A_UnSeg          = 0x00,
  A_Seg            = 0x80,
  Fill_Frame       = 0x90,
  Idle_Frame       = 0xa0,
  SYNC_Frame       = 0xd0,
  SYNC_ACK_Frame   = 0xf0,
  ACK_Frame        = 0xe0,
  NAK_Frame        = 0xc0
} SysRlpFchFrameTypeE;
typedef struct
{
   kal_bool RateAllowed[SYS_RLP_RATE_TOTAL]; /* Table entries to be read  */
                                         /* in the order of entries   */
                                         /* "SysRlpFrameRateE". KAL_TRUE  */
                                         /* if rate is allowed;       */
                                         /* KAL_FALSE, otherwise.         */           
} RlpFrameRateTabT;

/*
 * RLP_LMD_FWD_FUNDICATED_DATA_IND_MSG
 * This message is sent from LMD to indicate a new data frame received
 * on the forward FCH or DCCH
 */
typedef struct
{
  kal_uint8             priSrId;        /* SR_ID for the primary channel     */    
  SysRlpFrameRateE  priRate;        /* frame rate received for primary   */ 
  CpBufferT        *priDataPtr;     /* data received for primary, null   */
                                    /* if PrimaryRate is blank or bad    */
  kal_uint8             secSrId;        /* SR_ID for the secondary channel   */
  SysRlpFrameRateE  secRate;        /* frame rate received for secondary */
  CpBufferT        *secDataPtr;     /* data received for secondary, null */
                                    /* if SecondaryRate is blank or bad  */
} RlpFwdFundicatedDataIndMsgT;

typedef enum
{
  FORMAT_D = 0,
  FORMAT_AB,
  FORMAT_C_NEW,
  FORMAT_C_REXMIT,
  FORMAT_A,              
  FORMAT_B
} RlpFrmFormatE;

typedef struct
{
  kal_uint8          srId;
  RlpFrmFormatE  frameFormat;  
  kal_uint8          offset;
  kal_uint8          reserved;          /* Word alignment */
  kal_uint16         frameLen;
  CpBufferT     *dataCpPtr;
} RlpFrameInfoT;

/* RLP_LMD_FWD_SCH_DATA_IND_MSG */
#define NUM_FSCH_FRAMES    16
typedef struct
{
  kal_uint8          numRlpFrames;      /* The number of RLP frames  */
  RlpFrameInfoT  rlpFrame[NUM_FSCH_FRAMES];    
}RlpFwdSchDataIndMsgT;

/* RLP_LMD_FWD_PDCH_DATA_IND_MSG */
#define NUM_FPDCH_FRAMES      20  
typedef struct
{
   kal_uint16        numRlpFrames; 
   RlpFrameInfoT rlpFrame[NUM_FPDCH_FRAMES];
}RlpFwdPdchDataIndMsgT;

/* RLP_LMD_REV_DTCH_DATA_AVAIL_IND_MSG */
typedef struct 
{ 
  ExeRspMsgT          rspMsg;       /* required response message            */ 
  kal_uint8               priSrId;      /* SR_ID for the primary channel        */ 
  SysRlpFrameRateE    priRate;      /* The highest frame rate for primary   */ 

  kal_uint8               secSrId;      /* SR_ID for the secondary channel      */ 
  SysRlpFrameRateE    secRate;      /* The highest frame rate for secondary */

  ExeRspMsgT          schRspMsg;    /* The Rev Sch's required Rsp msg       */
  kal_uint8               numSchPdu;    /* Number of PDU's allowed              */ 
  SysRlpFrameRateE    schRate;      /* The rate allowed for each MuxPDU     */
  SysMultiplexOptionT schMuxOpt;    /* Current R-SCH assignment Mux Option  */
}RlpRevDataAvailIndMsgT; 

/*  RLP_RLP_MORE_FWD_DATA_AVAIL_IND_MSG */
typedef struct
{
  kal_uint8               srId;      
}RlpFwdMoreDataAvailIndMsgT;

/* RLP_ETS_RESET_STAT_CFG_MSG  */
/* Message body is not needed */

/* RLP_ETS_PEEK_RXQ_STAT_CFG_MSG  */
/* RLP_ETS_PEEK_FRAME_STAT_CFG_MSG  */
typedef struct 
{
  ExeRspMsgT          rspInfo;    
} RlpPeekStatMsgT;

/* RLP_ETS_NUM_FRAME_PER_UPPER_LAYER_IND_CFG_MSG  */
typedef struct 
{
  kal_uint16              numRlpFrames;    
} RlpNumFramesPerIndT;

enum EcdmaSysRlpFramePhyChan_enum
{
  CDMA_SYS_FCH,
  CDMA_SYS_DCCH,
  CDMA_SYS_SCH0,
  CDMA_SYS_SCH1
};

enum EcdmaSysRlpFrameMuxPdu_enum
{
  MUX_PDU1 = 1,
  MUX_PDU2,
  MUX_PDU3
}; 

enum EcdmaSysRlpFramePhyChanRate_enum
{
  CDMA_SYS_PHY_CHAN_RATE_9600,
  CDMA_SYS_PHY_CHAN_RATE_14400,
  CDMA_SYS_PHY_CHAN_RATE_19200,
  CDMA_SYS_PHY_CHAN_RATE_28800,
  CDMA_SYS_PHY_CHAN_RATE_38400,
  CDMA_SYS_PHY_CHAN_RATE_57600,
  CDMA_SYS_PHY_CHAN_RATE_76800,
  CDMA_SYS_PHY_CHAN_RATE_115200,
  CDMA_SYS_PHY_CHAN_RATE_153600,
  CDMA_SYS_PHY_CHAN_RATE_1200,
  CDMA_SYS_PHY_CHAN_RATE_1800,
  CDMA_SYS_PHY_CHAN_RATE_2400,
  CDMA_SYS_PHY_CHAN_RATE_3600,
  CDMA_SYS_PHY_CHAN_RATE_4800,
  CDMA_SYS_PHY_CHAN_RATE_7200,
  CDMA_SYS_PHY_CHAN_RATE_BLANK
 };

#define RLP_SPY_MAX_FRAME_PAYLOAD_LEN   44     /* bytes */

typedef struct
{
  enum EcdmaSysRlpFramePhyChan_enum     CdmaSysRlpFramePhyChan;
  enum EcdmaSysRlpFrameMuxPdu_enum      CdmaSysRlpFrameMuxPdu;
  enum EcdmaSysRlpFramePhyChanRate_enum CdmaSysRlpFramePhyChanRate;
  kal_uint8                                 CdmaSysRlpFrameTimeDelta;
  kal_int16                                 CdmaSysRlpFrameLen;
  kal_uint8                                 CdmaSysRlpFramePayload[RLP_SPY_MAX_FRAME_PAYLOAD_LEN];

} EcdmaSysRlpFrameData;

typedef struct
{
  kal_int32                CdmaSysRlpServiceId;
  EcdmaSysRlpFrameData CdmaSysRlpFrames;
 
} EcdmaSysRlpData;

typedef struct
{
  kal_uint32               timestamp;
  EcdmaSysRlpData      FrameData;
} RlpFrameEvent;

typedef struct
{
   kal_bool                bStatusReport;
} RlpActivityStatusQueryMsgT;

typedef enum EcdmaSysRlpFramePhyChanRate_enum RlpRxFrameRateT;
typedef enum EcdmaSysRlpFrameMuxPdu_enum      RlpFrameMuxPduTypeT;
typedef enum EcdmaSysRlpFramePhyChan_enum     RlpFramePhyChanT;


typedef struct 
{
  ExeRspMsgT RspMsg;
} RlpQueryStatMsgT;

typedef enum
{
  RLP_SCH_RATE_1X = 0,
  RLP_SCH_RATE_2X = 1,
  RLP_SCH_RATE_4X = 2,
  RLP_SCH_RATE_8X = 3,
  RLP_SCH_RATE_16X = 4  
}RlpSchRateT;

typedef enum
{
  RLP_SCH_SINGLE_SIZE = 0,
  RLP_SCH_DOUBLE_SIZE = 1
}RlpSchDataBlockSizeT;

typedef struct
{
   kal_int32 CdmaSysServiceId;                        /* Service ID */
   kal_uint32 CdmaSysResetTime;                       /* The system time when RLP stat resets */
   kal_int32 CdmaSysNaksReceived;                     /* Received NAK count */
   kal_int32 CdmaSysReXmitsNotFound;                  /* Invalid NAK count for type 01, 10, 11 plus accumulated
                                                     distance between invalid 00 NAK seq and v_s */
   kal_int32 CdmaSysLargestContigErasure;             /* Maximum count of contiguous erasures received */
   kal_int32 CdmaSysResets;                           /* Reset RLP count */
   kal_int32 CdmaSysAborts;                           /* Abort frame count */
   kal_int32 CdmaSysLastRtt;                          /* Last RTT in counts of 20 msec slot */
   kal_int32 CdmaSysRlpBlobUsed;                      /* 3 when BLOB includes RTT or 1 when not
                                                     (not used currently) */
   kal_int32 CdmaSysRxRexmitFrCnt;                    /* Rx Rexmit data frame count */
   kal_int32 CdmaSysRxIdleFrCnt;                      /* Rx Idle frame count */
   kal_int32 CdmaSysRxFillFrCnt;                      /* Rx Fill frame count */
   kal_int32 CdmaSysRxBlankFrCnt;                     /* Rx Blank frame count */
   kal_int32 CdmaSysRxNullFrCnt;                      /* Rx Null frame (not used currently) */
   kal_int32 CdmaSysRxNewDataFrCnt;                   /* Rx new data frame count */
   kal_int32 CdmaSysRx20msFrCnt;                      /* Rx data frame count */
   kal_int32 CdmaSysRxTotalBytes;                     /* Total bytes received for passing to upper layer */
   kal_int32 CdmaSysRxRlpErasures;                    /* Rx RLP erasures count */
   kal_int32 CdmaSysRxMuxErasures;                    /* Rx MUX erasures count */
   kal_int32 CdmaSysTxRexmitFrCnt;                    /* Tx Rexmit data frame count */
   kal_int32 CdmaSysTxIdleFrCnt;                      /* Tx Idle frame count */
   kal_int32 CdmaSysTxNewDataFrCnt;                   /* Tx new data frame count */
   kal_int32 CdmaSysTx20msFrCnt;                      /* Tx data frame count */
   kal_int32 CdmaSysTxTotalBytes;                     /* Total bytes requested from upper layer sent */
   kal_int32 CdmaSysTxNaksCnt;                        /* Count for the last Tx round set by BLOB */
   kal_int32 CdmaSysTxNaks[7];                        /* Counts for 0 - 7 NAK Tx remaining for a particular
                                                     round when Rx the missing frame */ 
   kal_bool  IsForSchAssigned;                        /*  If forward supplement channel is assigned */
   RlpSchRateT ForSchRate;                        /* Current forward Supplement channel rate */
   RlpSchDataBlockSizeT ForSchDataBlockSize;      /* Current forward SCH data block size */
   kal_uint8 NumForSchUsed;                           /* Number of forward SCH are being used */
   kal_bool IsRevSchAssigned;                         /*  If reverse supplement channel is assigned */
   RlpSchDataBlockSizeT RevSchDataBlockSize;      /* Current reverse SCH data block size */
   RlpSchRateT RevSchRate;                        /* Current reverse Supplement channel rate */ 
   kal_uint8 NumRevSchUsed;                           /* Number of reverse SCH are being used */
} RlpQueryStatIndMsgT;
/*****************************************************************************
* $Log: rlpwapi.h $
* Revision 1.9  2005/05/04 12:46:51  dstecker
* Renamed RLP_ETS_NUM_FRAME_PER_IOP_IND_CFG_MSG to RLP_ETS_NUM_FRAME_PER_UPPER_LAYER_IND_CFG_MSG
* Revision 1.8  2005/01/19 14:40:26  blee
* Added ETS function that peeks RLP RxQ variables
* Revision 1.7  2004/12/10 14:01:37  blee
* Changed RLP blob data structure
* Revision 1.6  2004/10/22 15:10:43  blee
* Adde frame format field for FCH to display into ETS
* Revision 1.5  2004/08/06 16:41:32  blee
* Added ETS message that comes from ETS through IOP.
*
* Created by Brenndon
*****************************************************************************/

#endif /* __RLP_API_H__ */



