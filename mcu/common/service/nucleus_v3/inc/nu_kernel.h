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
*         This file contains kernel constants common to both the
*         application and the actual Nucleus PLUS kernel.
*
***********************************************************************/

/* Check to see if this file has been included already.  */

#ifndef         NU_KERNEL
#ifdef          __cplusplus
/* C declarations in C++     */
extern          "C" {
#endif
#define         NU_KERNEL


/**********************************************************************/
/*                    Service Paramaeters                             */
/**********************************************************************/
/* Define constants for use in service parameters.  */
#define         NU_DISABLE_TIMER                    4
#define         NU_ENABLE_TIMER                     5
#define         NU_FIFO                             6
#define         NU_FIXED_SIZE                       7
#define         NU_NO_PREEMPT                       8
#define         NU_NO_START                         9
#define         NU_NO_SUSPEND                       0
#define         NU_PREEMPT                          10
#define         NU_PRIORITY                         11
#define         NU_START                            12
#define         NU_SUSPEND                          0xFFFFFFFFUL
#define         NU_VARIABLE_SIZE                    13
#define         NU_PRIORITY_INHERIT                 14U
#define         NU_NO_AFFINITY                      0xFFFFFFFFUL

/* Define constants for use in event groups */
#define         NU_OR                               0
#define         NU_OR_CONSUME                       1
#define         NU_AND                              2
#define         NU_AND_CONSUME                      3

/* Define constants for use in interrupt affinity services.  */
#define         NU_IRQ_SEND_TO_ALL                  0x00000001
#define         NU_IRQ_SEND_TO_ANY                  0x00000002

/* Define service completion status constants.  */
#define         NU_RETURN_TO_SCHEDULER              5
#define         NU_RUNLEVEL_COMP_READY              4
#define         NU_RUNLEVEL_COMP_NOT_READY          3
#define         NU_RUNLEVEL_COMP_INITIALIZING       2
#define         NU_RUNLEVEL_COMP_NOT_STARTED        1
#define         NU_SUCCESS                          0
#define         NU_RETURN_ERROR                     -1
#define         NU_GROUP_DELETED                    -2
#define         NU_INVALID_DELETE                   -3
#define         NU_INVALID_DRIVER                   -4
#define         NU_INVALID_ENABLE                   -5
#define         NU_INVALID_ENTRY                    -6
#define         NU_INVALID_FUNCTION                 -7
#define         NU_INVALID_GROUP                    -8
#define         NU_INVALID_HISR                     -9
#define         NU_INVALID_MAILBOX                  -10
#define         NU_INVALID_MEMORY                   -11
#define         NU_INVALID_MESSAGE                  -12
#define         NU_INVALID_OPERATION                -13
#define         NU_INVALID_PIPE                     -14
#define         NU_INVALID_POINTER                  -15
#define         NU_INVALID_POOL                     -16
#define         NU_INVALID_PREEMPT                  -17
#define         NU_INVALID_PRIORITY                 -18
#define         NU_INVALID_QUEUE                    -19
#define         NU_INVALID_RESUME                   -20
#define         NU_INVALID_SEMAPHORE                -21
#define         NU_INVALID_SIZE                     -22
#define         NU_INVALID_START                    -23
#define         NU_INVALID_SUSPEND                  -24
#define         NU_INVALID_TASK                     -25
#define         NU_INVALID_TIMER                    -26
#define         NU_INVALID_VECTOR                   -27
#define         NU_MAILBOX_DELETED                  -28
#define         NU_MAILBOX_EMPTY                    -29
#define         NU_MAILBOX_FULL                     -30
#define         NU_MAILBOX_RESET                    -31
#define         NU_NO_MEMORY                        -32
#define         NU_NO_PARTITION                     -33
#define         NU_NOT_DISABLED                     -34
#define         NU_NOT_PRESENT                      -35
#define         NU_NOT_REGISTERED                   -36
#define         NU_NOT_TERMINATED                   -37
#define         NU_PIPE_DELETED                     -38
#define         NU_PIPE_EMPTY                       -39
#define         NU_PIPE_FULL                        -40
#define         NU_PIPE_RESET                       -41
#define         NU_POOL_DELETED                     -42
#define         NU_QUEUE_DELETED                    -43
#define         NU_QUEUE_EMPTY                      -44
#define         NU_QUEUE_FULL                       -45
#define         NU_QUEUE_RESET                      -46
#define         NU_SEMAPHORE_DELETED                -47
#define         NU_SEMAPHORE_RESET                  -48
#define         NU_TIMEOUT                          -49
#define         NU_UNAVAILABLE                      -50
#define         NU_INVALID_REGION                   -51
#define         NU_MEMORY_CORRUPT                   -52
#define         NU_EMPTY_DEBUG_ALLOCATION_LIST      -53
#define         NU_HISR_ACTIVATION_COUNT_ERROR      -54
#define         NU_UNUSED_CODE_1                    -55
#define         NU_UNUSED_CODE_2                    -56
#define         NU_UNUSED_CODE_3                    -57
#define         NU_UNUSED_CODE_4                    -58
#define         NU_UNUSED_CODE_5                    -59
#define         NU_INVALID_RESUME_TIMER             -60
#define         NU_INVALID_PAUSE_TIMER              -61
#define         NU_TIMER_PAUSED                     -62
#define         NU_INVALID_COUNT                    -63
#define         NU_SEMAPHORE_INVALID_OWNER          -64
#define         NU_SEMAPHORE_ALREADY_OWNED          -65
#define         NU_EQM_INVALID_EVENT_SIZE           -66
#define         NU_EQM_INVALID_HANDLE               -67
#define         NU_EQM_EVENT_EXPIRED                -68
#define         NU_EQM_EVENT_WITHOUT_DATA           -69
#define         NU_EQM_INVALID_INPUT                -70
#define         NU_NOT_ALIGNED                      -71
#define         NU_SEMAPHORE_COUNT_ROLLOVER         -72
#define         NU_INVALID_PROCESS                  -73
#define         NU_INVALID_STATE                    -74
#define         NU_PROCESS_IN_TRANSITION            -75
#define         NU_PROCESS_FAILED                   -76
#define         NU_INCOMPATIBLE_CONFIG              -77
#define         NU_SEMAPHORE_OWNER_DEAD             -78
#define         NU_SYMBOLS_IN_USE                   -79
#define         NU_INVALID_MEMORY_REGION            -80
#define         NU_MEMORY_IS_SHARED                 -81
#define         NU_MEMORY_OVERLAPS                  -82
#define         NU_INVALID_OPTIONS                  -83
#define         NU_RUNLEVEL_COMP_FAILED             -84
#define         NU_NOT_ALLOWED                      -85
#define         NU_INVALID_CPU_ID                   -86
#define         NU_INVALID_TYPE                     -87
#define         NU_SPINLOCK_OWNED                   -88
#define         NU_INVALID_SPINLOCK                 -89
#define         NU_SPINLOCK_NOT_OWNED               -90
#define         NU_INVALID_BCD_CORE                 -91
#define         NU_INVALID_AFFINITY                 -92
#define         NU_CORE_NOT_FREE                    -93
#define         NU_IRQ_INVALID_VECTOR               -94
#define         NU_IRQ_INVALID_OPTION               -95
#define         NU_IRQ_UNSUPPORTED_OPERATION        -96
#define         NU_IRQ_INVALID_CPU_MASK             -97
#define         NU_IRQ_NOT_ENABLED                  -98
#define         NU_INVALID_LISR                     -99
#define         NU_PI_SEMAPHORE_INVALID_COUNT       -100
#define         NU_TIMER_INIT_ERROR                 -101
#define         NU_POOL_CORRUPT                     -102
#define         NU_INVALID_CORE_MASK                -103
#define         NU_INVALID_DESIRED_CORE_OP          -104
#define         NU_INVALID_CURRENT_CORE_OP          -105

/**********************************************************************/
/*                 Processes Configuration                            */
/**********************************************************************/

#include        "proc_extern.h"

/* Legacy macros */

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

#define         NU_SUPERVISOR_MODE()
#define         NU_USER_MODE()
#define         NU_SUPERV_USER_VARIABLES
#define         NU_SUPERVISOR_MODE_ISR()
#define         NU_USER_MODE_ISR()
#define         NU_BIND_TASK_TO_KERNEL(task)    NU_SUCCESS
#define         NU_BIND_HISR_TO_KERNEL(hisr)    NU_SUCCESS

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE) */


/**********************************************************************/
/*                          Kernel Support                            */
/**********************************************************************/

/* Define the basic data structure templates.  */
#include        "plus_common.h"

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

#include        "dev_mgr.h"
#include        "eqm.h"
#include        "rtl_extr.h"

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE) */

#ifdef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE
#include        "plus_supplement.h"
#endif  /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */

/* Circular buffer APIs */
#include        "cbuffer.h"

/* Define Nucleus PLUS system interface */
VOID            Application_Initialize(NU_MEMORY_POOL*, NU_MEMORY_POOL*);
NU_WEAK_REF(VOID Pre_Kernel_Init_Hook(NU_MEMORY_POOL*, NU_MEMORY_POOL*));

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE)

VOID NU_System_Initialization_Complete(VOID);

#endif /* CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE */

#ifdef          __cplusplus

/* End of C declarations */
}

#endif  /* __cplusplus */

#endif  /* !NU_KERNEL */
