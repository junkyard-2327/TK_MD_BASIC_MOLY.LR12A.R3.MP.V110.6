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
 *   drv_mdcirq.c
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   Low level interrupt controller driver
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 08 2019 chia-han.wu
 * [MOLY00420726] [Gen93][IOT] Low power optimization patch back to LR12A.R3.MP branch
 * [Gen93][IOT Low Power Task Force] Select function to use ISPRAM
 *
 * 07 11 2019 chia-han.wu
 * [MOLY00420726] [Gen93][IOT] Low power optimization patch back to LR12A.R3.MP branch
 * Cirq driver modification patch back for IOT Low Power Task Force
 *
 * 12 27 2018 chia-han.wu
 * [MOLY00375169] [Talbot SB call for check-in][MT6768][Gen93][System Service][MDCIRQ] Compile option for TALBOT(MT6768)
 * MT6768(Talbot) option check-in.
 *
 * 01 23 2018 yen-chun.liu
 * [MOLY00303755] [Merlot call for check-in][MT6761][Gen93][System Service][MDCIRQ] Compile option for MERLOT(MT6761)
 * Merlot(MT6761) compile option.
 *
 * 10 24 2017 yen-chun.liu
 * [MOLY00284996] [MT6765][Gen93][System Service][MDCIRQ] Compile option for CERVINO(MT6765)
 * .
 *
 * 09 18 2017 yen-chun.liu
 * [MOLY00270315] [System Service][KIR] make ex robust before ex steplog work
 * use include file to use exception API instead of extern.
 *
 * 08 24 2017 yen-chun.liu
 * [MOLY00273718] [UMOLA][MDCIRQ][Gen93] Backup IRQ status at exception flow start
 * .
 *
 * 08 24 2017 yen-chun.liu
 * [MOLY00273664] [UMOLA][MDCIRQ][MT6771] Slyvia call for check-in
 * MT6771 compile option.
 *
 * 08 10 2017 yen-chun.liu
 * [MOLY00270029] [System Service][KAL] Gen93 dummy LISR APIs
 * dummy LISR driver code.
 *
 * 06 12 2017 yen-chun.liu
 * [MOLY00244660] [MT6739][Gen93][System Service][MDCIRQ] Compile option for ZION(MT6739)
 * compile option for Zion.
 *
 * 06 09 2017 yen-chun.liu
 * [MOLY00254542] [MT6763][Gen93][System Service][MDCIRQ] Refine MDCIRQ final driver
 * fix build warning.
 *
 * 06 09 2017 yen-chun.liu
 * [MOLY00256414] [MT6763][Gen93][System Service][MDCIRQ] Workaround for MDCIRQ HW mask unexpected set issue
 * .
 *
 * 06 09 2017 yen-chun.liu
 * [MOLY00254542] [MT6763][Gen93][System Service][MDCIRQ] Refine MDCIRQ final driver
 * Fix DI/EI not use official API code(it may cause HRT domain VPE hang if user call).
 *
 * 06 05 2017 yen-chun.liu
 * [MOLY00254258] [SE2 Internal Test][MT6293][LR12A.MP1][ATE][20170601][1][core0,vpe1,tc1(vpe1)] Assert fail ccci_error_code.c 101 0x100 0x0 0x0 - (LISR)pccif0irq1
 * disable MDCIRQ wait mode to avoid have pending interrupt to enter sleep mode..
 *
 * 06 02 2017 yen-chun.liu
 * [MOLY00254542] [MT6763][Gen93][System Service][MDCIRQ] Refine MDCIRQ final driver
 * .
 *
 * 05 22 2017 yen-chun.liu
 * [MOLY00248491] [MT6763][Gen93][System Service][MDCIRQ] Debugging code for GPT IRQ not entered issue
 * wait mode enable.
 *
 * 04 07 2017 yen-chun.liu
 * [MOLY00240097] [MT6763][Gen93][System Service][MDCIRQ] Use APB access instead of GCR access to avoid GCR decode issue
 * .
 *
 * 03 29 2017 yen-chun.liu
 * [MOLY00238343] [MT6763][Gen93][System Service][MDCIRQ] Record IRQ mask status in exception flow
 * .
 *
 * 02 10 2017 yen-chun.liu
 * [MOLY00228942] [Bianco Bring-up][Gen93][MT6763][MDCIRQ][Driver] Porting dummy LISR trigger API and SPL compare API
 * .
 *
 * 01 18 2017 yen-chun.liu
 * [MOLY00225645] [Bianco Bring-up][UMOLYA] Modify timing check option and fix spurious interrupt code flow
 * .
 *
 * 12 28 2016 yen-chun.liu
 * [MOLY00214957] [Gen93][System Service][MDCIRQ] Modify Gen93 MDCIRQ driver
 * modify for idle task on VPE1/3.
 *
 * 12 07 2016 yen-chun.liu
 * [MOLY00214957] [Gen93][System Service][MDCIRQ] Modify Gen93 MDCIRQ driver
 * correct the record method of drv_vpe_irq_mask_exception.
 *
 * 12 06 2016 i-chun.liu
 * [MOLY00216862] [MT6293] Sleep Flow Integration
 * [6293]DCM & Sleep Flow Integration and Verification UT code check-in UMOLYA-CIRQ part.
 *
 * 12 05 2016 yen-chun.liu
 * [MOLY00214957] [Gen93][System Service][MDCIRQ] Modify Gen93 MDCIRQ driver
 * Qbits check/deadlock detection/I-bit sampling for smart dispatch/interrupt mask API
 *  for exception.
 *
 * 12 01 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * add single core configuration for bootslave .
 *
 * 11 16 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * update mdcirq driver .
 *
 * 11 14 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * update MDCIRQ DCM_DI/DCM_EI driver.
 *
 * 11 11 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * add drv_mdcirq_DCM_DI/drv_mdcirq_DCM_EI for DCM sleep flow.
 *
 * 11 02 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * Add MDCIRQ_EX_SaveStatus API for exception usage.
 *
 * 11 02 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * Add IRQ_B/NMI_B API for DCM usage.
 *
 * 10 19 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * MDCIRQ driver update.
 *
 * 10 19 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * 93 MDCIRQ driver implementation.
 *
 * 10 05 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * [93]wait mode disable modification .
 *
 * 08 17 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * mdcirq driver update.
 *
 * 08 09 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * enable MDCIRQ wait mode.
 *
 * 07 12 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * MDCIRQ configuration and multi-VPE interrupt update.
 *
 * 05 30 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * MDCIRQ driver implementation.
 *
 * 04 15 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * 93M modification .
 *
 * 03 30 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * 93 MDCIRQ related check in .
 *
 * 03 07 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * take off unnecessary sync and replace DSB by mo_sync.
 *
 * 02 19 2016 i-chun.liu
 * [MOLY00165445] [MT6292][FPGA][Phone Call][4G FDD][Critical] Information about spurious interrupt lost with SST exception flow
 * Use ASSERT_EXL_SAFE when exl is not cleared.
 *
 * 02 19 2016 i-chun.liu
 * [MOLY00165445] [MT6292][FPGA][Phone Call][4G FDD][Critical] Information about spurious interrupt lost with SST exception flow
 * Use ASSERT_EXL_SAFE to prevent memory dump fail when exl is set.
 *
 * 02 17 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * MDCIRQ driver update.
 *
 * 02 17 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * Refine MIPSGIC/MDCIRQ driver .
 *
 * 02 16 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * Remove INTMaskCount[]
 *
 * 02 16 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * Modify MDCIRQ/MIPSGIC to use HWITC.
 *
 * 02 10 2016 jari.manninen
 * [MOLY00163449] [MT6292][FPGA][Phone Call][4G FDD][Blocker] All cores run into deadlock
 *
 * 	Changed to use set register bit macros instead of read-modify-write macros when accessing set/clear HW registers in MDCIRQ driver.
 *
 * 02 05 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * VPE State modification / move dummy lisr from GIC to CIRQ.
 *
 * 02 03 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * MDCIRQ/MIPSGIC driver update (remove Set_IPL(), Restore_IPL()).
 *
 * 02 02 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * MDCIRQ config update for 3core U4G FPGA.
 *
 * 02 02 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * ADD ESL modification since there is no MDCIRQ GCR register in 92ESL.
 *
 * 01 29 2016 i-chun.liu
 * [MOLY00155050] [SystemService] [ESL] Merge Modification of ESL to UMOLY Trunk
 * MDCIRQ/MIPSGIC driver update.
 *
 * 01 27 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * SaveAndSetIRQMask/RestoreIRQMask API modification
 * 	.
 *
 * 12 22 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * update MDCIRQ driver .
 *
 * 12 03 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * modify driver to prevent use bank1 as NPW.
 *
 * 11 16 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * MDCIRQ driver update for YQ APIs.
 *
 * 10 26 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * mdcirq driver update.
 *
 * 10 23 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * MDCIRQ+MIPSGIC driver update.
 *
 * 10 15 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * mdcirq/mipsgic driver update for MIPSGIC SW trigger .
 *
 * 09 22 2015 i-chun.liu
 * [MOLY00135941] UMOLY Trunk merge back for ELBRUS
 * UMOLY TRUNK merge back for ELBRUS MDCIRQ.
 *
 * 09 18 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * For MDCIRQ 8VPE simple driver  .
 * 08 06 2015 i-chun.liu
 * [MOLY00135941] UMOLY Trunk merge back for ELBRUS
 * UMOLY trunk call for check in for ELBRUS MDCIRQ.
 *
 * 09 09 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * update active_lisr/deactivate_lisr to use infinite wait spinlock.
 *
 * 09 02 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * 	multi vpe cirq support (2VPE).
 *
 * 07 28 2015 i-chun.liu
 * [MOLY00132732] [91+]: CBr merge back dev call for check in
 * add CTIRQ1_2_MaskAll and CTIRQ1_2_Restore back.
 *
 * 07 28 2015 i-chun.liu
 * [MOLY00132732] [91+]: CBr merge back dev call for check in
 * CIRQ driver merge back.
 *
 * 06 02 2015 linson.du
 * [MOLY00114215] [91+]: MDCIRQ/GIC driver implement
 * GIC driver for MASE update.
 *
 * 06 02 2015 linson.du
 * [MOLY00114215] [91+]: MDCIRQ/GIC driver implement
 * GIC driver for MASE.
 *
 * 05 18 2015 linson.du
 * [MOLY00114215] [91+]: MDCIRQ/GIC driver implement
 * replace interrupt enable/disable api.
 *
 * 05 18 2015 yh.peng
 * [MOLY00110737] [MT6291+] Check in init code.
 * .system initialization complete.
 *
 * 02 06 2015 i-chun.liu
 * [MOLY00094939] MASE UMOLY check in
 * MASE UMOLY check in for CIRQ part.
 *
 * 12 17 2014 i-chun.liu
 * [MOLY00085849] Update UMOLY DEV/TRUNK CIRQ table and priority
 * UMOLY Trunk CIRQ table/priority update. (sync with UMOLY/DEV)
 *
 * 12 03 2014 i-chun.liu
 * [MOLY00085849] Update UMOLY DEV/TRUNK CIRQ table and priority
 * TK6291 mdcirq update
 *
 * 09 23 2014 linson.du
 * [MOLY00070793] [TK6291]: CIRQ driver update
 * 	add "bb reg dump" for CIRQ
 *
 * 06 11 2014 linson.du
 * [MOLY00061877] [TK6291]driver initial porting for TK6291
 * Fix 91 CIRQ bug. Change variable declared type from U16 to U32 to avoid casting problem.
 *
 * 05 20 2014 linson.du
 * [MOLY00061877] [TK6291]driver initial porting for TK6291
 * Fix cirq init assert because some invalid IRQ ID.
 *
 * 05 13 2014 linson.du
 * [MOLY00061877] [TK6291]driver initial porting for TK6291
 * Fix a CIRQ driver bug. vec offset = size>>2 -1
 *
 * 04 24 2014 linson.du
 * [MOLY00061877] [TK6291]driver initial porting for TK6291
 * Fix pcore build error.
 *
 * 04 23 2014 da.wang
 * [MOLY00062016] Fix build error of porting for TK6291
 * Porting TK6291 pcore CIRQ.
 *
 * 12 06 2013 chin-chieh.hung
 * [MOLY00045704] Init MT6595 common driver
 * ROME Porting
 *
 * 11 12 2013 chin-chieh.hung
 * [MOLY00045704] Init MT6595 common driver
 * fix error setting
 *
 * 08 26 2013 chin-chieh.hung
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * remove compiling warning
 *
 * 06 13 2013 chin-chieh.hung
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * update for E2 FPGA
 *
 * 06 05 2013 chin-chieh.hung
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * add sleep mask setting
 *
 * 05 13 2013 chin-chieh.hung
 * [MOLY00013348] [MT6290 Bring-up] Basic Platform Support
 * MT6290E1_FristCall Branch sync back to MOLY Trunk
 *
 * 04 28 2013 chin-chieh.hung
 * [MOLY00013021] [MT6290 PO admit] Move the LISR context to HISR context
 * LISR 2 HISR support, driver part
 *
 * 04 23 2013 chin-chieh.hung
 * [MOLY00013021] [MT6290 PO admit] Move the LISR context to HISR context
 * MOLY LISR2HISR, Driver part
 *
 * 03 29 2013 chin-chieh.hung
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * fix build error in 128 pins support
 *
 * 02 04 2013 chin-chieh.hung
 * [MOLY00009725] MT7208 rename to MT6290 - basic platform module
 * chip rename:MT7208 to MT6290
 *
 * 01 29 2013 chin-chieh.hung
 * [MOLY00008069] MT7208 sleep_drv support
 * fix atest_drv build failed because the multimode code merge
 ****************************************************************************/


/******************************************************************************
 * Include header files
 ******************************************************************************/
#include "kal_iram_section_defs.h"
#include "kal_public_api.h"
#include "kal_internal_api.h"
#include "kal_hrt_api.h"
#include "cache_sw.h"
#include "intrCtrl.h"
#include "drv_comm.h"
#include "drv_mdcirq.h"
#include "sync_data.h"
#include "devdrv_ls.h"
#include "ex_public.h"
#include "init_comm.h"
#include "SST_intrCtrl.h"
#include "drv_vpe_irq.h"
#include <ex_public.h>

/******************************************************************************
 * Define global data
 ******************************************************************************/
kal_uint32 irq_mask_caller;
kal_uint32 irq_unmask_caller;
kal_uint32  irq_mask_monitor_idx = NUM_IRQ_SOURCES;
kal_uint32  irq_unmask_monitor_idx = NUM_IRQ_SOURCES;
kal_uint32 IRQMaskStatus[8];
kal_uint32 IRQStatus[8];
kal_uint32 IRQ_B_NMI_B_MaskStatus;
kal_uint32 IRQ_B_NMI_B_Status;
static kal_uint32 drv_mdcirq_NMI_ready[ESAL_GE_CPU_COUNT] = {KAL_FALSE};
kal_uint32 drv_mdcirq_NMI_trigger[ESAL_GE_CPU_COUNT];
kal_uint32 drv_mdcirq_deadlock_processing;
kal_uint32 drv_mdcirq_irq_ack_exception;


extern kal_uint32 sst_ex_irq_mask_duration[];
extern kal_uint32 sst_irq_mask_caller[];
extern kal_uint32 IRQMaskCounter[];
extern kal_uint32 sst_hrt_qbit_caller[];
extern kal_uint32 HRTQbitCounter[];
extern kal_uint32 kal_hrt_SaveAndSetIRQMask_NoCheck(void);
extern void kal_hrt_RestoreIRQMask_NoCheck(kal_uint32 irq);
extern void IRQMaskDurationHandler(kal_uint32 duration, kal_uint32 retaddr, kal_uint32 vpe_num);


#if defined(__ENABLE_SW_TRIGGER_INTERRUPT__)
kal_uint32 SW_INT_Counter[NUM_IRQ_SOURCES];
const kal_uint8 SW_Code_Handle2Code[NUM_IRQ_SOURCES] =
{
#define X_SW_HANDLE_CONST(a, b, c) c,
#include "intrCtrl_SW_Handle.h"
#undef X_SW_HANDLE_CONST
};
#endif /* __ENABLE_SW_TRIGGER_INTERRUPT__ */


static const kal_uint8 irq_priority_list[] =
{
    INTERRUPT_PRIORITY_LIST
};

static const kal_uint8 irq_group_list[] =
{
    INTERRUPT_GROUP_LIST
};

static const kal_uint8 irq_group_map2vpe_list[] =
{
    INTERRUPT_GROUP_M2V_LIST
};

static const kal_uint8 nmi_group_map2vpe_list[] =
{
    NMI_GROUP_M2V_LIST
};


static const kal_uint32 irq_broadcast_type_list[] =
{
    INTERRUPT_BROADCAST_TYPE
};

static const kal_uint32 irq_type_list[] =
{
    INTERRUPT_TYPE
};

const kal_uint32 irq_hrt_multi_thread[] =
{
    INTERRUPT_HRT_MT
};

const kal_uint32 irq_disable_timing_threshold[]=
{
    INTERRUPT_TIMING_THRESHOLD
};

#if defined(__MTK_TARGET__)
/* bb reg dump setting */
EX_BBREG_DUMP cirq_dump;
const kal_uint32 cirq_dump_regions[] =
{
#if ( defined(ELBRUS) || defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768) )
    MDCIRQ_BASE,    0x0EA0,        4,     /* CIRQ APB registers*/
    MDCIRQ_GCR_BASE,    0x0250,        4,     /* CIRQ custom GCR registers */
#else
    0, 0, 0
#endif
};
#endif /* __MTK_TARGET__ */


/*****************************************************************************
 * External function/variables                                               *
 *****************************************************************************/
extern void ReEnableIRQ(void);
extern HW_CORENUM INT_QUERY_CORENUM(void);
extern void NMI_handler();

/*****************************************************************************
 * Function Declaration                                                      *
 *****************************************************************************/
void drv_mdcirq_clr_all_swtr(void);
void MDCIRQ_IRQClearAllInt(void);
void MDCIRQ_IRQDirectMaskAll(void);

/*****************************************************************************
 * Function Implementation - Low Layer                                       *
 *****************************************************************************/

void drv_mdcirq_unmask_all(void)
{
    /* unmask all CIRQ source */
    kal_int32 i;
    for(i = 0; i < MDCIRQ_MAX_ISR_NUM/32; i++)
    {
        MDCIRQ_WRITE_REG_INDEX(MDCIRQ_IMCR_BASE, i, 0xFFFFFFFF);
    }
}

void drv_mdcirq_mask_all(void)
{
    kal_int32 i;
    for(i = 0; i < MDCIRQ_MAX_ISR_NUM/32; i++)
    {
        MDCIRQ_WRITE_REG_INDEX(MDCIRQ_IMSR_BASE, i, 0xFFFFFFFF);
    }
}

void drv_mdcirq_clr_all_status(void)
{
    /* clear all CIRQ interrupt source */
    kal_int32 i;
    for(i = 0; i < MDCIRQ_MAX_ISR_NUM/32; i++)
    {
        MDCIRQ_WRITE_REG_INDEX(MDCIRQ_ISAR_BASE, i, 0xFFFFFFFF);
    }
}

void drv_mdcirq_clr_all_swtr(void)
{
    kal_int32 i;
    for(i = 0; i < MDCIRQ_MAX_ISR_NUM/32; i++)
    {
        MDCIRQ_WRITE_REG_INDEX(MDCIRQ_ISTR_BASE, i, 0);
    }
}

void drv_mdcirq_clr_all_pri_stk(void)
{
    kal_int32 i,j;
    for(i=0; i < MDCIRQ_TOTAL_VPE_NUM; i++)
    {
        for(j = 0; j < MDCIRQ_TOTAL_PRI_LEVEL; j++)
        {
#if defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
            DRV_WriteReg32((MDCIRQ_VPE_IRQ_PRLV_ACK_BASE + i*4), 0x1FF);
#else
            DRV_WriteReg32((MDCIRQ_GCR_VPE_IRQ_PRLV_ACK_BASE + i*4), 0x1FF);
#endif
        }
    }
}

void drv_mdcirq_set_irq_group(kal_uint32 IRQID, kal_uint32 GROUP_ID)
{
    kal_uint32 reg_value, clear_value;
    reg_value =  (GROUP_ID<<((IRQID%4)*8)) ;
    clear_value = ~(0xFF<<((IRQID%4)*8));
    reg_value = (DRV_Reg32(MDCIRQ_IRQ_GROUP_CFG(IRQID)) & clear_value) | reg_value;
    DRV_WriteReg32(MDCIRQ_IRQ_GROUP_CFG(IRQID), reg_value);
}


void drv_mdcirq_set_Group2VPE(kal_uint32 group, kal_uint32 VPES)
{
    DRV_WriteReg32(MDCIRQ_GROUP_M2V_CFG(group), VPES);
}


void drv_mdcirq_set_NMIGroup2VPE(kal_uint32 group, kal_uint32 VPES)
{
    DRV_WriteReg32(MDCIRQ_GROUPNMI_M2V_CFG(group), VPES);
}


void drv_mdcirq_set_Broadcast(kal_uint32 IRQID, kal_bool Type)
{
    if(Type==KAL_TRUE)
        MDCIRQ_SetRegBit_Vector(MDCIRQ_IBROCAT_BASE,IRQID);
    else
        MDCIRQ_ClrRegBit_Vector(MDCIRQ_IBROCAT_BASE,IRQID);
}


__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE void drv_mdcirq_Set_VPE_state(kal_uint32 VPE, kal_uint32 state)
{
    ASSERT((VPE < MDCIRQ_TOTAL_VPE_NUM) && (state<=VPE_STATUS_HISR_TASK_LOWEST));
#if defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
    MDCIRQ_WRITE_REG_INDEX(MDCIRQ_VPE_IRQ_STATE_BASE, VPE, state);
#else
    MDCIRQ_WRITE_REG_INDEX(MDCIRQ_GCR_VPE_IRQ_STATE_BASE, VPE, state);
#endif
}

__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE kal_uint32 drv_mdcirq_SaveAndSet_VPE_state(kal_uint32 VPE, kal_uint32 state)
{
    kal_uint32 ori_state;
    ASSERT((VPE < MDCIRQ_TOTAL_VPE_NUM) && (state<=VPE_STATUS_HISR_TASK_LOWEST));
#if defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
    ori_state = MDCIRQ_READ_REG_INDEX(MDCIRQ_VPE_IRQ_STATE_BASE, VPE);
    MDCIRQ_WRITE_REG_INDEX(MDCIRQ_VPE_IRQ_STATE_BASE, VPE, state);
#else
    ori_state = MDCIRQ_READ_REG_INDEX(MDCIRQ_GCR_VPE_IRQ_STATE_BASE, VPE);
    MDCIRQ_WRITE_REG_INDEX(MDCIRQ_GCR_VPE_IRQ_STATE_BASE, VPE, state);
#endif
    return ori_state;
}

__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE void drv_mdcirq_Restore_VPE_state(kal_uint32 VPE, kal_uint32 ori_state)
{
    ASSERT((VPE < MDCIRQ_TOTAL_VPE_NUM) && (ori_state<=VPE_STATUS_HISR_TASK_LOWEST));
#if defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
    MDCIRQ_WRITE_REG_INDEX(MDCIRQ_VPE_IRQ_STATE_BASE, VPE, ori_state);
#else
    MDCIRQ_WRITE_REG_INDEX(MDCIRQ_GCR_VPE_IRQ_STATE_BASE, VPE, ori_state);
#endif
}

//only can be used at system init stage
void drv_mdcirq_WAIT_MODE(kal_bool enable)
{
    if(enable==KAL_TRUE)
    {
        DRV_WriteReg32(MDCIRQ_WAIT_MODE,1);
    }
    else
    {
        DRV_WriteReg32(MDCIRQ_WAIT_MODE,0);
    }
}

__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE void drv_mdcirq_set_YQ_Signal(kal_uint32 CORE, kal_uint32 YQ_num)
{
    /* Set specified YQ signal */
    ASSERT((CORE < MDCIRQ_TOTAL_CORE_NUM) && (YQ_num < MDCIRQ_YQ_SIGNAL_PER_CORE));
    DRV_WriteReg32(MDCIRQ_YQ_SET_REG_BASE+(YQ_num<<2),1<<CORE);
    MO_Sync();
}


__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE void drv_mdcirq_clear_YQ_Signal(kal_uint32 CORE, kal_uint32 YQ_num)
{
    /* Clear specified YQ signal */
    ASSERT((CORE < MDCIRQ_TOTAL_CORE_NUM) && (YQ_num < MDCIRQ_YQ_SIGNAL_PER_CORE));
    DRV_WriteReg32(MDCIRQ_YQ_CLEAR_REG_BASE+(YQ_num<<2),1<<CORE);
    MO_Sync();
}

void drv_mdcirq_set_YQ_Mask(kal_uint32 CORE, kal_uint32 YQ_num)
{
    /* Mask specified YQ signal */
    ASSERT((CORE < MDCIRQ_TOTAL_CORE_NUM) && (YQ_num < MDCIRQ_YQ_SIGNAL_PER_CORE));
    DRV_WriteReg32(MDCIRQ_YQ_MASK_SET_REG_BASE+(YQ_num<<2),1<<CORE);
    //while(!(DRV_Reg32(MDCIRQ_YQ_MASK_REG_BASE+(YQ_num<<2))&(1<<CORE)));
    MO_Sync();
}

void drv_mdcirq_clear_YQ_Mask(kal_uint32 CORE, kal_uint32 YQ_num)
{
    /* Unmask specified YQ signal */
    ASSERT((CORE < MDCIRQ_TOTAL_CORE_NUM) && (YQ_num < MDCIRQ_YQ_SIGNAL_PER_CORE));
    DRV_WriteReg32(MDCIRQ_YQ_MASK_CLEAR_REG_BASE+(YQ_num<<2),1<<CORE);
    //while((DRV_Reg32(MDCIRQ_YQ_MASK_REG_BASE+(YQ_num<<2))&(1<<CORE)));
    MO_Sync();
}

void drv_mdcirq_clear_ALL_YQ_Mask(void)
{
    /* claer all YQ mask */
    kal_int32 i;
    for(i=0 ; i< MDCIRQ_YQ_SIGNAL_PER_CORE; i++)
    {
        DRV_WriteReg32(MDCIRQ_YQ_MASK_CLEAR_REG_BASE+(i<<2),0xF);
    }
    MO_Sync();
}

void drv_mdcirq_set_ALL_YQ_Mask(void)
{
    kal_int32 i;
    for(i=0 ; i< MDCIRQ_YQ_SIGNAL_PER_CORE; i++)
    {
        DRV_WriteReg32(MDCIRQ_YQ_MASK_SET_REG_BASE+(i<<2),0xF);
    }
    MO_Sync();
}

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
__attribute__((section("ISPRAM_ROCODE_CORE1"))) __attribute__((code_readble("no")))
#endif
void drv_mdcirq_unmask_core(kal_uint32 target_core)
{
    kal_uint32 mask_value;
    if(target_core == 0)
        return;
    mask_value = 0x1 << (target_core<<1);

    MDCIRQ_WRITE_REG_INDEX(MDCIRQ_GROUP_M2V_CFG_BASE, 4, (MDCIRQ_READ_REG_INDEX(MDCIRQ_GROUP_M2V_CFG_BASE, 4))&(~mask_value));
    MO_Sync();
}

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
__attribute__((section("ISPRAM_ROCODE_CORE1"))) __attribute__((code_readble("no")))
#endif
void drv_mdcirq_mask_core(kal_uint32 target_core)
{
    kal_uint32 mask_value;
    if(target_core == 0)
        return;
    mask_value = 0x1 << (target_core<<1);

    MDCIRQ_WRITE_REG_INDEX(MDCIRQ_GROUP_M2V_CFG_BASE, 4, (MDCIRQ_READ_REG_INDEX(MDCIRQ_GROUP_M2V_CFG_BASE, 4))|(mask_value));
    MO_Sync();
}

void drv_mdcirq_set_Ultra_threshold(kal_uint32 VPE, kal_uint32 PRLV)
{
    ASSERT((VPE<MDCIRQ_TOTAL_VPE_NUM)&&(PRLV<=MDCIRQ_LOWEST_PRI));
    DRV_WriteReg32(MDCIRQ_VPE_ULTRA_PRLV_BASE+(VPE<<2), PRLV);
    MO_Sync();
}

void drv_mdcirq_set_PreUltra_threshold(kal_uint32 VPE, kal_uint32 PRLV)
{
    ASSERT((VPE<MDCIRQ_TOTAL_VPE_NUM)&&(PRLV<=MDCIRQ_LOWEST_PRI));
    DRV_WriteReg32(MDCIRQ_VPE_PREULTRA_PRLV_BASE+(VPE<<2), PRLV);
    MO_Sync();
}


void drv_mdcirq_IRQ_NMI_mask_per_vpe(kal_uint32 VPE)
{
    ASSERT((VPE<MDCIRQ_TOTAL_VPE_NUM));
    DRV_WriteReg32(MDCIRQ_VPE_INTMASK_SET, 1<<VPE);
    MO_Sync();
}

void drv_mdcirq_IRQ_NMI_mask_all()
{
    DRV_WriteReg32(MDCIRQ_VPE_INTMASK_SET, 0xF);
    MO_Sync();
}


void drv_mdcirq_IRQ_NMI_unmask_per_vpe(kal_uint32 VPE)
{
    ASSERT((VPE<MDCIRQ_TOTAL_VPE_NUM));
    DRV_WriteReg32(MDCIRQ_VPE_INTMASK_CLR, 1<<VPE);
    MO_Sync();
}


void drv_mdcirq_IRQ_NMI_unmask_all()
{
    DRV_WriteReg32(MDCIRQ_VPE_INTMASK_CLR, 0xF);
    MO_Sync();
}


void drv_mdcirq_IRQ_ACK_enable(kal_bool enable)
{
    if(enable)
    {
        DRV_WriteReg32(MDCIRQ_CIRQ_ACK_MASK, 0);
    }
    else
    {
        DRV_WriteReg32(MDCIRQ_CIRQ_ACK_MASK, 1);
    }
    MO_Sync();
}

kal_uint32 drv_mdcirq_get_IRQ_ACK_enable()
{
        return DRV_Reg32(MDCIRQ_CIRQ_ACK_MASK);
}


void drv_mdcirq_GCR_enable(kal_bool enable)
{
    if(enable)
    {
        DRV_WriteReg32(MDCIRQ_CIRQ_GCR_MASK, 0);
    }
    else
    {
        DRV_WriteReg32(MDCIRQ_CIRQ_GCR_MASK, 1);
    }
    MO_Sync();
}

//Enable/Disable Ibit sampling from VPE to MDCIRQ
void drv_mdcirq_IBit_sampling_enable(kal_uint32 VPE, kal_bool enable)
{
    ASSERT((VPE<MDCIRQ_TOTAL_VPE_NUM));
    if(enable)
    {
        DRV_WriteReg32(MDCIRQ_GCR_IBIT_CTL_SET, 1<<VPE);
        DRV_Reg32(MDCIRQ_GCR_IBIT_CTL_SET);
    }
    else
    {
        DRV_WriteReg32(MDCIRQ_GCR_IBIT_CTL_CLR, 1<<VPE);
        DRV_Reg32(MDCIRQ_GCR_IBIT_CTL_CLR);
    }
    MO_Sync();
}


//Enable Ibit sampling from VPE to MDCIRQ
void drv_mdcirq_IBit_sampling_enable_all(kal_bool enable)
{
    if(enable)
    {
        DRV_WriteReg32(MDCIRQ_GCR_IBIT_CTL_SET, 0xF);
        DRV_Reg32(MDCIRQ_GCR_IBIT_CTL_SET);
    }
    else
    {
        DRV_WriteReg32(MDCIRQ_GCR_IBIT_CTL_CLR, 0xF);
        DRV_Reg32(MDCIRQ_GCR_IBIT_CTL_CLR);
    }
    MO_Sync();
}

//Disable Ibit sampling from VPE to MDCIRQ in DCM DI
kal_uint32 drv_mdcirq_DCM_DI()
{
    kal_uint32 vpe_num=0xF, ret=0;
    vpe_num = kal_get_current_vpe_id();

    Set_EXL();
    drv_mdcirq_IBit_sampling_enable(vpe_num, KAL_FALSE);
    MO_Sync();
    ret = kal_hrt_SaveAndSetIRQMask_NoCheck();
    Clear_EXL();
    return ret;
}

//Enable Ibit sampling from VPE to MDCIRQ in DCM EI
void drv_mdcirq_DCM_EI(kal_uint32 ret)
{
    kal_uint32 vpe_num;
    vpe_num = kal_get_current_vpe_id();

    drv_mdcirq_IBit_sampling_enable(vpe_num, KAL_TRUE);
    kal_hrt_RestoreIRQMask_NoCheck(ret);
}

//SW Workaround to let MDCIRQ think Ibit is enabled, so IRQ can be dispatched
void drv_mdcirq_DCM_DI_Recover(void)
{
    kal_uint32 vpe_num;
    Set_EXL();
    vpe_num = kal_get_current_vpe_id();

    drv_mdcirq_IBit_sampling_enable(vpe_num, KAL_TRUE);
    MO_Sync();
    ReEnableIRQ();
    MO_Sync();
    drv_mdcirq_IBit_sampling_enable(vpe_num, KAL_FALSE);
    MO_Sync();
    DisableIRQ();
    Clear_EXL();
}

void drv_mdcirq_IBit_Ultra_select(kal_uint32 VPE, kal_uint32 Ultra_level)
{
    ASSERT((VPE<MDCIRQ_TOTAL_VPE_NUM) && (Ultra_level<3));
    DRV_WriteReg32(MDCIRQ_ULTRA_CLR, 0x3 << (VPE*8));
    DRV_WriteReg32(MDCIRQ_ULTRA_SET, Ultra_level << (VPE*8));
    MO_Sync();
}


void drv_mdcirq_set_vector_priority(kal_uint32 vector, kal_uint32 priority)
{
    /* config the priority for specified CIRQ ID */

    ASSERT(vector < MDCIRQ_MAX_ISR_NUM);
    ASSERT(priority <= MDCIRQ_LOWEST_PRI);

    kal_uint32 priroty_local, shift_bits;

    shift_bits = (vector % 4) * 8;

    priroty_local = DRV_Reg32(MDCIRQ_PRLV(vector)) & (~(0xFF << shift_bits));

    priroty_local |= (priority << shift_bits);

    DRV_WriteReg32(MDCIRQ_PRLV(vector), priroty_local);
    MO_Sync();

}

void drv_mdcirq_set_min_priority(kal_uint32 VPE, kal_uint32 priority)
{
    ASSERT(VPE < MDCIRQ_TOTAL_VPE_NUM);
    ASSERT(priority <= MDCIRQ_LOWEST_PRI);

#if defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
    DRV_WriteReg32(MDCIRQ_VPE_MIN_PRLV_BASE + VPE*4, priority);
#else
    DRV_WriteReg32(MDCIRQ_GCR_VPE_MIN_PRLV_BASE + VPE*4, priority);
#endif
    MO_Sync();

}

/* [92 series only]SW workaround for MDCIRQ GCR register affects MDCIRQ register settings*/
void drv_mdcirq_dormant_restore()
{
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(__ESL_ENABLE__)
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#endif
}

void MDCIRQ_WDT_Init(kal_uint32 core, kal_uint32 val)
{
    ASSERT(core < MDCIRQ_TOTAL_CORE_NUM);
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_CORE_WDT_INIT_BASE, core, val);
    MO_Sync();
}

void MDCIRQ_WDT_YQ_MASK_SETALL(kal_uint32 core)
{
    ASSERT(core < MDCIRQ_TOTAL_CORE_NUM);
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_YQ_WDT_MASK_SET_BASE, 0, (1 << core));
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_YQ_WDT_MASK_SET_BASE, 1, (1 << core));
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_YQ_WDT_MASK_SET_BASE, 2, (1 << core));
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_YQ_WDT_MASK_SET_BASE, 3, (1 << core));
    MO_Sync();
}

void MDCIRQ_WDT_YQ_MASK_CLEARALL(kal_uint32 core)
{
    ASSERT(core < MDCIRQ_TOTAL_CORE_NUM);
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_YQ_WDT_MASK_CLEAR_BASE, 0, (1 << core));
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_YQ_WDT_MASK_CLEAR_BASE, 1, (1 << core));
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_YQ_WDT_MASK_CLEAR_BASE, 2, (1 << core));
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_YQ_WDT_MASK_CLEAR_BASE, 3, (1 << core));
    MO_Sync();
}

void MDCIRQ_WDT_YQ_MASK_SET(kal_uint32 core, kal_uint32 yq)
{
    ASSERT(core < MDCIRQ_TOTAL_CORE_NUM);
    ASSERT(yq < MDCIRQ_YQ_SIGNAL_PER_CORE);
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_YQ_WDT_MASK_SET_BASE, yq, (1 << core));
    MO_Sync();
}


void MDCIRQ_WDT_YQ_MASK_CLEAR(kal_uint32 core, kal_uint32 yq)
{
    ASSERT(core < MDCIRQ_TOTAL_CORE_NUM);
    ASSERT(yq < MDCIRQ_YQ_SIGNAL_PER_CORE);
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_YQ_WDT_MASK_CLEAR_BASE, yq, (1 << core));
    MO_Sync();
}

void MDCIRQ_WDT_ClearInt(kal_uint32 core)
{
    ASSERT(core < MDCIRQ_TOTAL_CORE_NUM);
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_CORE_WDT_INTERRUPT_CLEAR_BASE, core, 1);
    MO_Sync();
}

void MDCIRQ_WDT_Start(kal_uint32 core)
{
    ASSERT(core < MDCIRQ_TOTAL_CORE_NUM);
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_CORE_WDT_START_BASE, core, 1);
    MO_Sync();
}

void MDCIRQ_WDT_Stop(kal_uint32 core)
{
    ASSERT(core < MDCIRQ_TOTAL_CORE_NUM);
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_CORE_WDT_START_BASE, core, 0);
    MO_Sync();
}

void MDCIRQ_WDT_Pause(kal_uint32 core)
{
    ASSERT(core < MDCIRQ_TOTAL_CORE_NUM);
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_CORE_WDT_PAUSE_BASE, core, 1);
    MO_Sync();
}

void MDCIRQ_WDT_Restart(kal_uint32 core)
{
    ASSERT(core < MDCIRQ_TOTAL_CORE_NUM);
    MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_CORE_WDT_PAUSE_BASE, core, 0);
    MO_Sync();
}

//mode0: IRQ issue after EI
//mode1: IRQ issue once timing slot is exceeded threshold
void drv_mdcirq_set_VPE_timing_check_MODE(kal_uint32 VPE, kal_uint32 mode)
{
    ASSERT(VPE < MDCIRQ_TOTAL_VPE_NUM);
    ASSERT(mode < 0x2);

    if(mode == 0)
    {
        DRV_WriteReg32(MDCIRQ_IE_CHECK_MODE_CLR,1<<VPE);
    }
    else
    {
        DRV_WriteReg32(MDCIRQ_IE_CHECK_MODE_SET,1<<VPE);
    }
    MO_Sync();
}

//mode0: IRQ issue after EI
//mode1: IRQ issue once timing slot is exceeded threshold
kal_bool drv_mdcirq_VPE_timing_check_MODE(kal_uint32 VPE)
{
    ASSERT(VPE < MDCIRQ_TOTAL_VPE_NUM);
    return (DRV_Reg32(MDCIRQ_IE_CHECK_MODE)&(1<<VPE));
}
void drv_mdcirq_set_VPE_timing_check_threshold(kal_uint32 VPE, kal_uint32 threshold)
{
    /* config the threshold(us) for Qbit check on specified VPE */
    ASSERT(VPE < MDCIRQ_TOTAL_VPE_NUM);
    ASSERT(threshold <= 0xFFFFFFFF);

    MDCIRQ_WRITE_REG_INDEX(MDCIRQ_VPE_TIMECHECK_THRESHOLD_BASE, VPE, threshold);

    MO_Sync();
}

kal_uint32 drv_mdcirq_get_VPE_timing_check_mask_frc(kal_uint32 VPE)
{
    /* get the FRC counter when VPE disable interrupt */
    ASSERT(VPE < MDCIRQ_TOTAL_VPE_NUM);

    return MDCIRQ_READ_REG_INDEX(MDCIRQ_VPE_TIMECHECK_FRC_COUNTER_MASK_BASE, VPE);
}

kal_uint32 drv_mdcirq_get_VPE_timing_slot(kal_uint32 VPE)
{
    /* get the DI duration when VPE enable interrupt */
    ASSERT(VPE < MDCIRQ_TOTAL_VPE_NUM);

    return MDCIRQ_READ_REG_INDEX(MDCIRQ_VPE_IE_TIMING_CHK_TIMING_SLOT_BASE, VPE);
}

kal_uint32 drv_mdcirq_get_VPE_RA_MASK(kal_uint32 VPE)
{
    ASSERT(VPE < MDCIRQ_TOTAL_VPE_NUM);
    return MDCIRQ_READ_REG_INDEX(MDCIRQ_VPE_RA_MASK_BASE, VPE);
}

kal_uint32 drv_mdcirq_get_VPE_RA_UNMASK(kal_uint32 VPE)
{
    ASSERT(VPE < MDCIRQ_TOTAL_VPE_NUM);
    return MDCIRQ_READ_REG_INDEX(MDCIRQ_VPE_RA_UNMASK_BASE, VPE);
}


void drv_mdcirq_clear_VPE_timing_check_frc_counter(kal_uint32 VPE)
{
    /* clear VPE timing check IRQ status*/
    ASSERT(VPE < MDCIRQ_TOTAL_VPE_NUM);

    MDCIRQ_WRITE_REG_INDEX(MDCIRQ_VPE_TIMECHECK_FRC_COUNTER_CLEAR_BASE, VPE, 1);

    MO_Sync();
}

kal_bool drv_mdcirq_get_VPE_timing_check_interrupt_status(kal_uint32 VPE)
{
    /* return the VPE is violation timing check or not */
    ASSERT(VPE < MDCIRQ_TOTAL_VPE_NUM);

    if( DRV_Reg32(MDCIRQ_TIMECHECK_INTERRUPT_STATUS)&(0x1<<VPE) )
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}

kal_bool drv_mdcirq_get_HW_MASK(kal_uint32 IRQID)
{
    ASSERT(IRQID < MDCIRQ_MAX_ISR_NUM);

    if(MDCIRQ_GetRegBit_Vector(MDCIRQ_HW_IRQ_MASK_BASE, IRQID))
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}

kal_bool drv_mdcirq_get_VPE_Status(kal_uint32 VPE, kal_uint32 IRQID)
{
    ASSERT(VPE < MDCIRQ_TOTAL_VPE_NUM);
    ASSERT(IRQID < MDCIRQ_MAX_ISR_NUM);

    if(MDCIRQ_GetRegBit_Vector((MDCIRQ_VPE_ISAR_BASE+(0x20*VPE)), IRQID))
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}

/*************************************************************************
* FUNCTION
*  drv_mdcirq_IRQ_B_NMI_B_status
*
* DESCRIPTION
*  Return whether there is IRQ/NMI pending for service
*
* PARAMETERS
*  vpe_id : vpe id
*
* RETURNS
*  KAL_TRUE: there is IRQ/NMI pending for service
*  KAL_FALSE: there is no IRQ/NMI pending for service
*
*************************************************************************/
kal_bool drv_mdcirq_IRQ_B_NMI_B_status(kal_uint32 vpe_id)
{
    kal_uint32 status=0;
    ASSERT(vpe_id<ESAL_GE_CPU_COUNT);
    status = DRV_Reg32(MDCIRQ_VPEINT_STATUS);
    if(((status>>vpe_id)&(0x11))!=0x11)
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}


/* Reset as system default */
void drv_mdcirq_reset(void)
{

    kal_int32 i;
    kal_uint32 combine;

#if defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
    drv_mdcirq_GCR_enable(KAL_FALSE);
#endif

    /* Clear Status Registers */
    MDCIRQ_IRQClearAllInt();

    /* Mask All Interrupt Sources */
    MDCIRQ_IRQDirectMaskAll();

    /* Clear Software Trigger Interrupt*/
    drv_mdcirq_clr_all_swtr();

    /* Set interrupt type as IRQ or NMI */
    for(i = 0; i < MDCIRQ_MAX_ISR_NUM/32; i++)
    {
        MDCIRQ_WRITE_REG_INDEX(MDCIRQ_INTTYPE_BASE, i, irq_type_list[i]);
    }

    /* Set interrupt priority*/
    for(i = 0; i < MDCIRQ_MAX_ISR_NUM/4; i++)
    {
        combine = irq_priority_list[4*i] | irq_priority_list[4*i + 1] << 8 | irq_priority_list[4*i+2]<<16 | irq_priority_list[4*i+3]<<24;
        DRV_WriteReg32(MDCIRQ_PRLV(i<<2), combine);
    }

    /* Set Interrupt Group */
    for(i = 0; i < MDCIRQ_MAX_ISR_NUM/4; i++)
    {
        combine = irq_group_list[4*i] | irq_group_list[4*i + 1] << 8 | irq_group_list[4*i+2]<<16 | irq_group_list[4*i+3]<<24;
        DRV_WriteReg32(MDCIRQ_IRQ_GROUP_CFG(i<<2), combine);
    }

    // Set map2vpe setting of IRQ groups
    for(i =0; i < MDCIRQ_TOTAL_IRQ_GROUP_NUM; i++)
    {
        MDCIRQ_WRITE_REG_INDEX(MDCIRQ_GROUP_M2V_CFG_BASE, i, irq_group_map2vpe_list[i]);
    }

    // Set map2vpe setting of NMI groups
    for(i =0; i < MDCIRQ_TOTAL_NMI_GROUP_NUM; i++)
    {
        MDCIRQ_WRITE_REG_INDEX(MDCIRQ_GROUPNMI_M2V_CFG_BASE, i, nmi_group_map2vpe_list[i]);
    }

    /* Clear Priority Stack */
    drv_mdcirq_clr_all_pri_stk();

    /* Sensitivity */
    for(i = 0; i < MDCIRQ_MAX_ISR_NUM/32; i++)
    {
        //MDCIRQ_WRITE_REG_INDEX(MDCIRQ_ISENR_BASE, i, 0xFFFFFFFF);
        MDCIRQ_WRITE_REG_INDEX(MDCIRQ_ISENR_BASE, i, 0x0);
    }

    /* Set interrupt as broadcast/dynamic type */
    for(i = 0; i < MDCIRQ_MAX_ISR_NUM/32; i++)
    {
        MDCIRQ_WRITE_REG_INDEX(MDCIRQ_IBROCAT_BASE, i, irq_broadcast_type_list[i]);
    }

    /* Set Minimal Priority Level to Lowest Priority */
    for(i = 0; i< MDCIRQ_TOTAL_VPE_NUM; i++)
    {
#if defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
        DRV_WriteReg32(MDCIRQ_VPE_MIN_PRLV_BASE + i*4, MDCIRQ_LOWEST_PRI);
#else
        DRV_WriteReg32(MDCIRQ_GCR_VPE_MIN_PRLV_BASE + i*4, MDCIRQ_LOWEST_PRI);
#endif
    }

    for(i = 0; i< MDCIRQ_TOTAL_CORE_NUM; i++)
    {
        MDCIRQ_WDT_ClearInt(i);
    }

    for(i = 0; i< MDCIRQ_TOTAL_VPE_NUM; i++)
    {
        drv_mdcirq_set_Ultra_threshold(i, 0x0);
        drv_mdcirq_set_PreUltra_threshold(i, 0x0);
    }

#if defined(__MDCIRQ_WAIT_MODE_ENABLE__)
    drv_mdcirq_WAIT_MODE(KAL_TRUE);
#else
    //Disable MDCIRQ wait mode for interrupt dispatch
    drv_mdcirq_WAIT_MODE(KAL_FALSE);
#endif

    for(i = 0; i< MDCIRQ_TOTAL_VPE_NUM; i++)
    {
        drv_mdcirq_Set_VPE_state(i, VPE_STATUS_HISR_TASK_LOWEST);
    }

    //config boot slave address for NMI
    INT_Set_BootSlave(0, (kal_uint32)&NMI_handler);
#ifndef __SINGLE_CORE__
    INT_Set_BootSlave(1, (kal_uint32)&NMI_handler);
#endif

    for(i = 0; i< ESAL_GE_CPU_COUNT; i++)
    {
        drv_mdcirq_NMI_ready[i] = KAL_TRUE;
    }

    //enable IE bit sampling for smart dispatch and timing check
    drv_mdcirq_IBit_sampling_enable_all(KAL_TRUE);

    MO_Sync();

}

/*************************************************************************
* FUNCTION
*  IRQMask
*
* DESCRIPTION
*  Mask certain interrupt source.
*
* PARAMETERS
*  Interrupt source to be masked, it is indexed via IRQCode2Line.
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_IRQMask(kal_uint8 code)
{
    /* get the return address */
    if (code == irq_mask_monitor_idx)
    {
        GET_RETURN_ADDRESS(irq_mask_caller);
    }

    MDCIRQ_WrSetRegBit_Vector_NPW(MDCIRQ_IMSR_BASE, code);
    MO_Sync();
}

/*************************************************************************
* FUNCTION
*  IRQUnmask
*
* DESCRIPTION
*  Unmask certain interrupt source.
*
* PARAMETERS
*  Interrupt source to be unmasked, it is indexed via IRQCode2Line.
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_IRQUnmask(kal_uint8 code)
{

    // No IRQ unmasking allowed if exception handler is running
    if(INT_QueryExceptionStatus()==KAL_TRUE)
    {
        return;
    }

    /* get the return address */
    if (code == irq_unmask_monitor_idx)
    {
        GET_RETURN_ADDRESS(irq_unmask_caller);
    }

    MDCIRQ_WrClrRegBit_Vector(MDCIRQ_IMCR_BASE, code);
    MO_Sync();
}


/*************************************************************************
* FUNCTION
*  IRQMaskAll
*
* DESCRIPTION
*  Mask all of the interrupts
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_IRQMaskAll(void)
{

    kal_int32 i;

    for(i = 0; i < NUM_IRQ_SOURCES/32; i++)
    {
        MDCIRQ_WRITE_REG_INDEX_NPW(MDCIRQ_IMSR_BASE, i, 0xFFFFFFFF);
    }
    MO_Sync();
}

/*************************************************************************
* FUNCTION
*  IRQMask_Status
*
* DESCRIPTION
*  query the interrupt code status
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
kal_uint32 IRQMask_Status(kal_uint8 code)
{

    return (MDCIRQ_READ_REG_INDEX(MDCIRQ_IMKR_BASE, code/32) & (1<<(code%32)));

}



/*************************************************************************
* FUNCTION
*  IRQDirectMaskAll
*
* DESCRIPTION
*  Mask all of the interrupts with direct indexing.
*
* IMPORTANT NOTICE
*  Reserved for system service only!
*  used while system error
*  such as fatal error, assertion failure and CPU triggered excetpion.
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_IRQDirectMaskAll(void)
{
    drv_mdcirq_mask_all();
}

/*************************************************************************
* FUNCTION
*  IRQ_SaveMaskStatus
*
* DESCRIPTION
*  Save the current IRQ MASK status when exception
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_IRQ_SaveMaskStatus(void)
{
#if defined(__CIRQ_MASK_REG_NR_4_NEW__)
    IRQMaskStatus[0] = DRV_Reg32(MDCIRQ_IMKR3100);
    IRQMaskStatus[1] = DRV_Reg32(MDCIRQ_IMKR6332);
    IRQMaskStatus[2] = DRV_Reg32(MDCIRQ_IMKR9564);
    IRQMaskStatus[3] = DRV_Reg32(MDCIRQ_IMKR12796);
#elif defined(__CIRQ_MASK_REG_NR_8_NEW__)
    IRQMaskStatus[0] = DRV_Reg32(MDCIRQ_IMKR3100);
    IRQMaskStatus[1] = DRV_Reg32(MDCIRQ_IMKR6332);
    IRQMaskStatus[2] = DRV_Reg32(MDCIRQ_IMKR9564);
    IRQMaskStatus[3] = DRV_Reg32(MDCIRQ_IMKR12796);
    IRQMaskStatus[4] = DRV_Reg32(MDCIRQ_IMKR159128);
    IRQMaskStatus[5] = DRV_Reg32(MDCIRQ_IMKR191160);
    IRQMaskStatus[6] = DRV_Reg32(MDCIRQ_IMKR223192);
    IRQMaskStatus[7] = DRV_Reg32(MDCIRQ_IMKR255224);
#else
#error
#endif
    return;
}

/*************************************************************************
* FUNCTION
*  MDCIRQ_IRQ_SaveStatus
*
* DESCRIPTION
*  Save the current IRQ MASK status when exception
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_IRQ_SaveStatus(void)
{
    IRQStatus[0] = DRV_Reg32(MDCIRQ_ISAR3100);
    IRQStatus[1] = DRV_Reg32(MDCIRQ_ISAR6332);
    IRQStatus[2] = DRV_Reg32(MDCIRQ_ISAR9564);
    IRQStatus[3] = DRV_Reg32(MDCIRQ_ISAR12796);
    IRQStatus[4] = DRV_Reg32(MDCIRQ_ISAR159128);
    IRQStatus[5] = DRV_Reg32(MDCIRQ_ISAR191160);
    IRQStatus[6] = DRV_Reg32(MDCIRQ_ISAR223192);
    IRQStatus[7] = DRV_Reg32(MDCIRQ_ISAR255224);
    return;
}
/*************************************************************************
* FUNCTION
*  MDCIRQ_EX_SaveStatus
*
* DESCRIPTION
*  Save the current IRQ_B/NMI_B status and MASK_status when exception
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_EX_SaveStatus(void)
{
    IRQ_B_NMI_B_MaskStatus = DRV_Reg32(MDCIRQ_VPE_INTMASK);
    IRQ_B_NMI_B_Status = DRV_Reg32(MDCIRQ_VPEINT_STATUS);
    MDCIRQ_IRQ_SaveMaskStatus();
    MDCIRQ_IRQ_SaveStatus();
}


/*************************************************************************
* FUNCTION
*  IRQClearAllInt
*
* DESCRIPTION
*  Clear all of the interrupts with direct indexing.
*
* IMPORTANT NOTICE
*  Reserved for system service only!
*  This is special API for system service only; used on system
*  initialization stage!
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_IRQClearAllInt(void)
{

    kal_int32 i;
    for(i = 0; i < NUM_IRQ_SOURCES/32; i++)
    {
        MDCIRQ_WRITE_REG_INDEX(MDCIRQ_ISAR_BASE, i, 0xFFFFFFFF);
    }
    MO_Sync();

}


/*************************************************************************
* FUNCTION
*  IRQClearInt
*
* DESCRIPTION
*  Clear IRQ with plain format interrupt status
*
* PARAMETERS
*  Plain format interrupt status
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_IRQClearInt(kal_uint8 code)
{

    kal_uint32 savedmask, savedIRQmask;

    /* Lockout all interrupts */
    savedmask = kal_hrt_SaveAndSetIRQMask();

    //Workaround for WHQA:28291
    //if target IRQ is pulse trigger, then clear interrupt
    //if(!(drv_mdcirq_sensitivity[(code/32)]&(1<<(code%32))))
    {
        //Workaround for WHQA:28291
        //backup IRQ mask status
        savedIRQmask = MDCIRQ_GetRegBit_Vector(MDCIRQ_IMKR_BASE, code);

        //Workaround for WHQA:28291
        //Mask target IRQ
        if(!savedIRQmask)
            MDCIRQ_IRQMask(code);

        MDCIRQ_WrClrRegBit_Vector(MDCIRQ_ISAR_BASE, code);

        //Workaround for WHQA:28291
        //Restore target IRQ mask
        if(!savedIRQmask)
            MDCIRQ_IRQUnmask(code);
    }

    kal_hrt_RestoreIRQMask(savedmask);

}



/*************************************************************************
* FUNCTION
*  IRQSensitivity
*
* DESCRIPTION
*  Setting sensitivity of IRQ
*
* PARAMETERS
*  code: IRQ number to be set
*  edge: either edge active low or level active low
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_IRQSensitivity(kal_uint8 code, kal_bool edge)
{
    if( KAL_TRUE == edge )
    {
        MDCIRQ_WrSetRegBit_Vector(MDCIRQ_ISENR_CLEAR_BASE, code);
    }
    else
    {
        MDCIRQ_WrSetRegBit_Vector(MDCIRQ_ISENR_SET_BASE, code);
    }
}

/*************************************************************************
* FUNCTION
*  SYS_endIsr
*
* DESCRIPTION
*  Notify the CIRQ current ISR is finished!
*
* PARAMETERS
*  Binary coded interrupt status
*
* RETURNS
*
*************************************************************************/

__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE void  MDCIRQ_SYS_endIsr(kal_uint32 vpe_num, kal_uint32 Return_IRQID)
{

#if defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
    DRV_WriteReg32(MDCIRQ_VPE_IRQ_ID_RETURN_BASE + (vpe_num<<2), Return_IRQID);
#else
    DRV_WriteReg32(MDCIRQ_GCR_VPE_IRQ_ID_RETURN_BASE + (vpe_num<<2), Return_IRQID);
#endif
    MO_Sync();

}


/*************************************************************************
* FUNCTION
*  SYS_ClearInt
*
* DESCRIPTION
*  Reserved for system service only!
*  Clear IRQ with plain format interrupt status
*  It is trapped while Interrupt is disabled!
*
* PARAMETERS
*  Plain format interrupt status
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_SYS_ClearInt(kal_uint32 code)
{
    ASSERT(code < NUM_IRQ_SOURCES);
    MDCIRQ_WrClrRegBit_Vector(MDCIRQ_ISAR_BASE, code);
}

/*************************************************************************
* FUNCTION
*  IRQ_SetSWRegister
*
* DESCRIPTION
*  This function set SW interrupt register
*
* PARAMETERS
*  code : Interrupt source of interrupt controller
*
* RETURNS
*  none
*
*************************************************************************/
void MDCIRQ_IRQ_SetSWRegister(kal_uint32 code)
{
    ASSERT(code<NUM_IRQ_SOURCES);
    MDCIRQ_WrSetRegBit_Vector(MDCIRQ_ISTR_SET_BASE, code);
}

/*************************************************************************
* FUNCTION
*  IRQ_ResetSWRegister
*
* DESCRIPTION
*  This function reset SW interrupt register
*
* PARAMETERS
*  code : Interrupt source of interrupt controller
*
* RETURNS
*  none
*
*************************************************************************/
void MDCIRQ_IRQ_ResetSWRegister(kal_uint32 code)
{
    ASSERT(code<NUM_IRQ_SOURCES);
    MDCIRQ_WrSetRegBit_Vector(MDCIRQ_ISTR_CLEAR_BASE, code);
}

void MDCIRQ_EX_IRQUnmask(kal_uint8 code)
{
    MDCIRQ_WrClrRegBit_Vector(MDCIRQ_IMCR_BASE, code);
    MO_Sync();
}

//only exception flow can use this API!
void MDCIRQ_EX_NMITrigger(kal_uint32 vpe_id)
{
    ASSERT(vpe_id<ESAL_GE_CPU_COUNT);
    IRQMask(SW_TRIGGER_CODE31);
    // No need to register LISR since it is NMI trigger
    IRQSensitivity(SW_TRIGGER_CODE31, KAL_FALSE);
    drv_mdcirq_set_NMIGroup2VPE(0, 0xF & (~(1<<vpe_id)));
    MDCIRQ_EX_IRQUnmask(SW_TRIGGER_CODE31);
    Activate_LISR(SW_TRIGGER_CODE31);
#if defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
    DRV_Reg32(MDCIRQ_VPE_NMI_ID_BASE + (vpe_id<<2));
#else
    DRV_Reg32(MDCIRQ_GCR_VPE_NMI_ID_BASE + (vpe_id<<2));
#endif
    Deactivate_LISR(SW_TRIGGER_CODE31);
#if defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
    DRV_WriteReg32(MDCIRQ_VPE_NMI_PRLV_ACK_BASE + (vpe_id<<2), 1);
#else
    DRV_WriteReg32(MDCIRQ_GCR_VPE_NMI_PRLV_ACK_BASE + (vpe_id<<2), 1);
#endif
    MO_Sync();
}

//query whether the NMI can be called
kal_bool MDCIRQ_EX_IsNMIReady(kal_uint32 vpe_id)
{
    return drv_mdcirq_NMI_ready[vpe_id];
}

kal_bool MDCIRQ_EX_WD_Triggered_NMI(kal_uint32 VPEID)
{
#if defined(__DEADLOCK_DETECTION__)
    return drv_mdcirq_NMI_trigger[VPEID];
#else
    return KAL_FALSE;
#endif
}

void MDCIRQ_EX_MASK_ALL(kal_uint32 VPEID)
{
    drv_mdcirq_IRQ_NMI_mask_per_vpe(VPEID);
    drv_vpe_irq_save_and_mask_all(VPEID);
}


#if defined(__DEADLOCK_DETECTION__)
void drv_mdcirq_Deadlock_Detection_Lisr(kal_uint32 irqID)
{
    kal_uint32 i;
    kal_uint32 deadlockVPEID;
	
    /* Deadlock detection interrupt is broadcast type but only one VPE need to process it */
    kal_hrt_take_itc_lock(KAL_ITC_CORE012_INT, KAL_INFINITE_WAIT);
    if( drv_mdcirq_deadlock_processing == KAL_TRUE)
    {
	/* Other VPE already start to process it. Just return. */
        kal_hrt_give_itc_lock(KAL_ITC_CORE012_INT);
	return;
    }
    drv_mdcirq_deadlock_processing = KAL_TRUE;
    /* Mask self deadlock detection interrupt to avoid nested enter LISR.
       Mask other deadlock detection for easy handling. */
    for(i=0; i<MDCIRQ_TOTAL_VPE_NUM; i++)
    {
            IRQMask(IRQ_IEBIT_CHECK_IRQ0_CODE + i);
    }
    kal_hrt_give_itc_lock(KAL_ITC_CORE012_INT);

    deadlockVPEID = irqID - IRQ_IEBIT_CHECK_IRQ0_CODE;
    /* Record deadlock VPE for exception and debugging.  */
    drv_mdcirq_NMI_trigger[deadlockVPEID] = KAL_TRUE;	
	
    if( MDCIRQ_EX_IsNMIReady(deadlockVPEID) == KAL_TRUE)
    {
	/* If NMI ready, trigger NMI to deadlock VPE and return.  */
        MDCIRQ_EX_NMITrigger(deadlockVPEID);
    }
    else
    {
	/* If NMI not ready, just assert to trigger exception.  */
        EXT_ASSERT(0, deadlockVPEID, drv_mdcirq_get_VPE_timing_check_mask_frc(deadlockVPEID), drv_mdcirq_get_VPE_RA_MASK(deadlockVPEID));
    }
}

void drv_mdcirq_Deadlock_Detection_Init()
{
    kal_uint32 i=0;

    for(i=0; i<MDCIRQ_TOTAL_VPE_NUM; i++)
    {
        /* initialize global veriables for deadlock detection */
	drv_mdcirq_deadlock_processing = KAL_FALSE;
	drv_mdcirq_NMI_trigger[i] = KAL_FALSE;
	
	/* Set checking mode to tigger interrupt immediately after violation .
	    Clear counter and set threshold. */
        drv_mdcirq_set_VPE_timing_check_MODE(i, 0x1);
        drv_mdcirq_clear_VPE_timing_check_frc_counter(i);
        if(i & 0x1)
        {
            drv_mdcirq_set_VPE_timing_check_threshold(i, SST_HR_DUR_HRT_WD);
        }
        else
        {
            drv_mdcirq_set_VPE_timing_check_threshold(i, SST_HR_DUR_NON_HRT_WD);
        }

	/* Register LISR, default broadcast mode and send to all VPEs */
        IRQMask(IRQ_IEBIT_CHECK_IRQ0_CODE + i);
        IRQSensitivity(IRQ_IEBIT_CHECK_IRQ0_CODE + i,KAL_FALSE);
        IRQ_Register_LISR(IRQ_IEBIT_CHECK_IRQ0_CODE + i,drv_mdcirq_Deadlock_Detection_Lisr,"Deadlock LISR");
        IRQUnmask(IRQ_IEBIT_CHECK_IRQ0_CODE + i);
    }
}
#endif
#if defined(__MDCIRQ_TIMING_CHECK_EN__)
void drv_mdcirq_Qbit_Violation_Lisr(kal_uint32 v)
{
    /* HRT timing violation in normal domain will not enter this LISR because we always use SW timing check for HRT
	  Qbits check in normal domain */
    kal_uint32 maskDuration, VPEID, returnAddress, maskCaller, maskTime;
	
    VPEID = kal_get_current_vpe_id();

    /* Avoid driver function call due to performace concern */
    maskDuration = MDCIRQ_READ_REG_INDEX(MDCIRQ_VPE_IE_TIMING_CHK_TIMING_SLOT_BASE, VPEID);
    TRANS_TO_QBIT(maskDuration, maskDuration);

    /* Avoid driver function call due to performace concern */	
    returnAddress = MDCIRQ_READ_REG_INDEX(MDCIRQ_VPE_RA_UNMASK_BASE, VPEID);	
	
#if defined(__MTK_INTERNAL__)
    maskCaller = MDCIRQ_READ_REG_INDEX(MDCIRQ_VPE_RA_MASK_BASE, VPEID);
    maskTime = MDCIRQ_READ_REG_INDEX(MDCIRQ_VPE_TIMECHECK_FRC_COUNTER_MASK_BASE, VPEID);
    if( (VPEID & 0x1) != 0x1)
    {
        /* record normal domain interrupt mask caller and mask time for debugging*/
        sst_irq_mask_caller[VPEID]  = maskCaller;
        IRQMaskCounter[VPEID] = maskTime;
    }
    else
    {
        /* record HRT domain interrupt mask caller and mask time for debugging*/
        sst_hrt_qbit_caller[VPEID] = maskCaller;
        HRTQbitCounter[VPEID]= maskTime;
    }
    sst_ex_irq_mask_duration[VPEID] = maskDuration;

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    if (!INT_QueryExceptionStatus())
#else
    if (!L1_CHECK_ASSERT_BYPASS() && !INT_QueryExceptionStatus())
#endif
    {
        if( (VPEID & 0x1) != 0x1)
        {
            /* Normal domain fatal error code 0xb31 */
            kal_fatal_error_handler(KAL_ERROR_OVER_QBIT_NORMAL_FAILED, (kal_uint32)returnAddress);
        }
        else
        {
            /* HRT domain fatal error code 0xb34 */
            kal_fatal_error_handler(KAL_ERROR_OVER_QBIT_HRT_FAILED, (kal_uint32)returnAddress);
        }
    }
#else /* __MTK_INTERNAL__ */
    IRQMaskDurationHandler(maskDuration, (kal_uint32)returnAddress, VPEID);
#endif /* __MTK_INTERNAL__ */

    /* Re-enable timing check */
    /* Avoid driver function call due to performace concern */
    MDCIRQ_WRITE_REG_INDEX(MDCIRQ_VPE_TIMECHECK_FRC_COUNTER_CLEAR_BASE, VPEID, 1);
    MO_Sync();

}

void drv_mdcirq_Qbit_Violation_Init()
{
    kal_uint32 i=0;

    for(i=0; i<MDCIRQ_TOTAL_VPE_NUM; i++)
    {
        /* Set checking mode to tigger interrupt immediately after violation .
	    Clear counter and set threshold. */
        drv_mdcirq_set_VPE_timing_check_MODE(i, 0x1);
        drv_mdcirq_clear_VPE_timing_check_frc_counter(i);
        if(i & 0x1)
        {
            drv_mdcirq_set_VPE_timing_check_threshold(i, IRQ_DISABLE_MAX_DURATION_HRT);
        }
        else
        {
            drv_mdcirq_set_VPE_timing_check_threshold(i, IRQ_DISABLE_MAX_DURATION_NON_HRT);
        }

        /* Register LISR, only send to the VPE cause timing violation */
        IRQMask(IRQ_IEBIT_CHECK_IRQ0_CODE+i);
	/* In user load, we use the lowest priority LISR to print Qbits violation log */
#if  !defined(__MTK_INTERNAL__)
        drv_mdcirq_set_vector_priority(IRQ_IEBIT_CHECK_IRQ0_CODE+i, 127);
#endif
        drv_mdcirq_set_irq_group(IRQ_IEBIT_CHECK_IRQ0_CODE+i, i);
        IRQSensitivity(IRQ_IEBIT_CHECK_IRQ0_CODE+i,KAL_FALSE);
        IRQ_Register_LISR(IRQ_IEBIT_CHECK_IRQ0_CODE+i,drv_mdcirq_Qbit_Violation_Lisr,"Qbits Check LISR");
        IRQUnmask(IRQ_IEBIT_CHECK_IRQ0_CODE+i);
    }

}
#endif

#if 0 //to be refined
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#if 0 //to be moved to TOPSM
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

/*************************************************************************
* FUNCTION
*  MDCIRQ_VPE_SPL_Compare_with_IRQ_Priority
*
* DESCRIPTION
*  return whether the VPE can be interrupted by the IRQ's priority
*
* PARAMETERS
*  VPEID, IRQID
*
* RETURNS
*  True/False
*************************************************************************/

kal_bool MDCIRQ_VPE_SPL_Compare_with_IRQ_Priority(kal_uint32 VPE, kal_uint32 code)
{
    kal_uint32 SPL, IRQ_priority;
    ASSERT(VPE < MDCIRQ_TOTAL_VPE_NUM);
    ASSERT(code < NUM_IRQ_SOURCES);

    IRQ_priority = irq_priority_list[code];

    SPL = MDCIRQ_READ_REG_INDEX(MDCIRQ_VPE_PRLV_CURR_BASE, VPE);
    if(SPL&MDCIRQ_TOTAL_PRI_LEVEL)   // minimal priority level
    {
        SPL = MDCIRQ_READ_REG_INDEX(MDCIRQ_VPE_MIN_PRLV_BASE, VPE);
        if( SPL < IRQ_priority )
            return KAL_FALSE;        //the interrupt can't be accepted
        else
            return KAL_TRUE;         //the interrupt can be accepted
    }
    else                             // interrupt priority level
    {
        if( SPL <= IRQ_priority )
            return KAL_FALSE;        //the interrupt can't be accepted
        else
            return KAL_TRUE;         //the interrupt can be accepted
    }
}


#if defined(__ENABLE_SW_TRIGGER_INTERRUPT__)

/*************************************************************************
* FUNCTION
*  Activate_LISR
*
* DESCRIPTION
*  This function activate SW interrupt lisr
*
* PARAMETERS
*  handle : handler of software trigger interrupt
*
* RETURNS
*  none
*
*************************************************************************/
void MDCIRQ_Activate_LISR(SW_CODE_HANDLE handle)
{
    ASSERT(handle < NUM_IRQ_SOURCES);

    if (handle < IRQ_SW_LISR1_CODE || handle > IRQ_SW_LISR4_CODE)
    {
        kal_hrt_take_itc_lock(KAL_ITC_CORE012_INT, KAL_INFINITE_WAIT);
    }

    SW_INT_Counter[handle]++;
    if(SW_INT_Counter[handle]==1)
    {
        //IRQ_SetSWRegister(SW_Code_Handle2Code[handle]);  /* LTE Remove */
        MDCIRQ_IRQ_SetSWRegister(handle);
        MO_Sync();
    }

    if (handle < IRQ_SW_LISR1_CODE || handle > IRQ_SW_LISR4_CODE)
    {
        kal_hrt_give_itc_lock(KAL_ITC_CORE012_INT);
    }
}

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
// special LISR activation driver, used for idletask only
void MDCIRQ_Activate_LISR_without_ITC(SW_CODE_HANDLE handle)
{
    ASSERT(handle < NUM_IRQ_SOURCES);

    MDCIRQ_IRQ_SetSWRegister(handle);
}
#endif

/*************************************************************************
* FUNCTION
*  MDCIRQ_Activate_LISR_dummy_lisr
*
* DESCRIPTION
*  This function activate SW interrupt lisr
*  This function is for dummy lisr trigger only.
* PARAMETERS
*  handle : handler of software trigger interrupt
*
* RETURNS
*  none
*
*************************************************************************/
#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE
#endif
void MDCIRQ_Activate_LISR_dummy_lisr(kal_uint32 TriggerMask)
{
    kal_uint32 dummyLISRIRQNumber = SW_TRIGGER_CODE38;
    kal_uint32 triggerRegisterValue = 0;
    ASSERT( (TriggerMask > 0) && (TriggerMask < 0x10));
    while( TriggerMask != 0)
    {
        if( TriggerMask & 0x1)
        {
            SW_INT_Counter[dummyLISRIRQNumber]++;
            if(SW_INT_Counter[dummyLISRIRQNumber]==1)
            {
                triggerRegisterValue = triggerRegisterValue | (0x1 << (dummyLISRIRQNumber - SW_TRIGGER_CODE38));
            }
        }
        TriggerMask = TriggerMask >> 1;
        dummyLISRIRQNumber++;
    }
    if( triggerRegisterValue != 0)
    {
        DRV_WriteReg32(MDCIRQ_ISTR_SET191160, triggerRegisterValue << (SW_TRIGGER_CODE38 % 32));
        MO_Sync();
    }
}

/*************************************************************************
* FUNCTION
*  Deactivate_LISR
*
* DESCRIPTION
*  This function deactivate SW interrupt lisr
*
* PARAMETERS
*  handle : handler of software trigger interrupt
*
* RETURNS
*  none
*
*************************************************************************/
void MDCIRQ_Deactivate_LISR(SW_CODE_HANDLE handle)
{
    ASSERT(handle < NUM_IRQ_SOURCES);

    if (handle < IRQ_SW_LISR1_CODE || handle > IRQ_SW_LISR4_CODE)
    {
        kal_hrt_take_itc_lock(KAL_ITC_CORE012_INT, KAL_INFINITE_WAIT);
    }

    SW_INT_Counter[handle]--;
    if(SW_INT_Counter[handle]==0)
    {
        //IRQ_ResetSWRegister(SW_Code_Handle2Code[handle]);  /* LTE Remove */
        MDCIRQ_IRQ_ResetSWRegister(handle);
        MO_Sync();
    }

    if (handle < IRQ_SW_LISR1_CODE || handle > IRQ_SW_LISR4_CODE)
    {
        kal_hrt_give_itc_lock(KAL_ITC_CORE012_INT);
    }
}

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
// special LISR deacivation driver, used for idletask only
void MDCIRQ_Deactivate_LISR_without_ITC(SW_CODE_HANDLE handle)
{
    ASSERT(handle < NUM_IRQ_SOURCES);

    MDCIRQ_IRQ_ResetSWRegister(handle);
}
#endif

/*************************************************************************
* FUNCTION
*  Deactivate_LISR_dummy_lisr
*
* DESCRIPTION
*  This function deactivate SW interrupt lisr
*
* PARAMETERS
*  handle : handler of software trigger interrupt
*
* RETURNS
*  none
*
*************************************************************************/
void MDCIRQ_Deactivate_LISR_dummy_lisr(kal_uint32 TriggerMask)
{
    kal_uint32 dummyLISRIRQNumber = SW_TRIGGER_CODE38;
    kal_uint32 triggerRegisterValue = 0;
    ASSERT( (TriggerMask > 0) && (TriggerMask < 0x10));
    while( TriggerMask != 0)
    {
        if( TriggerMask & 0x1)
        {
            SW_INT_Counter[dummyLISRIRQNumber]--;
            if(SW_INT_Counter[dummyLISRIRQNumber]==0)
            {
                triggerRegisterValue = triggerRegisterValue | 0x1 << (dummyLISRIRQNumber - SW_TRIGGER_CODE38);
            }
        }
        TriggerMask = TriggerMask >> 1;
        dummyLISRIRQNumber++;
    }
    if( triggerRegisterValue != 0)
    {
        DRV_WriteReg32(MDCIRQ_ISTR_CLEAR191160, triggerRegisterValue << (SW_TRIGGER_CODE38 % 32));
        MO_Sync();
    }
}

kal_uint32 MDCIRQ_SW_INT_Count(SW_CODE_HANDLE handle)
{
    ASSERT(handle < NUM_IRQ_SOURCES);
    return SW_INT_Counter[handle];
}


#endif /* end of __ENABLE_SW_TRIGGER_INTERRUPT__ */

kal_bool drv_mdcirq_bbregdump_callback(void){
    /* Backup irq_ack enable status before disable it */
    drv_mdcirq_irq_ack_exception = drv_mdcirq_get_IRQ_ACK_enable();
    /* Disable irq_ack when read irq_id to avoid MDCIRQ register corruption when bbreg dump*/
    drv_mdcirq_IRQ_ACK_enable(KAL_FALSE);
    return KAL_TRUE;
}

/*************************************************************************
* FUNCTION
*  initINTR
*
* DESCRIPTION
*  Interrupt initialization
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void initINTR(void)
{
    kal_uint32 idx;

    drv_mdcirq_reset();

    //MaskValueInit();

#if defined(__ENABLE_SW_TRIGGER_INTERRUPT__)
    /* Initialize SW Interrupt Counter*/
    for(idx=0; idx < NUM_IRQ_SOURCES; idx++)
    {
        SW_INT_Counter[idx]=0;
    }
#endif

#if defined(__MTK_TARGET__)
    /* register bb reg dump */
    cirq_dump.regions = (kal_uint32*)cirq_dump_regions;
    cirq_dump.num = sizeof(cirq_dump_regions) / (sizeof(kal_uint32) * 3);
    cirq_dump.bbreg_dump_callback = drv_mdcirq_bbregdump_callback;
    EX_REGISTER_BBREG_DUMP(&cirq_dump);
#endif /* __MTK_TARGET__ */

    MDCIRQ_IRQ_LISR_Init();

    /* Should be called after LISR init because the following function will register LISRs */
#if defined(__DEADLOCK_DETECTION__)
    drv_mdcirq_Deadlock_Detection_Init();
#elif defined(__MDCIRQ_TIMING_CHECK_EN__)
    drv_mdcirq_Qbit_Violation_Init();
#endif
}


