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
 *    AP_RM_private.h
 *
 * Project:
 * --------
 *    MT6280
 *
 * Description:
 * ------------
 *    AP Resource Management (AP TOPSM) configuration.
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

#ifndef AP_RM_PRIVATE_H
#define AP_RM_PRIVATE_H

#include "md2g_drv.h"
#include "MD_TOPSM_private.h"

#ifdef __CENTRALIZED_SLEEP_MANAGER_V2__
#ifdef __AP_SLEEP_MANAGER_SUPPORT__

/******************** Register Definition ********************/
#if defined(MT6280)
#define AP_TOP_SleepMode_base  AP_TOPSM_base           /* AP_TOP_SleepMode_base : 0xA00D0000 is used for 6280 */
#elif defined(MT6290)
#define AP_TOP_SleepMode_base  BASE_MADDR_APTOPSM      /* AP_TOP_SleepMode_base : 0xFF8B0000 is used for 6290 */
#endif

/* Registers for Top-level Sleep Mode Manager. */
/************************************************************/
/* Settle time */
#ifdef MT6290
#define AP_TOPSM_RM_CLK_SETTLE                  ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x04))
/************************************************************/
/* Timer control */
#define AP_TOPSM_RM_TMR_TRG0                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x10))
#define AP_TOPSM_RM_TMR_TRG1                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x14))

#define AP_TOPSM_RM_TMR_PWR0                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x18))
#define AP_TOPSM_RM_TMR_PWR1                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x1C))

#define AP_TOPSM_RM_PERI_CON1                   ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x30))
#define AP_TOPSM_RM_PERI_CON2                   ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x34))
#define AP_TOPSM_RM_TMR_SSTA                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x40))
#define AP_TOPSM_TOPSM_DBG                      ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x50))
#define AP_TOPSM_FRC_F32K_FM                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x84))


/* Debug */
#define AP_TOPSM_CCF_CLK_CON                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x200))
/************************************************************/
/* Power on/off control(MTCMOS) */
#define AP_TOPSM_RM_PWR0_CON                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x800))
#define AP_TOPSM_RM_PWR1_CON                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x804))
#define AP_TOPSM_RM_PWR2_CON                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x808))
#define AP_TOPSM_RM_PWR3_CON                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x80C))
#define AP_TOPSM_RM_PWR4_CON                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x810))
#define AP_TOPSM_RM_PWR5_CON                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x814))
#define AP_TOPSM_RM_PWR6_CON                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x818))
#define AP_TOPSM_RM_PWR7_CON                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x81C))
#define AP_TOPSM_RM_PWR_STA                     ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x820))

#define AP_TOPSM_RM_PWR_PER0                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x824))
#define AP_TOPSM_RM_PWR_PER1                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x828))

/************************************************************/
/* Clock on/off control */
#define AP_TOPSM_RM_PLL_MASK_TIMER_REQ_0        ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x830))
#define AP_TOPSM_RM_PLL_MASK_TIMER_REQ_1        ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x834))
#define AP_TOPSM_RM_PLL_MASK_TIMER_REQ_2        ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x838))
#define AP_TOPSM_RM_PLL_MASK_TIMER_REQ_3        ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x83C))


/************************************************************/
/* Cross sleep manager */
#define AP_TOPSM_RM_SM_PLL_MASK_TOPSM_REQ_0     ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x840))
#define AP_TOPSM_RM_SM_PLL_MASK_TOPSM_REQ_1     ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x844))

#define AP_TOPSM_RM_SM_PWR                      ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x850))
#define AP_TOPSM_RM_SM_TRG_MASK                 ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x860))
#define AP_TOPSM_RM_SM_SYSCLK_MASK              ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x868))
#define AP_TOPSM_DBG_RM_SM_MASK                 ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x880))
#define AP_TOPSM_RM_SM_MASK                     ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x890))
#define AP_TOPSM_RM_SW_WAKEUP                   ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x8A0))

#define AP_TOPSM_SM_REQ_MASK                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x8B0))
#define AP_TOPSM_SM_SLV_REQ_IRQ                 ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x8C0))
#define AP_TOPSM_SM_MAS_RDY_IRQ                 ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x8D0))
#define AP_TOPSM_SM_SLV_REQ_STA                 ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x8E0))
#define AP_TOPSM_SM_MAS_REQ_STA                 ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x8F0))


#define AP_TOPSM_SM_TRIG_SETTLE0                ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x900))
/************************************************************/
/* Others */
#define AP_TOPSM_PEER_WAKEUP                    ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xB00))
#define AP2MD_PEER_WAKEUP                       (0x1 << 0)

#define AP_TOPSM_SW_CLK_FORCE_ON_FLAG           ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA04))
#define AP_TOPSM_SW_PWR_FORCE_ON_FLAG           ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA10))
#define AP_TOPSM_SW_CLK_STA                     ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA20))
#define AP_TOPSM_SW_PWR_STA                     ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA24))
#define AP_TOPSM_MCF_CNT_BASE                   ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA30))
#define AP_TOPSM_INDIV_CLK_PROTECT_ACK_MASK     ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA34))
#define AP_TOPSM_PROTECT_ACK_MASK               ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA38))

#define AP_TOPSM_SW_CLK_FORCE_ON_FLAG           ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA04))


#else
#define AP_TOPSM_RM_CLK_SETTLE         ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x00))
/************************************************************/
/* Timer control */
#define AP_TOPSM_RM_TMR_TRG0           ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x10))
#define AP_TOPSM_RM_TMR_PWR0           ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x18))
#define AP_TOPSM_RM_PERI_CON           ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x30))
#define AP_TOPSM_RM_PERI_CON1          ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x34))
#define AP_TOPSM_RM_TMR_SSTA           ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x40))
#define AP_TOPSM_TOPSM_DBG             ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x50))
/* Debug */
#define AP_TOPSM_CCF_CLK_CON           ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x200))
/************************************************************/
/* Power on/off control(MTCMOS) */
#define AP_TOPSM_RM_PWR_CON0           ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x800))
#define AP_TOPSM_RM_PWR_CON1           ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x804))
#define AP_TOPSM_RM_PWR_PER            ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x824))
/************************************************************/
/* Clock on/off control */
#define AP_TOPSM_RM_PLL_MASK0          ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x830))
#define AP_TOPSM_RM_PLL_MASK1          ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x834))
/************************************************************/
/* Cross sleep manager */
#define AP_TOPSM_RM_SM_PLL_MASK        ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x840))
#define AP_TOPSM_RM_SM_PWR             ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x850))
#define AP_TOPSM_RM_SM_TRG_MASK        ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x860))
#define AP_TOPSM_RM_SM_MASK            ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x890))
#define AP_TOPSM_SM_REQ_MASK           ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x8B0))
#define AP_TOPSM_SM_SLV_REQ_IRQ        ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x8C0))
#define AP_TOPSM_SM_MAS_RDY_IRQ        ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x8D0))
#define AP_TOPSM_SM_TRIG_SETTLE0       ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0x900))
/************************************************************/
/* Others */
#define AP_TOPSM_SW_CLK_FORCE_ON_CON   ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA00))
#define AP_TOPSM_SW_CLK_FORCE_ON_SET   ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA04))
#define AP_TOPSM_SW_CLK_FORCE_ON_CLR   ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA08))
#define AP_TOPSM_SW_CLK_STA            ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA20))
#define AP_TOPSM_SW_PWR_STA            ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA24))
#define AP_TOPSM_PROTECT_ACK_MASK      ((volatile kal_uint32*)(AP_TOP_SleepMode_base+0xA38))
#endif
#endif /* _AP_SLEEP_MANAGER_SUPPORT__ */
#endif /* __CENTRALIZED_SLEEP_MANAGER_V2__ */
#endif /* !AP_RM_PRIVATE_H*/
#endif /*__CENTRALIZED_SLEEP_MANAGER__*/
