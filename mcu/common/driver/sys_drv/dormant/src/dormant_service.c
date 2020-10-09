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
 *   dormant_service.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides APIs to get device information
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
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifdef __MTK_TARGET__

#include "dormant_mode.h"   //for dormant options
#include "us_timer.h"       //for FMA, us counter
#include "cache_sw_int.h"
#include "drv_asm.h"        //for ASM backup/restore
#include "elm.h"            //for ELM restore
#include "bus_drv.h"        //for bus backup/restore
#include "init_comm.h"      //for reference bootslave config
#include "cpu.h"            //for cpu_event_counter_get_cycle
#include "ex_mem_manager_public.h" // for EMM_DirInfo_Query
#include "swla_public.h"    //for SWLA API, labels
#include "kal_public_api.h" //for kal_get_current_core_id
#include "interAptiv_dorm_macros_gcc.h"
#include "mips_ia_pmu_montr.h"
#include "sync_data.h"//for step logging sync
#include "mips_ia_utils.h"
#include "drv_busmon.h"  //for profile MO latency
#include "ulsp_interface.h"

/* Macros Define */
#define NUM_CORES               	(2)
#define NUM_VPES                	(NUM_CORES*2)
#define DORMANT_STEPS_PER_VPE   	(2)
#define DORMANT_LOGGING_OFFSET  	(DORMANT_STEPS_PER_VPE * NUM_VPES) // two words per-VPE
#define DORMANT_LOGGING_FRC_OFFSET  (4)

/* For future implementation */
#define VPE1_BACKUP (0x0)

/* Data Declaration */
// Backup buffers located on EMI
__DOR_NONCACHED_BSS__ __attribute__((aligned(32))) volatile kal_uint32 dorm_c0_v0_emi_backup_buf[DORMANT_EMI_STORAGE_SIZE];
__DOR_NONCACHED_BSS__ __attribute__((aligned(32))) volatile kal_uint32 dorm_c1_v2_emi_backup_buf[DORMANT_EMI_STORAGE_SIZE];
#if (VPE1_BACKUP == 0x1)
__DOR_NONCACHED_BSS__ __attribute__((aligned(32))) volatile kal_uint32 dorm_c0_v1_emi_backup_buf[DORMANT_EMI_STORAGE_SIZE];
__DOR_NONCACHED_BSS__ __attribute__((aligned(32))) volatile kal_uint32 dorm_c1_v3_emi_backup_buf[DORMANT_EMI_STORAGE_SIZE];
#endif
// Non-cacheable ptr to EMI backup buffer
__DOR_NONCACHED_DATA__ volatile kal_uint32 dorm_c0_v0_emi_backup_buf_nc;
__DOR_NONCACHED_DATA__ volatile kal_uint32 dorm_c1_v2_emi_backup_buf_nc;
#if (VPE1_BACKUP == 0x1)
__DOR_NONCACHED_DATA__ volatile kal_uint32 dorm_c0_v1_emi_backup_buf_nc;
__DOR_NONCACHED_DATA__ volatile kal_uint32 dorm_c1_v3_emi_backup_buf_nc;
#endif
// Cacheable ptr to EMI backup buffer
__DOR_NONCACHED_DATA__ volatile kal_uint32 dorm_c0_v0_emi_backup_buf_c;
__DOR_NONCACHED_DATA__ volatile kal_uint32 dorm_c1_v2_emi_backup_buf_c;
#if (VPE1_BACKUP == 0x1)
__DOR_NONCACHED_DATA__ volatile kal_uint32 dorm_c0_v1_emi_backup_buf_c;
__DOR_NONCACHED_DATA__ volatile kal_uint32 dorm_c1_v3_emi_backup_buf_c;
#endif
// Dormant temp stack used in dormant recovery
__DOR_NONCACHED_BSS__ __attribute__((aligned(16))) volatile kal_uint32 dorm_c0_v0_stack_buf[DORMANT_STACK_SIZE>>2];
__DOR_NONCACHED_BSS__ __attribute__((aligned(16))) volatile kal_uint32 dorm_c1_v2_stack_buf[DORMANT_STACK_SIZE>>2];
//#if (VPE1_BACKUP == 0x1)
__DOR_NONCACHED_BSS__ __attribute__((aligned(16))) volatile kal_uint32 dorm_c0_v1_stack_buf[DORMANT_STACK_SIZE>>2];
__DOR_NONCACHED_BSS__ __attribute__((aligned(16))) volatile kal_uint32 dorm_c1_v3_stack_buf[DORMANT_STACK_SIZE>>2];
//#endif

__DOR_NONCACHED_DATA__ volatile kal_uint32 dorm_c0_v0_stack;
__DOR_NONCACHED_DATA__ volatile kal_uint32 dorm_c1_v2_stack;
//#if (VPE1_BACKUP == 0x1)
__DOR_NONCACHED_DATA__ volatile kal_uint32 dorm_c0_v1_stack;
__DOR_NONCACHED_DATA__ volatile kal_uint32 dorm_c1_v3_stack;
//#endif
// In all Cores sleep scenario, Core0 VPE0 would use this lock to avoid other Cores running dormant recovery earlier than itself
__DOR_NONCACHED_DATA__ volatile kal_uint32 dormant_recovery_reset_lock = 0;
__DOR_NONCACHED_DATA__ volatile kal_uint32 dormant_recovery_lock = 0;
// Every Core's VPE0 would use its per-Core lock to notify VPE1 go back to assigned entry
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_local_notify_VPE1_lock[NUM_CORES] = {0};

/* For Debug Purpose */
// Time Information: FRC
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_leave_frc[NUM_CORES];
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_reset_frc[NUM_VPES];
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_abort_frc[NUM_CORES];
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_switch_coherent_frc[NUM_CORES];
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_enter_coherent_frc[NUM_VPES];/* Per-VPE enter/check coherence domain done timestamp */
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_enter_frc[NUM_CORES];
// user backup frc
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_mips_backup_frc[NUM_CORES];
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_asm_backup_frc[NUM_CORES];
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_bus_backup_frc[NUM_CORES];
#if defined(__USE_ULSP__)
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_ulsp_backup_frc[NUM_CORES];
#endif
// user restore frc
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_amif_restore_frc[NUM_CORES];
#if defined(__USE_ULSP__)
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_ulsp_restore_frc[NUM_CORES];
#endif
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_bus_restore_frc[NUM_CORES];
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_asm_restore_frc[NUM_CORES];
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_mips_restore_frc[NUM_CORES];
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_busmon_restore_frc[NUM_CORES];
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_INT_restore_frc[NUM_CORES];
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_elm_restore_frc[NUM_CORES];
__DOR_NONCACHED_DATA__ __attribute__((aligned(16))) volatile kal_uint32 dormant_dpcopro_restore_frc[NUM_CORES];

// C0_COUNT probes information
__DOR_NONCACHED_BSS__ __attribute__((aligned(32))) kal_uint32 dormant_time_stamp_buf[NUM_VPES*20] = {0};
__DOR_NONCACHED_BSS__ __attribute__((aligned(32))) kal_uint32 enter_CPU_cycles[NUM_VPES] = {0};
__DOR_NONCACHED_BSS__ __attribute__((aligned(32))) kal_uint32 enter_CPU_cycles_2[NUM_VPES] = {0};
__DOR_NONCACHED_BSS__ __attribute__((aligned(32))) kal_uint32 recovery_CPU_cycles[NUM_VPES] = {0};

__DOR_NONCACHED_DATA__ kal_uint32 dormant_dbg_ptr;
#if defined(__HIF_CCCI_SUPPORT__)
//LR11: defined(__CCCIDEV_SUPPORT__)  defined(__HIF_CLDMA_SUPPORT__)
__DOR_NONCACHED_DATA__ kal_uint32 dormant_dbg_ptr_size;
#else /* __HIF_CLDMA_SUPPORT__ */
__DOR_NONCACHED_DATA__ __attribute__((aligned(32))) kal_uint32 dormant_step_logging[NUM_VPES*DORMANT_STEPS_PER_VPE] = {0};
#endif /* __HIF_CLDMA_SUPPORT__ */

#define STEP_LOGGING_INIT(x) x;\
	MM_Sync()

#define STEP_LOGGING(x) DRV_WriteReg32((dormant_dbg_ptr + vpe_idx * DORMANT_LOGGING_OFFSET), x);\
	DRV_WriteReg32((dormant_dbg_ptr + vpe_idx * DORMANT_LOGGING_OFFSET + DORMANT_LOGGING_FRC_OFFSET), ust_get_current_time());\
	MM_Sync()

extern void dpcopro_mcu_mmu_dormant_restore(void);
extern void OSTD_AMIF_restore();
/**********************************************************
* FUNCTION
*	dormant_bootslave_backup
*
* DESCRIPTION
*	This function returns the Boot-Slave jump address
*
* PARAMETERS
*	none
* 
* RETURNS
*	kal_uint32: the Boot-Slave original jump address
***********************************************************/
kal_uint32 dormant_bootslave_backup(kal_uint32 core_index)
{
	return (*(volatile kal_uint32 *)MCU_BOOTSLV_JUMP_ADDR(core_index));
}

/**********************************************************
* FUNCTION
*	dormant_mode_init
*
* DESCRIPTION
*	This function do initialization for per-Core dormant stack and per-Core TC0's backup buffer
*
* PARAMETERS
*	none
* 
* RETURNS
*	none
***********************************************************/
void dormant_mode_init(void)
{
    kal_uint32 vpe_idx = kal_get_current_vpe_id();

    /* init dormant mode stack [0] = 0xCATS, [1] = 0xDNEK*/
    if (VPE0_IDX == vpe_idx) {
        // Configure VPE0 dormant temp stack
        dorm_c0_v0_stack_buf[0] = 0x43415453;
        dorm_c0_v0_stack_buf[1] = 0x444E454B;
        /* set stack start address - 8 byte aligned address */
        dorm_c0_v0_stack = (kal_uint32)&dorm_c0_v0_stack_buf[(DORMANT_STACK_SIZE>>2)-2];
        // Configure VPE1 dormant temp stack
        dorm_c0_v1_stack_buf[0] = 0x43415453;
        dorm_c0_v1_stack_buf[1] = 0x444E454B;
        /* set stack start address - 8 byte aligned address */
        dorm_c0_v1_stack = (kal_uint32)&dorm_c0_v1_stack_buf[(DORMANT_STACK_SIZE>>2)-2];
        /* set emi start address */
        dorm_c0_v0_emi_backup_buf_nc = MAP2CREGPA(dorm_c0_v0_emi_backup_buf);
        dorm_c0_v0_emi_backup_buf_c = MAP2CREGVA(dorm_c0_v0_emi_backup_buf);
    } else if (VPE2_IDX == vpe_idx) {
        // Configure VPE2 dormant temp stack
        dorm_c1_v2_stack_buf[0] = 0x43415453;
        dorm_c1_v2_stack_buf[1] = 0x444E454B;
        /* set stack start address - 8 byte aligned address */
        dorm_c1_v2_stack = (kal_uint32)&dorm_c1_v2_stack_buf[(DORMANT_STACK_SIZE>>2)-2];
        // Configure VPE3 dormant temp stack
        dorm_c1_v3_stack_buf[0] = 0x43415453;
        dorm_c1_v3_stack_buf[1] = 0x444E454B;
        /* set stack start address - 8 byte aligned address */
        dorm_c1_v3_stack = (kal_uint32)&dorm_c1_v3_stack_buf[(DORMANT_STACK_SIZE>>2)-2];
        /* set emi start address */
        dorm_c1_v2_emi_backup_buf_nc = MAP2CREGPA(dorm_c1_v2_emi_backup_buf);
        dorm_c1_v2_emi_backup_buf_c = MAP2CREGVA(dorm_c1_v2_emi_backup_buf);
    }
#if (VPE1_BACKUP == 0x1)
      else if (VPE1_IDX == vpe_idx) {
        dorm_c0_v1_stack_buf[0] = 0x43415453;
        dorm_c0_v1_stack_buf[1] = 0x444E454B;
        /* set stack start address - 8 byte aligned address */
        dorm_c0_v1_stack = (kal_uint32)&dorm_c0_v1_stack_buf[(DORMANT_STACK_SIZE>>2)-2];
        /* set emi start address */
        dorm_c0_v1_emi_backup_buf_nc = MAP2CREGPA(dorm_c0_v1_emi_backup_buf);
        dorm_c0_v1_emi_backup_buf_c = MAP2CREGVA(dorm_c0_v1_emi_backup_buf);
    } else if (VPE3_IDX == vpe_idx) {
        dorm_c1_v3_stack_buf[0] = 0x43415453;
        dorm_c1_v3_stack_buf[1] = 0x444E454B;
        /* set stack start address - 8 byte aligned address */
        dorm_c1_v3_stack = (kal_uint32)&dorm_c1_v3_stack_buf[(DORMANT_STACK_SIZE>>2)-2];
        /* set emi start address */
        dorm_c1_v3_emi_backup_buf_nc = MAP2CREGPA(dorm_c1_v3_emi_backup_buf);
        dorm_c1_v3_emi_backup_buf_c = MAP2CREGVA(dorm_c1_v3_emi_backup_buf);
    }
#endif
#if defined(__HIF_CCCI_SUPPORT__)
    STEP_LOGGING_INIT(EMM_DirInfo_Query(EMM_DIRECT_WRITE_DORMANT, &dormant_dbg_ptr, &dormant_dbg_ptr_size));
#else
    STEP_LOGGING_INIT(dormant_dbg_ptr = (kal_uint32)&dormant_step_logging);
#endif
	return;
}

/**********************************************************
* FUNCTION
*	dormant_mode_activate
*
* DESCRIPTION
*	This function triggers dormant mode procedure
*
* PARAMETERS
*	none
* 
* RETURNS
*	none
***********************************************************/
void dormant_mode_activate(void)
{
    volatile kal_uint32 core_idx = kal_get_current_core_id();
    volatile kal_uint32 vpe_idx = kal_get_current_vpe_id();
    cpu_event_counter_get_cycle(enter_CPU_cycles[vpe_idx]);

    STEP_LOGGING(DORMANT_ACT_ENTER);
	SLA_CustomLogging("DOR", SA_start);
    
	dormant_mips_backup_frc[core_idx] = ust_get_current_time();
	STEP_LOGGING(&mips_ia_misc_enter_dormant);
    mips_ia_misc_enter_dormant();
    
    dormant_asm_backup_frc[core_idx] = ust_get_current_time();
	STEP_LOGGING(&ASM_SaveCoreConfigForSPM);
    ASM_SaveCoreConfigForSPM();
    
	dormant_bus_backup_frc[core_idx] = ust_get_current_time();
    STEP_LOGGING(&BusDrv_Config_DormantEnter);
   	BusDrv_Config_DormantEnter();
    
#if defined(__USE_ULSP__)	
	dormant_ulsp_backup_frc[core_idx] = ust_get_current_time();
	STEP_LOGGING(&ulsp_mcu_backup);
	ulsp_mcu_backup();
#endif
	
	STEP_LOGGING(DORMANT_SAVE_BS);
	if (VPE0_IDX == vpe_idx) {
		// Backup Core0's Boot-Slave
		*(kal_uint32 *)(MAP2CREGVA(&dorm_c0_v0_emi_backup_buf[BOOTSLAVE_OFFSET>>2])) = dormant_bootslave_backup(CORE0_IDX);
		INT_Set_BootSlave(CORE0_IDX, (kal_uint32)dormant_mode_reset_interwork);
	} else if (VPE2_IDX == vpe_idx) {
		// Backup Core1's Boot-Slave
		*(kal_uint32 *)(MAP2CREGVA(&dorm_c1_v2_emi_backup_buf[BOOTSLAVE_OFFSET>>2])) = dormant_bootslave_backup(CORE1_IDX);
		INT_Set_BootSlave(CORE1_IDX, (kal_uint32)dormant_mode_reset_interwork);
	}
#if (VPE1_BACKUP == 0x1)
	  else if (VPE1_IDX == vpe_idx) {
		// Backup Core1's Boot-Slave
		*(kal_uint32 *)(MAP2CREGVA(&dorm_c0_v1_emi_backup_buf[BOOTSLAVE_OFFSET>>2])) = dormant_bootslave_backup(CORE0_IDX);	
		INT_Set_BootSlave(CORE0_IDX, (kal_uint32)dormant_mode_reset_interwork);
	} else if (VPE3_IDX == vpe_idx) {
		// Backup Core1's Boot-Slave
		*(kal_uint32 *)(MAP2CREGVA(&dorm_c1_v3_emi_backup_buf[BOOTSLAVE_OFFSET>>2])) = dormant_bootslave_backup(CORE1_IDX);
		INT_Set_BootSlave(CORE1_IDX, (kal_uint32)dormant_mode_reset_interwork);
	}
#endif

	dormant_enter_frc[core_idx] = ust_get_current_time();

    STEP_LOGGING(DORMANT_ENTER_MODE);
    enter_dormant_mode();

    dormant_leave_frc[core_idx] = ust_get_current_time();
	
	dormant_amif_restore_frc[core_idx] = ust_get_current_time();
	STEP_LOGGING(&OSTD_AMIF_restore);
	OSTD_AMIF_restore();
	
#if defined(__USE_ULSP__)	
	dormant_ulsp_restore_frc[core_idx] = ust_get_current_time();
	STEP_LOGGING(&ulsp_mcu_restore);
	ulsp_mcu_restore();
#endif
	
	dormant_bus_restore_frc[core_idx] = ust_get_current_time();
    STEP_LOGGING(&BusDrv_Config_DormantLeave);
	BusDrv_Config_DormantLeave();

	dormant_asm_restore_frc[core_idx] = ust_get_current_time();
    STEP_LOGGING(&ASM_RestoreCoreConfigforSPM);
    ASM_RestoreCoreConfigforSPM();
	
	dormant_mips_restore_frc[core_idx] = ust_get_current_time();
	STEP_LOGGING(&mips_ia_misc_leave_dormant);
	mips_ia_misc_leave_dormant();
	
	dormant_busmon_restore_frc[core_idx] = ust_get_current_time();
	STEP_LOGGING(&busmon_dormant_init);
	busmon_dormant_init();

	dormant_INT_restore_frc[core_idx] = ust_get_current_time();
	STEP_LOGGING(&INT_dormant_init);
	INT_dormant_init();
	
	dormant_elm_restore_frc[core_idx] = ust_get_current_time();	
    STEP_LOGGING(&ELM_Config_DormantLeave);
    ELM_Config_DormantLeave();

    STEP_LOGGING(DORMANT_RST_BS);
    if (VPE0_IDX == vpe_idx) {
        INT_Set_BootSlave(CORE0_IDX, (kal_uint32)(*(kal_uint32 *)(MAP2CREGVA(&dorm_c0_v0_emi_backup_buf[BOOTSLAVE_OFFSET>>2]))));
	} else if (VPE2_IDX == vpe_idx) {
        INT_Set_BootSlave(CORE1_IDX, (kal_uint32)(*(kal_uint32 *)(MAP2CREGVA(&dorm_c1_v2_emi_backup_buf[BOOTSLAVE_OFFSET>>2]))));
	}
#if (VPE1_BACKUP == 0x1)
	  else if (VPE1_IDX == vpe_idx) {
        INT_Set_BootSlave(CORE0_IDX, (kal_uint32)(*(kal_uint32 *)(MAP2CREGVA(&dorm_c0_v1_emi_backup_buf[BOOTSLAVE_OFFSET>>2]))));
	} else if (VPE3_IDX == vpe_idx) {
        INT_Set_BootSlave(CORE1_IDX, (kal_uint32)(*(kal_uint32 *)(MAP2CREGVA(&dorm_c1_v3_emi_backup_buf[BOOTSLAVE_OFFSET>>2]))));
	}
#endif
	
	dormant_dpcopro_restore_frc[core_idx] = ust_get_current_time();
    STEP_LOGGING(&dpcopro_mcu_mmu_dormant_restore);
    dpcopro_mcu_mmu_dormant_restore();
	
	STEP_LOGGING(DORMANT_ACT_EXIT);
    /* 
     * Every Core's VPE0 trigger VPE1 to go back HRT_domain_P_env and HRT_domain_C_env
     */
    dormant_local_notify_VPE1_lock[core_idx] = 0;
    cpu_event_counter_get_cycle(recovery_CPU_cycles[vpe_idx]);
    SLA_CustomLogging("DOR", SA_stop);

	return;
}

#endif /* __MTK_TARGET__ */
