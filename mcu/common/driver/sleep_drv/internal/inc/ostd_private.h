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
 * ostd_private.h
 *
 * Project:
 * --------
 *   MTK6276
 *
 * Description:
 * ------------
 *   This is the driver layer and corresponding Sleep Mode of ARM OS Timer HW
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
 * removed!
 *
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
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifdef __CENTRALIZED_SLEEP_MANAGER__

#ifndef OSTD_PRIVATE_H
#define OSTD_PRIVATE_H

#include "reg_base.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "intrCtrl.h"
#include "ostd_public.h"
#include "sleep_drv_internal.h"  // for sleep driver API and EXTENDED_SLEEP_HANDLE_SUPPORT
#include "sleepdrv_common.h"

/*****************************************************************************
* All DEFINEs
*****************************************************************************/
#if defined(__MAUI_BASIC__) || defined(__UDVT__)
#define IS_SW_LOAD_L1_EXIST 0 /* L1 module not exist in Basic Load and UDVT Load */
#else
#define IS_SW_LOAD_L1_EXIST 1 /* especially for UDVT */
#endif /* defined(__MAUI_BASIC__) || defined(__UDVT__) */

/******************** Step-Logging Definition ********************/
typedef enum
{
    OSTD_CHKSLP_Enter                                   = 0x01,
    OSTD_CHKSLP_CSC_Enter                               = 0x11,
    OSTD_CHKSLP_CSC_Trig_PAUSE_CMD                      = 0x12,
    OSTD_CHKSLP_CSC_In_WAIT                             = 0x1F,
    OSTD_CHKSLP_CSC_Not_In_WAIT                         = 0x1E,
    OSTD_CHKSLP_OST_Enter                               = 0x21,
    OSTD_CHKSLP_OST_Core1_NotReady                      = 0x2E,
    OSTD_CHKSLP_OST_Chk_Infinite_Sleep                  = 0x31,
    OSTD_CHKSLP_OST_RAT_Not_Infinite_Sleep              = 0x3E,
    OSTD_CHKSLP_OST_Chk_Min_SlpFrm                      = 0x41,
    OSTD_CHKSLP_OST_Less_than_Min_SlpFrm                = 0x4E,
    OSTD_CHKSLP_OST_Chk_EINT_IRQ                        = 0x51,
    OSTD_CHKSLP_OST_Detecting_EINT_IRQ                  = 0x5E,
    OSTD_CHKSLP_OST_Chk_ResReq                          = 0x61,
    OSTD_CHKSLP_OST_Detecting_ResReq                    = 0x6E,
    OSTD_CHKSLP_OST_EPOF_MaskWakeUp                     = 0x70,
    OSTD_CHKSLP_OST_Issue_PauseCmd                      = 0x71,
    OSTD_CHKSLP_OST_UFN_Less_than_Min_SlpFrm_Abort      = 0x7E,
    OSTD_CHKSLP_OST_WakeUp_Event_Abort                  = 0x7E,
    OSTD_CHKSLP_OST_PauseCmd_Successful                 = 0x81,
    OSTD_CHKSLP_OST_MaskIRQ                             = 0x82,
    OSTD_CHKSLP_OST_EFUN_RF_OFF                         = 0x91,
    OSTD_CHKSLP_OST_EPOF_RF_OFF                         = 0xA1,
    OSTD_CHKSLP_OST_EPOF_Return_Dormant                 = 0xAF,
    OSTD_CHKSLP_OST_Return_Dormant                      = 0xFF
} OSTD_ChkSlp_Step_e;

/******************** Register Definition ********************/
#define OST_BASE			   BASE_MADDR_MDOSTIMER  /* 0xBF840000 is used for 6290 CR4 */
#define CMD_MAGIC_VALUE        0x057D0000

/*=========================================
** OSTIMER Version Control Register:
**
**      [31:0] CODA_VERSION
**
**=========================================*/
#define OSTIMER_CODE_VERSION                      ((volatile kal_uint32*)(OST_BASE + 0x00))
/*=========================================
** OS Timer Control Register:
**
**      [2:0] OST_CON
**        Bit 2 : OST_DBG
**        Enable OST wakeup debug function
**        0:  Disabled
**        1:  Enabled
**        Bit 1 : UFN_DOWN
**        Enable OST_UFN Down count
**        0:  Disable OST_UFN down count
**        1:  Enable OST_UFN down count
**        Bit 0 : OST_EN
**        OS Timer Enable
**        0:  OS Timer is disabled. Then all internal timers are stop.
**        1:  OS Timer is enabled. Software has to ensure OST_AFN, OST_UFN,
**         OST_FRM are configured before enable OS Timer.
**=========================================*/
#define OST_CON                                   ((volatile kal_uint32*)(OST_BASE + 0x10))
/*=========================================
** OS Timer Command:
**
**      [15:15] UPDATE_CON
**        Update OST_CON when OST_WR command is active.
**        (key protected , should write with upper words : 16'h6291)
**      [14:14] UPDATE_AFN
**        Update OST_AFN when OST_WR command is active.
**        (key protected , should write with upper words : 16'h6291)
**      [13:13] UPDATE_UFN
**        Update OST_UFN when OST_WR command is active.
**        (key protected , should write with upper words : 16'h6291)
**      [2:0] OST_CMD
**        Bit2:OST_WR
**        Write 1 at this bit to update bus clock domain OS Timer configuration into OST SYSCLK domain
**        (key protected , should write with upper words : 16'h6291)
**        Bit1: No Use
**        Bit0 :PAUSE_STR
**        Write 1 at this bit to enable OS Timer pause function. Software has to ensure OST_CMD. OST_WR is completed before next software
**        pause sequence.
**        (key protected , should write with upper words : 16'h6291)
**=========================================*/
#define OST_CMD                                   ((volatile kal_uint32*)(OST_BASE + 0x14))
/*=========================================
** OS Timer Status:
**
**      [19:16] OST_STATE
**        OS Timer State machine
**        4'b0001: Normal (non sleep)
**        4'b0010: Pre clock-off
**        4'b0100: clock-off
**        4'b1000: Settle (handling pause interrupt)
**      [15:15] CPU_SLEEP
**        The processor is in sleep mode (For debug purpose)
**        0: active
**        1: sleep
**      [6:6] AFN_DLY_OVERFLOW
**        AFN_DLY Counter is overflow. This bit is cleared when AFN is updated.
**        0: no overflow
**        1: overflow
**      [4:3] PAUSE_REQ_ST
**        An OS timer pause request is pending. A pause command will be completed when pause command is set,
**        00: last pause command request is not completed yet (WFI not yet arrived and no wakeup source)
**        01: last pause command request is completed and OST enters pause mode
**        10: last pause command request is completed due to some wakeup source goes  high
**        11: last pause command request is completed since currunt UFN count reaches  UFN_FRM_NUM
**      [1:1] OST_CMD_BUSY
**        OST Command is complete. It take several clocks from OST_CMD is updated to command take active.
**        0: OST command is not completed
**        1: OST command is completed
**      [0:0] OST_PAUSE
**        OS Timer Status
**        0: OST is in Pause mode
**        1: OST is in normal mode
**=========================================*/
#define OST_STA                                   ((volatile kal_uint32*)(OST_BASE + 0x18))
/*=========================================
** OS Timer Frame Duration:
**
**      [13:0] OST_FRM
**        Specify OS Timer frame duration by micron second resolution.
**        The Max duration is 16ms, and Min duration is 1ms. This register should be set before OS timer is enabled. Hardware will set the
**        OST_ISR[0] periodically at frame duration period when OS timer is enable.
**=========================================*/
#define OST_FRM                                   ((volatile kal_uint32*)(OST_BASE + 0x1C))
/*=========================================
** Pause Duration:
**
**      [15:12] OST_FRM_NUM
**        1.If UFN_CNT <= OST_FRAM_NUM, the pause state will leave pre-off mode and enter off mode
**        2.OST_FRM_NUM * OST_FRM should be bigger than system settling time. (Pause Duration in unit of Frame Duration)
**      [8:0] OST_FRM_F32K
**        The Pause Duration in cycle of 32KHz, counted by TOPSM when OSTIMER in OFF state.
**        Recommanded Coversion between OST_FRM_F32K and OST_FRM_NUM :
**        OST_FRM_32k = (OST_FRM_NUM-1)*OST_FRM*(32.768K/1M) - 4
**=========================================*/
#define OST_PAUSE_DUR                             ((volatile kal_uint32*)(OST_BASE + 0x20))
/*=========================================
** OS Timer Un-Alignment Frame Number:
**
**      [31:0] OST_UFN
**        Specify OS Timer un-alignment event frame number count.
**        This register value is updated to OS timer only when OST_CMD.OST_WR is set. The read value of this register maybe is not the
**        current OS time Un-alignment Frame Number.
**        Hardware will down count OST_UFN counter at frame time out, and stop to down count when the current value is 0. OST_ISR[2] will be
**        set when OST_AFN changed from 1 to 0 at frame time out.  When OS Timer is in pause mode, this counter is still active, and wakeup
**        OS timer when the OST_UFN becoming zero at frame time out boundary.
**        Software should enable OS timer pause mode when OST_UFN is larger than OST_FRM_NUM , or the pause command will be aborted(with
**        pause abort interrupt) by Hardware.
**        OST_UFN is NOT current Hardware UFN down counter value, and Software can't read this register directly. Software can only read
**        current Frame Number thought OST_UFN_R register, and there is synchronization latency from OST_UFN to OST_UFN_R.
**=========================================*/
#define OST_UFN                                   ((volatile kal_uint32*)(OST_BASE + 0x24))
/*=========================================
** OS Timer Alignment Frame Number:
**
**      [31:0] OST_AFN
**        Specify OS Timer Alignment event frame number count.
**        This register value is updated to OS timer only when OST_CMD.OST_WR is set. The read value of this register maybe is not the
**        current OS time Alignment Frame Number.
**        Hardware will down count OST_AFN counter at frame time out, and stop to down count when the current value is 0. OST_ISR[1] will be
**        set when OST_AFN changed from 1 to 0 at frame time out when OS timer is in normal mode.
**        OST_AFN is NOT current Hardware AFN down counter value, and Software can't read this register directly. Software can only read
**        current Frame Number thought OST_AFN_R register, and there is synchronization latency from OST_AFN to OST_AFN_R.
**=========================================*/
#define OST_AFN                                   ((volatile kal_uint32*)(OST_BASE + 0x28))
/*=========================================
** OS Timer Alignment Frame Delay Number Count:
**
**      [31:0] OST_AFN_DLY
**        (No Reset Default Value)
**        This register specifies the OS Timer Alignment event frame delay count due to OS timer pause mode. This register will be
**        automatically updated. The uncerntainty between this value and real value in OS Timer is one frame.
**=========================================*/
#define OST_AFN_DLY                               ((volatile kal_uint32*)(OST_BASE + 0x2C))
/*=========================================
** Current OS Timer Un-Alignment Frame Number:
**
**      [31:0] UFN_CNT_R
**        (No Reset Default Value)
**        This register specifies the OS Timer current Un-Alignment frame number. This register will be automatically updated. The
**        uncertainty between this value and real value in OS Timer is one frame.
**=========================================*/
#define OST_UFN_R                                 ((volatile kal_uint32*)(OST_BASE + 0x30))
/*=========================================
** Current OS Timer Alignment Frame Number:
**
**      [31:0] AFN_CNT_R
**        (No Reset Default Value)
**        This register specifies the OS Timer current Alignment frame number. This register will be automatically updated. The uncertainty
**        between this value and real value in OS Timer is one frame.
**=========================================*/
#define OST_AFN_R                                 ((volatile kal_uint32*)(OST_BASE + 0x34))
/*=========================================
** OST TIMER Counter:
**
**      [31:0] OST_TIMER_CNT_R
**        (No Reset Default Value)
**        Start Count when ostimer enable, unit is one os tick and count from 0, reset to 0 when OS timer disable. This register will be
**        automatically updated. The uncertainty between this value and real value in OS Timer is one frame.
**=========================================*/
#define OST_TIMER_CNT_R                           ((volatile kal_uint32*)(OST_BASE + 0x38))
/*=========================================
** OS Timer Interrupt Mask:
**
**      [4:0] OST_INT_MASK
**        This register specifies the OS Timer interrupt mask control. (1 means mask enable)
**        Bit 0: mask OS Timer Frame Time Out interrupt
**        Bit 1: mask OS Timer Alignment Frame Time Out interrupt
**        Bit 2: mask OS Timer Un-Alignment Frame Time Out interrupt
**        Bit 3: mask OS Timer Pause Abort interrupt
**        Bit 4: mask OS Timer Pause Interrupt interrupt
**=========================================*/
#define OST_INT_MASK                              ((volatile kal_uint32*)(OST_BASE + 0x40))
/*=========================================
** OSTIMER Trigger Watch Dog Reset:
**
**      [0:0] reg_en_ostimer_trig_watch_dog_reset
**        Enable Ostimer trigger Watch Dog reset after F32k_wakeup_event (1T f32k_ck pulse)
**        (key protected , should write with upper words : 16'h6291)
**        (no use in this project)
**=========================================*/
#define OSTIMER_TRIG_WATCH_DOG_RESET              ((volatile kal_uint32*)(OST_BASE + 0x44))
/*=========================================
** OS Timer Interrupt Status:
**
**      [4:0] OST_ISR
**        BIT0 : OS Timer Frame Time Out interrupt Status
**        BIT1 : OS Timer Alignment Frame Time Out interrupt Status
**        BIT2 : OS Timer Un-Alignment Frame Time Out interrupt Status
**        BIT3 : OS Timer Pause Abort interrupt Status
**        BIT4 : OS Timer Pause Interrupt interrupt Status
**        This register specifies the OS Timer interrupt status. Software has write 1 at the corresponding bit to clear the interrupt status
**        bit. OSR_ISR[2-0] are also cleared when OSR_WR command is executed and AFN, UFN are updated
**=========================================*/
#define OST_ISR                                   ((volatile kal_uint32*)(OST_BASE + 0x50))
/*=========================================
** OST F32K Wakeup Event Mask:
**
**      [31:0] OST_F32K_EVENT_MASK_31_0
**        Specify which wakeup event will be masked to wakeup OS timer during OS timer pause mode. (for wakeup source 31~0)
**=========================================*/
#define OST_F32K_EVENT_MASK_1                     ((volatile kal_uint32*)(OST_BASE + 0x60))
/*=========================================
** OST F32K Wakeup Event Mask:
**
**      [31:0] OST_F32K_EVENT_MASK_63_32
**        Specify which wakeup event will be masked to wakeup OS timer during OS timer pause mode. (for wakeup source 63~32)
**=========================================*/
#define OST_F32K_EVENT_MASK_2                     ((volatile kal_uint32*)(OST_BASE + 0x64))
/*=========================================
** OST F32K Wakeup Event Status:
**
**      [31:0] OST_F32K_WAKEUP_STA_31_0
**        OST F32K Wakeup Event Status (for wakeup source 31~0)
**=========================================*/
#define OST_F32K_WAKEUP_STA_1                     ((volatile kal_uint32*)(OST_BASE + 0x70))
/*=========================================
** OST F32K Wakeup Event Status:
**
**      [31:0] OST_F32K_WAKEUP_STA_63_32
**        OST F32K Wakeup Event Status (for wakeup source 63~32)
**=========================================*/
#define OST_F32K_WAKEUP_STA_2                     ((volatile kal_uint32*)(OST_BASE + 0x74))
/*=========================================
** OST NON-F32K Wakeup Event Mask:
**
**      [31:0] OST_NON_F32K_EVENT_MASK_31_0
**        Specify which wakeup event will be masked to wakeup OS timer before OS timer pause mode, just for sleep protection (for wakeup
**        source 31~0)
**=========================================*/
#define OST_NON_F32K_EVENT_MASK_1                 ((volatile kal_uint32*)(OST_BASE + 0x80))
/*=========================================
** OST NON-F32K Wakeup Event Mask:
**
**      [31:0] OST_NON_F32K_EVENT_MASK_63_42
**        Specify which wakeup event will be masked to wakeup OS timer before OS timer pause mode, just for sleep protection (for wakeup
**        source 63~32)
**=========================================*/
#define OST_NON_F32K_EVENT_MASK_2                 ((volatile kal_uint32*)(OST_BASE + 0x84))
/*=========================================
** OST Non-F32K Wakeup Event Status:
**
**      [31:0] OST_NON_F32K_WAKEUP_STA_31_0
**        OST Non-F32K Wakeup Event Status (for wakeup source 31~0)
**=========================================*/
#define OST_NON_F32K_WAKEUP_STA_1                 ((volatile kal_uint32*)(OST_BASE + 0x90))
/*=========================================
** OST Non-F32K Wakeup Event Status:
**
**      [31:0] OST_NON_F32K_WAKEUP_STA_63_32
**        OST Non-F32K Wakeup Event Status (for wakeup source 63~32)
**=========================================*/
#define OST_NON_F32K_WAKEUP_STA_2                 ((volatile kal_uint32*)(OST_BASE + 0x94))
/*=========================================
** OST Non-F32K Wakeup Event Status:
**
**      [31:0] OST_NON_F32K_WAKEUP_STA_31_0
**        Wakeup source level polarity selection (for wakeup source 31~0)
**        0: normal polarity
**        1: inverse polarity
**=========================================*/
#define OST_WAKEUP_POLARITY_1                     ((volatile kal_uint32*)(OST_BASE + 0xA0))
/*=========================================
** OST Non-F32K Wakeup Event Status:
**
**      [31:0] OST_NON_F32K_WAKEUP_STA_63_32
**        Wakeup source level polarity selection (for wakeup source 63~32)
**        0: normal polarity
**        1: inverse polarity
**=========================================*/
#define OST_WAKEUP_POLARITY_2                     ((volatile kal_uint32*)(OST_BASE + 0xA4))
/*=========================================
** OS Timer Debug Wakeup:
**
**      [31:31] CIRQ_MASK_EN
**        CIRQ_MASK_EN
**        0: disable cirq mask function
**        1: enable cirq mask function
**      [1:1] OST_DBG_F32K_WAKEUP
**        Control wakeup status in debug F32K Wakeup Event
**      [0:0] OST_DBG_NON_F32K_WAKEUP
**        Control wakeup status in debug Non-F32K Wakeup Event
**=========================================*/
#define OST_DBG_WAKEUP                            ((volatile kal_uint32*)(OST_BASE + 0xB0))
/*=========================================
** OS Timer Debug Wakeup:
**
**      [0:0] OST_SLEEP_WO_WFI
**        Decide wheather cpu_sleep is refernced when request for puase.
**        (ONLY FOR DEBUG PURPOSE)
**        0: cpu_sleep(WFI) signal is needed
**        1. cpu_sleep(WFI) signal is BYPASSed
**=========================================*/
#define OST_SLEEP_WO_WFI                          ((volatile kal_uint32*)(OST_BASE + 0xB4))
/*=========================================
** OST_DBG_SEL:
**
**      [31:24] dbg_flag_sel3
**        Select OST Debug Flag Bit 31-24
**      [23:16] dbg_flag_sel2
**        Select OST Debug Flag Bit 23-16
**      [15:8] dbg_flag_sel1
**        Select OST Debug Flag Bit15-8
**      [7:0] dbg_flag_sel0
**        Select OST Debug Flag Bit 7-0
**=========================================*/
#define OST_DBG_SEL                               ((volatile kal_uint32*)(OST_BASE + 0xF0))
/*=========================================
** DUMMY_REG:
**
**      [31:0] DUMMY1_REG
**        Dummy register
**=========================================*/
#define OST_DUMMY0_REG                                ((volatile kal_uint32*)(OST_BASE + 0x200))
/*=========================================
** DUMMY_REG:
**
**      [31:0] DUMMY2_REG
**        Dummy register
**=========================================*/
#define OST_DUMMY1_REG                                ((volatile kal_uint32*)(OST_BASE + 0x204))
/*=========================================
** DUMMY_REG:
**
**      [31:0] DUMMY3_REG
**        Mirrored Value of AFN count
**        This is a back up solution of OST_AFN_R if the original one can't be read properly. When using this backup register, MUST READ IT
**        TWICE AND CHECK IF BOTH READBACK VALUE ARE THE SAME.
**=========================================*/
#define OST_DUMMY2_REG                                ((volatile kal_uint32*)(OST_BASE + 0x208))


/******************** OSTD ASSERT Macro ********************/
   #define OSTD_ASSERT_Bypass( st )                    (void)0
   #define OSTD_ASSERT_Bypass_Trace( st )              if(!(st)) EXT_ASSERT( 0, 0, 0, 0 ) // MODEM_WARNING_MESSAGE( 0, "[L1SM]" )
   #define OSTD_ASSERT_Reboot( st )                    if(!(st)) EXT_ASSERT( 0, 0, 0, 0 )
   #define OSTD_EXT_ASSERT_Bypass( st, d1, d2, d3 )    (void)0
   #define OSTD_EXT_ASSERT_Reboot( st, d1, d2, d3 )    if(!(st)) EXT_ASSERT( 0, d1, d2, d3 )

#ifdef  __MTK_INTERNAL__
   #undef  OSTD_ASSERT_Bypass
   #undef  OSTD_EXT_ASSERT_Bypass
   #define OSTD_ASSERT_Bypass( st )                    if(!(st)) EXT_ASSERT( 0, 0, 0, 0 )
   #define OSTD_EXT_ASSERT_Bypass( st, d1, d2, d3 )    if(!(st)) EXT_ASSERT( 0, d1, d2, d3 )
#endif

#ifdef L1_SIM
   #undef  OSTD_ASSERT_Bypass_Trace
   #define OSTD_ASSERT_Bypass_Trace( st )              if(!(st)) ASSERT( 0 )
#endif

/******************** ostd.c internal usage ********************/

#define OST_MAX_WAIT_TIME       1000 /* Based on designer's guarantee, the wait time for CMD ACK should be less than 1us. (MIPS clock is 900MHz, but designer suggests 1000) */
#define OST_MAX_SLEEP_UFN       3460 /* 16 sec => 16/4.615 = 3466.67  (for UDVT not care about WatchDog) */


/* 26M debug FRC */
#define MAX_FRC_VAL             0xFFFFFFFF


/*****************************************************************************
* Pre-defined Structure or Extern Global Variable
*****************************************************************************/

/*Global OST Test data structure*/
typedef struct
{
   kal_uint32 InPauseCnt; /* To record how many times if OST SW want to go to sleep and OST HW is still in Pause Mode. */
} OST_Test_Globals;

/*Global OSTD & its SMM data structure*/
typedef struct
{
/* Global Info. */
   kal_bool             sleeped;
   volatile kal_uint16  ost_isr_sta;
   kal_bool             irq_masked;     /* Record if IRQ already masked for wake-up INT scheme. (polling scheme not needed). */
   CIRQ_MASK_VALUE_T    irq_mask_sm;
   CIRQ_MASK_VALUE_T    SleepModeMask;

   kal_bool            Enable_3G;      /* E-FUSE for 3G feature */

   /* Infinite Sleep related */
   kal_bool             infinite_sleep_ind[OSTD_TIMER_MAX];
   kal_bool             infinite_sleep;
   kal_uint32           infinite_sleep_Lockhandle;

   /* enter Flight mode (AT+EFUN=0) */
   volatile kal_bool    Radio_On;
   volatile kal_bool    MML1_RF_On;
   volatile kal_bool    Efun_Assert_Timer_On;
   volatile kal_bool    Efun_Assert_Timer_On_SlpAbrt;
   volatile kal_bool    Efun_Assert_Timer_On_SlpAbrt_Bypass;
   volatile kal_bool    Efun_Assert_Timer_On_EnterCheckSleep[2];
   kal_uint32           Preliminary_SleepDisable_Core0[(MAX_SLEEP_HANDLE+31)/32];
   kal_uint32           Preliminary_SleepDisable_Core1[(MAX_SLEEP_HANDLE+31)/32];
   kal_uint32           Radio_On_time_FMA_64;
   kal_uint32           Radio_Off_time_FMA_64;
   kal_uint32           EFUN_Done_time_FMA_64;
   kal_uint32           EPOF_Done_time_FMA_64;
   kal_uint32           efun_ok_timeStamp;
   kal_uint32           epof_ok_timeStamp;
   kal_timerid          efun_timer_id_preliminary;
   kal_timerid          efun_timer_id;
   kal_timerid          epof_timer_id;
   kal_uint32           Efun_Assert_Slept_Cnt_Old;

/* Setting of System Settling Time */
   kal_uint16          curr_Settle;    /* Unit: 32K cycles */

/* Debug pool */
   kal_uint32          last_TimeStamp;
   kal_uint32          last_TimeStamp_LockMod; // for display lock module
   kal_uint32          last_TimeStamp_FMA_64;
   kal_uint32	       TimeStamp_FMA_64_Pre;
   kal_uint32	       TimeStamp_FMA_64_Aft;

   OSTD_FRM_INFO_T     Frm_Info_Pre;   /* log the AFN/UFN before sleeping */
   OSTD_FRM_INFO_T     Frm_Info_After; /* log the AFN/UFN after wakeup */
   kal_uint32          Minimum_slp_ufn;
   kal_uint32	       f32k_ratio;
   kal_uint32          wakeup_by_who;

   kal_uint32          FRC_Pre;        /* log the FRC before sleeping */
   kal_uint32          FRC_After;      /* log the FRC after wakeup */
   kal_uint32          slept_cnt;
   
   kal_uint32          FRC_Pre_s;      //if enter sleep successfully
   kal_uint32          FRC_After_s;    //if enter sleep successfully
   kal_uint32          slept_cnt_s;    //if enter sleep successfully
   
   kal_uint32          FRC_sleep_dur;
   kal_uint32          FRC_active_dur;

   kal_uint32          md_sysclk_cnt_total;

   kal_uint32          FrmTimeOut_cnt; /* To record the time-out count of Frame Time Out */
   kal_uint32          AfnTimeOut_cnt; /* To record the time-out count of AFN Time Out */
   kal_uint32          UfnTimeOut_cnt; /* To record the time-out count of UFN Time Out */
   kal_uint32          SleepAbort_cnt[MIPS_CORE_NUMBER]; /* To record the time-out count of Sleep Abort */
   kal_uint32          SleepInt_cnt[MIPS_CORE_NUMBER];   /* To record the time-out count of Sleep Interrupt */

   kal_bool            stress;         /* RTOS stress test from inject string/at command */

#if defined( __LTE_RAT__ )
   kal_bool            stress4GWakeup; /* 4G S/W wakeup stress test from inject string/at command */
#endif

   kal_uint32          idle_timestamp;

   kal_uint32          Dbg_Pwr_OFF_Recored;
   kal_uint32          md_sysclk_cnt;    //if md_sysclk is in off state (unit : 32k)
   kal_uint32          all_sysclk_cnt;   //if all_sysclk is in off state (unit : 32k)
   kal_uint32          acc_cnt;          //For HTC
   kal_uint32          acc_time;         //For HTC
   kal_uint32          acc_time_2;       //For Android N

   kal_uint32		   eint_not_clr_cnt;
   kal_uint32		   ssta_not_idle_cnt;
   
   //volatile kal_int32  UnmaskIRQ_Counter; 

} OSTD_Globals;

#if defined(__MINI_LOG_SUPPORT__) && defined(__MTK_TARGET__)
typedef struct
{
   kal_bool            sleeped;
   kal_bool            irq_masked;     /* Record if IRQ already masked for wake-up INT scheme. (polling scheme not needed). */

   volatile kal_uint16 ost_isr_sta;

   kal_uint16          curr_Settle;    /* Unit: 32K cycles */
   IRQ_MASK_VALUE_T    irq_mask_sm;
   OSTD_FRM_INFO_T     Frm_Info_Pre;   /* log the AFN/UFN before sleeping */
   OSTD_FRM_INFO_T     Frm_Info_After; /* log the AFN/UFN after wakeup */
   kal_uint32          last_TimeStamp;
   kal_uint32          wakeup_by_who;
   kal_uint32          FRC_Pre;        /* log the FRC before sleeping */
   kal_uint32          FRC_After;      /* log the FRC after wakeup */
   kal_uint32          FRC_sleep_dur;
   kal_uint32          slept_cnt;
} mini_log_module_ostd_struct;
#endif /* __MINI_LOG_SUPPORT__ && __MTK_TARGET__ */

#define OSTD_CHKSLP_DEBUG_HISTORY_MAX 40
typedef struct
{
    kal_uint32  Timestamp;
    kal_uint32  Action;
} OSTD_ChkSlp_Debug;

/* From L1D : for customer revise */
extern const kal_uint16 CLK_SETTLE;
#if 0 /*TK6291_MIPS: remove FM_DURATION which is already declared in fm.h */
/* under construction !*/
#endif


/*****************************************************************************
* Functions provided by OSTD
*****************************************************************************/
extern void OSTD_Interrupt( void );
extern void OSTD_MaskIRQ( void );
void OSTD_ChkSlp_StepLogging(kal_uint32, OSTD_ChkSlp_Step_e);

/*****************************************************************************
* Functions provided by Other Module
*****************************************************************************/

/* From RTOS */
extern void SleepMode_MaskAll(CIRQ_MASK_VALUE_T *val);
extern void SleepMode_RestoreAll(CIRQ_MASK_VALUE_T *val);
extern kal_uint32 SaveAndSetIRQMask(void);
extern void RestoreIRQMask(kal_uint32);
extern void TMC_Timer_Interrupt(void);

/* From uscounter.c */
#include "us_timer.h"

#endif /* !OSTD_PRIVATE_H */
#endif /* __CENTRALIZED_SLEEP_MANAGER__ */
