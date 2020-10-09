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
* Copyright (c) 2002-2011 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************

  FILE NAME:  monapi.h

  DESCRIPTION:

    This file contains all the constants, mail message definition and
    function prototypes exported by the MON unit.

*****************************************************************************/
#ifndef MONAPI_H
#define MONAPI_H

#include "kal_public_defs.h"
#include "sysapi.h"

/*----------------------------------------------------------------------------
 Defines Macros used in this file
----------------------------------------------------------------------------*/

/* NOTE: Empty all MonTrace */
#define MonTrace(TraceId, ...)  
#define MonTraceInquire(TraceId) (KAL_TRUE) 
#define MonSpy(SpyId, ...) 
#define MonFault(Unit, Code1, Code2, Type) 
#define MON_DEEP_SLEEP_SW_LATENCY                        (1966) /* 200us, 1966=200*8*1.2288*/



/*----------------------------------------------------------------------------
 Defines global variabls
----------------------------------------------------------------------------*/
extern const SysSFrameTimeT MonDeepSleepForeverTime;
extern const SysSFrameTimeT MonDeepSleepFlightModeTime;

#define SLEEP_FOREVER_TIME    MonDeepSleepForeverTime
#define FLIGHT_MODE_TIME      MonDeepSleepFlightModeTime


/*------------------------------------------------------------------------
* Define typedefs used in MON API
*------------------------------------------------------------------------*/

/* Define fault halt/continue flag */
typedef enum
{
   MON_CONTINUE  = 0x00,
   MON_HALT      = 0x01
} MonFaultTypeT;

/* Define all unit fault code numbers */
typedef enum
{
   MON_CP_FAULT_UNIT   = 0x00,
   MON_DBM_FAULT_UNIT  = 0x01,
   MON_EXE_FAULT_UNIT  = 0x02,
   MON_IPC_FAULT_UNIT  = 0x03,
   MON_IOP_FAULT_UNIT  = 0x04,
   MON_L1D_FAULT_UNIT  = 0x05,
   MON_LMD_FAULT_UNIT  = 0x06,
   MON_MON_FAULT_UNIT  = 0x07,
   MON_PSW_FAULT_UNIT  = 0x08,
   MON_HWD_FAULT_UNIT  = 0x09,
   MON_TST_FAULT_UNIT  = 0x0A,
   MON_VAL_FAULT_UNIT  = 0x0B,
   MON_SYS_FAULT_UNIT  = 0x0C,
   MON_RLP_FAULT_UNIT  = 0x0D,
   MON_HLP_FAULT_UNIT  = 0x0E,
   MON_MEDIA_FAULT_UNIT= 0x0F,
   MON_UIM_FAULT_UNIT  = 0x10,
   MON_UI_FAULT_UNIT   = 0x11,
   MON_FSM_FAULT_UNIT  = 0x12,
   MON_CLC_FAULT_UNIT  = 0x13,
   MON_FCP_FAULT_UNIT  = 0x14,
   MON_HSC_FAULT_UNIT  = 0x15,
   MON_RMC_FAULT_UNIT  = 0x16,
   MON_RCP_FAULT_UNIT  = 0x17,
   MON_SLC_FAULT_UNIT  = 0x18,
   MON_CSS_FAULT_UNIT  = 0x19,
   MON_LEC_FAULT_UNIT  = 0x1A,
   MON_SEC_FAULT_UNIT  = 0x1B,
   MON_A2DP_FAULT_UNIT = 0x1C,
   MON_AV_FAULT_UNIT   = 0x1D,
   MON_ETS_FAULT_UNIT  = 0x1E,
   MON_TLS_FAULT_UNIT  = 0x1F,
   MON_DM_FAULT_UNIT   = 0x20,
   MON_UNUSED_FAULT_UNIT = 0x21,
   MON_MMC_FAULT_UNIT = 0x22,

#if (defined(MTK_CBP) && (!defined(MTK_PLT_ON_PC)))
   MON_FHC_FAULT_UNIT  = 0x23,
   MON_LOGIQ_FAULT_UNIT= 0x24,
#endif 

#if (defined(MTK_PLT_AUDIO))
   MON_VALSPH_FAULT_UNIT  = 0x25,
   MON_HWDSPH_FAULT_UNIT  = 0x26,
#endif //  (defined(MTK_PLT_AUDIO))
   MON_SBP_FAULT_UNIT  = 0x27,
   MON_NUM_FAULT_UNIT,

   MON_CP_BOOT_FAULT_UNIT = 0x30, /* these 2 are only used by boot code and therefore  */
   MON_BOOT_FAULT_UNIT    = 0x31  /* should not be accounted for in MON_NUM_FAULT_UNIT */

} MonFaultUnitT;
typedef enum
{
   MON_HWD_SLEEPOVER_FLAG       = 0x00000001,  /* HWD: for sleepover ISR */
   MON_MD_DVFS_PEND             = 0x00000002,
   MON_RC_PEND_FLAG             = 0x00000004,  /*RC: for ongoing RC SQ*/
   MON_META_MODE_FLAG           = 0x00000008,
   MON_CLR_EXTEND_SLOT          = 0x00000010,
   MON_CL1_TMG_CHG              = 0x00000020,
   MON_RAKE_SHDR_PROTECT        = 0x00000040,
   MON_CL1_RTBAW                = 0x00000080,   
   MON_HSC_1X_MODEM_ACTIVE_FLAG = 0x00000100,  /* HSC: for 1x modem activity */
   MON_HSC_DO_MODEM_ACTIVE_FLAG = 0x00000200,  /* HSC: for DO modem activity */
   MON_GPS_SYNC_FLAG            = 0x00000400,  /* For GPS sync  */
   MON_FLAG_CAN_USE_6           = 0x00000800,
   MON_1X_TIME_COPY_TO_DO_FLAG  = 0x00001000,
   MON_FLAG_CAN_USE_7           = 0x00002000,
   MON_FLAG_CAN_USE_8           = 0x00004000,
   MON_FLAG_CAN_USE_9           = 0x00008000,
   MON_FLAG_CAN_USE_10          = 0x00010000,
   MON_FLAG_CAN_USE_11          = 0x00020000,
   MON_FLAG_CAN_USE_12          = 0x00040000,
   MON_FLAG_CAN_USE_13          = 0x00080000,
   MON_FLAG_CAN_USE_14          = 0x00100000,
   MON_FLAG_CAN_USE_15          = 0x00200000,
   MON_FLAG_CAN_USE_16          = 0x00400000,
   MON_RMC_GM_GAP_FLAG          = 0x00800000,  /* RMCGM: For Idle/Conn Gap offered  */
   MON_FLAG_CAN_USE_17          = 0x01000000,
   MON_FLAG_CAN_USE_18          = 0x02000000,
   MON_FLAG_CAN_USE_19          = 0x04000000,
   MON_SIB8_TIMING_RECOVER      = 0x08000000,
   MON_LEC_GPS_ACTIVITY_FLAG    = 0x10000000,  /* LEC: for GPS activity */
   MON_WAKE_LOCK_TST            = 0x20000000,
   MON_HSC_EVSTANDBY_TIME_COPY  = 0x40000000
   /* don't use > 0x7FFF FFFF */
} MonDeepSleepVetoT;

typedef enum
{
   DEEP_SLEEP_NOT_ENABLE,
   DEEP_SLEEP_NOT_REQ,
   DEEP_SLEEP_SUSPENDED,
   DEEP_SLEEP_DURATION_TOO_SMALL,
   DEEP_SLEEP_MON_ALLOWED,
   DEEP_SLEEP_NOT_ALL_QUE_EMPTY,
   DEEP_SLEEP_NOT_EVT_QUE_EMPTY,
   DEEP_SLEEP_NOT_MSG_QUE_EMPTY,
   DEEP_SLEEP_CANCELLING,
   DEEP_SLEEP_MARGIN_NOT_ENOUGH,
   DEEP_SLEEP_ALLOWED,
   DEEP_SLEEP_FH_IS_ONGOING
}MonDeepSleepStatusT;

extern kal_bool            MonDeepSleepIsRequested(SysAirInterfaceT Interface);
extern kal_bool            MonDeepSleepForeverIsRequested(SysAirInterfaceT Interface);
extern kal_bool            MonDeepSleepFlightModeIsRequested(SysAirInterfaceT Interface);
extern void                MonDeepSleepCancel(SysAirInterfaceT Interface, kal_bool WakeCs);
extern void                MonShDeepSleepCancel( SysAirInterfaceT Interface);
extern void                MonDeepSleepRestoreRequest(SysAirInterfaceT Interface);
extern void                MonDeepSleepClearRequest(SysAirInterfaceT Interface);
extern SysSFrameTimeT*     MonDeepSleepGetWakeTime(SysAirInterfaceT Interface);
extern kal_uint64          MonDeepSleepGetTillWakeTime(SysAirInterfaceT Interface);
extern kal_bool            MonDeepSleepIsPending(SysAirInterfaceT Interface);
extern kal_uint32          MonDeepSleepGetVetoDeepSleep(SysAirInterfaceT Interface);
extern void                MonDeepSleepRequest(SysAirInterfaceT Interface, SysSFrameTimeT WakeTime);
extern void                MonShDeepSleepRequest(SysAirInterfaceT Interface, SysSFrameTimeT* WakeTime);
extern void                MonDeepSleepSuspend(SysAirInterfaceT Interface, MonDeepSleepVetoT BitMask);
extern void                MonShDeepSleepSuspend(SysAirInterfaceT Interface, MonDeepSleepVetoT BitMask);
extern void                MonDeepSleepResume(SysAirInterfaceT Interface, MonDeepSleepVetoT BitMask);
extern void                MonShDeepSleepResume(SysAirInterfaceT Interface, MonDeepSleepVetoT BitMask);
extern kal_bool            MonDeepSleepIsVetoed(SysAirInterfaceT Interface);
extern kal_uint32          MonDeepSleepVetoMaskGet(SysAirInterfaceT Interface);
extern MonDeepSleepStatusT MonDeepSleepEnter(SysAirInterfaceT Interface);
extern void                MonIdleSleepControl(kal_bool DeepEnable);
extern void                MonDeepSleepTakeSlpHandle(SysAirInterfaceT Interface);
extern void                MonDeepSleepGiveSlpHandle(SysAirInterfaceT Interface);
extern void                MonShDeepSleepSetStIntOffset(SysAirInterfaceT Interface);
extern kal_uint32          MonShDeepSleepGetStIntOffset(SysAirInterfaceT Interface);
extern kal_bool            MonShDeepSleepStIntOffsetExist(SysAirInterfaceT Interface);
#endif
