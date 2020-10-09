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
* FILE NAME   : do_schapi.h
*
* DESCRIPTION : API definition for SCH (Searcher) component.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_SCHAPI_H_
#define _DO_SCHAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "cphevdosch.h"
#include "kal_public_defs.h"

/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/



/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/

/* SCH_RUP_SEARCHPARMS_UPDATE_MSG */
typedef  struct
{
   kal_uint8            PilotInc;
   kal_uint8            SrhWinActive;   /* 4 bits*/
   kal_uint8            SrhWinNghbr;               
   kal_uint8            SrhWinRemaining;
}   SchParmUpdateMsgT;

/* SCH_RUP_PILOT_UPDATE_MSG */
typedef  struct
{
   kal_int8          NumPilots;
   kal_uint16        PilotPN[SYS_MAX_ACTIVE_LIST_PILOTS];
   kal_uint8         MACIndex[SYS_MAX_ACTIVE_LIST_PILOTS];
   kal_int16         PnPhase[SYS_MAX_ACTIVE_LIST_PILOTS];
   kal_uint8         SofterHandoff[SYS_MAX_ACTIVE_LIST_PILOTS];             /*1 bit*/
   kal_uint8         RABLength[SYS_MAX_ACTIVE_LIST_PILOTS];                /* 2 bits*/
   kal_uint8         RABOffset[SYS_MAX_ACTIVE_LIST_PILOTS];                 /* 3 bits*/
   kal_int8         RAChannelGain[SYS_MAX_ACTIVE_LIST_PILOTS];          /*2bits, -1 means NULL*/ 
   kal_uint8         DRCCover[SYS_MAX_ACTIVE_LIST_PILOTS];
   kal_uint8         DSC[SYS_MAX_ACTIVE_LIST_PILOTS];   /* oxff means NULL */
}   RupActiveListT; 

typedef  struct
{
   kal_int8            NumPilots;
   kal_uint16           PilotPN[SYS_MAX_CANDIDATE_LIST_PILOTS];
   kal_int16            PnPhase[SYS_MAX_CANDIDATE_LIST_PILOTS];
}   RupCandListT; 

typedef  struct
{
   kal_int8             NumPilots;
   kal_uint16           PilotPN[SYS_MAX_NEIGHBOR_LIST_PILOTS];   
   kal_uint8            SrhWinSize[SYS_MAX_NEIGHBOR_LIST_PILOTS];   /* 255 is NULL, not mapped to PN chips*/
   kal_uint8            SrhWinOffset[SYS_MAX_NEIGHBOR_LIST_PILOTS]; /*255 is NULL, not mapped to PN chips*/    
}   RupNghbrListT;

typedef  struct
{
   kal_int8             NumPilots;
   kal_uint16           PilotPN[SYS_MAX_REMAINING_LIST_PILOTS];
}   RupRemListT; 

typedef  struct
{
   kal_int16            PilotSeq;      /* Sequence number to match up with the measurement report */ 
   kal_uint8            ConnSetupFlag; /*message sent  upon the receipt of TCHAssign in the Idle State*/
   kal_uint8            TcaFlag;
   RupActiveListT   Active;        /* Active set*/
   RupCandListT     Candidate;     /* Candidate set */
   RupNghbrListT    Neighbor;      /* Neighbor set */
   RupRemListT      Remaining;     /* Remaining set*/
}   SchPilotUpdateMsgT;


typedef struct
{
   kal_uint32           attribute;     /* Timer attribute*/ 
} SchTimerTimeoutMsgT;             /* typedef for the message */

/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 Global Functions
----------------------------------------------------------------------------*/
extern void SchWinSizeCmd(SchParmUpdateMsgT *MsgPtr);
extern void SchPilotUpdateCmd(SchPilotUpdateMsgT *MsgPtr);

/*****************************************************************************
* End of File
*****************************************************************************/
#endif

