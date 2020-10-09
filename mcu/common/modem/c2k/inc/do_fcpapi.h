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
* FILE NAME   : do_fcpapi.h
*
* DESCRIPTION : API definition for FCP (Forward Channnel Processing) Task.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_FCPAPI_H_
#define _DO_FCPAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "do_rupapi.h"
#include "cpbuf.h"
#include "do_slcapi.h"
#include "do_hwdrxpdefs.h"
#include "hlpapi.h"
#ifdef MTK_PLT_ON_PC_UT
#include "do_rcpapi.h"
#endif
#include "kal_public_defs.h"
#include "slc_nvram.h"
#include "do_fcp_msgid.h"


#ifdef EXE_UTE_TST_TASK	 /* test task is ON...*/
  #ifndef DRC_TEST
   #define DRC_TEST
 #endif
#endif


#ifdef SYS_OPTION_DRC_ASIC_TEST /* For ASIC TEST...*/
 #ifndef DRC_TEST
   #define DRC_TEST             1
 #endif
#endif

#ifdef SYS_OPTION_DRC_HW_TEST
 #ifndef DRC_TEST
   #define DRC_TEST
 #endif
#endif

/*
#if  (USE_TST_TASK==KAL_TRUE)
 #ifndef DRC_TEST
   #define DRC_TEST
 #endif
#endif
*/
/* Just turn on the DRC_TEST now...*/
/*   #define  DRC_TEST                  */
/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
#define MAX_TRANS_ATI_NUMBER        10
#define MAX_NUM_AppStream           4

/*----------------------------------------------------------------------------
 Mailbox IDs
----------------------------------------------------------------------------*/
#define FCP_TASK_MAILBOX        EXE_MAILBOX_1_ID
#define FCP_DATA_MAILBOX        EXE_MAILBOX_2_ID

#define FCP_TASK_MAILBOX_EVENT  EXE_MESSAGE_MBOX_1   /* EXE_MAILBOX_1 */
#define FCP_DATA_MAILBOX_EVENT  EXE_MESSAGE_MBOX_2   /* EXE_MAILBOX_2 */

/*----------------------------------------------------------------------------
 * Q-value definitions
----------------------------------------------------------------------------*/
/* Amplitude Log2 value * 6.0206 = 20log10(dBm) value */
#define ALOG2_TO_DBM_CONVERSION_FACTOR_Q10      0x1815

/* X(dBm) = 20 log X = (20 log2 X) / (log2 10),
 * therefore log2 X = 1 / (20 log 2) * X(dBm)
 * 1 / (20 log 2) = 0.16609640474436811... */
#define DBM_TO_ALOG2_CONVERSION_FACTOR_Q16      0x2A85

#define DrcRegisterTypeT       kal_uint16

/*----------------------------------------------------------------------------
     Command Message IDs, for FCP task, for FCP_CMD_MAILBOX, EXE_MAILBOX_1_ID
     The message IDs for components shall also be put in here.
	 Satya: Add all the PKT_SIM related messages into the area that is defined
	 between #ifdef/#endif..Contact me, if you need any clarifications!.
----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
     define signals used by FCP task
----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/
typedef enum {
  CCM_INCONFIG,
  CCM_INUSE,
  CCM_MAX_INSTANCE
} CcmInstanceT;

typedef enum 
{
  CCM_SUPERVISION_EXPIRED_TEST_IDLE,
  CCM_SUPERVISION_EXPIRED_TEST_ACCESS,
  CCM_SUPERVISION_EXPIRED_TEST_FINISH
} CcmSupervisionExpiredTestStateT;

extern  CcmSupervisionExpiredTestStateT   CcmSupervisionExpiredState;
#define CCM_SUPERVISION_FAIL_TEST        (CcmSupervisionExpiredState != CCM_SUPERVISION_EXPIRED_TEST_FINISH)
#define CCM_SUPERVISION_FAIL_TEST_IDLE   (CcmSupervisionExpiredState == CCM_SUPERVISION_EXPIRED_TEST_IDLE)
#define CCM_SUPERVISION_FAIL_TEST_ACCESS (CcmSupervisionExpiredState == CCM_SUPERVISION_EXPIRED_TEST_ACCESS)

typedef PACKED_PREFIX struct {
  kal_uint32  TKeepAliveTransTime;
} PACKED_POSTFIX CcmSmpKeepAliveCfgT;

typedef PACKED_PREFIX struct{
  kal_uint8 ATIType;
  kal_uint32 ATI;
  kal_uint32 SystemTime;
  kal_bool Use;
} PACKED_POSTFIX ATITypeT;

typedef PACKED_PREFIX struct
{
  ATITypeT *RcvATIList;
} PACKED_POSTFIX CcmAmpATIListMsgT;


typedef PACKED_PREFIX struct
{
  kal_uint8      MsgSeq;
  kal_uint8      ChanInc;
  ChanRecGT  Chan;
  kal_uint8      DRCLength;                                /*in unit of slot*/
  kal_int8       DRCChannelGainBase;                       /*in unit of 0.5db, valid range (-9dB,+6dB) */
  kal_int8       ACKChannelGain;                           /* 0.5db, valid range (-3dB,+6dB) */
  kal_uint8      NumPilots;
  kal_uint8      SofterHandoff[SYS_MAX_ACTIVE_LIST_PILOTS];/*1 bit*/
  kal_uint8      MACIndex[SYS_MAX_ACTIVE_LIST_PILOTS];     /* 7 bits, computed MACIndex by LSB&MSB fields*/
  kal_uint8      DRCCover[SYS_MAX_ACTIVE_LIST_PILOTS];     /* 3 bits*/
  kal_uint8      RAChannelGainInc;                         /*1 bits*/
  kal_uint8      RAChannelGain[SYS_MAX_ACTIVE_LIST_PILOTS];/* 2 bits*/
  kal_uint8      DSCChanInc;
  kal_int8       DSCChannelGainBase;                       /*0.5dB*/
  kal_uint8      DSC[SYS_MAX_ACTIVE_LIST_PILOTS];          /* 3 bits each pilot of SofterHandOff=0 */
} PACKED_POSTFIX FTCMACParmsGT;

typedef struct {
  kal_uint32   TimerId;
}PafTimerExpiredMsgT;


typedef enum {
	ACCESSSTREAM=1,
	SERVICESTREAM
}StreamType;


typedef struct {
  kal_bool bXOnOff;
  StreamType StreamID;
} PafHlpFlowCtrlMsgT;

typedef struct {
  StreamConfigAttribT StreamConfigData;
} FcpRcpStreamConfigMsgT;

typedef enum
{
  PAF_Default = 0x0,
  PAF_MultiFlow
}
PafSubTypeT;




#if defined (MTK_PLT_ON_PC)
  typedef struct {
    DatapktlistGT pktList;
  } PafTestRtmDataIndMsgT;
#endif

#ifdef PKT_TEST
  typedef PACKED_PREFIX struct {
    kal_uint8 nAppType;
    kal_uint16 PktLen;
    CpBufferT* CpBufPtr;
    kal_uint16 PktStartOffset;
  } PACKED_POSTFIX  PafOttsFwdDataIndMsgT;
#endif
typedef PACKED_PREFIX struct
{
  kal_uint8 TCAMsgSeq;
} PACKED_POSTFIX FtapRupTrafficChanAssignMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint8 AlmpST;
} PACKED_POSTFIX FtapAlmpStateupdateMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint8 Protocol;
  kal_uint16 SubApp;
} PACKED_POSTFIX FtaprFtapfInitMsgT;

/*  Packet performance measurement */
typedef PACKED_PREFIX struct
{
  kal_uint32    TotalFwdPhySlot;      /* Count how many slots have been used.*/
  kal_uint32    TotalBits;            /* in unit of 128 bit*/
  kal_uint32    BadPackets;           /* missing packet on AT side*/
  kal_uint32    TotalTxPacket;        /* Number of packet sent by AN*/
  kal_uint16    TotalCCPacket;
  kal_uint16    FwdPER;               /* BadPackets/TotalTxPacket*/
  kal_uint16    AN_ThrPut;           /* TotalBits/TotalFwdPhySlot*/
  kal_uint16    AT_ThrPut;           /* TotalBits/time*/
} PACKED_POSTFIX FcpPacketPerfStatT;

extern FcpPacketPerfStatT FcpPacketPerfStat;
extern FcpPacketPerfStatT FtapPacketPerfStat;

/* Periodic packet performance statistics for debug */
typedef PACKED_PREFIX struct
{
    kal_uint32    PeriodStartSystimeFrame;
    kal_uint32    PeriodEndSystimeFrame;
    kal_uint32    CCValidPackets;            /* Number of valid packets received on Control Channel */
    kal_uint32    CCBadPackets;              /* Number of CRC error packets on Control Channel*/
    kal_uint32    CCTotalPackets;            /* Total number of packets on Control Channel*/
    kal_uint32    FTCValidPackets;           /* Number of valid packets received on Forward Traffic Channel */
    kal_uint32    FTCBadPackets;             /* Number of CRC error packets on Forward Traffic Channel */
    kal_uint32    FTCTotalPackets;           /* Total number of packets on Forward Traffic Channel */
    kal_uint32    TotalPackets;              /* Total number of packets on AT side */
} PACKED_POSTFIX FcpPeriodicPacketPerfStatT;

/* MSG_ID_ELT_CCM_SUPERVISION_EXPIRED_RSP_MSG */
typedef PACKED_PREFIX struct 
{
  kal_uint32 Reserved;
} PACKED_POSTFIX  EltCcmSupervisionExpiredRspMsgT;

/* MSG_ID_ELT_CCM_SUPERVISION_EXPIRED_CMD_MSG */
typedef PACKED_PREFIX struct 
{
  CcmSupervisionExpiredTestStateT CcmSupervisionExpiredTestState;
} PACKED_POSTFIX  EltCcmSupervisionExpiredCmdMsgT;

extern FcpPeriodicPacketPerfStatT FcpPeriodicPacketPerfStat;

extern kal_uint8 FtapParamAssignCmpSent;
extern kal_uint32 FcpPerfStartTimeInSlot;
extern void FcpPerfDataReset(kal_uint32 CurTimeInSlot);

extern kal_uint32  TotalSingUserPacketBytes;
extern kal_uint32  TotalMultUserPacketBytes;



typedef struct {
  DatapktlistGT pktList;
} FtapTestRtmDataIndMsgT;

typedef PACKED_PREFIX struct
{
  ExeRspMsgT      RspInfo;
} PACKED_POSTFIX  PafMfpaRlpStatPeekMsgT;

typedef PACKED_PREFIX struct
{
  ExeRspMsgT      RspInfo;
} PACKED_POSTFIX  PafDpaRlpStatPeekMsgT;

typedef struct
{
  kal_timerid     ccmTimerId;
} CcmSupTimerT;


#ifdef MTK_PLT_ON_PC_UT
typedef struct {
    ATITypeT RcvATIList[MAX_TRANS_ATI_NUMBER];
} UtCcmAmpATIListMsgT;

typedef struct {
    kal_uint8    CCShortPacketsMACIndex;
    RcpModeT UtRcpMode;
} UtFcpCcmCommitMsgT;

typedef struct {
    CpBufferT   *bufPtr;
    kal_uint16      offset;
    kal_uint16      dataLen;
} FcpHlpRevDataReqMsgT;

typedef struct {
    kal_uint8                   reqSeq;
    kal_uint8                   ucRsv;
    kal_uint16                  rspAttribDataLen;
    kal_uint8                   AttribId;
    kal_uint8                   aucRsv[3];
} UtFcpFtmSetAttribMsgT;

typedef struct {
    kal_uint8       AttribId;
    kal_uint8       ucRsv[3];
} UtFtmGetAttribMsgT;

typedef struct {
    kal_uint8       AttribId;    
    kal_uint8       usRsv;
    kal_uint16      usLen;
    kal_uint8       *pucData;
} UtFtmGetAttribRspMsgT;

typedef struct FcpFwdPktMsg
{
  kal_uint32    RxDmaStatus;
  kal_uint8     bMacValid[4];
  kal_uint8     MacId[4];
  kal_uint16    MacPacketTimestamp[4];
  kal_uint16    Drc_C2i[4];
  kal_uint32    RxDmaPakcetRec[4];
  CpBufferT     *RxDmaBufPtr[4];
  kal_uint8     PrevFmpMacId[4];
  kal_uint8     CurrFmpMacId[4];
  kal_bool      FmpMacIdChange[4];
  kal_uint16    PacketC2I;
}FcpFwdPktMsgT;/*This message use only on UT, otherwise in 6293, most FCP UT testcase must be changed.*/


#endif /* MTK_PLT_ON_PC_UT */

/*----------------------------------------------------------------------------
 Global Variables
----------------------------------------------------------------------------*/
typedef enum
{
  FAST_2_ch = 0,
  FAST_1_ch,
  SLOW_ch,
  Stationary_ch,
  AWGN_ch,
  NO_Decision_ch,
  Non_Force_chTyp  /* For test mode*/

}DRCChanTypeT;

typedef enum {
   NO_DECISION,
   RLP_ACK,
   RLP_NAK
} RlpAckNakStatusT;

typedef enum {
   CCM_SCP_CONFIG_REQ_MSG           = 0x50,
   CCM_SCP_CONFIG_RSP_MSG           = 0x51
} CcmOTAMsgIdT;

extern RlpAckNakStatusT RlpAckNakStatus;
extern DRCChanTypeT DRCChannelType;

/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/
extern void  DRCFixedTxRateDisable(void);
extern void  DRCParameterReinstate(void);

extern void  FtmFwdTrafficValidFailure(void);

extern kal_bool GetFtapLoopBackMode(void);
extern kal_uint8 GetFixDrcMode(void);


extern kal_uint16 CCCycleStartTime;
extern kal_bool  FirstCCMPktFound;
extern void  FcpGetFwdDataStats(kal_uint32* pRxTotalBytes, kal_uint32* pRxNewDataPkts, kal_uint32* pCurFrameCnt);
extern void  FcpHwTestHwTrigger(kal_uint32 dummy);
extern void  DrcFastChSingleAntImprv(kal_bool enable);
extern kal_uint16 FcpGetFtmSubtype (void);
extern void FcpInit(void);

extern void fcp_process_ilm(ilm_struct *current_ilm);
extern void FcpSendEltMsg(msg_type msg_id, local_para_struct *log_msg_ptr);
extern kal_bool  PafCheckNoData(void);

/*****************************************************************************
* End of File
*****************************************************************************/
#endif
/**Log information: \main\Trophy\Trophy_yanliu_href21996\1 2013-03-12 07:53:32 GMT yanliu
** HREF#21996: fix for DO MPS 3.3.1 Dynamic Range - Test 2 and Test3 Fail**/
/**Log information: \main\Trophy\1 2013-03-12 08:05:42 GMT yanliu
** HREF#21996 merged, fix DO dynamic range failure**/

