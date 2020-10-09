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
* Copyright (c) 2006-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************
* 
* FILE NAME   : do_rupapi.h
*
* DESCRIPTION : API definition for RUP (Route Update Protocol).
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_RUPAPI_H_
#define _DO_RUPAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "do_rmcapi.h"
#include "do_rcpapi.h"
/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
 /*****************************************************************************
 * Defines
 ****************************************************************************/
#define  MAX_SUPPORTED_BAND             3
#define  MAX_SUPPORTED_SUBBAND          8
#define  DO_MSG_ID_LEN                       8
#define  DO_TRANSAC_ID_LEN                   8

#define  DO_SYSTYPE_LEN                8
#define  DO_BANDCLASS_LEN              5
#define  DO_CHAN_LEN                   11

#define  MAX_SRHWIN_OFFSET             8
#define  MAX_SRHWIN_SIZE               17
#define  MAX_TDROP_TIMER               16
#define  MAX_DROPTIMER_NUM             (SYS_MAX_ACTIVE_LIST_PILOTS+SYS_MAX_CANDIDATE_LIST_PILOTS+1)
#define  DO_SYS_TYPE                   0
#define  NULL_PN_PHASE                 0x7FFF
#define RUP_MAX_NLPILOT_NUM                  32

#define  RUP_DFS_SEARCH_ALL_CHANNELS       255
/*****************************************************************************
  * Structure definitions
  ****************************************************************************/

/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/
/*typedef enum
{
   ACCESS_CHAN,
   TRAFFIC_CHAN,
   BOTH
}RevPhyChanT;*/


/* RUP_SCH_RESULT_RPT_CMD_MSG */
/* interface with Searcher Control*/
/*pilot measurement report structure*/
 typedef PACKED_PREFIX struct
{
   kal_int16             PnPhase;        /*offset, in units of 0.5chips,(-2048~+2048)*/
   kal_int16             Strength;        /*in units of 0.125dB*/  
} PACKED_POSTFIX  RupPilotMeasurGT;
 
/* search result report msg structure*/
 typedef  PACKED_PREFIX struct /*RUP_SRC_SEARCH_RESULT_RPT_CMD_MSG*/
{
   kal_int16             RptSeq;
   kal_uint16            ReferencePN;     /* the earliest pilotPN */

   /*93m RUP*/
   ChanRecGT         CurrentDfsChannel;  /* indicate current measured DFS channel */
   /*93m RUP*/
   
   kal_uint8             NumActive;       /* Number of active set pilot */
   kal_uint8             NumCandidate;    /* Number of candidate set pilot */
   kal_uint8             NumNeighbor;     /* Number of neighbor set pilot */
   kal_uint8             NumRemaining;    /*Number of remaining set pilot*/
 
   RupPilotMeasurGT  Active[SYS_MAX_ACTIVE_LIST_PILOTS];
   RupPilotMeasurGT  Candidate[SYS_MAX_CANDIDATE_LIST_PILOTS];
   RupPilotMeasurGT  Neighbor[SYS_MAX_NEIGHBOR_LIST_PILOTS];
   RupPilotMeasurGT  Remaining[SYS_MAX_REMAINING_LIST_PILOTS];    
} PACKED_POSTFIX RupSearchResultRptMsgT;

/*93m RUP*/
typedef enum
{
   RMC_DFS_NORMAL_COMPLETE,
   RMC_DFS_RUP_ABORT,
   RMC_DFS_L1_ABORT
} DfsReturnChannelCauseCode;

/* RUP_RMC_CAMP_ON_CHANNEL_COMPLETE_MSG msg structure*/
typedef  struct /*RUP_RMC_CAMP_ON_CHANNEL_COMPLETE_MSG*/
{
    DfsReturnChannelCauseCode  ReturnCode;  /* Get back original channel from DFS procedure cause code */    
} RupRmcCampOnChannelCompleteMsgT;

typedef  struct
{
    kal_uint16   FreqChan; /* Frequency channel to perform init acq */
    kal_uint8    CdmaBand; /* CDMA band classe to perform init acq */
} RupRmcInterHoNotifyMsgT;

/*93m RUP*/

typedef  struct
{
   kal_uint8             Count;
   kal_uint16            PilotPN[SYS_MAX_NEIGHBOR_LIST_PILOTS];
   kal_uint8             ChanInc[SYS_MAX_NEIGHBOR_LIST_PILOTS];
   ChanRecGT         Chan[SYS_MAX_NEIGHBOR_LIST_PILOTS];
   kal_uint8             SrhWinSizeInc ;
   kal_uint8             SrhWinSize[SYS_MAX_NEIGHBOR_LIST_PILOTS];
   kal_uint8             SrhWinOffInc;
   kal_uint8             SrhWinOffset[SYS_MAX_NEIGHBOR_LIST_PILOTS];
} NghbrInfoT;

/*Overhead.update Indication*/
 typedef  struct
{
   kal_uint8             SectorId[16];
   kal_uint16            PilotPN;
   kal_uint32            Latitude;
   kal_uint32            Longitude;
   kal_uint16            RouteUpdateRadius;
   NghbrInfoT        Nghbr;  
} RupOmpUpdatedMsgGT;
 
/*RUP_DISP_CONNST_TMSTATE_CMD_MSG*/
typedef struct
{
   kal_bool              state;
} RupIdpConnTmStateMsgGT;

/*Rup.Activate command*/
typedef  struct
{
   ChanRecGT Chan;
   kal_uint16            PilotPN;
} RupAlmpActiveMsgGT;

typedef struct
{
  kal_uint8      Num;
  kal_uint16        PilotPn[SYS_MAX_NEIGHBOR_LIST_PILOTS+SYS_MAX_CANDIDATE_LIST_PILOTS];        
  kal_int16          Strength[SYS_MAX_NEIGHBOR_LIST_PILOTS+SYS_MAX_CANDIDATE_LIST_PILOTS];     /*in units of 0.125db*/
}Rup2ValPnListInfoT;

typedef enum
{
   IDP_DFS_SLOTTED,
   IDP_DFS_NON_SLOTTED,
   IDP_MAX_DFS_START_CAUSE_CODE
} DfsStartCauseCode;

typedef enum
{
   DFS_DISABLED_STATE,     /* No DFS Neighbors from AN */
   DFS_IDLE_STATE,         /* Previous DFS done. Await next event */
   DFS_INITIATE_STATE,     /* Trigger DFS at next opportunity */
   DFS_INPROG_STATE,       /* DFS InProgress. Wait for SCH SrchRslt */
   DFS_ROUTE_UPDATE_STATE, /* Ready to send Route Update on Serving */
   DFS_IDLE_HO_STATE,      /* Ready to do Idle HO */
   DFS_RESTORE_SERVING_STATE, /* Return to serving system */
   DFS_MAX_STATE
} DfsStateT;

typedef PACKED_PREFIX struct
{
   DfsStartCauseCode Cause;
   kal_uint8             NumDfsChan;
} PACKED_POSTFIX  RupIdpDfsStartMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint8 IdleInterval;
   kal_uint8 ConnInterval;
   kal_uint8 IdleNumChan;
   kal_uint8 ConnNumChan;
   kal_uint16 IdleEcIoThresh;
   kal_uint16 ConnEcIoThresh;
} PACKED_POSTFIX  RupClcDfsSettingsMsgT;

typedef PACKED_PREFIX struct
{
   ExeRspMsgT  RspInfo; /* Response routing information */
} PACKED_POSTFIX  RupIopGetDfsInfoMsgT;

typedef PACKED_PREFIX struct
{
   kal_uint8 State;
   kal_uint8 IdleCause;
   kal_uint8 Count;
   kal_uint8 ChanIndex;
   kal_uint8 NumChan;
   kal_uint16 Chan[10];
} PACKED_POSTFIX  RupIopGetDfsInfoRspMsgT;

/*----------------------------------------------------------------------------
 Global Functions
----------------------------------------------------------------------------*/
extern kal_uint16 RupGetSearchWinSize (kal_uint8 size);
extern kal_int16 RupGetSearchWinOffset (kal_uint16 size, kal_uint8 offset);
extern void PcpGetAcmRupMsgData(DatapktGT*  pPkt);
extern kal_bool PcpGetAcmRupMsgLen(kal_uint16  BytesAvail, kal_uint16*  pMsgLen);

/* get the pilot strength(signed, in Q3 dB) of current active sector */
extern kal_int16 RupGetCurSectorPilotStrength(void); 
extern kal_bool RupCheckNeighborListSearchDone(void);
extern void RupGetActiveSetInfo(Rup2ValPnListInfoT* pInfo);
extern void RupGetNeighborSetInfo(Rup2ValPnListInfoT* pInfo);

/*****************************************************************************
* End of File
*****************************************************************************/
#endif

