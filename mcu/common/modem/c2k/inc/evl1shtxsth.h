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

#ifndef _EVL1_SHTXSTH_H_
#define _EVL1_SHTXSTH_H_

/***********************************************************************************
* 
* FILE NAME   :     evl1shtxsth.h.
*
* DESCRIPTION :   Evl1TxSTH head file
*
*
************************************************************************************/
/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "kal_general_types.h"
#include "kal_public_defs.h"

/*----------------------------------------------------------------------------
 Global Typedefs
----------------------------------------------------------------------------*/
#define TXSTH_INTERVAL_STOP_COMPLETE   2

#define TXSTH_ADVANCE_BEFORE_OPEN      2
#define TXSTH_ADVANCE_BEFORE_DATA      3
#define TXSTH_RXTXSYNC_BEFORE_TXON_MIN       4
#define TXSTH_INTERVAL_RXTXSYNC_TXDFE_ON     1
#define TXSTH_INTERVAL_RXTXSYNC_TXDFE_OFF    1
#define TXSTH_INTERVAL_RXTXSYNC_ACTION       2

typedef enum  
{
    TXSTH_EVENT_AC_START = 0,
    TXSTH_EVENT_AC_CAPSULE_TRANS,
    TXSTH_EVENT_AC_STOP_NORM,
    TXSTH_EVENT_AC_STOP_IMM,
    TXSTH_EVENT_RTC_PARAM_INIT,
    TXSTH_EVENT_RTC_PARAM_RECFG,
    TXSTH_EVENT_RTC_START,
    TXSTH_EVENT_RTC_DATA_TRANS,
    TXSTH_EVENT_RTC_STOP_NORM,
    TXSTH_EVENT_RTC_STOP_IMM,
    TXSTH_EVENT_FREEZE,
    TXSTH_EVENT_UNFREEZE,
    TXSTH_EVENT_INVALID,
}Evl1TxSthEventTypT;


typedef enum  
{
    TXSTH_STATUS_IDLE = 0,
    TXSTH_STATUS_ACCESS,
    TXSTH_STATUS_TRAFFIC,
    TXSTH_STATUS_TRAFFIC_FREEZE,
    TXSTH_STATUS_FREEZE,
    TXSTH_STATUS_INVALID
}Evl1TxSthStatusTypT;

typedef enum  
{
    COMMAND_NONE, 
    AC_COMMAND_START,
    AC_COMMAND_IMMSTOP_START,
    AC_COMMAND_CAPSULE,
    AC_COMMAND_START_CAPSULE,
    AC_COMMAND_IMMSTOP_START_CAPSULE,
    AC_COMMAND_STOP,
    AC_COMMAND_IMMSTOP,
    RTC_COMMAND_START,
    RTC_COMMAND_DATA,
    RTC_COMMAND_STOP,
    RTC_COMMAND_IMM_STOP,
    RTC_COMMAND_UNFREEZE,
    RTC_COMMAND_RECFG,
    RTC_COMMAND_INIT,
    RTC_COMMAND_FREEZE,
    RTC_COMMAND_STOP_START
}Evl1CommandTypT;


typedef enum  
{
    AC_STATUS_IDLE, 
    AC_STATUS_STARTING_PREAMBLE,
    /*It's only happen in subtype2*/
    AC_STATUS_STARTING_PREAMBLE_CAPSULE,
    AC_STATUS_PREAMBLE,
    AC_STATUS_CAPSULE,
    AC_STATUS_CAPSULE_STOP,
    AC_STATUS_CAPSULE_STOPPING,
}Evl1AcStatusTypT;


typedef struct
{
    kal_uint64         SysTime64;        /* Low 4 bits are slot number, High 38 bits instead for Frame num */
    kal_int16          PwrBase;          /* dBm Q6*/
    kal_uint16         FrameOffset;      /* equals (4-preambleStartTime%4)%4 */
    kal_uint16         ProtocolSubtype;  /* 0:default, 1:enhanced */
    kal_uint16         PreambleScale;    /* PRE_PLT_SCALE */
    kal_uint32         LongCodeMaskL;    /* Low 32 bits of MI */
    kal_uint32         LongCodeMaskH;    /* High 10 bits of MI */
}Evl1AccessPreambleT;


typedef struct
{
    kal_uint64          SysTime64;    /* Low 4 bits are slot number */
    kal_uint16          PilotScale;   /*PILOT_SCALE*/
    kal_uint16          PreambleScale;/* PRE_PLT_SCALE */
    kal_uint16          DataScaleKs;  /*DATA_SALE_KS*/
    kal_uint16          DataScale;    /*DATA_SCALE0_ACK*/
    kal_uint16          DataRate;     /*RRI_DATA_ACK0*/
    kal_uint32          DataAddr;     /* 128 bytes aligned address */
}Evl1AccessCapsuleT;

typedef enum  
{
    RTC_STATUS_IDLE, 
    RTC_STATUS_STARTING_DRC,
    RTC_STATUS_DRC,
    RTC_STATUS_DATA,
    RTC_STATUS_DATA_STOP,
    RTC_STATUS_STOPPING,
    RTC_STATUS_FREEZE,
}Evl1RtcStatusTypT;




typedef struct
{
    kal_uint16          FrameOffset;
    kal_uint16          ProtocolSubtype; /* Phy protocol subtype 01/2*/
    kal_uint16          Ftmtype;         /*enhanced or default*/
    kal_uint16          PilotScale;
    kal_uint16          AuxPilotMiniPayload;
    kal_uint16          DrcScale;
    kal_uint16          DrcLength;
    kal_uint16          DrcGating;
    kal_uint16          DrcCover;
    kal_uint16          DrcBoostScale;
    kal_uint16          DrcBoostLength;
    kal_uint16          DscScale;
    kal_uint16          DscData;         /* DSC value */
    kal_uint16          DscLength;
    kal_uint16          DscBoostScale;
    kal_uint16          DscBoostLength;
    kal_uint16          AckSuScale;
    kal_uint16          AckMuScale;
}Evl1TrafficParamInitT;


typedef struct
{
    kal_uint16      FrameOffset;
    kal_uint16      DrcScale;
    kal_uint16      DrcLength;
    kal_uint16      DrcGating;
    kal_uint16      DrcCover;
    kal_uint16      DrcBoostScale;
    kal_uint16      DrcBoostLength;
    kal_uint16      DscScale;
    kal_uint16      DscData;            /* DSC value */
    kal_uint16      DscLength;
    kal_uint16      DscBoostScale;
    kal_uint16      DscBoostLength;
    kal_uint16      AckSuScale;
    kal_uint16      AckMuScale;
}Evl1TrafficParamReCfgT;  // TBD


typedef struct
{
    kal_uint64           SysTime64;
    kal_int16            PwrBase;      /*Q6*/
    kal_uint32           LongCodeMaskL;
    kal_uint32           LongCodeMaskH;
    kal_bool             IsCalibration;
}Evl1TrafficTransStartT;

typedef struct
{
    kal_int16            DrcCover;  
}Evl1TrafficDRCCoverSetT;


typedef struct
{
    kal_uint64      SysTime64;
    kal_uint16      AuxPilotScaleAck;
    kal_uint16      AuxPilotScaleNak;
    kal_uint16      RriScaleAck;
    kal_uint16      RriScaleNak;
    kal_uint32      DataAddrAck;
    kal_uint32      DataAddrNak;
    kal_uint16      RriDataAck;         /* RRI_DATA_1_ACK for RTM0/1/2, RRI_DATA_2_ACK for RTM3 */
    kal_uint16      RriDataNak;         /* RRI_DATA_2_NAK for RTM3 */
    kal_uint16      DataKsScaleAck;
    kal_uint16      DataKsScaleNak;
    kal_uint16      Data0ScaleAck;
    kal_uint16      Data0ScaleNak;
    kal_uint16      Data1ScaleAck;
    kal_uint16      Data1ScaleNak;
    kal_uint16      Data2ScaleAck;
    kal_uint16      Data2ScaleNak;
    kal_uint16      Data3ScaleAck;
    kal_uint16      Data3ScaleNak;
    kal_uint16      SubPacketIndexNak;
} Evl1TrafficDataTransT;

/* Define Traffic Release Type enum */
typedef enum
{
   EVL1_TRAFFIC_RELEASE_IDLE = 0,
   EVL1_TRAFFIC_RELEASE_STANDBY

} Evl1TxTrafficReleaseTypeT;

/* Define debug step enum */
typedef enum
{
   TXSTH_ACSTART_STEP = 0,
   TXSTH_ACCAPSULE_STEP,
   TXSTH_RTCSTART_STEP,
   TXSTH_RTCDATA_STEP,
   TXSTH_RTCFREEZE_STEP,
   TXSTH_RTCUNFREEZE_STEP,
   TXSTH_RTCINI_STEP,
   TXSTH_RTCRECFG_STEP,
   TXSTH_TXSTOP_STEP,
   TXSTH_TXCOMPLETE_STEP,
   TXSTH_ACREMOVECB_STEP,
   TXSTH_RTCREMOVECB_STEP,
   TXSTH_TXAGCSTART_STEP,
   TXSTH_TXAGCSTOP_STEP,
   TXSTH_TXAGCIND_STEP,
   TXSTH_RTCDRCCOVER_STEP,
   TXSTH_NUM_STEP
} Evl1TxSTHDebugStepT;



/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 Global Variables
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/
extern void Evl1ShTxSthEvtHandler(kal_uint8 *DataPtr,kal_uint16 EvtId);
extern void Evl1ShAccessPreambleStart(Evl1AccessPreambleT *AccessPreambleP);
extern void Evl1ShAccessCapsuleTrans(Evl1AccessCapsuleT  *AccessCapsuleP);
extern void Evl1ShAccessTransStop(kal_bool ImmAction);
extern void Evl1ShTrafficParamInit(Evl1TrafficParamInitT *TrafficParamInitP);
extern void Evl1ShTrafficParamRecfg(Evl1TrafficParamReCfgT *TrafficParamReCfgP);
extern void Evl1ShTrafficTransStart(Evl1TrafficTransStartT *TrafficTransStartP,kal_bool isSlientExit);
extern void Evl1ShTrafficTransStart4TxCal(Evl1TrafficTransStartT *TrafficTransStartP,kal_bool SendMessage);
extern void Evl1ShTrafficParamInit4TxCal(Evl1TrafficParamInitT *TrafficParamInitP);
extern void Evl1ShTrafficTransData(Evl1TrafficDataTransT *TrafficDataTransP);
extern void Evl1ShTrafficTransStop(kal_bool ImmAction, Evl1TxTrafficReleaseTypeT ReleaseType);
extern void Evl1ShTrafficTransStop4TxCal(kal_bool SendMessage);
extern void Evl1ShTxSthInit();
extern void Evl1ShTxSthMainSche();
extern void Evl1ShTxFreeze();
extern void Evl1ShTxUnFreeze();
extern void Evl1ShAcStart(kal_uint32 DummyParam);
extern void Evl1ShAcCapsule(kal_uint32 DummyParam);
extern void Evl1ShRtcStart(kal_uint32 DummyParam);
extern void Evl1ShTxStop(kal_uint32 IsCalibration);
extern void Evl1ShTxComplete(kal_uint32 DummyParam);
extern void Evl1ShTxhStatusSet(Evl1AcStatusTypT TxhStatus);
extern void Evl1ShRtcDataTrans(kal_uint32 DummyParam);
extern void Evl1ShRtcUnFreeze(kal_uint32 DummyParam);
extern void Evl1ShRtcFreeze(kal_uint32 DummyParam);
extern void Evl1ShRtcInitParam(kal_uint32 DummyParam);
extern kal_int16 Evl1ShTxSthGetPowerBase();
extern kal_int16 Evl1ShTxSthGetCloseLoopWorkAround();
extern void Evl1ShTxSthTxOnMergedIndication();

extern kal_uint16 Evl1ShSthGetFrameOffset();
extern Evl1TxSthStatusTypT Evl1ShSthGetSthStatus();
extern void Evl1ShSthSetSthStatus(Evl1TxSthStatusTypT Status);
extern void Evl1ShSthSetSthCmd(Evl1CommandTypT CMD);
extern void Evl1ShSthSetSthFreezeCmd(Evl1CommandTypT CMD);
extern Evl1CommandTypT Evl1ShSthGetSthCmd();
extern Evl1CommandTypT Evl1ShSthGetSthFreezeCmd();
extern void Evl1ShConvertFrameSlot2SupFrameEchip(kal_uint64 SysTime64,kal_uint64 *SuperFrame,
                                                          kal_int32 *Echip);
extern void Evl1ShSthSetAcStatus(Evl1AcStatusTypT Status);
extern Evl1AcStatusTypT Evl1ShSthGetAcStatus();
extern void Evl1ShSthSetRtcStatus(Evl1RtcStatusTypT Status);
extern Evl1RtcStatusTypT Evl1ShSthGetRtcStatus();
extern Evl1TrafficParamInitT * Evl1ShSthGetRtcInitParam();
extern void Evl1ShCalTxComplete(kal_uint32 DummyParam);
extern void Evl1ShCalTxWinONAndStrobeCfg(kal_bool IsWinOn,kal_bool ConfigureSrobe,kal_uint32 ActionTime);


/*****************************************************************************
* End of File
*****************************************************************************/

#endif


