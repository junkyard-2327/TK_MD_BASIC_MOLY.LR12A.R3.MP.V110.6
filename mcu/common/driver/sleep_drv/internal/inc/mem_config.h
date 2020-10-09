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
 *   sleep_drv_internal.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Sleep mode driver setting.
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
 * removed!
 *
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/ 

#ifndef MEM_CONFIG_H
#define MEM_CONFIG_H

#include "kal_general_types.h"
#include "reg_base.h"

#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)

/* ============================= Register for SRAM control ================================== */
#define CORE0_MEM_CONF_SW_TYPE            ((volatile kal_uint32*)(BASE_ADDR_MDPERI_CORE0_MEM_CONFIG     + 0x0 ))
#define CORE1_MEM_CONF_SW_TYPE            ((volatile kal_uint32*)(BASE_ADDR_MDPERI_CORE1_MEM_CONFIG     + 0x0 ))
#define USIP0_MEM_CONF_SW_TYPE            ((volatile kal_uint32*)(BASE_ADDR_MDPERI_USIP0_MEM_CONFIG     + 0x0 ))
#define MDCORE_MEM_CONF_SW_TYPE           ((volatile kal_uint32*)(BASE_ADDR_MDPERI_MDCORE_MEM_CONFIG    + 0x0 ))
#define MDINFRA_MEM_CONF_SW_TYPE          ((volatile kal_uint32*)(BASE_ADDR_MDPERI_MDINFRA_MEM_CONFIG   + 0x0 ))
#define MDMML2_MEM_CONF_SW_TYPE           ((volatile kal_uint32*)(BASE_ADDR_MDPERI_MDMML2_MEM_CONFIG    + 0x0 ))
#define MDPERISYS_MEM_CONF_SW_TYPE        ((volatile kal_uint32*)(BASE_ADDR_MDPERI_MDPERISYS_MEM_CONFIG + 0x0 ))
#define MDPERISYS_MEM_CONF_SW_PWDN_C0     ((volatile kal_uint32*)(BASE_ADDR_MDPERI_MDPERISYS_MEM_CONFIG + 0x10))
#define MDPERISYS_MEM_CONF_GROUP_PWDN     ((volatile kal_uint32*)(BASE_ADDR_MDPERI_MDPERISYS_MEM_CONFIG + 0x20))
/* ============================= Register for SRAM control end =============================== */

/* ============================= Register for FESYS SRAM control ============================= */
#define MEM_CONF_SW_TYPE_MDL1AO           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x000))
#define MEM_CONF_SW_PWDN_C0_MDL1AO        ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x004))
#define MEM_CONF_GROUP_PWDN_MDL1AO        ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x008))
#define MEM_CONF_WAITING_FLAG_MDL1AO      ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x00c))
#define MEM_CONF_MBIST_MEM_ISOINTB_MDL1AO ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x010))
#define MEM_CONF_MBIST_MEM_PD_MDL1AO      ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x014))
#define MEM_CONF_MBIST_PROT_STA_MDL1AO    ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x018))
#define MEM_CONF_SRAMC_AO_IDLE_MDL1AO     ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x01c))
#define MEM_CONF_SW_TYPE_MD2G             ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x100))
#define MEM_CONF_SW_PWDN_C0_MD2G          ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x104))
#define MEM_CONF_GROUP_PWDN_MD2G          ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x108))
#define MEM_CONF_WAITING_FLAG_MD2G        ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x10c))
#define MEM_CONF_SRAMC_AO_IDLE_MD2G	      ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x110))
#define MEM_CONF_SW_TYPE_TXSYS            ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x200))
#define MEM_CONF_SW_PWDN_C0_TXSYS         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x204))
#define MEM_CONF_SW_PWDN_C1_TXSYS         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x208))
#define MEM_CONF_SW_PWDN_C2_TXSYS         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x20c))
#define MEM_CONF_SW_PWDN_C3_TXSYS         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x210))
#define MEM_CONF_SW_PWDN_C4_TXSYS         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x214))
#define MEM_CONF_GROUP_PWDN_TXSYS         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x218))
#define MEM_CONF_WAITING_FLAG_TXSYS       ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x21c))
#define MEM_CONF_SRAMC_AO_IDLE_TXSYS      ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x220))
#define MEM_CONF_SW_TYPE_CSSYS            ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x300))
#define MEM_CONF_SW_PWDN_C0_CSSYS         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x304))
#define MEM_CONF_SW_PWDN_C1_CSSYS         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x308))
#define MEM_CONF_SW_PWDN_C2_CSSYS         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x30c))
#define MEM_CONF_SW_PWDN_C3_CSSYS         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x310))
#define MEM_CONF_SW_PWDN_C4_CSSYS         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x314))
#define MEM_CONF_GROUP_PWDN_CSSYS         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x318))
#define MEM_CONF_WAITING_FLAG_CSSYS       ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x31c))
#define MEM_CONF_SRAMC_AO_IDLE_CSSYS      ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x320))
#define MEM_CONF_SW_TYPE_RXDFE            ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x400))
#define MEM_CONF_SW_PWDN_C0_RXDFE         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x404))
#define MEM_CONF_GROUP_PWDN_RXDFE         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x408))
#define MEM_CONF_WAITING_FLAG_RXDFE       ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x40c))
#define MEM_CONF_SRAMC_AO_IDLE_RXDFE      ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_FESYS_P2P_TX + 0x410))
/* ============================= Register for FESYS SRAM control end ========================== */

/* ============================= Register for MDRX SRAM control ============================= */
#define MEM_CONF_DMC_SW_TYPE              ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x00))
#define MEM_CONF_SCQ_SW_TYPE              ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x04))
#define MEM_CONF_BRP_SW_TYPE              ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x08))
#define MEM_CONF_BIGRAM_SW_TYPE           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x0c))
#define MEM_CONF_RAKE_SW_TYPE             ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x10))
#define MEM_CONF_DMC_SW_PWDN_C0           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x14))
#define MEM_CONF_SCQ_SW_PWDN_C0           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x18))
#define MEM_CONF_SCQ_SW_PWDN_C1           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x1c))
#define MEM_CONF_BRP_SW_PWDN_C0           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x20))
#define MEM_CONF_BRP_SW_PWDN_C1           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x24))
#define MEM_CONF_BRP_SW_PWDN_C2           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x28))
#define MEM_CONF_BRP_SW_PWDN_C3           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x2c))
#define MEM_CONF_BRP_SW_PWDN_C4           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x30))
#define MEM_CONF_BIGRAM_SW_PWDN_C0        ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x34))
#define MEM_CONF_BIGRAM_SW_PWDN_C1        ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x38))
#define MEM_CONF_BIGRAM_SW_PWDN_C2        ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x3c))
#define MEM_CONF_BIGRAM_SW_PWDN_C3        ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x40))
#define MEM_CONF_BIGRAM_SW_PWDN_C4        ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x44))
#define MEM_CONF_RAKE_SW_PWDN_C0          ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x48))
#define MEM_CONF_RAKE_SW_PWDN_C1          ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x4c))
#define MEM_CONF_RAKE_SW_PWDN_C2          ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x50))
#define MEM_CONF_DMC_GROUP_PWDN           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x54))
#define MEM_CONF_SCQ_GROUP_PWDN           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x58))
#define MEM_CONF_BRP_GROUP_PWDN           ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x5c))
#define MEM_CONF_BIGRAM_GROUP_PWDN        ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x60))
#define MEM_CONF_RAKE_GROUP_PWDN          ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x64))
#define MEM_CONF_DMC_WAIT_C0              ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x68))
#define MEM_CONF_BRAM_WAIT_C0             ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x74))
#define MEM_CONF_BRAM_WAIT_C1             ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x78))
#define MEM_CONF_BRAM_WAIT_C2             ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x7c))
#define MEM_CONF_BRAM_WAIT_C3             ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x80))
#define MEM_CONF_BRAM_WAIT_C4             ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x84))
#define MEM_CONF_RAKE_WAIT_C0             ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0x9c))
#define MEM_CONF_RAKE_WAIT_C1             ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0xa0))
#define MEM_CONF_RAKE_WAIT_C2             ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0xa4))
#define MEM_CONF_SRAM_CTRL_AO_IDLE        ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0xa8))
#define MEM_CONF_RAKE_PM_CIPHER_EN        ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0xb0))
#define MEM_CONF_RAKE_PM_CIPHER_LOCK      ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0xb4))
#define MEM_CONF_SCQ_SPM_CIPHER_EN        ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0xc0))
#define MEM_CONF_SCQ_SPM_CIPHER_LOCK      ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0xc4))
#define MEM_CONF_CK_IDLE_MASK             ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0xd0))
#define MEM_CONF_CK_IDLE_DBG_MASK         ((volatile kal_uint32*)(BASE_ADDR_MODEML1_AO_MDRX_P2P_TX + 0xd4))

#define MEM_CONF_RAKE_SW_PWDN_MASK        0xFF
/* ============================= Register for MDRX SRAM control end ========================== */

/* ============================= Register for RAKE CLK control ============================== */
#define CG_CTRL_RAKE_PWR_AWARE            ((volatile kal_uint32*)(BASE_ADDR_RAKESYS_GLOBAL_CON + 0x00))
#define CG_CTRL_RAKE_CG_CON               ((volatile kal_uint32*)(BASE_ADDR_RAKESYS_GLOBAL_CON + 0x04))
#define CG_CTRL_RAKE_CG_SET               ((volatile kal_uint32*)(BASE_ADDR_RAKESYS_GLOBAL_CON + 0x08))
#define CG_CTRL_RAKE_CG_CLR               ((volatile kal_uint32*)(BASE_ADDR_RAKESYS_GLOBAL_CON + 0x0C))
#define CG_CTRL_RAKE_CG_CON_1X            ((volatile kal_uint32*)(BASE_ADDR_RAKESYS_GLOBAL_CON + 0x10))
#define CG_CTRL_RAKE_CG_SET_1X            ((volatile kal_uint32*)(BASE_ADDR_RAKESYS_GLOBAL_CON + 0x14))
#define CG_CTRL_RAKE_CG_CLR_1X            ((volatile kal_uint32*)(BASE_ADDR_RAKESYS_GLOBAL_CON + 0x18))
#define CG_CTRL_RAKE_CG_CON_DO            ((volatile kal_uint32*)(BASE_ADDR_RAKESYS_GLOBAL_CON + 0x20))
#define CG_CTRL_RAKE_CG_SET_DO            ((volatile kal_uint32*)(BASE_ADDR_RAKESYS_GLOBAL_CON + 0x24))
#define CG_CTRL_RAKE_CG_CLR_DO            ((volatile kal_uint32*)(BASE_ADDR_RAKESYS_GLOBAL_CON + 0x28))

#define CG_CTRL_RAKE_CG_CON_MASK          0x3 /* bit[0]: rake_core_cg_con; bit[1]: rake_brif_cg_con */
/* ============================= Register for RAKE CLK control end =========================== */

#endif /* defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) */

extern void MEM_CONFIG_Init(void);
extern void MEM_CONFIG_Sram_Power_Down(void);

extern void CG_CTRL_Init(void);

#endif /* MEM_CONFIG_H */
