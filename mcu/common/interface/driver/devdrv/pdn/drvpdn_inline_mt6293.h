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
 *   drvpdn_inline_mt6293.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   PDN Driver (C Inline Implementation) for MT6293
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 11 2017 devin.yang
 * [MOLY00269905] [System Service][PDN][Gen93][UMOLYA][LR12A.R2.MP] Update PDN driver for new module clock control.
 * .
 *
 * 08 10 2017 devin.yang
 * [MOLY00269905] [System Service][PDN][Gen93][UMOLYA][LR12A.R2.MP] Update PDN driver for new module clock control.
 * .
 *
 * 08 10 2017 devin.yang
 * [MOLY00269905] [System Service][PDN][Gen93][UMOLYA][LR12A.R2.MP] Update PDN driver for new module clock control.
 * .
 *
 * 02 16 2017 devin.yang
 * [MOLY00229974] [System Service][PDN] Update PDN drivers for Bianco.
 * .
 *
 * 11 23 2016 devin.yang
 * [MOLY00204129] [System Service][PDN] Porting PDN drivers for MT6293.
 * Update MT6293 PDN driver.
 *
 * 05 31 2016 alan-tl.lin
 * [MOLY00174466] [UMOLYA] PLL porting
 * Disable PDN function for build error
 *
 *
 ****************************************************************************/

#ifndef __DRVPDN_INLINE_ELBRUS_H__
#define __DRVPDN_INLINE_ELBRUS_H__

/*******************************************************************************
 * Locally Used Options
 *******************************************************************************/
#define EXTRA_EXPORT            0
#define INTERRUPT_PROTECT       0

#define DISABLE_PDN_FOR_ISSUE           (0) // Temporary for Issue Clarification, disable all PDN function.
    #define DISABLE_PDN_MDINFRA         (0) /* Disable specified PDN function for debug */
    #define DISABLE_PDN_MDPERI          (0) /* Disable specified PDN function for debug */
    #define DISABLE_PDN_MDL1AO          (0) /* Disable specified PDN function for debug */
    #define DISABLE_PDN_DEBUG_PERI_MISC (0) /* Disable specified PDN function for debug */

/*******************************************************************************
 * Include header files
 *******************************************************************************/
#include "kal_general_types.h"
#include "intrCtrl.h"
#include "pdn_hw_mt6293_series.h"
#include "sync_data.h"

/* For Build pass */
#define PDN_MDUART2 0
#define PDN_LOGGDMA_HCLK 0
#define PDN_L1_GDMA 0

typedef enum {
    /* MD INFRA */
    PDN_MDUART1,
    PDN_BUSMON,
    PDN_SOE,
    PDN_LOGTOP_BCLK,
    PDN_MDINFRA_ELM_ACLK,
    PDN_MDINFRA_ELM_FCLK,
    PDN_MDINFRA_ELM_F26M,
    PDN_FCS_SLV_DBCLK,
    PDN_GCU_SLV_DBCLK,
    PDN_TRACE_BUS2X,
    PDN_PPPHA_CLK,
    PDN_SDF_HCLK,
    PDN_TRACE_PIPE,
    PDN_TRACE_LINK,
    PDN_TRACE_SWD,
    PDN_LOGTOP_BUS2X,
    PDN_MDINFRA_BUS,
    PDN_MDINFRA_ATB_CK,
    PDN_MDINFRA_DBG_CK,

    /* MD PERI */
    PDN_MDUART0,
    PDN_MDGDMA,
    PDN_MDGPTM,
    PDN_USIM1_BCLK,
    PDN_USIM2_BCLK,
    PDN_MDEINT,
    PDN_USIM1,
    PDN_USIM2,
    PDN_MDECT,
    PDN_MDCIRQ,
    PDN_THERM_SLOW,
    PDN_MDPERI_DBG,
    PDN_TRACE_26M,
    PDN_MDGPTM_26M,
    PDN_MDPERI_BUS,
    PDN_MDDBGSYS_DCM,

    /* MDL1AO */
    PDN_C2KDO_TMR,
    PDN_C2KDO_SLP,
    PDN_C2K1X_TMR,
    PDN_C2K1X_SLP, 
    PDN_TDMA_SLP,
    PDN_TDD_TMR,
    PDN_TDD_SLP,
    PDN_FDD_TMR, 
    PDN_FDD_SLP,
    PDN_LTE_TMR,
    PDN_LTE_SLP,
    PDN_IDC_CTRL,
    PDN_BPI,
    PDN_BSI,
    PDN_IDC_UART,
    PDN_DVFS_CTRL,
    PDN_FREQM,
    PDN_C1X_TTR,
    PDN_CDO_TTR,

    /* IA DEBUG PERI MISC */
    PDN_RG_ASM_CK,
    PDN_RG_PDA_MON_CK,
    
    PDN_MAX_DEV
} PDN_DEVICE;

#if defined(__MTK_TARGET__)
/* spinlock for IA_DEBUG_PERI_MISC_CLK_CTRL */
extern kal_spinlockid pdn_cg_spinlock;

#define PDN_TAKE_SPINLOCK()    kal_take_spinlock(pdn_cg_spinlock, KAL_INFINITE_WAIT)
#define PDN_GIVE_SPINLOCK()    kal_give_spinlock(pdn_cg_spinlock)
#else

#define PDN_TAKE_SPINLOCK()
#define PDN_GIVE_SPINLOCK()
#endif

#if (DISABLE_PDN_FOR_ISSUE)

DRVPDN_INLINE_MODIFIER DRVPDN_INLINE void PDN_SET(PDN_DEVICE dev) {};
DRVPDN_INLINE_MODIFIER DRVPDN_INLINE void PDN_CLR(PDN_DEVICE dev) {};
DRVPDN_INLINE_MODIFIER DRVPDN_INLINE kal_uint32 PDN_STS(PDN_DEVICE dev) {return 0;};

#else // !DISABLE_PDN_FOR_ISSUE

#define DRVPDN_REG(addr)                       *(volatile kal_uint32 *)(addr)

/******************************************************************************
 * Gate clock macros(Disable clock)
 ******************************************************************************/

#if !(DISABLE_PDN_MDINFRA)
#define DRVPDN_MDINFRA_OFF(module) \
    do { \
        DRVPDN_REG(MD_INFRA_CKEN_CLR) = (CG_ ## module); \
        MO_Sync(); \
    } while(0);
#else
#define DRVPDN_MDINFRA_OFF(module)
#endif

#if !(DISABLE_PDN_MDPERI)
#define DRVPDN_MDPERI_OFF(module) \
    do { \
        DRVPDN_REG(MD_PERI_CKEN_CLR) = (CG_ ## module);\
        MO_Sync(); \
    } while(0);
#else
#define DRVPDN_MDPERI_OFF(module)
#endif

#if !(DISABLE_PDN_MDL1AO)
#define DRVPDN_MDL1AO_OFF(module) \
    do { \
        DRVPDN_REG(MDL1AO_PDN_SET) = (CG_ ## module); \
        MO_Sync(); \
    } while(0);
#else
#define DRVPDN_MDL1AO_PERI_OFF(module)
#endif

#if !(DISABLE_PDN_DEBUG_PERI_MISC)
#define DRVPDN_DEBUG_PERI_MISC_OFF(module) \
        do { \
            DRVPDN_REG(IA_DEBUG_PERI_MISC_CLK_CTRL) &= ~(CG_ ## module); \
            MO_Sync(); \
        } while(0);
#else
#define DRVPDN_MDL1AO_PERI_OFF(module)
#endif

/******************************************************************************
 * Un-gate clock macros(Enable clock)
 ******************************************************************************/
 
#if !(DISABLE_PDN_MDINFRA)
#define DRVPDN_MDINFRA_ON(module) \
    do { \
        DRVPDN_REG(MD_INFRA_CKEN_SET) = (CG_ ## module); \
        MO_Sync(); \
    } while(0);
#else
#define DRVPDN_MDINFRA_ON(module)
#endif

#if !(DISABLE_PDN_MDPERI)
#define DRVPDN_MDPERI_ON(module) \
    do { \
        DRVPDN_REG(MD_PERI_CKEN_SET) = (CG_ ## module); \
        MO_Sync(); \
    } while(0);
#else
#define DRVPDN_MDPERI_ON(module)
#endif

#if !(DISABLE_PDN_MDL1AO)
#define DRVPDN_MDL1AO_ON(module) \
    do { \
        DRVPDN_REG(MDL1AO_PDN_CLR) = (CG_ ## module); \
        MO_Sync(); \
    } while(0);
#else
#define DRVPDN_MDL1AO_PERI_ON(module)
#endif

#if !(DISABLE_PDN_DEBUG_PERI_MISC)
#define DRVPDN_DEBUG_PERI_MISC_ON(module) \
        do { \
            DRVPDN_REG(IA_DEBUG_PERI_MISC_CLK_CTRL) |= (CG_ ## module); \
            MO_Sync(); \
        } while(0);
#else
#define DRVPDN_MDL1AO_PERI_OFF(module)
#endif

/******************************************************************************
 * Get clock status macros
 ******************************************************************************/
 
#define DRVPDN_MDINFRA_STS(module)            ((~(DRVPDN_REG(MD_INFRA_CKEN))) & (CG_ ## module))
#define DRVPDN_MDPERI_STS(module)             ((~(DRVPDN_REG(MD_PERI_CKEN))) & (CG_ ## module))
#define DRVPDN_MDL1AO_STS(module)             (DRVPDN_REG(MDL1AO_CON20) & (CG_ ## module))
#define DRVPDN_DEBUG_PERI_MISC_STS(module)    ((~(DRVPDN_REG(IA_DEBUG_PERI_MISC_CLK_CTRL))) & (CG_ ## module))

 /*------------------------------------------------------------------------
 * void     PDN_SET(PDN_DEVICE dev)
 * Purpose:	Disable clock of specified module.
 * Parameters:
 *    Input:	PDN_DEVICE dev: PDN_xxx, module index.
 *    Output:	None
 * returns :	None
 * Note    :    None
 *               
 *------------------------------------------------------------------------
 */
DRVPDN_INLINE_MODIFIER DRVPDN_INLINE void PDN_SET(PDN_DEVICE dev)
{
    #if INTERRUPT_PROTECT
    kal_uint32 mask;
    mask = SaveAndSetIRQMask();
    #endif
    
    switch (dev)
    { /* MD INFRA */
      case PDN_MDUART1:
        DRVPDN_MDINFRA_OFF(MDUART1);
        break;      
      case PDN_BUSMON:
        DRVPDN_MDINFRA_OFF(BUSMON);
        break;
      case PDN_SOE:
        DRVPDN_MDINFRA_OFF(SOE);
        break;
      case PDN_LOGTOP_BCLK:
        DRVPDN_MDINFRA_OFF(LOGTOP_BCLK);
        break;
      case PDN_MDINFRA_ELM_ACLK:
        DRVPDN_MDINFRA_OFF(MDINFRA_ELM_ACLK);
        break;
      case PDN_MDINFRA_ELM_FCLK:
        DRVPDN_MDINFRA_OFF(MDINFRA_ELM_FCLK);
        break;
      case PDN_MDINFRA_ELM_F26M:
        DRVPDN_MDINFRA_OFF(MDINFRA_ELM_F26M);
        break;
      case PDN_FCS_SLV_DBCLK:
        DRVPDN_MDINFRA_OFF(FCS_SLV_DBCLK);
        break;
      case PDN_GCU_SLV_DBCLK:
        DRVPDN_MDINFRA_OFF(GCU_SLV_DBCLK);
        break;
      case PDN_TRACE_BUS2X:
        DRVPDN_MDINFRA_OFF(TRACE_BUS2X);
        break;
      case PDN_PPPHA_CLK:
        DRVPDN_MDINFRA_OFF(PPPHA_CLK);
        break;
      case PDN_SDF_HCLK:
        DRVPDN_MDINFRA_OFF(SDF_HCLK);
        break;
      case PDN_TRACE_PIPE:
        DRVPDN_MDINFRA_OFF(TRACE_PIPE);
        break;
      case PDN_TRACE_LINK:
        DRVPDN_MDINFRA_OFF(TRACE_LINK);
        break;
      case PDN_TRACE_SWD:
        DRVPDN_MDINFRA_OFF(TRACE_SWD);
        break;
      case PDN_LOGTOP_BUS2X:
        DRVPDN_MDINFRA_OFF(LOGTOP_BUS2X);
        break;
      case PDN_MDINFRA_BUS:
        DRVPDN_MDINFRA_OFF(MDINFRA_BUS);
        break;
      case PDN_MDINFRA_ATB_CK:
        DRVPDN_MDINFRA_OFF(MDINFRA_ATB_CK);
        break;
      case PDN_MDINFRA_DBG_CK:
        DRVPDN_MDINFRA_OFF(MDINFRA_DBG_CK);
        break;
      
      /* MD PERI */
      case PDN_MDUART0:
        DRVPDN_MDPERI_OFF(MDUART0);
        break;
      case PDN_MDGDMA:
        DRVPDN_MDPERI_OFF(MDGDMA);
        break;
      case PDN_MDGPTM:
        DRVPDN_MDPERI_OFF(MDGPTM);
        break;
      case PDN_USIM1_BCLK:
        DRVPDN_MDPERI_OFF(USIM1_BCLK);
        break;
      case PDN_USIM2_BCLK:
        DRVPDN_MDPERI_OFF(USIM2_BCLK);
        break;
      case PDN_MDEINT:
        DRVPDN_MDPERI_OFF(MDEINT);
        break;
      case PDN_USIM1:
        DRVPDN_MDPERI_OFF(USIM1);
        break;
      case PDN_USIM2:
        DRVPDN_MDPERI_OFF(USIM2);
        break;
      case PDN_MDECT:
        DRVPDN_MDPERI_OFF(MDECT);
        break;
      case PDN_MDCIRQ:
        DRVPDN_MDPERI_OFF(MDCIRQ);
        break;
      case PDN_THERM_SLOW:
        DRVPDN_MDPERI_OFF(THERM_SLOW);
        break;
      case PDN_MDPERI_DBG:
        DRVPDN_MDPERI_OFF(MDPERI_DBG);
        break;
      case PDN_TRACE_26M:
        DRVPDN_MDPERI_OFF(TRACE_26M);
        break;
      case PDN_MDGPTM_26M:
        DRVPDN_MDPERI_OFF(MDGPTM_26M);
        break;
       case PDN_MDPERI_BUS:
        DRVPDN_MDPERI_OFF(MDPERI_BUS);
        break;    
      case PDN_MDDBGSYS_DCM:
        DRVPDN_MDPERI_OFF(MDDBGSYS_DCM);
        break;

      /* MDL1AO */
      case PDN_C2KDO_TMR:
        DRVPDN_MDL1AO_OFF(C2KDO_TMR);
        break;
      case PDN_C2KDO_SLP:
        DRVPDN_MDL1AO_OFF(C2KDO_SLP);
        break;
      case PDN_C2K1X_TMR:
        DRVPDN_MDL1AO_OFF(C2K1X_TMR);
        break;
      case PDN_C2K1X_SLP:
        DRVPDN_MDL1AO_OFF(C2K1X_SLP);
        break;
      case PDN_TDMA_SLP:
        DRVPDN_MDL1AO_OFF(TDMA_SLP);
        break;
      case PDN_TDD_TMR:
        DRVPDN_MDL1AO_OFF(TDD_TMR);
        break;
      case PDN_TDD_SLP:
        DRVPDN_MDL1AO_OFF(TDD_SLP);
        break;
      case PDN_FDD_TMR:
        DRVPDN_MDL1AO_OFF(FDD_TMR);
        break;
      case PDN_FDD_SLP:
        DRVPDN_MDL1AO_OFF(FDD_SLP);
        break;
      case PDN_LTE_TMR:
        DRVPDN_MDL1AO_OFF(LTE_TMR);
        break;
      case PDN_LTE_SLP:
        DRVPDN_MDL1AO_OFF(LTE_SLP);
        break;
      case PDN_IDC_CTRL:
        DRVPDN_MDL1AO_OFF(IDC_CTRL);
        break;
      case PDN_BPI:
        DRVPDN_MDL1AO_OFF(BPI);
        break;
      case PDN_BSI:
        DRVPDN_MDL1AO_OFF(BSI);
        break;
      case PDN_IDC_UART:
        DRVPDN_MDL1AO_OFF(IDC_UART);
        break;
      case PDN_DVFS_CTRL:
        DRVPDN_MDL1AO_OFF(DVFS_CTRL);
        break;
      case PDN_FREQM:
        DRVPDN_MDL1AO_OFF(FREQM);
        break;
      case PDN_C1X_TTR:
        DRVPDN_MDL1AO_OFF(C1X_TTR);
        break;
      case PDN_CDO_TTR:
        DRVPDN_MDL1AO_OFF(CDO_TTR);
        break;
        
      /* IA DEBUG PERI MISC */
      case PDN_RG_ASM_CK:
        PDN_TAKE_SPINLOCK();
        DRVPDN_DEBUG_PERI_MISC_OFF(RG_ASM_CK);
        PDN_GIVE_SPINLOCK();
        break;
      case PDN_RG_PDA_MON_CK:
        PDN_TAKE_SPINLOCK();
        DRVPDN_DEBUG_PERI_MISC_OFF(RG_PDA_MON_CK);
        PDN_GIVE_SPINLOCK();
        break;  

      case PDN_MAX_DEV:            
            break;
    }  
    
    #if INTERRUPT_PROTECT
    RestoreIRQMask(mask);
    #endif
}

 /*------------------------------------------------------------------------
 * void     PDN_CLR(PDN_DEVICE dev)
 * Purpose:	Enable clock of specified module.
 * Parameters:
 *    Input:	PDN_DEVICE dev: PDN_xxx, module index.
 *    Output:	None
 * returns :	None
 * Note    :    None
 *               
 *------------------------------------------------------------------------
 */
DRVPDN_INLINE_MODIFIER DRVPDN_INLINE void PDN_CLR(PDN_DEVICE dev)
{
    #if INTERRUPT_PROTECT
    kal_uint32 mask;
    mask = SaveAndSetIRQMask();
    #endif
    
    switch (dev)
    { /* MD INFRA */
      case PDN_MDUART1:
        DRVPDN_MDINFRA_ON(MDUART1);
        break;      
      case PDN_BUSMON:
        DRVPDN_MDINFRA_ON(BUSMON);
        break;
      case PDN_SOE:
        DRVPDN_MDINFRA_ON(SOE);
        break;
      case PDN_LOGTOP_BCLK:
        DRVPDN_MDINFRA_ON(LOGTOP_BCLK);
        break;
      case PDN_MDINFRA_ELM_ACLK:
        DRVPDN_MDINFRA_ON(MDINFRA_ELM_ACLK);
        break;
      case PDN_MDINFRA_ELM_FCLK:
        DRVPDN_MDINFRA_ON(MDINFRA_ELM_FCLK);
        break;
      case PDN_MDINFRA_ELM_F26M:
        DRVPDN_MDINFRA_ON(MDINFRA_ELM_F26M);
        break;
      case PDN_FCS_SLV_DBCLK:
        DRVPDN_MDINFRA_ON(FCS_SLV_DBCLK);
        break;
      case PDN_GCU_SLV_DBCLK:
        DRVPDN_MDINFRA_ON(GCU_SLV_DBCLK);
        break;
      case PDN_TRACE_BUS2X:
        DRVPDN_MDINFRA_ON(TRACE_BUS2X);
        break;
      case PDN_PPPHA_CLK:
        DRVPDN_MDINFRA_ON(PPPHA_CLK);
        break;
      case PDN_SDF_HCLK:
        DRVPDN_MDINFRA_ON(SDF_HCLK);
        break;
      case PDN_TRACE_PIPE:
        DRVPDN_MDINFRA_ON(TRACE_PIPE);
        break;
      case PDN_TRACE_LINK:
        DRVPDN_MDINFRA_ON(TRACE_LINK);
        break;
      case PDN_TRACE_SWD:
        DRVPDN_MDINFRA_ON(TRACE_SWD);
        break;
      case PDN_LOGTOP_BUS2X:
        DRVPDN_MDINFRA_ON(LOGTOP_BUS2X);
        break;
      case PDN_MDINFRA_BUS:
        DRVPDN_MDINFRA_ON(MDINFRA_BUS);
        break;
      case PDN_MDINFRA_ATB_CK:
        DRVPDN_MDINFRA_ON(MDINFRA_ATB_CK);
        break;
      case PDN_MDINFRA_DBG_CK:
        DRVPDN_MDINFRA_ON(MDINFRA_DBG_CK);
        break;
      
      /* MD PERI */
      case PDN_MDUART0:
        DRVPDN_MDPERI_ON(MDUART0);
        break;
      case PDN_MDGDMA:
        DRVPDN_MDPERI_ON(MDGDMA);
        break;
      case PDN_MDGPTM:
        DRVPDN_MDPERI_ON(MDGPTM);
        break;
      case PDN_USIM1_BCLK:
        DRVPDN_MDPERI_ON(USIM1_BCLK);
        break;
      case PDN_USIM2_BCLK:
        DRVPDN_MDPERI_ON(USIM2_BCLK);
        break;
      case PDN_MDEINT:
        DRVPDN_MDPERI_ON(MDEINT);
        break;
      case PDN_USIM1:
        DRVPDN_MDPERI_ON(USIM1);
        break;
      case PDN_USIM2:
        DRVPDN_MDPERI_ON(USIM2);
        break;
      case PDN_MDECT:
        DRVPDN_MDPERI_ON(MDECT);
        break;
      case PDN_MDCIRQ:
        DRVPDN_MDPERI_ON(MDCIRQ);
        break;
      case PDN_THERM_SLOW:
        DRVPDN_MDPERI_ON(THERM_SLOW);
        break;
      case PDN_MDPERI_DBG:
        DRVPDN_MDPERI_ON(MDPERI_DBG);
        break;
      case PDN_TRACE_26M:
        DRVPDN_MDPERI_ON(TRACE_26M);
        break;
      case PDN_MDGPTM_26M:
        DRVPDN_MDPERI_ON(MDGPTM_26M);
        break;
       case PDN_MDPERI_BUS:
        DRVPDN_MDPERI_ON(MDPERI_BUS);
        break;    
      case PDN_MDDBGSYS_DCM:
        DRVPDN_MDPERI_ON(MDDBGSYS_DCM);
        break;

      /* MDL1AO */
      case PDN_C2KDO_TMR:
        DRVPDN_MDL1AO_ON(C2KDO_TMR);
        break;
      case PDN_C2KDO_SLP:
        DRVPDN_MDL1AO_ON(C2KDO_SLP);
        break;
      case PDN_C2K1X_TMR:
        DRVPDN_MDL1AO_ON(C2K1X_TMR);
        break;
      case PDN_C2K1X_SLP:
        DRVPDN_MDL1AO_ON(C2K1X_SLP);
        break;
      case PDN_TDMA_SLP:
        DRVPDN_MDL1AO_ON(TDMA_SLP);
        break;
      case PDN_TDD_TMR:
        DRVPDN_MDL1AO_ON(TDD_TMR);
        break;
      case PDN_TDD_SLP:
        DRVPDN_MDL1AO_ON(TDD_SLP);
        break;
      case PDN_FDD_TMR:
        DRVPDN_MDL1AO_ON(FDD_TMR);
        break;
      case PDN_FDD_SLP:
        DRVPDN_MDL1AO_ON(FDD_SLP);
        break;
      case PDN_LTE_TMR:
        DRVPDN_MDL1AO_ON(LTE_TMR);
        break;
      case PDN_LTE_SLP:
        DRVPDN_MDL1AO_ON(LTE_SLP);
        break;
      case PDN_IDC_CTRL:
        DRVPDN_MDL1AO_ON(IDC_CTRL);
        break;
      case PDN_BPI:
        DRVPDN_MDL1AO_ON(BPI);
        break;
      case PDN_BSI:
        DRVPDN_MDL1AO_ON(BSI);
        break;
      case PDN_IDC_UART:
        DRVPDN_MDL1AO_ON(IDC_UART);
        break;
      case PDN_DVFS_CTRL:
        DRVPDN_MDL1AO_ON(DVFS_CTRL);
        break;
      case PDN_FREQM:
        DRVPDN_MDL1AO_ON(FREQM);
        break;
      case PDN_C1X_TTR:
        DRVPDN_MDL1AO_ON(C1X_TTR);
        break;
      case PDN_CDO_TTR:
        DRVPDN_MDL1AO_ON(CDO_TTR);
        break;
        
      /* IA DEBUG PERI MISC */
      case PDN_RG_ASM_CK:
        PDN_TAKE_SPINLOCK();
        DRVPDN_DEBUG_PERI_MISC_ON(RG_ASM_CK);
        PDN_GIVE_SPINLOCK();
        break;
      case PDN_RG_PDA_MON_CK:
        PDN_TAKE_SPINLOCK();
        DRVPDN_DEBUG_PERI_MISC_ON(RG_PDA_MON_CK);
        PDN_GIVE_SPINLOCK();
        break;  

      case PDN_MAX_DEV:            
            break;
    }  
    
    #if INTERRUPT_PROTECT
    RestoreIRQMask(mask);
    #endif
}

 /*------------------------------------------------------------------------
 * kal_uint32     PDN_STS(PDN_DEVICE dev)
 * Purpose:	Return the clock is enable/disable of specified module.
 * Parameters:
 *    Input:	PDN_DEVICE dev: PDN_xxx, module index.
 *    Output:	None
 * returns :	The clock is enable/disable of specified module.
 * Note    :    None
 *               
 *------------------------------------------------------------------------
 */
DRVPDN_INLINE_MODIFIER DRVPDN_INLINE kal_uint32 PDN_STS(PDN_DEVICE dev)
{
    kal_uint32 ret = 0;
    
    #if INTERRUPT_PROTECT
    kal_uint32 mask;
    mask = SaveAndSetIRQMask();
    #endif

    switch (dev)
    { /* MD INFRA */
      case PDN_MDUART1:
        ret = DRVPDN_MDINFRA_STS(MDUART1);
        break;      
      case PDN_BUSMON:
        ret = DRVPDN_MDINFRA_STS(BUSMON);
        break;
      case PDN_SOE:
        ret = DRVPDN_MDINFRA_STS(SOE);
        break;
      case PDN_LOGTOP_BCLK:
        ret = DRVPDN_MDINFRA_STS(LOGTOP_BCLK);
        break;
      case PDN_MDINFRA_ELM_ACLK:
        ret = DRVPDN_MDINFRA_STS(MDINFRA_ELM_ACLK);
        break;
      case PDN_MDINFRA_ELM_FCLK:
        ret = DRVPDN_MDINFRA_STS(MDINFRA_ELM_FCLK);
        break;
      case PDN_MDINFRA_ELM_F26M:
        ret = DRVPDN_MDINFRA_STS(MDINFRA_ELM_F26M);
        break;
      case PDN_FCS_SLV_DBCLK:
        ret = DRVPDN_MDINFRA_STS(FCS_SLV_DBCLK);
        break;
      case PDN_GCU_SLV_DBCLK:
        ret = DRVPDN_MDINFRA_STS(GCU_SLV_DBCLK);
        break;
      case PDN_TRACE_BUS2X:
        ret = DRVPDN_MDINFRA_STS(TRACE_BUS2X);
        break;
      case PDN_PPPHA_CLK:
        ret = DRVPDN_MDINFRA_STS(PPPHA_CLK);
        break;
      case PDN_SDF_HCLK:
        ret = DRVPDN_MDINFRA_STS(SDF_HCLK);
        break;
      case PDN_TRACE_PIPE:
        ret = DRVPDN_MDINFRA_STS(TRACE_PIPE);
        break;
      case PDN_TRACE_LINK:
        ret = DRVPDN_MDINFRA_STS(TRACE_LINK);
        break;
      case PDN_TRACE_SWD:
        ret = DRVPDN_MDINFRA_STS(TRACE_SWD);
        break;
      case PDN_LOGTOP_BUS2X:
        ret = DRVPDN_MDINFRA_STS(LOGTOP_BUS2X);
        break;
      case PDN_MDINFRA_BUS:
        ret = DRVPDN_MDINFRA_STS(MDINFRA_BUS);
        break;
      case PDN_MDINFRA_ATB_CK:
        ret = DRVPDN_MDINFRA_STS(MDINFRA_ATB_CK);
        break;
      case PDN_MDINFRA_DBG_CK:
        ret = DRVPDN_MDINFRA_STS(MDINFRA_DBG_CK);
        break;
      
      /* MD PERI */
      case PDN_MDUART0:
        ret = DRVPDN_MDPERI_STS(MDUART0);
        break;
      case PDN_MDGDMA:
        ret = DRVPDN_MDPERI_STS(MDGDMA);
        break;
      case PDN_MDGPTM:
        ret = DRVPDN_MDPERI_STS(MDGPTM);
        break;
      case PDN_USIM1_BCLK:
        ret = DRVPDN_MDPERI_STS(USIM1_BCLK);
        break;
      case PDN_USIM2_BCLK:
        ret = DRVPDN_MDPERI_STS(USIM2_BCLK);
        break;
      case PDN_MDEINT:
        ret = DRVPDN_MDPERI_STS(MDEINT);
        break;
      case PDN_USIM1:
        ret = DRVPDN_MDPERI_STS(USIM1);
        break;
      case PDN_USIM2:
        ret = DRVPDN_MDPERI_STS(USIM2);
        break;
      case PDN_MDECT:
        ret = DRVPDN_MDPERI_STS(MDECT);
        break;
      case PDN_MDCIRQ:
        ret = DRVPDN_MDPERI_STS(MDCIRQ);
        break;
      case PDN_THERM_SLOW:
        ret = DRVPDN_MDPERI_STS(THERM_SLOW);
        break;
      case PDN_MDPERI_DBG:
        ret = DRVPDN_MDPERI_STS(MDPERI_DBG);
        break;
      case PDN_TRACE_26M:
        ret = DRVPDN_MDPERI_STS(TRACE_26M);
        break;
      case PDN_MDGPTM_26M:
        ret = DRVPDN_MDPERI_STS(MDGPTM_26M);
        break;
       case PDN_MDPERI_BUS:
        ret = DRVPDN_MDPERI_STS(MDPERI_BUS);
        break;    
      case PDN_MDDBGSYS_DCM:
        ret = DRVPDN_MDPERI_STS(MDDBGSYS_DCM);
        break;

      /* MDL1AO */
      case PDN_C2KDO_TMR:
        ret = DRVPDN_MDL1AO_STS(C2KDO_TMR);
        break;
      case PDN_C2KDO_SLP:
        ret = DRVPDN_MDL1AO_STS(C2KDO_SLP);
        break;
      case PDN_C2K1X_TMR:
        ret = DRVPDN_MDL1AO_STS(C2K1X_TMR);
        break;
      case PDN_C2K1X_SLP:
        ret = DRVPDN_MDL1AO_STS(C2K1X_SLP);
        break;
      case PDN_TDMA_SLP:
        ret = DRVPDN_MDL1AO_STS(TDMA_SLP);
        break;
      case PDN_TDD_TMR:
        ret = DRVPDN_MDL1AO_STS(TDD_TMR);
        break;
      case PDN_TDD_SLP:
        ret = DRVPDN_MDL1AO_STS(TDD_SLP);
        break;
      case PDN_FDD_TMR:
        ret = DRVPDN_MDL1AO_STS(FDD_TMR);
        break;
      case PDN_FDD_SLP:
        ret = DRVPDN_MDL1AO_STS(FDD_SLP);
        break;
      case PDN_LTE_TMR:
        ret = DRVPDN_MDL1AO_STS(LTE_TMR);
        break;
      case PDN_LTE_SLP:
        ret = DRVPDN_MDL1AO_STS(LTE_SLP);
        break;
      case PDN_IDC_CTRL:
        ret = DRVPDN_MDL1AO_STS(IDC_CTRL);
        break;
      case PDN_BPI:
        ret = DRVPDN_MDL1AO_STS(BPI);
        break;
      case PDN_BSI:
        ret = DRVPDN_MDL1AO_STS(BSI);
        break;
      case PDN_IDC_UART:
        ret = DRVPDN_MDL1AO_STS(IDC_UART);
        break;
      case PDN_DVFS_CTRL:
        ret = DRVPDN_MDL1AO_STS(DVFS_CTRL);
        break;
      case PDN_FREQM:
        ret = DRVPDN_MDL1AO_STS(FREQM);
        break;
      case PDN_C1X_TTR:
        ret = DRVPDN_MDL1AO_STS(C1X_TTR);
        break;
      case PDN_CDO_TTR:
        ret = DRVPDN_MDL1AO_STS(CDO_TTR);
        break;
      
      /* IA DEBUG PERI MISC */
      case PDN_RG_ASM_CK:
        ret = DRVPDN_DEBUG_PERI_MISC_STS(RG_ASM_CK);
        break;
      case PDN_RG_PDA_MON_CK:
        ret = DRVPDN_DEBUG_PERI_MISC_STS(RG_PDA_MON_CK);
        break;

      case PDN_MAX_DEV:            
            break;
    }

    #if INTERRUPT_PROTECT
    RestoreIRQMask(mask);
    #endif
        
    return ret;
}

#endif // DISABLE_PDN_FOR_ISSUE

#endif /* !__DRVPDN_INLINE_ELBRUS_H__ */
