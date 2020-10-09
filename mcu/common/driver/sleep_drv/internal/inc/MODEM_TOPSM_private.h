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
 *    MODEM_TOPSM_private.h
 *
 * Project:
 * --------
 *    MT6250
 *
 * Description:
 * ------------
 *    Modem Resource Management (Modem TOPSM) configuration.
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

#ifndef MODEM_TOPSM_PRIVATE_H
#define MODEM_TOPSM_PRIVATE_H

// #include "MD_TOPSM_private.h"
#include "reg_base.h"
#include "sleepdrv_common.h"
#include "sleepdrv_interface.h"
#include "RM_public.h"
 
#if defined(MT6276) || defined(MT6573) || defined(MT6575) || defined(MT6577)
   /* Only one TOPSM */
#else /* After MT6250 */
#define __CENTRALIZED_SLEEP_MANAGER_V2__
#endif
 
#ifdef __CENTRALIZED_SLEEP_MANAGER_V2__

#if defined(MT6595)
#define MODEM_TOPSM_EMI_REQUEST_CONTRIL
#endif

/******************** Register Definition ********************/
#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#if 0 /* Lanslo: Since Strike is porting XL1SIM to UMOLY, we remove this temp redefinction for XL1SIM to align UMOLY target and this change is done together with L1. */
   #if defined(L1_SIM) 
/* under construction !*/
   #endif
#endif /* if 0 */
#if defined(L1_SIM) 
   #define TOP_SleepMode_base      MODEM_TOPSM_base  /* Notice this register base MUST always align with L1. */
#endif
#endif


#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)  /*address definition*/

#define MODEM_TOPSM_SM_PWR_CON0              ((volatile kal_uint32*)(MODEM_TOPSM_base+0x00)) 
#define MODEM_TOPSM_SM_PWR_CON1              ((volatile kal_uint32*)(MODEM_TOPSM_base+0x04)) 
#define MODEM_TOPSM_SM_PWR_CON2              ((volatile kal_uint32*)(MODEM_TOPSM_base+0x08)) 
#define MODEM_TOPSM_SM_PWR_CON3              ((volatile kal_uint32*)(MODEM_TOPSM_base+0x0C)) 
#define MODEM_TOPSM_SM_PWR_CON4              ((volatile kal_uint32*)(MODEM_TOPSM_base+0x10)) 
#define MODEM_TOPSM_SM_PWR_CON5              ((volatile kal_uint32*)(MODEM_TOPSM_base+0x14)) 
#define MODEM_TOPSM_SM_PWR_CON6              ((volatile kal_uint32*)(MODEM_TOPSM_base+0x18)) 
#define MODEM_TOPSM_SM_PWR_CON7              ((volatile kal_uint32*)(MODEM_TOPSM_base+0x1C)) 

// not exist in 93, should remove later
#define MODEM_TOPSM_SM_PWR_CON8              ((volatile kal_uint32*)(MODEM_TOPSM_base+0x20)) 
#define MODEM_TOPSM_SM_PWR_CON9              ((volatile kal_uint32*)(MODEM_TOPSM_base+0x24)) 
#define MODEM_TOPSM_SM_PWR_CON10             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x28)) 
#define MODEM_TOPSM_SM_PWR_CON11             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x2C)) 
#define MODEM_TOPSM_SM_PWR_CON12             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x30)) 
#define MODEM_TOPSM_SM_PWR_CON13             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x34)) 
#define MODEM_TOPSM_SM_PWR_CON14             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x38)) 
#define MODEM_TOPSM_SM_PWR_CON15             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x3C)) 
#define MODEM_TOPSM_SM_PWR_CON16             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x40)) 
#define MODEM_TOPSM_SM_PWR_CON17             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x44)) 
#define MODEM_TOPSM_SM_PWR_CON18             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x48)) 
#define MODEM_TOPSM_SM_PWR_CON19             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x4C)) 
#define MODEM_TOPSM_SM_PWR_CON20             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x50)) 
#define MODEM_TOPSM_SM_PWR_CON21             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x54)) 
#define MODEM_TOPSM_SM_PWR_CON22             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x58)) 
#define MODEM_TOPSM_SM_PWR_CON23             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x5C)) 

#define MODEM_TOPSM_SM_PWR_ON_SW_CTRL0       ((volatile kal_uint32*)(MODEM_TOPSM_base+0x80)) 
#define MODEM_TOPSM_SM_PWR_ON_SW_CTRL1       ((volatile kal_uint32*)(MODEM_TOPSM_base+0x84)) 
#define MODEM_TOPSM_SM_PWR_ON_SW_CTRL2       ((volatile kal_uint32*)(MODEM_TOPSM_base+0x88)) 
#define MODEM_TOPSM_SM_PWR_ON_SW_CTRL3       ((volatile kal_uint32*)(MODEM_TOPSM_base+0x8C)) 
#define MODEM_TOPSM_SM_PWR_OFF_SW_CTRL0      ((volatile kal_uint32*)(MODEM_TOPSM_base+0xA0)) 
#define MODEM_TOPSM_SM_PWR_OFF_SW_CTRL1      ((volatile kal_uint32*)(MODEM_TOPSM_base+0xA4)) 
#define MODEM_TOPSM_SM_PWR_OFF_SW_CTRL2      ((volatile kal_uint32*)(MODEM_TOPSM_base+0xA8)) 
#define MODEM_TOPSM_SM_PWR_OFF_SW_CTRL3      ((volatile kal_uint32*)(MODEM_TOPSM_base+0xAC)) 
#define MODEM_TOPSM_SM_PWR_PER0              ((volatile kal_uint32*)(MODEM_TOPSM_base+0xC0)) 
#define MODEM_TOPSM_SM_PWR_PER1              ((volatile kal_uint32*)(MODEM_TOPSM_base+0xC4)) 
#define MODEM_TOPSM_SM_PWR_SW_CTRL_SEL       ((volatile kal_uint32*)(MODEM_TOPSM_base+0xCC)) 
#define MODEM_TOPSM_SM_PWR_RDY_REG           ((volatile kal_uint32*)(MODEM_TOPSM_base+0xD0)) 
#define MODEM_TOPSM_SM_PWR_RDY               ((volatile kal_uint32*)(MODEM_TOPSM_base+0xD4)) 

#define MODEM_TOPSM_SM_TMR_REQ_MASK          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x100))
#define MODEM_TOPSM_SM_TMR_SYSCLK_MASK       ((volatile kal_uint32*)(MODEM_TOPSM_base+0x108))
#define MODEM_TOPSM_SM_TMR_PLL_MASK0         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x120))
#define MODEM_TOPSM_SM_TMR_PLL_MASK1         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x124))
#define MODEM_TOPSM_SM_TMR_PLL_MASK2         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x128))
#define MODEM_TOPSM_SM_TMR_PLL_MASK3         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x12C))
#define MODEM_TOPSM_SM_TMR_PWR_MASK0         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x140))
#define MODEM_TOPSM_SM_TMR_PWR_MASK1         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x144))
#define MODEM_TOPSM_SM_TMR_PWR_MASK2         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x148))
#define MODEM_TOPSM_SM_TMR_PWR_MASK3         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x14C))
#define MODEM_TOPSM_SM_TMR_PWR_MASK4         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x150))
#define MODEM_TOPSM_SM_TMR_PWR_MASK5         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x154))
#define MODEM_TOPSM_SM_TMR_MAS_TRIG_MASK0    ((volatile kal_uint32*)(MODEM_TOPSM_base+0x160))
#define MODEM_TOPSM_SM_TMR_MAS_TRIG_MASK1    ((volatile kal_uint32*)(MODEM_TOPSM_base+0x164))
#define MODEM_TOPSM_SM_TMR_TIMER_TRIG_MASK0  ((volatile kal_uint32*)(MODEM_TOPSM_base+0x170))
#define MODEM_TOPSM_SM_TMR_TIMER_TRIG_MASK1  ((volatile kal_uint32*)(MODEM_TOPSM_base+0x174))
#define MODEM_TOPSM_SM_TMR_CLIENT_ACT_MASK   ((volatile kal_uint32*)(MODEM_TOPSM_base+0x180))
#define MODEM_TOPSM_SM_TMR_SSTA0             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x1A0))
#define MODEM_TOPSM_SM_TMR_SSTA1             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x1A4))

#define MODEM_TOPSM_SM_SLV_REQ_MASK          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x200))
#define MODEM_TOPSM_SM_SLV_SYSCLK_MASK       ((volatile kal_uint32*)(MODEM_TOPSM_base+0x208))
#define MODEM_TOPSM_SM_SLV_PLL_MASK0         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x220))
#define MODEM_TOPSM_SM_SLV_PLL_MASK1         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x224))
#define MODEM_TOPSM_SM_SLV_PLL_MASK2         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x228))
#define MODEM_TOPSM_SM_SLV_PLL_MASK3         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x22C))
#define MODEM_TOPSM_SM_SLV_PWR_MASK0         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x240))
#define MODEM_TOPSM_SM_SLV_PWR_MASK1         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x244))
#define MODEM_TOPSM_SM_SLV_PWR_MASK2         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x248))
#define MODEM_TOPSM_SM_SLV_PWR_MASK3         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x24C))
#define MODEM_TOPSM_SM_SLV_PWR_MASK4         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x250))
#define MODEM_TOPSM_SM_SLV_PWR_MASK5         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x254))
#define MODEM_TOPSM_SM_SLV_MAS_TRIG_MASK0    ((volatile kal_uint32*)(MODEM_TOPSM_base+0x260))
#define MODEM_TOPSM_SM_SLV_MAS_TRIG_MASK1    ((volatile kal_uint32*)(MODEM_TOPSM_base+0x264))
#define MODEM_TOPSM_SM_SLV_TIMER_TRIG_MASK0  ((volatile kal_uint32*)(MODEM_TOPSM_base+0x270))
#define MODEM_TOPSM_SM_SLV_TIMER_TRIG_MASK1  ((volatile kal_uint32*)(MODEM_TOPSM_base+0x274))
#define MODEM_TOPSM_SM_SLV_CLIENT_ACT_MASK   ((volatile kal_uint32*)(MODEM_TOPSM_base+0x280))
#define MODEM_TOPSM_SM_SLV_SSTA0             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x2A0))
#define MODEM_TOPSM_SM_SLV_SSTA1             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x2A4))

#define MODEM_TOPSM_SM_DBG_REQ_MASK          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x300))
#define MODEM_TOPSM_SM_DBG_SYSCLK_MASK       ((volatile kal_uint32*)(MODEM_TOPSM_base+0x308))
#define MODEM_TOPSM_SM_DBG_PLL_MASK0         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x320))
#define MODEM_TOPSM_SM_DBG_PLL_MASK1         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x324))
#define MODEM_TOPSM_SM_DBG_PLL_MASK2         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x328))
#define MODEM_TOPSM_SM_DBG_PLL_MASK3         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x32C))
#define MODEM_TOPSM_SM_DBG_PWR_MASK0         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x340))
#define MODEM_TOPSM_SM_DBG_PWR_MASK1         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x344))
#define MODEM_TOPSM_SM_DBG_PWR_MASK2         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x348))
#define MODEM_TOPSM_SM_DBG_PWR_MASK3         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x34C))
#define MODEM_TOPSM_SM_DBG_PWR_MASK4         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x350))
#define MODEM_TOPSM_SM_DBG_PWR_MASK5         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x354))
#define MODEM_TOPSM_SM_DBG_MAS_TRIG_MASK0    ((volatile kal_uint32*)(MODEM_TOPSM_base+0x360))
#define MODEM_TOPSM_SM_DBG_MAS_TRIG_MASK1    ((volatile kal_uint32*)(MODEM_TOPSM_base+0x364))
#define MODEM_TOPSM_SM_DBG_TIMER_TRIG_MASK0  ((volatile kal_uint32*)(MODEM_TOPSM_base+0x370))
#define MODEM_TOPSM_SM_DBG_TIMER_TRIG_MASK1  ((volatile kal_uint32*)(MODEM_TOPSM_base+0x374))
#define MODEM_TOPSM_SM_DBG_CLIENT_ACT_MASK   ((volatile kal_uint32*)(MODEM_TOPSM_base+0x380))
#define MODEM_TOPSM_SM_DBG_SSTA0             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x3A0))
#define MODEM_TOPSM_SM_DBG_SSTA1             ((volatile kal_uint32*)(MODEM_TOPSM_base+0x3A4))

#define MODEM_TOPSM_SM_CLK_SETTLE            ((volatile kal_uint32*)(MODEM_TOPSM_base+0x400))
#define MODEM_TOPSM_SM_TIMER_TRIG_SETTLE     ((volatile kal_uint32*)(MODEM_TOPSM_base+0x410))
#define MODEM_TOPSM_SM_MAS_TRIG_MAX_SETTLE   ((volatile kal_uint32*)(MODEM_TOPSM_base+0x418))
#define MODEM_TOPSM_SM_MAS_TRIG_GRP_SETTLE0  ((volatile kal_uint32*)(MODEM_TOPSM_base+0x420))
#define MODEM_TOPSM_SM_MAS_TRIG_GRP_SETTLE1  ((volatile kal_uint32*)(MODEM_TOPSM_base+0x424))
#define MODEM_TOPSM_SM_MAS_TRIG_GRP_SAL0     ((volatile kal_uint32*)(MODEM_TOPSM_base+0x430))
#define MODEM_TOPSM_SM_MAS_TRIG_GRP_SAL1     ((volatile kal_uint32*)(MODEM_TOPSM_base+0x434))
#define MODEM_TOPSM_SM_MAS_TRIG_SEL          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x440))
#define MODEM_TOPSM_SM_TMR_SW_TRIG           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x450))
#define MODEM_TOPSM_SM_SLV_SW_TRIG           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x454))
#define MODEM_TOPSM_SM_DBG_SW_TRIG           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x458))
#define MODEM_TOPSM_SM_MAS_SW_TRIG           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x45C))
#define MODEM_TOPSM_SM_SYSCLK_SAL            ((volatile kal_uint32*)(MODEM_TOPSM_base+0x460))
#define MODEM_TOPSM_SM_TMR_BYPASS_SYSCLK     ((volatile kal_uint32*)(MODEM_TOPSM_base+0x468))
#define MODEM_TOPSM_SM_SLV_REQ_IRQ           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x470))
#define MODEM_TOPSM_SM_DBG_REQ_IRQ           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x478))
#define MODEM_TOPSM_SM_MAS_REQ_IRQ           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x480))

#define MODEM_TOPSM_SW_SYSCLK_FORCE_ON       ((volatile kal_uint32*)(MODEM_TOPSM_base+0x4A0))
#define MODEM_TOPSM_SW_PLL_FORCE_ON          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x4B0))
#define MODEM_TOPSM_SW_PWR_FORCE_ON          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x4C0))
#define MODEM_TOPSM_SW_TIMER_TRIG_FORCE_ON   ((volatile kal_uint32*)(MODEM_TOPSM_base+0x4D0))
#define MODEM_TOPSM_SW_CLIENT_ACT_FORCE_ON   ((volatile kal_uint32*)(MODEM_TOPSM_base+0x4E0))

/* Still exist?*/
#define MODEM_TOPSM_SM_PWR_STATUS0           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x500))
#define MODEM_TOPSM_SM_PWR_STATUS1           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x504))
#define MODEM_TOPSM_SM_PWR_STATUS2           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x508))
#define MODEM_TOPSM_SM_PWR_STATUS3           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x50C))
#define MODEM_TOPSM_SM_PWR_STATUS4           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x510))
#define MODEM_TOPSM_SM_PWR_STATUS5           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x514))
#define MODEM_TOPSM_SM_PWR_STATUS6           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x518))
#define MODEM_TOPSM_SM_PWR_STATUS7           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x51C))
#define MODEM_TOPSM_SM_PWR_STATUS8           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x520))
#define MODEM_TOPSM_SM_PWR_STATUS9           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x524))
#define MODEM_TOPSM_SM_PWR_STATUS10          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x528))
#define MODEM_TOPSM_SM_PWR_STATUS11          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x52C))
#define MODEM_TOPSM_SM_PWR_STATUS12          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x530))
#define MODEM_TOPSM_SM_PWR_STATUS13          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x534))
#define MODEM_TOPSM_SM_PWR_STATUS14          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x538))
#define MODEM_TOPSM_SM_PWR_STATUS15          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x53C))
#define MODEM_TOPSM_SM_PWR_STATUS16          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x540))
#define MODEM_TOPSM_SM_PWR_STATUS17          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x544))
#define MODEM_TOPSM_SM_PWR_STATUS18          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x548))
#define MODEM_TOPSM_SM_PWR_STATUS19          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x54C))
#define MODEM_TOPSM_SM_PWR_STATUS20          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x550))
#define MODEM_TOPSM_SM_PWR_STATUS21          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x554))
#define MODEM_TOPSM_SM_PWR_STATUS22          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x558))
#define MODEM_TOPSM_SM_PWR_STATUS23          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x55C))

#define MODEM_TOPSM_SM_SYSCLK_STA            ((volatile kal_uint32*)(MODEM_TOPSM_base+0x580))
#define MODEM_TOPSM_SM_PLL_STA               ((volatile kal_uint32*)(MODEM_TOPSM_base+0x590))
#define MODEM_TOPSM_SM_PWR_REQ_STA           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x5A0))
#define MODEM_TOPSM_SM_PWR_ACK_STA           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x5A4))
#define MODEM_TOPSM_SM_SLV_REQ_STA           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x5C0))
#define MODEM_TOPSM_SM_DBG_REQ_STA           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x5D0))
#define MODEM_TOPSM_SM_MAS_REQ_STA           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x5E0))

#define MODEM_TOPSM_SM_TOPSM_DBGSEL          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x600))
#define MODEM_TOPSM_SM_TOPSM_SPARE           ((volatile kal_uint32*)(MODEM_TOPSM_base+0x608))
#define MODEM_TOPSM_SM_MCF_CNT_BASE          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x60C))

#define MODEM_TOPSM_SM_DBGMON_SYSCLK_FM      ((volatile kal_uint32*)(MODEM_TOPSM_base+0x620))
#define MODEM_TOPSM_SM_DBGMON_SYSCLK_FM_CTRL ((volatile kal_uint32*)(MODEM_TOPSM_base+0x624))
#define MODEM_TOPSM_SM_DBGMON_SYSCLK_FM_FLAG ((volatile kal_uint32*)(MODEM_TOPSM_base+0x628))

#define MODEM_TOPSM_SM_TOPSM_APP_OUTCR_SET     ((volatile kal_uint32*)(MODEM_TOPSM_base+0x640))
#define MODEM_TOPSM_SM_TOPSM_APP_OUTCR_CLR     ((volatile kal_uint32*)(MODEM_TOPSM_base+0x644))
#define MODEM_TOPSM_SM_TOPSM_APP_INCR          ((volatile kal_uint32*)(MODEM_TOPSM_base+0x670))

#define MODEM_TOPSM_SM_PWR_PROTECT_ERR         ((volatile kal_uint32*)(MODEM_TOPSM_base+0x680))
#define MODEM_TOPSM_SM_TMR_FSM_ERR0            ((volatile kal_uint32*)(MODEM_TOPSM_base+0x690))
#define MODEM_TOPSM_SM_TMR_FSM_ERR1            ((volatile kal_uint32*)(MODEM_TOPSM_base+0x694))
#define MODEM_TOPSM_SM_TMR_PROT_ERR            ((volatile kal_uint32*)(MODEM_TOPSM_base+0x698))
#define MODEM_TOPSM_SM_SLV_FSM_ERR0            ((volatile kal_uint32*)(MODEM_TOPSM_base+0x6A0))
#define MODEM_TOPSM_SM_SLV_FSM_ERR1            ((volatile kal_uint32*)(MODEM_TOPSM_base+0x6A4))
#define MODEM_TOPSM_SM_SLV_PROT_ERR            ((volatile kal_uint32*)(MODEM_TOPSM_base+0x6A8))
#define MODEM_TOPSM_SM_DBG_FSM_ERR0            ((volatile kal_uint32*)(MODEM_TOPSM_base+0x6B0))
#define MODEM_TOPSM_SM_DBG_FSM_ERR1            ((volatile kal_uint32*)(MODEM_TOPSM_base+0x6B4))
#define MODEM_TOPSM_SM_DBG_PROT_ERR            ((volatile kal_uint32*)(MODEM_TOPSM_base+0x6B8))

#ifndef MAX
#define MAX(a,b)  ( ( (a) > (b) ) ? (a) : (b) )
#endif

#ifndef MIN
#define MIN(a,b)  ( ( (a) < (b) ) ? (a) : (b) )
#endif

#else  /*address definition*/

#error "please check the address definition of modem topsm"

#endif /*address definition*/

/******************** MODEM_TOPSM ASSERT Macro ********************/
#ifdef  __MTK_INTERNAL__
   #define MODEM_TOPSM_ASSERT_Bypass( st )                    ASSERT( st )
   #define MODEM_TOPSM_ASSERT_Reboot( st )                    ASSERT( st )
   #define MODEM_TOPSM_EXT_ASSERT_Bypass( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
   #define MODEM_TOPSM_EXT_ASSERT_Reboot( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
#else
   #define MODEM_TOPSM_ASSERT_Bypass( st )                    (void)0
   #define MODEM_TOPSM_ASSERT_Reboot( st )                    ASSERT( st )
   #define MODEM_TOPSM_EXT_ASSERT_Bypass( st, d1, d2, d3 )    (void)0
   #define MODEM_TOPSM_EXT_ASSERT_Reboot( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
#endif

/******************** MODEM_TOPSM.c usage ********************/
/* for MODEM_TOPSM_RM_TMR_SSTA */
#if defined( __UMTS_FDD_MODE__ )
   #define MD_TIMER_STATE_CHECK_MASK   0x000000FF /* Check TDMA timer and RTR timer status */
   #define MD_TIMER_STATE_CHECK        0x00000011 /* TDMA timer and RTR timer are in normal state */
#else /* !__UMTS_FDD_MODE__ */
   #define MD_TIMER_STATE_CHECK_MASK   0x0000000F /* Check TDMA timer status */
   #define MD_TIMER_STATE_CHECK        0x00000001 /* TDMA timer is in normal state */
#endif /* __UMTS_FDD_MODE__ */

/* For 32K Calibration Mechanism */
//#define     TOPSM_LONG_FM_DURATION                (FM_DURATION+1) /* 2x(4095+1)=8192T => ideal fmResult = 6500000 @ 26M */
#define TOPSM_LONG_FM_DURATION  8192 
#define MODEM_TOPSM_LONG_FM_DURATION TOPSM_LONG_FM_DURATION

#define MODEM_TOPSM_ABS(x) ((x) > 0 ? (x) : -(x))  /* Used to get the absolute value */
	
typedef struct
{
   kal_bool            calibrating;
   kal_bool            ReK;
#ifdef MTK_SLEEP_ENABLE
   kal_bool            UpdateCal_2G;
#endif
   kal_uint16          re_K_cnt;
   kal_uint16          curr_FM_DUR;
   volatile kal_uint32 fmResult;   
   
   kal_uint32          debug_check_FRC;
   kal_uint32          debug_check_pwr_rdy;
   
   kal_uint32          lpmon_debug_info1;
   
#ifdef BIG_DAC_CHANGE_RECALIBRATION
   kal_uint32          FreOffThreshold[NUM_OF_CLOCK_SOURCE]; /* Threshold of frequency offset */
   kal_uint32          FreOffMaxValid[NUM_OF_CLOCK_SOURCE]; /* Maximun valid frequency offset */
   kal_int32           Ref_FreqOff[NUM_OF_CLOCK_SOURCE]; /* To record current frequency offset base */
#endif    
} MODEM_TOPSM_Globals;

extern void MODEM_TOPSM_SetFRC_32K_FM( kal_uint32 num_32k, kal_uint32 num_26m);
extern void MODEM_TOPSM_Init( void);

#endif /* __CENTRALIZED_SLEEP_MANAGER_V2__ */
#endif /* !MODEM_TOPSM_PRIVATE_H*/
#endif /*__CENTRALIZED_SLEEP_MANAGER__*/

