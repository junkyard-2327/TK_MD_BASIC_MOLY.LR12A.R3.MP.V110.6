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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ect.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This Module defines the HW initialization.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *
 *
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
/*******************************************************************************
 * Include header files.
 *******************************************************************************/
#include "ect.h"
#include "init.h"
#include "intrCtrl.h"
#include "reg_base.h"
#include "sleepdrv_interface.h"
#include "ex_public.h"
#include "kal_iram_section_defs.h"



//#ifdef __L1CORE__
//#include "RM_public.h"
//#include "us_timer.h"
//#endif /* __L1CORE__ */


/*******************************************************************************
 * Macro
 *******************************************************************************/
/* ECT register offsets */
#define CTIREGSZ             (0x1000)
#define CTICONTROL           (0x00)
#define CTIINTACK            (0x10)
#define CTIINEN0             (0x20)
#define CTIINEN1             (0x24)
#define CTIINEN2             (0x28)
#define CTIINEN3             (0x2C)
#define CTIINEN4             (0x30)
#define CTIINEN5             (0x34)
#define CTIINEN6             (0x38)
#define CTIINEN7             (0x3C)
                             
#define CTIOUTEN0            (0xA0)
#define CTIOUTEN1            (0xA4)
#define CTIOUTEN2            (0xA8)
#define CTIOUTEN3            (0xAC)
#define CTIOUTEN4            (0xb0)
#define CTIOUTEN5            (0xB4)
#define CTIOUTEN6            (0xB8)
#define CTIOUTEN7            (0xBC)

#define CTITRIGINSTATUS      (0x130)
#define CTITRIGOUTSTATUS     (0x134)
#define LAR                  (0xFB0)
#define LSR                  (0xFB4)
#define DEVID                (0xFC8)

#define USIP_CTI_STA         (0x14)
#define DSP_CTI_STA          (0x0C)

/*USIP CTI Status*/
#define USIP0_0_CTI_EVENT    (16)
#define USIP0_1_CTI_EVENT    (17)
#define USIP1_0_CTI_EVENT    (18)
#define USIP1_1_CTI_EVENT    (19)

#define USIP0_0_CTI_EVENT_MASK   (1 << USIP0_0_CTI_EVENT)
#define USIP0_1_CTI_EVENT_MASK   (1 << USIP0_1_CTI_EVENT)
#define USIP1_0_CTI_EVENT_MASK   (1 << USIP1_0_CTI_EVENT)
#define USIP1_1_CTI_EVENT_MASK   (1 << USIP1_1_CTI_EVENT)

/*DSP CTI Status*/
#define SCQ0_CTI_EVENT       (16)
#define SCQ1_CTI_EVENT       (17)
#define RAKE_CTI_EVENT       (18)

#define RAKE_CTI_EVENT_MASK  (1 << RAKE_CTI_EVENT)
#define SCQ0_CTI_EVENT_MASK (1 << SCQ0_CTI_EVENT)
#define SCQ1_CTI_EVENT_MASK (1 << SCQ1_CTI_EVENT)


/*the following registers should be 0x06, 0xB9, 0x4B, 0x0*/
/*#define CTIPERIPHID0    (0xFE0)*/
/*#define CTIPERIPHID1    (0xFE4)*/
/*#define CTIPERIPHID2    (0xFE8)*/
/*#define CTIPERIPHID3    (0xFEC)*/

#define CTI_MAGIC         (0xC5ACCE55)

/* Platform dependent setting */
/* CTI events */
#define IA_TRIGGER_CTI_EVENT         (0xA00601F4)

#define USIP0_TRIGGER_CTI_EVENT      (0xA1630800)
#define USIP1_TRIGGER_CTI_EVENT      (0xA1630804)
#define USIP2_TRIGGER_CTI_EVENT      (0xA1630808)
#define USIP3_TRIGGER_CTI_EVENT      (0xA163080C)

#define RAKE_TRIGGER_CTI_EVENT       (0xAC358008)
#define SCQ0_TRIGGER_CTI_EVENT       (0xABA10008)
#define SCQ1_TRIGGER_CTI_EVENT       (0xABB10008)

#define ECT_VPE_NUMS    4

#define ECT_SW_IRQ_CODE IRQ_SW_LISR30_CODE

/* REG RW */
#define REG_WRITE32(addr, val)  do{ *(volatile kal_uint32 *)(addr) = (val); }while(0)
#define REG_READ32(var, addr)   do{ (var) = *(volatile kal_uint32 *)(addr); }while(0)
/*******************************************************************************
 * Instance
 *******************************************************************************/
/* control variables */
/* g_ect_dbg_en is used to control if DSPs shoudl break when CR4s break */
/* default value is 0x1, which means DSPs dose not break if CR4s break */
/* it could be changed by CVD button */
/* 0x1 --> do not break DSPs when CR4s break (default) */
/* 0x2 --> break DSPs when CR4s break (configured by .cmm) */
__attribute__ ((section ("DRAM_EX_ROCODE"))) volatile const kal_uint32 g_ect_dbg_en = 0;
typedef enum 
{
    IA_USIP_ECT = 0,
    DSP_ECT,
    USIP_CTI_STA_ERG,
    DSP_CTI_STA_REG,
    ECT_DUMP_NUMS
}ECT_DUMP_INDEX;

#define IA_DBG_EN    (1 << 0)
#define USIP_DBG_EN  (1 << 1)
#define DSP_DBG_EN   (1 << 2)


EX_BBREG_DUMP cti_dump;

/* pointer to an array: base_1, len_1, type_1, base_2, len_2, type_2, ... */
const kal_uint32 cti_dump_regions[ECT_DUMP_NUMS][3] = {
    {IA_USIP_CTI,                      CTIREGSZ, 4,},        // IA_USIP CTI
    {DSP_CTI,                          CTIREGSZ, 4,},        // DSP CTI
	{DBG_AO_MISC + USIP_CTI_STA,	          4, 4,},		 // USIP CTI STA
	{DBG_AO_MISC + DSP_CTI_STA,	              4, 4,},		 // DSP CTI STA
	
};

//MT6763 only have 4 VPES
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ZI(4) volatile kal_uint32 ECT_VPE_Trigger_Status[ECT_VPE_NUMS] = {0};

#if 0 //def __L1CORE__
/* under construction !*/
#endif /* __L1CORE__ */

/*******************************************************************************
 * Foward declaration 
 *******************************************************************************/
kal_bool ECT_DumpCallback(void);
kal_uint32 ECT_Query_TriggerIn_Status(void);
void ECT_Register_SW_IRQ(void);
void ECT_SW_IRQ_Hdlr(kal_uint32 vector);

extern void MD_TOPSM_PLL_SW_Control(PS_PLL_FORCEON_USER USER, PS_TOPSM_PLL PLL, kal_bool fOn);

/*******************************************************************************
 * Functions 
 *******************************************************************************/
/*************************************************************************
* FUNCTION
*  ECT_Enable_DbgSys_Clock
*
* DESCRIPTION
*  ECT enable dbgsys clock
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/		
void ECT_Enable_DbgSys_Clock(void)
{
/*
    volatile kal_uint32 pll;
    REG_READ32(pll,0xA00D0a04);
    REG_WRITE32(0xA00D0a04, pll | (1 << 3));
*/
    MD_TOPSM_PLL_SW_Control(PS_PLL_FORCEON_USER_CTI, PS_TOPSM_DBG_PLL, KAL_TRUE);
}


/*************************************************************************
* FUNCTION
*  ECT_Disable_DbgSys_Clock
*
* DESCRIPTION
*  ECT enable dbgsys clock
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/		
void ECT_Disable_DbgSys_Clock(void)
{
/*
    volatile kal_uint32 pll;
    REG_READ32(pll,0xA00D0a04);
    REG_WRITE32(0xA00D0a04, pll & (~(1 << 3)));
*/    
    MD_TOPSM_PLL_SW_Control(PS_PLL_FORCEON_USER_CTI, PS_TOPSM_DBG_PLL, KAL_FALSE);
}


/*************************************************************************
* FUNCTION
*  ECT_Register_GIC_IRQ
*
* DESCRIPTION
*  ECT register gic lisr
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/		
void ECT_Register_SW_IRQ(void)
{
//mips SW IRQ
    IRQ_Register_LISR(ECT_SW_IRQ_CODE, ECT_SW_IRQ_Hdlr,"ECT SW IRQ");
    IRQSensitivity(ECT_SW_IRQ_CODE, LEVEL_SENSITIVE);
    IRQUnmask(ECT_SW_IRQ_CODE);
}


/*************************************************************************
* FUNCTION
*  ECT_Init
*
* DESCRIPTION
*  ECT initialization
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/		
void ECT_Init(void)
{
    /* enable DBG APB clock */
    ECT_Enable_DbgSys_Clock();
    

    /* enter magic key */ 
    REG_WRITE32(IA_USIP_CTI + LAR, CTI_MAGIC);
    REG_WRITE32(DSP_CTI + LAR, CTI_MAGIC);

    /* setting exception propagation */
    /* MD&uSip CTI part */
    /*********************IA_USIP_CTI**********************
        I                          O
        7   mdmcu_assert_trigger   7   usip_fiq
        6   1'b1                   6   usip_restart
        5   usip_cti_event         5   usip_dbgrq
        4   usip_dbgack            4
        3   RMPU_CTIREIGIN         3  mdmcu_ect_irq
        2                          2
        1                          1
        0   IA_DebugM              0   EJ_DINT
        **************************************************/

    REG_WRITE32(IA_USIP_CTI + CTIINEN3, CH_RMPU);
	
	
    REG_WRITE32(IA_USIP_CTI + CTIINEN5, CH_EXP);
    REG_WRITE32(IA_USIP_CTI + CTIINEN7, CH_EXP);
    
    REG_WRITE32(IA_USIP_CTI + CTIOUTEN3, CH_EXP | CH_RMPU);
    REG_WRITE32(IA_USIP_CTI + CTIOUTEN7, CH_EXP | CH_RMPU);
	
    //Default g_ect_dbg_en = 0 so IA debug channel is disalbe.
    if(g_ect_dbg_en&IA_DBG_EN)
    {
		REG_WRITE32(IA_USIP_CTI + CTIINEN0, CH_DBG);
		REG_WRITE32(IA_USIP_CTI + CTIOUTEN0, CH_DBG);
    }

    //Default g_ect_dbg_en = 0 so usip debug channel is disalbe.
    if(g_ect_dbg_en&USIP_DBG_EN)
    {
        REG_WRITE32(IA_USIP_CTI + CTIINEN4, CH_DBG);
        REG_WRITE32(IA_USIP_CTI + CTIOUTEN5, CH_DBG);
        REG_WRITE32(IA_USIP_CTI + CTIOUTEN6, CH_RST);
    }
    
    /* restart */
    //REG_WRITE32(IA_USIP_CTI + CTIINEN6,  CH_RST);
    // Note: to resume PSCORE, write 0xF00A80BC to 0x1
    
    /* DSP CTI part */
    /*********************IA_USIP_CTI**********************
        I                            O
        7                            7   
        6   1'b1                     6   
        5                            5   rake_fiq
        4                            4   scq_fiq
        3   rake_md32_cti_event      3   rake_restart
        2   scq_cti_event           2   scq_restart
        1   rake_md32_dbgack         1   rake_dbgrq
        0   scq_dbgack              0   scq_dbgrq
        **************************************************/
    REG_WRITE32(DSP_CTI + CTIINEN2, CH_EXP);
    REG_WRITE32(DSP_CTI + CTIINEN3, CH_EXP);
    
    REG_WRITE32(DSP_CTI + CTIOUTEN4, CH_EXP | CH_RMPU);
    REG_WRITE32(DSP_CTI + CTIOUTEN5, CH_EXP | CH_RMPU);
    
    //Default g_ect_dbg_en = 0 so DSP debug channel is disalbe.
    if(g_ect_dbg_en&DSP_DBG_EN)
    {
		REG_WRITE32(DSP_CTI + CTIINEN0, CH_DBG);
		REG_WRITE32(DSP_CTI + CTIINEN1, CH_DBG);
        REG_WRITE32(DSP_CTI + CTIOUTEN0, CH_DBG);
        REG_WRITE32(DSP_CTI + CTIOUTEN1, CH_DBG);
        REG_WRITE32(DSP_CTI + CTIOUTEN2, CH_RST);
        REG_WRITE32(DSP_CTI + CTIOUTEN3, CH_RST);
    }
    
    /* restart */
    //REG_WRITE32(DSP_CTI + CTIINEN6, CH_RST);
    // Note: to resume CS, write 0xF009C0AC to 0x1
    // Note: to resume MD32, write 0xF009C0A8 to 0x1    

    
   
	/* enabling CTI */
    REG_WRITE32(IA_USIP_CTI + CTICONTROL, 0x1);
    REG_WRITE32(DSP_CTI + CTICONTROL, 0x1);
    
    /* turn off debug sys clock */
    ECT_Disable_DbgSys_Clock();

    /* LISR registration */
    IRQ_Register_LISR((IRQ_ECT_CODE), ECT_Hdlr, "Embedded Cross Trigger");    
    IRQSensitivity(IRQ_ECT_CODE, LEVEL_SENSITIVE);
    IRQClearInt(IRQ_ECT_CODE);
    IRQUnmask(IRQ_ECT_CODE);

    /* bbreg dump setting */
    cti_dump.regions = (kal_uint32 *)cti_dump_regions;
    cti_dump.num = ECT_DUMP_NUMS;
    cti_dump.bbreg_dump_callback = NULL;
    EX_REGISTER_BBREG_DUMP(&cti_dump);

    ECT_Register_SW_IRQ();

}

/*************************************************************************
* FUNCTION
*  ECT_SW_IRQ_Hdlr
*
* DESCRIPTION
*  ECT SW ISRs
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/
void ECT_SW_IRQ_Hdlr(kal_uint32 vector)
{
    kal_uint32 vpe_num = kal_get_current_vpe_id();
    ECT_VPE_Trigger_Status[vpe_num] |= ECT_SRC_IA;
	
}


/*************************************************************************
* FUNCTION
*  ECT_Hdlr
*
* DESCRIPTION
*  ECT ISRs
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/
void ECT_Hdlr(kal_uint32 vector)
{

kal_uint32 vpe_num = kal_get_current_vpe_id();
#ifdef ATEST_DRV_ECT
ECT_VPE_Trigger_Status[vpe_num] += (vpe_num+1);
dbg_print("ECT Trigger, VPE: %d ",vpe_num);
IRQMask(IRQ_ECT_CODE);
 
 

#else

ECT_VPE_Trigger_Status[vpe_num] = ECT_Query_TriggerIn_Status();

#endif  //   ATEST_DRV_ECT 
}


/*************************************************************************
* FUNCTION
*  ECT_TrgExcp
*
* DESCRIPTION
*  Exception propagation
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/
void ECT_TrgExcp(void)
{  
    
	Activate_LISR(ECT_SW_IRQ_CODE); 
    REG_WRITE32(IA_TRIGGER_CTI_EVENT, 1);
}


/*************************************************************************
* FUNCTION
*  ECT_Query_TriggerIn_Status
*
* DESCRIPTION
*  
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/
kal_uint32 ECT_Query_TriggerIn_Status(void)
{
    kal_uint32 ect_st = ECT_SRC_NONE;
    kal_uint32 ia_usip_cti;
    kal_uint32 dsp_cti;    
    kal_uint32 usip_cti;    
    kal_uint32 scq_cti;    

    /* enable DBG APB clock */
    
    ECT_Enable_DbgSys_Clock();

    REG_READ32(ia_usip_cti, IA_USIP_CTI + CTITRIGINSTATUS);
    REG_READ32(dsp_cti, DSP_CTI + CTITRIGINSTATUS);
    
    if(ia_usip_cti&IA_TRIGGERIN_MASK)
        ect_st |= ECT_SRC_IA;

    if(ia_usip_cti&USIP_TRIGGERIN_MASK)
    {
        ect_st |= ECT_SRC_USIP;
        
        REG_READ32(usip_cti, DBG_AO_MISC + USIP_CTI_STA);
        
        if(usip_cti&USIP0_0_CTI_EVENT_MASK)
           ect_st |= ECT_SRC_USIP0_0;

        if(usip_cti&USIP0_1_CTI_EVENT_MASK)
           ect_st |= ECT_SRC_USIP0_1;

        if(usip_cti&USIP1_0_CTI_EVENT_MASK)
           ect_st |= ECT_SRC_USIP1_0;

        if(usip_cti&USIP1_1_CTI_EVENT_MASK)
           ect_st |= ECT_SRC_USIP1_1;
        
    }
          
    if(ia_usip_cti&RMPU_TRIGGERIN_MASK)
        ect_st |= ECT_SRC_RMPU;

        
    if(dsp_cti&RAKE_TRIGGERIN_MASK)
    {
		ect_st |= ECT_SRC_RAKE;
	}
        
    if(dsp_cti&SCQ_TRIGGERIN_MASK)
    {
		ect_st |= ECT_SRC_SCQ;
		
        REG_READ32(scq_cti, DBG_AO_MISC + DSP_CTI_STA);

        if(scq_cti&SCQ0_CTI_EVENT_MASK)
           ect_st |= ECT_SRC_SCQ0;

        if(scq_cti&SCQ1_CTI_EVENT_MASK)
           ect_st |= ECT_SRC_SCQ1;

	}

    return ect_st;
}


/*************************************************************************
* FUNCTION
*  ECT_Query
*
* DESCRIPTION
*  
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/
kal_uint32 ECT_Query(void)
{
	kal_uint32 vpe_num = kal_get_current_vpe_id();
    return ECT_VPE_Trigger_Status[vpe_num];

}


/*************************************************************************
* FUNCTION
*  ECT_QueryByVPE
*
* DESCRIPTION
*  
*  Query ECT status value by input VPE
*
* PARAMETERS
*  
*  vpe_num: vep number
*
* RETURNS
*
*  ECT status
*
*************************************************************************/
kal_uint32 ECT_QueryByVPE(kal_uint32 vpe_num)
{
    if(vpe_num < ECT_VPE_NUMS)
	    return ECT_VPE_Trigger_Status[vpe_num];
	else
		return ECT_SRC_INVALID_VPE;
}


/*************************************************************************
* FUNCTION
*  ECT_IsEnabled
*
* DESCRIPTION
*  
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/
kal_uint32 ECT_IsEnabled(void)
{
	kal_uint32 ia_usip_cti_sta, dsp_cti_sta; 
	
	REG_READ32(ia_usip_cti_sta, IA_USIP_CTI + CTICONTROL);
	REG_READ32(dsp_cti_sta, DSP_CTI + CTICONTROL);
	
	return ia_usip_cti_sta && dsp_cti_sta;
}


/*************************************************************************
* FUNCTION
*  ECT_DumpCallback 
*
* DESCRIPTION
*  ECT callback for register dump, it turns on the dbg apb clock 
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/
kal_bool ECT_DumpCallback(void)
{
    // todo: uncomment the following code once ELBRUS TOPSM API is ready
    ECT_Enable_DbgSys_Clock();

    return KAL_TRUE;
}




/*************************************************************************
* FUNCTION
*  ECT_GetMDTriggerOut
*
* DESCRIPTION
*  
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/
kal_uint32 ECT_GetMDTriggerOut(void)
{
	kal_uint32 trigger_out; 
	
	REG_READ32(trigger_out, IA_USIP_CTI + CTITRIGOUTSTATUS);
	
	return trigger_out;
}

/*************************************************************************
* FUNCTION
*  ECT_GetDSPTriggerOut
*
* DESCRIPTION
*  
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/
kal_uint32 ECT_GetDSPTriggerOut(void)
{
	kal_uint32 trigger_out; 
	
	REG_READ32(trigger_out, DSP_CTI + CTITRIGOUTSTATUS);
	
	return trigger_out;
}


/*************************************************************************
* FUNCTION
*  ECT_GetMDTriggerIn
*
* DESCRIPTION
*  
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/
kal_uint32 ECT_GetMDTriggerIn(void)
{
	kal_uint32 trigger_in; 
	
	REG_READ32(trigger_in, IA_USIP_CTI + CTITRIGINSTATUS);
	
	return trigger_in;
}

/*************************************************************************
* FUNCTION
*  ECT_GetDSPTriggerIn
*
* DESCRIPTION
*  
*
* PARAMETERS
*  
*
* RETURNS
*
*
*************************************************************************/
kal_uint32 ECT_GetDSPTriggerIn(void)
{
	kal_uint32 trigger_in; 
	
	REG_READ32(trigger_in, DSP_CTI + CTITRIGINSTATUS);
	
	return trigger_in;
}

/*************************************************************************
* FUNCTION
*  ECT_TrgAck
*
* DESCRIPTION
*  ECT Trigger Ack
*
* PARAMETERS
* kal_uint32 src: trigger in status
*
* RETURNS
*
*
*************************************************************************/
void ECT_TrgAck(kal_uint32 src)
{
    volatile kal_uint32 event_addr;

    if((src & ECT_SRC_IA) == ECT_SRC_IA)
    {
        event_addr = IA_TRIGGER_CTI_EVENT;
        REG_WRITE32(event_addr, 0);
    }
    if((src & ECT_SRC_USIP0_0) == ECT_SRC_USIP0_0)
    {
        event_addr = USIP0_TRIGGER_CTI_EVENT;
        REG_WRITE32(event_addr, 0);
    }
    if((src & ECT_SRC_USIP0_1) == ECT_SRC_USIP0_1)
    {
        event_addr = USIP1_TRIGGER_CTI_EVENT;
        REG_WRITE32(event_addr, 0);
    }
    if((src & ECT_SRC_USIP1_0) == ECT_SRC_USIP1_0)
    {
        event_addr = USIP2_TRIGGER_CTI_EVENT;
        REG_WRITE32(event_addr, 0);
    }
    if((src & ECT_SRC_USIP1_1) == ECT_SRC_USIP1_1)
    {
        event_addr = USIP3_TRIGGER_CTI_EVENT;
        REG_WRITE32(event_addr, 0);
   }
    if((src & ECT_SRC_SCQ0) == ECT_SRC_SCQ0)
    {
        event_addr = SCQ0_TRIGGER_CTI_EVENT;
        REG_WRITE32(event_addr, 0);
    }
    if((src & ECT_SRC_SCQ1) == ECT_SRC_SCQ1)
    {
        event_addr = SCQ1_TRIGGER_CTI_EVENT;
        REG_WRITE32(event_addr, 0);
    }

    REG_WRITE32(event_addr, 0);
    MO_Sync();
    REG_WRITE32(IA_USIP_CTI+CTIINTACK, (IA_TRIGGEROUT_MASK+USIP_TRIGGEROUT_MASK));
    REG_WRITE32(DSP_CTI+CTIINTACK, (RAKE_TRIGGEROUT_MASK+SCQ_TRIGGEROUT_MASK));
    MO_Sync();
}

/*************************************************************************
* FUNCTION
*  ECT_DisableRMPUTriggerOut
*
* DESCRIPTION
*  Disable RMPU channel trigger out
*
* PARAMETERS
*
*
* RETURNS
*
*
*************************************************************************/
void ECT_DisableRMPUTriggerOut(void)
{
    REG_WRITE32(IA_USIP_CTI + CTIOUTEN3, CH_EXP);
    REG_WRITE32(IA_USIP_CTI + CTIOUTEN7, CH_EXP);
    MO_Sync();

    REG_WRITE32(IA_USIP_CTI+CTIINTACK, (IA_TRIGGEROUT_MASK+USIP_TRIGGEROUT_MASK));
    REG_WRITE32(DSP_CTI+CTIINTACK, (RAKE_TRIGGEROUT_MASK+SCQ_TRIGGEROUT_MASK));
    MO_Sync();
}

