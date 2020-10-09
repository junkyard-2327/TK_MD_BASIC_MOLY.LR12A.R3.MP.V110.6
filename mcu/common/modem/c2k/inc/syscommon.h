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
#ifndef  _SYSCOMMON_H_
#define  _SYSCOMMON_H_

/*****************************************************************************
* 
* FILE NAME   :   syscommon.h
*
* DESCRIPTION :   Common functions for DO & 1X
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/

/*----------------------------------------------------------------------------
* Include Files
----------------------------------------------------------------------------*/
#include "sysapi.h"

/*----------------------------------------------------------------------------
 Global Defines And Macros
----------------------------------------------------------------------------*/

/* Turn these RMC debug ifdefs OFF */
/*
#define RMC_SCH_INPUT_BUFFER_CAPTURE_ENABLE
#define RMC_MAC_FINGER_WORKAROUND
#define RMC_MBP_UNIT_TEST
#define RMC_MBP_UNIT_TEST_RPC
#define RMC_MAC_PROC_RESET
#define IRAT_MULTIMODE_TEST
*/

#define RMC_EQUALIZER
#define RMC_EQ_RAKE_AUTO_COMBINE

/* Turn these RMC debug ifdefs ON */
#define RMC_MBP_UNIT_TEST_RPC
#define RMC_MAC_PN_LOAD_ISSUE
#define RMC_MBP_RENUM_FIX

#define CCM_ACM_DSA_TEST

#define FCP_FWD_ACK_DEBUG
#define FCP_PACKET_PERF_STAT
#define AFC_IMPROVE

/* #define RCP_RTM_REVA_WORK_AROUND */
/* #define FCP_FTM_DRC_BY_PASS */
/* #define FCP_FTM_DRC_TEST */

#define FCP_FTM_DRC_MIPS_BY_PASS 


#define RCP_PACKET_PERF_STAT

#define RTM_TXTIME_PROFILE 
/*
#define RTM_DUAL_FCS_BUFFER
*/

/*#define FWD_CHAN_MON_TEST	 */

/*----------------------------------------------------------------------------
Global Typedefs 
----------------------------------------------------------------------------*/
/* OOSA_WAKEUP_TYPE */
typedef enum
{
  OOSA_NORMAL_WAKEUP,
  OOSA_EARLY_WAKEUP,
  OOSA_WAKEUP_MAX
} OosaWakeupTypeT;

typedef enum
{
  CONV_LOG10_10,
  CONV_LOG10_20,
  CONV_LOG2
} LogScaleConvTypeT;

/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/
/* RandNum Generator */
extern void SysRandomNumberInit(void);
extern kal_uint32 SysRandomNumber( kal_uint32 range );

/* Misc Operations */
extern kal_uint32             SysGetWrappedResult( kal_uint32 val, kal_int32 offset, kal_uint32 wrapLen );
extern kal_uint32             SysGetWrappedResult2( kal_uint32 val, kal_int32 offset, kal_uint32 wrapLen );
extern FrameRecT          SysGetFrameTimeAdded( FrameRecT time, kal_int32 offset ); 
extern SysTimeFullT       SysGetSlotTimeAdded( SysTimeFullT time, kal_int32 offset );
extern FrameRecT          SysConvertSysTime1XtoDO( FrameRecT  Time1X );

/* Gain to Linear Conversion functions */
extern kal_uint32 SysDb2LinearConv(kal_int16 GainDb);

/* Linear to Gain Conversion functions */
extern kal_int16 SysLinear2DbmConv(kal_uint32 LinearGain);
extern kal_int16 SysLinear2DbConv(kal_uint32 LinearGain);

extern void Sha1Hash(const void *data, kal_uint32 len, kal_uint8 *dst);

/*****************************************************************************
* End of File
*****************************************************************************/
#endif

