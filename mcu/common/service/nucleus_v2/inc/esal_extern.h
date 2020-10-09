/***********************************************************************
*
*            Copyright 1993 Mentor Graphics Corporation
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
*       esal_extern.h
*
*   COMPONENT
*
*       ESAL - Embedded Software Abstraction Layer
*
*   DESCRIPTION
*
*       This file provides the external interface to the Embedded
*       Software Abstraction Layer components
*
*   DATA STRUCTURES
*
*       None
*
*   DEPENDENCIES
*
*       esal_ge_com_defs.h                  Embedded Software
*                                           Abstraction Layer generic
*                                           common definitions
*       esal_ge_dbg_defs.h                  Embedded Software
*                                           Abstraction Layer generic
*                                           debugging definitions
*       esal_ge_int_defs.h                  Embedded Software
*                                           Abstraction Layer generic
*                                           interrupt control
*                                           definitions
*       esal_ge_isr_defs.h                  Embedded Software
*                                           Abstraction Layer generic
*                                           interrupt servicing
*       esal_ge_mem_defs.h                  Embedded Software
*                                           Abstraction Layer generic
*                                           memory definitions
*       esal_ge_stk_defs.h                  Embedded Software
*                                           Abstraction Layer generic
*                                           stack definitions
*       esal_ge_tmr_defs.h                  Embedded Software
*                                           Abstraction Layer generic
*                                           timer definitions
*       esal_ge_rte_defs.h                  Embedded Software
*                                           Abstraction Layer generic
*                                           run-time environment
*                                           definitions
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
***********************************************************************/

#ifndef     ESAL_EXTERN_H
#define     ESAL_EXTERN_H

/* Include generic component header files */
#include    "esal_ge_com_defs.h"
#include    "esal_ge_dbg_defs.h"
#include    "esal_ge_int_defs.h"
#include    "esal_ge_isr_defs.h"
#include    "esal_ge_mem_defs.h"
#include    "esal_ge_stk_defs.h"
#include    "esal_ge_tmr_defs.h"
#include    "esal_ge_rte_defs.h"


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

typedef         unsigned int                            UINT;
typedef         unsigned long                           UINT32;
#define         ESAL_AR_INTERRUPTS_DISABLE_BITS         0x00000000
#define         ESAL_AR_INTERRUPTS_ENABLE_BITS          0x00000001
#define         ESAL_AR_INT_CONTROL_VARS                UINT32  esal_tmp_val;

/* This macro sets the architecture's stack pointer. */
#define         ESAL_TS_RTE_SP_WRITE(stack_ptr)                             \
                    asm volatile ("or    $sp, $0, %0" : : "r" (stack_ptr) )

/* This macro gets the architecture's stack pointer. */
#define         ESAL_TS_RTE_SP_READ()                                       \
                ({                                                          \
                    VOID*    stack;                                         \
                    asm volatile ("or    %0, $0, $sp"                       \
                    : "=r" (stack)); stack;                                 \
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
                                  : "r" (cpr_val) )

/* This macro read from a coprocessor register */
#define         ESAL_TS_RTE_CP_READ(cp_num, cpr_val_ptr, cpr_reg, sel)      \
                    asm volatile ("mfc"ESAL_TS_RTE_QUOTES(cp_num)" %0, "    \
                                   ESAL_TS_RTE_QUOTES(cpr_reg) ","          \
                                   #sel                                     \
                                   : "=r" (*(UINT *)(cpr_val_ptr))          \
                                   : /* No Inputs */)

/* This macro executes a ssnop instruction */
#define         ESAL_TS_RTE_SSNOP_EXECUTE()                                 \
                    asm volatile("    ssnop"                                \
                                 : /* No Outputs */                         \
                                 : /* No Inputs */ )

/* This macro executes a EHB instruction */
#define         ESAL_TS_RTE_SYNC_EHB_EXECUTE()                              \
                    asm volatile("    sync; ehb"                            \
                                 : /* No Outputs */                         \
                                 : /* No Inputs */ )

/* Disable SR IE bit */
#define         ESAL_TS_RTE_DI(old_sr_ptr)                                  \
                    asm volatile("    di %0"                                \
                                   : "=r" (*(UINT *)(old_sr_ptr))           \
                                   : /* No Inputs */)

/* Enable SR IE bit */
#define         ESAL_TS_RTE_EI(old_sr_ptr)                                  \
                    asm volatile("    ei %0"                                \
                                   : "=r" (*(UINT *)(old_sr_ptr))           \
                                   : /* No Inputs */)


#define         ESAL_AR_INT_ALL_DISABLE()                                           \
                {                                                                   \
                    /* Disable IE bit */                                            \
                    ESAL_TS_RTE_DI(&esal_tmp_val);                                  \
                    ESAL_TS_RTE_SSNOP_EXECUTE();                                    \
                    ESAL_TS_RTE_SSNOP_EXECUTE();                                    \
                    ESAL_TS_RTE_SYNC_EHB_EXECUTE();                                 \
                }

#define         ESAL_AR_INT_ALL_RESTORE()                                           \
                {                                                                   \
                    /* Writing to previously saved int status to status reg */      \
                    ESAL_TS_RTE_CP_WRITE(0, esal_tmp_val, ESAL_TS_RTE_CPR12, 0);    \
                }

#define         ESAL_AR_INT_FAST_ALL_DISABLE()                                      \
                {                                                                   \
                     UINT32    sr_tmp;                                              \
                                                                                    \
                    /* Disable IE bit */                                            \
                    ESAL_TS_RTE_DI(&sr_tmp);                                        \
                    ESAL_TS_RTE_SSNOP_EXECUTE();                                    \
                    ESAL_TS_RTE_SSNOP_EXECUTE();                                    \
                    ESAL_TS_RTE_SYNC_EHB_EXECUTE();                                 \
                }

/* This macro unlocks interrupts but doesn't save the status
   register / control register value. */
#define         ESAL_AR_INT_FAST_ALL_ENABLE()                                       \
                {                                                                   \
                     UINT32    sr_tmp;                                              \
                                                                                    \
                    /* Enabled the IE bit */                                        \
                    ESAL_TS_RTE_EI(&sr_tmp);                                        \
                    ESAL_TS_RTE_SSNOP_EXECUTE();                                    \
                    ESAL_TS_RTE_SSNOP_EXECUTE();                                    \
                    ESAL_TS_RTE_SYNC_EHB_EXECUTE();                                 \
                }

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

#endif      /* ESAL_EXTERN_H */
