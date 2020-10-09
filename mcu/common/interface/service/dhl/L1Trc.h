/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * Filename:
 * ---------
 *   L1Trc.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Layer 1 trace interface
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 11 30 2017 yu-hsiang.peng
 * [MOLY00292252] [6293] Print L2 timestamp when current is non-4G
 * [LR12A.R3] L2 23G time
 *
 * 09 07 2017 yu-hsiang.peng
 * [MOLY00275876] [Gen93] L1 trace code size silm
 * [UMOLYA.TRUNK] L1 trace redefine
 *
 * 08 16 2017 yu-hsiang.peng
 * [MOLY00266204] [Gen93] Common feature development before control
 * [UMOLYA.TRUNK] Two features 
 * 	1. OTA message filter 
 * 	2. Non-smp use function check
 *
 * 06 20 2017 kenneth.lin
 * [MOLY00257978] conditional trace development
 * 	
 * 	add typedef cgen_use_L1ULSP_NOT_PREPROCESS in 92 gen flow
 *
 * 06 19 2017 yancy.chien
 * [MOLY00257978] conditional trace development
 * Fix build error.
 *
 * 06 19 2017 yancy.chien
 * [MOLY00257978] conditional trace development
 * 1st phase-in.
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 * 	     Apply A style.
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 *     Apply A style.
 *
 * 04 20 2017 yu-hsiang.peng
 * [MOLY00243236] [6293] L1trace LISR check use macro
 * [UMOLYA.TRUNK] ulsp lisr check use macro to enhance debug flow
 *
 * 03 20 2017 kenneth.lin
 * [MOLY00235284] [xL1SIM][DHL] support ulsp logging feature in xl1sim
 * [xl1sim][DHL] ulsp code refactoring
 *
 * 03 14 2017 kenneth.lin
 * [MOLY00235284] [xL1SIM][DHL] support ulsp logging feature in xl1sim
 * fixed build failed on UESIM
 *
 * 03 14 2017 kenneth.lin
 * [MOLY00235284] [xL1SIM][DHL] support ulsp logging feature in xl1sim
 *
 *  DHL support ulsp logging feature in xl1sim
 *
 *  1. enable __USE_ULSP__
 *  2. implement ulsp macro to send ELT directly
 *
 * 03 10 2017 yu-hsiang.peng
 * [MOLY00224307] [MT6293] General feature change before MP branch create
 * [UMOLYA.TRUNK] add L1 time trace new format
 *
 * 03 10 2017 yu-hsiang.peng
 * [MOLY00224307] [MT6293] General feature change before MP branch create
 * [UMOLYA.TRUNK] Fix target build warning
 *
 * 03 07 2017 yu-hsiang.peng
 * [MOLY00224307] [MT6293] General feature change before MP branch create
 * [UMOLYA.TRUNK] move filter to L2 cached lock
 *
 * 03 01 2017 yu-hsiang.peng
 * [MOLY00231055] [Bianco Bring-up] [6293] L1L2 trace new verison (CGen & DHL)
 * [UMOLYA.TRUNK] Fix non-smp trace api build warning
 *
 * 02 22 2017 yu-hsiang.peng
 * [MOLY00231055] [Bianco Bring-up] [6293] L1L2 trace new verison (CGen & DHL)
 * [UMOLYA.TRUNK] change L1/L2 trace macro.
 *
 * 02 08 2017 willie.pan
 * [MOLY00163869] [6293][ULS+] Support 9~16 words for L2 logging in MoDIS
 *
 *  .
 *
 * 12 15 2016 willie.pan
 * [MOLY00163869] Support 8 word API for MODIS L2 Logging
 *
 * 11 29 2016 yu-hsiang.peng
 * [MOLY00210769] [MT6293] MT6292 CCB service migrate to MT6293 and MT6293 ULSP logging on CCB development
 * [UMOLYA] Add bound sync in L1L2 redump info.
 *
 * 11 28 2016 yu-hsiang.peng
 * [MOLY00210769] [MT6293] MT6292 CCB service migrate to MT6293 and MT6293 ULSP logging on CCB development
 * .UMOLYA] Add idle sync in L1L2 redump info.
 *
 * 11 14 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  . Suooprt L2 logging @ xL1SIM
 *
 * 11 11 2016 yancy.chien
 * [MOLY00212754] [MT6293][NWSIM][3G][R6][All case][BLOCK] UESIM power on always error at l2trc_send_4_word_int
 *  Fix build error.
 *
 * 11 11 2016 yancy.chien
 * [MOLY00212754] [MT6293][NWSIM][3G][R6][All case][BLOCK] UESIM power on always error at l2trc_send_4_word_int
 *
 * 11 08 2016 yancy.chien
 * [MOLY00211534] [DHL] [L1/L2] Workaround for pass funtion in macro parameter issue
 *
 * 11 02 2016 yu-hsiang.peng
 * [MOLY00210965] [MT6293] Patch MT6290, MT6291, MT6292 change into UMOLYA
 * [UMOLYA.TRUNK] merge Yancy's CL3048791 & CL#3049395
 *
 * 11 01 2016 yancy.chien
 * [MOLY00200296] [DHL] C2K Time Trace API.
 *  1. Enlarge ping/pong buffer size to 128KB on UT env
 *  2. Wrap time trace API by C2K_RAT option
 *
 * 11 01 2016 yu-hsiang.peng
 * [MOLY00210769] [MT6293] MT6292 CCB service migrate to MT6293 and MT6293 ULSP logging on CCB development
 * [UMOLYA.TRUNK] ULSP on CCB full load logging, normal logging(stage 1)
 *
 * 10 27 2016 yancy.chien
 * [MOLY00181823] [DHL] UMOLY Migrate to UMOLYA - W16.44 Migration.
 *
 * 10 14 2016 yancy.chien
 * [MOLY00181823] [DHL] UMOLY Migrate to UMOLYA
 * [93Only] Add C2K time API for trigger flush event in MoDIS / UESIM
 *
 * 10 03 2016 yancy.chien
 * [MOLY00181823] [DHL] UMOLY Migrate to UMOLYA
 *  W16.41 Migration
 *    Merge L1Trc related function to fix MoDIS logging issue.
 *
 * 09 22 2016 jean.tsao
 * [MOLY00185213] [UMOLYA] DHL 92 SW logging migrate to 93
 * [ULSP] MCU side driver API
 *
 * 09 21 2016 yu-hsiang.peng
 * [MOLY00201169] [MT6293] DHL EBS support
 * [UMOLYA.TRUNK]  ULSP buffer put in non-cached
 * (Required by Cynthia.Sun & Willie Pan)
 *
 * 09 20 2016 yu-hsiang.peng
 * [MOLY00190921] [MT6293] Fix DHL Build Warning
 * [UMOLYA.TRUNK]. Fix XL1SIM build warning
 *
 * 09 20 2016 yu-hsiang.peng
 * [MOLY00185213] [MT6293] DHL MT6292 SW logging migrate to MT6293 & MT6293 ULSP logging development
 * [UMOLYA.TRUNK]  EX flow L1/L2 redump trace
 *
 * 09 14 2016 yu-hsiang.peng
 * [MOLY00185213] [MT6293] DHL MT6292 SW logging migrate to MT6293 & MT6293 ULSP logging development
 * [UMOLYA.TRUNK] Exception TMD & Macross templete
 *
 * 09 13 2016 yu-hsiang.peng
 * [MOLY00190921] [MT6293] Fix DHL Build Warning
 * [UMOLYA.TRUNK] Fix mask interrupt build warning
 *
 * 08 11 2016 yu-hsiang.peng
 * [MOLY00185213] [MT6293] DHL MT6292 SW logging migrate to MT6293 & MT6293 ULSP logging development
 * [UMOLYA.TRUNK] Merge back 93 ULSP 1st connect ELT code - increase LS buffer size (stage 4)
 *
 * 08 03 2016 yu-hsiang.peng
 * [MOLY00185213] [MT6293] DHL MT6292 SW logging migrate to MT6293 & MT6293 ULSP logging development
 * [UMOLYA.TRUNK] Merge back 93 ULSP 1st connect ELT code (stage 4)
 *
 * 07 22 2016 yancy.chien
 * [MOLY00192766] [DHL] L1/L2 Trace optimization
 *  Remove redundant "filter[0]==1" checking
 *
 * 07 14 2016 yu-hsiang.peng
 * [MOLY00190921] [MT6293] Fix DHL Build Warning
 * Kuo-Wei Hung requirement : Fix xL1SIM warning
 *
 * 06 24 2016 yu-hsiang.peng
 * [MOLY00185213] [UMOLYA] DHL 92 SW logging migrate to 93
 * [UMOLYA.TRUNK] 93 ULSP trace macro  & LS 1st integrate (stage 2)
 *
 * 06 21 2016 yu-hsiang.peng
 * [MOLY00185213] [UMOLYA] DHL 92 SW logging migrate to 93
 * [UMOLYA.TRUNK] 92 SW logging migration & 93 L1 L2 trace macro (stage 1)
 *
 * 05 26 2016 yancy.chien
 * [MOLY00181823] [DHL] UMOLY Migrate to UMOLYA
 * .
 *
 * 05 16 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In] Fix warning of ULSP macro
 *
 *  .
 *
 * 04 26 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In] ULS+ PAE Log Parsing Feature Phase In
 *
 *  .
 *
 * 04 25 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In] Fix ULS+ offset for PAE
 *
 *  .
 *
 * 04 15 2016 eason.lai
 * [MOLY00173976] [6292][DHL] L1/L2 trace integrated with log DMA
 *  logDMA is not enabled yet due to logDMA sperious IRQ is not fixed
 *
 * 04 14 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  .Optimize interrupt disable in ULS+ solution
 *
 * 04 13 2016 eason.lai
 * [MOLY00173976] [6292][DHL] L1/L2 trace integrated with log DMA
 *  This change haven't enable the log DMA due to log DMA IRQ has
 *                       spurious interrupt.
 *
 * 04 13 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In] Modification for L1/L2 Logging Profiling
 *
 *  .
 *
 * 04 07 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  .
 *
 * 04 06 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  . Update for new L1/L2 logging API
 *
 * 04 06 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  .
 *
 * 04 05 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  .
 *
 * 03 31 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In] Temporary use old inerrupt disable API on ULS+
 *
 *  .
 *
 * 03 30 2016 eason.lai
 * [MOLY00171573] [DHL] apply CIRQ EI/DI marco (without 40Qbit check)
 *  fixed xl1sim L1D cosim regression fail issue
 *
 * 03 29 2016 eason.lai
 * [MOLY00171573] [DHL] apply CIRQ EI/DI marco (without 40Qbit check)
 *  1. apply CIRQ EI/DI marco on L1 trace
 *  2. fixed l1trace potential bug
 *  3. support L1_CATCHER = FALSE
 *
 * 03 21 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In] Add ULSP L1&L2 Logging Macro
 *
 *  .
 *
 * 03 21 2016 eason.lai
 * [MOLY00170160] [6292/Elbrus][DHL] L1trace HRT enhancement
 *  reduce caller codesize overhead
 *
 * 03 14 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In] Fix auto-TCM issue
 *
 *  .
 *
 * 03 14 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  .
 *
 * 02 26 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  .
 *
 * 02 26 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  .ULS+ for L1 PAE
 *
 * 02 26 2016 eason.lai
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *  disabled  L2 timesatmp hardcode
 *
 * 02 01 2016 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *  l1/l2 log redump
 *
 * 01 28 2016 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *
 *  replace SaveAndSetIRQMask with kal_hrt_SaveAndSetIRQMask
 *
 * 01 26 2016 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *  1. load filter from nvram at task init
 *  2. exception log dump
 *
 * 11 25 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 * refine the xl1sim option in DHL and restore the patch of CL#1796032.
 *
 * 11 23 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 * xl1sim introduce SMP DHL
 *
 * 10 30 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *
 *  remove __PCORE__ and __L1CORE__ option
 *
 * 10 26 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *  enable L1/L2 trace bit decoding
 *
 * 10 23 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *
 *  SMP DHL logging migration
 *
 * 09 21 2015 yu-hsiang.peng
 * [MOLY00142553] [DHL] fix build warning for LR11 MP/Trunk
 * [UMOLY.Trunk] Fix build warning(0921)
 *
 * 08 27 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *  fixed link error
 *
 * 07 22 2015 eason.lai
 * [MOLY00130157] [TK6291][DHL] smart logging migration
 *  fixed dhl_trace.c assert @ 1340
 *
 * 07 22 2015 eason.lai
 * [MOLY00130157] [TK6291][DHL] smart logging migration
 *  .
 *
 * 07 10 2015 eason.lai
 * merge code
 *
 * 05 15 2015 eason.lai
 * [MOLY00113901] [TK6291][DHL] change pcore/l1core l1trace buffer size
 *  base on PAE result, pcore 8KB, l1core 64KB
 *
 * 04 26 2015 eason.lai
 * [MOLY00109038] [TK6291E1][pre 1st Call][UMOLY][4G][FDD] There's no assert/fatal error message on "System Trace(L1CORE)" window
 *  1. fixed l1core assert log missing by the potential problem.
 *  2. start to support l1core l1 filer store in NVRAM
 *
 * 04 15 2015 eason.lai
 * [MOLY00107803] [TK6291][DHL] PAE simulation code and option patch back.
 *  as CR title.
 *
 * 04 09 2015 eason.lai
 * [MOLY00105513] [TK6291][DHL] introduce GPD/SPD wrapper
 *       GPD/SPD wrapper and L2copro log dma
 *
 * 03 17 2015 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 * move L1 trace buffer to L2SRAM, and change tst ring buffer as cacheable
 *
 * 02 10 2015 eason.lai
 * [MOLY00095350] [TK6291][DHL] enable 64us timestamp in modis/uesim
 *  move l2 trace timestamp marco to be function call
 *
 * 11 24 2014 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 * FMA global timer
 *
 * 11 14 2014 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 *  first time patch back
 *
 * 06 09 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * re-enable l1 boxster.
 *
 * 05 07 2014 eason.lai
 * [MOLY00064969] [DHL]expand tab to 4 spaces to have better typesettings
 * .
 *
 * 04 29 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * rollback L1boxster to align ELT support.
 *
 * 04 16 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * disable l1boxster on modis.
 *
 * 04 16 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * enable l1boxster by default.
 *
 * 04 15 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * Disable l1boxster by default due to incorrect usage of L1 trace API in AST L1 module.
 *
 * 04 15 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * fix modis build error.
 *
 * 04 15 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * fix modis build error.
 *
 * 04 15 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * enable L1Boxster support and optimization.
 *
 * 04 07 2014 eason.lai
 * [MOLY00061900] [DHL][K95 MD2] merge code from DEV branch
 *  .
 *
 * 03 24 2014 ken.liu
 * [MOLY00060207] [DHL] support L2 log buffer in TCM
 * support l2 buffer from tcm sections.
 *
 * 03 13 2014 ken.liu
 * [MOLY00059075] [xL1SIM] Patch back to MOLY
 * add TRC_L2_PAD define.
 *
 * 03 10 2014 willie.pan
 * [MOLY00059007] [MT6290E2][EL1] Sync DSP log and L1 trace by A time
 *  .
 *
 * 03 07 2014 ken.liu
 * [MOLY00058420] [DHL] Fast interrupt mask/unmask via inline assembly for L2 trace
 * enable __L2_LOGGING_IRQ_LOC__.
 *
 * 03 06 2014 ken.liu
 * [MOLY00058420] [DHL] Fast interrupt mask/unmask via inline assembly for L2 trace
 * fix modis build error.
 *
 * 03 06 2014 ken.liu
 * [MOLY00058420] [DHL] Fast interrupt mask/unmask via inline assembly for L2 trace
 * replace l2 trace interrupt mask/unmask with inline assembly.
 *
 * 02 26 2014 eason.lai
 * [MOLY00057680] [L2][HMU][DHL] L2 trace and L2 timestamp support
 * Provide L2 trace timestamp API and change L2 trace type number
 *
 * 08 26 2013 mojo.lai
 * [MOLY00035110] Fix DHL L1 trace decode fail issue
 *
 * 05 15 2013 ken.liu
 * [MOLY00020676] [MT6290 Bring-up] Layer 2 trace enum arg and filter support
 * enable l2 trace enum support.
 *
 * 04 30 2013 ken.liu
 * [MOLY00021076] [MT6290 Bring-up] DHL flush log uses too much CPU time before entering idle task
 * sync from MT6290E1_FirstCall.
 *
 * 03 08 2013 ken.liu
 * [MOLY00009212] LTE Multimode merge back to MOLY
 * 1. add dhl_EM_logger api.
 * 2. resend exception log on first tool connection.
 *
 * 01 24 2013 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * enable flush log on assert
 *
 * 12 26 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * sync TST new api trc_UpdateTimeStamp.
 *
 * 11 29 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * sync section attribute for layer 1 trace and l1 sim task/hisr config for DHL.
 *
 * 11 07 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * dhl module check-in.
 ****************************************************************************/
#if defined(__USE_ULSP__)
typedef int cgen_use_L1ULSP;
typedef int cgen_use_L1BitField;
typedef int cgen_use_L1CondTrace;

#else
typedef int cgen_use_L1Boxster;
typedef int cgen_use_L2Boxster;
typedef int cgen_use_L1BitField;
typedef int cgen_use_L1ULSP_NOT_PREPROCESS; //workaround for cgen
#endif

#if defined (L1_CATCHER)
#ifndef _L1TRC_H
#define _L1TRC_H

#include "kal_general_types.h"
#include "kal_public_api.h"

#if defined(__USE_ULSP__)
#include "ulsp_mcu_logging.h"
#if defined(__MTK_TARGET__)
#include <mips/mt.h>
#endif // (__MTK_TARGET__)
#endif//defined(__USE_ULSP__)

#if defined(__MTK_TARGET__)
#if !defined(__L2_LOGGING_IRQ_LOC__)
#define __L2_LOGGING_IRQ_LOC__
#endif
#endif

#if defined(__L2_LOGGING_IRQ_LOC__)
extern kal_uint32 dhl_SaveAndSetIRQMask_cirq_wrap(void);
extern void dhl_RestoreIRQMask_cirq_wrap(kal_uint32 status);
#define DHL_LOCK_CPU_INTERRUPT(oldmask) \
    do{ \
        oldmask = dhl_SaveAndSetIRQMask_cirq_wrap(); \
    }while(0)

#define DHL_UNLOCK_CPU_INTERRUPT(oldmask) \
    do{ \
        dhl_RestoreIRQMask_cirq_wrap(oldmask); \
    }while(0)
#elif defined(__MTK_TARGET__)

extern kal_uint32 kal_hrt_SaveAndSetIRQMask(void);
extern void kal_hrt_RestoreIRQMask(kal_uint32 irq);
extern kal_uint32 dhl_SaveAndSetIRQMask_cirq_wrap(void);
extern void dhl_RestoreIRQMask_cirq_wrap(kal_uint32 status);



#define DHL_LOCK_CPU_INTERRUPT(oldmask) \
    do{ \
        oldmask = kal_hrt_SaveAndSetIRQMask(); \
    }while(0)

#define DHL_UNLOCK_CPU_INTERRUPT(oldmask) \
    do{ \
        kal_hrt_RestoreIRQMask(oldmask); \
    }while(0)
#else
#define DHL_LOCK_CPU_INTERRUPT(oldmask) \
    do{ \
        oldmask = 0; \
    }while(0)

#define DHL_UNLOCK_CPU_INTERRUPT(oldmask) \
    do{ \
        oldmask = 0; \
    }while(0)
#endif /* __L2_LOGGING_IRQ_LOC__ */
//For ULSP

#if defined(__USE_ULSP__)
#if defined(__LTE_L1SIM__)
extern kal_bool l1_trc_assure_lisr(const char *func, const char *file, int line);
#else
extern kal_bool l1_trc_assure_lisr();
#endif
extern void trc_init_ulsp_hw(void);

#if defined(__MTK_TARGET__)
/********************************************
* 6293 Default Macro Version
* This will use local variable to catch user parameter
* and use DI/EI to protect trace
********************************************/
//For L1 trace
//filter check interval
#define TRC_START_FILTER_CHECK_L1( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    if((FILTER_ARRAY[FILTER_ARRAY_INDEX] & FILTER_CLASS) != 0) {

#define TRC_END_FILTER_CHECK_L1( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    }
    
//pre-process user data
#define TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_var, var) kal_uint32 cgen_local_var = (kal_uint32)(var);
#define TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_var, var) 

//fill data interval
#define TRC_START_FILL_L1()  {\
        kal_uint32 oldmask=0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask);

#define TRC_END_FILL_L1()  \
    DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    }

//Implement layer
//First
#define TRC_OUTPUT_16_FIRST_L1(value) ULSP_WRITE_PB0_F_16(value);
//Middle
#define TRC_OUTPUT_32_MID_L1(value) ULSP_WRITE_PB0_M_32(value);
#define TRC_OUTPUT_24_MID_L1(value) ULSP_WRITE_PB0_M_24(value);
#define TRC_OUTPUT_16_MID_L1(value) ULSP_WRITE_PB0_M_16(value);
#define TRC_OUTPUT_8_MID_L1(value) ULSP_WRITE_PB0_M_8(value);
//Last
#define TRC_OUTPUT_32_LAST_L1(value) ULSP_WRITE_PB0_L_32(value);
#define TRC_OUTPUT_24_LAST_L1(value) ULSP_WRITE_PB0_L_24(value);
#define TRC_OUTPUT_16_LAST_L1(value) ULSP_WRITE_PB0_L_16(value);
#define TRC_OUTPUT_8_LAST_L1(value) ULSP_WRITE_PB0_L_8(value);
//Single
#define TRC_OUTPUT_32_SINGLE_L1(value) ULSP_WRITE_PB0_S_32(value);
#define TRC_OUTPUT_24_SINGLE_L1(value) ULSP_WRITE_PB0_S_24(value);
#define TRC_OUTPUT_16_SINGLE_L1(value) ULSP_WRITE_PB0_S_16(value);
#define TRC_OUTPUT_8_SINGLE_L1(value) ULSP_WRITE_PB0_S_8(value);

//Wrapper layer
//First
#define TRC_OUTPUT_16_FIRST_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_16_FIRST_L1(cgen_local_var)
//Middle
#define TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_32_MID_L1(cgen_local_var)
#define TRC_OUTPUT_24_MID_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_24_MID_L1(cgen_local_var)
#define TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_16_MID_L1(cgen_local_var)
#define TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_8_MID_L1(cgen_local_var)
//Last
#define TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_32_LAST_L1(cgen_local_var)
#define TRC_OUTPUT_24_LAST_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_24_LAST_L1(cgen_local_var)
#define TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_16_LAST_L1(cgen_local_var)
#define TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_8_LAST_L1(cgen_local_var)
//Single
#define TRC_OUTPUT_32_SINGLE_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_32_SINGLE_L1(cgen_local_var)
#define TRC_OUTPUT_24_SINGLE_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_24_SINGLE_L1(cgen_local_var)
#define TRC_OUTPUT_16_SINGLE_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_16_SINGLE_L1(cgen_local_var)
#define TRC_OUTPUT_8_SINGLE_WRAPPER_L1(cgen_local_var, var) TRC_OUTPUT_8_SINGLE_L1(cgen_local_var)

//For L2 trace
//filter check interval
#define TRC_START_FILTER_CHECK_L2( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    if((FILTER_ARRAY[FILTER_ARRAY_INDEX] & FILTER_CLASS) != 0) {

#define TRC_END_FILTER_CHECK_L2( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    }
    
//pre-process user data
#define TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_var, var) kal_uint32 cgen_local_var = (kal_uint32)(var);
#define TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_var, var) 

//fill data interval
#define TRC_START_FILL_L2()  {\
        kal_uint32 oldmask=0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask);

#define TRC_END_FILL_L2()  \
    DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    }

//Implement layer
//First
#define TRC_OUTPUT_16_FIRST_L2(value) ULSP_WRITE_PB1_F_16(value);
//Middle
#define TRC_OUTPUT_32_MID_L2(value) ULSP_WRITE_PB1_M_32(value);
#define TRC_OUTPUT_24_MID_L2(value) ULSP_WRITE_PB1_M_24(value);
#define TRC_OUTPUT_16_MID_L2(value) ULSP_WRITE_PB1_M_16(value);
#define TRC_OUTPUT_8_MID_L2(value) ULSP_WRITE_PB1_M_8(value);
//Last
#define TRC_OUTPUT_32_LAST_L2(value) ULSP_WRITE_PB1_L_32(value);
#define TRC_OUTPUT_24_LAST_L2(value) ULSP_WRITE_PB1_L_24(value);
#define TRC_OUTPUT_16_LAST_L2(value) ULSP_WRITE_PB1_L_16(value);
#define TRC_OUTPUT_8_LAST_L2(value) ULSP_WRITE_PB1_L_8(value);
//Single
#define TRC_OUTPUT_32_SINGLE_L2(value) ULSP_WRITE_PB1_S_32(value);
#define TRC_OUTPUT_24_SINGLE_L2(value) ULSP_WRITE_PB1_S_24(value);
#define TRC_OUTPUT_16_SINGLE_L2(value) ULSP_WRITE_PB1_S_16(value);
#define TRC_OUTPUT_8_SINGLE_L2(value) ULSP_WRITE_PB1_S_8(value);

//Wrapper layer
//First
#define TRC_OUTPUT_16_FIRST_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_16_FIRST_L2(cgen_local_var)
//Middle
#define TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_32_MID_L2(cgen_local_var)
#define TRC_OUTPUT_24_MID_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_24_MID_L2(cgen_local_var)
#define TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_16_MID_L2(cgen_local_var)
#define TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_8_MID_L2(cgen_local_var)
//Last
#define TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_32_LAST_L2(cgen_local_var)
#define TRC_OUTPUT_24_LAST_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_24_LAST_L2(cgen_local_var)
#define TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_16_LAST_L2(cgen_local_var)
#define TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_8_LAST_L2(cgen_local_var)
//Single
#define TRC_OUTPUT_32_SINGLE_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_32_SINGLE_L2(cgen_local_var)
#define TRC_OUTPUT_24_SINGLE_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_24_SINGLE_L2(cgen_local_var)
#define TRC_OUTPUT_16_SINGLE_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_16_SINGLE_L2(cgen_local_var)
#define TRC_OUTPUT_8_SINGLE_WRAPPER_L2(cgen_local_var, var) TRC_OUTPUT_8_SINGLE_L2(cgen_local_var)




/********************************************
* Only for 6293 Non-SMP Special User Version
* This will  "NOT" use local variable to catch user parameter
* and use SMP check fail let user assert to protect trace
********************************************/
//For L1 Non SMP trace
//filter check interval
#define TRC_START_FILTER_CHECK_L1_NON_SMP TRC_START_FILTER_CHECK_L1
#define TRC_END_FILTER_CHECK_L1_NON_SMP TRC_END_FILTER_CHECK_L1

//pre-process user data
#define TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_var, var) 
#define TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_var, var) 

//fill data interval
#define TRC_START_FILL_L1_NON_SMP( ) \
    l1_trc_assure_lisr(); \
    {

#define TRC_END_FILL_L1_NON_SMP( ) \
    }

//Wrapper layer
//First
#define TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_16_FIRST_L1(var)
//Middle
#define TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_32_MID_L1(var)
#define TRC_OUTPUT_24_MID_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_24_MID_L1(var)
#define TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_16_MID_L1(var)
#define TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_8_MID_L1(var)
//Last
#define TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_32_LAST_L1(var)
#define TRC_OUTPUT_24_LAST_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_24_LAST_L1(var)
#define TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_16_LAST_L1(var)
#define TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_8_LAST_L1(var)
//Single
#define TRC_OUTPUT_32_SINGLE_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_32_SINGLE_L1(var)
#define TRC_OUTPUT_24_SINGLE_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_24_SINGLE_L1(var)
#define TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_16_SINGLE_L1(var)
#define TRC_OUTPUT_8_SINGLE_WRAPPER_L1_NON_SMP(cgen_local_var, var) TRC_OUTPUT_8_SINGLE_L1(var)

//For L2 Non SMP trace
//filter check interval
#define TRC_START_FILTER_CHECK_L2_NON_SMP TRC_START_FILTER_CHECK_L2
#define TRC_END_FILTER_CHECK_L2_NON_SMP TRC_END_FILTER_CHECK_L2

//pre-process user data
#define TRC_PREPROCESS_DATA_SECTION1_L2_NON_SMP(cgen_local_var, var) 
#define TRC_PREPROCESS_DATA_SECTION2_L2_NON_SMP(cgen_local_var, var) 

//fill data interval
#define TRC_START_FILL_L2_NON_SMP( ) \
    l1_trc_assure_lisr(); \
    {

#define TRC_END_FILL_L2_NON_SMP( ) \
    }

//Wrapper layer
//First
#define TRC_OUTPUT_16_FIRST_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_16_FIRST_L2(var)
//Middle
#define TRC_OUTPUT_32_MID_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_32_MID_L2(var)
#define TRC_OUTPUT_24_MID_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_24_MID_L2(var)
#define TRC_OUTPUT_16_MID_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_16_MID_L2(var)
#define TRC_OUTPUT_8_MID_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_8_MID_L2(var)
//Last
#define TRC_OUTPUT_32_LAST_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_32_LAST_L2(var)
#define TRC_OUTPUT_24_LAST_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_24_LAST_L2(var)
#define TRC_OUTPUT_16_LAST_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_16_LAST_L2(var)
#define TRC_OUTPUT_8_LAST_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_8_LAST_L2(var)
//Single
#define TRC_OUTPUT_32_SINGLE_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_32_SINGLE_L2(var)
#define TRC_OUTPUT_24_SINGLE_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_24_SINGLE_L2(var)
#define TRC_OUTPUT_16_SINGLE_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_16_SINGLE_L2(var)
#define TRC_OUTPUT_8_SINGLE_WRAPPER_L2_NON_SMP(cgen_local_var, var) TRC_OUTPUT_8_SINGLE_L2(var)

/********************************************
*(Hack Code)Only for 6293 "DHL" L2 Time
*Only Support L1 .tmd File
*   L1 tmd force print L2 trace
********************************************/
//For L1 trace
//filter check interval
#define TRC_START_FILTER_CHECK_L1_FORCE_L2 TRC_START_FILTER_CHECK_L2
#define TRC_END_FILTER_CHECK_L1_FORCE_L2 TRC_END_FILTER_CHECK_L2

//pre-process user data
#define TRC_PREPROCESS_DATA_SECTION1_L1_FORCE_L2 TRC_PREPROCESS_DATA_SECTION1_L2
#define TRC_PREPROCESS_DATA_SECTION2_L1_FORCE_L2 TRC_PREPROCESS_DATA_SECTION2_L2

//fill data interval
#define TRC_START_FILL_L1_FORCE_L2 TRC_START_FILL_L2
#define TRC_END_FILL_L1_FORCE_L2 TRC_END_FILL_L2

//Wrapper layer
//First
#define TRC_OUTPUT_16_FIRST_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_16_FIRST_WRAPPER_L2
//Middle
#define TRC_OUTPUT_32_MID_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_32_MID_WRAPPER_L2
#define TRC_OUTPUT_24_MID_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_24_MID_WRAPPER_L2
#define TRC_OUTPUT_16_MID_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_16_MID_WRAPPER_L2
#define TRC_OUTPUT_8_MID_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_8_MID_WRAPPER_L2
//Last
#define TRC_OUTPUT_32_LAST_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_32_LAST_WRAPPER_L2
#define TRC_OUTPUT_24_LAST_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_24_LAST_WRAPPER_L2
#define TRC_OUTPUT_16_LAST_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_16_LAST_WRAPPER_L2
#define TRC_OUTPUT_8_LAST_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_8_LAST_WRAPPER_L2
//Single
#define TRC_OUTPUT_32_SINGLE_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_32_SINGLE_WRAPPER_L2
#define TRC_OUTPUT_24_SINGLE_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_24_SINGLE_WRAPPER_L2
#define TRC_OUTPUT_16_SINGLE_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_16_SINGLE_WRAPPER_L2
#define TRC_OUTPUT_8_SINGLE_WRAPPER_L1_FORCE_L2 TRC_OUTPUT_8_SINGLE_WRAPPER_L2

/*********************************************
* (Hack Code)Only for 6293 DHL Exception Direct TX Out
* Only Support L1 .tmd File
*   L1 tmd force print L1 EX trace
*   L1 tmd force print L2 EX trace
* Only Support Single Version
*********************************************/
//For EX L1 trace
//filter check interval
#define TRC_START_FILTER_CHECK_L1_EX_FORCE_L1( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS)
#define TRC_END_FILTER_CHECK_L1_EX_FORCE_L1( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS)

//pre-process user data
#define TRC_PREPROCESS_DATA_SECTION1_L1_EX_FORCE_L1(cgen_local_var, var)
#define TRC_PREPROCESS_DATA_SECTION2_L1_EX_FORCE_L1(cgen_local_var, var)

//fill data interval
#define TRC_START_FILL_L1_EX_FORCE_L1() \
    if(INT_QueryExceptionStatus()) {

#define TRC_END_FILL_L1_EX_FORCE_L1() \
    }

//Wrapper layer
//First
#define TRC_OUTPUT_16_FIRST_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var)
//Middle
#define TRC_OUTPUT_32_MID_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var)
#define TRC_OUTPUT_24_MID_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var)
#define TRC_OUTPUT_16_MID_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var)
#define TRC_OUTPUT_8_MID_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var)
//Last
#define TRC_OUTPUT_32_LAST_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var)
#define TRC_OUTPUT_24_LAST_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var)
#define TRC_OUTPUT_16_LAST_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var)
#define TRC_OUTPUT_8_LAST_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var)
//Single
#define TRC_OUTPUT_32_SINGLE_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var) \
    kal_uint8 buffer[256]; \
    kal_uint32 trace_len =0 ;\
    extern kal_int32 dhl_tty_dev_write_ex(DCL_DEV port, dhl_mux_id id, kal_uint8 *buffaddr, kal_uint32 length); \
    UlspEncodeBoundarySync(buffer,256,ULSP_ENC_L1_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeIdleSync(buffer,256,ULSP_ENC_L1_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeMessage(buffer,256,ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_32, ULSP_ENC_L1_LOG, var);\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);

#define TRC_OUTPUT_24_SINGLE_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var) \
    kal_uint8 buffer[256]; \
    kal_uint32 trace_len =0 ;\
    extern kal_int32 dhl_tty_dev_write_ex(DCL_DEV port, dhl_mux_id id, kal_uint8 *buffaddr, kal_uint32 length); \
    UlspEncodeBoundarySync(buffer,256,ULSP_ENC_L1_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeIdleSync(buffer,256,ULSP_ENC_L1_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeMessage(buffer,256,ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_24, ULSP_ENC_L1_LOG, var);\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);

#define TRC_OUTPUT_16_SINGLE_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var) \
    kal_uint8 buffer[256]; \
    kal_uint32 trace_len =0 ;\
    extern kal_int32 dhl_tty_dev_write_ex(DCL_DEV port, dhl_mux_id id, kal_uint8 *buffaddr, kal_uint32 length); \
    UlspEncodeBoundarySync(buffer,256,ULSP_ENC_L1_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeIdleSync(buffer,256,ULSP_ENC_L1_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeMessage(buffer,256,ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_16, ULSP_ENC_L1_LOG, var);\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);

#define TRC_OUTPUT_8_SINGLE_WRAPPER_L1_EX_FORCE_L1(cgen_local_var, var) \
    kal_uint8 buffer[256]; \
    kal_uint32 trace_len =0 ;\
    extern kal_int32 dhl_tty_dev_write_ex(DCL_DEV port, dhl_mux_id id, kal_uint8 *buffaddr, kal_uint32 length); \
    UlspEncodeBoundarySync(buffer,256,ULSP_ENC_L1_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeIdleSync(buffer,256,ULSP_ENC_L1_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeMessage(buffer,256,ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_8, ULSP_ENC_L1_LOG, var);\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);

//For EX L2 trace
//filter check interval
#define TRC_START_FILTER_CHECK_L1_EX_FORCE_L2( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS)
#define TRC_END_FILTER_CHECK_L1_EX_FORCE_L2( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS)

//pre-process user data
#define TRC_PREPROCESS_DATA_SECTION1_L1_EX_FORCE_L2(cgen_local_var, var)
#define TRC_PREPROCESS_DATA_SECTION2_L1_EX_FORCE_L2(cgen_local_var, var)

//fill data interval
#define TRC_START_FILL_L1_EX_FORCE_L2() \
    if(INT_QueryExceptionStatus()) {

#define TRC_END_FILL_L1_EX_FORCE_L2() \
    }

//Wrapper layer
//First
#define TRC_OUTPUT_16_FIRST_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var)
//Middle
#define TRC_OUTPUT_32_MID_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var)
#define TRC_OUTPUT_24_MID_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var)
#define TRC_OUTPUT_16_MID_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var)
#define TRC_OUTPUT_8_MID_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var)
//Last
#define TRC_OUTPUT_32_LAST_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var)
#define TRC_OUTPUT_24_LAST_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var)
#define TRC_OUTPUT_16_LAST_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var)
#define TRC_OUTPUT_8_LAST_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var)
//Single
#define TRC_OUTPUT_32_SINGLE_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var) \
    kal_uint8 buffer[256]; \
    kal_uint32 trace_len =0 ;\
    extern kal_int32 dhl_tty_dev_write_ex(DCL_DEV port, dhl_mux_id id, kal_uint8 *buffaddr, kal_uint32 length); \
    UlspEncodeBoundarySync(buffer,256,ULSP_ENC_L2_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeIdleSync(buffer,256,ULSP_ENC_L2_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeMessage(buffer,256,ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_32, ULSP_ENC_L2_LOG, var);\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);

#define TRC_OUTPUT_24_SINGLE_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var) \
    kal_uint8 buffer[256]; \
    kal_uint32 trace_len =0 ;\
    extern kal_int32 dhl_tty_dev_write_ex(DCL_DEV port, dhl_mux_id id, kal_uint8 *buffaddr, kal_uint32 length); \
    UlspEncodeBoundarySync(buffer,256,ULSP_ENC_L2_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeIdleSync(buffer,256,ULSP_ENC_L2_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeMessage(buffer,256,ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_24, ULSP_ENC_L2_LOG, var);\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);

#define TRC_OUTPUT_16_SINGLE_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var) \
    kal_uint8 buffer[256]; \
    kal_uint32 trace_len =0 ;\
    extern kal_int32 dhl_tty_dev_write_ex(DCL_DEV port, dhl_mux_id id, kal_uint8 *buffaddr, kal_uint32 length); \
    UlspEncodeBoundarySync(buffer,256,ULSP_ENC_L2_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeIdleSync(buffer,256,ULSP_ENC_L2_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeMessage(buffer,256,ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_16, ULSP_ENC_L2_LOG, var);\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);

#define TRC_OUTPUT_8_SINGLE_WRAPPER_L1_EX_FORCE_L2(cgen_local_var, var) \
    kal_uint8 buffer[256]; \
    kal_uint32 trace_len =0 ;\
    extern kal_int32 dhl_tty_dev_write_ex(DCL_DEV port, dhl_mux_id id, kal_uint8 *buffaddr, kal_uint32 length); \
    UlspEncodeBoundarySync(buffer,256,ULSP_ENC_L2_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeIdleSync(buffer,256,ULSP_ENC_L2_LOG );\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);\
    UlspEncodeMessage(buffer,256,ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_8, ULSP_ENC_L2_LOG, var);\
    trace_len = UlspEncoderGetCurrentPacketSize();\
    dhl_tty_dev_write_ex(tst_PsTrc_port , DHL_MUX_MCU_ULSP, buffer, trace_len);

#else // #if !defined(__MTK_TARGET__)


/********************************************
* ULSP Macro for XL1SIM
********************************************/

/********************************************
* 6293 Default Macro Version
********************************************/
//For L1 trace
//filter check interval
extern void SendToCatcherWrapper(kal_uint8 *buf, kal_uint32 size, ULSP_Encoder_Message_Type type);
#define TRC_BUFFER_SIZE 256
#define TRC_START_FILTER_CHECK_L1( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    if((FILTER_ARRAY[FILTER_ARRAY_INDEX] & FILTER_CLASS) != 0) { \
        kal_uint8 buffer[TRC_BUFFER_SIZE]; \
        kal_uint32 trace_len

#define TRC_END_FILTER_CHECK_L1( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    }
//pre-process user data
#define TRC_PREPROCESS_DATA_L1(cgen_local_var, var) kal_uint32 cgen_local_var = (kal_uint32)(var)

//fill data interval
#define TRC_START_FILL_L1()  {\
        kal_uint32 oldmask=0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask);

#define TRC_END_FILL_L1()  \
    trace_len = UlspEncoderGetCurrentPacketSize(); \
    SendToCatcherWrapper(buffer, trace_len, ULSP_ENC_L1_LOG); \
    DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    }

//First
#define TRC_OUTPUT_16_FIRST_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_FIRST, ULSP_ENC_MSG_SIZE_16, ULSP_ENC_L1_LOG, value);
//Middle
#define TRC_OUTPUT_32_MID_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_MIDDLE, ULSP_ENC_MSG_SIZE_32, ULSP_ENC_L1_LOG, value);
#define TRC_OUTPUT_24_MID_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_MIDDLE, ULSP_ENC_MSG_SIZE_24, ULSP_ENC_L1_LOG, value);
#define TRC_OUTPUT_16_MID_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_MIDDLE, ULSP_ENC_MSG_SIZE_16, ULSP_ENC_L1_LOG, value);
#define TRC_OUTPUT_8_MID_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_MIDDLE, ULSP_ENC_MSG_SIZE_8, ULSP_ENC_L1_LOG, value);
//Last
#define TRC_OUTPUT_32_LAST_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_LAST, ULSP_ENC_MSG_SIZE_32, ULSP_ENC_L1_LOG, value);
#define TRC_OUTPUT_24_LAST_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_LAST, ULSP_ENC_MSG_SIZE_24, ULSP_ENC_L1_LOG, value);
#define TRC_OUTPUT_16_LAST_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_LAST, ULSP_ENC_MSG_SIZE_16, ULSP_ENC_L1_LOG, value);
#define TRC_OUTPUT_8_LAST_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_LAST, ULSP_ENC_MSG_SIZE_8, ULSP_ENC_L1_LOG, value);
//Single
#define TRC_OUTPUT_32_SINGLE_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_32, ULSP_ENC_L1_LOG, value);
#define TRC_OUTPUT_24_SINGLE_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_24, ULSP_ENC_L1_LOG, value);
#define TRC_OUTPUT_16_SINGLE_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_16, ULSP_ENC_L1_LOG, value);
#define TRC_OUTPUT_8_SINGLE_L1(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_8, ULSP_ENC_L1_LOG, value);

//For L2 trace
//filter check interval
#define TRC_START_FILTER_CHECK_L2 TRC_START_FILTER_CHECK_L1
#define TRC_END_FILTER_CHECK_L2 TRC_END_FILTER_CHECK_L1
//pre-process user data
#define TRC_PREPROCESS_DATA_L2 TRC_PREPROCESS_DATA_L1

//fill data interval
#define TRC_START_FILL_L2() {\
        kal_uint32 oldmask=0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask);

#define TRC_END_FILL_L2() \
    trace_len = UlspEncoderGetCurrentPacketSize(); \
    SendToCatcherWrapper(buffer, trace_len, ULSP_ENC_L2_LOG); \
    DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    }
//First
#define TRC_OUTPUT_16_FIRST_L2(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_FIRST, ULSP_ENC_MSG_SIZE_16, ULSP_ENC_L2_LOG, value);
//Middle
#define TRC_OUTPUT_32_MID_L2(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_MIDDLE, ULSP_ENC_MSG_SIZE_32, ULSP_ENC_L2_LOG, value);
#define TRC_OUTPUT_24_MID_L2(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_MIDDLE, ULSP_ENC_MSG_SIZE_24, ULSP_ENC_L2_LOG, value);
#define TRC_OUTPUT_16_MID_L2(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_MIDDLE, ULSP_ENC_MSG_SIZE_16, ULSP_ENC_L2_LOG, value);
#define TRC_OUTPUT_8_MID_L2(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_MIDDLE, ULSP_ENC_MSG_SIZE_8, ULSP_ENC_L2_LOG, value);
//Last
#define TRC_OUTPUT_32_LAST_L2(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_LAST, ULSP_ENC_MSG_SIZE_32, ULSP_ENC_L2_LOG, value);
#define TRC_OUTPUT_24_LAST_L2(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_LAST, ULSP_ENC_MSG_SIZE_24, ULSP_ENC_L2_LOG, value);
#define TRC_OUTPUT_16_LAST_L2(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_LAST, ULSP_ENC_MSG_SIZE_16, ULSP_ENC_L2_LOG, value);
#define TRC_OUTPUT_8_LAST_L2(value)  \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_LAST, ULSP_ENC_MSG_SIZE_8, ULSP_ENC_L2_LOG, value);
//Single
#define TRC_OUTPUT_32_SINGLE_L2(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_32, ULSP_ENC_L2_LOG, value);
#define TRC_OUTPUT_24_SINGLE_L2(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_24, ULSP_ENC_L2_LOG, value);
#define TRC_OUTPUT_16_SINGLE_L2(value) \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_16, ULSP_ENC_L2_LOG, value);
#define TRC_OUTPUT_8_SINGLE_L2(value)  \
    UlspEncodeMessage(buffer, TRC_BUFFER_SIZE, ULSP_ENC_SINGLE, ULSP_ENC_MSG_SIZE_8, ULSP_ENC_L2_LOG, value);
/********************************************
* Only for 6293 Non-SMP Special User Version
********************************************/
//For L1 trace
//filter check interval
#define TRC_START_FILTER_CHECK_L1_NON_SMP TRC_START_FILTER_CHECK_L1
#define TRC_END_FILTER_CHECK_L1_NON_SMP TRC_END_FILTER_CHECK_L1

//pre-process user data
#define TRC_PREPROCESS_DATA_L1_NON_SMP TRC_PREPROCESS_DATA_L1

//fill data interval
#define TRC_START_FILL_L1_NON_SMP( ) \
    if(l1_trc_assure_lisr(__FUNCTION__, __FILE__, __LINE__)){

#define TRC_END_FILL_L1_NON_SMP( ) \
    trace_len = UlspEncoderGetCurrentPacketSize(); \
    SendToCatcherWrapper(buffer, trace_len, ULSP_ENC_L1_LOG); \
    }
//First
#define TRC_OUTPUT_16_FIRST_L1_NON_SMP TRC_OUTPUT_16_FIRST_L1
//Middle
#define TRC_OUTPUT_32_MID_L1_NON_SMP TRC_OUTPUT_32_MID_L1
#define TRC_OUTPUT_24_MID_L1_NON_SMP TRC_OUTPUT_24_MID_L1
#define TRC_OUTPUT_16_MID_L1_NON_SMP TRC_OUTPUT_16_MID_L1
#define TRC_OUTPUT_8_MID_L1_NON_SMP TRC_OUTPUT_8_MID_L1
//Last
#define TRC_OUTPUT_32_LAST_L1_NON_SMP TRC_OUTPUT_32_LAST_L1
#define TRC_OUTPUT_24_LAST_L1_NON_SMP TRC_OUTPUT_24_LAST_L1
#define TRC_OUTPUT_16_LAST_L1_NON_SMP TRC_OUTPUT_16_LAST_L1
#define TRC_OUTPUT_8_LAST_L1_NON_SMP TRC_OUTPUT_8_LAST_L1
//Single
#define TRC_OUTPUT_32_SINGLE_L1_NON_SMP TRC_OUTPUT_32_SINGLE_L1
#define TRC_OUTPUT_24_SINGLE_L1_NON_SMP TRC_OUTPUT_24_SINGLE_L1
#define TRC_OUTPUT_16_SINGLE_L1_NON_SMP TRC_OUTPUT_16_SINGLE_L1
#define TRC_OUTPUT_8_SINGLE_L1_NON_SMP TRC_OUTPUT_8_SINGLE_L1

//For L2 trace
//filter check interval
#define TRC_START_FILTER_CHECK_L2_NON_SMP TRC_START_FILTER_CHECK_L2
#define TRC_END_FILTER_CHECK_L2_NON_SMP TRC_END_FILTER_CHECK_L2

//pre-process user data
#define TRC_PREPROCESS_DATA_L2_NON_SMP TRC_PREPROCESS_DATA_L1

//fill data interval
#define TRC_START_FILL_L2_NON_SMP( ) \
    if(l1_trc_assure_lisr(__FUNCTION__, __FILE__, __LINE__)){ \

#define TRC_END_FILL_L2_NON_SMP( ) \
    trace_len = UlspEncoderGetCurrentPacketSize(); \
    SendToCatcherWrapper(buffer, trace_len, ULSP_ENC_L2_LOG); \
    }
//First
#define TRC_OUTPUT_16_FIRST_L2_NON_SMP TRC_OUTPUT_16_FIRST_L2
//Middle
#define TRC_OUTPUT_32_MID_L2_NON_SMP TRC_OUTPUT_32_MID_L2
#define TRC_OUTPUT_24_MID_L2_NON_SMP TRC_OUTPUT_24_MID_L2
#define TRC_OUTPUT_16_MID_L2_NON_SMP TRC_OUTPUT_16_MID_L2
#define TRC_OUTPUT_8_MID_L2_NON_SMP TRC_OUTPUT_8_MID_L2
//Last
#define TRC_OUTPUT_32_LAST_L2_NON_SMP TRC_OUTPUT_32_LAST_L2
#define TRC_OUTPUT_24_LAST_L2_NON_SMP TRC_OUTPUT_24_LAST_L2
#define TRC_OUTPUT_16_LAST_L2_NON_SMP TRC_OUTPUT_16_LAST_L2
#define TRC_OUTPUT_8_LAST_L2_NON_SMP TRC_OUTPUT_8_LAST_L2
//Single
#define TRC_OUTPUT_32_SINGLE_L2_NON_SMP TRC_OUTPUT_32_SINGLE_L2
#define TRC_OUTPUT_24_SINGLE_L2_NON_SMP TRC_OUTPUT_24_SINGLE_L2
#define TRC_OUTPUT_16_SINGLE_L2_NON_SMP TRC_OUTPUT_16_SINGLE_L2
#define TRC_OUTPUT_8_SINGLE_L2_NON_SMP TRC_OUTPUT_8_SINGLE_L2
/********************************************
*(Hack Code)Only for 6293 "DHL" L2 Time
*Only Support L1 .tmd File
*   L1 tmd force print L2 trace
********************************************/
//For L1 trace
//filter check interval
#define TRC_START_FILTER_CHECK_L1_FORCE_L2 TRC_START_FILTER_CHECK_L2
#define TRC_END_FILTER_CHECK_L1_FORCE_L2 TRC_END_FILTER_CHECK_L2

//pre-process user data
#define TRC_PREPROCESS_DATA_L1_FORCE_L2 TRC_PREPROCESS_DATA_L2

//fill data interval
#define TRC_START_FILL_L1_FORCE_L2 TRC_START_FILL_L2
#define TRC_END_FILL_L1_FORCE_L2 TRC_END_FILL_L2

//First
#define TRC_OUTPUT_16_FIRST_L1_FORCE_L2 TRC_OUTPUT_16_FIRST_L2
//Middle
#define TRC_OUTPUT_32_MID_L1_FORCE_L2 TRC_OUTPUT_32_MID_L2
#define TRC_OUTPUT_24_MID_L1_FORCE_L2 TRC_OUTPUT_24_MID_L2
#define TRC_OUTPUT_16_MID_L1_FORCE_L2 TRC_OUTPUT_16_MID_L2
#define TRC_OUTPUT_8_MID_L1_FORCE_L2 TRC_OUTPUT_8_MID_L2
//Last
#define TRC_OUTPUT_32_LAST_L1_FORCE_L2 TRC_OUTPUT_32_LAST_L2
#define TRC_OUTPUT_24_LAST_L1_FORCE_L2 TRC_OUTPUT_24_LAST_L2
#define TRC_OUTPUT_16_LAST_L1_FORCE_L2 TRC_OUTPUT_16_LAST_L2
#define TRC_OUTPUT_8_LAST_L1_FORCE_L2 TRC_OUTPUT_8_LAST_L2
//Single
#define TRC_OUTPUT_32_SINGLE_L1_FORCE_L2 TRC_OUTPUT_32_SINGLE_L2
#define TRC_OUTPUT_24_SINGLE_L1_FORCE_L2 TRC_OUTPUT_24_SINGLE_L2
#define TRC_OUTPUT_16_SINGLE_L1_FORCE_L2 TRC_OUTPUT_16_SINGLE_L2
#define TRC_OUTPUT_8_SINGLE_L1_FORCE_L2 TRC_OUTPUT_8_SINGLE_L2

/*********************************************
* (Hack Code)Only for 6293 DHL Exception Direct TX Out
* Only Support L1 .tmd File
*   L1 tmd force print L1 EX trace
*   L1 tmd force print L2 EX trace
* Only Support Single Version
*********************************************/
//For EX L1 trace
//filter check interval
#define TRC_START_FILTER_CHECK_L1_EX_FORCE_L1( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS)
#define TRC_END_FILTER_CHECK_L1_EX_FORCE_L1( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS)

//pre-process user data
#define TRC_PREPROCESS_DATA_L1_EX_FORCE_L1 TRC_PREPROCESS_DATA_L1

//fill data interval
#define TRC_START_FILL_L1_EX_FORCE_L1() \
    if(INT_QueryExceptionStatus()) {

#define TRC_END_FILL_L1_EX_FORCE_L1() \
    trace_len = UlspEncoderGetCurrentPacketSize(); \
    SendToCatcherWrapper(buffer, trace_len, ULSP_ENC_L1_LOG); \
    }

//First
#define TRC_OUTPUT_16_FIRST_L1_EX_FORCE_L1 TRC_OUTPUT_16_FIRST_L1
//Middle
#define TRC_OUTPUT_32_MID_L1_EX_FORCE_L1 TRC_OUTPUT_32_MID_L1
#define TRC_OUTPUT_24_MID_L1_EX_FORCE_L1 TRC_OUTPUT_24_MID_L1
#define TRC_OUTPUT_16_MID_L1_EX_FORCE_L1 TRC_OUTPUT_16_MID_L1
#define TRC_OUTPUT_8_MID_L1_EX_FORCE_L1 TRC_OUTPUT_8_MID_L1
//Last
#define TRC_OUTPUT_32_LAST_L1_EX_FORCE_L1 TRC_OUTPUT_32_LAST_L1
#define TRC_OUTPUT_24_LAST_L1_EX_FORCE_L1 TRC_OUTPUT_24_LAST_L1
#define TRC_OUTPUT_16_LAST_L1_EX_FORCE_L1 TRC_OUTPUT_16_LAST_L1
#define TRC_OUTPUT_8_LAST_L1_EX_FORCE_L1 TRC_OUTPUT_8_LAST_L1
//Single
#define TRC_OUTPUT_32_SINGLE_L1_EX_FORCE_L1 TRC_OUTPUT_32_SINGLE_L1
#define TRC_OUTPUT_24_SINGLE_L1_EX_FORCE_L1 TRC_OUTPUT_24_SINGLE_L1
#define TRC_OUTPUT_16_SINGLE_L1_EX_FORCE_L1 TRC_OUTPUT_16_SINGLE_L1
#define TRC_OUTPUT_8_SINGLE_L1_EX_FORCE_L1 TRC_OUTPUT_8_SINGLE_L1

//For EX L2 trace
//filter check interval
#define TRC_START_FILTER_CHECK_L1_EX_FORCE_L2( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS)
#define TRC_END_FILTER_CHECK_L1_EX_FORCE_L2( FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS)

//pre-process user data
#define TRC_PREPROCESS_DATA_L1_EX_FORCE_L2 TRC_PREPROCESS_DATA_L1

//fill data interval
#define TRC_START_FILL_L1_EX_FORCE_L2() \
    if(INT_QueryExceptionStatus()) {

#define TRC_END_FILL_L1_EX_FORCE_L2() \
    trace_len = UlspEncoderGetCurrentPacketSize(); \
    SendToCatcherWrapper(buffer, trace_len, ULSP_ENC_L2_LOG); \
    }

//First
#define TRC_OUTPUT_16_FIRST_L1_EX_FORCE_L2(value)
//Middle
#define TRC_OUTPUT_32_MID_L1_EX_FORCE_L2(value)
#define TRC_OUTPUT_24_MID_L1_EX_FORCE_L2(value)
#define TRC_OUTPUT_16_MID_L1_EX_FORCE_L2(value)
#define TRC_OUTPUT_8_MID_L1_EX_FORCE_L2(value)
//Last
#define TRC_OUTPUT_32_LAST_L1_EX_FORCE_L2(value)
#define TRC_OUTPUT_24_LAST_L1_EX_FORCE_L2(value)
#define TRC_OUTPUT_16_LAST_L1_EX_FORCE_L2(value)
#define TRC_OUTPUT_8_LAST_L1_EX_FORCE_L2(value)
//Single
#define TRC_OUTPUT_32_SINGLE_L1_EX_FORCE_L2(value)
#define TRC_OUTPUT_24_SINGLE_L1_EX_FORCE_L2(value)
#define TRC_OUTPUT_16_SINGLE_L1_EX_FORCE_L2(value)
#define TRC_OUTPUT_8_SINGLE_L1_EX_FORCE_L2(value)

#endif // #if defined(__MTK_TARGET__)

#include "dhl_cond_l1_trace.h"

#endif // #if defined(__USE_ULSP__)



typedef enum
{
    L1CSPM_DEFAULT,
    SPIN_LOCK,
    HW_ITC
} E_DHL_TMD_CRIT_PROT;

typedef enum
{
    L2_BUFFER_DEFAULT = 0,
    L2_BUFFER_EL2 = L2_BUFFER_DEFAULT,
    L2_BUFFER_HIF = 1,
    L2_BUFFER_ERT = 2,
    L2_BUFFER_END = 3
} E_DHL_L2_BUFFER_MAPPING_TABLE;

#if !defined(GEN_FOR_PC)

typedef void (*trc_setfilterfunc)(unsigned char *);
#define TRC_FILTER_FUNC_ARRAY       trc_filterfuncarray
#define TRC_NBR_MODULE              trc_filterfuncnbr
#define TRC_SET_FILTER_FUNC         trc_setfilterfunc

/* TODO: remove legacy define?
#define TRC_BUFFER                  trc_buf
#define TRC_TASK_BUFFER             trc_buf
#define TRC_ISR_BUFFER              trc_buf
#define TRC_BUFFER_PTR              trc_bufptr
#define TRC_L2_BUFFER               trc_l2_buf
#define TRC_L2_BUFFER_PTR           trc_l2_bufptr

#define TRC_START_FILL_TASK TRC_START_FILL
#define TRC_END_FILL_TASK   TRC_END_FILL
#define TRC_START_FILL_ISR  TRC_START_FILL
#define TRC_END_FILL_ISR    TRC_END_FILL
*/


/*******************/
/* Variable        */
/*******************/
#if defined (__MTK_TARGET__)
/* code setting */
#define __DHL_L2CACHE_LOCK_DATA __attribute__ ((section("L2CACHE_LOCK_ZI")))

#if defined(__L1_L2_TRACE_FORCE_TO_EMI__)
#define __DHL_Core0IspRAM
#define __DHL_Core1IspRAM
#define __DHL_Core2IspRAM
#define __DHL_L2SRAM_ROCODE
#define __DHL_EMI_ROCODE

#define __DHL_Core0DspRAM
#define __DHL_Core1DspRAM
#define __DHL_Core2DspRAM
#define __DHL_L2SRAM_DATA
#define __DHL_L2SRAM_RW
#define __DHL_EMI_DATA
#else
#define __DHL_Core0IspRAM __attribute__((section ("ISPRAM_ROCODE_CORE0")))
#define __DHL_Core1IspRAM __attribute__((section ("ISPRAM_ROCODE_CORE1")))
#define __DHL_Core2IspRAM __attribute__((section ("ISPRAM_ROCODE_CORE2")))
#define __DHL_L2SRAM_ROCODE __attribute__((section ("L2SRAM_L2C_ROCODE")))
#define __DHL_EMI_ROCODE
/* data setting */
#define __DHL_Core0DspRAM __attribute__((section ("DSPRAM_ZI_CORE0")))
#define __DHL_Core1DspRAM __attribute__((section ("DSPRAM_ZI_CORE1")))
#define __DHL_Core2DspRAM __attribute__((section ("DSPRAM_ZI_CORE2")))
#define __DHL_L2SRAM_DATA __attribute__((section ("L2SRAM_L2C_ZI")))
#define __DHL_L2SRAM_RW   __attribute__((section ("L2SRAM_L2C_RW")))
#define __DHL_EMI_DATA    __attribute__((zero_init, aligned (32)))
#endif
#else
#define __DHL_L2CACHE_LOCK_DATA
#define __DHL_Core0IspRAM
#define __DHL_Core1IspRAM
#define __DHL_Core2IspRAM
#define __DHL_L2SRAM_ROCODE
#define __DHL_EMI_ROCODE

#define __DHL_Core0DspRAM
#define __DHL_Core1DspRAM
#define __DHL_Core2DspRAM
#define __DHL_L2SRAM_DATA
#define __DHL_L2SRAM_RW
#define __DHL_EMI_DATA
#endif

/* L1 trace function attribute setting */
#if defined(__L1_TRACE_L2SRAM_CODE__)
#define __L1Vpe0Func __DHL_L2SRAM_ROCODE
#define __L1Vpe1Func __DHL_L2SRAM_ROCODE
#define __L1Vpe2Func __DHL_L2SRAM_ROCODE
#define __L1Vpe3Func __DHL_L2SRAM_ROCODE
#define __L1Vpe4Func __DHL_L2SRAM_ROCODE
#define __L1Vpe5Func __DHL_L2SRAM_ROCODE
#elif defined(__L1_TRACE_EMI_CODE__)
#define __L1Vpe0Func __DHL_EMI_ROCODE
#define __L1Vpe1Func __DHL_EMI_ROCODE
#define __L1Vpe2Func __DHL_EMI_ROCODE
#define __L1Vpe3Func __DHL_EMI_ROCODE
#define __L1Vpe4Func __DHL_EMI_ROCODE
#define __L1Vpe5Func __DHL_EMI_ROCODE
#else
#define __L1Vpe0Func __DHL_EMI_ROCODE
#define __L1Vpe1Func __DHL_Core0IspRAM
#define __L1Vpe2Func __DHL_EMI_ROCODE
#define __L1Vpe3Func __DHL_Core1IspRAM
#define __L1Vpe4Func __DHL_EMI_ROCODE
#define __L1Vpe5Func __DHL_Core2IspRAM
#endif

/* L2 trace function attribute setting */
#if defined(__L2_TRACE_SPSRAM_CODE__)
#define __L2Core0Func __DHL_Core0IspRAM
#define __L2Core1Func __DHL_Core1IspRAM
#define __L2Core2Func __DHL_Core2IspRAM
#elif defined(__L2_TRACE_EMI_CODE__)
#define __L2Core0Func __DHL_EMI_ROCODE
#define __L2Core1Func __DHL_EMI_ROCODE
#define __L2Core2Func __DHL_EMI_ROCODE
#else
#define __L2Core0Func __DHL_L2SRAM_ROCODE
#define __L2Core1Func __DHL_L2SRAM_ROCODE
#define __L2Core2Func __DHL_Core2IspRAM
#endif

#ifdef TRC_C
#if defined(__L1_TRACE_L2SRAM_BUFFER__)
#define __L1_TRC_Vpe0_EXT __DHL_L2SRAM_DATA
#define __L1_TRC_Vpe1_EXT __DHL_L2SRAM_DATA
#define __L1_TRC_Vpe2_EXT __DHL_L2SRAM_DATA
#define __L1_TRC_Vpe3_EXT __DHL_L2SRAM_DATA
#define __L1_TRC_Vpe4_EXT __DHL_L2SRAM_DATA
#define __L1_TRC_Vpe5_EXT __DHL_L2SRAM_DATA
#elif defined(__L1_TRACE_EMI_BUFFER__)
#define __L1_TRC_Vpe0_EXT __DHL_EMI_DATA
#define __L1_TRC_Vpe1_EXT __DHL_EMI_DATA
#define __L1_TRC_Vpe2_EXT __DHL_EMI_DATA
#define __L1_TRC_Vpe3_EXT __DHL_EMI_DATA
#define __L1_TRC_Vpe4_EXT __DHL_EMI_DATA
#define __L1_TRC_Vpe5_EXT __DHL_EMI_DATA
#else
#define __L1_TRC_Vpe0_EXT __DHL_EMI_DATA
#define __L1_TRC_Vpe1_EXT __DHL_Core0DspRAM
#define __L1_TRC_Vpe2_EXT __DHL_EMI_DATA
#define __L1_TRC_Vpe3_EXT __DHL_Core1DspRAM
#define __L1_TRC_Vpe4_EXT __DHL_EMI_DATA
#define __L1_TRC_Vpe5_EXT __DHL_Core2DspRAM
#endif

#if defined(__L2_TRACE_SPRAM_BUFFER__)
#error "Unsupported L2 buffer configure!"
#elif defined(__L2_TRACE_L2SRAM_BUFFER__)
#define __L2_TRC_EXT      __DHL_L2SRAM_DATA
#define __L2_ERT_TRC_EXT  __DHL_L2SRAM_DATA
#elif defined(__L2_TRACE_EMI_BUFFER__)
#define __L2_TRC_EXT
#define __L2_ERT_TRC_EXT
#else
#define __L2_TRC_EXT     __DHL_L2SRAM_DATA
#define __L2_ERT_TRC_EXT __DHL_Core2DspRAM
#endif
#define TRC_EMI_EXT
#define TRC_SMP_L2DATA_EXT __DHL_L2SRAM_DATA
#else
#define __L1_TRC_Vpe0_EXT extern
#define __L1_TRC_Vpe1_EXT extern
#define __L1_TRC_Vpe2_EXT extern
#define __L1_TRC_Vpe3_EXT extern
#define __L1_TRC_Vpe4_EXT extern
#define __L1_TRC_Vpe5_EXT extern
#define __L2_TRC_EXT extern
#define __L2_ERT_TRC_EXT extern
#define TRC_EMI_EXT extern
#define TRC_SMP_L2DATA_EXT extern
#endif

#define CONVERT_WORD_ALIGNMENT(val) (((val) + 4) / 4 * 4)
#if 0 /* TODO: add whitney configure. cat 10 option ? */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
// CAT 10 config
/* L1 trace ping/pong buffer size for each core */
#if defined(UNIT_TEST) || defined(__UE_SIMULATOR__)
// C2K team need to enlarge buffer size to avoid discard
#define TRC_vpe0_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((128 * 1024) / 2)
#define TRC_vpe1_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((128 * 1024) / 2)
#define TRC_vpe2_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((128 * 1024) / 2)
#define TRC_vpe3_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((128 * 1024) / 2)
#define TRC_vpe4_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((128 * 1024) / 2)
#define TRC_vpe5_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((128 * 1024) / 2)

#else // defined(UNIT_TEST) || defined(__UE_SIMULATOR__) 
// For target, should remove
#define TRC_vpe0_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((19 * 1024) / 2)
#define TRC_vpe1_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((19 * 1024) / 2)
#define TRC_vpe2_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((19 * 1024) / 2)
#define TRC_vpe3_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((19 * 1024) / 2)
#define TRC_vpe4_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((512) / 2)
#define TRC_vpe5_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((512) / 2)

#endif  // defined(UNIT_TEST) || defined(__UE_SIMULATOR__) 

/* L2 trace ping/pong buffer size for each greup */
#define L2TRC_el2_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((31 * 1024) / 2)
#define L2TRC_hif_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((31 * 1024) / 2)
#define TRC_ert_BUFFER_SIZE CONVERT_WORD_ALIGNMENT((13 * 1024 + 614) / 2)
#endif

#if defined(__USE_ULSP__)
#define TRC_ULSP_MCU_BUFFER_SIZE (2 * 1024 * 1024)
#define TRC_ULSP_DSP_BUFFER_SIZE (2 * 1024 * 1024)
#define __DHL_ULSP_EMI_DATA     __attribute__((zero_init, section ("NONCACHEDZI") , aligned(128)))
#ifdef TRC_C
#if defined(__MTK_TARGET__)
#define _MCU_TRC_ULSP_EXT __DHL_ULSP_EMI_DATA
#define _DSP_TRC_ULSP_EXT __DHL_ULSP_EMI_DATA
#else
#define _MCU_TRC_ULSP_EXT
#define _DSP_TRC_ULSP_EXT
#endif
#else //TRC_C
#define _MCU_TRC_ULSP_EXT extern
#define _DSP_TRC_ULSP_EXT extern
#endif //TRC_C
#endif //__USE_ULSP__

#if defined(__USE_ULSP__)
#if defined(__DHL_SP_LOGGING_SUPPORT__) && defined(__MTK_TARGET__)
_MCU_TRC_ULSP_EXT void *trc_ulsp_mcu_buffer_ptr;
_MCU_TRC_ULSP_EXT void *trc_ulsp_dsp_buffer_ptr;
_MCU_TRC_ULSP_EXT kal_uint32 trc_ulsp_mcu_buffer_size;
_MCU_TRC_ULSP_EXT kal_uint32 trc_ulsp_dsp_buffer_size;
#else
_MCU_TRC_ULSP_EXT kal_uint8   trc_ulsp_mcu_buffer[TRC_ULSP_MCU_BUFFER_SIZE];
_DSP_TRC_ULSP_EXT kal_uint8   trc_ulsp_dsp_buffer[TRC_ULSP_DSP_BUFFER_SIZE];
#endif //#if defined(__DHL_SP_LOGGING_SUPPORT__) && defined(__MTK_TARGET__)
#endif

/* L1 ping/pong buffer pool*/
// core 0 VPE0 (VPE0)
__L1_TRC_Vpe0_EXT kal_uint8   trc_vpe0_buffers[2][TRC_vpe0_BUFFER_SIZE];
__L1_TRC_Vpe0_EXT kal_uint8   *trc_vpe0_buf;
__L1_TRC_Vpe0_EXT kal_uint8   *trc_vpe0_buf_in_process;
TRC_SMP_L2DATA_EXT  kal_uint32  trc_vpe0_buf_len_in_process;
__L1_TRC_Vpe0_EXT kal_uint32  trc_vpe0_bufptr;
__L1_TRC_Vpe0_EXT kal_uint8   *trc_vpe0_buf_write_ptr;

__L1_TRC_Vpe0_EXT kal_uint8   trc_vpe0_lostTraces;
TRC_EMI_EXT       kal_uint8   prev_trc_vpe0_lostTraces;
TRC_EMI_EXT       kal_uint8   trc_vpe0_lostBuffers;
__L1_TRC_Vpe0_EXT kal_uint16  trc_vpe0_count[2];
__L1_TRC_Vpe0_EXT kal_uint16  *trc_vpe0_cur_count;
__L1_TRC_Vpe0_EXT kal_uint16  trc_vpe0_count_in_process;
__L1_TRC_Vpe0_EXT kal_bool    trc_vpe0_flush_flag;

// core 0 VPE1 (VPE1)
__L1_TRC_Vpe1_EXT kal_uint8   trc_vpe1_buffers[2][TRC_vpe1_BUFFER_SIZE];
__L1_TRC_Vpe1_EXT kal_uint8   *trc_vpe1_buf;
__L1_TRC_Vpe1_EXT kal_uint8   *trc_vpe1_buf_in_process;
TRC_SMP_L2DATA_EXT  kal_uint32  trc_vpe1_buf_len_in_process;
__L1_TRC_Vpe1_EXT kal_uint32  trc_vpe1_bufptr;
__L1_TRC_Vpe1_EXT kal_uint8   *trc_vpe1_buf_write_ptr;

__L1_TRC_Vpe1_EXT kal_uint8   trc_vpe1_lostTraces;
TRC_EMI_EXT       kal_uint8   prev_trc_vpe1_lostTraces;
TRC_EMI_EXT       kal_uint8   trc_vpe1_lostBuffers;
__L1_TRC_Vpe1_EXT kal_uint16  trc_vpe1_count[2];
__L1_TRC_Vpe1_EXT kal_uint16  *trc_vpe1_cur_count;
__L1_TRC_Vpe1_EXT kal_uint16  trc_vpe1_count_in_process;
__L1_TRC_Vpe1_EXT kal_bool    trc_vpe1_flush_flag;

// core 1 VPE0 (VPE2)
__L1_TRC_Vpe2_EXT kal_uint8   trc_vpe2_buffers[2][TRC_vpe2_BUFFER_SIZE];
__L1_TRC_Vpe2_EXT kal_uint8   *trc_vpe2_buf;
__L1_TRC_Vpe2_EXT kal_uint8   *trc_vpe2_buf_in_process;
TRC_SMP_L2DATA_EXT  kal_uint32  trc_vpe2_buf_len_in_process;
__L1_TRC_Vpe2_EXT kal_uint32  trc_vpe2_bufptr;
__L1_TRC_Vpe2_EXT kal_uint8   *trc_vpe2_buf_write_ptr;

__L1_TRC_Vpe2_EXT kal_uint8   trc_vpe2_lostTraces;
TRC_EMI_EXT       kal_uint8   prev_trc_vpe2_lostTraces;
TRC_EMI_EXT       kal_uint8   trc_vpe2_lostBuffers;
__L1_TRC_Vpe2_EXT kal_uint16  trc_vpe2_count[2];
__L1_TRC_Vpe2_EXT kal_uint16  *trc_vpe2_cur_count;
__L1_TRC_Vpe2_EXT kal_uint16  trc_vpe2_count_in_process;
__L1_TRC_Vpe2_EXT kal_bool    trc_vpe2_flush_flag;

// core 1 VPE1 (VPE3)
__L1_TRC_Vpe3_EXT kal_uint8   trc_vpe3_buffers[2][TRC_vpe3_BUFFER_SIZE];
__L1_TRC_Vpe3_EXT kal_uint8   *trc_vpe3_buf;
__L1_TRC_Vpe3_EXT kal_uint8   *trc_vpe3_buf_in_process;
TRC_SMP_L2DATA_EXT  kal_uint32  trc_vpe3_buf_len_in_process;
__L1_TRC_Vpe3_EXT kal_uint32  trc_vpe3_bufptr;
__L1_TRC_Vpe3_EXT kal_uint8   *trc_vpe3_buf_write_ptr;

__L1_TRC_Vpe3_EXT kal_uint8   trc_vpe3_lostTraces;
TRC_EMI_EXT       kal_uint8   prev_trc_vpe3_lostTraces;
TRC_EMI_EXT       kal_uint8   trc_vpe3_lostBuffers;
__L1_TRC_Vpe3_EXT kal_uint16  trc_vpe3_count[2];
__L1_TRC_Vpe3_EXT kal_uint16  *trc_vpe3_cur_count;
__L1_TRC_Vpe3_EXT kal_uint16  trc_vpe3_count_in_process;
__L1_TRC_Vpe3_EXT kal_bool    trc_vpe3_flush_flag;

// core 2 VPE0 (VPE4)
__L1_TRC_Vpe4_EXT kal_uint8   trc_vpe4_buffers[2][TRC_vpe4_BUFFER_SIZE];
__L1_TRC_Vpe4_EXT kal_uint8   *trc_vpe4_buf;
__L1_TRC_Vpe4_EXT kal_uint8   *trc_vpe4_buf_in_process;
TRC_SMP_L2DATA_EXT  kal_uint32  trc_vpe4_buf_len_in_process;
__L1_TRC_Vpe4_EXT kal_uint32  trc_vpe4_bufptr;
__L1_TRC_Vpe4_EXT kal_uint8   *trc_vpe4_buf_write_ptr;

__L1_TRC_Vpe4_EXT kal_uint8   trc_vpe4_lostTraces;
TRC_EMI_EXT       kal_uint8   prev_trc_vpe4_lostTraces;
TRC_EMI_EXT       kal_uint8   trc_vpe4_lostBuffers;
__L1_TRC_Vpe4_EXT kal_uint16  trc_vpe4_count[2];
__L1_TRC_Vpe4_EXT kal_uint16  *trc_vpe4_cur_count;
__L1_TRC_Vpe4_EXT kal_uint16  trc_vpe4_count_in_process;
__L1_TRC_Vpe4_EXT kal_bool    trc_vpe4_flush_flag;

// core 2 VPE1 (VPE5)
__L1_TRC_Vpe5_EXT kal_uint8   trc_vpe5_buffers[2][TRC_vpe5_BUFFER_SIZE];
__L1_TRC_Vpe5_EXT kal_uint8   *trc_vpe5_buf;
__L1_TRC_Vpe5_EXT kal_uint8   *trc_vpe5_buf_in_process;
TRC_SMP_L2DATA_EXT  kal_uint32  trc_vpe5_buf_len_in_process;
__L1_TRC_Vpe5_EXT kal_uint32  trc_vpe5_bufptr;
__L1_TRC_Vpe5_EXT kal_uint8   *trc_vpe5_buf_write_ptr;

__L1_TRC_Vpe5_EXT kal_uint8   trc_vpe5_lostTraces;
TRC_EMI_EXT       kal_uint8   prev_trc_vpe5_lostTraces;
TRC_EMI_EXT       kal_uint8   trc_vpe5_lostBuffers;
__L1_TRC_Vpe5_EXT kal_uint16  trc_vpe5_count[2];
__L1_TRC_Vpe5_EXT kal_uint16  *trc_vpe5_cur_count;
__L1_TRC_Vpe5_EXT kal_uint16  trc_vpe5_count_in_process;
__L1_TRC_Vpe5_EXT kal_bool    trc_vpe5_flush_flag;

/* L2 buffer pool*/
#define L2TRC_MAX_BUF_CNT (2)

// ERT L2 trace group
__L2_ERT_TRC_EXT kal_uint8   trc_ert_buffers[L2TRC_MAX_BUF_CNT][TRC_ert_BUFFER_SIZE];
__L2_ERT_TRC_EXT kal_uint8   *trc_ert_buf;
__L2_ERT_TRC_EXT kal_uint8   *trc_ert_buf_in_process;
__L2_ERT_TRC_EXT kal_uint32  trc_ert_buf_len_in_process;
__L2_ERT_TRC_EXT kal_uint32  trc_ert_bufptr;
__L2_ERT_TRC_EXT kal_uint8   *trc_ert_buf_write_ptr;

__L2_ERT_TRC_EXT kal_uint8   trc_ert_lostTraces;
TRC_EMI_EXT      kal_uint8   prev_trc_ert_lostTraces;
TRC_EMI_EXT      kal_uint8   trc_ert_lostBuffers;
__L2_ERT_TRC_EXT kal_uint16   trc_ert_count[2];
__L2_ERT_TRC_EXT kal_uint16   *trc_ert_cur_count;
__L2_ERT_TRC_EXT kal_uint16   trc_ert_count_in_process;
__L1_TRC_Vpe5_EXT kal_bool    trc_ert_flush_flag;




// EL2 L2 trace group
__L2_TRC_EXT kal_uint8   trc_el2_buffers[L2TRC_MAX_BUF_CNT][L2TRC_el2_BUFFER_SIZE];
__L2_TRC_EXT kal_uint8   *trc_el2_buf;
__L2_TRC_EXT kal_uint8   *trc_el2_buf_in_process;
__L2_TRC_EXT kal_uint32  trc_el2_buf_len_in_process;
__L2_TRC_EXT kal_uint32  trc_el2_bufptr;
__L2_TRC_EXT kal_uint8   *trc_el2_buf_write_ptr;

__L2_TRC_EXT kal_uint8   trc_el2_lostTraces;
TRC_EMI_EXT  kal_uint8   prev_trc_el2_lostTraces;
TRC_EMI_EXT  kal_uint8   trc_el2_lostBuffers;
__L2_TRC_EXT kal_uint16   trc_el2_count[2];
__L2_TRC_EXT kal_uint16   *trc_el2_cur_count;
__L2_TRC_EXT kal_uint16   trc_el2_count_in_process;

// HIF L2 trace group
__L2_TRC_EXT kal_uint8   trc_hif_buffers[L2TRC_MAX_BUF_CNT][L2TRC_hif_BUFFER_SIZE];
__L2_TRC_EXT kal_uint8   *trc_hif_buf;
__L2_TRC_EXT kal_uint8   *trc_hif_buf_in_process;
__L2_TRC_EXT kal_uint32  trc_hif_buf_len_in_process;
__L2_TRC_EXT kal_uint32  trc_hif_bufptr;
__L2_TRC_EXT kal_uint8   *trc_hif_buf_write_ptr;

__L2_TRC_EXT kal_uint8   trc_hif_lostTraces;
TRC_EMI_EXT  kal_uint8   prev_trc_hif_lostTraces;
TRC_EMI_EXT  kal_uint8   trc_hif_lostBuffers;
__L2_TRC_EXT kal_uint16   trc_hif_count[2];
__L2_TRC_EXT kal_uint16   *trc_hif_cur_count;
__L2_TRC_EXT kal_uint16   trc_hif_count_in_process;



/************/
/*Functions */
/************/
void dhlcore0_l1l2_flush(void);
void dhlcore1_l1l2_flush(void);

void Trc_Init(void);
void Trc_Init_c0(void);
void Trc_Init_c1(void);


void trc_trigger_flush(kal_uint8 *cnt);

// only use in L1 MCPS estimation on 6292
void trc_trigger(void);

void trc_fillFrameNumber_multiple(kal_uint32 framenumber, kal_uint32 ebit, kal_uint32 time, kal_uint32 sim_index);
void trc_UFillFrameNumber_multiple(kal_uint16 framenumber, kal_uint32 ebit, kal_int16 bsfn, kal_uint32 time, kal_uint32 sim_index);
void trc_fill_4g_time(kal_uint32 phytimer, kal_uint16 sample, kal_uint32 time, kal_uint16 sfn, kal_uint8 subframe);
void trc_fill_4g_time_2(kal_uint32 phytimer, kal_uint16 sample, kal_uint32 time, kal_uint16 sfn, kal_uint8 subframe, kal_uint32 _4g_time);
void trc_fill_4g_time_gfrc2(kal_uint32 phytimer, kal_uint32 time, kal_uint16 sfn, kal_uint8 subframe, kal_uint32 absH, kal_uint32 absL);
void trc_UpdateTimeStamp(kal_uint32 time);

#if defined(__C2K_RAT__)
extern void trc_fill_c2k_do_time(kal_uint8 fn_up, kal_uint32 fn_low, kal_uint8 slot, kal_uint32 echip, kal_uint32 frc);
extern void trc_fill_c2k_1x_time(kal_uint8 fn_up, kal_uint32 fn_low, kal_uint8 slot, kal_uint32 echip, kal_uint32 frc);
#endif  // defined(__C2K_RAT__)

void trc_4g_trigger();
void trc_UTrigger();

void trc_handover(kal_uint32 handovertime, kal_uint32 framenumber);
void trc_Uhandover(kal_uint32 handovertime, kal_uint32 framenumber);

void trc_setfilter(kal_uint8 *setting, kal_uint32 len);
void trc_set_l1_filter(kal_uint8 *setting, kal_uint32 len);
void trc_set_l2_filter(kal_uint8 *setting, kal_uint32 len);
kal_int32 trc_getfilter(kal_uint8 *buffer, kal_int32 len);

void trc_l2_init(kal_uint8 *pool[], kal_int32 size, kal_int32 count);

void trc_l2_init_el2(void);
void trc_l2_init_hif(void);
void trc_l2_init_ert(void);
void trc_l2_flush();

/* internal alloc function (can only be called from thread-safe context)  */
kal_bool trc_el2_alloc();
kal_bool trc_hif_alloc();
kal_bool trc_ert_alloc();

#if defined(__USE_ULSP__) && defined(__MTK_TARGET__)
// TODO: should be replace with ULSP macro
#define l2trc_send_1_word
#define l2trc_send_2_word
#define l2trc_send_3_word
#define l2trc_send_4_word
#define l2trc_send_5_word
#define l2trc_send_6_word
#define l2trc_send_7_word
#else /* __USE_ULSP__ */
/*******************************************************************
 *  CORE 0/1/2 L2 TRACE SEND functions marco with filter checking  *
 *******************************************************************/
void l2trc_send_1_word_el2(kal_uint32 v1);
void l2trc_send_2_word_el2(kal_uint32 v1, kal_uint32 v2);
void l2trc_send_3_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3);
void l2trc_send_4_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4);
void l2trc_send_5_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5);
void l2trc_send_6_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6);
void l2trc_send_7_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7);
void l2trc_send_8_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8);
void l2trc_send_9_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9);
void l2trc_send_10_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10);
void l2trc_send_11_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11);
void l2trc_send_12_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12);
void l2trc_send_13_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12, kal_uint8 v13);
void l2trc_send_14_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12, kal_uint8 v13, kal_uint8 v14);
void l2trc_send_15_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12, kal_uint8 v13, kal_uint8 v14, kal_uint8 v15);
void l2trc_send_16_word_el2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12, kal_uint8 v13, kal_uint8 v14, kal_uint8 v15, kal_uint8 v16);




void l2trc_send_1_word_hif(kal_uint32 v1);
void l2trc_send_2_word_hif(kal_uint32 v1, kal_uint32 v2);
void l2trc_send_3_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3);
void l2trc_send_4_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4);
void l2trc_send_5_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5);
void l2trc_send_6_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6);
void l2trc_send_7_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7);
void l2trc_send_8_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8);
void l2trc_send_9_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9);
void l2trc_send_10_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10);
void l2trc_send_11_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11);
void l2trc_send_12_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12);
void l2trc_send_13_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12, kal_uint8 v13);
void l2trc_send_14_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12, kal_uint8 v13, kal_uint8 v14);
void l2trc_send_15_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12, kal_uint8 v13, kal_uint8 v14, kal_uint8 v15);
void l2trc_send_16_word_hif(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12, kal_uint8 v13, kal_uint8 v14, kal_uint8 v15, kal_uint8 v16);


void l2trc_send_1_word_ert(kal_uint32 v1);
void l2trc_send_2_word_ert(kal_uint32 v1, kal_uint32 v2);
void l2trc_send_3_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3);
void l2trc_send_4_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4);
void l2trc_send_5_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5);
void l2trc_send_6_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6);
void l2trc_send_7_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7);
void l2trc_send_8_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8);
void l2trc_send_9_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9);
void l2trc_send_10_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10);
void l2trc_send_11_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11);
void l2trc_send_12_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12);
void l2trc_send_13_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12, kal_uint8 v13);
void l2trc_send_14_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12, kal_uint8 v13, kal_uint8 v14);
void l2trc_send_15_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12, kal_uint8 v13, kal_uint8 v14, kal_uint8 v15);
void l2trc_send_16_word_ert(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint8 v9, kal_uint8 v10, kal_uint8 v11, kal_uint8 v12, kal_uint8 v13, kal_uint8 v14, kal_uint8 v15, kal_uint8 v16);


extern kal_bool trc_l2_is_inited[L2_BUFFER_END]; // = {KAL_FALSE};

//In L1_SIM, hack l2trc_send_x_word_cb to L1 trace macro to support L2 logging in xL1SIM
#if !defined(L1_SIM)

typedef void (*l2trc_send_1_word_cb_t)(kal_uint32 v1);
extern l2trc_send_1_word_cb_t l2trc_send_1_word_cb[L2_BUFFER_END];
#define l2trc_send_1_word(L2_BUFFER_SETTING, v1, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1 = v1; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            l2trc_send_1_word_cb[L2_BUFFER_SETTING](_v1); \
        } \
    } while(0)

typedef void (*l2trc_send_2_word_cb_t)(kal_uint32 v1, kal_uint32 v2);
extern l2trc_send_2_word_cb_t l2trc_send_2_word_cb[L2_BUFFER_END];
#define l2trc_send_2_word(L2_BUFFER_SETTING, v1, v2, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            l2trc_send_2_word_cb[L2_BUFFER_SETTING](_v1, _v2); \
        } \
    } while(0)

typedef void (*l2trc_send_3_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3);
extern l2trc_send_3_word_cb_t l2trc_send_3_word_cb[L2_BUFFER_END];
#define l2trc_send_3_word(L2_BUFFER_SETTING, v1, v2, v3, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            l2trc_send_3_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3); \
        } \
    } while(0)

typedef void (*l2trc_send_4_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4);
extern l2trc_send_4_word_cb_t l2trc_send_4_word_cb[L2_BUFFER_END];
#define l2trc_send_4_word(L2_BUFFER_SETTING, v1, v2, v3, v4, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            l2trc_send_4_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4); \
        } \
    } while(0)

typedef void (*l2trc_send_5_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5);
extern l2trc_send_5_word_cb_t l2trc_send_5_word_cb[L2_BUFFER_END];
#define l2trc_send_5_word(L2_BUFFER_SETTING, v1, v2, v3, v4, v5, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4, _v5; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            _v5 = v5; \
            l2trc_send_5_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4, _v5); \
        } \
    } while(0)

typedef void (*l2trc_send_6_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6);
extern l2trc_send_6_word_cb_t l2trc_send_6_word_cb[L2_BUFFER_END];
#define l2trc_send_6_word(L2_BUFFER_SETTING, v1, v2, v3, v4, v5, v6, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            _v5 = v5; \
            _v6 = v6; \
            l2trc_send_6_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4, _v5, _v6); \
        } \
    } while(0)

typedef void (*l2trc_send_7_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7);
extern l2trc_send_7_word_cb_t l2trc_send_7_word_cb[L2_BUFFER_END];
#define l2trc_send_7_word(L2_BUFFER_SETTING, v1, v2, v3, v4, v5, v6, v7, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            _v5 = v5; \
            _v6 = v6; \
            _v7 = v7; \
            l2trc_send_7_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4, _v5, _v6, _v7); \
        } \
    } while(0)

typedef void (*l2trc_send_8_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8);
extern l2trc_send_8_word_cb_t l2trc_send_8_word_cb[L2_BUFFER_END];
#define l2trc_send_8_word(L2_BUFFER_SETTING, v1, v2, v3, v4, v5, v6, v7, v8, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            _v5 = v5; \
            _v6 = v6; \
            _v7 = v7; \
            _v8 = v8; \
            l2trc_send_8_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8); \
        } \
    } while(0)

typedef void (*l2trc_send_9_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9);
extern l2trc_send_9_word_cb_t l2trc_send_9_word_cb[L2_BUFFER_END];
#define l2trc_send_9_word(L2_BUFFER_SETTING, v1, v2, v3, v4, v5, v6, v7, v8, v9, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            _v5 = v5; \
            _v6 = v6; \
            _v7 = v7; \
            _v8 = v8; \
            _v9 = v9; \
            l2trc_send_9_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9); \
        } \
    } while(0)

typedef void (*l2trc_send_10_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10);
extern l2trc_send_10_word_cb_t l2trc_send_10_word_cb[L2_BUFFER_END];
#define l2trc_send_10_word(L2_BUFFER_SETTING, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            _v5 = v5; \
            _v6 = v6; \
            _v7 = v7; \
            _v8 = v8; \
            _v9 = v9; \
            _v10 = v10; \
            l2trc_send_10_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10); \
        } \
    } while(0)

typedef void (*l2trc_send_11_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11);
extern l2trc_send_11_word_cb_t l2trc_send_11_word_cb[L2_BUFFER_END];
#define l2trc_send_11_word(L2_BUFFER_SETTING, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            _v5 = v5; \
            _v6 = v6; \
            _v7 = v7; \
            _v8 = v8; \
            _v9 = v9; \
            _v10 = v10; \
            _v11 = v11; \
            l2trc_send_11_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11); \
        } \
    } while(0)

typedef void (*l2trc_send_12_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12);
extern l2trc_send_12_word_cb_t l2trc_send_12_word_cb[L2_BUFFER_END];
#define l2trc_send_12_word(L2_BUFFER_SETTING, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            _v5 = v5; \
            _v6 = v6; \
            _v7 = v7; \
            _v8 = v8; \
            _v9 = v9; \
            _v10 = v10; \
            _v11 = v11; \
            _v12 = v12; \
            l2trc_send_12_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12); \
        } \
    } while(0)

typedef void (*l2trc_send_13_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13);
extern l2trc_send_13_word_cb_t l2trc_send_13_word_cb[L2_BUFFER_END];
#define l2trc_send_13_word(L2_BUFFER_SETTING, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            _v5 = v5; \
            _v6 = v6; \
            _v7 = v7; \
            _v8 = v8; \
            _v9 = v9; \
            _v10 = v10; \
            _v11 = v11; \
            _v12 = v12; \
            _v13 = v13; \
            l2trc_send_13_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13); \
        } \
    } while(0)

typedef void (*l2trc_send_14_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14);
extern l2trc_send_14_word_cb_t l2trc_send_14_word_cb[L2_BUFFER_END];
#define l2trc_send_14_word(L2_BUFFER_SETTING, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            _v5 = v5; \
            _v6 = v6; \
            _v7 = v7; \
            _v8 = v8; \
            _v9 = v9; \
            _v10 = v10; \
            _v11 = v11; \
            _v12 = v12; \
            _v13 = v13; \
            _v14 = v14; \
            l2trc_send_14_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14); \
        } \
    } while(0)

typedef void (*l2trc_send_15_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15);
extern l2trc_send_15_word_cb_t l2trc_send_15_word_cb[L2_BUFFER_END];
#define l2trc_send_15_word(L2_BUFFER_SETTING, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            _v5 = v5; \
            _v6 = v6; \
            _v7 = v7; \
            _v8 = v8; \
            _v9 = v9; \
            _v10 = v10; \
            _v11 = v11; \
            _v12 = v12; \
            _v13 = v13; \
            _v14 = v14; \
            _v15 = v15; \
            l2trc_send_15_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15); \
        } \
    } while(0)

typedef void (*l2trc_send_16_word_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16);
extern l2trc_send_16_word_cb_t l2trc_send_16_word_cb[L2_BUFFER_END];
#define l2trc_send_16_word(L2_BUFFER_SETTING, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS) && trc_l2_is_inited[L2_BUFFER_SETTING]) { \
            _v1 = v1; \
            _v2 = v2; \
            _v3 = v3; \
            _v4 = v4; \
            _v5 = v5; \
            _v6 = v6; \
            _v7 = v7; \
            _v8 = v8; \
            _v9 = v9; \
            _v10 = v10; \
            _v11 = v11; \
            _v12 = v12; \
            _v13 = v13; \
            _v14 = v14; \
            _v15 = v15; \
            _v16 = v16; \
            l2trc_send_16_word_cb[L2_BUFFER_SETTING](_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16); \
        } \
    } while(0)

#endif /*#if !defined(L1_SIM) */

#endif /* __USE_ULSP__ */



extern kal_uint32 tst_cur_timestamp;
extern kal_uint32 tst_cur_celltime;
extern kal_uint32 tst_cur_abstick;

/**
 * L2 time trace to sync with L1 traces,
 * herit L1 time as mod(0), and increase msg_idx to 8 ==> 0x0800 (little-endian)
 **/
// Export for L2 use
// must update cell time and ABS tick before fill function to prevent l2 flush interrupt
// to make ELT timing order incorrect
void l2trc_update_4G_time(kal_uint32 celltime, kal_uint32 abstick);

void l2trc_update_ert_4G_time(kal_uint32 celltime, kal_uint32 abstick); //API for ERT owner : shengyi.ho

// Export for HIF GPT use
void l2trc_fill_4G_time();
void l2trc_fill_23G_time();

void TRC_SEND_HIGH_RESOLUTION_TIME(void);
void TRC_SEND_LOW_RESOLUTION_TIME(void);


/*********************************************/
/*    Macro for declaring filter in codegen  */
/*********************************************/
//force all to l2 cache in 93 to reduce mips, the conclusion after W16 PAE
#define DECLARE_TMD_FILTER(VAR_TYPE, VAR_NAME, VAR_SIZE, P0, P1, P2, P3, P4) \
    __DHL_L2CACHE_LOCK_DATA VAR_TYPE  VAR_NAME[VAR_SIZE] = {P0, P1, P2, P3, P4};

#define DECLARE_TMD_FILTER_L2SRAM(VAR_TYPE, VAR_NAME, VAR_SIZE, P0, P1, P2, P3, P4) \
    __DHL_L2CACHE_LOCK_DATA   VAR_TYPE   VAR_NAME[VAR_SIZE] = {P0, P1, P2, P3, P4};

#define DECLARE_TMD_FILTER_TCM(VAR_TYPE, VAR_NAME, VAR_SIZE, P0, P1, P2, P3, P4) \
    __DHL_L2CACHE_LOCK_DATA   VAR_TYPE   VAR_NAME[VAR_SIZE] = {P0, P1, P2, P3, P4};

/*********************************************/
/*    Macro for extern filter in codegen  */
/*********************************************/
#define EXTERN_TMD_FILTER(VAR_TYPE, VAR_NAME, VAR_SIZE) \
    extern VAR_TYPE    VAR_NAME[VAR_SIZE];

#define SET_TMD_FILTER(VAR_NAME, VAR_ARRAY_PTR, VAR_ARRAY_SIZE) \
    do{ \
        kal_uint32 i; \
        for(i=0; i<VAR_ARRAY_SIZE; i++) VAR_NAME[i] = VAR_ARRAY_PTR[i]; \
    }while(0)

#define FILTER_COPY(DES_BUFFER, FILTER_NAME, FILTER_SIZE) \
    do{ \
        memcpy(DES_BUFFER, FILTER_NAME, FILTER_SIZE); \
    }while(0);

#define FILTER_CHECK(FILTER_NAME, FILTER_ARRAY_INDEX, FILTER_CLASS) ((FILTER_NAME[FILTER_ARRAY_INDEX] & FILTER_CLASS) != 0)

/*******************************/
/* Macro for retrieving values */
/*******************************/
#define TRC_L2_PAD (0xFA)
#define TRC_BOXSTER_PAD (0xFA)

#if defined(L1_SIM) && !defined (__UE_SIMULATOR__)
extern char *GetShareMemory();
extern int  FlushShareMemory(const int size);
extern void sendCatcher_UpdateTime();
extern int  Catcher_Enable;
extern kal_uint8 VpeID_to_muxid[6];

typedef enum
{
    vpe0, vpe1, vpe2, vpe3, vpe4, vpe5
} vpeid_map_index;


#define TRC_START_FILL_SMP(VpeID, NoBytes)             \
    extern int Catcher_Enable;                          \
    kal_char tmpBuf[256];                               \
    kal_uint32 cur_idx = 16;                            \
    kal_uint32 savedMask = 0;                           \
    if (Catcher_Enable != 1) return;                    \
    DHL_Enter_PS_CS(savedMask);                         \
    tmpBuf[0] = 0xAC;                                   \
    tmpBuf[1] = 0xCA;                                   \
    tmpBuf[2] = VpeID_to_muxid[VpeID];                \
    tmpBuf[3] = ~VpeID_to_muxid[VpeID];               \
    tmpBuf[6] = 0xAC;                                   \
    tmpBuf[7] = 0xDB;                                   \
    tmpBuf[8] = 0xCF;                                   \
    tmpBuf[9] = 0xE5;                                   \
    tmpBuf[10] = (kal_char)0;                           \
    tmpBuf[11] = 0x8;                                   \
    tmpBuf[15] = (kal_char)0;                           \
    trc_##VpeID##_buf_write_ptr = &tmpBuf[16];        \
    do {} while(0)


#define TRC_END_FILL_SMP(VpeID, NoBytes, count)             \
    do {                                                     \
        extern int SendToCatcher(char *buf, int size);       \
        cur_idx += NoBytes;                                  \
        tmpBuf[4] = (kal_char)((NoBytes + 2 + 8) & 0xff);           \
        tmpBuf[5] = (kal_char)(((NoBytes + 2 + 8) >> 8) & 0xff);    \
        tmpBuf[12] = (kal_char)((NoBytes + 2) & 0xff);              \
        tmpBuf[13] = (kal_char)(((NoBytes + 2) >> 8) & 0xff);       \
        tmpBuf[14] = (kal_char)count;                        \
        SendToCatcher(tmpBuf, cur_idx);                      \
        DHL_Leave_PS_CS(savedMask);                          \
    } while(0)


#define TRC_START_FILL_L2_SMP(L2Buf, NoBytes)                            \
    DHL_Enter_L2_##L2Buf##_CS();                                \
    if ( (trc_##L2Buf##_bufptr + (NoBytes) + 4) < (L2TRC_##L2Buf##_BUFFER_SIZE - DHL_L1L2_TRACE_PREAMLE_LEN)) {

#define TRC_END_FILL_L2_SMP(L2Buf, NoBytes)                      \
    trc_##L2Buf##_buf_write_ptr += (NoBytes);                    \
    trc_##L2Buf##_bufptr += (NoBytes);                           \
    *trc_##L2Buf##_cur_count = *trc_##L2Buf##_cur_count + 1;     \
    } else {                                                         \
        if (trc_##L2Buf##_lostTraces < 0xFF) trc_##L2Buf##_lostTraces++; \
    }                                                            \
    DHL_Leave_L2_##L2Buf##_CS();

#else /* #if defined(L1_SIM) && !defined (__UE_SIMULATOR__) */

#define TRC_START_FILL_SMP(VpeID, NoBytes)           \
    if (trc_##VpeID##_flush_flag) trc_##VpeID##_buf_alloc(); \
    if ((trc_##VpeID##_bufptr + (NoBytes) + 4) > (TRC_##VpeID##_BUFFER_SIZE  - DHL_L1L2_TRACE_PREAMLE_LEN)) { \
        if(trc_##VpeID##_buf_alloc() == 0) { \
            if (trc_##VpeID##_lostTraces < 0xFF) trc_##VpeID##_lostTraces += 1; \
            return; \
        } \
    } \
    do {} while(0)

#define TRC_END_FILL_SMP(VpeID, NoBytes, count)                   \
    trc_##VpeID##_buf_write_ptr += (NoBytes);                    \
    trc_##VpeID##_bufptr += (NoBytes);                           \
    *trc_##VpeID##_cur_count = *trc_##VpeID##_cur_count + count;   \
    do {} while(0)

#define TRC_START_FILL_L2_SMP(L2Buf, NoBytes)                            \
    DHL_Enter_L2_##L2Buf##_CS();                                \
    if ( (trc_##L2Buf##_bufptr + (NoBytes) + 4) < (L2TRC_##L2Buf##_BUFFER_SIZE - DHL_L1L2_TRACE_PREAMLE_LEN)) {

#define TRC_END_FILL_L2_SMP(L2Buf, NoBytes)                      \
    trc_##L2Buf##_buf_write_ptr += (NoBytes);                    \
    trc_##L2Buf##_bufptr += (NoBytes);                           \
    *trc_##L2Buf##_cur_count = *trc_##L2Buf##_cur_count + 1;     \
    } else {                                                         \
        if (trc_##L2Buf##_lostTraces < 0xFF) trc_##L2Buf##_lostTraces++; \
    }                                                            \
    DHL_Leave_L2_##L2Buf##_CS();
#endif

/*********************************************************
 *       CORE 0 VPE0 (VPE0) L1 TRACE SEND functions      *
 *********************************************************/
void TRC_SEND_1_DATA_vpe0(kal_uint32 v1);
void TRC_SEND_2_DATA_vpe0(kal_uint32 v1, kal_uint32 v2);
void TRC_SEND_3_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3);
void TRC_SEND_4_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4);
void TRC_SEND_5_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5);
void TRC_SEND_6_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6);
void TRC_SEND_7_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7);
void TRC_SEND_8_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7, kal_uint32 v8);
void TRC_SEND_9_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7, kal_uint32 v8, kal_uint32 v9);
void TRC_SEND_10_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10);
void TRC_SEND_11_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11);
void TRC_SEND_12_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12);
void TRC_SEND_13_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13);
void TRC_SEND_14_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14);
void TRC_SEND_15_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15);
void TRC_SEND_16_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16);
void TRC_SEND_17_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17);
void TRC_SEND_18_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18);
void TRC_SEND_19_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19);
void TRC_SEND_20_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20);
void TRC_SEND_21_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21);
void TRC_SEND_22_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22);
void TRC_SEND_23_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23);
void TRC_SEND_24_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24);
void TRC_SEND_25_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25);
void TRC_SEND_26_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26);
void TRC_SEND_27_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27);
void TRC_SEND_28_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28);
void TRC_SEND_29_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29);
void TRC_SEND_30_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30);
void TRC_SEND_31_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                           kal_uint32 v31);
void TRC_SEND_32_DATA_vpe0(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                           kal_uint32 v31, kal_uint32 v32);

/*********************************************************
 *       CORE 0 VPE1 (VPE1) L1 TRACE SEND functions      *
 *********************************************************/
void TRC_SEND_1_DATA_vpe1(kal_uint32 v1);
void TRC_SEND_2_DATA_vpe1(kal_uint32 v1, kal_uint32 v2);
void TRC_SEND_3_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3);
void TRC_SEND_4_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4);
void TRC_SEND_5_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5);
void TRC_SEND_6_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6);
void TRC_SEND_7_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7);
void TRC_SEND_8_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7, kal_uint32 v8);
void TRC_SEND_9_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7, kal_uint32 v8, kal_uint32 v9);
void TRC_SEND_10_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10);
void TRC_SEND_11_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11);
void TRC_SEND_12_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12);
void TRC_SEND_13_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13);
void TRC_SEND_14_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14);
void TRC_SEND_15_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15);
void TRC_SEND_16_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16);
void TRC_SEND_17_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17);
void TRC_SEND_18_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18);
void TRC_SEND_19_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19);
void TRC_SEND_20_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20);
void TRC_SEND_21_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21);
void TRC_SEND_22_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22);
void TRC_SEND_23_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23);
void TRC_SEND_24_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24);
void TRC_SEND_25_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25);
void TRC_SEND_26_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26);
void TRC_SEND_27_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27);
void TRC_SEND_28_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28);
void TRC_SEND_29_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29);
void TRC_SEND_30_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30);
void TRC_SEND_31_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                           kal_uint32 v31);
void TRC_SEND_32_DATA_vpe1(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                           kal_uint32 v31, kal_uint32 v32);

/*********************************************************
 *       CORE 1 VPE0 (VPE2) L1 TRACE SEND functions      *
 *********************************************************/
void TRC_SEND_1_DATA_vpe2(kal_uint32 v1);
void TRC_SEND_2_DATA_vpe2(kal_uint32 v1, kal_uint32 v2);
void TRC_SEND_3_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3);
void TRC_SEND_4_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4);
void TRC_SEND_5_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5);
void TRC_SEND_6_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6);
void TRC_SEND_7_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7);
void TRC_SEND_8_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7, kal_uint32 v8);
void TRC_SEND_9_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7, kal_uint32 v8, kal_uint32 v9);
void TRC_SEND_10_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10);
void TRC_SEND_11_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11);
void TRC_SEND_12_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12);
void TRC_SEND_13_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13);
void TRC_SEND_14_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14);
void TRC_SEND_15_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15);
void TRC_SEND_16_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16);
void TRC_SEND_17_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17);
void TRC_SEND_18_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18);
void TRC_SEND_19_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19);
void TRC_SEND_20_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20);
void TRC_SEND_21_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21);
void TRC_SEND_22_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22);
void TRC_SEND_23_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23);
void TRC_SEND_24_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24);
void TRC_SEND_25_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25);
void TRC_SEND_26_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26);
void TRC_SEND_27_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27);
void TRC_SEND_28_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28);
void TRC_SEND_29_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29);
void TRC_SEND_30_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30);
void TRC_SEND_31_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                           kal_uint32 v31);
void TRC_SEND_32_DATA_vpe2(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                           kal_uint32 v31, kal_uint32 v32);

/*********************************************************
 *       CORE 1 VPE1 (VPE3) L1 TRACE SEND functions      *
 *********************************************************/
void TRC_SEND_1_DATA_vpe3(kal_uint32 v1);
void TRC_SEND_2_DATA_vpe3(kal_uint32 v1, kal_uint32 v2);
void TRC_SEND_3_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3);
void TRC_SEND_4_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4);
void TRC_SEND_5_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5);
void TRC_SEND_6_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6);
void TRC_SEND_7_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7);
void TRC_SEND_8_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7, kal_uint32 v8);
void TRC_SEND_9_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7, kal_uint32 v8, kal_uint32 v9);
void TRC_SEND_10_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10);
void TRC_SEND_11_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11);
void TRC_SEND_12_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12);
void TRC_SEND_13_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13);
void TRC_SEND_14_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14);
void TRC_SEND_15_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15);
void TRC_SEND_16_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16);
void TRC_SEND_17_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17);
void TRC_SEND_18_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18);
void TRC_SEND_19_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19);
void TRC_SEND_20_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20);
void TRC_SEND_21_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21);
void TRC_SEND_22_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22);
void TRC_SEND_23_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23);
void TRC_SEND_24_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24);
void TRC_SEND_25_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25);
void TRC_SEND_26_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26);
void TRC_SEND_27_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27);
void TRC_SEND_28_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28);
void TRC_SEND_29_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29);
void TRC_SEND_30_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30);
void TRC_SEND_31_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                           kal_uint32 v31);
void TRC_SEND_32_DATA_vpe3(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                           kal_uint32 v31, kal_uint32 v32);

/*********************************************************
 *       CORE 2 VPE0 (VPE4) L1 TRACE SEND functions      *
 *********************************************************/
void TRC_SEND_1_DATA_vpe4(kal_uint32 v1);
void TRC_SEND_2_DATA_vpe4(kal_uint32 v1, kal_uint32 v2);
void TRC_SEND_3_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3);
void TRC_SEND_4_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4);
void TRC_SEND_5_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5);
void TRC_SEND_6_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6);
void TRC_SEND_7_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7);
void TRC_SEND_8_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7, kal_uint32 v8);
void TRC_SEND_9_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7, kal_uint32 v8, kal_uint32 v9);
void TRC_SEND_10_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10);
void TRC_SEND_11_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11);
void TRC_SEND_12_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12);
void TRC_SEND_13_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13);
void TRC_SEND_14_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14);
void TRC_SEND_15_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15);
void TRC_SEND_16_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16);
void TRC_SEND_17_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17);
void TRC_SEND_18_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18);
void TRC_SEND_19_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19);
void TRC_SEND_20_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20);
void TRC_SEND_21_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21);
void TRC_SEND_22_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22);
void TRC_SEND_23_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23);
void TRC_SEND_24_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24);
void TRC_SEND_25_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25);
void TRC_SEND_26_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26);
void TRC_SEND_27_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27);
void TRC_SEND_28_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28);
void TRC_SEND_29_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29);
void TRC_SEND_30_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30);
void TRC_SEND_31_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                           kal_uint32 v31);
void TRC_SEND_32_DATA_vpe4(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                           kal_uint32 v31, kal_uint32 v32);

/*********************************************************
 *       CORE 2 VPE1 (VPE5) L1 TRACE SEND functions      *
 *********************************************************/
void TRC_SEND_1_DATA_vpe5(kal_uint32 v1);
void TRC_SEND_2_DATA_vpe5(kal_uint32 v1, kal_uint32 v2);
void TRC_SEND_3_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3);
void TRC_SEND_4_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4);
void TRC_SEND_5_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5);
void TRC_SEND_6_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6);
void TRC_SEND_7_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7);
void TRC_SEND_8_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7, kal_uint32 v8);
void TRC_SEND_9_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                          kal_uint32 v7, kal_uint32 v8, kal_uint32 v9);
void TRC_SEND_10_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10);
void TRC_SEND_11_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11);
void TRC_SEND_12_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12);
void TRC_SEND_13_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13);
void TRC_SEND_14_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14);
void TRC_SEND_15_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15);
void TRC_SEND_16_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16);
void TRC_SEND_17_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17);
void TRC_SEND_18_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18);
void TRC_SEND_19_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19);
void TRC_SEND_20_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20);
void TRC_SEND_21_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21);
void TRC_SEND_22_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22);
void TRC_SEND_23_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23);
void TRC_SEND_24_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24);
void TRC_SEND_25_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25);
void TRC_SEND_26_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26);
void TRC_SEND_27_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27);
void TRC_SEND_28_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28);
void TRC_SEND_29_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29);
void TRC_SEND_30_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30);
void TRC_SEND_31_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                           kal_uint32 v31);
void TRC_SEND_32_DATA_vpe5(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6,
                           kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12,
                           kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18,
                           kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24,
                           kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30,
                           kal_uint32 v31, kal_uint32 v32);
/**************************************************
 *  CORE 0/1/2 L1 TRACE SEND functions callbacks  *
 **************************************************/
typedef void (*TRC_SEND_1_DATA_cb_t)(kal_uint32 v1);
extern TRC_SEND_1_DATA_cb_t TRC_SEND_1_DATA_cb[6];
typedef void (*TRC_SEND_2_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2);
extern TRC_SEND_2_DATA_cb_t TRC_SEND_2_DATA_cb[6];
typedef void (*TRC_SEND_3_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3);
extern TRC_SEND_3_DATA_cb_t TRC_SEND_3_DATA_cb[6];
typedef void (*TRC_SEND_4_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4);
extern TRC_SEND_4_DATA_cb_t TRC_SEND_4_DATA_cb[6];
typedef void (*TRC_SEND_5_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5);
extern TRC_SEND_5_DATA_cb_t TRC_SEND_5_DATA_cb[6];
typedef void (*TRC_SEND_6_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6);
extern TRC_SEND_6_DATA_cb_t TRC_SEND_6_DATA_cb[6];
typedef void (*TRC_SEND_7_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7);
extern TRC_SEND_7_DATA_cb_t TRC_SEND_7_DATA_cb[6];
typedef void (*TRC_SEND_8_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8);
extern TRC_SEND_8_DATA_cb_t TRC_SEND_8_DATA_cb[6];
typedef void (*TRC_SEND_9_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9);
extern TRC_SEND_9_DATA_cb_t TRC_SEND_9_DATA_cb[6];
typedef void (*TRC_SEND_10_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10);
extern TRC_SEND_10_DATA_cb_t TRC_SEND_10_DATA_cb[6];
typedef void (*TRC_SEND_11_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11);
extern TRC_SEND_11_DATA_cb_t TRC_SEND_11_DATA_cb[6];
typedef void (*TRC_SEND_12_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12);
extern TRC_SEND_12_DATA_cb_t TRC_SEND_12_DATA_cb[6];
typedef void (*TRC_SEND_13_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13);
extern TRC_SEND_13_DATA_cb_t TRC_SEND_13_DATA_cb[6];
typedef void (*TRC_SEND_14_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14);
extern TRC_SEND_14_DATA_cb_t TRC_SEND_14_DATA_cb[6];
typedef void (*TRC_SEND_15_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15);
extern TRC_SEND_15_DATA_cb_t TRC_SEND_15_DATA_cb[6];
typedef void (*TRC_SEND_16_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16);
extern TRC_SEND_16_DATA_cb_t TRC_SEND_16_DATA_cb[6];
typedef void (*TRC_SEND_17_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17);
extern TRC_SEND_17_DATA_cb_t TRC_SEND_17_DATA_cb[6];
typedef void (*TRC_SEND_18_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18);
extern TRC_SEND_18_DATA_cb_t TRC_SEND_18_DATA_cb[6];
typedef void (*TRC_SEND_19_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19);
extern TRC_SEND_19_DATA_cb_t TRC_SEND_19_DATA_cb[6];
typedef void (*TRC_SEND_20_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20);
extern TRC_SEND_20_DATA_cb_t TRC_SEND_20_DATA_cb[6];
typedef void (*TRC_SEND_21_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20, kal_uint32 v21);
extern TRC_SEND_21_DATA_cb_t TRC_SEND_21_DATA_cb[6];
typedef void (*TRC_SEND_22_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22);
extern TRC_SEND_22_DATA_cb_t TRC_SEND_22_DATA_cb[6];
typedef void (*TRC_SEND_23_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23);
extern TRC_SEND_23_DATA_cb_t TRC_SEND_23_DATA_cb[6];
typedef void (*TRC_SEND_24_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24);
extern TRC_SEND_24_DATA_cb_t TRC_SEND_24_DATA_cb[6];
typedef void (*TRC_SEND_25_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24, kal_uint32 v25);
extern TRC_SEND_25_DATA_cb_t TRC_SEND_25_DATA_cb[6];
typedef void (*TRC_SEND_26_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24, kal_uint32 v25, kal_uint32 v26);
extern TRC_SEND_26_DATA_cb_t TRC_SEND_26_DATA_cb[6];
typedef void (*TRC_SEND_27_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24, kal_uint32 v25, kal_uint32 v26, kal_uint32 v27);
extern TRC_SEND_27_DATA_cb_t TRC_SEND_27_DATA_cb[6];
typedef void (*TRC_SEND_28_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24, kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28);
extern TRC_SEND_28_DATA_cb_t TRC_SEND_28_DATA_cb[6];
typedef void (*TRC_SEND_29_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24, kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29);
extern TRC_SEND_29_DATA_cb_t TRC_SEND_29_DATA_cb[6];
typedef void (*TRC_SEND_30_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24, kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30);
extern TRC_SEND_30_DATA_cb_t TRC_SEND_30_DATA_cb[6];
typedef void (*TRC_SEND_31_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24, kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30, kal_uint32 v31);
extern TRC_SEND_31_DATA_cb_t TRC_SEND_31_DATA_cb[6];
typedef void (*TRC_SEND_32_DATA_cb_t)(kal_uint32 v1, kal_uint32 v2, kal_uint32 v3, kal_uint32 v4, kal_uint32 v5, kal_uint32 v6, kal_uint32 v7, kal_uint32 v8, kal_uint32 v9, kal_uint32 v10, kal_uint32 v11, kal_uint32 v12, kal_uint32 v13, kal_uint32 v14, kal_uint32 v15, kal_uint32 v16, kal_uint32 v17, kal_uint32 v18, kal_uint32 v19, kal_uint32 v20, kal_uint32 v21, kal_uint32 v22, kal_uint32 v23, kal_uint32 v24, kal_uint32 v25, kal_uint32 v26, kal_uint32 v27, kal_uint32 v28, kal_uint32 v29, kal_uint32 v30, kal_uint32 v31, kal_uint32 v32);
extern TRC_SEND_32_DATA_cb_t TRC_SEND_32_DATA_cb[6];

/***************************************************************************
 *  CORE 0/1/2 L1 TRACE SEND functions marco with filter without checking  *
 ***************************************************************************/

#if defined(__DHL_L1_VPE0_AFFINITY__)
/* VPE0 affinity optimization */
#define DO_TRC_SEND_n_DATA(n) \
    TRC_SEND_##n##_DATA_vpe0
#elif defined(__DHL_L1_VPE1_AFFINITY__)
/* VPE1 affinity optimization */
#define DO_TRC_SEND_n_DATA(n) \
    TRC_SEND_##n##_DATA_vpe1
#elif defined(__DHL_L1_VPE2_AFFINITY__)
/* VPE2 affinity optimization */
#define DO_TRC_SEND_n_DATA(n) \
    TRC_SEND_##n##_DATA_vpe2
#elif defined(__DHL_L1_VPE3_AFFINITY__)
/* VPE3 affinity optimization */
#define DO_TRC_SEND_n_DATA(n) \
    TRC_SEND_##n##_DATA_vpe3
#elif defined(__DHL_L1_VPE4_AFFINITY__)
/* VPE4 affinity optimization */
#define DO_TRC_SEND_n_DATA(n) \
    TRC_SEND_##n##_DATA_vpe4
#elif defined(__DHL_L1_VPE5_AFFINITY__)
/* VPE5 affinity optimization */
#define DO_TRC_SEND_n_DATA(n) \
    TRC_SEND_##n##_DATA_vpe5
#else
/* SMP */
#define DO_TRC_SEND_n_DATA(n) \
    vpe_id = kal_get_current_vpe_id(); \
    TRC_SEND_##n##_DATA_cb[vpe_id]

#endif  /* affinity optimization */

#define TRC_SEND_1_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(1)(v1); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)

#define TRC_SEND_2_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(2)(v1, v2); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_3_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(3)(v1, v2, v3); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_4_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(4)(v1, v2, v3, v4); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_5_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(5)(v1, v2, v3, v4, v5); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_6_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(6)(v1, v2, v3, v4, v5, v6); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_7_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(7)(v1, v2, v3, v4, v5, v6, v7); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_8_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(8)(v1, v2, v3, v4, v5, v6, v7, v8); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_9_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(9)(v1, v2, v3, v4, v5, v6, v7, v8, v9); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_10_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(10)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_11_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(11)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_12_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(12)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_13_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(13)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_14_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(14)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_15_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(15)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_16_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(16)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_17_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(17)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_18_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(18)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_19_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(19)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_20_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(20)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_21_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(21)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_22_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(22)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_23_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(23)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_24_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(24)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_25_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(25)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_26_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(26)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_27_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(27)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_28_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(28)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_29_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(29)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_30_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(30)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_31_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(31)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)
#define TRC_SEND_32_DATA_NOFLTR(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32) \
    do { \
        kal_uint32 oldmask=0; \
        kal_uint8 vpe_id = 0; \
        DHL_LOCK_CPU_INTERRUPT(oldmask); \
        DO_TRC_SEND_n_DATA(32)(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32); \
        DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
    } while(0)

/*******************************************************************
 *  CORE 0/1/2 L1 TRACE SEND functions marco with filter checking  *
 *******************************************************************/
#define TRC_SEND_1_DATA(CRITICAL_SETCION_PROTECT, v1, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(1)(_v1); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_2_DATA(CRITICAL_SETCION_PROTECT, v1, v2, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(2)(_v1, _v2); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_3_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(3)(_v1, _v2, _v3); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_4_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(4)(_v1, _v2, _v3, _v4); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_5_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(5)(_v1, _v2, _v3, _v4, _v5); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_6_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(6)(_v1, _v2, _v3, _v4, _v5, _v6); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_7_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(7)(_v1, _v2, _v3, _v4, _v5, _v6, _v7); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_8_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(8)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_9_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(9)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_10_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(10)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_11_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(11)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_12_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(12)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_13_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(13)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_14_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(14)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_15_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(15)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_16_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(16)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_17_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(17)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_18_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(18)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_19_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(19)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_20_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(20)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_21_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; _v21 = v21; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(21)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_22_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; _v21 = v21; _v22 = v22; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(22)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_23_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; _v21 = v21; _v22 = v22; _v23 = v23; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(23)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_24_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; _v21 = v21; _v22 = v22; _v23 = v23; _v24 = v24; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(24)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_25_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; _v21 = v21; _v22 = v22; _v23 = v23; _v24 = v24; _v25 = v25; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(25)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_26_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; _v21 = v21; _v22 = v22; _v23 = v23; _v24 = v24; _v25 = v25; _v26 = v26; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(26)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_27_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26, _v27; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; _v21 = v21; _v22 = v22; _v23 = v23; _v24 = v24; _v25 = v25; _v26 = v26; _v27 = v27; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(27)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26, _v27); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_28_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26, _v27, _v28; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; _v21 = v21; _v22 = v22; _v23 = v23; _v24 = v24; _v25 = v25; _v26 = v26; _v27 = v27; _v28 = v28; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(28)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26, _v27, _v28); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_29_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26, _v27, _v28, _v29; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; _v21 = v21; _v22 = v22; _v23 = v23; _v24 = v24; _v25 = v25; _v26 = v26; _v27 = v27; _v28 = v28; _v29 = v29; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(29)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26, _v27, _v28, _v29); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_30_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26, _v27, _v28, _v29, _v30; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; _v21 = v21; _v22 = v22; _v23 = v23; _v24 = v24; _v25 = v25; _v26 = v26; _v27 = v27; _v28 = v28; _v29 = v29; _v30 = v30; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(30)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26, _v27, _v28, _v29, _v30); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_31_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26, _v27, _v28, _v29, _v30, _v31; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; _v21 = v21; _v22 = v22; _v23 = v23; _v24 = v24; _v25 = v25; _v26 = v26; _v27 = v27; _v28 = v28; _v29 = v29; _v30 = v30; _v31 = v31; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(31)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26, _v27, _v28, _v29, _v30, _v31); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#define TRC_SEND_32_DATA(CRITICAL_SETCION_PROTECT, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, FILTER_ARRAY, FILTER_ARRAY_INDEX, FILTER_CLASS) \
    do { \
        kal_uint8  vpe_id;  \
        kal_uint32 oldmask; \
        kal_uint32 _v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26, _v27, _v28, _v29, _v30, _v31, _v32; \
        if(FILTER_CHECK(FILTER_ARRAY,FILTER_ARRAY_INDEX,FILTER_CLASS)) { \
            _v1 = v1; _v2 = v2; _v3 = v3; _v4 = v4; _v5 = v5; _v6 = v6; _v7 = v7; _v8 = v8; _v9 = v9; _v10 = v10; _v11 = v11; _v12 = v12; _v13 = v13; _v14 = v14; _v15 = v15; _v16 = v16; _v17 = v17; _v18 = v18; _v19 = v19; _v20 = v20; _v21 = v21; _v22 = v22; _v23 = v23; _v24 = v24; _v25 = v25; _v26 = v26; _v27 = v27; _v28 = v28; _v29 = v29; _v30 = v30; _v31 = v31; _v32 = v32; \
            DHL_LOCK_CPU_INTERRUPT(oldmask); \
            DO_TRC_SEND_n_DATA(32)(_v1, _v2, _v3, _v4, _v5, _v6, _v7, _v8, _v9, _v10, _v11, _v12, _v13, _v14, _v15, _v16, _v17, _v18, _v19, _v20, _v21, _v22, _v23, _v24, _v25, _v26, _v27, _v28, _v29, _v30, _v31, _v32); \
            DHL_UNLOCK_CPU_INTERRUPT(oldmask); \
        } \
    } while(0)

#if defined(L1_SIM)  //Hack L2 logging macro to L1 in xL1SIM to support L2 logging@xL1SIM
#define l2trc_send_1_word TRC_SEND_1_DATA
#define l2trc_send_2_word TRC_SEND_2_DATA
#define l2trc_send_3_word TRC_SEND_3_DATA
#define l2trc_send_4_word TRC_SEND_4_DATA
#define l2trc_send_5_word TRC_SEND_5_DATA
#define l2trc_send_6_word TRC_SEND_6_DATA
#define l2trc_send_7_word TRC_SEND_7_DATA
#define l2trc_send_8_word TRC_SEND_8_DATA
#define l2trc_send_9_word TRC_SEND_9_DATA
#define l2trc_send_10_word TRC_SEND_10_DATA
#define l2trc_send_11_word TRC_SEND_11_DATA
#define l2trc_send_12_word TRC_SEND_12_DATA
#define l2trc_send_13_word TRC_SEND_13_DATA
#define l2trc_send_14_word TRC_SEND_14_DATA
#define l2trc_send_15_word TRC_SEND_15_DATA
#define l2trc_send_16_word TRC_SEND_16_DATA
#define l2trc_send_17_word TRC_SEND_17_DATA
#define l2trc_send_18_word TRC_SEND_18_DATA
#define l2trc_send_19_word TRC_SEND_19_DATA
#define l2trc_send_20_word TRC_SEND_20_DATA
#define l2trc_send_21_word TRC_SEND_21_DATA
#define l2trc_send_22_word TRC_SEND_22_DATA
#define l2trc_send_23_word TRC_SEND_23_DATA
#define l2trc_send_24_word TRC_SEND_24_DATA
#define l2trc_send_25_word TRC_SEND_25_DATA
#define l2trc_send_26_word TRC_SEND_26_DATA
#define l2trc_send_27_word TRC_SEND_27_DATA
#define l2trc_send_28_word TRC_SEND_28_DATA
#define l2trc_send_29_word TRC_SEND_29_DATA
#define l2trc_send_30_word TRC_SEND_30_DATA
#define l2trc_send_31_word TRC_SEND_31_DATA
#define l2trc_send_32_word TRC_SEND_32_DATA
#endif


//Use MACRO
#define TRC_MERGE_2S_MACRO(v1, v2) ( (kal_uint32)(v1&0xFFFF) + ( ((kal_uint32)v2)<<16 ))
#define TRC_MERGE_1S2C_MACRO(v1, v2, v3) ( (kal_uint32)(v1&0xFFFF) + ( ( (kal_uint32)(v2&0xFF) )<<16) + ( ((kal_uint32)v3)<<24) )
#define TRC_MERGE_4C_MACRO(v1, v2, v3, v4) ( (kal_uint32)(v1&0xFF) + ( ((kal_uint32)(v2&0xFF))<<8) + ( ((kal_uint32)(v3&0xFF))<<16) + ( ((kal_uint32)v4)<<24))

/*
kal_uint32 TRC_MERGE_2S_FUNC( kal_uint16 v1, kal_uint16 v2 );
kal_uint32 TRC_MERGE_1S2C_FUNC( kal_uint16 v1, kal_char v2 , kal_char v3);
kal_uint32 TRC_MERGE_4C_FUNC( kal_char v1, kal_char v2 , kal_char v3, kal_char v4);
*/

#define TRC_MERGE_2S(v1, v2) TRC_MERGE_2S_MACRO((v1), (v2))
#define TRC_MERGE_1S2C(v1, v2, v3) TRC_MERGE_1S2C_MACRO((v1), (v2), (v3))
#define TRC_MERGE_4C(v1, v2, v3, v4) TRC_MERGE_4C_MACRO((v1), (v2), (v3), (v4))


#endif // !GEN_FOR_PC
#endif //_L1TRC_H
#endif /* #if defined(L1_CATCHER) */
