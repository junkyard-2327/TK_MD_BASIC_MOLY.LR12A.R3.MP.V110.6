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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "drv_cmif_l1core.h"
#include "kal_hrt_api.h"
#include "gen93_proj_config.h"

#if defined(__CMIF_DEBUG__)
#include "us_timer.h"
#endif

#if defined(__MD32S_CMIF_DRV_TEST__)
#include "intrCtrl.h"
#include "kal_public_api.h"
#include "kal_general_types.h"


#define dbg_print(str, args...)  
#endif /*  __MD32S_CMIF_DRV_TEST__ */


/*******************************************************************************
 * Function prototypes
 *******************************************************************************/
#if defined(__CMIF_DEBUG__)
extern CMIF_DebugRecordList cmif_debug_records[CMIF_VPE_NUM];
#endif


#if !defined(__CMIF_DEBUG__)
void cmif_InterruptHandlerInternal(volatile cmif_uint32* sreg,
                                   volatile cmif_uint32* creg,
                                   CMIF_InterruptEntryFun* handler,
                                   cmif_bool* auto_eoi);
#else     /* __CMIF_DEBUG__ */
void cmif_InterruptHandlerInternal(volatile cmif_uint32* sreg,
                                   volatile cmif_uint32* creg,
                                   CMIF_InterruptEntryFun* handler,
                                   cmif_bool* auto_eoi,
                                   CMIF_DebugInterruptType interrupt_type);
#endif    /* __CMIF_DEBUG__ */

/*******************************************************************************
 * Functions - Common Part
 *******************************************************************************/
void CMIF_DefaultISR(CMIF_Mask_t* mask)
{
    // code 1: status register value, code 2: status register addr, code 3: u3g, fpc_1x, do_pd, foe_1x (0~3)
    CMIF_ASSERT(0, mask->mask31_0,
                   (cmif_uint32)mask->status_reg_addr,
                   ((cmif_uint32)mask->status_reg_addr - (cmif_uint32)CMIF_M2C_U3G_RAKE_STATUS) / CMIF_NEXT_INT_OFFSET);

    //CMIF_ASSERT(0, mask->mask31_0, 0, 0);
}

#if defined(__CMIF_DEBUG__)
void cmif_DebugAddRecord(cmif_uint32 status,
                         cmif_uint32 set_addr,
                         cmif_uint32 set_value,
                         cmif_uint32 caller)
{

    cmif_uint32 save_index = 0;
    cmif_uint32 vpe_id = kal_get_current_vpe_id();
    CMIF_ASSERT(vpe_id < CMIF_VPE_NUM, vpe_id, CMIF_VPE_NUM, 0);
    
    CMIF_DebugRecordList *cmif_debug_records_ptr = &cmif_debug_records[vpe_id];
    
    cmif_uint32 mask;

    mask = kal_hrt_SaveAndSetIRQMask();

    // fetch and add top_index atomically. 
    save_index = cmif_debug_records_ptr->top_index;

    ++(cmif_debug_records_ptr->top_index);
    if(cmif_debug_records_ptr->top_index == CMIF_DEBUG_ISR_HANDLE_CODE_SIZE){
        cmif_debug_records_ptr->top_index = 0; 
    }

    kal_hrt_RestoreIRQMask(mask);

    cmif_debug_records_ptr->records[save_index].time = ust_get_current_time();
    cmif_debug_records_ptr->records[save_index].status = status;
    cmif_debug_records_ptr->records[save_index].set_addr = set_addr;
    cmif_debug_records_ptr->records[save_index].set_value = set_value;
    cmif_debug_records_ptr->records[save_index].caller = caller;  
}
#endif /*  __CMIF_DEBUG__ */

/**
  *   General interrupt handler function
  *
  *   @param[in] sreg            CMIF interrupt status register
  *   @param[in] creg            CMIF interrupt clean register
  *   @param[in] handler         CMIF user entry function lists 
  *   @param[in] core            CMIF interrupt core type - BRP, DFE and RAKE (Debug only)
  *   @param[in] interrupt_type  CMIF interrupt type - U3G or U4G (Debug only)
  **/
#if !defined(__CMIF_DEBUG__)
void cmif_InterruptHandlerInternal(volatile cmif_uint32* sreg,
                                   volatile cmif_uint32* creg,
                                   CMIF_InterruptEntryFun* handler,
                                   cmif_bool* auto_eoi 
                                   )
#else     /* __CMIF_DEBUG__ */
void cmif_InterruptHandlerInternal(volatile cmif_uint32* sreg,
                                   volatile cmif_uint32* creg,
                                   CMIF_InterruptEntryFun* handler,
                                   cmif_bool* auto_eoi,
                                   CMIF_DebugInterruptType interrupt_type)
#endif    /* __CMIF_DEBUG__ */
{
    cmif_uint32 eidx;  // entry function index 
    CMIF_Mask_t cmif_mask;
#if defined(__CMIF_DEBUG__)
    cmif_uint32 caller;
    CMIF_GET_RETURN_ADDRESS(caller);
#endif /* __CMIF_DEBUG__ */

    // for debug usage
    cmif_mask.status_reg_addr = (cmif_uint32 *)sreg;
    // read the sreg to the mask
    cmif_mask.mask31_0 = CMIF_REG_READ(sreg);

    while(cmif_mask.mask31_0){
        // find the lsb
        eidx = CMIF_GET_LSB(cmif_mask.mask31_0);

        // invoke the user register interupt handler function
        (*handler[eidx])((CMIF_Mask_t *)&cmif_mask);

        // if the `irq_auto_eoi` is CMIF_TRUE, clean the interupt bit
        if(auto_eoi[eidx] == CMIF_TRUE){

           /* In 6291, JADE CMIF has a clear fail bug */
           /* This workaround ensure the clear transaction is success */
#if defined(__CMIF_DRV_SW_WORKAROUND__)
			do{
#endif
				CMIF_REG_WRITE(creg, 1 << eidx);
#if defined(__CMIF_DRV_SW_WORKAROUND__)
			}while((CMIF_REG_READ(sreg) >> eidx) & 0x1);
#endif

#if defined(__CMIF_DEBUG__)
            cmif_DebugAddRecord(cmif_mask.mask31_0, (cmif_uint32)creg, (1 << eidx), caller);
#endif /* __CMIF_DEBUG__ */
        }

#if defined(__CMIF_DEBUG__)
        cmif_DebugAddISRHandle(eidx, interrupt_type);
#endif   /* __CMIF_DEBUG__ */

        // read the sreg to the mask
        cmif_mask.mask31_0 = CMIF_REG_READ(sreg);

    }
}


/*******************************************************************************
 * Functions - Driver test 
 *******************************************************************************/

#if defined(__MD32S_CMIF_DRV_TEST__)

extern CMIF_Ctrl_t cmif_ctrl_rake_u3g;
extern CMIF_Ctrl_t cmif_ctrl_rake_fpc_1x;
extern CMIF_Ctrl_t cmif_ctrl_rake_do_pd;
extern CMIF_Ctrl_t cmif_ctrl_rake_foe_1x;


extern cmif_uint32 cmif_drvtest_case;
extern cmif_uint32 cmif_drvtest_prev_irq;
extern cmif_uint32 cmif_drvtest_irq_test_success;

extern void CMIF_DriverAPIM2CTest(CMIF_Ctrl_t* ctrl);
extern void CMIF_DriverAPIC2MTest(CMIF_Ctrl_t* ctrl);

extern void CMIF_DriverISRTestC2M(CMIF_Ctrl_t* ctrl, cmif_uint32 case_num);
extern void CMIF_DriverISRTestM2C(CMIF_Ctrl_t* ctrl, cmif_uint32 case_num);

void cmif_drv_test_sync(CMIF_Ctrl_t* ctrl)
{
    volatile cmif_uint32* sync = ctrl->sync;

    while(sync[1] == 1) ;
    sync[1] = 1;             

    while(sync[0] == 0) ;
    sync[0] = 0;             
}


void CMIF_DriverAPITest()
{
    CMIF_DriverAPIM2CTest(&cmif_ctrl_rake_u3g);
    CMIF_DriverAPIC2MTest(&cmif_ctrl_rake_u3g);

    CMIF_DriverAPIM2CTest(&cmif_ctrl_rake_fpc_1x);
    CMIF_DriverAPIM2CTest(&cmif_ctrl_rake_do_pd);
    CMIF_DriverAPIM2CTest(&cmif_ctrl_rake_foe_1x);
}


void CMIF_DisableInterrupt()
{
    // MCU Part
    IRQMask(IRQID_RAKE_CMIF_M2C_IRQ_U3G);
    IRQMask(IRQID_RAKE_CMIF_M2C_IRQ_FPC_1X);
    IRQMask(IRQID_RAKE_CMIF_M2C_IRQ_DO_PD);
    IRQMask(IRQID_RAKE_CMIF_M2C_IRQ_FOE_1X);
}

void CMIF_EnableInterrupt()
{
    extern void CMIF_Init();
    CMIF_Init();
}

void CMIF_ClearPendingInterrupt()
{
#if 0
/* under construction !*/
/* under construction !*/
#endif
}

void CMIF_InterruptTest()
{
    // test rake u3g
    CMIF_DriverISRTestC2M(&cmif_ctrl_rake_u3g, 1);
    CMIF_DriverISRTestM2C(&cmif_ctrl_rake_u3g, 1);

    CMIF_DriverISRTestC2M(&cmif_ctrl_rake_u3g, 2);
    CMIF_DriverISRTestM2C(&cmif_ctrl_rake_u3g, 2);

    CMIF_DriverISRTestM2C(&cmif_ctrl_rake_fpc_1x, 1);
    CMIF_DriverISRTestM2C(&cmif_ctrl_rake_fpc_1x, 2);

    CMIF_DriverISRTestM2C(&cmif_ctrl_rake_do_pd, 1);
    CMIF_DriverISRTestM2C(&cmif_ctrl_rake_do_pd, 2);

    CMIF_DriverISRTestM2C(&cmif_ctrl_rake_foe_1x, 1);
    CMIF_DriverISRTestM2C(&cmif_ctrl_rake_foe_1x, 2);
}

/* how to run cmif driver test ? */
/* MD32 Side: insert CMIF_DriverTest to basic load function */
/* CR4 Side: insert CMIF_DriverTest to idle task function */

void CMIF_DriverTest()
{
#if __CMIF_MD32S_CORE__
    extern void CMIF_DriverInitTest();
    CMIF_DriverInitTest();
#endif

    CMIF_DisableInterrupt();
    dbg_print("-- CMIF API Test Start.\n");
    CMIF_DisableInterrupt();
    CMIF_DriverAPITest();
    dbg_print("-- CMIF API Test End.\n");

    dbg_print("-- CMIF Interrupt Start.\n");
    CMIF_EnableInterrupt();
    CMIF_InterruptTest();
    dbg_print("-- CMIF Interrupt End.\n");

    while(1);
}

#endif /* __MD32S_CMIF_DRV_TEST__ */

