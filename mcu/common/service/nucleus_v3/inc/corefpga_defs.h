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
*       corefpga_defs.h
*
*   DESCRIPTION
*
*       This file contains all definitions, structures, etc for the
*       MIPS CoreFPGA daughter-card used with Malta platform.
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

#ifndef         MIPSCOREFPGA_DEFS_H
#define         MIPSCOREFPGA_DEFS_H

#include        "mips_defs.h"

/* Define processor execution endianess
   (ESAL_LITTLE_ENDIAN or ESAL_BIG_ENDIAN) */
#define         ESAL_PR_ENDIANESS                       ESAL_LITTLE_ENDIAN

/* Define processor cache availability
   NOTE:  A differentiation is made in ESAL between cache that
          is contained on a processor and cache that is
          inherent as part of a core (L2 vs L1 cache). */
#define         ESAL_PR_CACHE_AVAILABLE                 NU_FALSE

/* Define if an interrupt controller exists on the processor and
   controlling / handling of interrupts from this interrupt controller must
   be accommodated for.  Setting this to NU_FALSE means processor level interrupts
   will NOT be controlled or handled.  Setting this to NU_TRUE means processor level
   interrupts will be controlled and handled */
#define         ESAL_PR_INTERRUPTS_AVAILABLE            CFG_NU_BSP_MALTA_PR_INTERRUPTS

/* Define if Interrupt Affinity support is available */
#define         ESAL_PR_INT_AFFINITY_AVAILABLE          NU_FALSE

#define         ESAL_NOT_MASTER_VPE                      -100

#if (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1)

/* Inter-Processor Interrupt Vector Number */
#if (CFG_NU_BSP_MALTA_DAUGHTER_CARD == 6)
#define         ESAL_PR_SMP_IPI_VECTOR_ID                   ESAL_PR_IRQ24_CORE0IPI_INT_VECTOR_ID
#else
#define         ESAL_PR_SMP_IPI_VECTOR_ID                   ESAL_AR_SW1_INT_VECTOR_ID
#endif

#define         ESAL_PR_SMP_IPI_TRIG                        ESAL_TRIG_NOT_SUPPORTED
#define         ESAL_PR_SMP_IPI_PRIORITY                    ESAL_PRI_NOT_SUPPORTED

/* IPI target filter, options */
#define         ESAL_PR_IPI_TARGET_MASK                     0
#define         ESAL_PR_IPI_TARGET_ALL_OTHERS               1
#define         ESAL_PR_IPI_TARGET_SELF                     2
VOID            ESAL_PR_SMP_IPI_Clear(UINT32 cpu_num);
VOID            ESAL_PR_SMP_IPI_Send (UINT32* cpu_mask);

/* Global Control and Cluster Power Controller base addresses. */
#define         ESAL_GCR_BASE                               0xBFBF8000
#define         ESAL_GCR_LOCAL_BASE                         0xBFBFA000
#define         ESAL_GCR_OTHER_BASE                         0xBFBFC000
#define         ESAL_CPC_BASE                               0xBBDE0000
#define         ESAL_CPC_PHY_BASE                           0x1BDE0000
#define         ESAL_CPC_LOCAL_BASE                         0xBBDE2000
#define         ESAL_CPC_OTHER_BASE                         0xBBDE4000

/* GCR and CPC register offsets. */
#define         ESAL_GCR_CPC_BASE                           0x88
#define         ESAL_GCR_CORE_OTHER                         0x18
#define         ESAL_GCR_RESET_BASE                         0x20
#define         ESAL_GCR_COHERENCE_CTRL                     0x08
#define         ESAL_CPC_CORE_OTHER                         0x10
#define         ESAL_CPC_STAT_REG_OFF                       0x08
#define         ESAL_CPC_CORENUM_SHIFT                      16

/* CPC commands. */
#define         ESAL_CPC_CLKOFF_COMMAND                     0x1
#define         ESAL_CPC_PWRDWN_COMMAND                     0x2
#define         ESAL_CPC_PWRUP_COMMAND                      0x3
#define         ESAL_CPC_RESET_COMMAND                      0x4

/* CPC Masks */
#define         ESAL_CPC_STAT_PWRON_VAL                     (0x7 << 19)
#define         ESAL_CPC_STAT_DCLKOFF_VAL                   (0xA << 19)
#define         ESAL_CPC_STAT_UCLKOFF_VAL                   (0x3 << 19)
#define         ESAL_CPC_STAT_PWRDWN_VAL                    (0x0 << 19)
#define         ESAL_CPC_STAT_SEQ_MASK                      (0xF << 19)

/* CP0 Mask */
#define         ESAL_CP0_KSEG_MASK                          0xFFFFFFF0

#else /* For uni-core processor */

#define         ESAL_PR_SMP_IPI_Send(x)

#endif /* (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1) */

/* Define macros for interrupt affinity */
#define         ESAL_PR_NUM_PVT_INTS                        32

/* Define cache sizes */
#define         ESAL_PR_MEM_ICACHE_SIZE                 (CFG_NU_BSP_MALTA_ICACHE_SIZE * ESAL_GE_MEM_1K)
#define         ESAL_PR_MEM_DCACHE_SIZE                 (CFG_NU_BSP_MALTA_DCACHE_SIZE * ESAL_GE_MEM_1K)

/* Define GIC registers. */
#define         ESAL_PR_GIC_BASE                        0xBBDC0000
#define         ESAL_PR_GIC_LOCAL_CORE_BASE             0xBBDC8000
#define         ESAL_PR_GIC_OTHER_CORE_BASE             0xBBDCC000
#define         ESAL_PR_GIC_LOCAL_CNTL_REG              0x000
#define         ESAL_PR_GIC_RESET_MASK_REG              0x00C
#define         ESAL_PR_GIC_GLOBALRESET_MASK_REG        0x300
#define         ESAL_PR_GIC_GLOBALSET_MASK_REG          0x380
#define         ESAL_PR_GIC_SH_MASK                     0x400
#define         ESAL_PR_GIC_SH_PEND                     0x480
#define         ESAL_PR_GIC_TRIGGER_TYPE_REG            0x180
#define         ESAL_PR_GIC_MAPTOVPE_REG                0x2000
#define         ESAL_PR_GIC_MAPTOVPE_SPACER             0x20
#define         ESAL_PR_GIC_MAPTOPIN_REG                0x500
#define         ESAL_PR_GIC_MAPTOPIN_SPACER             0x4
#define         ESAL_PR_GIC_SH_WEDGE_REG                0x280
#define         ESAL_PR_GIC_RESET_OTHER_REG             0x80
#define         ESAL_PR_GIC_GLOBAL_REGS                 8

#if (CFG_NU_BSP_MALTA_DAUGHTER_CARD == 1)

/* PCI base address for CoreFPGA */
#define         ESAL_PR_INT_PCI_BASE                    0x08000000

#elif (CFG_NU_BSP_MALTA_DAUGHTER_CARD == 2) || (CFG_NU_BSP_MALTA_DAUGHTER_CARD == 5) || (CFG_NU_BSP_MALTA_DAUGHTER_CARD == 6)

/* PCI base address for CoreFPGA-2 and CoreFPGA-5 */
#define         ESAL_PR_INT_PCI_BASE                    0x0B000000

#else

#error "Select the daughter-card to be used with the malta board !!!"

#endif /* CFG_NU_BSP_MALTA_DAUGHTER_CARD */

/* Define ESAL interrupt vector IDs for this processor.
   These IDs match up with processor interrupts.
   Values correspond to the index of entries in ESAL_GE_ISR_Interrupt_Handler[].
   Names are of the form ESAL_PR_<Name>_INT_VECTOR_ID, where <Name> comes
   directly from the hardware documentation */
#if (CFG_NU_BSP_MALTA_DAUGHTER_CARD == 6)
#define         ESAL_PR_IRQ0_TIMER1_INT_VECTOR_ID     (ESAL_AR_INT_VECTOR_ID_DELIMITER + 1)
#define         ESAL_PR_IRQ1_KYBD_INT_VECTOR_ID       (ESAL_AR_INT_VECTOR_ID_DELIMITER + 2)
#define         ESAL_PR_IRQ2_CASCADE_INT_VECTOR_ID    (ESAL_AR_INT_VECTOR_ID_DELIMITER + 3)
#define         ESAL_PR_IRQ3_TTY1_INT_VECTOR_ID       (ESAL_AR_INT_VECTOR_ID_DELIMITER + 4)
#define         ESAL_PR_IRQ4_TTY0_INT_VECTOR_ID       (ESAL_AR_INT_VECTOR_ID_DELIMITER + 5)
#define         ESAL_PR_IRQ5_INT_VECTOR_ID            (ESAL_AR_INT_VECTOR_ID_DELIMITER + 6)
#define         ESAL_PR_IRQ6_FLOPPY_INT_VECTOR_ID     (ESAL_AR_INT_VECTOR_ID_DELIMITER + 7)
#define         ESAL_PR_IRQ7_PAR_INT_VECTOR_ID        (ESAL_AR_INT_VECTOR_ID_DELIMITER + 8)
#define         ESAL_PR_IRQ8_RTC_INT_VECTOR_ID        (ESAL_AR_INT_VECTOR_ID_DELIMITER + 9)
#define         ESAL_PR_IRQ9_I2C_INT_VECTOR_ID        (ESAL_AR_INT_VECTOR_ID_DELIMITER + 10)
#define         ESAL_PR_IRQ10_PCI_AB_INT_VECTOR_ID    (ESAL_AR_INT_VECTOR_ID_DELIMITER + 11)
#define         ESAL_PR_IRQ11_PCI_CD_INT_VECTOR_ID    (ESAL_AR_INT_VECTOR_ID_DELIMITER + 12)
#define         ESAL_PR_IRQ12_MOUSE_INT_VECTOR_ID     (ESAL_AR_INT_VECTOR_ID_DELIMITER + 13)
#define         ESAL_PR_IRQ13_FERR_INT_VECTOR_ID      (ESAL_AR_INT_VECTOR_ID_DELIMITER + 14)
#define         ESAL_PR_IRQ14_PRIMIDE_INT_VECTOR_ID   (ESAL_AR_INT_VECTOR_ID_DELIMITER + 15)
#define         ESAL_PR_IRQ15_SECIDE_INT_VECTOR_ID    (ESAL_AR_INT_VECTOR_ID_DELIMITER + 16)
#define         ESAL_PR_IRQ24_CORE0IPI_INT_VECTOR_ID  (ESAL_AR_INT_VECTOR_ID_DELIMITER + 24)
#define         ESAL_PR_IRQ25_CORE1IPI_INT_VECTOR_ID  (ESAL_AR_INT_VECTOR_ID_DELIMITER + 25)
#define         ESAL_PR_IRQ26_CORE2IPI_INT_VECTOR_ID  (ESAL_AR_INT_VECTOR_ID_DELIMITER + 26)
#define         ESAL_PR_IRQ27_CORE3IPI_INT_VECTOR_ID  (ESAL_AR_INT_VECTOR_ID_DELIMITER + 27)
#define         ESAL_PR_IRQ28_CORE4IPI_INT_VECTOR_ID  (ESAL_AR_INT_VECTOR_ID_DELIMITER + 28)
#define         ESAL_PR_IRQ29_CORE5IPI_INT_VECTOR_ID  (ESAL_AR_INT_VECTOR_ID_DELIMITER + 29)
#define         ESAL_PR_IRQ30_CORE6IPI_INT_VECTOR_ID  (ESAL_AR_INT_VECTOR_ID_DELIMITER + 30)
#define         ESAL_PR_IRQ31_CORE7IPI_INT_VECTOR_ID  (ESAL_AR_INT_VECTOR_ID_DELIMITER + 31)

/* Define the last ESAL interrupt vector ID for this processor + 1 */
#define         ESAL_PR_INT_VECTOR_ID_DELIMITER        (ESAL_PR_IRQ31_CORE7IPI_INT_VECTOR_ID + 1)
#else
/* Define the last ESAL interrupt vector ID for this processor + 1 */
#define         ESAL_PR_INT_VECTOR_ID_DELIMITER         (ESAL_AR_INT_VECTOR_ID_DELIMITER + 1)
#endif

/* Define for number external interrupts mapped to Global Interrupt Controller (GIC)
   on this processor.
   NOTE:  It is build-time parameter of GIC core (IP) and the value of this define should
          match with the build-time value. */
#define         ESAL_PR_MAPPING_ARRAY_MAX               32

/* Define number of bits in the vector ID register */
#define         VECTOR_ID_REGISTER_NUM_BITS             32UL

/* Data structure used by processor for interrupt mapping. */
typedef struct
{
    INT         cpu_int_vector_id;   /* ESAL CPU HW interrupt vector ID */
    INT         gic_int_vector_id;   /* ESAL GIC interrupt vector ID */

}  ESAL_PR_ISR_MAPPING;


/* The following clocks are derived directly from the daughter-card and are independant of the DP clock. */

/* CoreFPGA daughter-card */
#if (CFG_NU_BSP_MALTA_DAUGHTER_CARD == 1)

/* Define the clock rate for the OS timer */
#define         ESAL_PR_TMR_OS_CLOCK_RATE               240000000UL

/* Define the clock prescaler for the OS timer
   NOTE:  The prescaler is used to adjust the processor clock rate to a lower clock
          rate suitable for the timer */
#define         ESAL_PR_TMR_OS_CLOCK_PRESCALE           2

/* CoreFPGA-2 daughter-card */
#elif (CFG_NU_BSP_MALTA_DAUGHTER_CARD == 2)

/* Define the clock rate for the OS timer */
#define         ESAL_PR_TMR_OS_CLOCK_RATE               25000000UL

/* Define the clock prescaler for the OS timer
   NOTE:  The prescaler is used to adjust the processor clock rate to a lower clock
          rate suitable for the timer */
#define         ESAL_PR_TMR_OS_CLOCK_PRESCALE           2

/* CoreFPGA-3 daughter-card */
#elif (CFG_NU_BSP_MALTA_DAUGHTER_CARD == 3)

/* Define the clock rate for the OS timer */
#define         ESAL_PR_TMR_OS_CLOCK_RATE               32000000UL

/* Define the clock prescaler for the OS timer
   NOTE:  The prescaler is used to adjust the processor clock rate to a lower clock
          rate suitable for the timer */
#define         ESAL_PR_TMR_OS_CLOCK_PRESCALE           2

/* CoreFPGA-5 daughter-card */
#elif (CFG_NU_BSP_MALTA_DAUGHTER_CARD == 5)

/* Define the clock rate for the OS timer */
#define         ESAL_PR_TMR_OS_CLOCK_RATE               80000000UL

/* Define the clock prescaler for the OS timer
   NOTE:  The prescaler is used to adjust the processor clock rate to a lower clock
          rate suitable for the timer */
#define         ESAL_PR_TMR_OS_CLOCK_PRESCALE           2

/* CoreFPGA-6A6B daughter-card */
#elif (CFG_NU_BSP_MALTA_DAUGHTER_CARD == 6)

/* Define the clock rate for the OS timer */
#define         ESAL_PR_TMR_OS_CLOCK_RATE               25000000UL

/* Define the clock prescaler for the OS timer
   NOTE:  The prescaler is used to adjust the processor clock rate to a lower clock
          rate suitable for the timer */
#define         ESAL_PR_TMR_OS_CLOCK_PRESCALE           2

#endif /* CFG_NU_BSP_MALTA_DAUGHTER_CARD */


/* The following definitions / macros / etc are only used if the processor
   is configured (this is only if the architecture is NOT configured to
   contain the OS timer in esal_ar_cfg.h) to use a processor level timer
   for the OS timer. */
#if (ESAL_AR_OS_TIMER_USED == NU_FALSE)

/* Define the processor OS timer type (count-down or count-up) */
#define         ESAL_PR_TMR_OS_COUNT_DIR                (VOID)NU_NULL

/* Define for the processor OS timer interrupt vector */
#define         ESAL_PR_TMR_OS_VECTOR                   (VOID)NU_NULL

/* Define a macro to read the processor OS timer hardware count.  The
   resultant size of the count must be 32-bits, regardless of the actual
   size of the timer used (8-bit, 16-bit, 32-bit, etc). */
#define         ESAL_PR_TMR_OS_COUNT_READ()             (VOID)NU_NULL

/* Define the EOI logic for the processor OS timer */
#define         ESAL_PR_TMR_OS_TIMER_EOI(vector)        (VOID)vector

#endif  /* ESAL_PR_OS_TIMER_USED == NU_TRUE */

/* Define method for which PMS will work with the counter.  In most cases this will
   match the OS timer direction.  On some rarer cases it may be needed to differ, such
   cases include timers that don't start at 0 but count up. */
#define ESAL_PR_TMR_PMS_COUNT_METHOD        ESAL_AR_TMR_OS_COUNT_DIR

/*
 * ESAL_PR_TMR_PMS_IS_TIMER_INT_PENDING() checks whether a hardware tick timer interrupt is
 * pending at this time.
 * It is used to check if a race condition occurred, CPU woke up due to
 * other HW interrupt but a tick occurred between the interrupt and any
 * hardware tick counter sampling.
 */
#define ESAL_PR_TMR_PMS_IS_TIMER_INT_PENDING()  ESAL_AR_TMR_OS_PENDING()

/*
 * ESAL_PR_TMR_PMS_SET_HW_TICK_INTERVAL(interval) sets the hardware tick timer interval
 * It is used and required only for UP counting hardware timer counters.
 */
#if(ESAL_PR_TMR_PMS_COUNT_METHOD == ESAL_COUNT_UP)
#define ESAL_PR_TMR_PMS_SET_HW_TICK_INTERVAL(interval) ESAL_AR_TMR_INTERVAL_SET(interval)
#endif

/*
 * ESAL_PR_TMR_PMS_GET_HW_TICK_CNT_VALUE() reads the current hardware tick timer counter value
 * This typically can be left mapped to ESAL_GE_TMR_OS_COUNT_READ
 */
#define ESAL_PR_TMR_PMS_GET_HW_TICK_CNT_VALUE()         ESAL_AR_TMR_OS_COUNT_READ()
#endif  /* MIPSCOREFPGA_DEFS_H */
