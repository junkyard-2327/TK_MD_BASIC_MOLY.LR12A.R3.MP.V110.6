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
 *   sleepdrv_interface.h
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
 * 06 08 2018 owen.ho
 * [MOLY00332303] [R3.MP][RJIO] MD security related crypto API
 * 	
 * 	Add sleep control enum
 *
 * 06 08 2018 owen.ho
 * [MOLY00332303] [R3.MP][RJIO] MD security related crypto API
 * 	
 * 	Add sleep control enum
 *
 * 06 08 2018 owen.ho
 * [MOLY00332303] [R3.MP][RJIO] MD security related crypto API
 * 	
 * 	Add sleep control enum
 *
 * 04 30 2018 jack.tung
 * [MOLY00323118] [SleepDrv Disable Handle] Enum modification on R3 branch for SIM Task
 * 	
 * 	Sleep Driver Disable Handle Update for SIM Task
 *
 * 04 30 2018 jack.tung
 * [MOLY00323118] [SleepDrv Disable Handle] Enum modification on R3 branch for SIM Task
 * 	
 * 	Sleep Driver Disable Handle Update for SIM Task
 *
 * 04 30 2018 jack.tung
 * [MOLY00323118] [SleepDrv Disable Handle] Enum modification on R3 branch for SIM Task
 * Sleep Driver Disable Handle Update for SIM Task
 *
 * 03 23 2018 guo-huei.chang
 * [MOLY00315455] [Merlot call for check-in] MD Low Power Monitor
 * add Wall Clock and UTC for timing sync
 *
 * 03 23 2018 guo-huei.chang
 * [MOLY00315455] [Merlot call for check-in] MD Low Power Monitor
 * 	
 * 	add Wall Clock and UTC for timing sync
 *
 * 02 27 2018 ej.farn
 * [MOLY00299405] [Gen93]Low Power Monitor
 * Low Power Monitor - MD Platform Part
 *
 * 09 08 2017 jack.tung
 * [MOLY00274378] [MD Platform Low-Power] Check Flight Mode Condition on HW Status
 *
 * 08 15 2017 owen.ho
 * [MOLY00266818] [BIANCO][MT6763][MTBF][C2K][SIM1:CTC][SIM2:CU][ASSERT] file:mcu/common/driver/devdrv/log_seq/src/logseq_drv.c line:1195
 * Force on usip API
 *
 * 06 28 2017 jack.tung
 * [MOLY00257950] [Gen93] Flight Mode Debugging Information Improvement
 * 	
 * 	<saved by Perforce>
 *
 * 06 20 2017 owen.ho
 * [MOLY00258341] [MT6763][Bianco][N1][E2][MD issue][TW] Assert on ulsp_mod_function with PLS mode
 * 	
 * 	Add sleep control enum for PLS
 *
 * 06 12 2017 jack.tung
 * [MOLY00256211] [Gen93][UMOLYA][SleepDrv] Step-Logging Feature
 * 	
 * 	<saved by Perforce>
 *
 * 05 08 2017 owen.ho
 * [MOLY00247811] [Bianco] Fatal Error (0xb34, 0x90f9c520, 0xcccccccc) - SQN_EL1 when enabling ostd sleep
 *
 * 05 05 2017 owen.ho
 * [MOLY00246118] [BIANCO]Assert fail: wuldch.c 1439 0x0 0x0 0x0 - (LISR)UL1D_HISR_LISR
 * 	
 * 	Add sleep controller enumeration
 *
 * 03 31 2017 guo-huei.chang
 * [MOLY00238980] [DHL] MET timer for sync between MET & ELT
 * add SleepDrv_GetWallClk function
 *
 * 03 08 2017 owen.ho
 * [MOLY00171832] [UMOLYA]
 * 	
 * 	1.Update sleep_ctl_user enum
 * 	2.Porting EMM debug info function
 * 	3.Correct sleepDisable variable index
 *
 * 01 19 2017 kevin-kh.liu
 * [MOLY00173902] [MT6293][Sleep Mode]sleep mode modification
 * xL1SIM 2G Fixed AFC support - SM part
 *
 * 12 30 2016 owen.ho
 * [MOLY00171832] [UMOLYA]
 * 	Update SLEEP_CTL enum list
 *
 * 12 20 2016 owen.ho
 * [MOLY00171832] [UMOLYA][Bianco] Update SLEEP_CTL enum list
 *
 * 12 19 2016 owen.ho
 * [MOLY00171832] [UMOLYA]
 * Update sleep_ctl enum and md power domain enum
 *
 * 12 14 2016 owen.ho
 * [MOLY00171832] [UMOLYA]
 * 	
 * 	Update SLEEP_CTL enum
 *
 * 12 12 2016 owen.ho
 * [MOLY00171832] [UMOLYA]
 * 	
 * 	Update SLEEP_CTL user enum
 *
 * 12 09 2016 owen.ho
 * [MOLY00171832] [UMOLYA]
 * 	
 * 	Add SLEEP control user enum
 *
 * 12 02 2016 owen.ho
 * [MOLY00171832] [UMOLYA]
 * 	
 * 	Update lock/unlock core sleep control user list
 *
 * 11 23 2016 owen.ho
 * [MOLY00171832] [UMOLYA]
 * 	
 * 	6293 sleep driver  development (Modoify Lock/Unlock Sleep API)
 *
 * 11 09 2016 owen.ho
 * [MOLY00171832] [UMOLYA]
 * 	
 * 	Solve build error
 *
 * 07 20 2016 owen.ho
 * [MOLY00171832] [UMOLYA]
 * 	
 * 	Gen93 topsm/ostd driver develpement
 *
 * 07 06 2016 owen.ho
 * [MOLY00171832] [UMOLYA]
 * 6293 topsm/ostd driver development
 *
 * 06 24 2016 owen.ho
 * [MOLY00171832] [UMOLYA]
 * GEN93 md topsm/ostd driver development
 *
 * 03 31 2016 vmick.lin
 * [MOLY00171891] [6293] sleep driver development
 * 	
 * 	.
 *
 * 03 30 2016 vmick.lin
 * [MOLY00171891] [6293] sleep driver development
 * 	
 * 	.
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
 * 03 07 2016 james.pan
 * [MOLY00166205] [6292][Sleep Mode][EL1SM] development and validation
 * md_sm sleep_drv MSBB violation
 *
 * 02 23 2016 kevin-kh.liu
 * [MOLY00163589] [6292][sleep mode] code merge from LR11 to UMOLY
 * 	
 * 	Sleep Mode Debug Shared Memory Mechanism
 *
 * 02 18 2016 leon.yeh
 * [MOLY00165273] [6292][sleep mode] code merge from LR11 to UMOLY (fixAFC & 32K-less) - fix build error: INVALID_FREQ_OFF define changed to sleepdrv_interface.h
 *
 * 02 16 2016 dennis.chueh
 * [MOLY00141188] [ELBRUS][FPGA] Add new features.
 * Share memory  debug functions:
 * void SleepDrv_UpdatePSSlpDbgShmFixBuf(SLP_DBG_SHM_FIX_REG_INDEX index, kal_uint32 value);
 * void SleepDrv_UpdateL1SlpDbgShmFixBuf(SLP_DBG_SHM_FIX_REG_INDEX index, kal_uint32 value);
 * void SleepDrv_SlpDbgShmRingBufAdd(SLP_DBG_SHM_RING_BUFFER_INDEX index, kal_uint32 status, kal_uint32 dbg_info);
 *
 * 01 29 2016 jack.tung
 * [MOLY00163331] MD-TOPSM API Atomicity Access Implementation
 * Atomicity Operation Test and Implementation for TOPSM Software Force-On Control
 *
 * 01 20 2016 shengfu.tsai
 * [MOLY00124310] [6291 plus][sleep mode] code merge from UMOLY to 91plus
 * 	
 * 	.fixed xl1sm build issue
 *
 * 01 19 2016 shengfu.tsai
 * [MOLY00124310] [6291 plus][sleep mode] code merge from UMOLY to 91plus
 * 	
 * 	. modify l1sm\ul1sm include file to meet MSBB rule
 *
 * 11 03 2015 dennis.chueh
 * [MOLY00141188] [ELBRUS][FPGA] Add new features.
 * 	
 * 	Add ENUM define for drvtest.
 * 	Add Power down API.
 *
 * 11 02 2015 dennis.chueh
 * [MOLY00141188] [ELBRUS][FPGA] Add new features.
 * 	
 * 	add MIPS_CPC_PowerOn to sleepdrv_interface.h.
 *
 * 10 30 2015 shengfu.tsai
 * [MOLY00124310] [6291 plus][sleep mode] code merge from UMOLY to 91plus
 * 	
 * 	.merge some change from XL1SM branch
 *
 * 08 17 2015 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * Solve build error after applying ELBRUS_FPGA.
 *
 * 08 16 2015 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * Solve build error after applying ELBRUS make file.
 *
 * 08 13 2015 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * Solve build error after merging back to UMOLY trunk.
 *
 * 08 13 2015 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * Solve build  error after merging back.
 *
 * 08 12 2015 shengfu.tsai
 * [MOLY00124310] [6291 plus][sleep mode] code merge from UMOLY to 91plus
 * 	.add SleepDrv_LockPcoreSleepMode and SleepDrv_LockLMACPower
 *          but these function need to modify in the future
 *
 * 08 04 2015 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * SleepDrv_GetHandle() --> SleepDrv_GetHandle(SMP).
 *
 * 07 23 2015 guo-huei.chang
 * [MOLY00131103] Sleep Mode Debug Shared Memory Mechanism Improvement
 * 	1. add CCIRQ CMD for L1core querying shared memory address
 * 	2. add fix pat API for PScore and L1core and ring buffer API for L1core
 * 	3. add fix pat in CheckSleep function
 * 	4. add declarion for DBM and PTPOD shared memory
 *
 * 06 11 2015 che-wei.chang
 * [MOLY00089700] [TK6291][UMOLY]
 * 1.add MT6755 flag for Jade 
 * 2.update ostd elt log 
 * 3.update SleepDrv_GetHandle return value for assert
 *
 * 05 05 2015 che-wei.chang
 * [MOLY00089700] [TK6291][UMOLY] add enum PS_PLL_FORCEON_USER_SIB to PS_PLL_FORCEON_USER for SIB
 *
 * 04 29 2015 che-wei.chang
 * [MOLY00089700] [TK6291][UMOLY] add a new API MD_TOPSM_PLL_SW_Control for force on PS side PLLs
 *
 * 04 29 2015 che-wei.chang
 * [MOLY00089700] [TK6291][UMOLY] Sync vmick Cbr (Ccirq)
 *
 * 02 26 2015 che-wei.chang
 * [MOLY00089700] [TK6291][UMOLY] Sync MT6291_DEV branch
 *
 * 02 10 2015 yu-hung.huang
 * [MOLY00095165] [TK6291] Check in LITE GPT Driver and New Sleep API
 * [UMOLY] 2-leve GPT solution: refine SRCLK (26M) force on/off API interface for multiple user
 *
 * 09 05 2014 yu-hung.huang
 * [MOLY00078094] [UMOLY] Sleep Codes Sync from MOLY TRUNK to UMOLY TK6291_DEV
 * [TK6291_DEV] Sync SD3 Sleep Driver Codes from MOLY TRUNK to UMOLY (Changelists before 2014/9/4 in MOLY TRUNK)
 *
 * 08 27 2014 vmick.lin
 * [MOLY00075930] [MT6582LTE][CSFB DSDS][HQ][Ericsson][lwg bin] [ASSERT] file:rf_conflict_check.c line:97
 * 	.
 *
 * 08 27 2014 vmick.lin
 * [MOLY00075930] [MT6582LTE][CSFB DSDS][HQ][Ericsson][lwg bin] [ASSERT] file:rf_conflict_check.c line:97
 * 	.
 *
 * 08 26 2014 vmick.lin
 * [MOLY00075930] [MT6582LTE][CSFB DSDS][HQ][Ericsson][lwg bin] [ASSERT] file:rf_conflict_check.c line:97
 * 	.
 * 	Add 99T 32K period while OST struggle in SETTLE state
 *
 * 10 25 2013 alvin.chen
 * [MOLY00043719] [MT6290][MDTOPSM] Patch for Phone Field trial activity
 * Integration change.
 *
 * 10 03 2013 alvin.chen
 * [MOLY00040177] [MT6290][MD_TOPSM] Add FRC enable API for Early Stage Debug
 * <saved by Perforce>
 *
 * 07 26 2013 barry.hong
 * [MOLY00030921] [MT6290]Low Power Feature patch back from CBr
 * Low Power Feature patch back from CBr
 *
 * 02 26 2013 jeff.lee
 * reorg. header file.
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/



#ifndef __SLEEPDRV_INTERFACE_H__
#define __SLEEPDRV_INTERFACE_H__

#include "kal_public_api.h" //MSBB change #include "kal_release.h"
#include "sleepdrv_common.h"


#if defined(__SMART_PHONE_MODEM__) && defined(__MODEM_CCCI_EXIST__) && defined(__HIF_SDIO_SUPPORT__)
#define PHONE_TYPE_FOR_HQA
#endif

#define BIG_DAC_CHANGE_RECALIBRATION /* This compiler option is default defined in Moly branch to enable this feature */

#ifdef BIG_DAC_CHANGE_RECALIBRATION
#define FREQ_OFF_THR          11700 /* 13ppm freqeuncy offset based on 900MHz */
#define FREQ_OFF_VALID        65528 /* Valid DAC frequency offset shall be below 8191x8=65528(Hz)  */
#define INVALID_FREQ_OFF 0x7FFFFFFF /* When L1D/UL1D detect the frequency error is unreliable, return 0x7FFFFFFF to sleep mode */
  #if defined(__SGLTE__) ||  ( defined (__CSFB_WITH_SGLTE_HW__) && defined (__UMTS_TDD128_MODE__) )
    #define FREQ_OFF_THR_RF2           11700 /* 13ppm freqeuncy offset based on 900MHz */
    #define FREQ_OFF_VALID_RF2         65528 /* Valid DAC frequency offset shall be below 8191x8=65528(Hz)  */
  #endif
#endif //BIG_DAC_CHANGE_RECALIBRATION

typedef enum
{
   PS_USIP_FORCEON_USER_AUDIO = 0,
   PS_USIP_FORCEON_USER_LOG,	
   NUM_OF_USIP_FORCEON_USER
} PS_USIP_FORCEON_USER;

typedef enum
{
   PS_PLL_FORCEON_USER_CTI = 0,
   PS_PLL_FORCEON_USER_SIB,	
   NUM_OF_PLL_FORCEON_USER
} PS_PLL_FORCEON_USER;

typedef enum
{
	PS_TOPSM_MDCORE_PLL = 0,
	PS_TOPSM_BUS2X_PLL,
	PS_TOPSM_F208M_PLL,
	PS_TOPSM_DBG_PLL,
	PS_TOPSM_LOG_PLL,
	PS_TOPSM_SDF_ATB_PLL,
	NUM_OF_PS_TOPSM_PLL
} PS_TOPSM_PLL;

typedef enum
{
    SLEEP_CTL_SLEEP_DRV     =  0,   // 0x00, Allow AT cmd to control cores' sleep function
    SLEEP_CTL_SCC           =  1,   // 0x01, Disable sleep for PHY capture debug usage
    SLEEP_CTL_MML2          =  2,   // 0x02, For MML2 force on period, IA cannot sleep
    SLEEP_CTL_LHIF          =  3,   // 0x03, For CLDMA uplink scenario
    SLEEP_CTL_DVFS          =  4,   // 0x04, Keep MD awake while debugging gear changing and PLL ready interrupt
    SLEEP_CTL_3G_FDD_UL1D   =  5,   // 0x05, L1 lock CORE1 sleep before sending L2P CCIRQ to core1
    SLEEP_CTL_USB           =  6,   // 0x06, To lock sleep when driver get rx gpd done event 
    SLEEP_CTL_ADT           =  7,   // 0x07, DL data by GDMA to ISPRAM0, we need to avoid power down core0
    SLEEP_CTL_L4            =  8,   // 0x08, AT+ESLP to control sleep mode
    SLEEP_CTL_3G_TDD_TL1    =  9,   // 0x09, TL1 lock core0 sleep in TL1C/TL1D wake up state and unlock core0 sleep in TL1C/TL1D sleep state
    SLEEP_CTL_USIM0         = 10,   // 0x0A, 
    SLEEP_CTL_USIM1         = 11,   // 0x0B, 
    SLEEP_CTL_USIM2         = 12,   // 0x0C, 
    SLEEP_CTL_USIM3         = 13,   // 0x0D, 
    SLEEP_CTL_C2K_1X        = 14,   // 0x0E, 
    SLEEP_CTL_C2K_DO        = 15,   // 0x0F, 
    SLEEP_CTL_C2K_SS        = 16,   // 0x10, 
    SLEEP_CTL_2G_TDD_MPAL   = 17,   // 0x11, GAS lock CORE1 sleep before sending msg  to core1
    SLEEP_CTL_FM            = 18,   // 0x12, Lock sleep while do calibration
    SLEEP_CTL_EL1SM         = 19,   // 0x13, To lock core0/core1 sleep when LTE timer wakeup
    SLEEP_CTL_EL1SM_DEBUG   = 20,   // 0x14, Debug for LTE sleep mode verify
    SLEEP_CTL_UL1SM         = 21,   // 0x15, To lock core0 sleep when 3G FDD timer wakeup
    SLEEP_CTL_L1SM          = 22,   // 0x16, To lock core0 sleep when 2G timer wakeup
    SLEEP_CTL_GCU           = 23,   // 0x17, 
    SLEEP_CTL_IDC           = 24,   // 0x18, Lock core until idc_uart tx confirms last two bytes of data was sent
    SLEEP_CTL_SPEECH        = 25,   // 0x19, Lock core while MD speech is working 
    SLEEP_CTL_MTD_NAND      = 26,   // 0x1A, Not used in 93, but owner request to perserve for future use
    SLEEP_CTL_RR_FDD        = 27,   // 0x1B, To Lock/Unlock MPAL sleep 
    SLEEP_CTL_2G_SMM_DPS    = 28,   // 0x1C, To Lock/Unlock 2G SMM in Dummy PS TASK
    SLEEP_CTL_3G_SMM_DPS    = 29,   // 0x1D, To Lock/Unlock 3G SMM in Dummy PS TASK
    SLEEP_CTL_3G_FDD_SLCE   = 30,   // 0x1E, To Lock CORE1 sleep when in 3G connected mode for stack 1
    SLEEP_CTL_3G_FDD_SLCE2  = 31,   // 0x1F, To Lock CORE1 sleep when in 3G connected mode for stack 2
    SLEEP_CTL_3G_FDD_SLCE3  = 32,   // 0x20, To Lock CORE1 sleep when in 3G connected mode for stack 3
    SLEEP_CTL_EL2           = 33,   // 0x21, To ensure mcu awake until EL2 polling complete
    SLEEP_CTL_ERRC          = 34,   // 0x22, Lock current core for avoiding delay when lower layer control
    SLEEP_CTL_ERRC2         = 35,   // 0x23, Because in the L+L architecture, ERRC1 and ERRC2 are in the same task, both has sleep mode control requirement
    SLEEP_CTL_PLS           = 36,   // 0x24, Lock sleep to make sure the user's tag will succeed in the PLS logging mode.
    SLEEP_CTL_SIM1          = 37,   // 0x25, For SIM Task will preempt OS for seconds, use it to notify OSTD it is running
    SLEEP_CTL_SIM2          = 38,   // 0x26, For SIM Task will preempt OS for seconds, use it to notify OSTD it is running
    SLEEP_CTL_SIM3          = 39,   // 0x27, For SIM Task will preempt OS for seconds, use it to notify OSTD it is running
    SLEEP_CTL_SIM4          = 40,   // 0x28, For SIM Task will preempt OS for seconds, use it to notify OSTD it is running
    SLEEP_CTL_PBKDF2        = 41,   // 0x29, For PBKDF2 lock sleep while task temporarily sleep
    MAX_SLEEP_HANDLE 	    = 46
} SLEEP_CTL_USER;


#ifdef SMP
#undef SMP
#endif

typedef enum
{
 	SMP = 0,
	CORE0 = 0,
	CORE1,
	CORE2,
	CORE3
} SLPDRV_CORE_e; 

//#ifdef BIG_DAC_CHANGE_RECALIBRATION

typedef enum
{
   MODEM_TOPSM_INPUT_2G = 0, /* Input module is 2G */
   MODEM_TOPSM_INPUT_3G      /* Input module is 3G */
} MODEM_TOPSM_INPUT_MODULE;

typedef enum
{
   MODEM_TOPSM_RF1 = 0,
   MODEM_TOPSM_RF2,
   NUM_OF_CLOCK_SOURCE
} CLOCK_INPUT_SOURCE;

//#endif
typedef enum{    
    SLP_EMM_CORE0_SLP_SW_LOCK = 0,
    SLP_EMM_CORE0_SLP_SW_EXT_LOCK,
    SLP_EMM_CORE1_SLP_SW_LOCK,
    SLP_EMM_CORE1_SLP_SW_EXT_LOCK,
    SLP_EMM_CORE0_SLP_SW_LOCK_TIME,
    SLP_EMM_CORE1_SLP_SW_LOCK_TIME,
    SLP_EMM_CORE0_SLP_SW_UNLOCK_TIME,
    SLP_EMM_CORE1_SLP_SW_UNLOCK_TIME,
    SLP_EMM_SLP_INIFINITE_ENTER,
}SLP_EMM_LOG_INDEX;


kal_uint8 SleepDrv_GetHandle( kal_uint8 target_core );
void SleepDrv_SleepDisable( kal_uint8 handleCount );
void SleepDrv_LockSleep( SLEEP_CTL_USER user, kal_uint8 target_core);
void SleepDrv_SleepEnable( kal_uint8 handleCount );
void SleepDrv_UnlockSleep( SLEEP_CTL_USER user, kal_uint8 target_core);

void SleepDrv_LowPowerMonitorFlushCheck( void );
void SleepDrv_LowPowerMonitorDelete(void);
void SleepDrv_LowPowerMonitorCreate(void);
void SleepDrv_LowPowerMonitorStart(void);
void SleepDrv_LowPowerMonitorStop(void);
kal_bool SleepDrv_LowPowerMonitorSetParameter(kal_uint32 data_len, kal_uint8 *data_str);

void SleepDrv_UpdatePSSlpDbgShmFixBuf(SLP_DBG_SHM_FIX_REG_INDEX index, kal_uint32 value);
void SleepDrv_UpdateL1SlpDbgShmFixBuf(SLP_DBG_SHM_FIX_REG_INDEX index, kal_uint32 value);
void SleepDrv_SlpDbgShmRingBufAdd(SLP_DBG_SHM_RING_BUFFER_INDEX index, kal_uint32 status, kal_uint32 dbg_info);

extern kal_bool MD_TOPSM_StartLPM(kal_uint8 data_str0, kal_uint8 data_str1, kal_uint8 data_str2);
extern kal_bool MD_TOPSM_DumpLPM(void);


/* MDTOPSM Public API */
extern kal_uint32 SleepDrv_GetWallClk(void);
extern kal_uint32 SleepDrv_GetWallClk_H(void);
extern void MD_TOPSM_EnableFRC(void); /* Enable FRC API for exception handling */
extern kal_uint8 MD_TOPSM_SRCLK_SW_Control_GetHandle( kal_char* module_name ); /* Register the module as a SRCLK force on user */
extern void MD_TOPSM_SRCLK_SW_Control( kal_uint8 handleNum, kal_bool fOn ); /* SW lock or unlock 26M */
extern void MD_TOPSM_PLL_SW_Control(PS_PLL_FORCEON_USER USER,PS_TOPSM_PLL PLL, kal_bool fOn);
extern void MD_TOPSM_USIP_SW_Control(PS_USIP_FORCEON_USER USER, kal_bool fOn);

#ifdef __CENTRALIZED_SLEEP_MANAGER__
#include "reg_base.h"


#define GET_TOPSM_FRC_VAL_R()             (*(volatile kal_uint32 *)(BASE_ADDR_MDTOPSM+0x830))
#define GET_TOPSM_FRC_SYNC_VAL_2G_US() 
#define GET_TOPSM_FRC_SYNC_VAL_2G_26M()   
#define GET_TOPSM_FRC_SYNC_VAL_3G_US()    
#define GET_TOPSM_FRC_SYNC_VAL_3G_26M()   
#define GET_TOPSM_FRC_SYNC_VAL_TDD_US()   
#define GET_TOPSM_FRC_SYNC_VAL_TDD_26M()  
#define SET_GPS_SYNC_TIME(_val)           


#else /*__CENTRALIZED_SLEEP_MANAGER__*/
#define GET_TOPSM_FRC_VAL_R()
#define GET_TOPSM_FRC_SYNC_VAL_2G_US()
#define GET_TOPSM_FRC_SYNC_VAL_2G_26M()
#define GET_TOPSM_FRC_SYNC_VAL_3G_US()
#define GET_TOPSM_FRC_SYNC_VAL_3G_26M()
#define GET_TOPSM_FRC_SYNC_VAL_TDD_US()
#define GET_TOPSM_FRC_SYNC_VAL_TDD_26M()
#define SET_GPS_SYNC_TIME(_val)

#endif /*__CENTRALIZED_SLEEP_MANAGER__*/

#ifdef BIG_DAC_CHANGE_RECALIBRATION
extern void MODEM_TOPSM_SetCurrentFreqOffset( kal_int32 freq_offset, MODEM_TOPSM_INPUT_MODULE module, CLOCK_INPUT_SOURCE clockSource );
extern void MODEM_TOPSM_SetFreqOffsetBase( kal_int32 freq_offset, MODEM_TOPSM_INPUT_MODULE module, CLOCK_INPUT_SOURCE clockSource );
#endif

extern kal_uint32 MODEM_TOPSM_GetSSTA0(void);
extern kal_uint32 MODEM_TOPSM_GetSSTA1(void);

extern kal_bool OSTD_Is3gEnabled (void);


#endif
