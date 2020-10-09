/***********************************************************************
*
*            Copyright 2011 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
************************************************************************

************************************************************************
*
*     DESCRIPTION
*
*         This file provides the external interface to the Embedded
*         Software Abstraction Layer components.
*
***********************************************************************/

#ifndef             ESAL_H
#define             ESAL_H

/* Include configuration header files */
#include <string.h>

/* Define all memory related function prototypes */
VOID                *ESAL_GE_MEM_Initialize(VOID);
VOID                *ESAL_PR_MEM_Cache_Enable(VOID *avail_mem);
INT                 ESAL_GE_Mem_Region_Addr_Search(VOID                 *start_addr,
                                                   ESAL_GE_MEM_REGION   **mem_region,
                                                   VOID                 **region_end);

#if (!defined(CFG_NU_OS_KERN_PROCESS_MEM_MGMT_ENABLE))
VOID                *ESAL_CO_MEM_Cache_Enable(VOID *avail_mem);
#endif /* (!defined(CFG_NU_OS_KERN_PROCESS_MEM_MGMT_ENABLE)) */

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

/* Define all debugging related function prototypes */
VOID                ESAL_GE_DBG_Initialize(VOID **(*breakpoint_handler)(VOID *), VOID **(*step_handler)(VOID *), VOID **(*data_abort_handler)(VOID *));
VOID                ESAL_AR_DBG_Initialize(VOID);

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE) */

/**********************************************************************************/
/*                  Interrupt Service                                             */
/**********************************************************************************/

/* Define all externally accessible, interrupt related function prototypes */
VOID                ESAL_GE_ISR_Initialize(VOID (*default_isr)(INT),
                                           VOID (*default_except)(INT, VOID *),
                                           VOID **(*os_isr_entry)(INT, VOID *),
                                           VOID (*os_nested_isr_entry)(INT),
                                           VOID **(*os_except_entry)(INT, VOID *),
                                           BOOLEAN hibernate_wake);
VOID                ESAL_AR_ISR_Initialize(VOID);
VOID                ESAL_AR_ISR_Vector_Table_Install(VOID);
VOID *              ESAL_AR_Exception_User_Stack_Pointer_Get(VOID *stack_frame);
VOID                ESAL_AR_Exception_Context_Get(INT exception_num, VOID *exception_frame, VOID *error);
VOID *              ESAL_AR_Exception_User_Stack_Update(VOID *user_stack_pointer, VOID *exception_stack);
VOID                ESAL_DP_ISR_Initialize(VOID);
VOID                ESAL_PR_ISR_Initialize(VOID);

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

UINT32              ESAL_AR_Exception_User_Link_Register_Get(VOID *stack_frame);

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE) */

/**********************************************************************************/
/*                  Run-time Environment                                          */
/**********************************************************************************/

/* Map generic APIs to lower-level component */
#define             ESAL_GE_RTE_Cxx_System_Objects_Initialize   ESAL_TS_RTE_Cxx_System_Objects_Initialize
#define             ESAL_GE_RTE_Cxx_Exceptions_Initialize       ESAL_TS_RTE_Cxx_Exceptions_Initialize
#define             ESAL_GE_RTL_Initialize                      ESAL_TS_RTE_Initialize

/* Define all run-time environment related function prototypes */
VOID                ESAL_GE_RTE_Initialize(INT (*os_write)(INT), INT (*os_read)(VOID));
VOID                ESAL_TS_RTE_Lowlevel_Initialize(VOID);
VOID                ESAL_TS_RTE_Initialize(VOID);
VOID                ESAL_TS_RTE_Cxx_Region_Objects_Initialize(VOID *   region_start,
                                                              VOID *   region_end);
VOID                ESAL_TS_RTE_Cxx_System_Objects_Initialize(VOID);
VOID                ESAL_TS_RTE_Cxx_Exceptions_Initialize(VOID);

/**********************************************************************************/
/*                  Stack                                                         */
/**********************************************************************************/
/* Define all externally accessible, stack related function prototypes */
VOID                ESAL_GE_STK_Initialize(VOID (*unsol_stk_switch_entry)(VOID));

#endif      /* ESAL_H */

