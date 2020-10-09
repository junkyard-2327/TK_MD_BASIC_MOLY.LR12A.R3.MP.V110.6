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
 *   
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "ssdvt_typedef.h"
#include "ssdvt_header.h"
#include "ssdvt_util.h"
#include "memory_test.h"
#include "cmif_test.h"
#include "intrCtrl.h"
#include "sync_data.h"
#include "drv_comm.h"
#include "dsp_header_define_cmif.h"
#include "xmif_common_def.h"


/*******************************************************************************
* CR4 only 
*******************************************************************************/
ssdvt_int32 SSDVT_CMIF_TEST_RAKE_ENABLE = 1;

/* RAKE */
#define SSDVT_CMIF_CR4_RAKE_SYNC_ADDR       ((CMIF_MEM_SS_BASE) + (CMIF_DEF_MEM_TOTAL_SIZE) - (SSDVT_CMIF_SYNC_MEM_SIZE))
#define SSDVT_CMIF_RAKE_TEST_SIZE           ((CMIF_DEF_MEM_TOTAL_SIZE) - (SSDVT_CMIF_SYNC_MEM_SIZE) - (SSDVT_UMIF_SYNC_MEM_SIZE)) 

/*******************************************************************************
*  Interrrupt Registers 
*******************************************************************************/
/* CR4 part */
#define SSDVT_CMIF_M2C_WFI_RAKE_STATUS    ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_WFI_RAKE_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CMIF_M2C_WFI_RAKE_MASK      ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_WFI_RAKE_INTERRUPT_MASK_OFFSET)) 
#define SSDVT_CMIF_M2C_WFI_RAKE_CLEAN     ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_WFI_RAKE_INTERRUPT_CLEAN_OFFSET))

#define SSDVT_CMIF_C2M_U3G_RAKE_STATUS    ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_C2M_U3G_RAKE_INTERRUPT_STATUS_OFFSET)) 
#define SSDVT_CMIF_C2M_U3G_RAKE_SET       ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_C2M_U3G_RAKE_INTERRUPT_SET_OFFSET)) 
#define SSDVT_CMIF_C2M_U3G_RAKE_CLEAN     ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_C2M_U3G_RAKE_INTERRUPT_CLEAN_OFFSET)) 

#define SSDVT_CMIF_M2C_U3G_RAKE_STATUS    ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_U3G_RAKE_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CMIF_M2C_U3G_RAKE_SET       ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_U3G_RAKE_INTERRUPT_SET_OFFSET)) 
#define SSDVT_CMIF_M2C_U3G_RAKE_CLEAN     ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_U3G_RAKE_INTERRUPT_CLEAN_OFFSET)) 

#define SSDVT_CMIF_M2C_FPC_1X_STATUS      ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_FPC_1X_RAKE_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CMIF_M2C_FPC_1X_SET         ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_FPC_1X_RAKE_INTERRUPT_SET_OFFSET)) 
#define SSDVT_CMIF_M2C_FPC_1X_CLEAN       ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_FPC_1X_RAKE_INTERRUPT_CLEAN_OFFSET)) 

#define SSDVT_CMIF_M2C_DO_PD_STATUS       ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_DO_PD_RAKE_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CMIF_M2C_DO_PD_SET          ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_DO_PD_RAKE_INTERRUPT_SET_OFFSET)) 
#define SSDVT_CMIF_M2C_DO_PD_CLEAN        ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_DO_PD_RAKE_INTERRUPT_CLEAN_OFFSET))

#define SSDVT_CMIF_M2C_FOE_1X_STATUS      ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_FOE_1X_RAKE_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CMIF_M2C_FOE_1X_SET         ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_FOE_1X_RAKE_INTERRUPT_SET_OFFSET)) 
#define SSDVT_CMIF_M2C_FOE_1X_CLEAN       ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + CMIF_M2C_FOE_1X_RAKE_INTERRUPT_CLEAN_OFFSET)) 

#define SSDVT_CMIF_U2M_INN_STATUS         ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + UMIF_U2M_INN_RAKE_INTERRUPT_STATUS_OFFSET)) 
#define SSDVT_CMIF_U2M_INN_SET            ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + UMIF_U2M_INN_RAKE_INTERRUPT_SET_OFFSET)) 
#define SSDVT_CMIF_U2M_INN_CLEAN          ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + UMIF_U2M_INN_RAKE_INTERRUPT_CLEAN_OFFSET)) 

#define SSDVT_CMIF_M2U_INN_STATUS         ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + UMIF_M2U_INN_RAKE_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CMIF_M2U_INN_SET            ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + UMIF_M2U_INN_RAKE_INTERRUPT_SET_OFFSET)) 
#define SSDVT_CMIF_M2U_INN_CLEAN          ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + UMIF_M2U_INN_RAKE_INTERRUPT_CLEAN_OFFSET)) 

#define SSDVT_CMIF_U2M_OUT_STATUS         ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + UMIF_U2M_OUT_RAKE_INTERRUPT_STATUS_OFFSET)) 
#define SSDVT_CMIF_U2M_OUT_SET            ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + UMIF_U2M_OUT_RAKE_INTERRUPT_SET_OFFSET)) 
#define SSDVT_CMIF_U2M_OUT_CLEAN          ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + UMIF_U2M_OUT_RAKE_INTERRUPT_CLEAN_OFFSET)) 

#define SSDVT_CMIF_M2U_OUT_STATUS         ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + UMIF_M2U_OUT_RAKE_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CMIF_M2U_OUT_SET            ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + UMIF_M2U_OUT_RAKE_INTERRUPT_SET_OFFSET)) 
#define SSDVT_CMIF_M2U_OUT_CLEAN          ((volatile ssdvt_uint32*)(CMIF_CTRL_REG_BASE + UMIF_M2U_OUT_RAKE_INTERRUPT_CLEAN_OFFSET))

#define SSDVT_CMIF_C2M_U3G_RAKE_CHECK     ((volatile ssdvt_uint32*)(CMIF_MEM_SS_BASE + SSDVT_CMIF_C2M_U3G_CHECK_MEM_OFFSET))
#define SSDVT_CMIF_M2C_U3G_RAKE_CHECK     ((volatile ssdvt_uint32*)(CMIF_MEM_SS_BASE + SSDVT_CMIF_M2C_U3G_CHECK_MEM_OFFSET))
#define SSDVT_CMIF_M2C_FPC_1X_CHECK       ((volatile ssdvt_uint32*)(CMIF_MEM_SS_BASE + SSDVT_CMIF_M2C_FPC_1X_CHECK_MEM_OFFSET))
#define SSDVT_CMIF_M2C_DO_PD_CHECK        ((volatile ssdvt_uint32*)(CMIF_MEM_SS_BASE + SSDVT_CMIF_M2C_DO_PD_CHECK_MEM_OFFSET))
#define SSDVT_CMIF_M2C_FOE_1X_CHECK       ((volatile ssdvt_uint32*)(CMIF_MEM_SS_BASE + SSDVT_CMIF_M2C_FOE_1X_CHECK_MEM_OFFSET))
#define SSDVT_CMIF_U2M_INN_CHECK          ((volatile ssdvt_uint32*)(CMIF_MEM_SS_BASE + SSDVT_CMIF_U2M_INN_CHECK_MEM_OFFSET))
#define SSDVT_CMIF_M2U_INN_CHECK          ((volatile ssdvt_uint32*)(CMIF_MEM_SS_BASE + SSDVT_CMIF_M2U_INN_CHECK_MEM_OFFSET))
#define SSDVT_CMIF_U2M_OUT_CHECK          ((volatile ssdvt_uint32*)(CMIF_MEM_SS_BASE + SSDVT_CMIF_U2M_OUT_CHECK_MEM_OFFSET))
#define SSDVT_CMIF_M2U_OUT_CHECK          ((volatile ssdvt_uint32*)(CMIF_MEM_SS_BASE + SSDVT_CMIF_M2U_OUT_CHECK_MEM_OFFSET))
#define SSDVT_CMIF_M2C_WFI_RAKE_CHECK     ((volatile ssdvt_uint32*)(CMIF_MEM_SS_BASE + SSDVT_CMIF_M2C_WFI_CHECK_MEM_OFFSET))

/*******************************************************************************
*  Global variables 
*******************************************************************************/
/**
 * define CMIF base address(.base_addr), size(.size) and status register (.sync)
 */
// CR4 side
SSDVT_MEM_MemInfo cmif_cr4_rake = {.base_addr=  (ssdvt_uint32_p)CMIF_MEM_SS_BASE,
                                   .size=       (ssdvt_uint32)SSDVT_CMIF_RAKE_TEST_SIZE,
                                   .sync=       (ssdvt_uint32_p)SSDVT_CMIF_CR4_RAKE_SYNC_ADDR
                                  };
/*******************************************************************************
* External Global variable 
*******************************************************************************/
extern SSDVT_MEM_TestType ssdvt_mem_test_type;
extern ssdvt_uint32       ssdvt_mem_test_current_status_base;
extern ssdvt_uint32       ssdvt_mem_test_mem_range_num;
extern ssdvt_uint32       ssdvt_cmif_interrupt_test_case_num;


/*******************************************************************************
*  Function prototypes 
*******************************************************************************/
void cmif_test_sync(const ssdvt_uint32    client,
                    const ssdvt_uint32_p  sync);

extern ssdvt_uint32 cmif_test_internal(ssdvt_uint32 client,
                                       const ssdvt_uint32 check_by_all_client,
                                       const SSDVT_MEM_MemInfo_ptr mem_info);

extern void SSDVT_CMIF_InterruptTestInternal(ssdvt_uint32 master,
                                             volatile ssdvt_uint32* irq_set,
                                             volatile ssdvt_uint32* irq_check,
                                             volatile ssdvt_uint32* sync);

/*******************************************************************************
*  Functions 
*******************************************************************************/
void cmif_test_sync(const ssdvt_uint32 client, const ssdvt_uint32_p sync)
{
    // CR4 Part
    while(sync[1] == 1);
    sync[1] = 1;             

     while(sync[0] == 0);
    sync[0] = 0;             
}


void SSDVT_CMIF_RamTest_L1CORE()
{
    ssdvt_mem_test_current_status_base = 0x1000;
    ssdvt_mem_test_type = SSDVT_MEM_CMIF_TEST_TYPE;
    ssdvt_mem_test_mem_range_num = 0x0;

    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base);

    if(SSDVT_CMIF_TEST_RAKE_ENABLE == 1){
        cmif_test_internal(0, 1, &cmif_cr4_rake);
    }

    /* reset test type */
    ssdvt_mem_test_type = SSDVT_MEM_NO_TEST_TYPE;
    ssdvt_mem_test_current_status_base = 0x0;
    ssdvt_mem_test_mem_range_num = 0x0;
    
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 0xFF);
}

/*******************************************************************************
* CMIF Interrupt Test 
*******************************************************************************/

#define CMIF_REG_READ(addr)          *(addr)
#define CMIF_REG_WRITE(addr, value)  do{DRV_WriteReg32(addr, value); MO_Sync();}while(0);

void SSDVT_CMIF_InterruptTestISR_RAKE_U3G()
{
    ssdvt_uint32 status;
    status = CMIF_REG_READ(SSDVT_CMIF_M2C_U3G_RAKE_STATUS);
    CMIF_REG_WRITE(SSDVT_CMIF_M2C_U3G_RAKE_CLEAN, status);
    CMIF_REG_WRITE(SSDVT_CMIF_M2C_U3G_RAKE_CHECK, SSDVT_CMIF_GET_LSB(status)+1);
}

void SSDVT_CMIF_InterruptTestISR_FPC_1X()
{
    ssdvt_uint32 status;
    status = CMIF_REG_READ(SSDVT_CMIF_M2C_FPC_1X_STATUS);
    CMIF_REG_WRITE(SSDVT_CMIF_M2C_FPC_1X_CLEAN, status);
    CMIF_REG_WRITE(SSDVT_CMIF_M2C_FPC_1X_CHECK, SSDVT_CMIF_GET_LSB(status)+1);
}

void SSDVT_CMIF_InterruptTestISR_DO_PD()
{
    ssdvt_uint32 status;
    status = CMIF_REG_READ(SSDVT_CMIF_M2C_DO_PD_STATUS);
    CMIF_REG_WRITE(SSDVT_CMIF_M2C_DO_PD_CLEAN, status);
    CMIF_REG_WRITE(SSDVT_CMIF_M2C_DO_PD_CHECK, SSDVT_CMIF_GET_LSB(status)+1);
}

void SSDVT_CMIF_InterruptTestISR_FOE_1X()
{
    ssdvt_uint32 status;
    status = CMIF_REG_READ(SSDVT_CMIF_M2C_FOE_1X_STATUS);
    CMIF_REG_WRITE(SSDVT_CMIF_M2C_FOE_1X_CLEAN, status);
    CMIF_REG_WRITE(SSDVT_CMIF_M2C_FOE_1X_CHECK, SSDVT_CMIF_GET_LSB(status)+1);
}

#define IRQID_RAKE_CMIF_M2C_IRQ_WFI	        MD_IRQID_RAKE_CMIF_M2C_IRQ_0
#define IRQID_RAKE_CMIF_M2C_IRQ_U3G	        MD_IRQID_RAKE_CMIF_M2C_IRQ_1
#define IRQID_RAKE_CMIF_M2C_IRQ_FPC_1X      MD_IRQID_RAKE_CMIF_FPC_1X_IRQ
#define IRQID_RAKE_CMIF_M2C_IRQ_DO_PD       MD_IRQID_RAKE_CMIF_PD_DO_IRQ
#define IRQID_RAKE_CMIF_M2C_IRQ_FOE_1X      MD_IRQID_RAKE_CMIF_FOE_1X_IRQ

void SSDVT_CMIF_InterruptTestRegisterISR_L1CORE()
{
    /* CR4 side */

    if(SSDVT_CMIF_TEST_RAKE_ENABLE == 1){
        // register u3g rake interrupt handler
        IRQ_Register_LISR(IRQID_RAKE_CMIF_M2C_IRQ_U3G	, SSDVT_CMIF_InterruptTestISR_RAKE_U3G, "CMIF_U3G_RAKE");
        IRQSensitivity(IRQID_RAKE_CMIF_M2C_IRQ_U3G	, LEVEL_SENSITIVE);
        IRQUnmask(IRQID_RAKE_CMIF_M2C_IRQ_U3G);

        IRQ_Register_LISR(IRQID_RAKE_CMIF_M2C_IRQ_FPC_1X	, SSDVT_CMIF_InterruptTestISR_FPC_1X, "CMIF_FPC_1X");
        IRQSensitivity(IRQID_RAKE_CMIF_M2C_IRQ_FPC_1X	, LEVEL_SENSITIVE);
        IRQUnmask(IRQID_RAKE_CMIF_M2C_IRQ_FPC_1X);

        IRQ_Register_LISR(IRQID_RAKE_CMIF_M2C_IRQ_DO_PD	, SSDVT_CMIF_InterruptTestISR_DO_PD, "CMIF_DO_PD");
        IRQSensitivity(IRQID_RAKE_CMIF_M2C_IRQ_DO_PD	, LEVEL_SENSITIVE);
        IRQUnmask(IRQID_RAKE_CMIF_M2C_IRQ_DO_PD);

        IRQ_Register_LISR(IRQID_RAKE_CMIF_M2C_IRQ_FOE_1X	, SSDVT_CMIF_InterruptTestISR_FOE_1X, "CMIF_FOE_1X");
        IRQSensitivity(IRQID_RAKE_CMIF_M2C_IRQ_FOE_1X	, LEVEL_SENSITIVE);
        IRQUnmask(IRQID_RAKE_CMIF_M2C_IRQ_FOE_1X);
    }
}

void SSDVT_CMIF_InterruptTestInternal_L1CORE(ssdvt_uint32 master,
                                             volatile ssdvt_uint32* irq_set,
                                             volatile ssdvt_uint32* irq_check,
                                             volatile ssdvt_uint32* sync)
{
    // master == 1: send interrupt
    // master == 0: receive interrupt

    volatile ssdvt_uint32 i;
    volatile ssdvt_uint32 wait;

    if(master == 1){
        *(irq_check) = 0xFFFFFFFF;

        // send interrupt
        for(i=0; i<SSDVT_CMIF_INTERRUPT_SIZE; ++i){
            SSDVT_SET_CURRENT_STATUS(0xB000 + ssdvt_cmif_interrupt_test_case_num + i);
            dbg_print(".... send interrupt %d ... ", i);

            // start sync
            cmif_test_sync(0, sync);

            *(irq_set) = (1 << i);

            wait = SSDVT_CMIF_INTERRUPT_WAIT_LOOP_COUNT;
            do{
                wait--; 
            }while(wait != 0 && *(irq_check) != i+1);

            if(*(irq_check) == i+1){
                dbg_print("success\n");
            }
            else{
                dbg_print("error\n");
            }

            // end sync
            cmif_test_sync(0, sync);
        }
    }
    else{
        // receive interrupt
        for(i=0; i<SSDVT_CMIF_INTERRUPT_SIZE; ++i){
            SSDVT_SET_CURRENT_STATUS(0xB000 + ssdvt_cmif_interrupt_test_case_num + i);
            dbg_print(".... recive interrupt %d ... ", i);

            // start sync
            cmif_test_sync(0, sync);

            while(*(irq_check) != i+1);

            // check interrupt enter in order
            SSDVT_ASSERT_EQ(*(irq_check), i+1);
            dbg_print("success\n");

            // end sync
            cmif_test_sync(0, sync);
        }
        *(irq_check) = 0;
    }
}


void SSDVT_CMIF_InterruptTest_USIP()
{
    // Register ISR 
    SSDVT_CMIF_InterruptTestRegisterISR_L1CORE();

    /* MD32 RAKE */
    if(SSDVT_CMIF_TEST_RAKE_ENABLE == 1){
        // send rake u3g interrupt to CR4
        ssdvt_cmif_interrupt_test_case_num = 0x300;
        SSDVT_CMIF_InterruptTestInternal(1, SSDVT_CMIF_C2M_U3G_RAKE_SET, SSDVT_CMIF_C2M_U3G_RAKE_CHECK, cmif_cr4_rake.sync);

        // receive rake u3g interrupt from CR4 
        ssdvt_cmif_interrupt_test_case_num = 0x400;
        SSDVT_CMIF_InterruptTestInternal(0, NULL, SSDVT_CMIF_M2C_U3G_RAKE_CHECK, cmif_cr4_rake.sync);

        // receive rake fpc_1x interrupt from CR4 
        ssdvt_cmif_interrupt_test_case_num = 0x500;
        SSDVT_CMIF_InterruptTestInternal(0, NULL, SSDVT_CMIF_M2C_FPC_1X_CHECK, cmif_cr4_rake.sync);

        // receive rake do_pd interrupt from CR4 
        ssdvt_cmif_interrupt_test_case_num = 0x600;
        SSDVT_CMIF_InterruptTestInternal(0, NULL, SSDVT_CMIF_M2C_DO_PD_CHECK, cmif_cr4_rake.sync);

        // receive rake foe_1x interrupt from CR4 
        ssdvt_cmif_interrupt_test_case_num = 0x700;
        SSDVT_CMIF_InterruptTestInternal(0, NULL, SSDVT_CMIF_M2C_FOE_1X_CHECK, cmif_cr4_rake.sync);
    }
}

void SSDVT_CMIF_M2C_WFI_ISR_RAKE(){
    
    // fill the check status to let l1core and md32 know the test case is pass
    CMIF_REG_WRITE(SSDVT_CMIF_M2C_WFI_RAKE_CHECK, SSDVT_CMIF_M2C_WFI_ISR_CHECK_PATTERN);

    // clean interrupt status
    CMIF_REG_WRITE(SSDVT_CMIF_M2C_WFI_RAKE_CLEAN, 0x1);

    // send c2m interrupt to to wake up md32
    CMIF_REG_WRITE(SSDVT_CMIF_C2M_U3G_RAKE_SET, 0x1);
}

void SSDVT_CMIF_M2CWFIInterruptTestRegisterISR_L1CORE(){
    // register rake m2c wfi interrupt
    if(SSDVT_CMIF_TEST_RAKE_ENABLE == 1){
        IRQ_Register_LISR(IRQID_RAKE_CMIF_M2C_IRQ_WFI, SSDVT_CMIF_M2C_WFI_ISR_RAKE, "CMIF_WFI_RAKE");
        IRQSensitivity(IRQID_RAKE_CMIF_M2C_IRQ_WFI, LEVEL_SENSITIVE);
        IRQUnmask(IRQID_RAKE_CMIF_M2C_IRQ_WFI);
    }
}

void SSDVT_CMIF_M2CWFIInterruptTest_L1CORE() {
    // register m2c wfi interrupt
    SSDVT_CMIF_M2CWFIInterruptTestRegisterISR_L1CORE();

    // check the rake m2c wfi interrupt
    if(SSDVT_CMIF_TEST_RAKE_ENABLE == 1){
        cmif_test_sync(0, cmif_cr4_rake.sync);
        while(*(SSDVT_CMIF_M2C_WFI_RAKE_CHECK) != SSDVT_CMIF_M2C_WFI_ISR_CHECK_PATTERN) ;
    }
}

