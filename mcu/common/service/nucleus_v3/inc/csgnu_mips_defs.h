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
*       csgnu_mips_defs.h
*
*   DESCRIPTION
*
*       This file contains all definitions, structures, etc for the
*       CS GNU for MIPS toolset
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

#ifndef         CSGNU_MIPS_DEFS_H
#define         CSGNU_MIPS_DEFS_H

/* Define required for RTL support. */
#ifndef         ESAL_TS_RTL_SUPPORT
#define         ESAL_TS_RTL_SUPPORT                     NU_TRUE
#endif

/* Define required stack pointer alignment for the given toolset.*/
#define         ESAL_TS_REQ_STK_ALIGNMENT               8

/* Defines if toolset supports 64-bit data types (long long) */
#define         ESAL_TS_64BIT_SUPPORT                   NU_TRUE

/* Defines, in bytes, toolset minimum required alignment for structures */
#define         ESAL_TS_STRUCT_ALIGNMENT                4

/* Size, in bits, of integers for the given toolset / architecture */
#define         ESAL_TS_INTEGER_SIZE                    32

/* Size, in bits, of code pointer for the given toolset / architecture */
#define         ESAL_TS_CODE_PTR_SIZE                   32

/* Size, in bits, of data pointer for the given toolset / architecture */
#define         ESAL_TS_DATA_PTR_SIZE                   32

/* Define tool specific type for HUGE and FAR data pointers - these will usually
   be defined to nothing.  Some 16-bit architectures may require these
   to be defined differently to access data across memory pages */
#define         ESAL_TS_HUGE_PTR_TYPE
#define         ESAL_TS_FAR_PTR_TYPE

/* Define if position-independent code / data (PIC/PID) support (if available)
   is enabled.
   NOTE:  This may be required to be set to NU_TRUE when utilizing any
          OS components requiring position-independent code / data */
#define         ESAL_TS_PIC_PID_SUPPORT                 NU_FALSE


/* External variable declarations */
extern UINT32       _ld_bss_start;
extern UINT32       _ld_bss_end;
extern UINT32       _ld_ram_data_start;
extern UINT32       _ld_ram_data_end;
extern UINT32       _ld_rom_data_start;

/* Macros for memory definitions */
#define TOOLSET_BSS_START_ADDR      (VOID *)&_ld_bss_start
#define TOOLSET_BSS_END_ADDR        (VOID *)&_ld_bss_end
#define TOOLSET_BSS_SIZE            ((UINT32)&_ld_bss_end - (UINT32)&_ld_bss_start)
#define TOOLSET_DATA_SRC_ADDR       (VOID *)&_ld_rom_data_start
#define TOOLSET_DATA_DST_ADDR       (VOID *)&_ld_ram_data_start
#define TOOLSET_DATA_SIZE           ((UINT32)&_ld_ram_data_end - (UINT32)&_ld_ram_data_start)

/* Define to enable / disable run-time library function stub
   inclusion for the SDE-GNU toolset.  If these functions are
   redefined in a different library or the SDE-GNU run-time library
   implementation is used, this define should be set to NU_FALSE.  */
#define         ESAL_TS_RTE_RTL_STUBS_INCLUDE   NU_TRUE

/* This define is used to add quotes to anything passed in */
#define         ESAL_TS_RTE_QUOTES(x)           #x

/* Coprocessor registers */
#define         ESAL_TS_RTE_CPR0                $0
#define         ESAL_TS_RTE_CPR1                $1
#define         ESAL_TS_RTE_CPR2                $2
#define         ESAL_TS_RTE_CPR3                $3
#define         ESAL_TS_RTE_CPR4                $4
#define         ESAL_TS_RTE_CPR5                $5
#define         ESAL_TS_RTE_CPR6                $6
#define         ESAL_TS_RTE_CPR7                $7
#define         ESAL_TS_RTE_CPR8                $8
#define         ESAL_TS_RTE_CPR9                $9
#define         ESAL_TS_RTE_CPR10               $10
#define         ESAL_TS_RTE_CPR11               $11
#define         ESAL_TS_RTE_CPR12               $12
#define         ESAL_TS_RTE_CPR13               $13
#define         ESAL_TS_RTE_CPR14               $14
#define         ESAL_TS_RTE_CPR15               $15
#define         ESAL_TS_RTE_CPR16               $16
#define         ESAL_TS_RTE_CPR17               $17
#define         ESAL_TS_RTE_CPR18               $18
#define         ESAL_TS_RTE_CPR19               $19
#define         ESAL_TS_RTE_CPR20               $20
#define         ESAL_TS_RTE_CPR21               $21
#define         ESAL_TS_RTE_CPR22               $22
#define         ESAL_TS_RTE_CPR23               $23
#define         ESAL_TS_RTE_CPR24               $24
#define         ESAL_TS_RTE_CPR25               $25
#define         ESAL_TS_RTE_CPR26               $26
#define         ESAL_TS_RTE_CPR27               $27
#define         ESAL_TS_RTE_CPR28               $28
#define         ESAL_TS_RTE_CPR29               $29
#define         ESAL_TS_RTE_CPR30               $30
#define         ESAL_TS_RTE_CPR31               $31

/* Macro used to set mips version. */
#define         ESAL_TS_RTE_MIPS_ISA_REV        __mips_isa_rev

/* This macro returns a PC value safe for updating a thread's stack frame.
   This is accomplished by returning the address of a NOP instruction
   which will have no side-effects when executed.  The range of NOP
   instructions is used to account for variations in how the in-line
   assembly integrates with surrounding instructions when the macro is
   used in source code as well as possible variations introduced by
   compiler optimization levels. */
#define         ESAL_TS_RTE_PC_READ(pc_ptr)                                 \
                    asm volatile("    nop"   /* Not implemented for MIPS */ \
                                 : /* No Outputs */                         \
                                 : /* No Inputs */ )

/* This macro sets the architecture's stack pointer. */
#define         ESAL_TS_RTE_SP_WRITE(stack_ptr)                             \
                    asm volatile ("move    $29, %0" : : "d" (stack_ptr) )

/* This macro gets the architecture's stack pointer. */
#define         ESAL_TS_RTE_SP_READ()                                       \
                ({                                                          \
                    VOID*    stack;                                         \
                    asm volatile ("move    %0, $29"                         \
                    : "=d" (stack)); stack;                                 \
                })

/* This macro gets the 'gp' register. */
#define         ESAL_TS_RTE_GP_READ()                                       \
                ({                                                          \
                    UINT32    gp;                                           \
                    asm volatile ("move    %0, $28"                         \
                    : "=d" (gp)); gp;                                       \
                })

/* This macro write the 't9' register. 't9' is used by MIPS ABI to hold
   the called function address, in case of position-independent code */
#define         ESAL_TS_RTE_T9_WRITE(function_addr)                         \
                    asm volatile ("move    $25, %0" : : "d" (function_addr) )

/* This macro will ready the timer count */
#define         ESAL_TS_RTE_TMR_COUNT_READ()                                \
                ({                                                          \
                    UINT    time;                                           \
                    ESAL_TS_RTE_CP_READ(0, &time, ESAL_TS_RTE_CPR9, 0);     \
                    time;                                                   \
                })

/* This macro write to a coprocessor
   NOTE: The ESAL_TS_RTE_QUOTES(x) adds quotes to the define value.  This
         is done to force the pre-processor to use the absolute define value
         in the asm line */
#define         ESAL_TS_RTE_CP_WRITE(cp_num, cpr_val, cpr_reg, sel)         \
                    asm volatile ("mtc"ESAL_TS_RTE_QUOTES(cp_num)" %0, "    \
                                   ESAL_TS_RTE_QUOTES(cpr_reg) ","          \
                                   #sel                                     \
                                   : /* No Outputs */                       \
                                  : "d" (cpr_val) )

/* This macro read from a coprocessor register */
#define         ESAL_TS_RTE_CP_READ(cp_num, cpr_val_ptr, cpr_reg, sel)      \
                    asm volatile ("mfc"ESAL_TS_RTE_QUOTES(cp_num)" %0, "    \
                                   ESAL_TS_RTE_QUOTES(cpr_reg) ","          \
                                   #sel                                     \
                                   : "=d" (*(UINT *)(cpr_val_ptr))          \
                                   : /* No Inputs */)

/* This macro writes to the cache register */
#define         ESAL_TS_RTE_CACHE_EXECUTE(cache_val, cache_addr)            \
                    asm volatile ("cache " ESAL_TS_RTE_QUOTES(cache_val)    \
                                  ", 0(%0)"                                 \
                                  : /* No Outputs */                        \
                                  : "d" (cache_addr) )

/* This macro executes a ssnop instruction */
#ifndef __mips16
#define         ESAL_TS_RTE_SSNOP_EXECUTE()                                 \
                    asm volatile("    ssnop"                                \
                                 : /* No Outputs */                         \
                                 : /* No Inputs */ )
#else
#define         ESAL_TS_RTE_SSNOP_EXECUTE()                                 \
                    asm volatile("    ehb"                                  \
                                 : /* No Outputs */                         \
                                 : /* No Inputs */ )
#endif

/* This macro executes a EHB instruction */
#define         ESAL_TS_RTE_SYNC_EHB_EXECUTE()                              \
                    asm volatile("    sync; ehb"                            \
                                 : /* No Outputs */                         \
                                 : /* No Inputs */ )


#if ESAL_TS_RTE_MIPS_ISA_REV >= 2

/* Disable SR IE bit */
#define         ESAL_TS_RTE_DI(old_sr_ptr)                                  \
                    asm volatile("    di %0"                                \
                                   : "=d" (*(UINT *)(old_sr_ptr))           \
                                   : /* No Inputs */)

/* Enable SR IE bit */
#define         ESAL_TS_RTE_EI(old_sr_ptr)                                  \
                    asm volatile("    ei %0"                                \
                                   : "=d" (*(UINT *)(old_sr_ptr))           \
                                   : /* No Inputs */)

#else

/* Disable SR IE bit */
#define         ESAL_TS_RTE_DI(old_sr_ptr)                                  \
                {                                                           \
                    /* Read status register */                              \
                    ESAL_TS_RTE_CP_READ(0, old_sr_ptr,                      \
                                        ESAL_TS_RTE_CPR12, 0);              \
                                                                            \
                    /* Clear IE bit and write to status register */         \
                    ESAL_TS_RTE_CP_WRITE(0, (*old_sr_ptr &                  \
                                         (~ESAL_AR_INTERRUPTS_ENABLE_BITS)),\
                                         ESAL_TS_RTE_CPR12, 0);             \
                }

/* Enable SR IE bit */
#define         ESAL_TS_RTE_EI(old_sr_ptr)                                  \
                {                                                           \
                    /* Read status register */                              \
                    ESAL_TS_RTE_CP_READ(0, old_sr_ptr,                      \
                                        ESAL_TS_RTE_CPR12, 0);              \
                                                                            \
                    /* Set IE bit and write to status register */           \
                    ESAL_TS_RTE_CP_WRITE(0, (*old_sr_ptr |                  \
                                         ESAL_AR_INTERRUPTS_ENABLE_BITS) ,  \
                                         ESAL_TS_RTE_CPR12, 0);             \
                }

#endif  /* (ESAL_TS_RTE_MIPS_ISA_REV >= 2) */

#if (ESAL_TS_PIC_PID_SUPPORT == NU_TRUE)



/* This macro sets the PIC/PID base address register */
#define         ESAL_TS_RTE_PIC_PID_BASE_SET(pic_base, pid_base)                    \
                {                                                                   \
                    asm volatile (" add $28, $0, %0;                                \
                                    add $25, $0, %1"                                \
                                  : /* No Outputs */                                \
                                  : "d" (pid_base), "d" (pic_base));                \
                }

/* This macro gets the PIC/PID base address register */
#define         ESAL_TS_RTE_PIC_PID_BASE_GET(pic_base_ptr, pid_base_ptr)            \
                {                                                                   \
                    asm volatile (" add %0, $0, $28;                                \
                                    add %1, $0, $25"                                \
                                  : "=d" (*pid_base_ptr), "=d" (*pic_base_ptr)      \
                                  : /* No Inputs */ );                              \
                }

#endif  /* ESAL_TS_PIC_PID_SUPPORT == NU_TRUE */

/* Macros that checks the current status of a lock. */
#define         ESAL_TS_LOCK_TEST(lock_ptr,lock_status_ptr)                         \
                {                                                                   \
                    asm volatile(" ll    %0, %1"                                    \
                                : "=&d" (*lock_status_ptr)                          \
                                : "m" (lock_ptr));                                  \
                }
/* Macro that gets a previously free lock for the caller. */
#define         ESAL_TS_LOCK_GET(lock_ptr,lock_status_ptr)                          \
                {                                                                   \
                    asm volatile(" .set noreorder \n"                               \
                                "sc    %2, %1 \n"                                   \
                                "xor   %0, %2, %3  \n"                              \
                                : "=&d" (*lock_status_ptr)                          \
                                : "m" (lock_ptr),"d" (*lock_status_ptr), "d" (1));  \
                }
/* Macro to release a lock. */
#define         ESAL_TS_RTE_LOCK_RELEASE(lock_ptr)                                  \
                {                                                                   \
                    *lock_ptr = 0;                                                  \
                }

/* Macro to get a lock. */
#define         ESAL_TS_RTE_RAW_LOCK(lock_ptr,lock_status_ptr)                                   \
                {                                                                                \
                    asm volatile ("      .set    noreorder               \n"                     \
                                 "1:     ll      %1, %2                  \n"                     \
                                 "       bnez    %1, lock_retry          \n"                     \
                                 "       li      %1, 1                   \n"                     \
                                 "       sc      %1, %0                  \n"                     \
                                 "       bnez    %1, lock_continue       \n"                     \
                                 "       nop                             \n"                     \
                                 "lock_retry:                            \n"                     \
                                 "       pause                           \n"                     \
                                 "       b       1b                      \n"                     \
                                 "       nop                             \n"                     \
                                 "lock_continue:                         \n"                     \
                                 "       .set    reorder                 \n"                     \
                                 : "=m" (lock_ptr), "=&d" (*lock_status_ptr)                     \
                                 : "m"   (lock_ptr)                                              \
                                 : "memory");                                                    \
               }

/* Macro to release an already acquired lock. */
#ifndef __mips16
#define         ESAL_TS_RTE_RAW_UNLOCK(lock_ptr)                                    \
                {                                                                   \
                    asm volatile ("      .set    noreorder \n"                      \
                                 "       sync               \n"                     \
                                 "       sw      $0, %0      \n"                    \
                                 "       .set    reorder     \n"                    \
                                 : "=m" (lock_ptr)                                  \
                                 : /*No input*/);                                   \
               }
#else
#define         ESAL_TS_RTE_RAW_UNLOCK(lock_ptr)                                    \
                {                                                                   \
                    asm volatile ("      .set    noreorder \n"                      \
                                 "       sync               \n"                     \
                                 "       li      $2, 0       \n"                    \
                                 "       sw      $2, %0      \n"                    \
                                 "       .set    reorder     \n"                    \
                                 : "=m" (lock_ptr)                                  \
                                 : /*No input*/                                     \
                                 : "$2");                                           \
               }
#endif

/* Macro that tries to obtain the lock. */
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
#ifndef __mips16
#define         ESAL_TS_RTE_RAW_LOCK_TRY(lock_ptr,lock_status_ptr)                               \
                {                                                                                \
                    asm volatile ("      .set    noreorder               \n"                     \
                                 "1:     ll      %1, %2                  \n"                     \
                                 "       bnez    %1, lock_exit           \n"                     \
                                 "       li      %1, 0                   \n"                     \
                                 "       li      %1, 1                   \n"                     \
                                 "       sc      %1, %0                  \n"                     \
                                 "lock_exit:                             \n"                     \
                                 "       .set    reorder                 \n"                     \
                                 : "=m" (lock_ptr), "=&d" (*lock_status_ptr)                     \
                                 : "m"   (lock_ptr)                                              \
                                 : "memory");                                                    \
               }
#else
#define         ESAL_TS_RTE_RAW_LOCK_TRY(lock_ptr,lock_status_ptr)                               \
                {                                                                                \
                    asm volatile ("      .set    noreorder               \n"                     \
                                 "1:     ll      %1, %2                  \n"                     \
                                 "       bnez    %1, lock_return0        \n"                     \
                                 "       li      %1, 1                   \n"                     \
                                 "       sc      %1, %0                  \n"                     \
                                 "       b       lock_exit               \n"                     \
                                 "lock_return0:                          \n"                     \
                                 "       li      %1, 0                   \n"                     \
                                 "lock_exit:                             \n"                     \
                                 "       .set    reorder                 \n"                     \
                                 : "=m" (lock_ptr), "=&d" (*lock_status_ptr)                     \
                                 : "m"   (lock_ptr)                                              \
                                 : "memory");                                                    \
               }
#endif
#endif

/* Use MIPS instruction for hardware waiting and synchronization */
#define         ESAL_TS_LOCK_HW_WAIT()                                              \
                {                                                                   \
                    asm volatile(" WAIT ");                                         \
                }

#define         ESAL_TS_RTE_MEM_BARRIER()                                           \
                {                                                                   \
                    asm volatile(" sync;ehb ");                                     \
                }

/* This macro gets the current function's return address, see GCC manual for argument usage */
#define         ESAL_GET_RETURN_ADDRESS(level) __builtin_return_address(level)

/* This macro marks a symbol declaration as weakly linked */
#define         ESAL_TS_WEAK_REF(decl) decl __attribute((weak))

/* This macro marks a symbol definition as weakly linked */
#define         ESAL_TS_WEAK_DEF(decl) __attribute((weak)) decl

/* This macro returns the passed value */
#define         ESAL_TS_NO_RETURN(return_val) return(return_val)

/* This macro generates deprecation warnings */
#define         ESAL_TS_RTE_DEPRECATED __attribute__((deprecated))

/* This macro places a compiler memory barrier to ensure read / write commands
 * cannot be re-ordered around it */
#define         ESAL_TS_RTE_COMPILE_MEM_BARRIER()   asm volatile("" ::: "memory")

#endif  /* CSGNU_MIPS_DEFS_H */

