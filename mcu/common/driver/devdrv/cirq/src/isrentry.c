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
 *   isrentry.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This Module defines the IRQ service routines for all IRQ sources
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
 *
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
 *
 *
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
 *
 *
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
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
 *
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
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*******************************************************************************
 * Include header files.
 *******************************************************************************/
#ifdef __MTK_TARGET__
#include <mips/mt.h>
#endif
#include "reg_base.h"
#include "isrentry.h"
#include "intrCtrl.h"
#include "drv_comm.h"
#include "dcl.h"
#include "drv_hisr.h"
#include "kal_internal_api.h"
#include "kal_hrt_api.h"
#include "tst_lmu_hw.h"
#include "sync_data.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "us_timer.h"
#include "drv_mdcirq.h"
#include "drv_mdcirq_reg.h"
#include "devdrv_ls.h"
#include "kal_iram_section_defs.h"
#include "drv_vpe_irq.h"
#include <ex_public.h>

#if defined(__ESL_DBG_UTIL__)
#include "esl_debug.h"
#else  /* __ESL_DBG_UTIL__ */
#define esl_printf(donothing...) do {;}while(0)
#endif /* __ESL_DBG_UTIL__ */

/*************************************************************************
 * Define function prototypes and data structures.
 *************************************************************************/
extern void isrSysTimer(void);

#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
extern void IAPMU_CM_Logging_LISR(kal_uint32 ID, kal_uint8 VPEID);
#endif

extern void kal_hrt_mt_save(kal_uint32 irqvector, kal_mt_stack_ptr *stack_ptr, kal_mt_tc_status tc_status[]);
extern void kal_hrt_mt_restore(kal_uint32 irqvector, kal_mt_stack_ptr *stack_ptr, kal_mt_tc_status tc_status[]);

/*************************************************************************
 * Define imported global data.
 *************************************************************************/

#if !defined(__NUCLEUS_VERSION_2__)
extern kal_uint32  TCD_Interrupt_Count;
#endif /* !__NUCLEUS_VERSION_2__ */

extern kal_uint8* SA_LoggingIndex[];
extern kal_uint8* ST_memory[];
extern void SLA_LoggingLISR(kal_uint32 ID, kal_uint32 VPEID);
extern kal_uint32 SLA_HookLogging(kal_uint8 VPEID);
extern kal_uint32 ST_MALMO_ASM_ChangeContextID(kal_uint8 VPEID);

extern kal_char *wake_tm_name;

/*************************************************************************
 * Define global data.
 *************************************************************************/
irqlisr_entry lisr_dispatch_tbl[NUM_IRQ_SOURCES];

__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ZI(4) void *processing_lisr[MDCIRQ_TOTAL_VPE_NUM];
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_RW(4) kal_uint32 processing_irqx[MDCIRQ_TOTAL_VPE_NUM] = {IRQ_NOT_LISR_CONTEXT, IRQ_NOT_LISR_CONTEXT, IRQ_NOT_LISR_CONTEXT, IRQ_NOT_LISR_CONTEXT};

//kal_uint32 processing_irqlr[MDCIRQ_TOTAL_VPE_NUM];
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ZI(4) kal_uint32 processing_irqCnt[MDCIRQ_TOTAL_VPE_NUM];
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ZI(4) kal_uint32 max_processing_irqCnt[MDCIRQ_TOTAL_VPE_NUM];
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_RW(4) kal_uint32 processing_irqx_read[MDCIRQ_TOTAL_VPE_NUM] = {IRQ_NOT_LISR_CONTEXT, IRQ_NOT_LISR_CONTEXT, IRQ_NOT_LISR_CONTEXT, IRQ_NOT_LISR_CONTEXT};

#if defined(__WAKEUP_IRQ_DEBUG__)
wkup_intr_log_t wkup_intr_log_buf[WKUP_LOG_BUF_MAX];
kal_uint32 wkup_intr_log_indx = WKUP_LOG_BUF_MAX;
wkup_timer_log_t wkup_timer_log_buf[WKUP_LOG_BUF_MAX];
kal_uint32 wkup_timer_log_indx = WKUP_LOG_BUF_MAX;
#endif  /* __WAKEUP_IRQ_DEBUG__ */


/* to measure time */
//#define LISR_MEASURE_TIME 1
#if defined(LISR_MEASURE_TIME)
#define IFDEF_LISR_MEASURE_TIME(x) x
kal_uint32 lisr_enter_time[NUM_IRQ_SOURCES];
kal_uint32 lisr_leave_time[NUM_IRQ_SOURCES];
#else
#define IFDEF_LISR_MEASURE_TIME(x)
#endif /* LISR_MEASURE_TIME */

/* spurious interrupt log */
#define SPURIOUS_IRQ_LOG_SIZE 20
kal_uint32 spurious_count[MDCIRQ_TOTAL_VPE_NUM] = {0};
kal_uint32 spurious_id[MDCIRQ_TOTAL_VPE_NUM][SPURIOUS_IRQ_LOG_SIZE];

/*************************************************************************
* FUNCTION
*  MDCIRQ_IRQ_LISR_Init
*
* DESCRIPTION
*   This function implement IRQ's LISR (Low-level Interrupt Service Routine)
*  Table initialization.
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_IRQ_LISR_Init()
{
    kal_uint32 i;
    for (i = NUM_IRQ_SOURCES; i != 0; i--)
    {
        IRQ_Register_LISR(i - 1, MDCIRQ_IRQ_Default_LISR, "NULL handler");
    }

#if !defined(__EVENT_BASED_TIMER__)
    IRQ_Register_LISR(IRQ_SYS_TIMER_CODE, isrSysTimer,"SysTimer");
#endif /* __EVENT_BASED_TIMER__ */
}

/*************************************************************************
* FUNCTION
*  IRQ_Register_LISR
*
* DESCRIPTION
*   This function implement method to register IRQ's LISR.
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  irqvector   -  vector number to register
*  reg_lisr    -  register LISR's handler
*  description -  LISR's description pointer to be saved.
*     Remember, the routine won't duplicate the description,
*     therefore, caller shouldn't free the description.
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_IRQ_Register_LISR(kal_uint32 irqvector, void (*reg_lisr)(kal_uint32), char* description)
//void IRQ_Register_LISR(kal_uint32 irqvector, void (*reg_lisr)(kal_uint32), char* description)
{
    kal_uint32 savedMask;

    savedMask = kal_hrt_SaveAndSetIRQMask();
    lisr_dispatch_tbl[irqvector].vector = irqvector;
    lisr_dispatch_tbl[irqvector].lisr_handler = reg_lisr;
    lisr_dispatch_tbl[irqvector].description = description;
    kal_hrt_RestoreIRQMask(savedMask);
}

/*************************************************************************
* FUNCTION
*  IRQ_Retrieve_LISR
*
* DESCRIPTION
*   This function implement to retrieve register LISR handler
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void* MDCIRQ_IRQ_Retrieve_LISR(kal_uint32 vector)
{
    return(void*)(lisr_dispatch_tbl[vector].lisr_handler);
}

/*************************************************************************
* FUNCTION
*  IRQ_Default_LISR
*
* DESCRIPTION
*   This function implement default IRQ' LISR
*
* CALLS
*
* CALL BY
*  IRQ_LISR_Init()
*
* PARAMETERS
*
* RETURNS
*
*************************************************************************/
void MDCIRQ_IRQ_Default_LISR(void)
{
    kal_fatal_error_handler(KAL_ERROR_NON_REGISTERED_LISR, (kal_uint32)processing_irqx);
}

void INT_Timer_Interrupt(void)
{
    Kal_Timer_Interrupt();
}
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE void isrC_Main(kal_uint32 vector)
{

    kal_uint32 vpe_num;
    kal_uint32 irqx, irqx_non_spurious;
    void       *processing_lisr_backup;
    kal_uint32 processing_irqx_backup;
    kal_uint32 ori_vpe_state;
    kal_uint32 current_irq_priority;
    kal_mt_stack_ptr mt_stack_ptr_backup;
    kal_mt_tc_status tc_status_backup[NBR_HRT_TC_PER_VPE];

    ASSERT_EXL_SAFE(vector == VPE_IRQID_SI_INT);

    vpe_num = kal_get_current_vpe_id();
    processing_lisr_backup = processing_lisr[vpe_num];
    processing_irqx_backup = processing_irqx[vpe_num];

#if !defined(__MDCIRQ_OSIPI_SPECIAL_FLOW__)
    // Read interrupt ID in isrC_Main 
#if defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
    irqx = DRV_Reg32(MDCIRQ_VPE_IRQ_ID_BASE + (vpe_num<<2));
#else
    irqx = DRV_Reg32(MDCIRQ_GCR_VPE_IRQ_ID_BASE + (vpe_num<<2));
#endif
#else
    // Read interrupt ID in irq_handler
    /* interrupt ID already read in irq_handler */
    irqx = processing_irqx_read[vpe_num];
#endif

    current_irq_priority = DRV_Reg32(MDCIRQ_VPE_PRLV_CURR_BASE + (vpe_num<<2));
    ori_vpe_state = drv_mdcirq_SaveAndSet_VPE_state(vpe_num, current_irq_priority);

    irqx_non_spurious = irqx&0xff;

    esl_printf(ESL_SIM_TIME_FLAG|ESL_WALL_TIME_FLAG, "[ISR-%d S]\n", irqx);
    processing_irqx[vpe_num] = irqx_non_spurious;
    processing_lisr[vpe_num] = (void*)lisr_dispatch_tbl[irqx_non_spurious].lisr_handler;
    processing_irqCnt[vpe_num]++;
    if(processing_irqCnt[vpe_num]>max_processing_irqCnt[vpe_num])
    {
        max_processing_irqCnt[vpe_num] = processing_irqCnt[vpe_num];
    }

#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    IAPMU_CM_Logging_LISR(0xaaaa0000 | ((kal_uint32)irqx),vpe_num);
#endif

    if (SA_LoggingIndex[(vpe_num>>1)] != NULL)
    {
        SLA_LoggingLISR(0xaaaa0000 | ((kal_uint32)irqx), vpe_num);
    }
    else if (ST_memory[(vpe_num>>1)] != NULL)
    {
        ST_MALMO_ASM_ChangeContextID(vpe_num);
    }

#ifdef __WAKEUP_IRQ_DEBUG__
    if (wkup_intr_log_indx != WKUP_LOG_BUF_MAX)
    {
        wkup_intr_log_buf[wkup_intr_log_indx].irq = processing_irqx;
        wkup_intr_log_indx++;
        if (wkup_intr_log_indx == WKUP_LOG_BUF_MAX)
        {
            wkup_intr_log_indx = 0;
        }
    }
    if (wkup_timer_log_indx != WKUP_LOG_BUF_MAX)
    {
        if (wake_tm_name != NULL)
        {
            wkup_timer_log_buf[wkup_timer_log_indx].timer_name = wake_tm_name;
            wake_tm_name = NULL;
            wkup_timer_log_indx++;
            if (wkup_timer_log_indx == WKUP_LOG_BUF_MAX)
            {
                wkup_timer_log_indx = 0;
            }
        }
    }
#endif  /* __WAKEUP_IRQ_DEBUG__ */


#if 0
#if defined(__CR4__)
/* under construction !*/
#elif defined(__MTK_MMU_V2__)
/* under construction !*/
#endif
#endif

    if(!(irqx&0x100))  //normal IRQ
    {
        if((vpe_num&1))
            kal_hrt_mt_save(irqx_non_spurious, &mt_stack_ptr_backup, tc_status_backup);

        Clear_EXL();

        lisr_dispatch_tbl[irqx_non_spurious].lisr_handler(irqx_non_spurious);

        if(Ibit_Status()!=1)  //Ibit cannot be disabled after LISR!
        {
            kal_fatal_error_handler(KAL_ERROR_INTERRUPT_DISABLED_AFTER_LISR_FAILED, (kal_uint32)processing_lisr[vpe_num]);
        }

        Set_EXL();

        if((vpe_num&1))
            kal_hrt_mt_restore(irqx_non_spurious, &mt_stack_ptr_backup, tc_status_backup);
    }
    else  // spurious IRQ
    {
        spurious_id[vpe_num][spurious_count[vpe_num]%SPURIOUS_IRQ_LOG_SIZE] = irqx;
        spurious_count[vpe_num]++;
    }
#if 0
#if defined(__CR4__)
/* under construction !*/
#elif defined(__MTK_MMU_V2__)
/* under construction !*/
#endif
#endif

    processing_irqx[vpe_num] = processing_irqx_backup;
    processing_lisr[vpe_num] = processing_lisr_backup;
    processing_irqCnt[vpe_num]--;

#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    IAPMU_CM_Logging_LISR(0xaaaaaaaa,vpe_num);
#endif

    if (SA_LoggingIndex[(vpe_num>>1)] != NULL)
    {
        SLA_LoggingLISR(0xaaaaaaaa, vpe_num);
    }
    else if (ST_memory[(vpe_num>>1)] != NULL)
    {
        ST_MALMO_ASM_ChangeContextID(vpe_num);
    }

    esl_printf(ESL_SIM_TIME_FLAG|ESL_WALL_TIME_FLAG, "[ISR-%d E]\n", irqx);

    drv_mdcirq_Restore_VPE_state(vpe_num, ori_vpe_state);

    if(!(irqx&0x100))	//normal IRQ
    {
        /* Binary-coded IRQ idx */
        MDCIRQ_SYS_endIsr(vpe_num, processing_irqx_backup);
    }
}


/*************************************************************************
* FUNCTION
*  get_wkup_intr_log_buf
*
* DESCRIPTION
*  This function gets the wakeup logging buffer's address, current index,
*  and max count.
*  NoteXXX: An IRQ may wake up the system and break the sleep mode.
*           When the debugging option is enabled, all interrupts are
*           logged. User can check all IRQ numbers in the logging
*           buffer to see which IRQ wakes up the system.
*
* PARAMETERS
*  buf    -   pointer to buffer address
*  indx   -   pointer to buffer index
*  max    -   pointer to buffer max count
*
* RETURNS
*  0 if the IRQ logging buffer exists; otherwise, -1
*
*************************************************************************/
kal_int32 get_wkup_intr_log_buf(wkup_intr_log_t **buf, kal_uint32 *indx, kal_uint32 *max)
{
#if defined(__WAKEUP_IRQ_DEBUG__)

    *buf = (wkup_intr_log_t *)wkup_intr_log_buf;
    *indx = wkup_intr_log_indx;
    *max = WKUP_LOG_BUF_MAX;

    return 0;

#endif  /* __WAKEUP_IRQ_DEBUG__ */

    return -1;
}

/*************************************************************************
* FUNCTION
*  get_wkup_timer_log_buf
*
* DESCRIPTION
*  This function gets the wakeup logging buffer's address, current index,
*  and max count.
*
* PARAMETERS
*  buf    -   pointer to buffer address
*  indx   -   pointer to buffer index
*  max    -   pointer to buffer max count
*
* RETURNS
*  0 if the IRQ logging buffer exists; otherwise, -1
*
*************************************************************************/
kal_int32 get_wkup_timer_log_buf(wkup_timer_log_t **buf, kal_uint32 *indx, kal_uint32 *max)
{
#if defined(__WAKEUP_IRQ_DEBUG__)

    /*
     * NonteXXX: No need to disable IRQ before accessing wake_tm_name.
     *           get_wkup_timer_log_buf is called by L1 LISR.
     *           wake_tm_name is also updated in L1 LISR.
     */
    if (wake_tm_name != NULL)
    {
        wkup_timer_log_buf[wkup_timer_log_indx].timer_name = wake_tm_name;
        wake_tm_name = NULL;
        wkup_timer_log_indx++;
        if (wkup_timer_log_indx == WKUP_LOG_BUF_MAX)
        {
            wkup_timer_log_indx = 0;
        }
    }

    *buf = (wkup_timer_log_t *)wkup_timer_log_buf;
    *indx = wkup_timer_log_indx;
    *max = WKUP_LOG_BUF_MAX;

    return 0;

#endif  /* __WAKEUP_IRQ_DEBUG__ */

    return -1;
}

/*************************************************************************
* FUNCTION
*  enable_wkup_log
*
* DESCRIPTION
*  This function enables wakeup logging.
*
* PARAMETERS
*  None
*
* RETURNS
*  0 if the IRQ logging buffer exists; otherwise, -1
*
*************************************************************************/
kal_int32 enable_wkup_log(void)
{
#if defined(__WAKEUP_IRQ_DEBUG__)

    wkup_intr_log_indx = 0;
    wkup_timer_log_indx = 0;

    return 0;

#endif  /* __WAKEUP_IRQ_DEBUG__ */

    return -1;
}

/*************************************************************************
* FUNCTION
*  IRQ_Current_LISR()
*
* DESCRIPTION
*  This function returns IRQ code of current executing LISR.
*
* PARAMETERS
*  None
*
* RETURNS
*  IRQ code if current context is LISR.
*  Otherwise, IRQ_NOT_LISR_CONTEXT (-1)
*
*************************************************************************/
kal_uint32 IRQ_Current_LISR()
{
    kal_uint32 current_irq;
    kal_uint32 vpe_num;

    vpe_num = kal_get_current_vpe_id();

    /* When nested interrupt happens, processing_irqx of preempted IRQ will be modified to new IRQ, */
    /* but it will be restored to the original one before context switch to the preempted IRQ.      */
    /* Therefore, no need to protect it with LockIRQ and RestoreIRQ.                                */
    current_irq = processing_irqx[vpe_num];

    if(IRQ_NOT_LISR_CONTEXT == current_irq)
    {
        return IRQ_NOT_LISR_CONTEXT;
    }
    else
    {
        return current_irq;
    }
}
