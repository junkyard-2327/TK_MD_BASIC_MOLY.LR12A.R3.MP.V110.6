/***********************************************************************
*
*            Copyright 2011 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
************************************************************************

************************************************************************
*
*     DESCRIPTION
*
*         This file contains external data structures and definitions of
*         all PLUS common components.
*
***********************************************************************/

#ifndef PLUS_COMMON_H
#define PLUS_COMMON_H

#ifdef          __cplusplus

/* C declarations in C++     */
extern          "C" {

#endif

/* Check for SMP compatibility issues */
#ifdef CFG_NU_OS_KERN_PLUS_SMP_ENABLE
#ifdef CFG_NU_OS_KERN_PLUS_UNICORE_ENABLE
#error "UNICORE and SMP cannot both be enabled. Please disable one of them."
#else
#ifdef CFG_NU_OS_SVCS_POSIX_ENABLE
#error "POSIX is not compatible with SMP. Please disable one of them."
#endif
#ifdef CFG_NU_OS_KERN_PROCESS_CORE_ENABLE
#error "Process Model is not compatible with SMP. Please disable one of them."
#endif
#endif
#endif

/* Verify that num_task_priorities is not assigned a value 32 or less if SafetyCert configuration is enabled */
#if ((CFG_NU_OS_KERN_PLUS_COMMON_NUM_TASK_PRIORITIES <= 32) && (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE))
#error "Number of task priorities must be greater than 32 if certified Nucleus is used."
#endif

/* Check if timer API emulation support for user-mode processes should be enabled. */
#if (defined(CFG_NU_OS_KERN_PROCESS_CORE_ENABLE) && \
     defined(CFG_NU_OS_KERN_PROCESS_USER_TIMER_EMULATION_TIMER_EXP_MAX) && \
     defined(CFG_NU_OS_KERN_PROCESS_USER_TIMER_EMULATION_TIMER_EXP_STACK_SIZE))
#define NU_USER_PROCESS_TIMER_EMULATION
#endif

/***********************************************************************/
/*                  PLUS Release string macros                         */
/***********************************************************************/

/* Define Nucleus PLUS release string */
#define         PLUS_RELEASE_STRING                 "Nucleus PLUS 2.3"

/* Define major, minor, and patch release numbers for Nucleus PLUS */
#define         NU_PLUS_RELEASE_MAJOR_VERSION       2
#define         NU_PLUS_RELEASE_MINOR_VERSION       3
#define         NU_PLUS_RELEASE_PATCH_VERSION       0

/* Starting with PLUS 2.0, PLUS_VERSION_COMP reflects the actual
   version number.  PLUS_VERSION_COMP is MMNNPP, where MM is the major version,
   NN is the minor version, and PP is the patch version */

/* Define Nucleus PLUS version numbering */
#define         PLUS_1_11                           1
#define         PLUS_1_13                           2
#define         PLUS_1_14                           3
#define         PLUS_1_15                           4
#define         PLUS_2_0                            NU_RELEASE_VERSION_MAKE(2,0,0)
#define         PLUS_2_1                            NU_RELEASE_VERSION_MAKE(2,1,0)
#define         PLUS_2_2                            NU_RELEASE_VERSION_MAKE(2,2,0)
#define         PLUS_2_3                            NU_RELEASE_VERSION_MAKE(2,3,0)

/* Current version */
#define         PLUS_VERSION_COMP                   NU_RELEASE_VERSION_MAKE(            \
                                                        NU_PLUS_RELEASE_MAJOR_VERSION,  \
                                                        NU_PLUS_RELEASE_MINOR_VERSION,  \
                                                        NU_PLUS_RELEASE_PATCH_VERSION)

/**********************************************************************/
/*                 Other Configuration Settings                       */
/**********************************************************************/

/* DEFINE:      NU_PLUS_INLINING
   DEFAULT:     NU_FALSE
   DESCRIPTION: Frequently used Nucleus PLUS code is inlined (using macros) when this
                define is set to NU_TRUE.  Setting this define to NU_FALSE results in no
                inlining (using macros) - actual function declarations are called in
                this case.
   NOTE:        The Nucleus PLUS library, Nucleus Middleware Initialization library,
                and application must be rebuilt after changing
                this define.            */
#ifndef         NU_PLUS_INLINING
#define         NU_PLUS_INLINING                    CFG_NU_OS_KERN_PLUS_COMMON_INLINING
#endif

/* DEFINE:      NU_STACK_CHECKING
   DEFAULT:     NU_FALSE
   DESCRIPTION: Stack checking code is included for all Nucleus PLUS API calls when this
                define is set to NU_TRUE.  Setting this define to NU_FALSE will turn-off
                stack checking code.
   NOTE:        If NU_STACK_FILL is enabled below (NU_TRUE), an additional check for
                stack overflow will occur in the scheduler using the stack fill pattern.
   NOTE:        The Nucleus PLUS library and application must be rebuilt after changing
                this define.            */
#ifndef         NU_STACK_CHECKING
#define         NU_STACK_CHECKING                   CFG_NU_OS_KERN_PLUS_COMMON_STACK_CHECKING
#endif

/* DEFINE:      NU_STACK_FILL
   DEFAULT:     NU_FALSE
   DESCRIPTION: Stack fill code is included for all Nucleus PLUS API calls when this
                define is set to NU_TRUE.  Setting this define to NU_FALSE will turn-off
                stack fill code.
   NOTE:        The fill pattern used is defined by NU_STACK_FILL_PATTERN found within
                this file
   NOTE:        The Nucleus PLUS library and application must be rebuilt after changing
                this define.            */
#ifndef         NU_STACK_FILL
#define         NU_STACK_FILL                       CFG_NU_OS_KERN_PLUS_COMMON_STACK_FILL
#endif

/* Define the stack fill pattern used when NU_STACK_FILL (defined above) is set to NU_TRUE */
#ifndef         NU_STACK_FILL_PATTERN
#define         NU_STACK_FILL_PATTERN               0xA5
#endif

/* DEFINE:      NU_GLOBAL_INT_LOCKING
   DEFAULT:     NU_FALSE
   DESCRIPTION: Global interrupt locking is allowed (interrupt lock-out controlled at
                global level instead of thread / task level) when this define is set
                to NU_TRUE.  Interrupts are controlled at thread / task level if this
                define is set to NU_FALSE (interrupts not controlled at global level)
   NOTE:        Nucleus PLUS library and application must be rebuilt after changing
                this define.            */
#ifndef         NU_GLOBAL_INT_LOCKING
#define         NU_GLOBAL_INT_LOCKING               CFG_NU_OS_KERN_PLUS_COMMON_GLOBAL_INT_LOCKING
#endif

/* DEFINE:      NU_MIN_RAM_ENABLED
   DEFAULT:     NU_FALSE
   DESCRIPTION: This define is used to minimize the use of RAM by Nucleus PLUS.  The
                trade-off for minimizing RAM usage is a decrease in speed / performance.
                Setting this define to NU_TRUE will reduce RAM usage.
   NOTE:        The Nucleus PLUS library and application must be rebuilt after changing
                this define.            */
#ifndef         NU_MIN_RAM_ENABLED
#define         NU_MIN_RAM_ENABLED                  CFG_NU_OS_KERN_PLUS_COMMON_MIN_RAM
#endif

/* DEFINE:      NU_POSIX_INCLUDED
   DEFAULT:     NU_FALSE
   DESCRIPTION: POSIX specific code changes are compiled into Nucleus PLUS when this
                define is set to NU_TRUE.  These POSIX related items will not be included
                when set to NU_FALSE.
   NOTE:        The Nucleus Posix software is required to utilize this option.
                The Nucleus PLUS library and application must be rebuilt after changing
                this define.            */
#ifndef         NU_POSIX_INCLUDED
#define         NU_POSIX_INCLUDED                   NU_FALSE
#endif

#ifndef         NU_TICK_SUPPRESSION
#define         NU_TICK_SUPPRESSION                 CFG_NU_OS_KERN_PLUS_COMMON_TICK_SUPPRESSION
#endif

/* Define the number of Nucleus PLUS ticks that will occur every second.
   By default, the PLUS timer generates an interrupt every 10ms causing the
   PLUS System Clock to tick 100 times in one second */
#ifndef         NU_PLUS_TICKS_PER_SEC

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

#define         NU_PLUS_TICKS_PER_SEC               CFG_NU_OS_KERN_PLUS_COMMON_TICKS_PER_SEC

#else

extern const UINT32 NU_PLUS_TICKS_PER_SEC;

#endif

#endif

/* Define the minimum stack size accepted when creating a task or HISR, this size
   is application dependent and not a kernel based setting */
#ifndef         NU_MIN_STACK_SIZE
#define         NU_MIN_STACK_SIZE                   CFG_NU_OS_KERN_PLUS_COMMON_MIN_STACK_SIZE
#endif

/* Define the minimum stack size possible, since the application based value NU_MIN_STACK_SIZE
   isn't tied to the minimum requirements of the system, this value is used to verify that at
   a minimum the the stack size will not cause corruption before entering the task */
#define         NU_MIN_STACK_REQS                   ESAL_GE_STK_MIN_REQS

/* Define size of Nucleus Timer HISR stack and priority of Nucleus Timer HISR (0-2) */
#ifndef         NU_TIMER_HISR_STACK_SIZE

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

#define         NU_TIMER_HISR_STACK_SIZE            CFG_NU_OS_KERN_PLUS_COMMON_TIMER_HISR_STACK_SIZE

#else

extern const UINT32  NU_TIMER_HISR_STACK_SIZE;

#endif

#endif

#ifndef         NU_TIMER_HISR_PRIORITY
#define         NU_TIMER_HISR_PRIORITY              2
#endif

/**********************************************************************/
/*                    Service Parameters                              */
/**********************************************************************/

/* Define TASK suspension constants.  */
#define         NU_EVENT_SUSPEND                    7
#define         NU_SCHEDULED                        10
#define         NU_FINISHED                         11
#define         NU_MAILBOX_SUSPEND                  3
#define         NU_MEMORY_SUSPEND                   9
#define         NU_PARTITION_SUSPEND                8
#define         NU_PIPE_SUSPEND                     5
#define         NU_PURE_SUSPEND                     1
#define         NU_QUEUE_SUSPEND                    4
#define         NU_READY                            0
#define         NU_SEMAPHORE_SUSPEND                6
#define         NU_SLEEP_SUSPEND                    2
#define         NU_TERMINATED                       12
#define         NU_DEBUG_SUSPEND                    13
#define         NU_ERROR_SUSPEND                    14


/**********************************************************************/
/*                 ERROR MANAGEMENT Definitions                       */
/**********************************************************************/

/* DEFINE:      NU_ERROR_CHECKING
   DEFAULT:     NU_TRUE
   DESCRIPTION: Error checking code is included for all applicable Nucleus PLUS API calls
                when this define is set to NU_TRUE.  Setting this define to NU_FALSE will
                cause Nucleus PLUS API calls to skip / bypass error checking code.
   NOTE:        The Nucleus PLUS library and application must be rebuilt after changing
                this define.            */
#ifndef         NU_ERROR_CHECKING
#define         NU_ERROR_CHECKING                   CFG_NU_OS_KERN_PLUS_COMMON_ERROR_CHECKING
#endif

/* DEFINE:      NU_ASSERT_ENABLE
   DEFAULT:     NU_FALSE
   DESCRIPTION: Setting NU_ASSERT_ENABLE to NU_TRUE includes additional debugging services
                (NU_ASSERT / NU_CHECK).  With NU_ASSERT_ENABLE set to NU_FALSE, these services
                are not compiled as part of the Nucleus PLUS library.
   NOTE:        The Nucleus PLUS library and application must be rebuilt after changing
                this define.            */
#ifndef         NU_ASSERT_ENABLE
#define         NU_ASSERT_ENABLE                    CFG_NU_OS_KERN_PLUS_COMMON_ASSERT
#endif

/* DEFINE:      NU_ERROR_STRING
   DEFAULT:     NU_FALSE
   DESCRIPTION: Setting NU_ERROR_STRING to NU_TRUE includes an additional set of
                error strings used within ERC_System_Error.  With NU_ERROR_STRING set
                to NU_FALSE, these strings and corresponding logic are not compiled
                as part of the Nucleus PLUS library.
   NOTE:        The Nucleus PLUS library and application must be rebuilt after changing
                this define.            */
#ifndef         NU_ERROR_STRING
#define         NU_ERROR_STRING                     CFG_NU_OS_KERN_PLUS_COMMON_ERROR_STRING
#endif

#if (defined(CFG_NU_OS_KERN_PROCESS_CORE_ENABLE) && (CFG_NU_OS_KERN_PROCESS_CORE_STACK_SWITCHING == NU_TRUE))

#define NU_STACK_SWITCHING

#if (!defined(ESAL_AR_STK_SYSTEM_SIZE) && !defined(ESAL_AR_STK_NUM_PARAMS))

#error This architecture does not support stack switching

#endif /* (!defined(ESAL_AR_STK_SYSTEM_SIZE) && !defined(ESAL_AR_STK_NUM_PARAMS)) */

#endif /* (defined(CFG_NU_OS_KERN_PROCESS_CORE_ENABLE) && ((CFG_NU_OS_KERN_PROCESS_CORE_STACK_SWITCHING == NU_TRUE) || (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE))) */

#if (NU_ERROR_CHECKING == NU_TRUE)

/* Define macro for NU_ERROR_CHECK with error checking enabled.
   This macro is used to test any expression as long as the status
   variable is set to NU_SUCCESS */
#define NU_ERROR_CHECK(expression, status_var, status_err)               \
                       if ((status_var == NU_SUCCESS) && (expression))   \
                       {                                                 \
                           status_var = status_err;                      \
                       }

/* Define macro for NU_PARAM_CHECK with error checking enabled.
   This macro is simple in nature */
#define NU_PARAM_CHECK(expression, name, value)                          \
                       if (expression)                                   \
                       {                                                 \
                           name = value;                                 \
                       }

#else

/* Define macro for NU_ERROR_CHECK with error checking disabled */
#define NU_ERROR_CHECK(expression, status_var, status_err)

/* Define macro for NU_PARAM_CHECK with error checking disabled */
#define NU_PARAM_CHECK(expression, name, value)

#endif  /* NU_ERROR_CHECKING == NU_TRUE */


/* Ensure that NU_ASSERT and NU_CHECK are not currently defined */

#ifdef      NU_ASSERT
#undef      NU_ASSERT
#endif

#ifdef      NU_CHECK
#undef      NU_CHECK
#endif

#if         (NU_ASSERT_ENABLE == NU_TRUE)

/* External function declarations */
void        ERC_Assert(CHAR *test, CHAR *name, UNSIGNED line);

/* Define macro for ASSERT */
#define     NU_ASSERT(test)                                             \
                        if ( !(test) )                                  \
                        {                                               \
                            ERC_Assert( #test, __FILE__, __LINE__ );    \
                        }                                               \
                        ((VOID) 0)

/* Define macro for ASSERT2 */
#define     NU_ASSERT2(test)                                            \
                        if ( !(test) )                                  \
                        {                                               \
                            ERC_Assert( #test, __FILE__, __LINE__ );    \
                        }                                               \
                        ((VOID) 0)

#else

/* Define macros for ASSERT and ASSERT2 as VOID */
#define     NU_ASSERT(test)
#define     NU_ASSERT2(test)

#endif  /* NU_ASSERT_ENABLE == NU_TRUE */

#if         (NU_ERROR_CHECKING == NU_TRUE)

/* Define macro for NU_CHECK with error checking enabled */
#define     NU_CHECK(test, statement)                                   \
                        NU_ASSERT2( test );                             \
                        if ( !(test) )                                  \
                        {                                               \
                            statement;                                  \
                        }                                               \
                        ((void) 0)

#else

/* Define macro for NU_CHECK with error checking disabled */
#define     NU_CHECK(test, statement)       NU_ASSERT2( test )

#endif  /* NU_ERROR_CHECKING == NU_TRUE */


/* Define the Error Handling Control Block data type.  */
typedef struct ER_ECB_STRUCT
{
    VOID             *thread;                   /* Pointer to Task/HISR control block */
    VOID             *read_write_address;       /* Exception occurred when read/write this address */
    VOID             *return_address;           /* Exception occurred when executing instruction at this address */
    INT               error_type;               /* Type of error that occurred (see error_management.h) */
    INT               arch_error_type;          /* Architecture specific type of error that occurred */
    ESAL_AR_STK_MIN   stack_frame;              /* Minimum task stack frame when error occurred */
} ER_ECB;

/**********************************************************************/
/*       Other GENERIC ESAL macros/defines needed by PLUS             */
/**********************************************************************/
/* Define all externally accessible, interrupt related function prototypes */
INT                 ESAL_GE_INT_Global_Set(INT new_value);


/**********************************************************************************/
/*          Nucleus Toolset specific macros used by the Kernel                    */
/**********************************************************************************/

#define             NU_DISABLE_INTERRUPTS                   ESAL_GE_INT_DISABLE_BITS
#define             NU_ENABLE_INTERRUPTS                    ESAL_GE_INT_ENABLE_BITS

/* Ensure HUGE / FAR pointer type specified - required for
   some 16-bit architectures for pointer crossing page boundaries */
#ifndef             HUGE
#define             HUGE                                    ESAL_TS_HUGE_PTR_TYPE
#endif

#ifndef             FAR
#define             FAR                                     ESAL_TS_FAR_PTR_TYPE
#endif


/* Define macro to read OS timer count */
#define             NU_HW_TIMER_COUNT_READ()                ESAL_GE_TMR_OS_COUNT_READ()

#ifdef CFG_NU_OS_SVCS_PWR_CORE_ENABLE

/* Provide data structure for targets that vary during OP changes */
extern              UINT32                                  PMS_Single_Tick;
#define             NU_HW_TIMER_TICKS_PER_SEC              (PMS_Single_Tick * NU_PLUS_TICKS_PER_SEC)

#else

/* Define constant for number of hardware ticks per second */
#define             NU_HW_TIMER_TICKS_PER_SEC               (ESAL_GE_TMR_OS_CLOCK_RATE /    \
                                                             ESAL_GE_TMR_OS_CLOCK_PRESCALE)

#endif

/* Define the number of hardware timer ticks that occur for each Nucleus PLUS
   software tick */
#define             NU_HW_TIMER_TICKS_PER_SW_TICK           (NU_HW_TIMER_TICKS_PER_SEC /    \
                                                             NU_PLUS_TICKS_PER_SEC)

/**********************************************************************/
/*                   Configuration Validation                         */
/**********************************************************************/

#if (CFG_NU_OS_KERN_PLUS_COMMON_TIMER_HISR_STACK_SIZE < NU_MIN_STACK_SIZE ) || \
    (CFG_NU_OS_KERN_PLUS_COMMON_TIMER_HISR_STACK_SIZE > 67108864)
#error Value of timer_hisr_stack_size should be between min_stack_size configured in \
       PLUS core component .metadata file and 64MB.
#endif

/**********************************************************************/
/*                   COMMON NODE Definitions                          */
/**********************************************************************/
/* Define a common node data structure that can be included inside of
   other system data structures.  */

typedef struct  CS_NODE_STRUCT
{
    struct CS_NODE_STRUCT  *cs_previous;
    struct CS_NODE_STRUCT  *cs_next;
    UINT16                  cs_priority;

}  CS_NODE;


#if (NU_PLUS_INLINING == NU_FALSE)

/* Use declared functions */
VOID            NU_Place_On_List(CS_NODE **head, CS_NODE *new_node);
VOID            NU_Remove_From_List(CS_NODE **head, CS_NODE *node);

#else

/* Inlining enabled - use macros */
#define         NU_Place_On_List(head, new_node);                            \
                if (*((CS_NODE **) (head)))                                  \
                {                                                            \
                    ((CS_NODE *) (new_node)) -> cs_previous=                 \
                            (*((CS_NODE **) (head))) -> cs_previous;         \
                    (((CS_NODE *) (new_node)) -> cs_previous) -> cs_next =   \
                            (CS_NODE *) (new_node);                          \
                    ((CS_NODE *) (new_node)) -> cs_next =                    \
                            (*((CS_NODE **) (head)));                        \
                    (((CS_NODE *) (new_node)) -> cs_next) -> cs_previous =   \
                            ((CS_NODE *) (new_node));                        \
                }                                                            \
                else                                                         \
                {                                                            \
                    (*((CS_NODE **) (head))) = ((CS_NODE *) (new_node));     \
                    ((CS_NODE *) (new_node)) -> cs_previous =                \
                            ((CS_NODE *) (new_node));                        \
                    ((CS_NODE *) (new_node)) -> cs_next =                    \
                            ((CS_NODE *) (new_node));                        \
                }

#define         NU_Remove_From_List(head, node);                             \
                if (((CS_NODE *) (node)) -> cs_previous ==                   \
                                            ((CS_NODE *) (node)))            \
                {                                                            \
                    (*((CS_NODE **) (head))) =  NU_NULL;                     \
                }                                                            \
                else                                                         \
                {                                                            \
                    (((CS_NODE *) (node)) -> cs_previous) -> cs_next =       \
                                         ((CS_NODE *) (node)) -> cs_next;    \
                    (((CS_NODE *) (node)) -> cs_next) -> cs_previous =       \
                                     ((CS_NODE *) (node)) -> cs_previous;    \
                    if (((CS_NODE *) (node)) == *((CS_NODE **) (head)))      \
                        *((CS_NODE **) (head)) =                             \
                            ((CS_NODE *) (node)) -> cs_next;                 \
                }

#endif  /* NU_PLUS_INLINING == NU_FALSE */

/* This function is used regarless of inlining */
VOID            NU_Priority_Place_On_List(CS_NODE **head, CS_NODE *new_node);

/**********************************************************************/
/*                 TIMER MANAGEMENT Definitions                       */
/**********************************************************************/

/* Define the Timer Control Block data type.  */
typedef struct TM_TCB_STRUCT
{
    INT                 tm_timer_type;         /* Application/Task      */
    UNSIGNED            tm_remaining_time;     /* Remaining time        */
    VOID               *tm_information;        /* Information pointer   */
    struct TM_TCB_STRUCT
                       *tm_next_timer,         /* Next timer in list    */
                       *tm_previous_timer;     /* Previous timer in list*/
} TM_TCB;


/* Define Application's Timer Control Block data type.  */

typedef struct TM_APP_TCB_STRUCT
{
#ifdef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE

    CS_NODE             tm_created;            /* Node for linking to   */
                                               /*   created timer list  */
#endif /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */
#ifdef NU_USER_PROCESS_TIMER_EMULATION
    VOID               *tm_process;            /* Owning process */
#endif
    UNSIGNED            tm_id;                 /* Internal TCB ID       */
    CHAR                tm_name[NU_MAX_NAME];  /* Timer name            */
    VOID  (*tm_expiration_routine)(UNSIGNED);  /* Expiration function   */
    UNSIGNED            tm_expiration_id;      /* Expiration ID         */
    BOOLEAN             tm_enabled;            /* Timer enabled flag    */
    BOOLEAN             tm_paused_status;      /* Pause status          */
#if     PAD_2
    DATA_ELEMENT        tm_padding[PAD_2];
#endif

    UNSIGNED            tm_expirations;        /* Number of expirations */
    UNSIGNED            tm_initial_time;       /* Initial time          */
    UNSIGNED            tm_reschedule_time;    /* Reschedule time       */
    TM_TCB              tm_actual_timer;       /* Actual timer internals*/
    UNSIGNED            tm_paused_time;        /* Pause remaining time  */
    VOID               *tm_handle;
} TM_APP_TCB;

/* Define structure that contains information about timer component of each CPU */

typedef struct TM_CPU_CB_STRUCT
{

    VOID        * volatile tm_time_slice_task;  /* Task to time-slice. */

} TM_CPU_CB;


#ifdef CFG_NU_OS_KERN_PROCESS_CORE_ENABLE

/* Process application timer message */
typedef struct TM_APP_MSG_STRUCT
{
    VOID                (*tm_expiration_routine)(UNSIGNED); /* Timer expiration routine */
    UNSIGNED            tm_expiration_id;                   /* Timer expiration ID */
} TM_APP_MSG;

/* Process application timer queue message size (in queue size units). */
#define NU_TIMER_MSG_QUEUE_SIZE     (sizeof(TM_APP_MSG)/sizeof(UNSIGNED))

#endif

/* Target dependent functions.  */
VOID            TMCT_Timer_Interrupt(INT vector);

/**********************************************************************/
/*                  TASK CONTROL Definitions                          */
/**********************************************************************/

/* Define the Task Control Block data type.  */
typedef struct TC_TCB_STRUCT
{
    /* Standard thread information first.  This information is used by
       the target dependent portion of this component.  Changes made
       to this area of the structure can have undesirable side effects.  */
#ifdef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE

    CS_NODE             tc_created;            /* Node for linking to    */
                                               /*   created task list    */
#endif /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */
    UNSIGNED            tc_id;                 /* Internal TCB ID        */
    CHAR                tc_name[NU_MAX_NAME];  /* Task name              */
    DATA_ELEMENT        tc_status;             /* Task status            */
    BOOLEAN             tc_delayed_suspend;    /* Delayed task suspension*/
    UINT16              tc_priority;           /* Task priority          */
    BOOLEAN             tc_preemption;         /* Task preemption enable */
    UNSIGNED            tc_scheduled;          /* Task scheduled count   */
    UNSIGNED            tc_cur_time_slice;     /* Current time slice     */
    VOID               *tc_stack_start;        /* Stack starting address */
    VOID               *tc_stack_end;          /* Stack ending address   */
    VOID               *tc_stack_pointer;      /* Task stack pointer     */
    UNSIGNED            tc_stack_size;         /* Task stack's size      */
    UNSIGNED            tc_stack_minimum;      /* Minimum stack size     */

#ifdef  CFG_NU_OS_KERN_PROCESS_FRAMEWORK_ENABLE
    VOID               *tc_process;            /* Pointer to process CB */
#endif

#ifdef CFG_NU_OS_KERN_PLUS_SMP_ENABLE
    UNSIGNED            tc_hisr_activation_count; /* Activation counter  */
    VOID                (*tc_hisr_entry)(VOID);   /* HISR entry function */
#if defined NU_HISR_LOCK_SPLIT
    ESAL_GE_LOCK        tc_hisr_lock;          /* Internal HISR lock     */
#endif /* defined NU_HISR_LOCK_SPLIT */
    UINT32              tc_cpu_id;             /* Task CPU ID            */
    ESAL_CPU_MASK       tc_cpu_affinity;       /* Task CPU affinity      */
    struct TC_SCHED_DOMAIN_STRUCT *
                        tc_sched_domain;       /* Task sched domain      */
    DATA_ELEMENT        tc_sched_request;      /* Requested schedule change*/
#endif

    VOID               *tc_saved_stack_ptr;    /* Previous stack pointer */
    UNSIGNED            tc_time_slice;         /* Task time slice value  */

    /* Information after this point is not used in the target dependent
       portion of this component.  Hence, changes in the following section
       should not impact assembly language routines.  */
    struct TC_TCB_STRUCT
                       *tc_ready_previous,     /* Previously ready TCB   */
                       *tc_ready_next;         /* next and previous ptrs */

    /* Process related structure members specific to tasks only */
    CS_NODE             tc_proc_node;          /* Node element for process tracking */
    VOID               *tc_return_addr;        /* Return address of service call */
    VOID               *tc_saved_return_addr;  /* Previous return address of service call */

    /* Task control information follows.  */

    struct TC_TCB_STRUCT
                      **tc_priority_head;      /* Pointer to list head   */

#ifdef CFG_NU_OS_KERN_PLUS_SMP_ENABLE
    UINT32 *            tc_primary_priority_ptr;/* Pointer to primary group */
#endif
    UINT32              tc_primary_priority;    /* Priority group mask bit  */

#if ((CFG_NU_OS_KERN_PLUS_COMMON_NUM_TASK_PRIORITIES > 32) || \
     (defined(CFG_NU_OS_KERN_PLUS_SMP_ENABLE) && \
     (CFG_NU_OS_KERN_PLUS_COMMON_NUM_TASK_PRIORITIES + CFG_NU_OS_KERN_PLUS_COMMON_NUM_HISR_PRIORITIES) > 32))

    UINT32 *            tc_sub_priority_ptr;    /* Pointer to sub-group  */
    UINT32              tc_sub_priority;        /* Mask of sub-group bit */

#endif

    DATA_ELEMENT        tc_saved_status;       /* Previous task status   */
    BOOLEAN             tc_signal_active;      /* Signal active flag     */

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

    BOOLEAN             tc_auto_clean;         /* Terminate/Delete at    */
                                               /* task completion        */
    DATA_ELEMENT        tc_debug_suspend;      /* Debug suspension       */

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE) */

                                               /* Task entry function    */
    VOID                (*tc_entry)(UNSIGNED, VOID *);
    UNSIGNED            tc_argc;               /* Optional task argument */
    VOID               *tc_argv;               /* Optional task argument */
    VOID                (*tc_cleanup) (VOID *);/* Clean-up routine       */
    VOID               *tc_cleanup_info;       /* Clean-up information   */
    VOID               *tc_handle;

    /* Task timer information.  */
    INT                 tc_timer_active;       /* Active timer flag      */
    TM_TCB              tc_timer_control;      /* Timer control block    */

    /* Task signal control information.  */
    UNSIGNED            tc_signals;            /* Current signals        */
    UNSIGNED            tc_enabled_signals;    /* Enabled signals        */

    /* tc_saved_status and tc_signal_active are now defined above in an
       attempt to keep DATA_ELEMENT types together.  */

    /* Signal handling routine.  */
    VOID                (*tc_signal_handler) (UNSIGNED);

    /* Error handling related structure members. */
    STATUS              (*tc_error_handler)(INT);  /* Error handler routine */
    VOID                *tc_error;                 /* Pointer to error information */

    /* Reserved words for the system and a single reserved word for the
       application.  */
    UNSIGNED            tc_system_reserved_1;  /* System reserved word   */
    UNSIGNED            tc_system_reserved_2;  /* System reserved word   */
    UNSIGNED            tc_system_reserved_3;  /* System reserved word   */
    UNSIGNED            tc_app_reserved_1;     /* Application reserved   */

    CS_NODE             *tc_semaphore_list;    /* Pointer to list of PI  */
                                               /* semaphores this task   */
                                               /* owns.                  */
    UINT16              tc_base_priority;      /* Base priority of task  */
                                               /* for PI semaphores      */
    DATA_ELEMENT        tc_semaphore_count;    /* Number of priority     */
                                               /* modifying resources    */
                                               /* that the task has      */
                                               /* acquired               */
    struct SM_SCB_STRUCT
                       *tc_semaphore_suspend;  /* Pointer to PI semaphore*/
                                               /* task is suspended on.  */

#ifdef NU_STACK_SWITCHING
    VOID               *tc_user_sp;            /* Saved user stack       */
    UINT32              tc_system_stack[ESAL_AR_STK_SYSTEM_SIZE]; /* Actual system stack    */
    VOID               *tc_current_system_sp;  /* Pointer to the system stack during signals */
#endif

#ifdef CFG_NU_OS_KERN_PLUS_SMP_ENABLE
    VOID *              tc_debug_data;         /* Debug data */
    /* Added a Spinlock to TCB so that services component can have their own lock */
    ESAL_GE_LOCK        *tc_current_protect;
    BOOLEAN             tc_is_yielding;
    ESAL_CPU_MASK       tc_tailing_cpus;
#endif
    CS_NODE             tc_group;              /* Node for linking task to
                                                  affinity group */

} TC_TCB;

#ifndef CFG_NU_OS_KERN_PLUS_SMP_ENABLE

/* Define the High-Level Interrupt Service Routine Control Block data type.  */

typedef struct TC_HCB_STRUCT
{
    /* Standard thread information first.  This information is used by
       the target dependent portion of this component.  Changes made
       to this area of the structure can have undesirable side effects.  */
#ifdef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE

    CS_NODE             tc_created;            /* Node for linking to    */
                                               /*   created task list    */
#endif /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */
    UNSIGNED            tc_id;                 /* Internal TCB ID        */
    CHAR                tc_name[NU_MAX_NAME];  /* HISR name              */
    BOOLEAN             tc_reset;              /* HISR was reset         */
    DATA_ELEMENT        tc_not_used_1;         /* Not used field         */
    UINT16              tc_priority;           /* HISR priority          */
    DATA_ELEMENT        tc_not_used_2;         /* Not used field         */
    UNSIGNED            tc_scheduled;          /* HISR scheduled count   */
    UNSIGNED            tc_cur_time_slice;     /* Not used in HISR       */
    VOID               *tc_stack_start;        /* Stack starting address */
    VOID               *tc_stack_end;          /* Stack ending address   */
    VOID               *tc_stack_pointer;      /* HISR stack pointer     */
    UNSIGNED            tc_stack_size;         /* HISR stack's size      */
    UNSIGNED            tc_stack_minimum;      /* Minimum stack size     */

#ifdef  CFG_NU_OS_KERN_PROCESS_FRAMEWORK_ENABLE
    VOID               *tc_process;            /* Pointer to process CB */
#endif

    struct TC_HCB_STRUCT
                       *tc_active_next;        /* Next activated HISR    */
    UNSIGNED            tc_activation_count;   /* Activation counter     */
    VOID                (*tc_entry)(VOID);     /* HISR entry function    */
    VOID               *tc_hisr_queue;         /* HISR Queue control
                                                  block pointer          */

    /* Error handling related structure members. */
    VOID               *tc_error;              /* Pointer to error information */

    /* Information after this point is not used in the target dependent
       portion of this component.  Hence, changes in the following section
       should not impact assembly language routines.  */


    /* Reserved words for the system and a single reserved word for the
       application.  */
    UNSIGNED            tc_system_reserved_1;  /* System reserved word   */
    UNSIGNED            tc_system_reserved_2;  /* System reserved word   */
    UNSIGNED            tc_system_reserved_3;  /* System reserved word   */
    UNSIGNED            tc_app_reserved_1;     /* Application reserved   */

} TC_HCB;

#endif /* CFG_NU_OS_KERN_PLUS_SMP_ENABLE */

/* Define externally referenced variables.   */
extern VOID * volatile      TCD_Current_Thread;
extern TC_TCB * volatile    TCD_Execute_Task;
#ifndef CFG_NU_OS_KERN_PLUS_SMP_ENABLE
extern TC_HCB * volatile    TCD_Execute_HISR;
#endif


/**********************************************************************/
/*                  DYNAMIC MEMORY Definitions                        */
/**********************************************************************/

/* Define the Dynamic Pool Control Block data type.  */

typedef struct DM_PCB_STRUCT
{
#ifdef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE

    CS_NODE             dm_created;            /* Node for linking to    */
                                               /* created dynamic pools  */
#endif /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */
    UNSIGNED            dm_id;                 /* Internal PCB ID        */
    CHAR                dm_name[NU_MAX_NAME];  /* Dynamic Pool name      */
    VOID               *dm_start_address;      /* Starting pool address  */
    UNSIGNED            dm_pool_size;          /* Size of pool           */
    UNSIGNED            dm_min_allocation;     /* Minimum allocate size  */
    UNSIGNED            dm_available;          /* Total available bytes  */
    struct DM_HEADER_STRUCT
                       *dm_memory_list;        /* Memory list            */
    BOOLEAN             dm_fifo_suspend;       /* Suspension type flag   */
#if     PAD_1
    DATA_ELEMENT        dm_padding[PAD_1];
#endif
    UNSIGNED            dm_tasks_waiting;      /* Number of waiting tasks*/
    struct DM_SUSPEND_STRUCT
                       *dm_suspension_list;    /* Suspension list        */
    VOID               *dm_handle;
} DM_PCB;

/**********************************************************************/
/*                   EVENT GROUP Definitions                          */
/**********************************************************************/

/* Define the Event Group Control Block data type.  */
typedef struct EV_GCB_STRUCT
{
#ifdef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE

    CS_NODE             ev_created;            /* Node for linking to    */
                                               /*   created Events list  */
#endif /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */
    UNSIGNED            ev_id;                 /* Internal EV ID         */
    CHAR                ev_name[NU_MAX_NAME];  /* Event group name       */
    UNSIGNED            ev_current_events;     /* Current event flags    */
    UNSIGNED            ev_tasks_waiting;      /* Number of waiting tasks*/
    struct EV_SUSPEND_STRUCT
                       *ev_suspension_list;    /* Suspension list        */
    VOID               *ev_handle;
} EV_GCB;


/**********************************************************************/
/*                      QUEUE Definitions                             */
/**********************************************************************/

/* Define the Queue Control Block data type.  */
typedef struct QU_QCB_STRUCT
{
#ifdef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE

    CS_NODE             qu_created;            /* Node for linking to    */
                                               /*   created queue list   */
#endif /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */
    UNSIGNED            qu_id;                 /* Internal QCB ID        */
    CHAR                qu_name[NU_MAX_NAME];  /* Queue name             */
    BOOLEAN             qu_fixed_size;         /* Fixed-size messages?   */
    BOOLEAN             qu_fifo_suspend;       /* Suspension type flag   */
#if     PAD_2
    DATA_ELEMENT        qu_padding[PAD_2];
#endif
    UNSIGNED            qu_queue_size;         /* Total size of queue    */
    UNSIGNED            qu_messages;           /* Messages in queue      */
    UNSIGNED            qu_message_size;       /* Size of each message   */
    UNSIGNED            qu_available;          /* Available words        */
    UNSIGNED_PTR        qu_start;              /* Start of queue area    */
    UNSIGNED_PTR        qu_end;                /* End of queue area + 1  */
    UNSIGNED_PTR        qu_read;               /* Read pointer           */
    UNSIGNED_PTR        qu_write;              /* Write pointer          */
    UNSIGNED            qu_tasks_waiting;      /* Number of waiting tasks*/
    struct MS_SUSPEND_STRUCT
                       *qu_urgent_list;        /* Urgent message suspend */
    struct MS_SUSPEND_STRUCT
                       *qu_suspension_list;    /* Suspension list        */
    VOID               *qu_handle;
} QU_QCB;

/**********************************************************************/
/*                  SEMAPHORE Definitions                             */
/**********************************************************************/

/* Define the Semaphore Control Block data type.  */
typedef struct SM_SCB_STRUCT
{
#ifdef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE

    CS_NODE             sm_created;            /* Node for linking to    */
                                               /* created semaphore list */
#endif /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */
    UNSIGNED            sm_id;                 /* Internal SCB ID        */
    CHAR                sm_name[NU_MAX_NAME];  /* Semaphore name         */
    UNSIGNED            sm_semaphore_count;    /* Counting semaphore     */
    OPTION              sm_suspend_type;       /* Suspension type        */
    BOOLEAN             sm_owner_killed;       /* Flag if owner killed   */
#if     PAD_2
    DATA_ELEMENT        sm_padding[PAD_2];
#endif
    struct TC_TCB_STRUCT
                       *sm_semaphore_owner;    /* Task that owns the     */
                                               /* semaphore              */
    UNSIGNED            sm_tasks_waiting;      /* Number of waiting      */
                                               /* tasks                  */
    CS_NODE             sm_semaphore_list;     /* Node for linking owned */
                                               /* semaphores             */
    struct SM_SUSPEND_STRUCT
                       *sm_suspension_list;    /* Suspension list        */
    VOID               *sm_handle;
} SM_SCB;

/**********************************************************************/
/*                       PIPE Definitions                             */
/**********************************************************************/

/* Define the Pipe Control Block data type.  */
typedef struct PI_PCB_STRUCT
{
#ifdef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE

    CS_NODE             pi_created;            /* Node for linking to    */
                                               /*   created pipe list    */
#endif /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */
    UNSIGNED            pi_id;                 /* Internal PCB ID        */
    CHAR                pi_name[NU_MAX_NAME];  /* Pipe name              */
    BOOLEAN             pi_fixed_size;         /* Fixed-size messages?   */
    BOOLEAN             pi_fifo_suspend;       /* Suspension type flag   */
#if     PAD_2
    DATA_ELEMENT        pi_padding[PAD_2];
#endif
    UNSIGNED            pi_pipe_size;          /* Total size of pipe     */
    UNSIGNED            pi_messages;           /* Messages in pipe       */
    UNSIGNED            pi_message_size;       /* Size of each message   */
    UNSIGNED            pi_available;          /* Available bytes        */
    BYTE_PTR            pi_start;              /* Start of pipe area     */
    BYTE_PTR            pi_end;                /* End of pipe area + 1   */
    BYTE_PTR            pi_read;               /* Read pointer           */
    BYTE_PTR            pi_write;              /* Write pointer          */
    UNSIGNED            pi_tasks_waiting;      /* Number of waiting tasks*/
    struct PI_SUSPEND_STRUCT
                       *pi_urgent_list;        /* Urgent message suspend */
    struct PI_SUSPEND_STRUCT
                       *pi_suspension_list;    /* Suspension list        */
    VOID               *pi_handle;
} PI_PCB;

/**********************************************************************/
/*                 PARTITION MEMORY Definitions                       */
/**********************************************************************/

/* Define the Partition Pool Control Block data type.  */
typedef struct PM_PCB_STRUCT
{
    CS_NODE             pm_created;            /* Node for linking to    */
                                               /* created partition list */
    UNSIGNED            pm_id;                 /* Internal PCB ID        */
    CHAR                pm_name[NU_MAX_NAME];  /* Partition Pool name    */
    VOID               *pm_start_address;      /* Starting pool address  */
    UNSIGNED            pm_pool_size;          /* Size of pool           */
    UNSIGNED            pm_partition_size;     /* Size of each partition */
    UNSIGNED            pm_available;          /* Available partitions   */
    UNSIGNED            pm_allocated;          /* Allocated partitions   */
    struct PM_HEADER_STRUCT
                       *pm_available_list;     /* Available list         */
    BOOLEAN             pm_fifo_suspend;       /* Suspension type flag   */
#if     PAD_1
    DATA_ELEMENT        pm_padding[PAD_1];
#endif
    UNSIGNED            pm_tasks_waiting;      /* Number of waiting tasks*/
    struct PM_SUSPEND_STRUCT
                       *pm_suspension_list;    /* Suspension list        */
    VOID               *pm_handle;
} PM_PCB;


/**********************************************************************/
/*                   SPINLOCK Definitions                             */
/**********************************************************************/

/* Define the Spinlock Control Block data type. */
typedef struct SL_SCB_STRUCT
{
    CS_NODE             sl_created;            /* Node for linking to     */
                                               /* created Spinlock list   */
    UNSIGNED            sl_id;                 /* Internal SLCB ID        */
#if (defined(CFG_NU_OS_KERN_PLUS_SMP_ENABLE) && (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1))
    INT                 sl_lock_count;         /* Lock count              */
#endif
    ESAL_GE_LOCK        sl_lock;               /* Internal lock structure */
} SL_SCB;

/**********************************************************************/
/*                      PLUS Definitions                              */
/**********************************************************************/

/* Define application data types to actual internal data structures */
#if (defined(CFG_NU_OS_KERN_PROCESS_CORE_ENABLE) && ((CFG_NU_OS_KERN_PROCESS_CORE_CB_HIDING == NU_TRUE) || (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE)))

#define NU_CONTROL_BLOCK_HIDING

#endif /* (defined(CFG_NU_OS_KERN_PROCESS_CORE_ENABLE) && ((CFG_NU_OS_KERN_PROCESS_CORE_CB_HIDING == NU_TRUE) || (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE))) */

#ifdef NU_CONTROL_BLOCK_HIDING

typedef struct NU_CB_STRUCT
{
    VOID               *nu_handle;              /* System handle, pointer to actual control block */
} NU_HANDLE;

typedef         NU_HANDLE                           NU_TASK;
typedef         NU_HANDLE                           NU_MEMORY_POOL;
typedef         NU_HANDLE                           NU_TIMER;
typedef         TM_APP_MSG                          NU_TIMER_MSG;
typedef         NU_HANDLE                           NU_QUEUE;
typedef         NU_HANDLE                           NU_SEMAPHORE;
typedef         NU_HANDLE                           NU_EVENT_GROUP;
typedef         NU_HANDLE                           NU_PIPE;
typedef         NU_HANDLE                           NU_PARTITION_POOL;

#else

typedef         TC_TCB                              NU_TASK;
typedef         DM_PCB                              NU_MEMORY_POOL;
typedef         TM_APP_TCB                          NU_TIMER;
#ifdef NU_USER_PROCESS_TIMER_EMULATION
typedef         TM_APP_MSG                          NU_TIMER_MSG;
#endif
typedef         QU_QCB                              NU_QUEUE;
typedef         SM_SCB                              NU_SEMAPHORE;
typedef         EV_GCB                              NU_EVENT_GROUP;
typedef         PI_PCB                              NU_PIPE;
typedef         PM_PCB                              NU_PARTITION_POOL;

#endif  /* Control block hiding */

#ifdef CFG_NU_OS_KERN_PLUS_SMP_ENABLE
typedef         TC_TCB                              TC_HCB;
typedef         TC_TCB                              NU_HISR;
#else
typedef         TC_HCB                              NU_HISR;
#endif

typedef         ESAL_GE_LOCK                        NU_PROTECT;
typedef         SL_SCB                              NU_SPINLOCK;
typedef         ER_ECB                              NU_ERROR;

#define         NU_Release_Information()            PLUS_RELEASE_STRING

/* External declarations */
extern          INT                                 TCD_Interrupt_Level;
extern          volatile INT                        TMD_Timer_State;
extern          VOID * volatile                     TCD_Current_Thread;
extern          TC_TCB * volatile                   TCD_Execute_Task;
#ifndef CFG_NU_OS_KERN_PLUS_SMP_ENABLE
extern          TC_HCB * volatile                   TCD_Execute_HISR;
#endif

/**********************************************************************/
/*             Other TIMER MANAGEMENT Definitions                     */
/**********************************************************************/

/* Externally reference global data */
extern volatile UNSIGNED    TMD_Timer;
extern volatile UNSIGNED    TMD_System_Clock;
extern volatile UNSIGNED    TMD_System_Clock_Upper;
extern volatile INT         TMD_Timer_State;
extern TC_TCB  *volatile    TMD_Time_Slice_Task;

/*********** START BACKWARDS COMPATIBILITY DEFINITIONS FOR NUCLEUS PLUS 2.0 **********/

/* NOTE:  The following definitions were created as part of
          Nucleus PLUS 2.0 to allow backwards compatibility
          of all Nucleus PLUS internal functions accessed
          by applications and any configuration settings modified
          by Nucleus PLUS 2.0                                            */

/* Hardware timer / clock related backwards compatibility */
#define             NU_Retrieve_Hardware_Clock(val)         val = NU_HW_TIMER_COUNT_READ()
#define             NU_PLUS_Ticks_Per_Second                NU_PLUS_TICKS_PER_SEC
#define             NU_HW_Ticks_Per_Second                  NU_HW_TIMER_TICKS_PER_SEC
#define             NU_HW_Ticks_Per_SW_Tick                 NU_HW_TIMER_TICKS_PER_SW_TICK

#if (ESAL_GE_TMR_OS_COUNT_DIR == ESAL_COUNT_DOWN)

#define             NU_COUNT_DOWN

#else

#undef              NU_COUNT_DOWN

#endif  /* ESAL_GE_TMR_OS_COUNT_DIR == ESAL_COUNT_DOWN */

/* Re-map old internal timer and thread control function names to new internal names */
#define         TCT_Current_Thread                  TCCT_Current_Thread
#define         CSC_Place_On_List                   NU_Place_On_List
#define         CSC_Remove_From_List                NU_Remove_From_List

/*********** END BACKWARDS COMPATIBILITY DEFINITIONS FOR NUCLEUS PLUS 2.0 **********/

extern INT TCD_Protect_Save[ESAL_GE_CPU_COUNT];

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)
/* Map the following common service API to control functions */

#ifndef NU_PROCESS
#ifdef CFG_NU_OS_KERN_PLUS_SMP_ENABLE
/* For SMP kernel, use functions implemented in SMP thread control files */
VOID            NU_Protect(NU_PROTECT *);
VOID            NU_Unprotect(VOID);
#else
/* For Unicore kernel, use macros */
#define         NU_Protect(x)                       NU_UNUSED_PARAM(x); \
                                                    TCD_Protect_Save[ESAL_GE_CPU_ID_GET()] = NU_Local_Control_Interrupts(NU_DISABLE_INTERRUPTS)
#define         NU_Unprotect()                      NU_Local_Control_Interrupts(TCD_Protect_Save[ESAL_GE_CPU_ID_GET()])
#endif /* CFG_NU_OS_KERN_PLUS_SMP_ENABLE */
#else
/* For processes, these functions are included in process user lib */
VOID            NU_Protect(NU_PROTECT *);
VOID            NU_Unprotect(VOID);
#endif

#endif

#ifndef NU_PROCESS
#define         NU_Local_Control_Interrupts         ESAL_GE_INT_Global_Set
#endif
#define         NU_Restore_Interrupts()             ESAL_GE_INT_Global_Set(TCD_Interrupt_Level)

#ifdef    CFG_NU_OS_KERN_PLUS_SMP_ENABLE

/* CPU Bit Mask in multicore */
typedef         ESAL_CPU_MASK                       NU_CPU_SET;

/* Macros for CPU bitmask manipulation in multicore case. */
#define         NU_CPU_SET_ADD                      ESAL_CPU_MASK_SET
#define         NU_CPU_SET_REMOVE                   ESAL_CPU_MASK_CLR
#define         NU_CPU_SET_CHECK                    ESAL_CPU_MASK_CHECK
#define         NU_CPU_SET_COPY                     ESAL_CPU_MASK_COPY
#define         NU_CPU_SET_COMPARE                  ESAL_CPU_MASK_CMP
#define         NU_CPU_SET_CLRALL                   ESAL_CPU_MASK_CLRALL

#endif  /* CFG_NU_OS_KERN_PLUS_SMP_ENABLE */

#if (NU_STACK_CHECKING == NU_TRUE)
UNSIGNED        NU_Check_Stack(VOID);
#define         NU_CHECK_STACK()                    (VOID)NU_Check_Stack();
#else
#define         NU_Check_Stack()                    0
#define         NU_CHECK_STACK()
#endif

/**********************************************************************/
/*                 Memory mapping definitions                         */
/**********************************************************************/

/* Memory region attributes */
#define NU_MEM_READ                     (1UL << 0)
#define NU_MEM_WRITE                    (1UL << 1)
#define NU_MEM_EXEC                     (1UL << 2)
#define NU_SHARE_READ                   (1UL << 3)
#define NU_SHARE_WRITE                  (1UL << 4)
#define NU_SHARE_EXEC                   (1UL << 5)
#define NU_CACHE_INHIBIT                (1UL << 6)
#define NU_CACHE_WRITE_THROUGH          (1UL << 7)
#define NU_CACHE_NO_COHERENT            (1UL << 8)

STATUS      NU_Memory_Map(INT *mem_id, CHAR *name, VOID *phys_addr, VOID **actual_addr, UNSIGNED size, UNSIGNED options);
STATUS      NU_Memory_Unmap(INT mem_id);

/* Define task control functions.  */
STATUS          NU_Create_Task(NU_TASK *task, CHAR *name,
                               VOID (*task_entry)(UNSIGNED, VOID *), UNSIGNED argc,
                               VOID *argv, VOID *stack_address, UNSIGNED stack_size,
                               OPTION priority, UNSIGNED time_slice,
                               OPTION preempt, OPTION auto_start);
STATUS          NU_Reset_Task(NU_TASK *task, UNSIGNED argc, VOID *argv);
STATUS          NU_Terminate_Task(NU_TASK *task);
STATUS          NU_Resume_Task(NU_TASK *task);
STATUS          NU_Suspend_Task(NU_TASK *task);
VOID            NU_Relinquish(VOID);
VOID            NU_Sleep(UNSIGNED ticks);
STATUS          NU_Change_Priority2(NU_TASK *task_ptr, OPTION new_priority, OPTION *old_priority);

#if (!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE)))
STATUS          NU_Change_Preemption2(NU_TASK *task_ptr, OPTION new_preempt, OPTION *old_preempt);
#endif

STATUS          NU_Change_Time_Slice2(NU_TASK *task_ptr, UNSIGNED new_time_slice, UNSIGNED *old_time_slice);
NU_TASK         *NU_Current_Task_Pointer(VOID);

#if (defined(CFG_NU_OS_KERN_PLUS_SMP_ENABLE) && (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1))

/* Define Hard affinity task change service */
STATUS          NU_Change_Affinity(NU_TASK * task, ESAL_CPU_MASK *affinity_mask);
STATUS          NU_Change_HISR_Affinity(NU_HISR * hisr, ESAL_CPU_MASK *affinity_mask);
VOID            NU_Set_Affinity_To_Current_CPU(ESAL_CPU_MASK *old_affinity_mask);
STATUS          NU_Add_Task_To_Affinity_Group(NU_TASK *task_ptr, UINT32 task_group_id);
STATUS          NU_Change_Task_Group_Affinity(UINT32 task_group_id,
                                              ESAL_CPU_MASK *affinity_set,
                                              ESAL_CPU_MASK *old_affinity_set);

/* Define BCD Functions */
STATUS          NU_BCD_Multicore_Create(NU_CPU_SET core_mask);
STATUS          NU_BCD_CPU_Create(UINT cpuid);
STATUS          NU_BCD_CPU_Remove(NU_CPU_SET core_mask);
STATUS          NU_BCD_Task_Add(TC_TCB * task, UINT cpu_id);
STATUS          NU_BCD_Task_Remove(TC_TCB * task);
STATUS          NU_BCD_HISR_Add(NU_HISR *hisr, UINT cpu_id);
STATUS          NU_BCD_HISR_Remove(NU_HISR * hisr);
STATUS          NU_BCD_IRQ_Add(INT vector, UINT cpu_id);
STATUS          NU_BCD_IRQ_Remove(INT vector);

#else

#define         NU_Change_Affinity(x,y)             NU_SUCCESS
#define         NU_Change_HISR_Affinity(x,y)        NU_SUCCESS
#define         NU_BCD_Multicore_Create(x)          NU_SUCCESS
#define         NU_BCD_CPU_Create(x)                NU_SUCCESS
#define         NU_BCD_CPU_Remove(x)                NU_SUCCESS
#define         NU_BCD_Task_Add(x,y)                NU_SUCCESS
#define         NU_BCD_Task_Remove(x)               NU_SUCCESS
#define         NU_BCD_HISR_Add(x,y)                NU_SUCCESS
#define         NU_BCD_HISR_Remove(x)               NU_SUCCESS
#define         NU_BCD_IRQ_Add(x,y)                 NU_SUCCESS
#define         NU_BCD_IRQ_Remove(x)                NU_SUCCESS

#endif  /* defined(CFG_NU_OS_KERN_PLUS_SMP_ENABLE) && (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1) */

/* macros to map hard affinity functions */
#define         NU_IRQ_Affinity_Set                 ESAL_GE_INT_Affinity_Set
#define         NU_IRQ_Affinity_Get                 ESAL_GE_INT_Affinity_Get
#define         NU_IRQ_Affinity_Can_Set             ESAL_GE_INT_Affinity_Can_Set

/* Define Queue management functions.  */
STATUS          NU_Create_Queue(NU_QUEUE *queue, CHAR *name,
                                VOID *start_address, UNSIGNED queue_size,
                                OPTION message_type, UNSIGNED message_size,
                                OPTION suspend_type);
STATUS          NU_Reset_Queue(NU_QUEUE *queue);
STATUS          NU_Send_To_Front_Of_Queue(NU_QUEUE *queue, VOID *message,
                                          UNSIGNED size, UNSIGNED suspend);
STATUS          NU_Send_To_Queue(NU_QUEUE *queue, VOID *message,
                                 UNSIGNED size, UNSIGNED suspend);
STATUS          NU_Broadcast_To_Queue(NU_QUEUE *queue, VOID *message,
                                      UNSIGNED size, UNSIGNED suspend);
STATUS          NU_Receive_From_Queue(NU_QUEUE *queue, VOID *message,
                                      UNSIGNED size, UNSIGNED *actual_size,
                                      UNSIGNED suspend);

/* Define Semaphore management functions.  */
STATUS          NU_Create_Semaphore(NU_SEMAPHORE *semaphore, CHAR *name,
                                    UNSIGNED initial_count, OPTION suspend_type);
STATUS          NU_Reset_Semaphore(NU_SEMAPHORE *semaphore,
                                   UNSIGNED initial_count);
STATUS          NU_Obtain_Semaphore(NU_SEMAPHORE *semaphore, UNSIGNED suspend);
STATUS          NU_Release_Semaphore(NU_SEMAPHORE *semaphore);
STATUS          NU_Get_Semaphore_Owner(NU_SEMAPHORE *semaphore_ptr, NU_TASK **task);


/* Define Event Group management functions.  */
STATUS          NU_Create_Event_Group(NU_EVENT_GROUP *group, CHAR *name);
STATUS          NU_Set_Events(NU_EVENT_GROUP *group, UNSIGNED events,
                              OPTION operation);
STATUS          NU_Retrieve_Events(NU_EVENT_GROUP *group,
                                   UNSIGNED requested_flags, OPTION operation,
                                   UNSIGNED *retrieved_flags, UNSIGNED suspend);

/* Define Dynamic memory management functions.  */
STATUS          NU_Create_Memory_Pool(NU_MEMORY_POOL *pool, CHAR *name,
                                      VOID *start_address, UNSIGNED pool_size,
                                      UNSIGNED min_allocation, OPTION suspend_type);

#define         NU_Allocate_Memory(pool_ptr, return_pointer, size, suspend)             \
                NU_Allocate_Aligned_Memory(pool_ptr, return_pointer, size, 0, suspend)

STATUS          NU_Allocate_Aligned_Memory(NU_MEMORY_POOL *pool_ptr,
                                           VOID **return_pointer, UNSIGNED size,
                                           UNSIGNED alignment, UNSIGNED suspend);

STATUS          NU_Deallocate_Memory(VOID *memory);

/* Define Pipe management functions.  */
STATUS          NU_Create_Pipe(NU_PIPE *pipe, CHAR *name,
                               VOID *start_address, UNSIGNED pipe_size,
                               OPTION message_type, UNSIGNED message_size,
                               OPTION suspend_type);
STATUS          NU_Reset_Pipe(NU_PIPE *pipe);
STATUS          NU_Send_To_Front_Of_Pipe(NU_PIPE *pipe, VOID *message,
                                         UNSIGNED size, UNSIGNED suspend);
STATUS          NU_Send_To_Pipe(NU_PIPE *pipe, VOID *message,
                                UNSIGNED size, UNSIGNED suspend);
STATUS          NU_Broadcast_To_Pipe(NU_PIPE *pipe, VOID *message,
                                     UNSIGNED size, UNSIGNED suspend);
STATUS          NU_Receive_From_Pipe(NU_PIPE *pipe, VOID *message,
                                     UNSIGNED size, UNSIGNED *actual_size,
                                     UNSIGNED suspend);

/* Define Signal processing functions.  */
UNSIGNED        NU_Control_Signals(UNSIGNED signal_enable_mask);
UNSIGNED        NU_Receive_Signals(VOID);
STATUS          NU_Register_Signal_Handler(VOID (*signal_handler)(UNSIGNED));
STATUS          NU_Send_Signals(NU_TASK *task, UNSIGNED signal_mask);

/* Define Partition memory management functions.  */
STATUS          NU_Create_Partition_Pool(NU_PARTITION_POOL *pool, CHAR *name,
                                         VOID *start_address, UNSIGNED pool_size,
                                         UNSIGNED partition_size, OPTION suspend_type);
STATUS          NU_Allocate_Partition(NU_PARTITION_POOL *pool,
                                      VOID **return_pointer, UNSIGNED suspend);
STATUS          NU_Deallocate_Partition(VOID *partition);

#if (!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE)))

/* Define Interrupt management functions.  */
STATUS          NU_Register_LISR(INT vector,
                                 VOID (*lisr_entry)(INT),
                                 VOID (**old_lisr)(INT));
STATUS          NU_Activate_HISR(NU_HISR *hisr);
STATUS          NU_Reset_HISR(NU_HISR *hisr);
STATUS          NU_Create_HISR(NU_HISR *hisr, CHAR *name,
                               VOID (*hisr_entry)(VOID), OPTION priority,
                               VOID *stack_address, UNSIGNED stack_size);
NU_HISR         *NU_Current_HISR_Pointer(VOID);
STATUS          NU_Create_HISR_Queue(NU_HISR * hisr_ptr, UINT queue_size);

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

INT             NU_Control_Interrupts(INT new_level);
STATUS          NU_Delete_HISR_Queue(NU_HISR * hisr_ptr);

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE) */

STATUS          NU_Send_To_HISR_Queue(NU_HISR * hisr_ptr, VOID * data_ptr);
STATUS          NU_Receive_From_HISR_Queue(NU_HISR * hisr_ptr, VOID ** data_ptr);

#endif  /* !defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE)) */

/* Timer management functions.  */

#if (!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE)))

STATUS          NU_Create_Timer(NU_TIMER *timer, CHAR *name, VOID(*expiration_routine)(UNSIGNED),
                                UNSIGNED id, UNSIGNED initial_time, UNSIGNED reschedule_time,
                                OPTION enable);

#elif   defined(NU_USER_PROCESS_TIMER_EMULATION)

STATUS          _NU_Create_Timer(NU_TIMER *timer_ptr, CHAR *name, VOID(*expiration_routine)(UNSIGNED),
                                 UNSIGNED id, UNSIGNED initial_time, UNSIGNED reschedule_time,
                                 OPTION enable);

#define         NU_Create_Timer                 _NU_Create_Timer

#endif  /* (!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE))) */

STATUS          NU_Reset_Timer(NU_TIMER *timer,
                               VOID (*expiration_routine)(UNSIGNED),
                               UNSIGNED initial_time, UNSIGNED reschedule_timer,
                               OPTION enable);
STATUS          NU_Control_Timer(NU_TIMER *timer, OPTION enable);
STATUS          NU_Get_Remaining_Time(NU_TIMER *timer_ptr, UNSIGNED *remaining_time);
STATUS          NU_Pause_Timer(NU_TIMER *timer_ptr);
STATUS          NU_Resume_Timer(NU_TIMER *timer_ptr);
UINT64          NU_Get_Time_Stamp(VOID);

/* Determine if pointers / 32-bit values are accessible with a single instruction.
   If so, just reference the pointer / 32-bit value directly.  Otherwise, call
   the target dependent service.  */
#if ((NU_32BIT_ACCESS == 1) && (NU_PLUS_INLINING == 1) && !defined(CFG_NU_OS_KERN_PROCESS_ENABLE))

/* Macro definition for architectures supporting single instruction
   access to 32-bit values */
#define         NU_Retrieve_Clock()             TMD_System_Clock

#else

/* Define function prototype */
UNSIGNED        NU_Retrieve_Clock(VOID);

#endif  /* ((NU_32BIT_ACCESS == 1) && (NU_PLUS_INLINING == 1) && !defined(CFG_NU_OS_KERN_PROCESS_ENABLE)) */

#ifndef CFG_NU_OS_ARCH_SH_RENESAS_ENABLE
#include <time.h>
#endif
#if (!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE)))
VOID            NU_Set_Clock64(UINT64 new_value);
#endif

UINT64          NU_Retrieve_Clock64(VOID);

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)
time_t          NU_Ticks_To_Time(UINT64 ticks);
UINT64          NU_Time_To_Ticks(time_t cal_time);
#endif

/* System memory functions */
STATUS          NU_System_Memory_Get(NU_MEMORY_POOL ** sys_pool_ptr,
                                     NU_MEMORY_POOL ** usys_pool_ptr);

/* Error handling functions */
STATUS          NU_Register_Thread_Error_Handler(VOID * thread_ptr, STATUS (*handler)(INT));

#if (!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE)))
VOID            NU_Register_System_Error_Handler(STATUS (*handler)(INT));
#endif

STATUS          NU_Handle_Error(INT error_code);
STATUS          NU_Error_Information(NU_ERROR *error_info);

/* Following functions are not applicable for Safety Certified Nucleus Package. */

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

/* Task deletion function. */
STATUS          NU_Delete_Task(NU_TASK *task);

/* Define Spinlock functions. */
STATUS          NU_Spinlock_Create(NU_SPINLOCK *spinlock,
                                   UNSIGNED lock_options);
STATUS          NU_Spinlock_Delete(NU_SPINLOCK *spinlock);
STATUS          NU_Spinlock_Obtain(NU_SPINLOCK *spinlock);
STATUS          NU_Spinlock_Try(NU_SPINLOCK *spinlock);
STATUS          NU_Spinlock_Release(NU_SPINLOCK *spinlock);
STATUS          NU_IRQ_Spinlock_Obtain(NU_SPINLOCK *spinlock,
                                       INT *irq_state);
STATUS          NU_IRQ_Spinlock_Try (NU_SPINLOCK *spinlock,
                                     INT *irq_state);
STATUS          NU_IRQ_Spinlock_Release(NU_SPINLOCK *spinlock,
                                        INT irq_state);

/* Function to create a task which upon completion will free all memory resources
   and removes itself from the system. */
STATUS          NU_Create_Auto_Clean_Task(NU_TASK **task_ptr, CHAR *name,
                                          VOID (*task_entry)(UNSIGNED, VOID *),
                                          UNSIGNED argc, VOID *argv,
                                          NU_MEMORY_POOL *pool_ptr,
                                          UNSIGNED stack_size,
                                          OPTION priority, UNSIGNED time_slice,
                                          OPTION preempt, OPTION auto_start);

/* Legacy functions for changing tasks */
OPTION          NU_Change_Priority(NU_TASK *task, OPTION new_priority);
UNSIGNED        NU_Change_Time_Slice(NU_TASK *task, UNSIGNED time_slice);
#if (!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE)))
OPTION          NU_Change_Preemption(OPTION preempt);
#endif

/* Queue deletion function. */
STATUS          NU_Delete_Queue(NU_QUEUE *queue);

/* Semaphore deletion function. */
STATUS          NU_Delete_Semaphore(NU_SEMAPHORE *semaphore);

/* Event group deletion function. */
STATUS          NU_Delete_Event_Group(NU_EVENT_GROUP *group);

/* Memory pool deletion function. */
STATUS          NU_Delete_Memory_Pool(NU_MEMORY_POOL *pool);

/* Function to add new memory to existing memory pool. */
STATUS          NU_Add_Memory(NU_MEMORY_POOL *pool_ptr, VOID *memory_start_address,
                              UNSIGNED memory_size);

/* Dynamic memory reallocation function. */
#define         NU_Reallocate_Memory(pool_ptr, memory_ptr, size, suspend)               \
                NU_Reallocate_Aligned_Memory(pool_ptr, memory_ptr, size, 0, suspend)
STATUS          NU_Reallocate_Aligned_Memory(NU_MEMORY_POOL *pool_ptr, VOID **return_pointer,
                                             UNSIGNED size, UNSIGNED alignment,
                                             UNSIGNED suspend);

/* Pipe deletion function. */
STATUS          NU_Delete_Pipe(NU_PIPE *pipe);

/* Partition pool deletion function. */
STATUS          NU_Delete_Partition_Pool(NU_PARTITION_POOL *pool);

/* Development support functions. */
VOID            NU_Get_Release_Version(UINT* major, UINT* minor);

#if (!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE)))
/* HISR deletion function. */
STATUS          NU_Delete_HISR(NU_HISR *hisr);
#endif

/* Application timer deletion function. */
STATUS          NU_Delete_Timer(NU_TIMER *timer);

/* Function to set the system clock */
VOID            NU_Set_Clock(UNSIGNED new_value)     ESAL_TS_RTE_DEPRECATED;

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE) */

#ifdef          __cplusplus

/* End of C declarations */
}

#endif  /* __cplusplus */

#endif
