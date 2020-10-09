#include "drv_cuif.h"
#include "kal_hrt_api.h"
#if defined(__CUIF_DEBUG__)
#include "us_timer.h"
#endif
/*******************************************************************************
 * Function prototypes
 *******************************************************************************/
#if defined(__CUIF_DEBUG__)
extern CUIF_DebugRecordList cuif_debug_records[CUIF_VPE_NUM];
#endif


#if !defined(__CUIF_DEBUG__)
void cuif_InterruptHandlerInternal(volatile cuif_uint32* sreg,
                                   volatile cuif_uint32* ereg,
                                   volatile cuif_uint32* creg,
                                   CUIF_InterruptEntryFun* handler,
                                   cuif_bool* auto_eoi);
#else     /* __CUIF_DEBUG__ */
void cuif_InterruptHandlerInternal(volatile cuif_uint32* sreg,
                                   volatile cuif_uint32* ereg,
                                   volatile cuif_uint32* creg,
                                   CUIF_InterruptEntryFun* handler,
                                   cuif_bool* auto_eoi,
                                   CUIF_MCU_INT nID);
#endif    /* __CUIF_DEBUG__ */

/*******************************************************************************
 * Functions - Common Part
 *******************************************************************************/
void CUIF_DefaultISR(CUIF_Mask_t* mask)
{
    // code 1: status register value, code 2: enable register vale, code 3: n0~n4 (0~4)
    CUIF_ASSERT(0, CUIF_REG_READ(mask->status_reg_addr),
                    CUIF_REG_READ((cuif_uint32)mask->status_reg_addr + CUIF_INTERRUPT_STA_EN_OFFSET),
                   ((cuif_uint32)mask->status_reg_addr - (cuif_uint32)CUIF_U2C_STATUS_BASE) / CUIF_INTERRUPT_NEXT_INT_OFFSET);
}

#if defined(__CUIF_DEBUG__)
void cuif_DebugAddRecord(cuif_uint32 status,
                                    volatile cuif_uint32* set_addr,
                                    cuif_uint32 set_value,
                                    cuif_uint32 caller)
{
    cuif_uint32 save_index = 0;
    cuif_uint32 vpe_id = kal_get_current_vpe_id();
    CUIF_ASSERT(vpe_id < CUIF_VPE_NUM, vpe_id, CUIF_VPE_NUM, 0);
    
    CUIF_DebugRecordList *cuif_debug_records_ptr = &cuif_debug_records[vpe_id];
    
    cuif_uint32 mask;    
    mask = kal_hrt_SaveAndSetIRQMask();

    // fetch and add top_index atomically. 
    save_index = cuif_debug_records_ptr->top_index;

    ++(cuif_debug_records_ptr->top_index);
    if(cuif_debug_records_ptr->top_index == CUIF_DEBUG_ISR_HANDLE_CODE_SIZE){
        cuif_debug_records_ptr->top_index = 0; 
    }

    kal_hrt_RestoreIRQMask(mask);

    cuif_debug_records_ptr->records[save_index].time = ust_get_current_time();
    cuif_debug_records_ptr->records[save_index].status = status;
    cuif_debug_records_ptr->records[save_index].set_addr = (cuif_uint32)set_addr;
    cuif_debug_records_ptr->records[save_index].set_value = set_value;
    cuif_debug_records_ptr->records[save_index].caller = caller;
}
#endif /*  __CUIF_DEBUG__ */


/**
  *   General interrupt handler function
  *
  *   @param[in] sreg            CUIF interrupt status register
  *   @param[in] creg            CUIF interrupt clean register
  *   @param[in] handler         CUIF user entry function lists 
  *   @param[in] core            CUIF interrupt core type - BRP, DFE and RAKE (Debug only)
  *   @param[in] interrupt_type  CUIF interrupt type - U3G or U4G (Debug only)
  **/
#if !defined(__CUIF_DEBUG__)
void cuif_InterruptHandlerInternal(volatile cuif_uint32* sreg,
                                   volatile cuif_uint32* ereg,
                                   volatile cuif_uint32* creg,
                                   CUIF_InterruptEntryFun* handler,
                                   cuif_bool* auto_eoi 
                                   )
#else     /* __CUIF_DEBUG__ */
void cuif_InterruptHandlerInternal(volatile cuif_uint32* sreg,
                                   volatile cuif_uint32* ereg,
                                   volatile cuif_uint32* creg,
                                   CUIF_InterruptEntryFun* handler,
                                   cuif_bool* auto_eoi,
                                   CUIF_MCU_INT nID)
#endif    /* __CUIF_DEBUG__ */
{
    cuif_uint32 eidx;  // entry function index 
    CUIF_Mask_t cuif_mask;
#if defined(__CUIF_DEBUG__)
    cuif_uint32 caller;
    CUIF_GET_RETURN_ADDRESS(caller);
#endif /* __CUIF_DEBUG__ */

    // for debug when no register callback
    cuif_mask.status_reg_addr = (cuif_uint32*)sreg;

    // read the sreg to the mask
    cuif_mask.mask31_0 = CUIF_REG_READ(sreg) & CUIF_REG_READ(ereg);

    while(cuif_mask.mask31_0){
        // find the lsb
        eidx = CUIF_GET_LSB(cuif_mask.mask31_0);

        // invoke the user register interupt handler function
        (*handler[eidx])((CUIF_Mask_t *)&cuif_mask);

        // if the `irq_auto_eoi` is CUIF_TRUE, clean the interupt bit
        if(auto_eoi[eidx] == CUIF_TRUE){

            CUIF_REG_WRITE(creg, 1 << eidx);

#if defined(__CUIF_DEBUG__)
            cuif_DebugAddRecord(cuif_mask.mask31_0, creg, (1 << eidx), caller);
#endif /* __CUIF_DEBUG__ */
        }

#if defined(__CUIF_DEBUG__)
        cuif_DebugAddISRHandleCode(eidx, nID);
#endif   /* __CUIF_DEBUG__ */

        // read the sreg to the mask
        cuif_mask.mask31_0 = CUIF_REG_READ(sreg) & CUIF_REG_READ(ereg);
    }
}


/*******************************************************************************
 * Functions - Driver test 
 *******************************************************************************/

#if defined(__CUIF_DRV_TEST__)


extern cuif_uint32 cuif_drvtest_case;
extern cuif_uint32 cuif_drvtest_prev_irq;
extern cuif_uint32 cuif_drvtest_irq_test_success;

extern void CUIF_DriverAPIU2CTest(CUIF_MODULE_INDEX moduleID, CUIF_MCU_INT nID);
extern void CUIF_DriverAPIC2UTest(CUIF_MODULE_INDEX moduleID, CUIF_MCU_INT nID);

extern void CUIF_DriverISRTestC2U(CUIF_MODULE_INDEX moduleID, cuif_uint32 case_num);
extern void CUIF_DriverISRTestU2C(CUIF_MCU_INT nID, cuif_uint32 case_num, CUIF_MODULE_INDEX moduleID);

void cuif_drv_test_sync(CUIF_MODULE_INDEX moduleID)
{
    volatile cuif_uint32* sync;
    if (CUIF_ENUM_INNER == moduleID || CUIF_ENUM_OUTER == moduleID)
    {
        sync = (volatile cuif_uint32*)CUIF_SYNC_ADDR_USIP0;
    }
    else
    {
        sync = (volatile cuif_uint32*)CUIF_SYNC_ADDR_USIP1;
    }
    // MCU Part
    while(sync[1] == 1) ;
    sync[1] = 1;             

    while(sync[0] == 0) ;
    sync[0] = 0;             
}

#define EN_ALL_EXCEPT_WFI_MASK 0xFFFFFFF0
#define EN_ALL_MASK            0xFFFFFFFF

void CUIF_DisableInterrupt()
{
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N0), EN_ALL_EXCEPT_WFI_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N1), EN_ALL_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N2), EN_ALL_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N3), EN_ALL_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N4), EN_ALL_EXCEPT_WFI_MASK);;
}

void CUIF_EnableInterrupt()
{
    CUIF_REG_WRITE(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N0), EN_ALL_EXCEPT_WFI_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N1), EN_ALL_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N2), EN_ALL_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N3), EN_ALL_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_SET_BASE + REG_OFFSET(CUIF_ENUM_N4), EN_ALL_EXCEPT_WFI_MASK);
}

void CUIF_ENABLE_ALL_CHECK()
{
    cuif_uint8 nID;
    cuif_uint32 set_mask;
    cuif_uint32 get_mask;
    cuif_uint8 irq_num;

    for(nID = 0; nID < CUIF_ENUM_ALL_MCU_INT_NUM - 1; nID++)
    {
        if (nID == 0 || nID == 4)
        {   // skip WFI bits
            irq_num = 4;
        }
        else
        {
            irq_num = 0;
        }
        
        set_mask = 0;
        for(; irq_num < cuif_u2c_int_source_num[nID]; irq_num++)
        {
            set_mask |= 1 << irq_num;
        }
        get_mask = CUIF_REG_READ(CUIF_U2C_EN_BASE + REG_OFFSET(nID));
        CUIF_DRV_TEST_ASSERT_EQ(get_mask, set_mask);
        dbg_print("Enable n%d - Pass\n", nID);        
    }
}

void CUIF_DISABLE_ALL_CHECK()
{
    CUIF_Mask_t mask;

    CUIF_N0_EN_STATUS(&mask);
    CUIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x0);

    CUIF_N1_EN_STATUS(&mask);
    CUIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x0);

    CUIF_N2_EN_STATUS(&mask);
    CUIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x0);

    CUIF_N3_EN_STATUS(&mask);
    CUIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x0);

    CUIF_N4_EN_STATUS(&mask);
    CUIF_DRV_TEST_ASSERT_EQ(mask.mask31_0, 0x0);
}

void CUIF_EN_STA_API_TEST()
{
    CUIF_EnableInterrupt();
    CUIF_ENABLE_ALL_CHECK();
    CUIF_DisableInterrupt();
    CUIF_DISABLE_ALL_CHECK();
}

void CUIF_DriverAPITest()
{
    cuif_uint8 mID;
    cuif_uint8 nID;

    CUIF_EN_STA_API_TEST();
    
#if 0
/* under construction !*/
#else
    for(mID = 0; mID < 1; mID++)
#endif
    {
        for(nID = 0; nID < CUIF_ENUM_ALL_MCU_INT_NUM - 1; nID++)
        {
            CUIF_DriverAPIU2CTest(mID, nID);
            CUIF_DriverAPIC2UTest(mID, nID);
        }
    }
}

void CUIF_ClearPendingInterrupt()
{
#if 0
/* under construction !*/
/* under construction !*/
#endif
}

void CUIF_InterruptTest()
{
    cuif_uint8 mID;
    cuif_uint8 nID;

    for(nID = 0; nID < CUIF_ENUM_ALL_MCU_INT_NUM - 1; nID++)
    {
        CUIF_DriverISRTestU2C(nID, 1, CUIF_ENUM_INNER);
    }

#if 0
/* under construction !*/
#else
    for(mID = 0; mID < 1; mID++)
#endif

    {
        CUIF_DriverISRTestC2U(mID, 1);
    }

    for(nID = 0; nID < CUIF_ENUM_ALL_MCU_INT_NUM - 1; nID++)
    {
        CUIF_DriverISRTestU2C(nID, 2, CUIF_ENUM_INNER);
    }

#if 0
/* under construction !*/
#else
    for(mID = 0; mID < 1; mID++)
#endif

    {
        CUIF_DriverISRTestC2U(mID, 2);
    }
}

/* how to run cuif driver test ? */
/* MD32 Side: insert CUIF_DriverTest to basic load function */
/* CR4 Side: insert CUIF_DriverTest to idle task function */

void CUIF_DriverTest()
{
#if __CUIF_MD32S_CORE__
    extern void CUIF_DriverInitTest();
    CUIF_DriverInitTest();
#endif

    CUIF_DisableInterrupt();
    dbg_print("-- CUIF API Test Start.\n");
    CUIF_DisableInterrupt();
    CUIF_DriverAPITest();
    dbg_print("-- CUIF API Test End.\n");

    dbg_print("-- CUIF Interrupt Start.\n");
    CUIF_EnableInterrupt();
    CUIF_InterruptTest();
    dbg_print("-- CUIF Interrupt End.\n");

    while(1);

}

#endif /* __CUIF_DRV_TEST__ */

