
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
 *   mdm_trc.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This file defines the index trace of MDM module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *
 
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _MDM_TRACE_H
#define _MDM_TRACE_H

void MDM_ASSERT(kal_uint32 e1, kal_uint32 e2, kal_uint32 e3);
void MDM_kal_fatal_error_handler(kal_uint32 code1, kal_uint32 code2);
void MDM_EXCEPTION(void);

#define MDM_BASE             0xb0490000
#define MDM32P               volatile unsigned int *
#define MDM_TM_TINFOMSG      ((MDM32P)(MDM_BASE+0x0000))  //apb32 Information Message Register (T)
#define MDM_TM_TPAR          ((MDM32P)(MDM_BASE+0x0004))  //apb32 message parameter
#define MDM_TM_INFOMSG       ((MDM32P)(MDM_BASE+0x0008))  //apb32 Information Message Register
#define MDM_TM_ERRMSG        ((MDM32P)(MDM_BASE+0x000C))  //apb32 Error Message Register
#define MDM_TM_TTAG          ((MDM32P)(MDM_BASE+0x0010))  //apb32 TTAG
#define MDM_TM_ENDSIM        ((MDM32P)(MDM_BASE+0x0014))  //apb32 End Simulation Register
#define MDM_TM_ERRCNT        ((MDM32P)(MDM_BASE+0x0018))  //apb32 Error Count Register
#define MDM_TM_DBGINFO       ((MDM32P)(MDM_BASE+0x001c))  //apb32 Debug Infomation
#define MDM_TM_TERRMSG       ((MDM32P)(MDM_BASE+0x0020))  //apb32 Error Message Register (T)
#define MDM_TM_TBLANK        ((MDM32P)(MDM_BASE+0x0024))  //apb32 Blank line (T)
#define MDM_TM_ENDFAIL       ((MDM32P)(MDM_BASE+0x0028))  //apb32 End Simulation With Fail Msg
#define MDM_TM_ENDSUCC       ((MDM32P)(MDM_BASE+0x002C))  //apb32 End Simulation With Success Msg
#define MDM_TM_ENDASSERT     ((MDM32P)(MDM_BASE+0x0030))  //apb32 End Simulation Register
#define MDM_TM_ALLFMT32B     ((MDM32P)(MDM_BASE+0x0034))  //apb32 Display All Format 32b Value
#define MDM_TM_HEXFMT32B     ((MDM32P)(MDM_BASE+0x0038))  //apb32 Display Hexa Format 32b Value
#define MDM_TM_DECFMT32B     ((MDM32P)(MDM_BASE+0x003C))  //apb32 Display Dec Format 32b Value
#define MDM_TM_BINFMT32B     ((MDM32P)(MDM_BASE+0x0040))  //apb32 Display Bin Format 32b Value
#define MDM_TM_HEXFMT16B     ((MDM32P)(MDM_BASE+0x0044))  //apb32 Display Hexa Format 16b Value
#define MDM_TM_DECFMT16B     ((MDM32P)(MDM_BASE+0x0048))  //apb32 Display Dec Format 16b Value
#define MDM_TM_BINFMT16B     ((MDM32P)(MDM_BASE+0x004C))  //apb32 Display Bin Format 16b Value

#define MDM_TM_MEMDUMPSTR    ((MDM32P)(MDM_BASE+0x0050))  //apb32 Start Address of Memory Dumping
#define MDM_TM_MEMDUMPSTOP   ((MDM32P)(MDM_BASE+0x0054))  //apb32 Stop Address of Memory Dumping

#define MDM_TM_MEMGOLDENSTR  ((MDM32P)(MDM_BASE+0x0058))  //apb32 Start Address of Memory Compare(Golden)
#define MDM_TM_MEMGOLDENSTOP ((MDM32P)(MDM_BASE+0x005C))  //apb32 Stop Address of Memory Compare(Golden)

#define MDM_TM_MEMREVISESTR  ((MDM32P)(MDM_BASE+0x0060))  //apb32 Start Address of Memory Compare(Revised)
#define MDM_TM_MEMREVISESTOP ((MDM32P)(MDM_BASE+0x0064))  //apb32 Stop Address of Memory Compare(Revised)
#define MDM_TM_EXT_MEM_INFO  ((MDM32P)(MDM_BASE+0x0068))  // apb32
                                       // [7:0]:   DRAM type  -> {0:SDR16, 1:SDR32, 2:DDR16, 3:DDR32, 4:DDR2}
                                       // [15:8]:  SRAM type  -> {0:ASRAM, 1:PSRAM}
                                       // [19:16]: Bank0 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [23:20]: Bank1 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [27:24]: Bank2 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [31:28]: Bank3 type -> {0:NONE, 1:SRAM, 2:DRAM}
#define MDM_TM_RUNTIME_USEC  ((MDM32P)(MDM_BASE+0x006C))  // apb32
#define MDM_TM_PHASE         ((MDM32P)(MDM_BASE+0x0070))  // apb32 rtl/post
                                       // [1:0]:   {0:none, 1:rtl, 2:pre, 3:post}
                                       // [5:4]:   {0:none, 1:max, 2:typ, 3:min}
#define MDM_TM_SIM_OPTION    ((MDM32P)(MDM_BASE+0x0074))  // apb32
                                       // [0]: PLL enable -> {0:OFF, 1:ON}
//`define TM_CFSDB_CTRL      ((MDM32P)(MDM_BASE+0x0b0c))  // apb32 CFSDB ctrl switch (+cfsdb_ctrl_off)
//`define TM_DMESS_CTRL      ((MDM32P)(MDM_BASE+0x0b10))  // apb32 dynamic message ctrl switch (+cmess_ctrl_off)

#define MDM_TM_FSDBDUMPFILE  ((MDM32P)(MDM_BASE+0x0080))  // apb32 $fsdbAutoSwitchDumpfile {0:divide per 200MB, others:divide per custom size}
#define MDM_TM_FSDBDUMPVARS  ((MDM32P)(MDM_BASE+0x0084))  // apb32 $fsdbDumpvars(custom, `PROJ_TMDL)
#define MDM_TM_FSDBDUMP      ((MDM32P)(MDM_BASE+0x0088))  // apb32 {0:$fsdbDumpoff, 1:$fsdbDumpon}
#define MDM_TM_FSDBDUMPSCOPE ((MDM32P)(MDM_BASE+0x008C))  // apb32

#define MDM_TM_STR_CLEAR     ((MDM32P)(MDM_BASE+0x0090))  // apb32 clear string ptr
#define MDM_TM_STR_DISPLAY   ((MDM32P)(MDM_BASE+0x0094))  // apb32 display string buf
#define MDM_TM_STR0          ((MDM32P)(MDM_BASE+0x0098))  // apb32 string buffer to be displayed
#define MDM_TM_STR1          ((MDM32P)(MDM_BASE+0x009c))  // apb32 string buffer to be displayed
#define MDM_TM_STR2          ((MDM32P)(MDM_BASE+0x00a0))  // apb32 string buffer to be displayed
#define MDM_TM_STR3          ((MDM32P)(MDM_BASE+0x00a4))  // apb32 string buffer to be displayed
#define MDM_TM_STR4          ((MDM32P)(MDM_BASE+0x00a8))  // apb32 string buffer to be displayed
#define MDM_TM_STR5          ((MDM32P)(MDM_BASE+0x00ac))  // apb32 string buffer to be displayed
#define MDM_TM_STR6          ((MDM32P)(MDM_BASE+0x00b0))  // apb32 string buffer to be displayed
#define MDM_TM_STR7          ((MDM32P)(MDM_BASE+0x00b4))  // apb32 string buffer to be displayed

#define MDM_TRIG_IRQ         ((MDM32P)(MDM_BASE+0x00b8))  // apb32 trigger EIRQ
#define MDM_TRIG_IRQ2        ((MDM32P)(MDM_BASE+0x00bC))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG        ((MDM32P)(MDM_BASE+0x0078))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG2       ((MDM32P)(MDM_BASE+0x007C))  // apb32 trigger EIRQ

 // for MDM_cosim purpose, to replace bsi_reg usage
#define MDM_CORE0VPE0_TO_CORE0VPE0          ((MDM32P)(MDM_BASE+0x00C0))  //core 0 to core0 
#define MDM_CORE0VPE1_TO_CORE0VPE0          ((MDM32P)(MDM_BASE+0x00C4))  //core 1 to core0
#define MDM_CORE1VPE0_TO_CORE0VPE0          ((MDM32P)(MDM_BASE+0x00C8))  //core 2 to core0
#define MDM_CORE1VPE1_TO_CORE0VPE0          ((MDM32P)(MDM_BASE+0x00CC))  //core 3 to core0
#define MDM_CORE2VPE0_TO_CORE0VPE0          ((MDM32P)(MDM_BASE+0x00D0))  //core 4 to core0
#define MDM_CORE2VPE1_TO_CORE0VPE0          ((MDM32P)(MDM_BASE+0x00D4))  //core 5 to core0
#define MDM_CORE3VPE0_TO_CORE0VPE0          ((MDM32P)(MDM_BASE+0x00D8))  //core 6 to core0
#define MDM_CORE3VPE1_TO_CORE0VPE0          ((MDM32P)(MDM_BASE+0x00DC))  //core 7 to core0

#define MDM_MDM_SIMIF0_CTRL   ((MDM32P)(MDM_BASE+0x00E0))  //apb32
#define MDM_MDM_SIMIF1_CTRL   ((MDM32P)(MDM_BASE+0x00E4))  //apb32

#define MDM_TM_FH_CTRL        ((MDM32P)(MDM_BASE+0x00E8))  //apb32
#define MDM_DELAY	      ((MDM32P)(MDM_BASE+0x00EC))  //apb32
#define MDM_RANDOM_DELAY_MIN  ((MDM32P)(MDM_BASE+0x00F0))  //apb32
#define MDM_RANDOM_DELAY_MAX  ((MDM32P)(MDM_BASE+0x00F4))  //apb32
#define MDM_URANDOM_RANGE_MIN ((MDM32P)(MDM_BASE+0x00F8))  //apb32
#define MDM_URANDOM_RANGE_MAX ((MDM32P)(MDM_BASE+0x00FC))  //apb32


#define MDM_TM_TINFOMSG_01      ((MDM32P)(MDM_BASE+0x0100))  //apb32 Information Message Register (T)
#define MDM_TM_TPAR_01          ((MDM32P)(MDM_BASE+0x0104))  //apb32 message parameter
#define MDM_TM_INFOMSG_01       ((MDM32P)(MDM_BASE+0x0108))  //apb32 Information Message Register
#define MDM_TM_ERRMSG_01        ((MDM32P)(MDM_BASE+0x010C))  //apb32 Error Message Register
#define MDM_TM_TTAG_01          ((MDM32P)(MDM_BASE+0x0110))  //apb32 TTAG
#define MDM_TM_ENDSIM_01        ((MDM32P)(MDM_BASE+0x0114))  //apb32 End Simulation Register
#define MDM_TM_ERRCNT_01        ((MDM32P)(MDM_BASE+0x0118))  //apb32 Error Count Register
#define MDM_TM_DBGINFO_01       ((MDM32P)(MDM_BASE+0x011c))  //apb32 Debug Infomation
#define MDM_TM_TERRMSG_01       ((MDM32P)(MDM_BASE+0x0120))  //apb32 Error Message Register (T)
#define MDM_TM_TBLANK_01        ((MDM32P)(MDM_BASE+0x0124))  //apb32 Blank line (T)
#define MDM_TM_ENDFAIL_01       ((MDM32P)(MDM_BASE+0x0128))  //apb32 End Simulation With Fail Msg
#define MDM_TM_ENDSUCC_01       ((MDM32P)(MDM_BASE+0x012C))  //apb32 End Simulation With Success Msg
#define MDM_TM_ENDASSERT_01     ((MDM32P)(MDM_BASE+0x0130))  //apb32 End Simulation Register
#define MDM_TM_ALLFMT32B_01     ((MDM32P)(MDM_BASE+0x0134))  //apb32 Display All Format 32b Value
#define MDM_TM_HEXFMT32B_01     ((MDM32P)(MDM_BASE+0x0138))  //apb32 Display Hexa Format 32b Value
#define MDM_TM_DECFMT32B_01     ((MDM32P)(MDM_BASE+0x013C))  //apb32 Display Dec Format 32b Value
#define MDM_TM_BINFMT32B_01     ((MDM32P)(MDM_BASE+0x0140))  //apb32 Display Bin Format 32b Value
#define MDM_TM_HEXFMT16B_01     ((MDM32P)(MDM_BASE+0x0144))  //apb32 Display Hexa Format 16b Value
#define MDM_TM_DECFMT16B_01     ((MDM32P)(MDM_BASE+0x0148))  //apb32 Display Dec Format 16b Value
#define MDM_TM_BINFMT16B_01     ((MDM32P)(MDM_BASE+0x014C))  //apb32 Display Bin Format 16b Value

#define MDM_TM_MEMDUMPSTR_01    ((MDM32P)(MDM_BASE+0x0150))  //apb32 Start Address of Memory Dumping
#define MDM_TM_MEMDUMPSTOP_01   ((MDM32P)(MDM_BASE+0x0154))  //apb32 Stop Address of Memory Dumping

#define MDM_TM_MEMGOLDENSTR_01  ((MDM32P)(MDM_BASE+0x0158))  //apb32 Start Address of Memory Compare(Golden)
#define MDM_TM_MEMGOLDENSTOP_01 ((MDM32P)(MDM_BASE+0x015C))  //apb32 Stop Address of Memory Compare(Golden)

#define MDM_TM_MEMREVISESTR_01  ((MDM32P)(MDM_BASE+0x0160))  //apb32 Start Address of Memory Compare(Revised)
#define MDM_TM_MEMREVISESTOP_01 ((MDM32P)(MDM_BASE+0x0164))  //apb32 Stop Address of Memory Compare(Revised)
#define MDM_TM_EXT_MEM_INFO_01  ((MDM32P)(MDM_BASE+0x0168))  // apb32
                                       // [7:0]:   DRAM type  -> {0:SDR16, 1:SDR32, 2:DDR16, 3:DDR32, 4:DDR2}
                                       // [15:8]:  SRAM type  -> {0:ASRAM, 1:PSRAM}
                                       // [19:16]: Bank0 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [23:20]: Bank1 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [27:24]: Bank2 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [31:28]: Bank3 type -> {0:NONE, 1:SRAM, 2:DRAM}
#define MDM_TM_RUNTIME_USEC_01  ((MDM32P)(MDM_BASE+0x016C))  // apb32
#define MDM_TM_PHASE_01         ((MDM32P)(MDM_BASE+0x0170))  // apb32 rtl/post
                                       // [1:0]:   {0:none, 1:rtl, 2:pre, 3:post}
                                       // [5:4]:   {0:none, 1:max, 2:typ, 3:min}
#define MDM_TM_SIM_OPTION_01    ((MDM32P)(MDM_BASE+0x0174))  // apb32
                                       // [0]: PLL enable -> {0:OFF, 1:ON}
//`define TM_CFSDB_CTRL_01      ((MDM32P)(MDM_BASE+0x0b0c))  // apb32 CFSDB ctrl switch (+cfsdb_ctrl_off)
//`define TM_DMESS_CTRL_01      ((MDM32P)(MDM_BASE+0x0b10))  // apb32 dynamic message ctrl switch (+cmess_ctrl_off)

#define MDM_TM_FSDBDUMPFILE_01  ((MDM32P)(MDM_BASE+0x0180))  // apb32 $fsdbAutoSwitchDumpfile {0:divide per 200MB, others:divide per custom size}
#define MDM_TM_FSDBDUMPVARS_01  ((MDM32P)(MDM_BASE+0x0184))  // apb32 $fsdbDumpvars(custom, `PROJ_TMDL)
#define MDM_TM_FSDBDUMP_01      ((MDM32P)(MDM_BASE+0x0188))  // apb32 {0:$fsdbDumpoff, 1:$fsdbDumpon}
#define MDM_TM_FSDBDUMPSCOPE_01 ((MDM32P)(MDM_BASE+0x018C))  // apb32

#define MDM_TM_STR_CLEAR_01     ((MDM32P)(MDM_BASE+0x0190))  // apb32 clear string ptr
#define MDM_TM_STR_DISPLAY_01   ((MDM32P)(MDM_BASE+0x0194))  // apb32 display string buf
#define MDM_TM_STR0_01          ((MDM32P)(MDM_BASE+0x0198))  // apb32 string buffer to be displayed
#define MDM_TM_STR1_01          ((MDM32P)(MDM_BASE+0x019C))  // apb32 string buffer to be displayed
#define MDM_TM_STR2_01          ((MDM32P)(MDM_BASE+0x01A0))  // apb32 string buffer to be displayed
#define MDM_TM_STR3_01          ((MDM32P)(MDM_BASE+0x01A4))  // apb32 string buffer to be displayed
#define MDM_TM_STR4_01          ((MDM32P)(MDM_BASE+0x01A8))  // apb32 string buffer to be displayed
#define MDM_TM_STR5_01          ((MDM32P)(MDM_BASE+0x01AC))  // apb32 string buffer to be displayed
#define MDM_TM_STR6_01          ((MDM32P)(MDM_BASE+0x01B0))  // apb32 string buffer to be displayed
#define MDM_TM_STR7_01          ((MDM32P)(MDM_BASE+0x01B4))  // apb32 string buffer to be displayed

#define MDM_TRIG_IRQ_01         ((MDM32P)(MDM_BASE+0x01B8))  // apb32 trigger EIRQ
#define MDM_TRIG_IRQ2_01        ((MDM32P)(MDM_BASE+0x01BC))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG_01        ((MDM32P)(MDM_BASE+0x0178))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG2_01       ((MDM32P)(MDM_BASE+0x017C))  // apb32 trigger EIRQ

 // for MDM_cosim purpose, to replace bsi_reg usage
#define MDM_CORE0VPE0_TO_CORE0VPE1          ((MDM32P)(MDM_BASE+0x01C0))  //core 0 to core0 
#define MDM_CORE0VPE1_TO_CORE0VPE1          ((MDM32P)(MDM_BASE+0x01C4))  //core 1 to core0
#define MDM_CORE1VPE0_TO_CORE0VPE1          ((MDM32P)(MDM_BASE+0x01C8))  //core 2 to core0
#define MDM_CORE1VPE1_TO_CORE0VPE1          ((MDM32P)(MDM_BASE+0x01CC))  //core 3 to core0
#define MDM_CORE2VPE0_TO_CORE0VPE1          ((MDM32P)(MDM_BASE+0x01D0))  //core 4 to core0
#define MDM_CORE2VPE1_TO_CORE0VPE1          ((MDM32P)(MDM_BASE+0x01D4))  //core 5 to core0
#define MDM_CORE3VPE0_TO_CORE0VPE1          ((MDM32P)(MDM_BASE+0x01D8))  //core 6 to core0
#define MDM_CORE3VPE1_TO_CORE0VPE1          ((MDM32P)(MDM_BASE+0x01DC))  //core 7 to core0

#define MDM_MDM_SIMIF0_CTRL_01   ((MDM32P)(MDM_BASE+0x01E0))  //apb32
#define MDM_MDM_SIMIF1_CTRL_01   ((MDM32P)(MDM_BASE+0x01E4))  //apb32

#define MDM_TM_FH_CTRL_01        ((MDM32P)(MDM_BASE+0x01E8))  //apb32
#define MDM_DELAY_01	         ((MDM32P)(MDM_BASE+0x01EC))  //apb32
#define MDM_RANDOM_DELAY_MIN_01  ((MDM32P)(MDM_BASE+0x01F0))  //apb32
#define MDM_RANDOM_DELAY_MAX_01  ((MDM32P)(MDM_BASE+0x01F4))  //apb32
#define MDM_URANDOM_RANGE_MIN_01 ((MDM32P)(MDM_BASE+0x01F8))  //apb32
#define MDM_URANDOM_RANGE_MAX_01 ((MDM32P)(MDM_BASE+0x01FC))  //apb32

#define MDM_TM_TINFOMSG_10      ((MDM32P)(MDM_BASE+0x1000))  //apb32 Information Message Register (T)
#define MDM_TM_TPAR_10          ((MDM32P)(MDM_BASE+0x1004))  //apb32 message parameter
#define MDM_TM_INFOMSG_10       ((MDM32P)(MDM_BASE+0x1008))  //apb32 Information Message Register
#define MDM_TM_ERRMSG_10        ((MDM32P)(MDM_BASE+0x100C))  //apb32 Error Message Register
#define MDM_TM_TTAG_10          ((MDM32P)(MDM_BASE+0x1010))  //apb32 TTAG
#define MDM_TM_ENDSIM_10        ((MDM32P)(MDM_BASE+0x1014))  //apb32 End Simulation Register
#define MDM_TM_ERRCNT_10        ((MDM32P)(MDM_BASE+0x1018))  //apb32 Error Count Register
#define MDM_TM_DBGINFO_10       ((MDM32P)(MDM_BASE+0x101C))  //apb32 Debug Infomation
#define MDM_TM_TERRMSG_10       ((MDM32P)(MDM_BASE+0x1020))  //apb32 Error Message Register (T)
#define MDM_TM_TBLANK_10        ((MDM32P)(MDM_BASE+0x1024))  //apb32 Blank line (T)
#define MDM_TM_ENDFAIL_10       ((MDM32P)(MDM_BASE+0x1028))  //apb32 End Simulation With Fail Msg
#define MDM_TM_ENDSUCC_10       ((MDM32P)(MDM_BASE+0x102C))  //apb32 End Simulation With Success Msg
#define MDM_TM_ENDASSERT_10     ((MDM32P)(MDM_BASE+0x1030))  //apb32 End Simulation Register
#define MDM_TM_ALLFMT32B_10     ((MDM32P)(MDM_BASE+0x1034))  //apb32 Display All Format 32b Value
#define MDM_TM_HEXFMT32B_10     ((MDM32P)(MDM_BASE+0x1038))  //apb32 Display Hexa Format 32b Value
#define MDM_TM_DECFMT32B_10     ((MDM32P)(MDM_BASE+0x103C))  //apb32 Display Dec Format 32b Value
#define MDM_TM_BINFMT32B_10     ((MDM32P)(MDM_BASE+0x1040))  //apb32 Display Bin Format 32b Value
#define MDM_TM_HEXFMT16B_10     ((MDM32P)(MDM_BASE+0x1044))  //apb32 Display Hexa Format 16b Value
#define MDM_TM_DECFMT16B_10     ((MDM32P)(MDM_BASE+0x1048))  //apb32 Display Dec Format 16b Value
#define MDM_TM_BINFMT16B_10     ((MDM32P)(MDM_BASE+0x104C))  //apb32 Display Bin Format 16b Value

#define MDM_TM_MEMDUMPSTR_10    ((MDM32P)(MDM_BASE+0x1050))  //apb32 Start Address of Memory Dumping
#define MDM_TM_MEMDUMPSTOP_10   ((MDM32P)(MDM_BASE+0x1054))  //apb32 Stop Address of Memory Dumping

#define MDM_TM_MEMGOLDENSTR_10  ((MDM32P)(MDM_BASE+0x1058))  //apb32 Start Address of Memory Compare(Golden)
#define MDM_TM_MEMGOLDENSTOP_10 ((MDM32P)(MDM_BASE+0x105C))  //apb32 Stop Address of Memory Compare(Golden)

#define MDM_TM_MEMREVISESTR_10  ((MDM32P)(MDM_BASE+0x1060))  //apb32 Start Address of Memory Compare(Revised)
#define MDM_TM_MEMREVISESTOP_10 ((MDM32P)(MDM_BASE+0x1064))  //apb32 Stop Address of Memory Compare(Revised)
#define MDM_TM_EXT_MEM_INFO_10  ((MDM32P)(MDM_BASE+0x1068))  // apb32
                                       // [7:0]:   DRAM type  -> {0:SDR16, 1:SDR32, 2:DDR16, 3:DDR32, 4:DDR2}
                                       // [15:8]:  SRAM type  -> {0:ASRAM, 1:PSRAM}
                                       // [19:16]: Bank0 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [23:20]: Bank1 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [27:24]: Bank2 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [31:28]: Bank3 type -> {0:NONE, 1:SRAM, 2:DRAM}
#define MDM_TM_RUNTIME_USEC_10  ((MDM32P)(MDM_BASE+0x106C))  // apb32
#define MDM_TM_PHASE_10         ((MDM32P)(MDM_BASE+0x1070))  // apb32 rtl/post
                                       // [1:0]:   {0:none, 1:rtl, 2:pre, 3:post}
                                       // [5:4]:   {0:none, 1:max, 2:typ, 3:min}
#define MDM_TM_SIM_OPTION_10    ((MDM32P)(MDM_BASE+0x1074))  // apb32
                                       // [0]: PLL enable -> {0:OFF, 1:ON}
//`define TM_CFSDB_CTRL_10      ((MDM32P)(MDM_BASE+0x0b0c))  // apb32 CFSDB ctrl switch (+cfsdb_ctrl_off)
//`define TM_DMESS_CTRL_10      ((MDM32P)(MDM_BASE+0x0b10))  // apb32 dynamic message ctrl switch (+cmess_ctrl_off)

#define MDM_TM_FSDBDUMPFILE_10  ((MDM32P)(MDM_BASE+0x1080))  // apb32 $fsdbAutoSwitchDumpfile {0:divide per 200MB, others:divide per custom size}
#define MDM_TM_FSDBDUMPVARS_10  ((MDM32P)(MDM_BASE+0x1084))  // apb32 $fsdbDumpvars(custom, `PROJ_TMDL)
#define MDM_TM_FSDBDUMP_10      ((MDM32P)(MDM_BASE+0x1088))  // apb32 {0:$fsdbDumpoff, 1:$fsdbDumpon}
#define MDM_TM_FSDBDUMPSCOPE_10 ((MDM32P)(MDM_BASE+0x108C))  // apb32

#define MDM_TM_STR_CLEAR_10     ((MDM32P)(MDM_BASE+0x1090))  // apb32 clear string ptr
#define MDM_TM_STR_DISPLAY_10   ((MDM32P)(MDM_BASE+0x1094))  // apb32 display string buf
#define MDM_TM_STR0_10          ((MDM32P)(MDM_BASE+0x1098))  // apb32 string buffer to be displayed
#define MDM_TM_STR1_10          ((MDM32P)(MDM_BASE+0x109C))  // apb32 string buffer to be displayed
#define MDM_TM_STR2_10          ((MDM32P)(MDM_BASE+0x10A0))  // apb32 string buffer to be displayed
#define MDM_TM_STR3_10          ((MDM32P)(MDM_BASE+0x10A4))  // apb32 string buffer to be displayed
#define MDM_TM_STR4_10          ((MDM32P)(MDM_BASE+0x10A8))  // apb32 string buffer to be displayed
#define MDM_TM_STR5_10          ((MDM32P)(MDM_BASE+0x10AC))  // apb32 string buffer to be displayed
#define MDM_TM_STR6_10          ((MDM32P)(MDM_BASE+0x10B0))  // apb32 string buffer to be displayed
#define MDM_TM_STR7_10          ((MDM32P)(MDM_BASE+0x10B4))  // apb32 string buffer to be displayed

#define MDM_TRIG_IRQ_10         ((MDM32P)(MDM_BASE+0x10B8))  // apb32 trigger EIRQ
#define MDM_TRIG_IRQ2_10        ((MDM32P)(MDM_BASE+0x10BC))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG_10        ((MDM32P)(MDM_BASE+0x1078))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG2_10       ((MDM32P)(MDM_BASE+0x107C))  // apb32 trigger EIRQ

 // for MDM_cosim purpose, to replace bsi_reg usage
#define MDM_CORE0VPE0_TO_CORE1VPE0          ((MDM32P)(MDM_BASE+0x10C0))  //core 0 to core0 
#define MDM_CORE0VPE1_TO_CORE1VPE0          ((MDM32P)(MDM_BASE+0x10C4))  //core 1 to core0
#define MDM_CORE1VPE0_TO_CORE1VPE0          ((MDM32P)(MDM_BASE+0x10C8))  //core 2 to core0
#define MDM_CORE1VPE1_TO_CORE1VPE0          ((MDM32P)(MDM_BASE+0x10CC))  //core 3 to core0
#define MDM_CORE2VPE0_TO_CORE1VPE0          ((MDM32P)(MDM_BASE+0x10D0))  //core 4 to core0
#define MDM_CORE2VPE1_TO_CORE1VPE0          ((MDM32P)(MDM_BASE+0x10D4))  //core 5 to core0
#define MDM_CORE3VPE0_TO_CORE1VPE0          ((MDM32P)(MDM_BASE+0x10D8))  //core 6 to core0
#define MDM_CORE3VPE1_TO_CORE1VPE0          ((MDM32P)(MDM_BASE+0x10DC))  //core 7 to core0

#define MDM_MDM_SIMIF0_CTRL_10   ((MDM32P)(MDM_BASE+0x10E0))  //apb32
#define MDM_MDM_SIMIF1_CTRL_10   ((MDM32P)(MDM_BASE+0x10E4))  //apb32

#define MDM_TM_FH_CTRL_10        ((MDM32P)(MDM_BASE+0x10E8))  //apb32
#define MDM_DELAY_10	         ((MDM32P)(MDM_BASE+0x10EC))  //apb32
#define MDM_RANDOM_DELAY_MIN_10  ((MDM32P)(MDM_BASE+0x10F0))  //apb32
#define MDM_RANDOM_DELAY_MAX_10  ((MDM32P)(MDM_BASE+0x10F4))  //apb32
#define MDM_URANDOM_RANGE_MIN_10 ((MDM32P)(MDM_BASE+0x10F8))  //apb32
#define MDM_URANDOM_RANGE_MAX_10 ((MDM32P)(MDM_BASE+0x10FC))  //apb32

#define MDM_TM_TINFOMSG_11      ((MDM32P)(MDM_BASE+0x1100))  //apb32 Information Message Register (T)
#define MDM_TM_TPAR_11          ((MDM32P)(MDM_BASE+0x1104))  //apb32 message parameter
#define MDM_TM_INFOMSG_11       ((MDM32P)(MDM_BASE+0x1108))  //apb32 Information Message Register
#define MDM_TM_ERRMSG_11        ((MDM32P)(MDM_BASE+0x110C))  //apb32 Error Message Register
#define MDM_TM_TTAG_11          ((MDM32P)(MDM_BASE+0x1110))  //apb32 TTAG
#define MDM_TM_ENDSIM_11        ((MDM32P)(MDM_BASE+0x1114))  //apb32 End Simulation Register
#define MDM_TM_ERRCNT_11        ((MDM32P)(MDM_BASE+0x1118))  //apb32 Error Count Register
#define MDM_TM_DBGINFO_11       ((MDM32P)(MDM_BASE+0x111C))  //apb32 Debug Infomation
#define MDM_TM_TERRMSG_11       ((MDM32P)(MDM_BASE+0x1120))  //apb32 Error Message Register (T)
#define MDM_TM_TBLANK_11        ((MDM32P)(MDM_BASE+0x1124))  //apb32 Blank line (T)
#define MDM_TM_ENDFAIL_11       ((MDM32P)(MDM_BASE+0x1128))  //apb32 End Simulation With Fail Msg
#define MDM_TM_ENDSUCC_11       ((MDM32P)(MDM_BASE+0x112C))  //apb32 End Simulation With Success Msg
#define MDM_TM_ENDASSERT_11     ((MDM32P)(MDM_BASE+0x1130))  //apb32 End Simulation Register
#define MDM_TM_ALLFMT32B_11     ((MDM32P)(MDM_BASE+0x1134))  //apb32 Display All Format 32b Value
#define MDM_TM_HEXFMT32B_11     ((MDM32P)(MDM_BASE+0x1138))  //apb32 Display Hexa Format 32b Value
#define MDM_TM_DECFMT32B_11     ((MDM32P)(MDM_BASE+0x113C))  //apb32 Display Dec Format 32b Value
#define MDM_TM_BINFMT32B_11     ((MDM32P)(MDM_BASE+0x1140))  //apb32 Display Bin Format 32b Value
#define MDM_TM_HEXFMT16B_11     ((MDM32P)(MDM_BASE+0x1144))  //apb32 Display Hexa Format 16b Value
#define MDM_TM_DECFMT16B_11     ((MDM32P)(MDM_BASE+0x1148))  //apb32 Display Dec Format 16b Value
#define MDM_TM_BINFMT16B_11     ((MDM32P)(MDM_BASE+0x114C))  //apb32 Display Bin Format 16b Value

#define MDM_TM_MEMDUMPSTR_11    ((MDM32P)(MDM_BASE+0x1150))  //apb32 Start Address of Memory Dumping
#define MDM_TM_MEMDUMPSTOP_11   ((MDM32P)(MDM_BASE+0x1154))  //apb32 Stop Address of Memory Dumping

#define MDM_TM_MEMGOLDENSTR_11  ((MDM32P)(MDM_BASE+0x1158))  //apb32 Start Address of Memory Compare(Golden)
#define MDM_TM_MEMGOLDENSTOP_11 ((MDM32P)(MDM_BASE+0x115C))  //apb32 Stop Address of Memory Compare(Golden)

#define MDM_TM_MEMREVISESTR_11  ((MDM32P)(MDM_BASE+0x1160))  //apb32 Start Address of Memory Compare(Revised)
#define MDM_TM_MEMREVISESTOP_11 ((MDM32P)(MDM_BASE+0x1164))  //apb32 Stop Address of Memory Compare(Revised)
#define MDM_TM_EXT_MEM_INFO_11  ((MDM32P)(MDM_BASE+0x1168))  // apb32
                                       // [7:0]:   DRAM type  -> {0:SDR16, 1:SDR32, 2:DDR16, 3:DDR32, 4:DDR2}
                                       // [15:8]:  SRAM type  -> {0:ASRAM, 1:PSRAM}
                                       // [19:16]: Bank0 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [23:20]: Bank1 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [27:24]: Bank2 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [31:28]: Bank3 type -> {0:NONE, 1:SRAM, 2:DRAM}
#define MDM_TM_RUNTIME_USEC_11  ((MDM32P)(MDM_BASE+0x116C))  // apb32
#define MDM_TM_PHASE_11         ((MDM32P)(MDM_BASE+0x1170))  // apb32 rtl/post
                                       // [1:0]:   {0:none, 1:rtl, 2:pre, 3:post}
                                       // [5:4]:   {0:none, 1:max, 2:typ, 3:min}
#define MDM_TM_SIM_OPTION_11    ((MDM32P)(MDM_BASE+0x1174))  // apb32
                                       // [0]: PLL enable -> {0:OFF, 1:ON}
//`define TM_CFSDB_CTRL_11      ((MDM32P)(MDM_BASE+0x0b0c))  // apb32 CFSDB ctrl switch (+cfsdb_ctrl_off)
//`define TM_DMESS_CTRL_11      ((MDM32P)(MDM_BASE+0x0b10))  // apb32 dynamic message ctrl switch (+cmess_ctrl_off)

#define MDM_TM_FSDBDUMPFILE_11  ((MDM32P)(MDM_BASE+0x1180))  // apb32 $fsdbAutoSwitchDumpfile {0:divide per 200MB, others:divide per custom size}
#define MDM_TM_FSDBDUMPVARS_11  ((MDM32P)(MDM_BASE+0x1184))  // apb32 $fsdbDumpvars(custom, `PROJ_TMDL)
#define MDM_TM_FSDBDUMP_11      ((MDM32P)(MDM_BASE+0x1188))  // apb32 {0:$fsdbDumpoff, 1:$fsdbDumpon}
#define MDM_TM_FSDBDUMPSCOPE_11 ((MDM32P)(MDM_BASE+0x118C))  // apb32

#define MDM_TM_STR_CLEAR_11     ((MDM32P)(MDM_BASE+0x1190))  // apb32 clear string ptr
#define MDM_TM_STR_DISPLAY_11   ((MDM32P)(MDM_BASE+0x1194))  // apb32 display string buf
#define MDM_TM_STR0_11          ((MDM32P)(MDM_BASE+0x1198))  // apb32 string buffer to be displayed
#define MDM_TM_STR1_11          ((MDM32P)(MDM_BASE+0x119C))  // apb32 string buffer to be displayed
#define MDM_TM_STR2_11          ((MDM32P)(MDM_BASE+0x11A0))  // apb32 string buffer to be displayed
#define MDM_TM_STR3_11          ((MDM32P)(MDM_BASE+0x11A4))  // apb32 string buffer to be displayed
#define MDM_TM_STR4_11          ((MDM32P)(MDM_BASE+0x11A8))  // apb32 string buffer to be displayed
#define MDM_TM_STR5_11          ((MDM32P)(MDM_BASE+0x11AC))  // apb32 string buffer to be displayed
#define MDM_TM_STR6_11          ((MDM32P)(MDM_BASE+0x11B0))  // apb32 string buffer to be displayed
#define MDM_TM_STR7_11          ((MDM32P)(MDM_BASE+0x11B4))  // apb32 string buffer to be displayed

#define MDM_TRIG_IRQ_11         ((MDM32P)(MDM_BASE+0x11B8))  // apb32 trigger EIRQ
#define MDM_TRIG_IRQ2_11        ((MDM32P)(MDM_BASE+0x11BC))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG_11        ((MDM32P)(MDM_BASE+0x1178))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG2_11       ((MDM32P)(MDM_BASE+0x117C))  // apb32 trigger EIRQ

 // for MDM_cosim purpose, to replace bsi_reg usage
#define MDM_CORE0VPE0_TO_CORE1VPE1          ((MDM32P)(MDM_BASE+0x11C0))  //core 0 to core0 
#define MDM_CORE0VPE1_TO_CORE1VPE1          ((MDM32P)(MDM_BASE+0x11C4))  //core 1 to core0
#define MDM_CORE1VPE0_TO_CORE1VPE1          ((MDM32P)(MDM_BASE+0x11C8))  //core 2 to core0
#define MDM_CORE1VPE1_TO_CORE1VPE1          ((MDM32P)(MDM_BASE+0x11CC))  //core 3 to core0
#define MDM_CORE2VPE0_TO_CORE1VPE1          ((MDM32P)(MDM_BASE+0x11D0))  //core 4 to core0
#define MDM_CORE2VPE1_TO_CORE1VPE1          ((MDM32P)(MDM_BASE+0x11D4))  //core 5 to core0
#define MDM_CORE3VPE0_TO_CORE1VPE1          ((MDM32P)(MDM_BASE+0x11D8))  //core 6 to core0
#define MDM_CORE3VPE1_TO_CORE1VPE1          ((MDM32P)(MDM_BASE+0x11DC))  //core 7 to core0

#define MDM_MDM_SIMIF0_CTRL_11   ((MDM32P)(MDM_BASE+0x11E0))  //apb32
#define MDM_MDM_SIMIF1_CTRL_11   ((MDM32P)(MDM_BASE+0x11E4))  //apb32

#define MDM_TM_FH_CTRL_11        ((MDM32P)(MDM_BASE+0x11E8))  //apb32
#define MDM_DELAY_11	         ((MDM32P)(MDM_BASE+0x11EC))  //apb32
#define MDM_RANDOM_DELAY_MIN_11  ((MDM32P)(MDM_BASE+0x11F0))  //apb32
#define MDM_RANDOM_DELAY_MAX_11  ((MDM32P)(MDM_BASE+0x11F4))  //apb32
#define MDM_URANDOM_RANGE_MIN_11 ((MDM32P)(MDM_BASE+0x11F8))  //apb32
#define MDM_URANDOM_RANGE_MAX_11 ((MDM32P)(MDM_BASE+0x11Fc))  //apb32

#ifdef INCLUDE_MT6293_NOT_INCLUDED_CORES
#define MDM_TM_TINFOMSG_20      ((MDM32P)(MDM_BASE+0x2000))  //apb32 Information Message Register (T)
#define MDM_TM_TPAR_20          ((MDM32P)(MDM_BASE+0x2004))  //apb32 message parameter
#define MDM_TM_INFOMSG_20       ((MDM32P)(MDM_BASE+0x2008))  //apb32 Information Message Register
#define MDM_TM_ERRMSG_20        ((MDM32P)(MDM_BASE+0x200C))  //apb32 Error Message Register
#define MDM_TM_TTAG_20          ((MDM32P)(MDM_BASE+0x2010))  //apb32 TTAG
#define MDM_TM_ENDSIM_20        ((MDM32P)(MDM_BASE+0x2014))  //apb32 End Simulation Register
#define MDM_TM_ERRCNT_20        ((MDM32P)(MDM_BASE+0x2018))  //apb32 Error Count Register
#define MDM_TM_DBGINFO_20       ((MDM32P)(MDM_BASE+0x201C))  //apb32 Debug Infomation
#define MDM_TM_TERRMSG_20       ((MDM32P)(MDM_BASE+0x2020))  //apb32 Error Message Register (T)
#define MDM_TM_TBLANK_20        ((MDM32P)(MDM_BASE+0x2024))  //apb32 Blank line (T)
#define MDM_TM_ENDFAIL_20       ((MDM32P)(MDM_BASE+0x2028))  //apb32 End Simulation With Fail Msg
#define MDM_TM_ENDSUCC_20       ((MDM32P)(MDM_BASE+0x202C))  //apb32 End Simulation With Success Msg
#define MDM_TM_ENDASSERT_20     ((MDM32P)(MDM_BASE+0x2030))  //apb32 End Simulation Register
#define MDM_TM_ALLFMT32B_20     ((MDM32P)(MDM_BASE+0x2034))  //apb32 Display All Format 32b Value
#define MDM_TM_HEXFMT32B_20     ((MDM32P)(MDM_BASE+0x2038))  //apb32 Display Hexa Format 32b Value
#define MDM_TM_DECFMT32B_20     ((MDM32P)(MDM_BASE+0x203C))  //apb32 Display Dec Format 32b Value
#define MDM_TM_BINFMT32B_20     ((MDM32P)(MDM_BASE+0x2040))  //apb32 Display Bin Format 32b Value
#define MDM_TM_HEXFMT16B_20     ((MDM32P)(MDM_BASE+0x2044))  //apb32 Display Hexa Format 16b Value
#define MDM_TM_DECFMT16B_20     ((MDM32P)(MDM_BASE+0x2048))  //apb32 Display Dec Format 16b Value
#define MDM_TM_BINFMT16B_20     ((MDM32P)(MDM_BASE+0x204C))  //apb32 Display Bin Format 16b Value

#define MDM_TM_MEMDUMPSTR_20    ((MDM32P)(MDM_BASE+0x2050))  //apb32 Start Address of Memory Dumping
#define MDM_TM_MEMDUMPSTOP_20   ((MDM32P)(MDM_BASE+0x2054))  //apb32 Stop Address of Memory Dumping

#define MDM_TM_MEMGOLDENSTR_20  ((MDM32P)(MDM_BASE+0x2058))  //apb32 Start Address of Memory Compare(Golden)
#define MDM_TM_MEMGOLDENSTOP_20 ((MDM32P)(MDM_BASE+0x205C))  //apb32 Stop Address of Memory Compare(Golden)

#define MDM_TM_MEMREVISESTR_20  ((MDM32P)(MDM_BASE+0x2060))  //apb32 Start Address of Memory Compare(Revised)
#define MDM_TM_MEMREVISESTOP_20 ((MDM32P)(MDM_BASE+0x2064))  //apb32 Stop Address of Memory Compare(Revised)
#define MDM_TM_EXT_MEM_INFO_20  ((MDM32P)(MDM_BASE+0x2068))  // apb32
                                       // [7:0]:   DRAM type  -> {0:SDR16, 1:SDR32, 2:DDR16, 3:DDR32, 4:DDR2}
                                       // [15:8]:  SRAM type  -> {0:ASRAM, 1:PSRAM}
                                       // [19:16]: Bank0 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [23:20]: Bank1 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [27:24]: Bank2 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [31:28]: Bank3 type -> {0:NONE, 1:SRAM, 2:DRAM}
#define MDM_TM_RUNTIME_USEC_20  ((MDM32P)(MDM_BASE+0x206C))  // apb32
#define MDM_TM_PHASE_20         ((MDM32P)(MDM_BASE+0x2070))  // apb32 rtl/post
                                       // [1:0]:   {0:none, 1:rtl, 2:pre, 3:post}
                                       // [5:4]:   {0:none, 1:max, 2:typ, 3:min}
#define MDM_TM_SIM_OPTION_20    ((MDM32P)(MDM_BASE+0x2074))  // apb32
                                       // [0]: PLL enable -> {0:OFF, 1:ON}
//`define TM_CFSDB_CTRL_20      ((MDM32P)(MDM_BASE+0x0b0c))  // apb32 CFSDB ctrl switch (+cfsdb_ctrl_off)
//`define TM_DMESS_CTRL_20      ((MDM32P)(MDM_BASE+0x0b10))  // apb32 dynamic message ctrl switch (+cmess_ctrl_off)

#define MDM_TM_FSDBDUMPFILE_20  ((MDM32P)(MDM_BASE+0x2080))  // apb32 $fsdbAutoSwitchDumpfile {0:divide per 200MB, others:divide per custom size}
#define MDM_TM_FSDBDUMPVARS_20  ((MDM32P)(MDM_BASE+0x2084))  // apb32 $fsdbDumpvars(custom, `PROJ_TMDL)
#define MDM_TM_FSDBDUMP_20      ((MDM32P)(MDM_BASE+0x2088))  // apb32 {0:$fsdbDumpoff, 1:$fsdbDumpon}
#define MDM_TM_FSDBDUMPSCOPE_20 ((MDM32P)(MDM_BASE+0x208C))  // apb32

#define MDM_TM_STR_CLEAR_20     ((MDM32P)(MDM_BASE+0x2090))  // apb32 clear string ptr
#define MDM_TM_STR_DISPLAY_20   ((MDM32P)(MDM_BASE+0x2094))  // apb32 display string buf
#define MDM_TM_STR0_20          ((MDM32P)(MDM_BASE+0x2098))  // apb32 string buffer to be displayed
#define MDM_TM_STR1_20          ((MDM32P)(MDM_BASE+0x209C))  // apb32 string buffer to be displayed
#define MDM_TM_STR2_20          ((MDM32P)(MDM_BASE+0x20A0))  // apb32 string buffer to be displayed
#define MDM_TM_STR3_20          ((MDM32P)(MDM_BASE+0x20A4))  // apb32 string buffer to be displayed
#define MDM_TM_STR4_20          ((MDM32P)(MDM_BASE+0x20A8))  // apb32 string buffer to be displayed
#define MDM_TM_STR5_20          ((MDM32P)(MDM_BASE+0x20AC))  // apb32 string buffer to be displayed
#define MDM_TM_STR6_20          ((MDM32P)(MDM_BASE+0x20B0))  // apb32 string buffer to be displayed
#define MDM_TM_STR7_20          ((MDM32P)(MDM_BASE+0x20B4))  // apb32 string buffer to be displayed

#define MDM_TRIG_IRQ_20         ((MDM32P)(MDM_BASE+0x20B8))  // apb32 trigger EIRQ
#define MDM_TRIG_IRQ2_20        ((MDM32P)(MDM_BASE+0x20BC))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG_20        ((MDM32P)(MDM_BASE+0x2078))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG2_20       ((MDM32P)(MDM_BASE+0x207C))  // apb32 trigger EIRQ

 // for MDM_cosim purpose, to replace bsi_reg usage
#define MDM_CORE0VPE0_TO_CORE2VPE0          ((MDM32P)(MDM_BASE+0x20C0))  //core 0 to core0 
#define MDM_CORE0VPE1_TO_CORE2VPE0          ((MDM32P)(MDM_BASE+0x20C4))  //core 1 to core0
#define MDM_CORE1VPE0_TO_CORE2VPE0          ((MDM32P)(MDM_BASE+0x20C8))  //core 2 to core0
#define MDM_CORE1VPE1_TO_CORE2VPE0          ((MDM32P)(MDM_BASE+0x20CC))  //core 3 to core0
#define MDM_CORE2VPE0_TO_CORE2VPE0          ((MDM32P)(MDM_BASE+0x20D0))  //core 4 to core0
#define MDM_CORE2VPE1_TO_CORE2VPE0          ((MDM32P)(MDM_BASE+0x20D4))  //core 5 to core0
#define MDM_CORE3VPE0_TO_CORE2VPE0          ((MDM32P)(MDM_BASE+0x20D8))  //core 6 to core0
#define MDM_CORE3VPE1_TO_CORE2VPE0          ((MDM32P)(MDM_BASE+0x20DC))  //core 7 to core0

#define MDM_MDM_SIMIF0_CTRL_20   ((MDM32P)(MDM_BASE+0x20E0))  //apb32
#define MDM_MDM_SIMIF1_CTRL_20   ((MDM32P)(MDM_BASE+0x20E4))  //apb32

#define MDM_TM_FH_CTRL_20        ((MDM32P)(MDM_BASE+0x20E8))  //apb32
#define MDM_DELAY_20	         ((MDM32P)(MDM_BASE+0x20EC))  //apb32
#define MDM_RANDOM_DELAY_MIN_20  ((MDM32P)(MDM_BASE+0x20F0))  //apb32
#define MDM_RANDOM_DELAY_MAX_20  ((MDM32P)(MDM_BASE+0x20F4))  //apb32
#define MDM_URANDOM_RANGE_MIN_20 ((MDM32P)(MDM_BASE+0x20F8))  //apb32
#define MDM_URANDOM_RANGE_MAX_20 ((MDM32P)(MDM_BASE+0x20Fc))  //apb32

#define MDM_TM_TINFOMSG_21      ((MDM32P)(MDM_BASE+0x2100))  //apb32 Information Message Register (T)
#define MDM_TM_TPAR_21          ((MDM32P)(MDM_BASE+0x2104))  //apb32 message parameter
#define MDM_TM_INFOMSG_21       ((MDM32P)(MDM_BASE+0x2108))  //apb32 Information Message Register
#define MDM_TM_ERRMSG_21        ((MDM32P)(MDM_BASE+0x210C))  //apb32 Error Message Register
#define MDM_TM_TTAG_21          ((MDM32P)(MDM_BASE+0x2110))  //apb32 TTAG
#define MDM_TM_ENDSIM_21        ((MDM32P)(MDM_BASE+0x2114))  //apb32 End Simulation Register
#define MDM_TM_ERRCNT_21        ((MDM32P)(MDM_BASE+0x2118))  //apb32 Error Count Register
#define MDM_TM_DBGINFO_21       ((MDM32P)(MDM_BASE+0x211c))  //apb32 Debug Infomation
#define MDM_TM_TERRMSG_21       ((MDM32P)(MDM_BASE+0x2120))  //apb32 Error Message Register (T)
#define MDM_TM_TBLANK_21        ((MDM32P)(MDM_BASE+0x2124))  //apb32 Blank line (T)
#define MDM_TM_ENDFAIL_21       ((MDM32P)(MDM_BASE+0x2128))  //apb32 End Simulation With Fail Msg
#define MDM_TM_ENDSUCC_21       ((MDM32P)(MDM_BASE+0x212C))  //apb32 End Simulation With Success Msg
#define MDM_TM_ENDASSERT_21     ((MDM32P)(MDM_BASE+0x2130))  //apb32 End Simulation Register
#define MDM_TM_ALLFMT32B_21     ((MDM32P)(MDM_BASE+0x2134))  //apb32 Display All Format 32b Value
#define MDM_TM_HEXFMT32B_21     ((MDM32P)(MDM_BASE+0x2138))  //apb32 Display Hexa Format 32b Value
#define MDM_TM_DECFMT32B_21     ((MDM32P)(MDM_BASE+0x213C))  //apb32 Display Dec Format 32b Value
#define MDM_TM_BINFMT32B_21     ((MDM32P)(MDM_BASE+0x2140))  //apb32 Display Bin Format 32b Value
#define MDM_TM_HEXFMT16B_21     ((MDM32P)(MDM_BASE+0x2144))  //apb32 Display Hexa Format 16b Value
#define MDM_TM_DECFMT16B_21     ((MDM32P)(MDM_BASE+0x2148))  //apb32 Display Dec Format 16b Value
#define MDM_TM_BINFMT16B_21     ((MDM32P)(MDM_BASE+0x214C))  //apb32 Display Bin Format 16b Value

#define MDM_TM_MEMDUMPSTR_21    ((MDM32P)(MDM_BASE+0x2150))  //apb32 Start Address of Memory Dumping
#define MDM_TM_MEMDUMPSTOP_21   ((MDM32P)(MDM_BASE+0x2154))  //apb32 Stop Address of Memory Dumping

#define MDM_TM_MEMGOLDENSTR_21  ((MDM32P)(MDM_BASE+0x2158))  //apb32 Start Address of Memory Compare(Golden)
#define MDM_TM_MEMGOLDENSTOP_21 ((MDM32P)(MDM_BASE+0x215C))  //apb32 Stop Address of Memory Compare(Golden)

#define MDM_TM_MEMREVISESTR_21  ((MDM32P)(MDM_BASE+0x2160))  //apb32 Start Address of Memory Compare(Revised)
#define MDM_TM_MEMREVISESTOP_21 ((MDM32P)(MDM_BASE+0x2164))  //apb32 Stop Address of Memory Compare(Revised)
#define MDM_TM_EXT_MEM_INFO_21  ((MDM32P)(MDM_BASE+0x2168))  // apb32
                                       // [7:0]:   DRAM type  -> {0:SDR16, 1:SDR32, 2:DDR16, 3:DDR32, 4:DDR2}
                                       // [15:8]:  SRAM type  -> {0:ASRAM, 1:PSRAM}
                                       // [19:16]: Bank0 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [23:20]: Bank1 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [27:24]: Bank2 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [31:28]: Bank3 type -> {0:NONE, 1:SRAM, 2:DRAM}
#define MDM_TM_RUNTIME_USEC_21  ((MDM32P)(MDM_BASE+0x216C))  // apb32
#define MDM_TM_PHASE_21         ((MDM32P)(MDM_BASE+0x2170))  // apb32 rtl/post
                                       // [1:0]:   {0:none, 1:rtl, 2:pre, 3:post}
                                       // [5:4]:   {0:none, 1:max, 2:typ, 3:min}
#define MDM_TM_SIM_OPTION_21    ((MDM32P)(MDM_BASE+0x2174))  // apb32
                                       // [0]: PLL enable -> {0:OFF, 1:ON}
//`define TM_CFSDB_CTRL_21      ((MDM32P)(MDM_BASE+0x0b0c))  // apb32 CFSDB ctrl switch (+cfsdb_ctrl_off)
//`define TM_DMESS_CTRL_21      ((MDM32P)(MDM_BASE+0x0b10))  // apb32 dynamic message ctrl switch (+cmess_ctrl_off)

#define MDM_TM_FSDBDUMPFILE_21  ((MDM32P)(MDM_BASE+0x2180))  // apb32 $fsdbAutoSwitchDumpfile {0:divide per 200MB, others:divide per custom size}
#define MDM_TM_FSDBDUMPVARS_21  ((MDM32P)(MDM_BASE+0x2184))  // apb32 $fsdbDumpvars(custom, `PROJ_TMDL)
#define MDM_TM_FSDBDUMP_21      ((MDM32P)(MDM_BASE+0x2188))  // apb32 {0:$fsdbDumpoff, 1:$fsdbDumpon}
#define MDM_TM_FSDBDUMPSCOPE_21 ((MDM32P)(MDM_BASE+0x218C))  // apb32

#define MDM_TM_STR_CLEAR_21     ((MDM32P)(MDM_BASE+0x2190))  // apb32 clear string ptr
#define MDM_TM_STR_DISPLAY_21   ((MDM32P)(MDM_BASE+0x2194))  // apb32 display string buf
#define MDM_TM_STR0_21          ((MDM32P)(MDM_BASE+0x2198))  // apb32 string buffer to be displayed
#define MDM_TM_STR1_21          ((MDM32P)(MDM_BASE+0x219C))  // apb32 string buffer to be displayed
#define MDM_TM_STR2_21          ((MDM32P)(MDM_BASE+0x21A0))  // apb32 string buffer to be displayed
#define MDM_TM_STR3_21          ((MDM32P)(MDM_BASE+0x21A4))  // apb32 string buffer to be displayed
#define MDM_TM_STR4_21          ((MDM32P)(MDM_BASE+0x21A8))  // apb32 string buffer to be displayed
#define MDM_TM_STR5_21          ((MDM32P)(MDM_BASE+0x21AC))  // apb32 string buffer to be displayed
#define MDM_TM_STR6_21          ((MDM32P)(MDM_BASE+0x21B0))  // apb32 string buffer to be displayed
#define MDM_TM_STR7_21          ((MDM32P)(MDM_BASE+0x21B4))  // apb32 string buffer to be displayed

#define MDM_TRIG_IRQ_21         ((MDM32P)(MDM_BASE+0x21B8))  // apb32 trigger EIRQ
#define MDM_TRIG_IRQ2_21        ((MDM32P)(MDM_BASE+0x21BC))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG_21        ((MDM32P)(MDM_BASE+0x2178))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG2_21       ((MDM32P)(MDM_BASE+0x217C))  // apb32 trigger EIRQ

 // for MDM_cosim purpose, to replace bsi_reg usage
#define MDM_CORE0VPE0_TO_CORE2VPE1          ((MDM32P)(MDM_BASE+0x21C0))  //core 0 to core0 
#define MDM_CORE0VPE1_TO_CORE2VPE1          ((MDM32P)(MDM_BASE+0x21C4))  //core 1 to core0
#define MDM_CORE1VPE0_TO_CORE2VPE1          ((MDM32P)(MDM_BASE+0x21C8))  //core 2 to core0
#define MDM_CORE1VPE1_TO_CORE2VPE1          ((MDM32P)(MDM_BASE+0x21CC))  //core 3 to core0
#define MDM_CORE2VPE0_TO_CORE2VPE1          ((MDM32P)(MDM_BASE+0x21D0))  //core 4 to core0
#define MDM_CORE2VPE1_TO_CORE2VPE1          ((MDM32P)(MDM_BASE+0x21D4))  //core 5 to core0
#define MDM_CORE3VPE0_TO_CORE2VPE1          ((MDM32P)(MDM_BASE+0x21D8))  //core 6 to core0
#define MDM_CORE3VPE1_TO_CORE2VPE1          ((MDM32P)(MDM_BASE+0x21DC))  //core 7 to core0

#define MDM_MDM_SIMIF0_CTRL_21   ((MDM32P)(MDM_BASE+0x21E0))  //apb32
#define MDM_MDM_SIMIF1_CTRL_21   ((MDM32P)(MDM_BASE+0x21E4))  //apb32

#define MDM_TM_FH_CTRL_21        ((MDM32P)(MDM_BASE+0x21E8))  //apb32
#define MDM_DELAY_21	          ((MDM32P)(MDM_BASE+0x21Ec))  //apb32
#define MDM_RANDOM_DELAY_MIN_21  ((MDM32P)(MDM_BASE+0x21F0))  //apb32
#define MDM_RANDOM_DELAY_MAX_21  ((MDM32P)(MDM_BASE+0x21F4))  //apb32
#define MDM_URANDOM_RANGE_MIN_21 ((MDM32P)(MDM_BASE+0x21F8))  //apb32
#define MDM_URANDOM_RANGE_MAX_21 ((MDM32P)(MDM_BASE+0x21Fc))  //apb32

#define MDM_TM_TINFOMSG_30      ((MDM32P)(MDM_BASE+0x3000))  //apb32 Information Message Register (T)
#define MDM_TM_TPAR_30          ((MDM32P)(MDM_BASE+0x3004))  //apb32 message parameter
#define MDM_TM_INFOMSG_30       ((MDM32P)(MDM_BASE+0x3008))  //apb32 Information Message Register
#define MDM_TM_ERRMSG_30        ((MDM32P)(MDM_BASE+0x300C))  //apb32 Error Message Register
#define MDM_TM_TTAG_30          ((MDM32P)(MDM_BASE+0x3010))  //apb32 TTAG
#define MDM_TM_ENDSIM_30        ((MDM32P)(MDM_BASE+0x3014))  //apb32 End Simulation Register
#define MDM_TM_ERRCNT_30       ((MDM32P)(MDM_BASE+0x3018))  //apb32 Error Count Register
#define MDM_TM_DBGINFO_30       ((MDM32P)(MDM_BASE+0x301c))  //apb32 Debug Infomation
#define MDM_TM_TERRMSG_30       ((MDM32P)(MDM_BASE+0x3020))  //apb32 Error Message Register (T)
#define MDM_TM_TBLANK_30        ((MDM32P)(MDM_BASE+0x3024))  //apb32 Blank line (T)
#define MDM_TM_ENDFAIL_30       ((MDM32P)(MDM_BASE+0x3028))  //apb32 End Simulation With Fail Msg
#define MDM_TM_ENDSUCC_30       ((MDM32P)(MDM_BASE+0x302C))  //apb32 End Simulation With Success Msg
#define MDM_TM_ENDASSERT_30     ((MDM32P)(MDM_BASE+0x3030))  //apb32 End Simulation Register
#define MDM_TM_ALLFMT32B_30     ((MDM32P)(MDM_BASE+0x3034))  //apb32 Display All Format 32b Value
#define MDM_TM_HEXFMT32B_30     ((MDM32P)(MDM_BASE+0x3038))  //apb32 Display Hexa Format 32b Value
#define MDM_TM_DECFMT32B_30     ((MDM32P)(MDM_BASE+0x303C))  //apb32 Display Dec Format 32b Value
#define MDM_TM_BINFMT32B_30     ((MDM32P)(MDM_BASE+0x3040))  //apb32 Display Bin Format 32b Value
#define MDM_TM_HEXFMT16B_30     ((MDM32P)(MDM_BASE+0x3044))  //apb32 Display Hexa Format 16b Value
#define MDM_TM_DECFMT16B_30     ((MDM32P)(MDM_BASE+0x3048))  //apb32 Display Dec Format 16b Value
#define MDM_TM_BINFMT16B_30     ((MDM32P)(MDM_BASE+0x304C))  //apb32 Display Bin Format 16b Value

#define MDM_TM_MEMDUMPSTR_30    ((MDM32P)(MDM_BASE+0x3050))  //apb32 Start Address of Memory Dumping
#define MDM_TM_MEMDUMPSTOP_30   ((MDM32P)(MDM_BASE+0x3054))  //apb32 Stop Address of Memory Dumping

#define MDM_TM_MEMGOLDENSTR_30  ((MDM32P)(MDM_BASE+0x3058))  //apb32 Start Address of Memory Compare(Golden)
#define MDM_TM_MEMGOLDENSTOP_30 ((MDM32P)(MDM_BASE+0x305C))  //apb32 Stop Address of Memory Compare(Golden)

#define MDM_TM_MEMREVISESTR_30  ((MDM32P)(MDM_BASE+0x3060))  //apb32 Start Address of Memory Compare(Revised)
#define MDM_TM_MEMREVISESTOP_30 ((MDM32P)(MDM_BASE+0x3064))  //apb32 Stop Address of Memory Compare(Revised)
#define MDM_TM_EXT_MEM_INFO_30  ((MDM32P)(MDM_BASE+0x3068))  // apb32
                                       // [7:0]:   DRAM type  -> {0:SDR16, 1:SDR32, 2:DDR16, 3:DDR32, 4:DDR2}
                                       // [15:8]:  SRAM type  -> {0:ASRAM, 1:PSRAM}
                                       // [19:16]: Bank0 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [23:20]: Bank1 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [27:24]: Bank2 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [31:28]: Bank3 type -> {0:NONE, 1:SRAM, 2:DRAM}
#define MDM_TM_RUNTIME_USEC_30  ((MDM32P)(MDM_BASE+0x306C))  // apb32
#define MDM_TM_PHASE_30         ((MDM32P)(MDM_BASE+0x3070))  // apb32 rtl/post
                                       // [1:0]:   {0:none, 1:rtl, 2:pre, 3:post}
                                       // [5:4]:   {0:none, 1:max, 2:typ, 3:min}
#define MDM_TM_SIM_OPTION_30    ((MDM32P)(MDM_BASE+0x3074))  // apb32
                                       // [0]: PLL enable -> {0:OFF, 1:ON}
//`define TM_CFSDB_CTRL_30      ((MDM32P)(MDM_BASE+0x0b0c))  // apb32 CFSDB ctrl switch (+cfsdb_ctrl_off)
//`define TM_DMESS_CTRL_30      ((MDM32P)(MDM_BASE+0x0b10))  // apb32 dynamic message ctrl switch (+cmess_ctrl_off)

#define MDM_TM_FSDBDUMPFILE_30  ((MDM32P)(MDM_BASE+0x3080))  // apb32 $fsdbAutoSwitchDumpfile {0:divide per 200MB, others:divide per custom size}
#define MDM_TM_FSDBDUMPVARS_30  ((MDM32P)(MDM_BASE+0x3084))  // apb32 $fsdbDumpvars(custom, `PROJ_TMDL)
#define MDM_TM_FSDBDUMP_30      ((MDM32P)(MDM_BASE+0x3088))  // apb32 {0:$fsdbDumpoff, 1:$fsdbDumpon}
#define MDM_TM_FSDBDUMPSCOPE_30 ((MDM32P)(MDM_BASE+0x308C))  // apb32

#define MDM_TM_STR_CLEAR_30     ((MDM32P)(MDM_BASE+0x3090))  // apb32 clear string ptr
#define MDM_TM_STR_DISPLAY_30   ((MDM32P)(MDM_BASE+0x3094))  // apb32 display string buf
#define MDM_TM_STR0_30          ((MDM32P)(MDM_BASE+0x3098))  // apb32 string buffer to be displayed
#define MDM_TM_STR1_30          ((MDM32P)(MDM_BASE+0x309c))  // apb32 string buffer to be displayed
#define MDM_TM_STR2_30          ((MDM32P)(MDM_BASE+0x30a0))  // apb32 string buffer to be displayed
#define MDM_TM_STR3_30          ((MDM32P)(MDM_BASE+0x30a4))  // apb32 string buffer to be displayed
#define MDM_TM_STR4_30          ((MDM32P)(MDM_BASE+0x30a8))  // apb32 string buffer to be displayed
#define MDM_TM_STR5_30          ((MDM32P)(MDM_BASE+0x30ac))  // apb32 string buffer to be displayed
#define MDM_TM_STR6_30          ((MDM32P)(MDM_BASE+0x30b0))  // apb32 string buffer to be displayed
#define MDM_TM_STR7_30          ((MDM32P)(MDM_BASE+0x30b4))  // apb32 string buffer to be displayed

#define MDM_TRIG_IRQ_30         ((MDM32P)(MDM_BASE+0x30b8))  // apb32 trigger EIRQ
#define MDM_TRIG_IRQ2_30        ((MDM32P)(MDM_BASE+0x30bC))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG_30        ((MDM32P)(MDM_BASE+0x3078))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG2_30       ((MDM32P)(MDM_BASE+0x307C))  // apb32 trigger EIRQ

 // for MDM_cosim purpose, to replace bsi_reg usage
#define MDM_CORE0VPE0_TO_CORE3VPE0          ((MDM32P)(MDM_BASE+0x30C0))  //core 0 to core0 
#define MDM_CORE0VPE1_TO_CORE3VPE0          ((MDM32P)(MDM_BASE+0x30C4))  //core 1 to core0
#define MDM_CORE1VPE0_TO_CORE3VPE0          ((MDM32P)(MDM_BASE+0x30C8))  //core 2 to core0
#define MDM_CORE1VPE1_TO_CORE3VPE0          ((MDM32P)(MDM_BASE+0x30CC))  //core 3 to core0
#define MDM_CORE2VPE0_TO_CORE3VPE0          ((MDM32P)(MDM_BASE+0x30D0))  //core 4 to core0
#define MDM_CORE2VPE1_TO_CORE3VPE0          ((MDM32P)(MDM_BASE+0x30D4))  //core 5 to core0
#define MDM_CORE3VPE0_TO_CORE3VPE0          ((MDM32P)(MDM_BASE+0x30D8))  //core 6 to core0
#define MDM_CORE3VPE1_TO_CORE3VPE0          ((MDM32P)(MDM_BASE+0x30DC))  //core 7 to core0

#define MDM_MDM_SIMIF0_CTRL_30   ((MDM32P)(MDM_BASE+0x30E0))  //apb32
#define MDM_MDM_SIMIF1_CTRL_30   ((MDM32P)(MDM_BASE+0x30E4))  //apb32

#define MDM_TM_FH_CTRL_30        ((MDM32P)(MDM_BASE+0x30E8))  //apb32
#define MDM_DELAY_30	          ((MDM32P)(MDM_BASE+0x30Ec))  //apb32
#define MDM_RANDOM_DELAY_MIN_30  ((MDM32P)(MDM_BASE+0x30F0))  //apb32
#define MDM_RANDOM_DELAY_MAX_30  ((MDM32P)(MDM_BASE+0x30F4))  //apb32
#define MDM_URANDOM_RANGE_MIN_30 ((MDM32P)(MDM_BASE+0x30F8))  //apb32
#define MDM_URANDOM_RANGE_MAX_30 ((MDM32P)(MDM_BASE+0x30Fc))  //apb32

#define MDM_TM_TINFOMSG_31      ((MDM32P)(MDM_BASE+0x3100))  //apb32 Information Message Register (T)
#define MDM_TM_TPAR_31          ((MDM32P)(MDM_BASE+0x3104))  //apb32 message parameter
#define MDM_TM_INFOMSG_31       ((MDM32P)(MDM_BASE+0x3108))  //apb32 Information Message Register
#define MDM_TM_ERRMSG_31        ((MDM32P)(MDM_BASE+0x310C))  //apb32 Error Message Register
#define MDM_TM_TTAG_31          ((MDM32P)(MDM_BASE+0x3110))  //apb32 TTAG
#define MDM_TM_ENDSIM_31        ((MDM32P)(MDM_BASE+0x3114))  //apb32 End Simulation Register
#define MDM_TM_ERRCNT_31       ((MDM32P)(MDM_BASE+0x3118))  //apb32 Error Count Register
#define MDM_TM_DBGINFO_31       ((MDM32P)(MDM_BASE+0x311c))  //apb32 Debug Infomation
#define MDM_TM_TERRMSG_31       ((MDM32P)(MDM_BASE+0x3120))  //apb32 Error Message Register (T)
#define MDM_TM_TBLANK_31        ((MDM32P)(MDM_BASE+0x3124))  //apb32 Blank line (T)
#define MDM_TM_ENDFAIL_31       ((MDM32P)(MDM_BASE+0x3128))  //apb32 End Simulation With Fail Msg
#define MDM_TM_ENDSUCC_31       ((MDM32P)(MDM_BASE+0x312C))  //apb32 End Simulation With Success Msg
#define MDM_TM_ENDASSERT_31     ((MDM32P)(MDM_BASE+0x3130))  //apb32 End Simulation Register
#define MDM_TM_ALLFMT32B_31     ((MDM32P)(MDM_BASE+0x3134))  //apb32 Display All Format 32b Value
#define MDM_TM_HEXFMT32B_31     ((MDM32P)(MDM_BASE+0x3138))  //apb32 Display Hexa Format 32b Value
#define MDM_TM_DECFMT32B_31     ((MDM32P)(MDM_BASE+0x313C))  //apb32 Display Dec Format 32b Value
#define MDM_TM_BINFMT32B_31     ((MDM32P)(MDM_BASE+0x3140))  //apb32 Display Bin Format 32b Value
#define MDM_TM_HEXFMT16B_31     ((MDM32P)(MDM_BASE+0x3144))  //apb32 Display Hexa Format 16b Value
#define MDM_TM_DECFMT16B_31     ((MDM32P)(MDM_BASE+0x3148))  //apb32 Display Dec Format 16b Value
#define MDM_TM_BINFMT16B_31     ((MDM32P)(MDM_BASE+0x314C))  //apb32 Display Bin Format 16b Value

#define MDM_TM_MEMDUMPSTR_31    ((MDM32P)(MDM_BASE+0x3150))  //apb32 Start Address of Memory Dumping
#define MDM_TM_MEMDUMPSTOP_31   ((MDM32P)(MDM_BASE+0x3154))  //apb32 Stop Address of Memory Dumping

#define MDM_TM_MEMGOLDENSTR_31  ((MDM32P)(MDM_BASE+0x3158))  //apb32 Start Address of Memory Compare(Golden)
#define MDM_TM_MEMGOLDENSTOP_31 ((MDM32P)(MDM_BASE+0x315C))  //apb32 Stop Address of Memory Compare(Golden)

#define MDM_TM_MEMREVISESTR_31  ((MDM32P)(MDM_BASE+0x3160))  //apb32 Start Address of Memory Compare(Revised)
#define MDM_TM_MEMREVISESTOP_31 ((MDM32P)(MDM_BASE+0x3164))  //apb32 Stop Address of Memory Compare(Revised)
#define MDM_TM_EXT_MEM_INFO_31  ((MDM32P)(MDM_BASE+0x3168))  // apb32
                                       // [7:0]:   DRAM type  -> {0:SDR16, 1:SDR32, 2:DDR16, 3:DDR32, 4:DDR2}
                                       // [15:8]:  SRAM type  -> {0:ASRAM, 1:PSRAM}
                                       // [19:16]: Bank0 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [23:20]: Bank1 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [27:24]: Bank2 type -> {0:NONE, 1:SRAM, 2:DRAM}
                                       // [31:28]: Bank3 type -> {0:NONE, 1:SRAM, 2:DRAM}
#define MDM_TM_RUNTIME_USEC_31  ((MDM32P)(MDM_BASE+0x316C))  // apb32
#define MDM_TM_PHASE_31         ((MDM32P)(MDM_BASE+0x3170))  // apb32 rtl/post
                                       // [1:0]:   {0:none, 1:rtl, 2:pre, 3:post}
                                       // [5:4]:   {0:none, 1:max, 2:typ, 3:min}
#define MDM_TM_SIM_OPTION_31    ((MDM32P)(MDM_BASE+0x3174))  // apb32
                                       // [0]: PLL enable -> {0:OFF, 1:ON}
//`define TM_CFSDB_CTRL_31      ((MDM32P)(MDM_BASE+0x0b0c))  // apb32 CFSDB ctrl switch (+cfsdb_ctrl_off)
//`define TM_DMESS_CTRL_31      ((MDM32P)(MDM_BASE+0x0b10))  // apb32 dynamic message ctrl switch (+cmess_ctrl_off)

#define MDM_TM_FSDBDUMPFILE_31  ((MDM32P)(MDM_BASE+0x3180))  // apb32 $fsdbAutoSwitchDumpfile {0:divide per 200MB, others:divide per custom size}
#define MDM_TM_FSDBDUMPVARS_31  ((MDM32P)(MDM_BASE+0x3184))  // apb32 $fsdbDumpvars(custom, `PROJ_TMDL)
#define MDM_TM_FSDBDUMP_31      ((MDM32P)(MDM_BASE+0x3188))  // apb32 {0:$fsdbDumpoff, 1:$fsdbDumpon}
#define MDM_TM_FSDBDUMPSCOPE_31 ((MDM32P)(MDM_BASE+0x318C))  // apb32

#define MDM_TM_STR_CLEAR_31     ((MDM32P)(MDM_BASE+0x3190))  // apb32 clear string ptr
#define MDM_TM_STR_DISPLAY_31   ((MDM32P)(MDM_BASE+0x3194))  // apb32 display string buf
#define MDM_TM_STR0_31          ((MDM32P)(MDM_BASE+0x3198))  // apb32 string buffer to be displayed
#define MDM_TM_STR1_31          ((MDM32P)(MDM_BASE+0x319c))  // apb32 string buffer to be displayed
#define MDM_TM_STR2_31          ((MDM32P)(MDM_BASE+0x31a0))  // apb32 string buffer to be displayed
#define MDM_TM_STR3_31          ((MDM32P)(MDM_BASE+0x31a4))  // apb32 string buffer to be displayed
#define MDM_TM_STR4_31          ((MDM32P)(MDM_BASE+0x31a8))  // apb32 string buffer to be displayed
#define MDM_TM_STR5_31          ((MDM32P)(MDM_BASE+0x31ac))  // apb32 string buffer to be displayed
#define MDM_TM_STR6_31          ((MDM32P)(MDM_BASE+0x31b0))  // apb32 string buffer to be displayed
#define MDM_TM_STR7_31          ((MDM32P)(MDM_BASE+0x31b4))  // apb32 string buffer to be displayed

#define MDM_TRIG_IRQ_31         ((MDM32P)(MDM_BASE+0x31b8))  // apb32 trigger EIRQ
#define MDM_TRIG_IRQ2_31        ((MDM32P)(MDM_BASE+0x31bC))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG_31        ((MDM32P)(MDM_BASE+0x3178))  // apb32 trigger EIRQ
#define MDM_WAIT_TRIG2_31       ((MDM32P)(MDM_BASE+0x317C))  // apb32 trigger EIRQ

 // for MDM_cosim purpose, to replace bsi_reg usage
#define MDM_CORE0VPE0_TO_CORE3VPE1          ((MDM32P)(MDM_BASE+0x31C0))  //core 0 to core0 
#define MDM_CORE0VPE1_TO_CORE3VPE1          ((MDM32P)(MDM_BASE+0x31C4))  //core 1 to core0
#define MDM_CORE1VPE0_TO_CORE3VPE1          ((MDM32P)(MDM_BASE+0x31C8))  //core 2 to core0
#define MDM_CORE1VPE1_TO_CORE3VPE1          ((MDM32P)(MDM_BASE+0x31CC))  //core 3 to core0
#define MDM_CORE2VPE0_TO_CORE3VPE1          ((MDM32P)(MDM_BASE+0x31D0))  //core 4 to core0
#define MDM_CORE2VPE1_TO_CORE3VPE1          ((MDM32P)(MDM_BASE+0x31D4))  //core 5 to core0
#define MDM_CORE3VPE0_TO_CORE3VPE1          ((MDM32P)(MDM_BASE+0x31D8))  //core 6 to core0
#define MDM_CORE3VPE1_TO_CORE3VPE1          ((MDM32P)(MDM_BASE+0x31DC))  //core 7 to core0

#define MDM_MDM_SIMIF0_CTRL_31   ((MDM32P)(MDM_BASE+0x31E0))  //apb32
#define MDM_MDM_SIMIF1_CTRL_31   ((MDM32P)(MDM_BASE+0x31E4))  //apb32

#define MDM_TM_FH_CTRL_31        ((MDM32P)(MDM_BASE+0x31E8))  //apb32
#define MDM_DELAY_31	          ((MDM32P)(MDM_BASE+0x31Ec))  //apb32
#define MDM_RANDOM_DELAY_MIN_31  ((MDM32P)(MDM_BASE+0x31F0))  //apb32
#define MDM_RANDOM_DELAY_MAX_31  ((MDM32P)(MDM_BASE+0x31F4))  //apb32
#define MDM_URANDOM_RANGE_MIN_31 ((MDM32P)(MDM_BASE+0x31F8))  //apb32
#define MDM_URANDOM_RANGE_MAX_31 ((MDM32P)(MDM_BASE+0x31Fc))  //apb32

#endif

#define MIPS_CORE0_TERR_BASE 0x00020001
#define MIPS_CORE0_TINFO_BASE 0x00020017
#define MIPS_CORE0_FSDBSCOPE_BASE 0x0002003b

#ifndef __MTK_TARGET__
static char *terr_msg[] = {
"data check error read_back_data=%x,golden_data=%x", //0
"REG_MDCFGCTL_DUMMY miscompare", //1
"REG_MDGDMA_FDSAR1_DV_DUMMY miscompare", //2
"REG_MDGPTM_DUMMY miscompare", //3
"REG_MDPERIMISC_MD_AP_DUMMY miscompare", //4
"REG_MDPERIMISC_MDINFRA_DUMMY miscompare", //5
"REG_MDPERIMISC_MDMCU_DUMMY miscompare", //6
"REG_MDPERIMISC_L1_AP_DUMMY miscompare", //7
"REG_MDPERIMISC_DUMMY miscompare", //8
"REG_MDCIRQ_DUMMY miscompare", //9
"REG_MDOSTIMER_DUMMY0_REG miscompare", //10
"REG_MDRGU_DUMMY miscompare", //11
"REG_MDEINT_MD_DUMMY miscompare", //12
"REG_MDTOP_GLBCON_MD_TOP_DUMMY miscompare", //13
"REG_MDTOP_PLLMIXED_PLL_DUMMY miscompare", //14
"REG_MDTOP_CLKSW_CLK_DUMMY miscompare", //15
"REG_SOE_DUMMY_0 miscompare", //16
"REG_MDINFRAMISC_DUMMY_REGISTER miscompare", //17
"REG_L1_IDC_CTRL_IDC_CTRL_DUMMY_ADDR miscompare", //18
"REG_MDMCU_BUS_CONFIG_MCU_BUS_CONFIG4 miscompare", //19
"usip slave reg test miscompare", //20
"rxbrp slave reg test miscompare" //21
};

static char *tinfo_msg[] = {
"Hello world, this is IRQ_Proc... ", //0
"Irq service begin... ", //1
"Read IRQ_Proc id is %x...", //2
"Irq service end... ", //3
"Enter core0_vpe0... with cpu_num %x", //4
"execute the md_common ...", //5
"user testcase start ...", //6
"user testcase end...", //7
"Enter core0_vpe1... with cpu_num %x", //8
"Enter core1_vpe0... with cpu_num %x", //9
"Enter core1_vpe1... with cpu_num %x", //10
"read&write emi test begin", //11
"read&write emi test end", //12
"REG_MDCFGCTL_DUMMY:", //13
"write data: %x", //14
"read data: %x", //15
"REG_MDGDMA_FDSAR1_DV_DUMMY:", //16
"REG_MDGPTM_DUMMY:", //17
"REG_MDPERIMISC_MD_AP_DUMMY:", //18
"REG_MDPERIMISC_MDINFRA_DUMMY:", //19
"REG_MDPERIMISC_MDMCU_DUMMY:", //20
"REG_MDPERIMISC_L1_AP_DUMMY:", //21
"REG_MDPERIMISC_DUMMY:", //22
"REG_MDCIRQ_DUMMY:", //23
"REG_MDOSTIMER_DUMMY0_REG:", //24
"REG_MDRGU_DUMMY:", //25
"REG_MDEINT_MD_DUMMY:", //26
"REG_MDTOP_GLBCON_MD_TOP_DUMMY:", //27
"REG_MDTOP_PLLMIXED_PLL_DUMMY:", //28
"REG_MDTOP_CLKSW_CLK_DUMMY:", //29
"REG_SOE_DUMMY_0:", //30
"REG_MDINFRAMISC_DUMMY_REGISTER:", //31
"REG_L1_IDC_CTRL_IDC_CTRL_DUMMY_ADDR:", //32
"REG_MDMCU_BUS_CONFIG_MCU_BUS_CONFIG4:", //33
"usip slave test:", //34
"rxbrp slave test:" //35
};
#endif


#define FATAL_ERROR_MAGIC 0x4C544146  //ASCII code FATL
#define ASSERT_ERROR_MAGIC 0x54525341 //ASCII code ASRT
#define VPE_HEADER_MAGIC 0xFF000000 		//VPE number
#define EXCEPTION_ERROR_MAGIC 0x50435845 //ASCII code EXCP
#define MDM_APP_INIT_MAGIC 0x30504100

#if !defined(__COSIM_BYPASS_DRV__)

#define MDM_INT32_WRITE(int32_log)
#define MDM_TMMEMDUMP_STR_WRITE(int32_log)
#define MDM_TMMEMDUMP_STOP_WRITE(int32_log)
#define MDM_TM_END_FAIL_WRITE
#define MDM_TM_END_SUCC_WRITE
#define MDM_STR0_WRITE(char_write)
#define MDM_TM_STR_CLEAR_WRITE(clear_buffer_num)
#define MDM_TM_STR_DISPLAY_WRITE(display_buffer_num)

#else

// Check these macro defines are the same for MT6763 Cosim?
#define MDM_TM_HEXFMT_32B   MDM_TM_HEXFMT32B

extern void MDM_ASSERT(kal_uint32 e1, kal_uint32 e2, kal_uint32 e3);
extern void MDM_kal_fatal_error_handler(kal_uint32 code1, kal_uint32 code2);

#define MDM_INT32_WRITE(int32_log) \
do {  \
	(*MDM_TM_HEXFMT32B)=(kal_uint32)VPE_HEADER_MAGIC|kal_get_current_vpe_id(); \
	(*MDM_TM_HEXFMT32B)=(kal_uint32)(int32_log); \
} while(0)

#define MDM_TMMEMDUMP_STR_WRITE(int32_log)
#define MDM_TMMEMDUMP_STOP_WRITE(int32_log)
#define MDM_TM_END_FAIL_WRITE (*MDM_TM_ENDFAIL=0);
#define MDM_TM_END_SUCC_WRITE (*MDM_TM_ENDSUCC=0);
#define MDM_STR0_WRITE(char_write)
#define MDM_TM_STR_CLEAR_WRITE(clear_buffer_num)
#define MDM_TM_STR_DISPLAY_WRITE(display_buffer_num)

#endif

#endif //_MDM_TRACE_H

