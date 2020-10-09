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
*     DESCRIPTION
*
*         This file contains data structure definitions and constants for
*         the component that controls the various threads of execution in
*         system.  Threads include tasks, HISRs, signal handlers, etc.
*
***********************************************************************/

/* Check to see if the file has been included already.  */

#ifndef THREAD_CONTROL_H
#define THREAD_CONTROL_H

#include "nucleus_internal.h"
#include "error_management.h"
#include <ex_public.h>

/* Define constants local to this component.  */

#define         TC_TASK_ID              0x5441534bUL
#define         TC_HISR_ID              0x48495352UL
#define         TC_PRIORITIES           CFG_NU_OS_KERN_PLUS_COMMON_NUM_TASK_PRIORITIES
#define         TC_HISR_PRIORITIES      CFG_NU_OS_KERN_PLUS_COMMON_NUM_HISR_PRIORITIES
#ifdef  CFG_NU_OS_KERN_PLUS_SMP_ENABLE
#define         TC_MAX_PRIORITIES       (TC_PRIORITIES + TC_HISR_PRIORITIES)
#else
#define         TC_MAX_PRIORITIES       TC_PRIORITIES
#endif
#define         TC_MAX_PRIORITIES_PER_GROUP 32

#define         TC_MAX_GROUPS           ((TC_MAX_PRIORITIES / TC_MAX_PRIORITIES_PER_GROUP) +                \
                                            (((TC_MAX_PRIORITIES % TC_MAX_PRIORITIES_PER_GROUP) +           \
                                            ((TC_MAX_PRIORITIES_PER_GROUP - (TC_MAX_PRIORITIES %            \
                                            TC_MAX_PRIORITIES_PER_GROUP)) % TC_MAX_PRIORITIES_PER_GROUP)) / \
                                            (TC_MAX_PRIORITIES_PER_GROUP - 1)))

#define         TC_MAX_HISR_ACTIVATIONS 0xFFFFFFFFUL

/* Defines for signal states */
#define         TC_SIGNAL_INACTIVE      0
#define         TC_SIGNAL_REQUESTED     1
#define         TC_SIGNAL_ACTIVE        2

/* Requested scheduling changes */
#define         TC_NO_SCHED_REQUEST         0xFF

/* Data type used to track task priorities contained in
   different domains (ready Q / scheduled tasks / etc) */
typedef struct TC_PRIORITIES_STRUCT
{
    /* Bit mask to identify index into sub-group mask.
       A bit set indicates which sub-group has bits set within it.
       NOTE:  If the number of task priorities configured is 32 or less,
              the sub-priority group is not used and the
              primary group bit mask represents task priorites 0-31. */
    UINT32              tc_primary_group_mask;

#if (TC_MAX_PRIORITIES > TC_MAX_PRIORITIES_PER_GROUP)
    /* Bit mask to identify which task priorities are in
       the associated domain (queue, list, etc).
       Each sub-group represents 32 different
       priorites with sub-group[0] representing priorities 0-31,
       sub-group[1] representing priorities 32-63, etc.
       A bit set indicates a task of the represented priority is
       in the associated domain. */
    UINT32              tc_sub_group_mask[TC_MAX_GROUPS];
#endif

} TC_TASK_PRIORITIES;

#ifdef  CFG_NU_OS_KERN_PLUS_SMP_ENABLE

/* Bound Computational Domain Related Definitions */
#define         TC_MAX_BCD              ESAL_GE_CPU_COUNT-1
#define         TCD_System_Domain       TC_SCHED_DOMAIN_List[0]
#define         TCD_Schedule_Lock       TCD_Sched_Lock_List[0]

typedef struct TC_RQ_STRUCT
{
    UINT32              tc_high_ready_task_priority;
    TC_TCB *            tc_high_ready_task;
    TC_TCB *            tc_task_priority_list_head[TC_MAX_PRIORITIES+1];
    TC_TASK_PRIORITIES  tc_task_priorities;
    ESAL_GE_LOCK        tc_rq_lock;
    ESAL_CPU_MASK       tc_tailing_cpus[TC_MAX_PRIORITIES];

} TC_RQ;

/* Define a structure for the system level thread data */
typedef struct TC_SCHED_DOMAIN_STRUCT
{
    UINT32              tc_low_sched_task_priority;
    ESAL_CPU_MASK       tc_low_sched_task_cpus;
    UINT32              tc_high_ready_task_priority;
    TC_RQ               tc_ready_queue;

#if (defined(CFG_NU_OS_KERN_PLUS_SMP_ENABLE) && (CFG_NU_OS_KERN_PLUS_SMP_MCORE_AFFINITY == NU_TRUE))
    TC_RQ               tc_mcore_ready_queue;
    TC_TCB *            tc_task_mcore_priority_list_head[ESAL_GE_CPU_COUNT][TC_MAX_PRIORITIES+1];
#endif

    ESAL_CPU_MASK       tc_avail_cpus;

} TC_SCHED_DOMAIN;


/* Define the thread per cpu structure type.  */
typedef struct TC_CPU_CB_STRUCT
{
    VOID * volatile     tc_running_thread;
    TC_TCB * volatile   tc_scheduled_task;
    TC_RQ               tc_ready_queue;
    struct TC_SCHED_DOMAIN_STRUCT *
                        tc_sched_domain;

} TC_CPU_CB;

/* Define structure that contains information about error management for each CPU */
typedef struct ER_CPU_CB_STRUCT
{
    /* Error code detected.  */
    INT             er_error_code;

    /* Last unhandled interrupt.  */
    INT             er_unhandled_interrupt;

    /* Last unhandled exception.  */
    INT             er_unhandled_exception;

    /* Stack pointer for the last exception.  */
    VOID            *er_unhandled_exception_sp;

#if (NU_ERROR_STRING == NU_TRUE)

    /* String representation of the error. */
    const CHAR      *er_error_string;

#endif  /* NU_ERROR_STRING == NU_TRUE */

} ER_CPU_CB;


/* Define externally referenced variables.   */
extern CS_NODE              *TCD_Created_Tasks_List;
extern UNSIGNED             TCD_Total_Tasks;
extern ESAL_GE_LOCK         TCD_Sched_Lock_List[TC_MAX_BCD+1];
extern TC_SCHED_DOMAIN      TC_SCHED_DOMAIN_List[TC_MAX_BCD+1];
extern ESAL_GE_LOCK         TCD_Running_Thread_Lock;
extern ESAL_CPU_MASK        TCD_Sched_Change_CPUS;
extern CS_NODE              *TCD_Affinity_Group_Lists[CFG_NU_OS_KERN_PLUS_AFFINITY_GROUP_AMOUNT];
#if !defined NU_HISR_LOCK_SPLIT
extern ESAL_GE_LOCK         TCD_HISR_Lock;
#endif /* !defined NU_HISR_LOCK_SPLIT */

#if (CFG_NU_OS_KERN_PLUS_SMP_MCORE_AFFINITY == NU_TRUE)
extern TC_TCB*              mcore_high_ready_task[ESAL_GE_CPU_COUNT];
extern UINT32               mcore_high_ready_task_priority[ESAL_GE_CPU_COUNT];
#endif /* (CFG_NU_OS_KERN_PLUS_SMP_MCORE_AFFINITY == NU_TRUE) */
#endif  /* CFG_NU_OS_KERN_PLUS_SMP_ENABLE */

extern TC_TCB*              affined_high_ready_task;
extern UINT32               affined_high_ready_priority;

#if (defined(CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT) && (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT>1))
extern CS_NODE             *TCD_Auto_Clean_List[ESAL_GE_CPU_COUNT];
#endif /* #if (defined(CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT) && (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT>1)) */

/* Core error checking functions.  */

BOOLEAN         TCCE_Validate_Resume(OPTION resume_type, NU_TASK *task_ptr);
INT             TCCE_Suspend_Error(VOID);

/* Core processing functions.  */

STATUS          TCC_Resume_Task(NU_TASK *task_ptr, OPTION suspend_type);
VOID            TCC_Suspend_Task(NU_TASK *task_ptr, OPTION suspend_type,
                                 VOID (*cleanup)(VOID *),
                                 VOID *information, UNSIGNED timeout);
VOID            TCC_Task_Timeout(NU_TASK *task_ptr);
VOID            TCC_Time_Slice(NU_TASK *task_ptr);
/* Core functions with target dependencies */
VOID            TCCT_Schedule(VOID);
VOID            TCST_Task_Signal_Prep(TC_TCB * task);
VOID            TCC_Task_Priority_Set(TC_TCB * task, UINT16 priority);
#ifdef  CFG_NU_OS_KERN_PLUS_SMP_ENABLE
VOID            TCC_Task_ReadyQ_Remove(TC_TCB * task, TC_RQ * ready_queue);
TC_TCB *        TCC_Task_Ready_To_Scheduled(UINT32 cpu_id);
VOID            TCC_Task_ReadyQ_Insert(TC_TCB * task, BOOLEAN head);
BOOLEAN         TCC_Task_Scheduled_To_Ready(TC_TCB * sched_task, BOOLEAN preempts);
VOID            TCC_Task_Scheduled_To_Suspend(TC_TCB * sched_task, OPTION suspend_type);
BOOLEAN         TCC_Task_Suspend_To_Ready(TC_TCB * suspend_task);
VOID            TCC_Task_Lowest_Scheduled_Find(TC_SCHED_DOMAIN * sched_domain);
/* Thread control initialization function */
VOID            TCIT_Initialize(VOID);
#define         TCIT_INITIALIZE()       TCIT_Initialize();

#else
#define         TCIT_INITIALIZE()
extern BOOLEAN  TCD_Schedule_Lock;
#endif

#ifdef CFG_NU_OS_KERN_PLUS_SMP_ENABLE
extern INT     TCD_Schedule_Interrupt_State[ESAL_GE_CPU_COUNT];
#if (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT>1)
#ifdef MTK_KAL
extern INT INC_Initialize_State;
#if defined(NU_SCHEDULE_LOCK_DEBUG)
extern UINT TCD_Schedule_Lock_Caller_L1;
#define         TCCT_SCHEDULE_LOCK()                                                     \
                {                                                                        \
                    UINT32 cpu_id;                                                       \
                    UINT32 esal_tmp_val;                                                 \
                    INT    lock_status;                                                  \
                    ESAL_AR_INT_ALL_DISABLE();                                           \
                    cpu_id = ESAL_GE_CPU_ID_GET();                                       \
                    if (sst_get_exception_count() > 0) {                               \
                        ESAL_AR_INT_ALL_RESTORE();                                       \
                    } else {                                                             \
                        if (esal_tmp_val != 1 && INC_Initialize_State) {                 \
                            ERC_System_Error(NU_SYS_CALL_WHEN_INTERRUPT_DISABLED);       \
                        }                                                                \
                        if (ESAL_GE_ISR_EXECUTING()) {                         \
                            ERC_System_Error(NU_SYS_CALL_WHEN_LISR);                     \
                        }                                                                \
                        do {                                                             \
                            TCD_Schedule_Interrupt_State[cpu_id] = esal_tmp_val;         \
                            lock_status = ESAL_GE_Lock_Try(&TCD_Schedule_Lock);          \
                            if (lock_status == 0) {                                      \
                                ESAL_AR_INT_ALL_RESTORE2(TCD_Schedule_Interrupt_State[cpu_id]); \
                                __asm__ __volatile__("pause");                           \
                                ESAL_AR_INT_ALL_DISABLE();                               \
                            }                                                            \
                        } while (lock_status == 0);                                      \
                        TCD_Schedule_Lock_Caller_L1 = (UINT) __builtin_return_address(0); \
                    }                                                                    \
                }
#define         TCCT_OST_SCHEDULE_LOCK()                                            \
                {                                                                   \
                    UINT32 cpu_id;                                                  \
                    UINT32 esal_tmp_val;                                            \
                    INT    lock_status;                                             \
                    ESAL_AR_INT_ALL_DISABLE();                                      \
                    cpu_id = ESAL_GE_CPU_ID_GET();                                  \
                    if (sst_get_exception_count() > 0) {                          \
                        ESAL_AR_INT_ALL_RESTORE();                                  \
                    } else {                                                        \
                        if (esal_tmp_val != 1 && INC_Initialize_State) {            \
                            ERC_System_Error(NU_SYS_CALL_WHEN_INTERRUPT_DISABLED);  \
                        }                                                           \
                        do {                                                        \
                            TCD_Schedule_Interrupt_State[cpu_id] = esal_tmp_val;    \
                            lock_status = ESAL_GE_Lock_Try(&TCD_Schedule_Lock);     \
                            if (lock_status == 0) {                                 \
                                ESAL_AR_INT_ALL_RESTORE2(TCD_Schedule_Interrupt_State[cpu_id]); \
                                __asm__ __volatile__("pause");                      \
                                ESAL_AR_INT_ALL_DISABLE();                          \
                            }                                                       \
                        } while (lock_status == 0);                                 \
                        TCD_Schedule_Lock_Caller_L1 = (UINT) __builtin_return_address(0); \
                    }                                                               \
                }
#define         TCCT_SCHEDULE_UNLOCK()                                          \
                {                                                               \
                    UINT32 cpu_id = ESAL_GE_CPU_ID_GET();                       \
                    if (sst_get_exception_count() == 0) {                     \
                        TCD_Schedule_Lock_Caller_L1 = 0;                        \
                        ESAL_GE_Lock_Release(&TCD_Schedule_Lock);               \
                        ESAL_AR_INT_ALL_RESTORE2(TCD_Schedule_Interrupt_State[cpu_id]); \
                    }                                                           \
                }
#else /* NU_SCHEDULE_LOCK_DEBUG */
#define         TCCT_SCHEDULE_LOCK()                                                \
                {                                                                   \
                    UINT32 cpu_id;                                                  \
                    UINT32 esal_tmp_val;                                            \
                    INT    lock_status;                                             \
                    ESAL_AR_INT_ALL_DISABLE();                                      \
                    cpu_id = ESAL_GE_CPU_ID_GET();                                  \
                    if (sst_get_exception_count() > 0) {                          \
                        ESAL_AR_INT_ALL_RESTORE();                                  \
                    } else {                                                        \
                        if (esal_tmp_val != 1 && INC_Initialize_State) {            \
                            ERC_System_Error(NU_SYS_CALL_WHEN_INTERRUPT_DISABLED);  \
                        }                                                           \
                        if (ESAL_GE_ISR_EXECUTING()) {                    \
                            ERC_System_Error(NU_SYS_CALL_WHEN_LISR);                \
                        }                                                           \
                        do {                                                        \
                            TCD_Schedule_Interrupt_State[cpu_id] = esal_tmp_val;    \
                            lock_status = ESAL_GE_Lock_Try(&TCD_Schedule_Lock);     \
                            if (lock_status == 0) {                                 \
                                ESAL_AR_INT_ALL_RESTORE2(TCD_Schedule_Interrupt_State[cpu_id]); \
                                __asm__ __volatile__("pause");                      \
                                ESAL_AR_INT_ALL_DISABLE();                          \
                            }                                                       \
                        } while (lock_status == 0);                                 \
                    }                                                               \
                }
#define         TCCT_OST_SCHEDULE_LOCK()                                            \
                {                                                                   \
                    UINT32 cpu_id;                                                  \
                    UINT32 esal_tmp_val;                                            \
                    INT    lock_status;                                             \
                    ESAL_AR_INT_ALL_DISABLE();                                      \
                    cpu_id = ESAL_GE_CPU_ID_GET();                                  \
                    if (sst_get_exception_count() > 0) {                          \
                        ESAL_AR_INT_ALL_RESTORE();                                  \
                    } else {                                                        \
                        if (esal_tmp_val != 1 && INC_Initialize_State) {            \
                            ERC_System_Error(NU_SYS_CALL_WHEN_INTERRUPT_DISABLED);  \
                        }                                                           \
                        do {                                                        \
                            TCD_Schedule_Interrupt_State[cpu_id] = esal_tmp_val;    \
                            lock_status = ESAL_GE_Lock_Try(&TCD_Schedule_Lock);     \
                            if (lock_status == 0) {                                 \
                                ESAL_AR_INT_ALL_RESTORE2(TCD_Schedule_Interrupt_State[cpu_id]); \
                                __asm__ __volatile__("pause");                      \
                                ESAL_AR_INT_ALL_DISABLE();                          \
                            }                                                       \
                        } while (lock_status == 0);                                 \
                    }                                                               \
                }
#define         TCCT_SCHEDULE_UNLOCK()                                          \
                {                                                               \
                    UINT32 cpu_id = ESAL_GE_CPU_ID_GET();                       \
                    if (sst_get_exception_count() == 0) {                     \
                        ESAL_GE_Lock_Release(&TCD_Schedule_Lock);               \
                        ESAL_AR_INT_ALL_RESTORE2(TCD_Schedule_Interrupt_State[cpu_id]); \
                    }                                                           \
                }
#endif /* NU_SCHEDULE_LOCK_DEBUG */
#else /* MTK_KAL */
#define         TCCT_SCHEDULE_LOCK()                                            \
                {                                                               \
                    TCD_Schedule_Interrupt_State[ESAL_GE_CPU_ID_GET()] = ESAL_GE_INT_Global_Set(ESAL_GE_INT_DISABLE_BITS); \
                    ESAL_GE_Lock_Acquire(&TCD_Schedule_Lock);                   \
                }
#define         TCCT_SCHEDULE_UNLOCK()                                          \
                {                                                               \
                    ESAL_GE_Lock_Release(&TCD_Schedule_Lock);                   \
                    ESAL_GE_INT_Global_Set(TCD_Schedule_Interrupt_State[ESAL_GE_CPU_ID_GET()]); \
                }
#endif /* MTK_KAL */
#else  /* CPU_COUNT>1 */
#define         TCCT_SCHEDULE_LOCK       TCCT_Local_Schedule_Lock
#define         TCCT_SCHEDULE_UNLOCK     TCCT_Local_Schedule_Unlock
#endif /* CPU_COUNT>1 */

#define         TCCT_Local_Schedule_Lock()                                      \
                {                                                               \
                    TCD_Schedule_Interrupt_State[ESAL_GE_CPU_ID_GET()] = ESAL_GE_INT_Global_Set(ESAL_GE_INT_DISABLE_BITS);  \
                }
#define         TCCT_Local_Schedule_Unlock()                                    \
                {                                                               \
                    ESAL_GE_INT_Global_Set(TCD_Schedule_Interrupt_State[ESAL_GE_CPU_ID_GET()]);\
                }

#else /* SMP_ENABLE */
#if (CFG_NU_OS_KERN_PLUS_COMMON_DEBUG_SCHED_LOCK == NU_TRUE)
extern STATUS   ERC_System_Error(INT error_code);
#define         TCCT_SCHEDULE_LOCK()                                            \
                {                                                               \
                    /* Ensure lock not set (if set, invalid usage / nesting) */ \
                    if (TCD_Schedule_Lock != NU_FALSE)                          \
                    {                                                           \
                        /* System error */                                      \
                        ERC_System_Error(NU_INVALID_LOCK_USAGE);                \
                    }                                                           \
                                                                                \
                    TCD_Schedule_Lock = NU_TRUE;                                \
                    ESAL_GE_RTE_COMPILE_MEM_BARRIER();                          \
                }
#else
#define         TCCT_SCHEDULE_LOCK()                                            \
                {                                                               \
                    TCD_Schedule_Lock = NU_TRUE;                                \
                    ESAL_GE_RTE_COMPILE_MEM_BARRIER();                          \
                }
#endif  /* CFG_NU_OS_KERN_PLUS_COMMON_DEBUG_SCHED_LOCK == NU_TRUE */

VOID            TCCT_Schedule_Unlock(VOID);
#define         TCCT_SCHEDULE_UNLOCK()      TCCT_Schedule_Unlock()

#endif  /* CFG_NU_OS_KERN_PLUS_SMP_ENABLE */

VOID            TCCT_Control_To_System(VOID);

#ifdef NU_CONTROL_BLOCK_HIDING
#define        TCC_READ_TASK(task)       ((task != NU_NULL) ? (NU_TASK *)((task) -> tc_handle) : NU_NULL)
#else
#define        TCC_READ_TASK(task)       (NU_TASK *)(task)
#endif /* NU_CONTROL_BLOCK_HIDING */

#ifdef  CFG_NU_OS_KERN_PLUS_SMP_ENABLE

/* Define the macros for getting per CPU information */
//#define         TCD_Current_Thread              CIS_CURRENT_TC_CB.tc_running_thread
/* Read from TCContext register */
#define         TCD_Current_Thread              \
                ({                              \
                    void* rtn_addr;             \
                    __asm__ __volatile__(       \
                        "mfc0 %0, $2, 5 \n"     \
                        : "=d" (rtn_addr)       \
                    );                          \
                    rtn_addr;                   \
                })

#define         TCD_Execute_Task                CIS_CURRENT_TC_CB.tc_scheduled_task

/* Define the mscros that are related to CPU */
#define         TCC_Get_CPU_ID()    ((TC_TCB *)TCD_Current_Thread) -> tc_cpu_id

#define         TCC_Get_Thread_CPU_ID(thread_ptr)                               \
                    ((TC_TCB *) (thread_ptr)) -> tc_cpu_id

VOID            *TCCT_Current_Thread(VOID);
VOID            TCCT_Set_Execute_Task(TC_TCB *task);

#else

/* Determine if pointers are accessible with a single instruction.  If so,
   just reference the pointer directly.  Otherwise, call the target dependent
   service */

#if (NU_PTR_ACCESS == 1)

/* Macro definitions for architectures supporting single instruction
   access to pointers */
#define         TCCT_Current_Thread()               TCD_Current_Thread
#define         TCCT_Set_Execute_Task(task)         TCD_Execute_Task =  task

#else

VOID            *TCCT_Current_Thread(VOID);
VOID            TCCT_Set_Execute_Task(TC_TCB *task);

#endif /* NU_PTR_ACCESS == 1 */

#endif  /* CFG_NU_OS_KERN_PLUS_SMP_ENABLE */

#define         TCC_Task_Priority(task)                                         \
                    ((TC_TCB *) (task)) -> tc_priority

/* Define macro, for internal components, to access current HISR pointer */

#define         TCC_CURRENT_HISR_PTR                                            \
                    ((TC_HCB *)TCD_Current_Thread)

/* Define interrupt locking / unlocking macros based on the interrupt locking
   method used */
#if (NU_GLOBAL_INT_LOCKING == NU_TRUE)

/* The following macro sets the interrupt lock-out level to the globally defined
   level (TCD_Interrupt_Level).  This macro is used in the scheduler and within
   the HISR shell routine. */
#define         TCC_INTERRUPTS_GLOBAL_ENABLE()                                  \
                        ESAL_GE_INT_BITS_SET(TCD_Interrupt_Level)

/* The following macro locks out interrupts without saving the state before
   locking-out.  It is used to guard critical sections of code and is always
   paired with the macro TCC_INTERRUPTS_RESTORE defined below. */
#define         TCC_INTERRUPTS_DISABLE()                                        \
                        ESAL_GE_INT_FAST_ALL_DISABLE()

/* The following macro sets the interrupt lock-out level to the globally defined
   level (TCD_Interrupt_Level).  This macro is used at the end of critical
   sections where a context switch may have occurred.  This macro is always
   paired with the macro TCC_INTERRUPTS_ENABLE defined above. */
#define         TCC_INTERRUPTS_RESTORE()                                        \
                        ESAL_GE_INT_BITS_SET(TCD_Interrupt_Level)

#else

/* The following macro is used to enable interrupts globally.  This macro is used
   in the scheduler and within the HISR shell routine. */
#define         TCC_INTERRUPTS_GLOBAL_ENABLE()                                  \
                        ESAL_GE_INT_FAST_ALL_ENABLE()

/* The following macro locks out interrupts and saves the state before
   locking-out.  It is used to guard critical sections of code and is always
   paired with the macro TCC_INTERRUPTS_RESTORE defined below. */
#define         TCC_INTERRUPTS_DISABLE()                                        \
                        ESAL_GE_INT_CONTROL_VARS                                \
                        ESAL_GE_INT_ALL_DISABLE()

/* The following macro sets the interrupt lock-out level to entry level saved
   by TCC_INTERRUPTS_LOCK.  This macro is used at the end of critical
   sections where a context switch may have occurred.  This macro is always
   paired with the macro TCC_INTERRUPTS_LOCK defined above. */
#define         TCC_INTERRUPTS_RESTORE()                                        \
                        ESAL_GE_INT_ALL_RESTORE()

#endif  /* NU_GLOBAL_INT_LOCKING == NU_TRUE */

/* Nucleus PLUS Timing Test 2 macros / external declarations */
#if (NU_TIME_TEST2_ENABLE == NU_TRUE)

/* Include timing test header file */
#include        "test2_defs.h"

#else

/* Define macro to do nothing */
#define         NU_PLUS_TIMING_TEST2()

#endif  /* (NU_TIME_TEST2_ENABLE == NU_TRUE) */

/* Following functions are not applicable for Safety Certified Nucleus Package. */

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

/* Following functions provide interface to the actual service to debug suspend and
   resume a task. */
STATUS          TCC_Debug_Resume_Service(NU_TASK *task_ptr);
STATUS          TCC_Debug_Suspend_Service(NU_TASK *task_ptr);

/* Function to retrieve the group id of a task. */
UNSIGNED        TCS_Task_Group_ID(NU_TASK *task_ptr);

/* Function to change the group id of a task. */
UNSIGNED        TCS_Change_Group_ID(NU_TASK *task_ptr, UNSIGNED group_id);

#endif /*  (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE) */

/* Macro to compute the highest ready priority in the system. */

#if (TC_MAX_PRIORITIES > TC_MAX_PRIORITIES_PER_GROUP)

#define     TCCT_FIND_HIGHEST_READY_PRIORITY(priority_mask_ptr, priority_ptr)                       \
{                                                                                                   \
    /* Check if there is no ready task in the system */                                             \
    if ((priority_mask_ptr) -> tc_primary_group_mask == 0)                                          \
    {                                                                                               \
        /* Re-initialize the highest priority variable  */                                          \
        *(priority_ptr) =  TC_MAX_PRIORITIES;                                                       \
    }                                                                                               \
    else                                                                                            \
    {                                                                                               \
        INT priority;                                                                               \
                                                                                                    \
        /* Find the lowest set bit in the main priority mask */                                     \
        ESAL_GE_MEM_LOW_BIT_GET32((priority_mask_ptr) -> tc_primary_group_mask, &priority);         \
        {                                                                                           \
            INT temp32;                                                                             \
                                                                                                    \
            /* Find the lowest set bit in the sub-priority mask */                                  \
            ESAL_GE_MEM_LOW_BIT_GET32((priority_mask_ptr) -> tc_sub_group_mask[priority], &temp32); \
                                                                                                    \
            /* Calculate priority */                                                                \
            *(priority_ptr) = (priority * TC_MAX_PRIORITIES_PER_GROUP) + temp32;                    \
        }                                                                                           \
    }                                                                                               \
}

#else

#define     TCCT_FIND_HIGHEST_READY_PRIORITY(priority_mask_ptr, priority_ptr)                       \
{                                                                                                   \
    /* Check if there is no ready task in the system */                                             \
    if ((priority_mask_ptr) -> tc_primary_group_mask == 0)                                          \
    {                                                                                               \
        /* Re-initialize the highest priority variable  */                                          \
        *(priority_ptr) =  TC_MAX_PRIORITIES;                                                       \
    }                                                                                               \
    else                                                                                            \
    {                                                                                               \
        /* Find the lowest set bit in the main priority mask. Since the maximum                     \
           priorites are not more than 32, the caluclated value is the highest                      \
           ready priority, as well. */                                                              \
        ESAL_GE_MEM_LOW_BIT_GET32((priority_mask_ptr) -> tc_primary_group_mask, priority_ptr);      \
    }                                                                                               \
}

#endif /* (TC_MAX_PRIORITIES > TC_MAX_PRIORITIES_PER_GROUP) */

#ifdef    CFG_NU_OS_KERN_PLUS_SMP_ENABLE
#include        "core_info_services.h"
#endif

#endif
