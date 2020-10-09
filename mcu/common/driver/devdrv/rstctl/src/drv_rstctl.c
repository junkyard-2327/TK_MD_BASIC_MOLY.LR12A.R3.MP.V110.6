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
 *   drv_rstctl.c
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * Barry Hong
 *
 *
 * ==========================================================================
 * $Log$
 *
 * 11 23 2017 da.li
 * [MOLY00275013] [LR12] Enable WDT on ENG load
 * WDT disabled on MD debug load.
 *
 * 10 25 2017 da.li
 * [MOLY00281544] [PVT must resolve] [ASSERT] file:mcu/common/driver/devdrv/rstctl/src/drv_rstctl.c line:1119
 * Update reset driver for RGU IT on FPGA.
 *
 * 10 19 2017 da.li
 * [MOLY00281544] [PVT must resolve] [ASSERT] file:mcu/common/driver/devdrv/rstctl/src/drv_rstctl.c line:1119
 * Re-send WDT IRQ to AP while AP wants to reset MD but without recieving WDT IRQ.
 *
 * 08 31 2017 da.li
 * [MOLY00275013] [LR12] Enable WDT on ENG load
 * Enable WDT1(only) on ENG load
 *
 * 05 23 2017 da.li
 * [MOLY00248360] [BIANCO] Change IRQ mask API to HRT domain
 * Build warning fix.
 *
 * 05 12 2017 da.li
 * [MOLY00248360] [BIANCO] Change IRQ mask API to HRT domain
 * change HRT API to disable interrupt.
 *
 * 04 06 2017 da.li
 * [MOLY00233063] [BIANCO] rstctl driver update for RGU IT
 * Remove warning.
 *
 * 03 03 2017 da.li
 * [MOLY00233063] [BIANCO] rstctl driver update for RGU IT
 * for BIANCO RGU IT.
 *
 * 02 16 2017 da.li
 * [MOLY00211939] [Bianco] Reset control driver porting
 * Remove redundant project macros.
 *
 * 11 17 2016 da.li
 * [MOLY00211939] [Bianco] Reset control driver porting
 * Update for RGU IT test.
 * Add workaround to make reset environment more stable.
 *
 * 11 08 2016 da.li
 * [MOLY00211939] [Bianco] Reset control driver porting
 * Reset control driver porting from LR12
 *
 * 03 30 2016 owen.ho
 * [MOLY00171832] [UMOLYA]
 * Add compile option for GEN93 project
 *
 * 03 03 2016 owen.ho
 * [MOLY00141883] [ELBRUS][FPGA]
 * remove including file for MSBB violation
 *
 * 01 19 2016 owen.ho
 * [MOLY00070771] [6291][FPGA]solve build error
 * Update software reset  enum
 *
 * 11 26 2015 owen.ho
 * [MOLY00141883] [ELBRUS][FPGA] Add RGU IT framework for elbrus
 *
 * 10 13 2015 owen.ho
 * [MOLY00141883] [ELBRUS][FPGA]
 * Solve build error for irq name changed
 *
 * 09 25 2015 owen.ho
 * [MOLY00141883] [ELBRUS][FPGA]
 * Solve build error
 *
 * 09 25 2015 owen.ho
 * [MOLY00141883] [ELBRUS][FPGA]
 * Driver porting for Elbrus
 *
 * 08 17 2015 owen.ho
 * [MOLY00070771] [6291][FPGA]solve build error
 * Solve build error for build ELBRUS
 *
 * 07 24 2015 owen.ho
 * [MOLY00070771] [6291][FPGA]solve build error
 * Modify RGU IT framework for reset with delay cycle case
 *
 * 07 24 2015 owen.ho
 * [MOLY00070771] [6291][FPGA]solve build error
 * Fix IT framework for drvtest environment
 *
 * 07 03 2015 owen.ho
 * [MOLY00070771] [6291][FPGA]solve build error Modify RGU drvtest & devdrv for JADE
 *
 * 06 11 2015 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Add compile option flag to restrict WDT enable without __PRODUCTION_RELEASE__ in abnrset api.
 * 	Add BB_Register dump. 
 * 	Add EMMWriteDebugInfo for track caller info in share memory.
 *
 * 04 28 2015 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Add silent reboot in exception flow and trigger fatal error upon receving L1WDT IRQ.
 *
 * 04 27 2015 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Klocwork correction.
 *
 * 04 09 2015 owen.ho
 * [MOLY00070771] [6291][FPGA]solve build error Update RGU IT framework
 * 	.
 *
 * 03 30 2015 owen.ho
 * [MOLY00070771] [6291][FPGA]solve build error:Update RGU IT framework
 *
 * 01 29 2015 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Correct g_ABNORMAL_RST_REG and g_ABNORMAL_RST_VAL.
 *
 * 01 28 2015 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Solve trunk's build error.
 *
 * 01 06 2015 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Chnage L1 boot slave address for L2copro's requirement that needs more memory space (256MB).
 * 	Cooperate with HVT dummy load built by "make mcore_6291_drvtest_nand_booting".
 *
 * 12 26 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Include system_coverage into  ungate_l1core.
 *
 * 12 26 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Disable WDTRR in UMOLY while in DRVTEST mode.
 * 	Add system_coverage in _rst_set_system_ready_sts for different 3G/4G FPGA configuration.
 *
 * 12 22 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Patch drv_rstctl.c for the condition that target system is not included in the system coverage.
 *
 * 12 16 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Provide interface for USB WDT test.
 *
 * 12 15 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Message layout adjustment.
 *
 * 12 15 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Patch incorrect ARM7WDT WDTRR KEY setting.
 *
 * 12 09 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Add ATEST_ENABLE to solve UMOLY build error.
 *
 * 12 09 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	Add ATEST_ENABLE to solve UMOLY build error.
 *
 * 12 09 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	RGU IT Framework
 *
 * 10 23 2014 vmick.lin
 * [MOLY00062072] [MT6291][RGU] Implement
 * 	Change IRQ name from MD_IRQID_MD_WDT to IRQ_MD_WDT_CODE
 *
 * 10 22 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * Modification software reset mechanis of RST_NFI and RST_NFI_AO.
 * They need to be reset at the same time.
 *
 * 10 15 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * Add RST_SOE and RST_BUS_RECORD in drv_rstctl_sw_reset.
 *
 * 09 25 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * synchronization of definitions
 *
 * 08 27 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error.
 * drv_rstctl.h  	add reset enumerators for APSYS IPs
 * rstctl_reg.h	1.add definitions of APRGU control registers
 * 	2.add definitions of software reset for APSYS IPs
 * drv_rstctl.c	1. enhance_RESET_ITEM_REGs to support APSYS/MDSYS IPs
 * 	2. enhacne _rst_resetIP to supoort APSYS/MDSYS IPs
 * 	3. enlarge the reset scope of drv_rstctl_sw_reset (including APSYS IPs. )
 *
 * 07 17 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * .Add drv_rstctl_sw_reset function for UMOLY IP functional test.
 *
 * 07 02 2014 dennis.chueh
 * [MOLY00070771] [6291][FPGA]solve build error
 * 	.
 *
 * 05 27 2014 vmick.lin
 * [MOLY00062072] [TK6291][RGU] Implement
 * 	.
 * 	Disable Arm7/L1core bypass irq configuration while init
 *
 * 05 20 2014 vmick.lin
 * [MOLY00062072] [TK6291][RGU] Implement
 * 	.
 *
 * 05 20 2014 vmick.lin
 * [MOLY00062072] [TK6291][RGU] Implement
 * 	Because WDTIR default is 0x20000, so need to SW workaround
 *
 * 05 20 2014 vmick.lin
 * [MOLY00062072] [TK6291][RGU] Implement
 * 	.
 *
 * 04 14 2014 vmick.lin
 * [MOLY00062072] [TK6291][RGU] Implement
 * 	Resolve build error
 *
 * 04 10 2014 vmick.lin
 * [MOLY00062072] [TK6291][RGU] Implement
 * 	Fix build error
 *
 * 04 08 2014 vmick.lin
 * [MOLY00062072] [TK6291][RGU] Implement: Fix build error temporarily
 *
 * 02 17 2014 vmick.lin
 * [MOLY00056239] [6595] RGU integration test
 * 	Stop call while system calling wdt reset
 *
 * 02 10 2014 vmick.lin
 * [MOLY00055629] [MT6290][CPE_DONGLE_TYPE]CR4 watchdog reset in dormant mode
 * 	clear wdt status while init
 *
 * 01 13 2014 vend_mick.lin
 * [MOLY00051688] [MT6595 Bring-Up] Verify RGU driver
 * 	Add accessing Top RGU retention data API for test
 *
 * 01 13 2014 vend_mick.lin
 * [MOLY00051688] Verify RGU driver in ROME EVB
 * 	Add whole system reset function to PSD1
 *
 * 12 27 2013 vend_mick.lin
 * [MOLY00051688] Verify RGU driver in ROME EVB
 * Change enum type RST_LTEL2 to original RST_L2COP
 *
 * 12 18 2013 vend_mick.lin
 * [MOLY00050015] Add CLDMA sw reset in RGU driver
 * 	Modify get_duration macro
 *
 * 12 12 2013 vend_mick.lin
 * [MOLY00050015] Add CLDMA sw reset in RGU driver
 * 	.
 *
 * 12 06 2013 vend_mick.lin
 * [MOLY00049273] Add MT6595 RGU driver
 * 	[MT6595] RGU code merge
 *
 * 10 30 2013 vend_mick.lin
 * [MOLY00043729] Change watchdog timeout period for product release
 * 	Change Watch dog timer to 4 sec and enable IRQ mode in phone type
 *
 * 10 04 2013 vend_mick.lin
 * [MOLY00040268] SDIO transfer speed is very low after MOLY boot-up about 10 seconds
 * 	ext_rst_b set low active as phone type request
 *
 * 09 25 2013 vend_mick.lin
 * [MOLY00038948] Add infinite loop in sw watch dog reset function if irq_en not set
 *
 * 09 17 2013 vend_mick.lin
 * [MOLY00038329] Ext_rst setting affects SDIO transmission speed
 * 	change ext_rst polarity as high active as workaround solution
 *
 * 08 30 2013 vend_mick.lin
 * [MOLY00035988] Change polarity of ext_rst signal to low active
 * 	For phone type request
 *
 * 08 29 2013 vend_mick.lin
 * [MOLY00035823] Delete warning message while build code of rstctrl part
 * 	Delete waring message
 *
 * 08 15 2013 vend_mick.lin
 * Fix CR: MOLY00033807 ; Dont reset APCLK after WDT
 *
 * 08 02 2013 barry.hong
 * [MOLY00021294] [MT6290 Bring-up]6290 WDT driver update
 * Fraom wei-de phone project request. set EXT_RST default to high active
 *
 * 07 17 2013 barry.hong
 * [MOLY00021294] [MT6290 Bring-up]6290 WDT driver update
 * .remove APCLK reset when USB call WD reset
 *
 * 05 30 2013 barry.hong
 * [MOLY00013643] [MT6290 Bring-up]Modify Sleep mode driver
 * .*: update for USB suspend IT test
 *
 * 05 29 2013 barry.hong
 * [MOLY00021294] [MT6290 Bring-up]6290 WDT driver update
 * .update 6290 WDT driver
 *
 * 05 09 2013 barry.hong
 * [MOLY00021294] [MT6290 Bring-up]6290 WDT driver update
 * .*:
 * 1.Add drv_rstctl_wd_clrCnt API to clear WD CNT
 * 2.Modify drv_rstctl_wd_rst_set_bitmap for U2 suspend wakeup not reset APCLK request
 *
 * 05 02 2013 barry.hong
 * [MOLY00021294] [MT6290 Bring-up]6290 WDT driver update
 * .change g_ABNORMAL_RST_VAL define to WDT_RSTINTERVAL_VALUE
 *
 * 03 08 2013 barry.hong
 * [MOLY00011608] MT6290 MOLY fake API remove
 * .remove fakeAPI
 *
 * 02 04 2013 barry.hong
 * [MOLY00009902] MT7208 rename
 * MT7208 rename to MT6290.
 *
 * 11 20 2012 barry.hong
 * [MOLY00006416] Update Driver for MT6290 FPGA 20121105_MD_a4_b12_cx
 * .merge TATAKA driver to MOLY
 ****************************************************************************/

#include "drv_features_wdt.h"
#include "drv_comm.h"

#include "rstctl_reg.h"
#include "drv_rstctl.h"
#include "intrCtrl.h"
#include "us_timer.h"

#include "dcl.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_hrt_api.h"
#include "ex_public.h"  	/*Include this header file for register BBreg dump*/
#include "kal_internal_api.h"

#if defined(ATEST_ENABLE)
#include "drvtest_sm.h"
#endif 
#if !defined(DRV_RSTCTL_OFF)

extern kal_uint32 *WDT_SET_KICKBIT_BASE;
extern kal_uint32 *WDT_SET_CHECKBIT_BASE;
extern kal_uint32 *WDT_CLR_CHECKBIT_BASE;
//extern void MIPSGIC_LOCAL_IRQMask(LOCAL_IRQ_T irq);

/*Global vaialbe for BBreg dump*/
#if defined(__MTK_TARGET__)
	EX_BBREG_DUMP Pcore_RGU_dump;
	const kal_uint32 Pcore_RGU_dump_regions[] = {
	BASE_ADDR_MDRSTCTL, 0x0360, 4, 
	}; 
#endif

#define UT_DELAY_LOOP(n)                                                          \
do{                                                                               \
	volatile register kal_uint32 _delay_loop;                                     \
	for(_delay_loop = 0; _delay_loop < n; _delay_loop++) { ; }                    \
}while(0)

#define _RESET_ITEM_REGs(reg, item_r, waitLoopCnt)   do {    \
						{\
						 DRV_WriteReg32(reg, (item_r));\
						 DRV_WriteReg32(REG_MDRSTCTL_SRCMR, RSTCTL_SRCMR_KEY_SWRST);\
						 UT_DELAY_LOOP(waitLoopCnt);\
						 DRV_WriteReg32(reg, 0);\
						 DRV_WriteReg32(REG_MDRSTCTL_SRCMR, RSTCTL_SRCMR_KEY_SWRST);\
						}\
					} while(0)

/*****************************************************************************
 *						 Global/External Variable                            *
 *****************************************************************************/

const kal_uint32 g_WATCHDOG_RESTART_REG   = REG_MDRSTCTL_WDTRR;   							//Externally referenced somewhere
#if defined (ATEST_ENABLE)
const kal_uint32 g_WATCHDOG_RESTART_VALUE = (RSTCTL_WDTRR_WDT_RESTART);  					//Disable Restart function for DRVTEST. 
#else
const kal_uint32 g_WATCHDOG_RESTART_VALUE = (RSTCTL_WDTRR_KEY | RSTCTL_WDTRR_WDT_RESTART);  //Externally referenced somewhere
#endif 
const kal_uint32 g_ABNORMAL_RST_REG       = REG_MDRSTCTL_WDTIR;	
const kal_uint32 g_ABNORMAL_RST_REG_AUX      = REG_MDRSTCTL_WDTIR_AUX;	
const kal_uint32 g_ABNORMAL_RST_VAL		  = WDT_RSTINTERVAL_VALUE;
const kal_uint32 g_ABNORMAL_RST_VAL_AUX	  = WDT_RSTINTERVAL_VALUE2;

void _rst_clrSwRstStatus(kal_uint32 reg, kal_uint32 statusMaskToClear)
{
	/* If status Mask == 0 -> clear ALL */
	statusMaskToClear = (statusMaskToClear)?statusMaskToClear:0xffffffff;
    DRV_WriteReg32(reg, statusMaskToClear);
}

void _rst_resetIP(kal_uint32 reg, kal_uint32 item_r, kal_uint32 waitLoopCnt)
{
	kal_uint32 rstStatus;
	kal_uint32 timeout_cnt=0;
	kal_uint32 sta_reg=0;

	/* Reset IP */
	_RESET_ITEM_REGs(reg, item_r,waitLoopCnt);

	/* Check the status and clear it */
	switch (reg)
	{
		case REG_MDRSTCTL_SRBER_MDSYS:
			sta_reg = (REG_MDRSTCTL_SRSTR_MDSYS);
			break;
    
		//For Yts's reset CLDMA
		case REG_APRSTCTL_SRBER_APINFRA:
			sta_reg = (REG_APRSTCTL_SRSTR_APINFRA);
			break;
		case REG_APRSTCTL_SRBER_APPERI:
			sta_reg = (REG_APRSTCTL_SRSTR_APPERI);
			break;
		default:
			ASSERT(0); /*To prevent undefined status register address returned by default case.*/
			break;
	}

	rstStatus = (DRV_Reg32(sta_reg)&item_r);


	while((item_r != rstStatus) && timeout_cnt<10000)
	{
		rstStatus = DRV_Reg32(sta_reg);
		timeout_cnt++;
	};

	ASSERT(timeout_cnt<10000);
	ASSERT(item_r == rstStatus);

	_rst_clrSwRstStatus(sta_reg, item_r);

}

/**
 *	@brief	Procedure for software triggered reset process
 *	This procedure triggers software watchdog reset and wait for its completeness
 *    Note: It needs less than 1T(32k) (eaxtly 1T-2*bus clock period) to do reset after WDTSR changes
 */
static void _rst_swWdReset(void)
{
	DRV_WriteReg32(REG_MDRSTCTL_WDTER_MDSYS, 0xBFFFFFFF);
	/* Always clear indication bits before reset */
	DRV_WriteReg32(REG_MDRSTCTL_WDTSR,(RSTCTL_WDTSR_KEY)|(RSTCTL_WDTSR_STATUS_MASK << RSTCTL_WDTSR_STATUS_OFFSET));
	/* Trigger watchdog reset immediately : We use software reset */
	DRV_WriteReg32(REG_MDRSTCTL_SRCMR_SWDT, RSTCTL_SRCMR_KEY_SWDT);
	DRV_Reg32(REG_MDRSTCTL_SRCMR_SWDT);	/* Read the value of RSTCTL_SRCMR back to make sure the previous write operation is done */
	while ((DRV_Reg32(REG_MDRSTCTL_WDTSR) & (RSTCTL_WDTSR_STATUS_MASK<<RSTCTL_WDTSR_STATUS_OFFSET)) == 0);
	/*If irq_en not set, just while(1) to wait reset happen */
	if(!(DRV_Reg32(REG_MDRSTCTL_WDTCR) & RSTCTL_WDTCR_WDT_IRQEN))
	{
		#if defined(ATEST_ENABLE)
	 		dbg_print("[%s]Emulation of WHILE(1) for IRQEN not set.\r\n", __FUNCTION__); 
		#else
	   		while(1);	
		#endif
	}
}

static void _rst_swWdReset_aux(void)
{
	DRV_WriteReg32(REG_MDRSTCTL_WDTER_MDSYS, 0xBFFFFFFF);
	/* Always clear indication bits before reset */
	DRV_WriteReg32(REG_MDRSTCTL_WDTSR,(RSTCTL_WDTSR_KEY)|(RSTCTL_WDTSR_AUX_STATUS_MASK<<RSTCTL_WDTSR_AUX_STS_CLR_OFFSET));
	/* Trigger watchdog reset immediately : We use software reset */
	DRV_WriteReg32(REG_MDRSTCTL_SRCMR_SWDT, RSTCTL_AUX_SRCMR_KEY_SWDT);
	DRV_Reg32(REG_MDRSTCTL_SRCMR_SWDT);	/* Read the value of RSTCTL_SRCMR back to make sure the previous write operation is done */
	while ((DRV_Reg32(REG_MDRSTCTL_WDTSR) & (RSTCTL_WDTSR_AUX_STATUS_MASK<<RSTCTL_WDTSR_AUX_STATUS_OFFSET)) == 0);
	if(!(DRV_Reg32(REG_MDRSTCTL_WDTCR) & RSTCTL_WDTCR_AUX_WDT_IRQEN))
	{
		#if defined(ATEST_ENABLE)
	 		dbg_print("[%s]Do nothing if IRQEN is not set.\r\n", __FUNCTION__); 
		#endif
	}
}

#if !defined(DRV_WDT_SWRST)
static void _rst_restartWDT(void)
{
	/* Simply reload watchdog counter */
	DRV_WriteReg32(REG_MDRSTCTL_WDTRR, RSTCTL_WDTRR_KEY | RSTCTL_WDTRR_WDT_RESTART);
}
#endif

void _rst_enableWdt(kal_uint32 wdtEnable, kal_uint32 wdtInterval)
{
	if (wdtEnable)
    {
	    /* Set watchdog interval */
		DRV_WriteReg32(REG_MDRSTCTL_WDTIR,
		              ((RSTCTL_WDTIR_KEY)|
		              ((wdtInterval & RSTCTL_WDTIR_INTERVAL_MASK) << RSTCTL_WDTIR_INTERVAL_OFFSET)));
        /* Enable/disable watchdog */
        DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) |((DRV_Reg32(REG_MDRSTCTL_WDTCR))|RSTCTL_WDTCR_WDT_EN));
	    DRV_WriteReg32(REG_MDRSTCTL_WDTRR,((RSTCTL_WDTRR_KEY)|0x1));
	} 
	else
    {   
		/* Just simply set WDTCR for WDT disabling operation */
        DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) |((DRV_Reg32(REG_MDRSTCTL_WDTCR))&(~RSTCTL_WDTCR_WDT_EN)));
    }
}

void _rst_enableWdt_aux(kal_uint32 wdtEnable, kal_uint32 wdtInterval)
{
	if (wdtEnable)
    {
	    /* Set watchdog interval */
		DRV_WriteReg32(REG_MDRSTCTL_WDTIR_AUX,
		              ((RSTCTL_WDTIR_AUX_KEY)|
		              ((wdtInterval & RSTCTL_WDTIR_INTERVAL_MASK) << RSTCTL_WDTIR_INTERVAL_OFFSET)));
        /* Enable/disable watchdog */
        DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) |((DRV_Reg32(REG_MDRSTCTL_WDTCR))|RSTCTL_WDTCR_AUX_WDT_EN));
	    DRV_WriteReg32(REG_MDRSTCTL_WDTRR,((RSTCTL_WDTRR_KEY)|0x1));
	} 
	else
    {   
		/* Just simply set WDTCR for WDT disabling operation */
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) |((DRV_Reg32(REG_MDRSTCTL_WDTCR))&(~RSTCTL_WDTCR_AUX_WDT_EN)));
    }
}

/*************************************************************************
* FUNCTION
*  Get_WATCHDOG_BASE
*
* DESCRIPTION
*  This function is to get restart wd timer base address
*
* PARAMETERS
*    none
*
* RETURN VALUES
*    wd timer kick base address
*
*************************************************************************/
kal_uint32 Get_WATCHDOG_BASE()
{
	return (REG_MDRSTCTL_KICK_BIT_SET);
}

/*************************************************************************
* FUNCTION
*  Get_WATCHDOG_RESTART_CMD
*
* DESCRIPTION
*  This function is to get restart wd timer key
*
* PARAMETERS
*    none
*
* RETURN VALUES
*    wd timer kick command key
*
*************************************************************************/
kal_uint32 Get_WATCHDOG_RESTART_CMD()
{
  kal_uint32 vpe_id;
  vpe_id = (kal_uint32) kal_get_current_vpe_id();
  #if defined (ATEST_ENABLE)
    return (0x1 << vpe_id);  //For drvtest, do not return WDTRR Key to prevent the test. 
  #else
	return (((RSTCTL_MD_CHECK_AND_KICK_KEY + vpe_id) << RSTCTL_MD_CHECK_AND_KICK_KEY_OFFSET) | (0x1 << vpe_id));
  #endif
}

void drv_rstctl_wd_disable(void)
{
	/* Just simply set WDTCR for WDT disabling operation */
	DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) |((DRV_Reg32(REG_MDRSTCTL_WDTCR))&(~RSTCTL_WDTCR_WDT_EN)));
}

void drv_rstctl_wd_disable_aux(void)
{
	/* Just simply set WDTCR for WDT2 disabling operation */
	DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) |((DRV_Reg32(REG_MDRSTCTL_WDTCR))&(~RSTCTL_WDTCR_AUX_WDT_EN)));
}

kal_bool drv_rstctl_disable_all_WDTs(void)
{
	drv_rstctl_wd_disable();
	drv_rstctl_wd_disable_aux();
	kal_uint32 timeout_count = 0;
 	while((((DRV_Reg32(REG_MDRSTCTL_WDTCR) & RSTCTL_WDTCR_AUX_WDT_EN)!=0) || ((DRV_Reg32(REG_MDRSTCTL_WDTCR) & RSTCTL_WDTCR_WDT_EN)!=0)) && (timeout_count < 10000))
		timeout_count++;
	if (timeout_count == 10000)
 	{
 	 #if defined(ATEST_ENABLE)
 	 dbg_print("ASSERT (RGU): <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__);	 	//This case should not happen.
 	 #endif
 	 return KAL_FALSE;
	}
 	else
 	 return KAL_TRUE;
}

/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_enable
*
* DESCRIPTION
*  This function is used to on/off wd timer
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
* NOTE
*    Need to restart wdt timer to apply this value
*************************************************************************/
void drv_rstctl_wdt_enable(kal_bool en)
{
    if (en == KAL_TRUE)
	{
	#if !defined(__WDT_DISABLE_BY_MD_DBG__)
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) |((DRV_Reg32(REG_MDRSTCTL_WDTCR))|RSTCTL_WDTCR_WDT_EN));
		/*Reload wdt interval*/
		DRV_WriteReg32(REG_MDRSTCTL_WDTRR, RSTCTL_WDTRR_KEY | RSTCTL_WDTRR_WDT_RESTART);
    #endif
	}
	else
	{
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) |((DRV_Reg32(REG_MDRSTCTL_WDTCR))&(~RSTCTL_WDTCR_WDT_EN)));
	}
}

void drv_rstctl_wdt_enable_aux(kal_bool en)
{
    if (en == KAL_TRUE)
	{
	#ifdef __PRODUCTION_RELEASE__
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) |((DRV_Reg32(REG_MDRSTCTL_WDTCR))|RSTCTL_WDTCR_AUX_WDT_EN));
		/*Reload wdt interval*/
		DRV_WriteReg32(REG_MDRSTCTL_WDTRR, RSTCTL_WDTRR_KEY | RSTCTL_WDTRR_WDT_RESTART);
	#endif
	}
	else
	{
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) |((DRV_Reg32(REG_MDRSTCTL_WDTCR))&(~RSTCTL_WDTCR_AUX_WDT_EN)));
	}
}

/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_enableInterrupt
*
* DESCRIPTION
*  This function is used to on/off irq mode
*       reset or trigger interrupt while watchdog timout happening
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
*************************************************************************/
void drv_rstctl_wdt_enableInterrupt(kal_bool enable)
{
    if (enable == KAL_TRUE)
	{
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR,(RSTCTL_WDTCR_KEY)|((DRV_Reg32(REG_MDRSTCTL_WDTCR)) | RSTCTL_WDTCR_WDT_IRQEN));
	}
	else
	{
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR,(RSTCTL_WDTCR_KEY)|((DRV_Reg32(REG_MDRSTCTL_WDTCR)) & (~RSTCTL_WDTCR_WDT_IRQEN)));
	}
}

void drv_rstctl_wdt_enableInterrupt_aux(kal_bool enable)
{
    if (enable == KAL_TRUE)
	{
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR,(RSTCTL_WDTCR_KEY)|((DRV_Reg32(REG_MDRSTCTL_WDTCR)) | RSTCTL_WDTCR_AUX_WDT_IRQEN));
	}
	else
	{
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR,(RSTCTL_WDTCR_KEY)|((DRV_Reg32(REG_MDRSTCTL_WDTCR)) & (~RSTCTL_WDTCR_AUX_WDT_IRQEN)));
	}
}

/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_setInterval
*
* DESCRIPTION
*  This function is used to set wd tiemr
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
* NOTE
*    Need to restart wdt timer to apply this value
*************************************************************************/
void drv_rstctl_wdt_setInterval(kal_uint32 wdtInterval)
{
    /* Set watchdog interval */
	DRV_WriteReg32(REG_MDRSTCTL_WDTIR,
				   ((RSTCTL_WDTIR_KEY)|
				   ((wdtInterval & RSTCTL_WDTIR_INTERVAL_MASK) << RSTCTL_WDTIR_INTERVAL_OFFSET)));
}

void drv_rstctl_wdt_setInterval_aux(kal_uint32 wdtInterval)
{
    /* Set watchdog interval */
	DRV_WriteReg32(REG_MDRSTCTL_WDTIR_AUX,
				   ((RSTCTL_WDTIR_AUX_KEY)|
				   ((wdtInterval & RSTCTL_WDTIR_INTERVAL_MASK) << RSTCTL_WDTIR_INTERVAL_OFFSET)));
}

/*************************************************************************
* FUNCTION
*  drv_rstctl_wd_getInterval
*
* DESCRIPTION
*  This function is used to get wd timer interval(uint:T(32k))
*
* PARAMETERS
*	none
*
* RETURN VALUES
*	none
*************************************************************************/
kal_uint32 drv_rstctl_wd_getInterval(void)
{
	return (kal_uint32)(RSTCTL_WDTIR_INTERVAL_MASK & DRV_Reg32(REG_MDRSTCTL_WDTIR));
}

kal_uint32 drv_rstctl_wd_getInterval_aux(void)
{
	return (kal_uint32)(RSTCTL_WDTIR_INTERVAL_MASK & DRV_Reg32(REG_MDRSTCTL_WDTIR_AUX));
}

/*************************************************************************
* FUNCTION
*  drv_rstctl_wd_clrSta
*
* DESCRIPTION
*  This function is used to clear wdt status
*
* PARAMETERS
*	none
*
* RETURN VALUES
*	none
*************************************************************************/
void drv_rstctl_wd_clrSta(void)
{
	DRV_WriteReg32(REG_MDRSTCTL_WDTSR,(RSTCTL_WDTSR_KEY)|(RSTCTL_WDTSR_STATUS_MASK<<RSTCTL_WDTSR_STS_CLR_OFFSET));
}

void drv_rstctl_wd_clrSta_aux(void)
{
	DRV_WriteReg32(REG_MDRSTCTL_WDTSR,(RSTCTL_WDTSR_KEY)|(RSTCTL_WDTSR_AUX_STATUS_MASK<<RSTCTL_WDTSR_AUX_STS_CLR_OFFSET));
}

/*************************************************************************
* FUNCTION
*  drv_rstctl_wd_getSta
*
* DESCRIPTION
*  This function is used to get wdt status
*
* PARAMETERS
*	none
*
* RETURN VALUES
*  bit[7]:MD WDT2 SWDT indicator
*  bit[6]:MD WDT2 HWDT indicator
*  bit[2]:MD OST timer timout is triggered
*  bit[1]:MD sw WD reset indicator
*  bit[0]:MD hw WD reset indicator
*************************************************************************/
kal_uint32 drv_rstctl_wd_getSta(void)
{
	kal_uint32 wdt_sta;
	wdt_sta = DRV_Reg32(REG_MDRSTCTL_WDTSR);
	return wdt_sta;
}

/*************************************************************************
* FUNCTION
*  drv_rstctl_wd_kick
*
* DESCRIPTION
*  This function is used to retart wd tiemr
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*************************************************************************/
void drv_rstctl_restartWDT(void)
{
    #if !defined (ATEST_ENABLE)
	/* Simply reload watchdog counter */
	DRV_WriteReg32(REG_MDRSTCTL_WDTRR, RSTCTL_WDTRR_KEY | RSTCTL_WDTRR_WDT_RESTART);
 	#endif
}

void drv_rstctl_wd_rst_set_bitmap(kal_uint8 type)
{
	//if (cp15_get_cpu_id() == CPU_CORTEX_R4_ID)
	//originally difference
	// type == 0
	// do not reset ssusb
	// type == 1
	// do not reset usb
	// But for TK6291, all these bit are out of Pcore control.
	// Therefore, there is no difference for these two types.
	if ((type == 0)|| (type == 1))
	{
    	DRV_WriteReg32(REG_MDRSTCTL_WDTER_MDSYS, 0xBFFFFFFF);
	}
	else
	{
		#if defined(ATEST_ENABLE)
			dbg_print("[%s]Wrong type....\r\n", __FUNCTION__);
		#endif
		ASSERT(0);
	}
}

/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_init
*
* DESCRIPTION
*  This function is to initialize the WDT module
*
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
*************************************************************************/
void drv_rstctl_wdt_init(void)
{
    /*TODO: Read status bit and PC monitor for debug before clear status*/
#if !defined(ATEST_ENABLE)
	drv_rstctl_wd_clrSta();
#endif
	drv_rstctl_wdt_setInterval(WDT_RSTINTERVAL_VALUE);
#if defined(DRV_WDT_IRQ_MODE)
	drv_rstctl_wdt_enableInterrupt(KAL_TRUE);			//IRQ to MDMCU		
	/*TODO register IRQ and handle ISR*/
	//IRQSensitivity(IRQ_MD_WDT_CODE, KAL_TRUE);
	//IRQUnmask(IRQ_MD_WDT_CODE);
#endif
}

void drv_rstctl_wdt_init_aux(void)
{
    /*TODO: Read status bit and PC monitor for debug before clear status*/
#if !defined(ATEST_ENABLE)
	drv_rstctl_wd_clrSta_aux();
#endif
	drv_rstctl_wdt_setInterval_aux(WDT_RSTINTERVAL_VALUE2);
#if defined(DRV_WDT_IRQ_MODE)
	drv_rstctl_wdt_enableInterrupt_aux(KAL_TRUE);			//IRQ to APMCU
#endif
}

void drv_rstctl_wd_reset(wdt_irq_e irq_en, rst_target_e wdTarget, kal_uint32 wdtInterval)
{
	/* Disable WD and clear indicators*/
	drv_rstctl_wd_clrSta();
	if (wdTarget == RST_MDALL)
	{
    	DRV_WriteReg32(REG_MDRSTCTL_WDTER_MDSYS, 0xBFFFFFFF);
	}
	else
	{
		//_rst_setWdTarget(wdTarget);
	}
	/**< Step 2 : configure WDT register to start counting */
	drv_rstctl_wdt_enableInterrupt(irq_en);
	if (0 != wdtInterval)
	{
		_rst_enableWdt(1, wdtInterval); /* Maximum interval to watchdog timeout */
		//_rst_restartWDT();	/* Kick watchdog to prevent from timeout */ //already done in _rst_enableWdt
	}
	else
	{
		_rst_swWdReset();	/* To trigger software watchdog reset */
	}
}

void drv_rstctl_wd_reset_aux(wdt_irq_e irq_en, rst_target_e wdTarget, kal_uint32 wdtInterval)
{
	/* Disable WD and clear indicators*/
	drv_rstctl_wd_clrSta_aux();
	if (wdTarget == RST_MDALL)
	{
    	DRV_WriteReg32(REG_MDRSTCTL_WDTER_MDSYS, 0xBFFFFFFF);
	}
	else
	{
		//_rst_setWdTarget(wdTarget);
	}
	/**< Step 2 : configure WDT register to start counting */
    drv_rstctl_wdt_enableInterrupt_aux(irq_en);
	if (0 != wdtInterval)
	{
		_rst_enableWdt_aux(1, wdtInterval); /* Maximum interval to watchdog timeout */
		//_rst_restartWDT();	/* Kick watchdog to prevent from timeout */ //already done in _rst_enableWdt
	}
	else
	{
		_rst_swWdReset_aux();	/* To trigger software watchdog reset */
	}
}

/*************************************************************************
* FUNCTION
*  drv_rstctl_sw_reset
*
* DESCRIPTION
*  This function is used to do SW reset
*
* PARAMETERS
*	targetIP: sw module defined in RGU
*
* RETURN VALUES
*	none
*************************************************************************/
kal_bool drv_rstctl_sw_reset(rst_target_e targetIP)
{
	switch (targetIP)
    {
		case RST_IA_LOGGER:
			{_rst_resetIP(REG_MDRSTCTL_SRBER_MDSYS, RSTCTL_MDSRBER_IA_LOGGER_RST, _RST_DURATION_LOOP_DEFAULT_VALUE);break;}
		case RST_USIM1:
			{_rst_resetIP(REG_MDRSTCTL_SRBER_MDSYS, RSTCTL_MDSRBER_USIM1_RST, _RST_DURATION_LOOP_DEFAULT_VALUE);break;}
		case RST_USIM2:
			{_rst_resetIP(REG_MDRSTCTL_SRBER_MDSYS, RSTCTL_MDSRBER_USIM2_RST, _RST_DURATION_LOOP_DEFAULT_VALUE);break;}
		case RST_MDUART0:
			{_rst_resetIP(REG_MDRSTCTL_SRBER_MDSYS, RSTCTL_MDSRBER_MDUART0_RST, _RST_DURATION_LOOP_DEFAULT_VALUE);break;}
		case RST_MDUART1:
			{_rst_resetIP(REG_MDRSTCTL_SRBER_MDSYS, RSTCTL_MDSRBER_MDUART1_RST, _RST_DURATION_LOOP_DEFAULT_VALUE);break;}
		case RST_MDTOPSM:
			{_rst_resetIP(REG_MDRSTCTL_SRBER_MDSYS, RSTCTL_MDSRBER_MDTOPSM_RST, _RST_DURATION_LOOP_DEFAULT_VALUE);break;}
		case RST_MDOST:
			{_rst_resetIP(REG_MDRSTCTL_SRBER_MDSYS, RSTCTL_MDSRBER_MDOST_RST, _RST_DURATION_LOOP_DEFAULT_VALUE);break;}
		case RST_TRACE:
			{_rst_resetIP(REG_MDRSTCTL_SRBER_MDSYS, RSTCTL_MDSRBER_TRACE_RST, _RST_DURATION_LOOP_DEFAULT_VALUE);break;}
		case RST_L1SYS:
			{_rst_resetIP(REG_MDRSTCTL_SRBER_MDSYS, RSTCTL_MDSRBER_L1SYS_RST, _RST_DURATION_LOOP_DEFAULT_VALUE);break;}
		case RST_MML2:
			{_rst_resetIP(REG_MDRSTCTL_SRBER_MDSYS, RSTCTL_MDSRBER_MML2_RST, _RST_DURATION_LOOP_DEFAULT_VALUE);break;}
		case RST_SOE:
			{_rst_resetIP(REG_MDRSTCTL_SRBER_MDSYS, RSTCTL_MDSRBER_SOE_RST, _RST_DURATION_LOOP_DEFAULT_VALUE);break;}
		case RST_GPT:
			{_rst_resetIP(REG_MDRSTCTL_SRBER_MDSYS, RSTCTL_MDSRBER_MDGPTM_RST, _RST_DURATION_LOOP_DEFAULT_VALUE);break;}
		default:
		    return KAL_FALSE;
			break;
	}
    
    return KAL_TRUE;
}

/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_reset
*
* DESCRIPTION
*  This function is to do wdt reset
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
*************************************************************************/

void drv_rstctl_wdt_reset(void)
{
#if defined(DRV_WDT_RESET_PKEY_RELEASE)
	kal_uint16 powerkey_status;

	#if defined(__USB_ENABLE__)

	DCL_BOOL dcl_data = DCL_TRUE;
	DCL_HANDLE	usb_dcl_handle;

	usb_dcl_handle = DclUSB_DRV_Open(DCL_USB, FLAGS_NONE);

	DclUSB_DRV_Control(usb_dcl_handle, USB_DRV_CMD_PDN_ENABLE, (DCL_CTRL_DATA_T  *)&dcl_data);
	DclUSB_DRV_Close(usb_dcl_handle);

	//	 USB_PDNmode(KAl_TRUE);

	#endif //#if defined(__USB_ENABLE__)

	#ifdef PMIC_PRESENT

	if (BMT.PWRon != CHRPWRON)
	{
		switch(Pwrkey_Position)
		{
			case low_key:
				powerkey_status= DRV_Reg32(KP_LOW_KEY);
				break;
		#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
		#endif
			case high_key:
				powerkey_status= DRV_Reg32(KP_HI_KEY);
				break;
			default:
				ASSERT(0);
				break;
		}
		if(WdtPowerKey_Pressed())
		{
			TargetReset = 1;
		}
		else
		{
			/*lint -e(534)*/SaveAndSetIRQMask();

			drv_rstctl_wdt_setInterval(1);
			_rst_restartWDT();
			drv_rstctl_wdt_enable(KAL_TRUE);
			while(1);
		}
	}
	else
	{
		/*lint -e(534)*/SaveAndSetIRQMask();

		drv_rstctl_wdt_setInterval_aux(1);
		_rst_restartWDT();
		drv_rstctl_wdt_enable_aux(KAL_TRUE);
		while(1);
	}
	#else /*PMIC_PRESENT*/
		  /*lint -e(534)*/SaveAndSetIRQMask();

		drv_rstctl_wdt_setInterval_aux(1);
		_rst_restartWDT();
		drv_rstctl_wdt_enable_aux(KAL_TRUE);
		while(1);
	#endif   /*PMIC_PRESENT*/
#else /*!DRV_WDT_RESET_PKEY_RELEASE*/

	kal_uint16 index;
	volatile kal_uint32 trigger_time;
	kal_uint32 retry_count = 0;

#if defined(DRV_RTC_REG_COMM)
	DCL_HANDLE rtc_handler;
	RTC_CTRL_CONFIG_PDN_BIT_T rtc_cmd_data8;
#endif /*DRV_RTC_REG_COMM*/
	/*lint -e(534)*/kal_hrt_SaveAndSetIRQMask();

	for(index=0;index<1000;index++);
#if defined(DRV_RTC_REG_COMM)
	//RTC_Set_PDN_bits(rtc_pdn2 ,DRV_COMM_REG2_NORMAL_RESET);
	rtc_handler = DclRTC_Open(DCL_RTC,FLAGS_NONE);
	rtc_cmd_data8.PDNIndex = DCL_RTC_PDN2;
	rtc_cmd_data8.fgConfigBit = DRV_COMM_REG2_NORMAL_RESET;
	DclRTC_Control(rtc_handler, RTC_CMD_SET_PDN_BITS, (DCL_CTRL_DATA_T *)&rtc_cmd_data8); // New API with CMD & DATA
#endif   /*DRV_RTC_REG_COMM*/
	#if !defined(DRV_WDT_SWRST)
	drv_rstctl_wdt_setInterval_aux(1);
	_rst_restartWDT();
	drv_rstctl_wdt_enable_aux(KAL_TRUE);
	while(1);
	#else
	_rst_swWdReset_aux();	/* To trigger software watchdog reset */
	trigger_time = ust_get_current_time();
	do
	{
	    if ((ust_get_current_time() - trigger_time) > 4000000) {
            if (retry_count >= 3)
                ASSERT(0);
            
            trigger_time = ust_get_current_time();
            retry_count++;
	        _rst_swWdReset_aux();
	    }
	}
	while(1);
	#endif
#endif   /*!DRV_WDT_RESET_PKEY_RELEASE*/

}

/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_abnReset
*
* DESCRIPTION
*  This function is used to do abnormal reset
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
*************************************************************************/
void drv_rstctl_wdt_abnReset(void)
{
    kal_uint32 trigger_time;
    
    /*TODO: Need to check using sw wdt trigger instead of using hw wdt timeout*/
	#if !defined(ATEST_ENABLE)
	kal_hrt_SaveAndSetIRQMask();
	#endif

	_rst_swWdReset_aux();
	trigger_time = ust_get_current_time();
	do
	{
		ASSERT((ust_get_current_time() - trigger_time) < 4000000);		//Check AP reset MD exceed 4s
	}
	while(1);
}

/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_enableDebugMode
*
* DESCRIPTION
*  This function is used to on/off debug mode
*
* PARAMETERS
*   enable
*   0: disable
*   1: enable
*
* RETURN VALUES
*	none
*************************************************************************/

void drv_rstctl_wdt_enableDebugMode(kal_bool enable)
{
	if (enable==KAL_TRUE)
	{
		IRQUnmask(IRQ_MDWDT_CODE);
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) | ((DRV_Reg32(REG_MDRSTCTL_WDTCR))| (RSTCTL_WDTCR_WDT_EN | RSTCTL_WDTCR_WDT_IRQEN)));
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) | ((DRV_Reg32(REG_MDRSTCTL_WDTCR))| (RSTCTL_WDTCR_AUX_WDT_EN | RSTCTL_WDTCR_AUX_WDT_IRQEN)));
	}
	else
	{
		IRQMask(IRQ_MDWDT_CODE);
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) | ((DRV_Reg32(REG_MDRSTCTL_WDTCR)) & ~(RSTCTL_WDTCR_WDT_EN | RSTCTL_WDTCR_WDT_IRQEN)));
		DRV_WriteReg32(REG_MDRSTCTL_WDTCR, (RSTCTL_WDTCR_KEY) | ((DRV_Reg32(REG_MDRSTCTL_WDTCR)) & ~(RSTCTL_WDTCR_AUX_WDT_EN | RSTCTL_WDTCR_AUX_WDT_IRQEN)));
	}
}

void drv_rstctl_set_check_bit(vpeid_e vpe)
{
	DRV_WriteReg32(REG_MDRSTCTL_CHECK_BIT_SET, ((RSTCTL_MD_CHECK_AND_KICK_KEY + vpe) << RSTCTL_MD_CHECK_AND_KICK_KEY_OFFSET) | (0x1 << vpe));
}

void drv_rstctl_clr_check_bit(vpeid_e vpe)
{
	DRV_WriteReg32(REG_MDRSTCTL_CHECK_BIT_CLR, ((RSTCTL_MD_CHECK_AND_KICK_KEY + vpe) << RSTCTL_MD_CHECK_AND_KICK_KEY_OFFSET) | (0x1 << vpe));
}

void drv_rstctl_set_kick_bit(vpeid_e vpe)
{
	DRV_WriteReg32(REG_MDRSTCTL_KICK_BIT_SET, ((RSTCTL_MD_CHECK_AND_KICK_KEY + vpe) << RSTCTL_MD_CHECK_AND_KICK_KEY_OFFSET) | (0x1 << vpe));
}

void drv_rstctl_clr_kick_bit(vpeid_e vpe)
{
	DRV_WriteReg32(REG_MDRSTCTL_KICK_BIT_CLR, ((RSTCTL_MD_CHECK_AND_KICK_KEY + vpe) << RSTCTL_MD_CHECK_AND_KICK_KEY_OFFSET) | (0x1 << vpe));
}

kal_uint32 drv_rstctl_get_check_sts(void)
{
	return DRV_Reg32(REG_MDRSTCTL_CHECK_BIT_STS);
}

kal_uint32 drv_rstctl_get_kick_sts(void)
{
	return DRV_Reg32(REG_MDRSTCTL_KICK_BIT_STS);
}

/*************************************************************************
* FUNCTION
*  WDT_init
*
* DESCRIPTION
*  This function is to initialize the WDT module
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
*************************************************************************/
void WDT_init(void)
{
    static DCL_HANDLE wdt_handle;
	WDT_SET_KICKBIT_BASE = (kal_uint32*)REG_MDRSTCTL_KICK_BIT_SET;
	WDT_SET_CHECKBIT_BASE = (kal_uint32*)REG_MDRSTCTL_CHECK_BIT_SET;
	WDT_CLR_CHECKBIT_BASE = (kal_uint32*)REG_MDRSTCTL_CHECK_BIT_CLR;
	drv_rstctl_wdt_init();
	drv_rstctl_wdt_init_aux();
	//set check bit for all vpes 
	vpeid_e vpe_id;
	for(vpe_id=0 ; vpe_id<VPE_NUM; vpe_id++)
		drv_rstctl_set_check_bit(vpe_id);
	drv_rstctl_restartWDT();
	
	wdt_handle = DclWDT_Open(DCL_WDT, 0);
	if(STATUS_OK !=DclWDT_RegisterCallback(wdt_handle,EVENT_WDT_TIMEOUT, NULL))
		{
 		 ASSERT(0);
		}
	if (STATUS_OK != DclWDT_Close(wdt_handle))
		{
		 ASSERT(0);
		}	
	#if defined(__MTK_TARGET__)
	/*Begin : Register BB_Reg DUMP*/
	Pcore_RGU_dump.regions = (kal_uint32*)Pcore_RGU_dump_regions; 
	Pcore_RGU_dump.num = sizeof(Pcore_RGU_dump_regions) / (sizeof(kal_uint32) * 3); 
	Pcore_RGU_dump.bbreg_dump_callback = NULL; 
	EX_REGISTER_BBREG_DUMP(&Pcore_RGU_dump);
	/*End : Register BB_Reg DUMP*/
	#endif
}

/*************************************************************************
* FUNCTION
*  Is_WDT_Init
*
* DESCRIPTION
*  Check WD timer is set to system default value already or not
*
* PARAMETERS
*    none
*
* RETURN VALUES
*     TRUE: already set
*    FALSE: not yet
*
*************************************************************************/
kal_bool Is_WDT_Init()// for ex_item.c
{
	//**Actually, this function is used to check if abnormal reset happened in reset mode 
	//WDT_interval is at WDT reset field in Elbrus, so we ckeck WDTSR
	
	if((DRV_Reg32(REG_MDRSTCTL_WDTSR) != 0) || (drv_rstctl_wd_getInterval() == WDT_RSTINTERVAL_VALUE))
		return KAL_TRUE;
	else
		return KAL_FALSE;
}

void wdt_enable(kal_bool en)
{
    drv_rstctl_wdt_enable(en);
    drv_rstctl_wdt_enable_aux(en);
}

void mips_isr_mdwdt_handler(void)
{
	kal_uint32 check_sts = drv_rstctl_get_check_sts();
	kal_uint32 kick_sts = drv_rstctl_get_kick_sts();
	kal_uint32 error_code2 = (check_sts ^ kick_sts) & check_sts;
	#if defined(ATEST_ENABLE)
    	dbg_print("[%s] handling mdwdt irq\r\n", __FUNCTION__);
		dbg_print("[%s] Issuing fatale error(KAL_ERROR_L1CORE_HW_WDT_TIMEOUT_EXCP, code2=%x). \r\n", __FUNCTION__, error_code2);
 	#endif
	kal_fatal_error_handler(KAL_ERROR_L1CORE_HW_WDT_TIMEOUT_EXCP, error_code2);
}

void invalidate_WDTBASE(void)
{
	WDT_SET_KICKBIT_BASE = (kal_uint32*)REG_MDRSTCTL_WDT_DUMMY;
}

#if defined(ATEST_ENABLE)


#define RGU_RESET_UT_RESULT_OFFSET			(31)			//UT result is used to determine if next iteration should proceed.
#define RGU_RESET_UT_RESULT_MASK			(0x80000000)
#define RGU_RESET_SCOPE_OFFSET 				(29)
#define RGU_RESET_SCOPE_MASK				(0x60000000)
#define RGU_FRMWRK_PARAMETER_OFFSET 		(27)				//Parameter let the counter-part know what the triger source is.
#define RGU_FRMWRK_PARAMETER_MASK 			(0x18000000)	
#define RGU_SCOPE_TO_CLEAR_STATE_OFFSET		(25)
#define RGU_SCOPE_TO_CLEAR_STATE_MASK		(0x06000000)	//For IPs that could not software reset during testing, reset the system to clear corresponding state.
#define RGU_API_CALL_ACCUMULATOR_OFFSET		(0)
#define RGU_API_CALL_ACCUMULATOR_MASK		(0x01ffffff)




#define RSTCTL_APWDTCR_WDT_IRQEN			(1 << 3)
#define RSTCTL_APWDTCR_WDT_SPD_UP			(1 << 15)
#define	RSTCTL_APWDTCR_KEY					(0x55 << 24)
#define	RSTCTL_APWDTRR_KEY					((0x7208 << 16)| 1)
#define	RSTCTL_APWDTCR_WDT_EN				(1 << 0)
#define	RSTCTL_APWDTIR_KEY					(0x67 << 24)
#define RSTCTL_APWDTIR_INTERVAL_MASK		(0x3Fffff)
#define RSTCTL_APWDTSR_STATUS_MASK			0x07
#define RSTCTL_APWDTSR_STS_CLR_MASK			0X07		// CLR_AP_OSTT_STS(bit5), CLR_AP_SWDT_STS(bit4), CLR_AP_HWDT_STS(bit3) 
#define RSTCTL_APWDTSR_STS_CLR_OFFSET		3
#define RSTCTL_APWDTSR_CNT_CLR_MASK		    0x03		// CLR_AP_SW_WDT_CNT (bit7), CLR_AP_HW_WDT_CNT (bit6)
#define RSTCTL_APWDTSR_CNT_CLR_OFFSET		6
#define RSTCTL_APWDTSR_SW_WDT_CNT_MASK		0XFF
#define RSTCTL_APWDTSR_SW_WDT_CNT_OFFSET	16
#define RSTCTL_APWDTSR_HW_WDT_CNT_MASK		0XFF
#define RSTCTL_APWDTSR_HW_WDT_CNT_OFFSET	8
#define RSTCTL_APWDTSR_KEY					(0x76 << 24)
#define RSTCTL_APWDTSR_HWDT_STS				(1 << 0)
#define RSTCTL_APWDTSR_SWDT_STS				(1 << 1)
#define RSTCTL_APWDTSR_OSTT_STS				(1 << 2)
#define RSTCTL_APWDTSR_MD1_STATUS_MASK		(0x01)		/* MD1_WDT_STS(bit0): WDT_IRQ fired && ! AP_AUTO_RST */
#define RSTCTL_APWDTSR_MD1_STATUS_OFFSET	(0)
#define RSTCTL_APWDTSR_MD1_KEY				(0x7663 << 16)
#define RSTCTL_APWDTSR_MD1_STS_CLR_MASK		(0X01)		/* CLR_MD1_WDT_STS(bit1) */
#define RSTCTL_APWDTSR_MD1_STS_CLR_OFFSET	(1)
#define RSTCTL_APMDWDTCFG_MD1_KEY			(0X2555 << 16)
#define RSTCTL_APMDWDTCFG_MD1_WDT_LV_EN_MD1	(1 << 0)

typedef enum
{
 	SOFTWARE_RESET = 0,			//Software reset target IP
 	WHOLE_SYSTEM_RESET, 		//Trigger source: APRGU
 	AP_SOFTWARE_RESET_MD, 		//Trigger source: MDRGU
 	RGU_RESET_SCOPE_END			//The last used to distinguish the end of framewor.
}RGU_reset_scope_e;

extern kal_bool UART_CheckTxAllSentOut(UART_PORT port);

kal_uint32 wdt_lisr_vpe_flag = 0;

void _rst_wdt_lisr(){

    kal_uint32 count = 0;

    if(kal_get_current_vpe_id()%2)
        kal_hrt_SaveAndSetIRQMask();
    else
        SaveAndSetIRQMask();

    if (kal_get_current_vpe_id() == 0) {
        /* Wait other VPEs */
        //while(kal_atomic_read(&wdt_lisr_vpe_flag) < 3);
        
        /* Trigger SWDT to AP */
        DRV_WriteReg32(REG_MDRSTCTL_SRCMR_SWDT,RSTCTL_AUX_SRCMR_KEY_SWDT);

        do {
            count++;
            if (count%50000 == 0)
                /* Trigger SWDT to AP again */
                DRV_WriteReg32(REG_MDRSTCTL_SRCMR_SWDT,RSTCTL_AUX_SRCMR_KEY_SWDT);
        } while(1);
    } else {
        kal_atomic_inc(&wdt_lisr_vpe_flag);
        while(1);
    }
}

void _rst_register_lisr(){

	IRQ_Register_LISR(IRQ_MDWDT_CODE, _rst_wdt_lisr, "DCL WDT LISR");
	IRQSensitivity(IRQ_MDWDT_CODE,KAL_TRUE);
	IRQUnmask(IRQ_MDWDT_CODE);
}

#if !defined(RSTCTL_FPGA_PLAT)

#if !defined(BASE_MADDR_TOP_RGU)
#define BASE_MADDR_TOP_RGU          (0xC0007000) 
#endif 
#define REG_TOPRGU_MODE   			(BASE_MADDR_TOP_RGU+0x0)
#define REG_TOPRGU_SWRST			(BASE_MADDR_TOP_RGU+0x14)
#define REG_TOPRGU_RETAIN 			(BASE_MADDR_TOP_RGU+0x24)
#define REG_TOPRGU_DUMMY			(BASE_MADDR_TOP_RGU + 0x20)
#define REG_TOPRGU_LENGTH			(BASE_MADDR_TOP_RGU + 0x04)
#define REG_TOPRGU_RESTART			(BASE_MADDR_TOP_RGU+0x08)

#if 1
void _rst_set_system_ready_sts(kal_uint32 system, kal_uint32 system_coverage)
{
 	kal_uint32 current_val; 
 	if ((system & system_coverage)== 0)
 	{
 	 	dbg_print("%s: system out of system coverage\n\r", __FUNCTION__);
	 	ASSERT(0);
 	}
 	//Add switch case to prevent race condition
	switch (system)
 	{
	 	case APSYS: //is the first one to enable ready status. 
			//no need to wait.
			dbg_print("Setting MDRGU WDT DUMMY ....\r\n");
			break; 
	 	case MD1SYS: //is the second one to enable ready status. 
			dbg_print("Wait for (APSYS) APRGU WDT DUMMY write ready...\r\n"); 
			while((DRV_Reg32(REG_MDRSTCTL_WDT_DUMMY) & (APSYS))!= (APSYS & system_coverage));
			break; 
 	}
 	current_val = DRV_Reg32(REG_MDRSTCTL_WDT_DUMMY) | system; 
 	DRV_WriteReg32(REG_MDRSTCTL_WDT_DUMMY, current_val); 
 	dbg_print("After writing ready status, REG_APRSTCTL_WDT_DUMMY = 0x%x\r\n", DRV_Reg32(REG_APRSTCTL_WDT_DUMMY));
}

void _rst_clr_system_ready_sts(kal_uint32 system)
{
 	kal_uint32 current_val; 
 	if ((system & (APSYS | MD1SYS))== 0)
 	{
 	 	dbg_print("%s: system out of coverage\n\r", __FUNCTION__);
	 	ASSERT(0);
 	}
 	current_val = DRV_Reg32(REG_MDRSTCTL_WDT_DUMMY) & ~(system); 
 	DRV_WriteReg32(REG_MDRSTCTL_WDT_DUMMY, current_val); 
}

kal_uint32 _rst_get_system_ready_sts(void)
{
 	return (DRV_Reg32(REG_MDRSTCTL_WDT_DUMMY));
}

#endif
kal_uint32 _rst_get_this_reset_scope(void)
{
 	kal_uint32 this_reset_scope;
 	this_reset_scope = (DRV_Reg32(REG_TOPRGU_RETAIN) & RGU_RESET_SCOPE_MASK) >> RGU_RESET_SCOPE_OFFSET;
 	return this_reset_scope;
}

void _rst_set_next_reset_scope(kal_uint32 next_reset_scope)
{
 	kal_uint32 dummy_content;
 	dummy_content = (DRV_Reg32(REG_TOPRGU_RETAIN) & (~RGU_RESET_SCOPE_MASK)) | (next_reset_scope << RGU_RESET_SCOPE_OFFSET);
 	DRV_WriteReg32(REG_TOPRGU_RETAIN, dummy_content);
}


void _rst_set_rgu_frmwrk_parameter(kal_uint32 content)
{
 	kal_uint32 current_val;
 	current_val = DRV_Reg32(REG_TOPRGU_RETAIN) & (~RGU_FRMWRK_PARAMETER_MASK);
 	if (((content << RGU_FRMWRK_PARAMETER_OFFSET) & (~RGU_FRMWRK_PARAMETER_MASK)) > 0) //exceed the parameter range.
 		ASSERT(0);
 	else
 	{
	 	current_val |= ((content << RGU_FRMWRK_PARAMETER_OFFSET) & RGU_FRMWRK_PARAMETER_MASK);
	 	DRV_WriteReg32(REG_TOPRGU_RETAIN, current_val);
 	}
}

kal_uint32 _rst_get_rgu_frmwrk_parameter(void)
{
 	return (DRV_Reg32(REG_TOPRGU_RETAIN) & RGU_FRMWRK_PARAMETER_MASK) >> RGU_FRMWRK_PARAMETER_OFFSET;
}

void _rst_set_rgu_ut_result(kal_uint32 ut_result)  //ut_result  = UT_REPORT_PASS (0) or  UT_REPORT_FAIL(-1).
{
 	kal_uint32 current_val;
 	current_val = DRV_Reg32(REG_TOPRGU_RETAIN) & (~RGU_RESET_UT_RESULT_MASK);
 	current_val |= (ut_result & RGU_RESET_UT_RESULT_MASK >> RGU_RESET_UT_RESULT_OFFSET)<<RGU_RESET_UT_RESULT_OFFSET;
 	DRV_WriteReg32(REG_TOPRGU_RETAIN, current_val);
}

kal_uint32 _rst_get_rgu_ut_result(void)
{
 	kal_uint32 current_val; 
 	current_val = (DRV_Reg32(REG_TOPRGU_RETAIN) & RGU_RESET_UT_RESULT_MASK) >> RGU_RESET_UT_RESULT_OFFSET; 
 	if (UT_REPORT_PASS == current_val)
 		return UT_REPORT_PASS; 
 	else
 		return UT_REPORT_FAIL; 
}

void _rst_set_rgu_scope_to_clear_state(kal_uint32 clear_scope)
{
 	kal_uint32 current_val;
 	current_val = DRV_Reg32(REG_TOPRGU_RETAIN) & (~RGU_SCOPE_TO_CLEAR_STATE_MASK) ;
 	current_val |= (clear_scope & (RGU_SCOPE_TO_CLEAR_STATE_MASK >> RGU_SCOPE_TO_CLEAR_STATE_OFFSET)) << RGU_SCOPE_TO_CLEAR_STATE_OFFSET;
 	DRV_WriteReg32(REG_TOPRGU_RETAIN, current_val);
}

kal_uint32 _rst_get_rgu_scope_to_clear_state(void)
{
 	return ((DRV_Reg32(REG_TOPRGU_RETAIN) &  RGU_SCOPE_TO_CLEAR_STATE_MASK) >> RGU_SCOPE_TO_CLEAR_STATE_OFFSET);
}



void _rst_inc_rgu_api_call_accumulator(void)
{
 	kal_uint32 current_val;
	current_val = (DRV_Reg32(REG_TOPRGU_RETAIN) & (~RGU_API_CALL_ACCUMULATOR_MASK));
 	current_val |= ((DRV_Reg32(REG_TOPRGU_RETAIN) & RGU_API_CALL_ACCUMULATOR_MASK) + 1);
 	DRV_WriteReg32(REG_TOPRGU_RETAIN, current_val);
}

kal_uint32 _rst_get_rgu_api_call_accumulator(void)
{
	return (DRV_Reg32(REG_TOPRGU_RETAIN) & RGU_API_CALL_ACCUMULATOR_MASK);
}

kal_bool _rst_is_system_within_converage(subsystem_e target_system, subsystem_e system_converage)
{
 if ((target_system & system_converage) == target_system)
 	return KAL_TRUE;
 else
 	return KAL_FALSE;
}

subsystem_e _rst_return_dominate_system(subsystem_e target_system)
{
 if (APSYS == (target_system & APSYS))
 	return APSYS;
 if (MD1SYS == (target_system & MD1SYS))
 	return MD1SYS;
 ASSERT(0);
 return 0;
}


kal_bool _rst_setup_whole_system_reset_trigger_path(void)
{
 	kal_bool ret_status = KAL_TRUE;
 	//actually, for whole system reset, it does not need to setup the trigger path.
 	//Set APRGU in reset mode.  --> APRGU IRQ disable.
 	DRV_WriteReg32(REG_TOPRGU_MODE,0x22000005);
	_rst_set_rgu_frmwrk_parameter(WHOLE_SYSTEM_RESET);
	//make MDRSTCTL_DUMMY dirty
 	DRV_WriteReg32(REG_MDRSTCTL_DUMMY,0x22222222); 
 	return ret_status;
}

kal_bool _rst_trigger_whole_system_reset(kal_uint32 delay_cycles)
{
 	kal_bool ret_status = KAL_TRUE;
 	_rst_setup_whole_system_reset_trigger_path();  	  //Set APRGU in reset mode.

 	//for this case, we need to trigger reset in APRGU.
 	if (0 < delay_cycles)
 	{
	  	//set toprgu timeout interval
	  	DRV_WriteReg32(REG_TOPRGU_LENGTH,0x8|(delay_cycles << 5));  //one delay cycle equals to 15.6ms
	  	DRV_WriteReg32(REG_TOPRGU_RESTART,0x1971);
 	}
 	else //trigger software WDT
	 	//trigger TOPRGU SWDT reset
	 	DRV_WriteReg32(REG_TOPRGU_SWRST,0x00001209);
 	return ret_status;
}

kal_bool _rst_is_whole_system_reset_triggered()
{
 	if ((WHOLE_SYSTEM_RESET == _rst_get_rgu_frmwrk_parameter()) && (0 == DRV_Reg32(REG_MDRSTCTL_DUMMY)))
 	{
		dbg_print("Whole system reset is triggered\r\n");
		return KAL_TRUE;
 	}
 	else
   		return KAL_FALSE;
}

kal_bool _rst_clear_whole_system_reset_status(void)
{
 	DRV_WriteReg32(REG_TOPRGU_MODE,0x22000000);
 	_rst_set_rgu_frmwrk_parameter(0);
 	return KAL_FALSE;
}

kal_bool _rst_setup_ap_software_reset_trigger_path(void)
{
 	kal_bool ret_status = KAL_TRUE;
 	kal_uint32 current_val;
	_rst_set_rgu_frmwrk_parameter(AP_SOFTWARE_RESET_MD);
 	//Set the path from MDRGU to APRGU. (MDRGU IRQ enable)
 	current_val = DRV_Reg32(REG_MDRSTCTL_WDTCR);
 	current_val &= ~(RSTCTL_WDTCR_WDT_SPD_UP);
 	current_val |= (RSTCTL_WDTCR_AUX_WDT_IRQEN);
 	DRV_WriteReg32(REG_MDRSTCTL_WDTCR,RSTCTL_WDTCR_KEY | current_val); //1. disable speedup.  2. Enable IRQ_EN to AP
	
	DRV_WriteReg32(REG_MDRSTCTL_WDTER_MDSYS, 0xBFFFFFFF);
 	return ret_status;
}

kal_bool _rst_trigger_ap_software_reset(kal_uint32 delay_cycles)
{
 	kal_bool ret_status = KAL_TRUE;
 	kal_uint32 current_val;
 	_rst_setup_ap_software_reset_trigger_path();   //Set up the path to allow trigger CA7 ISR.  (MDRGU: enable IRQ, APRGU: enable level )
 	if (0 < delay_cycles)
 	{
 	    /* Trigger WDT1, and SWDT would be triggered in WDT1's LISR */
	 	DRV_WriteReg32(REG_MDRSTCTL_WDTIR, RSTCTL_WDTIR_KEY | (delay_cycles & RSTCTL_WDTIR_INTERVAL_MASK));

	 	current_val = DRV_Reg32(REG_MDRSTCTL_WDTCR);
	 	current_val |= RSTCTL_WDTCR_WDT_EN;
	 	DRV_WriteReg32(REG_MDRSTCTL_WDTCR,RSTCTL_WDTCR_KEY | current_val);
	 	
	 	DRV_WriteReg32(REG_MDRSTCTL_WDTRR, RSTCTL_WDTRR_KEY|RSTCTL_WDTRR_WDT_RESTART); //we only needs to wait for MDRGU WDT to down count the delay cycles.
 	}
 	else
 	{
 	    /* Also trigger WDT1, the time interval should be 1 */
	 	DRV_WriteReg32(REG_MDRSTCTL_WDTIR, RSTCTL_WDTIR_KEY | (1 & RSTCTL_WDTIR_INTERVAL_MASK));

	 	current_val = DRV_Reg32(REG_MDRSTCTL_WDTCR);
	 	current_val |= RSTCTL_WDTCR_WDT_EN;
	 	DRV_WriteReg32(REG_MDRSTCTL_WDTCR,RSTCTL_WDTCR_KEY | current_val);
	 	
	 	DRV_WriteReg32(REG_MDRSTCTL_WDTRR, RSTCTL_WDTRR_KEY|RSTCTL_WDTRR_WDT_RESTART); //we only needs to wait for MDRGU WDT to down count the delay cycles.
 	}
 	return ret_status;
}


kal_bool _rst_is_ap_software_reset_triggered()
{
 	//CHECK WDTSR (MD1_WDT_STS)
	if ((AP_SOFTWARE_RESET_MD == _rst_get_rgu_frmwrk_parameter()))//&&(DRV_Reg32(REG_MDRSTCTL_WDTSR) != 0))
 	{
	 	dbg_print("AP software reset MD triggered by MDRGU \r\n");
	 	return KAL_TRUE;
 	}
 	else
		return KAL_FALSE;
}

kal_bool _rst_clear_ap_software_reset_status(void)
{
 	kal_uint32 current_val;
 	//Note: remember to disable WDT make sure system under control.
 	current_val = DRV_Reg32(REG_MDRSTCTL_WDTCR);
 	current_val &= ~RSTCTL_WDTCR_AUX_WDT_EN;
 	DRV_WriteReg32(REG_MDRSTCTL_WDTCR, RSTCTL_WDTCR_KEY | current_val);
	//clear status
	DRV_WriteReg32(REG_MDRSTCTL_WDTSR,(RSTCTL_WDTSR_KEY)|(RSTCTL_WDTSR_STATUS_MASK<<RSTCTL_WDTSR_STS_CLR_OFFSET));
	DRV_WriteReg32(REG_MDRSTCTL_WDTSR,(RSTCTL_WDTSR_KEY)|(RSTCTL_WDTSR_AUX_STATUS_MASK<<RSTCTL_WDTSR_AUX_STS_CLR_OFFSET));
 	//Clear the parameter as well.
 	_rst_set_rgu_frmwrk_parameter(0);
 	return KAL_TRUE;
}

UT_REPORT_STATUS _rst_check_ip_reset(ut_testcase_struct *testcase_ptr, kal_uint32 test_items) //Only check if reset correctly.
{
 	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;
 	if (0 < test_items)  //test_items must equals 1 at least. (test case is mandatorily located at 1st entry. )
 	{
 	 	dbg_print("\nCheck IP initial value: %s\n\r", (testcase_ptr)[0].description);
 	 	ut_ret_status = (testcase_ptr)[0]._main_fn(testcase_ptr[0].flags, testcase_ptr[0].para); //  check  initial after reset
 	}
 	else
 	{
 	 	dbg_print("ASSERT (RGU): <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__);	 	//This case should not happen.
 	 	ut_ret_status = UT_REPORT_FAIL;
 	}
	if (UT_REPORT_PASS == ut_ret_status)
 		dbg_print("\n\n IP initial value check: PASS \n\r");
 	else
 		dbg_print("\n\n IP initial value check: FAIL \n\r");
 	return ut_ret_status;
}

UT_REPORT_STATUS _rst_run_ip_ut(ut_testcase_struct *testcase_ptr, kal_uint32 test_items)
{
 	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;
 	kal_uint32 func_idx;
 	if (1 < test_items)
 	{
     	for(func_idx = 1; func_idx < test_items; func_idx ++)
     	{
  	  	 	dbg_print("\nIP unit test: %s\n\r", (testcase_ptr)[func_idx].description);
		 	ut_ret_status	= (testcase_ptr)[func_idx]._main_fn(testcase_ptr[func_idx].flags, testcase_ptr[func_idx].para); //  Other UTs exclude  initial value check.
         	if (UT_REPORT_FAIL == ut_ret_status)
		 		return ut_ret_status;
     	}
 	}
 	else  //1.  no test case. 2. check IP's initial value only (no other UTs)
 	{
 	 	dbg_print("ASSERT (RGU): <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__);	 	//This case should not happen.
 	 	ut_ret_status = UT_REPORT_FAIL;
 	}
 	if (UT_REPORT_PASS == ut_ret_status)
 		dbg_print("\n\n IP unit test: PASS \n\r");
 	else
 		dbg_print("\n\n IP unit test: FAIL \n\r");
 	return ut_ret_status;
}

void _rst_prepare_for_next_rgu_it_call(subsystem_e system_coverage, UT_REPORT_STATUS ut_ret_status)
{
	_rst_set_rgu_scope_to_clear_state(RGU_RESET_SCOPE_END); //For the next iteration, it is necessary to offer a clear dependent state. To distinguish framework or new iteration reset, we burry RGU_RESET_SCOPE_END. 
	_rst_set_next_reset_scope(SOFTWARE_RESET); //Upon all the reset scopes are tested,  set the reset scope condition back to SOFTWARE_RESET.
 	_rst_inc_rgu_api_call_accumulator();   //Increase RGU_API_CALL accumulator to prevent executing allready tested RGU_API.
 	_rst_set_rgu_ut_result(ut_ret_status); //Store the ut_ret_status. If the status is UT_REPORT_FAIL, all the reset RGU_APIs will be ignored.
 	UT_DELAY_LOOP(_RST_DURATION_LOOP_DEFAULT_VALUE);  //Wait for effective register write.
 	if (APSYS == (system_coverage & APSYS))
 	{
	 	dbg_print("Trigger AP reset MD for next framework interation....\n\r");
	 	_rst_trigger_ap_software_reset(0);	   //At the end of this API call, trigger whole systemr reset to make system ready for next API call.
	 	while(1);

 	}
 	else  //Without AP, system coverage only includes MD1SYS, L1SYS, and/or ARM7SYS. 
 	{
	 	dbg_print("Without AP to boot up Pcore, you need to reload code through CMM again. \n\r");
	 	while(1);
 	}
}

UT_REPORT_STATUS _rst_examine_ip_through_software_reset(rst_target_e targetIP, ut_testcase_struct *testcase_ptr, kal_uint32 test_items)
{
 	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;
 	if (RST_NULL == targetIP) return UT_REPORT_PASS;	//Some IPs (like MEMSYS) do not tolerate software reset.
 	dbg_print("\n\n\nINFO (RGU) Software reset stage: \r\n");
 	ut_ret_status = _rst_check_ip_reset(testcase_ptr, test_items);  //Only check if power on reset correctly.
 	if (UT_REPORT_FAIL == ut_ret_status)
 	 	return ut_ret_status;
 	ut_ret_status = _rst_run_ip_ut(testcase_ptr, test_items);
 	if (UT_REPORT_FAIL == ut_ret_status)
 		return ut_ret_status;
	
	dbg_print("PASS (RGU) UT check after bootup @ %s \r\n", __FUNCTION__);
 	//The softwre reset function
 	dbg_print("INFO (RGU) Software reset IP @ %s \r\n", __FUNCTION__);
 	if (KAL_FALSE == drv_rstctl_sw_reset(targetIP)) {
 	    dbg_print("Target IP do NOT support SW reset function\r\n");
 	    goto end;
 	}
 	ut_ret_status = _rst_check_ip_reset(testcase_ptr, test_items);  //Only check if reset correctly.
 	if (UT_REPORT_FAIL == ut_ret_status)
  		return ut_ret_status;
 	ut_ret_status = _rst_run_ip_ut(testcase_ptr, test_items);

end:
 	if (UT_REPORT_FAIL == ut_ret_status)
 	{
 	 	dbg_print("FAIL (RGU) UT check[software reset] @ %s \r\n\n\n", __FUNCTION__);
  	 	dbg_print("****************************************\r\n");
	 	dbg_print("^^  Software reset stage test ::FAIL::&&\r\n");
	 	dbg_print("****************************************\r\n");
 	}
 	else
 	{
 	 	dbg_print("PASS (RGU) UT check[software reset] @ %s \r\n", __FUNCTION__);
  	 	dbg_print("****************************************\r\n");
	 	dbg_print("^^  Software reset stage test ::PASS::&&\r\n");
	 	dbg_print("****************************************\r\n");
 	}
 	return ut_ret_status;
}

UT_REPORT_STATUS _rst_examine_ip_through_whole_system_reset(subsystem_e system_converage,ut_testcase_struct *testcase_ptr, kal_uint32 test_items, kal_uint32 delay_cycles)
{
 	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;
 	dbg_print("\n\n\nINFO (RGU) Whole system reset stage: \r\n");
 	if (KAL_TRUE ==_rst_is_system_within_converage(APSYS, system_converage))
	{
		//(1) --> UT --> (2) --> (3) --> reboot --> UT -->(4)
	 	//1 (1)
		if ((0  < delay_cycles)&&(!_rst_is_whole_system_reset_triggered()))
	 	{
		 	dbg_print("INFO (RGU) whole system reseting with delay cycles:%d... @ %s \r\n", delay_cycles, __FUNCTION__);
            while(!UART_CheckTxAllSentOut(uart_port1));
		 	_rst_trigger_whole_system_reset(delay_cycles);
	 	}
	 	ut_ret_status = _rst_check_ip_reset(testcase_ptr, test_items);  //Only check if reset correctly.
	 	if (UT_REPORT_FAIL == ut_ret_status)
		 	return ut_ret_status;
	 	ut_ret_status = _rst_run_ip_ut(testcase_ptr, test_items);
	 	if (UT_REPORT_FAIL == ut_ret_status)
		 	return ut_ret_status;
	 	dbg_print("PASS (RGU) UT check after bootup @ %s \r\n", __FUNCTION__);
	 
	 	if ((0  < delay_cycles)&&(!_rst_is_whole_system_reset_triggered())) //reset should be triggered before UT finished
	 	{
	 	 	dbg_print("Delay cycle exceeds the UT runtime @ %s \r\n", __FUNCTION__);
		 	while(1);
	 	}
		//1 (2)
	 	if ((0 == delay_cycles)&&(!_rst_is_whole_system_reset_triggered()))
	 	{
 	 	 	dbg_print("INFO (RGU) whole system reseting ... @ %s \r\n", __FUNCTION__);
            while(!UART_CheckTxAllSentOut(uart_port1));
	     	_rst_trigger_whole_system_reset(0); //whole system reset.
	     	while(1);
   	 	}
	 	else
	   		dbg_print("INFO (RGU) whole system reset has been triggered @ %s \r\n", __FUNCTION__);
	 	//1 (3)
	 	//while(!_rst_is_whole_system_reset_triggered());
		//1 (4)
		_rst_clear_whole_system_reset_status();
	}
 	else //Igrnore whole system reset.
	{
		dbg_print("INFO(RGU) APSYS is 'not' included in system converage. Whole system reset test is ignored. \r\n");
	  	return UT_REPORT_PASS;
	}
	if (UT_REPORT_FAIL == ut_ret_status)
	{
	 	dbg_print("********************************************\r\n");
	 	dbg_print("^^  Whole system reset stage test ::FAIL::&&\r\n");
	 	dbg_print("********************************************\r\n");
	}
 	else
	{
	 	dbg_print("********************************************\r\n");
	 	dbg_print("^^	 Whole system reset stage test ::PASS::&&\r\n");
	 	dbg_print("********************************************\r\n");
	}
 	return ut_ret_status;

}

kal_bool g_ip_sup_sw_rst = KAL_TRUE;

UT_REPORT_STATUS _rst_examine_ip_through_ap_software_reset(subsystem_e system_converage, ut_testcase_struct *testcase_ptr, kal_uint32 test_items, kal_uint32 delay_cycles,  kal_bool is_core_rebooted)
{
 	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;
 	dbg_print("\n\n\nINFO (RGU) AP software reset stage: \r\n");
 	//AP software reset MD requires cooperation between APSYS and MD1SYS.
 	if (KAL_TRUE ==_rst_is_system_within_converage(MD1SYS | APSYS, system_converage))
	{
	 	//(1) --> UT --> (2) --> (3) --> reboot --> (4)	[is_core_rebooted  == KAL_TRUE]
	 	//(1) --> UT --> (2) --> (3) --> (4) --> (5) UT	[is_core_rebooted  == KAL_FALSE] --> Check this IP is effected by resetting other subsystem.

	 	//1 (1)
	 	if ((0  < delay_cycles)&&(!_rst_is_ap_software_reset_triggered()))
	 	{
	 		dbg_print("INFO (RGU) ap software reseting with delay cycles:%d... @ %s \r\n", delay_cycles, __FUNCTION__);
            while(!UART_CheckTxAllSentOut(uart_port1));
		 	_rst_trigger_ap_software_reset(delay_cycles);
	 	}
	 	
 	    if (_rst_is_ap_software_reset_triggered() || g_ip_sup_sw_rst)
    	 	ut_ret_status = _rst_check_ip_reset(testcase_ptr, test_items);  //Only check if reset correctly.
	 	
	 	if (UT_REPORT_FAIL == ut_ret_status)
			return ut_ret_status;
	 	ut_ret_status = _rst_run_ip_ut(testcase_ptr, test_items);
	 	if (UT_REPORT_FAIL == ut_ret_status)
			return ut_ret_status;
	 	dbg_print("PASS (RGU) UT check after bootup @ %s \r\n", __FUNCTION__);
	 	if ((0  < delay_cycles)&&(!_rst_is_ap_software_reset_triggered())) //reset should be triggered before UT finished
	 	{
	 	 	dbg_print("Delay cycle exceeds the UT runtime @ %s \r\n", __FUNCTION__);
		 	//_rst_clear_ap_software_reset_status();
		 	while(1);
	 	}
	 	//1 (2)
	 	if ((0 == delay_cycles)&&(!_rst_is_ap_software_reset_triggered()))
	 	{
	 	 	dbg_print("INFO (RGU) ap software reseting ... @ %s \r\n", __FUNCTION__);
            while(!UART_CheckTxAllSentOut(uart_port1));
		 	_rst_trigger_ap_software_reset(0); //only md1sys got reboot.  AP is not effected, therefore APSYS IP UT is necessary.
		 	while(1);
	 	}
	 	else
	 		dbg_print("INFO (RGU) ap software reset has been triggered @ %s \r\n", __FUNCTION__);

	 		//dbg_print(".%s----%d\r\n", __FUNCTION__, i);
	 	//1 (4)
	 	_rst_clear_ap_software_reset_status();

	 	if (KAL_FALSE == is_core_rebooted)
		{
			//1 (5)
			ut_ret_status = _rst_run_ip_ut(testcase_ptr, test_items);
		}
	}
 	else
	{
	  	dbg_print("INFO(RGU) APSYS or MD1SYS is 'not' included in system converage. AP software reset test is ignored. \r\n");
	  	return UT_REPORT_PASS;
	}
 	if (UT_REPORT_FAIL == ut_ret_status)
	{
	 	dbg_print("********************************************\r\n");
	 	dbg_print("^^  AP software reset stage test  ::FAIL::&&\r\n");
	 	dbg_print("********************************************\r\n");
	}
 	else
	{
	 	dbg_print("********************************************\r\n");
	 	dbg_print("^^  AP software reset stage test  ::PASS::&&\r\n");
	 	dbg_print("********************************************\r\n");
	}
 	return ut_ret_status;
}

UT_REPORT_STATUS _rst_md1sys_dominate_reset_scope(kal_bool control_load, rst_target_e targetIP,subsystem_e system_coverage, ut_testcase_struct *testcase_ptr, kal_uint32 test_items, kal_uint32 delay_cycles)
{
 	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;
 	kal_uint32 reset_scope_idx;

 	dbg_print("Dominate RGU scope (%s) @ MIPS\r\n", __FUNCTION__);
 	if (AP_SOFTWARE_RESET_MD == _rst_get_rgu_scope_to_clear_state())	
 	{
 	 	_rst_clear_ap_software_reset_status();
	 	_rst_set_rgu_scope_to_clear_state(0);
 	}
 	reset_scope_idx = _rst_get_this_reset_scope();
 	while (reset_scope_idx < RGU_RESET_SCOPE_END)
	{
	 	dbg_print("INFO (RGU) Waiting for all cores in the system coverage ready...\n\r"); 
		//TODO: wait system all ready
	 	dbg_print("INFO (RGU) All cores in the system coverage are ready. \r\n"); 
	 	switch (reset_scope_idx)
	 	{
		 	case SOFTWARE_RESET:
			   	ut_ret_status = _rst_examine_ip_through_software_reset(targetIP, testcase_ptr, test_items);
				break;
		 	case WHOLE_SYSTEM_RESET:
			    ut_ret_status = _rst_examine_ip_through_whole_system_reset(system_coverage, testcase_ptr, test_items, delay_cycles);
			   	ut_ret_status = UT_REPORT_PASS;
				break;
		 	case AP_SOFTWARE_RESET_MD:
				ut_ret_status = _rst_examine_ip_through_ap_software_reset(system_coverage, testcase_ptr, test_items, delay_cycles, KAL_TRUE);
				break;
		 	default:
		 		dbg_print("ASSERT (Dennis): <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__);
				ut_ret_status = UT_REPORT_FAIL;
	 	}
	 	if (UT_REPORT_PASS == ut_ret_status)
	 	{
 		 	_rst_set_next_reset_scope(reset_scope_idx + 1);
		 	reset_scope_idx = _rst_get_this_reset_scope();

 			//To prevent some uncareful UT design that forgets to restore initial valu, this framework software reset the target IP before new scope test.  .
 			dbg_print("INFO (RGU) Restore IP's original value @ %s \r\n", __FUNCTION__);
 			if (RST_NULL != targetIP)
 			    g_ip_sup_sw_rst = drv_rstctl_sw_reset(targetIP);
 			else  //Since the IP could not be reset, we need to clear the state for the next reset scope.
 			{
				//Add AP software reset md here to create a clear state for the next reset scope.
			 	//Add the system state clear flag for distinguishment from reset for UT test.
                dbg_print("For RST_NULL, we use AP reset MD to restore IP's original value. \n\r");
                while(!UART_CheckTxAllSentOut(uart_port1));
			 	_rst_set_rgu_scope_to_clear_state(AP_SOFTWARE_RESET_MD);
			 	_rst_trigger_ap_software_reset(0);
			 	while(1); 
		 	}
	 	}
	 	else
	 	{
 	 	 	dbg_print("ASSERT (RGU): IP UT check fail.  <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__);
	 	 	return ut_ret_status;
	 	}
 	}

 	return ut_ret_status;
}

kal_uint32 g_RGU_IT_API_CALL_ACCUMULATOR = 0;

UT_REPORT_STATUS drv_UT_within_RGU_framework(rst_target_e targetIP, subsystem_e target_system, subsystem_e system_coverage,
													   ut_testcase_struct *testcase_ptr, kal_uint32 test_items, kal_uint32 delay_cycles)	
{
	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;

	_rst_register_lisr();
	
	if(drv_rstctl_disable_all_WDTs() == KAL_FALSE)
	{
		dbg_print("ASSERT (RGU): Disable WDT FAIL <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__); 	 //This case should not happen.
	  	return UT_REPORT_FAIL;
	}
	g_RGU_IT_API_CALL_ACCUMULATOR ++;  //Global variable used to count the number of iterations that APIs are called. 
 	if (_rst_get_rgu_ut_result() != UT_REPORT_PASS)  	//The UT result of the previous iteration. If UT fails in earlier iteration, this iteration is ignored.
 	{												//Note: For the 1st iteration, the default value is 0. And UT_REPORT_PASS is 0 as well.
		dbg_print("Checking (api_call_acc,api_passed_acc) = (%d, %d): %d\r\n", g_RGU_IT_API_CALL_ACCUMULATOR,_rst_get_rgu_api_call_accumulator(), _rst_get_rgu_ut_result());
 	 	if (g_RGU_IT_API_CALL_ACCUMULATOR == _rst_get_rgu_api_call_accumulator())
	 		dbg_print("INFO (RGU) RGU_IT UT fail! @ drv_UT_within_RGU_framework (%d)\r\n", g_RGU_IT_API_CALL_ACCUMULATOR);
 		return UT_REPORT_FAIL;  //If some UT fails one of early RGU_IT_API call,  the reset RGU_IT_APIs are ignored.
 	}
 	dbg_print("INFO ACCUMU1:%d ; ACCUMU2:%d \r\n", g_RGU_IT_API_CALL_ACCUMULATOR, _rst_get_rgu_api_call_accumulator());
 	if (g_RGU_IT_API_CALL_ACCUMULATOR <= _rst_get_rgu_api_call_accumulator())
 		return UT_REPORT_PASS;
	dbg_print("\r\n\n\n\nINFO (RGU) API call accumulator: %d; Delay cycles: %d\n\n\r", g_RGU_IT_API_CALL_ACCUMULATOR, delay_cycles);

	if (KAL_FALSE == _rst_is_system_within_converage(target_system, system_coverage))
	{
	 	dbg_print("ASSERT (RGU): Target system is not included in the system coverage  <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__);
	 	return UT_REPORT_FAIL;
	}

	if (RGU_RESET_SCOPE_END == _rst_get_rgu_scope_to_clear_state())  //If  the last whole  system reset is triggered for a new iternation, the status must be cleared. 
	{
     	_rst_clear_ap_software_reset_status();    //Clear the whole system reset status.
     	_rst_set_rgu_scope_to_clear_state(0);	//Clear the ditinguishable flag that was marked as RGU_RESET_SCOPE_END. 
	}

	dbg_print("%s @ MIPS-iterAptiv\n\r", __FUNCTION__);

 	ut_ret_status = _rst_md1sys_dominate_reset_scope(KAL_TRUE, targetIP, system_coverage, testcase_ptr, test_items, delay_cycles); //Dominate the reset scope and tests the UTs.
	_rst_prepare_for_next_rgu_it_call(system_coverage, ut_ret_status); //reset the system to for the next API (drv_UT_within_RGU_framework) call.
	
	return ut_ret_status;
}


#else       /* !defined(RSTCTL_FPGA_PLAT) */

void _rst_set_system_ready_sts(kal_uint32 system, kal_uint32 system_coverage)
{
 	kal_uint32 current_val; 
 	if ((system & system_coverage)== 0)
 	{
 	 	dbg_print("%s: system out of system coverage\n\r", __FUNCTION__);
	 	ASSERT(0);
 	}
 	//Add switch case to prevent race condition
	switch (system)
 	{
	 	case APSYS: //is the first one to enable ready status. 
			//no need to wait.
			dbg_print("Setting MDRGU WDT DUMMY ....\r\n");
			break; 
	 	case MD1SYS: //is the second one to enable ready status. 
			dbg_print("Wait for (APSYS) APRGU WDT DUMMY write ready...\r\n"); 
			while((DRV_Reg32(REG_APRSTCTL_WDT_DUMMY) & (APSYS))!= (APSYS & system_coverage));
			break; 
 	}
 	current_val = DRV_Reg32(REG_APRSTCTL_WDT_DUMMY) | system; 
 	DRV_WriteReg32(REG_APRSTCTL_WDT_DUMMY, current_val); 
 	dbg_print("After writing ready status, REG_APRSTCTL_WDT_DUMMY = 0x%x\r\n", DRV_Reg32(REG_APRSTCTL_WDT_DUMMY));
}

void _rst_clr_system_ready_sts(kal_uint32 system)
{
 	kal_uint32 current_val; 
 	if ((system & (APSYS | MD1SYS))== 0)
 	{
 	 	dbg_print("%s: system out of coverage\n\r", __FUNCTION__);
	 	ASSERT(0);
 	}
 	current_val = DRV_Reg32(REG_APRSTCTL_WDT_DUMMY) & ~(system); 
 	DRV_WriteReg32(REG_APRSTCTL_WDT_DUMMY, current_val); 
}

kal_uint32 _rst_get_system_ready_sts(void)
{
 	return (DRV_Reg32(REG_APRSTCTL_WDT_DUMMY));
}

kal_uint32 _rst_get_this_reset_scope(void)
{
 	kal_uint32 this_reset_scope;
 	this_reset_scope = (DRV_Reg32(REG_APRSTCTL_DUMMY) & RGU_RESET_SCOPE_MASK) >> RGU_RESET_SCOPE_OFFSET;
 	return this_reset_scope;
}

void _rst_set_next_reset_scope(kal_uint32 next_reset_scope)
{
 	kal_uint32 dummy_content;
 	dummy_content = (DRV_Reg32(REG_APRSTCTL_DUMMY) & (~RGU_RESET_SCOPE_MASK)) | (next_reset_scope << RGU_RESET_SCOPE_OFFSET);
 	DRV_WriteReg32(REG_APRSTCTL_DUMMY, dummy_content);
}


void _rst_set_rgu_frmwrk_parameter(kal_uint32 content)
{
 	kal_uint32 current_val;
 	current_val = DRV_Reg32(REG_APRSTCTL_DUMMY) & (~RGU_FRMWRK_PARAMETER_MASK);
 	if ((content & (~RGU_FRMWRK_PARAMETER_MASK)) > 0) //exceed the parameter range.
 		ASSERT(0);
 	else
 	{
	 	current_val |= ((content << RGU_FRMWRK_PARAMETER_OFFSET) & RGU_FRMWRK_PARAMETER_MASK);
	 	DRV_WriteReg32(REG_APRSTCTL_DUMMY, current_val);
 	}
}

kal_uint32 _rst_get_rgu_frmwrk_parameter(void)
{
 	return (DRV_Reg32(REG_APRSTCTL_DUMMY) & RGU_FRMWRK_PARAMETER_MASK) >> RGU_FRMWRK_PARAMETER_OFFSET;
}

void _rst_set_rgu_ut_result(kal_uint32 ut_result)  //ut_result  = UT_REPORT_PASS (0) or  UT_REPORT_FAIL(-1).
{
 	kal_uint32 current_val;
 	current_val = DRV_Reg32(REG_APRSTCTL_DUMMY) & (~RGU_RESET_UT_RESULT_MASK);
 	current_val |= (ut_result & RGU_RESET_UT_RESULT_MASK >> RGU_RESET_UT_RESULT_OFFSET)<<RGU_RESET_UT_RESULT_OFFSET;
 	DRV_WriteReg32(REG_APRSTCTL_DUMMY, current_val);
}

kal_uint32 _rst_get_rgu_ut_result(void)
{
 	kal_uint32 current_val; 
 	current_val = (DRV_Reg32(REG_APRSTCTL_DUMMY) & RGU_RESET_UT_RESULT_MASK) >> RGU_RESET_UT_RESULT_OFFSET; 
 	if (UT_REPORT_PASS == current_val)
 		return UT_REPORT_PASS; 
 	else
 		return UT_REPORT_FAIL; 
}

void _rst_set_rgu_scope_to_clear_state(kal_uint32 clear_scope)
{
 	kal_uint32 current_val;
 	current_val = DRV_Reg32(REG_APRSTCTL_DUMMY) & (~RGU_SCOPE_TO_CLEAR_STATE_MASK) ;
 	current_val |= (clear_scope & (RGU_SCOPE_TO_CLEAR_STATE_MASK >> RGU_SCOPE_TO_CLEAR_STATE_OFFSET)) << RGU_SCOPE_TO_CLEAR_STATE_OFFSET;
 	DRV_WriteReg32(REG_APRSTCTL_DUMMY, current_val);
}

kal_uint32 _rst_get_rgu_scope_to_clear_state(void)
{
 	return ((DRV_Reg32(REG_APRSTCTL_DUMMY) &  RGU_SCOPE_TO_CLEAR_STATE_MASK) >> RGU_SCOPE_TO_CLEAR_STATE_OFFSET);
}



void _rst_inc_rgu_api_call_accumulator(void)
{
 	kal_uint32 current_val;
	current_val = (DRV_Reg32(REG_APRSTCTL_DUMMY) & (~RGU_API_CALL_ACCUMULATOR_MASK));
 	current_val |= ((DRV_Reg32(REG_APRSTCTL_DUMMY) & RGU_API_CALL_ACCUMULATOR_MASK) + 1);
 	DRV_WriteReg32(REG_APRSTCTL_DUMMY, current_val);
}

kal_uint32 _rst_get_rgu_api_call_accumulator(void)
{
	return (DRV_Reg32(REG_APRSTCTL_DUMMY) & RGU_API_CALL_ACCUMULATOR_MASK);
}

kal_bool _rst_is_system_within_converage(subsystem_e target_system, subsystem_e system_converage)
{
 if ((target_system & system_converage) == target_system)
 	return KAL_TRUE;
 else
 	return KAL_FALSE;
}

subsystem_e _rst_return_dominate_system(subsystem_e target_system)
{
 if (APSYS == (target_system & APSYS))
 	return APSYS;
 if (MD1SYS == (target_system & MD1SYS))
 	return MD1SYS;
 ASSERT(0);
 return 0;
}


kal_bool _rst_setup_whole_system_reset_trigger_path(void)
{
 	kal_bool ret_status = KAL_TRUE;
 	kal_uint32 current_val;
 	//actually, for whole system reset, it does not need to setup the trigger path.
 	//Set APRGU in reset mode.  --> APRGU IRQ disable.
 	current_val = DRV_Reg32(REG_APRSTCTL_WDTCR) & ~(RSTCTL_APWDTCR_WDT_IRQEN);
 	current_val &= ~(RSTCTL_APWDTCR_WDT_SPD_UP);
 	DRV_WriteReg32(REG_APRSTCTL_WDTCR,RSTCTL_APWDTCR_KEY | current_val);
 	return ret_status;
}

kal_bool _rst_trigger_whole_system_reset(kal_uint32 delay_cycles)
{
 	kal_bool ret_status = KAL_TRUE;
 	_rst_setup_whole_system_reset_trigger_path();  	  //Set APRGU in reset mode.

 	//for this case, we need to trigger reset in APRGU.
 	if (0 < delay_cycles)
 	{
	  	kal_uint32 current_val;
	  	DRV_WriteReg32(REG_APRSTCTL_WDTIR, RSTCTL_APWDTIR_KEY | (delay_cycles & RSTCTL_APWDTIR_INTERVAL_MASK));
	    current_val = DRV_Reg32(REG_APRSTCTL_WDTCR);
	  	current_val |= RSTCTL_APWDTCR_WDT_EN;
	  	DRV_WriteReg32(REG_APRSTCTL_WDTCR,RSTCTL_APWDTCR_KEY | current_val);
	  	DRV_WriteReg32(REG_APRSTCTL_WDTRR, RSTCTL_APWDTRR_KEY);
 	}
 	else //trigger software WDT
	 	DRV_WriteReg32(REG_APRSTCTL_SRCMR_SWDT,RSTCTL_SRCMR_KEY_SWDT);
 	return ret_status;
}

kal_bool _rst_is_whole_system_reset_triggered()
{
 	kal_uint32 current_val;
 	//Check WDTSR.
 	current_val = DRV_Reg32(REG_APRSTCTL_WDTSR);
 	switch(current_val & RSTCTL_APWDTSR_STATUS_MASK)
 	{
 	 	case RSTCTL_APWDTSR_HWDT_STS:
			dbg_print("Hardware WDT (%d times)\r\n", (current_val>>RSTCTL_APWDTSR_HW_WDT_CNT_OFFSET) & RSTCTL_APWDTSR_HW_WDT_CNT_MASK);
		 	return KAL_TRUE;
	 	case RSTCTL_APWDTSR_SWDT_STS:
		 	dbg_print("Software WDT (%d times)\r\n", (current_val>>RSTCTL_APWDTSR_SW_WDT_CNT_OFFSET) & RSTCTL_APWDTSR_SW_WDT_CNT_MASK);
		 	return KAL_TRUE;
	 	case 0:
	 	 	dbg_print("INFO (RGU) Whole system reset is not triggered\r\n");
		 	return KAL_FALSE;
	 	default:
	 		dbg_print("Assert(RGU): Unexpected status case 0X%08X <%d line in %s>\r\n",(current_val & RSTCTL_APWDTSR_STATUS_MASK), __LINE__, __FUNCTION__ );
			return KAL_FALSE;
 	}
}

kal_bool _rst_clear_whole_system_reset_status(void)
{
 	kal_uint32 current_val;
 	//Note: remember to disable WDT make sure system under control.
 	//Disable the trigger path

 	current_val = DRV_Reg32(REG_APRSTCTL_WDTCR);
 	current_val &= ~RSTCTL_APWDTCR_WDT_EN;
 	DRV_WriteReg32(REG_APRSTCTL_WDTCR, RSTCTL_APWDTCR_KEY | current_val);
 	//Clear the status caused by APRGU reset.
 	//Status register: WDTSR (swdt counter, hwdt counter, status)
 	DRV_WriteReg32(REG_APRSTCTL_WDTSR, RSTCTL_APWDTSR_KEY
 									| RSTCTL_APWDTSR_CNT_CLR_MASK << RSTCTL_APWDTSR_CNT_CLR_OFFSET
 									| RSTCTL_APWDTSR_STS_CLR_MASK << RSTCTL_APWDTSR_STS_CLR_OFFSET);
 	return KAL_FALSE;
}

kal_bool _rst_setup_ap_software_reset_trigger_path(void)
{
 	kal_bool ret_status = KAL_TRUE;
 	kal_uint32 current_val;
 	//Set the path from MDRGU to APRGU. (MDRGU IRQ enable)
 	current_val = DRV_Reg32(REG_MDRSTCTL_WDTCR);
 	current_val &= ~(RSTCTL_WDTCR_WDT_SPD_UP);
 	current_val |= (RSTCTL_WDTCR_AUX_WDT_IRQEN);
 	DRV_WriteReg32(REG_MDRSTCTL_WDTCR,RSTCTL_WDTCR_KEY | current_val); //1. disable speedup.  2. Enable IRQ_EN to AP
 	//Set up the path to trigger CA7 ISR.
 	DRV_WriteReg32(REG_APRSTCTL_MDWDTCFG_MD1,RSTCTL_APMDWDTCFG_MD1_KEY | RSTCTL_APMDWDTCFG_MD1_WDT_LV_EN_MD1); 
	
	DRV_WriteReg32(REG_MDRSTCTL_WDTER_MDSYS, 0xBFFFFFFF);
	
 	return ret_status;
}

kal_bool _rst_trigger_ap_software_reset(kal_uint32 delay_cycles)
{
 	kal_bool ret_status = KAL_TRUE;
 	kal_uint32 current_val;
 	_rst_setup_ap_software_reset_trigger_path();   //Set up the path to allow trigger CA7 ISR.  (MDRGU: enable IRQ, APRGU: enable level )
 	if (0 < delay_cycles)
 	{
 	    #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif

	 	DRV_WriteReg32(REG_MDRSTCTL_WDTIR_AUX, RSTCTL_WDTIR_AUX_KEY | (delay_cycles & RSTCTL_WDTIR_INTERVAL_MASK));
	 	current_val = DRV_Reg32(REG_MDRSTCTL_WDTCR);
	 	current_val |= RSTCTL_WDTCR_AUX_WDT_EN;
	 	DRV_WriteReg32(REG_MDRSTCTL_WDTCR,RSTCTL_WDTCR_KEY | current_val);
	 	DRV_WriteReg32(REG_MDRSTCTL_WDTRR, RSTCTL_WDTRR_KEY|RSTCTL_WDTRR_WDT_RESTART); 
 	}
 	else
 	{
 	    /* Also trigger WDT1, the time interval should be 1 */
	 	DRV_WriteReg32(REG_MDRSTCTL_WDTIR, RSTCTL_WDTIR_KEY | (1 & RSTCTL_WDTIR_INTERVAL_MASK));

	 	current_val = DRV_Reg32(REG_MDRSTCTL_WDTCR);
	 	current_val |= RSTCTL_WDTCR_WDT_EN;
	 	DRV_WriteReg32(REG_MDRSTCTL_WDTCR,RSTCTL_WDTCR_KEY | current_val);
	 	
	 	DRV_WriteReg32(REG_MDRSTCTL_WDTRR, RSTCTL_WDTRR_KEY|RSTCTL_WDTRR_WDT_RESTART); //we only needs to wait for MDRGU WDT to down count the delay cycles.
 	}
 	return ret_status;
}


kal_bool _rst_is_ap_software_reset_triggered()
{
 	//CHECK WDTSR (MD1_WDT_STS)
 	kal_uint32 current_val;
 	current_val = (DRV_Reg32(REG_APRSTCTL_WDTSR_MD1)>>RSTCTL_APWDTSR_MD1_STATUS_OFFSET)& RSTCTL_APWDTSR_MD1_STATUS_MASK;
	if ((current_val > 0)&& (AP_SOFTWARE_RESET_MD == _rst_get_rgu_frmwrk_parameter()))
 	{
	 	dbg_print("AP software reset MD triggered by MDRGU \r\n");
	 	return KAL_TRUE;
 	}
 	else
		return KAL_FALSE;
}

kal_bool _rst_clear_ap_software_reset_status(void)
{
 	kal_uint32 current_val;
 	//Note: remember to disable WDT make sure system under control.
 	current_val = DRV_Reg32(REG_MDRSTCTL_WDTCR);
 	current_val &= ~RSTCTL_WDTCR_AUX_WDT_EN;
 	DRV_WriteReg32(REG_MDRSTCTL_WDTCR, RSTCTL_WDTCR_KEY | current_val);
	//Disable  the trigger path
 	current_val = DRV_Reg32(REG_APRSTCTL_MDWDTCFG_MD1) & ~RSTCTL_APMDWDTCFG_MD1_WDT_LV_EN_MD1;
 	DRV_WriteReg32(REG_APRSTCTL_MDWDTCFG_MD1, RSTCTL_APMDWDTCFG_MD1_KEY | current_val);
	//Clear the status caused by MDRGU IRQ
 	DRV_WriteReg32(REG_APRSTCTL_WDTSR_MD1, RSTCTL_APWDTSR_MD1_KEY | RSTCTL_APWDTSR_MD1_STS_CLR_MASK << RSTCTL_APWDTSR_MD1_STS_CLR_OFFSET);
 	//Clear the parameter as well.
 	_rst_set_rgu_frmwrk_parameter(0);
 	return KAL_TRUE;
}

UT_REPORT_STATUS _rst_check_ip_reset(ut_testcase_struct *testcase_ptr, kal_uint32 test_items) //Only check if reset correctly.
{
 	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;
 	if (0 < test_items)  //test_items must equals 1 at least. (test case is mandatorily located at 1st entry. )
 	{
 	 	dbg_print("\nCheck IP initial value: %s\n\r", (testcase_ptr)[0].description);
 	 	ut_ret_status = (testcase_ptr)[0]._main_fn(testcase_ptr[0].flags, testcase_ptr[0].para); //  check  initial after reset
 	}
 	else
 	{
 	 	dbg_print("ASSERT (RGU): <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__);	 	//This case should not happen.
 	 	ut_ret_status = UT_REPORT_FAIL;
 	}
	if (UT_REPORT_PASS == ut_ret_status)
 		dbg_print("\n\n IP initial value check: PASS \n\r");
 	else
 		dbg_print("\n\n IP initial value check: FAIL \n\r");
 	return ut_ret_status;
}

UT_REPORT_STATUS _rst_run_ip_ut(ut_testcase_struct *testcase_ptr, kal_uint32 test_items)
{
 	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;
 	kal_uint32 func_idx;
 	if (1 < test_items)
 	{
     	for(func_idx = 1; func_idx < test_items; func_idx ++)
     	{
  	  	 	dbg_print("\nIP unit test: %s\n\r", (testcase_ptr)[func_idx].description);
		 	ut_ret_status	= (testcase_ptr)[func_idx]._main_fn(testcase_ptr[func_idx].flags, testcase_ptr[func_idx].para); //  Other UTs exclude  initial value check.
         	if (UT_REPORT_FAIL == ut_ret_status)
		 		return ut_ret_status;
     	}
 	}
 	else  //1.  no test case. 2. check IP's initial value only (no other UTs)
 	{
 	 	dbg_print("ASSERT (RGU): <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__);	 	//This case should not happen.
 	 	ut_ret_status = UT_REPORT_FAIL;
 	}
 	if (UT_REPORT_PASS == ut_ret_status)
 		dbg_print("\n\n IP unit test: PASS \n\r");
 	else
 		dbg_print("\n\n IP unit test: FAIL \n\r");
 	return ut_ret_status;
}

void _rst_prepare_for_next_rgu_it_call(subsystem_e system_coverage, UT_REPORT_STATUS ut_ret_status)
{
 	_rst_inc_rgu_api_call_accumulator();   //Increase RGU_API_CALL accumulator to prevent executing allready tested RGU_API.
 	_rst_set_rgu_ut_result(ut_ret_status); //Store the ut_ret_status. If the status is UT_REPORT_FAIL, all the reset RGU_APIs will be ignored.
 	UT_DELAY_LOOP(_RST_DURATION_LOOP_DEFAULT_VALUE);  //Wait for effective register write.
 	if (APSYS == (system_coverage & APSYS))
 	{
	 	dbg_print("Trigger AP reset MD for next framework interation....\n\r");
	 	dbg_print("Reseting MDSYS through AP reset MD....\n\r\n\r\n\r");
	 	_rst_clr_system_ready_sts(MD1SYS); 
	 	_rst_set_rgu_scope_to_clear_state(AP_SOFTWARE_RESET_MD);
	 	_rst_trigger_ap_software_reset(0);	   //At the end of this API call, trigger whole systemr reset to make system ready for next API call.
	 	while(1);

 	}
 	else  //Without AP, system coverage only includes MD1SYS, L1SYS, and/or ARM7SYS. 
 	{
	 	dbg_print("Without AP to boot up Pcore, you need to reload code through CMM again. \n\r");
	 	while(1);
 	}
}

UT_REPORT_STATUS _rst_examine_ip_through_software_reset(rst_target_e targetIP, ut_testcase_struct *testcase_ptr, kal_uint32 test_items)
{
 	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;
 	if (RST_NULL == targetIP) return UT_REPORT_PASS;	//Some IPs (like MEMSYS) do not tolerate software reset.
 	dbg_print("\n\n\nINFO (RGU) Software reset stage: \r\n");
 	ut_ret_status = _rst_check_ip_reset(testcase_ptr, test_items);  //Only check if power on reset correctly.
 	if (UT_REPORT_FAIL == ut_ret_status)
 	 	return ut_ret_status;
 	ut_ret_status = _rst_run_ip_ut(testcase_ptr, test_items);
 	if (UT_REPORT_FAIL == ut_ret_status)
 		return ut_ret_status;
	
	dbg_print("PASS (RGU) UT check after bootup @ %s \r\n", __FUNCTION__);
 	//The softwre reset function
 	dbg_print("INFO (RGU) Software reset IP @ %s \r\n", __FUNCTION__);
 	if (KAL_FALSE == drv_rstctl_sw_reset(targetIP)) {
 	    dbg_print("Target IP do NOT support SW reset function\r\n");
 	    goto end;
 	}
 	ut_ret_status = _rst_check_ip_reset(testcase_ptr, test_items);  //Only check if reset correctly.
 	if (UT_REPORT_FAIL == ut_ret_status)
  		return ut_ret_status;
 	ut_ret_status = _rst_run_ip_ut(testcase_ptr, test_items);

end:
 	if (UT_REPORT_FAIL == ut_ret_status)
 	{
 	 	dbg_print("FAIL (RGU) UT check[software reset] @ %s \r\n\n\n", __FUNCTION__);
  	 	dbg_print("****************************************\r\n");
	 	dbg_print("^^  Software reset stage test ::FAIL::&&\r\n");
	 	dbg_print("****************************************\r\n");
 	}
 	else
 	{
 	 	dbg_print("PASS (RGU) UT check[software reset] @ %s \r\n", __FUNCTION__);
  	 	dbg_print("****************************************\r\n");
	 	dbg_print("^^  Software reset stage test ::PASS::&&\r\n");
	 	dbg_print("****************************************\r\n");
 	}
 	return ut_ret_status;
}

UT_REPORT_STATUS _rst_examine_ip_through_whole_system_reset(subsystem_e system_converage,ut_testcase_struct *testcase_ptr, kal_uint32 test_items, kal_uint32 delay_cycles)
{
 	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;
 	dbg_print("\n\n\nINFO (RGU) Whole system reset stage: \r\n");
 	if (KAL_TRUE ==_rst_is_system_within_converage(APSYS, system_converage))
	{
		//(1) --> UT --> (2) --> (3) --> reboot --> UT -->(4)
	 	//1 (1)
		if ((0  < delay_cycles)&&(!_rst_is_whole_system_reset_triggered()))
	 	{
		 	_rst_clr_system_ready_sts(APSYS | MD1SYS); 
		 	_rst_trigger_whole_system_reset(delay_cycles);
	 	}
	 	ut_ret_status = _rst_check_ip_reset(testcase_ptr, test_items);  //Only check if reset correctly.
	 	if (UT_REPORT_FAIL == ut_ret_status)
		 	return ut_ret_status;
	 	ut_ret_status = _rst_run_ip_ut(testcase_ptr, test_items);
	 	if (UT_REPORT_FAIL == ut_ret_status)
		 	return ut_ret_status;
	 	dbg_print("PASS (RGU) UT check after bootup @ %s \r\n", __FUNCTION__);
	 
	 	if ((0  < delay_cycles)&&(!_rst_is_whole_system_reset_triggered())) //reset should be triggered before UT finished
	 	{
	 	 	dbg_print("Delay cycle exceeds the UT runtime @ %s \r\n", __FUNCTION__);
		 	_rst_clear_whole_system_reset_status();
		 	ASSERT(0);
	 	}
		//1 (2)
	 	if ((0 == delay_cycles)&&(!_rst_is_whole_system_reset_triggered()))
	 	{
 	 	 	dbg_print("INFO (RGU) whole system reseting ... @ %s \r\n", __FUNCTION__);
		 	_rst_clr_system_ready_sts(APSYS | MD1SYS); 
	     	_rst_trigger_whole_system_reset(0); //whole system reset.
	     	while(1);
   	 	}
	 	else
	   		dbg_print("INFO (RGU) whole system reset has been triggered @ %s \r\n", __FUNCTION__);
	 	//1 (3)
	 	//while(!_rst_is_whole_system_reset_triggered());
		//1 (4)
		_rst_clear_whole_system_reset_status();
	}
 	else //Igrnore whole system reset.
	{
		dbg_print("INFO(RGU) APSYS is 'not' included in system converage. Whole system reset test is ignored. \r\n");
	  	return UT_REPORT_PASS;
	}
	if (UT_REPORT_FAIL == ut_ret_status)
	{
	 	dbg_print("********************************************\r\n");
	 	dbg_print("^^  Whole system reset stage test ::FAIL::&&\r\n");
	 	dbg_print("********************************************\r\n");
	}
 	else
	{
	 	dbg_print("********************************************\r\n");
	 	dbg_print("^^	 Whole system reset stage test ::PASS::&&\r\n");
	 	dbg_print("********************************************\r\n");
	}
 	return ut_ret_status;

}

kal_bool g_ip_sup_sw_rst = KAL_FALSE;

UT_REPORT_STATUS _rst_examine_ip_through_ap_software_reset(subsystem_e system_converage, ut_testcase_struct *testcase_ptr, kal_uint32 test_items, kal_uint32 delay_cycles,  kal_bool is_core_rebooted)
{
 	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;
 	dbg_print("\n\n\nINFO (RGU) AP software reset stage: \r\n");
 	//AP software reset MD requires cooperation between APSYS and MD1SYS.
 	if (KAL_TRUE ==_rst_is_system_within_converage(MD1SYS | APSYS, system_converage))
	{
	 	//(1) --> UT --> (2) --> (3) --> reboot --> (4)	[is_core_rebooted  == KAL_TRUE]
	 	//(1) --> UT --> (2) --> (3) --> (4) --> (5) UT	[is_core_rebooted  == KAL_FALSE] --> Check this IP is effected by resetting other subsystem.

	 	//1 (1)
	 	if ((0  < delay_cycles)&&(!_rst_is_ap_software_reset_triggered()))
	 	{
	 		dbg_print("INFO (RGU) ap software reseting with delay cycles:%d... @ %s \r\n", delay_cycles, __FUNCTION__);
		 	_rst_clr_system_ready_sts(MD1SYS); 
		 	_rst_trigger_ap_software_reset(delay_cycles);
	 	}
	 	
 	    if (_rst_is_ap_software_reset_triggered() || g_ip_sup_sw_rst)
    	 	ut_ret_status = _rst_check_ip_reset(testcase_ptr, test_items);  //Only check if reset correctly.
	 	
	 	if (UT_REPORT_FAIL == ut_ret_status)
			return ut_ret_status;
	 	ut_ret_status = _rst_run_ip_ut(testcase_ptr, test_items);
	 	if (UT_REPORT_FAIL == ut_ret_status)
			return ut_ret_status;
	 	dbg_print("PASS (RGU) UT check after bootup @ %s \r\n", __FUNCTION__);
	 	if ((0  < delay_cycles)&&(!_rst_is_ap_software_reset_triggered())) //reset should be triggered before UT finished
	 	{
	 	 	dbg_print("Delay cycle exceeds the UT runtime @ %s \r\n", __FUNCTION__);
		 	//_rst_clear_ap_software_reset_status();
		 	//ASSERT(0);
		 	while(1);
	 	}
	 	//1 (2)
	 	if ((0 == delay_cycles)&&(!_rst_is_ap_software_reset_triggered()))
	 	{
	 	 	dbg_print("INFO (RGU) ap software reseting ... @ %s \r\n", __FUNCTION__);
		 	_rst_clr_system_ready_sts(MD1SYS); 
		 	_rst_trigger_ap_software_reset(0); //only md1sys got reboot.  AP is not effected, therefore APSYS IP UT is necessary.
		 	while(1);
	 	}
	 	else
	 		dbg_print("INFO (RGU) ap software reset has been triggered @ %s \r\n", __FUNCTION__);

	 	//1 (4)
	 	_rst_clear_ap_software_reset_status();

	 	if (KAL_FALSE == is_core_rebooted)
		{
			//1 (5)
			ut_ret_status = _rst_run_ip_ut(testcase_ptr, test_items);
		}
	}
 	else
	{
	  	dbg_print("INFO(RGU) APSYS or MD1SYS is 'not' included in system converage. AP software reset test is ignored. \r\n");
	  	return UT_REPORT_PASS;
	}
 	if (UT_REPORT_FAIL == ut_ret_status)
	{
	 	dbg_print("********************************************\r\n");
	 	dbg_print("^^  AP software reset stage test  ::FAIL::&&\r\n");
	 	dbg_print("********************************************\r\n");
	}
 	else
	{
	 	dbg_print("********************************************\r\n");
	 	dbg_print("^^  AP software reset stage test  ::PASS::&&\r\n");
	 	dbg_print("********************************************\r\n");
	}
 	return ut_ret_status;
}

UT_REPORT_STATUS _rst_md1sys_dominate_reset_scope(kal_bool control_load, rst_target_e targetIP,subsystem_e system_coverage, ut_testcase_struct *testcase_ptr, kal_uint32 test_items, kal_uint32 delay_cycles)
{
 	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;
 	kal_uint32 reset_scope_idx;

 	_rst_set_system_ready_sts(MD1SYS, system_coverage); //Notify the reset cores that MD1SYS is ready. 
 	if (0== test_items)
 	{  	
 		dbg_print("Waiting for wall cores are ready....\r\n"); 
 		while(system_coverage != (_rst_get_system_ready_sts()& system_coverage));
 		dbg_print("INFO (RGU) All cores in the system coverage are ready. \r\n"); 
     	dbg_print("Dummy load to react RGU req (%s) @ MIPS\r\n", __FUNCTION__);
	 	while(1); //Just act as a dummy-load
 	}
 	else    //Control load or support load
 	{
   		if (KAL_TRUE != control_load)	//Support load
   		{
	 		dbg_print("Waiting for wall cores are ready....\r\n");    	 
	 		while(system_coverage != (_rst_get_system_ready_sts()& system_coverage));
	 		dbg_print("INFO (RGU) All cores in the system coverage are ready. \r\n"); 
	 		dbg_print("Support load to call the UT (%s) @ MIPS\n\r", __FUNCTION__);
	 		while(UT_REPORT_PASS == ut_ret_status)		// As long as the ut_ret_status is UT_REPORT_PASS, the support load could run the program infinitely.
	 		{
	 	 		ut_ret_status = _rst_check_ip_reset(testcase_ptr, test_items);  //Only check if power on reset correctly.
	 	 		if (UT_REPORT_PASS ==  ut_ret_status )
	 	 		{
	 	 			dbg_print("PASS (RGU) [Support load] Initial check pass @%s\r\n", __FUNCTION__);
					ut_ret_status = _rst_run_ip_ut(testcase_ptr, test_items);
					if (UT_REPORT_PASS ==  ut_ret_status )
						dbg_print("PASS (RGU) [Support load] UT check pass @%s\r\n", __FUNCTION__);
					else
			 			dbg_print("FAIL (RGU) [Support load] UT check fail @%s\r\n", __FUNCTION__);
	 	 		}
		 		else
		 			dbg_print("FAIL (RGU) [Support load] Initial check fail @%s\r\n", __FUNCTION__); 	
		 		while(system_coverage != (_rst_get_system_ready_sts()& system_coverage));
	 		}
		 	while(1); 	//If one of the UT's ut_ret_statuses is UT_REPORT_FAIL, the support load will break the above cycle to act as a dummy load.
   		}
   		else		//Control load
   		{
 	 		dbg_print("Dominate RGU scope (%s) @ MIPS\r\n", __FUNCTION__);
 			if (AP_SOFTWARE_RESET_MD == _rst_get_rgu_scope_to_clear_state())	
 			{
 	 			_rst_clear_ap_software_reset_status();
	 			_rst_set_rgu_scope_to_clear_state(0);
 			}
 			reset_scope_idx = _rst_get_this_reset_scope();
 			while (reset_scope_idx < RGU_RESET_SCOPE_END)
			{
	 			dbg_print("INFO (RGU) Waiting for all cores in the system coverage ready...\n\r"); 
				//TODO: wait system all ready
	 			dbg_print("INFO (RGU) All cores in the system coverage are ready. \r\n"); 
	 			switch (reset_scope_idx)
	 			{
		 			case SOFTWARE_RESET:
			    		ut_ret_status = _rst_examine_ip_through_software_reset(targetIP, testcase_ptr, test_items);
						break;
		 			case WHOLE_SYSTEM_RESET:
			    		//ut_ret_status = _rst_examine_ip_through_whole_system_reset(system_coverage, testcase_ptr, test_items, delay_cycles);
			    		ut_ret_status = UT_REPORT_PASS;
						break;
		 			case AP_SOFTWARE_RESET_MD:
						ut_ret_status = _rst_examine_ip_through_ap_software_reset(system_coverage, testcase_ptr, test_items, delay_cycles, KAL_TRUE);
						break;
		 			default:
		 				dbg_print("ASSERT (Dennis): <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__);
						ut_ret_status = UT_REPORT_FAIL;
	 			}
	 			if (UT_REPORT_PASS == ut_ret_status)
	 			{
 		 			_rst_set_next_reset_scope(reset_scope_idx + 1);
		 			reset_scope_idx = _rst_get_this_reset_scope();

		 			//To prevent some uncareful UT design that forgets to restore initial valu, this framework software reset the target IP before new scope test.  .
		 			dbg_print("INFO (RGU) Restore IP's original value @ %s \r\n", __FUNCTION__);
		 			if (RST_NULL != targetIP)
		 			    g_ip_sup_sw_rst = drv_rstctl_sw_reset(targetIP);
		 			else  //Since the IP could not be reset, we need to clear the state for the next reset scope.
		 			{
						//Add AP software reset md here to create a clear state for the next reset scope.
			 			//Add the system state clear flag for distinguishment from reset for UT test.
			 			_rst_set_rgu_scope_to_clear_state(AP_SOFTWARE_RESET_MD);
			 			_rst_clr_system_ready_sts(MD1SYS);
			 			_rst_trigger_ap_software_reset(0);
						dbg_print("For RST_NULL, we use AP reset MD to restore IP's original value. \n\r");
			 			while(1); 
		 			}
	 			}
	 			else
	 			{
 	 	 			dbg_print("ASSERT (RGU): IP UT check fail.  <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__);
	 	 			return ut_ret_status;
	 			}
 			}
 		} //end ocntrol load
 	}	//end item!=0
 	if (RGU_RESET_SCOPE_END == reset_scope_idx)   //Considering multiple call of this API, we need to reset the scope idx as well..
 		_rst_set_next_reset_scope(SOFTWARE_RESET); //Upon all the reset scopes are tested,  set the reset scope condition back to SOFTWARE_RESET.

 	return ut_ret_status;
}

kal_uint32 g_RGU_IT_API_CALL_ACCUMULATOR = 0;

UT_REPORT_STATUS drv_UT_within_RGU_framework(rst_target_e targetIP, subsystem_e target_system, subsystem_e system_coverage,
													   ut_testcase_struct *testcase_ptr, kal_uint32 test_items, kal_uint32 delay_cycles)	
{
	UT_REPORT_STATUS ut_ret_status = UT_REPORT_PASS;

	_rst_register_lisr();
	
	if(drv_rstctl_disable_all_WDTs() == KAL_FALSE)
	{
		dbg_print("ASSERT (RGU): Disable WDT FAIL <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__); 	 //This case should not happen.
	  	return UT_REPORT_FAIL;
	}
	g_RGU_IT_API_CALL_ACCUMULATOR ++;  //Global variable used to count the number of iterations that APIs are called. 
 	if (_rst_get_rgu_ut_result() != UT_REPORT_PASS)  	//The UT result of the previous iteration. If UT fails in earlier iteration, this iteration is ignored.
 	{												//Note: For the 1st iteration, the default value is 0. And UT_REPORT_PASS is 0 as well.
		dbg_print("Checking (api_call_acc,api_passed_acc) = (%d, %d): %d\r\n", g_RGU_IT_API_CALL_ACCUMULATOR,_rst_get_rgu_api_call_accumulator(), _rst_get_rgu_ut_result());
 	 	if (g_RGU_IT_API_CALL_ACCUMULATOR == _rst_get_rgu_api_call_accumulator())
	 		dbg_print("INFO (RGU) RGU_IT UT fail! @ drv_UT_within_RGU_framework (%d)\r\n", g_RGU_IT_API_CALL_ACCUMULATOR);
 		return UT_REPORT_FAIL;  //If some UT fails one of early RGU_IT_API call,  the reset RGU_IT_APIs are ignored.
 	}
 	dbg_print("INFO ACCUMU1:%d ; ACCUMU2:%d \r\n", g_RGU_IT_API_CALL_ACCUMULATOR, _rst_get_rgu_api_call_accumulator());
 	if (g_RGU_IT_API_CALL_ACCUMULATOR <= _rst_get_rgu_api_call_accumulator())
 		return UT_REPORT_PASS;
	dbg_print("\r\n\nINFO (RGU) API call accumulator: %d; Delay cycles: %d\n\n\r", g_RGU_IT_API_CALL_ACCUMULATOR, delay_cycles);

	if (KAL_FALSE == _rst_is_system_within_converage(target_system, system_coverage))
	{
	 	dbg_print("ASSERT (RGU): Target system is not included in the system coverage  <line: %d in function:  %s>\r\n", __LINE__, __FUNCTION__);
	 	return UT_REPORT_FAIL;
	}

	if (RGU_RESET_SCOPE_END == _rst_get_rgu_scope_to_clear_state())  //If  the last whole  system reset is triggered for a new iternation, the status must be cleared. 
	{
     	_rst_clear_ap_software_reset_status();    //Clear the whole system reset status.
     	_rst_set_rgu_scope_to_clear_state(0);	//Clear the ditinguishable flag that was marked as RGU_RESET_SCOPE_END. 
	}

	dbg_print("%s @ MIPS-iterAptiv\n\r", __FUNCTION__);

 	if (MD1SYS == (target_system & MD1SYS))
  	{
     	dbg_print("target system = MD1SYS\n\r");
	 	if (MD1SYS == _rst_return_dominate_system(target_system))
	 	{
 	 	 	ut_ret_status = _rst_md1sys_dominate_reset_scope(KAL_TRUE, targetIP, system_coverage, testcase_ptr, test_items, delay_cycles); //Dominate the reset scope and tests the UTs.
		 	_rst_set_rgu_scope_to_clear_state(RGU_RESET_SCOPE_END); //For the next iteration, it is necessary to offer a clear dependent state. To distinguish framework or new iteration reset, we burry RGU_RESET_SCOPE_END. 
		 	_rst_prepare_for_next_rgu_it_call(system_coverage, ut_ret_status); //reset the system to for the next API (drv_UT_within_RGU_framework) call.
	 	}
 	 	else
		_rst_md1sys_dominate_reset_scope(KAL_FALSE, targetIP, system_coverage, testcase_ptr, test_items, delay_cycles); //Call the UTs but controlled by other subsystem.
  	}	
  	else
  	{
     	_rst_md1sys_dominate_reset_scope(KAL_FALSE, 0, system_coverage, NULL, 0, 0); //act as md1_dummy load.
  	}
	return ut_ret_status;
}

#endif      /*!defined(RSTCTL_FPGA_PLAT)*/
#endif      /*defined(ATEST_ENABLE)*/

#else       /*!defined(DRV_RSTCTL_OFF)*/

#endif      /*!defined(DRV_RSTCTL_OFF)*/
