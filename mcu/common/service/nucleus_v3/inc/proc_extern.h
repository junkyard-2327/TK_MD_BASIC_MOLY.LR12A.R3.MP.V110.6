/*************************************************************************
*
*               Copyright Mentor Graphics Corporation 2013
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
*************************************************************************

*************************************************************************
*
*     DESCRIPTION
*
*         This file contains public data structure definitions, constants
*         and functions of Nucleus Process component.
*
*************************************************************************/

#ifndef PROC_EXTERN_H
#define PROC_EXTERN_H

#include "nucleus.h"
#include "plus_common.h"

#if ((defined(NU_PROCESS)) && (!defined(CFG_NU_OS_KERN_PROCESS_FRAMEWORK_ENABLE) || \
     !defined(CFG_NU_OS_KERN_PROCESS_CORE_ENABLE) || !defined(CFG_NU_OS_KERN_PROCESS_USER_ENABLE)))
/* Generate build error - trying to build a Nucleus Process with necessary process support disabled */
#error  Minimal process support not enabled in referenced Nucleus System Project.  Please ensure the nu.os.kern.process package has framework, core and user components enabled.
#endif

#ifdef CFG_NU_OS_KERN_PROCESS_FRAMEWORK_ENABLE

/****************************************/
/* Symbol Table Export Macros           */
/****************************************/

/* Symbol Entry - An entry in a Nucleus symbol table. */
typedef struct NU_SYMBOL_ENTRY_STRUCT
{
    VOID *          symbol_address;
    const CHAR *    symbol_name;

} NU_SYMBOL_ENTRY;

#ifdef CFG_NU_OS_KERN_PROCESS_CORE_ENABLE

#if ((!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE))) && \
     (CFG_NU_OS_KERN_PROCESS_CORE_SUP_USER_MODE == NU_TRUE))
#include    "arch_proc_mode.h"
#endif

/* No trampoline for process symbols and kernel data */
#define NU_SYM_TRAMP_PROCESS_DATA(symbol_name, export_name)

/* Use actual symbol address in process symbol table and kernel symbol table for data */
#define NU_SYM_ADDR_PROCESS_DATA(symbol_name, export_name)  symbol_name

#if (defined(CFG_NU_OS_ARCH_ARM_ENABLE) || defined(CFG_NU_OS_ARCH_ARMV7_M_ENABLE))

/* Kernel symbols (functions) use trampoline */
#define NU_SYM_TRAMP_KERNEL_FUNC(symbol_name, export_name)                                              \
        /* Create trampoline function for this symbol */                                                \
        static void __nutramp_##export_name(void) __attribute__((section("nutramp"),naked));            \
        static void __nutramp_##export_name(void)                                                       \
        {                                                                                               \
            /* Perform architecture specific trampoline code */                                         \
            PROC_AR_TRAMPOLINE(symbol_name);                                                            \
        }

#else

/* Kernel symbols (functions) use trampoline */
#define NU_SYM_TRAMP_KERNEL_FUNC(symbol_name, export_name)                                              \
        /* Create trampoline function for this symbol */                                                \
        void __nutramp_##export_name(void) __attribute__((section("nutramp")));                         \
        /* Perform architecture specific trampoline code */                                             \
        PROC_AR_TRAMPOLINE(symbol_name,export_name);                                                    \

#endif  /* (defined(CFG_NU_OS_ARCH_ARM_ENABLE) || defined(CFG_NU_OS_ARCH_ARMV7_M_ENABLE)) */

/* Use trampoline symbol address in kernel process symbol table */
#define NU_SYM_ADDR_KERNEL_FUNC(symbol_name, export_name)   __nutramp_##export_name

/* Thic macro exports a symbol for use by both user-mode and kernel-mode processes.
   It uses the common symbol table (nusymtab) */
#define PROC_EXPORT_SYMBOL(symbol_name, export_name)                                                    \
            /* First, extern the symbol */                                                              \
            extern typeof(symbol_name) symbol_name;                                                     \
                                                                                                        \
            /* Place a "stringified" version of the symbol into a string table */                       \
            static const char __nusymstr_##export_name[]                                                \
                __attribute__((section("nusymstr"), aligned(1))) = #export_name;                        \
                                                                                                        \
            /* Place symbol entry into symbol table */                                                  \
            static const NU_SYMBOL_ENTRY __nusymtab_##export_name                                       \
                __attribute__((section("nusymtab"), used)) =                                            \
                {(VOID *)&(symbol_name), __nusymstr_##export_name }

/* This macro exports a symbol for use by user-mode processes only.
   It uses the user-mode symbol table (nuusymtab). */
#define PROC_EXPORT_USYMBOL(symbol_name, export_name, trampoline_macro, symbol_addr_macro)              \
            /* First, extern the symbol */                                                              \
            extern typeof(symbol_name) symbol_name;                                                     \
                                                                                                        \
            /* Place a "stringified" version of the symbol into a string table */                       \
            static const char __nuusymstr_##export_name[]                                               \
                __attribute__((section("nuusymstr"), aligned(1))) = #export_name;                       \
                                                                                                        \
            /* Trampoline (if needed) */                                                                \
            trampoline_macro(symbol_name, export_name);                                                 \
                                                                                                        \
            /* Place symbol entry into symbol table */                                                  \
            static const NU_SYMBOL_ENTRY __nuusymtab_##export_name                                      \
                __attribute__((section("nuusymtab"), used)) =                                           \
                {(VOID *)&symbol_addr_macro(symbol_name, export_name), __nuusymstr_##export_name }

/* Thic macro exports a symbol for use by kernel-mode processes only.
   It uses the kernel-mode symbol table (nuksymtab). */
#define PROC_EXPORT_KSYMBOL(symbol_name, export_name)                                                   \
            /* First, extern the symbol */                                                              \
            extern typeof(symbol_name) symbol_name;                                                     \
                                                                                                        \
            /* Place a "stringified" version of the symbol into a string table */                       \
            static const char __nuksymstr_##export_name[]                                               \
                __attribute__((section("nuksymstr"), aligned(1))) = #export_name;                       \
                                                                                                        \
            /* Place symbol entry into symbol table */                                                  \
            static const NU_SYMBOL_ENTRY __nuksymtab_##export_name                                      \
                __attribute__((section("nuksymtab"), used)) =                                           \
                {(VOID *)&(symbol_name), __nuksymstr_##export_name }

#if (!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE)))

#if (CFG_NU_OS_KERN_PROCESS_CORE_SUP_USER_MODE == NU_TRUE)

/* Macro to export functions for both user-mode and kernel-mode processes */
#define NU_EXPORT_SYMBOL_ALIAS(symbol, alias)                                                           \
            PROC_EXPORT_USYMBOL(symbol, alias, NU_SYM_TRAMP_KERNEL_FUNC, NU_SYM_ADDR_KERNEL_FUNC);      \
            PROC_EXPORT_KSYMBOL(symbol, alias)

/* Macro to export functions for user-mode processes only. */
#define NU_EXPORT_USYMBOL_ALIAS(symbol, alias)                                                          \
            PROC_EXPORT_USYMBOL(symbol, alias, NU_SYM_TRAMP_KERNEL_FUNC, NU_SYM_ADDR_KERNEL_FUNC);

#else

/* Macro to export functions for both user-mode and kernel-mode processes */
#define NU_EXPORT_SYMBOL_ALIAS(symbol, alias)   PROC_EXPORT_SYMBOL(symbol, alias)

/* Macro to export functions for user-mode processes only. */
#define NU_EXPORT_USYMBOL_ALIAS(symbol, alias)  PROC_EXPORT_USYMBOL(symbol, alias, NU_SYM_TRAMP_PROCESS_DATA, NU_SYM_ADDR_PROCESS_DATA)

#endif

/* Macro to export functions for kernel-mode processes only */
#define NU_EXPORT_KSYMBOL_ALIAS(symbol, alias)  PROC_EXPORT_KSYMBOL(symbol, alias)

/* Macro to export data symbols for kernel-mode processes only */
#define NU_EXPORT_DATA_KSYMBOL_ALIAS(symbol, alias)                                                     \
            PROC_EXPORT_KSYMBOL(symbol, alias)

/* Macros to export symbols specifically for kernel-mode processes are only available to
   kernel-mode processes - these export macros are not visible to user-mode processes */
#define NU_EXPORT_KSYMBOL(symbol)               NU_EXPORT_KSYMBOL_ALIAS(symbol, symbol)
#define NU_EXPORT_DATA_KSYMBOL(symbol)          NU_EXPORT_DATA_KSYMBOL_ALIAS(symbol, symbol)

#else

/* Non-kernel mode processes need not use trampoline since they are already behind trampoline.
   So the symbols exported for use by both user-mode and kernel-mode processes need
   only be exported once - to the common symbol table */
#define NU_EXPORT_SYMBOL_ALIAS(symbol, alias)   PROC_EXPORT_SYMBOL(symbol, alias)

/* Macro to export functions for user-mode processes only. */
#define NU_EXPORT_USYMBOL_ALIAS(symbol, alias)  PROC_EXPORT_USYMBOL(symbol, alias, NU_SYM_TRAMP_PROCESS_DATA, NU_SYM_ADDR_PROCESS_DATA)

/* Define kernel-mode export macros to result in build-time error if these are invoked from a user-mode process build context. */
#define	NU_EXPORT_KSYMBOL(symbol)				"User-mode processes cannot export to kernel-mode symbol table."
#define NU_EXPORT_DATA_KSYMBOL(symbol)          NU_EXPORT_KSYMBOL(symbol)

#endif

/* Macro to export data symbols for both user-mode and kernel-mode processes. */
#define NU_EXPORT_DATA_SYMBOL_ALIAS(symbol, alias)                                                      \
            PROC_EXPORT_SYMBOL(symbol, alias)

/* Macro to export data symbols to user-mode processes only. */
#define NU_EXPORT_DATA_USYMBOL_ALIAS(symbol, alias)                                                     \
            PROC_EXPORT_USYMBOL(symbol, alias, NU_SYM_TRAMP_PROCESS_DATA, NU_SYM_ADDR_PROCESS_DATA);

/* Regular export macros that use symbol name as the export name */
#define NU_EXPORT_SYMBOL(symbol)                NU_EXPORT_SYMBOL_ALIAS(symbol, symbol)
#define NU_EXPORT_USYMBOL(symbol)               NU_EXPORT_USYMBOL_ALIAS(symbol, symbol)
#define NU_EXPORT_DATA_SYMBOL(symbol)           NU_EXPORT_DATA_SYMBOL_ALIAS(symbol, symbol)
#define NU_EXPORT_DATA_USYMBOL(symbol)          NU_EXPORT_DATA_USYMBOL_ALIAS(symbol, symbol)

/* Macros to export "naked" function symbols i.e. without tampoline -
   these are for those functions that do not require privilege level switch (mode switch). */

#if (!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE)))

#define NU_EXPORT_SYMBOL_ALIAS_NAKED            NU_EXPORT_DATA_SYMBOL_ALIAS
#define NU_EXPORT_USYMBOL_ALIAS_NAKED           NU_EXPORT_DATA_USYMBOL_ALIAS
#define NU_EXPORT_SYMBOL_NAKED                  NU_EXPORT_DATA_SYMBOL
#define NU_EXPORT_USYMBOL_NAKED                 NU_EXPORT_DATA_USYMBOL

#endif  /* (!defined(NU_PROCESS) || (defined(NU_PROCESS) && defined(NU_KERNEL_MODE))) */

/* Symbol Component - Used at the start of a symbol file to define the component in which the
                      symbols are defined.  This is used in conjunction with NU_KEEP_COMPONENT_SYMBOLS. */
#define NU_SYMBOL_COMPONENT(component_name)                                                             \
        /* Define global for this component */                                                          \
        UINT8 nusymtab_keep_##component_name;

/* Keep Component Symbols - This macro will ensure the symbols for the given component are included as
                            long as the NU_SYMBOL_COMPONENT macro is used as well. */
#define NU_KEEP_COMPONENT_SYMBOLS(component_name)                                                       \
        /* Extern the global associated with this component's symbols */                                \
        extern UINT8 nusymtab_keep_##component_name;                                                    \
                                                                                                        \
        /* Assign a value to the global */                                                              \
        nusymtab_keep_##component_name = 1;

/* Return NU_SUCCESS to these now unused macros */
#define NU_BIND_TASK_TO_KERNEL(task)    NU_SUCCESS
#define NU_BIND_HISR_TO_KERNEL(hisr)    NU_SUCCESS

/* Process exit codes specific to Nucleus (based on 128 + POSIX signal value that is closest to what Nucleus is doing) */
#include    <signal.h>
#define     EXIT_ABORT              (128 + SIGABRT) /* Exit code returned when abort() is called */
#define     EXIT_FPU_ERROR          (128 + SIGFPE)  /* Exit code returned when a floating point error occurs */
#define     EXIT_ILLEGAL_INST       (128 + SIGILL)  /* Exit code returned when illegal instruction executed */
#define     EXIT_KILL               (128 + SIGKILL) /* Exit code returned when NU_Kill() is called */
#define     EXIT_BUS_ERROR          (128 + SIGBUS)  /* Exit code returned for bus error */
#define     EXIT_INVALID_MEM        (128 + SIGSEGV) /* Exit code returned for invalid memory access */
#define     EXIT_STOP               (128 + SIGSTOP) /* Exit code returned when NU_Stop() is called indirectly via shell or symbol usage */
#define     EXIT_CONTINUE           (128 + SIGCONT) /* If returned by main(), root task is suspended instead of doing normal exit() */

/* Process action definitions */
#define     PROC_CMD_START          0               /* Start the process */
#define     PROC_CMD_STOP           1               /* Stop the process */

#else /* CFG_NU_OS_KERN_PROCESS_CORE_ENABLE */

/* Define minimal configuration symbol macros (disabled) */
#define NU_EXPORT_SYMBOL(symbol_name)
#define NU_EXPORT_KSYMBOL(symbol_name)
#define NU_EXPORT_DATA_SYMBOL(symbol_name)
#define NU_EXPORT_DATA_KSYMBOL(symbol_name)
#define NU_EXPORT_SYMBOL_ALIAS(symbol_name)
#define NU_EXPORT_KSYMBOL_ALIAS(symbol_name)
#define NU_EXPORT_DATA_SYMBOL_ALIAS(symbol_name)
#define NU_EXPORT_DATA_KSYMBOL_ALIAS(symbol_name)
#define NU_SYMBOL_COMPONENT(component_name)
#define NU_KEEP_COMPONENT_SYMBOLS(component_name)

#endif /* CFG_NU_OS_KERN_PROCESS_CORE_ENABLE */

/* Process names will be file names */
#define     PROC_NAME_LENGTH        CFG_NU_OS_KERN_PROCESS_FRAMEWORK_MAX_NAME_LENGTH

/* Process user-mode process highest task priority */
#define     NU_PROC_HIGHEST_TASK_PRIORITY   CFG_NU_OS_KERN_PROCESS_CORE_MIN_USER_TASK_PRIORITY

/* Process state definitions - There are 2 sets of states,
   the first is set by the call that enables the next state
   to occur and the second set is for the states being complete */
typedef enum
{
#ifdef  CFG_NU_OS_KERN_PROCESS_LINKLOAD_COMMON_ENABLE
    PROC_CREATED_STATE =            0,          /* The process is created */
    PROC_LOADING_STATE =            1,          /* The process is set to be loaded by the kernel thread */
#endif  /* CFG_NU_OS_KERN_PROCESS_LINKLOAD_COMMON_ENABLE */
    PROC_STARTING_STATE =           2,          /* The process is set to be started by the kernel thread */
#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE)
    PROC_ABORTED_STATE =            3,          /* The process and all its related artefacts are in an unconditionally suspended state */
#else
    PROC_DEINITIALIZING_STATE =     4,          /* The process is set to start the deinit thread */
    PROC_STOPPING_STATE =           5,          /* The process is set to be stopped by the kernel thread after deinit is complete */
    PROC_UNLOADING_STATE =          6,          /* The process is set to be unloaded by the kernel thread */
    PROC_KILLING_STATE =            7,          /* The process is set to be unloaded by the kernel thread from any complete state */
#endif
    PROC_STOPPED_STATE =            8,          /* The process is ready to be started or unloaded */
    PROC_STARTED_STATE =            9,          /* The process is running */
    PROC_FAILED_STATE =             10          /* The process failed during creation */
} NU_PROC_STATE;

/*******************************************************/
/* Structure for process information                   */
/*******************************************************/
typedef struct
{
    INT             pid;
    CHAR            name[PROC_NAME_LENGTH];
    NU_PROC_STATE   state;
    VOID *          load_addr;
    VOID            (*entry_addr)(UNSIGNED, VOID *);
    INT             exit_code;
    BOOLEAN         kernel_mode;

#if (CFG_NU_OS_KERN_PROCESS_CORE_DEV_SUPPORT == NU_TRUE)
    UINT64          time_stamp;
#endif /* CFG_NU_OS_KERN_PROCESS_CORE_DEV_SUPPORT */

} NU_PROCESS_INFO;

#ifdef CFG_NU_OS_KERN_PROCESS_CORE_ENABLE

/*******************************************************/
/* Structure for memory map information                */
/*******************************************************/
typedef struct
{
    CHAR            name[NU_MAX_NAME];
    VOID           *phys_base;
    VOID           *virt_base;
    UNSIGNED        size;
    UNSIGNED        attributes;
} NU_MEMORY_MAP_INFO;

/*******************************************************/
/* Structure for exception handling                    */
/*******************************************************/
typedef struct
{
    INT             pid;                    /* Process ID */
    NU_TASK        *task;                   /* Offending thread */
    VOID           *address;                /* Address where error occurred */
    VOID           *return_address;         /* Point of exception and return address */
    UNSIGNED        type;                   /* Type of error that occurred */
    BOOLEAN         interrupt_context;      /* Did exception occur in interrupt context? */
    BOOLEAN         kernel_process;         /* Did exception occur in kernel process / module? */
    VOID           *exception_information;  /* Additional information such as stack frame (arch specific) */
} NU_PROCESS_EXCEPTION;

/* Return values from exception handler */
#define     NU_PROC_SCHEDULE            0   /* Returning this from Process_Exception_Handler
                                               will have the system return to the scheduler
                                               when exception handling is complete */
#define     NU_PROC_RESUME_TASK         1   /* Returning this from Process_Exception_Handler
                                               will have the system return to the point of
                                               exception */
#define     NU_PROC_UNRECOVERABLE       2   /* Returning this from Process_Exception_Handler
                                               will result in execution going to the system error
                                               handler trap / while(1) */

/*******************************************************/
/* Defines that will only work properly with processes */
/*******************************************************/

/* Public interfaces */
STATUS      NU_Load(CHAR * name, INT * pid, VOID * load_addr, VOID * extension, UNSIGNED suspend);
STATUS      NU_Start(INT pid, VOID * args, UNSIGNED suspend);
STATUS      NU_Symbol(INT pid, CHAR * sym_name, VOID ** sym_addr);
STATUS      NU_Process_Timer_Init(NU_QUEUE * timer_queue);
STATUS      NU_Memory_Get_ID(INT *mem_id, VOID *phys_addr, CHAR *name);
STATUS      NU_Memory_Share(INT *mem_id, INT source_id, CHAR *name);
STATUS      NU_Memory_Map_Information(INT mem_id, NU_MEMORY_MAP_INFO *info);
STATUS      NU_Register_Process_Error_Handler(INT  pid, STATUS (*handler)(INT));

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

STATUS      NU_Get_Exit_Code(INT pid, INT * exit_code);
STATUS      NU_Symbol_Close (INT pid, BOOLEAN stop, BOOLEAN * stopped);
STATUS      NU_Stop(INT pid, INT exit_code, UNSIGNED suspend);
STATUS      NU_Unload(INT pid, UNSIGNED suspend);
STATUS      NU_Kill(INT pid, UNSIGNED suspend);

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE) */

#endif /* CFG_NU_OS_KERN_PROCESS_CORE_ENABLE */

INT         NU_Getpid(VOID);

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

UNSIGNED    NU_Established_Processes(VOID);
STATUS      NU_Processes_Information(UNSIGNED * max_processes, NU_PROCESS_INFO info_array[]);
STATUS      NU_Process_Information(INT pid, NU_PROCESS_INFO * info);

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE) */

#ifdef CFG_NU_OS_KERN_PROCESS_CORE_ENABLE

NU_WEAK_REF(UNSIGNED Process_Exception_Handler(NU_PROCESS_EXCEPTION *exception));

/* Structure definition for load extension */
typedef struct
{
    UNSIGNED        heap_size;          /* Size (in bytes) of process memory pool */
    UNSIGNED        stack_size;         /* Size (in bytes) of process root thread stack */
    UNSIGNED        load_addr_size;     /* If load address parameter to NU_Load() is not
                                           set to NU_LOAD_DYNAMIC, this field contains
                                           the size of the memory area pointed to by the load
                                           address. The load will fail if the size is
                                           not enough to satisfy process runtime memory
                                           footprint */
    BOOLEAN         kernel_mode;        /* Indicates if process should be loaded in kernel mode */
    BOOLEAN         use_global_heap;    /* Indicates if global shared heap should be
                                           used as the process heap. If true, no
                                           dedicated heap will be created for the process
                                           and the 'heap_size' parameter will be ignored. */

} NU_LOAD_EXTENSION;

/* Definitions */
#define NU_LOAD_DYNAMIC                 (VOID *)0xFFFFFFFF
#define NU_MEMORY_UNDEFINED             (VOID *)0xFFFFFFFF

#endif /* CFG_NU_OS_KERN_PROCESS_CORE_ENABLE */

/* No process ID */
#define PROC_NO_ID                      (-1)

/* Kernel process ID */
#define PROC_KERNEL_ID                  0

/* Application process ID */
#define PROC_APP_ID                     1

/* Define process set-up function */
VOID            PROC_Schedule(INT pid);
#define         NU_PROCESS_SETUP()              PROC_Schedule(PROC_NO_ID)

#else /* CFG_NU_OS_KERN_PROCESS_FRAMEWORK_ENABLE */

/* Versions of various macros used if process support disabled. */
#define NU_EXPORT_SYMBOL(symbol_name)
#define NU_EXPORT_KSYMBOL(symbol_name)
#define NU_EXPORT_DATA_SYMBOL(symbol_name)
#define NU_EXPORT_DATA_KSYMBOL(symbol_name)
#define NU_EXPORT_SYMBOL_ALIAS(symbol_name)
#define NU_EXPORT_KSYMBOL_ALIAS(symbol_name)
#define NU_EXPORT_DATA_SYMBOL_ALIAS(symbol_name)
#define NU_EXPORT_DATA_KSYMBOL_ALIAS(symbol_name)
#define NU_SYMBOL_COMPONENT(component_name)
#define NU_KEEP_COMPONENT_SYMBOLS(component_name)
#define NU_PROCESS_SETUP()
#define NU_Getpid()     0

#endif  /* CFG_NU_OS_KERN_PROCESS_FRAMEWORK_ENABLE */

#endif  /* PROC_EXTERN_H */
