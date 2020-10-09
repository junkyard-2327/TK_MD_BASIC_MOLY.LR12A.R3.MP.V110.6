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
 *   init.c
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
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*******************************************************************************
 * Include header files
 *******************************************************************************/

//#include <stdio.h>
//#include <string.h>

#include <stdlib.h>
#include <boot_comm.h>

// kal
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "kal_internal_api.h"
#include "kal_trace.h"
#include "reg_base.h"
#include "system_profiler_public.h"
#include "multiboot_config.h"

// init
#include "cp15.h"
#include "config_hw.h"
//#include "init.h"
#include "init_comm.h"

// trace
#include "system_trc.h"             //INT_Trace_Enter, INT_Trace_Exit
#include "init_trc_api.h"           //INT_Trace_Enter, INT_Trace_Exit
#include "bootarm.h"
#include "br_time_stamp.h"          // TS_END
#include "maui_time_stamp_util.h"   // TS_DumpTimeStamps

// system service hw
#include "pll.h"                    // INT_SetPLL
//#include "dsp_loader.h"             // DSP_Load
#include "bus_drv.h"                // Bus_Init
#include "elm.h"                    // ELM_INIT
// system service sw
#include "stack_buff_pool.h"        //stack_resources_init, stack_init_buff_pool_info
#include "ex_item.h"                // ex_memory_dump_init
#include "mpu.h"                    // CPU_SET_STACK_MPU_PROTECT, mpu_dump
#include "ex_mem_manager_public.h"  // EMM_Init
#include "dsp_file_public.h"        // DSP_Init, DSP_OutputVersionInfo

//misc
#include "dcl.h"                    // for peripheral related
#include "wdt_hw_public.h"          //Get_WATCHDOG_BASE, Get_WATCHDOG_RESTART_CMD
//#include "bl_common.h"              // BL_Info_Wrapper_st
#include "drv_cfgctl.h"             //drv_cfgctl_clear_misc, drv_cfgctl_set_misc
#ifdef __HMU_ENABLE__
#include "hmu.h"                    // hif_boot_init
#endif
#if defined(__SMART_PHONE_MODEM__)
#include "ccci.h"
#endif
#ifdef __HIF_CCCI_SUPPORT__
#include "ccci_if.h"
#endif
#include "us_timer.h"
#if !defined(__UBL__) && !defined(__FUE__)
#ifdef __CENTRALIZED_SLEEP_MANAGER__
#include "ostd_public.h"
extern void SleepDrv_Init( void );
extern void RM_Init( void );
#else
extern void startSystemTimer(void);
#endif
#endif
#include "DVFS_drv_public.h"
#include "ptp_public.h"
#include "RM_public.h"

#ifndef __MAUI_BASIC__
extern void MML1_TXSYS_Init(void);
#endif

#include "drv_mdcirq.h"
#include "drv_gdma.h"
#include "mips_ia_pmu_montr.h"
#include "drv_busmon.h"
#include "drv_pcmon.h"
#include "busmpu.h"
#include "drv_mdap_interface.h"
#include "mips_ia_utils.h"
#include "pms.h"
#include "md_boot_check.h"
#include "init_memory_stack.h"      /* for system_set_l4_share_mem_region() */
#include "che_api.h" // for SST_SSF_Init
#include "drv_rstctl.h" // for wdt_enable

#include "cpu_info.h"

#if defined(__NUCLEUS_VERSION_3__)
#include "icc.h"
#endif
/******************************************************
 * Declaration and definition of global data
 ******************************************************/

extern kal_uint32 INC_TRC_NEW_DESIGN;
__attribute__((section ("MCURW_HWRO_DNC_NOINIT"))) kal_uint32  INT_bootup_entry = 0;
__attribute__((section ("MCURW_HWRO_DNC_NOINIT"))) kal_uint32  INT_emm_bootup_addr[SYS_MCU_NUM_VPE];
#if defined(__PROFILE_INIT__)
__attribute__((section ("MCURW_HWRO_DNC_NOINIT"))) kal_uint32  INT_profile_init_addr[SYS_MCU_NUM_VPE];
__attribute__((section ("MCURW_HWRO_DNC_NOINIT"))) BOOTUP_TRC_STRUCT  INT_profile_record[SYS_MCU_NUM_VPE];
#endif

#if 0
/* under construction !*/
#endif

volatile DEFINE_NC_SHARED_VAR_ASSIGN(kal_uint16, _boot_mode,0xFFFF);
volatile DEFINE_NC_SHARED_VAR_ASSIGN(kal_uint32, g_l_sw_misc_l,0xFFFF);
volatile DEFINE_NC_SHARED_VAR_ASSIGN(kal_bool, _IsBootForUSBAT,KAL_FALSE);

// <TODO>: fix this LR11 address
static const kal_uint32 RAND_GEN_START_ADDR = 0x70002000;

#define INT_CLEAR_RETN_FLAG(_flag)       drv_cfgctl_clear_misc()
#define INT_CLEAR_SET_FLAG(_flag)        drv_cfgctl_set_misc(_flag)

/******************************************************
 * Declaration of function prototype
 ******************************************************/
static void INT_SetBootMode(void);
static void HWDInitialization(void);
static void systemInitialization(void);
static void systemInitializeResource(void);


/******************************************************
 * Declaration of import data and function prototype
 ******************************************************/
/* Application_Initialize */
extern boot_mode_type system_boot_mode;

/* Application_Initialize */
#ifndef __BL_ENABLE__
void boot_init_clock();
#endif
extern kal_uint32 DummyReference();
extern void Drv_Init_Phase2(void);
extern void ECT_Init(void);
extern int  mainp(void);

/* HWDInitialization */
extern void L1SM_Init(void);
extern void UL1SM_Init(void);
extern void EL1SM_Init(void);
extern void NFI_Reset(void);
extern void Drv_Init_Phase1(void);

/* systemInitialization */
#if !(defined(__NONE_FLASH_EXIST__))
#if !(defined(_NAND_FLASH_BOOTING_) || defined(__EMMC_BOOTING__)) || defined(__NANDFDM_MULTI_INSTANCE__)
extern void Initialize_FDD_tables(void);
#endif
#endif
extern void kal_initialize_mem(void);
extern void kal_hrt_init(void);
extern void kal_profile_init(void);

/* systemInitializeResource */
extern kal_uint32 rand_num_seed;

/* INT_VersionNumbers */
extern kal_char *release_dsp_fw(void);
extern kal_char *release_dsp_ptch(void);
extern kal_char *release_verno(void);
extern kal_char *release_branch(void);
extern kal_char *release_hw_ver(void);
extern kal_char* release_flavor(void);

/* Misc. */
extern void SST_InvokEngine(kal_int32, kal_int32);

// for Security
#ifdef __SECURE_DATA_STORAGE__
extern kal_int32 SDS_Init(void);
#endif
#if defined(__BOOT_CERT__)
extern kal_uint32 srd_dl_ctrl_check(void);
extern kal_uint32 srd_dl_ctrl_pre_check(void);
#endif

// for tg_hisr
#if defined(__LP_SCHEDULE_ENABLE__)
extern void tg_hisr_init();
#endif /* __LP_SCHEDULE_ENABLE__ */

/* Generate CORE#_VPE#_TC#_SYS_STACK_PTR  and extern SYS_Stack_Pool_CORE#_VPE#_TC# */
#define STACK_PTR_NAME(C,V,T) CORE ## C ##_VPE ## V ##_TC ## T ##_SYS_STACK_PTR
#define SYS_STACK_INSTANCE(CORE,VPE,TC,SIZE,SECTION,TYPE)   \
    extern kal_uint32 SYS_STACK_NAME(CORE,VPE,TC)[];        \
        kal_uint32 STACK_PTR_NAME(CORE,VPE,TC);

#include "sys_stack_config.h"

#define COMPILE_ASSERT_INIT(condition)  ((void)sizeof(char[1 - 2*!!!(condition)]))

#include "ex_mem_manager.h"
#include "sst_defs.h"
void INT_Compile_Check(void)
{

    COMPILE_ASSERT_INIT(BOOTUP_TRC_OFFSET == EMM_EXRECORD_LEN);
    COMPILE_ASSERT_INIT(MD_USCNTI_VAL_ADDR == MD_USCNTI_VAL);
#if defined(__MTK_TARGET__)
    COMPILE_ASSERT_INIT(g_EMM_BOOTTRC_MAGIC_ADDR == BOOTTRC_CCIF0_NEW_MAGIC_ADDR);
    COMPILE_ASSERT_INIT(g_EMM_BOOTTRC_VPE0_ADDR == BOOTTRC_CCIF0_NEW_VPE0_ADDR);
    COMPILE_ASSERT_INIT(g_EMM_BOOTTRC_VPE1_ADDR == BOOTTRC_CCIF0_NEW_VPE1_ADDR);
    COMPILE_ASSERT_INIT(g_EMM_BOOTTRC_VPE2_ADDR == BOOTTRC_CCIF0_NEW_VPE2_ADDR);
    COMPILE_ASSERT_INIT(g_EMM_BOOTTRC_VPE3_ADDR == BOOTTRC_CCIF0_NEW_VPE3_ADDR);
    COMPILE_ASSERT_INIT(36 == (BOOTTRC_CCIF0_OLD_MAGIC_ADDR - BOOTTRC_CCIF0_NEW_MAGIC_ADDR));
#endif
}

/*************************************************************************
* FUNCTION
*  INT_SysStack_Disptach
*
* DESCRIPTION
*   This function would set all system stack ptrs
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
void INT_SysStack_Disptach(void)
{
#define SYS_STACK_INSTANCE(CORE,VPE,TC,SIZE,SECTION,TYPE)       \
        STACK_PTR_NAME(CORE,VPE,TC) =                               \
            (((unsigned int)SYS_STACK_NAME(CORE,VPE,TC)) + SIZE - 4);

#include "sys_stack_config.h"

    return;
}

/*************************************************************************
* FUNCTION
*  INT_SetSysStack_GuardPattern
*
* DESCRIPTION
*   This function would set STACKEND to system stacks of a core
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
void INT_SetSysStack_GuardPattern(kal_uint32 core)
{
    volatile kal_uint8 *base;
#define SYS_STACK_INSTANCE(CORE,VPE,TC,SIZE,SECTION,TYPE)   \
        if (CORE == core) {                                     \
            base = (kal_uint8 *)SYS_STACK_NAME(CORE,VPE,TC);   \
            *(base + 0) = 'S';                                  \
            *(base + 1) = 'T';                                  \
            *(base + 2) = 'A';                                  \
            *(base + 3) = 'C';                                  \
            *(base + 4) = 'K';                                  \
            *(base + 5) = 'E';                                  \
            *(base + 6) = 'N';                                  \
            *(base + 7) = 'D';                                  \
        }

#include "sys_stack_config.h"

    return;
}

void INT_GetStackInfo(kal_uint32 * const base, kal_uint32 * const end)
{
    const kal_uint32 vpe  = kal_get_current_vpe_id() & 1;
    const kal_uint32 tc   = kal_get_current_tc_id();
    const kal_uint32 core = kal_get_current_core_id();

    *base = *end = 0xFFFFFFFF;

#define SYS_STACK_INSTANCE(CORE,VPE,TC,SIZE,SECTION,TYPE)   \
        if (CORE == core && VPE == vpe && TC == tc) {           \
            *base = (unsigned int)SYS_STACK_NAME(CORE,VPE,TC);  \
            *end  = STACK_PTR_NAME(CORE,VPE,TC);                \
            return;                                             \
        }

#include "sys_stack_config.h"

    return;
}

void INT_GetSysStackInfo(kal_uint32 * const base, kal_uint32 * const end,
                         kal_uint32 core, kal_uint32 vpe, kal_uint32 tc)
{
    *base = *end = 0xFFFFFFFF;
    vpe &= 1;
#define SYS_STACK_INSTANCE(CORE,VPE,TC,SIZE,SECTION,TYPE)   \
        if (CORE == core && VPE == vpe && TC == tc) {           \
            *base = (unsigned int)SYS_STACK_NAME(CORE,VPE,TC);  \
            *end  = STACK_PTR_NAME(CORE,VPE,TC);                \
            return;                                             \
        }

#include "sys_stack_config.h"

    return;
}
/******************************************************
 * Definition of functions
 ******************************************************/

/*__FUE__ compile option is used for FOTA firmware update engine */
/*add this  compile option  to avoid compiling other function*/
#ifndef __FUE__
/*
 * NoteXXX:
 *    Please DO NOT place your code in the execution region EMIINITCODE.
 *    Code in this region is used for EMI/PLL initialization, and will be
 *    OVERWRITTEN after INT_InitRegions.
 */
/* [BB porting] Make sure the flow to set EMI&SFI and the placement of the code */
/*************************************************************************
* FUNCTION
*  INT_SetEMIPLL
*
* DESCRIPTION
*  This function dedicates for PLL setting.
*
* CALLS
*  Non
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
__attribute__ ((section ("EMIINITCODE"))) void INT_SetEMIPLL(void)
{
    custom_setEMI();
    //INT_SetPLL(PLL_MODE_MAUI);
}

/* A test procedure for CIRQ driver and UART */
//#define BASICLOAD_BRINGUP_TEST
#ifdef BASICLOAD_BRINGUP_TEST
extern void slt_dbg_print(char* fmt,...);
void INT_BasicLoad_SimepleTest_GPTCallback(void *para)
{
    slt_dbg_print("uart test\r\n");
    return;
}

kal_int32 INT_BasicLoad_SimpleTest(kal_uint32 dummy)
{
    kal_uint32          cbms_para = 0;
    DCL_HANDLE          handle_cbms;
    SGPT_CTRL_START_T   sgpt_ctrls;

    handle_cbms = DclSGPT_Open(DCL_GPT_CB, 0);
    sgpt_ctrls.u2Tick = (1);
    sgpt_ctrls.pfCallback = INT_BasicLoad_SimepleTest_GPTCallback;
    sgpt_ctrls.vPara = &cbms_para;

    DclSGPT_Control(handle_cbms, SGPT_CMD_START, (DCL_CTRL_DATA_T*)&sgpt_ctrls);
    return 0;
}
#endif

void init_otherCores(void)
{
    MD_TOPSM_Init_Other_Cores();
    return;
}


/*************************************************************************
* FUNCTION
*  Application_Initialize
*
* DESCRIPTION
*   This function implements project protocol stack, hardware depedent
* initialization
*
* CALLS
*  Initialize()
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
void Application_Initialize(NU_MEMORY_POOL *system_memory, NU_MEMORY_POOL *uncached_memory)
{

#if !defined(_SIMULATION)
#if !defined(__BL_ENABLE__)
    //boot_init_clock();
#endif
#endif


#if 0
/* under construction !*/
/* under construction !*/
#endif


    /* set-up locale for trace */
    INT_Trace_Enter(INIT_CLIB1, 0);
    INT_TRC_C(LABEL_CLIB_BASE_INIT);
    clib_basic_init();
    INT_Trace_Exit(INIT_CLIB1, 0);


#if !defined(__ESL_ENABLE__)
    /* Toggle DummyReference for Boot Loader */
    //INT_TRC_C(LABEL_DUMMY_REF);
    //DummyReference();
#endif

#ifdef __HIF_CCCI_SUPPORT__
    /* Call HIF initialize and do phase-1 handshake with AP */
    //INT_Trace_Enter(INIT_CCCIHS1, 0);
    INT_TRC_C(LABEL_CCCI_HW_INIT);
    lte_ccci_hw_init();
    INT_TRC_C(LABEL_CCCI_HS1);
    lte_ccci_init_handshake_phase1();
    //INT_Trace_Exit(INIT_CCCIHS1, 0);
#endif

    /* Enable EMM Feature */
    INT_TRC_C(LABEL_EMM_INIT);
    EMM_Init();

    /* Set INT_BootMode config done flag to untrap L1Core */
    INT_Trace_Enter(INIT_BOOTMODE, 1);
    INT_SetBootMode();
    INT_Trace_Exit(INIT_BOOTMODE, 1);

    INT_Trace_Enter(INIT_BOOTMODE_CHECK, 1);
    check_md_boot_mode();
    INT_Trace_Exit(INIT_BOOTMODE_CHECK, 1);

    /* Initialize system specific module */
    INT_Trace_Enter(INIT_SYSTEMINIT, 1);
    systemInitialization();
    INT_Trace_Exit(INIT_SYSTEMINIT, 1);


    /* Initialize HW module */
    INT_Trace_Enter(INIT_HWDINIT, 0);
    HWDInitialization();
    INT_Trace_Exit(INIT_HWDINIT, 0);


    /* Disable Watch dog */
    wdt_enable(KAL_FALSE);


#if !defined(_SIMULATION) && !defined(__ESL_MASE__)
    /* Note: Not all HW modules are avaiable in the Co-SIM envrionment */
    /* Note: Need to bypass DRV INIT in Co-SIM (via _SIMULATION) */
    INT_Trace_Enter(INIT_DRV2, 0);
    Drv_Init_Phase2();
    INT_Trace_Exit(INIT_DRV2, 0);
#endif


    /* Resource initialization */
    INT_Trace_Enter(INIT_RESINIT, 1);
    systemInitializeResource();
    INT_Trace_Exit(INIT_RESINIT, 1);


    /* Initialize heap for c library usage */
    INT_Trace_Enter(INIT_CLIB2, 1);
    clib_init();
    INT_Trace_Exit(INIT_CLIB2, 1);


    /* Initialize specific sss features */
    INT_Trace_Enter(INIT_SSF, 1);
    SST_SSF_Init();
    INT_Trace_Exit(INIT_SSF, 1);


#if !defined(_SIMULATION)
    /* Initialize ECT in the begging of Application_Initialize */
    INT_Trace_Enter(INIT_ECT, 1);
    ECT_Init();
    INT_Trace_Exit(INIT_ECT, 1);
#endif


    INT_Trace_Enter(INIT_DSPINIT, 1);
    DSP_Init();
    INT_Trace_Exit(INIT_DSPINIT, 1);

#if defined(__LP_SCHEDULE_ENABLE__)
    /* Need to be called after spinlock init and gpt init(drv_init_phase1) */
    INT_Trace_Enter(INIT_TG_HISR_INIT, 1);
    tg_hisr_init();
    INT_Trace_Exit(INIT_TG_HISR_INIT, 1);
#endif /* __LP_SCHEDULE_ENABLE__ */
    
    /* set mpu setting for core 0/1/.... 
    Assume core0 will call it firstly, and core1/2... may run concurrently */
    INT_Trace_Enter(INIT_SET_L4_SHM, 1);
    system_set_l4_share_mem_region();
    INT_Trace_Enter(INIT_SET_L4_SHM, 1);

    /* MAUI protocol stack entry routine */
    INT_Trace_Enter(INIT_MAINP, 1);
    mainp();
    INT_Trace_Exit(INIT_MAINP, 1);

#if 0
/* under construction !*/
#endif

    /* enable SWLA by default for easy debug */
#if !defined(_SIMULATION) || defined(__ESL_MASE__)
    INT_Trace_Enter(INIT_SLA, 1);
    SysProfiler_Init();
#if defined(DEBUG_SWLA)
    SysProfiler_Start(); // enable SWLA by default for easy debug
#endif
    INT_Trace_Exit(INIT_SLA, 1);
#endif


#ifdef __MULTI_BOOT__
    if ( system_boot_mode!=FACTORY_BOOT )
#endif
    {
        /* Enable watch dog */
        wdt_enable(KAL_TRUE);
    }


#ifdef __HMU_ENABLE__
    INT_Trace_Enter(INIT_HIFBOOT, 1);
    hif_boot_init();
    INT_Trace_Exit(INIT_HIFBOOT, 1);
#endif


#ifdef __HIF_CCCI_SUPPORT__
    /* Do phase-2 handshake with AP */
    INT_Trace_Enter(INIT_CCCIHS2, 1);
    lte_ccci_init_handshake_phase2(SHARED_VAR(_boot_mode));
    lte_ccci_hw_init_phase2();
    INT_Trace_Exit(INIT_CCCIHS2, 1);
    INT_Trace_Enter(INIT_CCCIHS2_DONE, 1);
    INT_Trace_Exit(INIT_CCCIHS2_DONE, 1);
#endif

    INT_backupBootLogs();


#ifdef BASICLOAD_BRINGUP_TEST
    INT_BasicLoad_SimpleTest(0);
#endif

}


/*************************************************************************
* FUNCTION
*  INT_SetBootMode
*
* DESCRIPTION
*   This function sets global variables related to boot mode
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*    _boot_mode
*    g_l_sw_misc_l
*    _IsBootForUSBAT
*
*************************************************************************/
static void INT_SetBootMode(void)
{
    /* for SiP TDD SLT, force META bootup */
#if defined(__TDDSYS_SLT_FACTORY_BOOT__) || defined(__LTE_PHY_TEST__)
    INT_SetMetaMode();
#endif

    /* Multi-Boot */
#ifdef __MULTI_BOOT__

    SHARED_VAR(_boot_mode) = 0x1 & *(volatile kal_uint16 *)BOOT_CONFIG_ADDR;

    SHARED_VAR(g_l_sw_misc_l) =  *(volatile kal_uint16 *)BOOT_CONFIG_ADDR;

    if (0x4 & *(volatile kal_uint16 *)BOOT_CONFIG_ADDR)
    {
        SHARED_VAR(_IsBootForUSBAT) = KAL_TRUE;
    }

#if !defined(L1_NOT_PRESENT) && !defined(ATEST_DRV_ENVIRON)
    /* Set mode for L1 usage */
    //pcore doesn't need L1D_SetInitMode.
    //L1D_SetInitMode(_boot_mode);
#endif /* !L1_NOT_PRESENT && !ATEST_DRV_ENVIRON */

#endif /* __MULTI_BOOT__ */

    // Seamless META feature: always normal boot
    SHARED_VAR(_boot_mode) = 0x0;
}

/*************************************************************************
* FUNCTION
*  systemInitialization
*
* DESCRIPTION
*   This function implements the system specific initialization, including
*   interrupt central controller, FDD and KAL.
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
static void systemInitialization(void)
{

    /* initialize CIRQ interrupt controller */
    initINTR();

    /* initialize VPE interrupt setting */
    initVPEIRQ();

#if !(defined(__NONE_FLASH_EXIST__))
#if !(defined(_NAND_FLASH_BOOTING_) || defined(__EMMC_BOOTING__)) || defined(__NANDFDM_MULTI_INSTANCE__)
    Initialize_FDD_tables();
#endif /* !(_NAND_FLASH_BOOTING_ || __EMMC_BOOTING__) || __NANDFDM_MULTI_INSTANCE__ */
#endif /* !(__NONE_FLASH_EXIST__) */

    /* Register display handler */
    kal_register_print_string_function((kal_print_string_func_ptr)stack_print);

    kal_initialize_mem();

#if defined(__NUCLEUS_VERSION_3__)
    /* Register OS IPI, DUMMY LISR interrupt */
    ICC_Initialize();
#endif

    /* Initialize HRT workqueue */
    kal_hrt_init();

    /* Initializing the Buffer Pool Information */
    stack_init_buff_pool_info();

    /* Create buffer pools */
    stack_resources_init();

    /* Initialize KAL resources */
    kal_initialize();

    /* Initialize KAL CPU usage profiling */
    kal_profile_init();

    /* Initialize memory dump switch */
    ex_memory_dump_init();
}


/*************************************************************************
* FUNCTION
*  HWDInitialization
*
* DESCRIPTION
*   This function implements hardware dependent initialization and
*   management
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
static void HWDInitialization(void)
{
#if !defined(_SIMULATION) && !defined(__ESL_MASE__)
    //INT_SetChipReg();

    INT_Trace_Enter(INIT_PDAMON, 1);
    drv_pdamon_init();
    INT_Trace_Exit(INIT_PDAMON, 1);

    INT_Trace_Enter(INIT_INIT_MISC, 1);
    INT_Init_Misc(); 
    INT_Trace_Exit(INIT_INIT_MISC, 1);

    INT_Trace_Enter(INIT_BUS, 1);
    BusDrv_Init();
    INT_Trace_Exit(INIT_BUS, 1);

    INT_Trace_Enter(INIT_ELM, 1);
    ELM_INIT();
    INT_Trace_Exit(INIT_ELM, 1);

    INT_Trace_Enter(INIT_USC, 1);
    USC_Start();
    INT_Trace_Exit(INIT_USC, 1);
    
    INT_Trace_Enter(INIT_PMS, 1);
    PMS_Init();
    INT_Trace_Exit(INIT_PMS, 1);

#ifdef __CENTRALIZED_SLEEP_MANAGER__
    INT_Trace_Enter(INIT_RM, 1);
    RM_Init(); // before OSTD_Init() and before 2G and 3G SMM's init() function
    INT_Trace_Exit(INIT_RM, 1);

    INT_Trace_Enter(INIT_OSTD, 1);
    OSTD_Init();
    INT_Trace_Exit(INIT_OSTD, 1);
#endif /*__CENTRALIZED_SLEEP_MANAGER__*/

    INT_Trace_Enter(INIT_GDMA, 1);
    DRV_GDMA_INITIALIZATION();
    INT_Trace_Exit(INIT_GDMA, 1);

#ifdef MTK_SLEEP_ENABLE
#ifndef ATEST_DRV_ENABLE
    /* Added by Anthony Chin 03/18/2002. For sleep mode management. */
#ifdef __GSM_RAT__

#if !defined(__FPGA__)
    INT_Trace_Enter(INIT_L1SM, 1);
    L1SM_Init();
    INT_Trace_Exit(INIT_L1SM, 1);
#endif

#endif /* __GSM_RAT__ */
#ifdef __MTK_UL1_FDD__
    INT_Trace_Enter(INIT_UL1SM, 1);
    UL1SM_Init();
    INT_Trace_Exit(INIT_UL1SM, 1);
#endif /* __MTK_UL1_FDD__ */
#if defined(__LTE_RAT__) && defined(__EL1_ENABLE__)
    INT_Trace_Enter(INIT_EL1SM, 1);

#if defined(__FPGA__) && !defined(__PALLADIUM__)
    if( (INT_FPGA_PURPOSE()== FPGA_U4G) || (INT_FPGA_PURPOSE()== FPGA_U4G_LTEL2) )
    {

        EL1SM_Init();
    }
#else
    EL1SM_Init();
#endif

    INT_Trace_Exit(INIT_EL1SM, 1);
#endif /* __LTE_RAT__ && __EL1_ENABLE__ */
#endif /* ATEST_DRV_ENABLE */
#endif /* MTK_SLEEP_ENABLE */

#ifdef __CENTRALIZED_SLEEP_MANAGER__
    INT_Trace_Enter(INIT_OSTD, 1);
#ifdef __HAPS_FPGA_CLK_ADJUST__
    OSTD_SetFrmDur(KAL_MICROSECS_PER_TICK_REAL);
#else
    OSTD_SetFrmDur(KAL_MICROSECS_PER_TICK);
#endif
    OSTD_EnOST(KAL_TRUE);
    INT_Trace_Exit(INIT_OSTD, 1);
#endif /*__CENTRALIZED_SLEEP_MANAGER__*/

    INT_Trace_Enter(INIT_PTP, 1);
    ptp_init();
    INT_Trace_Exit(INIT_PTP, 1);
#if 0
#if defined(IDMA_DOWNLOAD) && !defined(ATEST_DRV_ENVIRON)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* IDMA_DOWNLOAD && !ATEST_DRV_ENVIRON */
#endif

#ifdef NAND_SUPPORT
    INT_Trace_Enter(INIT_NFIRESET, 1);
    NFI_Reset();
    INT_Trace_Exit(INIT_NFIRESET, 1);
#endif /* NAND_SUPPORT */

    INT_Trace_Enter(INIT_DRV1, 1);
    Drv_Init_Phase1();
    INT_Trace_Exit(INIT_DRV1, 1);

#if !(defined(__ESL_ENABLE__) || defined(__SPV_UFPS_LOAD__))
    INT_Trace_Enter(INIT_DVFS, 1);
    DVFS_init();
    INT_Trace_Exit(INIT_DVFS, 1);
#endif

   #ifndef __MAUI_BASIC__
   /* MML1 H/W TXSYS initial  */
   INT_Trace_Enter(INIT_MML1_TXSYS, 1);
   MML1_TXSYS_Init();
   INT_Trace_Exit(INIT_MML1_TXSYS, 1);
   #endif

#ifndef __CENTRALIZED_SLEEP_MANAGER__
    startSystemTimer();
#endif

#if defined(__ZIMAGE_SUPPORT__)
    ZImageDecompress();
#endif /* __ZIMAGE_SUPPORT__ */

#if defined(__DCM_WITH_COMPRESSION__) || defined(__DYNAMIC_CODE_MANAGER__)
    DCMGR_Init();
#endif

    INT_Trace_Enter(INIT_IA_MISC, 1);
    mips_ia_misc_init();
    INT_Trace_Exit(INIT_IA_MISC, 1);

    INT_Trace_Enter(INIT_RMPU_MD_INIT, 1);
    rmpu_md_init();
    INT_Trace_Exit(INIT_RMPU_MD_INIT, 1);

    INT_Trace_Enter(INIT_BUSMON, 1);
    busmon_init();
    INT_Trace_Exit(INIT_BUSMON, 1);

    INT_Trace_Enter(INIT_AMIF, 1);
    Drv_MDAPInterface_Init();
    INT_Trace_Exit(INIT_AMIF, 1);

#else

#endif
}


/*************************************************************************
* FUNCTION
*   INT_Get_PowerOn_Type
*
* DESCRIPTION
*   This function used to return the power on reason
*
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
PW_CTRL_POWER_ON_REASON INT_Get_PowerOn_Type(void)
{
    PW_CTRL_GET_POWERON_REASON CtrlVal;
    DCL_HANDLE handle;


    handle=DclPW_Open(DCL_PW, FLAGS_NONE);
    DclPW_Control(handle,PW_CMD_GET_POWERON_REASON,(DCL_CTRL_DATA_T *)&CtrlVal);
    DclPW_Close(handle);

    return CtrlVal.powerOnReason;
}


/*************************************************************************
* FUNCTION
*   systemInitializeResource
*
* DESCRIPTION
*   This function aims resource initialization, including audio, image,
*   font etc.
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
void systemInitializeResource(void)
{
#if defined(__MTK_TARGET__) && defined (__HIF_CCCI_SUPPORT__)
    kal_uint32 rand_seed_num_from_ap;
    //If AP exist, MD will get random seed from AP through CCCI and then override the rand_num_seed
    if (CCCI_MISC_INFO_SUPPORT != ccci_misc_data_feature_support(CCMSG_ID_MISCINFO_RANDOM_SEED_NUM, 4, &rand_seed_num_from_ap))
    {
        INT_Trace_Enter(INIT_GETRANDOMSEED_INTRAM,0);
    }
    else
    {
        rand_num_seed = rand_seed_num_from_ap;
        INT_Trace_Enter(INIT_GETRANDOMSEED_AP,0);
    }
#else
    INT_Trace_Enter(INIT_GETRANDOMSEED_INTRAM,0);
#endif
    srand(rand_num_seed);
}


/*************************************************************************
* FUNCTION
*  INT_Config
*
* DESCRIPTION
*   This function implements adjusting Memory Block 0 (EMI_CON0) Wait
*  State's setting
*
* CALLS
*  INT_Decrypt, INT_SetPLL, INT_SetChipReg
*
* PARAMETERS
*
* RETURNS
*  the seed value for random number
*
* GLOBALS AFFECTED
*
*************************************************************************/
void INT_Config(void)
{
#if !defined(_SIMULATION)

#if 0
#if defined(__MULTI_BOOT__) && !defined(L1D_TEST_COSIM)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(MCU_26M)
/* under construction !*/
/* under construction !*/
/* under construction !*/
#elif defined(MCU_52M)
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#endif   /* __MULTI_BOOT__ & !L1D_TEST_COSIM */
#endif
    INT_SetEMIPLL();

#endif
}


/*************************************************************************
* FUNCTION
*  INT_BootMode
*
* DESCRIPTION
*   This function implements to return boot mode. Remember the routine muse
* be called after Application_Initialize.
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint16 INT_BootMode(void)
{
    /* Seamless META feature:
        a. Always return normal boot
        b. Assert when being used after scheduler */
    if (KAL_FALSE == kal_query_systemInit())
    {
        ASSERT(0);
    }
    return (kal_uint16)MTK_NORMAL_MODE;
}


/*************************************************************************
* FUNCTION
*  INT_SetMetaMode
*
* DESCRIPTION
*   This function implements to set hw register to enable meta mode.
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
void INT_SetMetaMode(void)
{
    *(volatile kal_uint16 *)BOOT_CONFIG_ADDR |= 0x0001;
}


/*************************************************************************
* FUNCTION
*  INT_InvokeSSTEngine
*
*************************************************************************/
#define _SST_FUNCTION_ENABLE_
void INT_InvokeSSTEngine(kal_int32 err_code, kal_int32 os_err_code)
{
#ifdef _SST_FUNCTION_ENABLE_
    /* _SST_FUNCTION_ENABLE_ should be locally defined such that
     * custom release will remove these code
     */
    SST_InvokEngine(err_code, os_err_code);
#endif
    return;
}


/*************************************************************************
* FUNCTION
*  release_bb_chip
*
* DESCRIPTION
*   This function returns the version number of the baseband chip
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_char* release_bb_chip(void)
{
    static kal_char str_return[]="MTxxxxx";

#if defined(FPGA)
    strcpy(str_return, "FPGA");
#elif defined(MT6763)
    strcpy(str_return, "MT6763");
#elif defined(MT6739)
    strcpy(str_return, "MT6739");
#elif defined(MT6771)
    strcpy(str_return, "MT6771");
#elif defined(MT6765)
    strcpy(str_return, "MT6765");
#elif defined(MT6761)
    strcpy(str_return, "MT6761");
#elif defined(MT6768)
    strcpy(str_return, "MT6768");
#else
#endif

    return str_return;
}


/*************************************************************************
* FUNCTION
*  INT_VersionNumbers
*
* DESCRIPTION
*   This function returns the version number of the followings
*   1. Chip version
*   2. DSP version
*   3. DSP patch version
*   4. MCU software version
*   5. Baseband board version
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
void INT_VersionNumbers(version_struct * ptr_version)
{
    ptr_version->bb_chip = release_bb_chip();
#if !defined(__DSP_FCORE4__)
    ptr_version->dsp_fw = release_dsp_fw();
    ptr_version->dsp_ptch = release_dsp_ptch();
#else
    // Note: use empty string temporarily, need to discuss how we should fill these fields in FCore case
    ptr_version->dsp_fw = " ";
    ptr_version->dsp_ptch = " ";
#endif //!__DSP_FCORE4__
    ptr_version->mcu_sw = release_verno();
    ptr_version->mcu_sw_branch = release_branch();
    ptr_version->bb_board = release_hw_ver();
    ptr_version->mcu_sw_flavor = release_flavor();
    return;
}


/*************************************************************************
* FUNCTION
*  INT_LteDspVersionNumbers
*
* DESCRIPTION
*   This function returns the version number of LTE DSP version
*
* CALLS
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_bool INT_LteDspVersionNumbers(lte_dsp_version_struct * ptr_version)
{
#if defined(__LTE_RAT__)
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    {
        ptr_version->dsp_fw = " ";
        ptr_version->dsp_btime = " ";
        return KAL_FALSE;
    }

#else
    ptr_version->dsp_fw = " ";
    ptr_version->dsp_btime = " ";

    return KAL_FALSE;
#endif
}


#if 1
/*************************************************************************
* FUNCTION
*  INT_SetCmdToSys
*
* DESCRIPTION
*  This function provide API for user to set necessary command to system
*
* PARAMETERS
*  none
*
* RETURNS
*  random seed
*
*************************************************************************/
void INT_SetCmdToSys(INIT_SYSCMD_CODE cmd_val)
{
#if !defined(__SMART_PHONE_MODEM__) && !defined(__MODEM_ONLY__) /* 2012/07/13: Currently, only MT6280 is defined with __SMART_PHONE_MODEM__ */

    // RETN_REG[2]: 1: Enter USBDL
    // RETN_REG[1]: 1: BL download, 0: BROM download

    /* Secure mode or BL support USB DL  */
    // Normal mode: enter bootloader download after reboot
    // Rescue mode: enter BROM download after reboot

    /* Others */
    // Enter BROM download after reboot under either mode

    INT_CLEAR_RETN_FLAG(0x06);   // 3'b110

    switch (cmd_val)
    {
#if defined(__MTK_SECURE_PLATFORM__) || defined(__USB_DOWNLOAD__)
    case SYS_CMD_SET_BL_DL:
        INT_CLEAR_SET_FLAG(0x06);   // 3'b110
        break;

    case SYS_CMD_SET_BROM_DL:
        INT_CLEAR_SET_FLAG(0x04);   // 3'b100
        break;
#else /* __MTK_SECURE_PLATFORM__ || __USB_DOWNLOAD__ */
    /* if BL does not support USB DL, enter BROM download after reboot under either mode */
    case SYS_CMD_SET_BROM_DL:
    case SYS_CMD_SET_BL_DL:   /* this is actually BROM download */
        INT_CLEAR_SET_FLAG(0x04);   // 3'b100
        break;
#endif /* __MTK_SECURE_PLATFORM__ || __USB_DOWNLOAD__ */

    // do not enter download mode
    case SYS_CMD_CLR_DL_FLAG:
        break;

    default:
        ASSERT(0);
        break;
    }

#endif /* __SMART_PHONE_MODEM__ */

}


/*************************************************************************
* FUNCTION
*  INT_GetSysStaByCmd
*
* DESCRIPTION
*  This function provided for user to query the status of system
*
* PARAMETERS
*  none
*
* RETURNS
*  random seed
*
*************************************************************************/
kal_uint32 INT_GetSysStaByCmd(INIT_SYSCMD_CODE cmd_val, void *data_p)
{
#if !defined(__SMART_PHONE_MODEM__)

    switch (cmd_val)
    {
    case CHK_USB_META_WO_BAT:
        if (SHARED_VAR(g_l_sw_misc_l) & (0x1 << 3))
        {
            return KAL_TRUE;
        }
        else
        {
            return KAL_FALSE;
        }

    case CHK_FAST_META:

#if !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__))

#else
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif
        {
            return KAL_FALSE;
        }

    case SYS_CMD_BL_LOGO_DISPLAYED:

#if defined(__FAST_LOGO__)
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif /* __FAST_LOGO__ */
        {
            return KAL_FALSE;
        }

    case SYS_CMD_GET_PWN_STA:


#if !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__))

        return KAL_FALSE;

#else

#if 0
/* under construction !*/
#endif
#endif

    case SYS_CMD_GET_EMI_PARAM:
#if !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__))

        return KAL_FALSE;

#else

#if 0
/* under construction !*/
#endif
        return KAL_TRUE;
#endif

        break;

    case SYS_CMD_BL_BROM_CMD_MODE_DISABLED:
#if defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__)
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif
        {
            return KAL_FALSE;
        }
    default:
        ASSERT(0);
        break;
    }


#endif /* __SMART_PHONE_MODEM__ */

    return KAL_FALSE;
}
#endif

/*************************************************************************
* FUNCTION
*  INT_GetMetaModeSrc
*
* DESCRIPTION
*  Get Random Seed
*
* PARAMETERS
*  none
*
* RETURNS
*  random seed
*
*************************************************************************/
MODE_ENTRY_SRC INT_GetMetaModeSrc(void)
{
    MODE_ENTRY_SRC state = E_BROM;


#if defined(__TOOL_ACCESS_CTRL__)

#if !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__))

#else /* !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__)) */
#if 0
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
#endif /* !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__)) */
#endif /* __TOOL_ACCESS_CTRL__ */
    return state;



}


/*************************************************************************
* FUNCTION
*  INT_GetRandomSeed
*
* DESCRIPTION
*  Get Random Seed -- maybed passed from bootloader or use memory region
*  to create
*
* PARAMETERS
*  none
*
* RETURNS
*  random seed
*
*************************************************************************/
kal_int32 INT_GetRandomSeed(void)
{
#if defined(__SSDVT_TEST__)
    return 0;
#else /* __SSDVT_TEST__ */

    kal_uint32 seed;

    //#if !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__))
    //kal_uint32 i;
    //#endif

#ifdef __TIME_STAMP__

#if 0
#if !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__))
/* under construction !*/
#endif
#endif

    TS_Init(TRUE);

    TS_BEGIN(TSID_INIT_TOTAL);
    TS_BEGIN(TSID_INIT_READY_TO_DISPLAY);
    TS_BEGIN(TSID_INIT_ASM);

#endif

#if defined(_SIMULATION)

    /* no need to generate a real random number seed in co-sim */

    seed = 0;

#else   /* _SIMULATION */

#if !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__))
    /* generate a random number via reading internal SRAM or 32K-clock calibration */
    kal_uint32 i;
    for (seed = 0, i = 0; i < (1024 / 4); i++)
    {
        /* XOR memory data */
        seed = seed ^ *((kal_uint32 *)RAND_GEN_START_ADDR + i);
    }


#else /* !(__BL_ENABLE__ || _NAND_FLASH_BOOTING_ || __NOR_FLASH_BOOTING__) */

#if defined(MT6290)
    //Read random seed from random number generator
    seed = DRV_Reg32(REG_RNDR);
#else
    ASSERT(((BL_Info_Wrapper_st*)(BL_INFO_ADDR))->m_bl_maui_share_data.m_bl_magic_head == BL_INFO_V1);
    seed = ((BL_Info_Wrapper_st*)(BL_INFO_ADDR))->m_bl_maui_share_data.m_bl_random_seed;
#endif

#endif /* !(__BL_ENABLE__ || _NAND_FLASH_BOOTING_ || __NOR_FLASH_BOOTING__) */

#endif  /* _SIMULATION */

    /*
     * NoteXXX: Seed cannot be store in the global variable rand_num_seed directly.
     *          This is because that RW-data will be initialized later.
     *          Just return the seed.
     */

    return seed;
#endif /* __SSDVT_TEST__ */
}


/*************************************************************************
* FUNCTION
*  INT_IsBootForUSBAT
*
* DESCRIPTION
*  This function is used to for user to query if USBAT is enabled
*
* PARAMETERS
*  none
*
* RETURNS
*  0
*
*************************************************************************/
kal_bool INT_IsBootForUSBAT(void)
{
    return SHARED_VAR(_IsBootForUSBAT);
}


/*************************************************************************
* FUNCTION
*  INT_GetBromBlSyncType
*
* DESCRIPTION
*  For DHL, it needs to know the channel used to sync with tool in bootrom
* or boorloader
*
* PARAMETERS
*  None
*
* RETURNS
*  The sync channel used by bootrom or bootloader
*
*************************************************************************/
ser_chl_t INT_GetBromBlSyncType(void)
{
#ifdef __BL_ENABLE__
#if 0
/* under construction !*/
#endif
#else
    //For internal phone project, it does not have bootloader
    //Always return CHL_CCCI
    return CHL_CCCI;
#endif /*__BL_ENABLE__*/
}

__attribute__((__section__("NONCACHEDRW"))) INIT_STAGE INT_init_stage = E_DEFAULT;
INIT_STAGE INT_QueryInitStage(void)
{
    return INT_init_stage;
}

kal_bool INT_hasEMMAddress(void)
{
    kal_bool hasEMM = (INT_bootup_entry == (kal_uint32)&INC_TRC_NEW_DESIGN);
    kal_uint32 emmSize = 0;

    if(hasEMM)
    {
        emmSize = (*(kal_uint32 volatile*)(g_EMM_MAIN_BUFF_SIZE_PTR));
        if (emmSize < (BOOTUP_TRC_OFFSET + (VPE_BOOTUP_TRC_SIZE * SYS_MCU_NUM_VPE)) || emmSize > 0x10000000)
        {
            EXT_ASSERT(0, emmSize, (BOOTUP_TRC_OFFSET + (VPE_BOOTUP_TRC_SIZE * SYS_MCU_NUM_VPE)), 0x10000000);
        }
    }

    return hasEMM;
}


/*************************************************************************
* FUNCTION
*  INT_PollingShareVariable
*
* DESCRIPTION
*
*
* PARAMETERS
*  None
*
* RETURNS
*  None
*
*************************************************************************/

#if 0
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
#if ( defined(__FS_SYSDRV_ON_NAND__) || defined( _NAND_FLASH_BOOTING_) )
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __FS_SYSDRV_ON_NAND__ || _NAND_FLASH_BOOTING_ */
/* under construction !*/
#endif

#if 0
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
#if defined(_NAND_FLASH_BOOTING_) || defined(__EMMC_BOOTING__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* _NAND_FLASH_BOOTING_ || __EMMC_BOOTING__ */
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
#if (defined(_NAND_FLASH_BOOTING_) && !defined(__NFB_SINGLE_ROM__)) || defined(__EMMC_BOOTING__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* _NAND_FLASH_BOOTING_ || __EMMC_BOOTING__ */
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
#if defined(__ARM9_MMU__) || defined(__ARM11_MMU__)
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
#if defined(__ARM9_MMU__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif	/* __ARM9_MMU__ */
/* under construction !*/
#endif	/* __ARM9_MMU__ || __ARM11_MMU__ */
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#if 0
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
#if !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__))
#else /* !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__)) */
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
#ifdef __TIME_STAMP__
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
/* under construction !*/
#endif /* !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__)) */
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
#if !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__))
#else /* !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__)) */
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
#ifdef __TIME_STAMP__
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
/* under construction !*/
#endif /* !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__)) */
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
#if !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__))
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else /* !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__)) */
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
#endif /* !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__))  */
/* under construction !*/
/* under construction !*/
#endif

#if 0
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
#if defined(__SV5_ENABLED__) || defined(__SV5X_ENABLED__)  /* __SV5_ENABLED__ || __SV5X_ENABLED__ */
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else /*  __SV5_ENABLED__ || __SV5X_ENABLED__ */
/* under construction !*/
#if !(defined(__BL_ENABLE__) || defined(_NAND_FLASH_BOOTING_) || defined(__NOR_FLASH_BOOTING__) || defined(__EMMC_BOOTING__))
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else /* !(__BL_ENABLE__ || _NAND_FLASH_BOOTING_ || __NOR_FLASH_BOOTING__ || __EMMC_BOOTING__) */
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* _NAND_FLASH_BOOTING_ */
/* under construction !*/
#endif /*  __SV5_ENABLED__ || __SV5X_ENABLED__ */
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

#if 0
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
#if defined(MT6280) && defined(__MODEM_CARD__)
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
/* under construction !*/
/* under construction !*/
#endif

#endif /*__FUE__*/
