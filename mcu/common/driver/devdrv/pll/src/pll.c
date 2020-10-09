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
 *   pll.c
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   PLL Related Functions
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 01 07 2019 jun-ying.huang
 * [MOLY00376830] [Talbot][PLL]Update PLL 26M settle time
 * .
 *
 * 12 25 2018 jun-ying.huang
 * [MOLY00366325] [Talbot SB call for check-in] Add Macro for MT6768
 * .
 *
 * 01 22 2018 jun-ying.huang
 * [MOLY00303289] [Merlot call for check-in][PLL][DCM]Add Macro for MT6761(=Merlot)
 * .
 *
 * 11 30 2017 jun-ying.huang
 * [MOLY00293064] [Sylvia][PLL]Update 26M settle time in REG_MDTOP_PLLMIXED_DCXO_PLL_SETTLE_CTL
 * .
 *
 * 10 25 2017 jun-ying.huang
 * [MOLY00285159] [PLL][DCM]Add Macro for MT6765(=Cervino)
 * .
 *
 * 09 01 2017 jun-ying.huang
 * [MOLY00275084] [6293]Add PLL_SEC Module related code to get SW version.
 * .
 *
 * 08 21 2017 jun-ying.huang
 * [MOLY00272509] [Sylvia][PLL]Add MT6771 Macro for PLL due to Sylvia MT6771 Call for check in
 * .
 *
 * 07 12 2017 jun-ying.huang
 * [MOLY00260131] [PLL]Update Frequency Meter
 * .
 *
 * 06 16 2017 jun-ying.huang
 * [MOLY00256086] [MT6739][Zion][Gen93][System Service] Workaround for MDCIRQ clock issue
 * .
 *
 * 06 09 2017 jun-ying.huang
 * [MOLY00244484] [Zion]Add compile option for ZION in PLL.
 * Add compile option for ZION and Workaround for CIRQ APB sync issue- Let BUS2x clock use MDBPIPLL_0/6 = 101 MHz
 *
 * 04 14 2017 jun-ying.huang
 * [MOLY00241010] [MT6763][DCM][PLL]Enable mdsys_bus2x & fesys_bus2x power aware and update PLL driver to apply golden setting
 * .
 *
 * 03 30 2017 jun-ying.huang
 * [MOLY00238573] [MT6293][PLL][FMA]Update Frequency meter driver and add comment for FMA
 * .
 *
 * 03 06 2017 jun-ying.huang
 * [MOLY00223031] [6293][PLL]Update PLL init flow
 * .
 *
 * 01 05 2017 jun-ying.huang
 * [MOLY00223031] [6293][PLL]Update PLL init flow
 * .
 *
 * 12 16 2016 jun-ying.huang
 * [MOLY00218782] [System service][PLL][6293]Add compile option for MT6763
 * .
 *
 * 12 07 2016 jun-ying.huang
 * [MOLY00217275] [System service][PLL][6293]Update PLL init flow and porting driver for user
 * .
 *
 * 11 20 2016 jun-ying.huang
 * [MOLY00214278] [System service][PLL][6293]Update PLL_FrequencyMeter_GetFreq() driver
 * .
 *
 * 11 06 2016 jun-ying.huang
 * [MOLY00211600] [System service][PLL]Add debug info in PLL driver
 * .
 *
 * 10 14 2016 jun-ying.huang
 * [MOLY00207095] [System service][PLL]Update PLL driver for DVFS users.
 * Add PLL function for DVFS
 *
 * 09 19 2016 alan-tl.lin
 * [MOLY00174466] [UMOLYA] PLL porting
 * [PLL]
 * 1. Fix FPGA_IS_ASIC() detection rule
 * 2. Update BPIPLL settings : Disalbe /7 clock by default
 *
 * 08 02 2016 alan-tl.lin
 * [MOLY00174466] [UMOLYA] PLL porting
 * [PLL] Update PLL init flow from DE's update : Use POSDIV /4, not using internal devider
 *
 * 07 11 2016 alan-tl.lin
 * [MOLY00184725] UMOLYA ESL/MASE porting
 * [PLL] Add compile option for ESL
 *
 * 06 15 2016 alan-tl.lin
 * [MOLY00173527] [PLL] Driver porting
 * [PLL] PLL init first porting
 *
 * 04 15 2016 alan-tl.lin
 * [MOLY00174466] [UMOLYA] PLL porting
 * [PLL] Initial porting
 *
 * 03 30 2016 alan-tl.lin
 * [MOLY00171849] [GEN93] Fix build error
 * [PLL/PDN] Add compile option for GEN93
 *
 *
 ****************************************************************************/

#ifdef __MTK_TARGET__ /* should NOT be compiled on MODIS */

/*******************************************************************************
 * Locally Used Options
 *******************************************************************************/

/*******************************************************************************
 * Include header files
 *******************************************************************************/

#include "pll.h"
#include "kal_public_api.h"
#include "sync_data.h"
#include "us_timer.h"

/*******************************************************************************
 * external functions
 *******************************************************************************/
extern void PLL_SEC_SW_VERSION_ENHANCE();

#define PLL_FM_WIMDOW       (0x1FF)

/* Below for debugging */

const char PLL_FM_clock[PLL_FM_NUM][32] =
{
	"TRACE_MON_CLOCK",          /* 0 */
	"MDSYS_208M_CLOCK",
	"MDRXSYS_RAKE_CLOCK",
	"MDRXSYS_BRP_CLOCK",
	"MDRXSYS_VDSP_CLOCK",
	"MDTOP_LOG_GTB_CLOCK",      /* 5 */
	"FESYS_CSYS_CLOCK",
	"FESYS_TXSYS_CLOCK",	
	"FESYS_BSI_CLOCK",
	"MDSYS_MDCORE_CLOCK",
	"MDSYS_BUS2X_NODCM_CLOCK",  /* 10 */
	"MDSYS_BUS2X_CLOCK",		
	"MDTOP_DBG_CLOCK",	
	"MDTOP_F32K_CLOCK",		
	"MDBPI_PLL_0_DIV2",	
	"MDBPI_PLL_2",              /* 15 */
	"MDBPI_PLL_1",	
	"MDBPI_PLL_0",		
	"MDTX_PLL",	
	"MDBRP_PLL",		
	"MDVDSP_PLL",               /* 20 */
	"MDMCU_PLL",
/* below no use */	
	"null_22",	
	"null_23",		
	"null_24",
	"null_25",		
	"null_26",	
	"null_27",		
	"null_28",	
	"null_29"   
};

PLL_CLK_INFO g_pll_info = {0};

/* Above for debugging */

/**
 * This function is used to detect ASIC or FPGA version of Palladium
 */
__PLL_CODE_IN_BOOT__ kal_bool PLL_FPGA_IS_ASIC(void)
{
#if defined(__FPGA__)
    kal_uint32 asic_flag = *((volatile kal_uint32 *)(0xA0000018)) & (0x1 << 7);

    if (asic_flag == 0)
        return KAL_TRUE;
    else
        return KAL_FALSE;
#else
    return KAL_TRUE;
#endif
}

__PLL_CODE_IN_BOOT__ void INT_SetPLL_Gen93M17(void)
{
    
#if defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)/* BIANCO or SYLVIA or CERVINO or MERLOT or TALBOT */

    #if defined(MT6763) || defined(MT6765) || defined(MT6761)/* BIANCO or CERVINO or MERLOT */
        // Default md_srclkena_ack settle time = 136T 32K
        *REG_MDTOP_PLLMIXED_DCXO_PLL_SETTLE_CTL = 0x02020E88;   
    #elif defined(MT6771) || defined(MT6768)/* SYLVIA or TALBOT */
        // Default md_srclkena_ack settle time = 147T 32K
        *REG_MDTOP_PLLMIXED_DCXO_PLL_SETTLE_CTL = 0x02020E93;   
    #else
        #error "Unsupported Chip Target in PLL Module"
    #endif

    *REG_MDTOP_PLLMIXED_MDBPIPLL_CTL0  = 0x801713B1; // fixed 600MHz(/4), 343MHz(/7), 267MHz(/9) /* Fvco = 2400M */
    *REG_MDTOP_PLLMIXED_MDTXPLL_CTL0   = 0x80171400; // 300MHz                                   /* Fvco = 2400M */
    *REG_MDTOP_PLLMIXED_MDBRPPLL_CTL0  = 0x80229E00; // 400MHz                                   /* Fvco = 3600M */
    *REG_MDTOP_PLLMIXED_MDVDSPPLL_CTL0 = 0x80204E00; // 672MHz                                   /* Fvco = 3360M */
    *REG_MDTOP_PLLMIXED_MDMCUPLL_CTL0  = 0x80213C00; // 864MHz                                   /* Fvco = 3456M */
    MO_Sync();

    /*
     * Polling until MDMCUPLL complete frequency adjustment
     * Once MDMCUPLL complete, other PLL should complete too
     */
    while ((*REG_MDTOP_PLLMIXED_MDMCUPLL_STS >> 14) & 0x1) {};

    // Default disable BPI /7 clock
    *REG_MDTOP_PLLMIXED_MDBPIPLL_CTL1 = *REG_MDTOP_PLLMIXED_MDBPIPLL_CTL1 & (~(0x80));

    #if defined(MT6761)/* MERLOT */
        /* Use default value */  
    #else/* BIANCO or SYLVIA or CERVINO or TALBOT  */
        /*TINFO="MDSYS_INIT: Update ABB MDPLL control register default value"*/
        *REG_MDTOP_PLLMIXED_MDPLL_CTL1 = 0x4C43100;    
    #endif

#elif defined(MT6739)/* ZION */
    *REG_MDTOP_PLLMIXED_MDBPIPLL_CTL0  = 0x80118000; // fixed 606MHz(/4), 260MHz(/7)         /* Fvco = 1820M */
    *REG_MDTOP_PLLMIXED_MDTXPLL_CTL0   = 0x800B8A00; // 300MHz                               /* Fvco = 1200M */
    *REG_MDTOP_PLLMIXED_MDBRPPLL_CTL0  = 0x80114E00; // 300MHz                               /* Fvco = 1800M */
    *REG_MDTOP_PLLMIXED_MDVDSPPLL_CTL0 = 0x80114E00; // 450MHz                               /* Fvco = 1800M */
    *REG_MDTOP_PLLMIXED_MDMCUPLL_CTL0  = 0x800B8A00; // 600MHz                               /* Fvco = 1200M */
    MO_Sync();
	
    while ((*REG_MDTOP_PLLMIXED_MDMCUPLL_STS >> 14)&0x1);  //Polling until MDMCUPLL complete frequency adjustment
                                                           //Once MDBPIPLL complete, other PLL should complete too

    //In L17, MDPLL should be turn-on first manually, since first calabration requires longer time (100us).
    /*TINFO="MDSYS_INIT: MDPLL_208M_OUT_EN off"*/
    *REG_MDTOP_PLLMIXED_MDPLL_CTL2 &= ~(0x10000);
    /*TINFO="MDSYS_INIT: SW Force ON MDPLL"*/
    *REG_MDTOP_PLLMIXED_PLL_SW_CTL0 = 0x10000;
    *REG_MDTOP_PLLMIXED_PLL_SW_CTL0 = 0x10001;
    MO_Sync();
    /*TINFO="MDSYS_INIT: Wait at least 100us"*/
    ust_us_busyloop(101);
    
    /*TINFO="MDSYS_INIT: SW Force OFF MDPLL"*/
    *REG_MDTOP_PLLMIXED_PLL_SW_CTL0 = 0x10000;
    *REG_MDTOP_PLLMIXED_PLL_SW_CTL0 = 0x0;
    /*TINFO="MDSYS_INIT: MDPLL_208M_OUT_EN on"*/
    *REG_MDTOP_PLLMIXED_MDPLL_CTL2 |=  0x10000;
    MO_Sync();
    /*TINFO="MDSYS_INIT: Wait 1us"*/
    ust_us_busyloop(1);
    
    /*TINFO="MDSYS_INIT: Disable AUTOK_EN, MDPLL settle time is 20us NOW (AUTOK_EN can only be setting when MDPLL_EN is OFF, so we add 1us to avoid signals competition)"*/
    *REG_MDTOP_PLLMIXED_MDPLL_CTL1 &= ~(0x4000000);
    MO_Sync();
    /*TINFO="MDSYS_INIT: Wait 1us"*/
    ust_us_busyloop(1);
#else
    #error "Unsupported Chip Target in PLL Module" 
#endif

    /* Force TXPLL ON due to TOPSM couldn't enable this PLL by default, TXPLL would be disable after DVFS Init. 
       other PLL ON controlled by HW" */
    *REG_MDTOP_PLLMIXED_PLL_ON_CTL = 0x100010;    
    MO_Sync();

  #if defined(__PALLADIUM__)
      if (PLL_FPGA_IS_ASIC() == KAL_TRUE) {
          while ((*REG_MDTOP_CLKSW_MDSYS_BUS_FLEXCKGEN_STS & 0x8000) != 0x8000) {};
      }
  #else // Not PALLADIUM
      #if !defined(__FPGA__)
          /*
           * Wait MD bus clock ready
           * Once MD bus ready, other clock should be ready too
           * In FPGA, the following status checking must be removed since there is no flex ck gen in FPGA.
           */
          while ((*REG_MDTOP_CLKSW_MDSYS_BUS_FLEXCKGEN_STS & 0x8000) != 0x8000) {};
      #endif // __FPGA__
  #endif // __PALLADIUM__

    // Switch MDMCU & MD BUS clock to PLL frequency
    *REG_MDTOP_CLKSW_CLKSEL_CTL |= 0x3;
    MO_Sync();

    // Switch all clock to PLL frequency
    *REG_MDTOP_CLKSW_CLKSEL_CTL |= 0x58103FC;
    MO_Sync();

    // Switch SDF clock to PLL frequency
    *REG_MDTOP_CLKSW_SDF_CK_CTL |= 0x10;
    MO_Sync();
    
    // Turn off all SW clock request, except ATB
    *REG_MDTOP_CLKSW_CLKON_CTL = 0x1;
    MO_Sync();

    // Clear PLL ADJ RDY IRQ fired by initial period adjustment
    *REG_MDTOP_PLLMIXED_PLL_HP_RDY_IRQ = 0xFFFF;
    MO_Sync();

    // Mask all PLL ADJ RDY IRQ
    *REG_MDTOP_PLLMIXED_PLL_HP_RDY_IRQ_MASK = 0xFFFF;
    MO_Sync();

    // Make a record that means MD pll has been initialized. 
    /* Note: We use "MD_PLL_MAGIC_NUM|0x1" to know PLL init in MD C code. 
             If AP init PLL, it would be "MD_PLL_MAGIC_NUM". */
    *REG_MDTOP_PLLMIXED_PLL_DUMMY = (MD_PLL_MAGIC_NUM|0x1);
    MO_Sync();

}

__PLL_CODE_IN_BOOT__ kal_uint8 pll_get_current_vpe_id(void)
{
    unsigned int vpe_id = 0;

    __asm__ __volatile__(
        "mfc0 %0, $15, 1" \
        : "=r" (vpe_id) \
        :);

    return (vpe_id & 0xF);
}

/*************************************************************************
 * FUNCTION
 *  INT_SetPLL
 *
 * DESCRIPTION
 *  This function dedicates for PLL setting.
 *
 * PARAMETERS
 *  Init mode of PLL
 *
 * RETURNS
 *************************************************************************/
__PLL_CODE_IN_BOOT__ void INT_SetPLL(void)
{
#if !defined(__COSIM_BYPASS__) && !defined(__ESL_MASE__)
    if ((pll_get_current_vpe_id() == 0)) 
    {
        if (*REG_MDTOP_PLLMIXED_PLL_DUMMY != MD_PLL_MAGIC_NUM) 
        {
            INT_SetPLL_Gen93M17();
        }

        PLL_SEC_SW_VERSION_ENHANCE();

    }
#endif // __COSIM_BYPASS__
}

 /*------------------------------------------------------------------------
 * void    PLL_FrequencyMeter_GetFreq
 * Purpose:	Get specified PLL/module's clock(Mhz).
 * Parameters:
 *    Input:	PLL_FM_SOURCE index: The module you want to measure.
 *              
 *    Output:	None.
 *              
 * returns :	The PLL/module's clock(Mhz).
 * Note    :    This function would spend at least 20us to measure the clock.
 *               
 *------------------------------------------------------------------------
 */ 
kal_uint32 PLL_FrequencyMeter_GetFreq(PLL_FM_SOURCE index)
{
    kal_uint32 count = 2000, output = 0;

    if ((index < PLL_FM_SOURCE_START) || (index > PLL_FM_SOURCE_END))
        return 0;

    *REG_MDTOP_CLKSW_CKMON_CTL = PLL_FM_MDSYS_MDCORE_CLOCK; //select source to a valid clock to let reset success.

    *REG_MDTOP_CLKSW_FREQ_METER_CTL = 0;        //reset frequency meter

    MO_Sync(); 
    ust_us_busyloop(2);//let Frequency Meter reset done   
    
    *REG_MDTOP_CLKSW_CKMON_CTL = 0x300 | index; //divided by 8 and select source
    *REG_MDTOP_CLKSW_FREQ_METER_XTAL_CNT = PLL_FM_WIMDOW;
    *REG_MDTOP_CLKSW_FREQ_METER_CTL = 1;        //enable frequency meter
    MO_Sync();
    
    // wait measure done or timeout
    while (((*REG_MDTOP_CLKSW_FREQ_METER_CTL) & (1 << 1)) == 0) 
    {
        count--;
        if (count == 0)
            break;
    }

    if (count == 0)
        return 0;

    output = *REG_MDTOP_CLKSW_FREQ_METER_CKMON_CNT * 26 * 8 / (PLL_FM_WIMDOW+3);

    *REG_MDTOP_CLKSW_CKMON_CTL = 0;        //select source to NULL to save power in flip-flop, save about 0.07mA in 6293

    *REG_MDTOP_CLKSW_FREQ_METER_CTL = 0;        //reset frequency meter

    return output;
}

void PLL_exception_dump(void)
{
    g_pll_info.clock_trace_mon = PLL_FrequencyMeter_GetFreq(PLL_FM_TRACE_MON_CLOCK);
    g_pll_info.clock_mdsys_208m = PLL_FrequencyMeter_GetFreq(PLL_FM_MDSYS_208M_CLOCK);
    g_pll_info.clock_mdrxsys_rake = PLL_FrequencyMeter_GetFreq(PLL_FM_MDRXSYS_RAKE_CLOCK);
    g_pll_info.clock_mdrxsys_brp = PLL_FrequencyMeter_GetFreq(PLL_FM_MDRXSYS_BRP_CLOCK);
    g_pll_info.clock_mdrxsys_vdsp = PLL_FrequencyMeter_GetFreq(PLL_FM_MDRXSYS_VDSP_CLOCK);
    g_pll_info.clock_mdtop_log_gtb = PLL_FrequencyMeter_GetFreq(PLL_FM_MDTOP_LOG_GTB_CLOCK);
    g_pll_info.clock_fesys_csys = PLL_FrequencyMeter_GetFreq(PLL_FM_FESYS_CSYS_CLOCK);
    g_pll_info.clock_fesys_txsys = PLL_FrequencyMeter_GetFreq(PLL_FM_FESYS_TXSYS_CLOCK);
    g_pll_info.clock_fesys_bsi = PLL_FrequencyMeter_GetFreq(PLL_FM_FESYS_BSI_CLOCK);
    g_pll_info.clock_mdsys_mdcore = PLL_FrequencyMeter_GetFreq(PLL_FM_MDSYS_MDCORE_CLOCK);
    g_pll_info.clock_mdsys_bus2x_nodcm = PLL_FrequencyMeter_GetFreq(PLL_FM_MDSYS_BUS2X_NODCM_CLOCK);
    g_pll_info.clock_mdsys_bus2x = PLL_FrequencyMeter_GetFreq(PLL_FM_MDSYS_BUS2X_CLOCK);
    g_pll_info.clock_mdtop_dbg = PLL_FrequencyMeter_GetFreq(PLL_FM_MDTOP_DBG_CLOCK);
    g_pll_info.clock_mdtop_f32k = PLL_FrequencyMeter_GetFreq(PLL_FM_MDTOP_F32K_CLOCK);

    g_pll_info.pll_MDBPI0_div2 = PLL_FrequencyMeter_GetFreq(PLL_FM_MDBPI_PLL_0_DIV2);
    g_pll_info.pll_MDBPI2 = PLL_FrequencyMeter_GetFreq(PLL_FM_MDBPI_PLL_2);
    g_pll_info.pll_MDBPI1 = PLL_FrequencyMeter_GetFreq(PLL_FM_MDBPI_PLL_1);
    g_pll_info.pll_MDBPI0 = PLL_FrequencyMeter_GetFreq(PLL_FM_MDBPI_PLL_0);
    g_pll_info.pll_MDTX = PLL_FrequencyMeter_GetFreq(PLL_FM_MDTX_PLL);
    g_pll_info.pll_MDBRP = PLL_FrequencyMeter_GetFreq(PLL_FM_MDBRP_PLL);
    g_pll_info.pll_MDVDSP = PLL_FrequencyMeter_GetFreq(PLL_FM_MDVDSP_PLL);
    g_pll_info.pll_MDMCU = PLL_FrequencyMeter_GetFreq(PLL_FM_MDMCU_PLL);
    
}

 /*------------------------------------------------------------------------
 * void    PLL_PLLMIXED_PLL_ON_CTL
 * Purpose:	SW force on pll or restore to HW mode.
 * Parameters:
 *    Input:    PLL_SOURCE pll: PLL_xxx in "Pll_gen93m17.h", module index.
 *              kal_bool force_on: 
 *                                 KAL_TRUE  => SW force on pll. 
 *                                 KAL_FALSE => Restore to HW mode. 
 *              
 *    Output:   None.
 *
 * returns :    
 *              KAL_TRUE/KAL_FALSE
 * Note    :    Porting from LR12's md_pll_sw_force_on().
 *               
 *------------------------------------------------------------------------
 */ 
kal_bool PLL_PLLMIXED_PLL_ON_CTL(PLL_SOURCE pll, kal_bool force_on)
{/* Note: There is one user now, if there are more user, we should add spinlock to protect race condition. */
    kal_uint32 caller_LR;
    kal_uint32 bit_offset = 0;
    GET_RETURN_ADDRESS(caller_LR);    

    switch(pll)
    {
        case PLL_MDTX:      
            bit_offset = 1 << 4;
            if(force_on)
            {
                // Switch to s/w mode and force on
                *REG_MDTOP_PLLMIXED_PLL_ON_CTL |= ( bit_offset|(bit_offset<<16) );
                MO_Sync();
                /* Note: This polling may spend 62~63 us due to HW PLL state machine. */
                while((*REG_MDTOP_PLLMIXED_MDTXPLL_STS & 0xF) != 0x6){}
            }
            else
            {
                // Switch to h/w mode
                *REG_MDTOP_PLLMIXED_PLL_ON_CTL &= ~( bit_offset|(bit_offset<<16) );
                MO_Sync();
            }
            break;
            
        default:/* Un-support pll */                
            EXT_ASSERT(0, caller_LR, pll, 0);
            return KAL_FALSE;
            break;
    }

    return KAL_TRUE;
}

 /*------------------------------------------------------------------------
 * void    PLL_CLKSW_FLEXCKGEN_SEL_PLLSEL_Set
 * Purpose:	Configure specified module's PLL source selection.
 * Parameters:
 *    Input:	PLL_CLKSW_FLEXCKGEN module: xxx_FLEXCKGEN in "Pll_gen93m17.h", module index.
 *              PLL_CLKSW_FLEXCKGEN_PLL_SRC pll_sel: CLKSW_FLEXCKGEN_PLL_SRC_x(x=0~3) in "Pll_gen93m17.h", PLL source number.
 *    Output:	None
 * returns :	None
 * Note    :    Only support TXSYS_FLEXCKGEN now.(To avoid mis-control. We didn't support other modules before they request it.)
 *               
 *------------------------------------------------------------------------
 */
void PLL_CLKSW_FLEXCKGEN_SEL_PLLSEL_Set(PLL_CLKSW_FLEXCKGEN module, PLL_CLKSW_FLEXCKGEN_PLL_SRC pll_sel)
{
    kal_uint32 caller_LR;
    GET_RETURN_ADDRESS(caller_LR);    

    /* Configuration rage check */
    if(module<CLKSW_FLEXCKGEN_START || module>=CLKSW_FLEXCKGEN_END || pll_sel < CLKSW_FLEXCKGEN_PLL_SRC_0 || pll_sel > CLKSW_FLEXCKGEN_PLL_SRC_3)
    {
        EXT_ASSERT(0, caller_LR, module, pll_sel);
    }

    switch(module)
    {
        case TXSYS_FLEXCKGEN:
            *REG_MDTOP_CLKSW_TXSYS_FLEXCKGEN_SEL = ((*REG_MDTOP_CLKSW_TXSYS_FLEXCKGEN_SEL) & 0xFFFFFFCF)  | (pll_sel<<4);
            break;
            
        default:/* Un-support module */                
            EXT_ASSERT(0, caller_LR, module, pll_sel);
            break;
    }

    MO_Sync();
}

 /*------------------------------------------------------------------------
 * void    PLL_CLKSW_FLEXCKGEN_SEL_DIVSEL_Set
 * Purpose:	Configure specified module's PLL divisor.
 * Parameters:
 *    Input:	PLL_CLKSW_FLEXCKGEN module: xxx_FLEXCKGEN in "Pll_gen93m17.h", module index.
 *              PLL_CLKSW_FLEXCKGEN_DIV div_sel: CLKSW_FLEXCKGEN_DIV_x(x=1~8) in "Pll_gen93m17.h", flexckgen divisor.
 *    Output:	None
 * returns :	None
 * Note    :    Only support TXSYS_FLEXCKGEN now.(To avoid mis-control. We didn't support other modules before they request it.)
 *               
 *------------------------------------------------------------------------
 */
void PLL_CLKSW_FLEXCKGEN_SEL_DIVSEL_Set(PLL_CLKSW_FLEXCKGEN module, PLL_CLKSW_FLEXCKGEN_DIV div_sel)
{
    kal_uint32 caller_LR;
    GET_RETURN_ADDRESS(caller_LR);    

    /* Configuration rage check */
    if(module<CLKSW_FLEXCKGEN_START || module>=CLKSW_FLEXCKGEN_END || div_sel < CLKSW_FLEXCKGEN_DIV_1 || div_sel > CLKSW_FLEXCKGEN_DIV_8)
    {
        EXT_ASSERT(0, caller_LR, module, div_sel);
    }
    
    switch(module)
    {
        case TXSYS_FLEXCKGEN:
            *REG_MDTOP_CLKSW_TXSYS_FLEXCKGEN_SEL = ((*REG_MDTOP_CLKSW_TXSYS_FLEXCKGEN_SEL) & 0xFFFFFFF8)  | (div_sel);
            break;
            
        default:/* Un-support module */                
            EXT_ASSERT(0, caller_LR, module, div_sel);
            break;
    }

    MO_Sync();
}

 /*------------------------------------------------------------------------
 * void    PLL_CLKSW_FLEXCKGEN_SEL_Get
 * Purpose:	Get specified module's PLL source selection and divisor.
 * Parameters:
 *    Input:	PLL_CLKSW_FLEXCKGEN module: xxx_FLEXCKGEN in "Pll_gen93m17.h", module index.
 *              
 *    Output:	kal_uint32 *pll_sel: The PLL source selection(0~3).
 *              kal_uint32 *div_sel: The PLL divisor(0~7).
 * returns :	None
 * Note    :    None.
 *               
 *------------------------------------------------------------------------
 */
void PLL_CLKSW_FLEXCKGEN_SEL_Get(PLL_CLKSW_FLEXCKGEN module, kal_uint32 *pll_sel, kal_uint32 *div_sel)
{
    kal_uint32 caller_LR, reg_val = 0;
    GET_RETURN_ADDRESS(caller_LR);    

    if(module<CLKSW_FLEXCKGEN_START || module>=CLKSW_FLEXCKGEN_END)
    {
        EXT_ASSERT(0, caller_LR, module, 0);
    }
    
    switch(module)
    {
        case MDCORE_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_MDCORE_FLEXCKGEN_SEL);          
            break;

        case MDSYS_BUS_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_MDSYS_BUS_FLEXCKGEN_SEL);            
            break;

        case VDSP_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_VDSP_FLEXCKGEN_SEL);           
            break;

        case BRP_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_BRP_FLEXCKGEN_SEL);            
            break;

        case RAKE_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_RAKE_FLEXCKGEN_SEL);         
            break;
        
        case TXSYS_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_TXSYS_FLEXCKGEN_SEL);           
            break;

        case CSSYS_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_CSSYS_FLEXCKGEN_SEL);           
            break;

        case MD2G_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_MD2G_FLEXCKGEN_SEL);           
            break;

        case BSI_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_BSI_FLEXCKGEN_SEL);          
            break;

        case DBG_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_DBG_FLEXCKGEN_SEL);           
            break;

        case LOG_ATB_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_LOG_ATB_FLEXCKGEN_SEL);           
            break;
            
        default:/* Un-support module */                
            EXT_ASSERT(0, caller_LR, module, 0);
            break;
    }

    *pll_sel = (reg_val & 0x30)>>4;
    *div_sel = (reg_val & 0x7); 

}

 /*------------------------------------------------------------------------
 * void    PLL_CLKSW_FLEXCKGEN_STS_Get
 * Purpose:	Get specified module's clock generator status.
 * Parameters:
 *    Input:	PLL_CLKSW_FLEXCKGEN module: xxx_FLEXCKGEN in "Pll_gen93m17.h", module index.
 *              
 *    Output:	kal_uint32 *ck_rdy: clock ready.
 *              kal_uint32 *ckgen_state: clock generator state(0:CKSEL_UPDATE, 1:CG_OFF, 2:CG_ON).
 *              kal_uint32 *pll_req: clock request PLL source (one-hot).
 * returns :	None
 * Note    :    None.
 *               
 *------------------------------------------------------------------------
 */
void PLL_CLKSW_FLEXCKGEN_STS_Get(PLL_CLKSW_FLEXCKGEN module, kal_uint32 *ck_rdy, kal_uint32 *ckgen_state, kal_uint32 *pll_req)
{
    kal_uint32 caller_LR, reg_val = 0;
    GET_RETURN_ADDRESS(caller_LR);    

    if(module<CLKSW_FLEXCKGEN_START || module>=CLKSW_FLEXCKGEN_END)
    {
        EXT_ASSERT(0, caller_LR, module, 0);
    }
    
    switch(module)
    {
        case MDCORE_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_MDCORE_FLEXCKGEN_STS);           
            break;

        case MDSYS_BUS_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_MDSYS_BUS_FLEXCKGEN_STS);            
            break;

        case VDSP_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_VDSP_FLEXCKGEN_STS);           
            break;

        case BRP_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_BRP_FLEXCKGEN_STS);            
            break;

        case RAKE_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_RAKE_FLEXCKGEN_STS);           
            break;
        
        case TXSYS_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_TXSYS_FLEXCKGEN_STS);        
            break;

        case CSSYS_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_CSSYS_FLEXCKGEN_STS);            
            break;

        case MD2G_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_MD2G_FLEXCKGEN_STS);          
            break;

        case BSI_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_BSI_FLEXCKGEN_STS);          
            break;

        case DBG_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_DBG_FLEXCKGEN_STS);         
            break;

        case LOG_ATB_FLEXCKGEN:
            reg_val = (*REG_MDTOP_CLKSW_LOG_ATB_FLEXCKGEN_STS);            
            break;
            
        default:/* Un-support module */                
            EXT_ASSERT(0, caller_LR, module, 0);
            break;
    }

    *ck_rdy  = (reg_val & 0x8000)>>15;            
    *ckgen_state = (reg_val & 0x300)>>8;
    *pll_req = reg_val & 0xF; 

}

 /*------------------------------------------------------------------------
 * void    PLL_CLKSW_MDTOPSM_SW_CTL
 * Purpose:	SW force on module clock request or restore to HW mode.
 * Parameters:
 *    Input:    PLL_CLKSW_MDTOPSM_SW_CTL_SRC module: CLKSW_MDTOPSM_xxx_CK in "Pll_gen93m17.h", module index.
 *              kal_bool force_on: 
 *                                 KAL_TRUE  => SW force on module clock request. 
 *                                 KAL_FALSE => Restore to HW mode. 
 *              
 *    Output:   None.
 *
 * returns :    
 *              KAL_TRUE/KAL_FALSE
 * Note    :    Porting from LR12's md_pll_sw_req_clk_on() and md_pll_sw_req_clk_off().
 *               
 *------------------------------------------------------------------------
 */
kal_bool PLL_CLKSW_MDTOPSM_SW_CTL(PLL_CLKSW_MDTOPSM_SW_CTL_SRC module, kal_bool force_on)
{/* Note: There is one user now, if there are more user, we should add spinlock to protect race condition. */
    kal_uint32 caller_LR/*, count = 0*/;
    GET_RETURN_ADDRESS(caller_LR);    

    switch(module)
    {
#if 0 /* DBG_CK on/off should call TOPSM's function, so we disable this function here. */       
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif            
        default:/* Un-support module */                
            EXT_ASSERT(0, caller_LR, module, 0);
            return KAL_FALSE;
            break;
    }

    return KAL_TRUE;

}

/****************************************************************
    Function for SDF module. (uSIB)
****************************************************************/
 /*------------------------------------------------------------------------
 * void    PLL_CLKSW_SDF_SRC_CKSEL_Get
 * Purpose:	Get the selection of SDF source clock.
 * Parameters:
 *    Input:    None.
 *              
 *    Output:   None.
 *
 * returns :    The selection of SDF source clock
 *              
 * Note    :    Porting from LR12's PLL_SDF_SRC_CKSEL_GET().
 *               
 *------------------------------------------------------------------------
 */
kal_uint32 PLL_CLKSW_SDF_SRC_CKSEL_Get()
{
    if((*REG_MDTOP_CLKSW_SDF_CK_CTL&(1<<4))==0)
    {
        return CLKSW_SDF_SRC_26M;
    }
    else
    {
        return (((*REG_MDTOP_CLKSW_SDF_CK_CTL) & 0x00000700) >> 8);
    }
}

 /*------------------------------------------------------------------------
 * void    PLL_CLKSW_SDF_SRC_CKSEL_Set
 * Purpose:	Set the selection of SDF source clock.
 * Parameters:
 *    Input:    PLL_CLKSW_SDF_SRC src_ck: CLKSW_SDF_SRC_xxx in "Pll_gen93m17.h", src_clk index.
 *              
 *    Output:   None.
 *
 * returns :    KAL_TRUE/KAL_FALSE
 *              
 * Note    :    Porting from LR12's PLL_SDF_SRC_CKSEL_SET().
 *               
 *------------------------------------------------------------------------
 */
kal_bool PLL_CLKSW_SDF_SRC_CKSEL_Set(PLL_CLKSW_SDF_SRC src_clk)
{
    kal_uint32 caller_LR;
    GET_RETURN_ADDRESS(caller_LR);
    
    if (src_clk >= CLKSW_SDF_SRC_END)
    {
        EXT_ASSERT(0, caller_LR, src_clk, 0);
        return KAL_FALSE;
    }

    if(src_clk == CLKSW_SDF_SRC_26M)
    {/* Restore to default setting */
        
        // SDF clock switch to 26Mhz
        *REG_MDTOP_CLKSW_SDF_CK_CTL &= ~(1<<4);

        //restore SDF clock source
        *REG_MDTOP_CLKSW_SDF_CK_CTL = ((*REG_MDTOP_CLKSW_SDF_CK_CTL) & 0xFFFFF8FF) | (CLKSW_SDF_SRC_BPIPLL<<8);        
    }
    else
    {
        // SDF clock switch to 26Mhz
        *REG_MDTOP_CLKSW_SDF_CK_CTL &= ~(1<<4);
    
        //set SDF clock source
        *REG_MDTOP_CLKSW_SDF_CK_CTL = ((*REG_MDTOP_CLKSW_SDF_CK_CTL) & 0xFFFFF8FF) | (src_clk<<8);
    
        // SDF clock switch to full speed
        *REG_MDTOP_CLKSW_SDF_CK_CTL |= (1<<4);
    }

    MO_Sync();

    return KAL_TRUE;
}

 /*------------------------------------------------------------------------
 * void    PLL_CLKSW_SDF_CK_Req
 * Purpose:	Request the SDF source clock or not.
 * Parameters:
 *    Input:    kal_bool clk_req: KAL_TRUE/KAL_FALSE.
 *              
 *    Output:   None.
 *
 * returns :    None
 *              
 * Note    :    Porting from LR12's PLL_SDF_CK_ON() & PLL_SDF_CK_OFF().
 *               
 *------------------------------------------------------------------------
 */
void PLL_CLKSW_SDF_CK_Req(kal_bool clk_req)
{
    if(clk_req)
    {/* SDF clock request */
        *REG_MDTOP_CLKSW_SDF_CK_CTL = *REG_MDTOP_CLKSW_SDF_CK_CTL | (1 << 0);
    }
    else
    {/* No SDF clock request */
        *REG_MDTOP_CLKSW_SDF_CK_CTL = *REG_MDTOP_CLKSW_SDF_CK_CTL & ~(1 << 0);
    }

    MO_Sync();
}

#endif /* should NOT be compiled on MODIS */
