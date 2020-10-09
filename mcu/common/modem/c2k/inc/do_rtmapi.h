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
* FILE NAME   : do_rtmapi.h
*
* DESCRIPTION : API definition for RTCMAC.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_RTMAPI_H_
#define _DO_RTMAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "do_rcpapi.h"
#include "do_dsaapi.h"
#include "slc_nvram.h"


/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
#define  RTM_HARQ             1
#define  RTM_LARQ             0
#define  RTM_RAB_NOT_BUSY     0
#define  RTM_RAB_BUSY         1
#define  RTM_DRC_UNLOCK       0
#define  RTM_DRC_LOCK         1
#define  RTM_PHYNAK           1
#define  RTM_PHYACK           0
#define  RTM_ARQMODE_BPSK     0
#define  RTM_ARQMODE_OOK      1
#define  RTM_SILENT           1
#define  RTM_NOT_SILENT       0


/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/

/* RTM_RUP_TCHASSIGN_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8    frameOffset;               /* slots */
   kal_uint8	drcLen;                    /* slots */
   kal_int8	    drcChanGainBase;           /* 0.5db, valid range (-9dB,+6dB) */
   kal_bool     dscChanGainBaseIncl;
   kal_int8	    dscChanGainBase;           /* 0.5db */
   kal_int8	    ackChanGain;               /* 0.5db, valid range (-3dB,+6dB) */
   kal_uint8    numPilot;
   kal_uint8	userMacId[SYS_MAX_ACTIVE_LIST_PILOTS];
   kal_uint8    rabLength[SYS_MAX_ACTIVE_LIST_PILOTS];   /* slots */
   kal_uint8    rabOffset[SYS_MAX_ACTIVE_LIST_PILOTS];   /* slots */
   kal_bool     raChanGainIncl;            /* KAL_TRUE => RAChanGain included */
   kal_int8     raChanGain[SYS_MAX_ACTIVE_LIST_PILOTS];  /* db */
} PACKED_POSTFIX  RtmRupTchAssignMsgT;

typedef struct
{
    kal_int32   hlarqPcomb;
    kal_uint32 ciPcomb;
}MacPcombInfo;

typedef struct
{
    kal_uint16 PilotPN;
    kal_uint16 ServCell;
    kal_uint16 PwrEst;
    kal_uint16 PcgId;
}MacSectorInfo;

typedef struct
{
   kal_bool parqValid;
   kal_bool nextParqValid;
   kal_uint8  hlarqTypePcomb;
   kal_uint8  nextHLarqType;
   kal_uint16  ServingPN;
   kal_uint8 NumPcg;
   kal_uint8 NumSec;
   kal_uint8  PcgRenumId[RCP_MAX_NUM_PCGS];  /*PCG Id Renum Array*/
   kal_uint8  SecRenumId[SYS_MAX_ACTIVE_LIST_PILOTS];/*Sector Id Renum Array*/
   MacPcombInfo PcombInfo[SYS_MAX_ACTIVE_LIST_PILOTS];
   MacSectorInfo MacSecInfo[SYS_MAX_ACTIVE_LIST_PILOTS];
   kal_uint8 ArqServingCell;
   kal_uint8 RtcMacSubtype;
   kal_uint16 usRsv;
} MbpGetMacBitsParamsT;


/* RTM_CSM_USERMACID_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8	userMacId;                 /* current userMacId from selected monitoring sector */
} PACKED_POSTFIX  RtmCsmUserMacIdMsgT;


/* RTM_AMP_TXATI_UPDATE_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint32   transmitATI;
} PACKED_POSTFIX  RtmAmpTxAtiUpdateMsgT;


/* RTM_OMP_SECTORPARMS_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8	revlinkSilenceDuration;
   kal_uint8	revlinkSilencePeriod;
} PACKED_POSTFIX  RtmOmpSectorParmsMsgT;



/* RTM_FTM_CFG_DATA_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint8	drcGating;
   kal_uint8	dscLen;
   kal_uint8	drcBoostLen;
   kal_uint8	dscBoostLen;
   kal_uint8	drcChanGainBoost;
   kal_uint8	dscChanGainBoost;
   kal_uint8	deltaAckChanGainMUP;
} PACKED_POSTFIX  RtmFtmCfgDataMsgT;



/* RTM_SCP_SESSION_OPEN_MSG */
typedef PACKED_PREFIX struct
{
   kal_bool     sessionOpenFlag;  	/* KAL_TRUE => Session Opened */
} PACKED_POSTFIX  RtmSmpSessionOpenMsgT;


/* RTM_CSS_SEARCH_END_MSG */
typedef PACKED_PREFIX struct
{
   kal_bool     cssSearchEndFlag;   /* KAL_TRUE => CSS Search Ended */
} PACKED_POSTFIX  RtmCssSearchEndMsgT;


/* RTM_RTAP_MODE_MSG */
typedef PACKED_PREFIX struct
{
   kal_bool     bTestPktMode;

   kal_bool     configuredPacketRateMode;
   kal_uint8    rtapMinRate;  /* def=0 */
   kal_uint8    rtapMaxRate;  /* def=5 */         /* PHY0/1, RTM0/1/2: Rate: 0-5
                                                    0 = 0kbps
                                                    1 = 9.6kbps
                                                    2 = 19.2kbps
                                                    3 = 38.4kbps
                                                    4 = 76.8kbps
                                                    5 = 153.6kbps  */
   kal_bool     configuredPacketPayloadSizeMode;
   kal_uint8    rtapMinPayloadSize;  /* def=0  */
   kal_uint8    rtapMaxPayloadSize;  /* def=12 */ /* PHY2, RTM3: PayloadSz: 0-12
                                                    0 = 0 bits
                                                    1 = 96 bits
                                                    2 = 224 bits
                                                    3 = 480 bits
                                                    4 = 736 bits
                                                    5 = 992 bits
                                                    6 = 1504 bits
                                                    7 = 2016 bits
                                                    8 = 3040 bits
                                                    9 = 4064 bits
                                                    10 = 6112 bits
                                                    11 = 8160 bits
                                                    12 = 12256 bits */
} PACKED_POSTFIX  RtmRtapModeMsgT;




/* RTM_TIMER_EXPIRED_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint32    timerId;
} PACKED_POSTFIX  RtmTmrExpiredMsgT;




/*------------------------*/
/* MFC (RTM2/3) Interface */
/*------------------------*/

/* MFC output to RMM */
typedef struct
{
   kal_uint8  revRate;		    /* For prog RRIData: RTM0/1/2=rateIndex */
   kal_uint8  revPktSz;		    /* For prog RRIData: RTM2/3=pkSzIndex */
   PcpAcmRtmGrantAllocationT *grant;   /* grant for PCP */
   kal_uint8  transmissionMode; /* 1-LowLatency, 0-HighCapacity. Needed for MAC Trailer */
} RtmMfcOutDataT;


/* RMM input to MFC */
typedef struct
{
   /* General params */
   /*----------------*/
   kal_uint8 prevPrevInterlace;    /* Previous previous Interlace which was tx */
   kal_uint8 prevInterlace;        /* Previous Interlace which was tx */
   kal_uint8 currInterlace;        /* Current Interlace that RTM is preparing for */
   kal_uint8 prevSubpktId;         /* Previous SubpktId which was tx */
   kal_uint8 currSubpktId;         /* Current SubpktId for this Interlace */

   kal_uint8 revPktSzSentInPrevPrevInterlace;    /* rev packet size sent in Previous previous Interlace which was tx in n-2 subframe */
   kal_uint8 revPktSzSentInPrevInterlace;        /* rev packet size sent in Previous Interlace which was tx in n-1 subframe */
   kal_uint8 revPktSzSentInCurrInterlace;        /* rev packet size sent in Current Interlace which was tx in n-3 subframe */

   kal_uint8 macLayerFormatSentInPrevInterlace;
                                    /* RTM3: This is the Transmission Mode which was tx in n-1 subframe :
                                       1-LowLatency, 0-HighCapacity. */

   kal_bool  fwdChanValid;         /* Fwd chan valid or not, now */
   kal_uint8 revLinkSilent;        /* RevLink silent or not, for the currInterlace */
   kal_bool  newPktSentFlag;       /* T=>New pkt sent previously (Ack)
                                  F=>Old pkt sent previously (Nak) */
   PcpAcmRtmGrantAllocationT *grantTx;   /* grant that was actually transmitted.
                                            Note that if newPkt was sent, this is the
                                            grant that was formed earlier. If an oldPkt was
                                            sent, then this will be the same grant for the
                                            old pkt from subpktId=0, for this interlace. */
   /* MAC Bits from MBP */
   /*-------------------*/
   kal_uint8 numPilots;            /* Number of Active Pilots */
   kal_uint8 servingPN;            /* Which index corresponds to the servingPN */
   kal_int8  frab;                 /* Soft value FRABn */
   kal_uint8 qrab;                 /* Hard value qrabn */
   kal_uint8 *qrabs;               /* Hard value qrabn,s for each Active Sector */
   kal_uint8 *drcLock;             /* Note: */
   kal_uint16 *pilotStrength;
/* - Ptrs to the RtmMbpMacBits arrays xxx[SYS_MAX_ACTIVE_LIST_PILOTS] */
                               /* - xxx[i] valid for numPilots */
} RtmMfcInDataT;





/*---------------*/
/* MBP Interface */
/*---------------*/

/* MBP to RTM MAC Bit values */
/* Mac Bits Values read from MAC Hw and processed by MBP */
/* These are valid for the current subframe processed */
typedef struct
{
   /* ARQ hw bits */
   /*-------------*/
   kal_uint8  hlarq;		                           /* Hard value of H/L-ARQ */
   kal_uint8  parq;		                               /* Hard value of P-ARQ */

									               /* Note: Valid for the valid pcg, otherwise -1 (i.e. non-compact) */
   kal_int32  hlarqMetric[SYS_MAX_ACTIVE_LIST_PILOTS]; /* Soft value of H/L-ARQ for each PwrCtlGp */
   kal_uint32 ciMetric[SYS_MAX_ACTIVE_LIST_PILOTS];    /* Soft value of C/I for each PwrCtlGp */

   /* RAB, DRCLock, PS bits */
   /*-----------------------*/
   kal_uint8 numPilots;           /* Number of Active Pilots */
   kal_uint8 servingPN;           /* Which index corresponds to the servingPN */
   kal_int16  frab;                /* Soft value FRABn
                                  (Hw)  softRABphy -> filter with FRABFilterTC to get SlotFRABm,s
                                  (Mbp) SlotFRABm,s -> sample every subfr to get FRABn,s
                                  (Mbp) FRABn -> Set to max of all ActiveS sec's FRABn,s */

   kal_uint8 qrab;                /*  RTM0/1: RAB Hard value
                                  RTM2/3: Hard value qrabn
                                  (Hw)  softRABphy -> filter with QRABFilterTC to get SoftQRABm,s
                                  (Mbp) SoftQRABm,s -> hard lim to get SlotQRABm,s every subfr = QRABn,s
                                  (Mbp) qrabn -> OR of all Active Secs QRABn,s */

                                                    /* Note: Valid for only numPilots entries (i.e. compacted array) */
   kal_uint8 qrabs[SYS_MAX_ACTIVE_LIST_PILOTS];         /* Hard value qrabn,s for each Active Sector */
   kal_uint8 drcLock[SYS_MAX_ACTIVE_LIST_PILOTS];       /* DRCLock bit for each PCG */
   kal_uint16 pilotStrength[SYS_MAX_ACTIVE_LIST_PILOTS]; 		/* PilotStrength for each Active Sector */

} RtmMbpMacBitsT;


typedef enum
{
    RTM_QOS_SCALE_DRC=0,
    RTM_QOS_SCALE_DRC_BOOST,
    RTM_QOS_SCALE_DSC,
    RTM_QOS_SCALE_DSC_BOOST,
    RTM_QOS_SCALE_ACK_SUP,
    RTM_QOS_SCALE_ACK_MUP,
}RtmQosSetScaleSqT;

/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/

extern RtmMbpMacBitsT RtmMbpMacBits;
extern kal_bool           RtmCommitInProgressFlag;


/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/
extern void  RtmInitStructures( kal_uint8 subtype, kal_bool inUse, kal_bool resetToDefaul);
extern void  RtmCommit( void );
extern kal_bool  RtmProcessConfigRspMsg( DsaFwdMsgT *pMsg );
extern void  RtmProcessConfigReqMsg( DsaFwdMsgT *pMsg );
extern kal_uint8 RtmSendConfigReqMsg( void );



/* From MFC for RTM2/3 */
/*---------------------*/
extern kal_uint16 RcpRtmQuryDummyPktSize (void);
extern void CalGrant3DataUpdate( void );
extern void CalGrant3DataInit(void);

extern kal_bool RtmMfcCalculateGrantSubtype23( RtmMfcInDataT *MfcIn, RtmMfcOutDataT *MfcOut );
extern kal_bool RtmMfcCalculateGrantSubtype23Test( RtmMfcOutDataT *MfcOut );
extern kal_bool RtmQoSMfcCalculateGrantSubtype23( RtmMfcInDataT *MfcIn, RtmMfcOutDataT *MfcOut );

void RtmQosGetUpdatedGains(RevMacPktGT *pkt, kal_uint8 subPktId);

extern kal_int16 RtmQosGetAuxPilotGain( kal_uint8  pktSz, kal_uint8 transmissionMode, kal_uint8 subPktId );

extern kal_int16 RtmQosGetChannelGain( kal_uint8  pktSz, kal_uint8 transmissionMode );

extern void RtmQosGrantSizeUpdate(RtmMfcOutDataT *MfcOut, kal_uint8 newMfcPktSz);

extern kal_uint8 RtmQosGetMaxTxT2P( void );

extern kal_uint32 RtmQosGetPotentialT2P( kal_uint8 macFlowID  );

extern kal_uint16 RtmQosGetQueueOutflow( kal_uint8 macFlowID  );


extern void RtmQosSetAvailableTxPwr( kal_int16 availableTxPwr);

extern void RtmQosSetScaleDb2LinearSq( kal_int16 dBValue, RtmQosSetScaleSqT ScaleIdx);

extern kal_uint16 RtmQosGetUpdatedRriScaleForNullRate(void);

/* From MBP */
/*----------*/
extern void   MbpGetMacBits(kal_bool fwdChanValid, kal_uint8 revLinkSilent, MbpGetMacBitsParamsT *MbpGetMacBitsParamsIn, RtmMbpMacBitsT *MbpMacBitsPtr);

extern kal_bool RtmRmmGetSilentStatus(kal_uint8 *revSilentStatus, kal_uint64 *revSilentStart);
extern void RtmRmmCheckDRCSilentPending(void);
extern void RtmRmmCheckDelayedDRCSilentEntry(void);


#if defined (MTK_DEV_OPTIMIZE_EVL1)
/* NST: used in NST */
extern void Rtm01CreateInConfigInstance(kal_bool resetToDefault);
extern void Rtm01CommitHandler(void);
extern void  RtmScmSetupConfigInterface(kal_uint16 subtype);
extern void  Rtm3CreateInConfigInstance(kal_bool resetToDefault);
extern void Rtm3CommitHandler(void);
#endif

/*****************************************************************************
* End of File
*****************************************************************************/
#endif

