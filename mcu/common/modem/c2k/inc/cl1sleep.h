/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 1998-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef  _CL1SLEEP_H_
#define  _CL1SLEEP_H_
/*****************************************************************************
 
	FILE NAME: hwdsleep.h

	DESCRIPTION:
		Interface to hwdsleep.c

*****************************************************************************/

#include "sysapi.h"

/*------------------------------------------------------------------------
 * exported data
 *------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
#define PAUSE_CMD_SW_MARGIN    (1500)                       /* 5T 32K SW Margin */
#define PAUSE_CMD_MARGIN       (1500 + PAUSE_CMD_SW_MARGIN) /* 3T 32K + 2T uncertanty + 5T SW Margin */

/* Clock Control Blocks */
typedef enum 
{
   HWD_BLK_CTRL_PPP_HA,
   HWD_BLK_CTRL_1X_SYSTIME,
   HWD_BLK_CTRL_DO_SYSTIME,

   HWD_BLK_CTRL_FT_CTRL,
   HWD_BLK_CTRL_RF_CTRL,

   HWD_BLK_CTRL_NUM_BLOCKS
} HwdBlkControlBlocksT;


/*------------------------------------------------------------------------
 * exported functions
 *------------------------------------------------------------------------*/

extern void     HwdSleepInit(void);
extern kal_bool HwdEnterCbpDeepSleepCheck(SysAirInterfaceT Interface) ;
extern void     HwdWakeupSlpCtrl( SysAirInterfaceT Interface ) ;
extern void     HwdDeepSleepClearCancellingFlag(SysAirInterfaceT Interface);
extern kal_bool HwdIsBlockConfigValid( HwdBlkControlBlocksT Block );
extern kal_bool HwdCheckDeepSleepMode( SysAirInterfaceT Interface);
extern kal_bool HwdCheckDeepSleepHWMode(SysAirInterfaceT Interface);
extern void     HwdSleepOverHisr1x(void);
extern void     HwdSleepOverHisrDO(void);
extern void     HwdSleepSetCalValue(SysAirInterfaceT Interface, kal_uint32 CalValue);
extern kal_uint32 HwdSleepCalcCalValue(SysAirInterfaceT Interface, kal_uint32 ScCnt, kal_uint32 FcFreq, kal_uint32 FcCnt);
extern void     HwdSleepSetSlpOffset(SysAirInterfaceT Interface, kal_int16 Offset);
extern kal_uint32 HwdSleepTimesGet(SysAirInterfaceT Interface);
extern void     Cl1SmTick(SysAirInterfaceT Interface);
extern void     HwdDeepSleepRecover(void);


/*****************************************************************************
 * End of file
 *****************************************************************************/
#endif

