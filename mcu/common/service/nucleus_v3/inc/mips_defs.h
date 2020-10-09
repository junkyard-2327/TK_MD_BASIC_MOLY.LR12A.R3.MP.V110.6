/***********************************************************************
*
*             Copyright 2011 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
************************************************************************

************************************************************************
*
*   FILE NAME
*
*       mips_defs.h
*
*   DESCRIPTION
*
*       This file contains all definitions, structures, etc for the
*       base MIPS architecture.
*
*   DATA STRUCTURES
*
*       None
*
*   DEPENDENCIES
*
*       None
*
***********************************************************************/

#ifndef         MIPS_DEFS_H
#define         MIPS_DEFS_H

/* Define if the OS timer is part of the architecture (NU_TRUE)
   NOTE:  The OS timer can be located at only one of the following levels of
          abstraction: the processor level or the architecture level.
          If ESAL_AR_OS_TIMER_USED is NU_TRUE, the OS timer is contained
          within the architecture.  If ESAL_AR_OS_TIMER_USED is NU_FALSE,
          the OS timer is contained within the processor component. */
#define         ESAL_AR_OS_TIMER_USED                   NU_TRUE

/* Define if architecture supports unaligned 16-bit accesses to memory. */
#define         ESAL_AR_UNALIGNED_16BIT_SPT             NU_FALSE

/* Define if architecture supports unaligned 32-bit accesses to memory. */
#define         ESAL_AR_UNALIGNED_32BIT_SPT             NU_FALSE

/* Define number of accesses required to read or write a pointer */
#define         ESAL_AR_PTR_ACCESS                      1

/* Define number of accesses required to read or write a 32-bit value */
#define         ESAL_AR_32BIT_ACCESS                    1

/* Size, in bytes, of architecture system stack.  This stack will be
   utilized when servicing interrupts. */
#define         ESAL_AR_SYSTEM_STACK_SIZE               2048

/* Size, in bytes, of architecture exception stack.  This stack will be
   utilized when servicing exceptions. */
#define         ESAL_AR_EXCEPTION_STACK_SIZE            0

/* Define if interrupt servicing initialization is required at the
   architecture level. */
#define         ESAL_AR_ISR_INIT_REQUIRED               NU_TRUE

/* Define if architecture mandates that all interrupt handlers perform a
   "return from interrupt" (RTI) instruction in order for the hardware to
   correctly restore the state of execution to the pre-interrupt condition.
   NOTE:  Most architectures allow the state of execution to be restored
          without needing to perform an RTI.  In most cases, this will be set
          to NU_FALSE */
#define         ESAL_AR_ISR_RTI_MANDATORY               NU_FALSE

/* Define bit values for the architecture's status register / machine state register /
   etc that are used to enable and disable interrupts for the given architecture. */
#define         ESAL_AR_INTERRUPTS_DISABLE_BITS         0x00000000
#define         ESAL_AR_INTERRUPTS_ENABLE_BITS          0x00000001

/* Determines where the ISR nesting counter is incremented.
   When set to 0 the increment occurs in assembly files, when
   set to 1 the increment will occur in c files. */
#define         ESAL_AR_ISR_INCREMENT_IN_C              NU_TRUE

/* Defines the architecture specific synchronization Lock Options */
#define        ESAL_AR_LOCK_AVAILABLE                   NU_TRUE
#define        ESAL_AR_LOCK_WAIT_AVAILABLE              NU_FALSE

/* Define if floating point registers will be saved during context switches
   NOTE:  The assembly define must be changed in esal_ar_stk_defs.inc to
          match this define
   NOTE:  This define will dictate what registers are contained
          within solicited (TS) and unsolicited (AR) stack frames. */
#define         ESAL_AR_STK_FPU_SUPPORT         NU_FALSE

/* Define stack frame structure for minimum architecture registers required
   to be saved in order to enter a C environment during in interrupt / exception.
   These registers are the "scratch" registers that will not be preserved across
   a function call boundary and any interrupt state registers that must preserved
   to allow interrupt nesting. */
typedef struct
{
    UINT32        r1;
    UINT32        r2;
    UINT32        r3;
    UINT32        r4;
    UINT32        r5;
    UINT32        r6;
    UINT32        r7;
    UINT32        r8;
    UINT32        r9;
    UINT32        r10;
    UINT32        r11;
    UINT32        r12;
    UINT32        r13;
    UINT32        r14;
    UINT32        r15;
    UINT32        r24;
    UINT32        r25;
    UINT32        gp;
    UINT32        hi;
    UINT32        lo;
    UINT32        r31;
    UINT32        sr;
    UINT32        rtn_address;
    UINT32        te_bit_bak;
    UINT32        tcschedule_bak;

} ESAL_AR_STK_MIN;

/* Define stack frame structure for the architecture supported.
   This stack frame contains all registers that must be preserved
   across an (unsolicited) interrupt context switch.
   NOTE:  This stack frame includes the minimum stack frame
          defined above AND all other registers for the given
          architecture. */
typedef struct  ESAL_AR_STK_STRUCT
{

    UINT32        stack_type;
    UINT32        r16;
    UINT32        r17;
    UINT32        r18;
    UINT32        r19;
    UINT32        r20;
    UINT32        r21;
    UINT32        r22;
    UINT32        r23;
    UINT32        r30;
    ESAL_AR_STK_MIN     min_stack;

#if (ESAL_AR_STK_FPU_SUPPORT == NU_TRUE)

    UINT32        f0;
    UINT32        f1;
    UINT32        f2;
    UINT32        f3;
    UINT32        f4;
    UINT32        f5;
    UINT32        f6;
    UINT32        f7;
    UINT32        f8;
    UINT32        f9;
    UINT32        f10;
    UINT32        f11;
    UINT32        f12;
    UINT32        f13;
    UINT32        f14;
    UINT32        f15;
    UINT32        f16;
    UINT32        f17;
    UINT32        f18;
    UINT32        f19;
    UINT32        f20;
    UINT32        f21;
    UINT32        f22;
    UINT32        f23;
    UINT32        f24;
    UINT32        f25;
    UINT32        f26;
    UINT32        f27;
    UINT32        f28;
    UINT32        f29;
    UINT32        f30;
    UINT32        f31;
    UINT32        fpu_ctl31;

#endif /* (ESAL_AR_STK_FPU_SUPPORT == NU_TRUE) */

} ESAL_AR_STK;

/* Define stack frame structure for the toolset / architecture supported. */
typedef struct  ESAL_TS_STK_STRUCT
{

    UINT        stack_type;
    UINT        r16;
    UINT        r17;
    UINT        r18;
    UINT        r19;
    UINT        r20;
    UINT        r21;
    UINT        r22;
    UINT        r23;
    UINT        r30;
    UINT        rtn_address;

#if (ESAL_AR_STK_FPU_SUPPORT == NU_TRUE)

    UINT        f20;
    UINT        f21;
    UINT        f22;
    UINT        f23;
    UINT        f24;
    UINT        f25;
    UINT        f26;
    UINT        f27;
    UINT        f28;
    UINT        f29;
    UINT        f30;
    UINT        f31;

#endif /* (ESAL_AR_STK_FPU_SUPPORT == NU_TRUE) */

} ESAL_TS_STK;



/* Define ESAL interrupt vector IDs for this architecture.
   These IDs match up with architecture interrupts.
   Values correspond to the index of entries in ESAL_GE_ISR_Interrupt_Handler[].
   Names are of the form ESAL_AR_<Name>_INT_VECTOR_ID, where <Name> comes
   directly from the hardware documentation */
#define         ESAL_AR_SPECIAL_INT_VECTOR_ID               0
#define         ESAL_AR_SW0_INT_VECTOR_ID                   1
#define         ESAL_AR_SW1_INT_VECTOR_ID                   2
#define         ESAL_AR_HW0_INT_VECTOR_ID                   3
#define         ESAL_AR_HW1_INT_VECTOR_ID                   4
#define         ESAL_AR_HW2_INT_VECTOR_ID                   5
#define         ESAL_AR_HW3_INT_VECTOR_ID                   6
#define         ESAL_AR_HW4_INT_VECTOR_ID                   7
#define         ESAL_AR_HW5_INT_VECTOR_ID                   8

/* Define the last ESAL interrupt vector ID for this architecture + 1 */
#define         ESAL_AR_INT_VECTOR_ID_DELIMITER             (ESAL_AR_HW5_INT_VECTOR_ID + 1)

/* Define ESAL exception vector IDs for the architecture.
   These IDs match up with architecture exceptions.
   Values correspond to the index of entries in ESAL_GE_ISR_Exception_Handler[].
   Names are of the form ESAL_AR_<Name>_EXCEPT_VECTOR_ID, where <Name> comes
   directly from the hardware documentation */
#define         ESAL_AR_MOD_EXCEPT_VECTOR_ID                0
#define         ESAL_AR_TLBL_EXCEPT_VECTOR_ID               1
#define         ESAL_AR_TLBS_EXCEPT_VECTOR_ID               2
#define         ESAL_AR_ADEL_EXCEPT_VECTOR_ID               3
#define         ESAL_AR_ADES_EXCEPT_VECTOR_ID               4
#define         ESAL_AR_IBE_EXCEPT_VECTOR_ID                5
#define         ESAL_AR_DBE_EXCEPT_VECTOR_ID                6
#define         ESAL_AR_SYS_EXCEPT_VECTOR_ID                7
#define         ESAL_AR_BP_EXCEPT_VECTOR_ID                 8
#define         ESAL_AR_RI_EXCEPT_VECTOR_ID                 9
#define         ESAL_AR_CPU_EXCEPT_VECTOR_ID                10
#define         ESAL_AR_OV_EXCEPT_VECTOR_ID                 11
#define         ESAL_AR_TR_EXCEPT_VECTOR_ID                 12
#define         ESAL_AR_FPE_EXCEPT_VECTOR_ID                14
#define         ESAL_AR_SW1_EXCEPT_VECTOR_ID                15
#define         ESAL_AR_SW2_EXCEPT_VECTOR_ID                16
#define         ESAL_AR_C2E_EXCEPT_VECTOR_ID                17
#define         ESAL_AR_TLBRI_EXCEPT_VECTOR_ID              18
#define         ESAL_AR_TLBXI_EXCEPT_VECTOR_ID              19
#define         ESAL_AR_MDMX_EXCEPT_VECTOR_ID               21
#define         ESAL_AR_WATCH_EXCEPT_VECTOR_ID              27
#define         ESAL_AR_MCHECK_EXCEPT_VECTOR_ID             28
#define         ESAL_AR_CACHEERR_EXCEPT_VECTOR_ID           29

/* Define the last ESAL exception vector ID for this architecture + 1 */
#define         ESAL_AR_EXCEPT_VECTOR_ID_DELIMITER          (ESAL_AR_CACHEERR_EXCEPT_VECTOR_ID + 1)

/* Define variable(s) required to save / restore architecture interrupt state.
   These variable(s) are used in conjunction with the ESAL_AR_INT_ALL_DISABLE() and
   ESAL_AR_INT_ALL_RESTORE() macros to hold any data that must be preserved in
   order to allow these macros to function correctly. */
#define         ESAL_AR_INT_CONTROL_VARS                    UINT32  esal_tmp_val = 0x80;

/* SR interrupt mask bit */
#define         ESAL_AR_ISR_SR_IM_MASK                      0x0000FF00

/* This macro locks out interrupts and saves the current
   architecture status register / state register to the specified
   address.  This function does not attempt to mask any bits in
   the return register value and can be used as a quick method
   to guard a critical section.
   NOTE:  This macro is used in conjunction with ESAL_AR_INT_ALL_RESTORE
          defined below and ESAL_AR_INT_CONTROL_VARS defined above. */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
#define         ESAL_AR_INT_ALL_DISABLE()                                           \
                {                                                                   \
                    __asm__ __volatile__(                                           \
                        "di %0 \n"                                                  \
                        "ehb \n"                                                    \
                        : "=r" (esal_tmp_val)                                       \
                    );                                                              \
                    esal_tmp_val &= 0x1;                                            \
                }
#endif

/* This macro restores the architecture status / state register
   used to lockout interrupts to the value provided.  The
   intent of this function is to be a fast mechanism to restore the
   interrupt level at the end of a critical section to its
   original level.
   NOTE:  This macro is used in conjunction with ESAL_AR_INT_ALL_DISABLE
          and ESAL_AR_INT_CONTROL_VARS defined above. */
#if 0
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
#else
#define         ESAL_AR_INT_ALL_RESTORE()                                           \
                {                                                                   \
                    if (esal_tmp_val == 0x1)                                        \
                    {                                                               \
                        __asm__ __volatile__(                                       \
                            "ei \n"                                                 \
                            "ehb \n"                                                \
                        );                                                          \
                    }                                                               \
                }

#define         ESAL_AR_INT_ALL_RESTORE2(irq)                                       \
                {                                                                   \
                    if (irq == 0x1)                                                 \
                    {                                                               \
                        __asm__ __volatile__(                                       \
                            "ei \n"                                                 \
                            "ehb \n"                                                \
                        );                                                          \
                    }                                                               \
                }
#endif

/* This macro locks-out interrupts but doesn't save the status
   register / control register value. */
#if 0
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
#else
#define         ESAL_AR_INT_FAST_ALL_DISABLE()                                      \
                {                                                                   \
                    __asm__ __volatile__(                                           \
                        "di \n"                                                     \
                        "ehb \n"                                                    \
                    );                                                              \
                }
#endif

/* This macro unlocks interrupts but doesn't save the status
   register / control register value. */
#if 0
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
#else
#define         ESAL_AR_INT_FAST_ALL_ENABLE()                                       \
                {                                                                   \
                    __asm__ __volatile__(                                           \
                        "ei \n"                                                     \
                        "ehb \n"                                                    \
                    );                                                              \
                }
#endif

/* This macro sets the interrupt related bits in the status register / control
   register to the specified value. */
#define         ESAL_AR_INT_BITS_SET(set_bits)                                      \
                {                                                                   \
                     UINT32    sr_tmp;                                              \
                                                                                    \
                    /* Read that status register */                                 \
                    ESAL_TS_RTE_CP_READ(0, &sr_tmp, ESAL_TS_RTE_CPR12, 0);          \
                                                                                    \
                    /* Clear the IE bit */                                          \
                    sr_tmp &= ~ESAL_AR_INTERRUPTS_ENABLE_BITS;                      \
                                                                                    \
                    /* Set the IE bit */                                            \
                    sr_tmp |= set_bits;                                             \
                                                                                    \
                    /* Write new IE bit to register */                              \
                    ESAL_TS_RTE_CP_WRITE(0, sr_tmp, ESAL_TS_RTE_CPR12, 0);          \
                    ESAL_TS_RTE_SSNOP_EXECUTE();                                    \
                    ESAL_TS_RTE_SSNOP_EXECUTE();                                    \
                    ESAL_TS_RTE_SYNC_EHB_EXECUTE();                                 \
                }

/* This macro gets the interrupt related bits from the status register / control
   register. */
#define         ESAL_AR_INT_BITS_GET(get_bits_ptr)                                  \
                {                                                                   \
                    /* Read status register */                                      \
                    ESAL_TS_RTE_CP_READ(0, get_bits_ptr, ESAL_TS_RTE_CPR12, 0);     \
                                                                                    \
                    /* Get IE bit only */                                           \
                    *get_bits_ptr &= ESAL_AR_INTERRUPTS_ENABLE_BITS;                \
                }

/* Define architecture interrupt handling constants,
   register addresses, initialization values, structures, etc. */

/* Define architecture interrupt handling constants,
   register addresses, initialization values, structures, etc. */
#define         ESAL_AR_ISR_VECTOR_TABLE_DEST_ADDR  0x80000000

/* Initial value for the CP0 Cause Register (CR)
   NOTE: This value enables the special exception(0x200) */
#define         ESAL_AR_ISR_CR_IV_BIT               0x00800000

/* IE interrupt enable bit */
#define         ESAL_AR_ISR_SR_IE_BIT               0x00000001

/* EXL interrupt mask bit */
#define         ESAL_AR_ISR_SR_EXL_BIT              0x00000002

/* ERL interrupt mask bit */
#define         ESAL_AR_ISR_SR_ERL_BIT              0x00000004

/* BEV Exception vector location */
#define         ESAL_AR_ISR_SR_BEV_BIT              0x00400000

/* Initial value for the CP0 Cause Register (CR)
   NOTE: This value enables the special exception(0x200) */
#define         ESAL_AR_ISR_CR_IV_BIT               0x00800000

/* Define for the number of right shifts need to get to the
   interrupt registers in the CR (CP0_Cause) and SR (CP0_Status). */
#define         ESAL_AR_ISR_CR_IP0_BIT_POS          7

/* Software interrupt zero bit position */
#define         ESAL_AR_ISR_CR_SW0_BIT_POS          0x00000100

/* Software interrupt one bit position */
#define         ESAL_AR_ISR_CR_SW1_BIT_POS          0x00000200

/* Timer interrupt (hardware 5) bit position */
#define         ESAL_AR_ISR_CR_HW5_BIT_POS          0x00008000

/* Instruction Set Architecture used when vectoring to an exception
   NOTE: This value indicates that microMIPS is used on entrance to an
   exception vector */
#define         ESAL_AR_ISR_CONFIG3_ISAONEXC_BIT    0x00010000

/* Define initial mask register used to create priority array for interrupt nesting. */
#define         ESAL_AR_ISR_INITIAL_MASK            0xFFFFFFFF

/* Priority array max index value */
#define         ESAL_AR_ISR_PRIORITY_ARRAY_MAX      (ESAL_AR_INT_VECTOR_ID_DELIMITER - 1)

/* Data structure used by architecture to create interrupt priority. */
typedef struct
{
    INT         int_vector_id;                      /* ESAL interrupt vector ID */
    UINT32      priority_mask;                      /* Mask of interrupts at this priority and lower */

}  ESAL_AR_ISR_DATA;

/* This macro fetches the cpu ID for current CPU */
#define         ESAL_AR_CPU_ID_GET()                        \
({                                                          \
    UINT32     _cpu_id;                                     \
                                                            \
    ESAL_TS_RTE_CP_READ(0, &_cpu_id, ESAL_TS_RTE_CPR15, 1); \
                                                            \
    (_cpu_id & 0x3FF);                                      \
})

/* Define any architecture specific, OS timer initialization constants,
   register addresses, etc here */
extern UINT32   ESAL_AR_TMR_OS_Count;

/* The following definitions / macros / etc are only used if the architecture
   is configured (in esal_ar_cfg.h) to use an architecture level timer for
   the OS timer. */

#if (ESAL_AR_OS_TIMER_USED == NU_TRUE)

/* Define the architecture OS timer type (count-down or count-up) */
#define         ESAL_AR_TMR_OS_COUNT_DIR                        ESAL_COUNT_UP

/* Define for the architecture OS timer interrupt vector */
#define         ESAL_AR_TMR_OS_VECTOR                           ESAL_AR_HW5_INT_VECTOR_ID

/* Define a macro to read the processor OS timer hardware count.  The
   resultant size of the count must be 32-bits, regardless of the actual
   size of the timer used (8-bit, 16-bit, 32-bit, etc). */
#define         ESAL_AR_TMR_OS_COUNT_READ()                     ESAL_TS_RTE_TMR_COUNT_READ()

/* Define the EOI logic for the architecture OS timer */
#define         ESAL_AR_TMR_OS_TIMER_EOI(vector)                                        \
                {                                                                       \
                    UINT32 _compare_reg;                                                \
                    /* Get current compare register value */                            \
                    ESAL_TS_RTE_CP_READ(0, &_compare_reg, ESAL_TS_RTE_CPR11, 0);        \
                    /* Set/clear compare register */                                    \
                    ESAL_TS_RTE_CP_WRITE(0, (_compare_reg + ESAL_AR_TMR_OS_Count),      \
                                         ESAL_TS_RTE_CPR11, 0);                         \
                    ESAL_TS_RTE_SSNOP_EXECUTE();                                        \
                    ESAL_TS_RTE_SSNOP_EXECUTE();                                        \
                    ESAL_TS_RTE_SYNC_EHB_EXECUTE();                                     \
                }

/* Define generic macro for OS timer pending. The macro reads COUNTFLAG field
    to determine if value counted to 0 since last time it is read. */
#define         ESAL_AR_TMR_PENDING()                           NU_FALSE

/* Define method for which PMS will work with the counter.  In most cases this will
   match the OS timer direction.  On some rarer cases it may be needed to differ, such
   cases include timers that don't start at 0 but count up. */
#define ESAL_AR_TMR_PMS_COUNT_METHOD        ESAL_AR_TMR_OS_COUNT_DIR

/*
 * ESAL_AR_TMR_PMS_IS_TIMER_INT_PENDING() checks whether a hardware tick timer interrupt is
 * pending at this time.
 * It is used to check if a race condition occurred, CPU woke up due to
 * other HW interrupt but a tick occurred between the interrupt and any
 * hardware tick counter sampling.
 */
#define ESAL_AR_TMR_PMS_IS_TIMER_INT_PENDING()  ESAL_GE_TMR_OS_PENDING()

/*
 * ESAL_AR_TMR_PMS_SET_HW_TICK_INTERVAL(interval) sets the hardware tick timer interval
 * It is used and required only for UP counting hardware timer counters.
 */
#if(ESAL_AR_TMR_PMS_COUNT_METHOD == ESAL_COUNT_UP)
#define ESAL_AR_TMR_PMS_SET_HW_TICK_INTERVAL(interval)
#endif

/*
 * ESAL_AR_TMR_PMS_GET_HW_TICK_CNT_VALUE() reads the current hardware tick timer counter value
 * This typically can be left mapped to ESAL_GE_TMR_OS_COUNT_READ
 */
#define ESAL_AR_TMR_PMS_GET_HW_TICK_CNT_VALUE()         ESAL_GE_TMR_OS_COUNT_READ()

/*
 * ESAL_AR_TMR_PMS_ADJUST_HW_TICK_VALUE(adjustment) adjust the current hardware tick timer value
 * by the adjustment value. POSITIVE OR NEGATIVE adjustments must be handled.
 * ESAL_AR_TMR_PMS_ADJUST_HW_TICK_VALUE is used only with DOWN counting hardware timer counters
 * and is the preferred method for tick suppression (vs. ESAL_PMS_SET_HW_TICK_VALUE)
 */
#if(ESAL_AR_TMR_PMS_COUNT_METHOD == ESAL_COUNT_DOWN)
#define ESAL_AR_TMR_PMS_ADJUST_HW_TICK_VALUE(adjustment) ESAL_AR_TMR_TICK_ADJUST_SET(adjustment)
#endif

/* This macro sets the current hardware tick timer counter value
 * It is used and required only for DOWN counting hardware timer counters
 * and only if ESAL_PR_TMR_PMS_ADJUST_HW_TICK_VALUE is not defined.
 * ESAL_PR_TMR_PMS_SET_HW_TICK_VALUE should only be used if ESAL_PMS_ADJUST_HW_TICK function
 * in unachievable because it potentially introduces small tick drift
 * when the software does read-modify-write adjustments to the counter value.
 */
#if(ESAL_AR_TMR_PMS_COUNT_METHOD == ESAL_COUNT_DOWN)
#ifndef ESAL_AR_TMR_PMS_ADJUST_HW_TICK_VALUE
#define ESAL_AR_TMR_PMS_SET_HW_TICK_VALUE(value)        ESAL_AR_TMR_TICK_VALUE_SET(value)
#endif
#endif

#endif  /* ESAL_AR_OS_TIMER_USED == NU_TRUE */

/* Define core cache availability
   NOTE:  A differentiation is made in ESAL between cache that
          is contained on a processor and cache that is
          inherent as part of a core (L2 vs L1 cache). */
#define         ESAL_CO_CACHE_AVAILABLE                 NU_TRUE

/* Cache line and starting cache address */
#define         ESAL_CO_MEM_CACHE_LINE_SIZE             32UL
#define         ESAL_CO_MEM_KSEG0_START_ADDR            0x80000000

/* CACHE instruction op codes */
#define         ESAL_CO_MEM_ICACHE_HIT_INVAL            0x10
#define         ESAL_CO_MEM_ICACHE_INDEX_INVAL          0x00
#define         ESAL_CO_MEM_DCACHE_HIT_INVAL            0x11
#define         ESAL_CO_MEM_DCACHE_INDEX_INVAL_FLUSH    0x01

#if (ESAL_CO_CACHE_AVAILABLE == NU_TRUE)

/* This macro invalidates all of the cache at the core level. */
#define         ESAL_CO_MEM_CACHE_ALL_INVALIDATE()                                      \
                {                                                                       \
                    UINT32 end_addr = ESAL_PR_MEM_DCACHE_SIZE +                \
                                               ESAL_CO_MEM_KSEG0_START_ADDR;            \
                    UINT32 curr_addr = ESAL_CO_MEM_KSEG0_START_ADDR;           \
                    do                                                                  \
                    {                                                                   \
                        /* INVALIDATE the ICACHE */                                     \
                        ESAL_TS_RTE_CACHE_EXECUTE(ESAL_CO_MEM_ICACHE_HIT_INVAL,         \
                                                  curr_addr);                           \
                                                                                        \
                        /* INVALIDATE the DCACHE */                                     \
                        ESAL_TS_RTE_CACHE_EXECUTE(ESAL_CO_MEM_DCACHE_HIT_INVAL,         \
                                                curr_addr);                             \
                                                                                        \
                        /* Move to next line */                                         \
                        curr_addr += ESAL_CO_MEM_CACHE_LINE_SIZE;                       \
                    }                                                                   \
                    while(curr_addr <= end_addr);                                       \
                }

/* This macro invalidates all of the instruction cache at the core level. */
#define         ESAL_CO_MEM_ICACHE_ALL_INVALIDATE()                                     \
                {                                                                       \
                    UINT32 end_addr = ESAL_PR_MEM_ICACHE_SIZE +                \
                                               ESAL_CO_MEM_KSEG0_START_ADDR;            \
                    UINT32 curr_addr = ESAL_CO_MEM_KSEG0_START_ADDR;           \
                    do                                                                  \
                    {                                                                   \
                        /* Invalidate any valid instruction cache */                    \
                        ESAL_TS_RTE_CACHE_EXECUTE(ESAL_CO_MEM_ICACHE_HIT_INVAL,         \
                                                  curr_addr);                           \
                                                                                        \
                        /* Move to next line */                                         \
                        curr_addr += ESAL_CO_MEM_CACHE_LINE_SIZE;                       \
                    }                                                                   \
                    while(curr_addr <= end_addr);                                       \
                }

/* This macro invalidates all of the data cache at the core level. */
#define         ESAL_CO_MEM_DCACHE_ALL_INVALIDATE()                                     \
                {                                                                       \
                    UINT32 end_addr = ESAL_PR_MEM_DCACHE_SIZE +                \
                                               ESAL_CO_MEM_KSEG0_START_ADDR;            \
                    UINT32 curr_addr = ESAL_CO_MEM_KSEG0_START_ADDR;           \
                    do                                                                  \
                    {                                                                   \
                        /* Invalidate any valid data cache */                           \
                        ESAL_TS_RTE_CACHE_EXECUTE(ESAL_CO_MEM_DCACHE_HIT_INVAL,         \
                                                  curr_addr);                           \
                                                                                        \
                        /* Move to next line */                                         \
                        curr_addr += ESAL_CO_MEM_CACHE_LINE_SIZE;                       \
                    }                                                                   \
                    while(curr_addr <= end_addr);                                       \
                }

/* This macro invalidates all instruction cache for the specified address
   range at the core level. */
#define         ESAL_CO_MEM_ICACHE_INVALIDATE(addr, size)                               \
                {                                                                       \
                    UINT32 end_addr = (size) + (UINT32)(addr);                 \
                    UINT32 curr_addr = (UINT32)(addr);                         \
                    do                                                                  \
                    {                                                                   \
                        /* Invalidate valid instruction cache */                        \
                        ESAL_TS_RTE_CACHE_EXECUTE(ESAL_CO_MEM_ICACHE_HIT_INVAL,         \
                                                  curr_addr);                           \
                                                                                        \
                        /* Move to next line */                                         \
                        curr_addr += ESAL_CO_MEM_CACHE_LINE_SIZE;                       \
                    }                                                                   \
                    while(curr_addr <= end_addr);                                       \
                }

/* This macro invalidates all data cache for the specified address
   range at the core level. */
#define         ESAL_CO_MEM_DCACHE_INVALIDATE(addr, size)                               \
                {                                                                       \
                    UINT32 end_addr = (size) + (UINT32)(addr);                 \
                    UINT32 curr_addr = (UINT32)(addr);                         \
                    do                                                                  \
                    {                                                                   \
                        /* Invalidate valid data cache */                               \
                        ESAL_TS_RTE_CACHE_EXECUTE(ESAL_CO_MEM_DCACHE_HIT_INVAL,         \
                                                  curr_addr);                           \
                                                                                        \
                        /* Move to next line */                                         \
                        curr_addr += ESAL_CO_MEM_CACHE_LINE_SIZE;                       \
                    }                                                                   \
                    while(curr_addr <= end_addr);                                       \
                }

/* This macro flushes all data cache to physical memory (writeback cache)
   and invalidates all data cache entries at the core level. */
#define         ESAL_CO_MEM_DCACHE_ALL_FLUSH_INVAL()                                    \
                {                                                                       \
                    UINT32 end_addr = ESAL_PR_MEM_DCACHE_SIZE +                \
                                               ESAL_CO_MEM_KSEG0_START_ADDR;            \
                    UINT32 curr_addr = ESAL_CO_MEM_KSEG0_START_ADDR;           \
                    do                                                                  \
                    {                                                                   \
                        /* Flush and invalidate any valid data cache */                 \
                        ESAL_TS_RTE_CACHE_EXECUTE(ESAL_CO_MEM_DCACHE_INDEX_INVAL_FLUSH, \
                                                  curr_addr);                           \
                                                                                        \
                        /* Move to next line */                                         \
                        curr_addr += ESAL_CO_MEM_CACHE_LINE_SIZE;                       \
                    }                                                                   \
                    while(curr_addr <= end_addr);                                       \
                }

/* This macro flushes all data cache to physical memory (writeback cache)
   for the given address range, then invalidates all data cache entries
   at the core level. */
#define         ESAL_CO_MEM_DCACHE_FLUSH_INVAL(addr, size)                              \
                {                                                                       \
                    UINT32 end_addr = (size) + (UINT32)(addr);                 \
                    UINT32 curr_addr = (UINT32)(addr);                         \
                    do                                                                  \
                    {                                                                   \
                        /* Flush and invalidate valid data cache */                     \
                        ESAL_TS_RTE_CACHE_EXECUTE(ESAL_CO_MEM_DCACHE_INDEX_INVAL_FLUSH, \
                                                  curr_addr);                           \
                                                                                        \
                        /* Move to the next cache line */                               \
                        curr_addr += ESAL_CO_MEM_CACHE_LINE_SIZE;                       \
                    }                                                                   \
                    while(curr_addr <= end_addr);                                       \
                }

#define         ESAL_CO_MEM_ICACHE_FLUSH_INVAL(addr, size)                              \
                {                                                                       \
                    ESAL_CO_MEM_DCACHE_FLUSH_INVAL(addr, size);                         \
                    ESAL_CO_MEM_ICACHE_INVALIDATE(addr, size);                          \
                }

#endif  /* ESAL_CO_CACHE_AVAILABLE == NU_TRUE */

#define PROC_ARCH_MEM_REGIONS_OVERRIDE          6

#endif  /* MIPS_DEFS_H */

