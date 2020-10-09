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
 * ap_ostd_private.h
 *
 * Project:
 * --------
 *   MTK6280
 *
 * Description:
 * ------------
 *   This is the driver layer and corresponding Sleep Mode of AP OS Timer HW
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifdef __CENTRALIZED_SLEEP_MANAGER__

#ifndef AP_OSTD_PRIVATE_H
#define AP_OSTD_PRIVATE_H

#include "reg_base.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "AP_RM_private.h"

#ifdef __CENTRALIZED_SLEEP_MANAGER_V2__
#ifdef __AP_SLEEP_MANAGER_SUPPORT__

/*****************************************************************************
* All DEFINEs
*****************************************************************************/

/******************** Register Definition ********************/
#if defined(MT6280) || ( defined(MT6752) && defined(__MD2__) )
#define AP_OSTD_base           AP_OSTIMER_base     /* 0xA00E0000 is used for MT6280 */
#define AP_CMD_MAGIC_VALUE     0x11530000
#elif defined(MT6290)
#define AP_OSTD_base           BASE_MADDR_APOSTIMER     /* 0xA00E0000 is used for MT6280 */
#define AP_CMD_MAGIC_VALUE     0x72080000
#endif

/* Registers for AP side OS Timer. */

#if defined(MT6290)
#define AP_OST_CON             ((volatile kal_uint16*)(AP_OSTD_base+0x10))  /* OS Timer Control Register */
#else
#define AP_OST_CON             ((volatile kal_uint16*)(AP_OSTD_base+0x00))  /* OS Timer Control Register */
                               /* 0: EN */
                               /* 1: UFN_DOWN */
                               /* 2: OST_DBG: Enable OST wake-up debug function */
#endif                               
#define AP_OST_CMD             ((volatile kal_uint32*)(AP_OSTD_base+0x04))  /* OS Timer Command Register */
                               /* 0: PAUSE_START */
                               /* 1: OST_RD */
                               /* 2: OST_WR */
                               /* 13: OST_UFN_WR */
                               /* 14: OST_AFN_WR */
                               /* 15: OST_CON_WR */
#define AP_OST_STA             ((volatile kal_uint16*)(AP_OSTD_base+0x08))  /* OS Timer Command Status Register  */
                               /* 0: READY: to indicate OST is in Normal or Pause mode */
                               /* 1: CMD_CPL: to indicate OST command is completed or not */
                               /* [4:3]: to indicate a Pause request is received by HW or not */
                               /*        00=>last pause command request is not completed yet */
                               /*        01=>last pause command request is completed with OST pause mode active */
                               /*        10=>last pause command request is completed with wakeup sources */
                               /*        11=>last pause command request is completed with UFN < 2 */
                               /* 6: AFN_DLY_OVER: to indicate AFN_DLY Counter is overflow or not*/
                               /* 15: CPU_SLEEP: to indicate the processor is in sleep mode or not (For debug purpose)*/
#define AP_OST_FRM             ((volatile kal_uint32*)(AP_OSTD_base+0x0C))  /* OS Timer Frame Duration [12:0]        */
#define AP_OST_FRM_F32K        ((volatile kal_uint32*)(AP_OSTD_base+0x10))  /* OS Timer Frame Duration by 32K clock [8:0]  */
                               /* [15:12]: OST_FRM_NUM: set this value if OST_FRM < system settling time */
                               /* [8:0]: OST_FRM_F32K */
#define AP_OST_UFN             ((volatile kal_uint32*)(AP_OSTD_base+0x14))  /* OS Timer Un-alignment Frame Number [31:0]  */
#define AP_OST_AFN             ((volatile kal_uint32*)(AP_OSTD_base+0x18))  /* OS Timer Alignment Frame Number [31:0] */
#define AP_OST_AFN_DLY         ((volatile kal_uint32*)(AP_OSTD_base+0x1C))  /* OS Timer Alignment Frame Delay Number [31:0]*/
#define AP_OST_UFN_R           ((volatile kal_uint32*)(AP_OSTD_base+0x20))  /* Current OS Timer Un-alignement Frame Number [31:0] */
#define AP_OST_AFN_R           ((volatile kal_uint32*)(AP_OSTD_base+0x24))  /* Current OS Timer Alignement Frame Number [31:0] */
#define AP_OST_INT_MASK        ((volatile kal_uint16*)(AP_OSTD_base+0x30))  /* OS Timer Interrupt Mask (All default masked: disabled)       */
                               /* 0: mask of OS Timer Frame Time Out interrupt */
                               /* 1: mask of OS Timer Alignment Frame Time Out interrupt */
                               /* 2: mask of OS Timer Un-Alignment Frame Time Out interrupt */
                               /* 3: mask of OS Timer Pause Abort interrupt */
                               /* 4: mask of OS Timer Pause Interrupt interrupt */
#define AP_OST_ISR             ((volatile kal_uint16*)(AP_OSTD_base+0x40))  /* OS Timer Interrupt Status        */
                               /* 0: OS Timer Frame Time Out interrupt Status */
                               /* 1: OS Timer Alignment Frame Time Out interrupt Status */
                               /* 2: OS Timer Un-Alignment Frame Time Out interrupt Status */
                               /* 3: OS Timer Pause Abort interrupt Status */
                               /* 4: OS Timer Pause Interrupt interrupt Status */
#define AP_OST_EVENT_MASK      ((volatile kal_uint32*)(AP_OSTD_base+0x50))  /* OS Timer Event Mask (All default enabled)       */
#define AP_OST_WAKEUP_STA      ((volatile kal_uint32*)(AP_OSTD_base+0x54))  /* OS Timer Event Wakeup Status [auto-clear with source]: record the first wakeup sources       */
#define AP_OST_DBG_WAKEUP      ((volatile kal_uint32*)(AP_OSTD_base+0x60))  /* OS Timer Debug Wakeup        */


//#define AP_TOPSM_RM_PWR_CON0   ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x800))
//#define AP_TOPSM_RM_PWR_CON1   ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x804))

/*****************************************************************************
* Functions provided by AP OSTD
*****************************************************************************/
extern void AP_OSTD_Init( void );

#endif /* _AP_SLEEP_MANAGER_SUPPORT__ */
#endif /* __CENTRALIZED_SLEEP_MANAGER_V2__ */
#endif /* !AP_OSTD_PRIVATE_H*/
#endif /*__CENTRALIZED_SLEEP_MANAGER__*/
