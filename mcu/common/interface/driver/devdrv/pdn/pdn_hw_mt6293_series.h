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
 *   pdn_hw_mt6293_series.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   PDN Driver Related HW Registers
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 10 2017 devin.yang
 * [MOLY00269905] [System Service][PDN][Gen93][UMOLYA][LR12A.R2.MP] Update PDN driver for new module clock control.
 * .
 *
 * 11 23 2016 devin.yang
 * [MOLY00204129] [System Service][PDN] Porting PDN drivers for MT6293.
 * Update MT6293 PDN driver.
 *
 *
 *
 ****************************************************************************/

#ifndef __PDN_HW_MT6293_SERIES_H__
#define __PDN_HW_MT6293_SERIES_H__

#include "reg_base.h"

///////////////////////////////////////////////////////////////////////////////
/// MDPERI_CLKCTL (0xA01C0000)
///////////////////////////////////////////////////////////////////////////////

#define MD_INFRA_CKEN_SET                   ((BASE_MADDR_CLK_CTRL+0x04))
#define MD_INFRA_CKEN_CLR                   ((BASE_MADDR_CLK_CTRL+0x08))
#define MD_INFRA_CKEN                       ((BASE_MADDR_CLK_CTRL+0x0C))
    #define CG_MDUART1                         (1<<0)
    #define CG_BUSMON                          (1<<2)
    #define CG_SOE                             (1<<4)
    #define CG_LOGTOP_BCLK                     (1<<8)
    #define CG_MDINFRA_ELM_ACLK                (1<<10)
    #define CG_MDINFRA_ELM_FCLK                (1<<11)
    #define CG_MDINFRA_ELM_F26M                (1<<12)
    #define CG_FCS_SLV_DBCLK                   (1<<15)
    #define CG_GCU_SLV_DBCLK                   (1<<16)
    #define CG_TRACE_BUS2X                     (1<<17)
    #define CG_PPPHA_CLK                       (1<<18)
    #define CG_SDF_HCLK                        (1<<19)
    #define CG_TRACE_PIPE                      (1<<20)
    #define CG_TRACE_LINK                      (1<<21)
    #define CG_TRACE_SWD                       (1<<22)
    #define CG_LOGTOP_BUS2X                    (1<<23)
    #define CG_MDINFRA_BUS                     (1<<28)
    #define CG_MDINFRA_ATB_CK                  (1<<30)
    #define CG_MDINFRA_DBG_CK                  (1<<31)

#define MD_PERI_CKEN_SET                    ((BASE_MADDR_CLK_CTRL+0x10))
#define MD_PERI_CKEN_CLR                    ((BASE_MADDR_CLK_CTRL+0x14))
#define MD_PERI_CKEN                        ((BASE_MADDR_CLK_CTRL+0x18))    
    #define CG_MDUART0                         (1<<0)
    #define CG_MDGDMA                          (1<<1)
    #define CG_MDGPTM                          (1<<2)
    #define CG_USIM1_BCLK                      (1<<4)
    #define CG_USIM2_BCLK                      (1<<5)
    #define CG_MDEINT                          (1<<6)
    #define CG_USIM1                           (1<<8)
    #define CG_USIM2                           (1<<9)
    #define CG_MDECT                           (1<<10)
    #define CG_MDCIRQ                          (1<<11)
    #define CG_THERM_SLOW                      (1<<12)
    #define CG_MDPERI_DBG                      (1<<13)
    #define CG_TRACE_26M                       (1<<14)
    #define CG_MDGPTM_26M                      (1<<15)
    #define CG_MDPERI_BUS                      (1<<28)
    #define CG_MDDBGSYS_DCM                    (1<<31)

///////////////////////////////////////////////////////////////////////////////
/// MODEML1_AO_CONFG (0xA6020000)
///////////////////////////////////////////////////////////////////////////////
#define MDL1AO_CON20                    ((L1_BASE_MADDR_AO_CONFG+0x50))
#define MDL1AO_PDN_SET                  ((L1_BASE_MADDR_AO_CONFG+0x54))
#define MDL1AO_PDN_CLR                  ((L1_BASE_MADDR_AO_CONFG+0x58)) 
    #define CG_C2KDO_TMR                       (1<<0)
    #define CG_C2KDO_SLP                       (1<<1)    
    #define CG_C2K1X_TMR                       (1<<2)
    #define CG_C2K1X_SLP                       (1<<3)  
    #define CG_TDMA_SLP                        (1<<4)
    #define CG_TDD_TMR                         (1<<5)    
    #define CG_TDD_SLP                         (1<<6)
    #define CG_FDD_TMR                         (1<<7)    
    #define CG_FDD_SLP                         (1<<8)
    #define CG_LTE_TMR                         (1<<9)    
    #define CG_LTE_SLP                         (1<<10)
    #define CG_IDC_CTRL                        (1<<11)
    #define CG_BPI                             (1<<12)    
    #define CG_BSI                             (1<<13)
    #define CG_IDC_UART                        (1<<14) 
    #define CG_DVFS_CTRL                       (1<<15)   
    #define CG_FREQM                           (1<<16)
    #define CG_C1X_TTR                         (1<<17)    
    #define CG_CDO_TTR                         (1<<18)


///////////////////////////////////////////////////////////////////////////////
/// IA_DEBUG_PERI_MISC (0xA0230000)
///////////////////////////////////////////////////////////////////////////////
#define IA_DEBUG_PERI_MISC_CLK_CTRL            ((BASE_MADDR_MDMCU_IA_DEBUG_PERI_MISC_REG_ADR_IF+0x4))
    #define CG_RG_ASM_CK                       (1<<0)
    #define CG_RG_PDA_MON_CK                   (1<<1) 

   
#endif  /* !__PDN_HW_ELBRUS_SERIES_H__ */
