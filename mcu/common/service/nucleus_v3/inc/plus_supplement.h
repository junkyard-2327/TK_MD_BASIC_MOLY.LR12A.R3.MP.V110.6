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
*         This file contains external data structures and definitions of
*         all PLUS Supplementary components.
*
***********************************************************************/

#ifndef PLUS_SUPPLEMENT_H
#define PLUS_SUPPLEMENT_H

#ifdef          __cplusplus

/* C declarations in C++     */
extern          "C" {

#endif

/**********************************************************************/
/*                  Test Configuration Settings                       */
/**********************************************************************/

/* DEFINE:      NU_TIME_TEST1MIN_ENABLE
   DEFAULT:     NU_FALSE
   DESCRIPTION: This define is used to perform the minimum code / data size tests that are
                part of the Nucleus PLUS timing test.  Setting this define to NU_TRUE will
                allow the minimal sized PLUS code and data to be built.
   NOTE:        The Nucleus PLUS library and timing test must be rebuilt after changing
                this define.            */
#ifndef         NU_TIME_TEST1MIN_ENABLE
#define         NU_TIME_TEST1MIN_ENABLE             CFG_NU_OS_KERN_PLUS_SUPPLEMENT_TIME_TEST1MIN
#endif

/* DEFINE:      NU_TIME_TEST1MAX_ENABLE
   DEFAULT:     NU_FALSE
   DESCRIPTION: This define is used to perform the maximum code / data size tests that are
                part of the Nucleus PLUS timing test.  Setting this define to NU_TRUE will
                allow the maximum sized PLUS code and data to be built.
   NOTE:        The Nucleus PLUS library and timing test must be rebuilt after changing
                this define.            */
#ifndef         NU_TIME_TEST1MAX_ENABLE
#define         NU_TIME_TEST1MAX_ENABLE             CFG_NU_OS_KERN_PLUS_SUPPLEMENT_TIME_TEST1MAX
#endif

/* DEFINE:      NU_TIME_TEST2_ENABLE
   DEFAULT:     NU_FALSE
   DESCRIPTION: This define is used to include code used for the Nucleus PLUS timing
                test #2.  Setting this define to NU_TRUE will include the necessary
                timing related code.
   NOTE:        The Nucleus PLUS library and timing test must be rebuilt after changing
                this define.            */
#ifndef         NU_TIME_TEST2_ENABLE
#define         NU_TIME_TEST2_ENABLE                CFG_NU_OS_KERN_PLUS_SUPPLEMENT_TIME_TEST2
#endif

/* DEFINE:      NU_TIME_TEST3_ENABLE
   DEFAULT:     NU_FALSE
   DESCRIPTION: This define is used to include code used for the Nucleus PLUS timing
                test #3.  Setting this define to NU_TRUE will include the necessary
                timing related code.
   NOTE:        The Nucleus PLUS library and timing test must be rebuilt after changing
                this define.            */
#ifndef         NU_TIME_TEST3_ENABLE
#define         NU_TIME_TEST3_ENABLE                CFG_NU_OS_KERN_PLUS_SUPPLEMENT_TIME_TEST3
#endif

/* DEFINE:      NU_STATIC_TEST_ENABLE
   DEFAULT:     NU_FALSE
   DESCRIPTION: This define allows visibility of static data / functions during debug
                sessions by changing their scope from static to global when enabled.
   NOTE:        The Nucleus PLUS library, all middleware, and application must be rebuilt
                after changing this define.            */
#ifndef         NU_STATIC_TEST_ENABLE
#define         NU_STATIC_TEST_ENABLE               CFG_NU_OS_KERN_PLUS_SUPPLEMENT_STATIC_TEST
#endif

/**********************************************************************/
/*                    Support Definitions                             */
/**********************************************************************/

/* Define for "static" variables / data used to allow testing
   of internal functions using external drivers / stub functions */
#if (NU_STATIC_TEST_ENABLE == NU_TRUE)

/* Define STATIC as nothing to make internal functions / variables
   globally visible */
#define             STATIC

#else

/* Define STATIC as static to make internal functions / variables
   have file level scope */
#define             STATIC                      static

#endif  /* NU_STATIC_TEST_ENABLE == NU_TRUE */

/* Check if multiple timing tests being configured */
#if ((NU_TIME_TEST1MIN_ENABLE + NU_TIME_TEST1MAX_ENABLE +    \
      NU_TIME_TEST2_ENABLE + NU_TIME_TEST3_ENABLE) > 1)

/* Show an error - only 1 timing test can be configured */
#error          Only 1 timing test may be configured

#endif

/* Check if timing test 1 (minimum code / data) is enabled */
#if (NU_TIME_TEST1MIN_ENABLE == NU_TRUE)

/* Ensure all configuration settings build minimal code / data */
#undef  NU_ERROR_CHECKING
#define NU_ERROR_CHECKING               NU_FALSE
#undef  NU_PLUS_INLINING
#define NU_PLUS_INLINING                NU_FALSE
#undef  NU_MIN_RAM_ENABLED
#define NU_MIN_RAM_ENABLED              NU_TRUE

#endif  /* NU_TIME_TEST1MIN_ENABLE == NU_TRUE */

/* Check if timing test 1 (maximum code / data) is enabled */
#if (NU_TIME_TEST1MAX_ENABLE == NU_TRUE)

/* Ensure all configuration settings build maximum code / data */
#undef  NU_ERROR_CHECKING
#define NU_ERROR_CHECKING               NU_TRUE
#undef  NU_PLUS_INLINING
#define NU_PLUS_INLINING                NU_TRUE
#undef  NU_MIN_RAM_ENABLED
#define NU_MIN_RAM_ENABLED              NU_FALSE

#endif  /* NU_TIME_TEST1MAX_ENABLE == NU_TRUE */

/* Check if timing test 2 (API timing) or timing test 3 (interrupt latency)
   is enabled */
#if (NU_TIME_TEST2_ENABLE == NU_TRUE) || (NU_TIME_TEST3_ENABLE == NU_TRUE)

/* Ensure all configuration settings build for speed */
#undef  NU_ERROR_CHECKING
#define NU_ERROR_CHECKING               NU_FALSE
#undef  NU_PLUS_INLINING
#define NU_PLUS_INLINING                NU_TRUE
#undef  NU_MIN_RAM_ENABLED
#define NU_MIN_RAM_ENABLED              NU_FALSE

#endif  /* NU_TIME_TEST2_ENABLE == NU_TRUE */

/**********************************************************************/
/*                EVENT NOTIFICATIONS Definitions                     */
/**********************************************************************/

/* Maximum number of listeners */
#define EN_MAX_LISTEN_CNT   10

/* Minimum number of notification messages per pipe */
#define EN_MIN_MSG_CNT      4

/* Maximum length of notification message */
#define EN_MAX_MSG_LEN      255


/**********************************************************************/
/*                     MAILBOX Definitions                            */
/**********************************************************************/
#define         MB_MESSAGE_SIZE         4

/* Define the Mailbox Control Block data type.  */
typedef struct MB_MCB_STRUCT
{
    CS_NODE             mb_created;            /* Node for linking to    */
                                               /* created mailbox list   */
    UNSIGNED            mb_id;                 /* Internal MCB ID        */
    CHAR                mb_name[NU_MAX_NAME];  /* Mailbox name           */
    BOOLEAN             mb_message_present;    /* Message present flag   */
    BOOLEAN             mb_fifo_suspend;       /* Suspension type flag   */
#if     PAD_2
    DATA_ELEMENT        mb_padding[PAD_2];
#endif
    UNSIGNED            mb_tasks_waiting;      /* Number of waiting tasks*/
    UNSIGNED                                   /* Message area           */
                        mb_message_area[MB_MESSAGE_SIZE];
    struct MB_SUSPEND_STRUCT
                       *mb_suspension_list;    /* Suspension list        */
    VOID               *mb_handle;
} MB_MCB;

#ifdef NU_CONTROL_BLOCK_HIDING

typedef         NU_HANDLE                           NU_MAILBOX;

#else

typedef         MB_MCB                              NU_MAILBOX;

#endif /* NU_CONTROL_BLOCK_HIDING */

/* Define Mailbox management functions.  */
STATUS          NU_Create_Mailbox(NU_MAILBOX *mailbox, CHAR *name,
                                  OPTION suspend_type);
STATUS          NU_Delete_Mailbox(NU_MAILBOX *mailbox);
STATUS          NU_Reset_Mailbox(NU_MAILBOX *mailbox);
STATUS          NU_Send_To_Mailbox(NU_MAILBOX *mailbox, VOID *message,
                                   UNSIGNED suspend);
STATUS          NU_Broadcast_To_Mailbox(NU_MAILBOX *mailbox, VOID *message,
                                        UNSIGNED suspend);
STATUS          NU_Receive_From_Mailbox(NU_MAILBOX *mailbox, VOID *message,
                                        UNSIGNED suspend);
STATUS          NU_Mailbox_Information(NU_MAILBOX *mailbox, CHAR *name,
                  OPTION *suspend_type, OPTION *message_present,
                  UNSIGNED *tasks_waiting, NU_TASK **first_task);

/* Define information functions.  */
STATUS          NU_Task_Information(NU_TASK *task, CHAR *name,
                                    DATA_ELEMENT *status, UNSIGNED *scheduled_count,
                                    OPTION *priority, OPTION *preempt,
                                    UNSIGNED *time_slice, VOID **stack_base,
                                    UNSIGNED *stack_size, UNSIGNED *minimum_stack);
STATUS          NU_Spinlock_Information(NU_SPINLOCK *spinlock_ptr,
                                        INT *lock_flag,
                                        VOID **thread_ptr,
                                        INT *lock_count);
STATUS          NU_Queue_Information(NU_QUEUE *queue, CHAR *name,
                                     VOID **start_address, UNSIGNED *queue_size,
                                     UNSIGNED *available, UNSIGNED *messages,
                                     OPTION *message_type, UNSIGNED *message_size,
                                     OPTION *suspend_type, UNSIGNED *tasks_waiting,
                                     NU_TASK **first_task);
STATUS          NU_Semaphore_Information(NU_SEMAPHORE *semaphore, CHAR *name,
                                         UNSIGNED *current_count, OPTION *suspend_type,
                                         UNSIGNED *tasks_waiting, NU_TASK **first_task);
STATUS          NU_Event_Group_Information(NU_EVENT_GROUP *group, CHAR *name,
                                           UNSIGNED *event_flags, UNSIGNED *tasks_waiting,
                                           NU_TASK **first_task);
STATUS          NU_Memory_Pool_Information(NU_MEMORY_POOL *pool, CHAR *name,
                                           VOID **start_address, UNSIGNED *pool_size,
                                           UNSIGNED *min_allocation, UNSIGNED *available,
                                           OPTION *suspend_type, UNSIGNED *tasks_waiting,
                                           NU_TASK **first_task);
STATUS          NU_Pipe_Information(NU_PIPE *pipe, CHAR *name,
                                    VOID **start_address, UNSIGNED *pipe_size,
                                    UNSIGNED *available, UNSIGNED *messages,
                                    OPTION *message_type, UNSIGNED *message_size,
                                    OPTION *suspend_type, UNSIGNED *tasks_waiting,
                                    NU_TASK **first_task);
STATUS          NU_Partition_Pool_Information(NU_PARTITION_POOL *pool,
                                              CHAR *name,
                                              VOID **start_address,
                                              UNSIGNED *pool_size,
                                              UNSIGNED *partition_size,
                                              UNSIGNED *available,
                                              UNSIGNED *allocated,
                                              OPTION *suspend_type,
                                              UNSIGNED *tasks_waiting,
                                              NU_TASK **first_task);
STATUS          NU_Timer_Information(NU_TIMER *timer, CHAR *name,
                                     OPTION *enable, UNSIGNED *expirations, UNSIGNED *id,
                                     UNSIGNED *initial_time, UNSIGNED *reschedule_time);

#if (defined(CFG_NU_OS_KERN_PLUS_SMP_ENABLE) && (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1))
STATUS          NU_BCD_Information(UINT       cpu_id,
                                   NU_TASK ** task_pointer_list,
                                   UNSIGNED   max_task_pointers,
                                   INT     *  vector_list,
                                   UNSIGNED   max_vectors);

#else

#define         NU_BCD_Information(v,w,x,y,z)       NU_SUCCESS

#endif /* defined(CFG_NU_OS_KERN_PLUS_SMP_ENABLE) && (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1) */

#if (!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE)))

/* Define information functions inaccessible to user-mode processes. */

UNSIGNED        NU_Established_Mailboxes(VOID);
UNSIGNED        NU_Mailbox_Pointers(NU_MAILBOX **pointer_list,
                                    UNSIGNED maximum_pointers);
UNSIGNED        NU_Established_Tasks(VOID);
UNSIGNED        NU_Task_Pointers(NU_TASK **pointer_list,
                                 UNSIGNED maximum_pointers);
UNSIGNED        NU_Established_Spinlocks(VOID);
UNSIGNED        NU_Spinlock_Pointers(NU_SPINLOCK **pointer_list,
                                     UNSIGNED maximum_pointers);
UNSIGNED        NU_Established_Queues(VOID);
UNSIGNED        NU_Queue_Pointers(NU_QUEUE **pointer_list,
                                  UNSIGNED maximum_pointers);

#ifdef MTK_KAL
UNSIGNED        NU_Queue_Current_Number_Msg(NU_QUEUE *queue_ptr);
#endif

UNSIGNED        NU_Established_Semaphores(VOID);
UNSIGNED        NU_Semaphore_Pointers(NU_SEMAPHORE **pointer_list,
                                      UNSIGNED maximum_pointers);
UNSIGNED        NU_Established_Event_Groups(VOID);
UNSIGNED        NU_Event_Group_Pointers(NU_EVENT_GROUP **pointer_list,
                                        UNSIGNED maximum_pointers);
UNSIGNED        NU_Established_Memory_Pools(VOID);
UNSIGNED        NU_Memory_Pool_Pointers(NU_MEMORY_POOL **pointer_list,
                                        UNSIGNED maximum_pointers);
UNSIGNED        NU_Established_Pipes(VOID);
UNSIGNED        NU_Pipe_Pointers(NU_PIPE **pointer_list,
                                 UNSIGNED maximum_pointers);
UNSIGNED        NU_Established_Partition_Pools(VOID);
UNSIGNED        NU_Partition_Pool_Pointers(NU_PARTITION_POOL **pointer_list,
                                           UNSIGNED maximum_pointers);
STATUS          NU_HISR_Information(NU_HISR *hisr, CHAR *name,
                                    UNSIGNED *scheduled_count, DATA_ELEMENT *priority,
                                    VOID **stack_base, UNSIGNED *stack_size,
                                    UNSIGNED *minimum_stack);
UNSIGNED        NU_Established_HISRs(VOID);
UNSIGNED        NU_HISR_Pointers(NU_HISR **pointer_list,
                                 UNSIGNED maximum_pointers);
UNSIGNED        NU_Established_Timers(VOID);
UNSIGNED        NU_Timer_Pointers(NU_TIMER **pointer_list,
                                  UNSIGNED maximum_pointers);

#endif  /* !defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE)) */


#ifdef          __cplusplus

/* End of C declarations */
}

#endif  /* __cplusplus */

#endif
