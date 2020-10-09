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
 *   drv_dcm.c
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * Jun-Ying Huang  (mtk09276)
 *
 *
 * ==========================================================================
 * $Log$
 *
 * 12 25 2018 jun-ying.huang
 * [MOLY00366325] [Talbot SB call for check-in] Add Macro for MT6768
 * .
 *
 * 01 22 2018 jun-ying.huang
 * [MOLY00303289] [Merlot call for check-in][PLL][DCM]Add Macro for MT6761(=Merlot)
 * .
 *
 * 10 25 2017 jun-ying.huang
 * [MOLY00285159] [PLL][DCM]Add Macro for MT6765(=Cervino)
 * .
 *
 * 09 07 2017 jun-ying.huang
 * [MOLY00275781] [BIANCO][MT6763][RDIT][L+L][FT][CMCC][GZ][TDL Case][2.1.4][Use HTTP service during VoLTE video call][Regression 5] EE, file:mcu/pcore/modem/el2/isr/txisr/src/emac_slp.c line:1000
 * Correct DCM golden setting due to CODA error.
 *
 * 08 31 2017 jun-ying.huang
 * [MOLY00275077] [6293][ZION][Sylvia]Update BRP DCM from /16 to /8, request from DE
 * .
 *
 * 08 22 2017 jun-ying.huang
 * [MOLY00272758] [Sylvia][DCM]Update DCM golden setting for MT6771 due to Sylvia MT6771 Call for check in
 * .
 *
 * 08 04 2017 jun-ying.huang
 * [MOLY00268748] [6293][DCM] Update BRP dcm to /16
 * .
 *
 * 07 12 2017 jun-ying.huang
 * [MOLY00263795] [6293][ZION][DCM]Update golden setting for LV1 RAKE DCM to /12
 * .
 *
 * 06 29 2017 jun-ying.huang
 * [MOLY00260702] [ZION]MDCORE DCM support /10 from ZION
 * .
 *
 * 06 09 2017 jun-ying.huang
 * [MOLY00256443] [ZION]MDCORE support /20 from ZION
 * .
 *
 * 06 01 2017 jun-ying.huang
 * [MOLY00254182] [Bianco] Update MDMCU Lv3 DCM (ia_dcm) driver framework (disabled)
 * Support Lv3 IA DCM AT command
 *
 * 05 10 2017 jun-ying.huang
 * [MOLY00247983] [MT6763][DCM]Apply golden setting(mask MDGPT idle signal) to let BUS2X DCM could enable.
 * .
 *
 * 05 02 2017 jun-ying.huang
 * [MOLY00244529] [MT6763][DCM]Mask MDGPT idle signal to apply golden setting and add LPM driver to debug DCM issue.
 * GPT issue request to roll back GPT DCM mask to test.
 *
 * 04 26 2017 jun-ying.huang
 * [MOLY00244529] [MT6763][DCM]Mask MDGPT idle signal to apply golden setting and add LPM driver to debug DCM issue.
 * .
 *
 * 04 14 2017 jun-ying.huang
 * [MOLY00241010] [MT6763][DCM][PLL]Enable mdsys_bus2x & fesys_bus2x power aware and update PLL driver to apply golden setting
 * .
 *
 * 04 07 2017 jun-ying.huang
 * [MOLY00240310] [MT6763][DCM]Update Lv2 IA DCM driver
 * .
 *
 * 04 05 2017 jun-ying.huang
 * [MOLY00239373] [MT6763][DCM]Enable MD DCM feature
 * .
 *
 * 03 30 2017 jun-ying.huang
 * [MOLY00238575] [MT6293][DCM]Update DCM driver & DCM service
 * .
 *
 * 03 06 2017 jun-ying.huang
 * [MOLY00226321] [6293]DCM & Sleep Flow Integration and Verification
 * 1st version of 6293 DCM.(Function ready but function disable).
 *
 * 01 04 2017 jun-ying.huang
 * [MOLY00210301] [System service][DCM]DCM driver and DCM_Handler() implementation
 * Add BB reg dump
 *
 * 12 28 2016 jun-ying.huang
 * [MOLY00221268] [6293][System service][Idle task]Create idle task on VPE1 & VPE3
 * Add idle task and update DCM driver
 *
 * 12 20 2016 jun-ying.huang
 * [MOLY00210301] [System service][DCM]DCM driver and DCM_Handler() implementation
 * Draft version of 6293 DCM_Service_Handler.(Function ready but function disable)
 *
 * 12 06 2016 jun-ying.huang
 * [MOLY00216862] [MT6293] Sleep Flow Integration
 * Draft version of 6293 DCM_Service_Handler.(Function not ready)
 *
 * 10 28 2016 jun-ying.huang
 * [MOLY00210301] [System service][DCM]DCM driver and DCM_Handler() implementation
 * Draft version of 6293 DCM_Handler.(Function not ready)
 *
 *
 ****************************************************************************/
#ifdef __MTK_TARGET__

#include "kal_public_api.h"
#include "kal_hrt_api.h"
#include "us_timer.h"
#include "intrCtrl.h"         /* IRQ Mask/Unmask */

#include "drvpdn.h"
#include "drv_dcm.h"
#include "drv_comm.h"
#include "dcm_sw.h"
#include "mips_ia_utils.h"


kal_uint32 dcm_lock_caller[32];/* Record the caller who lock(disable) DCM. */

typedef struct 
{
    kal_uint32   dcmDisable;                    /* Default not disable DCM */
    kal_uint32   dcmHandleCount;   
} DCM_STATUS; 

DCM_STATUS dcm_status;

/* --------- Below Function nouse, for backward compatible. */
kal_uint8 DCM_GetHandle(void)
{
    return 0;
}

void DCM_Enable(kal_uint8 handle) {}
void DCM_Disable(kal_uint8 handle) {}
/* --------- Above Function nouse, for backward compatible. */

/* DCM_ENABLE define in project's makefile (MCU_DCM = DCM_DISABLE/DCM_ENABLE ). But we remove it from 6293. */
/* DCM_SUPPORT define in dcm_sw.h */
#if defined(DCM_SUPPORT)

#if defined(__MTK_TARGET__)
#include "ex_public.h"
EX_BBREG_DUMP dcm_dump;
const kal_uint32 dcm_dump_regions[] = {
   MDGLOBAL_DCM_BASE,   0x70, 4,    
   REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_CONFG,   0x10, 4,   
   BASE_MADDR_MEMSLP_CONFG,   0x10, 4,
   BASE_MADDR_CLK_CTRL, 0x20, 4,
   (BASE_MADDR_CLK_CTRL+0x110), 0x20, 4,
   L1_BASE_MADDR_AO_CONFG, 0x60, 4   
};

static void dcm_dump_BB_Reg()
{
   /* register bb reg dump */
   dcm_dump.regions = (kal_uint32*)dcm_dump_regions;
   dcm_dump.num = sizeof(dcm_dump_regions) / (sizeof(kal_uint32) * 3);
   dcm_dump.bbreg_dump_callback = NULL;
   EX_REGISTER_BBREG_DUMP(&dcm_dump);
}
#endif 

/*****************************************************************************
 * Internal Function                                                          *
 *****************************************************************************/
static void dcm_ia_dcm_init(void)
{
    /* DE told we should only config bit 23&24 to 1 and no other user except us. */
    DRV_WriteReg32(REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_WAKEUP_MASK, (1<<23)|(1<<24) );

    /* Mask 1. per-VPE's local timer(CP0_Compare, CP0_Count) interrupt, 2. per-VPE's Performance counter interrupt, 
       3. per-VPE's Fast debug channel interrupt wakeup source since we will not use it */
    DRV_WriteReg32(REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_WAKEUP_MASK, (DRV_Reg32(REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_WAKEUP_MASK)|0x39CE7));
    
    DCM_IA_DCM_Control(KAL_TRUE, DCM_IA_DCM_MEMSLP_AND_CLK_DISABLE);

    /* CORE0 help CORE1 enable IA_DCM_enable_Core1_control_path at 1st time. */
    DRV_WriteReg32(REG_MEMSLP_CONFG_MEMSLP_GRP_ENA, 0x7);

    MO_Sync();
}

/* For DCM in "MDPERI_CLKCTL", "MODEML1_AO_CONFIG" and "mdperisys_ao_misc" */
static void dcm_misc_dcm_control(kal_uint32 en)
{
    if(en)
    {/* Enable DCM */
        /*--MDPERI_CLKCTL--*/
        PDN_CLR(PDN_MDINFRA_BUS);//Config MDINFRA_CKEN(0xA01C000C) bit 28 to 1. Enable MDINFRA Bus DCM
        PDN_CLR(PDN_MDPERI_BUS);//Config MDPERI_CKEN(0xA01C0018) bit 28 to 1. Enable MDPERI Bus DCM

        /*--MODEML1_AO_CONFIG--*/
        //Config MDL1AO_CON6(0xA6020000) bit 0 & bit 1 to 1, enable mdsys_bus2x_power_aware & fesys_bus2x_power_aware.
        DRV_WriteReg32(REG_MDL1AO_CON6, (DRV_Reg32(REG_MDL1AO_CON6)|0x3));

        /* Mask idle signal of MDDBGSYS & MDGPT to let BUS2x enter DCM. */
        DRV_WriteReg32(REG_MD_PERI_DCM_MASK_SET, 0x80000004);
        
    #if 0 /* Disable it due to it would cause ELM ASSERT. */
/* under construction !*/
/* under construction !*/
    #else /* Due to the power saving is very samll, we still disable it for safe. */
        /*--mdperisys_ao_misc--*//* Enable HW auto CG gated.(only enable rg_mdsys_bus_pwr_aware) */    
        //DRV_WriteReg32(REG_MDPERISYS_AO_MISC_MDMCU_CLK_EN, (DRV_Reg32(REG_MDPERISYS_AO_MISC_MDMCU_CLK_EN)|0x10));    
    #endif  
    
    }
    else
    {/* Disable DCM */
        /*--MDPERI_CLKCTL--*/
        PDN_SET(PDN_MDINFRA_BUS);//Config MDINFRA_CKEN(0xA01C000C) bit 28 to 0. Disable MDINFRA Bus DCM
        PDN_SET(PDN_MDPERI_BUS);//Config MDPERI_CKEN(0xA01C0018) bit 28 to 0. Disable MDPERI Bus DCM

        /*--MODEML1_AO_CONFIG--*/
        //Config MDL1AO_CON6(0xA6020000) bit 0 & bit 1 to 0, disable mdsys_bus2x_power_aware & fesys_bus2x_power_aware.
        DRV_WriteReg32(REG_MDL1AO_CON6, (DRV_Reg32(REG_MDL1AO_CON6)&0xFFFFFFFC));

        /* Unmask idle signal of MDDBGSYS & MDGPT. */
        DRV_WriteReg32(REG_MD_PERI_DCM_MASK_CLR, 0x80000004);
   
        /*--mdperisys_ao_misc--*//* Disable HW auto CG gated.(rg_mdcore_bus_pwr_aware & rg_mdsys_bus_pwr_aware) */    
        //DRV_WriteReg32(REG_MDPERISYS_AO_MISC_MDMCU_CLK_EN, (DRV_Reg32(REG_MDPERISYS_AO_MISC_MDMCU_CLK_EN)&0xFFFFFFCF));  
    }
    MO_Sync();
}

void DCM_Lv1_MDMCU_DCM_control(kal_uint32 en)
{/* If DCM enable, clock would be clock/X when idle. */
#if defined(MT6763)/* only BIANCO clock/2 */    
    if(en)
    {
        //MDCORE(MDMCU & uSIP) clock DCM enable
        DRV_WriteReg32(REG_MDTOP_GLBCON_MDCORE_DCM_CTL0,0x10701006);
        DRV_WriteReg32(REG_MDTOP_GLBCON_MDMCU_DCM_CTL1,0x0000003f);
    }
    else
    {
        //MDCORE(MDMCU & uSIP) clock DCM disable
        DRV_WriteReg32(REG_MDTOP_GLBCON_MDCORE_DCM_CTL0, 0x10701004);
        DRV_WriteReg32(REG_MDTOP_GLBCON_MDMCU_DCM_CTL1, 0x00000022);
    }
#else /* other(ZION, SYLVIA, CERVINO, MERLOT, TALBOT) is clock/10 */
    if(en)
    {
        //MDCORE(MDMCU & uSIP) clock DCM enable
        DRV_WriteReg32(REG_MDTOP_GLBCON_MDCORE_DCM_CTL0,0x10709006);
        DRV_WriteReg32(REG_MDTOP_GLBCON_MDMCU_DCM_CTL1,0x0000003f);
    }
    else
    {
        //MDCORE(MDMCU & uSIP) clock DCM disable
        DRV_WriteReg32(REG_MDTOP_GLBCON_MDCORE_DCM_CTL0, 0x10709004);
        DRV_WriteReg32(REG_MDTOP_GLBCON_MDMCU_DCM_CTL1, 0x00000022);
    }
#endif

    DRV_WriteReg32(REG_MDTOP_GLBCON_MDMCU_DCM_CTL1,0x0);   
}

void DCM_Lv1_BUS_DCM_control(kal_uint32 en)
{/* If DCM enable, clock would be clock/5 when idle. */
    if(en)
    {
        //MDSYS_BUS clock DCM enable
        DRV_WriteReg32(REG_MDTOP_GLBCON_MDSYS_BUS_DCM_CTL0,0x10704006);
        DRV_WriteReg32(REG_MDTOP_GLBCON_MDSYS_BUS_DCM_CTL1,0x0000003f);
    }
    else
    {
        //MDSYS_BUS clock DCM disable
        DRV_WriteReg32(REG_MDTOP_GLBCON_MDSYS_BUS_DCM_CTL0, 0x10704004);
        DRV_WriteReg32(REG_MDTOP_GLBCON_MDSYS_BUS_DCM_CTL1, 0x00000022);
    }

    DRV_WriteReg32(REG_MDTOP_GLBCON_MDSYS_BUS_DCM_CTL1,0x0);   
}

void DCM_Lv1_VDSP_DCM_control(kal_uint32 en)
{/* If DCM enable, clock would be clock/6 when idle. */
    if(en)
    {
        //VDSP clock DCM enable
        DRV_WriteReg32(REG_MDTOP_GLBCON_VDSP_DCM_CTL0,0x10705006);
        DRV_WriteReg32(REG_MDTOP_GLBCON_VDSP_DCM_CTL1,0x0000003f);
    }
    else
    {
        //VDSP clock DCM disable
        DRV_WriteReg32(REG_MDTOP_GLBCON_VDSP_DCM_CTL0, 0x10705004);
        DRV_WriteReg32(REG_MDTOP_GLBCON_VDSP_DCM_CTL1, 0x00000022);
    }

    DRV_WriteReg32(REG_MDTOP_GLBCON_VDSP_DCM_CTL1,0x0); 
}

void DCM_Lv1_BRP_DCM_control(kal_uint32 en)
{/* If DCM enable, clock would be clock/8 when idle. */
    if(en)
    {
        //BRP clock DCM enable
        DRV_WriteReg32(REG_MDTOP_GLBCON_BRP_DCM_CTL0,0x10707006);
        DRV_WriteReg32(REG_MDTOP_GLBCON_BRP_DCM_CTL1,0x0000003f);
    }
    else
    {
        //BRP clock DCM disable
        DRV_WriteReg32(REG_MDTOP_GLBCON_BRP_DCM_CTL0, 0x10707004);
        DRV_WriteReg32(REG_MDTOP_GLBCON_BRP_DCM_CTL1, 0x00000022);
    }

    DRV_WriteReg32(REG_MDTOP_GLBCON_BRP_DCM_CTL1,0x0);
}

void DCM_Lv1_RAKE_DCM_control(kal_uint32 en)
{/* If DCM enable, clock would be clock/X when idle. */
#if defined(MT6739)/* only ZION clock/12 */    
    if(en)
    {
        //RAKE clock DCM enable
        DRV_WriteReg32(REG_MDTOP_GLBCON_RAKE_DCM_CTL0,0x1070b006);
        DRV_WriteReg32(REG_MDTOP_GLBCON_RAKE_DCM_CTL1,0x0000003f);
    }
    else
    {
        //RAKE clock DCM disable
        DRV_WriteReg32(REG_MDTOP_GLBCON_RAKE_DCM_CTL0, 0x1070b004);
        DRV_WriteReg32(REG_MDTOP_GLBCON_RAKE_DCM_CTL1, 0x00000022);
    }
#else /* other(BIANCO, SYLVIA, CERVINO) is clock/16 */
    if(en)
    {
        //RAKE clock DCM enable
        DRV_WriteReg32(REG_MDTOP_GLBCON_RAKE_DCM_CTL0,0x1070f006);
        DRV_WriteReg32(REG_MDTOP_GLBCON_RAKE_DCM_CTL1,0x0000003f);
    }
    else
    {
        //RAKE clock DCM disable
        DRV_WriteReg32(REG_MDTOP_GLBCON_RAKE_DCM_CTL0, 0x1070f004);
        DRV_WriteReg32(REG_MDTOP_GLBCON_RAKE_DCM_CTL1, 0x00000022);
    }
#endif

    DRV_WriteReg32(REG_MDTOP_GLBCON_RAKE_DCM_CTL1,0x0);    
}

void DCM_Lv1_TXSYS_DCM_control(kal_uint32 en)
{/* If DCM enable, clock would be clock/32 when idle. */
    if(en)
    {
        //TXSYS clock DCM enable
        DRV_WriteReg32(REG_MDTOP_GLBCON_TXSYS_DCM_CTL0,0x1071f006);
        DRV_WriteReg32(REG_MDTOP_GLBCON_TXSYS_DCM_CTL1,0x0000003f);
    }
    else
    {
        //TXSYS clock DCM disable
        DRV_WriteReg32(REG_MDTOP_GLBCON_TXSYS_DCM_CTL0, 0x1071f004);
        DRV_WriteReg32(REG_MDTOP_GLBCON_TXSYS_DCM_CTL1, 0x00000022);
    }

    DRV_WriteReg32(REG_MDTOP_GLBCON_TXSYS_DCM_CTL1,0x0);  
}

void DCM_Lv1_CSSYS_DCM_control(kal_uint32 en)
{/* If DCM enable, clock would be clock/32 when idle. */
    if(en)
    {
        //CSSYS clock DCM enable
        DRV_WriteReg32(REG_MDTOP_GLBCON_CSSYS_DCM_CTL0,0x1071f006);
        DRV_WriteReg32(REG_MDTOP_GLBCON_CSSYS_DCM_CTL1,0x0000003f);
    }
    else
    {
        //CSSYS clock DCM disable
        DRV_WriteReg32(REG_MDTOP_GLBCON_CSSYS_DCM_CTL0, 0x1071f004);
        DRV_WriteReg32(REG_MDTOP_GLBCON_CSSYS_DCM_CTL1, 0x00000022);
    }

    DRV_WriteReg32(REG_MDTOP_GLBCON_CSSYS_DCM_CTL1,0x0);
}

static void dcm_lv1_dcm_allon(void)
{
    DCM_Lv1_MDMCU_DCM_control(1);
    DCM_Lv1_BUS_DCM_control(1);
    DCM_Lv1_VDSP_DCM_control(1);
    DCM_Lv1_BRP_DCM_control(1); 
    DCM_Lv1_RAKE_DCM_control(1); 
    DCM_Lv1_TXSYS_DCM_control(1);
    DCM_Lv1_CSSYS_DCM_control(1);

    MO_Sync();
}

static void dcm_lv1_dcm_alloff(void)
{
    DCM_Lv1_MDMCU_DCM_control(0);
    DCM_Lv1_BUS_DCM_control(0);
    DCM_Lv1_VDSP_DCM_control(0);
    DCM_Lv1_BRP_DCM_control(0); 
    DCM_Lv1_RAKE_DCM_control(0); 
    DCM_Lv1_TXSYS_DCM_control(0);
    DCM_Lv1_CSSYS_DCM_control(0);

    MO_Sync();
}

#endif /*defined(DCM_SUPPORT)*/

/*****************************************************************************
 * Public Function for users                                                          *
 *****************************************************************************/

 /*------------------------------------------------------------------------
 * void        DCM_IA_DCM_Control
 * Purpose:    Enable/Disable IA's DCM function.
 * Parameters:
 *    Input:	kal_uint32 enable: 
 *                            KAL_TRUE==>  Enable IA DCM function by mode.
 *                            KAL_FALSE==> IA DCM totally disable.
 *              DCM_IA_DCM_CONTROL_MODE mode: 
 *                            DCM_IA_DCM_ONLY_CLK_DISABLE==> Only enable clock disable @ WAIT
 *                            DCM_IA_DCM_MEMSLP_AND_CLK_DISABLE==> Enable memslp function and clock disable @ WAIT.
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    Only VPE0 could call this function.
 *              
 *------------------------------------------------------------------------
 */
void DCM_IA_DCM_Control(kal_bool enable, DCM_IA_DCM_CONTROL_MODE mode)
{
#if defined(DCM_SUPPORT)    
    kal_uint32    vpe_id = 0, caller_LR = 0;    

    GET_RETURN_ADDRESS(caller_LR);

    vpe_id = kal_get_current_vpe_id();

    if(vpe_id!=0)
    {
        EXT_ASSERT(0, vpe_id, caller_LR, mode);
    }

  #if defined(__PRODUCTION_RELEASE__)
    /* No Check in User load */
  #else  /* Eng load */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
  #endif    

    /* If we are not the only one user, maybe we should update it every time. */
//    temp = DRV_Reg32(REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_WAKEUP_MASK);
    
    if(enable==KAL_TRUE && dcm_status.dcmDisable == 0)
    {/* When enable==KAL_TRUE and no one disable DCM, it would be really enable.  */
        if(mode==DCM_IA_DCM_ONLY_CLK_DISABLE)
        {
            DRV_WriteReg32(REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_CONFG, 0x6);
//            DRV_WriteReg32(REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_WAKEUP_MASK, (temp|0x1800000));
        }
        else if(mode==DCM_IA_DCM_MEMSLP_AND_CLK_DISABLE)
        {
            DRV_WriteReg32(REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_CONFG, 0x55);
//            DRV_WriteReg32(REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_WAKEUP_MASK, (temp|0x1800000));            
        }
        else
        {
            EXT_ASSERT(0, vpe_id, caller_LR, mode);
        }
    }
    else
    {/* Disable IA DCM */
        DRV_WriteReg32(REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_CONFG, 0x4);
//        DRV_WriteReg32(REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_WAKEUP_MASK, (temp&(~0x1800000)));
    }   

    MO_Sync();
#endif    
}

 /*------------------------------------------------------------------------
 * void        DCM_IA_DCM_Core1_Memslp_Path_Control
 * Purpose:    Enable/Disable Core1's control path for memslp function.
 * Parameters:
 *    Input:	kal_bool enable: 
 *                            KAL_TRUE==> Enable Core1's control path for memslp function
 *                            KAL_FALSE==> Disable Core1's control path for memslp function.
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    Before core1 is going to power down, we should disable Core1's control path for memslp function.
 *              This function only valid when IA_DCM_MEMSLP_AND_CLK_DISABLE mode.
 *------------------------------------------------------------------------
 */
void DCM_IA_DCM_Core1_Memslp_Path_Control(kal_bool enable)
{
#if defined(DCM_SUPPORT)
    kal_uint32    vpe_id = 0, caller_LR = 0;    

    GET_RETURN_ADDRESS(caller_LR);

    vpe_id = kal_get_current_vpe_id();

    if(vpe_id!=2)
    {
        EXT_ASSERT(0, vpe_id, caller_LR, enable);
    }
    
    if(enable==KAL_TRUE)
    {/* Enable Core1's control path for memslp function */
        DRV_WriteReg32(REG_MEMSLP_CONFG_MEMSLP_GRP_ENA, 0x7);
    }
    else
    {/* Disable Core1's control path for memslp function. */
        DRV_WriteReg32(REG_MEMSLP_CONFG_MEMSLP_GRP_ENA, 0x3);
    } 

    MO_Sync();
#endif    
}

 /*------------------------------------------------------------------------
 * kal_bool    DCM_Query_Status
 * Purpose:    Return the DCM function is enable or not.
 * Parameters:
 *    Input:	None.
 *              
 *    Output:	None.
 * returns :	KAL_TRUE(DCM enable)/KAL_FALSE(DCM disable). 
 * Note    :    None.
 *              
 *------------------------------------------------------------------------
 */
kal_bool DCM_Query_Status(void)
{
#if defined(DCM_SUPPORT)    
    kal_bool status;

    /* To protect dcm_status.dcmDisable. */
    kal_hrt_take_itc_lock(KAL_ITC_DCM, KAL_INFINITE_WAIT);
    
    if(dcm_status.dcmDisable == 0)
    {/* No one disable DCM==> DCM enable */
        status = KAL_TRUE;
    }
    else
    {
        status = KAL_FALSE;
    }

    kal_hrt_give_itc_lock(KAL_ITC_DCM);

    return status;    
#else
    return KAL_FALSE;
#endif
} 

 /*------------------------------------------------------------------------
 * void        DCM_SW_Unlock
 * Purpose:    Other module could use this function to clarify DCM could be enable.
 * Parameters:
 *    Input:	DCM_LOCK_UNLOCK_MODULE module: DCM_LOCK_UNLOCK_MODULE_xxx in "dcm_sw.h", module number.
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    None.
 *              
 *------------------------------------------------------------------------
 */
void DCM_SW_Unlock(DCM_LOCK_UNLOCK_MODULE module)
{   
#if defined(DCM_SUPPORT)
    kal_uint32 caller;
    GET_RETURN_ADDRESS(caller);

    EXT_ASSERT(module < DCM_LOCK_UNLOCK_MODULE_END, caller, 0, 0);

    kal_hrt_take_itc_lock(KAL_ITC_DCM, KAL_INFINITE_WAIT);

    dcm_status.dcmDisable &= ~(1 << module);   
    dcm_lock_caller[module] = 0;

    if(0 == dcm_status.dcmDisable)
    {        
        dcm_lv1_dcm_allon();
        dcm_misc_dcm_control(1);

        /* No need to call this function due to it is controled in DCM_Service_Handler() automatically */
        //DCM_IA_DCM_Control(KAL_TRUE, DCM_IA_DCM_MEMSLP_AND_CLK_DISABLE);

        mips_ia_lv3_dcm_enable(1);        
    }
    
    kal_hrt_give_itc_lock(KAL_ITC_DCM);
#endif  
}

 /*------------------------------------------------------------------------
 * void        DCM_SW_Lock
 * Purpose:    Other module could use this function to clarify DCM could NOT be enable.
 * Parameters:
 *    Input:	DCM_LOCK_UNLOCK_MODULE module: DCM_LOCK_UNLOCK_MODULE_xxx in "dcm_sw.h", module number
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    None.
 *              
 *------------------------------------------------------------------------
 */
void DCM_SW_Lock(DCM_LOCK_UNLOCK_MODULE module)
{
#if defined(DCM_SUPPORT)
    kal_uint32 caller;
    GET_RETURN_ADDRESS(caller);

    EXT_ASSERT(module < DCM_LOCK_UNLOCK_MODULE_END, caller, 0, 0);

    kal_hrt_take_itc_lock(KAL_ITC_DCM, KAL_INFINITE_WAIT);
    
    dcm_lock_caller[module] = caller;
    dcm_status.dcmDisable |= (1 << module);

    dcm_lv1_dcm_alloff();
    dcm_misc_dcm_control(0);

    /* Due to DCM_IA_DCM_Control() could only be called by VPE0, we disable IA_DCM by Reg here. */
    //DCM_IA_DCM_Control(KAL_FALSE, DCM_IA_DCM_OFF);
    DRV_WriteReg32(REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_CONFG, 0x4);

    mips_ia_lv3_dcm_enable(0);
    
    kal_hrt_give_itc_lock(KAL_ITC_DCM);
#endif   
}

 /*------------------------------------------------------------------------
 * void    DCM_Init
 * Purpose:	   Init DCM functions.
 * Parameters:
 *    Input:	None.
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    Called in CORE 0 VPE 0 IdleTask and only execute once. Only CORE 0 VPE 0 could call this function.
 *              
 *------------------------------------------------------------------------
 */
void DCM_Init(void)
{	
#if defined(DCM_SUPPORT)

    if(0 == kal_get_current_vpe_id())
    {
        dcm_ia_dcm_init(); 
        dcm_misc_dcm_control(1);
        dcm_lv1_dcm_allon();
        
  #if defined(__MTK_TARGET__)
        dcm_dump_BB_Reg();
  #endif	 
    }
    else
    {
        ASSERT(0);
    }

#endif /* DCM_SUPPORT */
}

#endif /* __MTK_TARGET__ */ 
