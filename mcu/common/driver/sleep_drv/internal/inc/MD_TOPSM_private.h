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
 *    MD_TOPSM_private.h
 *
 * Project:
 * --------
 *    MT6293
 *
 * Description:
 * ------------
 *    MCU Resource Management (MCU TOPSM) configuration.
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
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifdef __CENTRALIZED_SLEEP_MANAGER__

#ifndef MD_TOPSM_PRIVATE_H
#define MD_TOPSM_PRIVATE_H

#if defined(__ASSEMBLER__)
#define FRC_REG 0xA00D0800
#define ENABLE_KEY 0xF2CC0001
.macro ENABLE_FRC
.set push 
.set nomips16
	li a0, FRC_REG
	li a1, ENABLE_KEY
	sw a1, 0x0(a0)
.set pop
.endm
#else

#include "ostd_private.h" // for OST_ISR and IS_SW_LOAD_L1_EXIST
#include "sleepdrv_interface.h"

#define __CENTRALIZED_SLEEP_MANAGER_V2__


/******************** Register Definition ********************/
#define MD_TOPSM_BASE     BASE_MADDR_MDTOPSM   /* MCU_TOP_SleepMode_base: 0xFF830000(Strongly order) is used for 6290 */
#define MD_CSC_BASE		  (0xA0100000)
#define MDGLOBAL_DCM_BASE BASE_MADDR_MDTOP_GLBCON /* BASE_MADDR_MD_GLBCON_TOP_DCM */
#define MDPERIMISC_BASE BASE_MADDR_MDPERIMISC
#define MDCORESYSMISC_BASE BASE_MADDR_MCUSYS_MISC_REG
#define MDSMICFG_BASE BASE_MADDR_MDSMICFG
/*=========================================
** Power Control Register0:
**    1. Specify each MTCMOS domain power settle time (32K based) & reset deassertion contrl type
**    2. Specify MTCMOS SUBSYS Power Control Sequence for SW MTCMOS control sequence mode by bit[15] (this feature is for backup solution)
**    3. Specify each MTCMOS domain is always on or off
**    4. Sepcify the starting period for memory power on
**    5. Write 0xb2 << 24 to update this register
**      [4:0] PWRON_SETTLE
**        Subsys power on settling period (32KHz clock based), Min = 2
**      [5:5] PWR_ON_1_MODE
**        2th power on channel control mode
**        0: trigger 2th power on after 4 cycles of 26m of 1th power on
**        1: trigger 2th power on after 1 cycle of 32k of 1th power on
**      [6:6] RST_EN_MODE
**        Subsys reset deassetion control
**        0: reset will not be triggered when power off
**        1: reset will be triggered when power off
**      [7:7] PWR_FORCE_ON
**        PWR force on bit:
**        If the mtcmos domain is default on, this bit will be 1. For the default on mtcmos domain, SW must manually assigns this bit as 0
**        if necessary to disable force on function
**      [13:8] PWR_MEMUP_ST
**        specify the starting period for memory power on.
**        To reduce in-ruch current, it's necessary to configure different starting period for each mtcmos domain in hw mode.
**        The unit is 26m cycle * (mcf_cnt_base +1)
**      [14:14] PWR_RESERVED
**
**      [15:15] PWR_CTRL
**        Enable SW MTCMOS control sequence mode or not
**=========================================*/
#define MD_TOPSM_SM_PWR_CON0                               ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0000))
/*=========================================
** Power Control Register1:
**    1. Specify each MTCMOS domain power settle time (32K based) & reset deassertion contrl type
**    2. Specify MTCMOS SUBSYS Power Control Sequence for SW MTCMOS control sequence mode by bit[15] (this feature is for backup solution)
**    3. Specify each MTCMOS domain is always on or off
**    4. Sepcify the starting period for memory power on
**    5. Write 0xb2 << 24 to update this register
**      [4:0] PWRON_SETTLE
**        Subsys power on settling period (32KHz clock based), Min = 2
**      [5:5] PWR_ON_1_MODE
**        2th power on channel control mode
**        0: trigger 2th power on after 4 cycles of 26m of 1th power on
**        1: trigger 2th power on after 1 cycle of 32k of 1th power on
**      [6:6] RST_EN_MODE
**        Subsys reset deassetion control
**        0: reset will not be triggered when power off
**        1: reset will be triggered when power off
**      [7:7] PWR_FORCE_ON
**        PWR force on bit:
**        If the mtcmos domain is default on, this bit will be 1. For the default on mtcmos domain, SW must manually assigns this bit as 0
**        if necessary to disable force on function
**      [13:8] PWR_MEMUP_ST
**        specify the starting period for memory power on.
**        To reduce in-ruch current, it's necessary to configure different starting period for each mtcmos domain in hw mode.
**        The unit is 26m cycle * (mcf_cnt_base +1)
**      [14:14] PWR_RESERVED
**
**      [15:15] PWR_CTRL
**        Enable SW MTCMOS control sequence mode or not
**=========================================*/
#define MD_TOPSM_SM_PWR_CON1                               ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0004))
/*=========================================
** Power Control Register2:
**    1. Specify each MTCMOS domain power settle time (32K based) & reset deassertion contrl type
**    2. Specify MTCMOS SUBSYS Power Control Sequence for SW MTCMOS control sequence mode by bit[15] (this feature is for backup solution)
**    3. Specify each MTCMOS domain is always on or off
**    4. Sepcify the starting period for memory power on
**    5. Write 0xb2 << 24 to update this register
**      [4:0] PWRON_SETTLE
**        Subsys power on settling period (32KHz clock based), Min = 2
**      [5:5] PWR_ON_1_MODE
**        2th power on channel control mode
**        0: trigger 2th power on after 4 cycles of 26m of 1th power on
**        1: trigger 2th power on after 1 cycle of 32k of 1th power on
**      [6:6] RST_EN_MODE
**        Subsys reset deassetion control
**        0: reset will not be triggered when power off
**        1: reset will be triggered when power off
**      [7:7] PWR_FORCE_ON
**        PWR force on bit:
**        If the mtcmos domain is default on, this bit will be 1. For the default on mtcmos domain, SW must manually assigns this bit as 0
**        if necessary to disable force on function
**      [13:8] PWR_MEMUP_ST
**        specify the starting period for memory power on.
**        To reduce in-ruch current, it's necessary to configure different starting period for each mtcmos domain in hw mode.
**        The unit is 26m cycle * (mcf_cnt_base +1)
**      [14:14] PWR_RESERVED
**
**      [15:15] PWR_CTRL
**        Enable SW MTCMOS control sequence mode or not
**=========================================*/
#define MD_TOPSM_SM_PWR_CON2                               ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0008))
/*=========================================
** Power Control Register3:
**    1. Specify each MTCMOS domain power settle time (32K based) & reset deassertion contrl type
**    2. Specify MTCMOS SUBSYS Power Control Sequence for SW MTCMOS control sequence mode by bit[15] (this feature is for backup solution)
**    3. Specify each MTCMOS domain is always on or off
**    4. Sepcify the starting period for memory power on
**    5. Write 0xb2 << 24 to update this register
**      [4:0] PWRON_SETTLE
**        Subsys power on settling period (32KHz clock based), Min = 2
**      [5:5] PWR_ON_1_MODE
**        2th power on channel control mode
**        0: trigger 2th power on after 4 cycles of 26m of 1th power on
**        1: trigger 2th power on after 1 cycle of 32k of 1th power on
**      [6:6] RST_EN_MODE
**        Subsys reset deassetion control
**        0: reset will not be triggered when power off
**        1: reset will be triggered when power off
**      [7:7] PWR_FORCE_ON
**        PWR force on bit:
**        If the mtcmos domain is default on, this bit will be 1. For the default on mtcmos domain, SW must manually assigns this bit as 0
**        if necessary to disable force on function
**      [13:8] PWR_MEMUP_ST
**        specify the starting period for memory power on.
**        To reduce in-ruch current, it's necessary to configure different starting period for each mtcmos domain in hw mode.
**        The unit is 26m cycle * (mcf_cnt_base +1)
**      [14:14] PWR_RESERVED
**
**      [15:15] PWR_CTRL
**        Enable SW MTCMOS control sequence mode or not
**=========================================*/
#define MD_TOPSM_SM_PWR_CON3                               ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x000C))
/*=========================================
** Power Control Register4:
**    1. Specify each MTCMOS domain power settle time (32K based) & reset deassertion contrl type
**    2. Specify MTCMOS SUBSYS Power Control Sequence for SW MTCMOS control sequence mode by bit[15] (this feature is for backup solution)
**    3. Specify each MTCMOS domain is always on or off
**    4. Sepcify the starting period for memory power on
**    5. Write 0xb2 << 24 to update this register
**      [4:0] PWRON_SETTLE
**        Subsys power on settling period (32KHz clock based), Min = 2
**      [5:5] PWR_ON_1_MODE
**        2th power on channel control mode
**        0: trigger 2th power on after 4 cycles of 26m of 1th power on
**        1: trigger 2th power on after 1 cycle of 32k of 1th power on
**      [6:6] RST_EN_MODE
**        Subsys reset deassetion control
**        0: reset will not be triggered when power off
**        1: reset will be triggered when power off
**      [7:7] PWR_FORCE_ON
**        PWR force on bit:
**        If the mtcmos domain is default on, this bit will be 1. For the default on mtcmos domain, SW must manually assigns this bit as 0
**        if necessary to disable force on function
**      [13:8] PWR_MEMUP_ST
**        specify the starting period for memory power on.
**        To reduce in-ruch current, it's necessary to configure different starting period for each mtcmos domain in hw mode.
**        The unit is 26m cycle * (mcf_cnt_base +1)
**      [14:14] PWR_RESERVED
**
**      [15:15] PWR_CTRL
**        Enable SW MTCMOS control sequence mode or not
**=========================================*/
#define MD_TOPSM_SM_PWR_CON4                               ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0010))
/*=========================================
** Power Control Register5:
**    1. Specify each MTCMOS domain power settle time (32K based) & reset deassertion contrl type
**    2. Specify MTCMOS SUBSYS Power Control Sequence for SW MTCMOS control sequence mode by bit[15] (this feature is for backup solution)
**    3. Specify each MTCMOS domain is always on or off
**    4. Sepcify the starting period for memory power on
**    5. Write 0xb2 << 24 to update this register
**      [4:0] PWRON_SETTLE
**        Subsys power on settling period (32KHz clock based), Min = 2
**      [5:5] PWR_ON_1_MODE
**        2th power on channel control mode
**        0: trigger 2th power on after 4 cycles of 26m of 1th power on
**        1: trigger 2th power on after 1 cycle of 32k of 1th power on
**      [6:6] RST_EN_MODE
**        Subsys reset deassetion control
**        0: reset will not be triggered when power off
**        1: reset will be triggered when power off
**      [7:7] PWR_FORCE_ON
**        PWR force on bit:
**        If the mtcmos domain is default on, this bit will be 1. For the default on mtcmos domain, SW must manually assigns this bit as 0
**        if necessary to disable force on function
**      [13:8] PWR_MEMUP_ST
**        specify the starting period for memory power on.
**        To reduce in-ruch current, it's necessary to configure different starting period for each mtcmos domain in hw mode.
**        The unit is 26m cycle * (mcf_cnt_base +1)
**      [14:14] PWR_RESERVED
**
**      [15:15] PWR_CTRL
**        Enable SW MTCMOS control sequence mode or not
**=========================================*/
#define MD_TOPSM_SM_PWR_CON5                               ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0014))
/*=========================================
** Power Control Register6:
**    1. Specify each MTCMOS domain power settle time (32K based) & reset deassertion contrl type
**    2. Specify MTCMOS SUBSYS Power Control Sequence for SW MTCMOS control sequence mode by bit[15] (this feature is for backup solution)
**    3. Specify each MTCMOS domain is always on or off
**    4. Sepcify the starting period for memory power on
**    5. Write 0xb2 << 24 to update this register
**      [4:0] PWRON_SETTLE
**        Subsys power on settling period (32KHz clock based), Min = 2
**      [5:5] PWR_ON_1_MODE
**        2th power on channel control mode
**        0: trigger 2th power on after 4 cycles of 26m of 1th power on
**        1: trigger 2th power on after 1 cycle of 32k of 1th power on
**      [6:6] RST_EN_MODE
**        Subsys reset deassetion control
**        0: reset will not be triggered when power off
**        1: reset will be triggered when power off
**      [7:7] PWR_FORCE_ON
**        PWR force on bit:
**        If the mtcmos domain is default on, this bit will be 1. For the default on mtcmos domain, SW must manually assigns this bit as 0
**        if necessary to disable force on function
**      [13:8] PWR_MEMUP_ST
**        specify the starting period for memory power on.
**        To reduce in-ruch current, it's necessary to configure different starting period for each mtcmos domain in hw mode.
**        The unit is 26m cycle * (mcf_cnt_base +1)
**      [14:14] PWR_RESERVED
**        Enable SW MTCMOS control sequence mode or not
**      [15:15] PWR_CTRL
**        SW MTCMOS control sequence mode: Subsys bus protection request
**=========================================*/
#define MD_TOPSM_SM_PWR_CON6                               ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0018))
/*=========================================
** Power Control Register7:
**    1. Specify each MTCMOS domain power settle time (32K based) & reset deassertion contrl type
**    2. Specify MTCMOS SUBSYS Power Control Sequence for SW MTCMOS control sequence mode by bit[15] (this feature is for backup solution)
**    3. Specify each MTCMOS domain is always on or off
**    4. Sepcify the starting period for memory power on
**    5. Write 0xb2 << 24 to update this register
**      [4:0] PWRON_SETTLE
**        Subsys power on settling period (32KHz clock based), Min = 2
**      [5:5] PWR_ON_1_MODE
**        2th power on channel control mode
**        0: trigger 2th power on after 4 cycles of 26m of 1th power on
**        1: trigger 2th power on after 1 cycle of 32k of 1th power on
**      [6:6] RST_EN_MODE
**        Subsys reset deassetion control
**        0: reset will not be triggered when power off
**        1: reset will be triggered when power off
**      [7:7] PWR_FORCE_ON
**        PWR force on bit:
**        If the mtcmos domain is default on, this bit will be 1. For the default on mtcmos domain, SW must manually assigns this bit as 0
**        if necessary to disable force on function
**      [13:8] PWR_MEMUP_ST
**        specify the starting period for memory power on.
**        To reduce in-ruch current, it's necessary to configure different starting period for each mtcmos domain in hw mode.
**        The unit is 26m cycle * (mcf_cnt_base +1)
**      [14:14] PWR_RESERVED
**        Enable SW MTCMOS control sequence mode or not
**      [15:15] PWR_CTRL
**        SW MTCMOS control sequence mode: Subsys bus protection request
**=========================================*/
#define MD_TOPSM_SM_PWR_CON7                               ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x001C))
/*=========================================
** SW PWR control:
**    Specify the MTCMOS domain on/off for SW PWR control mode,
**    mtcmos domain pwr on procedure:
**    a. write 1 at corresponding register
**    b. waiting 33us
**    c. polling SM_PWR_RDY register
**      [0:0] PWR0_ON_SW_CTRL0
**        SW PWR control mode: write 1 to power on mtcmos0 by SW process0
**      [1:1] PWR1_ON_SW_CTRL0
**        SW PWR control mode: write 1 to power on mtcmos1 by SW process0
**      [2:2] PWR2_ON_SW_CTRL0
**        SW PWR control mode: write 1 to power on mtcmos2 by SW process0
**      [3:3] PWR3_ON_SW_CTRL0
**        SW PWR control mode: write 1 to power on mtcmos3 by SW process0
**      [4:4] PWR4_ON_SW_CTRL0
**        SW PWR control mode: write 1 to power on mtcmos4 by SW process0
**      [5:5] PWR5_ON_SW_CTRL0
**        SW PWR control mode: write 1 to power on mtcmos5 by SW process0
**      [6:6] PWR6_ON_SW_CTRL0
**        SW PWR control mode: write 1 to power on mtcmos6 by SW process0
**      [7:7] PWR7_ON_SW_CTRL0
**        SW PWR control mode: write 1 to power on mtcmos7 by SW process0
**=========================================*/
#define MD_TOPSM_SM_PWR_ON_SW_CTRL0                        ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0080))
/*=========================================
** SW PWR control:
**    Specify the MTCMOS domain on/off for SW PWR control mode,
**    mtcmos domain pwr on procedure:
**    a. write 1 at corresponding register
**    b. waiting 33us
**    c. polling SM_PWR_RDY register
**      [0:0] PWR0_ON_SW_CTRL1
**        SW PWR control mode: write 1 to power on mtcmos0 by SW process1
**      [1:1] PWR1_ON_SW_CTRL1
**        SW PWR control mode: write 1 to power on mtcmos1 by SW process1
**      [2:2] PWR2_ON_SW_CTRL1
**        SW PWR control mode: write 1 to power on mtcmos2 by SW process1
**      [3:3] PWR3_ON_SW_CTRL1
**        SW PWR control mode: write 1 to power on mtcmos3 by SW process1
**      [4:4] PWR4_ON_SW_CTRL1
**        SW PWR control mode: write 1 to power on mtcmos4 by SW process1
**      [5:5] PWR5_ON_SW_CTRL1
**        SW PWR control mode: write 1 to power on mtcmos5 by SW process1
**      [6:6] PWR6_ON_SW_CTRL1
**        SW PWR control mode: write 1 to power on mtcmos6 by SW process1
**      [7:7] PWR7_ON_SW_CTRL1
**        SW PWR control mode: write 1 to power on mtcmos7 by SW process1
**=========================================*/
#define MD_TOPSM_SM_PWR_ON_SW_CTRL1                        ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0084))
/*=========================================
** SW PWR control:
**    Specify the MTCMOS domain on/off for SW PWR control mode,
**    mtcmos domain pwr on procedure:
**    a. write 1 at corresponding register
**    b. waiting 33us
**    c. polling SM_PWR_RDY register
**      [0:0] PWR0_ON_SW_CTRL2
**        SW PWR control mode: write 1 to power on mtcmos0 by SW process2
**      [1:1] PWR1_ON_SW_CTRL2
**        SW PWR control mode: write 1 to power on mtcmos1 by SW process2
**      [2:2] PWR2_ON_SW_CTRL2
**        SW PWR control mode: write 1 to power on mtcmos2 by SW process2
**      [3:3] PWR3_ON_SW_CTRL2
**        SW PWR control mode: write 1 to power on mtcmos3 by SW process2
**      [4:4] PWR4_ON_SW_CTRL2
**        SW PWR control mode: write 1 to power on mtcmos4 by SW process2
**      [5:5] PWR5_ON_SW_CTRL2
**        SW PWR control mode: write 1 to power on mtcmos5 by SW process2
**      [6:6] PWR6_ON_SW_CTRL2
**        SW PWR control mode: write 1 to power on mtcmos6 by SW process2
**      [7:7] PWR7_ON_SW_CTRL2
**        SW PWR control mode: write 1 to power on mtcmos7 by SW process2
**=========================================*/
#define MD_TOPSM_SM_PWR_ON_SW_CTRL2                        ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0088))
/*=========================================
** SW PWR control:
**    Specify the MTCMOS domain on/off for SW PWR control mode,
**    mtcmos domain pwr on procedure:
**    a. write 1 at corresponding register
**    b. waiting 33us
**    c. polling SM_PWR_RDY register
**      [0:0] PWR0_ON_SW_CTRL3
**        SW PWR control mode: write 1 to power on mtcmos0 by SW process3
**      [1:1] PWR1_ON_SW_CTRL3
**        SW PWR control mode: write 1 to power on mtcmos1 by SW process3
**      [2:2] PWR2_ON_SW_CTRL3
**        SW PWR control mode: write 1 to power on mtcmos2 by SW process3
**      [3:3] PWR3_ON_SW_CTRL3
**        SW PWR control mode: write 1 to power on mtcmos3 by SW process3
**      [4:4] PWR4_ON_SW_CTRL3
**        SW PWR control mode: write 1 to power on mtcmos4 by SW process3
**      [5:5] PWR5_ON_SW_CTRL3
**        SW PWR control mode: write 1 to power on mtcmos5 by SW process3
**      [6:6] PWR6_ON_SW_CTRL3
**        SW PWR control mode: write 1 to power on mtcmos6 by SW process3
**      [7:7] PWR7_ON_SW_CTRL3
**        SW PWR control mode: write 1 to power on mtcmos7 by SW process3
**=========================================*/
#define MD_TOPSM_SM_PWR_ON_SW_CTRL3                        ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x008C))
/*=========================================
** SW PWR control:
**    Specify the MTCMOS domain on/off for SW PWR control mode
**    When to trigger power off: must confirm power is on & ready bit is on
**      [0:0] PWR0_OFF_SW_CTRL0
**        SW PWR control mode: write 1 to power off mtcmos0 by SW process0
**      [1:1] PWR1_OFF_SW_CTRL0
**        SW PWR control mode: write 1 to power off mtcmos1 by SW process0
**      [2:2] PWR2_OFF_SW_CTRL0
**        SW PWR control mode: write 1 to power off mtcmos2 by SW process0
**      [3:3] PWR3_OFF_SW_CTRL0
**        SW PWR control mode: write 1 to power off mtcmos3 by SW process0
**      [4:4] PWR4_OFF_SW_CTRL0
**        SW PWR control mode: write 1 to power off mtcmos4 by SW process0
**      [5:5] PWR5_OFF_SW_CTRL0
**        SW PWR control mode: write 1 to power off mtcmos5 by SW process0
**      [6:6] PWR6_OFF_SW_CTRL0
**        SW PWR control mode: write 1 to power off mtcmos6 by SW process0
**      [7:7] PWR7_OFF_SW_CTRL0
**        SW PWR control mode: write 1 to power off mtcmos7 by SW process0
**=========================================*/
#define MD_TOPSM_SM_PWR_OFF_SW_CTRL0                       ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x00A0))
/*=========================================
** SW PWR control:
**    Specify the MTCMOS domain on/off for SW PWR control mode
**    When to trigger power off: must confirm power is on & ready bit is on
**      [0:0] PWR0_OFF_SW_CTRL1
**        SW PWR control mode: write 1 to power off mtcmos0 by SW process1
**      [1:1] PWR1_OFF_SW_CTRL1
**        SW PWR control mode: write 1 to power off mtcmos1 by SW process1
**      [2:2] PWR2_OFF_SW_CTRL1
**        SW PWR control mode: write 1 to power off mtcmos2 by SW process1
**      [3:3] PWR3_OFF_SW_CTRL1
**        SW PWR control mode: write 1 to power off mtcmos3 by SW process1
**      [4:4] PWR4_OFF_SW_CTRL1
**        SW PWR control mode: write 1 to power off mtcmos4 by SW process1
**      [5:5] PWR5_OFF_SW_CTRL1
**        SW PWR control mode: write 1 to power off mtcmos5 by SW process1
**      [6:6] PWR6_OFF_SW_CTRL1
**        SW PWR control mode: write 1 to power off mtcmos6 by SW process1
**      [7:7] PWR7_OFF_SW_CTRL1
**        SW PWR control mode: write 1 to power off mtcmos7 by SW process1
**=========================================*/
#define MD_TOPSM_SM_PWR_OFF_SW_CTRL1                       ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x00A4))
/*=========================================
** SW PWR control:
**    Specify the MTCMOS domain on/off for SW PWR control mode
**    When to trigger power off: must confirm power is on & ready bit is on
**      [0:0] PWR0_OFF_SW_CTRL2
**        SW PWR control mode: write 1 to power off mtcmos0 by SW process2
**      [1:1] PWR1_OFF_SW_CTRL2
**        SW PWR control mode: write 1 to power off mtcmos1 by SW process2
**      [2:2] PWR2_OFF_SW_CTRL2
**        SW PWR control mode: write 1 to power off mtcmos2 by SW process2
**      [3:3] PWR3_OFF_SW_CTRL2
**        SW PWR control mode: write 1 to power off mtcmos3 by SW process2
**      [4:4] PWR4_OFF_SW_CTRL2
**        SW PWR control mode: write 1 to power off mtcmos4 by SW process2
**      [5:5] PWR5_OFF_SW_CTRL2
**        SW PWR control mode: write 1 to power off mtcmos5 by SW process2
**      [6:6] PWR6_OFF_SW_CTRL2
**        SW PWR control mode: write 1 to power off mtcmos6 by SW process2
**      [7:7] PWR7_OFF_SW_CTRL2
**        SW PWR control mode: write 1 to power off mtcmos7 by SW process2
**=========================================*/
#define MD_TOPSM_SM_PWR_OFF_SW_CTRL2                       ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x00A8))
/*=========================================
** SW PWR control:
**    Specify the MTCMOS domain on/off for SW PWR control mode
**    When to trigger power off: must confirm power is on & ready bit is on
**      [0:0] PWR0_OFF_SW_CTRL3
**        SW PWR control mode: write 1 to power off mtcmos0 by SW process3
**      [1:1] PWR1_OFF_SW_CTRL3
**        SW PWR control mode: write 1 to power off mtcmos1 by SW process3
**      [2:2] PWR2_OFF_SW_CTRL3
**        SW PWR control mode: write 1 to power off mtcmos2 by SW process3
**      [3:3] PWR3_OFF_SW_CTRL3
**        SW PWR control mode: write 1 to power off mtcmos3 by SW process3
**      [4:4] PWR4_OFF_SW_CTRL3
**        SW PWR control mode: write 1 to power off mtcmos4 by SW process3
**      [5:5] PWR5_OFF_SW_CTRL3
**        SW PWR control mode: write 1 to power off mtcmos5 by SW process3
**      [6:6] PWR6_OFF_SW_CTRL3
**        SW PWR control mode: write 1 to power off mtcmos6 by SW process3
**      [7:7] PWR7_OFF_SW_CTRL3
**        SW PWR control mode: write 1 to power off mtcmos7 by SW process3
**=========================================*/
#define MD_TOPSM_SM_PWR_OFF_SW_CTRL3                       ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x00AC))
/*=========================================
** power settle timer parameter 0:
**    Specify the timing relationship  for power control sequence
**      [3:0] BUSPROT_SETTLE
**        Bus Protion Settling Time (26MHz clock based)
**      [7:4] MEMPROT_SETTLE
**        Memory protect Settling Time (26MHz clock based)
**      [11:8] ISOEN_SETTLE
**        Isolation Enable Settling Time (26MHz clock based)
**      [17:12] RESET_SETTLE
**        Reset Settling Time (26MHz clock based)
**      [25:20] MEMUP_SETTLE
**        Memory Power on Settling Time (26MHz clock based)
**      [31:28] MEMISO_SETTLE
**        Memory Isolation Enable Settling Time (26MHz clock based)
**=========================================*/
#define MD_TOPSM_SM_PWR_PER0                               ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x00C0))
/*=========================================
** power settle timer parameter 1:
**    Specify the timing relationship  for power control sequence
**      [3:0] CLKEN_SETTLE
**        Clock Enable Settling Time (26MHz clock based)
**      [7:4] ISOOFF_SETTLE
**        Isolation Disable Settling Time (26MHz clock based)
**      [11:8] CLKOFF_SETTLE
**        Clock Disable Settling Time (26MHz clock based)
**      [15:12] DISRST_SETTLE
**        Disable Reset Settling Time (26MHz clock based)
**      [19:16] WAIT_ON_SETTLE
**        Wait On Settling Time (26MHz clock based)
**      [28:24] MAX_PWR_SETTLE_TIME
**        Maximun Power Settling Time (among each PWRON_SETTLE in SM_PWR_CONx) (32KHz clock based) for MTCMOS domain in HW mode
**=========================================*/
#define MD_TOPSM_SM_PWR_PER1                               ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x00C4))
/*=========================================
** power settle timer parameter 1:
**    Specify the protect ready is ignored or not when MTCMOS is in off flow
**      [0:0] PWR0_BYPASS_PROTECT_RDY
**        Bus protect ready is ignored or not for PWR0
**      [1:1] PWR1_BYPASS_PROTECT_RDY
**        Bus protect ready is ignored or not for PWR1
**      [2:2] PWR2_BYPASS_PROTECT_RDY
**        Bus protect ready is ignored or not for PWR2
**      [3:3] PWR3_BYPASS_PROTECT_RDY
**        Bus protect ready is ignored or not for PWR3
**      [4:4] PWR4_BYPASS_PROTECT_RDY
**        Bus protect ready is ignored or not for PWR4
**      [5:5] PWR5_BYPASS_PROTECT_RDY
**        Bus protect ready is ignored or not for PWR5
**      [6:6] PWR6_BYPASS_PROTECT_RDY
**        Bus protect ready is ignored or not for PWR6
**      [7:7] PWR7_BYPASS_PROTECT_RDY
**        Bus protect ready is ignored or not for PWR7
**=========================================*/
#define MD_TOPSM_SM_PWR_BYPASS_PROTECT_RDY                 ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x00C8))
/*=========================================
** Power Ready Register:
**    power ready bit
**      [0:0] PWR0_RDY_TRG
**        triggered by power0 ready from low to high
**      [1:1] PWR1_RDY_TRG
**        triggered by power1 ready from low to high
**      [2:2] PWR2_RDY_TRG
**        triggered by power2 ready from low to high
**      [3:3] PWR3_RDY_TRG
**        triggered by power3 ready from low to high
**      [4:4] PWR4_RDY_TRG
**        triggered by power4 ready from low to high
**      [5:5] PWR5_RDY_TRG
**        triggered by power5 ready from low to high
**      [6:6] PWR6_RDY_TRG
**        triggered by power6 ready from low to high
**      [7:7] PWR7_RDY_TRG
**        triggered by power7 ready from low to high
**=========================================*/
#define MD_TOPSM_SM_PWR_RDY_REG                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x00D0))
/*=========================================
** Power Ready Register:
**    power ready bit
**      [0:0] PWR0_RDY
**        power0 ready
**      [1:1] PWR1_RDY
**        power1 ready
**      [2:2] PWR2_RDY
**        power2 ready
**      [3:3] PWR3_RDY
**        power3 ready
**      [4:4] PWR4_RDY
**        power4 ready
**      [5:5] PWR5_RDY
**        power5 ready
**      [6:6] PWR6_RDY
**        power6 ready
**      [7:7] PWR7_RDY
**        power7 ready
**=========================================*/
#define MD_TOPSM_SM_PWR_RDY                                ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x00D4))
/*=========================================
** MTCMOS signal that SW control:
**    Specify MTCMOS SUBSYS Power Control Sequence for SW MTCMOS control sequence mode by the bit[15] in SM_PWR_CONx (this feature is for backup solution)
**      [0:0] PWR_PROTECT_REQ
**        SW MTCMOS control sequence mode: Subsys protect req
**      [1:1] PWR_ON_0
**        SW MTCMOS control sequence mode: Subsys power on
**      [2:2] PWR_ON_1
**        SW MTCMOS control sequence mode: Subsys power on
**      [3:3] PWR_CLK_DIS
**        SW MTCMOS control sequence mode: Subsys clock disable
**      [4:4] PWR_ISO
**        SW MTCMOS control sequence mode: Subsys isolation enable
**      [5:5] PWR_RST_B
**        SW MTCMOS control sequence mode: Subsys power on reset
**      [6:6] PWR_MEM_PROT
**        SW MTCMOS control sequence mode: Subsys memory protection
**      [7:7] PWR_MEM_ISOINTB
**        SW MTCMOS control sequence mode: Power memory isolation
**      [8:8] PWR_MEM_OFF
**        SW MTCMOS control sequence mode: Subsys memory power off
**      [9:9] PWR_RESERVED
**
**=========================================*/
#define MD_TOPSM_SW_PWR_MTCMOS_SW_CTRL                     ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x00E0))
/*=========================================
** TIMER channel request mask bit:
**    TIMER channel request mask bit
**      [0:0] SM_TMR0_REQ_MASK
**        TIMER0 channel request mask bit
**      [1:1] SM_TMR1_REQ_MASK
**        TIMER1 channel request mask bit
**      [2:2] SM_TMR2_REQ_MASK
**        TIMER2 channel request mask bit
**      [3:3] SM_TMR3_REQ_MASK
**        TIMER3 channel request mask bit
**      [4:4] SM_TMR4_REQ_MASK
**        TIMER4 channel request mask bit
**      [5:5] SM_TMR5_REQ_MASK
**        TIMER5 channel request mask bit
**      [6:6] SM_TMR6_REQ_MASK
**        TIMER6 channel request mask bit
**      [7:7] SM_TMR7_REQ_MASK
**        TIMER7 channel request mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_REQ_MASK                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0100))
/*=========================================
** TIMER channel sysclk ctrl mask bit:
**    TIMER channel sysclk ctrl mask bit
**      [0:0] SM_TMR0_SYSCLK_MASK
**        TIMER0 channel sysclk ctrl mask bit
**      [1:1] SM_TMR1_SYSCLK_MASK
**        TIMER1 channel sysclk ctrl mask bit
**      [2:2] SM_TMR2_SYSCLK_MASK
**        TIMER2 channel sysclk ctrl mask bit
**      [3:3] SM_TMR3_SYSCLK_MASK
**        TIMER3 channel sysclk ctrl mask bit
**      [4:4] SM_TMR4_SYSCLK_MASK
**        TIMER4 channel sysclk ctrl mask bit
**      [5:5] SM_TMR5_SYSCLK_MASK
**        TIMER5 channel sysclk ctrl mask bit
**      [6:6] SM_TMR6_SYSCLK_MASK
**        TIMER6 channel sysclk ctrl mask bit
**      [7:7] SM_TMR7_SYSCLK_MASK
**        TIMER7 channel sysclk ctrl mask bit
**      [8:8] SM_TMR0_SYSCLK1_MASK
**        TIMER0 channel sysclk1 ctrl mask bit
**      [9:9] SM_TMR1_SYSCLK1_MASK
**        TIMER1 channel sysclk1 ctrl mask bit
**      [10:10] SM_TMR2_SYSCLK1_MASK
**        TIMER2 channel sysclk1 ctrl mask bit
**      [11:11] SM_TMR3_SYSCLK1_MASK
**        TIMER3 channel sysclk1 ctrl mask bit
**      [12:12] SM_TMR4_SYSCLK1_MASK
**        TIMER4 channel sysclk1 ctrl mask bit
**      [13:13] SM_TMR5_SYSCLK1_MASK
**        TIMER5 channel sysclk1 ctrl mask bit
**      [14:14] SM_TMR6_SYSCLK1_MASK
**        TIMER6 channel sysclk1 ctrl mask bit
**      [15:15] SM_TMR7_SYSCLK1_MASK
**        TIMER7 channel sysclk1 ctrl mask bit
**      [16:16] SM_TMR0_SYSCLK2_MASK
**        TIMER0 channel sysclk2 ctrl mask bit
**      [17:17] SM_TMR1_SYSCLK2_MASK
**        TIMER1 channel sysclk2 ctrl mask bit
**      [18:18] SM_TMR2_SYSCLK2_MASK
**        TIMER2 channel sysclk2 ctrl mask bit
**      [19:19] SM_TMR3_SYSCLK2_MASK
**        TIMER3 channel sysclk2 ctrl mask bit
**      [20:20] SM_TMR4_SYSCLK2_MASK
**        TIMER4 channel sysclk2 ctrl mask bit
**      [21:21] SM_TMR5_SYSCLK2_MASK
**        TIMER5 channel sysclk2 ctrl mask bit
**      [22:22] SM_TMR6_SYSCLK2_MASK
**        TIMER6 channel sysclk2 ctrl mask bit
**      [23:23] SM_TMR7_SYSCLK2_MASK
**        TIMER7 channel sysclk2 ctrl mask bit
**      [24:24] SM_TMR0_SYSCLK3_MASK
**        TIMER0 channel sysclk3 ctrl mask bit
**      [25:25] SM_TMR1_SYSCLK3_MASK
**        TIMER1 channel sysclk3 ctrl mask bit
**      [26:26] SM_TMR2_SYSCLK3_MASK
**        TIMER2 channel sysclk3 ctrl mask bit
**      [27:27] SM_TMR3_SYSCLK3_MASK
**        TIMER3 channel sysclk3 ctrl mask bit
**      [28:28] SM_TMR4_SYSCLK3_MASK
**        TIMER4 channel sysclk3 ctrl mask bit
**      [29:29] SM_TMR5_SYSCLK3_MASK
**        TIMER5 channel sysclk3 ctrl mask bit
**      [30:30] SM_TMR6_SYSCLK3_MASK
**        TIMER6 channel sysclk3 ctrl mask bit
**      [31:31] SM_TMR7_SYSCLK3_MASK
**        TIMER7 channel sysclk3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_SYSCLK_MASK                        ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0108))
/*=========================================
** TIMER channel pll ctrl mask bit:
**    TIMER channel pll ctrl mask bit
**      [0:0] SM_TMR0_PLL0_MASK
**        TIMER0 channel pll0 ctrl mask bit
**      [1:1] SM_TMR1_PLL0_MASK
**        TIMER1 channel pll0 ctrl mask bit
**      [2:2] SM_TMR2_PLL0_MASK
**        TIMER2 channel pll0 ctrl mask bit
**      [3:3] SM_TMR3_PLL0_MASK
**        TIMER3 channel pll0 ctrl mask bit
**      [4:4] SM_TMR4_PLL0_MASK
**        TIMER4 channel pll0 ctrl mask bit
**      [5:5] SM_TMR5_PLL0_MASK
**        TIMER5 channel pll0 ctrl mask bit
**      [6:6] SM_TMR6_PLL0_MASK
**        TIMER6 channel pll0 ctrl mask bit
**      [7:7] SM_TMR7_PLL0_MASK
**        TIMER7 channel pll0 ctrl mask bit
**      [8:8] SM_TMR0_PLL1_MASK
**        TIMER0 channel pll1 ctrl mask bit
**      [9:9] SM_TMR1_PLL1_MASK
**        TIMER1 channel pll1 ctrl mask bit
**      [10:10] SM_TMR2_PLL1_MASK
**        TIMER2 channel pll1 ctrl mask bit
**      [11:11] SM_TMR3_PLL1_MASK
**        TIMER3 channel pll1 ctrl mask bit
**      [12:12] SM_TMR4_PLL1_MASK
**        TIMER4 channel pll1 ctrl mask bit
**      [13:13] SM_TMR5_PLL1_MASK
**        TIMER5 channel pll1 ctrl mask bit
**      [14:14] SM_TMR6_PLL1_MASK
**        TIMER6 channel pll1 ctrl mask bit
**      [15:15] SM_TMR7_PLL1_MASK
**        TIMER7 channel pll1 ctrl mask bit
**      [16:16] SM_TMR0_PLL2_MASK
**        TIMER0 channel pll2 ctrl mask bit
**      [17:17] SM_TMR1_PLL2_MASK
**        TIMER1 channel pll2 ctrl mask bit
**      [18:18] SM_TMR2_PLL2_MASK
**        TIMER2 channel pll2 ctrl mask bit
**      [19:19] SM_TMR3_PLL2_MASK
**        TIMER3 channel pll2 ctrl mask bit
**      [20:20] SM_TMR4_PLL2_MASK
**        TIMER4 channel pll2 ctrl mask bit
**      [21:21] SM_TMR5_PLL2_MASK
**        TIMER5 channel pll2 ctrl mask bit
**      [22:22] SM_TMR6_PLL2_MASK
**        TIMER6 channel pll2 ctrl mask bit
**      [23:23] SM_TMR7_PLL2_MASK
**        TIMER7 channel pll2 ctrl mask bit
**      [24:24] SM_TMR0_PLL3_MASK
**        TIMER0 channel pll3 ctrl mask bit
**      [25:25] SM_TMR1_PLL3_MASK
**        TIMER1 channel pll3 ctrl mask bit
**      [26:26] SM_TMR2_PLL3_MASK
**        TIMER2 channel pll3 ctrl mask bit
**      [27:27] SM_TMR3_PLL3_MASK
**        TIMER3 channel pll3 ctrl mask bit
**      [28:28] SM_TMR4_PLL3_MASK
**        TIMER4 channel pll3 ctrl mask bit
**      [29:29] SM_TMR5_PLL3_MASK
**        TIMER5 channel pll3 ctrl mask bit
**      [30:30] SM_TMR6_PLL3_MASK
**        TIMER6 channel pll3 ctrl mask bit
**      [31:31] SM_TMR7_PLL3_MASK
**        TIMER7 channel pll3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_PLL_MASK0                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0120))
/*=========================================
** TIMER channel pll ctrl mask bit:
**    TIMER channel pll ctrl mask bit
**      [0:0] SM_TMR0_PLL4_MASK
**        TIMER0 channel pll4 ctrl mask bit
**      [1:1] SM_TMR1_PLL4_MASK
**        TIMER1 channel pll4 ctrl mask bit
**      [2:2] SM_TMR2_PLL4_MASK
**        TIMER2 channel pll4 ctrl mask bit
**      [3:3] SM_TMR3_PLL4_MASK
**        TIMER3 channel pll4 ctrl mask bit
**      [4:4] SM_TMR4_PLL4_MASK
**        TIMER4 channel pll4 ctrl mask bit
**      [5:5] SM_TMR5_PLL4_MASK
**        TIMER5 channel pll4 ctrl mask bit
**      [6:6] SM_TMR6_PLL4_MASK
**        TIMER6 channel pll4 ctrl mask bit
**      [7:7] SM_TMR7_PLL4_MASK
**        TIMER7 channel pll4 ctrl mask bit
**      [8:8] SM_TMR0_PLL5_MASK
**        TIMER0 channel pll5 ctrl mask bit
**      [9:9] SM_TMR1_PLL5_MASK
**        TIMER1 channel pll5 ctrl mask bit
**      [10:10] SM_TMR2_PLL5_MASK
**        TIMER2 channel pll5 ctrl mask bit
**      [11:11] SM_TMR3_PLL5_MASK
**        TIMER3 channel pll5 ctrl mask bit
**      [12:12] SM_TMR4_PLL5_MASK
**        TIMER4 channel pll5 ctrl mask bit
**      [13:13] SM_TMR5_PLL5_MASK
**        TIMER5 channel pll5 ctrl mask bit
**      [14:14] SM_TMR6_PLL5_MASK
**        TIMER6 channel pll5 ctrl mask bit
**      [15:15] SM_TMR7_PLL5_MASK
**        TIMER7 channel pll5 ctrl mask bit
**      [16:16] SM_TMR0_PLL6_MASK
**        TIMER0 channel pll6 ctrl mask bit
**      [17:17] SM_TMR1_PLL6_MASK
**        TIMER1 channel pll6 ctrl mask bit
**      [18:18] SM_TMR2_PLL6_MASK
**        TIMER2 channel pll6 ctrl mask bit
**      [19:19] SM_TMR3_PLL6_MASK
**        TIMER3 channel pll6 ctrl mask bit
**      [20:20] SM_TMR4_PLL6_MASK
**        TIMER4 channel pll6 ctrl mask bit
**      [21:21] SM_TMR5_PLL6_MASK
**        TIMER5 channel pll6 ctrl mask bit
**      [22:22] SM_TMR6_PLL6_MASK
**        TIMER6 channel pll6 ctrl mask bit
**      [23:23] SM_TMR7_PLL6_MASK
**        TIMER7 channel pll6 ctrl mask bit
**      [24:24] SM_TMR0_PLL7_MASK
**        TIMER0 channel pll7 ctrl mask bit
**      [25:25] SM_TMR1_PLL7_MASK
**        TIMER1 channel pll7 ctrl mask bit
**      [26:26] SM_TMR2_PLL7_MASK
**        TIMER2 channel pll7 ctrl mask bit
**      [27:27] SM_TMR3_PLL7_MASK
**        TIMER3 channel pll7 ctrl mask bit
**      [28:28] SM_TMR4_PLL7_MASK
**        TIMER4 channel pll7 ctrl mask bit
**      [29:29] SM_TMR5_PLL7_MASK
**        TIMER5 channel pll7 ctrl mask bit
**      [30:30] SM_TMR6_PLL7_MASK
**        TIMER6 channel pll7 ctrl mask bit
**      [31:31] SM_TMR7_PLL7_MASK
**        TIMER7 channel pll7 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_PLL_MASK1                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0124))
/*=========================================
** TIMER channel pll ctrl mask bit:
**    TIMER channel pll ctrl mask bit
**      [0:0] SM_TMR0_PLL8_MASK
**        TIMER0 channel pll8 ctrl mask bit
**      [1:1] SM_TMR1_PLL8_MASK
**        TIMER1 channel pll8 ctrl mask bit
**      [2:2] SM_TMR2_PLL8_MASK
**        TIMER2 channel pll8 ctrl mask bit
**      [3:3] SM_TMR3_PLL8_MASK
**        TIMER3 channel pll8 ctrl mask bit
**      [4:4] SM_TMR4_PLL8_MASK
**        TIMER4 channel pll8 ctrl mask bit
**      [5:5] SM_TMR5_PLL8_MASK
**        TIMER5 channel pll8 ctrl mask bit
**      [6:6] SM_TMR6_PLL8_MASK
**        TIMER6 channel pll8 ctrl mask bit
**      [7:7] SM_TMR7_PLL8_MASK
**        TIMER7 channel pll8 ctrl mask bit
**      [8:8] SM_TMR0_PLL9_MASK
**        TIMER0 channel pll9 ctrl mask bit
**      [9:9] SM_TMR1_PLL9_MASK
**        TIMER1 channel pll9 ctrl mask bit
**      [10:10] SM_TMR2_PLL9_MASK
**        TIMER2 channel pll9 ctrl mask bit
**      [11:11] SM_TMR3_PLL9_MASK
**        TIMER3 channel pll9 ctrl mask bit
**      [12:12] SM_TMR4_PLL9_MASK
**        TIMER4 channel pll9 ctrl mask bit
**      [13:13] SM_TMR5_PLL9_MASK
**        TIMER5 channel pll9 ctrl mask bit
**      [14:14] SM_TMR6_PLL9_MASK
**        TIMER6 channel pll9 ctrl mask bit
**      [15:15] SM_TMR7_PLL9_MASK
**        TIMER7 channel pll9 ctrl mask bit
**      [16:16] SM_TMR0_PLL10_MASK
**        TIMER0 channel pll10 ctrl mask bit
**      [17:17] SM_TMR1_PLL10_MASK
**        TIMER1 channel pll10 ctrl mask bit
**      [18:18] SM_TMR2_PLL10_MASK
**        TIMER2 channel pll10 ctrl mask bit
**      [19:19] SM_TMR3_PLL10_MASK
**        TIMER3 channel pll10 ctrl mask bit
**      [20:20] SM_TMR4_PLL10_MASK
**        TIMER4 channel pll10 ctrl mask bit
**      [21:21] SM_TMR5_PLL10_MASK
**        TIMER5 channel pll10 ctrl mask bit
**      [22:22] SM_TMR6_PLL10_MASK
**        TIMER6 channel pll10 ctrl mask bit
**      [23:23] SM_TMR7_PLL10_MASK
**        TIMER7 channel pll10 ctrl mask bit
**      [24:24] SM_TMR0_PLL11_MASK
**        TIMER0 channel pll11 ctrl mask bit
**      [25:25] SM_TMR1_PLL11_MASK
**        TIMER1 channel pll11 ctrl mask bit
**      [26:26] SM_TMR2_PLL11_MASK
**        TIMER2 channel pll11 ctrl mask bit
**      [27:27] SM_TMR3_PLL11_MASK
**        TIMER3 channel pll11 ctrl mask bit
**      [28:28] SM_TMR4_PLL11_MASK
**        TIMER4 channel pll11 ctrl mask bit
**      [29:29] SM_TMR5_PLL11_MASK
**        TIMER5 channel pll11 ctrl mask bit
**      [30:30] SM_TMR6_PLL11_MASK
**        TIMER6 channel pll11 ctrl mask bit
**      [31:31] SM_TMR7_PLL11_MASK
**        TIMER7 channel pll11 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_PLL_MASK2                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0128))
/*=========================================
** TIMER channel pll ctrl mask bit:
**    TIMER channel pll ctrl mask bit
**      [0:0] SM_TMR0_PLL12_MASK
**        TIMER0 channel pll12 ctrl mask bit
**      [1:1] SM_TMR1_PLL12_MASK
**        TIMER1 channel pll12 ctrl mask bit
**      [2:2] SM_TMR2_PLL12_MASK
**        TIMER2 channel pll12 ctrl mask bit
**      [3:3] SM_TMR3_PLL12_MASK
**        TIMER3 channel pll12 ctrl mask bit
**      [4:4] SM_TMR4_PLL12_MASK
**        TIMER4 channel pll12 ctrl mask bit
**      [5:5] SM_TMR5_PLL12_MASK
**        TIMER5 channel pll12 ctrl mask bit
**      [6:6] SM_TMR6_PLL12_MASK
**        TIMER6 channel pll12 ctrl mask bit
**      [7:7] SM_TMR7_PLL12_MASK
**        TIMER7 channel pll12 ctrl mask bit
**      [8:8] SM_TMR0_PLL13_MASK
**        TIMER0 channel pll13 ctrl mask bit
**      [9:9] SM_TMR1_PLL13_MASK
**        TIMER1 channel pll13 ctrl mask bit
**      [10:10] SM_TMR2_PLL13_MASK
**        TIMER2 channel pll13 ctrl mask bit
**      [11:11] SM_TMR3_PLL13_MASK
**        TIMER3 channel pll13 ctrl mask bit
**      [12:12] SM_TMR4_PLL13_MASK
**        TIMER4 channel pll13 ctrl mask bit
**      [13:13] SM_TMR5_PLL13_MASK
**        TIMER5 channel pll13 ctrl mask bit
**      [14:14] SM_TMR6_PLL13_MASK
**        TIMER6 channel pll13 ctrl mask bit
**      [15:15] SM_TMR7_PLL13_MASK
**        TIMER7 channel pll13 ctrl mask bit
**      [16:16] SM_TMR0_PLL14_MASK
**        TIMER0 channel pll14 ctrl mask bit
**      [17:17] SM_TMR1_PLL14_MASK
**        TIMER1 channel pll14 ctrl mask bit
**      [18:18] SM_TMR2_PLL14_MASK
**        TIMER2 channel pll14 ctrl mask bit
**      [19:19] SM_TMR3_PLL14_MASK
**        TIMER3 channel pll14 ctrl mask bit
**      [20:20] SM_TMR4_PLL14_MASK
**        TIMER4 channel pll14 ctrl mask bit
**      [21:21] SM_TMR5_PLL14_MASK
**        TIMER5 channel pll14 ctrl mask bit
**      [22:22] SM_TMR6_PLL14_MASK
**        TIMER6 channel pll14 ctrl mask bit
**      [23:23] SM_TMR7_PLL14_MASK
**        TIMER7 channel pll14 ctrl mask bit
**      [24:24] SM_TMR0_PLL15_MASK
**        TIMER0 channel pll15 ctrl mask bit
**      [25:25] SM_TMR1_PLL15_MASK
**        TIMER1 channel pll15 ctrl mask bit
**      [26:26] SM_TMR2_PLL15_MASK
**        TIMER2 channel pll15 ctrl mask bit
**      [27:27] SM_TMR3_PLL15_MASK
**        TIMER3 channel pll15 ctrl mask bit
**      [28:28] SM_TMR4_PLL15_MASK
**        TIMER4 channel pll15 ctrl mask bit
**      [29:29] SM_TMR5_PLL15_MASK
**        TIMER5 channel pll15 ctrl mask bit
**      [30:30] SM_TMR6_PLL15_MASK
**        TIMER6 channel pll15 ctrl mask bit
**      [31:31] SM_TMR7_PLL15_MASK
**        TIMER7 channel pll15 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_PLL_MASK3                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x012C))
/*=========================================
** TIMER channel pwr ctrl mask bit:
**    TIMER channel pwr ctrl mask bit
**      [0:0] SM_TMR0_PWR0_MASK
**        TIMER0 channel pwr0 ctrl mask bit
**      [1:1] SM_TMR1_PWR0_MASK
**        TIMER1 channel pwr0 ctrl mask bit
**      [2:2] SM_TMR2_PWR0_MASK
**        TIMER2 channel pwr0 ctrl mask bit
**      [3:3] SM_TMR3_PWR0_MASK
**        TIMER3 channel pwr0 ctrl mask bit
**      [4:4] SM_TMR4_PWR0_MASK
**        TIMER4 channel pwr0 ctrl mask bit
**      [5:5] SM_TMR5_PWR0_MASK
**        TIMER5 channel pwr0 ctrl mask bit
**      [6:6] SM_TMR6_PWR0_MASK
**        TIMER6 channel pwr0 ctrl mask bit
**      [7:7] SM_TMR7_PWR0_MASK
**        TIMER7 channel pwr0 ctrl mask bit
**      [8:8] SM_TMR0_PWR1_MASK
**        TIMER0 channel pwr1 ctrl mask bit
**      [9:9] SM_TMR1_PWR1_MASK
**        TIMER1 channel pwr1 ctrl mask bit
**      [10:10] SM_TMR2_PWR1_MASK
**        TIMER2 channel pwr1 ctrl mask bit
**      [11:11] SM_TMR3_PWR1_MASK
**        TIMER3 channel pwr1 ctrl mask bit
**      [12:12] SM_TMR4_PWR1_MASK
**        TIMER4 channel pwr1 ctrl mask bit
**      [13:13] SM_TMR5_PWR1_MASK
**        TIMER5 channel pwr1 ctrl mask bit
**      [14:14] SM_TMR6_PWR1_MASK
**        TIMER6 channel pwr1 ctrl mask bit
**      [15:15] SM_TMR7_PWR1_MASK
**        TIMER7 channel pwr1 ctrl mask bit
**      [16:16] SM_TMR0_PWR2_MASK
**        TIMER0 channel pwr2 ctrl mask bit
**      [17:17] SM_TMR1_PWR2_MASK
**        TIMER1 channel pwr2 ctrl mask bit
**      [18:18] SM_TMR2_PWR2_MASK
**        TIMER2 channel pwr2 ctrl mask bit
**      [19:19] SM_TMR3_PWR2_MASK
**        TIMER3 channel pwr2 ctrl mask bit
**      [20:20] SM_TMR4_PWR2_MASK
**        TIMER4 channel pwr2 ctrl mask bit
**      [21:21] SM_TMR5_PWR2_MASK
**        TIMER5 channel pwr2 ctrl mask bit
**      [22:22] SM_TMR6_PWR2_MASK
**        TIMER6 channel pwr2 ctrl mask bit
**      [23:23] SM_TMR7_PWR2_MASK
**        TIMER7 channel pwr2 ctrl mask bit
**      [24:24] SM_TMR0_PWR3_MASK
**        TIMER0 channel pwr3 ctrl mask bit
**      [25:25] SM_TMR1_PWR3_MASK
**        TIMER1 channel pwr3 ctrl mask bit
**      [26:26] SM_TMR2_PWR3_MASK
**        TIMER2 channel pwr3 ctrl mask bit
**      [27:27] SM_TMR3_PWR3_MASK
**        TIMER3 channel pwr3 ctrl mask bit
**      [28:28] SM_TMR4_PWR3_MASK
**        TIMER4 channel pwr3 ctrl mask bit
**      [29:29] SM_TMR5_PWR3_MASK
**        TIMER5 channel pwr3 ctrl mask bit
**      [30:30] SM_TMR6_PWR3_MASK
**        TIMER6 channel pwr3 ctrl mask bit
**      [31:31] SM_TMR7_PWR3_MASK
**        TIMER7 channel pwr3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_PWR_MASK0                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0140))
/*=========================================
** TIMER channel pwr ctrl mask bit:
**    TIMER channel pwr ctrl mask bit
**      [0:0] SM_TMR0_PWR4_MASK
**        TIMER0 channel pwr4 ctrl mask bit
**      [1:1] SM_TMR1_PWR4_MASK
**        TIMER1 channel pwr4 ctrl mask bit
**      [2:2] SM_TMR2_PWR4_MASK
**        TIMER2 channel pwr4 ctrl mask bit
**      [3:3] SM_TMR3_PWR4_MASK
**        TIMER3 channel pwr4 ctrl mask bit
**      [4:4] SM_TMR4_PWR4_MASK
**        TIMER4 channel pwr4 ctrl mask bit
**      [5:5] SM_TMR5_PWR4_MASK
**        TIMER5 channel pwr4 ctrl mask bit
**      [6:6] SM_TMR6_PWR4_MASK
**        TIMER6 channel pwr4 ctrl mask bit
**      [7:7] SM_TMR7_PWR4_MASK
**        TIMER7 channel pwr4 ctrl mask bit
**      [8:8] SM_TMR0_PWR5_MASK
**        TIMER0 channel pwr5 ctrl mask bit
**      [9:9] SM_TMR1_PWR5_MASK
**        TIMER1 channel pwr5 ctrl mask bit
**      [10:10] SM_TMR2_PWR5_MASK
**        TIMER2 channel pwr5 ctrl mask bit
**      [11:11] SM_TMR3_PWR5_MASK
**        TIMER3 channel pwr5 ctrl mask bit
**      [12:12] SM_TMR4_PWR5_MASK
**        TIMER4 channel pwr5 ctrl mask bit
**      [13:13] SM_TMR5_PWR5_MASK
**        TIMER5 channel pwr5 ctrl mask bit
**      [14:14] SM_TMR6_PWR5_MASK
**        TIMER6 channel pwr5 ctrl mask bit
**      [15:15] SM_TMR7_PWR5_MASK
**        TIMER7 channel pwr5 ctrl mask bit
**      [16:16] SM_TMR0_PWR6_MASK
**        TIMER0 channel pwr6 ctrl mask bit
**      [17:17] SM_TMR1_PWR6_MASK
**        TIMER1 channel pwr6 ctrl mask bit
**      [18:18] SM_TMR2_PWR6_MASK
**        TIMER2 channel pwr6 ctrl mask bit
**      [19:19] SM_TMR3_PWR6_MASK
**        TIMER3 channel pwr6 ctrl mask bit
**      [20:20] SM_TMR4_PWR6_MASK
**        TIMER4 channel pwr6 ctrl mask bit
**      [21:21] SM_TMR5_PWR6_MASK
**        TIMER5 channel pwr6 ctrl mask bit
**      [22:22] SM_TMR6_PWR6_MASK
**        TIMER6 channel pwr6 ctrl mask bit
**      [23:23] SM_TMR7_PWR6_MASK
**        TIMER7 channel pwr6 ctrl mask bit
**      [24:24] SM_TMR0_PWR7_MASK
**        TIMER0 channel pwr7 ctrl mask bit
**      [25:25] SM_TMR1_PWR7_MASK
**        TIMER1 channel pwr7 ctrl mask bit
**      [26:26] SM_TMR2_PWR7_MASK
**        TIMER2 channel pwr7 ctrl mask bit
**      [27:27] SM_TMR3_PWR7_MASK
**        TIMER3 channel pwr7 ctrl mask bit
**      [28:28] SM_TMR4_PWR7_MASK
**        TIMER4 channel pwr7 ctrl mask bit
**      [29:29] SM_TMR5_PWR7_MASK
**        TIMER5 channel pwr7 ctrl mask bit
**      [30:30] SM_TMR6_PWR7_MASK
**        TIMER6 channel pwr7 ctrl mask bit
**      [31:31] SM_TMR7_PWR7_MASK
**        TIMER7 channel pwr7 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_PWR_MASK1                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0144))
/*=========================================
** TIMER channel pwr ctrl mask bit:
**    TIMER channel pwr ctrl mask bit
**      [0:0] SM_TMR0_PWR8_MASK
**        TIMER0 channel pwr8 ctrl mask bit
**      [1:1] SM_TMR1_PWR8_MASK
**        TIMER1 channel pwr8 ctrl mask bit
**      [2:2] SM_TMR2_PWR8_MASK
**        TIMER2 channel pwr8 ctrl mask bit
**      [3:3] SM_TMR3_PWR8_MASK
**        TIMER3 channel pwr8 ctrl mask bit
**      [4:4] SM_TMR4_PWR8_MASK
**        TIMER4 channel pwr8 ctrl mask bit
**      [5:5] SM_TMR5_PWR8_MASK
**        TIMER5 channel pwr8 ctrl mask bit
**      [6:6] SM_TMR6_PWR8_MASK
**        TIMER6 channel pwr8 ctrl mask bit
**      [7:7] SM_TMR7_PWR8_MASK
**        TIMER7 channel pwr8 ctrl mask bit
**      [8:8] SM_TMR0_PWR9_MASK
**        TIMER0 channel pwr9 ctrl mask bit
**      [9:9] SM_TMR1_PWR9_MASK
**        TIMER1 channel pwr9 ctrl mask bit
**      [10:10] SM_TMR2_PWR9_MASK
**        TIMER2 channel pwr9 ctrl mask bit
**      [11:11] SM_TMR3_PWR9_MASK
**        TIMER3 channel pwr9 ctrl mask bit
**      [12:12] SM_TMR4_PWR9_MASK
**        TIMER4 channel pwr9 ctrl mask bit
**      [13:13] SM_TMR5_PWR9_MASK
**        TIMER5 channel pwr9 ctrl mask bit
**      [14:14] SM_TMR6_PWR9_MASK
**        TIMER6 channel pwr9 ctrl mask bit
**      [15:15] SM_TMR7_PWR9_MASK
**        TIMER7 channel pwr9 ctrl mask bit
**      [16:16] SM_TMR0_PWR10_MASK
**        TIMER0 channel pwr10 ctrl mask bit
**      [17:17] SM_TMR1_PWR10_MASK
**        TIMER1 channel pwr10 ctrl mask bit
**      [18:18] SM_TMR2_PWR10_MASK
**        TIMER2 channel pwr10 ctrl mask bit
**      [19:19] SM_TMR3_PWR10_MASK
**        TIMER3 channel pwr10 ctrl mask bit
**      [20:20] SM_TMR4_PWR10_MASK
**        TIMER4 channel pwr10 ctrl mask bit
**      [21:21] SM_TMR5_PWR10_MASK
**        TIMER5 channel pwr10 ctrl mask bit
**      [22:22] SM_TMR6_PWR10_MASK
**        TIMER6 channel pwr10 ctrl mask bit
**      [23:23] SM_TMR7_PWR10_MASK
**        TIMER7 channel pwr10 ctrl mask bit
**      [24:24] SM_TMR0_PWR11_MASK
**        TIMER0 channel pwr11 ctrl mask bit
**      [25:25] SM_TMR1_PWR11_MASK
**        TIMER1 channel pwr11 ctrl mask bit
**      [26:26] SM_TMR2_PWR11_MASK
**        TIMER2 channel pwr11 ctrl mask bit
**      [27:27] SM_TMR3_PWR11_MASK
**        TIMER3 channel pwr11 ctrl mask bit
**      [28:28] SM_TMR4_PWR11_MASK
**        TIMER4 channel pwr11 ctrl mask bit
**      [29:29] SM_TMR5_PWR11_MASK
**        TIMER5 channel pwr11 ctrl mask bit
**      [30:30] SM_TMR6_PWR11_MASK
**        TIMER6 channel pwr11 ctrl mask bit
**      [31:31] SM_TMR7_PWR11_MASK
**        TIMER7 channel pwr11 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_PWR_MASK2                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0148))
/*=========================================
** TIMER channel pwr ctrl mask bit:
**    TIMER channel pwr ctrl mask bit
**      [0:0] SM_TMR0_PWR12_MASK
**        TIMER0 channel pwr12 ctrl mask bit
**      [1:1] SM_TMR1_PWR12_MASK
**        TIMER1 channel pwr12 ctrl mask bit
**      [2:2] SM_TMR2_PWR12_MASK
**        TIMER2 channel pwr12 ctrl mask bit
**      [3:3] SM_TMR3_PWR12_MASK
**        TIMER3 channel pwr12 ctrl mask bit
**      [4:4] SM_TMR4_PWR12_MASK
**        TIMER4 channel pwr12 ctrl mask bit
**      [5:5] SM_TMR5_PWR12_MASK
**        TIMER5 channel pwr12 ctrl mask bit
**      [6:6] SM_TMR6_PWR12_MASK
**        TIMER6 channel pwr12 ctrl mask bit
**      [7:7] SM_TMR7_PWR12_MASK
**        TIMER7 channel pwr12 ctrl mask bit
**      [8:8] SM_TMR0_PWR13_MASK
**        TIMER0 channel pwr13 ctrl mask bit
**      [9:9] SM_TMR1_PWR13_MASK
**        TIMER1 channel pwr13 ctrl mask bit
**      [10:10] SM_TMR2_PWR13_MASK
**        TIMER2 channel pwr13 ctrl mask bit
**      [11:11] SM_TMR3_PWR13_MASK
**        TIMER3 channel pwr13 ctrl mask bit
**      [12:12] SM_TMR4_PWR13_MASK
**        TIMER4 channel pwr13 ctrl mask bit
**      [13:13] SM_TMR5_PWR13_MASK
**        TIMER5 channel pwr13 ctrl mask bit
**      [14:14] SM_TMR6_PWR13_MASK
**        TIMER6 channel pwr13 ctrl mask bit
**      [15:15] SM_TMR7_PWR13_MASK
**        TIMER7 channel pwr13 ctrl mask bit
**      [16:16] SM_TMR0_PWR14_MASK
**        TIMER0 channel pwr14 ctrl mask bit
**      [17:17] SM_TMR1_PWR14_MASK
**        TIMER1 channel pwr14 ctrl mask bit
**      [18:18] SM_TMR2_PWR14_MASK
**        TIMER2 channel pwr14 ctrl mask bit
**      [19:19] SM_TMR3_PWR14_MASK
**        TIMER3 channel pwr14 ctrl mask bit
**      [20:20] SM_TMR4_PWR14_MASK
**        TIMER4 channel pwr14 ctrl mask bit
**      [21:21] SM_TMR5_PWR14_MASK
**        TIMER5 channel pwr14 ctrl mask bit
**      [22:22] SM_TMR6_PWR14_MASK
**        TIMER6 channel pwr14 ctrl mask bit
**      [23:23] SM_TMR7_PWR14_MASK
**        TIMER7 channel pwr14 ctrl mask bit
**      [24:24] SM_TMR0_PWR15_MASK
**        TIMER0 channel pwr15 ctrl mask bit
**      [25:25] SM_TMR1_PWR15_MASK
**        TIMER1 channel pwr15 ctrl mask bit
**      [26:26] SM_TMR2_PWR15_MASK
**        TIMER2 channel pwr15 ctrl mask bit
**      [27:27] SM_TMR3_PWR15_MASK
**        TIMER3 channel pwr15 ctrl mask bit
**      [28:28] SM_TMR4_PWR15_MASK
**        TIMER4 channel pwr15 ctrl mask bit
**      [29:29] SM_TMR5_PWR15_MASK
**        TIMER5 channel pwr15 ctrl mask bit
**      [30:30] SM_TMR6_PWR15_MASK
**        TIMER6 channel pwr15 ctrl mask bit
**      [31:31] SM_TMR7_PWR15_MASK
**        TIMER7 channel pwr15 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_PWR_MASK3                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x014C))
/*=========================================
** TIMER channel pwr ctrl mask bit:
**    TIMER channel pwr ctrl mask bit
**      [0:0] SM_TMR0_PWR16_MASK
**        TIMER0 channel pwr16 ctrl mask bit
**      [1:1] SM_TMR1_PWR16_MASK
**        TIMER1 channel pwr16 ctrl mask bit
**      [2:2] SM_TMR2_PWR16_MASK
**        TIMER2 channel pwr16 ctrl mask bit
**      [3:3] SM_TMR3_PWR16_MASK
**        TIMER3 channel pwr16 ctrl mask bit
**      [4:4] SM_TMR4_PWR16_MASK
**        TIMER4 channel pwr16 ctrl mask bit
**      [5:5] SM_TMR5_PWR16_MASK
**        TIMER5 channel pwr16 ctrl mask bit
**      [6:6] SM_TMR6_PWR16_MASK
**        TIMER6 channel pwr16 ctrl mask bit
**      [7:7] SM_TMR7_PWR16_MASK
**        TIMER7 channel pwr16 ctrl mask bit
**      [8:8] SM_TMR0_PWR17_MASK
**        TIMER0 channel pwr17 ctrl mask bit
**      [9:9] SM_TMR1_PWR17_MASK
**        TIMER1 channel pwr17 ctrl mask bit
**      [10:10] SM_TMR2_PWR17_MASK
**        TIMER2 channel pwr17 ctrl mask bit
**      [11:11] SM_TMR3_PWR17_MASK
**        TIMER3 channel pwr17 ctrl mask bit
**      [12:12] SM_TMR4_PWR17_MASK
**        TIMER4 channel pwr17 ctrl mask bit
**      [13:13] SM_TMR5_PWR17_MASK
**        TIMER5 channel pwr17 ctrl mask bit
**      [14:14] SM_TMR6_PWR17_MASK
**        TIMER6 channel pwr17 ctrl mask bit
**      [15:15] SM_TMR7_PWR17_MASK
**        TIMER7 channel pwr17 ctrl mask bit
**      [16:16] SM_TMR0_PWR18_MASK
**        TIMER0 channel pwr18 ctrl mask bit
**      [17:17] SM_TMR1_PWR18_MASK
**        TIMER1 channel pwr18 ctrl mask bit
**      [18:18] SM_TMR2_PWR18_MASK
**        TIMER2 channel pwr18 ctrl mask bit
**      [19:19] SM_TMR3_PWR18_MASK
**        TIMER3 channel pwr18 ctrl mask bit
**      [20:20] SM_TMR4_PWR18_MASK
**        TIMER4 channel pwr18 ctrl mask bit
**      [21:21] SM_TMR5_PWR18_MASK
**        TIMER5 channel pwr18 ctrl mask bit
**      [22:22] SM_TMR6_PWR18_MASK
**        TIMER6 channel pwr18 ctrl mask bit
**      [23:23] SM_TMR7_PWR18_MASK
**        TIMER7 channel pwr18 ctrl mask bit
**      [24:24] SM_TMR0_PWR19_MASK
**        TIMER0 channel pwr19 ctrl mask bit
**      [25:25] SM_TMR1_PWR19_MASK
**        TIMER1 channel pwr19 ctrl mask bit
**      [26:26] SM_TMR2_PWR19_MASK
**        TIMER2 channel pwr19 ctrl mask bit
**      [27:27] SM_TMR3_PWR19_MASK
**        TIMER3 channel pwr19 ctrl mask bit
**      [28:28] SM_TMR4_PWR19_MASK
**        TIMER4 channel pwr19 ctrl mask bit
**      [29:29] SM_TMR5_PWR19_MASK
**        TIMER5 channel pwr19 ctrl mask bit
**      [30:30] SM_TMR6_PWR19_MASK
**        TIMER6 channel pwr19 ctrl mask bit
**      [31:31] SM_TMR7_PWR19_MASK
**        TIMER7 channel pwr19 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_PWR_MASK4                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0150))
/*=========================================
** TIMER channel pwr ctrl mask bit:
**    TIMER channel pwr ctrl mask bit
**      [0:0] SM_TMR0_PWR20_MASK
**        TIMER0 channel pwr20 ctrl mask bit
**      [1:1] SM_TMR1_PWR20_MASK
**        TIMER1 channel pwr20 ctrl mask bit
**      [2:2] SM_TMR2_PWR20_MASK
**        TIMER2 channel pwr20 ctrl mask bit
**      [3:3] SM_TMR3_PWR20_MASK
**        TIMER3 channel pwr20 ctrl mask bit
**      [4:4] SM_TMR4_PWR20_MASK
**        TIMER4 channel pwr20 ctrl mask bit
**      [5:5] SM_TMR5_PWR20_MASK
**        TIMER5 channel pwr20 ctrl mask bit
**      [6:6] SM_TMR6_PWR20_MASK
**        TIMER6 channel pwr20 ctrl mask bit
**      [7:7] SM_TMR7_PWR20_MASK
**        TIMER7 channel pwr20 ctrl mask bit
**      [8:8] SM_TMR0_PWR21_MASK
**        TIMER0 channel pwr21 ctrl mask bit
**      [9:9] SM_TMR1_PWR21_MASK
**        TIMER1 channel pwr21 ctrl mask bit
**      [10:10] SM_TMR2_PWR21_MASK
**        TIMER2 channel pwr21 ctrl mask bit
**      [11:11] SM_TMR3_PWR21_MASK
**        TIMER3 channel pwr21 ctrl mask bit
**      [12:12] SM_TMR4_PWR21_MASK
**        TIMER4 channel pwr21 ctrl mask bit
**      [13:13] SM_TMR5_PWR21_MASK
**        TIMER5 channel pwr21 ctrl mask bit
**      [14:14] SM_TMR6_PWR21_MASK
**        TIMER6 channel pwr21 ctrl mask bit
**      [15:15] SM_TMR7_PWR21_MASK
**        TIMER7 channel pwr21 ctrl mask bit
**      [16:16] SM_TMR0_PWR22_MASK
**        TIMER0 channel pwr22 ctrl mask bit
**      [17:17] SM_TMR1_PWR22_MASK
**        TIMER1 channel pwr22 ctrl mask bit
**      [18:18] SM_TMR2_PWR22_MASK
**        TIMER2 channel pwr22 ctrl mask bit
**      [19:19] SM_TMR3_PWR22_MASK
**        TIMER3 channel pwr22 ctrl mask bit
**      [20:20] SM_TMR4_PWR22_MASK
**        TIMER4 channel pwr22 ctrl mask bit
**      [21:21] SM_TMR5_PWR22_MASK
**        TIMER5 channel pwr22 ctrl mask bit
**      [22:22] SM_TMR6_PWR22_MASK
**        TIMER6 channel pwr22 ctrl mask bit
**      [23:23] SM_TMR7_PWR22_MASK
**        TIMER7 channel pwr22 ctrl mask bit
**      [24:24] SM_TMR0_PWR23_MASK
**        TIMER0 channel pwr23 ctrl mask bit
**      [25:25] SM_TMR1_PWR23_MASK
**        TIMER1 channel pwr23 ctrl mask bit
**      [26:26] SM_TMR2_PWR23_MASK
**        TIMER2 channel pwr23 ctrl mask bit
**      [27:27] SM_TMR3_PWR23_MASK
**        TIMER3 channel pwr23 ctrl mask bit
**      [28:28] SM_TMR4_PWR23_MASK
**        TIMER4 channel pwr23 ctrl mask bit
**      [29:29] SM_TMR5_PWR23_MASK
**        TIMER5 channel pwr23 ctrl mask bit
**      [30:30] SM_TMR6_PWR23_MASK
**        TIMER6 channel pwr23 ctrl mask bit
**      [31:31] SM_TMR7_PWR23_MASK
**        TIMER7 channel pwr23 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_PWR_MASK5                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0154))
/*=========================================
** TIMER channel mas trigger ctrl mask bit:
**    TIMER channel mas trigger ctrl mask bit
**      [0:0] SM_TMR0_MAS_TRIG0_MASK
**        TIMER0 channel mas trigger channel0 ctrl mask bit
**      [1:1] SM_TMR1_MAS_TRIG0_MASK
**        TIMER1 channel mas trigger channel0 ctrl mask bit
**      [2:2] SM_TMR2_MAS_TRIG0_MASK
**        TIMER2 channel mas trigger channel0 ctrl mask bit
**      [3:3] SM_TMR3_MAS_TRIG0_MASK
**        TIMER3 channel mas trigger channel0 ctrl mask bit
**      [4:4] SM_TMR4_MAS_TRIG0_MASK
**        TIMER4 channel mas trigger channel0 ctrl mask bit
**      [5:5] SM_TMR5_MAS_TRIG0_MASK
**        TIMER5 channel mas trigger channel0 ctrl mask bit
**      [6:6] SM_TMR6_MAS_TRIG0_MASK
**        TIMER6 channel mas trigger channel0 ctrl mask bit
**      [7:7] SM_TMR7_MAS_TRIG0_MASK
**        TIMER7 channel mas trigger channel0 ctrl mask bit
**      [8:8] SM_TMR0_MAS_TRIG1_MASK
**        TIMER0 channel mas trigger channel1 ctrl mask bit
**      [9:9] SM_TMR1_MAS_TRIG1_MASK
**        TIMER1 channel mas trigger channel1 ctrl mask bit
**      [10:10] SM_TMR2_MAS_TRIG1_MASK
**        TIMER2 channel mas trigger channel1 ctrl mask bit
**      [11:11] SM_TMR3_MAS_TRIG1_MASK
**        TIMER3 channel mas trigger channel1 ctrl mask bit
**      [12:12] SM_TMR4_MAS_TRIG1_MASK
**        TIMER4 channel mas trigger channel1 ctrl mask bit
**      [13:13] SM_TMR5_MAS_TRIG1_MASK
**        TIMER5 channel mas trigger channel1 ctrl mask bit
**      [14:14] SM_TMR6_MAS_TRIG1_MASK
**        TIMER6 channel mas trigger channel1 ctrl mask bit
**      [15:15] SM_TMR7_MAS_TRIG1_MASK
**        TIMER7 channel mas trigger channel1 ctrl mask bit
**      [16:16] SM_TMR0_MAS_TRIG2_MASK
**        TIMER0 channel mas trigger channel2 ctrl mask bit
**      [17:17] SM_TMR1_MAS_TRIG2_MASK
**        TIMER1 channel mas trigger channel2 ctrl mask bit
**      [18:18] SM_TMR2_MAS_TRIG2_MASK
**        TIMER2 channel mas trigger channel2 ctrl mask bit
**      [19:19] SM_TMR3_MAS_TRIG2_MASK
**        TIMER3 channel mas trigger channel2 ctrl mask bit
**      [20:20] SM_TMR4_MAS_TRIG2_MASK
**        TIMER4 channel mas trigger channel2 ctrl mask bit
**      [21:21] SM_TMR5_MAS_TRIG2_MASK
**        TIMER5 channel mas trigger channel2 ctrl mask bit
**      [22:22] SM_TMR6_MAS_TRIG2_MASK
**        TIMER6 channel mas trigger channel2 ctrl mask bit
**      [23:23] SM_TMR7_MAS_TRIG2_MASK
**        TIMER7 channel mas trigger channel2 ctrl mask bit
**      [24:24] SM_TMR0_MAS_TRIG3_MASK
**        TIMER0 channel mas trigger channel3 ctrl mask bit
**      [25:25] SM_TMR1_MAS_TRIG3_MASK
**        TIMER1 channel mas trigger channel3 ctrl mask bit
**      [26:26] SM_TMR2_MAS_TRIG3_MASK
**        TIMER2 channel mas trigger channel3 ctrl mask bit
**      [27:27] SM_TMR3_MAS_TRIG3_MASK
**        TIMER3 channel mas trigger channel3 ctrl mask bit
**      [28:28] SM_TMR4_MAS_TRIG3_MASK
**        TIMER4 channel mas trigger channel3 ctrl mask bit
**      [29:29] SM_TMR5_MAS_TRIG3_MASK
**        TIMER5 channel mas trigger channel3 ctrl mask bit
**      [30:30] SM_TMR6_MAS_TRIG3_MASK
**        TIMER6 channel mas trigger channel3 ctrl mask bit
**      [31:31] SM_TMR7_MAS_TRIG3_MASK
**        TIMER7 channel mas trigger channel3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_MAS_TRIG_MASK0                     ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0160))
/*=========================================
** TIMER channel mas trigger ctrl mask bit:
**    TIMER channel mas trigger ctrl mask bit
**      [0:0] SM_TMR0_MAS_TRIG4_MASK
**        TIMER0 channel mas trigger channel4 ctrl mask bit
**      [1:1] SM_TMR1_MAS_TRIG4_MASK
**        TIMER1 channel mas trigger channel4 ctrl mask bit
**      [2:2] SM_TMR2_MAS_TRIG4_MASK
**        TIMER2 channel mas trigger channel4 ctrl mask bit
**      [3:3] SM_TMR3_MAS_TRIG4_MASK
**        TIMER3 channel mas trigger channel4 ctrl mask bit
**      [4:4] SM_TMR4_MAS_TRIG4_MASK
**        TIMER4 channel mas trigger channel4 ctrl mask bit
**      [5:5] SM_TMR5_MAS_TRIG4_MASK
**        TIMER5 channel mas trigger channel4 ctrl mask bit
**      [6:6] SM_TMR6_MAS_TRIG4_MASK
**        TIMER6 channel mas trigger channel4 ctrl mask bit
**      [7:7] SM_TMR7_MAS_TRIG4_MASK
**        TIMER7 channel mas trigger channel4 ctrl mask bit
**      [8:8] SM_TMR0_MAS_TRIG5_MASK
**        TIMER0 channel mas trigger channel5 ctrl mask bit
**      [9:9] SM_TMR1_MAS_TRIG5_MASK
**        TIMER1 channel mas trigger channel5 ctrl mask bit
**      [10:10] SM_TMR2_MAS_TRIG5_MASK
**        TIMER2 channel mas trigger channel5 ctrl mask bit
**      [11:11] SM_TMR3_MAS_TRIG5_MASK
**        TIMER3 channel mas trigger channel5 ctrl mask bit
**      [12:12] SM_TMR4_MAS_TRIG5_MASK
**        TIMER4 channel mas trigger channel5 ctrl mask bit
**      [13:13] SM_TMR5_MAS_TRIG5_MASK
**        TIMER5 channel mas trigger channel5 ctrl mask bit
**      [14:14] SM_TMR6_MAS_TRIG5_MASK
**        TIMER6 channel mas trigger channel5 ctrl mask bit
**      [15:15] SM_TMR7_MAS_TRIG5_MASK
**        TIMER7 channel mas trigger channel5 ctrl mask bit
**      [16:16] SM_TMR0_MAS_TRIG6_MASK
**        TIMER0 channel mas trigger channel6 ctrl mask bit
**      [17:17] SM_TMR1_MAS_TRIG6_MASK
**        TIMER1 channel mas trigger channel6 ctrl mask bit
**      [18:18] SM_TMR2_MAS_TRIG6_MASK
**        TIMER2 channel mas trigger channel6 ctrl mask bit
**      [19:19] SM_TMR3_MAS_TRIG6_MASK
**        TIMER3 channel mas trigger channel6 ctrl mask bit
**      [20:20] SM_TMR4_MAS_TRIG6_MASK
**        TIMER4 channel mas trigger channel6 ctrl mask bit
**      [21:21] SM_TMR5_MAS_TRIG6_MASK
**        TIMER5 channel mas trigger channel6 ctrl mask bit
**      [22:22] SM_TMR6_MAS_TRIG6_MASK
**        TIMER6 channel mas trigger channel6 ctrl mask bit
**      [23:23] SM_TMR7_MAS_TRIG6_MASK
**        TIMER7 channel mas trigger channel6 ctrl mask bit
**      [24:24] SM_TMR0_MAS_TRIG7_MASK
**        TIMER0 channel mas trigger channel7 ctrl mask bit
**      [25:25] SM_TMR1_MAS_TRIG7_MASK
**        TIMER1 channel mas trigger channel7 ctrl mask bit
**      [26:26] SM_TMR2_MAS_TRIG7_MASK
**        TIMER2 channel mas trigger channel7 ctrl mask bit
**      [27:27] SM_TMR3_MAS_TRIG7_MASK
**        TIMER3 channel mas trigger channel7 ctrl mask bit
**      [28:28] SM_TMR4_MAS_TRIG7_MASK
**        TIMER4 channel mas trigger channel7 ctrl mask bit
**      [29:29] SM_TMR5_MAS_TRIG7_MASK
**        TIMER5 channel mas trigger channel7 ctrl mask bit
**      [30:30] SM_TMR6_MAS_TRIG7_MASK
**        TIMER6 channel mas trigger channel7 ctrl mask bit
**      [31:31] SM_TMR7_MAS_TRIG7_MASK
**        TIMER7 channel mas trigger channel7 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_MAS_TRIG_MASK1                     ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0164))
/*=========================================
** TIMER channel timer trigger ctrl mask bit:
**    TIMER channel timer trigger ctrl mask bit
**      [0:0] SM_TMR0_TIMER_TRIG0_MASK
**        TIMER0 channel timer trigger channel0 ctrl mask bit
**      [1:1] SM_TMR1_TIMER_TRIG0_MASK
**        TIMER1 channel timer trigger channel0 ctrl mask bit
**      [2:2] SM_TMR2_TIMER_TRIG0_MASK
**        TIMER2 channel timer trigger channel0 ctrl mask bit
**      [3:3] SM_TMR3_TIMER_TRIG0_MASK
**        TIMER3 channel timer trigger channel0 ctrl mask bit
**      [4:4] SM_TMR4_TIMER_TRIG0_MASK
**        TIMER4 channel timer trigger channel0 ctrl mask bit
**      [5:5] SM_TMR5_TIMER_TRIG0_MASK
**        TIMER5 channel timer trigger channel0 ctrl mask bit
**      [6:6] SM_TMR6_TIMER_TRIG0_MASK
**        TIMER6 channel timer trigger channel0 ctrl mask bit
**      [7:7] SM_TMR7_TIMER_TRIG0_MASK
**        TIMER7 channel timer trigger channel0 ctrl mask bit
**      [8:8] SM_TMR0_TIMER_TRIG1_MASK
**        TIMER0 channel timer trigger channel1 ctrl mask bit
**      [9:9] SM_TMR1_TIMER_TRIG1_MASK
**        TIMER1 channel timer trigger channel1 ctrl mask bit
**      [10:10] SM_TMR2_TIMER_TRIG1_MASK
**        TIMER2 channel timer trigger channel1 ctrl mask bit
**      [11:11] SM_TMR3_TIMER_TRIG1_MASK
**        TIMER3 channel timer trigger channel1 ctrl mask bit
**      [12:12] SM_TMR4_TIMER_TRIG1_MASK
**        TIMER4 channel timer trigger channel1 ctrl mask bit
**      [13:13] SM_TMR5_TIMER_TRIG1_MASK
**        TIMER5 channel timer trigger channel1 ctrl mask bit
**      [14:14] SM_TMR6_TIMER_TRIG1_MASK
**        TIMER6 channel timer trigger channel1 ctrl mask bit
**      [15:15] SM_TMR7_TIMER_TRIG1_MASK
**        TIMER7 channel timer trigger channel1 ctrl mask bit
**      [16:16] SM_TMR0_TIMER_TRIG2_MASK
**        TIMER0 channel timer trigger channel2 ctrl mask bit
**      [17:17] SM_TMR1_TIMER_TRIG2_MASK
**        TIMER1 channel timer trigger channel2 ctrl mask bit
**      [18:18] SM_TMR2_TIMER_TRIG2_MASK
**        TIMER2 channel timer trigger channel2 ctrl mask bit
**      [19:19] SM_TMR3_TIMER_TRIG2_MASK
**        TIMER3 channel timer trigger channel2 ctrl mask bit
**      [20:20] SM_TMR4_TIMER_TRIG2_MASK
**        TIMER4 channel timer trigger channel2 ctrl mask bit
**      [21:21] SM_TMR5_TIMER_TRIG2_MASK
**        TIMER5 channel timer trigger channel2 ctrl mask bit
**      [22:22] SM_TMR6_TIMER_TRIG2_MASK
**        TIMER6 channel timer trigger channel2 ctrl mask bit
**      [23:23] SM_TMR7_TIMER_TRIG2_MASK
**        TIMER7 channel timer trigger channel2 ctrl mask bit
**      [24:24] SM_TMR0_TIMER_TRIG3_MASK
**        TIMER0 channel timer trigger channel3 ctrl mask bit
**      [25:25] SM_TMR1_TIMER_TRIG3_MASK
**        TIMER1 channel timer trigger channel3 ctrl mask bit
**      [26:26] SM_TMR2_TIMER_TRIG3_MASK
**        TIMER2 channel timer trigger channel3 ctrl mask bit
**      [27:27] SM_TMR3_TIMER_TRIG3_MASK
**        TIMER3 channel timer trigger channel3 ctrl mask bit
**      [28:28] SM_TMR4_TIMER_TRIG3_MASK
**        TIMER4 channel timer trigger channel3 ctrl mask bit
**      [29:29] SM_TMR5_TIMER_TRIG3_MASK
**        TIMER5 channel timer trigger channel3 ctrl mask bit
**      [30:30] SM_TMR6_TIMER_TRIG3_MASK
**        TIMER6 channel timer trigger channel3 ctrl mask bit
**      [31:31] SM_TMR7_TIMER_TRIG3_MASK
**        TIMER7 channel timer trigger channel3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_TIMER_TRIG_MASK0                   ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0170))
/*=========================================
** TIMER channel timer trigger ctrl mask bit:
**    TIMER channel timer trigger ctrl mask bit
**      [0:0] SM_TMR0_TIMER_TRIG4_MASK
**        TIMER0 channel timer trigger channel4 ctrl mask bit
**      [1:1] SM_TMR1_TIMER_TRIG4_MASK
**        TIMER1 channel timer trigger channel4 ctrl mask bit
**      [2:2] SM_TMR2_TIMER_TRIG4_MASK
**        TIMER2 channel timer trigger channel4 ctrl mask bit
**      [3:3] SM_TMR3_TIMER_TRIG4_MASK
**        TIMER3 channel timer trigger channel4 ctrl mask bit
**      [4:4] SM_TMR4_TIMER_TRIG4_MASK
**        TIMER4 channel timer trigger channel4 ctrl mask bit
**      [5:5] SM_TMR5_TIMER_TRIG4_MASK
**        TIMER5 channel timer trigger channel4 ctrl mask bit
**      [6:6] SM_TMR6_TIMER_TRIG4_MASK
**        TIMER6 channel timer trigger channel4 ctrl mask bit
**      [7:7] SM_TMR7_TIMER_TRIG4_MASK
**        TIMER7 channel timer trigger channel4 ctrl mask bit
**      [8:8] SM_TMR0_TIMER_TRIG5_MASK
**        TIMER0 channel timer trigger channel5 ctrl mask bit
**      [9:9] SM_TMR1_TIMER_TRIG5_MASK
**        TIMER1 channel timer trigger channel5 ctrl mask bit
**      [10:10] SM_TMR2_TIMER_TRIG5_MASK
**        TIMER2 channel timer trigger channel5 ctrl mask bit
**      [11:11] SM_TMR3_TIMER_TRIG5_MASK
**        TIMER3 channel timer trigger channel5 ctrl mask bit
**      [12:12] SM_TMR4_TIMER_TRIG5_MASK
**        TIMER4 channel timer trigger channel5 ctrl mask bit
**      [13:13] SM_TMR5_TIMER_TRIG5_MASK
**        TIMER5 channel timer trigger channel5 ctrl mask bit
**      [14:14] SM_TMR6_TIMER_TRIG5_MASK
**        TIMER6 channel timer trigger channel5 ctrl mask bit
**      [15:15] SM_TMR7_TIMER_TRIG5_MASK
**        TIMER7 channel timer trigger channel5 ctrl mask bit
**      [16:16] SM_TMR0_TIMER_TRIG6_MASK
**        TIMER0 channel timer trigger channel6 ctrl mask bit
**      [17:17] SM_TMR1_TIMER_TRIG6_MASK
**        TIMER1 channel timer trigger channel6 ctrl mask bit
**      [18:18] SM_TMR2_TIMER_TRIG6_MASK
**        TIMER2 channel timer trigger channel6 ctrl mask bit
**      [19:19] SM_TMR3_TIMER_TRIG6_MASK
**        TIMER3 channel timer trigger channel6 ctrl mask bit
**      [20:20] SM_TMR4_TIMER_TRIG6_MASK
**        TIMER4 channel timer trigger channel6 ctrl mask bit
**      [21:21] SM_TMR5_TIMER_TRIG6_MASK
**        TIMER5 channel timer trigger channel6 ctrl mask bit
**      [22:22] SM_TMR6_TIMER_TRIG6_MASK
**        TIMER6 channel timer trigger channel6 ctrl mask bit
**      [23:23] SM_TMR7_TIMER_TRIG6_MASK
**        TIMER7 channel timer trigger channel6 ctrl mask bit
**      [24:24] SM_TMR0_TIMER_TRIG7_MASK
**        TIMER0 channel timer trigger channel7 ctrl mask bit
**      [25:25] SM_TMR1_TIMER_TRIG7_MASK
**        TIMER1 channel timer trigger channel7 ctrl mask bit
**      [26:26] SM_TMR2_TIMER_TRIG7_MASK
**        TIMER2 channel timer trigger channel7 ctrl mask bit
**      [27:27] SM_TMR3_TIMER_TRIG7_MASK
**        TIMER3 channel timer trigger channel7 ctrl mask bit
**      [28:28] SM_TMR4_TIMER_TRIG7_MASK
**        TIMER4 channel timer trigger channel7 ctrl mask bit
**      [29:29] SM_TMR5_TIMER_TRIG7_MASK
**        TIMER5 channel timer trigger channel7 ctrl mask bit
**      [30:30] SM_TMR6_TIMER_TRIG7_MASK
**        TIMER6 channel timer trigger channel7 ctrl mask bit
**      [31:31] SM_TMR7_TIMER_TRIG7_MASK
**        TIMER7 channel timer trigger channel7 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_TIMER_TRIG_MASK1                   ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0174))
/*=========================================
** TIMER channel client active ctrl mask bit:
**    TIMER channel client active ctrl mask bit
**      [0:0] SM_TMR0_CLIENT_ACT0_MASK
**        TIMER0 channel client active channel0 ctrl mask bit
**      [1:1] SM_TMR1_CLIENT_ACT0_MASK
**        TIMER1 channel client active channel0 ctrl mask bit
**      [2:2] SM_TMR2_CLIENT_ACT0_MASK
**        TIMER2 channel client active channel0 ctrl mask bit
**      [3:3] SM_TMR3_CLIENT_ACT0_MASK
**        TIMER3 channel client active channel0 ctrl mask bit
**      [4:4] SM_TMR4_CLIENT_ACT0_MASK
**        TIMER4 channel client active channel0 ctrl mask bit
**      [5:5] SM_TMR5_CLIENT_ACT0_MASK
**        TIMER5 channel client active channel0 ctrl mask bit
**      [6:6] SM_TMR6_CLIENT_ACT0_MASK
**        TIMER6 channel client active channel0 ctrl mask bit
**      [7:7] SM_TMR7_CLIENT_ACT0_MASK
**        TIMER7 channel client active channel0 ctrl mask bit
**      [8:8] SM_TMR0_CLIENT_ACT1_MASK
**        TIMER0 channel client active channel1 ctrl mask bit
**      [9:9] SM_TMR1_CLIENT_ACT1_MASK
**        TIMER1 channel client active channel1 ctrl mask bit
**      [10:10] SM_TMR2_CLIENT_ACT1_MASK
**        TIMER2 channel client active channel1 ctrl mask bit
**      [11:11] SM_TMR3_CLIENT_ACT1_MASK
**        TIMER3 channel client active channel1 ctrl mask bit
**      [12:12] SM_TMR4_CLIENT_ACT1_MASK
**        TIMER4 channel client active channel1 ctrl mask bit
**      [13:13] SM_TMR5_CLIENT_ACT1_MASK
**        TIMER5 channel client active channel1 ctrl mask bit
**      [14:14] SM_TMR6_CLIENT_ACT1_MASK
**        TIMER6 channel client active channel1 ctrl mask bit
**      [15:15] SM_TMR7_CLIENT_ACT1_MASK
**        TIMER7 channel client active channel1 ctrl mask bit
**      [16:16] SM_TMR0_CLIENT_ACT2_MASK
**        TIMER0 channel client active channel2 ctrl mask bit
**      [17:17] SM_TMR1_CLIENT_ACT2_MASK
**        TIMER1 channel client active channel2 ctrl mask bit
**      [18:18] SM_TMR2_CLIENT_ACT2_MASK
**        TIMER2 channel client active channel2 ctrl mask bit
**      [19:19] SM_TMR3_CLIENT_ACT2_MASK
**        TIMER3 channel client active channel2 ctrl mask bit
**      [20:20] SM_TMR4_CLIENT_ACT2_MASK
**        TIMER4 channel client active channel2 ctrl mask bit
**      [21:21] SM_TMR5_CLIENT_ACT2_MASK
**        TIMER5 channel client active channel2 ctrl mask bit
**      [22:22] SM_TMR6_CLIENT_ACT2_MASK
**        TIMER6 channel client active channel2 ctrl mask bit
**      [23:23] SM_TMR7_CLIENT_ACT2_MASK
**        TIMER7 channel client active channel2 ctrl mask bit
**      [24:24] SM_TMR0_CLIENT_ACT3_MASK
**        TIMER0 channel client active channel3 ctrl mask bit
**      [25:25] SM_TMR1_CLIENT_ACT3_MASK
**        TIMER1 channel client active channel3 ctrl mask bit
**      [26:26] SM_TMR2_CLIENT_ACT3_MASK
**        TIMER2 channel client active channel3 ctrl mask bit
**      [27:27] SM_TMR3_CLIENT_ACT3_MASK
**        TIMER3 channel client active channel3 ctrl mask bit
**      [28:28] SM_TMR4_CLIENT_ACT3_MASK
**        TIMER4 channel client active channel3 ctrl mask bit
**      [29:29] SM_TMR5_CLIENT_ACT3_MASK
**        TIMER5 channel client active channel3 ctrl mask bit
**      [30:30] SM_TMR6_CLIENT_ACT3_MASK
**        TIMER6 channel client active channel3 ctrl mask bit
**      [31:31] SM_TMR7_CLIENT_ACT3_MASK
**        TIMER7 channel client active channel3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_TMR_CLIENT_ACT_MASK                    ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0180))
/*=========================================
** TIMER channel FSM status:
**    TIMER channel FSM status
**    0000001: Normal stage
**    0000010: MTOFF stage
**    0000100: PAUSE stage
**    0001000: PRE_PAUSE stage
**    0010000: SYSCLK_SETTLE stage
**    0100000: CCP_SETTLE stage
**    1000000: MTON stage
**      [6:0] SM_TMR0_SSTA
**        TIMER0 channel FSM status
**      [14:8] SM_TMR1_SSTA
**        TIMER1 channel FSM status
**      [22:16] SM_TMR2_SSTA
**        TIMER2 channel FSM status
**      [30:24] SM_TMR3_SSTA
**        TIMER3 channel FSM status
**=========================================*/
#define MD_TOPSM_SM_TMR_SSTA0                              ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x01A0))
/*=========================================
** TIMER channel FSM status:
**    TIMER channel FSM status
**    0000001: Normal stage
**    0000010: MTOFF stage
**    0000100: PAUSE stage
**    0001000: PRE_PAUSE stage
**    0010000: SYSCLK_SETTLE stage
**    0100000: CCP_SETTLE stage
**    1000000: MTON stage
**      [6:0] SM_TMR4_SSTA
**        TIMER4 channel FSM status
**      [14:8] SM_TMR5_SSTA
**        TIMER5 channel FSM status
**      [22:16] SM_TMR6_SSTA
**        TIMER6 channel FSM status
**      [30:24] SM_TMR7_SSTA
**        TIMER7 channel FSM status
**=========================================*/
#define MD_TOPSM_SM_TMR_SSTA1                              ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x01A4))
/*=========================================
** SLV channel request mask bit:
**    SLV channel request mask bit
**      [0:0] SM_SLV0_REQ_MASK
**        SLV0 channel request mask bit
**      [1:1] SM_SLV1_REQ_MASK
**        SLV1 channel request mask bit
**      [2:2] SM_SLV2_REQ_MASK
**        SLV2 channel request mask bit
**      [3:3] SM_SLV3_REQ_MASK
**        SLV3 channel request mask bit
**      [4:4] SM_SLV4_REQ_MASK
**        SLV4 channel request mask bit
**      [5:5] SM_SLV5_REQ_MASK
**        SLV5 channel request mask bit
**      [6:6] SM_SLV6_REQ_MASK
**        SLV6 channel request mask bit
**      [7:7] SM_SLV7_REQ_MASK
**        SLV7 channel request mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_REQ_MASK                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0200))
/*=========================================
** SLV channel sysclk ctrl mask bit:
**    SLV channel sysclk ctrl mask bit
**      [0:0] SM_SLV0_SYSCLK_MASK
**        SLV0 channel sysclk ctrl mask bit
**      [1:1] SM_SLV1_SYSCLK_MASK
**        SLV1 channel sysclk ctrl mask bit
**      [2:2] SM_SLV2_SYSCLK_MASK
**        SLV2 channel sysclk ctrl mask bit
**      [3:3] SM_SLV3_SYSCLK_MASK
**        SLV3 channel sysclk ctrl mask bit
**      [4:4] SM_SLV4_SYSCLK_MASK
**        SLV4 channel sysclk ctrl mask bit
**      [5:5] SM_SLV5_SYSCLK_MASK
**        SLV5 channel sysclk ctrl mask bit
**      [6:6] SM_SLV6_SYSCLK_MASK
**        SLV6 channel sysclk ctrl mask bit
**      [7:7] SM_SLV7_SYSCLK_MASK
**        SLV7 channel sysclk ctrl mask bit
**      [8:8] SM_SLV0_SYSCLK1_MASK
**        SLV0 channel sysclk1 ctrl mask bit
**      [9:9] SM_SLV1_SYSCLK1_MASK
**        SLV1 channel sysclk1 ctrl mask bit
**      [10:10] SM_SLV2_SYSCLK1_MASK
**        SLV2 channel sysclk1 ctrl mask bit
**      [11:11] SM_SLV3_SYSCLK1_MASK
**        SLV3 channel sysclk1 ctrl mask bit
**      [12:12] SM_SLV4_SYSCLK1_MASK
**        SLV4 channel sysclk1 ctrl mask bit
**      [13:13] SM_SLV5_SYSCLK1_MASK
**        SLV5 channel sysclk1 ctrl mask bit
**      [14:14] SM_SLV6_SYSCLK1_MASK
**        SLV6 channel sysclk1 ctrl mask bit
**      [15:15] SM_SLV7_SYSCLK1_MASK
**        SLV7 channel sysclk1 ctrl mask bit
**      [16:16] SM_SLV0_SYSCLK2_MASK
**        SLV0 channel sysclk2 ctrl mask bit
**      [17:17] SM_SLV1_SYSCLK2_MASK
**        SLV1 channel sysclk2 ctrl mask bit
**      [18:18] SM_SLV2_SYSCLK2_MASK
**        SLV2 channel sysclk2 ctrl mask bit
**      [19:19] SM_SLV3_SYSCLK2_MASK
**        SLV3 channel sysclk2 ctrl mask bit
**      [20:20] SM_SLV4_SYSCLK2_MASK
**        SLV4 channel sysclk2 ctrl mask bit
**      [21:21] SM_SLV5_SYSCLK2_MASK
**        SLV5 channel sysclk2 ctrl mask bit
**      [22:22] SM_SLV6_SYSCLK2_MASK
**        SLV6 channel sysclk2 ctrl mask bit
**      [23:23] SM_SLV7_SYSCLK2_MASK
**        SLV7 channel sysclk2 ctrl mask bit
**      [24:24] SM_SLV0_SYSCLK3_MASK
**        SLV0 channel sysclk3 ctrl mask bit
**      [25:25] SM_SLV1_SYSCLK3_MASK
**        SLV1 channel sysclk3 ctrl mask bit
**      [26:26] SM_SLV2_SYSCLK3_MASK
**        SLV2 channel sysclk3 ctrl mask bit
**      [27:27] SM_SLV3_SYSCLK3_MASK
**        SLV3 channel sysclk3 ctrl mask bit
**      [28:28] SM_SLV4_SYSCLK3_MASK
**        SLV4 channel sysclk3 ctrl mask bit
**      [29:29] SM_SLV5_SYSCLK3_MASK
**        SLV5 channel sysclk3 ctrl mask bit
**      [30:30] SM_SLV6_SYSCLK3_MASK
**        SLV6 channel sysclk3 ctrl mask bit
**      [31:31] SM_SLV7_SYSCLK3_MASK
**        SLV7 channel sysclk3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_SYSCLK_MASK                        ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0208))
/*=========================================
** SLV channel pll ctrl mask bit:
**    SLV channel pll ctrl mask bit
**      [0:0] SM_SLV0_PLL0_MASK
**        SLV0 channel pll0 ctrl mask bit
**      [1:1] SM_SLV1_PLL0_MASK
**        SLV1 channel pll0 ctrl mask bit
**      [2:2] SM_SLV2_PLL0_MASK
**        SLV2 channel pll0 ctrl mask bit
**      [3:3] SM_SLV3_PLL0_MASK
**        SLV3 channel pll0 ctrl mask bit
**      [4:4] SM_SLV4_PLL0_MASK
**        SLV4 channel pll0 ctrl mask bit
**      [5:5] SM_SLV5_PLL0_MASK
**        SLV5 channel pll0 ctrl mask bit
**      [6:6] SM_SLV6_PLL0_MASK
**        SLV6 channel pll0 ctrl mask bit
**      [7:7] SM_SLV7_PLL0_MASK
**        SLV7 channel pll0 ctrl mask bit
**      [8:8] SM_SLV0_PLL1_MASK
**        SLV0 channel pll1 ctrl mask bit
**      [9:9] SM_SLV1_PLL1_MASK
**        SLV1 channel pll1 ctrl mask bit
**      [10:10] SM_SLV2_PLL1_MASK
**        SLV2 channel pll1 ctrl mask bit
**      [11:11] SM_SLV3_PLL1_MASK
**        SLV3 channel pll1 ctrl mask bit
**      [12:12] SM_SLV4_PLL1_MASK
**        SLV4 channel pll1 ctrl mask bit
**      [13:13] SM_SLV5_PLL1_MASK
**        SLV5 channel pll1 ctrl mask bit
**      [14:14] SM_SLV6_PLL1_MASK
**        SLV6 channel pll1 ctrl mask bit
**      [15:15] SM_SLV7_PLL1_MASK
**        SLV7 channel pll1 ctrl mask bit
**      [16:16] SM_SLV0_PLL2_MASK
**        SLV0 channel pll2 ctrl mask bit
**      [17:17] SM_SLV1_PLL2_MASK
**        SLV1 channel pll2 ctrl mask bit
**      [18:18] SM_SLV2_PLL2_MASK
**        SLV2 channel pll2 ctrl mask bit
**      [19:19] SM_SLV3_PLL2_MASK
**        SLV3 channel pll2 ctrl mask bit
**      [20:20] SM_SLV4_PLL2_MASK
**        SLV4 channel pll2 ctrl mask bit
**      [21:21] SM_SLV5_PLL2_MASK
**        SLV5 channel pll2 ctrl mask bit
**      [22:22] SM_SLV6_PLL2_MASK
**        SLV6 channel pll2 ctrl mask bit
**      [23:23] SM_SLV7_PLL2_MASK
**        SLV7 channel pll2 ctrl mask bit
**      [24:24] SM_SLV0_PLL3_MASK
**        SLV0 channel pll3 ctrl mask bit
**      [25:25] SM_SLV1_PLL3_MASK
**        SLV1 channel pll3 ctrl mask bit
**      [26:26] SM_SLV2_PLL3_MASK
**        SLV2 channel pll3 ctrl mask bit
**      [27:27] SM_SLV3_PLL3_MASK
**        SLV3 channel pll3 ctrl mask bit
**      [28:28] SM_SLV4_PLL3_MASK
**        SLV4 channel pll3 ctrl mask bit
**      [29:29] SM_SLV5_PLL3_MASK
**        SLV5 channel pll3 ctrl mask bit
**      [30:30] SM_SLV6_PLL3_MASK
**        SLV6 channel pll3 ctrl mask bit
**      [31:31] SM_SLV7_PLL3_MASK
**        SLV7 channel pll3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_PLL_MASK0                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0220))
/*=========================================
** SLV channel pll ctrl mask bit:
**    SLV channel pll ctrl mask bit
**      [0:0] SM_SLV0_PLL4_MASK
**        SLV0 channel pll4 ctrl mask bit
**      [1:1] SM_SLV1_PLL4_MASK
**        SLV1 channel pll4 ctrl mask bit
**      [2:2] SM_SLV2_PLL4_MASK
**        SLV2 channel pll4 ctrl mask bit
**      [3:3] SM_SLV3_PLL4_MASK
**        SLV3 channel pll4 ctrl mask bit
**      [4:4] SM_SLV4_PLL4_MASK
**        SLV4 channel pll4 ctrl mask bit
**      [5:5] SM_SLV5_PLL4_MASK
**        SLV5 channel pll4 ctrl mask bit
**      [6:6] SM_SLV6_PLL4_MASK
**        SLV6 channel pll4 ctrl mask bit
**      [7:7] SM_SLV7_PLL4_MASK
**        SLV7 channel pll4 ctrl mask bit
**      [8:8] SM_SLV0_PLL5_MASK
**        SLV0 channel pll5 ctrl mask bit
**      [9:9] SM_SLV1_PLL5_MASK
**        SLV1 channel pll5 ctrl mask bit
**      [10:10] SM_SLV2_PLL5_MASK
**        SLV2 channel pll5 ctrl mask bit
**      [11:11] SM_SLV3_PLL5_MASK
**        SLV3 channel pll5 ctrl mask bit
**      [12:12] SM_SLV4_PLL5_MASK
**        SLV4 channel pll5 ctrl mask bit
**      [13:13] SM_SLV5_PLL5_MASK
**        SLV5 channel pll5 ctrl mask bit
**      [14:14] SM_SLV6_PLL5_MASK
**        SLV6 channel pll5 ctrl mask bit
**      [15:15] SM_SLV7_PLL5_MASK
**        SLV7 channel pll5 ctrl mask bit
**      [16:16] SM_SLV0_PLL6_MASK
**        SLV0 channel pll6 ctrl mask bit
**      [17:17] SM_SLV1_PLL6_MASK
**        SLV1 channel pll6 ctrl mask bit
**      [18:18] SM_SLV2_PLL6_MASK
**        SLV2 channel pll6 ctrl mask bit
**      [19:19] SM_SLV3_PLL6_MASK
**        SLV3 channel pll6 ctrl mask bit
**      [20:20] SM_SLV4_PLL6_MASK
**        SLV4 channel pll6 ctrl mask bit
**      [21:21] SM_SLV5_PLL6_MASK
**        SLV5 channel pll6 ctrl mask bit
**      [22:22] SM_SLV6_PLL6_MASK
**        SLV6 channel pll6 ctrl mask bit
**      [23:23] SM_SLV7_PLL6_MASK
**        SLV7 channel pll6 ctrl mask bit
**      [24:24] SM_SLV0_PLL7_MASK
**        SLV0 channel pll7 ctrl mask bit
**      [25:25] SM_SLV1_PLL7_MASK
**        SLV1 channel pll7 ctrl mask bit
**      [26:26] SM_SLV2_PLL7_MASK
**        SLV2 channel pll7 ctrl mask bit
**      [27:27] SM_SLV3_PLL7_MASK
**        SLV3 channel pll7 ctrl mask bit
**      [28:28] SM_SLV4_PLL7_MASK
**        SLV4 channel pll7 ctrl mask bit
**      [29:29] SM_SLV5_PLL7_MASK
**        SLV5 channel pll7 ctrl mask bit
**      [30:30] SM_SLV6_PLL7_MASK
**        SLV6 channel pll7 ctrl mask bit
**      [31:31] SM_SLV7_PLL7_MASK
**        SLV7 channel pll7 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_PLL_MASK1                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0224))
/*=========================================
** SLV channel pll ctrl mask bit:
**    SLV channel pll ctrl mask bit
**      [0:0] SM_SLV0_PLL8_MASK
**        SLV0 channel pll8 ctrl mask bit
**      [1:1] SM_SLV1_PLL8_MASK
**        SLV1 channel pll8 ctrl mask bit
**      [2:2] SM_SLV2_PLL8_MASK
**        SLV2 channel pll8 ctrl mask bit
**      [3:3] SM_SLV3_PLL8_MASK
**        SLV3 channel pll8 ctrl mask bit
**      [4:4] SM_SLV4_PLL8_MASK
**        SLV4 channel pll8 ctrl mask bit
**      [5:5] SM_SLV5_PLL8_MASK
**        SLV5 channel pll8 ctrl mask bit
**      [6:6] SM_SLV6_PLL8_MASK
**        SLV6 channel pll8 ctrl mask bit
**      [7:7] SM_SLV7_PLL8_MASK
**        SLV7 channel pll8 ctrl mask bit
**      [8:8] SM_SLV0_PLL9_MASK
**        SLV0 channel pll9 ctrl mask bit
**      [9:9] SM_SLV1_PLL9_MASK
**        SLV1 channel pll9 ctrl mask bit
**      [10:10] SM_SLV2_PLL9_MASK
**        SLV2 channel pll9 ctrl mask bit
**      [11:11] SM_SLV3_PLL9_MASK
**        SLV3 channel pll9 ctrl mask bit
**      [12:12] SM_SLV4_PLL9_MASK
**        SLV4 channel pll9 ctrl mask bit
**      [13:13] SM_SLV5_PLL9_MASK
**        SLV5 channel pll9 ctrl mask bit
**      [14:14] SM_SLV6_PLL9_MASK
**        SLV6 channel pll9 ctrl mask bit
**      [15:15] SM_SLV7_PLL9_MASK
**        SLV7 channel pll9 ctrl mask bit
**      [16:16] SM_SLV0_PLL10_MASK
**        SLV0 channel pll10 ctrl mask bit
**      [17:17] SM_SLV1_PLL10_MASK
**        SLV1 channel pll10 ctrl mask bit
**      [18:18] SM_SLV2_PLL10_MASK
**        SLV2 channel pll10 ctrl mask bit
**      [19:19] SM_SLV3_PLL10_MASK
**        SLV3 channel pll10 ctrl mask bit
**      [20:20] SM_SLV4_PLL10_MASK
**        SLV4 channel pll10 ctrl mask bit
**      [21:21] SM_SLV5_PLL10_MASK
**        SLV5 channel pll10 ctrl mask bit
**      [22:22] SM_SLV6_PLL10_MASK
**        SLV6 channel pll10 ctrl mask bit
**      [23:23] SM_SLV7_PLL10_MASK
**        SLV7 channel pll10 ctrl mask bit
**      [24:24] SM_SLV0_PLL11_MASK
**        SLV0 channel pll11 ctrl mask bit
**      [25:25] SM_SLV1_PLL11_MASK
**        SLV1 channel pll11 ctrl mask bit
**      [26:26] SM_SLV2_PLL11_MASK
**        SLV2 channel pll11 ctrl mask bit
**      [27:27] SM_SLV3_PLL11_MASK
**        SLV3 channel pll11 ctrl mask bit
**      [28:28] SM_SLV4_PLL11_MASK
**        SLV4 channel pll11 ctrl mask bit
**      [29:29] SM_SLV5_PLL11_MASK
**        SLV5 channel pll11 ctrl mask bit
**      [30:30] SM_SLV6_PLL11_MASK
**        SLV6 channel pll11 ctrl mask bit
**      [31:31] SM_SLV7_PLL11_MASK
**        SLV7 channel pll11 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_PLL_MASK2                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0228))
/*=========================================
** SLV channel pll ctrl mask bit:
**    SLV channel pll ctrl mask bit
**      [0:0] SM_SLV0_PLL12_MASK
**        SLV0 channel pll12 ctrl mask bit
**      [1:1] SM_SLV1_PLL12_MASK
**        SLV1 channel pll12 ctrl mask bit
**      [2:2] SM_SLV2_PLL12_MASK
**        SLV2 channel pll12 ctrl mask bit
**      [3:3] SM_SLV3_PLL12_MASK
**        SLV3 channel pll12 ctrl mask bit
**      [4:4] SM_SLV4_PLL12_MASK
**        SLV4 channel pll12 ctrl mask bit
**      [5:5] SM_SLV5_PLL12_MASK
**        SLV5 channel pll12 ctrl mask bit
**      [6:6] SM_SLV6_PLL12_MASK
**        SLV6 channel pll12 ctrl mask bit
**      [7:7] SM_SLV7_PLL12_MASK
**        SLV7 channel pll12 ctrl mask bit
**      [8:8] SM_SLV0_PLL13_MASK
**        SLV0 channel pll13 ctrl mask bit
**      [9:9] SM_SLV1_PLL13_MASK
**        SLV1 channel pll13 ctrl mask bit
**      [10:10] SM_SLV2_PLL13_MASK
**        SLV2 channel pll13 ctrl mask bit
**      [11:11] SM_SLV3_PLL13_MASK
**        SLV3 channel pll13 ctrl mask bit
**      [12:12] SM_SLV4_PLL13_MASK
**        SLV4 channel pll13 ctrl mask bit
**      [13:13] SM_SLV5_PLL13_MASK
**        SLV5 channel pll13 ctrl mask bit
**      [14:14] SM_SLV6_PLL13_MASK
**        SLV6 channel pll13 ctrl mask bit
**      [15:15] SM_SLV7_PLL13_MASK
**        SLV7 channel pll13 ctrl mask bit
**      [16:16] SM_SLV0_PLL14_MASK
**        SLV0 channel pll14 ctrl mask bit
**      [17:17] SM_SLV1_PLL14_MASK
**        SLV1 channel pll14 ctrl mask bit
**      [18:18] SM_SLV2_PLL14_MASK
**        SLV2 channel pll14 ctrl mask bit
**      [19:19] SM_SLV3_PLL14_MASK
**        SLV3 channel pll14 ctrl mask bit
**      [20:20] SM_SLV4_PLL14_MASK
**        SLV4 channel pll14 ctrl mask bit
**      [21:21] SM_SLV5_PLL14_MASK
**        SLV5 channel pll14 ctrl mask bit
**      [22:22] SM_SLV6_PLL14_MASK
**        SLV6 channel pll14 ctrl mask bit
**      [23:23] SM_SLV7_PLL14_MASK
**        SLV7 channel pll14 ctrl mask bit
**      [24:24] SM_SLV0_PLL15_MASK
**        SLV0 channel pll15 ctrl mask bit
**      [25:25] SM_SLV1_PLL15_MASK
**        SLV1 channel pll15 ctrl mask bit
**      [26:26] SM_SLV2_PLL15_MASK
**        SLV2 channel pll15 ctrl mask bit
**      [27:27] SM_SLV3_PLL15_MASK
**        SLV3 channel pll15 ctrl mask bit
**      [28:28] SM_SLV4_PLL15_MASK
**        SLV4 channel pll15 ctrl mask bit
**      [29:29] SM_SLV5_PLL15_MASK
**        SLV5 channel pll15 ctrl mask bit
**      [30:30] SM_SLV6_PLL15_MASK
**        SLV6 channel pll15 ctrl mask bit
**      [31:31] SM_SLV7_PLL15_MASK
**        SLV7 channel pll15 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_PLL_MASK3                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x022C))
/*=========================================
** SLV channel pwr ctrl mask bit:
**    SLV channel pwr ctrl mask bit
**      [0:0] SM_SLV0_PWR0_MASK
**        SLV0 channel pwr0 ctrl mask bit
**      [1:1] SM_SLV1_PWR0_MASK
**        SLV1 channel pwr0 ctrl mask bit
**      [2:2] SM_SLV2_PWR0_MASK
**        SLV2 channel pwr0 ctrl mask bit
**      [3:3] SM_SLV3_PWR0_MASK
**        SLV3 channel pwr0 ctrl mask bit
**      [4:4] SM_SLV4_PWR0_MASK
**        SLV4 channel pwr0 ctrl mask bit
**      [5:5] SM_SLV5_PWR0_MASK
**        SLV5 channel pwr0 ctrl mask bit
**      [6:6] SM_SLV6_PWR0_MASK
**        SLV6 channel pwr0 ctrl mask bit
**      [7:7] SM_SLV7_PWR0_MASK
**        SLV7 channel pwr0 ctrl mask bit
**      [8:8] SM_SLV0_PWR1_MASK
**        SLV0 channel pwr1 ctrl mask bit
**      [9:9] SM_SLV1_PWR1_MASK
**        SLV1 channel pwr1 ctrl mask bit
**      [10:10] SM_SLV2_PWR1_MASK
**        SLV2 channel pwr1 ctrl mask bit
**      [11:11] SM_SLV3_PWR1_MASK
**        SLV3 channel pwr1 ctrl mask bit
**      [12:12] SM_SLV4_PWR1_MASK
**        SLV4 channel pwr1 ctrl mask bit
**      [13:13] SM_SLV5_PWR1_MASK
**        SLV5 channel pwr1 ctrl mask bit
**      [14:14] SM_SLV6_PWR1_MASK
**        SLV6 channel pwr1 ctrl mask bit
**      [15:15] SM_SLV7_PWR1_MASK
**        SLV7 channel pwr1 ctrl mask bit
**      [16:16] SM_SLV0_PWR2_MASK
**        SLV0 channel pwr2 ctrl mask bit
**      [17:17] SM_SLV1_PWR2_MASK
**        SLV1 channel pwr2 ctrl mask bit
**      [18:18] SM_SLV2_PWR2_MASK
**        SLV2 channel pwr2 ctrl mask bit
**      [19:19] SM_SLV3_PWR2_MASK
**        SLV3 channel pwr2 ctrl mask bit
**      [20:20] SM_SLV4_PWR2_MASK
**        SLV4 channel pwr2 ctrl mask bit
**      [21:21] SM_SLV5_PWR2_MASK
**        SLV5 channel pwr2 ctrl mask bit
**      [22:22] SM_SLV6_PWR2_MASK
**        SLV6 channel pwr2 ctrl mask bit
**      [23:23] SM_SLV7_PWR2_MASK
**        SLV7 channel pwr2 ctrl mask bit
**      [24:24] SM_SLV0_PWR3_MASK
**        SLV0 channel pwr3 ctrl mask bit
**      [25:25] SM_SLV1_PWR3_MASK
**        SLV1 channel pwr3 ctrl mask bit
**      [26:26] SM_SLV2_PWR3_MASK
**        SLV2 channel pwr3 ctrl mask bit
**      [27:27] SM_SLV3_PWR3_MASK
**        SLV3 channel pwr3 ctrl mask bit
**      [28:28] SM_SLV4_PWR3_MASK
**        SLV4 channel pwr3 ctrl mask bit
**      [29:29] SM_SLV5_PWR3_MASK
**        SLV5 channel pwr3 ctrl mask bit
**      [30:30] SM_SLV6_PWR3_MASK
**        SLV6 channel pwr3 ctrl mask bit
**      [31:31] SM_SLV7_PWR3_MASK
**        SLV7 channel pwr3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_PWR_MASK0                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0240))
/*=========================================
** SLV channel pwr ctrl mask bit:
**    SLV channel pwr ctrl mask bit
**      [0:0] SM_SLV0_PWR4_MASK
**        SLV0 channel pwr4 ctrl mask bit
**      [1:1] SM_SLV1_PWR4_MASK
**        SLV1 channel pwr4 ctrl mask bit
**      [2:2] SM_SLV2_PWR4_MASK
**        SLV2 channel pwr4 ctrl mask bit
**      [3:3] SM_SLV3_PWR4_MASK
**        SLV3 channel pwr4 ctrl mask bit
**      [4:4] SM_SLV4_PWR4_MASK
**        SLV4 channel pwr4 ctrl mask bit
**      [5:5] SM_SLV5_PWR4_MASK
**        SLV5 channel pwr4 ctrl mask bit
**      [6:6] SM_SLV6_PWR4_MASK
**        SLV6 channel pwr4 ctrl mask bit
**      [7:7] SM_SLV7_PWR4_MASK
**        SLV7 channel pwr4 ctrl mask bit
**      [8:8] SM_SLV0_PWR5_MASK
**        SLV0 channel pwr5 ctrl mask bit
**      [9:9] SM_SLV1_PWR5_MASK
**        SLV1 channel pwr5 ctrl mask bit
**      [10:10] SM_SLV2_PWR5_MASK
**        SLV2 channel pwr5 ctrl mask bit
**      [11:11] SM_SLV3_PWR5_MASK
**        SLV3 channel pwr5 ctrl mask bit
**      [12:12] SM_SLV4_PWR5_MASK
**        SLV4 channel pwr5 ctrl mask bit
**      [13:13] SM_SLV5_PWR5_MASK
**        SLV5 channel pwr5 ctrl mask bit
**      [14:14] SM_SLV6_PWR5_MASK
**        SLV6 channel pwr5 ctrl mask bit
**      [15:15] SM_SLV7_PWR5_MASK
**        SLV7 channel pwr5 ctrl mask bit
**      [16:16] SM_SLV0_PWR6_MASK
**        SLV0 channel pwr6 ctrl mask bit
**      [17:17] SM_SLV1_PWR6_MASK
**        SLV1 channel pwr6 ctrl mask bit
**      [18:18] SM_SLV2_PWR6_MASK
**        SLV2 channel pwr6 ctrl mask bit
**      [19:19] SM_SLV3_PWR6_MASK
**        SLV3 channel pwr6 ctrl mask bit
**      [20:20] SM_SLV4_PWR6_MASK
**        SLV4 channel pwr6 ctrl mask bit
**      [21:21] SM_SLV5_PWR6_MASK
**        SLV5 channel pwr6 ctrl mask bit
**      [22:22] SM_SLV6_PWR6_MASK
**        SLV6 channel pwr6 ctrl mask bit
**      [23:23] SM_SLV7_PWR6_MASK
**        SLV7 channel pwr6 ctrl mask bit
**      [24:24] SM_SLV0_PWR7_MASK
**        SLV0 channel pwr7 ctrl mask bit
**      [25:25] SM_SLV1_PWR7_MASK
**        SLV1 channel pwr7 ctrl mask bit
**      [26:26] SM_SLV2_PWR7_MASK
**        SLV2 channel pwr7 ctrl mask bit
**      [27:27] SM_SLV3_PWR7_MASK
**        SLV3 channel pwr7 ctrl mask bit
**      [28:28] SM_SLV4_PWR7_MASK
**        SLV4 channel pwr7 ctrl mask bit
**      [29:29] SM_SLV5_PWR7_MASK
**        SLV5 channel pwr7 ctrl mask bit
**      [30:30] SM_SLV6_PWR7_MASK
**        SLV6 channel pwr7 ctrl mask bit
**      [31:31] SM_SLV7_PWR7_MASK
**        SLV7 channel pwr7 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_PWR_MASK1                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0244))
/*=========================================
** SLV channel pwr ctrl mask bit:
**    SLV channel pwr ctrl mask bit
**      [0:0] SM_SLV0_PWR8_MASK
**        SLV0 channel pwr8 ctrl mask bit
**      [1:1] SM_SLV1_PWR8_MASK
**        SLV1 channel pwr8 ctrl mask bit
**      [2:2] SM_SLV2_PWR8_MASK
**        SLV2 channel pwr8 ctrl mask bit
**      [3:3] SM_SLV3_PWR8_MASK
**        SLV3 channel pwr8 ctrl mask bit
**      [4:4] SM_SLV4_PWR8_MASK
**        SLV4 channel pwr8 ctrl mask bit
**      [5:5] SM_SLV5_PWR8_MASK
**        SLV5 channel pwr8 ctrl mask bit
**      [6:6] SM_SLV6_PWR8_MASK
**        SLV6 channel pwr8 ctrl mask bit
**      [7:7] SM_SLV7_PWR8_MASK
**        SLV7 channel pwr8 ctrl mask bit
**      [8:8] SM_SLV0_PWR9_MASK
**        SLV0 channel pwr9 ctrl mask bit
**      [9:9] SM_SLV1_PWR9_MASK
**        SLV1 channel pwr9 ctrl mask bit
**      [10:10] SM_SLV2_PWR9_MASK
**        SLV2 channel pwr9 ctrl mask bit
**      [11:11] SM_SLV3_PWR9_MASK
**        SLV3 channel pwr9 ctrl mask bit
**      [12:12] SM_SLV4_PWR9_MASK
**        SLV4 channel pwr9 ctrl mask bit
**      [13:13] SM_SLV5_PWR9_MASK
**        SLV5 channel pwr9 ctrl mask bit
**      [14:14] SM_SLV6_PWR9_MASK
**        SLV6 channel pwr9 ctrl mask bit
**      [15:15] SM_SLV7_PWR9_MASK
**        SLV7 channel pwr9 ctrl mask bit
**      [16:16] SM_SLV0_PWR10_MASK
**        SLV0 channel pwr10 ctrl mask bit
**      [17:17] SM_SLV1_PWR10_MASK
**        SLV1 channel pwr10 ctrl mask bit
**      [18:18] SM_SLV2_PWR10_MASK
**        SLV2 channel pwr10 ctrl mask bit
**      [19:19] SM_SLV3_PWR10_MASK
**        SLV3 channel pwr10 ctrl mask bit
**      [20:20] SM_SLV4_PWR10_MASK
**        SLV4 channel pwr10 ctrl mask bit
**      [21:21] SM_SLV5_PWR10_MASK
**        SLV5 channel pwr10 ctrl mask bit
**      [22:22] SM_SLV6_PWR10_MASK
**        SLV6 channel pwr10 ctrl mask bit
**      [23:23] SM_SLV7_PWR10_MASK
**        SLV7 channel pwr10 ctrl mask bit
**      [24:24] SM_SLV0_PWR11_MASK
**        SLV0 channel pwr11 ctrl mask bit
**      [25:25] SM_SLV1_PWR11_MASK
**        SLV1 channel pwr11 ctrl mask bit
**      [26:26] SM_SLV2_PWR11_MASK
**        SLV2 channel pwr11 ctrl mask bit
**      [27:27] SM_SLV3_PWR11_MASK
**        SLV3 channel pwr11 ctrl mask bit
**      [28:28] SM_SLV4_PWR11_MASK
**        SLV4 channel pwr11 ctrl mask bit
**      [29:29] SM_SLV5_PWR11_MASK
**        SLV5 channel pwr11 ctrl mask bit
**      [30:30] SM_SLV6_PWR11_MASK
**        SLV6 channel pwr11 ctrl mask bit
**      [31:31] SM_SLV7_PWR11_MASK
**        SLV7 channel pwr11 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_PWR_MASK2                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0248))
/*=========================================
** SLV channel pwr ctrl mask bit:
**    SLV channel pwr ctrl mask bit
**      [0:0] SM_SLV0_PWR12_MASK
**        SLV0 channel pwr12 ctrl mask bit
**      [1:1] SM_SLV1_PWR12_MASK
**        SLV1 channel pwr12 ctrl mask bit
**      [2:2] SM_SLV2_PWR12_MASK
**        SLV2 channel pwr12 ctrl mask bit
**      [3:3] SM_SLV3_PWR12_MASK
**        SLV3 channel pwr12 ctrl mask bit
**      [4:4] SM_SLV4_PWR12_MASK
**        SLV4 channel pwr12 ctrl mask bit
**      [5:5] SM_SLV5_PWR12_MASK
**        SLV5 channel pwr12 ctrl mask bit
**      [6:6] SM_SLV6_PWR12_MASK
**        SLV6 channel pwr12 ctrl mask bit
**      [7:7] SM_SLV7_PWR12_MASK
**        SLV7 channel pwr12 ctrl mask bit
**      [8:8] SM_SLV0_PWR13_MASK
**        SLV0 channel pwr13 ctrl mask bit
**      [9:9] SM_SLV1_PWR13_MASK
**        SLV1 channel pwr13 ctrl mask bit
**      [10:10] SM_SLV2_PWR13_MASK
**        SLV2 channel pwr13 ctrl mask bit
**      [11:11] SM_SLV3_PWR13_MASK
**        SLV3 channel pwr13 ctrl mask bit
**      [12:12] SM_SLV4_PWR13_MASK
**        SLV4 channel pwr13 ctrl mask bit
**      [13:13] SM_SLV5_PWR13_MASK
**        SLV5 channel pwr13 ctrl mask bit
**      [14:14] SM_SLV6_PWR13_MASK
**        SLV6 channel pwr13 ctrl mask bit
**      [15:15] SM_SLV7_PWR13_MASK
**        SLV7 channel pwr13 ctrl mask bit
**      [16:16] SM_SLV0_PWR14_MASK
**        SLV0 channel pwr14 ctrl mask bit
**      [17:17] SM_SLV1_PWR14_MASK
**        SLV1 channel pwr14 ctrl mask bit
**      [18:18] SM_SLV2_PWR14_MASK
**        SLV2 channel pwr14 ctrl mask bit
**      [19:19] SM_SLV3_PWR14_MASK
**        SLV3 channel pwr14 ctrl mask bit
**      [20:20] SM_SLV4_PWR14_MASK
**        SLV4 channel pwr14 ctrl mask bit
**      [21:21] SM_SLV5_PWR14_MASK
**        SLV5 channel pwr14 ctrl mask bit
**      [22:22] SM_SLV6_PWR14_MASK
**        SLV6 channel pwr14 ctrl mask bit
**      [23:23] SM_SLV7_PWR14_MASK
**        SLV7 channel pwr14 ctrl mask bit
**      [24:24] SM_SLV0_PWR15_MASK
**        SLV0 channel pwr15 ctrl mask bit
**      [25:25] SM_SLV1_PWR15_MASK
**        SLV1 channel pwr15 ctrl mask bit
**      [26:26] SM_SLV2_PWR15_MASK
**        SLV2 channel pwr15 ctrl mask bit
**      [27:27] SM_SLV3_PWR15_MASK
**        SLV3 channel pwr15 ctrl mask bit
**      [28:28] SM_SLV4_PWR15_MASK
**        SLV4 channel pwr15 ctrl mask bit
**      [29:29] SM_SLV5_PWR15_MASK
**        SLV5 channel pwr15 ctrl mask bit
**      [30:30] SM_SLV6_PWR15_MASK
**        SLV6 channel pwr15 ctrl mask bit
**      [31:31] SM_SLV7_PWR15_MASK
**        SLV7 channel pwr15 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_PWR_MASK3                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x024C))
/*=========================================
** SLV channel pwr ctrl mask bit:
**    SLV channel pwr ctrl mask bit
**      [0:0] SM_SLV0_PWR16_MASK
**        SLV0 channel pwr16 ctrl mask bit
**      [1:1] SM_SLV1_PWR16_MASK
**        SLV1 channel pwr16 ctrl mask bit
**      [2:2] SM_SLV2_PWR16_MASK
**        SLV2 channel pwr16 ctrl mask bit
**      [3:3] SM_SLV3_PWR16_MASK
**        SLV3 channel pwr16 ctrl mask bit
**      [4:4] SM_SLV4_PWR16_MASK
**        SLV4 channel pwr16 ctrl mask bit
**      [5:5] SM_SLV5_PWR16_MASK
**        SLV5 channel pwr16 ctrl mask bit
**      [6:6] SM_SLV6_PWR16_MASK
**        SLV6 channel pwr16 ctrl mask bit
**      [7:7] SM_SLV7_PWR16_MASK
**        SLV7 channel pwr16 ctrl mask bit
**      [8:8] SM_SLV0_PWR17_MASK
**        SLV0 channel pwr17 ctrl mask bit
**      [9:9] SM_SLV1_PWR17_MASK
**        SLV1 channel pwr17 ctrl mask bit
**      [10:10] SM_SLV2_PWR17_MASK
**        SLV2 channel pwr17 ctrl mask bit
**      [11:11] SM_SLV3_PWR17_MASK
**        SLV3 channel pwr17 ctrl mask bit
**      [12:12] SM_SLV4_PWR17_MASK
**        SLV4 channel pwr17 ctrl mask bit
**      [13:13] SM_SLV5_PWR17_MASK
**        SLV5 channel pwr17 ctrl mask bit
**      [14:14] SM_SLV6_PWR17_MASK
**        SLV6 channel pwr17 ctrl mask bit
**      [15:15] SM_SLV7_PWR17_MASK
**        SLV7 channel pwr17 ctrl mask bit
**      [16:16] SM_SLV0_PWR18_MASK
**        SLV0 channel pwr18 ctrl mask bit
**      [17:17] SM_SLV1_PWR18_MASK
**        SLV1 channel pwr18 ctrl mask bit
**      [18:18] SM_SLV2_PWR18_MASK
**        SLV2 channel pwr18 ctrl mask bit
**      [19:19] SM_SLV3_PWR18_MASK
**        SLV3 channel pwr18 ctrl mask bit
**      [20:20] SM_SLV4_PWR18_MASK
**        SLV4 channel pwr18 ctrl mask bit
**      [21:21] SM_SLV5_PWR18_MASK
**        SLV5 channel pwr18 ctrl mask bit
**      [22:22] SM_SLV6_PWR18_MASK
**        SLV6 channel pwr18 ctrl mask bit
**      [23:23] SM_SLV7_PWR18_MASK
**        SLV7 channel pwr18 ctrl mask bit
**      [24:24] SM_SLV0_PWR19_MASK
**        SLV0 channel pwr19 ctrl mask bit
**      [25:25] SM_SLV1_PWR19_MASK
**        SLV1 channel pwr19 ctrl mask bit
**      [26:26] SM_SLV2_PWR19_MASK
**        SLV2 channel pwr19 ctrl mask bit
**      [27:27] SM_SLV3_PWR19_MASK
**        SLV3 channel pwr19 ctrl mask bit
**      [28:28] SM_SLV4_PWR19_MASK
**        SLV4 channel pwr19 ctrl mask bit
**      [29:29] SM_SLV5_PWR19_MASK
**        SLV5 channel pwr19 ctrl mask bit
**      [30:30] SM_SLV6_PWR19_MASK
**        SLV6 channel pwr19 ctrl mask bit
**      [31:31] SM_SLV7_PWR19_MASK
**        SLV7 channel pwr19 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_PWR_MASK4                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0250))
/*=========================================
** SLV channel pwr ctrl mask bit:
**    SLV channel pwr ctrl mask bit
**      [0:0] SM_SLV0_PWR20_MASK
**        SLV0 channel pwr20 ctrl mask bit
**      [1:1] SM_SLV1_PWR20_MASK
**        SLV1 channel pwr20 ctrl mask bit
**      [2:2] SM_SLV2_PWR20_MASK
**        SLV2 channel pwr20 ctrl mask bit
**      [3:3] SM_SLV3_PWR20_MASK
**        SLV3 channel pwr20 ctrl mask bit
**      [4:4] SM_SLV4_PWR20_MASK
**        SLV4 channel pwr20 ctrl mask bit
**      [5:5] SM_SLV5_PWR20_MASK
**        SLV5 channel pwr20 ctrl mask bit
**      [6:6] SM_SLV6_PWR20_MASK
**        SLV6 channel pwr20 ctrl mask bit
**      [7:7] SM_SLV7_PWR20_MASK
**        SLV7 channel pwr20 ctrl mask bit
**      [8:8] SM_SLV0_PWR21_MASK
**        SLV0 channel pwr21 ctrl mask bit
**      [9:9] SM_SLV1_PWR21_MASK
**        SLV1 channel pwr21 ctrl mask bit
**      [10:10] SM_SLV2_PWR21_MASK
**        SLV2 channel pwr21 ctrl mask bit
**      [11:11] SM_SLV3_PWR21_MASK
**        SLV3 channel pwr21 ctrl mask bit
**      [12:12] SM_SLV4_PWR21_MASK
**        SLV4 channel pwr21 ctrl mask bit
**      [13:13] SM_SLV5_PWR21_MASK
**        SLV5 channel pwr21 ctrl mask bit
**      [14:14] SM_SLV6_PWR21_MASK
**        SLV6 channel pwr21 ctrl mask bit
**      [15:15] SM_SLV7_PWR21_MASK
**        SLV7 channel pwr21 ctrl mask bit
**      [16:16] SM_SLV0_PWR22_MASK
**        SLV0 channel pwr22 ctrl mask bit
**      [17:17] SM_SLV1_PWR22_MASK
**        SLV1 channel pwr22 ctrl mask bit
**      [18:18] SM_SLV2_PWR22_MASK
**        SLV2 channel pwr22 ctrl mask bit
**      [19:19] SM_SLV3_PWR22_MASK
**        SLV3 channel pwr22 ctrl mask bit
**      [20:20] SM_SLV4_PWR22_MASK
**        SLV4 channel pwr22 ctrl mask bit
**      [21:21] SM_SLV5_PWR22_MASK
**        SLV5 channel pwr22 ctrl mask bit
**      [22:22] SM_SLV6_PWR22_MASK
**        SLV6 channel pwr22 ctrl mask bit
**      [23:23] SM_SLV7_PWR22_MASK
**        SLV7 channel pwr22 ctrl mask bit
**      [24:24] SM_SLV0_PWR23_MASK
**        SLV0 channel pwr23 ctrl mask bit
**      [25:25] SM_SLV1_PWR23_MASK
**        SLV1 channel pwr23 ctrl mask bit
**      [26:26] SM_SLV2_PWR23_MASK
**        SLV2 channel pwr23 ctrl mask bit
**      [27:27] SM_SLV3_PWR23_MASK
**        SLV3 channel pwr23 ctrl mask bit
**      [28:28] SM_SLV4_PWR23_MASK
**        SLV4 channel pwr23 ctrl mask bit
**      [29:29] SM_SLV5_PWR23_MASK
**        SLV5 channel pwr23 ctrl mask bit
**      [30:30] SM_SLV6_PWR23_MASK
**        SLV6 channel pwr23 ctrl mask bit
**      [31:31] SM_SLV7_PWR23_MASK
**        SLV7 channel pwr23 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_PWR_MASK5                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0254))
/*=========================================
** SLV channel mas trigger ctrl mask bit:
**    SLV channel mas trigger ctrl mask bit
**      [0:0] SM_SLV0_MAS_TRIG0_MASK
**        SLV0 channel mas trigger channel0 ctrl mask bit
**      [1:1] SM_SLV1_MAS_TRIG0_MASK
**        SLV1 channel mas trigger channel0 ctrl mask bit
**      [2:2] SM_SLV2_MAS_TRIG0_MASK
**        SLV2 channel mas trigger channel0 ctrl mask bit
**      [3:3] SM_SLV3_MAS_TRIG0_MASK
**        SLV3 channel mas trigger channel0 ctrl mask bit
**      [4:4] SM_SLV4_MAS_TRIG0_MASK
**        SLV4 channel mas trigger channel0 ctrl mask bit
**      [5:5] SM_SLV5_MAS_TRIG0_MASK
**        SLV5 channel mas trigger channel0 ctrl mask bit
**      [6:6] SM_SLV6_MAS_TRIG0_MASK
**        SLV6 channel mas trigger channel0 ctrl mask bit
**      [7:7] SM_SLV7_MAS_TRIG0_MASK
**        SLV7 channel mas trigger channel0 ctrl mask bit
**      [8:8] SM_SLV0_MAS_TRIG1_MASK
**        SLV0 channel mas trigger channel1 ctrl mask bit
**      [9:9] SM_SLV1_MAS_TRIG1_MASK
**        SLV1 channel mas trigger channel1 ctrl mask bit
**      [10:10] SM_SLV2_MAS_TRIG1_MASK
**        SLV2 channel mas trigger channel1 ctrl mask bit
**      [11:11] SM_SLV3_MAS_TRIG1_MASK
**        SLV3 channel mas trigger channel1 ctrl mask bit
**      [12:12] SM_SLV4_MAS_TRIG1_MASK
**        SLV4 channel mas trigger channel1 ctrl mask bit
**      [13:13] SM_SLV5_MAS_TRIG1_MASK
**        SLV5 channel mas trigger channel1 ctrl mask bit
**      [14:14] SM_SLV6_MAS_TRIG1_MASK
**        SLV6 channel mas trigger channel1 ctrl mask bit
**      [15:15] SM_SLV7_MAS_TRIG1_MASK
**        SLV7 channel mas trigger channel1 ctrl mask bit
**      [16:16] SM_SLV0_MAS_TRIG2_MASK
**        SLV0 channel mas trigger channel2 ctrl mask bit
**      [17:17] SM_SLV1_MAS_TRIG2_MASK
**        SLV1 channel mas trigger channel2 ctrl mask bit
**      [18:18] SM_SLV2_MAS_TRIG2_MASK
**        SLV2 channel mas trigger channel2 ctrl mask bit
**      [19:19] SM_SLV3_MAS_TRIG2_MASK
**        SLV3 channel mas trigger channel2 ctrl mask bit
**      [20:20] SM_SLV4_MAS_TRIG2_MASK
**        SLV4 channel mas trigger channel2 ctrl mask bit
**      [21:21] SM_SLV5_MAS_TRIG2_MASK
**        SLV5 channel mas trigger channel2 ctrl mask bit
**      [22:22] SM_SLV6_MAS_TRIG2_MASK
**        SLV6 channel mas trigger channel2 ctrl mask bit
**      [23:23] SM_SLV7_MAS_TRIG2_MASK
**        SLV7 channel mas trigger channel2 ctrl mask bit
**      [24:24] SM_SLV0_MAS_TRIG3_MASK
**        SLV0 channel mas trigger channel3 ctrl mask bit
**      [25:25] SM_SLV1_MAS_TRIG3_MASK
**        SLV1 channel mas trigger channel3 ctrl mask bit
**      [26:26] SM_SLV2_MAS_TRIG3_MASK
**        SLV2 channel mas trigger channel3 ctrl mask bit
**      [27:27] SM_SLV3_MAS_TRIG3_MASK
**        SLV3 channel mas trigger channel3 ctrl mask bit
**      [28:28] SM_SLV4_MAS_TRIG3_MASK
**        SLV4 channel mas trigger channel3 ctrl mask bit
**      [29:29] SM_SLV5_MAS_TRIG3_MASK
**        SLV5 channel mas trigger channel3 ctrl mask bit
**      [30:30] SM_SLV6_MAS_TRIG3_MASK
**        SLV6 channel mas trigger channel3 ctrl mask bit
**      [31:31] SM_SLV7_MAS_TRIG3_MASK
**        SLV7 channel mas trigger channel3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_MAS_TRIG_MASK0                     ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0260))
/*=========================================
** SLV channel mas trigger ctrl mask bit:
**    SLV channel mas trigger ctrl mask bit
**      [0:0] SM_SLV0_MAS_TRIG4_MASK
**        SLV0 channel mas trigger channel4 ctrl mask bit
**      [1:1] SM_SLV1_MAS_TRIG4_MASK
**        SLV1 channel mas trigger channel4 ctrl mask bit
**      [2:2] SM_SLV2_MAS_TRIG4_MASK
**        SLV2 channel mas trigger channel4 ctrl mask bit
**      [3:3] SM_SLV3_MAS_TRIG4_MASK
**        SLV3 channel mas trigger channel4 ctrl mask bit
**      [4:4] SM_SLV4_MAS_TRIG4_MASK
**        SLV4 channel mas trigger channel4 ctrl mask bit
**      [5:5] SM_SLV5_MAS_TRIG4_MASK
**        SLV5 channel mas trigger channel4 ctrl mask bit
**      [6:6] SM_SLV6_MAS_TRIG4_MASK
**        SLV6 channel mas trigger channel4 ctrl mask bit
**      [7:7] SM_SLV7_MAS_TRIG4_MASK
**        SLV7 channel mas trigger channel4 ctrl mask bit
**      [8:8] SM_SLV0_MAS_TRIG5_MASK
**        SLV0 channel mas trigger channel1 ctrl mask bit
**      [9:9] SM_SLV1_MAS_TRIG5_MASK
**        SLV1 channel mas trigger channel5 ctrl mask bit
**      [10:10] SM_SLV2_MAS_TRIG5_MASK
**        SLV2 channel mas trigger channel5 ctrl mask bit
**      [11:11] SM_SLV3_MAS_TRIG5_MASK
**        SLV3 channel mas trigger channel5 ctrl mask bit
**      [12:12] SM_SLV4_MAS_TRIG5_MASK
**        SLV4 channel mas trigger channel5 ctrl mask bit
**      [13:13] SM_SLV5_MAS_TRIG5_MASK
**        SLV5 channel mas trigger channel5 ctrl mask bit
**      [14:14] SM_SLV6_MAS_TRIG5_MASK
**        SLV6 channel mas trigger channel5 ctrl mask bit
**      [15:15] SM_SLV7_MAS_TRIG5_MASK
**        SLV7 channel mas trigger channel5 ctrl mask bit
**      [16:16] SM_SLV0_MAS_TRIG6_MASK
**        SLV0 channel mas trigger channel6 ctrl mask bit
**      [17:17] SM_SLV1_MAS_TRIG6_MASK
**        SLV1 channel mas trigger channel6 ctrl mask bit
**      [18:18] SM_SLV2_MAS_TRIG6_MASK
**        SLV2 channel mas trigger channel6 ctrl mask bit
**      [19:19] SM_SLV3_MAS_TRIG6_MASK
**        SLV3 channel mas trigger channel6 ctrl mask bit
**      [20:20] SM_SLV4_MAS_TRIG6_MASK
**        SLV4 channel mas trigger channel6 ctrl mask bit
**      [21:21] SM_SLV5_MAS_TRIG6_MASK
**        SLV5 channel mas trigger channel6 ctrl mask bit
**      [22:22] SM_SLV6_MAS_TRIG6_MASK
**        SLV6 channel mas trigger channel6 ctrl mask bit
**      [23:23] SM_SLV7_MAS_TRIG6_MASK
**        SLV7 channel mas trigger channel6 ctrl mask bit
**      [24:24] SM_SLV0_MAS_TRIG7_MASK
**        SLV0 channel mas trigger channel7 ctrl mask bit
**      [25:25] SM_SLV1_MAS_TRIG7_MASK
**        SLV1 channel mas trigger channel7 ctrl mask bit
**      [26:26] SM_SLV2_MAS_TRIG7_MASK
**        SLV2 channel mas trigger channel7 ctrl mask bit
**      [27:27] SM_SLV3_MAS_TRIG7_MASK
**        SLV3 channel mas trigger channel7 ctrl mask bit
**      [28:28] SM_SLV4_MAS_TRIG7_MASK
**        SLV4 channel mas trigger channel7 ctrl mask bit
**      [29:29] SM_SLV5_MAS_TRIG7_MASK
**        SLV5 channel mas trigger channel7 ctrl mask bit
**      [30:30] SM_SLV6_MAS_TRIG7_MASK
**        SLV6 channel mas trigger channel7 ctrl mask bit
**      [31:31] SM_SLV7_MAS_TRIG7_MASK
**        SLV7 channel mas trigger channel7 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_MAS_TRIG_MASK1                     ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0264))
/*=========================================
** SLV channel timer trigger ctrl mask bit:
**    SLV channel timer trigger ctrl mask bit
**      [0:0] SM_SLV0_TIMER_TRIG0_MASK
**        SLV0 channel timer trigger channel0 ctrl mask bit
**      [1:1] SM_SLV1_TIMER_TRIG0_MASK
**        SLV1 channel timer trigger channel0 ctrl mask bit
**      [2:2] SM_SLV2_TIMER_TRIG0_MASK
**        SLV2 channel timer trigger channel0 ctrl mask bit
**      [3:3] SM_SLV3_TIMER_TRIG0_MASK
**        SLV3 channel timer trigger channel0 ctrl mask bit
**      [4:4] SM_SLV4_TIMER_TRIG0_MASK
**        SLV4 channel timer trigger channel0 ctrl mask bit
**      [5:5] SM_SLV5_TIMER_TRIG0_MASK
**        SLV5 channel timer trigger channel0 ctrl mask bit
**      [6:6] SM_SLV6_TIMER_TRIG0_MASK
**        SLV6 channel timer trigger channel0 ctrl mask bit
**      [7:7] SM_SLV7_TIMER_TRIG0_MASK
**        SLV7 channel timer trigger channel0 ctrl mask bit
**      [8:8] SM_SLV0_TIMER_TRIG1_MASK
**        SLV0 channel timer trigger channel1 ctrl mask bit
**      [9:9] SM_SLV1_TIMER_TRIG1_MASK
**        SLV1 channel timer trigger channel1 ctrl mask bit
**      [10:10] SM_SLV2_TIMER_TRIG1_MASK
**        SLV2 channel timer trigger channel1 ctrl mask bit
**      [11:11] SM_SLV3_TIMER_TRIG1_MASK
**        SLV3 channel timer trigger channel1 ctrl mask bit
**      [12:12] SM_SLV4_TIMER_TRIG1_MASK
**        SLV4 channel timer trigger channel1 ctrl mask bit
**      [13:13] SM_SLV5_TIMER_TRIG1_MASK
**        SLV5 channel timer trigger channel1 ctrl mask bit
**      [14:14] SM_SLV6_TIMER_TRIG1_MASK
**        SLV6 channel timer trigger channel1 ctrl mask bit
**      [15:15] SM_SLV7_TIMER_TRIG1_MASK
**        SLV7 channel timer trigger channel1 ctrl mask bit
**      [16:16] SM_SLV0_TIMER_TRIG2_MASK
**        SLV0 channel timer trigger channel2 ctrl mask bit
**      [17:17] SM_SLV1_TIMER_TRIG2_MASK
**        SLV1 channel timer trigger channel2 ctrl mask bit
**      [18:18] SM_SLV2_TIMER_TRIG2_MASK
**        SLV2 channel timer trigger channel2 ctrl mask bit
**      [19:19] SM_SLV3_TIMER_TRIG2_MASK
**        SLV3 channel timer trigger channel2 ctrl mask bit
**      [20:20] SM_SLV4_TIMER_TRIG2_MASK
**        SLV4 channel timer trigger channel2 ctrl mask bit
**      [21:21] SM_SLV5_TIMER_TRIG2_MASK
**        SLV5 channel timer trigger channel2 ctrl mask bit
**      [22:22] SM_SLV6_TIMER_TRIG2_MASK
**        SLV6 channel timer trigger channel2 ctrl mask bit
**      [23:23] SM_SLV7_TIMER_TRIG2_MASK
**        SLV7 channel timer trigger channel2 ctrl mask bit
**      [24:24] SM_SLV0_TIMER_TRIG3_MASK
**        SLV0 channel timer trigger channel3 ctrl mask bit
**      [25:25] SM_SLV1_TIMER_TRIG3_MASK
**        SLV1 channel timer trigger channel3 ctrl mask bit
**      [26:26] SM_SLV2_TIMER_TRIG3_MASK
**        SLV2 channel timer trigger channel3 ctrl mask bit
**      [27:27] SM_SLV3_TIMER_TRIG3_MASK
**        SLV3 channel timer trigger channel3 ctrl mask bit
**      [28:28] SM_SLV4_TIMER_TRIG3_MASK
**        SLV4 channel timer trigger channel3 ctrl mask bit
**      [29:29] SM_SLV5_TIMER_TRIG3_MASK
**        SLV5 channel timer trigger channel3 ctrl mask bit
**      [30:30] SM_SLV6_TIMER_TRIG3_MASK
**        SLV6 channel timer trigger channel3 ctrl mask bit
**      [31:31] SM_SLV7_TIMER_TRIG3_MASK
**        SLV7 channel timer trigger channel3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_TIMER_TRIG_MASK0                   ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0270))
/*=========================================
** SLV channel timer trigger ctrl mask bit:
**    SLV channel timer trigger ctrl mask bit
**      [0:0] SM_SLV0_TIMER_TRIG4_MASK
**        SLV0 channel timer trigger channel4 ctrl mask bit
**      [1:1] SM_SLV1_TIMER_TRIG4_MASK
**        SLV1 channel timer trigger channel4 ctrl mask bit
**      [2:2] SM_SLV2_TIMER_TRIG4_MASK
**        SLV2 channel timer trigger channel4 ctrl mask bit
**      [3:3] SM_SLV3_TIMER_TRIG4_MASK
**        SLV3 channel timer trigger channel4 ctrl mask bit
**      [4:4] SM_SLV4_TIMER_TRIG4_MASK
**        SLV4 channel timer trigger channel4 ctrl mask bit
**      [5:5] SM_SLV5_TIMER_TRIG4_MASK
**        SLV5 channel timer trigger channel4 ctrl mask bit
**      [6:6] SM_SLV6_TIMER_TRIG4_MASK
**        SLV6 channel timer trigger channel4 ctrl mask bit
**      [7:7] SM_SLV7_TIMER_TRIG4_MASK
**        SLV7 channel timer trigger channel4 ctrl mask bit
**      [8:8] SM_SLV0_TIMER_TRIG5_MASK
**        SLV0 channel timer trigger channel5 ctrl mask bit
**      [9:9] SM_SLV1_TIMER_TRIG5_MASK
**        SLV1 channel timer trigger channel5 ctrl mask bit
**      [10:10] SM_SLV2_TIMER_TRIG5_MASK
**        SLV2 channel timer trigger channel5 ctrl mask bit
**      [11:11] SM_SLV3_TIMER_TRIG5_MASK
**        SLV3 channel timer trigger channel5 ctrl mask bit
**      [12:12] SM_SLV4_TIMER_TRIG5_MASK
**        SLV4 channel timer trigger channel5 ctrl mask bit
**      [13:13] SM_SLV5_TIMER_TRIG5_MASK
**        SLV5 channel timer trigger channel5 ctrl mask bit
**      [14:14] SM_SLV6_TIMER_TRIG5_MASK
**        SLV6 channel timer trigger channel5 ctrl mask bit
**      [15:15] SM_SLV7_TIMER_TRIG5_MASK
**        SLV7 channel timer trigger channel5 ctrl mask bit
**      [16:16] SM_SLV0_TIMER_TRIG6_MASK
**        SLV0 channel timer trigger channel6 ctrl mask bit
**      [17:17] SM_SLV1_TIMER_TRIG6_MASK
**        SLV1 channel timer trigger channel6 ctrl mask bit
**      [18:18] SM_SLV2_TIMER_TRIG6_MASK
**        SLV2 channel timer trigger channel6 ctrl mask bit
**      [19:19] SM_SLV3_TIMER_TRIG6_MASK
**        SLV3 channel timer trigger channel6 ctrl mask bit
**      [20:20] SM_SLV4_TIMER_TRIG6_MASK
**        SLV4 channel timer trigger channel6 ctrl mask bit
**      [21:21] SM_SLV5_TIMER_TRIG6_MASK
**        SLV5 channel timer trigger channel6 ctrl mask bit
**      [22:22] SM_SLV6_TIMER_TRIG6_MASK
**        SLV6 channel timer trigger channel6 ctrl mask bit
**      [23:23] SM_SLV7_TIMER_TRIG6_MASK
**        SLV7 channel timer trigger channel6 ctrl mask bit
**      [24:24] SM_SLV0_TIMER_TRIG7_MASK
**        SLV0 channel timer trigger channel7 ctrl mask bit
**      [25:25] SM_SLV1_TIMER_TRIG7_MASK
**        SLV1 channel timer trigger channel7 ctrl mask bit
**      [26:26] SM_SLV2_TIMER_TRIG7_MASK
**        SLV2 channel timer trigger channel7 ctrl mask bit
**      [27:27] SM_SLV3_TIMER_TRIG7_MASK
**        SLV3 channel timer trigger channel7 ctrl mask bit
**      [28:28] SM_SLV4_TIMER_TRIG7_MASK
**        SLV4 channel timer trigger channel7 ctrl mask bit
**      [29:29] SM_SLV5_TIMER_TRIG7_MASK
**        SLV5 channel timer trigger channel7 ctrl mask bit
**      [30:30] SM_SLV6_TIMER_TRIG7_MASK
**        SLV6 channel timer trigger channel7 ctrl mask bit
**      [31:31] SM_SLV7_TIMER_TRIG7_MASK
**        SLV7 channel timer trigger channel7 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_TIMER_TRIG_MASK1                   ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0274))
/*=========================================
** SLV channel client active ctrl mask bit:
**    SLV channel client active ctrl mask bit
**      [0:0] SM_SLV0_CLIENT_ACT0_MASK
**        SLV0 channel client active channel0 ctrl mask bit
**      [1:1] SM_SLV1_CLIENT_ACT0_MASK
**        SLV1 channel client active channel0 ctrl mask bit
**      [2:2] SM_SLV2_CLIENT_ACT0_MASK
**        SLV2 channel client active channel0 ctrl mask bit
**      [3:3] SM_SLV3_CLIENT_ACT0_MASK
**        SLV3 channel client active channel0 ctrl mask bit
**      [4:4] SM_SLV4_CLIENT_ACT0_MASK
**        SLV4 channel client active channel0 ctrl mask bit
**      [5:5] SM_SLV5_CLIENT_ACT0_MASK
**        SLV5 channel client active channel0 ctrl mask bit
**      [6:6] SM_SLV6_CLIENT_ACT0_MASK
**        SLV6 channel client active channel0 ctrl mask bit
**      [7:7] SM_SLV7_CLIENT_ACT0_MASK
**        SLV7 channel client active channel0 ctrl mask bit
**      [8:8] SM_SLV0_CLIENT_ACT1_MASK
**        SLV0 channel client active channel1 ctrl mask bit
**      [9:9] SM_SLV1_CLIENT_ACT1_MASK
**        SLV1 channel client active channel1 ctrl mask bit
**      [10:10] SM_SLV2_CLIENT_ACT1_MASK
**        SLV2 channel client active channel1 ctrl mask bit
**      [11:11] SM_SLV3_CLIENT_ACT1_MASK
**        SLV3 channel client active channel1 ctrl mask bit
**      [12:12] SM_SLV4_CLIENT_ACT1_MASK
**        SLV4 channel client active channel1 ctrl mask bit
**      [13:13] SM_SLV5_CLIENT_ACT1_MASK
**        SLV5 channel client active channel1 ctrl mask bit
**      [14:14] SM_SLV6_CLIENT_ACT1_MASK
**        SLV6 channel client active channel1 ctrl mask bit
**      [15:15] SM_SLV7_CLIENT_ACT1_MASK
**        SLV7 channel client active channel1 ctrl mask bit
**      [16:16] SM_SLV0_CLIENT_ACT2_MASK
**        SLV0 channel client active channel2 ctrl mask bit
**      [17:17] SM_SLV1_CLIENT_ACT2_MASK
**        SLV1 channel client active channel2 ctrl mask bit
**      [18:18] SM_SLV2_CLIENT_ACT2_MASK
**        SLV2 channel client active channel2 ctrl mask bit
**      [19:19] SM_SLV3_CLIENT_ACT2_MASK
**        SLV3 channel client active channel2 ctrl mask bit
**      [20:20] SM_SLV4_CLIENT_ACT2_MASK
**        SLV4 channel client active channel2 ctrl mask bit
**      [21:21] SM_SLV5_CLIENT_ACT2_MASK
**        SLV5 channel client active channel2 ctrl mask bit
**      [22:22] SM_SLV6_CLIENT_ACT2_MASK
**        SLV6 channel client active channel2 ctrl mask bit
**      [23:23] SM_SLV7_CLIENT_ACT2_MASK
**        SLV7 channel client active channel2 ctrl mask bit
**      [24:24] SM_SLV0_CLIENT_ACT3_MASK
**        SLV0 channel client active channel3 ctrl mask bit
**      [25:25] SM_SLV1_CLIENT_ACT3_MASK
**        SLV1 channel client active channel3 ctrl mask bit
**      [26:26] SM_SLV2_CLIENT_ACT3_MASK
**        SLV2 channel client active channel3 ctrl mask bit
**      [27:27] SM_SLV3_CLIENT_ACT3_MASK
**        SLV3 channel client active channel3 ctrl mask bit
**      [28:28] SM_SLV4_CLIENT_ACT3_MASK
**        SLV4 channel client active channel3 ctrl mask bit
**      [29:29] SM_SLV5_CLIENT_ACT3_MASK
**        SLV5 channel client active channel3 ctrl mask bit
**      [30:30] SM_SLV6_CLIENT_ACT3_MASK
**        SLV6 channel client active channel3 ctrl mask bit
**      [31:31] SM_SLV7_CLIENT_ACT3_MASK
**        SLV7 channel client active channel3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_CLIENT_ACT_MASK                    ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0280))
/*=========================================
** SLV channel FSM status:
**    SLV channel FSM status
**    0000001: Normal stage
**    0000010: MTOFF stage
**    0000100: PAUSE stage
**    0001000: PRE_PAUSE stage
**    0010000: SYSCLK_SETTLE stage
**    0100000: CCP_SETTLE stage
**    1000000: MTON stage
**      [6:0] SM_SLV0_SSTA
**        SLV0 channel FSM status
**      [14:8] SM_SLV1_SSTA
**        SLV1 channel FSM status
**      [22:16] SM_SLV2_SSTA
**        SLV2 channel FSM status
**      [30:24] SM_SLV3_SSTA
**        SLV3 channel FSM status
**=========================================*/
#define MD_TOPSM_SM_SLV_SSTA0                              ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x02A0))
/*=========================================
** SLV channel FSM status:
**    SLV channel FSM status
**    0000001: Normal stage
**    0000010: MTOFF stage
**    0000100: PAUSE stage
**    0001000: PRE_PAUSE stage
**    0010000: SYSCLK_SETTLE stage
**    0100000: CCP_SETTLE stage
**    1000000: MTON stage
**      [6:0] SM_SLV4_SSTA
**        SLV4 channel FSM status
**      [14:8] SM_SLV5_SSTA
**        SLV5 channel FSM status
**      [22:16] SM_SLV6_SSTA
**        SLV6 channel FSM status
**      [30:24] SM_SLV7_SSTA
**        SLV7 channel FSM status
**=========================================*/
#define MD_TOPSM_SM_SLV_SSTA1                              ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x02A4))
/*=========================================
** DBG channel request mask bit:
**    DBG channel request mask bit
**      [0:0] SM_DBG0_REQ_MASK
**        DBG0 channel request mask bit
**      [1:1] SM_DBG1_REQ_MASK
**        DBG1 channel request mask bit
**      [2:2] SM_DBG2_REQ_MASK
**        DBG2 channel request mask bit
**      [3:3] SM_DBG3_REQ_MASK
**        DBG3 channel request mask bit
**      [4:4] SM_DBG4_REQ_MASK
**        DBG4 channel request mask bit
**      [5:5] SM_DBG5_REQ_MASK
**        DBG5 channel request mask bit
**      [6:6] SM_DBG6_REQ_MASK
**        DBG6 channel request mask bit
**      [7:7] SM_DBG7_REQ_MASK
**        DBG7 channel request mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_REQ_MASK                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0300))
/*=========================================
** DBG channel sysclk ctrl mask bit:
**    DBG channel sysclk ctrl mask bit
**      [0:0] SM_DBG0_SYSCLK_MASK
**        DBG0 channel sysclk ctrl mask bit
**      [1:1] SM_DBG1_SYSCLK_MASK
**        DBG1 channel sysclk ctrl mask bit
**      [2:2] SM_DBG2_SYSCLK_MASK
**        DBG2 channel sysclk ctrl mask bit
**      [3:3] SM_DBG3_SYSCLK_MASK
**        DBG3 channel sysclk ctrl mask bit
**      [4:4] SM_DBG4_SYSCLK_MASK
**        DBG4 channel sysclk ctrl mask bit
**      [5:5] SM_DBG5_SYSCLK_MASK
**        DBG5 channel sysclk ctrl mask bit
**      [6:6] SM_DBG6_SYSCLK_MASK
**        DBG6 channel sysclk ctrl mask bit
**      [7:7] SM_DBG7_SYSCLK_MASK
**        DBG7 channel sysclk ctrl mask bit
**      [8:8] SM_DBG0_SYSCLK1_MASK
**        DBG0 channel sysclk1 ctrl mask bit
**      [9:9] SM_DBG1_SYSCLK1_MASK
**        DBG1 channel sysclk1 ctrl mask bit
**      [10:10] SM_DBG2_SYSCLK1_MASK
**        DBG2 channel sysclk1 ctrl mask bit
**      [11:11] SM_DBG3_SYSCLK1_MASK
**        DBG3 channel sysclk1 ctrl mask bit
**      [12:12] SM_DBG4_SYSCLK1_MASK
**        DBG4 channel sysclk1 ctrl mask bit
**      [13:13] SM_DBG5_SYSCLK1_MASK
**        DBG5 channel sysclk1 ctrl mask bit
**      [14:14] SM_DBG6_SYSCLK1_MASK
**        DBG6 channel sysclk1 ctrl mask bit
**      [15:15] SM_DBG7_SYSCLK1_MASK
**        DBG7 channel sysclk1 ctrl mask bit
**      [16:16] SM_DBG0_SYSCLK2_MASK
**        DBG0 channel sysclk2 ctrl mask bit
**      [17:17] SM_DBG1_SYSCLK2_MASK
**        DBG1 channel sysclk2 ctrl mask bit
**      [18:18] SM_DBG2_SYSCLK2_MASK
**        DBG2 channel sysclk2 ctrl mask bit
**      [19:19] SM_DBG3_SYSCLK2_MASK
**        DBG3 channel sysclk2 ctrl mask bit
**      [20:20] SM_DBG4_SYSCLK2_MASK
**        DBG4 channel sysclk2 ctrl mask bit
**      [21:21] SM_DBG5_SYSCLK2_MASK
**        DBG5 channel sysclk2 ctrl mask bit
**      [22:22] SM_DBG6_SYSCLK2_MASK
**        DBG6 channel sysclk2 ctrl mask bit
**      [23:23] SM_DBG7_SYSCLK2_MASK
**        DBG7 channel sysclk2 ctrl mask bit
**      [24:24] SM_DBG0_SYSCLK3_MASK
**        DBG0 channel sysclk3 ctrl mask bit
**      [25:25] SM_DBG1_SYSCLK3_MASK
**        DBG1 channel sysclk3 ctrl mask bit
**      [26:26] SM_DBG2_SYSCLK3_MASK
**        DBG2 channel sysclk3 ctrl mask bit
**      [27:27] SM_DBG3_SYSCLK3_MASK
**        DBG3 channel sysclk3 ctrl mask bit
**      [28:28] SM_DBG4_SYSCLK3_MASK
**        DBG4 channel sysclk3 ctrl mask bit
**      [29:29] SM_DBG5_SYSCLK3_MASK
**        DBG5 channel sysclk3 ctrl mask bit
**      [30:30] SM_DBG6_SYSCLK3_MASK
**        DBG6 channel sysclk3 ctrl mask bit
**      [31:31] SM_DBG7_SYSCLK3_MASK
**        DBG7 channel sysclk3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_SYSCLK_MASK                        ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0308))
/*=========================================
** DBG channel pll ctrl mask bit:
**    DBG channel pll ctrl mask bit
**      [0:0] SM_DBG0_PLL0_MASK
**        DBG0 channel pll0 ctrl mask bit
**      [1:1] SM_DBG1_PLL0_MASK
**        DBG1 channel pll0 ctrl mask bit
**      [2:2] SM_DBG2_PLL0_MASK
**        DBG2 channel pll0 ctrl mask bit
**      [3:3] SM_DBG3_PLL0_MASK
**        DBG3 channel pll0 ctrl mask bit
**      [4:4] SM_DBG4_PLL0_MASK
**        DBG4 channel pll0 ctrl mask bit
**      [5:5] SM_DBG5_PLL0_MASK
**        DBG5 channel pll0 ctrl mask bit
**      [6:6] SM_DBG6_PLL0_MASK
**        DBG6 channel pll0 ctrl mask bit
**      [7:7] SM_DBG7_PLL0_MASK
**        DBG7 channel pll0 ctrl mask bit
**      [8:8] SM_DBG0_PLL1_MASK
**        DBG0 channel pll1 ctrl mask bit
**      [9:9] SM_DBG1_PLL1_MASK
**        DBG1 channel pll1 ctrl mask bit
**      [10:10] SM_DBG2_PLL1_MASK
**        DBG2 channel pll1 ctrl mask bit
**      [11:11] SM_DBG3_PLL1_MASK
**        DBG3 channel pll1 ctrl mask bit
**      [12:12] SM_DBG4_PLL1_MASK
**        DBG4 channel pll1 ctrl mask bit
**      [13:13] SM_DBG5_PLL1_MASK
**        DBG5 channel pll1 ctrl mask bit
**      [14:14] SM_DBG6_PLL1_MASK
**        DBG6 channel pll1 ctrl mask bit
**      [15:15] SM_DBG7_PLL1_MASK
**        DBG7 channel pll1 ctrl mask bit
**      [16:16] SM_DBG0_PLL2_MASK
**        DBG0 channel pll2 ctrl mask bit
**      [17:17] SM_DBG1_PLL2_MASK
**        DBG1 channel pll2 ctrl mask bit
**      [18:18] SM_DBG2_PLL2_MASK
**        DBG2 channel pll2 ctrl mask bit
**      [19:19] SM_DBG3_PLL2_MASK
**        DBG3 channel pll2 ctrl mask bit
**      [20:20] SM_DBG4_PLL2_MASK
**        DBG4 channel pll2 ctrl mask bit
**      [21:21] SM_DBG5_PLL2_MASK
**        DBG5 channel pll2 ctrl mask bit
**      [22:22] SM_DBG6_PLL2_MASK
**        DBG6 channel pll2 ctrl mask bit
**      [23:23] SM_DBG7_PLL2_MASK
**        DBG7 channel pll2 ctrl mask bit
**      [24:24] SM_DBG0_PLL3_MASK
**        DBG0 channel pll3 ctrl mask bit
**      [25:25] SM_DBG1_PLL3_MASK
**        DBG1 channel pll3 ctrl mask bit
**      [26:26] SM_DBG2_PLL3_MASK
**        DBG2 channel pll3 ctrl mask bit
**      [27:27] SM_DBG3_PLL3_MASK
**        DBG3 channel pll3 ctrl mask bit
**      [28:28] SM_DBG4_PLL3_MASK
**        DBG4 channel pll3 ctrl mask bit
**      [29:29] SM_DBG5_PLL3_MASK
**        DBG5 channel pll3 ctrl mask bit
**      [30:30] SM_DBG6_PLL3_MASK
**        DBG6 channel pll3 ctrl mask bit
**      [31:31] SM_DBG7_PLL3_MASK
**        DBG7 channel pll3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_PLL_MASK0                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0320))
/*=========================================
** DBG channel pll ctrl mask bit:
**    DBG channel pll ctrl mask bit
**      [0:0] SM_DBG0_PLL4_MASK
**        DBG0 channel pll4 ctrl mask bit
**      [1:1] SM_DBG1_PLL4_MASK
**        DBG1 channel pll4 ctrl mask bit
**      [2:2] SM_DBG2_PLL4_MASK
**        DBG2 channel pll4 ctrl mask bit
**      [3:3] SM_DBG3_PLL4_MASK
**        DBG3 channel pll4 ctrl mask bit
**      [4:4] SM_DBG4_PLL4_MASK
**        DBG4 channel pll4 ctrl mask bit
**      [5:5] SM_DBG5_PLL4_MASK
**        DBG5 channel pll4 ctrl mask bit
**      [6:6] SM_DBG6_PLL4_MASK
**        DBG6 channel pll4 ctrl mask bit
**      [7:7] SM_DBG7_PLL4_MASK
**        DBG7 channel pll4 ctrl mask bit
**      [8:8] SM_DBG0_PLL5_MASK
**        DBG0 channel pll5 ctrl mask bit
**      [9:9] SM_DBG1_PLL5_MASK
**        DBG1 channel pll5 ctrl mask bit
**      [10:10] SM_DBG2_PLL5_MASK
**        DBG2 channel pll5 ctrl mask bit
**      [11:11] SM_DBG3_PLL5_MASK
**        DBG3 channel pll5 ctrl mask bit
**      [12:12] SM_DBG4_PLL5_MASK
**        DBG4 channel pll5 ctrl mask bit
**      [13:13] SM_DBG5_PLL5_MASK
**        DBG5 channel pll5 ctrl mask bit
**      [14:14] SM_DBG6_PLL5_MASK
**        DBG6 channel pll5 ctrl mask bit
**      [15:15] SM_DBG7_PLL5_MASK
**        DBG7 channel pll5 ctrl mask bit
**      [16:16] SM_DBG0_PLL6_MASK
**        DBG0 channel pll6 ctrl mask bit
**      [17:17] SM_DBG1_PLL6_MASK
**        DBG1 channel pll6 ctrl mask bit
**      [18:18] SM_DBG2_PLL6_MASK
**        DBG2 channel pll6 ctrl mask bit
**      [19:19] SM_DBG3_PLL6_MASK
**        DBG3 channel pll6 ctrl mask bit
**      [20:20] SM_DBG4_PLL6_MASK
**        DBG4 channel pll6 ctrl mask bit
**      [21:21] SM_DBG5_PLL6_MASK
**        DBG5 channel pll6 ctrl mask bit
**      [22:22] SM_DBG6_PLL6_MASK
**        DBG6 channel pll6 ctrl mask bit
**      [23:23] SM_DBG7_PLL6_MASK
**        DBG7 channel pll6 ctrl mask bit
**      [24:24] SM_DBG0_PLL7_MASK
**        DBG0 channel pll7 ctrl mask bit
**      [25:25] SM_DBG1_PLL7_MASK
**        DBG1 channel pll7 ctrl mask bit
**      [26:26] SM_DBG2_PLL7_MASK
**        DBG2 channel pll7 ctrl mask bit
**      [27:27] SM_DBG3_PLL7_MASK
**        DBG3 channel pll7 ctrl mask bit
**      [28:28] SM_DBG4_PLL7_MASK
**        DBG4 channel pll7 ctrl mask bit
**      [29:29] SM_DBG5_PLL7_MASK
**        DBG5 channel pll7 ctrl mask bit
**      [30:30] SM_DBG6_PLL7_MASK
**        DBG6 channel pll7 ctrl mask bit
**      [31:31] SM_DBG7_PLL7_MASK
**        DBG7 channel pll7 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_PLL_MASK1                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0324))
/*=========================================
** DBG channel pll ctrl mask bit:
**    DBG channel pll ctrl mask bit
**      [0:0] SM_DBG0_PLL8_MASK
**        DBG0 channel pll8 ctrl mask bit
**      [1:1] SM_DBG1_PLL8_MASK
**        DBG1 channel pll8 ctrl mask bit
**      [2:2] SM_DBG2_PLL8_MASK
**        DBG2 channel pll8 ctrl mask bit
**      [3:3] SM_DBG3_PLL8_MASK
**        DBG3 channel pll8 ctrl mask bit
**      [4:4] SM_DBG4_PLL8_MASK
**        DBG4 channel pll8 ctrl mask bit
**      [5:5] SM_DBG5_PLL8_MASK
**        DBG5 channel pll8 ctrl mask bit
**      [6:6] SM_DBG6_PLL8_MASK
**        DBG6 channel pll8 ctrl mask bit
**      [7:7] SM_DBG7_PLL8_MASK
**        DBG7 channel pll8 ctrl mask bit
**      [8:8] SM_DBG0_PLL9_MASK
**        DBG0 channel pll9 ctrl mask bit
**      [9:9] SM_DBG1_PLL9_MASK
**        DBG1 channel pll9 ctrl mask bit
**      [10:10] SM_DBG2_PLL9_MASK
**        DBG2 channel pll9 ctrl mask bit
**      [11:11] SM_DBG3_PLL9_MASK
**        DBG3 channel pll9 ctrl mask bit
**      [12:12] SM_DBG4_PLL9_MASK
**        DBG4 channel pll9 ctrl mask bit
**      [13:13] SM_DBG5_PLL9_MASK
**        DBG5 channel pll9 ctrl mask bit
**      [14:14] SM_DBG6_PLL9_MASK
**        DBG6 channel pll9 ctrl mask bit
**      [15:15] SM_DBG7_PLL9_MASK
**        DBG7 channel pll9 ctrl mask bit
**      [16:16] SM_DBG0_PLL10_MASK
**        DBG0 channel pll10 ctrl mask bit
**      [17:17] SM_DBG1_PLL10_MASK
**        DBG1 channel pll10 ctrl mask bit
**      [18:18] SM_DBG2_PLL10_MASK
**        DBG2 channel pll10 ctrl mask bit
**      [19:19] SM_DBG3_PLL10_MASK
**        DBG3 channel pll10 ctrl mask bit
**      [20:20] SM_DBG4_PLL10_MASK
**        DBG4 channel pll10 ctrl mask bit
**      [21:21] SM_DBG5_PLL10_MASK
**        DBG5 channel pll10 ctrl mask bit
**      [22:22] SM_DBG6_PLL10_MASK
**        DBG6 channel pll10 ctrl mask bit
**      [23:23] SM_DBG7_PLL10_MASK
**        DBG7 channel pll10 ctrl mask bit
**      [24:24] SM_DBG0_PLL11_MASK
**        DBG0 channel pll11 ctrl mask bit
**      [25:25] SM_DBG1_PLL11_MASK
**        DBG1 channel pll11 ctrl mask bit
**      [26:26] SM_DBG2_PLL11_MASK
**        DBG2 channel pll11 ctrl mask bit
**      [27:27] SM_DBG3_PLL11_MASK
**        DBG3 channel pll11 ctrl mask bit
**      [28:28] SM_DBG4_PLL11_MASK
**        DBG4 channel pll11 ctrl mask bit
**      [29:29] SM_DBG5_PLL11_MASK
**        DBG5 channel pll11 ctrl mask bit
**      [30:30] SM_DBG6_PLL11_MASK
**        DBG6 channel pll11 ctrl mask bit
**      [31:31] SM_DBG7_PLL11_MASK
**        DBG7 channel pll11 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_PLL_MASK2                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0328))
/*=========================================
** DBG channel pll ctrl mask bit:
**    DBG channel pll ctrl mask bit
**      [0:0] SM_DBG0_PLL12_MASK
**        DBG0 channel pll12 ctrl mask bit
**      [1:1] SM_DBG1_PLL12_MASK
**        DBG1 channel pll12 ctrl mask bit
**      [2:2] SM_DBG2_PLL12_MASK
**        DBG2 channel pll12 ctrl mask bit
**      [3:3] SM_DBG3_PLL12_MASK
**        DBG3 channel pll12 ctrl mask bit
**      [4:4] SM_DBG4_PLL12_MASK
**        DBG4 channel pll12 ctrl mask bit
**      [5:5] SM_DBG5_PLL12_MASK
**        DBG5 channel pll12 ctrl mask bit
**      [6:6] SM_DBG6_PLL12_MASK
**        DBG6 channel pll12 ctrl mask bit
**      [7:7] SM_DBG7_PLL12_MASK
**        DBG7 channel pll12 ctrl mask bit
**      [8:8] SM_DBG0_PLL13_MASK
**        DBG0 channel pll13 ctrl mask bit
**      [9:9] SM_DBG1_PLL13_MASK
**        DBG1 channel pll13 ctrl mask bit
**      [10:10] SM_DBG2_PLL13_MASK
**        DBG2 channel pll13 ctrl mask bit
**      [11:11] SM_DBG3_PLL13_MASK
**        DBG3 channel pll13 ctrl mask bit
**      [12:12] SM_DBG4_PLL13_MASK
**        DBG4 channel pll13 ctrl mask bit
**      [13:13] SM_DBG5_PLL13_MASK
**        DBG5 channel pll13 ctrl mask bit
**      [14:14] SM_DBG6_PLL13_MASK
**        DBG6 channel pll13 ctrl mask bit
**      [15:15] SM_DBG7_PLL13_MASK
**        DBG7 channel pll13 ctrl mask bit
**      [16:16] SM_DBG0_PLL14_MASK
**        DBG0 channel pll14 ctrl mask bit
**      [17:17] SM_DBG1_PLL14_MASK
**        DBG1 channel pll14 ctrl mask bit
**      [18:18] SM_DBG2_PLL14_MASK
**        DBG2 channel pll14 ctrl mask bit
**      [19:19] SM_DBG3_PLL14_MASK
**        DBG3 channel pll14 ctrl mask bit
**      [20:20] SM_DBG4_PLL14_MASK
**        DBG4 channel pll14 ctrl mask bit
**      [21:21] SM_DBG5_PLL14_MASK
**        DBG5 channel pll14 ctrl mask bit
**      [22:22] SM_DBG6_PLL14_MASK
**        DBG6 channel pll14 ctrl mask bit
**      [23:23] SM_DBG7_PLL14_MASK
**        DBG7 channel pll14 ctrl mask bit
**      [24:24] SM_DBG0_PLL15_MASK
**        DBG0 channel pll15 ctrl mask bit
**      [25:25] SM_DBG1_PLL15_MASK
**        DBG1 channel pll15 ctrl mask bit
**      [26:26] SM_DBG2_PLL15_MASK
**        DBG2 channel pll15 ctrl mask bit
**      [27:27] SM_DBG3_PLL15_MASK
**        DBG3 channel pll15 ctrl mask bit
**      [28:28] SM_DBG4_PLL15_MASK
**        DBG4 channel pll15 ctrl mask bit
**      [29:29] SM_DBG5_PLL15_MASK
**        DBG5 channel pll15 ctrl mask bit
**      [30:30] SM_DBG6_PLL15_MASK
**        DBG6 channel pll15 ctrl mask bit
**      [31:31] SM_DBG7_PLL15_MASK
**        DBG7 channel pll15 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_PLL_MASK3                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x032C))
/*=========================================
** DBG channel pwr ctrl mask bit:
**    DBG channel pwr ctrl mask bit
**      [0:0] SM_DBG0_PWR0_MASK
**        DBG0 channel pwr0 ctrl mask bit
**      [1:1] SM_DBG1_PWR0_MASK
**        DBG1 channel pwr0 ctrl mask bit
**      [2:2] SM_DBG2_PWR0_MASK
**        DBG2 channel pwr0 ctrl mask bit
**      [3:3] SM_DBG3_PWR0_MASK
**        DBG3 channel pwr0 ctrl mask bit
**      [4:4] SM_DBG4_PWR0_MASK
**        DBG4 channel pwr0 ctrl mask bit
**      [5:5] SM_DBG5_PWR0_MASK
**        DBG5 channel pwr0 ctrl mask bit
**      [6:6] SM_DBG6_PWR0_MASK
**        DBG6 channel pwr0 ctrl mask bit
**      [7:7] SM_DBG7_PWR0_MASK
**        DBG7 channel pwr0 ctrl mask bit
**      [8:8] SM_DBG0_PWR1_MASK
**        DBG0 channel pwr1 ctrl mask bit
**      [9:9] SM_DBG1_PWR1_MASK
**        DBG1 channel pwr1 ctrl mask bit
**      [10:10] SM_DBG2_PWR1_MASK
**        DBG2 channel pwr1 ctrl mask bit
**      [11:11] SM_DBG3_PWR1_MASK
**        DBG3 channel pwr1 ctrl mask bit
**      [12:12] SM_DBG4_PWR1_MASK
**        DBG4 channel pwr1 ctrl mask bit
**      [13:13] SM_DBG5_PWR1_MASK
**        DBG5 channel pwr1 ctrl mask bit
**      [14:14] SM_DBG6_PWR1_MASK
**        DBG6 channel pwr1 ctrl mask bit
**      [15:15] SM_DBG7_PWR1_MASK
**        DBG7 channel pwr1 ctrl mask bit
**      [16:16] SM_DBG0_PWR2_MASK
**        DBG0 channel pwr2 ctrl mask bit
**      [17:17] SM_DBG1_PWR2_MASK
**        DBG1 channel pwr2 ctrl mask bit
**      [18:18] SM_DBG2_PWR2_MASK
**        DBG2 channel pwr2 ctrl mask bit
**      [19:19] SM_DBG3_PWR2_MASK
**        DBG3 channel pwr2 ctrl mask bit
**      [20:20] SM_DBG4_PWR2_MASK
**        DBG4 channel pwr2 ctrl mask bit
**      [21:21] SM_DBG5_PWR2_MASK
**        DBG5 channel pwr2 ctrl mask bit
**      [22:22] SM_DBG6_PWR2_MASK
**        DBG6 channel pwr2 ctrl mask bit
**      [23:23] SM_DBG7_PWR2_MASK
**        DBG7 channel pwr2 ctrl mask bit
**      [24:24] SM_DBG0_PWR3_MASK
**        DBG0 channel pwr3 ctrl mask bit
**      [25:25] SM_DBG1_PWR3_MASK
**        DBG1 channel pwr3 ctrl mask bit
**      [26:26] SM_DBG2_PWR3_MASK
**        DBG2 channel pwr3 ctrl mask bit
**      [27:27] SM_DBG3_PWR3_MASK
**        DBG3 channel pwr3 ctrl mask bit
**      [28:28] SM_DBG4_PWR3_MASK
**        DBG4 channel pwr3 ctrl mask bit
**      [29:29] SM_DBG5_PWR3_MASK
**        DBG5 channel pwr3 ctrl mask bit
**      [30:30] SM_DBG6_PWR3_MASK
**        DBG6 channel pwr3 ctrl mask bit
**      [31:31] SM_DBG7_PWR3_MASK
**        DBG7 channel pwr3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_PWR_MASK0                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0340))
/*=========================================
** DBG channel pwr ctrl mask bit:
**    DBG channel pwr ctrl mask bit
**      [0:0] SM_DBG0_PWR4_MASK
**        DBG0 channel pwr4 ctrl mask bit
**      [1:1] SM_DBG1_PWR4_MASK
**        DBG1 channel pwr4 ctrl mask bit
**      [2:2] SM_DBG2_PWR4_MASK
**        DBG2 channel pwr4 ctrl mask bit
**      [3:3] SM_DBG3_PWR4_MASK
**        DBG3 channel pwr4 ctrl mask bit
**      [4:4] SM_DBG4_PWR4_MASK
**        DBG4 channel pwr4 ctrl mask bit
**      [5:5] SM_DBG5_PWR4_MASK
**        DBG5 channel pwr4 ctrl mask bit
**      [6:6] SM_DBG6_PWR4_MASK
**        DBG6 channel pwr4 ctrl mask bit
**      [7:7] SM_DBG7_PWR4_MASK
**        DBG7 channel pwr4 ctrl mask bit
**      [8:8] SM_DBG0_PWR5_MASK
**        DBG0 channel pwr5 ctrl mask bit
**      [9:9] SM_DBG1_PWR5_MASK
**        DBG1 channel pwr5 ctrl mask bit
**      [10:10] SM_DBG2_PWR5_MASK
**        DBG2 channel pwr5 ctrl mask bit
**      [11:11] SM_DBG3_PWR5_MASK
**        DBG3 channel pwr5 ctrl mask bit
**      [12:12] SM_DBG4_PWR5_MASK
**        DBG4 channel pwr5 ctrl mask bit
**      [13:13] SM_DBG5_PWR5_MASK
**        DBG5 channel pwr5 ctrl mask bit
**      [14:14] SM_DBG6_PWR5_MASK
**        DBG6 channel pwr5 ctrl mask bit
**      [15:15] SM_DBG7_PWR5_MASK
**        DBG7 channel pwr5 ctrl mask bit
**      [16:16] SM_DBG0_PWR6_MASK
**        DBG0 channel pwr6 ctrl mask bit
**      [17:17] SM_DBG1_PWR6_MASK
**        DBG1 channel pwr6 ctrl mask bit
**      [18:18] SM_DBG2_PWR6_MASK
**        DBG2 channel pwr6 ctrl mask bit
**      [19:19] SM_DBG3_PWR6_MASK
**        DBG3 channel pwr6 ctrl mask bit
**      [20:20] SM_DBG4_PWR6_MASK
**        DBG4 channel pwr6 ctrl mask bit
**      [21:21] SM_DBG5_PWR6_MASK
**        DBG5 channel pwr6 ctrl mask bit
**      [22:22] SM_DBG6_PWR6_MASK
**        DBG6 channel pwr6 ctrl mask bit
**      [23:23] SM_DBG7_PWR6_MASK
**        DBG7 channel pwr6 ctrl mask bit
**      [24:24] SM_DBG0_PWR7_MASK
**        DBG0 channel pwr7 ctrl mask bit
**      [25:25] SM_DBG1_PWR7_MASK
**        DBG1 channel pwr7 ctrl mask bit
**      [26:26] SM_DBG2_PWR7_MASK
**        DBG2 channel pwr7 ctrl mask bit
**      [27:27] SM_DBG3_PWR7_MASK
**        DBG3 channel pwr7 ctrl mask bit
**      [28:28] SM_DBG4_PWR7_MASK
**        DBG4 channel pwr7 ctrl mask bit
**      [29:29] SM_DBG5_PWR7_MASK
**        DBG5 channel pwr7 ctrl mask bit
**      [30:30] SM_DBG6_PWR7_MASK
**        DBG6 channel pwr7 ctrl mask bit
**      [31:31] SM_DBG7_PWR7_MASK
**        DBG7 channel pwr7 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_PWR_MASK1                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0344))
/*=========================================
** DBG channel pwr ctrl mask bit:
**    DBG channel pwr ctrl mask bit
**      [0:0] SM_DBG0_PWR8_MASK
**        DBG0 channel pwr8 ctrl mask bit
**      [1:1] SM_DBG1_PWR8_MASK
**        DBG1 channel pwr8 ctrl mask bit
**      [2:2] SM_DBG2_PWR8_MASK
**        DBG2 channel pwr8 ctrl mask bit
**      [3:3] SM_DBG3_PWR8_MASK
**        DBG3 channel pwr8 ctrl mask bit
**      [4:4] SM_DBG4_PWR8_MASK
**        DBG4 channel pwr8 ctrl mask bit
**      [5:5] SM_DBG5_PWR8_MASK
**        DBG5 channel pwr8 ctrl mask bit
**      [6:6] SM_DBG6_PWR8_MASK
**        DBG6 channel pwr8 ctrl mask bit
**      [7:7] SM_DBG7_PWR8_MASK
**        DBG7 channel pwr8 ctrl mask bit
**      [8:8] SM_DBG0_PWR9_MASK
**        DBG0 channel pwr9 ctrl mask bit
**      [9:9] SM_DBG1_PWR9_MASK
**        DBG1 channel pwr9 ctrl mask bit
**      [10:10] SM_DBG2_PWR9_MASK
**        DBG2 channel pwr9 ctrl mask bit
**      [11:11] SM_DBG3_PWR9_MASK
**        DBG3 channel pwr9 ctrl mask bit
**      [12:12] SM_DBG4_PWR9_MASK
**        DBG4 channel pwr9 ctrl mask bit
**      [13:13] SM_DBG5_PWR9_MASK
**        DBG5 channel pwr9 ctrl mask bit
**      [14:14] SM_DBG6_PWR9_MASK
**        DBG6 channel pwr9 ctrl mask bit
**      [15:15] SM_DBG7_PWR9_MASK
**        DBG7 channel pwr9 ctrl mask bit
**      [16:16] SM_DBG0_PWR10_MASK
**        DBG0 channel pwr10 ctrl mask bit
**      [17:17] SM_DBG1_PWR10_MASK
**        DBG1 channel pwr10 ctrl mask bit
**      [18:18] SM_DBG2_PWR10_MASK
**        DBG2 channel pwr10 ctrl mask bit
**      [19:19] SM_DBG3_PWR10_MASK
**        DBG3 channel pwr10 ctrl mask bit
**      [20:20] SM_DBG4_PWR10_MASK
**        DBG4 channel pwr10 ctrl mask bit
**      [21:21] SM_DBG5_PWR10_MASK
**        DBG5 channel pwr10 ctrl mask bit
**      [22:22] SM_DBG6_PWR10_MASK
**        DBG6 channel pwr10 ctrl mask bit
**      [23:23] SM_DBG7_PWR10_MASK
**        DBG7 channel pwr10 ctrl mask bit
**      [24:24] SM_DBG0_PWR11_MASK
**        DBG0 channel pwr11 ctrl mask bit
**      [25:25] SM_DBG1_PWR11_MASK
**        DBG1 channel pwr11 ctrl mask bit
**      [26:26] SM_DBG2_PWR11_MASK
**        DBG2 channel pwr11 ctrl mask bit
**      [27:27] SM_DBG3_PWR11_MASK
**        DBG3 channel pwr11 ctrl mask bit
**      [28:28] SM_DBG4_PWR11_MASK
**        DBG4 channel pwr11 ctrl mask bit
**      [29:29] SM_DBG5_PWR11_MASK
**        DBG5 channel pwr11 ctrl mask bit
**      [30:30] SM_DBG6_PWR11_MASK
**        DBG6 channel pwr11 ctrl mask bit
**      [31:31] SM_DBG7_PWR11_MASK
**        DBG7 channel pwr11 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_PWR_MASK2                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0348))
/*=========================================
** DBG channel pwr ctrl mask bit:
**    DBG channel pwr ctrl mask bit
**      [0:0] SM_DBG0_PWR12_MASK
**        DBG0 channel pwr12 ctrl mask bit
**      [1:1] SM_DBG1_PWR12_MASK
**        DBG1 channel pwr12 ctrl mask bit
**      [2:2] SM_DBG2_PWR12_MASK
**        DBG2 channel pwr12 ctrl mask bit
**      [3:3] SM_DBG3_PWR12_MASK
**        DBG3 channel pwr12 ctrl mask bit
**      [4:4] SM_DBG4_PWR12_MASK
**        DBG4 channel pwr12 ctrl mask bit
**      [5:5] SM_DBG5_PWR12_MASK
**        DBG5 channel pwr12 ctrl mask bit
**      [6:6] SM_DBG6_PWR12_MASK
**        DBG6 channel pwr12 ctrl mask bit
**      [7:7] SM_DBG7_PWR12_MASK
**        DBG7 channel pwr12 ctrl mask bit
**      [8:8] SM_DBG0_PWR13_MASK
**        DBG0 channel pwr13 ctrl mask bit
**      [9:9] SM_DBG1_PWR13_MASK
**        DBG1 channel pwr13 ctrl mask bit
**      [10:10] SM_DBG2_PWR13_MASK
**        DBG2 channel pwr13 ctrl mask bit
**      [11:11] SM_DBG3_PWR13_MASK
**        DBG3 channel pwr13 ctrl mask bit
**      [12:12] SM_DBG4_PWR13_MASK
**        DBG4 channel pwr13 ctrl mask bit
**      [13:13] SM_DBG5_PWR13_MASK
**        DBG5 channel pwr13 ctrl mask bit
**      [14:14] SM_DBG6_PWR13_MASK
**        DBG6 channel pwr13 ctrl mask bit
**      [15:15] SM_DBG7_PWR13_MASK
**        DBG7 channel pwr13 ctrl mask bit
**      [16:16] SM_DBG0_PWR14_MASK
**        DBG0 channel pwr14 ctrl mask bit
**      [17:17] SM_DBG1_PWR14_MASK
**        DBG1 channel pwr14 ctrl mask bit
**      [18:18] SM_DBG2_PWR14_MASK
**        DBG2 channel pwr14 ctrl mask bit
**      [19:19] SM_DBG3_PWR14_MASK
**        DBG3 channel pwr14 ctrl mask bit
**      [20:20] SM_DBG4_PWR14_MASK
**        DBG4 channel pwr14 ctrl mask bit
**      [21:21] SM_DBG5_PWR14_MASK
**        DBG5 channel pwr14 ctrl mask bit
**      [22:22] SM_DBG6_PWR14_MASK
**        DBG6 channel pwr14 ctrl mask bit
**      [23:23] SM_DBG7_PWR14_MASK
**        DBG7 channel pwr14 ctrl mask bit
**      [24:24] SM_DBG0_PWR15_MASK
**        DBG0 channel pwr15 ctrl mask bit
**      [25:25] SM_DBG1_PWR15_MASK
**        DBG1 channel pwr15 ctrl mask bit
**      [26:26] SM_DBG2_PWR15_MASK
**        DBG2 channel pwr15 ctrl mask bit
**      [27:27] SM_DBG3_PWR15_MASK
**        DBG3 channel pwr15 ctrl mask bit
**      [28:28] SM_DBG4_PWR15_MASK
**        DBG4 channel pwr15 ctrl mask bit
**      [29:29] SM_DBG5_PWR15_MASK
**        DBG5 channel pwr15 ctrl mask bit
**      [30:30] SM_DBG6_PWR15_MASK
**        DBG6 channel pwr15 ctrl mask bit
**      [31:31] SM_DBG7_PWR15_MASK
**        DBG7 channel pwr15 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_PWR_MASK3                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x034C))
/*=========================================
** DBG channel pwr ctrl mask bit:
**    DBG channel pwr ctrl mask bit
**      [0:0] SM_DBG0_PWR16_MASK
**        DBG0 channel pwr16 ctrl mask bit
**      [1:1] SM_DBG1_PWR16_MASK
**        DBG1 channel pwr16 ctrl mask bit
**      [2:2] SM_DBG2_PWR16_MASK
**        DBG2 channel pwr16 ctrl mask bit
**      [3:3] SM_DBG3_PWR16_MASK
**        DBG3 channel pwr16 ctrl mask bit
**      [4:4] SM_DBG4_PWR16_MASK
**        DBG4 channel pwr16 ctrl mask bit
**      [5:5] SM_DBG5_PWR16_MASK
**        DBG5 channel pwr16 ctrl mask bit
**      [6:6] SM_DBG6_PWR16_MASK
**        DBG6 channel pwr16 ctrl mask bit
**      [7:7] SM_DBG7_PWR16_MASK
**        DBG7 channel pwr16 ctrl mask bit
**      [8:8] SM_DBG0_PWR17_MASK
**        DBG0 channel pwr17 ctrl mask bit
**      [9:9] SM_DBG1_PWR17_MASK
**        DBG1 channel pwr17 ctrl mask bit
**      [10:10] SM_DBG2_PWR17_MASK
**        DBG2 channel pwr17 ctrl mask bit
**      [11:11] SM_DBG3_PWR17_MASK
**        DBG3 channel pwr17 ctrl mask bit
**      [12:12] SM_DBG4_PWR17_MASK
**        DBG4 channel pwr17 ctrl mask bit
**      [13:13] SM_DBG5_PWR17_MASK
**        DBG5 channel pwr17 ctrl mask bit
**      [14:14] SM_DBG6_PWR17_MASK
**        DBG6 channel pwr17 ctrl mask bit
**      [15:15] SM_DBG7_PWR17_MASK
**        DBG7 channel pwr17 ctrl mask bit
**      [16:16] SM_DBG0_PWR18_MASK
**        DBG0 channel pwr18 ctrl mask bit
**      [17:17] SM_DBG1_PWR18_MASK
**        DBG1 channel pwr18 ctrl mask bit
**      [18:18] SM_DBG2_PWR18_MASK
**        DBG2 channel pwr18 ctrl mask bit
**      [19:19] SM_DBG3_PWR18_MASK
**        DBG3 channel pwr18 ctrl mask bit
**      [20:20] SM_DBG4_PWR18_MASK
**        DBG4 channel pwr18 ctrl mask bit
**      [21:21] SM_DBG5_PWR18_MASK
**        DBG5 channel pwr18 ctrl mask bit
**      [22:22] SM_DBG6_PWR18_MASK
**        DBG6 channel pwr18 ctrl mask bit
**      [23:23] SM_DBG7_PWR18_MASK
**        DBG7 channel pwr18 ctrl mask bit
**      [24:24] SM_DBG0_PWR19_MASK
**        DBG0 channel pwr19 ctrl mask bit
**      [25:25] SM_DBG1_PWR19_MASK
**        DBG1 channel pwr19 ctrl mask bit
**      [26:26] SM_DBG2_PWR19_MASK
**        DBG2 channel pwr19 ctrl mask bit
**      [27:27] SM_DBG3_PWR19_MASK
**        DBG3 channel pwr19 ctrl mask bit
**      [28:28] SM_DBG4_PWR19_MASK
**        DBG4 channel pwr19 ctrl mask bit
**      [29:29] SM_DBG5_PWR19_MASK
**        DBG5 channel pwr19 ctrl mask bit
**      [30:30] SM_DBG6_PWR19_MASK
**        DBG6 channel pwr19 ctrl mask bit
**      [31:31] SM_DBG7_PWR19_MASK
**        DBG7 channel pwr19 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_PWR_MASK4                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0350))
/*=========================================
** DBG channel pwr ctrl mask bit:
**    DBG channel pwr ctrl mask bit
**      [0:0] SM_DBG0_PWR20_MASK
**        DBG0 channel pwr20 ctrl mask bit
**      [1:1] SM_DBG1_PWR20_MASK
**        DBG1 channel pwr20 ctrl mask bit
**      [2:2] SM_DBG2_PWR20_MASK
**        DBG2 channel pwr20 ctrl mask bit
**      [3:3] SM_DBG3_PWR20_MASK
**        DBG3 channel pwr20 ctrl mask bit
**      [4:4] SM_DBG4_PWR20_MASK
**        DBG4 channel pwr20 ctrl mask bit
**      [5:5] SM_DBG5_PWR20_MASK
**        DBG5 channel pwr20 ctrl mask bit
**      [6:6] SM_DBG6_PWR20_MASK
**        DBG6 channel pwr20 ctrl mask bit
**      [7:7] SM_DBG7_PWR20_MASK
**        DBG7 channel pwr20 ctrl mask bit
**      [8:8] SM_DBG0_PWR21_MASK
**        DBG0 channel pwr21 ctrl mask bit
**      [9:9] SM_DBG1_PWR21_MASK
**        DBG1 channel pwr21 ctrl mask bit
**      [10:10] SM_DBG2_PWR21_MASK
**        DBG2 channel pwr21 ctrl mask bit
**      [11:11] SM_DBG3_PWR21_MASK
**        DBG3 channel pwr21 ctrl mask bit
**      [12:12] SM_DBG4_PWR21_MASK
**        DBG4 channel pwr21 ctrl mask bit
**      [13:13] SM_DBG5_PWR21_MASK
**        DBG5 channel pwr21 ctrl mask bit
**      [14:14] SM_DBG6_PWR21_MASK
**        DBG6 channel pwr21 ctrl mask bit
**      [15:15] SM_DBG7_PWR21_MASK
**        DBG7 channel pwr21 ctrl mask bit
**      [16:16] SM_DBG0_PWR22_MASK
**        DBG0 channel pwr22 ctrl mask bit
**      [17:17] SM_DBG1_PWR22_MASK
**        DBG1 channel pwr22 ctrl mask bit
**      [18:18] SM_DBG2_PWR22_MASK
**        DBG2 channel pwr22 ctrl mask bit
**      [19:19] SM_DBG3_PWR22_MASK
**        DBG3 channel pwr22 ctrl mask bit
**      [20:20] SM_DBG4_PWR22_MASK
**        DBG4 channel pwr22 ctrl mask bit
**      [21:21] SM_DBG5_PWR22_MASK
**        DBG5 channel pwr22 ctrl mask bit
**      [22:22] SM_DBG6_PWR22_MASK
**        DBG6 channel pwr22 ctrl mask bit
**      [23:23] SM_DBG7_PWR22_MASK
**        DBG7 channel pwr22 ctrl mask bit
**      [24:24] SM_DBG0_PWR23_MASK
**        DBG0 channel pwr23 ctrl mask bit
**      [25:25] SM_DBG1_PWR23_MASK
**        DBG1 channel pwr23 ctrl mask bit
**      [26:26] SM_DBG2_PWR23_MASK
**        DBG2 channel pwr23 ctrl mask bit
**      [27:27] SM_DBG3_PWR23_MASK
**        DBG3 channel pwr23 ctrl mask bit
**      [28:28] SM_DBG4_PWR23_MASK
**        DBG4 channel pwr23 ctrl mask bit
**      [29:29] SM_DBG5_PWR23_MASK
**        DBG5 channel pwr23 ctrl mask bit
**      [30:30] SM_DBG6_PWR23_MASK
**        DBG6 channel pwr23 ctrl mask bit
**      [31:31] SM_DBG7_PWR23_MASK
**        DBG7 channel pwr23 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_PWR_MASK5                          ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0354))
/*=========================================
** DBG channel mas trigger ctrl mask bit:
**    DBG channel mas trigger ctrl mask bit
**      [0:0] SM_DBG0_MAS_TRIG0_MASK
**        DBG0 channel mas trigger channel0 ctrl mask bit
**      [1:1] SM_DBG1_MAS_TRIG0_MASK
**        DBG1 channel mas trigger channel0 ctrl mask bit
**      [2:2] SM_DBG2_MAS_TRIG0_MASK
**        DBG2 channel mas trigger channel0 ctrl mask bit
**      [3:3] SM_DBG3_MAS_TRIG0_MASK
**        DBG3 channel mas trigger channel0 ctrl mask bit
**      [4:4] SM_DBG4_MAS_TRIG0_MASK
**        DBG4 channel mas trigger channel0 ctrl mask bit
**      [5:5] SM_DBG5_MAS_TRIG0_MASK
**        DBG5 channel mas trigger channel0 ctrl mask bit
**      [6:6] SM_DBG6_MAS_TRIG0_MASK
**        DBG6 channel mas trigger channel0 ctrl mask bit
**      [7:7] SM_DBG7_MAS_TRIG0_MASK
**        DBG7 channel mas trigger channel0 ctrl mask bit
**      [8:8] SM_DBG0_MAS_TRIG1_MASK
**        DBG0 channel mas trigger channel1 ctrl mask bit
**      [9:9] SM_DBG1_MAS_TRIG1_MASK
**        DBG1 channel mas trigger channel1 ctrl mask bit
**      [10:10] SM_DBG2_MAS_TRIG1_MASK
**        DBG2 channel mas trigger channel1 ctrl mask bit
**      [11:11] SM_DBG3_MAS_TRIG1_MASK
**        DBG3 channel mas trigger channel1 ctrl mask bit
**      [12:12] SM_DBG4_MAS_TRIG1_MASK
**        DBG4 channel mas trigger channel1 ctrl mask bit
**      [13:13] SM_DBG5_MAS_TRIG1_MASK
**        DBG5 channel mas trigger channel1 ctrl mask bit
**      [14:14] SM_DBG6_MAS_TRIG1_MASK
**        DBG6 channel mas trigger channel1 ctrl mask bit
**      [15:15] SM_DBG7_MAS_TRIG1_MASK
**        DBG7 channel mas trigger channel1 ctrl mask bit
**      [16:16] SM_DBG0_MAS_TRIG2_MASK
**        DBG0 channel mas trigger channel2 ctrl mask bit
**      [17:17] SM_DBG1_MAS_TRIG2_MASK
**        DBG1 channel mas trigger channel2 ctrl mask bit
**      [18:18] SM_DBG2_MAS_TRIG2_MASK
**        DBG2 channel mas trigger channel2 ctrl mask bit
**      [19:19] SM_DBG3_MAS_TRIG2_MASK
**        DBG3 channel mas trigger channel2 ctrl mask bit
**      [20:20] SM_DBG4_MAS_TRIG2_MASK
**        DBG4 channel mas trigger channel2 ctrl mask bit
**      [21:21] SM_DBG5_MAS_TRIG2_MASK
**        DBG5 channel mas trigger channel2 ctrl mask bit
**      [22:22] SM_DBG6_MAS_TRIG2_MASK
**        DBG6 channel mas trigger channel2 ctrl mask bit
**      [23:23] SM_DBG7_MAS_TRIG2_MASK
**        DBG7 channel mas trigger channel2 ctrl mask bit
**      [24:24] SM_DBG0_MAS_TRIG3_MASK
**        DBG0 channel mas trigger channel3 ctrl mask bit
**      [25:25] SM_DBG1_MAS_TRIG3_MASK
**        DBG1 channel mas trigger channel3 ctrl mask bit
**      [26:26] SM_DBG2_MAS_TRIG3_MASK
**        DBG2 channel mas trigger channel3 ctrl mask bit
**      [27:27] SM_DBG3_MAS_TRIG3_MASK
**        DBG3 channel mas trigger channel3 ctrl mask bit
**      [28:28] SM_DBG4_MAS_TRIG3_MASK
**        DBG4 channel mas trigger channel3 ctrl mask bit
**      [29:29] SM_DBG5_MAS_TRIG3_MASK
**        DBG5 channel mas trigger channel3 ctrl mask bit
**      [30:30] SM_DBG6_MAS_TRIG3_MASK
**        DBG6 channel mas trigger channel3 ctrl mask bit
**      [31:31] SM_DBG7_MAS_TRIG3_MASK
**        DBG7 channel mas trigger channel3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_MAS_TRIG_MASK0                     ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0360))
/*=========================================
** DBG channel mas trigger ctrl mask bit:
**    DBG channel mas trigger ctrl mask bit
**      [0:0] SM_DBG0_MAS_TRIG4_MASK
**        DBG0 channel mas trigger channel4 ctrl mask bit
**      [1:1] SM_DBG1_MAS_TRIG4_MASK
**        DBG1 channel mas trigger channel4 ctrl mask bit
**      [2:2] SM_DBG2_MAS_TRIG4_MASK
**        DBG2 channel mas trigger channel4 ctrl mask bit
**      [3:3] SM_DBG3_MAS_TRIG4_MASK
**        DBG3 channel mas trigger channel4 ctrl mask bit
**      [4:4] SM_DBG4_MAS_TRIG4_MASK
**        DBG4 channel mas trigger channel4 ctrl mask bit
**      [5:5] SM_DBG5_MAS_TRIG4_MASK
**        DBG5 channel mas trigger channel4 ctrl mask bit
**      [6:6] SM_DBG6_MAS_TRIG4_MASK
**        DBG6 channel mas trigger channel4 ctrl mask bit
**      [7:7] SM_DBG7_MAS_TRIG4_MASK
**        DBG7 channel mas trigger channel4 ctrl mask bit
**      [8:8] SM_DBG0_MAS_TRIG5_MASK
**        DBG0 channel mas trigger channel5 ctrl mask bit
**      [9:9] SM_DBG1_MAS_TRIG5_MASK
**        DBG1 channel mas trigger channel5 ctrl mask bit
**      [10:10] SM_DBG2_MAS_TRIG5_MASK
**        DBG2 channel mas trigger channel5 ctrl mask bit
**      [11:11] SM_DBG3_MAS_TRIG5_MASK
**        DBG3 channel mas trigger channel5 ctrl mask bit
**      [12:12] SM_DBG4_MAS_TRIG5_MASK
**        DBG4 channel mas trigger channel5 ctrl mask bit
**      [13:13] SM_DBG5_MAS_TRIG5_MASK
**        DBG5 channel mas trigger channel5 ctrl mask bit
**      [14:14] SM_DBG6_MAS_TRIG5_MASK
**        DBG6 channel mas trigger channel5 ctrl mask bit
**      [15:15] SM_DBG7_MAS_TRIG5_MASK
**        DBG7 channel mas trigger channel5 ctrl mask bit
**      [16:16] SM_DBG0_MAS_TRIG6_MASK
**        DBG0 channel mas trigger channel6 ctrl mask bit
**      [17:17] SM_DBG1_MAS_TRIG6_MASK
**        DBG1 channel mas trigger channel6 ctrl mask bit
**      [18:18] SM_DBG2_MAS_TRIG6_MASK
**        DBG2 channel mas trigger channel6 ctrl mask bit
**      [19:19] SM_DBG3_MAS_TRIG6_MASK
**        DBG3 channel mas trigger channel6 ctrl mask bit
**      [20:20] SM_DBG4_MAS_TRIG6_MASK
**        DBG4 channel mas trigger channel6 ctrl mask bit
**      [21:21] SM_DBG5_MAS_TRIG6_MASK
**        DBG5 channel mas trigger channel6 ctrl mask bit
**      [22:22] SM_DBG6_MAS_TRIG6_MASK
**        DBG6 channel mas trigger channel6 ctrl mask bit
**      [23:23] SM_DBG7_MAS_TRIG6_MASK
**        DBG7 channel mas trigger channel6 ctrl mask bit
**      [24:24] SM_DBG0_MAS_TRIG7_MASK
**        DBG0 channel mas trigger channel7 ctrl mask bit
**      [25:25] SM_DBG1_MAS_TRIG7_MASK
**        DBG1 channel mas trigger channel7 ctrl mask bit
**      [26:26] SM_DBG2_MAS_TRIG7_MASK
**        DBG2 channel mas trigger channel7 ctrl mask bit
**      [27:27] SM_DBG3_MAS_TRIG7_MASK
**        DBG3 channel mas trigger channel7 ctrl mask bit
**      [28:28] SM_DBG4_MAS_TRIG7_MASK
**        DBG4 channel mas trigger channel7 ctrl mask bit
**      [29:29] SM_DBG5_MAS_TRIG7_MASK
**        DBG5 channel mas trigger channel7 ctrl mask bit
**      [30:30] SM_DBG6_MAS_TRIG7_MASK
**        DBG6 channel mas trigger channel7 ctrl mask bit
**      [31:31] SM_DBG7_MAS_TRIG7_MASK
**        DBG7 channel mas trigger channel7 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_MAS_TRIG_MASK1                     ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0364))
/*=========================================
** DBG channel timer trigger ctrl mask bit:
**    DBG channel timer trigger ctrl mask bit
**      [0:0] SM_DBG0_TIMER_TRIG0_MASK
**        DBG0 channel timer trigger channel0 ctrl mask bit
**      [1:1] SM_DBG1_TIMER_TRIG0_MASK
**        DBG1 channel timer trigger channel0 ctrl mask bit
**      [2:2] SM_DBG2_TIMER_TRIG0_MASK
**        DBG2 channel timer trigger channel0 ctrl mask bit
**      [3:3] SM_DBG3_TIMER_TRIG0_MASK
**        DBG3 channel timer trigger channel0 ctrl mask bit
**      [4:4] SM_DBG4_TIMER_TRIG0_MASK
**        DBG4 channel timer trigger channel0 ctrl mask bit
**      [5:5] SM_DBG5_TIMER_TRIG0_MASK
**        DBG5 channel timer trigger channel0 ctrl mask bit
**      [6:6] SM_DBG6_TIMER_TRIG0_MASK
**        DBG6 channel timer trigger channel0 ctrl mask bit
**      [7:7] SM_DBG7_TIMER_TRIG0_MASK
**        DBG7 channel timer trigger channel0 ctrl mask bit
**      [8:8] SM_DBG0_TIMER_TRIG1_MASK
**        DBG0 channel timer trigger channel1 ctrl mask bit
**      [9:9] SM_DBG1_TIMER_TRIG1_MASK
**        DBG1 channel timer trigger channel1 ctrl mask bit
**      [10:10] SM_DBG2_TIMER_TRIG1_MASK
**        DBG2 channel timer trigger channel1 ctrl mask bit
**      [11:11] SM_DBG3_TIMER_TRIG1_MASK
**        DBG3 channel timer trigger channel1 ctrl mask bit
**      [12:12] SM_DBG4_TIMER_TRIG1_MASK
**        DBG4 channel timer trigger channel1 ctrl mask bit
**      [13:13] SM_DBG5_TIMER_TRIG1_MASK
**        DBG5 channel timer trigger channel1 ctrl mask bit
**      [14:14] SM_DBG6_TIMER_TRIG1_MASK
**        DBG6 channel timer trigger channel1 ctrl mask bit
**      [15:15] SM_DBG7_TIMER_TRIG1_MASK
**        DBG7 channel timer trigger channel1 ctrl mask bit
**      [16:16] SM_DBG0_TIMER_TRIG2_MASK
**        DBG0 channel timer trigger channel2 ctrl mask bit
**      [17:17] SM_DBG1_TIMER_TRIG2_MASK
**        DBG1 channel timer trigger channel2 ctrl mask bit
**      [18:18] SM_DBG2_TIMER_TRIG2_MASK
**        DBG2 channel timer trigger channel2 ctrl mask bit
**      [19:19] SM_DBG3_TIMER_TRIG2_MASK
**        DBG3 channel timer trigger channel2 ctrl mask bit
**      [20:20] SM_DBG4_TIMER_TRIG2_MASK
**        DBG4 channel timer trigger channel2 ctrl mask bit
**      [21:21] SM_DBG5_TIMER_TRIG2_MASK
**        DBG5 channel timer trigger channel2 ctrl mask bit
**      [22:22] SM_DBG6_TIMER_TRIG2_MASK
**        DBG6 channel timer trigger channel2 ctrl mask bit
**      [23:23] SM_DBG7_TIMER_TRIG2_MASK
**        DBG7 channel timer trigger channel2 ctrl mask bit
**      [24:24] SM_DBG0_TIMER_TRIG3_MASK
**        DBG0 channel timer trigger channel3 ctrl mask bit
**      [25:25] SM_DBG1_TIMER_TRIG3_MASK
**        DBG1 channel timer trigger channel3 ctrl mask bit
**      [26:26] SM_DBG2_TIMER_TRIG3_MASK
**        DBG2 channel timer trigger channel3 ctrl mask bit
**      [27:27] SM_DBG3_TIMER_TRIG3_MASK
**        DBG3 channel timer trigger channel3 ctrl mask bit
**      [28:28] SM_DBG4_TIMER_TRIG3_MASK
**        DBG4 channel timer trigger channel3 ctrl mask bit
**      [29:29] SM_DBG5_TIMER_TRIG3_MASK
**        DBG5 channel timer trigger channel3 ctrl mask bit
**      [30:30] SM_DBG6_TIMER_TRIG3_MASK
**        DBG6 channel timer trigger channel3 ctrl mask bit
**      [31:31] SM_DBG7_TIMER_TRIG3_MASK
**        DBG7 channel timer trigger channel3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_TIMER_TRIG_MASK0                   ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0370))
/*=========================================
** DBG channel timer trigger ctrl mask bit:
**    DBG channel timer trigger ctrl mask bit
**      [0:0] SM_DBG0_TIMER_TRIG4_MASK
**        DBG0 channel timer trigger channel4 ctrl mask bit
**      [1:1] SM_DBG1_TIMER_TRIG4_MASK
**        DBG1 channel timer trigger channel4 ctrl mask bit
**      [2:2] SM_DBG2_TIMER_TRIG4_MASK
**        DBG2 channel timer trigger channel4 ctrl mask bit
**      [3:3] SM_DBG3_TIMER_TRIG4_MASK
**        DBG3 channel timer trigger channel4 ctrl mask bit
**      [4:4] SM_DBG4_TIMER_TRIG4_MASK
**        DBG4 channel timer trigger channel4 ctrl mask bit
**      [5:5] SM_DBG5_TIMER_TRIG4_MASK
**        DBG5 channel timer trigger channel4 ctrl mask bit
**      [6:6] SM_DBG6_TIMER_TRIG4_MASK
**        DBG6 channel timer trigger channel4 ctrl mask bit
**      [7:7] SM_DBG7_TIMER_TRIG4_MASK
**        DBG7 channel timer trigger channel4 ctrl mask bit
**      [8:8] SM_DBG0_TIMER_TRIG5_MASK
**        DBG0 channel timer trigger channel5 ctrl mask bit
**      [9:9] SM_DBG1_TIMER_TRIG5_MASK
**        DBG1 channel timer trigger channel5 ctrl mask bit
**      [10:10] SM_DBG2_TIMER_TRIG5_MASK
**        DBG2 channel timer trigger channel5 ctrl mask bit
**      [11:11] SM_DBG3_TIMER_TRIG5_MASK
**        DBG3 channel timer trigger channel5 ctrl mask bit
**      [12:12] SM_DBG4_TIMER_TRIG5_MASK
**        DBG4 channel timer trigger channel5 ctrl mask bit
**      [13:13] SM_DBG5_TIMER_TRIG5_MASK
**        DBG5 channel timer trigger channel5 ctrl mask bit
**      [14:14] SM_DBG6_TIMER_TRIG5_MASK
**        DBG6 channel timer trigger channel5 ctrl mask bit
**      [15:15] SM_DBG7_TIMER_TRIG5_MASK
**        DBG7 channel timer trigger channel5 ctrl mask bit
**      [16:16] SM_DBG0_TIMER_TRIG2_MASK
**        DBG0 channel timer trigger channel6 ctrl mask bit
**      [17:17] SM_DBG1_TIMER_TRIG6_MASK
**        DBG1 channel timer trigger channel6 ctrl mask bit
**      [18:18] SM_DBG2_TIMER_TRIG6_MASK
**        DBG2 channel timer trigger channel6 ctrl mask bit
**      [19:19] SM_DBG3_TIMER_TRIG6_MASK
**        DBG3 channel timer trigger channel6 ctrl mask bit
**      [20:20] SM_DBG4_TIMER_TRIG6_MASK
**        DBG4 channel timer trigger channel6 ctrl mask bit
**      [21:21] SM_DBG5_TIMER_TRIG6_MASK
**        DBG5 channel timer trigger channel6 ctrl mask bit
**      [22:22] SM_DBG6_TIMER_TRIG6_MASK
**        DBG6 channel timer trigger channel6 ctrl mask bit
**      [23:23] SM_DBG7_TIMER_TRIG6_MASK
**        DBG7 channel timer trigger channel6 ctrl mask bit
**      [24:24] SM_DBG0_TIMER_TRIG7_MASK
**        DBG0 channel timer trigger channel7 ctrl mask bit
**      [25:25] SM_DBG1_TIMER_TRIG7_MASK
**        DBG1 channel timer trigger channel7 ctrl mask bit
**      [26:26] SM_DBG2_TIMER_TRIG7_MASK
**        DBG2 channel timer trigger channel7 ctrl mask bit
**      [27:27] SM_DBG3_TIMER_TRIG7_MASK
**        DBG3 channel timer trigger channel7 ctrl mask bit
**      [28:28] SM_DBG4_TIMER_TRIG7_MASK
**        DBG4 channel timer trigger channel7 ctrl mask bit
**      [29:29] SM_DBG5_TIMER_TRIG7_MASK
**        DBG5 channel timer trigger channel7 ctrl mask bit
**      [30:30] SM_DBG6_TIMER_TRIG7_MASK
**        DBG6 channel timer trigger channel7 ctrl mask bit
**      [31:31] SM_DBG7_TIMER_TRIG7_MASK
**        DBG7 channel timer trigger channel7 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_TIMER_TRIG_MASK1                   ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0374))
/*=========================================
** DBG channel client active ctrl mask bit:
**    DBG channel client active ctrl mask bit
**      [0:0] SM_DBG0_CLIENT_ACT0_MASK
**        DBG0 channel client active channel0 ctrl mask bit
**      [1:1] SM_DBG1_CLIENT_ACT0_MASK
**        DBG1 channel client active channel0 ctrl mask bit
**      [2:2] SM_DBG2_CLIENT_ACT0_MASK
**        DBG2 channel client active channel0 ctrl mask bit
**      [3:3] SM_DBG3_CLIENT_ACT0_MASK
**        DBG3 channel client active channel0 ctrl mask bit
**      [4:4] SM_DBG4_CLIENT_ACT0_MASK
**        DBG4 channel client active channel0 ctrl mask bit
**      [5:5] SM_DBG5_CLIENT_ACT0_MASK
**        DBG5 channel client active channel0 ctrl mask bit
**      [6:6] SM_DBG6_CLIENT_ACT0_MASK
**        DBG6 channel client active channel0 ctrl mask bit
**      [7:7] SM_DBG7_CLIENT_ACT0_MASK
**        DBG7 channel client active channel0 ctrl mask bit
**      [8:8] SM_DBG0_CLIENT_ACT1_MASK
**        DBG0 channel client active channel1 ctrl mask bit
**      [9:9] SM_DBG1_CLIENT_ACT1_MASK
**        DBG1 channel client active channel1 ctrl mask bit
**      [10:10] SM_DBG2_CLIENT_ACT1_MASK
**        DBG2 channel client active channel1 ctrl mask bit
**      [11:11] SM_DBG3_CLIENT_ACT1_MASK
**        DBG3 channel client active channel1 ctrl mask bit
**      [12:12] SM_DBG4_CLIENT_ACT1_MASK
**        DBG4 channel client active channel1 ctrl mask bit
**      [13:13] SM_DBG5_CLIENT_ACT1_MASK
**        DBG5 channel client active channel1 ctrl mask bit
**      [14:14] SM_DBG6_CLIENT_ACT1_MASK
**        DBG6 channel client active channel1 ctrl mask bit
**      [15:15] SM_DBG7_CLIENT_ACT1_MASK
**        DBG7 channel client active channel1 ctrl mask bit
**      [16:16] SM_DBG0_CLIENT_ACT2_MASK
**        DBG0 channel client active channel2 ctrl mask bit
**      [17:17] SM_DBG1_CLIENT_ACT2_MASK
**        DBG1 channel client active channel2 ctrl mask bit
**      [18:18] SM_DBG2_CLIENT_ACT2_MASK
**        DBG2 channel client active channel2 ctrl mask bit
**      [19:19] SM_DBG3_CLIENT_ACT2_MASK
**        DBG3 channel client active channel2 ctrl mask bit
**      [20:20] SM_DBG4_CLIENT_ACT2_MASK
**        DBG4 channel client active channel2 ctrl mask bit
**      [21:21] SM_DBG5_CLIENT_ACT2_MASK
**        DBG5 channel client active channel2 ctrl mask bit
**      [22:22] SM_DBG6_CLIENT_ACT2_MASK
**        DBG6 channel client active channel2 ctrl mask bit
**      [23:23] SM_DBG7_CLIENT_ACT2_MASK
**        DBG7 channel client active channel2 ctrl mask bit
**      [24:24] SM_DBG0_CLIENT_ACT3_MASK
**        DBG0 channel client active channel3 ctrl mask bit
**      [25:25] SM_DBG1_CLIENT_ACT3_MASK
**        DBG1 channel client active channel3 ctrl mask bit
**      [26:26] SM_DBG2_CLIENT_ACT3_MASK
**        DBG2 channel client active channel3 ctrl mask bit
**      [27:27] SM_DBG3_CLIENT_ACT3_MASK
**        DBG3 channel client active channel3 ctrl mask bit
**      [28:28] SM_DBG4_CLIENT_ACT3_MASK
**        DBG4 channel client active channel3 ctrl mask bit
**      [29:29] SM_DBG5_CLIENT_ACT3_MASK
**        DBG5 channel client active channel3 ctrl mask bit
**      [30:30] SM_DBG6_CLIENT_ACT3_MASK
**        DBG6 channel client active channel3 ctrl mask bit
**      [31:31] SM_DBG7_CLIENT_ACT3_MASK
**        DBG7 channel client active channel3 ctrl mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_CLIENT_ACT_MASK                    ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0380))
/*=========================================
** DBG channel FSM status:
**    DBG channel FSM status
**    0000001: Normal stage
**    0000010: MTOFF stage
**    0000100: PAUSE stage
**    0001000: PRE_PAUSE stage
**    0010000: SYSCLK_SETTLE stage
**    0100000: CCP_SETTLE stage
**    1000000: MTON stage
**      [6:0] SM_DBG0_SSTA
**        DBG0 channel FSM status
**      [14:8] SM_DBG1_SSTA
**        DBG1 channel FSM status
**      [22:16] SM_DBG2_SSTA
**        DBG2 channel FSM status
**      [30:24] SM_DBG3_SSTA
**        DBG3 channel FSM status
**=========================================*/
#define MD_TOPSM_SM_DBG_SSTA0                              ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x03A0))
/*=========================================
** DBG channel FSM status:
**    DBG channel FSM status
**    0000001: Normal stage
**    0000010: MTOFF stage
**    0000100: PAUSE stage
**    0001000: PRE_PAUSE stage
**    0010000: SYSCLK_SETTLE stage
**    0100000: CCP_SETTLE stage
**    1000000: MTON stage
**      [6:0] SM_DBG4_SSTA
**        DBG4 channel FSM status
**      [14:8] SM_DBG5_SSTA
**        DBG5 channel FSM status
**      [22:16] SM_DBG6_SSTA
**        DBG6 channel FSM status
**      [30:24] SM_DBG7_SSTA
**        DBG7 channel FSM status
**=========================================*/
#define MD_TOPSM_SM_DBG_SSTA1                              ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x03A4))
/*=========================================
** Clock Settling Setting:
**    Notes:
**    If there is no two stage PLL, SM_PLL_SETTLE = max(each pll settle time)
**    Otherewise, SM_PLL_SETTLE = max of 1th + max of 2th stage pll settle time
**      [8:0] SM_SYSCLK_SETTLE
**        System clock settling time by F32K_CK cycles. Max = 508 cycles
**        All topsm sysclk settling time must be the same.
**      [20:16] SM_PLL_SETTLE
**        PLL settling time by F32k_CK cycles.
**=========================================*/
#define MD_TOPSM_SM_CLK_SETTLE                             ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0400))
/*=========================================
** Timer trigger settle time:
**    Application: TIMER channel do pause complete and trigger another timer to wakeup during wakeup time
**      [7:0] SM_TIMER_TRIG_SETTLE
**        Timer trigger settle time
**=========================================*/
#define MD_TOPSM_SM_TIMER_TRIG_SETTLE                      ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0410))
/*=========================================
** The maximum of mas trigger settle time:
**    Specify the maximum value among each mas trigger settle time (in SM_MAS_TRIG_GRP_SETTLE)
**      [7:0] SM_MAS_TRIG_MAX_SETTLE
**        The maximum of mas trigger settle time
**=========================================*/
#define MD_TOPSM_SM_MAS_TRIG_MAX_SETTLE                    ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0418))
/*=========================================
** mas trigger settle time for each channel:
**    Specify mas trigger settle time for each channel
**      [7:0] SM_MAS_TRIG0_SETTLE
**        mas trigger settle time for channel0
**      [15:8] SM_MAS_TRIG1_SETTLE
**        mas trigger settle time for channel1
**      [23:16] SM_MAS_TRIG2_SETTLE
**        mas trigger settle time for channel2
**      [31:24] SM_MAS_TRIG3_SETTLE
**        mas trigger settle time for channel3
**=========================================*/
#define MD_TOPSM_SM_MAS_TRIG_GRP_SETTLE0                   ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0420))
/*=========================================
** mas trigger settle time for each channel:
**    Specify mas trigger settle time for each channel
**      [7:0] SM_MAS_TRIG4_SETTLE
**        mas trigger settle time for channel0
**      [15:8] SM_MAS_TRIG5_SETTLE
**        mas trigger settle time for channel1
**      [23:16] SM_MAS_TRIG6_SETTLE
**        mas trigger settle time for channel2
**      [31:24] SM_MAS_TRIG7_SETTLE
**        mas trigger settle time for channel3
**=========================================*/
#define MD_TOPSM_SM_MAS_TRIG_GRP_SETTLE1                   ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0424))
/*=========================================
** mas trigger SAL value for each channel:
**    Specify Sampling ack latency for each channel
**      [7:0] SM_MAS_TRIG0_SAL
**        mas trigger SAL value for channel0, Min = 1
**      [15:8] SM_MAS_TRIG1_SAL
**        mas trigger SAL value for channel1, Min = 1
**      [23:16] SM_MAS_TRIG2_SAL
**        mas trigger SAL value for channel2, Min = 1
**      [31:24] SM_MAS_TRIG3_SAL
**        mas trigger SAL value for channel3, Min = 1
**=========================================*/
#define MD_TOPSM_SM_MAS_TRIG_GRP_SAL0                      ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0430))
/*=========================================
** mas trigger SAL value for each channel:
**    Specify Sampling ack latency for each channel
**      [7:0] SM_MAS_TRIG4_SAL
**        mas trigger SAL value for channel0, Min = 1
**      [15:8] SM_MAS_TRIG5_SAL
**        mas trigger SAL value for channel1, Min = 1
**      [23:16] SM_MAS_TRIG6_SAL
**        mas trigger SAL value for channel2, Min = 1
**      [31:24] SM_MAS_TRIG7_SAL
**        mas trigger SAL value for channel3, Min = 1
**=========================================*/
#define MD_TOPSM_SM_MAS_TRIG_GRP_SAL1                      ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0434))
/*=========================================
** mas trigger channel selection:
**    Application: If the corresponding bit is set 1, mas trigger channel settle time is ignored when pause interrupt happen
**      [0:0] SM_TMR0_MAS_TRIG_SEL
**        When pause interrupt happening @TIMER0 channel , the settle time of mas trigger channels are all ignored
**      [1:1] SM_TMR1_MAS_TRIG_SEL
**        When pause interrupt happening @TIMER1 channel , the settle time of mas trigger channels are all ignored
**      [2:2] SM_TMR2_MAS_TRIG_SEL
**        When pause interrupt happening @TIMER2 channel , the settle time of mas trigger channels are all ignored
**      [3:3] SM_TMR3_MAS_TRIG_SEL
**        When pause interrupt happening @TIMER3 channel , the settle time of mas trigger channels are all ignored
**      [4:4] SM_TMR4_MAS_TRIG_SEL
**        When pause interrupt happening @TIMER4 channel , the settle time of mas trigger channels are all ignored
**      [5:5] SM_TMR5_MAS_TRIG_SEL
**        When pause interrupt happening @TIMER5 channel , the settle time of mas trigger channels are all ignored
**      [6:6] SM_TMR6_MAS_TRIG_SEL
**        When pause interrupt happening @TIMER6 channel , the settle time of mas trigger channels are all ignored
**      [7:7] SM_TMR7_MAS_TRIG_SEL
**        When pause interrupt happening @TIMER7 channel , the settle time of mas trigger channels are all ignored
**      [8:8] SM_SLV0_MAS_TRIG_SEL
**        When pause interrupt happening @SLV0 channel , the settle time of mas trigger channels are all ignored
**      [9:9] SM_SLV1_MAS_TRIG_SEL
**        When pause interrupt happening @SLV1 channel , the settle time of mas trigger channels are all ignored
**      [10:10] SM_SLV2_MAS_TRIG_SEL
**        When pause interrupt happening @SLV2 channel , the settle time of mas trigger channels are all ignored
**      [11:11] SM_SLV3_MAS_TRIG_SEL
**        When pause interrupt happening @SLV3 channel , the settle time of mas trigger channels are all ignored
**      [12:12] SM_SLV4_MAS_TRIG_SEL
**        When pause interrupt happening @SLV4 channel , the settle time of mas trigger channels are all ignored
**      [13:13] SM_SLV5_MAS_TRIG_SEL
**        When pause interrupt happening @SLV5 channel , the settle time of mas trigger channels are all ignored
**      [14:14] SM_SLV6_MAS_TRIG_SEL
**        When pause interrupt happening @SLV6 channel , the settle time of mas trigger channels are all ignored
**      [15:15] SM_SLV7_MAS_TRIG_SEL
**        When pause interrupt happening @SLV7 channel , the settle time of mas trigger channels are all ignored
**      [16:16] SM_DBG0_MAS_TRIG_SEL
**        When pause interrupt happening @DBG0 channel , the settle time of mas trigger channels are all ignored
**      [17:17] SM_DBG1_MAS_TRIG_SEL
**        When pause interrupt happening @DBG1 channel , the settle time of mas trigger channels are all ignored
**      [18:18] SM_DBG2_MAS_TRIG_SEL
**        When pause interrupt happening @DBG2 channel , the settle time of mas trigger channels are all ignored
**      [19:19] SM_DBG3_MAS_TRIG_SEL
**        When pause interrupt happening @DBG3 channel , the settle time of mas trigger channels are all ignored
**      [20:20] SM_DBG4_MAS_TRIG_SEL
**        When pause interrupt happening @DBG4 channel , the settle time of mas trigger channels are all ignored
**      [21:21] SM_DBG5_MAS_TRIG_SEL
**        When pause interrupt happening @DBG5 channel , the settle time of mas trigger channels are all ignored
**      [22:22] SM_DBG6_MAS_TRIG_SEL
**        When pause interrupt happening @DBG6 channel , the settle time of mas trigger channels are all ignored
**      [23:23] SM_DBG7_MAS_TRIG_SEL
**        When pause interrupt happening @DBG7 channel , the settle time of mas trigger channels are all ignored
**=========================================*/
#define MD_TOPSM_SM_MAS_TRIG_SEL                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0440))
/*=========================================
** TMR channel for sw trigger mode:
**    TMR channel for SW trigger mode.
**    This application is only active when corresponding mask bit in SM_TMR_REQ_MASK is tie 1
**    0: enter sleep,
**    1: trigger wakeup
**    It's not available to dynamiccally trigger this register 0->1 or 1->0.
**      [0:0] TMR0_SW_TRIG
**        TMR0 channel triggered by SW is only available when SM_TMR_REQ_MASK[0] is 1
**      [1:1] TMR1_SW_TRIG
**        TMR1 channel triggered by SW is only available when SM_TMR_REQ_MASK[1] is 1
**      [2:2] TMR2_SW_TRIG
**        TMR2 channel triggered by SW is only available when SM_TMR_REQ_MASK[2] is 1
**      [3:3] TMR3_SW_TRIG
**        TMR3 channel triggered by SW is only available when SM_TMR_REQ_MASK[3] is 1
**      [4:4] TMR4_SW_TRIG
**        TMR4 channel triggered by SW is only available when SM_TMR_REQ_MASK[4] is 1
**      [5:5] TMR5_SW_TRIG
**        TMR5 channel triggered by SW is only available when SM_TMR_REQ_MASK[5] is 1
**      [6:6] TMR6_SW_TRIG
**        TMR6 channel triggered by SW is only available when SM_TMR_REQ_MASK[6] is 1
**      [7:7] TMR7_SW_TRIG
**        TMR7 channel triggered by SW is only available when SM_TMR_REQ_MASK[7] is 1
**=========================================*/
#define MD_TOPSM_SM_TMR_SW_TRIG                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0450))
/*=========================================
** SLV channel for sw trigger mode:
**    SLV channel for SW trigger mode.
**    This application is only active when corresponding mask bit in SM_SLV_REQ_MASK is tie 1
**    0: enter sleep,
**    1: trigger wakeup
**    when to check ready bit:
**    When trigger 0->1, after waiging 33us to check ready bit
**    (When to trigger turn off: must confirm the req is on & ready bit is on)
**      [0:0] SLV0_SW_TRIG
**        SLV0 channel triggered by SW is only available when SM_SLV_REQ_MASK[0] is 1
**      [1:1] SLV1_SW_TRIG
**        SLV1 channel triggered by SW is only available when SM_SLV_REQ_MASK[1] is 1
**      [2:2] SLV2_SW_TRIG
**        SLV2 channel triggered by SW is only available when SM_SLV_REQ_MASK[2] is 1
**      [3:3] SLV3_SW_TRIG
**        SLV3 channel triggered by SW is only available when SM_SLV_REQ_MASK[3] is 1
**      [4:4] SLV4_SW_TRIG
**        SLV4 channel triggered by SW is only available when SM_SLV_REQ_MASK[4] is 1
**      [5:5] SLV5_SW_TRIG
**        SLV5 channel triggered by SW is only available when SM_SLV_REQ_MASK[5] is 1
**      [6:6] SLV6_SW_TRIG
**        SLV6 channel triggered by SW is only available when SM_SLV_REQ_MASK[6] is 1
**      [7:7] SLV7_SW_TRIG
**        SLV7 channel triggered by SW is only available when SM_SLV_REQ_MASK[7] is 1
**=========================================*/
#define MD_TOPSM_SM_SLV_SW_TRIG                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0454))
/*=========================================
** DBG channel for sw trigger mode:
**    SLV channel for SW trigger mode.
**    This application is only active when corresponding mask bit in SM_SLV_REQ_MASK is tie 1
**    0: enter sleep,
**    1: trigger wakeup
**    when to check ready bit:
**    When trigger 0->1, after waiging 33us to check ready bit
**    (When to trigger turn off: must confirm the req is on & ready bit is on)
**      [0:0] DBG0_SW_TRIG
**        DBG0 channel triggered by SW is only available when SM_DBG_REQ_MASK[0] is 1
**      [1:1] DBG1_SW_TRIG
**        DBG1 channel triggered by SW is only available when SM_DBG_REQ_MASK[1] is 1
**      [2:2] DBG2_SW_TRIG
**        DBG2 channel triggered by SW is only available when SM_DBG_REQ_MASK[2] is 1
**      [3:3] DBG3_SW_TRIG
**        DBG3 channel triggered by SW is only available when SM_DBG_REQ_MASK[3] is 1
**      [4:4] DBG4_SW_TRIG
**        DBG4 channel triggered by SW is only available when SM_DBG_REQ_MASK[4] is 1
**      [5:5] DBG5_SW_TRIG
**        DBG5 channel triggered by SW is only available when SM_DBG_REQ_MASK[5] is 1
**      [6:6] DBG6_SW_TRIG
**        DBG6 channel triggered by SW is only available when SM_DBG_REQ_MASK[6] is 1
**      [7:7] DBG7_SW_TRIG
**        DBG7 channel triggered by SW is only available when SM_DBG_REQ_MASK[7] is 1
**=========================================*/
#define MD_TOPSM_SM_DBG_SW_TRIG                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0458))
/*=========================================
** mas trigger channel for sw trigger mode:
**    mas trigger channel for SW trigger mode.
**    Mas trigger channel[0~3] are triggered by HW path OR SW path. (together trigger is ok)
**    Mas trigger channel[4~7] are triggered by SW path only.
**      [0:0] MAS0_SW_TRIG
**        mas trigger channel0 is also controlled by SW
**      [1:1] MAS1_SW_TRIG
**        mas trigger channel1 is also controlled by SW
**      [2:2] MAS2_SW_TRIG
**        mas trigger channel2 is also controlled by SW
**      [3:3] MAS3_SW_TRIG
**        mas trigger channel3 is also controlled by SW
**      [4:4] MAS4_SW_TRIG
**        mas trigger channel4 is only controlled by SW
**      [5:5] MAS5_SW_TRIG
**        mas trigger channel5 is only controlled by SW
**      [6:6] MAS6_SW_TRIG
**        mas trigger channel6 is only controlled by SW
**      [7:7] MAS7_SW_TRIG
**        mas trigger channel7 is only controlled by SW
**=========================================*/
#define MD_TOPSM_SM_MAS_SW_TRIG                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x045C))
/*=========================================
** mas trigger channel for sw trigger mode:
**    ignore sysclk settle time for TIMER channel. It's used if TIMER channel trigger pause command but total pause duration is not necessary to includ sysclk settle time
**      [0:0] TMR0_BYPASS_SYSCLK
**        TMR channel0 bypass sysclk
**      [1:1] TMR1_BYPASS_SYSCLK
**        TMR channel1 bypass sysclk
**      [2:2] TMR2_BYPASS_SYSCLK
**        TMR channel2 bypass sysclk
**      [3:3] TMR3_BYPASS_SYSCLK
**        TMR channel3 bypass sysclk
**      [4:4] TMR4_BYPASS_SYSCLK
**        TMR channel4 bypass sysclk
**      [5:5] TMR5_BYPASS_SYSCLK
**        TMR channel5 bypass sysclk
**      [6:6] TMR6_BYPASS_SYSCLK
**        TMR channel6 bypass sysclk
**      [7:7] TMR7_BYPASS_SYSCLK
**        TMR channel7 bypass sysclk
**=========================================*/
#define MD_TOPSM_SM_TMR_BYPASS_SYSCLK                      ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0468))
/*=========================================
** SLV channel Interrupt:
**    SLV channel irq flag and irq mask bit
**      [0:0] SLV0_INT_STA
**        0: No interrupt
**        1: Trigger SLV0 channel ready from low to high
**      [1:1] SLV1_INT_STA
**        0: No interrupt
**        1: Trigger SLV1 channel ready from low to high
**      [2:2] SLV2_INT_STA
**        0: No interrupt
**        1: Trigger SLV2 channel ready from low to high
**      [3:3] SLV3_INT_STA
**        0: No interrupt
**        1: Trigger SLV3 channel ready from low to high
**      [4:4] SLV4_INT_STA
**        0: No interrupt
**        1: Trigger SLV4 channel ready from low to high
**      [5:5] SLV5_INT_STA
**        0: No interrupt
**        1: Trigger SLV5 channel ready from low to high
**      [6:6] SLV6_INT_STA
**        0: No interrupt
**        1: Trigger SLV6 channel ready from low to high
**      [7:7] SLV7_INT_STA
**        0: No interrupt
**        1: Trigger SLV7 channel ready from low to high
**      [8:8] SLV0_INT_MASK
**        SLV0 channel interrupt mask bit
**      [9:9] SLV1_INT_MASK
**        SLV1 channel interrupt mask bit
**      [10:10] SLV2_INT_MASK
**        SLV2 channel interrupt mask bit
**      [11:11] SLV3_INT_MASK
**        SLV3 channel interrupt mask bit
**      [12:12] SLV4_INT_MASK
**        SLV4 channel interrupt mask bit
**      [13:13] SLV5_INT_MASK
**        SLV5 channel interrupt mask bit
**      [14:14] SLV6_INT_MASK
**        SLV6 channel interrupt mask bit
**      [15:15] SLV7_INT_MASK
**        SLV7 channel interrupt mask bit
**=========================================*/
#define MD_TOPSM_SM_SLV_REQ_IRQ                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0470))
/*=========================================
** DBG channel Interrupt:
**    DBG channel irq flag and irq mask bit
**      [0:0] DBG0_INT_STA
**        0: No interrupt
**        1: Trigger DBG0 channel ready from low to high
**      [1:1] DBG1_INT_STA
**        0: No interrupt
**        1: Trigger DBG1 channel ready from low to high
**      [2:2] DBG2_INT_STA
**        0: No interrupt
**        1: Trigger DBG2 channel ready from low to high
**      [3:3] DBG3_INT_STA
**        0: No interrupt
**        1: Trigger DBG3 channel ready from low to high
**      [4:4] DBG4_INT_STA
**        0: No interrupt
**        1: Trigger DBG4 channel ready from low to high
**      [5:5] DBG5_INT_STA
**        0: No interrupt
**        1: Trigger DBG5 channel ready from low to high
**      [6:6] DBG6_INT_STA
**        0: No interrupt
**        1: Trigger DBG6 channel ready from low to high
**      [7:7] DBG7_INT_STA
**        0: No interrupt
**        1: Trigger DBG7 channel ready from low to high
**      [8:8] DBG0_INT_MASK
**        DBG0 channel interrupt mask bit
**      [9:9] DBG1_INT_MASK
**        DBG1 channel interrupt mask bit
**      [10:10] DBG2_INT_MASK
**        DBG2 channel interrupt mask bit
**      [11:11] DBG3_INT_MASK
**        DBG3 channel interrupt mask bit
**      [12:12] DBG4_INT_MASK
**        DBG4 channel interrupt mask bit
**      [13:13] DBG5_INT_MASK
**        DBG5 channel interrupt mask bit
**      [14:14] DBG6_INT_MASK
**        DBG6 channel interrupt mask bit
**      [15:15] DBG7_INT_MASK
**        DBG7 channel interrupt mask bit
**=========================================*/
#define MD_TOPSM_SM_DBG_REQ_IRQ                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0478))
/*=========================================
** mas trigger channel Interrupt:
**    mas_trig channel irq flag and irq mask bit
**      [0:0] MAS0_INT_STA
**        0: No interrupt
**        1: Trigger mas trigger channel0 ready from low to high
**      [1:1] MAS1_INT_STA
**        0: No interrupt
**        1: Trigger mas trigger channel1 ready from low to high
**      [2:2] MAS2_INT_STA
**        0: No interrupt
**        1: Trigger mas trigger channel2 ready from low to high
**      [3:3] MAS3_INT_STA
**        0: No interrupt
**        1: Trigger mas trigger channel3 ready from low to high
**      [4:4] MAS4_INT_STA
**        0: No interrupt
**        1: Trigger mas trigger channel4 ready from low to high
**      [5:5] MAS5_INT_STA
**        0: No interrupt
**        1: Trigger mas trigger channel5 ready from low to high
**      [6:6] MAS6_INT_STA
**        0: No interrupt
**        1: Trigger mas trigger channel6 ready from low to high
**      [7:7] MAS7_INT_STA
**        0: No interrupt
**        1: Trigger mas trigger channel7 ready from low to high
**      [8:8] MAS0_INT_MASK
**        mas trigger channel0 interrupt mask bit
**      [9:9] MAS1_INT_MASK
**        mas trigger channel1 interrupt mask bit
**      [10:10] MAS2_INT_MASK
**        mas trigger channel2 interrupt mask bit
**      [11:11] MAS3_INT_MASK
**        mas trigger channel3 interrupt mask bit
**      [12:12] MAS4_INT_MASK
**        mas trigger channel4 interrupt mask bit
**      [13:13] MAS5_INT_MASK
**        mas trigger channel5 interrupt mask bit
**      [14:14] MAS6_INT_MASK
**        mas trigger channel6 interrupt mask bit
**      [15:15] MAS7_INT_MASK
**        mas trigger channel7 interrupt mask bit
**=========================================*/
#define MD_TOPSM_SM_MAS_REQ_IRQ                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0480))
/*=========================================
** sysclk force on:
**     sysclk force on
**      [0:0] SYSCLK_FORCE_ON
**        sysclk force on
**      [1:1] SYSCLK1_FORCE_ON
**        sysclk1 force on
**      [2:2] SYSCLK2_FORCE_ON
**        sysclk2 force on
**      [3:3] SYSCLK3_FORCE_ON
**        sysclk3 force on
**=========================================*/
#define MD_TOPSM_SW_SYSCLK_FORCE_ON                        ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x04A0))
/*=========================================
** pll force on:
**    pll force on
**      [0:0] PLL0_FORCE_ON
**        pll0 force on
**      [1:1] PLL1_FORCE_ON
**        pll1 force on
**      [2:2] PLL2_FORCE_ON
**        pll2 force on
**      [3:3] PLL3_FORCE_ON
**        pll3 force on
**      [4:4] PLL4_FORCE_ON
**        pll4 force on
**      [5:5] PLL5_FORCE_ON
**        pll5 force on
**      [6:6] PLL6_FORCE_ON
**        pll6 force on
**      [7:7] PLL7_FORCE_ON
**        pll7 force on
**      [8:8] PLL8_FORCE_ON
**        pll8 force on
**      [9:9] PLL9_FORCE_ON
**        pll9 force on
**      [10:10] PLL10_FORCE_ON
**        pll10 force on
**      [11:11] PLL11_FORCE_ON
**        pll11 force on
**      [12:12] PLL12_FORCE_ON
**        pll12 force on
**      [13:13] PLL13_FORCE_ON
**        pll13 force on
**      [14:14] PLL14_FORCE_ON
**        pll14 force on
**      [15:15] PLL15_FORCE_ON
**        pll15 force on
**=========================================*/
#define MD_TOPSM_SW_PLL_FORCE_ON                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x04B0))
/*=========================================
** timer trigger channel force on:
**    timer trigger channel force on
**      [0:0] TIMER_TRIG0_FORCE_ON
**        timer tirgger channel0 force on
**      [1:1] TIMER_TRIG1_FORCE_ON
**        timer tirgger channel1 force on
**      [2:2] TIMER_TRIG2_FORCE_ON
**        timer tirgger channel2 force on
**      [3:3] TIMER_TRIG3_FORCE_ON
**        timer tirgger channel3 force on
**=========================================*/
#define MD_TOPSM_SW_TIMER_TRIG_FORCE_ON                    ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x04D0))
/*=========================================
** timer trigger channel force on:
**    client active channel force on
**      [0:0] CLIENT_ACT0_FORCE_ON
**        client active channel0 force on
**      [1:1] CLIENT_ACT1_FORCE_ON
**        client active channel1 force on
**      [2:2] CLIENT_ACT2_FORCE_ON
**        client active channel2 force on
**      [3:3] CLIENT_ACT3_FORCE_ON
**        client active channel3 force on
**=========================================*/
#define MD_TOPSM_SW_CLIENT_ACT_FORCE_ON                    ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x04E0))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR0_STATUS
**        pwr0 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS0                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0500))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR1_STATUS
**        pwr1 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS1                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0504))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR2_STATUS
**        pwr2 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS2                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0508))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR3_STATUS
**        pwr3 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS3                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x050C))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR4_STATUS
**        pwr4 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS4                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0510))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR5_STATUS
**        pwr5 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS5                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0514))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR6_STATUS
**        pwr6 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS6                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0518))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR7_STATUS
**        pwr7 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS7                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x051C))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR8_STATUS
**        pwr8 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS8                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0520))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR9_STATUS
**        pwr9 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS9                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0524))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR10_STATUS
**        pwr10 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS10                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0528))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR11_STATUS
**        pwr11 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS11                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x052C))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR12_STATUS
**        pwr12 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS12                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0530))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR13_STATUS
**        pwr13 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS13                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0534))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR14_STATUS
**        pwr14 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS14                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0538))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR15_STATUS
**        pwr15 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS15                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x053C))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR16_STATUS
**        pwr16 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS16                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0540))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR17_STATUS
**        pwr17 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS17                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0544))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR18_STATUS
**        pwr18 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS18                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0548))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR19_STATUS
**        pwr19 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS19                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x054C))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR20_STATUS
**        pwr20 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS20                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0550))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR21_STATUS
**        pwr21 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS21                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0554))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR22_STATUS
**        pwr22 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS22                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0558))
/*=========================================
** pwr status:
**    pwr status
**      [14:0] PWR23_STATUS
**        pwr23 status (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_STATUS23                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x055C))
/*=========================================
** sysclk status:
**    sysclk status
**      [0:0] SYSCLK_RDY
**        sysclk ready (usually for debug purpose)
**      [1:1] SYSCLK1_RDY
**        sysclk1 ready (usually for debug purpose)
**      [2:2] SYSCLK2_RDY
**        sysclk2 ready (usually for debug purpose)
**      [3:3] SYSCLK3_RDY
**        sysclk3 ready (usually for debug purpose)
**      [16:16] SYSCLK_REQ
**        sysclk request (usually for debug purpose)
**      [17:17] SYSCLK1_REQ
**        sysclk1 request (usually for debug purpose)
**      [18:18] SYSCLK2_REQ
**        sysclk2 request (usually for debug purpose)
**      [19:19] SYSCLK3_REQ
**        sysclk3 request (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_SYSCLK_STA                             ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0580))
/*=========================================
** pll status:
**    pll status
**      [0:0] PLL0_RDY
**        pll0 ready (usually for debug purpose)
**      [1:1] PLL1_RDY
**        pll1 ready (usually for debug purpose)
**      [2:2] PLL2_RDY
**        pll2 ready (usually for debug purpose)
**      [3:3] PLL3_RDY
**        pll3 ready (usually for debug purpose)
**      [4:4] PLL4_RDY
**        pll4 ready (usually for debug purpose)
**      [5:5] PLL5_RDY
**        pll5 ready (usually for debug purpose)
**      [6:6] PLL6_RDY
**        pll6 ready (usually for debug purpose)
**      [7:7] PLL7_RDY
**        pll7 ready (usually for debug purpose)
**      [8:8] PLL8_RDY
**        pll8 ready (usually for debug purpose)
**      [9:9] PLL9_RDY
**        pll9 ready (usually for debug purpose)
**      [10:10] PLL10_RDY
**        pll10 ready (usually for debug purpose)
**      [11:11] PLL11_RDY
**        pll11 ready (usually for debug purpose)
**      [12:12] PLL12_RDY
**        pll12 ready (usually for debug purpose)
**      [13:13] PLL13_RDY
**        pll13 ready (usually for debug purpose)
**      [14:14] PLL14_RDY
**        pll14 ready (usually for debug purpose)
**      [15:15] PLL15_RDY
**        pll15 ready (usually for debug purpose)
**      [16:16] PLL0_REQ
**        pll0 request (usually for debug purpose)
**      [17:17] PLL1_REQ
**        pll1 request (usually for debug purpose)
**      [18:18] PLL2_REQ
**        pll2 request (usually for debug purpose)
**      [19:19] PLL3_REQ
**        pll3 request (usually for debug purpose)
**      [20:20] PLL4_REQ
**        pll4 request (usually for debug purpose)
**      [21:21] PLL5_REQ
**        pll5 request (usually for debug purpose)
**      [22:22] PLL6_REQ
**        pll6 request (usually for debug purpose)
**      [23:23] PLL7_REQ
**        pll7 request (usually for debug purpose)
**      [24:24] PLL8_REQ
**        pll8 request (usually for debug purpose)
**      [25:25] PLL9_REQ
**        pll9 request (usually for debug purpose)
**      [26:26] PLL10_REQ
**        pll10 request (usually for debug purpose)
**      [27:27] PLL11_REQ
**        pll11 request (usually for debug purpose)
**      [28:28] PLL12_REQ
**        pll12 request (usually for debug purpose)
**      [29:29] PLL13_REQ
**        pll13 request (usually for debug purpose)
**      [30:30] PLL14_REQ
**        pll14 request (usually for debug purpose)
**      [31:31] PLL15_REQ
**        pll15 request (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PLL_STA                                ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0590))
/*=========================================
** pwr_req status:
**    pwr_req status
**      [0:0] PWR0_REQ
**        hw pwr0 request (usually for debug purpose)
**      [1:1] PWR1_REQ
**        hw pwr1 request (usually for debug purpose)
**      [2:2] PWR2_REQ
**        hw pwr2 request (usually for debug purpose)
**      [3:3] PWR3_REQ
**        hw pwr3 request (usually for debug purpose)
**      [4:4] PWR4_REQ
**        hw pwr4 request (usually for debug purpose)
**      [5:5] PWR5_REQ
**        hw pwr5 request (usually for debug purpose)
**      [6:6] PWR6_REQ
**        hw pwr6 request (usually for debug purpose)
**      [7:7] PWR7_REQ
**        hw pwr7 request (usually for debug purpose)
**      [8:8] PWR8_REQ
**        hw pwr8 request (usually for debug purpose)
**      [9:9] PWR9_REQ
**        hw pwr9 request (usually for debug purpose)
**      [10:10] PWR10_REQ
**        hw pwr10 request (usually for debug purpose)
**      [11:11] PWR11_REQ
**        hw pwr11 request (usually for debug purpose)
**      [12:12] PWR12_REQ
**        hw pwr12 request (usually for debug purpose)
**      [13:13] PWR13_REQ
**        hw pwr13 request (usually for debug purpose)
**      [14:14] PWR14_REQ
**        hw pwr14 request (usually for debug purpose)
**      [15:15] PWR15_REQ
**        hw pwr15 request (usually for debug purpose)
**      [16:16] PWR16_REQ
**        hw pwr16 request (usually for debug purpose)
**      [17:17] PWR17_REQ
**        hw pwr17 request (usually for debug purpose)
**      [18:18] PWR18_REQ
**        hw pwr18 request (usually for debug purpose)
**      [19:19] PWR19_REQ
**        hw pwr19 request (usually for debug purpose)
**      [20:20] PWR20_REQ
**        hw pwr20 request (usually for debug purpose)
**      [21:21] PWR21_REQ
**        hw pwr21 request (usually for debug purpose)
**      [22:22] PWR22_REQ
**        hw pwr22 request (usually for debug purpose)
**      [23:23] PWR23_REQ
**        hw pwr23 request (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_REQ_STA                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x05A0))
/*=========================================
** pwr_ack status:
**    pwr_ack status
**      [0:0] PWR0_ACK
**        pwr0 ack (usually for debug purpose)
**      [1:1] PWR1_ACK
**        pwr1 ack (usually for debug purpose)
**      [2:2] PWR2_ACK
**        pwr2 ack (usually for debug purpose)
**      [3:3] PWR3_ACK
**        pwr3 ack (usually for debug purpose)
**      [4:4] PWR4_ACK
**        pwr4 ack (usually for debug purpose)
**      [5:5] PWR5_ACK
**        pwr5 ack (usually for debug purpose)
**      [6:6] PWR6_ACK
**        pwr6 ack (usually for debug purpose)
**      [7:7] PWR7_ACK
**        pwr7 ack (usually for debug purpose)
**      [8:8] PWR8_ACK
**        pwr8 ack (usually for debug purpose)
**      [9:9] PWR9_ACK
**        pwr9 ack (usually for debug purpose)
**      [10:10] PWR10_ACK
**        pwr10 ack (usually for debug purpose)
**      [11:11] PWR11_ACK
**        pwr11 ack (usually for debug purpose)
**      [12:12] PWR12_ACK
**        pwr12 ack (usually for debug purpose)
**      [13:13] PWR13_ACK
**        pwr13 ack (usually for debug purpose)
**      [14:14] PWR14_ACK
**        pwr14 ack (usually for debug purpose)
**      [15:15] PWR15_ACK
**        pwr15 ack (usually for debug purpose)
**      [16:16] PWR16_ACK
**        pwr16 ack (usually for debug purpose)
**      [17:17] PWR17_ACK
**        pwr17 ack (usually for debug purpose)
**      [18:18] PWR18_ACK
**        pwr18 ack (usually for debug purpose)
**      [19:19] PWR19_ACK
**        pwr19 ack (usually for debug purpose)
**      [20:20] PWR20_ACK
**        pwr20 ack (usually for debug purpose)
**      [21:21] PWR21_ACK
**        pwr21 ack (usually for debug purpose)
**      [22:22] PWR22_ACK
**        pwr22 ack (usually for debug purpose)
**      [23:23] PWR23_ACK
**        pwr23 ack (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_PWR_ACK_STA                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x05A4))
/*=========================================
** SLV channel status:
**    SLV channel status
**      [0:0] SM_SLV0_RDY
**        SLV0 channel ready
**      [1:1] SM_SLV1_RDY
**        SLV1 channel ready
**      [2:2] SM_SLV2_RDY
**        SLV2 channel ready
**      [3:3] SM_SLV3_RDY
**        SLV3 channel ready
**      [4:4] SM_SLV4_RDY
**        SLV4 channel ready
**      [5:5] SM_SLV5_RDY
**        SLV5 channel ready
**      [6:6] SM_SLV6_RDY
**        SLV6 channel ready
**      [7:7] SM_SLV7_RDY
**        SLV7 channel ready
**      [16:16] SM_SLV0_REQ
**        SLV0 channel request (usually for debug purpose)
**      [17:17] SM_SLV1_REQ
**        SLV1 channel request (usually for debug purpose)
**      [18:18] SM_SLV2_REQ
**        SLV2 channel request (usually for debug purpose)
**      [19:19] SM_SLV3_REQ
**        SLV3 channel request (usually for debug purpose)
**      [20:20] SM_SLV4_REQ
**        SLV4 channel request (usually for debug purpose)
**      [21:21] SM_SLV5_REQ
**        SLV5 channel request (usually for debug purpose)
**      [22:22] SM_SLV6_REQ
**        SLV6 channel request (usually for debug purpose)
**      [23:23] SM_SLV7_REQ
**        SLV7 channel request (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_SLV_REQ_STA                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x05C0))
/*=========================================
** DBG channel status:
**    DBG channel status
**      [0:0] SM_DBG0_RDY
**        DBG0 channel ready
**      [1:1] SM_DBG1_RDY
**        DBG1 channel ready
**      [2:2] SM_DBG2_RDY
**        DBG2 channel ready
**      [3:3] SM_DBG3_RDY
**        DBG3 channel ready
**      [4:4] SM_DBG4_RDY
**        DBG4 channel ready
**      [5:5] SM_DBG5_RDY
**        DBG5 channel ready
**      [6:6] SM_DBG6_RDY
**        DBG6 channel ready
**      [7:7] SM_DBG7_RDY
**        DBG7 channel ready
**      [16:16] SM_DBG0_REQ
**        DBG0 channel request (usually for debug purpose)
**      [17:17] SM_DBG1_REQ
**        DBG1 channel request (usually for debug purpose)
**      [18:18] SM_DBG2_REQ
**        DBG2 channel request (usually for debug purpose)
**      [19:19] SM_DBG3_REQ
**        DBG3 channel request (usually for debug purpose)
**      [20:20] SM_DBG4_REQ
**        DBG4 channel request (usually for debug purpose)
**      [21:21] SM_DBG5_REQ
**        DBG5 channel request (usually for debug purpose)
**      [22:22] SM_DBG6_REQ
**        DBG6 channel request (usually for debug purpose)
**      [23:23] SM_DBG7_REQ
**        DBG7 channel request (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_DBG_REQ_STA                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x05D0))
/*=========================================
** mas trigger channel status:
**    mas trigger channel status
**      [0:0] SM_MAS0_RDY
**        mas trigger channel0 ready
**      [1:1] SM_MAS1_RDY
**        mas trigger channel1 ready
**      [2:2] SM_MAS2_RDY
**        mas trigger channel2 ready
**      [3:3] SM_MAS3_RDY
**        mas trigger channel3 ready
**      [16:16] SM_MAS0_REQ
**        mas trigger channel0 request (usually for debug purpose)
**      [17:17] SM_MAS1_REQ
**        mas trigger channel1 request (usually for debug purpose)
**      [18:18] SM_MAS2_REQ
**        mas trigger channel2 request (usually for debug purpose)
**      [19:19] SM_MAS3_REQ
**        mas trigger channel3 request (usually for debug purpose)
**=========================================*/
#define MD_TOPSM_SM_MAS_REQ_STA                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x05E0))
/*=========================================
** topsm debug selection:
**    Specify the configurations for sw wrok around purpose, or for debug purpose application
**      [0:0] SC_FSM_EN_DBG
**        TIMER or DBG or SLV channels FSM Read enable
**      [1:1] CONFG_RESERVED1
**
**      [2:2] CONFG_RESERVED2
**
**      [3:3] CONFG_RESERVED3
**
**      [4:4] FRC_SW_DBG
**        0: normal operation
**      [5:5] FRC_SW_DISABLE_DBG
**        0: normal operation
**        1: FRC_CK always use f26m_ck
**      [6:6] SYSCLK_CK_DBG
**        0: normal operation
**        1: sysclk always force on in topsm
**      [7:7] CONFG_RESERVED7
**
**      [8:8] PLLCLK_SEL_DBG
**        0: normal operation
**        1: pll request always trigger alig with sysclk request
**      [9:9] SW_TRIG_DBG
**        the synchronizer depth for mas trigger @sw trigger mode
**        0: depth 1
**        1: depth 2
**      [10:10] PWR_ON_DFF_DLY_DBG
**        0: pwr on use delay cell (normal operation)
**        1: pwr on bypass delay cell
**      [11:11] PWR_OFF_1T
**        0: pwr off flow only cost 1T
**        1: pwr off flow cost 2T
**      [12:12] CONFG_RESERVED12
**
**      [15:13] PROBE_DBG
**        debug out signals selection
**      [16:16] SYSCLK_DLY_SEL
**        0: sysclk_req goes low not delay
**        1: sysclk _req goes low delay 1T_32K (for power off 3T application)
**      [17:17] PROTECT_ERR_LOCKEN
**        0: normal operation
**        1: when protect_rdy is 0 after specific time (general 30us) when power off, lock corresponding resource for the master and provide
**        flag for SW debug
**      [18:18] FRC_1MHZ_EN_DBG
**        0: normal operation
**        1: frc_slow_ck_en also refer to f32k_ck_sel
**      [19:19] PROT_END_N1T_SEL
**        This register is only available when PWR_OFF_1T is 0
**        0: detect protect_rdy time is adjustable (bus_prot settle time)
**        1: detect protect_rdy time is fixed after 1T_32K when protect_req asserting
**      [20:20] TIMER_TRIG_ERR_LOCK_SEL
**        0: timer trigger is not forced on when the corresponding client is getting protect lock
**        1: timer trigger will be forced on when the corresponding client is getting protect lock
**      [21:21] PWR_RDY_SEL
**        0: pwr_rdy is 1 if the power stage is in PROT or PROT_WAIT or PWR_IS_ON, otherwise it will be 0
**        1: pwr_rdy is 1 if the power stage is in PWR_IS_ON stage, otherwise it will be 0
**      [31:22] RESERVED
**
**=========================================*/
#define MD_TOPSM_SM_TOPSM_CONFG                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0600))
/*=========================================
** topsm spare register:
**    topsm spare register
**      [31:0] TOPSM_SPARE_REG
**        topsm spare register
**=========================================*/
#define MD_TOPSM_SM_TOPSM_SPARE                            ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0608))
/*=========================================
** MTCMOS Counter Base:
**
**      [3:0] MCF_CNT_BASE
**
**=========================================*/
#define MD_TOPSM_SM_TOPSM_MCF_CNT_BASE                     ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x060C))
/*=========================================
** debug monitor purpose: sysclk frequency meter:
**    Specify the configurations for debug monitor @sysclk frequency meter
**      [9:0] DBGMON_SYSCLK_FM_1
**        debug monitor purpose: frequency meter configuration
**      [25:16] DBGMON_SYSCLK_FM_2
**        debug monitor purpose: frequency meter configuration
**=========================================*/
#define MD_TOPSM_SM_DBGMON_SYSCLK_FM                       ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0610))
/*=========================================
** debug monitor purpose: sysclk frequency meter:
**    Specify the configurations for debug monitor @sysclk frequency meter
**      [0:0] DBGMON_SYSCLK_FM_EN
**        debug monitor purpose: frequency meter enable bit
**      [4:4] DBGMON_SYSCLK_FM_ERRCLR
**        debug monitor purpose: frequency meter error clear bit
**=========================================*/
#define MD_TOPSM_SM_DBGMON_SYSCLK_FM_CTRL                  ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0614))
/*=========================================
** debug monitor purpose: sysclk frequency meter:
**    Specify the flags for debug monitor @sysclk frequency meter
**      [0:0] F32K_CK_SEL
**        debug monitor purpose: f32k_ck_sel register bit
**      [1:1] DBGMON_SYSCLK_FM_ERR
**        debug monitor purpose: frequency meter error flag. When the 26m frequency (DBGMON_SYSCLK_FM_CNT) is greater than
**        DBGMON_SYSCLK_FM_2 or less than GMON_SYSCLK_FM_1 after sysclk_rdy is asserting, the error flag will be 1.
**      [25:16] DBGMON_SYSCLK_FM_CNT
**        debug monitor purpose: frequency meter counter
**=========================================*/
#define MD_TOPSM_SM_DBGMON_SYSCLK_FM_FLAG                  ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0618))
/*=========================================
** :
**
**      [0:0] USIP0_REQ0
**        topsm general purpose register0 (register control)
**      [1:1] USIP0_REQ1
**        topsm general purpose register1 (register control)
**      [2:2] USIP0_REQ2
**        topsm general purpose register2 (register control)
**      [3:3] USIP0_REQ3
**        topsm general purpose register3 (register control)
**      [4:4] USIP0_REQ4
**        topsm general purpose register4 (register control)
**      [5:5] USIP0_REQ5
**        topsm general purpose register5 (register control)
**      [6:6] USIP0_REQ6
**        topsm general purpose register6 (register control)
**      [7:7] USIP0_REQ7
**        topsm general purpose register7 (register control)
**      [8:8] USIP1_REQ0
**        topsm general purpose register8 (register control)
**      [9:9] USIP1_REQ1
**        topsm general purpose register9 (register control)
**      [10:10] USIP1_REQ2
**        topsm general purpose register10 (register control)
**      [11:11] USIP1_REQ3
**        topsm general purpose register11 (register control)
**      [12:12] USIP1_REQ4
**        topsm general purpose register12 (register control)
**      [13:13] USIP1_REQ5
**        topsm general purpose register13 (register control)
**      [14:14] USIP1_REQ6
**        topsm general purpose register14 (register control)
**      [15:15] USIP1_REQ7
**        topsm general purpose register15 (register control)
**      [16:16] RESERVED16
**        topsm general purpose register16 (register control)
**      [17:17] RESERVED17
**        topsm general purpose register17 (register control)
**      [18:18] RESERVED18
**        topsm general purpose register18 (register control)
**      [19:19] RESERVED19
**        topsm general purpose register19 (register control)
**      [20:20] RESERVED20
**        topsm general purpose register20 (register control)
**      [21:21] RESERVED21
**        topsm general purpose register21 (register control)
**      [22:22] RESERVED22
**        topsm general purpose register22 (register control)
**      [23:23] RESERVED23
**        topsm general purpose register23 (register control)
**      [24:24] RESERVED24
**        topsm general purpose register24 (register control)
**      [25:25] RESERVED25
**        topsm general purpose register25 (register control)
**      [26:26] RESERVED26
**        topsm general purpose register26 (register control)
**      [27:27] RESERVED27
**        topsm general purpose register27 (register control)
**      [28:28] PERI_CHANNEL_MASK0
**        topsm general purpose register28 (register control)
**      [29:29] PERI_CHANNEL_MASK1
**        topsm general purpose register29 (register control)
**      [30:30] PERI_CHANNEL_MASK2
**        topsm general purpose register30 (register control)
**      [31:31] PERI_CHANNEL_MASK3
**        topsm general purpose register31 (register control)
**=========================================*/
#define MD_TOPSM_SM_TOPSM_APP_OUTCR_SET                    ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0640))
/*=========================================
** :
**
**      [0:0] USIP0_REQ0
**        topsm general purpose register0 (register control)
**      [1:1] USIP0_REQ1
**        topsm general purpose register1 (register control)
**      [2:2] USIP0_REQ2
**        topsm general purpose register2 (register control)
**      [3:3] USIP0_REQ3
**        topsm general purpose register3 (register control)
**      [4:4] USIP0_REQ4
**        topsm general purpose register4 (register control)
**      [5:5] USIP0_REQ5
**        topsm general purpose register5 (register control)
**      [6:6] USIP0_REQ6
**        topsm general purpose register6 (register control)
**      [7:7] USIP0_REQ7
**        topsm general purpose register7 (register control)
**      [8:8] USIP1_REQ0
**        topsm general purpose register8 (register control)
**      [9:9] USIP1_REQ1
**        topsm general purpose register9 (register control)
**      [10:10] USIP1_REQ2
**        topsm general purpose register10 (register control)
**      [11:11] USIP1_REQ3
**        topsm general purpose register11 (register control)
**      [12:12] USIP1_REQ4
**        topsm general purpose register12 (register control)
**      [13:13] USIP1_REQ5
**        topsm general purpose register13 (register control)
**      [14:14] USIP1_REQ6
**        topsm general purpose register14 (register control)
**      [15:15] USIP1_REQ7
**        topsm general purpose register15 (register control)
**      [16:16] RESERVED16
**        topsm general purpose register16 (register control)
**      [17:17] RESERVED17
**        topsm general purpose register17 (register control)
**      [18:18] RESERVED18
**        topsm general purpose register18 (register control)
**      [19:19] RESERVED19
**        topsm general purpose register19 (register control)
**      [20:20] RESERVED20
**        topsm general purpose register20 (register control)
**      [21:21] RESERVED21
**        topsm general purpose register21 (register control)
**      [22:22] RESERVED22
**        topsm general purpose register22 (register control)
**      [23:23] RESERVED23
**        topsm general purpose register23 (register control)
**      [24:24] RESERVED24
**        topsm general purpose register24 (register control)
**      [25:25] RESERVED25
**        topsm general purpose register25 (register control)
**      [26:26] RESERVED26
**        topsm general purpose register26 (register control)
**      [27:27] RESERVED27
**        topsm general purpose register27 (register control)
**      [28:28] PERI_CHANNEL_MASK0
**        topsm general purpose register28 (register control)
**      [29:29] PERI_CHANNEL_MASK1
**        topsm general purpose register29 (register control)
**      [30:30] PERI_CHANNEL_MASK2
**        topsm general purpose register30 (register control)
**      [31:31] PERI_CHANNEL_MASK3
**        topsm general purpose register31 (register control)
**=========================================*/
#define MD_TOPSM_SM_TOPSM_APP_OUTCR_CLR                    ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0644))
/*=========================================
** :
**
**      [2:0] CORE0_DOMAIN_RDY_ST
**        topsm general purpose register (register read)
**      [3:3] SI_CORE0_PWR_REQ
**        topsm general purpose register (register read)
**      [5:4] CORE0_VDDOK_ST
**        topsm general purpose register (register read)
**      [7:6] RESERVED7_6
**        topsm general purpose register (register read)
**      [10:8] CORE1_DOMAIN_RDY_ST
**        topsm general purpose register (register read)
**      [11:11] SI_CORE1_PWR_REQ
**        topsm general purpose register (register read)
**      [13:12] CORE1_VDDOK_ST
**        topsm general purpose register (register read)
**      [15:14] RESERVED15_14
**        topsm general purpose register (register read)
**      [18:16] CM_DOMAIN_RDY_ST
**        topsm general purpose register (register read)
**      [19:19] SI_CM_PWR_REQ
**        topsm general purpose register (register read)
**      [21:20] CM_VDDOK_ST
**        topsm general purpose register (register read)
**      [23:22] RESERVED23_22
**        topsm general purpose register (register read)
**      [25:24] MDPERI_SLP_STATE
**        topsm general purpose register (register read)
**      [31:26] RESERVED31_26
**        topsm general purpose register (register read)
**=========================================*/
#define MD_TOPSM_SM_TOPSM_APP_INCR                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0670))
/*=========================================
** pwr protect error:
**    Notes:
**    For MTCMOS power on flow, pwr_protect time out value is 256T_26m. This bit will be set if time out happends. (usually last bus transition costs too long)
**      [0:0] PWR0_PWR_PROTECT_ERR
**        pwr0 pwr protect time out
**      [1:1] PWR1_PWR_PROTECT_ERR
**        pwr1 pwr protect time out
**      [2:2] PWR2_PWR_PROTECT_ERR
**        pwr2 pwr protect time out
**      [3:3] PWR3_PWR_PROTECT_ERR
**        pwr3 pwr protect time out
**      [4:4] PWR4_PWR_PROTECT_ERR
**        pwr4 pwr protect time out
**      [5:5] PWR5_PWR_PROTECT_ERR
**        pwr5 pwr protect time out
**      [6:6] PWR6_PWR_PROTECT_ERR
**        pwr6 pwr protect time out
**      [7:7] PWR7_PWR_PROTECT_ERR
**        pwr7 pwr protect time out
**      [8:8] PWR8_PWR_PROTECT_ERR
**        pwr8 pwr protect time out
**      [9:9] PWR9_PWR_PROTECT_ERR
**        pwr9 pwr protect time out
**      [10:10] PWR10_PWR_PROTECT_ERR
**        pwr10 pwr protect time out
**      [11:11] PWR11_PWR_PROTECT_ERR
**        pwr11 pwr protect time out
**      [12:12] PWR12_PWR_PROTECT_ERR
**        pwr12 pwr protect time out
**      [13:13] PWR13_PWR_PROTECT_ERR
**        pwr13 pwr protect time out
**      [14:14] PWR14_PWR_PROTECT_ERR
**        pwr14 pwr protect time out
**      [15:15] PWR15_PWR_PROTECT_ERR
**        pwr15 pwr protect time out
**      [16:16] PWR16_PWR_PROTECT_ERR
**        pwr16 pwr protect time out
**      [17:17] PWR17_PWR_PROTECT_ERR
**        pwr17 pwr protect time out
**      [18:18] PWR18_PWR_PROTECT_ERR
**        pwr18 pwr protect time out
**      [19:19] PWR19_PWR_PROTECT_ERR
**        pwr19 pwr protect time out
**      [20:20] PWR20_PWR_PROTECT_ERR
**        pwr20 pwr protect time out
**      [21:21] PWR21_PWR_PROTECT_ERR
**        pwr21 pwr protect time out
**      [22:22] PWR22_PWR_PROTECT_ERR
**        pwr22 pwr protect time out
**      [23:23] PWR23_PWR_PROTECT_ERR
**        pwr23 pwr protect time out
**=========================================*/
#define MD_TOPSM_SM_PWR_PROTECT_ERR                        ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0680))
/*=========================================
** TIMER channel FSM error:
**    TIMER channel FSM error
**      [0:0] TMR0_FSM_ERROR0
**        TIMER0 sysclk settle time, time-out
**      [1:1] TMR0_FSM_ERROR1
**        TIMER0 pll settle time, time-out
**      [2:2] TMR0_FSM_ERROR2
**        TIMER0 mas trigger channel settle time, time-out
**      [3:3] TMR0_FSM_ERROR3
**        TIMER0 pwr settle time, time-out
**      [4:4] TMR0_FSM_ERROR4
**        TIMER0 channel interface protocol error
**      [8:8] TMR1_FSM_ERROR0
**        TIMER1 sysclk settle time, time-out
**      [9:9] TMR1_FSM_ERROR1
**        TIMER1 pll settle time, time-out
**      [10:10] TMR1_FSM_ERROR2
**        TIMER1 mas trigger channel settle time, time-out
**      [11:11] TMR1_FSM_ERROR3
**        TIMER1 pwr settle time, time-out
**      [12:12] TMR1_FSM_ERROR4
**        TIMER1 channel interface protocol error
**      [16:16] TMR2_FSM_ERROR0
**        TIMER2 sysclk settle time, time-out
**      [17:17] TMR2_FSM_ERROR1
**        TIMER2 pll settle time, time-out
**      [18:18] TMR2_FSM_ERROR2
**        TIMER2 mas trigger channel settle time, time-out
**      [19:19] TMR2_FSM_ERROR3
**        TIMER2 pwr settle time, time-out
**      [20:20] TMR2_FSM_ERROR4
**        TIMER2 channel interface protocol error
**      [24:24] TMR3_FSM_ERROR0
**        TIMER3 sysclk settle time, time-out
**      [25:25] TMR3_FSM_ERROR1
**        TIMER3 pll settle time, time-out
**      [26:26] TMR3_FSM_ERROR2
**        TIMER3 mas trigger channel settle time, time-out
**      [27:27] TMR3_FSM_ERROR3
**        TIMER3 pwr settle time, time-out
**      [28:28] TMR3_FSM_ERROR4
**        TIMER3 channel interface protocol error
**=========================================*/
#define MD_TOPSM_SM_TMR_FSM_ERR0                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0690))
/*=========================================
** TIMER channel FSM error:
**    TIMER channel FSM error
**      [0:0] TMR4_FSM_ERROR0
**        TIMER4 sysclk settle time, time-out
**      [1:1] TMR4_FSM_ERROR1
**        TIMER4 pll settle time, time-out
**      [2:2] TMR4_FSM_ERROR2
**        TIMER4 mas trigger channel settle time, time-out
**      [3:3] TMR4_FSM_ERROR3
**        TIMER4 pwr settle time, time-out
**      [4:4] TMR4_FSM_ERROR4
**        TIMER4 channel interface protocol error
**      [8:8] TMR5_FSM_ERROR0
**        TIMER5 sysclk settle time, time-out
**      [9:9] TMR5_FSM_ERROR1
**        TIMER5 pll settle time, time-out
**      [10:10] TMR5_FSM_ERROR2
**        TIMER5 mas trigger channel settle time, time-out
**      [11:11] TMR5_FSM_ERROR3
**        TIMER5 pwr settle time, time-out
**      [12:12] TMR5_FSM_ERROR4
**        TIMER5 channel interface protocol error
**      [16:16] TMR6_FSM_ERROR0
**        TIMER6 sysclk settle time, time-out
**      [17:17] TMR6_FSM_ERROR1
**        TIMER6 pll settle time, time-out
**      [18:18] TMR6_FSM_ERROR2
**        TIMER6 mas trigger channel settle time, time-out
**      [19:19] TMR6_FSM_ERROR3
**        TIMER6 pwr settle time, time-out
**      [20:20] TMR6_FSM_ERROR4
**        TIMER6 channel interface protocol error
**      [24:24] TMR7_FSM_ERROR0
**        TIMER7 sysclk settle time, time-out
**      [25:25] TMR7_FSM_ERROR1
**        TIMER7 pll settle time, time-out
**      [26:26] TMR7_FSM_ERROR2
**        TIMER7 mas trigger channel settle time, time-out
**      [27:27] TMR7_FSM_ERROR3
**        TIMER7 pwr settle time, time-out
**      [28:28] TMR7_FSM_ERROR4
**        TIMER7 channel interface protocol error
**=========================================*/
#define MD_TOPSM_SM_TMR_FSM_ERR1                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0694))
/*=========================================
** TIMER channel protect err flag:
**    TIMER channel protect err
**      [0:0] TMR0_PROT_ERR
**        TIMER0 channel protect err flag
**      [1:1] TMR1_PROT_ERR
**        TIMER1 channel protect err flag
**      [2:2] TMR2_PROT_ERR
**        TIMER2 channel protect err flag
**      [3:3] TMR3_PROT_ERR
**        TIMER3 channel protect err flag
**      [4:4] TMR4_PROT_ERR
**        TIMER4 channel protect err flag
**      [5:5] TMR5_PROT_ERR
**        TIMER5 channel protect err flag
**      [6:6] TMR6_PROT_ERR
**        TIMER6 channel protect err flag
**      [7:7] TMR7_PROT_ERR
**        TIMER7 channel protect err flag
**=========================================*/
#define MD_TOPSM_SM_TMR_PROT_ERR                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0698))
/*=========================================
** SLV channel FSM error:
**    SLV channel FSM error
**      [0:0] SLV0_FSM_ERROR0
**        SLV0 sysclk settle time, time-out
**      [1:1] SLV0_FSM_ERROR1
**        SLV0 pll settle time, time-out
**      [2:2] SLV0_FSM_ERROR2
**        SLV0 mas trigger channel settle time, time-out
**      [3:3] SLV0_FSM_ERROR3
**        SLV0 pwr settle time, time-out
**      [4:4] SLV0_FSM_ERROR4
**        SLV0 channel interface protocol error
**      [8:8] SLV1_FSM_ERROR0
**        SLV1 sysclk settle time, time-out
**      [9:9] SLV1_FSM_ERROR1
**        SLV1 pll settle time, time-out
**      [10:10] SLV1_FSM_ERROR2
**        SLV1 mas trigger channel settle time, time-out
**      [11:11] SLV1_FSM_ERROR3
**        SLV1 pwr settle time, time-out
**      [12:12] SLV1_FSM_ERROR4
**        SLV1 channel interface protocol error
**      [16:16] SLV2_FSM_ERROR0
**        SLV2 sysclk settle time, time-out
**      [17:17] SLV2_FSM_ERROR1
**        SLV2 pll settle time, time-out
**      [18:18] SLV2_FSM_ERROR2
**        SLV2 mas trigger channel settle time, time-out
**      [19:19] SLV2_FSM_ERROR3
**        SLV2 pwr settle time, time-out
**      [20:20] SLV2_FSM_ERROR4
**        SLV2 channel interface protocol error
**      [24:24] SLV3_FSM_ERROR0
**        SLV3 sysclk settle time, time-out
**      [25:25] SLV3_FSM_ERROR1
**        SLV3 pll settle time, time-out
**      [26:26] SLV3_FSM_ERROR2
**        SLV3 mas trigger channel settle time, time-out
**      [27:27] SLV3_FSM_ERROR3
**        SLV3 pwr settle time, time-out
**      [28:28] SLV3_FSM_ERROR4
**        SLV3 channel interface protocol error
**=========================================*/
#define MD_TOPSM_SM_SLV_FSM_ERR0                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x06a0))
/*=========================================
** SLV channel FSM error:
**    SLV channel FSM error
**      [0:0] SLV4_FSM_ERROR0
**        SLV4 sysclk settle time, time-out
**      [1:1] SLV4_FSM_ERROR1
**        SLV4 pll settle time, time-out
**      [2:2] SLV4_FSM_ERROR2
**        SLV4 mas trigger channel settle time, time-out
**      [3:3] SLV4_FSM_ERROR3
**        SLV4 pwr settle time, time-out
**      [4:4] SLV4_FSM_ERROR4
**        SLV4 channel interface protocol error
**      [8:8] SLV5_FSM_ERROR0
**        SLV5 sysclk settle time, time-out
**      [9:9] SLV5_FSM_ERROR1
**        SLV5 pll settle time, time-out
**      [10:10] SLV5_FSM_ERROR2
**        SLV5 mas trigger channel settle time, time-out
**      [11:11] SLV5_FSM_ERROR3
**        SLV5 pwr settle time, time-out
**      [12:12] SLV5_FSM_ERROR4
**        SLV5 channel interface protocol error
**      [16:16] SLV6_FSM_ERROR0
**        SLV6 sysclk settle time, time-out
**      [17:17] SLV6_FSM_ERROR1
**        SLV6 pll settle time, time-out
**      [18:18] SLV6_FSM_ERROR2
**        SLV6 mas trigger channel settle time, time-out
**      [19:19] SLV6_FSM_ERROR3
**        SLV6 pwr settle time, time-out
**      [20:20] SLV6_FSM_ERROR4
**        SLV6 channel interface protocol error
**      [24:24] SLV7_FSM_ERROR0
**        SLV7 sysclk settle time, time-out
**      [25:25] SLV7_FSM_ERROR1
**        SLV7 pll settle time, time-out
**      [26:26] SLV7_FSM_ERROR2
**        SLV7 mas trigger channel settle time, time-out
**      [27:27] SLV7_FSM_ERROR3
**        SLV7 pwr settle time, time-out
**      [28:28] SLV7_FSM_ERROR4
**        SLV7 channel interface protocol error
**=========================================*/
#define MD_TOPSM_SM_SLV_FSM_ERR1                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x06a4))
/*=========================================
** SLV channel protect err flag:
**    SLV channel protect err
**      [0:0] SLV0_PROT_ERR
**        SLV0 channel protect err flag
**      [1:1] SLV1_PROT_ERR
**        SLV1 channel protect err flag
**      [2:2] SLV2_PROT_ERR
**        SLV2 channel protect err flag
**      [3:3] SLV3_PROT_ERR
**        SLV3 channel protect err flag
**      [4:4] SLV4_PROT_ERR
**        SLV4 channel protect err flag
**      [5:5] SLV5_PROT_ERR
**        SLV5 channel protect err flag
**      [6:6] SLV6_PROT_ERR
**        SLV6 channel protect err flag
**      [7:7] SLV7_PROT_ERR
**        SLV7 channel protect err flag
**=========================================*/
#define MD_TOPSM_SM_SLV_PROT_ERR                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x06a8))
/*=========================================
** DBG channel FSM error:
**    DBG channel FSM error
**      [0:0] DBG0_FSM_ERROR0
**        DBG0 sysclk settle time, time-out
**      [1:1] DBG0_FSM_ERROR1
**        DBG0 pll settle time, time-out
**      [2:2] DBG0_FSM_ERROR2
**        DBG0 mas trigger channel settle time, time-out
**      [3:3] DBG0_FSM_ERROR3
**        DBG0 pwr settle time, time-out
**      [4:4] DBG0_FSM_ERROR4
**        DBG0 channel interface protocol error
**      [8:8] DBG1_FSM_ERROR0
**        DBG1 sysclk settle time, time-out
**      [9:9] DBG1_FSM_ERROR1
**        DBG1 pll settle time, time-out
**      [10:10] DBG1_FSM_ERROR2
**        DBG1 mas trigger channel settle time, time-out
**      [11:11] DBG1_FSM_ERROR3
**        DBG1 pwr settle time, time-out
**      [12:12] DBG1_FSM_ERROR4
**        DBG1 channel interface protocol error
**      [16:16] DBG2_FSM_ERROR0
**        DBG2 sysclk settle time, time-out
**      [17:17] DBG2_FSM_ERROR1
**        DBG2 pll settle time, time-out
**      [18:18] DBG2_FSM_ERROR2
**        DBG2 mas trigger channel settle time, time-out
**      [19:19] DBG2_FSM_ERROR3
**        DBG2 pwr settle time, time-out
**      [20:20] DBG2_FSM_ERROR4
**        DBG2 channel interface protocol error
**      [24:24] DBG3_FSM_ERROR0
**        DBG3 sysclk settle time, time-out
**      [25:25] DBG3_FSM_ERROR1
**        DBG3 pll settle time, time-out
**      [26:26] DBG3_FSM_ERROR2
**        DBG3 mas trigger channel settle time, time-out
**      [27:27] DBG3_FSM_ERROR3
**        DBG3 pwr settle time, time-out
**      [28:28] DBG3_FSM_ERROR4
**        DBG3 channel interface protocol error
**=========================================*/
#define MD_TOPSM_SM_DBG_FSM_ERR0                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x06b0))
/*=========================================
** DBG channel FSM error:
**    DBG channel FSM error
**      [0:0] DBG4_FSM_ERROR0
**        DBG4 sysclk settle time, time-out
**      [1:1] DBG4_FSM_ERROR1
**        DBG4 pll settle time, time-out
**      [2:2] DBG4_FSM_ERROR2
**        DBG4 mas trigger channel settle time, time-out
**      [3:3] DBG4_FSM_ERROR3
**        DBG4 pwr settle time, time-out
**      [4:4] DBG4_FSM_ERROR4
**        DBG4 channel interface protocol error
**      [8:8] DBG5_FSM_ERROR0
**        DBG5 sysclk settle time, time-out
**      [9:9] DBG5_FSM_ERROR1
**        DBG5 pll settle time, time-out
**      [10:10] DBG5_FSM_ERROR2
**        DBG5 mas trigger channel settle time, time-out
**      [11:11] DBG5_FSM_ERROR3
**        DBG5 pwr settle time, time-out
**      [12:12] DBG5_FSM_ERROR4
**        DBG5 channel interface protocol error
**      [16:16] DBG6_FSM_ERROR0
**        DBG6 sysclk settle time, time-out
**      [17:17] DBG6_FSM_ERROR1
**        DBG6 pll settle time, time-out
**      [18:18] DBG6_FSM_ERROR2
**        DBG6 mas trigger channel settle time, time-out
**      [19:19] DBG6_FSM_ERROR3
**        DBG6 pwr settle time, time-out
**      [20:20] DBG6_FSM_ERROR4
**        DBG6 channel interface protocol error
**      [24:24] DBG7_FSM_ERROR0
**        DBG7 sysclk settle time, time-out
**      [25:25] DBG7_FSM_ERROR1
**        DBG7 pll settle time, time-out
**      [26:26] DBG7_FSM_ERROR2
**        DBG7 mas trigger channel settle time, time-out
**      [27:27] DBG7_FSM_ERROR3
**        DBG7 pwr settle time, time-out
**      [28:28] DBG7_FSM_ERROR4
**        DBG7 channel interface protocol error
**=========================================*/
#define MD_TOPSM_SM_DBG_FSM_ERR1                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x06b4))
/*=========================================
** DBG channel protect err flag:
**    DBG channel protect err
**      [0:0] DBG0_PROT_ERR
**        DBG0 channel protect err flag
**      [1:1] DBG1_PROT_ERR
**        DBG1 channel protect err flag
**      [2:2] DBG2_PROT_ERR
**        DBG2 channel protect err flag
**      [3:3] DBG3_PROT_ERR
**        DBG3 channel protect err flag
**      [4:4] DBG4_PROT_ERR
**        DBG4 channel protect err flag
**      [5:5] DBG5_PROT_ERR
**        DBG5 channel protect err flag
**      [6:6] DBG6_PROT_ERR
**        DBG6 channel protect err flag
**      [7:7] DBG7_PROT_ERR
**        DBG7 channel protect err flag
**=========================================*/
#define MD_TOPSM_SM_DBG_PROT_ERR                           ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x06b8))
/*=========================================
** FRC counter enable:
**    FRC counter enable
**    Notes:
**    Write 0xf2cc << 16 to update this register. Be sure to turn on FRC before using OS Timer function. Turn off FRC_CNT_EN will make system absolute time froze.
**      [0:0] FRC_CNT_EN
**        FRC counter enable
**=========================================*/
#define MD_TOPSM_FRC_CON                                   ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0800))
/*=========================================
** f32k frequency measurement:
**    Notes:
**    Using this register to update FRC_CNT when topsm is in sleep mode (count by each f32k)
**      [27:0] FRC_F32K_FM
**        f32k frequency measurement (used by FRC_CNT)
**=========================================*/
#define MD_TOPSM_FRC_F32K_FM                               ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0810))
/*=========================================
** the frame length for FRC counter:
**    the frame length for FRC counter
**      [15:0] FRC_FRAME_LEN
**        the frame length for FRC counter
**=========================================*/
#define MD_TOPSM_FRC_FRAME_LEN                             ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0820))
/*=========================================
** Current FRC value:
**    Current FRC value
**      [31:0] FRC_VAL_R
**        Current FRC value (lower part)
**=========================================*/
#define MD_TOPSM_FRC_VAL_R                                 ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0830))
/*=========================================
** Current FRC value:
**    Current FRC value
**      [7:0] FRC_VAL_R_H
**        Current FRC value (upper part)
**=========================================*/
#define MD_TOPSM_FRC_VAL_R_H                               ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0834))
/*=========================================
** Current Timestamp value:
**    Current Timestamp value
**      [25:0] FRC_TIMESTAMP
**        Current Timestamp value
**=========================================*/
#define MD_TOPSM_FRC_TIMESTAMP                             ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0840))
/*=========================================
** free run f32k counter:
**    free run f32k counter
**      [31:0] F32K_CNT
**        free run f32k counter
**=========================================*/
#define MD_TOPSM_F32K_CNT                                  ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0850))
/*=========================================
** timer sync status:
**    timer sync status
**    Notes: when source timer trigger timer_sync to topsm, topsm will store current FRC counter in corresponding TIMER_SYNC_VAL and trigger corresponding TIMER_SYNC_STATUS bit
**      [0:0] TIMER0_SYNC_STATUS
**        timer0 sync status (triggered from low to high)
**      [1:1] TIMER1_SYNC_STATUS
**        timer1 sync status (triggered from low to high)
**      [2:2] TIMER2_SYNC_STATUS
**        timer2 sync status (triggered from low to high)
**      [3:3] TIMER3_SYNC_STATUS
**        timer3 sync status (triggered from low to high)
**      [4:4] TIMER4_SYNC_STATUS
**        timer4 sync status (triggered from low to high)
**      [5:5] TIMER5_SYNC_STATUS
**        timer5 sync status (triggered from low to high)
**      [6:6] TIMER6_SYNC_STATUS
**        timer6 sync status (triggered from low to high)
**      [7:7] TIMER7_SYNC_STATUS
**        timer7 sync status (triggered from low to high)
**=========================================*/
#define MD_TOPSM_TIMER_SYNC_STATUS                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0860))
/*=========================================
** timer sync value low:
**    time sync value fraction part
**    (unit: 1us)
**      [4:0] TIMER0_SYNC_VALUE_L
**        timer0 sync value fraction part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC0_VAL_L                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0880))
/*=========================================
** timer sync value high:
**    time sync value integer part
**    (unit: 1us)
**      [31:0] TIMER0_SYNC_VALUE_H
**        timer0 sync value integer part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC0_VAL_H                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0884))
/*=========================================
** timer sync value low:
**    time sync value fraction part
**    (unit: 1us)
**      [4:0] TIMER1_SYNC_VALUE_L
**        timer1 sync value fraction part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC1_VAL_L                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0888))
/*=========================================
** timer sync value high:
**    time sync value integer part
**    (unit: 1us)
**      [31:0] TIMER1_SYNC_VALUE_H
**        timer1 sync value integer part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC1_VAL_H                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x088C))
/*=========================================
** timer sync value low:
**    time sync value fraction part
**    (unit: 1us)
**      [4:0] TIMER2_SYNC_VALUE_L
**        timer2 sync value fraction part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC2_VAL_L                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0890))
/*=========================================
** timer sync value high:
**    time sync value integer part
**    (unit: 1us)
**      [31:0] TIMER2_SYNC_VALUE_H
**        timer2 sync value integer part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC2_VAL_H                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0894))
/*=========================================
** timer sync value low:
**    time sync value fraction part
**    (unit: 1us)
**      [4:0] TIMER3_SYNC_VALUE_L
**        timer3 sync value fraction part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC3_VAL_L                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x0898))
/*=========================================
** timer sync value high:
**    time sync value integer part
**    (unit: 1us)
**      [31:0] TIMER3_SYNC_VALUE_H
**        timer3 sync value integer part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC3_VAL_H                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x089C))
/*=========================================
** timer sync value low:
**    time sync value fraction part
**    (unit: 1us)
**      [4:0] TIMER4_SYNC_VALUE_L
**        timer4 sync value fraction part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC4_VAL_L                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x08A0))
/*=========================================
** timer sync value high:
**    time sync value integer part
**    (unit: 1us)
**      [31:0] TIMER4_SYNC_VALUE_H
**        timer4 sync value integer part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC4_VAL_H                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x08A4))
/*=========================================
** timer sync value low:
**    time sync value fraction part
**    (unit: 1us)
**      [4:0] TIMER5_SYNC_VALUE_L
**        timer5 sync value fraction part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC5_VAL_L                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x08A8))
/*=========================================
** timer sync value high:
**    time sync value integer part
**    (unit: 1us)
**      [31:0] TIMER5_SYNC_VALUE_H
**        timer5 sync value integer part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC5_VAL_H                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x08AC))
/*=========================================
** timer sync value low:
**    time sync value fraction part
**    (unit: 1us)
**      [4:0] TIMER6_SYNC_VALUE_L
**        timer6 sync value fraction part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC6_VAL_L                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x08B0))
/*=========================================
** timer sync value high:
**    time sync value integer part
**    (unit: 1us)
**      [31:0] TIMER6_SYNC_VALUE_H
**        timer6 sync value integer part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC6_VAL_H                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x08B4))
/*=========================================
** timer sync value low:
**    time sync value fraction part
**    (unit: 1us)
**      [4:0] TIMER7_SYNC_VALUE_L
**        timer7 sync value fraction part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC7_VAL_L                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x08B8))
/*=========================================
** timer sync value high:
**    time sync value integer part
**    (unit: 1us)
**      [31:0] TIMER7_SYNC_VALUE_H
**        timer7 sync value integer part
**=========================================*/
#define MD_TOPSM_TIMER_SYNC7_VAL_H                         ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x08BC))
/*=========================================
** gps sync value :
**    gps sync value
**    Notes: when FRC counter is equal as gps sync value, gps sync output signal (GPS_SYNC_CON1) will be triggered. The high pulse width is 5T_26m.
**      [31:0] GPS_SYNC_CON0
**        gps sync value
**=========================================*/
#define MD_TOPSM_GPS_SYNC_CON0                             ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x08E0))
/*=========================================
** gps sync output signal :
**    gps sync output signal
**      [31:31] GPS_SYNC_CON1
**        gps sync output signal
**=========================================*/
#define MD_TOPSM_GPS_SYNC_CON1                             ((volatile kal_uint32*)(MD_TOPSM_BASE + 0x08E4))


#define MDSM_CPC_CH0_CORE_ON_SW_CTRL						((volatile kal_uint32*)(MD_CSC_BASE + 0x0000))
#define MDSM_CPC_CH0_CORE_OFF_SW_CTRL						((volatile kal_uint32*)(MD_CSC_BASE + 0x0010))
#define MDSM_CSC_CH_CORE_PAUSE_EN_W1E						((volatile kal_uint32*)(MD_CSC_BASE + 0x0020))
#define MDSM_CSC_CH_CORE_PAUSE_EN_W1C						((volatile kal_uint32*)(MD_CSC_BASE + 0x0024))

#define MDSM_CPC_CH_CORE_SEL								((volatile kal_uint32*)(MD_CSC_BASE + 0x0030))
#define MDSM_CPC_CH_ABORT_IRQ								((volatile kal_uint32*)(MD_CSC_BASE + 0x0040))
#define MDSM_CPC_CH_WAKEUP_IRQ								((volatile kal_uint32*)(MD_CSC_BASE + 0x0044))
#define MDSM_CPC_CH_ABORT_IRQ_MASK							((volatile kal_uint32*)(MD_CSC_BASE + 0x0048))
#define MDSM_CPC_CH_WAKEUP_IRQ_MASK							((volatile kal_uint32*)(MD_CSC_BASE + 0x004C))
#define MDSM_CPC_CH_CORE_PWR_ST								((volatile kal_uint32*)(MD_CSC_BASE + 0x0050))

#define MDSM_CPC_MDCMORE_CONFG								((volatile kal_uint32*)(MD_CSC_BASE + 0x0080))
#define MDSM_CPC_SPARE_REG									((volatile kal_uint32*)(MD_CSC_BASE + 0x0090))
#define MDSM_CPC_USIP0_ON_SW_CTRL							((volatile kal_uint32*)(MD_CSC_BASE + 0x0100))
#define MDSM_CPC_USIP0_OFF_SW_CTRL							((volatile kal_uint32*)(MD_CSC_BASE + 0x0110))
#define MDSM_CPC_MDCORE_PROBE_ST0							((volatile kal_uint32*)(MD_CSC_BASE + 0x0200))
#define MDSM_CPC_MDCORE_PROBE_ST1							((volatile kal_uint32*)(MD_CSC_BASE + 0x0204))

#define MDSM_CPC_MDCORE_ERR_FLAG                            ((volatile kal_uint32*)(MD_CSC_BASE + 0x0210))


/* L1 LPM: Low Power Monitor for SM/DCM */
#define L1DCM_LPM_CTRL                                      ((volatile kal_uint32*)(MDGLOBAL_DCM_BASE + 0x0080UL))
#define L1DCM_LPM_STS0                                      ((volatile kal_uint32*)(MDGLOBAL_DCM_BASE + 0x0088UL))
#define L1DCM_LPM_STS1                                      ((volatile kal_uint32*)(MDGLOBAL_DCM_BASE + 0x008CUL))
#define L1DCM_LPM_STS2                                      ((volatile kal_uint32*)(MDGLOBAL_DCM_BASE + 0x0090UL))
#define L1DCM_LPM_STS3                                      ((volatile kal_uint32*)(MDGLOBAL_DCM_BASE + 0x0094UL))
#define L1DCM_LPM_STS4                                      ((volatile kal_uint32*)(MDGLOBAL_DCM_BASE + 0x0098UL))
#define L1DCM_LPM_STS5                                      ((volatile kal_uint32*)(MDGLOBAL_DCM_BASE + 0x009CUL))

/* LPM: Read status via register */
#define DCM_STS0                                            ((volatile kal_uint32*)(MDGLOBAL_DCM_BASE + 0x0100UL))
#define DCM_STS1                                            ((volatile kal_uint32*)(MDGLOBAL_DCM_BASE + 0x0104UL))
#define DCM_STS2                                            ((volatile kal_uint32*)(MDGLOBAL_DCM_BASE + 0x0108UL))
#define DCM_STS3                                            ((volatile kal_uint32*)(MDGLOBAL_DCM_BASE + 0x010CUL))














/******************** MD_TOPSM ASSERT Macro ********************/
#ifdef  __MTK_INTERNAL__
#define MD_TOPSM_ASSERT_Bypass( st )                    EXT_ASSERT( st, 0, 0, 0 )
#define MD_TOPSM_ASSERT_Reboot( st )                    EXT_ASSERT( st, 0, 0, 0 )
#define MD_TOPSM_EXT_ASSERT_Bypass( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
#define MD_TOPSM_EXT_ASSERT_Reboot( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
#else
#define MD_TOPSM_ASSERT_Bypass( st )                    (void)0
#define MD_TOPSM_ASSERT_Reboot( st )                    EXT_ASSERT( st, 0, 0, 0 )
#define MD_TOPSM_EXT_ASSERT_Bypass( st, d1, d2, d3 )    (void)0
#define MD_TOPSM_EXT_ASSERT_Reboot( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
#endif

/******************** MD_TOPSM.c and MODEM_TOPSM.c usage ********************/
#define RM_ADDITIONAL_SETTLE    0
#define MD_DCXO_SETTLE_32K      (RM_SYS_CLK_SETTLE -4)
#define MD_ABBPLL_SETTLE_32K    0x2
#define MD_COMPENSATION_SETTLE_US_FRC ((MD_DCXO_SETTLE_32K*1000000UL)/32768)

/* PLL/PWR Settle Time */
#define RM_PLL_SETTLE       0x3

#define MD_MAX_PWR_SETTLE              0x2   /* Maximun Power Settling Time     */
//#define RM_DEBOUNCE 		    0x0   /* Debounce Time for Memory Sleep in WFI */
#define RM_BUS_PROT_SETTLE	    0xD   /* Bus Protion Settling Time 			*/
#define RM_ISO_EN_SETTLE	    0x1   /* Isolation Enable Settling Time		*/
#define RM_CLK_EN_SETTLE	    0x5   /* Clock Enable Settling Time			*/
#define RM_DIS_RST_SETTLE	    0x4   /* Disable Reset Settling Time		*/
#define RM_RST_SETTLE		    0x19   /* Rest Settling Time				*/
#define RM_WAIT_ON_SETTLE	    0x0   /* Wait On Settling Time			*/
#define RM_MCU_MEM_ISO_DIS_SETTLE   0xF   /* MCU Memory Isolation Disable Settling Time */
#define RM_MCU_MEM_UP_SETTLE	    0xF   /* MCU Memory Up Settling Time		*/
#define RM_MEM_ISO_SETTLE	    0x3   /* Memory Isolation Settling Time 		*/
#define RM_CLK_OFF_SETTLE	    0x4   /* Clock Disable Settling Time		*/
#define RM_MEM_UP_SETTLE	    0x19   /* Memory Power Up Settling Time		*/
#define RM_MEM_ISO_OFF_SETTLE	    0x2   /* Memory Isolation Disable Settling Time 	*/
#define RM_ISO_OFF_SETTLE	    0x1   /* Isolation Disable Settling Time		*/

//#define RM_DEBOUNCE          0x0   /* Debounce Time                   */


#define RM_ISO_DIS_SETTLE    0x1   /* Isolation Disable Settling Time */
#define RM_RST_DIS_SETTLE    0x4   /* Disable Reset Settling Time     */

#define SM_TRIG_SETTLE      (0x12)


#define MAX(a,b)  ( ( (a) > (b) ) ? (a) : (b) )

#define MD_RM_SYS_CLK_SETTLE         (RM_SYS_CLK_SETTLE)
#if defined(MT6765)
#define MD_MAS_TRIG_EMI_SETTLE       (0x1A)
#else
#define MD_MAS_TRIG_EMI_SETTLE       (0x12)
#endif
#define MD_MAS_TRIG_L1_COMM_SETTLE   (0xE)
#define MD_MAS_TRIG_MAX_SETTLE       MAX(MD_MAS_TRIG_EMI_SETTLE, MD_MAS_TRIG_L1_COMM_SETTLE)
#define MD_TIMER_TRIG_SETTLE         (0x4)
#define MD_MAS_TRIG_EMI_SAL          (0xA)
#define MD_MAS_TRIG_L1_COMM_SAL      (0x4)



/* Power settle is also included, this is the total settle time calculate by HW */
#define MD_RM_RESOURCE_SETTLE (MD_RM_SYS_CLK_SETTLE + 4 + MAX4(RM_PLL_SETTLE, MD_MAX_PWR_SETTLE, MD_MAS_TRIG_MAX_SETTLE, MD_TIMER_TRIG_SETTLE) + 2 + 1)

/* Resource mappging */
#define RM_SLV_SM_AP_TOPSM          0
#define RM_SLV_SM_AP_RESERVED       1
#define RM_SLV_SM_L1_TOPSM          2
#define RM_SLV_SM_L1_2G_SPEECH      3
#define RM_SLV_SM_L1_RESERVED       4

/* For 32K Calibration Mechanism */
//#define     TOPSM_LONG_FM_DURATION                (FM_DURATION+1) /* 2x(4095+1)=8192T => ideal fmResult = 6500000 @ 26M */

#define TOPSM_LONG_FM_DURATION  8192

#define MD_TOPSM_ABS(x) ((x) > 0 ? (x) : -(x))  /* Used to get the absolute value */

/*ML TODO: What's the check?*/
#if (RM_SYS_CLK_SETTLE < CLK_SETTLE)
    #error "RM_SYS_CLK_SETTLE should be larger than CLK_SETTLE"
#endif


#define CLK32K_MICRO_SECOND(n) ((int)(n*32.0/1000))
#define CLK_SETTLE CLK32K_MICRO_SECOND(5000)   // 5000 or 3125


typedef enum
{
   MD_TOPSM_INPUT_2G = 0, /* Input module is 2G */
   MD_TOPSM_INPUT_3G      /* Input module is 3G */
} MD_TOPSM_INPUT_MODULE;


typedef enum
{
   SRCLK_FORCEON_USER_SIM = 1,
   SRCLK_FORCEON_USER_GPT,
   NUM_OF_SRCLK_FORCEON_USER
} SRCLK_FORCEON_USER;


/*Global MD TOPSM data structure*/
typedef struct
{
    kal_uint16          re_K_cnt;

    volatile kal_uint32 fmResult;

	kal_bool            SRCLK_ForceOn_HandleInit;
	kal_uint32          SRCLK_ForceOn_HandleCount;
	kal_uint32          SRCLK_ForceOn_Enable; // one bit per module
	kal_char*           SRCLK_ForceOn_List[NUM_OF_SRCLK_FORCEON_USER]; // module name per handle number

	kal_bool			PLL_ForceOn_HandleInit;
	kal_uint32			PLL_ForceOn_Enable[NUM_OF_PLL_FORCEON_USER];
	kal_uint32			PLL_ForceOn_Count[NUM_OF_PS_TOPSM_PLL];
	kal_uint32	    force_on_usip_frc;
	kal_uint32	    force_on_usip_caller;
	kal_uint32	    pwr_sta_before_force_on_usip;	    
	kal_uint32	    clear_force_on_usip_frc;
	kal_uint32	    clear_force_on_usip_caller;
	kal_uint32	    pwr_sta_before_clear_force_on_usip;
} MDTOPSM_Globals;

#if defined(__MINI_LOG_SUPPORT__) && defined(__MTK_TARGET__)
typedef struct
{
   volatile kal_uint32 fmResult;
} mini_log_module_mdtopsm_struct;
#endif /* __MINI_LOG_SUPPORT__ && __MTK_TARGET__ */

/*****************************************************************************
* Functions provided by Other Module
*****************************************************************************/

/* From uscounter.c */
extern void USC_Cal_32KFM( kal_uint32 Cal_32K, kal_uint32 Cal_26M);

#endif /*__ASSEMBLER__*/
#endif /* !MD_TOPSM_PRIVATE_H*/
#endif /*__CENTRALIZED_SLEEP_MANAGER__*/

