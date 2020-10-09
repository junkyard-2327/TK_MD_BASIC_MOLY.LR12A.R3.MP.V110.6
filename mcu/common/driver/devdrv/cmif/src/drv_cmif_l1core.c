/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 *   cmif.c
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   
 *   
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
 * removed!
 * removed!
 *
 * removed!
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

#include "drv_cmif_l1core.h"

#include "intrCtrl.h"
#include "kal_public_api.h"
#include "kal_general_types.h"

#include "kal_hrt_api.h"
#include "kal_internal_api.h"

#include "gen93_proj_config.h"

#if defined(__CMIF_DEBUG__)
#include "us_timer.h"
#endif

#if defined(__MTK_TARGET__)
#include "kal_trace.h" // for logging
static char cmif_fatal_error_trace_buf[128];
#endif /* __MTK_TARGET__ */

/*******************************************************************************
 * Data Structure 
 *******************************************************************************/
#undef  irq_index
#undef  irq_name 
#undef  irq_entry_function 
#undef  irq_auto_eoi

#define irq_index(code)  
#define irq_name(name)
#define irq_entry_function(fun_name) extern void fun_name(CMIF_Mask_t*);
#define irq_auto_eoi(eoi)

#include "cmif_m2c_isr_config_u3g_rake_pre.h"
#include "cmif_m2c_isr_config_fpc_1x_pre.h"
#include "cmif_m2c_isr_config_do_pd_pre.h"
#include "cmif_m2c_isr_config_foe_1x_pre.h"

#undef  irq_index
#undef  irq_name 
#undef  irq_entry_function 
#undef  irq_auto_eoi

#define irq_index(code)  
#define irq_name(name)
#define irq_entry_function(fun_name) fun_name, 
#define irq_auto_eoi(eoi)

CMIF_InterruptEntryFun cmif_isr_handler_u3g_rake[] = {
    #include "cmif_m2c_isr_config_u3g_rake_pre.h"
};

CMIF_InterruptEntryFun cmif_isr_handler_fpc_1x[] = {
    #include "cmif_m2c_isr_config_fpc_1x_pre.h"
};

CMIF_InterruptEntryFun cmif_isr_handler_do_pd[] = {
    #include "cmif_m2c_isr_config_do_pd_pre.h"
};

CMIF_InterruptEntryFun cmif_isr_handler_foe_1x[] = {
    #include "cmif_m2c_isr_config_foe_1x_pre.h"
};

#undef  irq_index
#undef  irq_name 
#undef  irq_entry_function 
#undef  irq_auto_eoi

#define irq_index(code)  
#define irq_name(name)
#define irq_entry_function(fun_name)  
#define irq_auto_eoi(eoi)    eoi,

cmif_bool cmif_isr_eoi_u3g_rake[] = {
    #include "cmif_m2c_isr_config_u3g_rake_pre.h"
};

cmif_bool cmif_isr_eoi_fpc_1x[] = {
    #include "cmif_m2c_isr_config_fpc_1x_pre.h"
};

cmif_bool cmif_isr_eoi_do_pd[] = {
    #include "cmif_m2c_isr_config_do_pd_pre.h"
};

cmif_bool cmif_isr_eoi_foe_1x[] = {
    #include "cmif_m2c_isr_config_foe_1x_pre.h"
};


/*******************************************************************************
 * Debug 
 *******************************************************************************/
#if defined(__CMIF_DEBUG__)

CMIF_DebugISRCodeList cmif_debug_isr_handle_u3g;
CMIF_DebugISRCodeList cmif_debug_isr_handle_fpc_1x;
CMIF_DebugISRCodeList cmif_debug_isr_handle_do_pd;
CMIF_DebugISRCodeList cmif_debug_isr_handle_foe_1x;

CMIF_DebugRecordList cmif_debug_records[CMIF_VPE_NUM];
#endif

CMIF_OverFlowRecord cmif_overflow_record[CMIF_VPE_NUM];

/*******************************************************************************
 * Function prototypes
 *******************************************************************************/
#if !defined(__CMIF_DEBUG__)
extern void cmif_InterruptHandlerInternal(volatile cmif_uint32* sreg,
                                          volatile cmif_uint32* creg,
                                          CMIF_InterruptEntryFun* handler,
                                          cmif_bool* auto_eoi);
#else     /* __CMIF_DEBUG__ */
extern void cmif_InterruptHandlerInternal(volatile cmif_uint32* sreg,
                                          volatile cmif_uint32* creg,
                                          CMIF_InterruptEntryFun* handler,
                                          cmif_bool* auto_eoi,
                                          CMIF_DebugInterruptType interrupt_type);
#endif    /* __CMIF_DEBUG__ */


void CMIF_InterruptHandler_U3G_RAKE();
void CMIF_InterruptHandler_FPC_1X();
void CMIF_InterruptHandler_DO_PD();
void CMIF_InterruptHandler_FOE_1X();
extern void wfi_irq_callback_rake();

/*******************************************************************************
 * Functions - CR4 Part
 *******************************************************************************/
#define CMIF_CHECK_ALLOW_POWER_DOWN_OFFSET          0x54

#define CMIF_RAKE_CHECK_ALLOW_POWER_DOWN_STATUS     ((volatile cmif_uint32*)(CMIF_CR4_RAKE_BASE_ADDR + CMIF_CHECK_ALLOW_POWER_DOWN_OFFSET))

#define CMIF_MD32_PATTERN_WFI_SEND                  0x32DE32DE

cmif_bool CMIF_MD32AllowPowerDown()
{
    cmif_uint32 md32_status = 0;

    md32_status = *CMIF_RAKE_CHECK_ALLOW_POWER_DOWN_STATUS;

    if(CMIF_MD32_PATTERN_WFI_SEND == md32_status)
    {
        return CMIF_TRUE;
    }
    else
    {
        return CMIF_FALSE;
    }
}

cmif_uint32 CMIF_C2M_STATUS_U3G_READ()
{
    cmif_uint32 cmif_u3g_status = 0;

    cmif_u3g_status = *CMIF_C2M_U3G_RAKE_STATUS;

    return cmif_u3g_status;
}

void CMIF_Init()
{
    // register u3g rake interrupt handler
    IRQ_Register_LISR(MD_IRQID_RAKE_CMIF_M2C_IRQ_0, wfi_irq_callback_rake, "CMIF_RAKE_WFI");
    IRQSensitivity(MD_IRQID_RAKE_CMIF_M2C_IRQ_0, LEVEL_SENSITIVE);
    IRQUnmask(MD_IRQID_RAKE_CMIF_M2C_IRQ_0);

    // register u3g rake interrupt handler
    IRQ_Register_LISR(IRQID_RAKE_CMIF_M2C_IRQ_U3G, CMIF_InterruptHandler_U3G_RAKE, "CMIF_U3G_RAKE");
    IRQSensitivity(IRQID_RAKE_CMIF_M2C_IRQ_U3G, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_RAKE_CMIF_M2C_IRQ_U3G);

    // register fpc_1x interrupt handler
    IRQ_Register_LISR(IRQID_RAKE_CMIF_M2C_IRQ_FPC_1X, CMIF_InterruptHandler_FPC_1X, "CMIF_FPC_1X");
    IRQSensitivity(IRQID_RAKE_CMIF_M2C_IRQ_FPC_1X, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_RAKE_CMIF_M2C_IRQ_FPC_1X); 

    // register do_pd interrupt handler
    IRQ_Register_LISR(IRQID_RAKE_CMIF_M2C_IRQ_DO_PD, CMIF_InterruptHandler_DO_PD, "CMIF_DO_PD");
    IRQSensitivity(IRQID_RAKE_CMIF_M2C_IRQ_DO_PD, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_RAKE_CMIF_M2C_IRQ_DO_PD);

    // register foe_1x interrupt handler
    IRQ_Register_LISR(IRQID_RAKE_CMIF_M2C_IRQ_FOE_1X, CMIF_InterruptHandler_FOE_1X, "CMIF_FOE_1X");
    IRQSensitivity(IRQID_RAKE_CMIF_M2C_IRQ_FOE_1X, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_RAKE_CMIF_M2C_IRQ_FOE_1X);

}

void CMIF_C2M_STATUS_U3G(CMIF_Mask_t* mask)
{
    mask -> mask31_0 = *CMIF_C2M_U3G_RAKE_STATUS;
}

void CMIF_M2C_STATUS_U3G(CMIF_Mask_t* mask)
{
    mask -> mask31_0 = *CMIF_M2C_U3G_RAKE_STATUS;
}

void CMIF_M2C_STATUS_FPC_1X(CMIF_Mask_t* mask)
{
    mask -> mask31_0 = *CMIF_M2C_FPC_1X_STATUS;
}

void CMIF_M2C_STATUS_DO_PD(CMIF_Mask_t* mask)
{
    mask -> mask31_0 = *CMIF_M2C_DO_PD_STATUS;
}

void CMIF_M2C_STATUS_FOE_1X(CMIF_Mask_t* mask)
{
    mask -> mask31_0 = *CMIF_M2C_FOE_1X_STATUS;
}

void CMIF_C2M_SWI_SW_U3G(CMIF_C2M_U3G_Code_t code)
{
    cmif_uint32 caller;    
    CMIF_Mask_t before;

    CMIF_GET_RETURN_ADDRESS(caller);
    before.mask31_0 = CMIF_REG_READ(CMIF_C2M_U3G_RAKE_STATUS);

    // check the code in the range
    CMIF_ASSERT(code < CMIF_C2M_U3G_TOTAL_NUMBER_RAKE, code, CMIF_C2M_U3G_TOTAL_NUMBER_RAKE, 0);

    // avoid set the same interrupt again 
    if ((before.mask31_0 >> code) & 0x1)
    {
        cmif_uint32 vpe_id = kal_get_current_vpe_id();
        CMIF_ASSERT(vpe_id < CMIF_VPE_NUM, vpe_id, CMIF_VPE_NUM, 0);
    
        cmif_overflow_record[vpe_id].interrupt_bit = code;
        cmif_overflow_record[vpe_id].status_addr = (cmif_uint32)(CMIF_C2M_U3G_RAKE_STATUS);
        cmif_overflow_record[vpe_id].current_status = before.mask31_0;
        cmif_overflow_record[vpe_id].caller = caller;

#if defined(__MTK_TARGET__)  // print log
        sprintf(cmif_fatal_error_trace_buf, "CMIF C2M U3G interrupt bit overflow: overflow bit: %d, current status: 0x%x, caller 0x%x", code, before.mask31_0, caller);
        kal_sys_trace(cmif_fatal_error_trace_buf);
#endif
        kal_fatal_error_handler(KAL_ERROR_DSP_INTERRUPT_TRIGGER_INVALID, caller);
        //CMIF_ASSERT(((CMIF_REG_READ(CMIF_C2M_U3G_RAKE_STATUS) >> code) & 0x1) == 0, CMIF_C2M_U3G_TOTAL_NUMBER_RAKE, code, CMIF_REG_READ(CMIF_C2M_U3G_RAKE_STATUS));
    }    

    // set the status bit to send the interrupt
    CMIF_REG_WRITE(CMIF_C2M_U3G_RAKE_SET, 1 << code);

#if defined(__CMIF_DEBUG__)
    cmif_DebugAddRecord(before.mask31_0, (cmif_uint32)CMIF_C2M_U3G_RAKE_SET, (1 << code), caller);
#endif /* __CMIF_DEBUG__ */
}

void CMIF_M2C_EOI_U3G(CMIF_M2C_U3G_Code_t code)
{
#if defined(__CMIF_DRV_SW_WORKAROUND__) || defined(__CMIF_DEBUG__)
    cmif_uint32 status = 0;
#endif
    // check the code in the range
    CMIF_ASSERT(code < CMIF_M2C_U3G_TOTAL_NUMBER_RAKE, code, CMIF_M2C_U3G_TOTAL_NUMBER_RAKE, 0);

   
#if defined(__CMIF_DEBUG__)
    cmif_uint32 caller;    
    CMIF_GET_RETURN_ADDRESS(caller);
#endif /* __CMIF_DEBUG__ */
    
    /* Add this work around to ensure cmif status is cleared correctly */
    /* This hardware bug is existed in TK6291, Jade, Everest */
    /* For C2M IRQ, the same T access will give CR4 higher priority */
    /* For M2C IRQ, the same T access will give MD32 higher priority */
#if defined(__CMIF_DRV_SW_WORKAROUND__)
    do{
#endif
        CMIF_REG_WRITE(CMIF_M2C_U3G_RAKE_CLEAN, 1 << code);
#if defined(__CMIF_DRV_SW_WORKAROUND__)
        status = CMIF_REG_READ(CMIF_M2C_U3G_RAKE_STATUS); 
    }while((status >> code) & 0x1);
#endif

#if defined(__CMIF_DEBUG__)       
    cmif_DebugAddRecord(status, (cmif_uint32)CMIF_M2C_U3G_RAKE_CLEAN, (1 << code), caller);
#endif /* __CMIF_DEBUG__ */

}


void CMIF_M2C_EOI_FPC_1X(CMIF_M2C_FPC_1X_Code_t code)
{
#if defined(__CMIF_DRV_SW_WORKAROUND__) || defined(__CMIF_DEBUG__)
    cmif_uint32 status = 0;
#endif
    // check the code in the range
    CMIF_ASSERT(code < CMIF_M2C_FPC_1X_TOTAL_NUMBER, code, CMIF_M2C_FPC_1X_TOTAL_NUMBER, 0);

#if defined(__CMIF_DEBUG__)
    cmif_uint32 caller;      
    CMIF_GET_RETURN_ADDRESS(caller);
#endif /* __CMIF_DEBUG__ */
    
    /* Add this work around to ensure cmif status is cleared correctly */
    /* This hardware bug is existed in TK6291, Jade, Everest */
    /* For C2M IRQ, the same T access will give CR4 higher priority */
    /* For M2C IRQ, the same T access will give MD32 higher priority */
#if defined(__CMIF_DRV_SW_WORKAROUND__)
    do{
#endif
        CMIF_REG_WRITE(CMIF_M2C_FPC_1X_CLEAN, 1 << code);
#if defined(__CMIF_DRV_SW_WORKAROUND__)
        status = CMIF_REG_READ(CMIF_M2C_FPC_1X_STATUS);    
    }while((status >> code) & 0x1);
#endif

#if defined(__CMIF_DEBUG__)    
    cmif_DebugAddRecord(status, (cmif_uint32)CMIF_M2C_FPC_1X_CLEAN, (1 << code), caller);
#endif /* __CMIF_DEBUG__ */

}


void CMIF_M2C_EOI_DO_PD(CMIF_M2C_DO_PD_Code_t code)
{
#if defined(__CMIF_DRV_SW_WORKAROUND__) || defined(__CMIF_DEBUG__)
    cmif_uint32 status = 0;
#endif
    // check the code in the range
    CMIF_ASSERT(code < CMIF_M2C_DO_PD_TOTAL_NUMBER, code, CMIF_M2C_DO_PD_TOTAL_NUMBER, 0);
    
#if defined(__CMIF_DEBUG__)
    cmif_uint32 caller;   
    CMIF_GET_RETURN_ADDRESS(caller);
#endif /* __CMIF_DEBUG__ */
    
    /* Add this work around to ensure cmif status is cleared correctly */
    /* This hardware bug is existed in TK6291, Jade, Everest */
    /* For C2M IRQ, the same T access will give CR4 higher priority */
    /* For M2C IRQ, the same T access will give MD32 higher priority */
#if defined(__CMIF_DRV_SW_WORKAROUND__)
    do{
#endif
        CMIF_REG_WRITE(CMIF_M2C_DO_PD_CLEAN, 1 << code);
#if defined(__CMIF_DRV_SW_WORKAROUND__)
        status = CMIF_REG_READ(CMIF_M2C_DO_PD_STATUS); 
    }while((status >> code) & 0x1);   
#endif

#if defined(__CMIF_DEBUG__)       
    cmif_DebugAddRecord(status, (cmif_uint32)CMIF_M2C_DO_PD_CLEAN, (1 << code), caller);
#endif /* __CMIF_DEBUG__ */

}


void CMIF_M2C_EOI_FOE_1X(CMIF_M2C_FOE_1X_Code_t code)
{
#if defined(__CMIF_DRV_SW_WORKAROUND__) || defined(__CMIF_DEBUG__)
    cmif_uint32 status = 0;
#endif

    // check the code in the range
    CMIF_ASSERT(code < CMIF_M2C_FOE_1X_TOTAL_NUMBER, code, CMIF_M2C_FOE_1X_TOTAL_NUMBER, 0);

  
#if defined(__CMIF_DEBUG__)
    cmif_uint32 caller;
    CMIF_GET_RETURN_ADDRESS(caller);
#endif /* __CMIF_DEBUG__ */
    
    /* Add this work around to ensure cmif status is cleared correctly */
    /* This hardware bug is existed in TK6291, Jade, Everest */
    /* For C2M IRQ, the same T access will give CR4 higher priority */
    /* For M2C IRQ, the same T access will give MD32 higher priority */
#if defined(__CMIF_DRV_SW_WORKAROUND__)
    do{
#endif
        CMIF_REG_WRITE(CMIF_M2C_FOE_1X_CLEAN, 1 << code);
#if defined(__CMIF_DRV_SW_WORKAROUND__)
        status = CMIF_REG_READ(CMIF_M2C_FOE_1X_STATUS);    
    }while((status >> code) & 0x1);
#endif

#if defined(__CMIF_DEBUG__)    
    cmif_DebugAddRecord(status, (cmif_uint32)CMIF_M2C_FOE_1X_CLEAN, (1 << code), caller);
#endif /* __CMIF_DEBUG__ */

}

/**
  *  CMIF Interrupt handler: MD32 trigger MCU 
  *
  **/
void CMIF_InterruptHandler_U3G_RAKE()
{
#if !defined(__CMIF_DEBUG__)
    cmif_InterruptHandlerInternal(CMIF_M2C_U3G_RAKE_STATUS,
                                  CMIF_M2C_U3G_RAKE_CLEAN,
                                  cmif_isr_handler_u3g_rake,
                                  cmif_isr_eoi_u3g_rake);
#else    /* __CMIF_DEBUG__  */
    cmif_InterruptHandlerInternal(CMIF_M2C_U3G_RAKE_STATUS,
                                  CMIF_M2C_U3G_RAKE_CLEAN,
                                  cmif_isr_handler_u3g_rake,
                                  cmif_isr_eoi_u3g_rake,
                                  CMIF_DEBUG_U3G_INTERRUPT);
#endif   /* __CMIF_DEBUG__  */
}

/**
  *  CMIF Interrupt handler: MD32 trigger MCU 
  *
  **/
void CMIF_InterruptHandler_FPC_1X()
{
#if !defined(__CMIF_DEBUG__)
    cmif_InterruptHandlerInternal(CMIF_M2C_FPC_1X_STATUS,
                                  CMIF_M2C_FPC_1X_CLEAN,
                                  cmif_isr_handler_fpc_1x,
                                  cmif_isr_eoi_fpc_1x);
#else    /* __CMIF_DEBUG__  */
    cmif_InterruptHandlerInternal(CMIF_M2C_FPC_1X_STATUS,
                                  CMIF_M2C_FPC_1X_CLEAN,
                                  cmif_isr_handler_fpc_1x,
                                  cmif_isr_eoi_fpc_1x,
                                  CMIF_DEBUG_FPC_1X_INTERRUPT);
#endif   /* __CMIF_DEBUG__  */
}

/**
  *  CMIF Interrupt handler: MD32 trigger MCU 
  *
  **/
void CMIF_InterruptHandler_DO_PD()
{
#if !defined(__CMIF_DEBUG__)
    cmif_InterruptHandlerInternal(CMIF_M2C_DO_PD_STATUS,
                                  CMIF_M2C_DO_PD_CLEAN,
                                  cmif_isr_handler_do_pd,
                                  cmif_isr_eoi_do_pd);
#else    /* __CMIF_DEBUG__  */
    cmif_InterruptHandlerInternal(CMIF_M2C_DO_PD_STATUS,
                                  CMIF_M2C_DO_PD_CLEAN,
                                  cmif_isr_handler_do_pd,
                                  cmif_isr_eoi_do_pd,
                                  CMIF_DEBUG_DO_PD_INTERRUPT);
#endif   /* __CMIF_DEBUG__  */
}


/**
  *  CMIF Interrupt handler: MD32 trigger MCU 
  *
  **/
void CMIF_InterruptHandler_FOE_1X()
{
#if !defined(__CMIF_DEBUG__)
    cmif_InterruptHandlerInternal(CMIF_M2C_FOE_1X_STATUS,
                                  CMIF_M2C_FOE_1X_CLEAN,
                                  cmif_isr_handler_foe_1x,
                                  cmif_isr_eoi_foe_1x);
#else    /* __CMIF_DEBUG__  */
    cmif_InterruptHandlerInternal(CMIF_M2C_FOE_1X_STATUS,
                                  CMIF_M2C_FOE_1X_CLEAN,
                                  cmif_isr_handler_foe_1x,
                                  cmif_isr_eoi_foe_1x,
                                  CMIF_DEBUG_FOE_1X_INTERRUPT);
#endif   /* __CMIF_DEBUG__  */
}


#if defined(__CMIF_DEBUG__)
void cmif_DebugAddISRHandle(cmif_uint32 code,
        CMIF_DebugInterruptType isr_type)
{
    CMIF_DebugISRCodeList* code_list = CMIF_NULL;
    cmif_uint32 save_index;

    if(isr_type == CMIF_DEBUG_U3G_INTERRUPT){
        code_list = &cmif_debug_isr_handle_u3g;
    }
    else if(isr_type == CMIF_DEBUG_FPC_1X_INTERRUPT){
        code_list = &cmif_debug_isr_handle_fpc_1x;
    }
    else if(isr_type == CMIF_DEBUG_DO_PD_INTERRUPT){
        code_list = &cmif_debug_isr_handle_do_pd;
    }
    else if(isr_type == CMIF_DEBUG_FOE_1X_INTERRUPT){
        code_list = &cmif_debug_isr_handle_foe_1x;
    }

    if(code_list != CMIF_NULL){
        save_index = code_list -> top_index;
            
        ++code_list -> top_index;
        if(code_list -> top_index == CMIF_DEBUG_ISR_HANDLE_CODE_SIZE){
            code_list -> top_index = 0;
        }
        code_list->records[save_index].time = ust_get_current_time();
        code_list->records[save_index].code = code;
    }
}
#endif


/*******************************************************************************
 * Functions - Driver test 
 *******************************************************************************/
#if defined(__MD32S_CMIF_DRV_TEST__)

#define CMIF_DRV_TEST_ASSERT_EQ(a, b)                                               \
    do{                                                                          \
        if((a) != (b)){                                                          \
            while(1); \
        }                                                                        \
    }while(0);

CMIF_Ctrl_t cmif_ctrl_rake_u3g = {
   .send_set              = CMIF_C2M_U3G_RAKE_SET,
   .send_status           = CMIF_C2M_U3G_RAKE_STATUS, 
   .receive_clr           = CMIF_M2C_U3G_RAKE_CLEAN, 
   .receive_status        = CMIF_M2C_U3G_RAKE_STATUS, 
   .sync                  = CMIF_DRV_TEST_SYNC_ADDR,
   
   .send_func             = CMIF_C2M_SWI_SW_U3G, 
   .send_stats_func       = CMIF_C2M_STATUS_U3G, 
   .receive_clr_func      = CMIF_M2C_EOI_U3G, 
   .receive_stats_func    = CMIF_M2C_STATUS_U3G,
};

CMIF_Ctrl_t cmif_ctrl_rake_fpc_1x = {
   .send_set              = CMIF_NULL,
   .send_status           = CMIF_NULL, 
   .receive_clr           = CMIF_M2C_FPC_1X_CLEAN, 
   .receive_status        = CMIF_M2C_FPC_1X_STATUS, 
   .sync                  = CMIF_DRV_TEST_SYNC_ADDR,
   
   .send_func             = CMIF_NULL, 
   .send_stats_func       = CMIF_NULL, 
   .receive_clr_func      = CMIF_M2C_EOI_FPC_1X, 
   .receive_stats_func    = CMIF_M2C_STATUS_FPC_1X,
};

CMIF_Ctrl_t cmif_ctrl_rake_do_pd = {
   .send_set              = CMIF_NULL,
   .send_status           = CMIF_NULL, 
   .receive_clr           = CMIF_M2C_DO_PD_CLEAN, 
   .receive_status        = CMIF_M2C_DO_PD_STATUS, 
   .sync                  = CMIF_DRV_TEST_SYNC_ADDR,
   
   .send_func             = CMIF_NULL, 
   .send_stats_func       = CMIF_NULL, 
   .receive_clr_func      = CMIF_M2C_EOI_DO_PD, 
   .receive_stats_func    = CMIF_M2C_STATUS_DO_PD,
};

CMIF_Ctrl_t cmif_ctrl_rake_foe_1x = {
   .send_set              = CMIF_NULL,
   .send_status           = CMIF_NULL, 
   .receive_clr           = CMIF_M2C_FOE_1X_CLEAN, 
   .receive_status        = CMIF_M2C_FOE_1X_STATUS, 
   .sync                  = CMIF_DRV_TEST_SYNC_ADDR,
   
   .send_func             = CMIF_NULL, 
   .send_stats_func       = CMIF_NULL, 
   .receive_clr_func      = CMIF_M2C_EOI_FOE_1X, 
   .receive_stats_func    = CMIF_M2C_STATUS_FOE_1X,
};




extern void cmif_drv_test_sync(CMIF_Ctrl_t* ctrl);
extern void CMIF_DisableInterrupt();
extern void CMIF_EnableInterrupt();
extern void CMIF_ClearPendingInterrupt();

volatile cmif_uint32 cmif_drvtest_case;
volatile cmif_uint32 cmif_drvtest_prev_irq;
volatile cmif_uint32 cmif_drvtest_irq_test_success;

void CMIF_DriverAPIM2CTest(CMIF_Ctrl_t* ctrl)
{
    CMIF_Mask_t mask;

    cmif_drv_test_sync(ctrl);

    // 1. Wait for MD32

    cmif_drv_test_sync(ctrl);

    // 2. Check the status and clear the status registers

    (*ctrl->receive_stats_func)(&mask);
    CMIF_DRV_TEST_ASSERT_EQ(*(ctrl->receive_status), 0x1E);
    CMIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x1E);

    (*ctrl->receive_clr_func)(1);
    (*ctrl->receive_clr_func)(2);
    (*ctrl->receive_clr_func)(3);
    (*ctrl->receive_clr_func)(4);

    (*ctrl->receive_stats_func)(&mask);
    CMIF_DRV_TEST_ASSERT_EQ(*(ctrl->receive_status), 0x0);
    CMIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x0);

    cmif_drv_test_sync(ctrl);

    // 3. Wait for MD32


    cmif_drv_test_sync(ctrl);
}

void CMIF_DriverAPIC2MTest(CMIF_Ctrl_t* ctrl)
{ 
    CMIF_Mask_t mask;

    cmif_drv_test_sync(ctrl);

    // 1. set the interrupt bit and check status registers
    ctrl->send_func(1);
    ctrl->send_func(2);
    ctrl->send_func(3);
    ctrl->send_func(4);

    (*ctrl->send_stats_func)(&mask);
    CMIF_DRV_TEST_ASSERT_EQ(*(ctrl->send_status), 0x1E);
    CMIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x1E);
    

    cmif_drv_test_sync(ctrl);

    // 2. Wait for MD32 

    cmif_drv_test_sync(ctrl);

    // 3. Check the status regsiters 
    (*ctrl->send_stats_func)(&mask);
    CMIF_DRV_TEST_ASSERT_EQ(*(ctrl->send_status), 0x0);
    CMIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x0);

    cmif_drv_test_sync(ctrl);

}

void CMIF_DriverISRTestC2M(CMIF_Ctrl_t* ctrl, cmif_uint32 case_num)
{

    cmif_drvtest_case = case_num;

    cmif_drv_test_sync(ctrl);
    
    // 1. Wait for MD32

    cmif_drv_test_sync(ctrl);

    // 2. Send interrupt to md32 
    if(cmif_drvtest_case == 1){
        ctrl->send_func(1);
        ctrl->send_func(2);
        ctrl->send_func(3);
        ctrl->send_func(4);
    }
    else if(cmif_drvtest_case == 2){
        ctrl->send_func(5);
        ctrl->send_func(6);
        ctrl->send_func(7);
        ctrl->send_func(8);
    }

    cmif_drv_test_sync(ctrl);

    // 3. Wait for MD32

    cmif_drv_test_sync(ctrl);
}

void CMIF_DriverISRTestM2C(CMIF_Ctrl_t* ctrl, cmif_uint32 case_num)
{
    cmif_drvtest_case = case_num;

    cmif_drv_test_sync(ctrl);

    // 1. Disalbe interrupt and clean the pending interrupt 
    CMIF_DisableInterrupt();
    CMIF_ClearPendingInterrupt();

    cmif_drv_test_sync(ctrl);

    // 2. Wait for MD32

    cmif_drv_test_sync(ctrl);

    // 3. Enable the interrupt
    CMIF_EnableInterrupt();
    while(cmif_drvtest_irq_test_success != cmif_drvtest_case);
    CMIF_DisableInterrupt();


    cmif_drv_test_sync(ctrl);
}


void CMIF_DriverTestISR_U3G(CMIF_Mask_t* mask)
{
    cmif_uint32 cmif_drvtest_curr_irq;
    if(cmif_drvtest_case == 1){
        // auto eoi mode
        cmif_drvtest_curr_irq = CMIF_GET_LSB(mask->mask31_0);

        CMIF_DRV_TEST_ASSERT_EQ(cmif_drvtest_curr_irq - cmif_drvtest_prev_irq, 1);

        cmif_drvtest_prev_irq = cmif_drvtest_curr_irq;
        if(cmif_drvtest_prev_irq == 4){
            cmif_drvtest_prev_irq = 0;
            cmif_drvtest_irq_test_success = cmif_drvtest_case;
        }
    }
    else if(cmif_drvtest_case == 2){
        // non-auto eoi mode
        cmif_drvtest_curr_irq = CMIF_GET_LSB(mask->mask31_0);
   
        switch (cmif_drvtest_prev_irq) {
            case 0:
                CMIF_M2C_EOI_U3G(8);
                break;
            case 5:
                if(cmif_drvtest_curr_irq == 5)
                    CMIF_M2C_EOI_U3G(5);
                else if(cmif_drvtest_curr_irq == 6)
                    CMIF_M2C_EOI_U3G(6);
                break;
            case 6:
                CMIF_M2C_EOI_U3G(7);
                break;
            default:
                CMIF_DRV_TEST_ASSERT_EQ(1,2);
        }

        cmif_drvtest_prev_irq = cmif_drvtest_curr_irq;
        if(cmif_drvtest_prev_irq == 7){
            cmif_drvtest_prev_irq = 0; 
            cmif_drvtest_irq_test_success = cmif_drvtest_case;
        }
    }
}


void CMIF_DriverTestISR_FPC_1X(CMIF_Mask_t* mask)
{
    cmif_uint32 cmif_drvtest_curr_irq;
    if(cmif_drvtest_case == 1){
        // auto eoi mode
        cmif_drvtest_curr_irq = CMIF_GET_LSB(mask->mask31_0);

        CMIF_DRV_TEST_ASSERT_EQ(cmif_drvtest_curr_irq - cmif_drvtest_prev_irq, 1);

        cmif_drvtest_prev_irq = cmif_drvtest_curr_irq;
        if(cmif_drvtest_prev_irq == 4){
            cmif_drvtest_prev_irq = 0;
            cmif_drvtest_irq_test_success = cmif_drvtest_case;
        }
    }
    else if(cmif_drvtest_case == 2){
        // non-auto eoi mode
        cmif_drvtest_curr_irq = CMIF_GET_LSB(mask->mask31_0);
   
        switch (cmif_drvtest_prev_irq) {
            case 0:
                CMIF_M2C_EOI_FPC_1X(8);
                break;
            case 5:
                if(cmif_drvtest_curr_irq == 5)
                    CMIF_M2C_EOI_FPC_1X(5);
                else if(cmif_drvtest_curr_irq == 6)
                    CMIF_M2C_EOI_FPC_1X(6);
                break;
            case 6:
                CMIF_M2C_EOI_FPC_1X(7);
                break;
            default:
                CMIF_DRV_TEST_ASSERT_EQ(1,2);
        }

        cmif_drvtest_prev_irq = cmif_drvtest_curr_irq;
        if(cmif_drvtest_prev_irq == 7){
            cmif_drvtest_prev_irq = 0; 
            cmif_drvtest_irq_test_success = cmif_drvtest_case;
        }
    }
}

void CMIF_DriverTestISR_DO_PD(CMIF_Mask_t* mask)
{
    cmif_uint32 cmif_drvtest_curr_irq;
    if(cmif_drvtest_case == 1){
        // auto eoi mode
        cmif_drvtest_curr_irq = CMIF_GET_LSB(mask->mask31_0);

        CMIF_DRV_TEST_ASSERT_EQ(cmif_drvtest_curr_irq - cmif_drvtest_prev_irq, 1);

        cmif_drvtest_prev_irq = cmif_drvtest_curr_irq;
        if(cmif_drvtest_prev_irq == 4){
            cmif_drvtest_prev_irq = 0;
            cmif_drvtest_irq_test_success = cmif_drvtest_case;
        }
    }
    else if(cmif_drvtest_case == 2){
        // non-auto eoi mode
        cmif_drvtest_curr_irq = CMIF_GET_LSB(mask->mask31_0);
   
        switch (cmif_drvtest_prev_irq) {
            case 0:
                CMIF_M2C_EOI_DO_PD(8);
                break;
            case 5:
                if(cmif_drvtest_curr_irq == 5)
                    CMIF_M2C_EOI_DO_PD(5);
                else if(cmif_drvtest_curr_irq == 6)
                    CMIF_M2C_EOI_DO_PD(6);
                break;
            case 6:
                CMIF_M2C_EOI_DO_PD(7);
                break;
            default:
                CMIF_DRV_TEST_ASSERT_EQ(1,2);
        }

        cmif_drvtest_prev_irq = cmif_drvtest_curr_irq;
        if(cmif_drvtest_prev_irq == 7){
            cmif_drvtest_prev_irq = 0; 
            cmif_drvtest_irq_test_success = cmif_drvtest_case;
        }
    }
}

void CMIF_DriverTestISR_FOE_1X(CMIF_Mask_t* mask)
{
    cmif_uint32 cmif_drvtest_curr_irq;
    if(cmif_drvtest_case == 1){
        // auto eoi mode
        cmif_drvtest_curr_irq = CMIF_GET_LSB(mask->mask31_0);

        CMIF_DRV_TEST_ASSERT_EQ(cmif_drvtest_curr_irq - cmif_drvtest_prev_irq, 1);

        cmif_drvtest_prev_irq = cmif_drvtest_curr_irq;
        if(cmif_drvtest_prev_irq == 4){
            cmif_drvtest_prev_irq = 0;
            cmif_drvtest_irq_test_success = cmif_drvtest_case;
        }
    }
    else if(cmif_drvtest_case == 2){
        // non-auto eoi mode
        cmif_drvtest_curr_irq = CMIF_GET_LSB(mask->mask31_0);
   
        switch (cmif_drvtest_prev_irq) {
            case 0:
                CMIF_M2C_EOI_FOE_1X(8);
                break;
            case 5:
                if(cmif_drvtest_curr_irq == 5)
                    CMIF_M2C_EOI_FOE_1X(5);
                else if(cmif_drvtest_curr_irq == 6)
                    CMIF_M2C_EOI_FOE_1X(6);
                break;
            case 6:
                CMIF_M2C_EOI_FOE_1X(7);
                break;
            default:
                CMIF_DRV_TEST_ASSERT_EQ(1,2);
        }

        cmif_drvtest_prev_irq = cmif_drvtest_curr_irq;
        if(cmif_drvtest_prev_irq == 7){
            cmif_drvtest_prev_irq = 0; 
            cmif_drvtest_irq_test_success = cmif_drvtest_case;
        }
    }
}


#endif /* __MD32S_CMIF_DRV_TEST__ */
