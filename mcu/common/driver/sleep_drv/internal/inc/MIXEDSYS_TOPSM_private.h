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
 *   MIXEDSYS_TOPSM_private.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   topsm for mixedsys for C2K support
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
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/ 

#ifndef MIXEDSYS_TOPSM_PRIVATE_H
#define MIXEDSYS_TOPSM_PRIVATE_H

#include "kal_general_types.h"
#include "reg_base.h"

/* =============== Register for L1Core MIXEDSYS TOPSM ======================  */
#if defined(TK6291) || defined(MT6755)

#define MIXEDSYS_TOPSM_base           (L1_BASE_MADDR_ABB_MIXEDSYS+0xB000)

#elif defined(ELBRUS)

#define MIXEDSYS_TOPSM_base           (L1_BASE_MADDR_ABB_MIXEDSYS+0xB000)

#elif defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)

#define MIXEDSYS_TOPSM_base           (L1_BASE_MADDR_ABB_MIXEDSYS+0xB000)

#endif

#define MIXEDSYS_TOPSM_SM_PWR_CON0              ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x00)) 
#define MIXEDSYS_TOPSM_SM_PWR_ON_SW_CTRL0       ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x80)) 
#define MIXEDSYS_TOPSM_SM_PWR_OFF_SW_CTRL0      ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0xA0)) 
#define MIXEDSYS_TOPSM_SM_PWR_PER0              ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0xC0)) 
#define MIXEDSYS_TOPSM_SM_PWR_PER1              ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0xC4)) 
#define MIXEDSYS_TOPSM_SM_PWR_SW_CTRL_SEL       ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0xCC)) 
#define MIXEDSYS_TOPSM_SM_PWR_RDY_REG           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0xD0)) 
#define MIXEDSYS_TOPSM_SM_PWR_RDY               ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0xD4)) 

#define MIXEDSYS_TOPSM_SM_TMR_REQ_MASK          ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x100))
#define MIXEDSYS_TOPSM_SM_TMR_SYSCLK_MASK       ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x108))
#define MIXEDSYS_TOPSM_SM_TMR_PLL_MASK0         ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x120))
#define MIXEDSYS_TOPSM_SM_TMR_PWR_MASK0         ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x140))
#define MIXEDSYS_TOPSM_SM_TMR_MAS_TRIG_MASK     ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x160))
#define MIXEDSYS_TOPSM_SM_TMR_TIMER_TRIG_MASK   ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x170))
#define MIXEDSYS_TOPSM_SM_TMR_CLIENT_ACT_MASK   ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x180))
#define MIXEDSYS_TOPSM_SM_TMR_SSTA0             ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x1A0))

#define MIXEDSYS_TOPSM_SM_SLV_REQ_MASK          ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x200))
#define MIXEDSYS_TOPSM_SM_SLV_SYSCLK_MASK       ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x208))
#define MIXEDSYS_TOPSM_SM_SLV_PLL_MASK0         ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x220))
#define MIXEDSYS_TOPSM_SM_SLV_PWR_MASK0         ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x240))
#define MIXEDSYS_TOPSM_SM_SLV_MAS_TRIG_MASK     ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x260))
#define MIXEDSYS_TOPSM_SM_SLV_TIMER_TRIG_MASK   ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x270))
#define MIXEDSYS_TOPSM_SM_SLV_CLIENT_ACT_MASK   ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x280))
#define MIXEDSYS_TOPSM_SM_SLV_SSTA0             ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x2A0))

#define MIXEDSYS_TOPSM_SM_DBG_REQ_MASK          ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x300))
#define MIXEDSYS_TOPSM_SM_DBG_SYSCLK_MASK       ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x308))
#define MIXEDSYS_TOPSM_SM_DBG_PLL_MASK0         ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x320))
#define MIXEDSYS_TOPSM_SM_DBG_PWR_MASK0         ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x340))
#define MIXEDSYS_TOPSM_SM_DBG_MAS_TRIG_MASK     ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x360))
#define MIXEDSYS_TOPSM_SM_DBG_TIMER_TRIG_MASK   ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x370))
#define MIXEDSYS_TOPSM_SM_DBG_CLIENT_ACT_MASK   ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x380))
#define MIXEDSYS_TOPSM_SM_DBG_SSTA0             ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x3A0))

#define MIXEDSYS_TOPSM_SM_CLK_SETTLE            ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x400))
#define MIXEDSYS_TOPSM_SM_TIMER_TRIG_SETTLE     ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x410))
#define MIXEDSYS_TOPSM_SM_MAS_TRIG_MAX_SETTLE   ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x418))
#define MIXEDSYS_TOPSM_SM_MAS_TRIG_GRP_SETTLE   ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x420))
#define MIXEDSYS_TOPSM_SM_MAS_TRIG_GRP_SAL      ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x430))
#define MIXEDSYS_TOPSM_SM_MAS_TRIG_SEL          ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x440))
#define MIXEDSYS_TOPSM_SM_SLV_SW_TRIG           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x450))
#define MIXEDSYS_TOPSM_SM_DBG_SW_TRIG           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x458))
#define MIXEDSYS_TOPSM_SM_MAS_SW_TRIG           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x460))
#define MIXEDSYS_TOPSM_SM_TMR_SW_TRIG           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x464))
#define MIXEDSYS_TOPSM_SM_TMR_BYPASS_SYSCLK     ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x468))
#define MIXEDSYS_TOPSM_SM_SLV_REQ_IRQ           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x470))
#define MIXEDSYS_TOPSM_SM_DBG_REQ_IRQ           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x478))
#define MIXEDSYS_TOPSM_SM_MAS_REQ_IRQ           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x480))

#define MIXEDSYS_TOPSM_SW_SYSCLK_FORCE_ON       ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x4A0))
#define MIXEDSYS_TOPSM_SW_PLL_FORCE_ON          ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x4B0))
#define MIXEDSYS_TOPSM_SW_PWR_FORCE_ON          ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x4C0))
#define MIXEDSYS_TOPSM_SW_TIMER_TRIG_FORCE_ON   ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x4D0))
#define MIXEDSYS_TOPSM_SW_CLIENT_ACT_FORCE_ON   ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x4E0))

#define MIXEDSYS_TOPSM_SM_PWR_STATUS0           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x500))

#define MIXEDSYS_TOPSM_SM_SYSCLK_STA            ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x580))
#define MIXEDSYS_TOPSM_SM_PLL_STA               ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x590))
#define MIXEDSYS_TOPSM_SM_PWR_REQ_STA           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x5A0))
#define MIXEDSYS_TOPSM_SM_PWR_ACK_STA           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x5A4))
#define MIXEDSYS_TOPSM_SM_SLV_REQ_STA           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x5C0))
#define MIXEDSYS_TOPSM_SM_DBG_REQ_STA           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x5D0))
#define MIXEDSYS_TOPSM_SM_MAS_REQ_STA           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x5E0))

#define MIXEDSYS_TOPSM_SM_TOPSM_DBGSEL          ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x600))
#define MIXEDSYS_TOPSM_SM_TOPSM_SPARE           ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x608))
#define MIXEDSYS_TOPSM_SM_MCF_CNT_BASE          ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x610))

#define MIXEDSYS_TOPSM_SM_DBGMON_SYSCLK_FM      ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x620))
#define MIXEDSYS_TOPSM_SM_DBGMON_SYSCLK_FM_CTRL ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x624))
#define MIXEDSYS_TOPSM_SM_DBGMON_SYSCLK_FM_FLAG ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x628))

#define MIXEDSYS_TOPSM_SM_PWR_PROTECT_ERR       ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x680))
#define MIXEDSYS_TOPSM_SM_TMR_FSM_ERR0          ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x690))
#define MIXEDSYS_TOPSM_SM_SLV_FSM_ERR0          ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x6A0))
#define MIXEDSYS_TOPSM_SM_DBG_FSM_ERR0          ((volatile kal_uint32*)(MIXEDSYS_TOPSM_base+0x6B0))

/* =============== Register for L1Core MIXEDSYS TOPSM end ======================  */
extern void MIXEDSYS_TOPSM_Init(void);

#endif /* MEM_CONFIG_H */
