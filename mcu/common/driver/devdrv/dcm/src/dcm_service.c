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
 *   dcm_service.c
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This file provides dcm APIs to get device information 
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifdef __MTK_TARGET__

#include "drv_comm.h"
#include "dcm_sw.h"
#include "dcm_service.h"

#include "kal_public_api.h"
#include "kal_internal_api.h" /* Sleep_Time structure definition, kal sleep check related function */
#include "kal_hrt_api.h"
#include "mips_ia_utils.h"

#include "us_timer.h"
#include "intrCtrl.h"           /* IRQ Mask/Unmask */
#include "sync_data.h"
#include "SST_intrCtrl.h"

#include "RM_public.h"
#include "sleepdrv_interface.h"
#include "drv_rstctl.h"
#include "ostd_public.h"
#include "task_config.h"
#include "ptp_public.h"
#include "pll.h"
#include "drv_lpm.h"

#if defined (__MODEM_CCCI_EXIST__)	
#include "ccci.h"
#include "ex_mem_manager_public.h"
#endif

/* From dormant */
extern void dormant_mode_activate(void);
extern void dormant_mode_init(void);

/* From OS */
extern STATUS NU_Core_Remove_From_Scheduling(VOID);
extern VOID NU_Core_Add_To_Scheduling(BOOLEAN whole_core);

/* From MDCIRQ */
extern void drv_mdcirq_Set_VPE_state(kal_uint32 VPE, kal_uint32 state);
extern kal_bool drv_mdcirq_IRQ_B_NMI_B_status(kal_uint32 vpe_id);
extern void drv_mdcirq_IRQ_NMI_mask_per_vpe(kal_uint32 VPE);
extern void drv_mdcirq_IRQ_NMI_unmask_per_vpe(kal_uint32 VPE);
extern void drv_mdcirq_IBit_sampling_enable(kal_uint32 VPE, kal_bool enable);
extern void drv_mdcirq_DCM_EI(kal_uint32 ret);
extern kal_uint32 drv_mdcirq_DCM_DI();
extern void drv_mdcirq_DCM_DI_Recover(void);
extern void interrupt_sleep_init(kal_uint32 vpe_id);
extern void drv_mdcirq_mask_core(kal_uint32 target_core);
extern void drv_mdcirq_unmask_core(kal_uint32 target_core);

/* The Macro to do IT test */
//#define DCM_IT_TEST

/* The Macro to add debug log */
#define DCM_SERVICE_DEBUG

/* DCM_ENABLE define in project's makefile (MCU_DCM = DCM_DISABLE/DCM_ENABLE ). But we remove it from 6293. */
/* DCM_SUPPORT define in dcm_sw.h */
#if defined(DCM_SUPPORT)
    #define IFDEF_DCM(def_statement, undef_statement) def_statement
#else  /* Not Support DCM. */
    #define IFDEF_DCM(def_statement, undef_statement) undef_statement
#endif /* DCM_SUPPORT */

/* Define in project's makefile (...), TRUE: CPU would execute DORMANT flow. FALSE: No DORMANT flow. */
#if defined(__CENTRALIZED_SLEEP_MANAGER__) && defined(__EVENT_BASED_TIMER__) && defined(MTK_SLEEP_ENABLE)
    #define LOWPWER_ENTER_PAUSE_MODE
    #define IFDEF_PAUSE_FLOW(def_statement, undef_statement) def_statement
#else  
    #define IFDEF_PAUSE_FLOW(def_statement, undef_statement) undef_statement
#endif

#if defined(__PRODUCTION_RELEASE__)
    #define IFDEF_PRODUCTION(x)
#else  /* __PRODUCTION_RELEASE__ */
/* under construction !*/
#endif /* __PRODUCTION_RELEASE__ */

/*
Below for simple test. 
*//* Remember modify intrCtrl_MT6763.h before test. */
#if defined(DCM_IT_TEST)
kal_bool     DCM_IT_InitDone = KAL_FALSE;
kal_uint32   DCM_IT_IRQ_count[4] = {0};
kal_timerid  DCM_IT_timer_id;
kal_uint32   timer_offset = 1;

#define IRQ_SW_VPE0_TEST IRQ_SW_LISR61_CODE   /* IRQ ID 203 */
#define IRQ_SW_VPE1_TEST (IRQ_SW_VPE0_TEST+1) /* IRQ ID 204 */
#define IRQ_SW_VPE2_TEST (IRQ_SW_VPE1_TEST+1) /* IRQ ID 205 */
#define IRQ_SW_VPE3_TEST (IRQ_SW_VPE2_TEST+1) /* IRQ ID 206 */

static void DCM_Service_IT_timer_cb()
{
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    MDCIRQ_Activate_LISR_without_ITC(IRQ_SW_VPE1_TEST);
    MDCIRQ_Activate_LISR_without_ITC(IRQ_SW_VPE2_TEST);    
    MDCIRQ_Activate_LISR_without_ITC(IRQ_SW_VPE3_TEST);
#else
    Activate_LISR(IRQ_SW_VPE1_TEST);
    Activate_LISR(IRQ_SW_VPE2_TEST);    
    Activate_LISR(IRQ_SW_VPE3_TEST);
#endif

    kal_cancel_timer(DCM_IT_timer_id);
    kal_set_timer(DCM_IT_timer_id, DCM_Service_IT_timer_cb, NULL, KAL_TICKS_10_MSEC*timer_offset, 0);
    timer_offset++;
}

void DCM_Service_IT_vpe_X_lisr(kal_uint32 irqx)
{
    DCM_IT_IRQ_count[irqx-IRQ_SW_VPE0_TEST]++;  
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    MDCIRQ_Deactivate_LISR_without_ITC(irqx);
#else
    Deactivate_LISR(irqx);
#endif
}

void DCM_Service_IT_test_init(void)
{
    kal_uint32 vpe_id = kal_get_current_vpe_id();  
    if(vpe_id==0)
    {/* only VPE 0 do the init */

        /* Register ISR for VPE0 to test */
        IRQ_Register_LISR(IRQ_SW_VPE0_TEST, DCM_Service_IT_vpe_X_lisr, "DCM_IT_0");
        IRQSensitivity(IRQ_SW_VPE0_TEST, LEVEL_SENSITIVE);/* level trigger */ 
        IRQUnmask(IRQ_SW_VPE0_TEST);

        /* Register ISR for VPE1 to test */
        IRQ_Register_LISR(IRQ_SW_VPE1_TEST, DCM_Service_IT_vpe_X_lisr, "DCM_IT_1");
        IRQSensitivity(IRQ_SW_VPE1_TEST, LEVEL_SENSITIVE);/* level trigger */ 
        IRQUnmask(IRQ_SW_VPE1_TEST);

        /* Register ISR for VPE2 to test */
        IRQ_Register_LISR(IRQ_SW_VPE2_TEST, DCM_Service_IT_vpe_X_lisr, "DCM_IT_2");
        IRQSensitivity(IRQ_SW_VPE2_TEST, LEVEL_SENSITIVE);/* level trigger */ 
        IRQUnmask(IRQ_SW_VPE2_TEST);

        /* Register ISR for VPE3 to test */
        IRQ_Register_LISR(IRQ_SW_VPE3_TEST, DCM_Service_IT_vpe_X_lisr, "DCM_IT_3");
        IRQSensitivity(IRQ_SW_VPE3_TEST, LEVEL_SENSITIVE);/* level trigger */ 
        IRQUnmask(IRQ_SW_VPE3_TEST);    

        DCM_IT_timer_id = kal_create_timer("DCM_IT_timer");
        kal_set_timer(DCM_IT_timer_id, DCM_Service_IT_timer_cb, NULL, KAL_TICKS_5_SEC, 0);

        DCM_IT_InitDone = KAL_TRUE;
    }
}
#endif/*DCM_IT_TEST*/
/*
Above for simple test. 
*/

/* For using LPM to verify DCM */
#if defined(DCM_SUPPORT) && defined (DCM_LPM_ENABLE)
lpm_ctrl dcm_service_lpm_ctrl;
kal_bool dcm_service_lpm_change = KAL_FALSE;
#endif

kal_uint32   DCMenterSleep = 1; // Force lock sleep. 1: Could enter DORMANT. 0: Couldn't enter DORMANT.   
kal_bool     DCM_Service_InitDone = KAL_FALSE; /* DCM Service init done or not, only CORE 0 VPE 0 init DCM in DCM_Service_Init(). */
volatile kal_bool     DCM_Service_Dormant_Abort[CORE_NUMBER] = {0};// To know this time is dormant abort or not. 1: dormant abort.
kal_uint32   dcm_service_hrt_DI_start[CORE_NUMBER] = {0}, dcm_service_hrt_DI_end[CORE_NUMBER] = {0}, dcm_service_hrt_DI_dur[CORE_NUMBER] = {0};/* Use to Qbit check for HRT domain. */
//kal_uint32 dcm_service_dor_2nd_enter_wait_frc = 0, dcm_service_dor_2nd_leave_wait_frc = 0, dcm_service_dor_2nd_duration = 0;

kal_uint32 dcm_vpe_x_state[VPE_NUMBER] = {0};/* The CIRQ VPE state for each idle task */

kal_uint32 dcm_emm_start_address;
kal_uint32 dcm_emm_size;
kal_uint32 dcm_emm_init_done;

typedef struct 
{
    DCM_ACTION_INDEX   action;   
    kal_uint32   frc_ust;
} DCM_SERVICE_STEP; 

DCM_SERVICE_STEP  dcm_service_step[VPE_NUMBER][DCM_SERVICE_STEP_MAX];
kal_uint32 dcm_service_step_index[VPE_NUMBER] = {0}; 

typedef struct 
{
    kal_uint32 dcm_service_enter_dormant_frc;/* The us time when entering DORMANT. */ 
    kal_uint32 dcm_service_dor_abort_leave_dormant_frc; /* The us time when leaving DORMANT due to dormant abort. */    
    kal_uint32 dcm_service_leave_dormant_frc; /* The us time when leaving DORMANT. */
}DCM_SERVICE_DORMANT_LOG;/* Per-Core's enter/leave dormant time. */

DCM_SERVICE_DORMANT_LOG dcm_service_core_x_dormant_time[CORE_NUMBER];

kal_uint32 dcm_service_core_x_dormant_sum_usc[CORE_NUMBER] = {0};/* The total us time duration in DORMANT.(from boot up to now.) */
kal_uint32 dcm_service_core_x_dormant_abort_sum_usc[CORE_NUMBER] = {0};/* The total us time duration in DORMANT ABORT.(from boot up to now.) */

kal_uint32 dcm_service_core_x_vpe1_leave_dormant_frc[CORE_NUMBER] = {0};/* The us time when Per-CORE's VPE1 leave DORMANT */

/* Per-CORE's VPE1 init done or not. CORE could enter DORMANT after Per-CORE's VPE 1 init done.
Init to 1 in DCM_Service_Init(), clear to 0 before entering DORMANT. 
When Per-CORE's VPE 1 leave DORMANT, it would config to 1 in DCM_Service_vpe1_dormant_leave() again to confirm it is full restore from DORMANT. */
volatile kal_uint32 dcm_service_core_x_vpe1_init_state[CORE_NUMBER] = {0}; // 1:init doen, 0; not init

kal_uint32 dcm_service_enter_wait_time[VPE_NUMBER];
kal_uint32 dcm_service_leave_wait_time[VPE_NUMBER];
kal_uint32 dcm_service_vpe_wait_sum_usc[VPE_NUMBER]; // for L1 low power team to evaluate idle rate.

/* We use a cacheable parameter to let Per-CORE's VPE 0 could know his VPE 1 is in "wait" or not. */
volatile kal_bool   dcm_service_core_x_vpe1_in_wait_state[CORE_NUMBER]={0};

/* We use a cacheable parameter to let CORE0's VPE0 could know CORE1 is in "DORMANT" or not. */
volatile kal_uint32 dcm_service_CoreStatus[CORE_NUMBER] = {0}; //0: normal, 1: WAIT, 2: dormant

/* For debug, to confirm the real dormant/dormant abort flow is right. */
kal_uint32 dcm_service_vpe_real_dormant_times[VPE_NUMBER] = {0}; 

#if defined(DCM_SERVICE_DEBUG) && defined(LOWPWER_ENTER_PAUSE_MODE)
#define DCM_SERVICE_CORE_STATUS_MAX 32

typedef struct {
    kal_uint32          frc_ust;/* the value is FRC(us) */    
    kal_uint32          validSleepTime;  	
    kal_uint32          core1_status; 
    kal_uint32          swLockSleep;	
    kal_uint32          core_x_vpe1_wait_state;	
    kal_uint32          core_x_vpe1_pending_irq_status;	
    kal_checksleep_e    OST_ReadyToSlept;	
} DCM_SERVICE_CORE0_STATUS_LOG;

typedef struct {
    kal_uint32          frc_ust;/* the value is FRC(us) */    
    kal_uint32          swLockSleep;	
    kal_uint32          core_x_vpe1_wait_state;	
    kal_uint32          core_x_vpe1_pending_irq_status;	
    kal_checksleep_e    OST_ReadyToSlept;	
} DCM_SERVICE_CORE1_STATUS_LOG;

/* for debugging */
DCM_SERVICE_CORE0_STATUS_LOG    dcm_service_core0_status_log[DCM_SERVICE_CORE_STATUS_MAX];
DCM_SERVICE_CORE1_STATUS_LOG    dcm_service_core1_status_log[DCM_SERVICE_CORE_STATUS_MAX];
kal_uint32            dcm_service_core0_status_log_index = 0;
kal_uint32            dcm_service_core1_status_log_index = 0;
#endif

/*****************************************************************************
 * Internal Function                                                          *
 *****************************************************************************/
#if defined (__MODEM_CCCI_EXIST__)
static kal_bool DCM_EMM_WriteDbgInfo(kal_uint32 index, void* addr)
{   
    if (!dcm_emm_init_done)
    {
        return KAL_FALSE;
    }
  #if defined(__MTK_TARGET__)    
    if (addr == NULL || ((kal_uint32)addr % 4 !=0) || index > DCM_EMM_INDEX_MAX)
    {
        return KAL_FALSE;
    }

	*((kal_uint32 *)(dcm_emm_start_address + (index<<2))) = *((kal_uint32 *)addr);
    //MM_Sync();   
  #endif   
    return KAL_TRUE;
}
#endif

static void dcm_service_step_logging(kal_uint32 vpe_id, DCM_ACTION_INDEX step)
{/* OST_ReadyToSlept==> 0:OSTD_BUSY, 1:OSTD_WAIT, 2:OSTD_DORMANT */
    dcm_service_step_index[vpe_id]++;
    if(dcm_service_step_index[vpe_id]>=DCM_SERVICE_STEP_MAX)
    {
        dcm_service_step_index[vpe_id] = 0;
    }
  
    dcm_service_step[vpe_id][dcm_service_step_index[vpe_id]].action = step;
    dcm_service_step[vpe_id][dcm_service_step_index[vpe_id]].frc_ust = ust_get_current_time();
#if defined (__MODEM_CCCI_EXIST__)    
    DCM_EMM_WriteDbgInfo(DCM_EMM_VPE0_IDLE_TASK_STEPLOGGING + (vpe_id<<1), &dcm_service_step[vpe_id][dcm_service_step_index[vpe_id]].action);
    DCM_EMM_WriteDbgInfo(DCM_EMM_VPE0_IDLE_TASK_FMA + (vpe_id<<1), &dcm_service_step[vpe_id][dcm_service_step_index[vpe_id]].frc_ust); 
#endif    
}

#if defined(LOWPWER_ENTER_PAUSE_MODE)
/*
static kal_uint32 DCM_get_CP0_Cause(void)
{
    kal_uint32 value = 0;

    //$13=C0_CAUSE
    __asm__ __volatile__
    (
	    "MFC0 %0, $13\r\n"
        :"=r"(value)
        :
        :
     );

    return value;
}
*/

 /*------------------------------------------------------------------------
 * void    dcm_service_mask_vpe_irq
 * Purpose:	   Mask cirq trigger to specify vpe in DCM_Service_Handler(), this function is only designed for DCM_Service_Handler().
 * Parameters:
 *    Input:	kal_uint32 core_id
 *              kal_uint32 vpe_id
 *    Output:	None.
 * returns :	None. 
 * Note    :    Called in VPE0 and VPE2's DCM_Service_Handler(), Only Per-CORE's VPE 0 could call this function.
 *              
 *------------------------------------------------------------------------
 */
static void dcm_service_mask_vpe_irq(kal_uint32 core_id, kal_uint32 vpe_id)
{

    if(vpe_id&0x1)
    {/* Only Per-CORE's VPE 0 could run this function */
        ASSERT(0);
    }

    /* VPE0 would mask VPE1's IRQ and check 40Q bit, so we raise up TC0's priority to avoid VPE1 occupy pipeline. */
    miu_save_and_set_c0_tcschedule_grp(HIGHEST_TC0_GROUP);
    
    if(0 == core_id)
    {/* CORE 0 VPE 0 */

        /* Mask VPE1 by CIRQ */
        drv_mdcirq_IRQ_NMI_mask_per_vpe(vpe_id+1);
    }
    else
    {/* CORE 1 VPE 0 */

        /* Mask VPE2 & VPE3 by CIRQ */
        drv_mdcirq_IRQ_NMI_mask_per_vpe(vpe_id+1);/* To avoid spurious interrupt, we mask VPE3's IRQ first. */        
        drv_mdcirq_IRQ_NMI_mask_per_vpe(vpe_id);
    }  

    dcm_service_hrt_DI_start[core_id] = ust_get_current_time();
}

 /*------------------------------------------------------------------------
 * void    dcm_service_unmask_vpe_irq
 * Purpose:	   Unmask cirq trigger to specify vpe in DCM_Service_Handler(), this function is only designed for DCM_Service_Handler().
 * Parameters:
 *    Input:	kal_uint32 core_id
 *              kal_uint32 vpe_id
 *              kal_bool Check_hrt_Qbit: Check 40 Qbit or not before enable vpe1's IRQ.  
 *    Output:	None.
 * returns :	None. 
 * Note    :    Called in VPE0 and VPE2's DCM_Service_Handler(), Only Per-CORE's VPE 0 could call this function.
 *              
 *------------------------------------------------------------------------
 */
static void dcm_service_unmask_vpe_irq(kal_uint32 core_id, kal_uint32 vpe_id, kal_bool Check_hrt_Qbit)
{

    if(vpe_id&0x1)
    {/* Only Per-CORE's VPE 0 could run this function */
        ASSERT(0);
    }
    
    if (0 == core_id)
    {/* CORE 0 VPE 0 */

        /* Unmask VPE1 by CIRQ */
        drv_mdcirq_IRQ_NMI_unmask_per_vpe(vpe_id+1);
    }
    else
    {/* CORE 1 VPE 0 */
        
        /* Unmask VPE2 & VPE3 by CIRQ */
        drv_mdcirq_IRQ_NMI_unmask_per_vpe(vpe_id);
        drv_mdcirq_IRQ_NMI_unmask_per_vpe(vpe_id+1);    
    }  

    if (Check_hrt_Qbit==KAL_TRUE) 
    {/* Check 40Qbit due to we also disable VPE1's IRQ */

        dcm_service_hrt_DI_end[core_id] = ust_get_current_time();
        dcm_service_hrt_DI_dur[core_id] = ust_us_duration(dcm_service_hrt_DI_start[core_id], dcm_service_hrt_DI_end[core_id]);
        
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
        if( (dcm_service_hrt_DI_dur[core_id] > query_Qbits_criteria_HRT_us()) )
#else
        if( (dcm_service_hrt_DI_dur[core_id] > query_Qbits_criteria_HRT_us()) && !L1_CHECK_ASSERT_BYPASS() )
#endif
        {
            #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif
            IFDEF_PRODUCTION(EXT_ASSERT(0, dcm_service_hrt_DI_dur[core_id], dcm_service_hrt_DI_start[core_id], query_Qbits_criteria_HRT_us()));
        }

#if defined(__PRODUCTION_RELEASE__)
        /* No Check in User load */
#else  /* Eng load */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __PRODUCTION_RELEASE__ */ 

        /* VPE0 would mask VPE1's IRQ and check 40Q bit, so we restore TC0's priority after enable VPE1's IRQ and HRT check. */
        /* Note: Before entering DORMANT, we would restore TC0's priority and don't check HRT Qbit after dormant. */
        miu_save_and_set_c0_tcschedule_grp(NORMAL_TC0_GROUP);
    }
    
}

 /*------------------------------------------------------------------------
 * void    dcm_service_unmask_vpe_irq_leave_dormant
 * Purpose:	   Unmask cirq trigger to specify vpe when leaving DORMANT.
 *             This function copy from dcm_service_unmask_vpe_irq() and could be use for each VPE.
 *             This function is only designed for DCM_Service_Handler() and DCM_Service_vpe1_dormant_leave().
 * Parameters:
 *    Input:	kal_uint32 vpe_id
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    Called in VPE0 and VPE2's DCM_Service_Handler() and VPE1 and VPE3's DCM_Service_vpe1_dormant_leave().
 *              
 *------------------------------------------------------------------------
 */
static void dcm_service_unmask_vpe_irq_leave_dormant(kal_uint32 vpe_id)
{    
        
    /* Set VPE's state to his VPE state */   
    /* The state in GCR would be reset after dormant, so we must re-init it before receiving IRQ, 
       or it would ASSERT in drv_mdcirq_Restore_VPE_state() of isrC_Main(). */        
    drv_mdcirq_Set_VPE_state(vpe_id, dcm_vpe_x_state[vpe_id]);
  
    /* Unmask VPE by CIRQ */
    drv_mdcirq_IRQ_NMI_unmask_per_vpe(vpe_id); 

}

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
__attribute__((section("ISPRAM_ROCODE_CORE0"))) __attribute__((code_readble("no")))
#endif
void dcm_service_core0_vpe0_leave_wait_lisr(kal_uint32 irqx)
{
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    DEBUG_ASSERT(0);
    MDCIRQ_Deactivate_LISR_without_ITC(irqx);
#else
    Deactivate_LISR(irqx);
#endif
}

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
__attribute__((section("ISPRAM_ROCODE_CORE1"))) __attribute__((code_readble("no")))
#endif
void dcm_service_core1_vpe0_leave_wait_lisr(kal_uint32 irqx)
{   
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    DEBUG_ASSERT(0);
    MDCIRQ_Deactivate_LISR_without_ITC(irqx);
#else
    Deactivate_LISR(irqx);
#endif
}

#endif

#if defined(DCM_SUPPORT) && defined (DCM_LPM_ENABLE)
 /*------------------------------------------------------------------------
 * static void DCM_Service_Print_and_Update_LPM
 * Purpose:	   DCM debugging use. Print the LPM signal and change setting if need.
 * Parameters:
 *    Input:	vpe_id:     VPE ID. 
 *              OST_ReadyToSlept:  
 *              
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    None.
 *              
 *------------------------------------------------------------------------
 */
static void DCM_Service_Print_and_Update_LPM(kal_uint32 vpe_id, kal_checksleep_e OST_ReadyToSlept)
 {
    kal_uint32 cur_time = ust_get_current_time();
    static kal_uint32 print_time;
    if(vpe_id == 0 && OSTD_WAIT == OST_ReadyToSlept && ((cur_time-print_time) > 5000000))
    {
        print_time = cur_time;
        lpm_trace(&dcm_service_lpm_ctrl);

        if(dcm_service_lpm_change)
        {
            lpm_set(&dcm_service_lpm_ctrl);
            dcm_service_lpm_change = KAL_FALSE;
        }
    }
 }
#endif

/*****************************************************************************
 * Public Function for users                                                          *
 *****************************************************************************/
 /*------------------------------------------------------------------------
 * void    DCM_Service_Change_LPM_Setting
 * Purpose:	   DCM debugging use. Change the LPM signal setting .
 * Parameters:
 *    Input:	lpm_32K:     LPM clock is 32K or 104M 
 *              ext_src_sel: MUX selection 
 *              src_sel:     signal bit select
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    Called by AT command.
 *              
 *------------------------------------------------------------------------
 */
void DCM_Service_Change_LPM_Setting(kal_bool lpm_32K, kal_uint32 ext_src_sel, kal_uint32 src_sel)
{
#if defined(DCM_SUPPORT) && defined (DCM_LPM_ENABLE) 
    LPM_SRC_CLK_T lpm_src_clk = SRC_CLK_32K;
    dcm_service_lpm_ctrl.ext_src_sel = ext_src_sel; //MUX selection
    dcm_service_lpm_ctrl.src_sel = src_sel; // signal bit select

    lpm_src_clk = (lpm_32K==KAL_TRUE)?SRC_CLK_32K:SRC_CLK_104M;
    dcm_service_lpm_ctrl.lpm_src_clk = lpm_src_clk; //LPM CLK, 1:32K 0:104M 
    //dcm_service_lpm_ctrl.lpm_edge_sel = src_sel; // L2H or H2L
    
    MM_Sync();/* Add this sync to avoid MIPs IA run out of order */
    dcm_service_lpm_change = KAL_TRUE;
#endif
}

 /*------------------------------------------------------------------------
 * void    DCM_Service_Init
 * Purpose:	   Init dormant related functions .
 * Parameters:
 *    Input:	None.
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    Called in Per-CORE's VPE 0 IdleTask and only execute once. Only Per-CORE's VPE 0 could call this function.
 *              
 *------------------------------------------------------------------------
 */
void DCM_Service_Init(void)
{
    
#if defined(DCM_IT_TEST)
    DCM_Service_IT_test_init();
#endif

#if defined(LOWPWER_ENTER_PAUSE_MODE)
    NU_TASK *IdleTaskTCB;
    kal_uint32 core_id, vpe_id;
    dormant_mode_init();
	
    core_id = kal_get_current_core_id();
    vpe_id = kal_get_current_vpe_id();  

    if((vpe_id&0x1) == 0)
    {/* All CORE's VPE 0 */
        dcm_service_CoreStatus[core_id] = DCM_STATUS_NORMAL;         

        /* Per-CORE's VPE1 init done or not. (Per-CORE's VPE0 help VPE1 init done to confirm they can enter DORMANT at first time.) */
        dcm_service_core_x_vpe1_init_state[core_id]=1;
        
        if(0 == core_id)
        {/* CORE 0 VPE 0 */

    #if defined (__MODEM_CCCI_EXIST__)        
            kal_bool QueryStatus;
            QueryStatus = EMM_DirInfo_Query(EMM_DIRECT_WRITE_IDLETASK, &dcm_emm_start_address, &dcm_emm_size);
            if( QueryStatus == KAL_TRUE)
            {
                dcm_emm_init_done = 1;
                if(DCM_EMM_INDEX_MAX>(dcm_emm_size>>2))
                {
                    IFDEF_PRODUCTION(EXT_ASSERT(0, DCM_EMM_INDEX_MAX, dcm_emm_start_address, dcm_emm_size));
                }
            } 
            
    #endif

    /* For using LPM to verify DCM */
    #if defined(DCM_SUPPORT) && defined (DCM_LPM_ENABLE)
            dcm_service_lpm_ctrl.ext_src_sel = LV1_DCM_MON_SRC_IN_MUX0;
            //dcm_service_lpm_ctrl.src_sel = LV1_MUX0_MDCORE_CK_IDLE_GATED_IA; 
            //dcm_service_lpm_ctrl.src_sel = LV1_MUX0_MDCORE_CK_IDLE_GATED_uSIP;
            dcm_service_lpm_ctrl.src_sel = LV1_MUX0_MDCORE_CK_IDLE_GATED_ALL;
            dcm_service_lpm_ctrl.good_duration = 0;
            dcm_service_lpm_ctrl.lpm_src_clk = SRC_CLK_32K;
            dcm_service_lpm_ctrl.lpm_edge_sel = L2H;
            dcm_service_lpm_ctrl.us_time = 0;            
            lpm_set(&dcm_service_lpm_ctrl);
    #endif

            /* Get each VPE state for idle task. */
            IdleTaskTCB = (NU_TASK*)kal_get_task_by_moduleID(MOD_IDLE);
            dcm_vpe_x_state[0] = (IdleTaskTCB -> tc_priority) + VPE_STATUS_HISR_TASK_HIGHEST;
            IdleTaskTCB = (NU_TASK*)kal_get_task_by_moduleID(MOD_IDLE1);
            dcm_vpe_x_state[1] = (IdleTaskTCB -> tc_priority) + VPE_STATUS_HISR_TASK_HIGHEST;            
            IdleTaskTCB = (NU_TASK*)kal_get_task_by_moduleID(MOD_IDLE2);
            dcm_vpe_x_state[2] = (IdleTaskTCB -> tc_priority) + VPE_STATUS_HISR_TASK_HIGHEST;
            IdleTaskTCB = (NU_TASK*)kal_get_task_by_moduleID(MOD_IDLE3);
            dcm_vpe_x_state[3] = (IdleTaskTCB -> tc_priority) + VPE_STATUS_HISR_TASK_HIGHEST; 

            /* Register ISR for Per-CORE VPE1 trigger to VPE0 */
            IRQ_Register_LISR(IRQ_SW_CORE0_VPE0_LEAVE_WAIT, dcm_service_core0_vpe0_leave_wait_lisr, "DCM_0");
            IRQSensitivity(IRQ_SW_CORE0_VPE0_LEAVE_WAIT, LEVEL_SENSITIVE);/* level trigger */ 
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
            IRQMask(IRQ_SW_CORE0_VPE0_LEAVE_WAIT);
#else
            IRQUnmask(IRQ_SW_CORE0_VPE0_LEAVE_WAIT);
#endif
            
            IRQ_Register_LISR(IRQ_SW_CORE1_VPE0_LEAVE_WAIT, dcm_service_core1_vpe0_leave_wait_lisr, "DCM_1");
            IRQSensitivity(IRQ_SW_CORE1_VPE0_LEAVE_WAIT, LEVEL_SENSITIVE);/* level trigger */  
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
            IRQMask(IRQ_SW_CORE1_VPE0_LEAVE_WAIT);  
#else
            IRQUnmask(IRQ_SW_CORE1_VPE0_LEAVE_WAIT);  
#endif
            
            //core0 DCM_Service_init should be ready before enter sleep
            DCM_Service_InitDone = KAL_TRUE;
        }        
    }
    else
    {/* All CORE's VPE 1 */ /* Only Per-CORE's VPE 0 could run this function */
        ASSERT(0);
    }
#endif
}

 /*------------------------------------------------------------------------
 * void    DCM_Service_Set_Dormant_Abort
 * Purpose:	   When dormant abort, call this function to let sleep flow know dormant abort.
 * Parameters:
 *    Input:	None.
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    Called in Per-CORE's VPE 0 in interAptiv-dormantMode_gcc.S when dormant abort.
 *              
 *------------------------------------------------------------------------
 */
void DCM_Service_Set_Dormant_Abort(void)
{
    kal_uint32 core_id = kal_get_current_core_id();
    DCM_Service_Dormant_Abort[core_id] = KAL_TRUE;
}

 /*------------------------------------------------------------------------
 * void    mips_enter_wait_mode
 * Purpose:	   Enter wait mode. 
 * Parameters:
 *    Input:	None.
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    Called in DCM_Service_Handler() by Per-core's VPE0 and Called in DCM_Service_Handler_Slave() by Per-core's VPE1.
 *               
 *------------------------------------------------------------------------
 */
void mips_enter_wait_mode(void)
{
    kal_uint32 vpe_id = 0, DCM_CP0_status = 0;
    vpe_id = kal_get_current_vpe_id();
#if defined(LOWPWER_ENTER_PAUSE_MODE)    
    kal_uint32 core_id = kal_get_current_core_id();    
#endif

    //disable WDT
    drv_rstctl_clr_check_bit((vpeid_e)vpe_id);

#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    dcm_service_step_logging(vpe_id, DCM_WFI_WAIT_ENTER);
#endif

    dcm_service_enter_wait_time[vpe_id] = ust_get_current_time();
#if defined (__MODEM_CCCI_EXIST__)	
    DCM_EMM_WriteDbgInfo((DCM_EMM_VPE0_IDLE_TASK_WFI_ENTER + (vpe_id<<1)), (void*)&dcm_service_enter_wait_time[vpe_id]);
#endif

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    /* Set the WAIT parameter to let his VPE0 know VPE1 is in WAIT. */
    dcm_service_core_x_vpe1_in_wait_state[core_id] = KAL_TRUE;

#if defined(LOWPWER_ENTER_PAUSE_MODE)
    MM_Sync();/* Add this sync to avoid iA run out of order */

    if(vpe_id&0x1)
    {/* Per-CORE's VPE1 would run */

        /* Trigger IRQ to his VPE0 */
        if(vpe_id==1)
        {
            MDCIRQ_Activate_LISR_without_ITC(IRQ_SW_CORE0_VPE0_LEAVE_WAIT);
        }
        else if(vpe_id==3)
        {
            MDCIRQ_Activate_LISR_without_ITC(IRQ_SW_CORE1_VPE0_LEAVE_WAIT);
        }
    }
#endif
#else
#if defined(LOWPWER_ENTER_PAUSE_MODE)
    if(vpe_id&0x1)
    {/* Per-CORE's VPE1 would run */

        /* Trigger IRQ to his VPE0 */
        if(vpe_id==1)
        {
            Activate_LISR(IRQ_SW_CORE0_VPE0_LEAVE_WAIT);
        }
        else if(vpe_id==3)
        {
            Activate_LISR(IRQ_SW_CORE1_VPE0_LEAVE_WAIT);
        }

        /* Set the WAIT parameter to let his VPE0 know VPE1 is in WAIT. */
        dcm_service_core_x_vpe1_in_wait_state[core_id] = KAL_TRUE;
    }
#endif
#endif

    /* Note: Don't add function here due to we should let "dcm_service_core_x_vpe1_in_wait_state[core_id] = KAL_TRUE" close WAIT. */

    /* We must DI, then enter WAIT. */
    DCM_CP0_status = miu_mfc0(MIU_C0_STATUS);
    if((DCM_CP0_status&0x1)!=0x0)
    {
        EXT_ASSERT(0, vpe_id, DCM_CP0_status, 0);
    }

    /* "WAIT" instruction */  
    miu_wait();
    
    /* Note!! If per-core's VPE 1 recover from DORMANT, it wouldn't run below. 
       It would run dormant recover... -> DCM_Service_vpe1_dormant_leave() */

#if defined(LOWPWER_ENTER_PAUSE_MODE)
    if(vpe_id&0x1)
    {/* Per-CORE's VPE1 would run */
        /* leave WAIT */
        dcm_service_core_x_vpe1_in_wait_state[core_id] = KAL_FALSE;
    }
#endif

    dcm_service_leave_wait_time[vpe_id] = ust_get_current_time_source();
#if defined (__MODEM_CCCI_EXIST__)
    DCM_EMM_WriteDbgInfo((DCM_EMM_VPE0_IDLE_TASK_WFI_LEAVE + (vpe_id<<1)), (void*)&dcm_service_leave_wait_time[vpe_id]);
#endif

#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    dcm_service_step_logging(vpe_id, DCM_WFI_WAIT_LEAVE);
#endif

    drv_rstctl_set_check_bit((vpeid_e)vpe_id);
    drv_rstctl_set_kick_bit((vpeid_e)vpe_id);
    dcm_service_vpe_wait_sum_usc[vpe_id]+= ust_us_duration(dcm_service_enter_wait_time[vpe_id], dcm_service_leave_wait_time[vpe_id]);
}

 /*------------------------------------------------------------------------
 * void    DCM_Service_Handler
 * Purpose:	   Per-CORE's VPE 0's DCM Service Handler. Called in idle task.
 * Parameters:
 *    Input:	None.
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    Called in VPE0 and VPE2's IdleTask and execute in while loop.
 *              
 *------------------------------------------------------------------------
 */
void DCM_Service_Handler(void)
{
    kal_uint32 vpe_id;
    kal_uint32 _savedMask;    
    kal_checksleep_e OST_ReadyToSlept = OSTD_WAIT;	
    kal_uint32 DCM_CP0_status = 0;    
#if defined(LOWPWER_ENTER_PAUSE_MODE)	
    kal_uint32 core_id = kal_get_current_core_id();
    STATUS quit_scheduler;	
    kal_uint32 swLockSleep, validSleepTime = 0;
    kal_uint32 core1_status = 0;
    kal_bool core_x_vpe1_wait_state = KAL_FALSE;
    kal_bool core_x_vpe1_pending_irq_status = KAL_FALSE;
    Sleep_Time allow_sleep_dur;
    kal_bool directly_wait = KAL_FALSE;

    //kal_uint32 start = 0, end = 0, duration = 0;    
#endif /* LOWPWER_ENTER_PAUSE_MODE */

    vpe_id = kal_get_current_vpe_id();

    if(vpe_id&0x1)
    {/* Only Per-CORE's VPE 0 could run this function */
        ASSERT(0);
    }

    dcm_service_step_logging(vpe_id, DCM_HANDLDER_ENTER);

    if(0 == vpe_id)
    {/* Request by SD10 to flush low power log, only enable by "AT+EGCMD=9487" AT CMD and default off. */
    	SleepDrv_LowPowerMonitorFlushCheck();/* enable when lpm.LPM_NVRAM_LogOn==1 */
    }

#if defined(LOWPWER_ENTER_PAUSE_MODE)
    if(DCM_Service_InitDone == KAL_FALSE)
        return;

    if(dcm_service_core_x_vpe1_init_state[core_id]==0)
    {
        //VPE1 init is not ready
        return;
    }

    if(dcm_service_vpe_real_dormant_times[vpe_id]!=dcm_service_vpe_real_dormant_times[vpe_id+1])
    {/* This ASSERT need SD10 to analysis due to VPE 0 and VPE 1 didn't real enter dormant at the same time.(someone is dormant abort.)*/
        IFDEF_PRODUCTION(EXT_ASSERT(0, vpe_id, dcm_service_vpe_real_dormant_times[vpe_id], dcm_service_vpe_real_dormant_times[vpe_id+1]));
    }

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    /* Clear Per-Core's VPE1 wait IRQ here since VPE0 is re-running Idle_Task. */
    MDCIRQ_Deactivate_LISR_without_ITC(IRQ_SW_CORE0_VPE0_LEAVE_WAIT + core_id);
#endif

    if(0 == core_id)
    {/* CORE 0 VPE 0 would get the sleep time. */
        kal_get_sleep_time(&allow_sleep_dur);
    }
#endif

    /* Disable "DI"CIRQ smart dispatch for coreX VPE0 self, and disable IRQ */
    _savedMask = drv_mdcirq_DCM_DI();

#if defined(LOWPWER_ENTER_PAUSE_MODE)
    //start = ust_get_current_time();

  #if defined(__MDCIRQ_WAIT_MODE_ENABLE__)
    if(core_id == 1)
    {/* Only CORE 1 VPE 0 need to remove self from SMP group. */
        //Remove core 1 VPE 0 from SMP group.
        drv_mdcirq_mask_core(core_id);

        ust_us_busyloop(1);/* Wait 1us to avoid race condition. */
     
        /* CIRQ owner: In MT6293, this check must before masking VPE CIRQ, or it would check nothing. */
        if(drv_mdcirq_IRQ_B_NMI_B_status(vpe_id) == KAL_TRUE)
        {// means that there is pending interrupt on CORE 1 VPE 0.	      
            dcm_service_step_logging(vpe_id, DCM_CIRQ_WAIT_MODE_CHECK_PENDING_IRQ_FAIL);
    
            drv_mdcirq_unmask_core(core_id);/* Restore CORE 1 VPE 0 to SMP group. */     
            
            /* Enable "DI"CIRQ smart dispatch for coreX VPE0 self and enable IRQ */
            drv_mdcirq_DCM_EI(_savedMask); 
            
            return;
        }
        else
        {
            /* Keep going. */
        }
        
    }
  #endif

    quit_scheduler = NU_Core_Remove_From_Scheduling();/* Remove this CORE's VPE 0 & VPE 1 from scheduler */ 
    if (NU_CORE_NOT_FREE == quit_scheduler) /*Not quit scheduler*/
    {
        dcm_service_step_logging(vpe_id, DCM_REMOVE_FROM_SCHEDULING_FAIL);
        
        /* Enable "DI"CIRQ smart dispatch for coreX VPE0 self and enable IRQ */
        drv_mdcirq_DCM_EI(_savedMask);    

        return;
    }

    dcm_service_step_logging(vpe_id, DCM_REMOVE_FROM_SCHEDULING_OK);

    /* To avoid spurious interrupt, we confirm per-CORE's VPE1 in wait before masking his IRQ. */
    if (dcm_service_core_x_vpe1_in_wait_state[core_id]!=KAL_TRUE) 
    {/* Since per-CORE's VPE1 is not in WAIT, we couldn't enter DORMANT. Per-CORE's VPE0 go to WAIT directly. */
        dcm_service_step_logging(vpe_id, DCM_DIRECTLY_WAIT);
        OST_ReadyToSlept = OSTD_WAIT;
        directly_wait = KAL_TRUE;

    #if defined(DCM_SERVICE_DEBUG)
        //For debug
        if(0 == core_id)
        {
            dcm_service_core0_status_log_index = (dcm_service_core0_status_log_index + 1) % DCM_SERVICE_CORE_STATUS_MAX;        
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].frc_ust = ust_get_current_time();
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].validSleepTime = 0xDEADBEEF;    
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].core1_status = 0xDEADBEEF;
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].swLockSleep = 0xDEADBEEF; 
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].core_x_vpe1_wait_state = KAL_FALSE;    
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].core_x_vpe1_pending_irq_status = 0xDEADBEEF;
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].OST_ReadyToSlept = OST_ReadyToSlept;
        }
        else/*1 == core_id*/
        {
            dcm_service_core1_status_log_index = (dcm_service_core1_status_log_index + 1) % DCM_SERVICE_CORE_STATUS_MAX;        
            dcm_service_core1_status_log[dcm_service_core1_status_log_index].frc_ust = ust_get_current_time();
            dcm_service_core1_status_log[dcm_service_core1_status_log_index].swLockSleep = 0xDEADBEEF; 
            dcm_service_core1_status_log[dcm_service_core1_status_log_index].core_x_vpe1_wait_state = KAL_FALSE;    
            dcm_service_core1_status_log[dcm_service_core1_status_log_index].core_x_vpe1_pending_irq_status = 0xDEADBEEF;
            dcm_service_core1_status_log[dcm_service_core1_status_log_index].OST_ReadyToSlept = OST_ReadyToSlept;             
        }
    #endif
        
    }
    else
    {/* Check CORE could go to DORMANT or not. */
        dcm_service_mask_vpe_irq(core_id, vpe_id);/* Mask VPE's IRQ from CIRQ!! */  
    
        if(drv_mdcirq_IRQ_B_NMI_B_status(vpe_id) == KAL_TRUE)
        {// means that there is pending interrupt. Per-CORE's VPE 0 check here.	      
            dcm_service_step_logging(vpe_id, DCM_CHECK_PENDING_IRQ_FAIL);
    
            dcm_service_unmask_vpe_irq(core_id, vpe_id, KAL_TRUE);
            NU_Core_Add_To_Scheduling(WHOLE_CORE);/* Add this CORE's VPE 0 & VPE 1 to scheduler */
            
            /* Enable "DI"CIRQ smart dispatch for coreX VPE0 self and enable IRQ */
            drv_mdcirq_DCM_EI(_savedMask);         
    
            return;
        }
    
        dcm_service_step_logging(vpe_id, DCM_CHECK_PENDING_IRQ_OK);
        swLockSleep = OSTD_CheckIsSleepLock();
        dcm_service_step_logging(vpe_id, DCM_CHECK_SW_LOCK_DONE);
        
        core_x_vpe1_pending_irq_status = drv_mdcirq_IRQ_B_NMI_B_status(vpe_id+1);/* Check IRQ pending for Per-CORE's VPE 1 here. */
        core_x_vpe1_wait_state = dcm_service_core_x_vpe1_in_wait_state[core_id];/* After masking IRQ of per-CORE's VPE1, we must check per-CORE's VPE1 is still in WAIT or not  */
    
        if(0 == core_id)
        {/* CORE 0 VPE 0 */
            core1_status = dcm_service_CoreStatus[1];
            
            if( (core1_status!=DCM_STATUS_DORMANT) || (DCMenterSleep==0) /* Force disable sleep */ 
                || (swLockSleep) || core_x_vpe1_wait_state!=KAL_TRUE || core_x_vpe1_pending_irq_status == KAL_TRUE )
            {/* WAIT case 1 */			
                dcm_service_step_logging(vpe_id, DCM_WAIT_CASE);
                OST_ReadyToSlept = OSTD_WAIT;            
            }
            else
            {/* Check validSleepTime, do OSTD_CheckSleep() */
    
                /* In kal_is_valid_sleep_time(), it would set AFN & UFN. We should prove no other VPE set AFN & UFN at the same time to
                   avoid race condition due to we don't take lock. 
                   So we call kal_is_valid_sleep_time() here due to all the other VPEs is in wait or DORMANT. */
                validSleepTime = kal_is_valid_sleep_time(&allow_sleep_dur);
                
                if(validSleepTime==0)
                {/* WAIT case 2 */
                    dcm_service_step_logging(vpe_id, DCM_NOT_SLEEP_TIME);
                    OST_ReadyToSlept = OSTD_WAIT;                
                }
                else
                {/* OSTD_CheckSleep() */
                    dcm_service_step_logging(vpe_id, DCM_CORE_CHECK_SLEEP);
                    OST_ReadyToSlept = OSTD_CheckSleep(); 
                    dcm_service_step_logging(vpe_id, DCM_CORE_CHECK_SLEEP_DONE);
                }
            }
    
        #if defined(DCM_SERVICE_DEBUG)
            //For debug
            dcm_service_core0_status_log_index = (dcm_service_core0_status_log_index + 1) % DCM_SERVICE_CORE_STATUS_MAX;        
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].frc_ust = ust_get_current_time();
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].validSleepTime = validSleepTime;    
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].core1_status = core1_status;
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].swLockSleep = swLockSleep; 
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].core_x_vpe1_wait_state = core_x_vpe1_wait_state;    
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].core_x_vpe1_pending_irq_status = core_x_vpe1_pending_irq_status;
            dcm_service_core0_status_log[dcm_service_core0_status_log_index].OST_ReadyToSlept = OST_ReadyToSlept;
        #endif        
    
        }
        else
        {/* CORE 1 VPE 0 */
            if( (swLockSleep) || core_x_vpe1_wait_state!=KAL_TRUE || core_x_vpe1_pending_irq_status == KAL_TRUE || (DCMenterSleep==0) /* Force disable sleep */)
            {/* WAIT */			
                dcm_service_step_logging(vpe_id, DCM_WAIT_CASE);
                OST_ReadyToSlept = OSTD_WAIT;            
            }
            else
            {/* do OSTD_CheckSleep() */
                dcm_service_step_logging(vpe_id, DCM_CORE_CHECK_SLEEP);
                OST_ReadyToSlept = OSTD_CheckSleep(); 
                dcm_service_step_logging(vpe_id, DCM_CORE_CHECK_SLEEP_DONE);
            }	
    
        #if defined(DCM_SERVICE_DEBUG)
            //For debug
            dcm_service_core1_status_log_index = (dcm_service_core1_status_log_index + 1) % DCM_SERVICE_CORE_STATUS_MAX;        
            dcm_service_core1_status_log[dcm_service_core1_status_log_index].frc_ust = ust_get_current_time();
            dcm_service_core1_status_log[dcm_service_core1_status_log_index].swLockSleep = swLockSleep; 
            dcm_service_core1_status_log[dcm_service_core1_status_log_index].core_x_vpe1_wait_state = core_x_vpe1_wait_state;    
            dcm_service_core1_status_log[dcm_service_core1_status_log_index].core_x_vpe1_pending_irq_status = core_x_vpe1_pending_irq_status;
            dcm_service_core1_status_log[dcm_service_core1_status_log_index].OST_ReadyToSlept = OST_ReadyToSlept;  
        #endif
            
        }
        
    }
    
    /*-----Below Check 60 Qbit before enter WAIT/DORMANT-----*/
    #if 0/* Since we would check HRT Qbit, we don't need to check SMP Qbit here.  */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
/* under construction !*/
#endif
/* under construction !*/
            #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif
    /*-----Above Check 60 Qbit before enter WAIT/DORMANT-----*/    
	
#endif /* LOWPWER_ENTER_PAUSE_MODE */


    if(OSTD_WAIT == OST_ReadyToSlept)
    {       
#if defined(LOWPWER_ENTER_PAUSE_MODE)
        if(directly_wait == KAL_TRUE)
        {
            dcm_service_step_logging(vpe_id, DCM_DIRECTLY_WAIT_ENTER);
            /* We didn't mask VPE IRQ, so no need to call dcm_service_unmask_vpe_irq() here. */
        }
        else
        {
            dcm_service_step_logging(vpe_id, DCM_OSTD_WAIT_ENTER); 
            dcm_service_unmask_vpe_irq(core_id, vpe_id, KAL_TRUE);
        }

  #if defined(__MDCIRQ_WAIT_MODE_ENABLE__)
        if(core_id == 1)
        {/* Only CORE 1 VPE 0 need to restore self to SMP group. */
            drv_mdcirq_unmask_core(core_id);/* Restore CORE 1 VPE 0 to SMP group. */
        }
  #endif

        NU_Core_Add_To_Scheduling(WHOLE_CORE);/* Add this CORE's VPE 0 & VPE 1 to scheduler */        
#endif

    /* For using LPM to verify DCM */
    #if defined(DCM_SUPPORT) && defined (DCM_LPM_ENABLE)
        if(vpe_id == 0)
        {
            lpm_start(&dcm_service_lpm_ctrl);
        }
    #endif

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
#if defined(LOWPWER_ENTER_PAUSE_MODE)
        /* We unmask Per-Core's VPE1 wait IRQ here due to VPE0 would enter WAIT. */
        IRQUnmask(IRQ_SW_CORE0_VPE0_LEAVE_WAIT + core_id); 
#endif
#endif

        dcm_service_step_logging(vpe_id, DCM_OSTD_WAIT);
        mips_enter_wait_mode();
        dcm_service_step_logging(vpe_id, DCM_OSTD_WAIT_LEAVE);

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
#if defined(LOWPWER_ENTER_PAUSE_MODE)
        /* We mask Per-Core's VPE1 wait IRQ here due to VPE0 leave WAIT. We could ignore this IRQ. */
        IRQMask(IRQ_SW_CORE0_VPE0_LEAVE_WAIT + core_id);  
#endif
#endif

    /* For using LPM to verify DCM */
    #if defined(DCM_SUPPORT) && defined (DCM_LPM_ENABLE)
        if(vpe_id == 0)
        {
            lpm_stop(&dcm_service_lpm_ctrl);
        }
    #endif        

    }
    else if(OSTD_BUSY == OST_ReadyToSlept)
    {
        dcm_service_step_logging(vpe_id, DCM_OSTD_BUSY);
        
#if defined(LOWPWER_ENTER_PAUSE_MODE)
        dcm_service_unmask_vpe_irq(core_id, vpe_id, KAL_TRUE);

  #if defined(__MDCIRQ_WAIT_MODE_ENABLE__)
        if(core_id == 1)
        {/* Only CORE 1 VPE 0 need to restore self to SMP group. */
            drv_mdcirq_unmask_core(core_id);/* Restore CORE 1 VPE 0 to SMP group. */
        }
  #endif
				
        NU_Core_Add_To_Scheduling(WHOLE_CORE);/* Add this CORE's VPE 0 & VPE 1 to scheduler */
        // do nothing, to re-entry handler soon
#endif    
    }
    else if(OSTD_DORMANT == OST_ReadyToSlept)
    {
        dcm_service_step_logging(vpe_id, DCM_OSTD_DORMANT_ENTER);
        
#if defined(LOWPWER_ENTER_PAUSE_MODE)    
        /* We should restore TC0's priority before DORMANT due to there is no HRT Qbit check. */
        miu_save_and_set_c0_tcschedule_grp(NORMAL_TC0_GROUP);
						
        if (core_id == 0)
        {
            //kick WDT
            drv_rstctl_set_kick_bit((vpeid_e)vpe_id);

            /* When CORE0 go to sleep, Only Enable clock disable */
            IFDEF_DCM(DCM_IA_DCM_Control(KAL_TRUE, DCM_IA_DCM_ONLY_CLK_DISABLE),);     

            /* Call before sleep, request by SD10 */
            dcm_service_step_logging(vpe_id, DCM_OSTD_PTP_SLEEP_ENTER);
            ptp_sleep();
            dcm_service_step_logging(vpe_id, DCM_OSTD_PTP_SLEEP_LEAVE);
        }
        else/* CORE1 */
        {
            //disable WDT
            drv_rstctl_clr_check_bit((vpeid_e)vpe_id);

            /* When CORE1 go to sleep, disable the memslp control path of core1 */
            IFDEF_DCM(DCM_IA_DCM_Core1_Memslp_Path_Control(KAL_FALSE),);            
        }
        
        dcm_service_CoreStatus[core_id] = DCM_STATUS_DORMANT;	

        dcm_service_core_x_dormant_time[core_id].dcm_service_enter_dormant_frc = ust_get_current_time();
        dcm_service_core_x_dormant_time[core_id].dcm_service_dor_abort_leave_dormant_frc = 0;  
        dcm_service_core_x_dormant_time[core_id].dcm_service_leave_dormant_frc = 0;        
        
    #if defined (__MODEM_CCCI_EXIST__)		
        if (OSTD_Infinite_Sleep_Query())
        {
            DCM_EMM_WriteDbgInfo((DCM_EMM_Core0_INFINITESLEEP_WFI + core_id), (void*)&(dcm_service_core_x_dormant_time[core_id].dcm_service_enter_dormant_frc));
        }
        else
        {
            DCM_EMM_WriteDbgInfo((DCM_EMM_VPE0_IDLE_TASK_SLEEP_ENTER + (vpe_id*3)), (void*)&(dcm_service_core_x_dormant_time[core_id].dcm_service_enter_dormant_frc));
        }
    #endif //#if defined (__MODEM_CCCI_EXIST__)
		
        dcm_service_core_x_vpe1_init_state[core_id] = 0; //clear VPE1 init state by VPE0.
        
        /* ---Enter DORMANT Mode--- */
        
        dormant_mode_activate();

        /* ---Leave DORMANT Mode--- */

        dcm_service_CoreStatus[core_id] = DCM_STATUS_NORMAL;

        if (core_id == 0)
        {/* When CORE0 wake up, Enable memslp function + clock disable @WFI */
            IFDEF_DCM(DCM_IA_DCM_Control(KAL_TRUE, DCM_IA_DCM_MEMSLP_AND_CLK_DISABLE),);  

            /* Call after wakeup, request by SD10 */
            dcm_service_step_logging(vpe_id, DCM_OSTD_PTP_WAKE_ENTER);
            ptp_wake();
            dcm_service_step_logging(vpe_id, DCM_OSTD_PTP_WAKE_LEAVE);	

            /* After DORMANT(No matter dormant abort or not), VPE0 check DCXO_RDY_WO_ACK to know 26M is ready or not. */
            IFDEF_PRODUCTION(EXT_ASSERT(((*REG_MDTOP_PLLMIXED_DCXO_RDY_WO_ACK)&0x1)==0x0, (*REG_MDTOP_PLLMIXED_DCXO_RDY_WO_ACK), 26, 0));            
        }
        else/* CORE1 */
        {/* When CORE1 wake up, enable the memslp control path of core1 */
            IFDEF_DCM(DCM_IA_DCM_Core1_Memslp_Path_Control(KAL_TRUE),);            
        }

        /* After DORMANT(No matter dormant abort or not), Per-core's VPE0 call SD10's check function. */
        MD_TOPSM_GetErrorStatus();

        if(DCM_Service_Dormant_Abort[core_id]==KAL_TRUE)
        {/* 1. DORMANT abort ==> run WAIT flow */
            dcm_service_core_x_dormant_time[core_id].dcm_service_dor_abort_leave_dormant_frc = ust_get_current_time();
            dcm_service_core_x_dormant_abort_sum_usc[core_id] += ust_us_duration(dcm_service_core_x_dormant_time[core_id].dcm_service_enter_dormant_frc, dcm_service_core_x_dormant_time[core_id].dcm_service_dor_abort_leave_dormant_frc);
            
            /* When DORMANT abort, Per-CORE's VPE1 is still in wait and his dcm_service_core_x_vpe1_init_state==0. We should re-init by VPE0. */
            dcm_service_core_x_vpe1_init_state[core_id] = 1; 

            DCM_Service_Dormant_Abort[core_id] = KAL_FALSE;/* reset Dormant Abort parameter */

        #if defined (__MODEM_CCCI_EXIST__)	
            DCM_EMM_WriteDbgInfo((DCM_EMM_VPE0_IDLE_TASK_SLEEP_DORMANT_ABORT_LEAVE + (vpe_id*3)), (void*)&(dcm_service_core_x_dormant_time[core_id].dcm_service_dor_abort_leave_dormant_frc));
        #endif

            dcm_service_step_logging(vpe_id, DCM_OSTD_DORMANT_ABORT_LEAVE);        

            /* We don't check HRT Qbit when OSTD_DORMANT */ 
            dcm_service_unmask_vpe_irq(core_id, vpe_id, KAL_FALSE);

        #if defined(__MDCIRQ_WAIT_MODE_ENABLE__)
            if(core_id == 1)
            {/* Only CORE 1 VPE 0 need to restore self to SMP group. */
                drv_mdcirq_unmask_core(core_id);/* Restore CORE 1 VPE 0 to SMP group. */
            }
        #endif
    		
            NU_Core_Add_To_Scheduling(WHOLE_CORE);/* Add this CORE's VPE 0 & VPE 1 to scheduler */        
    
            dcm_service_step_logging(vpe_id, DCM_OSTD_DORMANT_ABORT_WAIT);
            mips_enter_wait_mode();
            dcm_service_step_logging(vpe_id, DCM_OSTD_DORMANT_ABORT_WAIT_LEAVE);            
            
        }
        else
        {/* 2. Really restore from DORMANT */

            dcm_service_core_x_dormant_time[core_id].dcm_service_leave_dormant_frc = ust_get_current_time();
            dcm_service_core_x_dormant_sum_usc[core_id] += ust_us_duration(dcm_service_core_x_dormant_time[core_id].dcm_service_enter_dormant_frc, dcm_service_core_x_dormant_time[core_id].dcm_service_leave_dormant_frc);

            dcm_service_vpe_real_dormant_times[vpe_id]++;
    
        #if defined (__MODEM_CCCI_EXIST__)	
            DCM_EMM_WriteDbgInfo((DCM_EMM_VPE0_IDLE_TASK_SLEEP_LEAVE + (vpe_id*3)), (void*)&(dcm_service_core_x_dormant_time[core_id].dcm_service_leave_dormant_frc));
        #endif
    		
            dcm_service_step_logging(vpe_id, DCM_OSTD_DORMANT_LEAVE);
    
            /* CIRQ HW issue. After CORE power done, the IE bit sampling configuration would miss. 
            We re-disable it again to let IRQ could wakeup second WAIT. It is a SW work around offered by CIRQ owner. */
            drv_mdcirq_DCM_DI_Recover();
        
            dcm_service_unmask_vpe_irq_leave_dormant(vpe_id);

        #if defined(__MDCIRQ_WAIT_MODE_ENABLE__)
            if(core_id == 1)
            {/* Only CORE 1 VPE 0 need to restore self to SMP group. */
                drv_mdcirq_unmask_core(core_id);/* Restore CORE 1 VPE 0 to SMP group. */
            }
        #endif
    		
            NU_Core_Add_To_Scheduling(SINGLE_VPE);/* Add this CORE's VPE 0 to scheduler */ /* VPE 1 would add to Scheduler by himself */
            
            dcm_service_step_logging(vpe_id, DCM_OSTD_DORMANT_WAIT);
            /* Enter WAIT mode agian due to wakeup event would come first, and IRQ comes later. 
               By the way, for CORE1, some user(EX: 4G timer) may only trigger IRQ to VPE1 with wakeup event, 
               so CORE1 VPE0 may stay in this wait for a long time. */          
            mips_enter_wait_mode();
            dcm_service_step_logging(vpe_id, DCM_OSTD_DORMANT_WAIT_LEAVE);            
        }
       
#else /* This path didn't support. */
        ASSERT(0);
#endif
		
    }
    else
    {
        dcm_service_step_logging(vpe_id, DCM_OSTD_INVALID_CASE);
        ASSERT(0);
    }

#if defined(LOWPWER_ENTER_PAUSE_MODE) 
    if(core_id == 1) 
    {/* CSC IRQ would cause leaving from wait, so we put here to clear. */
        /* Note: For CORE0, SD10 clear DORMANT abort states in OSTD_Interrupt().
                 For CORE1, SD10 clear DORMANT abort states in OSTD_CSC_handler(). */        
        OSTD_CSC_handler(); /* External function from SD10. Core 1 clear CSC IM bit & CSC IRQ. */
    }

  #if defined(__PRODUCTION_RELEASE__)
    /* No Check in User load */
  #else  /* Eng load */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
  #endif    
#endif

    dcm_service_step_logging(vpe_id, DCM_HANDLDER_LEAVE);

    /* We must DI, then leave WAIT. */
    DCM_CP0_status = miu_mfc0(MIU_C0_STATUS);
    if((DCM_CP0_status&0x1)!=0x0)
    {
        EXT_ASSERT(0, vpe_id, DCM_CP0_status, 0);
    }

    /* Enable "DI"CIRQ smart dispatch for coreX VPE0 self and enable IRQ */
    drv_mdcirq_DCM_EI(_savedMask);

    /* For using LPM to verify DCM */
  #if defined(DCM_SUPPORT) && defined (DCM_LPM_ENABLE)
    DCM_Service_Print_and_Update_LPM(vpe_id, OST_ReadyToSlept);
  #endif 
    
}

 /*------------------------------------------------------------------------
 * void    DCM_Service_Handler_Slave
 * Purpose:	   Per-CORE's VPE 1's DCM Service Handler. Called in idle task.
 * Parameters:
 *    Input:	None.
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    Called in VPE1 and VPE3's IdleTask and execute in while loop.
 *              
 *------------------------------------------------------------------------
 */
void DCM_Service_Handler_Slave(void)
{
    kal_uint32 /*core_id, */vpe_id;    
    kal_uint32 _savedMask; 

//    core_id = kal_get_current_core_id();
    vpe_id = kal_get_current_vpe_id();

    if( (vpe_id&0x1)!=1 )
    {/* Only Per-CORE's VPE 1 could run this function */
        ASSERT(0);
    }

#if defined(LOWPWER_ENTER_PAUSE_MODE)
    /* wait init done. */
    if(DCM_Service_InitDone == KAL_FALSE)
        return;
#endif
    
    /* Disable "DI"CIRQ smart dispatch for VPE1 and disable IRQ */
    _savedMask = drv_mdcirq_DCM_DI();

    mips_enter_wait_mode();

    /* Note!! If VPE 1 recover from DORMANT, it wouldn't run below. 
       It would run dormant recover... -> DCM_Service_vpe1_dormant_leave() */

    /* Enable "DI"CIRQ smart dispatch for VPE1 and enable IRQ */
    drv_mdcirq_DCM_EI(_savedMask);
    
}

 /*------------------------------------------------------------------------
 * void    DCM_Service_vpe1_dormant_leave
 * Purpose:	   When Per-CORE's VPE 1 leave DORMANT, re-run idle task.
 * Parameters:
 *    Input:	None.
 *              
 *    Output:	None.
 * returns :	None. 
 * Note    :    Only Per-CORE's VPE 1 would call this function. 
 *              This function only be called when Per-CORE's VPE 1 leave DORMANT.
 *------------------------------------------------------------------------
 */
void DCM_Service_vpe1_dormant_leave(void)
{/* Called in interAptiv-dormantMode_gcc.S */
    
#if defined(LOWPWER_ENTER_PAUSE_MODE)    
    kal_uint32 core_id = kal_get_current_core_id();
    kal_uint32 vpe_id = kal_get_current_vpe_id(); 
    kal_uint32 DCM_CP0_status = 0;
    
    dcm_service_core_x_vpe1_leave_dormant_frc[core_id] = ust_get_current_time();

    dcm_service_step_logging(vpe_id, DCM_OSTD_DORMANT_LEAVE);
#if defined (__MODEM_CCCI_EXIST__)	
    DCM_EMM_WriteDbgInfo((DCM_EMM_VPE0_IDLE_TASK_SLEEP_LEAVE + (vpe_id*3)), (void*)&dcm_service_core_x_vpe1_leave_dormant_frc[core_id]);
#endif

    /* Clear the WAIT parameter to let his VPE0 know VPE1 is not in WAIT. */
    dcm_service_core_x_vpe1_in_wait_state[core_id] = KAL_FALSE;

    /* For 6293 IPL= 0x8 means IRQ unmask. VPE1 & VPE3 should only unmask CIRQ. */
    DCM_CP0_status = miu_mfc0(MIU_C0_STATUS);
    if((DCM_CP0_status&0xFC00)!=0x2000)
    {
        EXT_ASSERT(0, vpe_id, DCM_CP0_status, 0);
    }
    
#if 0 /* Note: Don't open this check!! This is just for comment only. */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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

    dcm_service_vpe_real_dormant_times[vpe_id]++;
    
    drv_rstctl_set_check_bit((vpeid_e)vpe_id);
    drv_rstctl_set_kick_bit((vpeid_e)vpe_id);

    dcm_service_unmask_vpe_irq_leave_dormant(vpe_id);

    /* Enable "DI"CIRQ smart dispatch for VPE1 */ 
    drv_mdcirq_IBit_sampling_enable(vpe_id, KAL_TRUE);/* Note: We must not enable IRQ here. We enable IRQ in sceduler. */

    /* We disable IRQ and enter DORMANT.(So no one restore IRQ after entering DORMANT). 
       Before VPE1 re-run the scheduler, we should restore "sst_hrt_qbit_count" and "di_tc" to avoid checking fail. */
    interrupt_sleep_init(vpe_id);

    dcm_service_core_x_vpe1_init_state[core_id] = 1; //VPE1 init is ready.

    dcm_service_step_logging(vpe_id, DCM_VPE1_ENTER_SCHED);

    /* Add this CORE's VPE 1 to scheduler and re-run idle task in TCCT_Schedule */
    NU_Core_Add_To_Scheduling(SINGLE_VPE);
#endif    

}

#endif //__MTK_TARGET__
