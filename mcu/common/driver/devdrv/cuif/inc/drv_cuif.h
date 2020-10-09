#ifndef __DRV_CUIF_H__
#define __DRV_CUIF_H__


#include "cuif_l1core_public.h"

#include "intrCtrl.h"
#include "kal_public_api.h"
#include "kal_general_types.h"

#include "sync_data.h"
#include "drv_comm.h"
#include "reg_base.h"

#define __CUIF_DEBUG__

/*******************************************************************************
  * CUIF Memory Definition 
  *******************************************************************************/

/* Control Register Offset */
#define CUIF_INTERRUPT_STATUS_OFFSET            (0x00)
#define CUIF_INTERRUPT_SET_OFFSET               (0x04)
#define CUIF_INTERRUPT_CLEAR_OFFSET             (0x08)
#define CUIF_INTERRUPT_EN_OFFSET                (0x0C)
#define CUIF_INTERRUPT_EN_SET_OFFSET            (0x10)
#define CUIF_INTERRUPT_EN_CLR_OFFSET            (0x14)

#define CUIF_INTERRUPT_STA_EN_OFFSET            (CUIF_INTERRUPT_EN_OFFSET - CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_INTERRUPT_NEXT_INT_OFFSET          (0x18)


/* C2U Core Offset*/
#define CUIF_C2U_INNER                          (0x00 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
#define CUIF_C2U_OUTER                          (0x18 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
#define CUIF_C2U_FEC                            (0x30 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
#define CUIF_C2U_SPEECH                         (0x48 + BASE_MADDR_USIP_CROSS_CORE_CTRL)

/* C2U INNER */
#define CUIF_C2U_INNER_INTERRUPT_STATUS_OFFSET  (CUIF_C2U_INNER + CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_C2U_INNER_INTERRUPT_SET_OFFSET     (CUIF_C2U_INNER + CUIF_INTERRUPT_SET_OFFSET)
#define CUIF_C2U_INNER_INTERRUPT_CLEAR_OFFSET   (CUIF_C2U_INNER + CUIF_INTERRUPT_CLEAR_OFFSET)
#define CUIF_C2U_INNER_INTERRUPT_EN_OFFSET      (CUIF_C2U_INNER + CUIF_INTERRUPT_EN_OFFSET)
#define CUIF_C2U_INNER_INTERRUPT_EN_SET_OFFSET  (CUIF_C2U_INNER + CUIF_INTERRUPT_EN_SET_OFFSET)
#define CUIF_C2U_INNER_INTERRUPT_EN_CLR_OFFSET  (CUIF_C2U_INNER + CUIF_INTERRUPT_EN_CLR_OFFSET)


/* C2U OUTER */
#define CUIF_C2U_OUTER_INTERRUPT_STATUS_OFFSET  (CUIF_C2U_OUTER + CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_C2U_OUTER_INTERRUPT_SET_OFFSET     (CUIF_C2U_OUTER + CUIF_INTERRUPT_SET_OFFSET)
#define CUIF_C2U_OUTER_INTERRUPT_CLEAR_OFFSET   (CUIF_C2U_OUTER + CUIF_INTERRUPT_CLEAR_OFFSET)
#define CUIF_C2U_OUTER_INTERRUPT_EN_OFFSET      (CUIF_C2U_OUTER + CUIF_INTERRUPT_EN_OFFSET)
#define CUIF_C2U_OUTER_INTERRUPT_EN_SET_OFFSET  (CUIF_C2U_OUTER + CUIF_INTERRUPT_EN_SET_OFFSET)
#define CUIF_C2U_OUTER_INTERRUPT_EN_CLR_OFFSET  (CUIF_C2U_OUTER + CUIF_INTERRUPT_EN_CLR_OFFSET)

/* C2U FEC */
#define CUIF_C2U_FEC_INTERRUPT_STATUS_OFFSET    (CUIF_C2U_FEC + CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_C2U_FEC_INTERRUPT_SET_OFFSET       (CUIF_C2U_FEC + CUIF_INTERRUPT_SET_OFFSET)
#define CUIF_C2U_FEC_INTERRUPT_CLEAR_OFFSET     (CUIF_C2U_FEC + CUIF_INTERRUPT_CLEAR_OFFSET)
#define CUIF_C2U_FEC_INTERRUPT_EN_OFFSET        (CUIF_C2U_FEC + CUIF_INTERRUPT_EN_OFFSET)
#define CUIF_C2U_FEC_INTERRUPT_EN_SET_OFFSET    (CUIF_C2U_FEC + CUIF_INTERRUPT_EN_SET_OFFSET)
#define CUIF_C2U_FEC_INTERRUPT_EN_CLR_OFFSET    (CUIF_C2U_FEC + CUIF_INTERRUPT_EN_CLR_OFFSET)

/* C2U SPEECH */
#define CUIF_C2U_SPEECH_INTERRUPT_STATUS_OFFSET (CUIF_C2U_SPEECH + CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_C2U_SPEECH_INTERRUPT_SET_OFFSET    (CUIF_C2U_SPEECH + CUIF_INTERRUPT_SET_OFFSET)
#define CUIF_C2U_SPEECH_INTERRUPT_CLEAR_OFFSET  (CUIF_C2U_SPEECH + CUIF_INTERRUPT_CLEAR_OFFSET)
#define CUIF_C2U_SPEECH_INTERRUPT_EN_OFFSET     (CUIF_C2U_SPEECH + CUIF_INTERRUPT_EN_OFFSET)
#define CUIF_C2U_SPEECH_INTERRUPT_EN_SET_OFFSET (CUIF_C2U_SPEECH + CUIF_INTERRUPT_EN_SET_OFFSET)
#define CUIF_C2U_SPEECH_INTERRUPT_EN_CLR_OFFSET (CUIF_C2U_SPEECH + CUIF_INTERRUPT_EN_CLR_OFFSET)

/* U2C Core Offset*/

#if defined(__MD93__)

/* U2C Core Offset*/
/* to iA core0 VPE0 */
#define CUIF_U2C_N0                             (0x60 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
/* to iA core0 VPE1 */
#define CUIF_U2C_N1                             (0x78 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
#define CUIF_U2C_N2                             (0x90 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
#define CUIF_U2C_N3                             (0xa8 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
/* to iA core1 VPE1 */
#define CUIF_U2C_N4                             (0xc0 + BASE_MADDR_USIP_CROSS_CORE_CTRL)

#define CUIF_U2C_WAKEUP                         (0xd8 + BASE_MADDR_USIP_CROSS_CORE_CTRL)

#elif defined(__MD95__)

/* to iA core0 VPE0 */
#define CUIF_U2C_N0                             (0x90 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
/* to iA core0 VPE1 */
#define CUIF_U2C_N1                             (0xa8 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
#define CUIF_U2C_N2                             (0xc0 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
#define CUIF_U2C_N3                             (0xd8 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
/* to iA core1 VPE0/1 */
#define CUIF_U2C_N4                             (0xf0 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
#define CUIF_U2C_N5                             (0x108 + BASE_MADDR_USIP_CROSS_CORE_CTRL)
#define CUIF_U2C_N6                             (0x120 + BASE_MADDR_USIP_CROSS_CORE_CTRL)

#define CUIF_U2C_WAKEUP                         (0x138 + BASE_MADDR_USIP_CROSS_CORE_CTRL)

#else
#error "not support this arch!!!!"
#endif

/* U2C N0 */
#define CUIF_U2C_N0_INTERRUPT_STATUS_OFFSET     (CUIF_U2C_N0 + CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_U2C_N0_INTERRUPT_SET_OFFSET        (CUIF_U2C_N0 + CUIF_INTERRUPT_SET_OFFSET)
#define CUIF_U2C_N0_INTERRUPT_CLEAR_OFFSET      (CUIF_U2C_N0 + CUIF_INTERRUPT_CLEAR_OFFSET)
#define CUIF_U2C_N0_INTERRUPT_EN_OFFSET         (CUIF_U2C_N0 + CUIF_INTERRUPT_EN_OFFSET)
#define CUIF_U2C_N0_INTERRUPT_EN_SET_OFFSET     (CUIF_U2C_N0 + CUIF_INTERRUPT_EN_SET_OFFSET)
#define CUIF_U2C_N0_INTERRUPT_EN_CLR_OFFSET     (CUIF_U2C_N0 + CUIF_INTERRUPT_EN_CLR_OFFSET)

/* U2C N1 */
#define CUIF_U2C_N1_INTERRUPT_STATUS_OFFSET     (CUIF_U2C_N1 + CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_U2C_N1_INTERRUPT_SET_OFFSET        (CUIF_U2C_N1 + CUIF_INTERRUPT_SET_OFFSET)
#define CUIF_U2C_N1_INTERRUPT_CLEAR_OFFSET      (CUIF_U2C_N1 + CUIF_INTERRUPT_CLEAR_OFFSET)
#define CUIF_U2C_N1_INTERRUPT_EN_OFFSET         (CUIF_U2C_N1 + CUIF_INTERRUPT_EN_OFFSET)
#define CUIF_U2C_N1_INTERRUPT_EN_SET_OFFSET     (CUIF_U2C_N1 + CUIF_INTERRUPT_EN_SET_OFFSET)
#define CUIF_U2C_N1_INTERRUPT_EN_CLR_OFFSET     (CUIF_U2C_N1 + CUIF_INTERRUPT_EN_CLR_OFFSET)

/* U2C N2 */
#define CUIF_U2C_N2_INTERRUPT_STATUS_OFFSET     (CUIF_U2C_N2 + CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_U2C_N2_INTERRUPT_SET_OFFSET        (CUIF_U2C_N2 + CUIF_INTERRUPT_SET_OFFSET)
#define CUIF_U2C_N2_INTERRUPT_CLEAR_OFFSET      (CUIF_U2C_N2 + CUIF_INTERRUPT_CLEAR_OFFSET)
#define CUIF_U2C_N2_INTERRUPT_EN_OFFSET         (CUIF_U2C_N2 + CUIF_INTERRUPT_EN_OFFSET)
#define CUIF_U2C_N2_INTERRUPT_EN_SET_OFFSET     (CUIF_U2C_N2 + CUIF_INTERRUPT_EN_SET_OFFSET)
#define CUIF_U2C_N2_INTERRUPT_EN_CLR_OFFSET     (CUIF_U2C_N2 + CUIF_INTERRUPT_EN_CLR_OFFSET)

/* U2C N3 */
#define CUIF_U2C_N3_INTERRUPT_STATUS_OFFSET     (CUIF_U2C_N3 + CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_U2C_N3_INTERRUPT_SET_OFFSET        (CUIF_U2C_N3 + CUIF_INTERRUPT_SET_OFFSET)
#define CUIF_U2C_N3_INTERRUPT_CLEAR_OFFSET      (CUIF_U2C_N3 + CUIF_INTERRUPT_CLEAR_OFFSET)
#define CUIF_U2C_N3_INTERRUPT_EN_OFFSET         (CUIF_U2C_N3 + CUIF_INTERRUPT_EN_OFFSET)
#define CUIF_U2C_N3_INTERRUPT_EN_SET_OFFSET     (CUIF_U2C_N3 + CUIF_INTERRUPT_EN_SET_OFFSET)
#define CUIF_U2C_N3_INTERRUPT_EN_CLR_OFFSET     (CUIF_U2C_N3 + CUIF_INTERRUPT_EN_CLR_OFFSET)

/* U2C N4 */
#define CUIF_U2C_N4_INTERRUPT_STATUS_OFFSET     (CUIF_U2C_N4 + CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_U2C_N4_INTERRUPT_SET_OFFSET        (CUIF_U2C_N4 + CUIF_INTERRUPT_SET_OFFSET)
#define CUIF_U2C_N4_INTERRUPT_CLEAR_OFFSET      (CUIF_U2C_N4 + CUIF_INTERRUPT_CLEAR_OFFSET)
#define CUIF_U2C_N4_INTERRUPT_EN_OFFSET         (CUIF_U2C_N4 + CUIF_INTERRUPT_EN_OFFSET)
#define CUIF_U2C_N4_INTERRUPT_EN_SET_OFFSET     (CUIF_U2C_N4 + CUIF_INTERRUPT_EN_SET_OFFSET)
#define CUIF_U2C_N4_INTERRUPT_EN_CLR_OFFSET     (CUIF_U2C_N4 + CUIF_INTERRUPT_EN_CLR_OFFSET)

#if defined(__MD95__)
/* U2C N5 */
#define CUIF_U2C_N5_INTERRUPT_STATUS_OFFSET     (CUIF_U2C_N5 + CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_U2C_N5_INTERRUPT_SET_OFFSET        (CUIF_U2C_N5 + CUIF_INTERRUPT_SET_OFFSET)
#define CUIF_U2C_N5_INTERRUPT_CLEAR_OFFSET      (CUIF_U2C_N5 + CUIF_INTERRUPT_CLEAR_OFFSET)
#define CUIF_U2C_N5_INTERRUPT_EN_OFFSET         (CUIF_U2C_N5 + CUIF_INTERRUPT_EN_OFFSET)
#define CUIF_U2C_N5_INTERRUPT_EN_SET_OFFSET     (CUIF_U2C_N5 + CUIF_INTERRUPT_EN_SET_OFFSET)
#define CUIF_U2C_N5_INTERRUPT_EN_CLR_OFFSET     (CUIF_U2C_N5 + CUIF_INTERRUPT_EN_CLR_OFFSET)

/* U2C N6 */
#define CUIF_U2C_N6_INTERRUPT_STATUS_OFFSET     (CUIF_U2C_N6 + CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_U2C_N6_INTERRUPT_SET_OFFSET        (CUIF_U2C_N6 + CUIF_INTERRUPT_SET_OFFSET)
#define CUIF_U2C_N6_INTERRUPT_CLEAR_OFFSET      (CUIF_U2C_N6 + CUIF_INTERRUPT_CLEAR_OFFSET)
#define CUIF_U2C_N6_INTERRUPT_EN_OFFSET         (CUIF_U2C_N6 + CUIF_INTERRUPT_EN_OFFSET)
#define CUIF_U2C_N6_INTERRUPT_EN_SET_OFFSET     (CUIF_U2C_N6 + CUIF_INTERRUPT_EN_SET_OFFSET)
#define CUIF_U2C_N6_INTERRUPT_EN_CLR_OFFSET     (CUIF_U2C_N6 + CUIF_INTERRUPT_EN_CLR_OFFSET)
#endif

/* U2C WAKEUP */
#define CUIF_U2C_WAKEUP_INTERRUPT_STATUS_OFFSET (CUIF_U2C_WAKEUP + CUIF_INTERRUPT_STATUS_OFFSET)
#define CUIF_U2C_WAKEUP_INTERRUPT_SET_OFFSET    (CUIF_U2C_WAKEUP + CUIF_INTERRUPT_SET_OFFSET)
#define CUIF_U2C_WAKEUP_INTERRUPT_CLEAR_OFFSET  (CUIF_U2C_WAKEUP + CUIF_INTERRUPT_CLEAR_OFFSET)
#define CUIF_U2C_WAKEUP_INTERRUPT_EN_OFFSET     (CUIF_U2C_WAKEUP + CUIF_INTERRUPT_EN_OFFSET)
#define CUIF_U2C_WAKEUP_INTERRUPT_EN_SET_OFFSET (CUIF_U2C_WAKEUP + CUIF_INTERRUPT_EN_SET_OFFSET)
#define CUIF_U2C_WAKEUP_INTERRUPT_EN_CLR_OFFSET (CUIF_U2C_WAKEUP + CUIF_INTERRUPT_EN_CLR_OFFSET)
/*******************************************************************************
 * Macros 
 *******************************************************************************/

  /* C2U */
#define CUIF_C2U_STATUS_BASE        ((volatile cuif_uint32*)(CUIF_C2U_INNER_INTERRUPT_STATUS_OFFSET))
#define CUIF_C2U_SET_BASE           ((volatile cuif_uint32*)(CUIF_C2U_INNER_INTERRUPT_SET_OFFSET))
#define CUIF_C2U_CLEAR_BASE         ((volatile cuif_uint32*)(CUIF_C2U_INNER_INTERRUPT_CLEAR_OFFSET))
#define CUIF_C2U_EN_STATUS_BASE     ((volatile cuif_uint32*)(CUIF_C2U_INNER_INTERRUPT_EN_OFFSET))
#define CUIF_C2U_EN_SET_BASE        ((volatile cuif_uint32*)(CUIF_C2U_INNER_INTERRUPT_EN_SET_OFFSET))
#define CUIF_C2U_EN_CLR_BASE        ((volatile cuif_uint32*)(CUIF_C2U_INNER_INTERRUPT_EN_CLR_OFFSET))


/* U2C */
#define CUIF_U2C_STATUS_BASE        ((volatile cuif_uint32*)(CUIF_U2C_N0_INTERRUPT_STATUS_OFFSET))
#define CUIF_U2C_SET_BASE           ((volatile cuif_uint32*)(CUIF_U2C_N0_INTERRUPT_SET_OFFSET))
#define CUIF_U2C_CLEAR_BASE         ((volatile cuif_uint32*)(CUIF_U2C_N0_INTERRUPT_CLEAR_OFFSET))
#define CUIF_U2C_EN_BASE            ((volatile cuif_uint32*)(CUIF_U2C_N0_INTERRUPT_EN_OFFSET))
#define CUIF_U2C_EN_SET_BASE        ((volatile cuif_uint32*)(CUIF_U2C_N0_INTERRUPT_EN_SET_OFFSET))
#define CUIF_U2C_EN_CLR_BASE        ((volatile cuif_uint32*)(CUIF_U2C_N0_INTERRUPT_EN_CLR_OFFSET))

#define CUIF_TRUE                   KAL_TRUE
#define CUIF_FALSE                  KAL_FALSE


/* Read/Write macros */
#define CUIF_REG_READ(addr)             *(volatile cuif_uint32*)(addr)
#define CUIF_REG_WRITE(addr, value)     do{DRV_WriteReg32(addr, value); MO_Sync();}while(0);


#define CUIF_NULL                       NULL
#define CUIF_ASSERT(expr, c1, c2, c3)   EXT_ASSERT(expr, c1, c2, c3)
#define CUIF_GET_RETURN_ADDRESS(a)      GET_RETURN_ADDRESS(a)

#define CUIF_CLZ(z)                 __builtin_clz((z))
#define CUIF_GET_LSB(b)             (31 - CUIF_CLZ((b) & -(b)))

#define IRQID_CUIF_U2C_IRQ_N0       IRQ_USIP0_0_CODE
#define IRQID_CUIF_U2C_IRQ_N1       IRQ_USIP1_0_CODE
#define IRQID_CUIF_U2C_IRQ_N2       IRQ_USIP2_0_CODE	
#define IRQID_CUIF_U2C_IRQ_N3       IRQ_USIP3_0_CODE
#define IRQID_CUIF_U2C_IRQ_N4       IRQ_USIP0_1_CODE
#if defined(__MD95__)
#define IRQID_CUIF_U2C_IRQ_N5       IRQ_USIP1_1_CODE
#define IRQID_CUIF_U2C_IRQ_N6       IRQ_USIP2_1_CODE
#endif

#if defined(__MD93__)
#define CUIF_VPE_NUM                (4)
#elif defined(__MD95__)
#define CUIF_VPE_NUM                (6)
#endif
/* because reg is type of int, reg + 1 = addr + 4 */
#define REG_OFFSET(mID)             (mID * 6)

#define ARRAY_OFFSET(mID)           (mID)


/* cuif handler*/
#if !defined(__CUIF_DEBUG__)
#define CUIF_HANDLER(nID)                                   \
cuif_InterruptHandlerInternal(                              \
    CUIF_U2C_STATUS_BASE + REG_OFFSET(nID),                 \
    CUIF_U2C_EN_BASE + REG_OFFSET(nID),                     \
    CUIF_U2C_CLEAR_BASE + REG_OFFSET(nID),                  \
    cuif_isr_handler[ARRAY_OFFSET(nID)],                    \
    cuif_isr_eoi[ARRAY_OFFSET(nID)])				
#else     /* __CUIF_DEBUG__ */
#define CUIF_HANDLER(nID)                                   \
cuif_InterruptHandlerInternal(                              \
    CUIF_U2C_STATUS_BASE + REG_OFFSET(nID),                 \
    CUIF_U2C_EN_BASE + REG_OFFSET(nID),                     \
    CUIF_U2C_CLEAR_BASE + REG_OFFSET(nID),                  \
    cuif_isr_handler[ARRAY_OFFSET(nID)],                    \
    cuif_isr_eoi[ARRAY_OFFSET(nID)],                        \
    nID)
#endif    /* __CUIF_DEBUG__ */



/* cuif overflow debug info */
typedef struct{
    cuif_uint32 receiver;      /**< The mcu receiver: 0~4 means n0~n4 */
    cuif_uint32 interrupt_bit; /**< The overflow bit */
    cuif_uint32 status_addr;   /**< The addr of the status register  */
    cuif_uint32 current_status;/**< The current value of the status register */
    cuif_uint32 caller;        /**< The caller address */
}CUIF_OverFlowRecord;

/**
  *   CUIF Init function
  */
extern void CUIF_Init();


/*******************************************************************************
 * Debug feature 
 *******************************************************************************/
#if defined(__CUIF_DEBUG__)

#if __CUIF_MD32S_CORE__
/* MD32 side */
#define CUIF_DEBUG_API_RECORD_SIZE        8 
#define CUIF_DEBUG_ISR_HANDLE_CODE_SIZE   8 

#else  /*  __CUIF_MD32S_CORE__ */

#define CUIF_DEBUG_API_RECORD_SIZE        16 
#define CUIF_DEBUG_ISR_HANDLE_CODE_SIZE   16 

#endif /*  __CUIF_MD32S_CORE__ */

typedef struct{
    cuif_uint32 time;
    cuif_uint32 code;
}CUIF_DebugISRRecord;

/** The Ring Buffer */
typedef struct{
    CUIF_DebugISRRecord records[CUIF_DEBUG_ISR_HANDLE_CODE_SIZE];
    cuif_uint32 top_index;
}CUIF_DebugISRCodeList;

typedef struct{
    cuif_uint32 time;
    cuif_uint32 status;
    cuif_uint32 set_addr;     /**< The control register address */
    cuif_uint32 set_value;    /**< The writing value for the control regsiters */
    cuif_uint32 caller;       /**< The caller address */
}CUIF_DebugRecord;

/** The Ring Buffer */
typedef struct{
    CUIF_DebugRecord records[CUIF_DEBUG_API_RECORD_SIZE];
    cuif_uint32 top_index; 
}CUIF_DebugRecordList;

void cuif_DebugAddRecord(cuif_uint32 status,
                                    volatile cuif_uint32* set_addr,
                                    cuif_uint32 set_value,
                                    cuif_uint32 caller);

void cuif_DebugAddISRHandleCode(cuif_uint32 code, CUIF_MCU_INT nID);

#endif /* __CUIF_DEBUG__  */



#if defined(__CUIF_DRV_TEST__)


#include "dsp_header_define_cuif_inner_brp.h"
#define CUIF_SYNC_ADDR_USIP0                ((CUIF_INNER_BRP_BASE) + 0x2000)

#include "dsp_header_define_cuif_fec_wbrp.h"
#define CUIF_SYNC_ADDR_USIP1                ((CUIF_FEC_WBRP_BASE) + 0x2000)
#define INT     INVALID_INT
#define UINT    INVALID_UINT
#define INT32   INVALID_INT32
#define UINT32  INVALID_UINT32

#define CUIF_DRV_TEST_ASSERT_EQ(a, b)                                            \
    do{                                                                          \
        if((a) != (b)){                                                          \
            dbg_print("Error: %s: %d - %d != %d\n", __FILE__, __LINE__, (a), (b)); \
            while(1); \
        }                                                                        \
    }while(0)

extern cuif_uint32 cuif_c2u_int_source_num[CUIF_ENUM_ALL_USIP_INT_NUM];
extern cuif_uint32 cuif_u2c_int_source_num[CUIF_ENUM_ALL_MCU_INT_NUM - 1];

extern void CUIF_DriverTestISR_N0(CUIF_Mask_t* mask);
extern void CUIF_DriverTestISR_N1(CUIF_Mask_t* mask);
extern void CUIF_DriverTestISR_N2(CUIF_Mask_t* mask);
extern void CUIF_DriverTestISR_N3(CUIF_Mask_t* mask);
extern void CUIF_DriverTestISR_N4(CUIF_Mask_t* mask);

#endif /* __CUIF_DRV_TEST__ */


#endif   /* __DRV_CUIF_H__ */
