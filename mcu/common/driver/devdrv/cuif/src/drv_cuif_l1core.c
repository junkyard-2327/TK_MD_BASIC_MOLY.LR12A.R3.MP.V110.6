#include "drv_cuif.h"
#include "kal_internal_api.h"

#if defined(__CUIF_DEBUG__)
#include "us_timer.h"
#endif

#if defined(__MTK_TARGET__)
#include "kal_trace.h" // for logging
static char cuif_fatal_error_trace_buf[128];
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
#define irq_entry_function(fun_name) extern void fun_name(CUIF_Mask_t*);
#define irq_auto_eoi(eoi)

#include "cuif_u2c_isr_config_n0_pre.h"
#include "cuif_u2c_isr_config_n1_pre.h"
#include "cuif_u2c_isr_config_n2_pre.h"
#include "cuif_u2c_isr_config_n3_pre.h"
#include "cuif_u2c_isr_config_n4_pre.h"
#if defined(__MD95__)
#include "cuif_u2c_isr_config_n5_pre.h"
#include "cuif_u2c_isr_config_n6_pre.h"
#endif


#undef  irq_index
#undef  irq_name 
#undef  irq_entry_function 
#undef  irq_auto_eoi

#define irq_index(code)  
#define irq_name(name)
#define irq_entry_function(fun_name) fun_name, 
#define irq_auto_eoi(eoi)

CUIF_InterruptEntryFun cuif_isr_handler_n0[] = {
    #include "cuif_u2c_isr_config_n0_pre.h"
};

CUIF_InterruptEntryFun cuif_isr_handler_n1[] = {
    #include "cuif_u2c_isr_config_n1_pre.h"
};

CUIF_InterruptEntryFun cuif_isr_handler_n2[] = {
    #include "cuif_u2c_isr_config_n2_pre.h"
};

CUIF_InterruptEntryFun cuif_isr_handler_n3[] = {
    #include "cuif_u2c_isr_config_n3_pre.h"
};

CUIF_InterruptEntryFun cuif_isr_handler_n4[] = {
    #include "cuif_u2c_isr_config_n4_pre.h"
};

#if defined(__MD95__)
CUIF_InterruptEntryFun cuif_isr_handler_n5[] = {
    #include "cuif_u2c_isr_config_n5_pre.h"
};


CUIF_InterruptEntryFun cuif_isr_handler_n6[] = {
    #include "cuif_u2c_isr_config_n6_pre.h"
};
#endif

CUIF_InterruptEntryFun* cuif_isr_handler[CUIF_ENUM_ALL_MCU_INT_NUM - 1] = { 
	cuif_isr_handler_n0, 
	cuif_isr_handler_n1, 
	cuif_isr_handler_n2,   
	cuif_isr_handler_n3,
	cuif_isr_handler_n4,
#if defined(__MD95__)
	cuif_isr_handler_n5,
	cuif_isr_handler_n6
#endif
};

#undef  irq_index
#undef  irq_name 
#undef  irq_entry_function 
#undef  irq_auto_eoi

#define irq_index(code)  
#define irq_name(name)
#define irq_entry_function(fun_name)  
#define irq_auto_eoi(eoi)    eoi,

cuif_bool cuif_isr_eoi_n0[] = {
    #include "cuif_u2c_isr_config_n0_pre.h"
};

cuif_bool cuif_isr_eoi_n1[] = {
    #include "cuif_u2c_isr_config_n1_pre.h"
};

cuif_bool cuif_isr_eoi_n2[] = {
    #include "cuif_u2c_isr_config_n2_pre.h"
};

cuif_bool cuif_isr_eoi_n3[] = {
    #include "cuif_u2c_isr_config_n3_pre.h"
};

cuif_bool cuif_isr_eoi_n4[] = {
    #include "cuif_u2c_isr_config_n4_pre.h"
};

#if defined(__MD95__)
cuif_bool cuif_isr_eoi_n5[] = {
    #include "cuif_u2c_isr_config_n5_pre.h"
};

cuif_bool cuif_isr_eoi_n6[] = {
    #include "cuif_u2c_isr_config_n6_pre.h"
};
#endif

#undef  irq_index
#undef  irq_name 
#undef  irq_entry_function 
#undef  irq_auto_eoi

cuif_bool* cuif_isr_eoi[CUIF_ENUM_ALL_MCU_INT_NUM - 1] = {
    cuif_isr_eoi_n0,
    cuif_isr_eoi_n1,
    cuif_isr_eoi_n2,
    cuif_isr_eoi_n3,
    cuif_isr_eoi_n4,
#if defined(__MD95__)
    cuif_isr_eoi_n5,
    cuif_isr_eoi_n6
#endif
};

/* backup U2C enable registers because sleep flow may power-down the mdcore (CCC) module */
kal_uint32 CUIF_U2C_bk_en_reg[CUIF_ENUM_ALL_MCU_INT_NUM];


/*******************************************************************************
 * Debug 
 *******************************************************************************/
#if defined(__CUIF_DEBUG__)

CUIF_DebugISRCodeList cuif_debug_isr_handle[CUIF_ENUM_ALL_MCU_INT_NUM - 1];

// for 4 VPE
CUIF_DebugRecordList cuif_debug_records[CUIF_VPE_NUM];
#endif

CUIF_OverFlowRecord cuif_overflow_record[CUIF_VPE_NUM];

/*******************************************************************************
 * Function prototypes
 *******************************************************************************/
#if !defined(__CUIF_DEBUG__)
extern void cuif_InterruptHandlerInternal(volatile cuif_uint32* sreg,
                                          volatile cuif_uint32* ereg,
                                          volatile cuif_uint32* creg,
                                          CUIF_InterruptEntryFun* handler,
                                          cuif_bool* auto_eoi);
#else     /* __CUIF_DEBUG__ */
extern void cuif_InterruptHandlerInternal(volatile cuif_uint32* sreg,
                                          volatile cuif_uint32* ereg,
                                          volatile cuif_uint32* creg,
                                          CUIF_InterruptEntryFun* handler,
                                          cuif_bool* auto_eoi,
                                          CUIF_MCU_INT nID);
#endif    /* __CUIF_DEBUG__ */

void CUIF_InterruptHandler_N0();
void CUIF_InterruptHandler_N1();
void CUIF_InterruptHandler_N2();
void CUIF_InterruptHandler_N3();
void CUIF_InterruptHandler_N4();
#if defined(__MD95__)
void CUIF_InterruptHandler_N5();
void CUIF_InterruptHandler_N6();
#endif


/*******************************************************************************
 * Functions - CR4 Part
 *******************************************************************************/


/* U2C read status */
void CUIF_U2C_STATUS(CUIF_MCU_INT nID, CUIF_Mask_t* m)
{
    m -> mask31_0 = CUIF_REG_READ(CUIF_U2C_STATUS_BASE + REG_OFFSET(nID));
}

/* U2C eoi */
void CUIF_U2C_EOI(CUIF_MCU_INT nID, cuif_uint32 code, cuif_uint32 limit)
{
    // check the code in the range
    CUIF_ASSERT(code < limit, nID, code, limit);

#if defined(__CUIF_DEBUG__)
    cuif_uint32 caller;
    CUIF_GET_RETURN_ADDRESS(caller);
#endif /* __CUIF_DEBUG__ */

	/* EOI2 */
    CUIF_REG_WRITE(CUIF_U2C_CLEAR_BASE + REG_OFFSET(nID), 1 << code);

#if defined(__CUIF_DEBUG__)
    cuif_DebugAddRecord(nID, CUIF_U2C_CLEAR_BASE + REG_OFFSET(nID), (1 << code), caller);
#endif /* __CUIF_DEBUG__ */
}

/* C2U read status */
void CUIF_U2C_ENABLE_STATUS(CUIF_MCU_INT nID, CUIF_Mask_t* m)
{
    m -> mask31_0 = CUIF_REG_READ(CUIF_U2C_EN_BASE + REG_OFFSET(nID));
}


/* U2C enable*/
void CUIF_U2C_ENABLE(CUIF_MCU_INT nID, cuif_uint32 code, cuif_uint32 limit)
{
    // check the code in the range
    CUIF_ASSERT(code < limit, nID, code, limit);

#if defined(__CUIF_DEBUG__)
    cuif_uint32 caller;
    CUIF_GET_RETURN_ADDRESS(caller);
#endif /* __CUIF_DEBUG__ */

    CUIF_REG_WRITE(CUIF_U2C_EN_SET_BASE + REG_OFFSET(nID), 1 << code);

#if defined(__CUIF_DEBUG__)
    cuif_DebugAddRecord(nID, CUIF_U2C_EN_SET_BASE + REG_OFFSET(nID), (1 << code), caller);
#endif /* __CUIF_DEBUG__ */

}

/* U2C disable*/
void CUIF_U2C_DISABLE(CUIF_MCU_INT nID, cuif_uint32 code, cuif_uint32 limit)
{
    // check the code in the range
    CUIF_ASSERT(code < limit, nID, code, limit);
    
#if defined(__CUIF_DEBUG__)
    cuif_uint32 caller;
    CUIF_GET_RETURN_ADDRESS(caller);
#endif /* __CUIF_DEBUG__ */

    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(nID), 1 << code);

#if defined(__CUIF_DEBUG__)
    cuif_DebugAddRecord(nID, CUIF_U2C_EN_CLR_BASE + REG_OFFSET(nID), (1 << code), caller);
#endif /* __CUIF_DEBUG__ */

}


/* C2U set*/
void CUIF_C2U_SWI_SW(CUIF_MODULE_INDEX moduleID, cuif_uint32 code, cuif_uint32 limit)
{
    cuif_uint32 caller;
    CUIF_Mask_t before;

    CUIF_GET_RETURN_ADDRESS(caller);
    before.mask31_0 = CUIF_REG_READ(CUIF_C2U_STATUS_BASE + REG_OFFSET(moduleID));

    // check the code in the range
    CUIF_ASSERT(code < limit, moduleID, code, limit);

    // avoid set the same interrupt again 
    if ((before.mask31_0 >> code) & 0x1)
    {
        cuif_uint32 vpe_id = kal_get_current_vpe_id();
        CUIF_ASSERT(vpe_id < CUIF_VPE_NUM, vpe_id, CUIF_VPE_NUM, 0);
        
        cuif_overflow_record[vpe_id].receiver = (cuif_uint32)moduleID;
        cuif_overflow_record[vpe_id].interrupt_bit = code;
        cuif_overflow_record[vpe_id].status_addr = (cuif_uint32)(CUIF_C2U_STATUS_BASE + REG_OFFSET(moduleID));
        cuif_overflow_record[vpe_id].current_status = before.mask31_0;
        cuif_overflow_record[vpe_id].caller = caller;

#if defined(__MTK_TARGET__)  // print log
        sprintf(cuif_fatal_error_trace_buf, "CUIF C2U %d interrupt bit overflow: overflow bit: %d, current status: 0x%x, caller 0x%x", 
                                            moduleID, code, CUIF_REG_READ(CUIF_C2U_STATUS_BASE + REG_OFFSET(moduleID)), caller);
        kal_sys_trace(cuif_fatal_error_trace_buf);
#endif
        kal_fatal_error_handler(KAL_ERROR_DSP_CUIF_INTERRUPT_TRIGGER_INVALID, caller);
        //CUIF_ASSERT(((CUIF_REG_READ(CUIF_C2U_STATUS_BASE + REG_OFFSET(moduleID)) >> code) & 0x1) == 0, moduleID, code, CUIF_REG_READ(CUIF_C2U_STATUS_BASE + REG_OFFSET(moduleID)));
    }    
	
	//dbg_print("SWI_SET on addr %x\n", CUIF_U2C_SET_BASE + REG_OFFSET(nID));
	/* set interrupt */
    CUIF_REG_WRITE(CUIF_C2U_SET_BASE + REG_OFFSET(moduleID), 1 << code);
	
#if defined(__CUIF_DEBUG__)
    cuif_DebugAddRecord(before.mask31_0, CUIF_C2U_SET_BASE + REG_OFFSET(moduleID), (1 << code), caller);    
#endif /* __CUIF_DEBUG__ */
}

void CUIF_C2U_SWI_NO_CHECK(CUIF_MODULE_INDEX moduleID, cuif_uint32 code, cuif_uint32 limit)
{
    // check the code in the range
    CUIF_ASSERT(code < limit, moduleID, code, limit);    

#if defined(__CUIF_DEBUG__)
    cuif_uint32 caller;
    CUIF_GET_RETURN_ADDRESS(caller);
#endif /* __CUIF_DEBUG__ */
	
	//dbg_print("SWI_SET on addr %x\n", CUIF_U2C_SET_BASE + REG_OFFSET(nID));
	/* set interrupt */
    CUIF_REG_WRITE(CUIF_C2U_SET_BASE + REG_OFFSET(moduleID), 1 << code);
	
#if defined(__CUIF_DEBUG__)
    cuif_DebugAddRecord(moduleID, CUIF_C2U_SET_BASE + REG_OFFSET(moduleID), (1 << code), caller);    
#endif /* __CUIF_DEBUG__ */
}

void CUIF_C2U_STATUS(CUIF_MODULE_INDEX moduleID, CUIF_Mask_t* m)
{
    m -> mask31_0 = CUIF_REG_READ(CUIF_C2U_STATUS_BASE + REG_OFFSET(moduleID));
}

#if defined(__MD93__)
#define EN_ALL_EXCEPT_WFI_MASK 0xFFFFFFF0
#define EN_ALL_WAKEUP_MASK     0xF
#define EN_N1_ALL_MASK         0x11FFF    // bit 13~16 reserved for ddr_en, 13: inner, 14: brp, 15:fec, 16:spch
#elif defined(__MD95__)
#define EN_ALL_EXCEPT_WFI_MASK 0xFFFFFFC0
#define EN_ALL_WAKEUP_MASK     0x3F
#endif
#define EN_ALL_MASK            0xFFFFFFFF


/* default enable all interrupt */
void CUIF_MCU_EN_ALL_INT()
{
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N0), EN_ALL_EXCEPT_WFI_MASK);
#if defined(__MD93__)
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N1), EN_N1_ALL_MASK);
#elif defined(__MD95__)
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N1), EN_ALL_MASK);
#endif
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N2), EN_ALL_MASK);
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N3), EN_ALL_MASK);
#if defined(__MD93__)
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N4), EN_ALL_EXCEPT_WFI_MASK);
#elif defined(__MD95__)
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N4), EN_ALL_MASK);
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N5), EN_ALL_EXCEPT_WFI_MASK);
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N6), EN_ALL_EXCEPT_WFI_MASK);
#endif
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_WAKEUP), EN_ALL_WAKEUP_MASK);
    MO_Sync();
}

void CUIF_register_backup()
{
    kal_uint32 idx;

    for (idx = 0; idx < CUIF_ENUM_ALL_MCU_INT_NUM; idx++)
    {
        CUIF_U2C_bk_en_reg[idx] = CUIF_REG_READ(CUIF_U2C_EN_BASE + REG_OFFSET((idx)));
    }
    MO_Sync();
}

void CUIF_register_restore()
{
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N0), (CUIF_U2C_bk_en_reg[CUIF_ENUM_N0] & EN_ALL_EXCEPT_WFI_MASK));
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N1), (CUIF_U2C_bk_en_reg[CUIF_ENUM_N1] & EN_ALL_MASK));
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N2), (CUIF_U2C_bk_en_reg[CUIF_ENUM_N2] & EN_ALL_MASK));
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N3), (CUIF_U2C_bk_en_reg[CUIF_ENUM_N3] & EN_ALL_MASK));
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N4), (CUIF_U2C_bk_en_reg[CUIF_ENUM_N4] & EN_ALL_EXCEPT_WFI_MASK));
    DRV_WriteReg32(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_WAKEUP), (CUIF_U2C_bk_en_reg[CUIF_ENUM_WAKEUP] & EN_ALL_WAKEUP_MASK));
    MO_Sync();
}

void CUIF_Init()
{
    // register u2c n0 interrupt handler
    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N0, (void*)CUIF_InterruptHandler_N0, "CUIF_U2C_N0");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N0, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N0);

    // register u2c n1 interrupt handler
    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N1, (void*)CUIF_InterruptHandler_N1, "CUIF_U2C_N1");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N1, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N1);

    // register u2c n2 interrupt handler
    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N2, CUIF_InterruptHandler_N2, "CUIF_U2C_N2");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N2, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N2);

    // register u2c n3 interrupt handler
    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N3	, CUIF_InterruptHandler_N3, "CUIF_U2C_N3");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N3	, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N3	);

    
    // register u2c n4 interrupt handler
    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N4, CUIF_InterruptHandler_N4, "CUIF_U2C_N4");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N4, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N4);

#if defined(__MD95__)
    // register u2c n5 interrupt handler
    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N5, CUIF_InterruptHandler_N5, "CUIF_U2C_N5");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N5, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N5);

    // register u2c n6 interrupt handler
    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N6, CUIF_InterruptHandler_N6, "CUIF_U2C_N6");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N6, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N6);
#endif
    CUIF_MCU_EN_ALL_INT();

}


/**
  *  CUIF Interrupt handler: uSIP trigger MCU 
  *
  **/
void CUIF_InterruptHandler_N0()
{
    CUIF_HANDLER(CUIF_ENUM_N0);
}

void CUIF_InterruptHandler_N1()
{
    CUIF_HANDLER(CUIF_ENUM_N1);
}

void CUIF_InterruptHandler_N2()
{
    CUIF_HANDLER(CUIF_ENUM_N2);
}

void CUIF_InterruptHandler_N3()
{
    CUIF_HANDLER(CUIF_ENUM_N3);
}

void CUIF_InterruptHandler_N4()
{
    CUIF_HANDLER(CUIF_ENUM_N4);
}

#if defined(__MD95__)
void CUIF_InterruptHandler_N5()
{
    CUIF_HANDLER(CUIF_ENUM_N5);
}

void CUIF_InterruptHandler_N6()
{
    CUIF_HANDLER(CUIF_ENUM_N6);
}
#endif



#if defined(__CUIF_DEBUG__)
void cuif_DebugAddISRHandleCode(cuif_uint32 code, CUIF_MCU_INT nID)
{
    CUIF_DebugISRCodeList* code_list = CUIF_NULL;
    cuif_uint32 save_index;

    code_list = &cuif_debug_isr_handle[nID];

    if(code_list != CUIF_NULL){
        save_index = code_list -> top_index;
            
        ++code_list -> top_index;
        if(code_list -> top_index == CUIF_DEBUG_ISR_HANDLE_CODE_SIZE){
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
#if defined(__CUIF_DRV_TEST__)

extern void cuif_drv_test_sync(CUIF_MODULE_INDEX moduleID);
extern void CUIF_DisableInterrupt();
extern void CUIF_EnableInterrupt();
extern void CUIF_ClearPendingInterrupt();

volatile cuif_uint32 cuif_drvtest_case = 0;
volatile cuif_uint32 cuif_drvtest_prev_irq = 0;
volatile cuif_uint32 cuif_drvtest_irq_test_success = 0;

cuif_uint32 cuif_c2u_int_source_num[CUIF_ENUM_ALL_USIP_INT_NUM] =
{
    CUIF_NUM_INTERRUPT_INNER_SOURCES,
    CUIF_NUM_INTERRUPT_OUTER_SOURCES,
    CUIF_NUM_INTERRUPT_FEC_SOURCES,
    CUIF_NUM_INTERRUPT_SPEECH_SOURCES
};

cuif_uint32 cuif_u2c_int_source_num[CUIF_ENUM_ALL_MCU_INT_NUM - 1] =
{
    CUIF_MCU_INT_N0_SOURCES,
    CUIF_MCU_INT_N1_SOURCES,
    CUIF_MCU_INT_N2_SOURCES,
    CUIF_MCU_INT_N3_SOURCES,
    CUIF_MCU_INT_N4_SOURCES
};

/* from usIP: moduleID(inner, outer, fec, speech) to MCU nID (N0~N4) */
void CUIF_DriverAPIU2CTest(CUIF_MODULE_INDEX moduleID, CUIF_MCU_INT nID)
{
    CUIF_Mask_t mask;

    cuif_drv_test_sync(moduleID);

    // 1. Wait for uSIP

    cuif_drv_test_sync(moduleID);

    // 2. Check the status and clear the status registers

    CUIF_U2C_STATUS(nID, &mask);
    CUIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x1E0);

    CUIF_U2C_EOI(nID, 5, cuif_u2c_int_source_num[nID]);
    CUIF_U2C_EOI(nID, 6, cuif_u2c_int_source_num[nID]);
    CUIF_U2C_EOI(nID, 7, cuif_u2c_int_source_num[nID]);
    CUIF_U2C_EOI(nID, 8, cuif_u2c_int_source_num[nID]);

    CUIF_U2C_STATUS(nID, &mask);    
    CUIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x0);

    cuif_drv_test_sync(moduleID);

    // 3. Wait for uSIP


    cuif_drv_test_sync(moduleID);
}

void CUIF_DriverAPIC2UTest(CUIF_MODULE_INDEX moduleID, CUIF_MCU_INT nID)
{ 
    CUIF_Mask_t mask;

    cuif_drv_test_sync(moduleID);

    // 1. set the interrupt bit and check status registers
    CUIF_C2U_SWI_SW(moduleID, 5, cuif_c2u_int_source_num[moduleID]);
    CUIF_C2U_SWI_SW(moduleID, 6, cuif_c2u_int_source_num[moduleID]);
    CUIF_C2U_SWI_SW(moduleID, 7, cuif_c2u_int_source_num[moduleID]);
    CUIF_C2U_SWI_SW(moduleID, 8, cuif_c2u_int_source_num[moduleID]);

    CUIF_C2U_STATUS(moduleID, &mask);
    CUIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x1E0);


    cuif_drv_test_sync(moduleID);

    // 2. Wait for uSIP 

    cuif_drv_test_sync(moduleID);

    // 3. Check the status regsiters 
    CUIF_C2U_STATUS(moduleID, &mask);
    CUIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x0);
    
    cuif_drv_test_sync(moduleID);

}

void CUIF_DriverISRTestC2U(CUIF_MODULE_INDEX moduleID, cuif_uint32 case_num)
{

    cuif_drvtest_case = case_num;

    cuif_drv_test_sync(moduleID);
    
    // 1. Wait for uSIP

    cuif_drv_test_sync(moduleID);

    // 2. Send interrupt to uSIP 
    if(cuif_drvtest_case == 1){
        CUIF_C2U_SWI_SW(moduleID, 1, cuif_c2u_int_source_num[moduleID]);
        CUIF_C2U_SWI_SW(moduleID, 2, cuif_c2u_int_source_num[moduleID]);
        CUIF_C2U_SWI_SW(moduleID, 3, cuif_c2u_int_source_num[moduleID]);
        CUIF_C2U_SWI_SW(moduleID, 4, cuif_c2u_int_source_num[moduleID]);
    }
    else if(cuif_drvtest_case == 2){
        CUIF_C2U_SWI_SW(moduleID, 5, cuif_c2u_int_source_num[moduleID]);
        CUIF_C2U_SWI_SW(moduleID, 6, cuif_c2u_int_source_num[moduleID]);
        CUIF_C2U_SWI_SW(moduleID, 7, cuif_c2u_int_source_num[moduleID]);
        CUIF_C2U_SWI_SW(moduleID, 8, cuif_c2u_int_source_num[moduleID]);        
    }

    cuif_drv_test_sync(moduleID);

    // 3. Wait for uSIP

    cuif_drv_test_sync(moduleID);
}

void CUIF_DriverISRTestU2C(CUIF_MCU_INT nID, cuif_uint32 case_num, CUIF_MODULE_INDEX moduleID)
{
    cuif_drvtest_case = case_num;

    cuif_drv_test_sync(moduleID);

    // 1. Disalbe interrupt and clean the pending interrupt 
    CUIF_DisableInterrupt();
    CUIF_ClearPendingInterrupt();

    cuif_drv_test_sync(moduleID);

    // 2. Wait for uSIP

    cuif_drv_test_sync(moduleID);

    if (1 == case_num)
    {
        cuif_drvtest_prev_irq = 3;
    }
    // 3. Enable the interrupt
    CUIF_EnableInterrupt();
    while(cuif_drvtest_irq_test_success != (cuif_drvtest_case << 4) + nID);
    CUIF_DisableInterrupt();


    cuif_drv_test_sync(moduleID);
}


void CUIF_DriverTestISR_N0(CUIF_Mask_t* mask)
{
    cuif_uint32 cuif_drvtest_curr_irq;
    if(cuif_drvtest_case == 1){
        // auto eoi mode
        cuif_drvtest_curr_irq = CUIF_GET_LSB(mask->mask31_0);

        CUIF_DRV_TEST_ASSERT_EQ(cuif_drvtest_curr_irq - cuif_drvtest_prev_irq, 1);

        cuif_drvtest_prev_irq = cuif_drvtest_curr_irq;
        if(cuif_drvtest_prev_irq == 6){
            cuif_drvtest_prev_irq = 0;
            cuif_drvtest_irq_test_success = (cuif_drvtest_case << 4)+ CUIF_ENUM_N0;
        }
    }
    else if(cuif_drvtest_case == 2){
        // non-auto eoi mode
        cuif_drvtest_curr_irq = CUIF_GET_LSB(mask->mask31_0);
   
        switch (cuif_drvtest_prev_irq) {
            case 0:
                CUIF_N0_EOI(9);
                break;
            case 7:
                if(cuif_drvtest_curr_irq == 7)
                    CUIF_N0_EOI(7);
                else if(cuif_drvtest_curr_irq == 8)
                    CUIF_N0_EOI(8);
                break;
            default:
                CUIF_DRV_TEST_ASSERT_EQ(1,2);
        }

        cuif_drvtest_prev_irq = cuif_drvtest_curr_irq;
        if(cuif_drvtest_prev_irq == 8){
            cuif_drvtest_prev_irq = 0; 
            cuif_drvtest_irq_test_success = (cuif_drvtest_case << 4) + CUIF_ENUM_N0;
        }
    }
}

void CUIF_DriverTestISR_N1(CUIF_Mask_t* mask)
{
    cuif_uint32 cuif_drvtest_curr_irq;
    if(cuif_drvtest_case == 1){
        // auto eoi mode
        cuif_drvtest_curr_irq = CUIF_GET_LSB(mask->mask31_0);

        CUIF_DRV_TEST_ASSERT_EQ(cuif_drvtest_curr_irq - cuif_drvtest_prev_irq, 1);

        cuif_drvtest_prev_irq = cuif_drvtest_curr_irq;
        if(cuif_drvtest_prev_irq == 6){
            cuif_drvtest_prev_irq = 0;
            cuif_drvtest_irq_test_success = (cuif_drvtest_case << 4) + CUIF_ENUM_N1;
        }
    }
    else if(cuif_drvtest_case == 2){
        // non-auto eoi mode
        cuif_drvtest_curr_irq = CUIF_GET_LSB(mask->mask31_0);
   
        switch (cuif_drvtest_prev_irq) {
            case 0:
                CUIF_N1_EOI(9);
                break;
            case 7:
                if(cuif_drvtest_curr_irq == 7)
                    CUIF_N1_EOI(7);
                else if(cuif_drvtest_curr_irq == 8)
                    CUIF_N1_EOI(8);
                break;
            default:
                CUIF_DRV_TEST_ASSERT_EQ(1,2);
        }

        cuif_drvtest_prev_irq = cuif_drvtest_curr_irq;
        if(cuif_drvtest_prev_irq == 8){
            cuif_drvtest_prev_irq = 0; 
            cuif_drvtest_irq_test_success = (cuif_drvtest_case << 4) + CUIF_ENUM_N1;
        }
    }
}


void CUIF_DriverTestISR_N2(CUIF_Mask_t* mask)
{
    cuif_uint32 cuif_drvtest_curr_irq;
    if(cuif_drvtest_case == 1){
        // auto eoi mode
        cuif_drvtest_curr_irq = CUIF_GET_LSB(mask->mask31_0);

        CUIF_DRV_TEST_ASSERT_EQ(cuif_drvtest_curr_irq - cuif_drvtest_prev_irq, 1);

        cuif_drvtest_prev_irq = cuif_drvtest_curr_irq;
        if(cuif_drvtest_prev_irq == 6){
            cuif_drvtest_prev_irq = 0;
            cuif_drvtest_irq_test_success = (cuif_drvtest_case << 4) + CUIF_ENUM_N2;
        }
    }
    else if(cuif_drvtest_case == 2){
        // non-auto eoi mode
        cuif_drvtest_curr_irq = CUIF_GET_LSB(mask->mask31_0);
   
        switch (cuif_drvtest_prev_irq) {
            case 0:
                CUIF_N2_EOI(9);
                break;
            case 7:
                if(cuif_drvtest_curr_irq == 7)
                    CUIF_N2_EOI(7);
                else if(cuif_drvtest_curr_irq == 8)
                    CUIF_N2_EOI(8);
                break;
            default:
                CUIF_DRV_TEST_ASSERT_EQ(1,2);
        }

        cuif_drvtest_prev_irq = cuif_drvtest_curr_irq;
        if(cuif_drvtest_prev_irq == 8){
            cuif_drvtest_prev_irq = 0; 
            cuif_drvtest_irq_test_success = (cuif_drvtest_case << 4) + CUIF_ENUM_N2;
        }
    }
}


void CUIF_DriverTestISR_N3(CUIF_Mask_t* mask)
{
    cuif_uint32 cuif_drvtest_curr_irq;
    if(cuif_drvtest_case == 1){
        // auto eoi mode
        cuif_drvtest_curr_irq = CUIF_GET_LSB(mask->mask31_0);

        CUIF_DRV_TEST_ASSERT_EQ(cuif_drvtest_curr_irq - cuif_drvtest_prev_irq, 1);

        cuif_drvtest_prev_irq = cuif_drvtest_curr_irq;
        if(cuif_drvtest_prev_irq == 6){
            cuif_drvtest_prev_irq = 0;
            cuif_drvtest_irq_test_success = (cuif_drvtest_case << 4) + CUIF_ENUM_N3;
        }
    }
    else if(cuif_drvtest_case == 2){
        // non-auto eoi mode
        cuif_drvtest_curr_irq = CUIF_GET_LSB(mask->mask31_0);
   
        switch (cuif_drvtest_prev_irq) {
            case 0:
                CUIF_N3_EOI(9);
                break;
            case 7:
                if(cuif_drvtest_curr_irq == 7)
                    CUIF_N3_EOI(7);
                else if(cuif_drvtest_curr_irq == 8)
                    CUIF_N3_EOI(8);
                break;
            default:
                CUIF_DRV_TEST_ASSERT_EQ(1,2);
        }

        cuif_drvtest_prev_irq = cuif_drvtest_curr_irq;
        if(cuif_drvtest_prev_irq == 8){
            cuif_drvtest_prev_irq = 0; 
            cuif_drvtest_irq_test_success = (cuif_drvtest_case << 4) + CUIF_ENUM_N3;
        }
    }
}


void CUIF_DriverTestISR_N4(CUIF_Mask_t* mask)
{
    cuif_uint32 cuif_drvtest_curr_irq;
    if(cuif_drvtest_case == 1){
        // auto eoi mode
        cuif_drvtest_curr_irq = CUIF_GET_LSB(mask->mask31_0);

        CUIF_DRV_TEST_ASSERT_EQ(cuif_drvtest_curr_irq - cuif_drvtest_prev_irq, 1);

        cuif_drvtest_prev_irq = cuif_drvtest_curr_irq;
        if(cuif_drvtest_prev_irq == 6){
            cuif_drvtest_prev_irq = 0;
            cuif_drvtest_irq_test_success = (cuif_drvtest_case << 4) + CUIF_ENUM_N4;
        }
    }
    else if(cuif_drvtest_case == 2){
        // non-auto eoi mode
        cuif_drvtest_curr_irq = CUIF_GET_LSB(mask->mask31_0);
   
        switch (cuif_drvtest_prev_irq) {
            case 0:
                CUIF_N4_EOI(9);
                break;
            case 7:
                if(cuif_drvtest_curr_irq == 7)
                    CUIF_N4_EOI(7);
                else if(cuif_drvtest_curr_irq == 8)
                    CUIF_N4_EOI(8);
                break;
            default:
                CUIF_DRV_TEST_ASSERT_EQ(1,2);
        }

        cuif_drvtest_prev_irq = cuif_drvtest_curr_irq;
        if(cuif_drvtest_prev_irq == 8){
            cuif_drvtest_prev_irq = 0; 
            cuif_drvtest_irq_test_success = (cuif_drvtest_case << 4) + CUIF_ENUM_N4;
        }
    }
}


#endif /* __CUIF_DRV_TEST__ */
