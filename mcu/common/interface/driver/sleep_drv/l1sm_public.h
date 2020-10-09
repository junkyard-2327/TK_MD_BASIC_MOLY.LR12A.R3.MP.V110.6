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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   l1sm_public.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is for the public access for sleep mode operation.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 10 31 2017 pei-fei.wu
 * [MOLY00285806] add EL2 sleep enable/disable API
 *
 * 02 06 2017 yen-sheng.lin
 * [MOLY00204326] [MT6293] LTE sleep mode development.
 * [SLEEP_DRV] remove SleepDrv_LockLMACPower related code.
 *
 * 12 26 2016 kevin-kh.liu
 * [MOLY00216622] [2G] L1 dummy lisr removal check in
 * 	
 * 	reduce HWITC duration - check sleep status modification
 *
 * 11 01 2016 yen-sheng.lin
 * [MOLY00204326] [MT6293] LTE sleep mode development
 * add MPC task handle for sleep control and remove check sleep for MPC task .
 *
 * 10 17 2016 yen-sheng.lin
 * [MOLY00204326] [MT6293] LTE sleep mode development
 * 1) DI/EI region 2) share memory option 3) Code Sync.
 *
 * 09 30 2016 yen-sheng.lin
 * [MOLY00204326] [MT6293] LTE sleep mode development
 * merge EL1SM from UMOLY to UMOLYA.
 *
 * 04 19 2016 james.pan
 * [MOLY00166205] [6292][Sleep Mode][EL1SM] development and validation
 * Merging modem sleep mode related implementation from UMOLY to UMOLYA
 *
 * 03 29 2016 james.pan
 * [MOLY00166205] [6292][Sleep Mode][EL1SM] development and validation
 * L+L EL1-EL2 LMAC power notification handle bit extension
 *
 * 03 22 2016 kevin-kh.liu
 * [MOLY00166741] [MT6292][Sleep Mode]sleep mode modification
 * 	
 * 	modify l1sm & ul1sm & sleep_drv to meet MSBB rule
 *
 * 03 17 2016 james.pan
 * [MOLY00166205] [6292][Sleep Mode][EL1SM] development and validation
 * enable sleep driver triggering CC_IRQ_L2P_SLEEP_MODE to Core 2
 *
 * 03 15 2016 james.pan
 * [MOLY00166205] [6292][Sleep Mode][EL1SM] development and validation
 * EL1-EL2 lock LMAC power Sleep Driver for EL1 part (without trigger CCIRQ)
 *
 * 03 14 2016 james.pan
 * [MOLY00166205] [6292][Sleep Mode][EL1SM] development and validation
 * 1. MSBB Violation 
 * 2. Remove EL1D DVFS avtive window check 
 * 3. 4G sleep mode locker for DVFS drivers 
 * 4. Add Data Sync Barrier 
 * 5. Rename global veriable 
 * 6. LMAC locker API implement 
 * 7. EL1D Backup functions relocated
 *
 * 03 11 2016 james.pan
 * [MOLY00166205] [6292][Sleep Mode][EL1SM] development and validation
 * Rollback CL2258329 CL2158833 CL2159108
 *
 * 03 09 2016 james.pan
 * [MOLY00166205] [6292][Sleep Mode][EL1SM] development and validation
 * remove re-defined macro
 *
 * 03 07 2016 james.pan
 * [MOLY00166205] [6292][Sleep Mode][EL1SM] development and validation
 * md_sm sleep_drv MSBB violation
 *
 * 02 25 2016 shengfu.tsai
 * [MOLY00165958] [MT6292][Sleep Mode]L1 sleep mode modification
 * 	
 * 	.fix the MSBB violation, and add function prototype
 *
 * 03 21 2013 barry.hong
 * [MOLY00012324] MOLY sleep driver sync
 * .Sync Sleep Driver modification to MOLY trunk
 *
 * 02 26 2013 jeff.lee
 * reorg. header file.
 *
 * 06 08 2012 jeff.lee
 * removed!
 * .
 *
 * 04 24 2012 wcpuser_integrator
 * removed!
 * .
 *
 * 07 27 2011 william.lin
 * removed!
 * removed!
 * Define L1I_GetTimeStampXXX for non-hal members.
 *
 * 12 01 2010 raymond.chen
 * removed!
 * .
 *
 * removed!
 * removed!
 * uint8->kal_uint8
 *
 * removed!
 * removed!
 * Fix type error in the define.
 *
 *    Rev 1.2   May 17 2005 00:29:14   BM_Trunk
 * Karlos:
 * add copyright and disclaimer statement
 *
 *    Rev 1.1   Jan 18 2005 00:34:26   BM
 * append new line in W05.04
 *
 *    Rev 1.0   Nov 30 2002 19:49:58   admin
 * Initial revision.
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/



#ifndef __L1SM_PUBLIC_H__
#define __L1SM_PUBLIC_H__

#include "kal_public_api.h" //MSBB change #include "kal_release.h"
#include "reg_base.h"

kal_int32 L1I_GetTimeStampEbits(void);
kal_uint32 L1I_GetTimeStamp(void);

/*for fm related function interface for other module outside the driver*/
extern void FM_ReCalibration(void);
extern void FM_SetCalibrationResult( kal_uint32 fm_dur, kal_uint32 fm_freq, kal_uint32 fmResult );
extern void FM_GetCalibrationResult( kal_uint32 *fm_dur_ptr, kal_uint32 *fm_freq_ptr, kal_uint32 *fmResult_ptr );
extern kal_bool FM_IsCalibrating(void);

// This assignment has dependency to ESM Locker
// Please modify also @ el1sm_modem_public.h with extra cares
#define ESM_DVFS_DRIVER_LOCKER_MODEM     (1)
#define ESM_DVFS_DRIVER_LOCKER_MD        (2)
#define ESM_SIB_DRIVER_LOCKER_4G         (3)

extern void EL1SM_SleepEnable( kal_uint8 handle );
extern void EL1SM_SleepDisable_Wakeup( kal_uint8 handle );
extern void EL1SM_EL2_SleepEnable( void );
extern void EL1SM_EL2_SleepDisable_Wakeup( void );

#if 0
/* under construction !*/
/* under construction !*/
#endif
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ ) || defined( __MTK_UL1_FDD__ ) )
kal_uint16 SleepDrv_RTOS_CheckSleepGsm( void );
#endif /* __CENTRALIZED_SLEEP_MANAGER__ || __MTK_UL1_FDD__ */
#ifdef __MTK_UL1_FDD__ 
kal_bool SleepDrv_RTOS_CheckSleepUmts( void );
#endif /* __MTK_UL1_FDD__ */
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ ) || defined( __LTE_RAT__ ) )
kal_bool SleepDrv_RTOS_CheckSleepLTE( void );
#endif /* __CENTRALIZED_SLEEP_MANAGER__ || __LTE_RAT__ */

#endif
