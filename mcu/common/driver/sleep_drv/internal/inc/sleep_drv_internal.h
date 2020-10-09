/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   sleep_drv_internal.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Sleep mode driver setting.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/ 

#ifndef SLEEP_DRV_INTERNAL_H
#define SLEEP_DRV_INTERNAL_H

#include "kal_general_types.h" // for kal type define
#include "kal_public_api.h"    // for kal assert define
//#include "sleep_drv_public.h"
#include "sleepdrv_interface.h"

#if defined(__HIF_CCCI_SUPPORT__) && defined(__MTK_TARGET__)
#include "ccci_if.h"
#endif

/******************** Sleep Driver ASSERT Macro ********************/
#ifdef  __MTK_INTERNAL__
   #define SleepDrv_ASSERT_Bypass( st )                    ASSERT( st )
   #define SleepDrv_ASSERT_Reboot( st )                    ASSERT( st )
   #define SleepDrv_EXT_ASSERT_Bypass( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
   #define SleepDrv_EXT_ASSERT_Reboot( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
#else
   #define SleepDrv_ASSERT_Bypass( st )                    (void)0
   #define SleepDrv_ASSERT_Reboot( st )                    ASSERT( st )
   #define SleepDrv_EXT_ASSERT_Bypass( st, d1, d2, d3 )    (void)0
   #define SleepDrv_EXT_ASSERT_Reboot( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
#endif

#define MIPS_CORE_NUMBER        2

/*Global SleepDrv data structure*/
typedef struct
{
   kal_bool     MCULockL1SM;
   kal_bool     MCULockUL1SM;
   kal_bool     MCULockEL1SM;
   kal_bool     handleInit; // the handleCount is initalized or not
   kal_uint8    handleCount;
   kal_uint32   sleepDisable[MIPS_CORE_NUMBER][(MAX_SLEEP_HANDLE+31)/32];
   kal_uint32   DBG_PreSleepDisable[MIPS_CORE_NUMBER][(MAX_SLEEP_HANDLE+31)/32];

   volatile slp_dbg_shm_t * shm;
   kal_uint32   shmSize;
   #if defined(__HIF_CCCI_SUPPORT__) && defined(__MTK_TARGET__)
   CCCI_EXCEP_MEMORY_TYPE shmMemType;
   #endif
   kal_bool   shmIsSupported;
   volatile kal_uint32 fix_pat_buf_sel_l1;
} SLEEPDRV_Globals;

typedef struct
{
	 kal_uint32 address;
	 kal_uint32 size;
   #if defined(__HIF_CCCI_SUPPORT__) && defined(__MTK_TARGET__)
	 CCCI_EXCEP_MEMORY_TYPE memoryType;
   #endif
	 kal_bool isSupported;
	 kal_bool isBufferFull;
	 
	 kal_uint32 curIndex;
	 kal_uint32 curRecord;
	 
	 kal_uint32 TotalRecord;
	 kal_uint32 LastRecordFRC;

   kal_uint32 SampleRate;
   kal_uint32 BufferLimit;

   kal_bool LPM_NVRAM_LogOn;
   kal_bool isLPM_NVRAM_DIR_CREATED;
   kal_uint32 LPM_NVRAM_FileNo;
   	 
} SleepDrv_LowPowerMonitor;     

#define SLEEPDRV_LOCKSTATE_DEBUG_HISTORY_MAX 40
typedef struct
{
    kal_uint32      Timestamp;
    kal_uint32      CallerAddress;
    kal_uint16      Action;
    SLEEP_CTL_USER  User;
} SleepDrv_LockState_Debug;

#if defined(__MINI_LOG_SUPPORT__) && defined(__MTK_TARGET__) && defined(MTK_SLEEP_ENABLE)
typedef struct
{
   kal_bool     MCULockL1SM;
   kal_bool     MCULockUL1SM;
   kal_bool     MCULockEL1SM;
   kal_bool     handleInit; // the handleCount is initalized or not
   kal_uint8    handleCount;
   kal_uint32   sleepDisable[MIPS_CORE_NUMBER][(MAX_SLEEP_HANDLE+31)/32];
} mini_log_module_sleepdrv_struct;
#endif /* __MINI_LOG_SUPPORT__ && __MTK_TARGET__ && MTK_SLEEP_ENABLE */

/******************************************************************************
* Temporal Solution for TK6291 FPGA build pass
* ./m "TK6291_V7FPGA(BASIC).mak" new 
* CENTRALIZED_SLEEP_MANAGER = FALSE
******************************************************************************/

#ifndef __CENTRALIZED_SLEEP_MANAGER__

#if IS_USC_CHIP

typedef struct _rtos_tick_struct
{
   kal_uint32      Real_TickCnt;           /* To record last Tick Count get from us counter through USC_Get_TimeStamp(). */

   kal_uint16      OS_allowed;              /* To record the OS allowed sleeping ticks after 2G ask RTOS. */
   kal_bool        GSM_invoking;          /* To record & protect if 2G just wake-up and decide to invoke. (3G SLT preempt) */
} rtos_tick_struct;
static rtos_tick_struct rtos_tick = {0,0,KAL_FALSE};
#else 

typedef struct _rtos_tick_struct
{
   kal_bool         IsGtickFollow;          /* TRUE means we have detected the 1st 2G Tick comes after 3G Tick */
   kal_bool         IsUtickStart;             /* TRUE means we have detected the 1st 3G Tick */
   kal_bool         IsLatched;                 /* TRUE means 2G Tick has been virtually aligned with 3G Tick */
  
   kal_uint32      tick_cnt_2G;
   kal_uint32      tick_cnt_3G;

   /* For 3G_slot-to-2G_FN transformation */
   kal_uint8        micro_cnt;                /* Counter for 7or6 3G slots pair */
   kal_uint8        run_cnt;                    /* Counter for 0~12, total 13 runs in a 60ms (90 3G Slot cycle) */

   kal_uint16      OS_allowed;              /* To record the OS allowed sleeping ticks after 2G ask RTOS. */
} rtos_tick_struct;
//static rtos_tick_struct rtos_tick = {0,0,KAL_FALSE};
#endif

#endif

void SleepDrv_Init( void );
void SleepDrv_LockState_Logging(SLEEP_CTL_USER, kal_uint8, kal_bool, kal_uint32);
kal_uint8 SleepDrv_GetHandle( kal_uint8 );
void SleepDrv_SleepDisable( kal_uint8 handleCount );
void SleepDrv_LockSleep( SLEEP_CTL_USER user, kal_uint8 target_core);
void SleepDrv_SleepEnable( kal_uint8 handleCount );
void SleepDrv_UnlockSleep( SLEEP_CTL_USER user, kal_uint8 target_core);

//MD Low Power Monitor API
void SleepDrv_LowPowerMonitorSet(kal_uint32 index, kal_uint32 element, kal_uint32 address);
#if defined(__HIF_CCCI_SUPPORT__) && defined(__MTK_TARGET__)
kal_bool SleepDrv_LowPowerMonitorRecord( void );
#endif /* __HIF_CCCI_SUPPORT__ && __MTK_TARGET__ */
void SleepDrv_LowPowerMonitorFlushCheck( void );

void SleepDrv_LowPowerMonitorStart(void);
void SleepDrv_LowPowerMonitorStop(void);
void SleepDrv_LowPowerMonitorDelete(void);
void SleepDrv_LowPowerMonitorCreate(void);
void SleepDrv_LowPowerMonitorFlush(void);
kal_bool SleepDrv_LowPowerMonitorSetParameter(kal_uint32 data_len, kal_uint8 *data_str);
//End of MD Low Power Monitor API

void SleepDrv_Display_LockModule( void );
void SleepDrv_L1SleepDisable( kal_bool DisableL1SM );
void SleepDrv_UL1SleepDisable( kal_bool DisableUL1SM );
void SleepDrv_EL1SleepDisable( kal_bool DisableEL1SM );

#ifndef __CENTRALIZED_SLEEP_MANAGER__
kal_uint16 SleepDrv_RTOS_CheckSleepPrerequisite( kal_uint16 max_delay, kal_uint16 *rtos_flag );
#endif /* __CENTRALIZED_SLEEP_MANAGER__ */

extern void SleepDrv_SyncMDTOPSM32kCalibration(kal_uint32);

#endif /* SLEEP_DRV_INTERNAL_H */
