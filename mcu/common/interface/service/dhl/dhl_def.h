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
 *   dhl_def.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   DHL function and struct definition
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 06 25 2018 mojo.lai
 * [MOLY00332444] [Gen93][AT&T][ICD] Field Test Mode and ICD EM reporting implementation - ICD framework
 * 	
 * 	ICD 1.26 phase in
 *
 * 06 25 2018 mojo.lai
 * [MOLY00332444] [Gen93][AT&T][ICD] Field Test Mode and ICD EM reporting implementation - ICD framework
 * 	
 * 	ICD 1.26 phase in
 *
 * 06 12 2018 mojo.lai
 * [MOLY00332444] [Gen93][AT&T][ICD] Field Test Mode and ICD EM reporting implementation - ICD framework
 * 	
 * 	ICD 1.26 phase in
 *
 * 06 11 2018 mojo.lai
 * [MOLY00332444] [Gen93][AT&T][ICD] Field Test Mode and ICD EM reporting implementation - ICD framework
 * ICD 1.26 phase in
 *
 * 12 28 2017 yancy.chien
 * [MOLY00298639] [ICD] ICD API 1st phase-in.
 *
 * 11 30 2017 yu-hsiang.peng
 * [MOLY00292576] [Coverity Scanned Code Defect]CID:4077159 code defect happened in /mcu/common/service/dhl/src/dhl_trace.c
 * [LR12A.R3] fix coverity, CID: 4077159 & 4077183 & 4077409 & 4077481
 *
 * 11 28 2017 yu-hsiang.peng
 * [MOLY00292225] [Gen93][Gen95] dsp dump naming change
 * [LR12A.R3] DSP memory dump change (requested by SS5)
 *
 * 08 01 2017 yu-hsiang.peng
 * [MOLY00266204] [Gen93] Common feature development before control
 * [UMOLYA.TRUNK] Recycle LS buffer when mdlogger not connect after 60 seconde (FRC version)
 *
 * 06 05 2017 yu-hsiang.peng
 * [MOLY00254166] [Gen93] dsp swla dump feature
 * [UMOLYA.TRUNK] memory dump feature
 * 	1. DSP SWLA support
 * 	2. mini com logger support
 *
 * 05 04 2017 yancy.chien
 * [MOLY00246779] [BIANCO] Enable ASM addon,SWTR and stream mode
 *  1. ASM over CCB, based on EBS interface
 *  2. Remove Core2 & Core3 & INFRA & SYSTEM asm type
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 *       Apply A style.
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 *     Apply A style.
 *
 * 04 17 2017 kenneth.lin
 * [MOLY00242340] [ULSP] DSP filter enhancement
 *
 *  [Gen93][DHL][ULSP] enable ELT dsp filter
 *
 * 04 07 2017 yu-hsiang.peng
 * [MOLY00224307] [MT6293] General feature change before MP branch create
 * [UMOLYA.TRUNK] add HRT  PS code
 *
 * 01 23 2017 yancy.chien
 * [MOLY00200106] [DHL] Code Refactoring
 *  1. Remove HRT trace entry function
 *  2. Add memcpy marco for buf_des structure
 *
 * 01 06 2017 willie.pan
 * [MOLY00163869] [6293][ULS+] ULSP Source ID to Core/TC ID mapping
 *
 * 01 06 2017 yu-hsiang.peng
 * [MOLY00222943] [MT6293] DHL Seamless Meta Support
 * [UMOLYA.TRUNK] Merge Seamless Meta mode from IT CBr  -DHL
 *
 * 01 03 2017 yu-hsiang.peng
 * [MOLY00210769] [MT6293] MT6292 CCB service migrate to MT6293 and MT6293 ULSP logging on CCB development
 * [UMOLYA.TRUNK] increase inject CMD to 256 bytes
 *
 * 12 20 2016 cynthia.sun
 * [MOLY00173325] [MDL] 93 Integration
 * . VRF memory dump
 *
 * 12 06 2016 cynthia.sun
 * [MOLY00173325] [MDL] 93 Integration
 * . Design new DSP filter struct
 *
 * 12 02 2016 yu-hsiang.peng
 * [MOLY00210769] [MT6293] MT6292 CCB service migrate to MT6293 and MT6293 ULSP logging on CCB development
 * [UMOLYA] Remove Core 2/3 SWLA
 *
 * 11 09 2016 yancy.chien
 * [MOLY00212377] [DHL] Remove stack_timer_struct for SS team request
 *
 * 11 04 2016 cynthia.sun
 * [MOLY00173325] [MDL] 93 Integration
 * . DSP DM/PM memory dump
 *
 * 11 01 2016 yu-hsiang.peng
 * [MOLY00210769] [MT6293] MT6292 CCB service migrate to MT6293 and MT6293 ULSP logging on CCB development
 * [UMOLYA.TRUNK] ULSP on CCB full load logging, normal logging(stage 1)
 *
 * 10 27 2016 jean.tsao
 * [MOLY00171985] [LR11][LR11.MP3][UMOLY] GPS logging location information
 * [UMOLYA] GPS logging location information
 *
 * 10 27 2016 yancy.chien
 * [MOLY00181823] [DHL] UMOLY Migrate to UMOLYA - W16.44 Migration.
 *
 * 09 21 2016 yancy.chien
 * [MOLY00181823] [DHL] UMOLY Migrate to UMOLYA
 *
 * 08 03 2016 yu-hsiang.peng
 * [MOLY00185213] [MT6293] DHL MT6292 SW logging migrate to MT6293 & MT6293 ULSP logging development
 * [UMOLYA.TRUNK] Merge back 93 ULSP 1st connect ELT code (stage 4)
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
 * 05 20 2016 cynthia.sun
 * [MOLY00147391] [MDL] 92 Integration
 * . fix DFE1 mux_id
 *
 * 05 12 2016 yancy.chien
 * [MOLY00179274] [DHL][ASM] Config PMC
 * [DHL][ASM] Config PMC
 *
 * 04 15 2016 eason.lai
 * [MOLY00173976] [6292][DHL] L1/L2 trace integrated with log DMA
 *  logDMA is not enabled yet due to logDMA sperious IRQ is not fixed
 *
 * 04 13 2016 eason.lai
 * [MOLY00173976] [6292][DHL] L1/L2 trace integrated with log DMA
 *  This change haven't enable the log DMA due to log DMA IRQ has
 *                       spurious interrupt.
 *
 * 03 23 2016 hk.yang
 * [MOLY00170465] [UMOLY][DHL] MDM service porting
 * [92] porting MDM.
 *
 * 03 21 2016 eason.lai
 * [MOLY00170160] [6292/Elbrus][DHL] L1trace HRT enhancement
 *  reduce caller codesize overhead
 *
 * 03 14 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  .
 *
 * 02 26 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  .ULS+ for L1 PAE
 *
 * 02 22 2016 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *  add mcu/infra SWTR dump
 *
 * 02 17 2016 eason.lai
 * [MOLY00165104] [MT6292][FPGA][Phone Call][4G TDD][Critical] ELT failed to do memory dump
 *
 *  change the exception RX gpd buffer to 4KB to prevent CLDMA hang
 *
 * 01 12 2016 cynthia.sun
 * [MOLY00147391] [MDL] 92 Integration
 * . merge with SS1 on UMOLY
 *
 * 12 28 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *  92 ASM SWTR/SWLA data path
 *
 * 12 09 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *  update timestamp once 64us tick different with previous time in ps trace
 *
 * 11 30 2015 willie.pan
 * [MOLY00151097] [MDL] MDL for 92 check in
 *
 *  Change for 92 MDL
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
 * 10 23 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *
 *  SMP DHL logging migration
 *
 * 09 22 2015 eason.lai
 * [MOLY00134958] [MT6292] [DHL] logging service migration
 *  single-core modis support based on 91 DHL
 *
 * 09 21 2015 yu-hsiang.peng
 * [MOLY00142553] [DHL] fix build warning for LR11 MP/Trunk
 * [UMOLY.Trunk] Fix build warning(0921)
 *
 * 09 15 2015 eason.lai
 * [MOLY00141933] [DHL] change the bb register memory dump order
 *  move bb reigster to the last region to dump
 *
 * 07 31 2015 eason.lai
 * [MOLY00130157] [TK6291][DHL] smart logging migration
 *  fixed dicard info decoding fail issue
 *
 * 07 28 2015 hk.yang
 * [MOLY00132867] [UMOLY][LR11] dhl monitor service
 *  [UMOLY] dhl frame parser.
 *
 * 07 22 2015 eason.lai
 * [MOLY00130157] [TK6291][DHL] smart logging migration
 *  .
 *
 * 07 20 2015 yu-hsiang.peng
 * [CBR] L1D/NV 2 eason CBR.
 *
 * 07 10 2015 eason.lai
 * merge code
 *
 * 04 26 2015 eason.lai
 * [MOLY00109038] [TK6291E1][pre 1st Call][UMOLY][4G][FDD] There's no assert/fatal error message on "System Trace(L1CORE)" window
 *  1. fixed l1core assert log missing by the potential problem.
 *  2. start to support l1core l1 filer store in NVRAM
 *
 * 04 09 2015 eason.lai
 * [MOLY00105513] [TK6291][DHL] introduce GPD/SPD wrapper
 *       GPD/SPD wrapper and L2copro log dma
 *
 * 04 01 2015 cynthia.sun
 * [MOLY00105635] [TK6291][DHL] L1CORE ASM
 * .
 *
 * 03 23 2015 eason.lai
 * [MOLY00099926] [DHL] inject msg to l1core
 * [DHL] Enable inject ilm / string / ADT handler in L1core
 *
 * 02 03 2015 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 *  Ubin TDD/FDD DBME patch back
 *
 * 12 16 2014 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 *  fixed build error
 *
 * 11 24 2014 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 * FMA global timer
 *
 * 11 14 2014 eason.lai
 * [MOLY00084440] [MT6291][DHL] Patch back UMOLY trunk from MT6291_DEV
 *  first time patch back
 *
 * 09 25 2014 eason.lai
 * [MOLY00073290] [MT6291][DHL] basic logging support for V7FPGA L1S_L1DISABLE
 * checksum support
 *
 * 09 11 2014 eason.lai
 * [MOLY00073290] [TK6291][DHL] basic logging support for V7FPGA L1S_L1DISABLE
 * TK6291 DHL exception handling and memory dump
 *
 * 09 03 2014 eason.lai
 * [MOLY00063896] [TK6291][DHL] UMOLY Check-in
 * fixed LWG l1core build error due to em strcut.
 *
 * 08 28 2014 eason.lai
 * [MOLY00073290] [TK6291][DHL] basic logging support for V7FPGA L1S_L1DISABLE
 *  exception flow handling
 *
 * 08 20 2014 eason.lai
 * [MOLY00073290] [TK6291][DHL] basic logging support for V7FPGA L1S_L1DISABLE
 * Revised comiple option
 *
 * 08 14 2014 ken.liu
 * [MOLY00075310] [UMOLY] L2copro ip header log DMA integration
 * update l2copro log msg id and struct name.
 *
 * 08 13 2014 ken.liu
 * [MOLY00075310] [UMOLY] L2copro ip header log DMA integration
 * DHL header for l2copro log dma.
 *
 * 08 01 2014 eason.lai
 * [MOLY00073290] [TK6291][DHL] basic logging support for V7FPGA L1S_L1DISABLE
 * Fixed modis build error
 *
 * 07 31 2014 eason.lai
 * [MOLY00073290] [TK6291][DHL] basic logging support for V7FPGA L1S_L1DISABLE
 *  should set USB HIF SUPPROT to true
 *
 * 07 15 2014 victor.chan
 * [MOLY00063930] [Cgen] UMOLY DEV Check-in
 *  Add dhl_multiple_db_type, dhl_multiple_db_desc, dhl_multiple_db_major_views and dhl_multiple_db_minor_views enum for Pcore and L1core.
 *
 * 04 28 2014 willie.pan
 * [MOLY00063896] [TK6291][DHL] UMOLY Check-in
 *  .
 *
 * 04 28 2014 willie.pan
 * [MOLY00063896] [TK6291][DHL] UMOLY Check-in
 *  .
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 01 14 2014 ken.liu
 * [MOLY00049431] [MT6290E1][DHL] Reserve MOD_NIL (0) to support trace decoding without database
 * enable new sys trace and dhl header format
 *
 * 01 08 2014 ken.liu
 * [MOLY00052051] [DHL] add support for internal trace access level
 * update access level define names.
 *
 * 01 08 2014 ken.liu
 * [MOLY00052051] [DHL] add support for internal trace access level
 * add access level defines.
 *
 * 12 31 2013 ken.liu
 * [MOLY00052051] [DHL] add support for internal trace access level
 * enable dhl_internal_trace support.
 *
 * 11 26 2013 mojo.lai
 * [MOLY00047331] Support new error detect mechanism BEE
 *  .
 *
 * 11 22 2013 mojo.lai
 * [MOLY00047548] Keep sending l1/l2 log to ring buffer when disconnected
 *  .
 *
 * 11 21 2013 mojo.lai
 * [MOLY00045854] [PS1267 HG+WG] Check-in Gemini HG+WG modification
 *  .
 *
 * 11 15 2013 ken.liu
 * [MOLY00046623] [MT6290E1][DHL] Add filter on/off control for META tool
 * add filter on/off control for META tool.
 *
 * 11 08 2013 ken.liu
 * [MOLY00045664] [MT6290E2][DHL] Add memory type to support register access from tool
 * add default_type mem type for tool access.
 *
 * 10 18 2013 mojo.lai
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 *  .
 *
 * 10 18 2013 mojo.lai
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 *  .
 *
 * 10 18 2013 mojo.lai
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 *  .
 *
 * 09 11 2013 willie.pan
 * [MOLY00037476] [DHL] SP Logging Phase In
 *  .
 *
 * 08 28 2013 mojo.lai
 * [MOLY00031404] Implement DHL connect / disconnect command
 *  .
 *
 * 08 21 2013 mojo.lai
 * [MOLY00034481] Enable DSP mux filter
 *  .
 *
 * 08 15 2013 ken.liu
 * [MOLY00033915] [MT6290E1][DHL] TTY channel wrapper for smart phone logging
 * add read/write API for smart phone logging
 *
 * 08 13 2013 willie.pan
 * [MOLY00032932] [DHL] DHL Port Setting Feature Phase In
 * .
 *
 * 07 26 2013 mojo.lai
 * [MOLY00031404] Implement DHL connect / disconnect command
 * .
 *
 * 07 25 2013 ken.liu
 * [MOLY00031306] [MT6290E1] DHL mux filter
 * check-in dhl mux filter support (disabled by default until next ELT release)
 *
 * 07 05 2013 ken.liu
 * [MOLY00028661] 2/3G handover time support
 * 2/3g handover time support
 *
 * 07 04 2013 willie.pan
 * [MOLY00028571] [DHL] CoreSonic memory dump integration
 * .
 *
 * 07 03 2013 mojo.lai
 * [MOLY00027397] IRDBG 2g dsp logging
 *
 * 06 20 2013 mojo.lai
 * [MOLY00026719] Support read memory in word access and half word access
 * .
 *
 * 06 05 2013 ken.liu
 * [MOLY00024820] [MT6290E1][NAS RTD][LTE/MM][FDD/TDD] Assert at cdcacm_usbhdr.c
 * assign rx gpd after port is opened
 *
 * 06 03 2013 ken.liu
 * [MOLY00024730] DHL multimode engineering mode and air message logging support
 * add DHL partial filter command.
 *
 * 06 03 2013 ken.liu
 * [MOLY00021786] [MT6290 Bring-up]4G coresonic DSP assert memory dump integration
 * sync from MT6290E1_FirstCall.
 *
 * 05 23 2013 mojo.lai
 * [MOLY00009210] DHL
 * rework l2 copro logger
 *
 * 05 22 2013 mojo.lai
 * [MOLY00009210] DHL
 * L2 copro support
 *
 * 05 07 2013 ken.liu
 * [MOLY00021794] [MT6290 Bring-up] DHL support for MT6290M project
 * reduce log ring buffer size to fit memory budget.
 *
 * 04 30 2013 ken.liu
 * [MOLY00012607] MOLY multimode build tst API migration
 * sync dhl_peer_trace and dhl_EM_logger() from stanleyHY's CBr.
 *
 * 04 30 2013 ken.liu
 * [MOLY00021076] [MT6290 Bring-up] DHL flush log uses too much CPU time before entering idle task
 * sync from MT6290E1_FirstCall.
 *
 * 04 12 2013 mojo.lai
 * [MOLY00009210] DHL
 * Fix compile error
 *
 * 04 03 2013 mojo.lai
 * [MOLY00009210] TATAKA merge to MOLY
 * SWTR merge
 *
 * 03 22 2013 ken.liu
 * [MOLY00009212] LTE Multimode merge back to MOLY
 * 1. remove tst_dump_to_file_for_crash dummy wrapper
 * 2. sync FDI L1DMA
 * 3. enable per-byte processing for exception rx
 *
 * 03 20 2013 ken.liu
 * [MOLY00011772] [MT7208][NW-UE SIM][TC 6.2.2.8] ASSERT at m11301.c, 2027
 * Back out changelist 107910
 *
 * 12 20 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * enable uart channel with software flow control.
 *
 * 11 07 2012 ken.liu
 * [MOLY00005322] TATAKA merge to MOLY
 * dhl module check-in.
 ****************************************************************************/

#ifndef _DHL_DEF_H
#define _DHL_DEF_H

#include "dhl_trace.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "svc_sap.h"

#if defined(__EM_MODE__)
#ifndef _EM_STRUCT_H
#include "em_struct.h"
#endif  //#ifndef _EM_STRUCT_H
#endif  //#ifdef __EM_MODE__

#include "dcl.h"

#include "sysconf_statistics.h"

#if !defined (L1_SIM) || defined (__UE_SIMULATOR__)
#include "nvram_interface.h"
//#include "nvram_data_items.h"
#include "nvram_enums.h"
#include "nvram_struct.h"
#endif //#if !defined (L1_SIM) || defined (__UE_SIMULATOR__)

#include "tst.h"

//Willie:
#define __DHL_TEST_USB_PORT__ uart_port_usb5

//#define DHL_FRAME_LEN_WORD_ALIGN

#define DHL_NVRAM_ACCESS_EXCEPTION 1
#define DHL_NVRAM_ACCESS_STATISTIC 2
#define DHL_NVRAM_ACCESS_OTHERS 3

#define DHL_TIMER_ID_SYNC 0
#define TST_MODULE_FILTER_LEN       ((END_OF_MOD_ID+8)/8)
#define TST_SAP_FILTER_LEN          (LAST_SAP_CODE+1)
#define TST_TRACE_FILTER_LEN        (2*(END_OF_MOD_ID+1))
#define TST_TOTAL_FILTER_LEN    (TST_MODULE_FILTER_LEN+ TST_SAP_FILTER_LEN+ TST_TRACE_FILTER_LEN)


extern kal_eventgrpid dhl_event_group;
#define DHL_EVENT_DATA_READY              (0x1)
#define DHL_EVENT_PORT_NOT_USING          (0x2)
#define DHL_EVENT_TX_IOR_READY            (0x4)
#define DHL_EVENT_TX_RESUME               (0x8)
#define DHL_EVENT_RESUME_READER           (0x10)
#define DHL_EVENT_TOOL_CONNECT            (0x20)
#define DHL_EVENT_READY_TO_WRITE          (0x40)
#define DHL_EVENT_TX_BUF_RELEASED         (0x200)
#define DHL_EVENT_MON_TX_BUF_RELEASED     (0x400)
#define DHL_EVENT_MON_DATA_READY          (0x800)
#define DHL_EVENT_MON_TX_IOR_READY        (0x1000)
#define DHL_EVENT_MON_TOOL_CONNECT        (0x2000)
#define DHL_EVENT_TX_ALL_DONE             (0x4000)
#define DHL_EVENT_CCB_PAGE_RELEASE        (0x8000)

extern kal_eventgrpid dhl_hd_event_group;
#define DHL_HD_EVENT_L1DMA_BUFFER_READY     (0x1)
#define DHL_HD_EVENT_ASM_MCU_BUFFER_READY   (0x2)
#define DHL_HD_EVENT_IRDBG_BUFFER_READY     (0x4)
#define DHL_HD_EVENT_TOOL_CONNECT           (0x8)
#define DHL_HD_EVENT_ASM_INFRA_BUFFER_READY (0x10)
#define DHL_HD_EVENT_ULSP_MCU_BUFFER_READY (0x20)
#define DHL_HD_EVENT_ULSP_DSP_BUFFER_READY (0x40)
#define DHL_HD_EVENT_SEQUENCE_TRACE_TEST (0x200)
#define DHL_HD_EVENT_HRT_PS_FLUSH (0x400)
#define DHL_HD_EVENT_STOP_LOG2BUFFER (0x800)

//Seamless META
#define META_EVENT_TOOL_CONNECT             (0x1)
#define META_EVENT_DATA_READY               (0x2)

// L2 Coprocessor data ready event
#define DHL_HD_EVENT_L2COPRO_DATA_READY     (0x20)

#define ASSERT_COMMAND_BUFFER_LENGTH (4096 * 2)

#ifdef IN_MEMORY_EXCEPTION_BUFFER
#define DHL_EXCEPTION_BUFFER_SIZE (TST_RING_BUFFER_SIZE * 2)
#endif

#define  INJECT_STRING_TO_MODULE_MAX_LENGTH  (256)
#define  INJECT_AT_COMMAND_MAX_LENGTH        (256)

#define DHL_RTOS_TIME_RESOLUTION_TICK (0)

#ifdef __MTK_TARGET__
#define  MAX_TST_RECEIVE_BUFFER_LENGTH       256
#else
#define  MAX_TST_RECEIVE_BUFFER_LENGTH       (64*1024-1)
#endif  /* UNIT_TEST */


extern kal_bool  tst_is_L1Trc_open;
extern kal_bool  tst_is_PsTrc_open;
extern kal_bool  tst_is_l1_writing_uart;/*protect UART Port from closing while writing*/
extern kal_bool  tst_is_ps_writing_uart;/*protect UART Port from closing while writing*/

/*for close/open UART port in run time*/
extern kal_bool tst_is_uart_open;
extern kal_bool tst_is_writing_uart;

#if defined (UNIT_TEST) || defined (__UE_SIMULATOR__)
#define LEGACY_TX
#endif

//extern kal_uint8  tst_ring_buffer[];
//extern kal_uint32 tst_ptr_buffer_start;
//extern kal_uint32 tst_ptr_buffer_end;
#if !defined(LEGACY_TX) && !defined(__DHL_ON_WR8_PLATFORM__)
extern kal_uint32 tst_ptr_buffer_sent;
#endif

#ifdef IN_MEMORY_EXCEPTION_BUFFER
extern kal_uint8 dhl_exception_buffer[];
extern kal_uint32 dhl_exception_buffer_pos;
#endif

//the following is dummy tst enums/structs to bypass cgen database check
typedef enum
{
    TST_NULL_COMMAND
} tst_command_type;

typedef kal_uint8 tst_null_command_struct;

typedef struct
{
    tst_command_type  command_type;
    kal_uint16        cmd_len;
} tst_command_header_struct;

typedef struct
{
    kal_uint32     dummy;
} tst_log_prim_header_struct;

typedef struct
{
    kal_uint32     dummy;
} tst_index_trace_header_struct;

typedef struct
{
    kal_uint32     dummy;
} tst_prompt_trace_header_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   index;
    kal_uint8   string[INJECT_STRING_TO_MODULE_MAX_LENGTH];
} tst_inject_string_struct;

typedef tst_inject_string_struct dhl_inject_string_struct;

#define TST_MSG_LOG_SAP_ENABLE 0x7

// Remove stack_timer requirement from SS, contact: HW Jheng
//typedef stack_timer_struct timer_expiry_struct;


#define MAX_RAW_TRACE_SIZE (128)
#define MAX_TRACE_SIZE (128)
#define EX_MAX_TRACE_SIZE (128)

#define MAX_HEADER_LEN (8)
#define DHL_CHECKSUM_FRAME_SIZE  (4)

#if defined(DHL_V_0_5_1) || defined(DHL_V_0_7_1)
#define DHL_TYPE_CHECKSUM_FLAG      (0x10)
#define DHL_TYPE_USER_FLAG          (0x20)
#define DHL_TYPE_EXT_FLAG           (0x08)
#define DHL_TYPE_MASK               (0x07)
#else
#define DHL_FLAG_EXTRA              (0x1)
#define DHL_TX_FLAG_CHECKSUM              (0x20)
#define DHL_RX_FLAG_CHECKSUM           (0x40)
#endif

#define DHL_UNKNOWN_TYPE            (0xFF)

#define __TST_META_MODE_TRACE_ENABLE__ // for MOD_FT

typedef enum
{
#if defined (DHL_V_0_5_1)
    V0_5_1_W1118
#elif defined(DHL_V_0_7_1)
    V0_7_1_W1232
#else
    V0_7_2_W1346
#endif
} dhl_protocol_version;


#define DHL_FLAG_CORE_ID_MASK (0x7)
#define DHL_FLAG_GET_CORE_ID(_f) (((_f) >> 2) & DHL_FLAG_CORE_ID_MASK)
#define DHL_FLAG_SET_CORE_ID(_des, _f) (_des) = ((_des) | (((_f) & DHL_FLAG_CORE_ID_MASK) << 2))

typedef enum
{
    DHL_CORE_ID_MCU_MASTER = 0,
    DHL_CORE_ID_MCU_SLAVE_1,
    DHL_CORE_ID_MCU_SLAVE_2,
    DHL_CORE_ID_MCU_SLAVE_3,
    DHL_CORE_ID_MCU_SLAVE_4,
    DHL_CORE_ID_MCU_SLAVE_5,
    DHL_CORE_ID_MCU_SLAVE_6,
    DHL_CORE_ID_MCU_SLAVE_7,
} dhl_core_id_enum;

/**
 *   Enable checksum
 *   define here for feeding into codegen when customer release / subsidiary
 **/

#define __DHL_RX_CHECKSUM__
#define __DHL_HEADER_CHECKSUM__
typedef enum
{
#if !defined(__DHL_RX_CHECKSUM__) && !defined(__DHL_HEADER_CHECKSUM__)
    NO_CHECKSUM,
#else
#if defined(__DHL_HEADER_CHECKSUM__)
    DHL_HEADER_CHECKSUM,
#endif // __DHL_HEADER_CHECKSUM__
#if defined(__DHL_RX_CHECKSUM__)
    DHL_RX_CHECKSUM,
#endif // __DHL_RX_CHECKSUM__
#endif
    NO_HEADER_COMPRESSION,

#if defined(L1_CATCHER)
    MULTI_CORE_SMP_SUPPORT,
#endif

#if defined (L1_SIM) && !defined (__UE_SIMULATOR__)
    DHL_MUX_ENABLE,
#endif /* defined (L1_SIM) && !defined (__UE_SIMULATOR__) */
    SYSTEM_MONITOR_UMOLYA,
    USB_MEMORY_DUMP_MODE_AUTO,
    /* VPE info in check sum field */
    DISPLAY_EXTENSION_INFO,
#ifdef __ICD_LOGGING_SUPPORT__
    ICD_LOGGING,
#endif
} dhl_protocol_info;

typedef enum
{
    DHL_PRIMITIVE = 0,
    DHL_INDEX_TRACE = 1,
    DHL_RAW_BYTE_TRACE = 2,
    DHL_RAW_STRING_TRACE = 3,
    DHL_DISCARD_INFO = 4,
    DHL_TIME_INFO = 5,
    DHL_RLE_PRIMITIVE = 6,
    DHL_PRIMITIVE_ADT = 7,
    DHL_L1_TRACE = 8,
    DHL_META_CNF_PRIMITIVE = 9,
    DHL_L2_TRACE = 10,
    
    DHL_ICD_TUNNELING = 0xE0,    // Command & log share same ID, so we need to avoid it collides with command_type

    //cannot use 0xFF, since it means unknown type
} dhl_type;
#define DHL_TYPE_NUM 11

#if defined (DHL_V_0_5_1)
typedef struct
{
    kal_uint16 type;
    kal_uint16 len;
} dhl_header_struct;
#else
typedef struct
{
    kal_uint8 flag;
    kal_uint8 type;
    kal_uint16 len;
} dhl_header_struct;
#endif

typedef struct
{
    kal_uint8 type;
    kal_uint8 len;
} dhl_compact_header_struct;

typedef struct
{
    kal_uint8 type;
} dhl_ultra_compact_header_struct;

typedef struct
{
    kal_uint32          msg_index;
    trace_class_enum    trace_class;
    kal_uint8           access_level;
#if (defined(__GEMINI__) || defined(__SGLTE__))
    module_type module_id;
#endif
} dhl_index_trace_header_struct;

typedef struct
{
    kal_uint16 key_len;
    kal_uint16 data_len;
} dhl_index_trace_ext_header_struct;

typedef struct
{
    kal_uint32          msg_index;
    trace_class_enum    trace_class;
#if (defined(__GEMINI__) || defined(__SGLTE__))
    module_type module_id;
#endif
} dhl_raw_byte_trace_header_struct;

typedef struct
{
    module_type         module_id;
    trace_class_enum    trace_class;
} dhl_raw_string_trace_header_struct;

typedef struct
{
    module_type src_mod_id;
    module_type dest_mod_id;
    sap_type    sap_id;
    msg_type    msg_id;
    kal_uint16  local_len;
    kal_uint16  peer_len;
    kal_uint32  local_addr;
    kal_uint32  peer_addr;
} dhl_primitive_header_struct;

typedef dhl_primitive_header_struct dhl_rle_primitive_header_struct;

typedef struct
{
    module_type src_mod_id;
    module_type dest_mod_id;
    sap_type    sap_id;
    msg_type    msg_id;
    kal_uint16  local_len;
    kal_uint16  peer_len;
    kal_uint32  local_addr;
    kal_uint32  peer_addr;
    kal_uint8   local_access_type;
    kal_uint8   peer_access_type;
} dhl_ex_primitive_header_struct;

typedef struct
{
    kal_uint32 src_mod_id;
    kal_uint32 dest_mod_id;
    kal_uint32 sap_id;
    kal_uint32 msg_id;
    kal_uint16 local_len;
    kal_uint16 peer_len;
} dhl_meta_cnf_primitive_header_struct;

typedef struct
{
#if defined (DHL_V_0_5_1)
    kal_uint16 count;
#else
    kal_uint8 count;
#endif
} dhl_discard_info_header_struct;

#define DISCARD_INFO_TYPE_UNKNOWN       (0x0)
#define DISCARD_INFO_TYPE_PS_TRACE      (0x1)
#define DISCARD_INFO_TYPE_PRIMITIVE     (0x2)
#define DISCARD_INFO_TYPE_TIMESTAMP     (0x3)
#define DISCARD_INFO_TYPE_L1_TRACE      (0x4)
#define DISCARD_INFO_TYPE_L1_BUFFER     (0x5)
#define DISCARD_INFO_TYPE_L2_TRACE      (0x6)
#define DISCARD_INFO_TYPE_L2_BUFFER     (0x7)

typedef enum
{
    PS_TRACE = 1,
    PRIMITIVE = 2,
    TIMESTAMP = 3,
    L1_TRACE = 4,
    L1_BUFFER = 5,
    L2_TRACE = 6,
    L2_BUFFER = 7,
} dhl_discard_info_type;

typedef struct
{
    kal_uint32 count;
} dhl_discard_info_type_ps_trace;

typedef struct
{
    kal_uint32 count;
} dhl_discard_info_type_primitive;

typedef struct
{
    kal_uint16 count;
} dhl_discard_info_type_timestamp;

typedef struct
{
    kal_uint8 count;
} dhl_discard_info_type_l1_trace;

typedef struct
{
    kal_uint16 count;
} dhl_discard_info_type_l1_buffer;

typedef struct
{
    kal_uint8 count;
} dhl_discard_info_type_l2_trace;

typedef struct
{
    kal_uint16 count;
} dhl_discard_info_type_l2_buffer;

typedef struct
{
#if defined (DHL_V_0_5_1)
    kal_uint16 count;
#else
    kal_uint8 count;
#endif
} dhl_time_info_header_struct;

#define TIME_INFO_TYPE_RTOS_TIMESTAMP   (0x1)
#define TIME_INFO_TYPE_3G_FRAME         (0x2)
#define TIME_INFO_TYPE_3G_SFN           (0x3)

typedef enum
{
    RTOS_TIME = 1,
} dhl_time_info_type;

typedef struct
{
    kal_uint32 timestamp;
} dhl_time_info_type_rtos_time;

typedef struct
{
    kal_uint16 count;
} dhl_l1_trace_header_struct;

#if defined(DHL_FRAME_LEN_WORD_ALIGN)
#define RUP(_v) ((_v + 3) / 4 * 4)
#else
#define RUP(_v) (_v)
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#define dhl_ex_trace_impl(_t, _u, _msg, _mod, _argv, _arg_info) \
    dhl_ex_internal_trace_impl(_t, _u, DHL_ACCESS_LEVEL_1_ALL_USER, _msg, _mod, _argv, _arg_info)
extern void dhl_ex_internal_trace_impl(trace_class_enum trc_class, kal_uint32 user_flag, kal_uint8 access_level, kal_uint32 msg_index, kal_uint32 module_id, const char *arg_type, va_list argument_info);

extern void dhl_ex_print_impl(trace_class_enum trc_class, kal_uint32 user_flag, module_type mod_id, const char *fmt, va_list argument_info);

/* primitive */
extern void dhl_log_primitive(ilm_struct *ilm);
extern void dhl_log_primitive_without_filter_check(ilm_struct *ilm);
extern void dhl_FT_log_primitive(ilm_struct *ilm);
//extern void dhl_convert_ilm_header(ilm_struct *ilm, dhl_primitive_header_struct *hdr);
#define dhl_convert_ilm_header(_ilm, _hdr) \
    do { \
        (_hdr)->local_len = 0; \
        (_hdr)->peer_len  = 0; \
        if (!msg_is_inline((_ilm))) { \
            if ((_ilm)->local_para_ptr != NULL) { \
                (_hdr)->local_len = (_ilm)->local_para_ptr->msg_len; \
            } \
            if ((_ilm)->peer_buff_ptr != NULL) { \
                (_hdr)->peer_len = sizeof(peer_buff_struct) + \
                                   (_ilm)->peer_buff_ptr->pdu_len + \
                                   (_ilm)->peer_buff_ptr->free_header_space + \
                                   (_ilm)->peer_buff_ptr->free_tail_space; \
            } \
        } \
        (_hdr)->src_mod_id  = (_ilm)->src_mod_id; \
        (_hdr)->dest_mod_id = (_ilm)->dest_mod_id; \
        (_hdr)->sap_id      = (_ilm)->sap_id; \
        (_hdr)->msg_id      = (_ilm)->msg_id; \
        (_hdr)->local_addr  = (kal_uint32)(_ilm)->local_para_ptr; \
        (_hdr)->peer_addr   = (kal_uint32)(_ilm)->peer_buff_ptr; \
    } while(0)


typedef struct
{
    kal_uint8 access_type;
    kal_int32 len;
    kal_uint8 *data;
} buf_des;

/*
 * Macro: DHL_COPY_BY_BUF_DES
 * ----------------------------
 *   Memcpy to dest by buf_des struct, then increase the write pointer
 *
 *   PARAMETERS
 *      buf_write_ptr   : kal_uint8*
 *      body            : buf_des[]
 *      body_count      : kal_uint32
 *   RETURN: NONE
 */

#define DHL_COPY_BY_BUF_DES(buf_write_ptr, body, body_count) \
    do { \
        kal_uint32 i; \
        for (i = 0; i < body_count; i++) { \
            memcpy(buf_write_ptr, body[i].data, body[i].len); \
            buf_write_ptr += body[i].len; \
        } \
    } while(0)

extern void dhl_log_primitive_impl(kal_uint32 user_flag, dhl_primitive_header_struct *hdr, buf_des *des, kal_int32 count, kal_bool compressed);
extern void dhl_print_primitive(kal_uint32 user_flag, dhl_primitive_header_struct *hdr);
extern void dhl_print_primitive_impl(
    kal_uint32 user_flag,
    dhl_primitive_header_struct *hdr,
    kal_uint8 *local_data,
    kal_int32 local_len,
    kal_uint8 *peer_data,
    kal_int32 peer_len);
extern void dhl_ex_print_primitive(kal_uint32 user_flag, dhl_ex_primitive_header_struct *hdr);

/* layer-1 trace group */
typedef enum
{
    UMTS_3G_GEMINI_TIME = 0,
    UMTS_3G_TIME,
    UMTS_2G_GEMINI_TIME,
    UMTS_2G_TIME,
    UMTS_2G_HANDOVER_TIME,
    UMTS_3G_HANDOVER_TIME,
    LTE_4G_TIME = 6,
    LTE_4G_TIME_2 = 7,
    LTE_4G_L2_TIME = 8,
} dhl_l1_time_trace_type;

typedef enum
{
    L1_TRACE_LOST_COUNT,
    L1_BUFFER_LOST_COUNT,
    L2_TRACE_LOST_COUNT,
    L2_BUFFER_LOST_COUNT,
} dhl_l1_lost_count_type;



extern void dhl_ex_log_l1_trace_group(kal_uint32 user_flag, kal_uint16 count, kal_uint8 *buf, kal_uint32 buf_len);
extern void dhl_ex_log_l2_trace_group(kal_uint32 user_flag, kal_uint16 count, kal_uint8 *buf, kal_uint32 buf_len);
extern void dhl_ex_log_l1_lost_count(dhl_l1_lost_count_type type, kal_uint8 count);

#include "adt.h"

/* ADT logging */
extern void dhl_log_primitive_with_adt(ilm_struct *ilm_ptr, translator_adt_enc_callback_t translator_cb, kal_bool filter);

/* ADT inject for UT */
typedef void (*translator_adt_dec_callback_t)(const ilm_struct *ilm_adt_ptr, ilm_struct **ilm_ptr);
kal_bool register_translator_adt_decoder(msg_type msg_id, translator_adt_dec_callback_t cb);
translator_adt_dec_callback_t get_adt_decoder(msg_type msg_id);
kal_bool register_translator_adt_encoder(msg_type msg_id, translator_adt_enc_callback_t translator_cb);
translator_adt_enc_callback_t get_adt_encoder(msg_type msg_id);

/* control */
extern void dhl_sync();
extern void dhl_time();

#ifdef UNIT_TEST
void dhl_write_file(kal_bool outgoing, kal_uint8 *data, kal_int32 len);
#endif

#define SYNC_PATTERN_SIZE (4)

typedef enum
{
    DHL_CMD_NULL = 0,
    DHL_CMD_META_REQ_PRIMITIVE = 1,
    DHL_CMD_CHECK_DATABASE_SIGNATURE = 2,
    DHL_CMD_MD_MONITOR_CMD = 3,
    DHL_CMD_3RD_PARTY_TOOL_CMD = 4,

    /* Do NOT change the order of the above command(s) */
    DHL_CMD_SET_PRIM_MOD_FILTER,
    DHL_CMD_SET_PRIM_SAP_FILTER,
    DHL_CMD_SET_TRAP_FILTER,
    DHL_CMD_SET_PS_TRC_FILTER,
    DHL_CMD_SET_L1_TRC_FILTER,
    DHL_CMD_READ_GLOBAL_VARIABLE,
    DHL_CMD_WRITE_GLOBAL_VARIABLE,
    DHL_CMD_REBOOT_TARGET,
    DHL_CMD_INJECT_ILM,
    DHL_CMD_REDIRECT,
    DHL_CMD_FT_MODE_CONFIG,
    DHL_CMD_NVRAM,
    DHL_CMD_READ_STACK_STATISTICS,
    DHL_CMD_FILE_TRANSFER,
    DHL_CMD_FILE_SAVE,
    DHL_CMD_READ_MEMORY_ADDR,
    DHL_CMD_QUERY_MEMORY_RANGE,
    DHL_CMD_USB_MEMORY_DUMP_START,
    DHL_CMD_WRITE_MEMORY,
    DHL_CMD_QUERY_CTRL_BUF_MONITOR_DATA,
    DHL_CMD_QUERY_FLC_BUF_MONITOR_DATA,
    DHL_CMD_FORCE_ASSERT,
    DHL_CMD_INJECT_ILM_ADT,
    DHL_CMD_MSG_BKPT,
    DHL_CMD_INJECT_STRING_TO_MODULE,
    DHL_CMD_INJECT_AT_CMD,
    DHL_CMD_SIM_FILE_INFO_REQ,
    DHL_CMD_SIM_READ_REQ,
    DHL_CMD_SIM_WRITE_REQ,
    DHL_CMD_SWLA_EMI_MONITOR_MASTER_SELECT,
    DHL_CMD_VIRTUAL_CHANNEL,
    DHL_CMD_EM_MODE_CONFIG,
    DHL_CMD_SET_TRAP_MSG,
    DHL_CMD_UBDB,
    DHL_CMD_REBOOT_FOR_MMI_AUTO_TEST,
    DHL_CMD_SET_PARTIAL_PRIM_MOD_FILTER,
    DHL_CMD_SET_PARTIAL_PRIM_SAP_FILTER,
    DHL_CMD_SET_PARTIAL_PS_TRC_FILTER,
    DHL_CMD_SET_PARTIAL_L1_TRC_FILTER,
    DHL_CMD_SET_2G_DSP_FILTER,
    DHL_CMD_ELT_CONNECT,
    DHL_CMD_ELT_DISCONNECT,
    DHL_CMD_LOOP_BACK,
    DHL_CMD_CUSTOM_READ_MEMORY,
    DHL_CMD_CUSTOM_WRITE_MEMORY,
    DHL_CMD_MON_MODE_START,
    /* SWLA/SWTR MESSAGE ID -Start- */
    DHL_CMD_SWLA_QUERY_HEADER,
    DHL_CMD_ASM_QUERY_HEADER,
    /* SWLA/SWTR MESSAGE ID -End- */
    DHL_CMD_ICD_TUNNELING = DHL_ICD_TUNNELING,
} dhl_command_type;

typedef dhl_header_struct dhl_cmd_header_struct;

typedef struct
{
    LOCAL_PARA_HDR
    dhl_cmd_header_struct hdr;
    kal_uint32 cksum;
    kal_uint8 extra_len;
    kal_uint8 *extra;
    kal_uint16 recv_len;
    kal_uint8 *value;
} dhl_cmd_frame_buffer_struct;

typedef kal_uint8 dhl_cmd_null_struct;

typedef struct
{
    kal_uint8   mod_filter[TST_MODULE_FILTER_LEN];
} dhl_cmd_set_prim_mod_filter_struct;

typedef struct
{
    kal_uint8   sap_filter[TST_SAP_FILTER_LEN];
} dhl_cmd_set_prim_sap_filter_struct;

typedef struct
{
    kal_uint16  sap_id;
    kal_uint8   is_trap;
} dhl_cmd_set_trap_filter_struct;

typedef struct
{
    kal_uint16  sap_filter[END_OF_MOD_ID + 1];
} dhl_cmd_set_ps_trc_filter_struct;

typedef dhl_cmd_set_ps_trc_filter_struct dhl_test_struct;

typedef kal_uint8 dhl_cmd_set_l1_trc_filter_struct;

typedef struct
{
    kal_uint32  gv_name_len;
    kal_char    data[1];
} dhl_cmd_read_global_variable_struct;

typedef kal_uint8 dhl_ind_read_variable_return_struct;

typedef struct
{
    kal_uint16      size1;
    kal_uint16      size2;
} dhl_cmd_write_global_variable_struct;

typedef kal_uint8 dhl_cmd_reboot_target_struct;

typedef kal_uint8 dhl_cmd_reboot_for_mmi_auto_test_struct;

typedef struct
{
    kal_uint16      no_peer_buff_ptr;
    kal_uint16      peer_buff_ptr_size;
    kal_uint8       *peer_buff_ptr;
    kal_uint8       ref_count;
    kal_uint8       header_len;
    kal_uint8       tail_len;
    kal_uint8       unused1;
} asn_peer_buff_struct;

typedef struct
{
    kal_uint8       ref_count;
    kal_uint16      no_local_params_ptr;
    kal_uint16      local_params_ptr_size;
    kal_uint8       *local_params_ptr;
} asn_local_para_struct;

typedef struct
{
    module_type     src_mod_id;
    module_type     dest_mod_id;
    sap_type        sap_id;
    msg_type        msg_id;
    asn_local_para_struct   local_params;
    asn_peer_buff_struct    peer_buff;
} ilmessage;

typedef kal_uint8 dhl_cmd_inject_ilm_struct;

typedef struct
{
    kal_uint32 src_mod_id;
    kal_uint32 dest_mod_id;
    kal_uint32 sap_id;
    kal_uint32 msg_id;
    kal_uint16 local_len;
    kal_uint16 peer_len;
} dhl_cmd_meta_req_primitive_struct;

typedef struct
{
    kal_uint8   virtual_channel_id;
    kal_uint8   pData[1];
} dhl_cmd_redirect_struct;

typedef struct
{
    kal_uint8   enable;
} dhl_cmd_ft_mode_config_struct;

typedef enum
{
    NVRAM_READ,
    NVRAM_RESET,
    NVRAM_WRITE,
    NVRAM_RESET_FLAG
    // reset stack stats status in NVRAM_EF_SYS_STATISTICS_LID
} nvram_actions;

typedef struct
{
    LOCAL_PARA_HDR
    nvram_actions act;
    kal_uint32  file_id;
} dhl_cmd_nvram_struct;

typedef struct
{
    LOCAL_PARA_HDR
} dhl_cmd_read_stack_statistics_struct;


typedef struct
{
    LOCAL_PARA_HDR
} dhl_cmd_read_stack_statistics_slave_struct ;

typedef struct
{
    LOCAL_PARA_HDR
    module_type     src_mod_id;
    module_type     dest_mod_id;
    sap_type          sap_id;
} dhl_slave2master_print_primitive_struct ;

typedef stack_statistics_struct dhl_ind_stack_statistics_struct;
typedef stack_statistics_struct dhl_ind_stack_statistics_slave_struct;

#ifdef L1_SIM
typedef kal_uint8 dhl_ind_nvram_read_cnf_struct;
typedef kal_uint8 dhl_ind_nvram_reset_cnf_struct;
#else
typedef nvram_read_cnf_struct dhl_ind_nvram_read_cnf_struct;
typedef nvram_reset_cnf_struct dhl_ind_nvram_reset_cnf_struct;
#endif

typedef struct
{
    kal_uint32 HISR_pair_num;
    kal_char HISR_Name[KAL_MAX_NUM_HISRS * STACK_STATS_HISR_MAX_NAME];
} dhl_HISR_name_struct;

typedef struct
{
    stack_statistics_struct statistic;
    dhl_HISR_name_struct hisr_name_struct;
} dhl_nvram_statistics_struct;

typedef dhl_nvram_statistics_struct tst_stack_statistics_struct;

typedef struct
{
    kal_uint32  token;
    kal_uint32  start_address; //if 0xFFFFFFFF => to delete the file
    kal_uint32  buf_length;
    kal_uint8   buf[1]; // full path
} dhl_cmd_file_transfer_struct;

typedef struct
{
    kal_uint32  time_stamp;
    kal_uint32  token;
    kal_uint32  start_address;//0xFFFFFFFF , to delete the file
    kal_uint32  path_length;
    kal_uint32  data_length; //0: end-of-file or file deleted
} dhl_ind_file_transfer_report_struct;

typedef enum
{
    DHL_FS_DELETE_FILE = -1,
    DHL_FS_ALWAYS_CREATE,
    DHL_FS_APPEND_END,
    DHL_FS_SEEK_AND_APPEND
} dhl_file_save_action_t;

typedef struct
{
    kal_uint32 token;
    dhl_file_save_action_t action;  //0: create, 1: append to the end, 2. open and append the seek pos, 0xFFFFFFFF: delete
    kal_int32 seek_pos;
    kal_uint32 data_len;  //the total length of data[1] array
    kal_uint32 content_offset;  //the offset of file content start in the data[1] array
    kal_uint8 data[1];  //file path name and file content segment
} dhl_cmd_file_save_struct;

typedef struct
{
    kal_uint32 token;
    kal_uint32 action;  //0: create, 1: append to the end, 2. open and append the seek pos, 0xFFFFFFFF: delete
    kal_uint32 fill_data_len;
} dhl_ind_file_save_report_struct;

typedef enum
{
    DHL_READ_MEMORY_ACCESS_TYPE_NOT_SPECIFIED = 0,
    DHL_READ_MEMORY_ACCESS_TYPE_BYTE = 1,
    DHL_READ_MEMORY_ACCESS_TYPE_HALF_WORD = 2,
    DHL_READ_MEMORY_ACCESS_TYPE_WORD = 4
} dhl_read_memory_access_type;

typedef struct
{
    kal_uint8   token;
    kal_uint8   reserved;
    kal_uint16  chunk_size;
    void        *address;
    kal_uint32  length;
    kal_uint32  mem_type;
    dhl_read_memory_access_type  access_type;
} dhl_cmd_read_memory_addr_struct;

typedef struct
{
    kal_uint32 mem_type;
} dhl_cmd_usb_memory_dump_start_struct;

typedef struct
{
    kal_uint8   token;
    kal_uint8   encoded; //0 for not encoded, 1 for encoded with RLE
    const void  *address;
    kal_uint32  length;
    kal_uint32 mem_type;
    dhl_read_memory_access_type access_type;
} dhl_ind_read_memory_report_struct;

// redefine structure for ELT decode MSG_ID_DHL_AUTO_MEMORY_DUMP_IN_ILM.
typedef dhl_ind_read_memory_report_struct dhl_auto_memory_dump_in_ilm_struct;

typedef kal_uint8 dhl_cmd_query_memory_range_struct;

typedef struct
{
    kal_uint32 mem_type;
} dhl_start_dump_memory_type_struct;

typedef struct
{
    kal_uint32 mem_type;
} dhl_end_dump_memory_type_struct;

typedef struct
{
    kal_uint32 mem_type_num;
    kal_uint8 token;
    kal_bool last;
} dhl_ind_query_memory_range_struct;

typedef struct
{
    void        *address;
    kal_uint32  length;
    kal_uint8   data[1];
} dhl_cmd_write_memory_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  token;
} dhl_cmd_query_ctrl_buf_monitor_data_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32  token;
} dhl_cmd_query_flc_buf_monitor_data_struct;

typedef struct
{
    kal_uint32  token;
    kal_uint32  ack_type; //0: ctrl buffer, 1: flc buffer
} dhl_ind_query_buf_monitor_report_struct;

typedef enum
{
    MSG_BKPT_SET = 0,
    MSG_BKPT_CLR,
    MSG_BKPT_RESUME,
    MSG_BKPT_CLR_ALL,
    MSG_BKPT_CONFIG_MODE,
} dhl_msg_bkpt_action;

typedef enum
{
    MSG_BKPT_CONFIG_SENDER_HOLD = 0,
    MSG_BKPT_CONFIG_RECEIVER_HOLD,
    MSG_BKPT_CONFIG_SENDER_BREAK,
    MSG_BKPT_CONFIG_RECEIVER_BREAK,
    MSG_BKPT_CONFIG_BUFFER,
    MSG_BKPT_CONFIG_SINGLE,
} dhl_msg_bkpt_config;

typedef struct _dhl_cmd_msg_bkpt
{
    dhl_msg_bkpt_config config;
    module_type     src_mod_id;
    module_type     dest_mod_id;
    msg_type        msg_id;
    struct _dhl_cmd_msg_bkpt *next;
} dhl_cmd_msg_bkpt;

typedef struct
{
    LOCAL_PARA_HDR
    dhl_msg_bkpt_action action;
    dhl_msg_bkpt_config config;
    module_type     src_mod_id;
    module_type     dest_mod_id;
    msg_type        msg_id;
} dhl_cmd_msg_bkpt_struct;

typedef enum
{
    MSG_BREAK_SENDER_HOLD = 0,
    MSG_BREAK_RECEIVER_HOLD,
    MSG_BREAK_SENDER_BREAK,
    MSG_BREAK_RECEIVER_BREAK,
    MSG_BREAK_SINGLE_STEP,
} dhl_msg_break_type;

typedef struct
{
    LOCAL_PARA_HDR
    dhl_msg_break_type type;
    module_type src_mod_id;
    module_type dest_mod_id;
    msg_type msg_id;
} dhl_dbg_msg_break_struct;

typedef dhl_dbg_msg_break_struct dhldbg_msg_break_struct;

typedef struct
{
    LOCAL_PARA_HDR
    module_type dest_mod;
    kal_uint8 index;
    kal_uint8 string[INJECT_STRING_TO_MODULE_MAX_LENGTH];
} dhl_cmd_inject_string_to_module_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 atcmd[INJECT_AT_COMMAND_MAX_LENGTH];
} dhl_cmd_inject_at_cmd_struct;

typedef struct
{
    kal_uint32 sim_num;
    kal_uint16 file_idx;
    kal_uint8 file_path[6];
} dhl_cmd_sim_file_info_req_struct;

typedef struct
{
    kal_uint32 sim_num;
    kal_uint16 file_idx;
    kal_uint16 para;
    kal_uint16 length;
    kal_uint8 file_path[6];
} dhl_cmd_sim_read_req_struct;

typedef struct
{
    kal_uint32 sim_num;
    kal_uint16 file_idx;
    kal_uint16 para;
    kal_uint8 data[260];
    kal_uint16 length;
    kal_uint8 file_path[6];
} dhl_cmd_sim_write_req_struct;

typedef struct
{
    kal_uint32 token;
    dhl_command_type ack_cmd_type;
    kal_uint32 return_code;
    kal_uint32 is_cmd_msg;
    msg_type ack_cmd_msg_id;
} dhl_ind_general_query_cmd_ack_struct;

typedef kal_uint8 dhl_cmd_swla_legacy_query_header_struct;

/**
 * @brief: SWLA memory dump mode, header query command
 * @parameters:
 *      dhl_memory_type : please reference E_DHL_SWLA_DUMP_FOR_ELT
 **/
typedef struct
{
    kal_uint32 dhl_memory_type;
} dhl_cmd_swla_query_header_struct;

/**
 * @brief: SWLA memory dump mode, header query command response
 * @parameters:
 *      dhl_memory_type : response the same vaule with ELT command to be the token
 *      swla_header_len : the length of swla header in the peer buffer
 **/
typedef struct
{
    kal_uint32 dhl_memory_type;
    kal_uint32 swla_header_len;
} dhl_ind_swla_query_header_report_struct;

/**
 * @brief: ASM SWLA/SWTR streaming mode, header query command
 * @parameters:
 *      dhl_mux_id : please reference dhl_mux_id enum type
 **/
typedef struct
{
    kal_uint32 dhl_mux_id;
} dhl_cmd_asm_query_header_struct;

/**
 * @brief: ASM SWLA/SWTR streaming mode, header query command response
 * @parameters:
 *      dhl_mux_id : response the same vaule with ELT command to be the token
 *      swla_header_len : the length of ASM swla/swtr header in the peer buffer
 **/
typedef struct
{
    kal_uint32  dhl_mux_id;
    kal_uint32  asm_header_len;
} dhl_ind_asm_query_header_report_struct;

/**
 * @brief: SWLA/SWTR maximum header length.
 *         DHL truncates the header, if header length larger than this definition.
 *         SS has to restore the header manually.
 **/
#define DHL_SWLA_MAX_HEADER_LEN_DEF (512)
#define DHL_SWTR_MAX_HEADER_LEN_DEF (512)
typedef enum
{
    DHL_SWLA_MAX_HEADER_LEN = DHL_SWLA_MAX_HEADER_LEN_DEF,
    DHL_SWTR_MAX_HEADER_LEN = DHL_SWTR_MAX_HEADER_LEN_DEF
} dhl_software_monitor;





#define DHL_SWLA_EMI_MONITOR_MASTER_NUM (3)
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 master_select[DHL_SWLA_EMI_MONITOR_MASTER_NUM];
} dhl_cmd_swla_emi_monitor_master_select_cmd_struct;

typedef struct
{
    kal_uint8 channel_id;
    kal_uint8 pData[1];
} dhl_cmd_virtual_channel_struct;

typedef struct
{
    kal_uint8 channel_id;
} dhl_ind_virtual_channel_struct;

typedef struct
{
#ifdef __EM_MODE__
    em_info_status_enum  info_request[NUM_OF_EM_INFO];
    kal_uint32 sim_selection;   //Accompanied with one option in Catcher_Version_Info_Enum (CATCHER_EM_MULTIPLE_SIM_ENABLE)
#else   //#ifdef __EM_MODE__
    //The reason we keep the old declaration here is that we don't want to change the order of tst_command_type
    //MLT uses the flake database
    kal_uint8 enable;
#endif  //#ifdef __EM_MODE__
} dhl_cmd_em_mode_config_struct;

typedef struct
{
    kal_uint16 nCount;
    kal_uint16 MsgIDs[1];
} dhl_cmd_set_trap_msg_struct;

typedef struct
{
    kal_uint8 token;
    kal_uint8 command; //0: db_reset, 1:db_write, 2:db_read, 3:db_delete
    //4: db_snap, 5:db_exist
    kal_uint16 length;
    kal_uint8 sim_num;
    kal_uint8 rat_mode;
    kal_uint8 buf[1]; // for write commmand address, this must be put in the last var.
} dhl_cmd_ubdb_struct;

typedef struct
{
    kal_uint8 token;
    kal_uint8 command;
    kal_uint16 length;
} dhl_ind_ubdb_struct;

//MSG_ID_TST_R8_DL_PKT_SINGLE_GPD_IND
typedef struct
{
    kal_uint8 ref_count;
    kal_uint16 msg_len;
    kal_uint32 trace_id;
    sap_type raw_data_sap;
    kal_uint16 offset;
} tst_r8_dl_pkt_single_gpd_ind_struct;

typedef struct
{
    void  *m_Addr;
    kal_uint16  m_Value;
} dhl_2g_dsp_filter_setting;

typedef struct
{
    kal_uint32  count;
    dhl_2g_dsp_filter_setting *filter;
} dhl_cmd_set_2g_dsp_filter_struct;

typedef enum
{
    TST_GPD_LOG_GPD_TYPE = 0,
    TST_GPD_LOG_BD_TYPE,
    TST_GPD_LOG_RAW_TYPE,
    TST_GPD_LOG_LAST_TYPE,
} tst_gpd_log_type_t;

typedef enum
{
    DHL_DRV_DETACH,
    DHL_DRV_ATTACH,
    DHL_DRV_INIT,
} dhl_drv_state;

typedef struct
{
    LOCAL_PARA_HDR
    DCL_HANDLE handle;
    dhl_drv_state state;
} dhl_driver_state_change_struct;

typedef struct
{
    LOCAL_PARA_HDR
    DCL_HANDLE handle;
    tty_io_request_t *ior;
} dhl_tty_rx_done_struct;

typedef struct
{
    LOCAL_PARA_HDR
}
tst_l2copro_filter_retrieval_struct;

typedef struct
{
    LOCAL_PARA_HDR
}
tst_l2copro_filter_save_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool location_state;
} dhl_lbs_pos_ntf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_int64 lat;
    kal_int64 lng;
    kal_int32 acc;
} dhl_lbs_pos_ind_struct;

typedef struct
{
    kal_uint32 count;
} dhl_cmd_set_partial_prim_mod_filter_struct;

typedef struct
{
    kal_uint32 count;
} dhl_cmd_set_partial_prim_sap_filter_struct;

typedef struct
{
    kal_uint32 count;
} dhl_cmd_set_partial_ps_trc_filter_struct;

typedef struct
{
    kal_uint32 count;
} dhl_cmd_set_partial_l1_trc_filter_struct;

typedef enum
{
    DHL_MUX_ID_MCU_CODE_BEGIN = 0, DHL_MUX_ID_MCU_CODE_TAIL = 2,
    DHL_MUX_ID_DSP_CODE_BEGIN = 3, DHL_MUX_ID_DSP_CODE_TAIL = 127,
    DHL_MUX_ID_HW_CODE_BEGIN = 128, DHL_MUX_ID_HW_CODE_TAIL = 255,
    DHL_MUX_ID_END = 256,
} dhl_mux_id_range;

#define DHL_MUX_FILTER_LEN 32

typedef enum
{
    DHL_MUX_ID_MCU = 0,
    DHL_MUX_ID_ASM_SWTR = 1,
    DHL_MUX_ID_MCU_MON = 2,
    DHL_MUX_ID_DSP_INNER_1 = DHL_MUX_ID_DSP_CODE_BEGIN,
    DHL_MUX_ID_DSP_INNER_2,
    DHL_MUX_ID_DSP_BRP_1,
    DHL_MUX_ID_DSP_BRP_2,
    DHL_MUX_ID_DSP_FEC_1,
    DHL_MUX_ID_DSP_FEC_2,
    DHL_MUX_ID_DSP_SPEECH_1,
    DHL_MUX_ID_DSP_SPEECH_2,
    DHL_MUX_ID_DSP_SCQ0_1,
    DHL_MUX_ID_DSP_SCQ0_2,
    DHL_MUX_ID_DSP_SCQ1_1,
    DHL_MUX_ID_DSP_SCQ1_2,
    DHL_MUX_ID_DSP_RAKE_1,
    DHL_MUX_ID_DSP_RAKE_2,

    DHL_MUX_ID_DSP_CODE_END,
    /*
        // 91 DSP channel
        DHL_MUX_ID_DSP_DFE_1 = DHL_MUX_ID_DSP_CODE_BEGIN,
        DHL_MUX_ID_DSP_DFE_2,
        DHL_MUX_ID_DSP_RAKE_1,
        DHL_MUX_ID_DSP_RAKE_2,
        DHL_MUX_ID_DSP_BRP_1,
        DHL_MUX_ID_DSP_BRP_2,
        DHL_MUX_ID_DSP_IMC_1,
        DHL_MUX_ID_DSP_IMC_2,
        DHL_MUX_ID_DSP_ICC_1,
        DHL_MUX_ID_DSP_ICC_2,
        DHL_MUX_ID_DSP_MPC_1,
        DHL_MUX_ID_DSP_MPC_2,
        DHL_MUX_ID_DSP_DFE1_1,
        DHL_MUX_ID_DSP_DFE1_2,

        DHL_MUX_ID_RESERVED_MD32_1, //Align MT6290 for backward compatible
        DHL_MUX_ID_RESERVED_MD32_2,
        DHL_MUX_ID_DSP_MDP_MPC,
        DHL_MUX_ID_DSP_MDP_IMC,
        DHL_MUX_ID_DSP_MDP_ICC,
        DHL_MUX_ID_DSP_MDP_DFE1,
        DHL_MUX_ID_DSP_CODE_END,
    */

    /* use DHL_MUX_ID_DSP_CODE_END as trace stats mux num, please also update DHL_MUXID_NUM if add new ID */

    DHL_MUX_ID_HW_IRDBG = DHL_MUX_ID_HW_CODE_BEGIN,
    DHL_MUX_ID_MCU_1 = 129, /* 130~135: Reserved for others MCU use in the feature */
    DHL_MUX_ID_MCU_2,
    DHL_MUX_ID_MCU_3,
    DHL_MUX_ID_MCU_4,
    DHL_MUX_ID_MCU_5,
    DHL_MUX_ID_MCU_6,
    DHL_MUX_ID_ASM_INFRA_SWTR = 136,/* 136~146: Reserved for others MCU ASM use in the feature */
    DHL_MUX_ID_ASM_CORE_BEGIN = 137,
    DHL_MUX_ID_ASM0_SWLA = DHL_MUX_ID_ASM_CORE_BEGIN,
    DHL_MUX_ID_ASM1_SWLA = 138,
    DHL_MUX_ID_ASM2_SWLA = 139,
    DHL_MUX_ID_ASM3_SWLA = 140,
    DHL_MUX_ID_LINUX_LOG = 147, // VOLTE log

    /*Gen 93*/
    DHL_MUX_MCU_ULSP = 150,
    DHL_MUX_DSP_ULSP = 152,
    DHL_TRACE_STAT_MUX_SIZE,
    DHL_MUX_ID_NO_MUX = 255
} dhl_mux_id;

/* last index for L1core : DHL_MUX_ID_MCU_SLAVE */
//#define DHL_MUXID_NUM (DHL_MUX_ID_NO_MUX + 1)
//#define DHL_STATS_MUX_SLAVE_ID (DHL_MUXID_NUM - 1)

//ULSP Source ID to Core/TC ID mapping
//Format: MUX_(MUX_ID)_SOURCEID_(SOURCE_ID)__CORE_(CORE_ID)_TC_(TCID)
typedef enum
{
    MUX_150_SOURCEID_1__CORE_0_TC_0,
    MUX_150_SOURCEID_2__CORE_0_TC_1,
    MUX_150_SOURCEID_3__CORE_0_TC_2,
    MUX_150_SOURCEID_4__CORE_0_TC_3,
    MUX_150_SOURCEID_5__CORE_1_TC_0,
    MUX_150_SOURCEID_6__CORE_1_TC_1,
    MUX_150_SOURCEID_7__CORE_1_TC_2,
    MUX_150_SOURCEID_8__CORE_1_TC_3,
    MUX_150_SOURCEID_17__CORE_0_TC_0,
    MUX_150_SOURCEID_18__CORE_0_TC_1,
    MUX_150_SOURCEID_19__CORE_0_TC_2,
    MUX_150_SOURCEID_20__CORE_0_TC_3,
    MUX_150_SOURCEID_21__CORE_1_TC_0,
    MUX_150_SOURCEID_22__CORE_1_TC_1,
    MUX_150_SOURCEID_23__CORE_1_TC_2,
    MUX_150_SOURCEID_24__CORE_1_TC_3
} dhl_source_id_mapping_table;

typedef struct
{
    kal_uint32 bytes_sent;
    kal_uint32 last_update;
} dhl_trace_stats;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 select[DHL_MUX_FILTER_LEN];
    kal_uint8 value[DHL_MUX_FILTER_LEN];
} dhl_cmd_set_dhl_mux_filter_struct;

typedef enum
{
    DHL_PORT_NULL,
    DHL_PORT_UART,
    DHL_PORT_USB,
    DHL_PORT_SP,
    DHL_PORT_OTHER
} DHL_PORT_SETTING;

/*
typedef struct
{
    kal_uint8 mod_id;
    kal_uint32 filter_bmp_low;
}mdl_log_filter_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 DFE_mod_num;  //In 91, it's DFE
    kal_uint8 DFE_HW_cswitch_enbl;
    mdl_log_filter_struct DFE_cfg[64];
    kal_uint8 RAKE_mod_num;  //In 91, it's RAKE
    kal_uint8 RAKE_HW_cswitch_enbl;
    mdl_log_filter_struct RAKE_cfg[64];
    kal_uint8 BRP_mod_num;   //In 91, it's BRP
    kal_uint8 BRP_HW_cswitch_enbl;
    mdl_log_filter_struct BRP_cfg[64];
    kal_uint8 IMC_mod_num;   //In 91, it's IMC
    kal_uint8 IMC_HW_cswitch_enbl;
    mdl_log_filter_struct IMC_cfg[64];
    kal_uint8 ICC_mod_num;  //In 91, it's ICC
    kal_uint8 ICC_HW_cswitch_enbl;
    mdl_log_filter_struct ICC_cfg[64];
    kal_uint8 MPC_mod_num;  //IN 91, it's MPC
    kal_uint8 MPC_HW_cswitch_enbl;
    mdl_log_filter_struct MPC_cfg[64];
    kal_uint8 DFE1_mod_num;  //In DFE1
    kal_uint8 DFE1_HW_cswitch_enbl;
    mdl_log_filter_struct DFE1_cfg[64];
}dhl_cmd_set_mdl_filter_struct;
*/

typedef struct
{
    kal_uint8 mod_id;
    kal_uint32 filter_bmp_low;
} dsp_log_filter_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 INNER_mod_num;
    kal_uint8 INNER_HW_cswitch_enbl;
    dsp_log_filter_struct INNER_cfg[64];
    kal_uint8 BRP_mod_num;
    kal_uint8 BRP_HW_cswitch_enbl;
    dsp_log_filter_struct BRP_cfg[64];
    kal_uint8 FEC_mod_num;
    kal_uint8 FEC_HW_cswitch_enbl;
    dsp_log_filter_struct FEC_cfg[64];
    kal_uint8 SPEECH_mod_num;
    kal_uint8 SPEECH_HW_cswitch_enbl;
    dsp_log_filter_struct SPEECH_cfg[64];
    kal_uint8 SCQ0_mod_num;
    kal_uint8 SCQ0_HW_cswitch_enbl;
    dsp_log_filter_struct SCQ0_cfg[64];
    kal_uint8 SCQ1_mod_num;
    kal_uint8 SCQ1_HW_cswitch_enbl;
    dsp_log_filter_struct SCQ1_cfg[64];
    kal_uint8 RAKE_mod_num;
    kal_uint8 RAKE_HW_cswitch_enbl;
    dsp_log_filter_struct RAKE_cfg[64];
} dhl_cmd_set_dsp_filter_struct;

typedef enum
{
    cgen_msg__MSG_ID_DHL_CMD_SET_DSP_FILTER,
    cgen_src__MOD_DHL_READER,
    cgen_dst__MOD_DHL_READER,
} dhl_dsp_filter_struct_desc;

//Generic memory dump definitions
#if defined(GEN_FOR_PC)
#define Define_TST_Mem_Dump_Type_Start() typedef enum {
#define Define_TST_Mem_Dump_Type_Item(type, string, length) string##__size__##length,
#define Define_TST_Mem_Dump_Type_End()   tst_mem_type_string_end} tst_mem_type_string_enum;
#else
#define Define_TST_Mem_Dump_Type_Start() typedef enum {
#define Define_TST_Mem_Dump_Type_Item(type, string, length) type,
#define Define_TST_Mem_Dump_Type_End()   tst_mem_type_end} tst_mem_type_enum;
#endif

typedef struct
{
    //do not change this structure, mini com is hard code to set
    kal_uint32 cmd_flags;
} dhl_cmd_3rd_party_tool_struct;

typedef enum
{
    INIT_CMDS_RESEND_EXCEPTION_INFO = 0,
    INIT_CMDS_MEMORY_DUMP_SWITCH,
    INIT_CMDS_QUERY_SWLA_HEADER,
    INIT_CMDS_QUERY_TARGET_VERSION,
    INIT_CMDS_ECHO_SIM_MAPPING,
    INIT_CMDS_QUERY_LOAD_VERSION,
    INIT_CMDS_QUERY_CALIBRATION,
    INIT_CMDS_QUERY_SWLA_INFO,
    INIT_CMDS_QUERY_SWTR_HEADER,
    INIT_CMDS_MAX = 31,
} dhl_init_cmd_set_enum_type;

typedef enum
{
    DISCONNECT_CMDS_MEMORY_DUMP_SWITCH = 0,
    DISCONNECT_CMDS_MAX = 31,
} dhl_disconnect_cmd_set_enum_type;

typedef struct
{
    kal_uint32 init_cmds;
} dhl_cmd_elt_connect_struct;

typedef struct
{
    kal_uint32 disconnect_cmds;
} dhl_cmd_elt_disconnect_struct;

typedef struct
{
    kal_uint32 token;
    kal_uint32 data_len;
    kal_uint8  data[1];
} dhl_cmd_loop_back_struct;

typedef struct
{
    kal_uint32 token;
} dhl_cmd_loop_back_response_struct;

#define DATABASE_SIGNATURE_MAGIC (0x24541605)
#define DATABASE_SIGNATURE_MAX_LENGTH (64)
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool enable;
    kal_uint8 poll_period_level;
    kal_uint8 block_size_level;
} dhl_l2copro_log_dma_config_struct;
typedef struct
{
    kal_uint32 magic;
    kal_uint32 length;
    kal_uint8 data[DATABASE_SIGNATURE_MAX_LENGTH];
} dhl_cmd_check_database_signature_struct;

typedef enum
{
    QUERY_FAIL,
    QUERY_CONTINUE,
    QUERY_END
} query_mem_range_result;

typedef enum
{
    MEM_SYS,
    MEM_SYS_SLAVE,
    MEM_DSP,
    MEM_SLA_CORE0,
    MEM_SLA_CORE1,
    MEM_STR_MCU,
    MEM_STR_INFRA,
    MEM_SLA_BRP,
    MEM_SLA_INNER,
    MEM_SLA_FEC,
    MEM_SLA_SPEECH,
    MEM_CSDSP,
    MEM_MD32,
    /*MEM_USIP_SCQ16,*/
    MEM_USIP0,
    MEM_USIP1,
    MEM_SCQ16_0,
    MEM_SCQ16_1,
    MEM_RAKE,
    MEM_VRF,
    MEM_BB,
#if defined(__AST_TL1_TDD__)
    MEM_AST,
#endif
    MEM_TYPE_END,
} DHL_MEM_TYPE;

typedef enum
{
    MEMORY_DUMP_TYPE_ALL,
    MEMORY_DUMP_TYPE_SWLA,
} DHL_DUMP_MEM_CHOICE;

typedef enum
{
    DEFAULT_AUTO_TYPE,
    USB_DUMP_TYPE,
    SD_DUMP_TYPE,
    META_DUMP_TYPE,
} DHL_AUTO_MEMORY_DUMP_TYPE;

Define_TST_Mem_Dump_Type_Start()
Define_TST_Mem_Dump_Type_Item(default_type, default, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(tst_system_mem_type, sys_mem, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(tst_dsp_mem_type, dsp_mem, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(tst_bb_mem_type, bb_reg, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(tst_core0_swla_mem_type, core0_swla, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(tst_core1_swla_mem_type, core1_swla, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(tst_mcu_swtr_mem_type,   mcu_swtr, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(tst_infra_swtr_mem_type, infra_swtr, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(tst_brp_swla_mem_type, core0_swla, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(tst_inner_swla_mem_type, core1_swla, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(tst_fec_swla_mem_type, core0_swla, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(tst_speech_swla_mem_type, core1_swla, 0xFFFFFFFF)
// For uSIP_SCQ16 and RAKE
#if defined(__MTK_TARGET__) && !defined(__NO_DSP__)
Define_TST_Mem_Dump_Type_Item(dhl_usip0_mem_type, usip0_mem, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(dhl_usip1_mem_type, usip1_mem, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(dhl_scq16_0_mem_type, scq16_0_mem, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(dhl_scq16_1_mem_type, scq16_1_mem, 0xFFFFFFFF)
Define_TST_Mem_Dump_Type_Item(dhl_rake_mem_type, rake_mem, 0xFFFFFFFF)
#endif

Define_TST_Mem_Dump_Type_Item(tst_vrf_mem_type, vrf_mem, 0xFFFFFFFF)

#if defined(__AST_TL1_TDD__) && !defined(UNIT_TEST)
Define_TST_Mem_Dump_Type_Item(tst_ast_mem_type, ast_mem, 0x400)
#endif

Define_TST_Mem_Dump_Type_End()

/**
 *  @brief:
 *      E_DHL_SWLA_DUMP_FOR_ELT is used for telling ELT which memory dump type is SWLA.
 *      the enum naming is 1 on 1 mapping with memory type:
 *      for example:
 *          Define_TST_Mem_Dump_Type_Item(tst_swla_mem_type, ""swla"", 0xFFFFFFFF)
 *          Define_TST_Mem_Dump_Type_Item(dhl_slave_swla_mem_type, ""slave_swla"", 0xFFFFFFFF)
 */
#if defined(GEN_FOR_PC)
typedef enum
{
    core0_swla,
    core1_swla,
    mcu_swtr,
    infra_swtr
} E_DHL_SWLA_DUMP_FOR_ELT;
#endif /* GEN_FOR_PC */

#if defined(__DHL_MODULE__)
typedef struct
{
    kal_uint8   token;
    kal_uint8   reserved;
    kal_uint16  chunk_size;
    void        *address;
    kal_uint32  length;
    DHL_CUSTOM_MEM_TYPE     custom_mem_type;
    kal_uint32  custom_option;
} dhl_cmd_custom_read_memory_struct;

typedef struct
{
    kal_uint8   token;
    void  *address;
    kal_uint32  length;
    DHL_CUSTOM_MEM_TYPE     custom_mem_type;
    kal_uint32  custom_option;
} dhl_ind_custom_read_memory_report_struct;

typedef struct
{
    void        *address;
    kal_uint32  length;
    DHL_CUSTOM_MEM_TYPE     custom_mem_type;
    kal_uint32  custom_option;
    kal_uint8   data[1];
} dhl_cmd_custom_write_memory_struct;

typedef enum
{
    data_channel,
    monitor_channel,
    ccb_meta_channel
} dhl_channel_type;

#endif

#if defined(__TST_META_MODE_TRACE_ENABLE__)
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 enable;
} dhl_meta_mode_log_enable_struct;
#endif // __TST_META_MODE_TRACE_ENABLE__

#endif
