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
 *   cmif.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
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
  * $Revision$
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DRV_CMIF_L1CORE_H__
#define __DRV_CMIF_L1CORE_H__

#include "drv_cmif.h"

#include "kal_public_api.h"
#include "kal_general_types.h"

#include "sync_data.h"
#include "drv_comm.h"

#define __CMIF_DEBUG__

/*******************************************************************************
  * Register List 
  *******************************************************************************/

// mcu
#define CMIF_C2M_U3G_RAKE_STATUS    ((volatile cmif_uint32*)(CMIF_CR4_RAKE_BASE_ADDR + CMIF_C2M_U3G_RAKE_INTERRUPT_STATUS_OFFSET))
#define CMIF_C2M_U3G_RAKE_SET       ((volatile cmif_uint32*)(CMIF_CR4_RAKE_BASE_ADDR + CMIF_C2M_U3G_RAKE_INTERRUPT_SET_OFFSET))
#define CMIF_M2C_U3G_RAKE_STATUS    ((volatile cmif_uint32*)(CMIF_CR4_RAKE_BASE_ADDR + CMIF_M2C_U3G_RAKE_INTERRUPT_STATUS_OFFSET))
#define CMIF_M2C_U3G_RAKE_CLEAN     ((volatile cmif_uint32*)(CMIF_CR4_RAKE_BASE_ADDR + CMIF_M2C_U3G_RAKE_INTERRUPT_CLEAN_OFFSET))

#define CMIF_M2C_FPC_1X_STATUS      ((volatile cmif_uint32*)(CMIF_CR4_RAKE_BASE_ADDR + CMIF_M2C_FPC_1X_RAKE_INTERRUPT_STATUS_OFFSET))
#define CMIF_M2C_FPC_1X_CLEAN       ((volatile cmif_uint32*)(CMIF_CR4_RAKE_BASE_ADDR + CMIF_M2C_FPC_1X_RAKE_INTERRUPT_CLEAN_OFFSET))

#define CMIF_M2C_DO_PD_STATUS       ((volatile cmif_uint32*)(CMIF_CR4_RAKE_BASE_ADDR + CMIF_M2C_DO_PD_RAKE_INTERRUPT_STATUS_OFFSET))
#define CMIF_M2C_DO_PD_CLEAN        ((volatile cmif_uint32*)(CMIF_CR4_RAKE_BASE_ADDR + CMIF_M2C_DO_PD_RAKE_INTERRUPT_CLEAN_OFFSET))

#define CMIF_M2C_FOE_1X_STATUS      ((volatile cmif_uint32*)(CMIF_CR4_RAKE_BASE_ADDR + CMIF_M2C_FOE_1X_RAKE_INTERRUPT_STATUS_OFFSET))
#define CMIF_M2C_FOE_1X_CLEAN       ((volatile cmif_uint32*)(CMIF_CR4_RAKE_BASE_ADDR + CMIF_M2C_FOE_1X_RAKE_INTERRUPT_CLEAN_OFFSET))


#define CMIF_NEXT_INT_OFFSET        (CMIF_M2C_FPC_1X_RAKE_INTERRUPT_STATUS_OFFSET - CMIF_M2C_U3G_RAKE_INTERRUPT_STATUS_OFFSET)

/*******************************************************************************
  * CMIF Memory Definition 
  *******************************************************************************/

/* MCU side */
#define CMIF_CR4_RAKE_BASE_ADDR             (BASE_MADDR_RAKESYS_CMIF)


#define IRQID_RAKE_CMIF_M2C_IRQ_U3G         (MD_IRQID_RAKE_CMIF_M2C_IRQ_1)
#define IRQID_RAKE_CMIF_M2C_IRQ_FPC_1X      (MD_IRQID_RAKE_CMIF_FPC_1X_IRQ)
#define IRQID_RAKE_CMIF_M2C_IRQ_DO_PD       (MD_IRQID_RAKE_CMIF_PD_DO_IRQ)
#define IRQID_RAKE_CMIF_M2C_IRQ_FOE_1X      (MD_IRQID_RAKE_CMIF_FOE_1X_IRQ)

#if defined(__MD93__)
#define CMIF_VPE_NUM                        (4)
#elif defined(__MD95__)
#define CMIF_VPE_NUM                        (6)
#endif

/*******************************************************************************
 * Typedefs & Macros
 *******************************************************************************/


#define CMIF_REG_READ(addr)          *(addr)
#define CMIF_REG_WRITE(addr, value)  do{DRV_WriteReg32(addr, value); MO_Sync();}while(0);


#define CMIF_NULL                     NULL 
#define CMIF_ASSERT(expr, c1, c2, c3) EXT_ASSERT(expr, c1, c2, c3)
#define CMIF_GET_RETURN_ADDRESS(a)    GET_RETURN_ADDRESS(a)

#define CMIF_CLZ(z)         __builtin_clz((z)) 
#define CMIF_GET_LSB(b)     (31 - CMIF_CLZ((b) & -(b)))


/* cmif overflow debug info */
typedef struct{    
    cmif_uint32 interrupt_bit; /**< The overflow bit */
    cmif_uint32 status_addr;   /**< The addr of the status register  */
    cmif_uint32 current_status;/**< The current value of the status register */
    cmif_uint32 caller;        /**< The caller address */
}CMIF_OverFlowRecord;

/*******************************************************************************
 * Debug feature 
 *******************************************************************************/
#if defined(__CMIF_DEBUG__)

#if __CMIF_MD32S_CORE__
/* MD32 side */
#define CMIF_DEBUG_API_RECORD_SIZE        8 
#define CMIF_DEBUG_ISR_HANDLE_CODE_SIZE   8 

#else  /*  __CMIF_MD32S_CORE__ */

#define CMIF_DEBUG_API_RECORD_SIZE        16 
#define CMIF_DEBUG_ISR_HANDLE_CODE_SIZE   16 

#endif /*  __CMIF_MD32S_CORE__ */


typedef enum CMIF_DebugInterrupt_enum{
    CMIF_DEBUG_U3G_INTERRUPT,
    CMIF_DEBUG_FPC_1X_INTERRUPT,
    CMIF_DEBUG_DO_PD_INTERRUPT,
    CMIF_DEBUG_FOE_1X_INTERRUPT
}CMIF_DebugInterruptType;

typedef struct{
    cmif_uint32 time;
    cmif_uint32 code;
}CMIF_DebugISRRecord;

/** The Ring Buffer */
typedef struct{
    CMIF_DebugISRRecord records[CMIF_DEBUG_ISR_HANDLE_CODE_SIZE];
    cmif_uint32 top_index;
}CMIF_DebugISRCodeList;

typedef struct{
    cmif_uint32 time;
    cmif_uint32 status;
    cmif_uint32 set_addr;     /**< The control register address */
    cmif_uint32 set_value;    /**< The writing value for the control regsiters */
    cmif_uint32 caller;       /**< The caller address */
}CMIF_DebugRecord;

/** The Ring Buffer */
typedef struct{
    CMIF_DebugRecord records[CMIF_DEBUG_API_RECORD_SIZE];
    cmif_uint32 top_index; 
}CMIF_DebugRecordList;

void cmif_DebugAddRecord(cmif_uint32 status,
                         cmif_uint32 set_addr,
                         cmif_uint32 set_value,
                         cmif_uint32 caller);

void cmif_DebugAddISRHandle(cmif_uint32 code, CMIF_DebugInterruptType isr_type);


#endif /* __CMIF_DEBUG__  */





#if defined(__MD32S_CMIF_DRV_TEST__)

#define CMIF_MEM_TOTAL_SIZE 0x2000

#define CMIF_DRV_TEST_SYNC_ADDR ((volatile cmif_uint32*)(CMIF_CR4_RAKE_BASE_ADDR + CMIF_MEM_TOTAL_SIZE - 8))


typedef void (*CMIF_Status_Func_t)(CMIF_Mask_t* mask);
typedef void (*CMIF_SWI_Func_t)(cmif_uint8 code);
typedef void (*CMIF_EOI_Func_t)(cmif_uint8 code);

typedef struct{
    volatile cmif_uint32* send_set;
    volatile cmif_uint32* send_status;
    volatile cmif_uint32* receive_clr;
    volatile cmif_uint32* receive_status;
    volatile cmif_uint32* sync;

    CMIF_SWI_Func_t    send_func;
    CMIF_Status_Func_t send_stats_func;
    CMIF_EOI_Func_t    receive_clr_func;
    CMIF_Status_Func_t receive_stats_func;

}CMIF_Ctrl_t;

void CMIF_DriverTestISR_U3G(CMIF_Mask_t* mask);
void CMIF_DriverTestISR_FPC_1X(CMIF_Mask_t* mask);
void CMIF_DriverTestISR_DO_PD(CMIF_Mask_t* mask);
void CMIF_DriverTestISR_FOE_1X(CMIF_Mask_t* mask);

#endif /* __MD32S_CMIF_DRV_TEST__ */

#endif /* __DRV_CMIF_L1CORE_H__ */

