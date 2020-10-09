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
* FILE NAME   : do_idpapi.h
*
* DESCRIPTION : API definition for IDP (Idle State Protocol) component.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_IDPAPI_H_
#define _DO_IDPAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "do_clcapi.h"
#include "do_rupapi.h"


/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/


#define MAX_CHANNEL_SUPPORT    32    /* 32 is too large to Call the ExeMsgBufferGet() to allocate the Msg Buf */
/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/

typedef struct
{
   kal_uint32    attribute;           /* Timer attribute*/

} IdpTimerTimeoutMsgT;    /* typedef for the message */

typedef  struct {
  kal_bool   AccessHashingChannelMaskSameAsPrevious;
  kal_uint16 AccessHashingChannelMask;
} AccessHashingChannelMaskRecordT;


typedef  struct {
	kal_bool NeighborChannelIncluded;
	ChanRecGT NeighborChannel;
} NeighborChannelT;

/*MSG_ID_IDP_OMP_UPDATED_MSG */
typedef  struct {
  kal_bool bSectorParmsUpdated;
  kal_uint8 ChannelCount;
  ChanRecGT Channel[MAX_CHANNEL_SUPPORT];
  kal_uint8 NeighborCount;
  NeighborChannelT NeighborChannel[MAX_CHANNEL_SUPPORT];
  kal_bool ExtendedChannelIncluded;
  kal_uint8 ExtendedChannelCount;
  ChanRecGT ExtendedChannel[MAX_CHANNEL_SUPPORT];
  kal_bool AccessHashingChannelMaskIncluded;
  kal_uint8 AccessHashingMaskLength;
  AccessHashingChannelMaskRecordT AccessHashingChannelMask[MAX_CHANNEL_SUPPORT * 2];
#ifdef MTK_DEV_C2K_IRAT
   kal_bool bOtherRATAvailable;
   kal_uint8         OtherRATSlotCycle;
#endif  /* MTK_DEV_C2K_IRAT */
} IdpOmpUpdatedMsgT;

/* MSG_ID_IDP_CSP_SUSPEND_PERIOD_STATUS_MSG */
typedef struct {
   SysTimeFullT tSuspendPeriod;
}IdpCspSuspendPeriodTimeMsgT;

/* MSG_ID_IDP_AMP_SESSIONSEED_MSG */
typedef  struct {
  kal_uint32 nSessionSeed;
  kal_uint32 nATI;
} IdpAmpSessionSeedMsgT;

/* MSG_ID_IDP_SMP_SESSION_CLOSED_MSG */
typedef  struct {
   kal_bool bNeedUpdateAll;
#ifdef MTK_CBP
   kal_bool sessionClose;
#endif
} IdpSmpSessionClosedMsgT;

/* MSG_ID_IDP_CCM_OFFSET_MSG */
typedef  struct {
  kal_uint8 nSyncCapsuleOffset;
} IdpCcmOffsetMsgT;

/*MSG_ID_IDP_ALMP_OPEN_CONN_MSG */
typedef  struct {
    kal_uint8 nRequestReason;
    kal_uint8 nTransactionId;
}IdpAlmpOpenConnMsgT;

typedef  struct {
    kal_uint16 nPrevMaskDuration;
   kal_uint16 nMaskDuration;
   kal_uint16 nPostMaskDuration;
}Idp1XPsPagingMaskSetMsgT;

/*MSG_ID_IDP_SLOTTED_MODE_SET_MSG */
typedef struct {
   kal_uint32 bSlottedModeEnabled;
} IdpSlottedModeSetMsgT;

/*MSG_ID_ELT_CLC_IDP_SLOTTED_MODE_SET_RSP_MSG */
typedef struct {
   kal_uint32 Reserved;
} IdpSlottedModeSetRspT;

/*    MSG_ID_IDP_ALMP_SYSINFO_UPDATE_MSG*/
typedef struct {
      ChanRecGT Chan;
} IdpAlmpSysInfoUpdateMsgT;

typedef struct {
   kal_bool     PrefCCCycleEnable;
   kal_uint32   PrefCCCycle;
} DoPrefCCModeSetMsgT;

#ifdef MTK_DEV_C2K_IRAT
typedef enum {
   IDP_INACTIVE,
   IDP_IRAT,
   IDP_NORMAL,
   IDP_CLOSING
} IdpModeT;

typedef struct {
   IdpModeT mode;
} IDPIRATModeSetMsgT;
#endif /* MTK_DEV_C2K_IRAT */

/* IDP ConnectionRequest Message */
typedef struct
{
   kal_uint8 nTransactionID;
   kal_uint8 nRequestReason;
   kal_uint8 nReserved;
} IdpConnectionRequestT;

extern void IdpSetSubnetChangedOrCommittingFlag(void);
extern void IdpDeliverSignalProtectStatusInd(kal_bool IdleState);
extern kal_uint16 IdpEncodeOTAMsgConnReq(kal_uint8 *cpBuf, IdpConnectionRequestT ConnReq);
extern CpBufferT* IdpSendConnectionRequest(kal_uint8 nConnReqTransID,kal_uint8 nRequestReason);
/*****************************************************************************
* End of File
*****************************************************************************/
#endif
/**Log information: \main\Trophy\Trophy_yzhang_href22247\1 2013-07-30 06:37:42 GMT yzhang
** HREF#22247=>fix issue of concurrent UATIReq and ConnReq**/
/**Log information: \main\Trophy\1 2013-07-30 07:08:13 GMT jzwang
** href#22247**/

