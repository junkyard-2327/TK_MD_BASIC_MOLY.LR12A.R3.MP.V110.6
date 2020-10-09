/*************************************************************************
*
*             Copyright Mentor Graphics Corporation 2015
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
*************************************************************************

*************************************************************************
*
*   DESCRIPTION
*
*      This file contains constants and macros for Supervisor-User
*      Mode Switching.
*
*************************************************************************/
#ifndef _ARCH_PROC_MODE_H
#define _ARCH_PROC_MODE_H

#if ((CFG_NU_OS_KERN_PROCESS_CORE_SUP_USER_MODE == 1) && (!defined(CFG_NU_OS_KERN_PROCESS_MEM_MGMT_ENABLE)))
#error  "Supervisor / user mode switching for MIPS requires memory management support to be enabled as well."
#endif

#define PROC_AR_MODE_MASK       0x00000010    /* CPSR Mode bit 1 for user mode and 0 for kernel mode */
#define PROC_AR_USER_MODE       PROC_AR_MODE_MASK
#define PROC_AR_SUPERVISOR_MODE 0xFFFFFFEF

#define PROC_AR_SET_USER_MODE()                                                                 \
        asm volatile (" mfc0    $t1, $12\n"                                                     \
                      " ori     $t1, $t1, %0\n"                                                 \
                      " mtc0    $t1, $12\n"                                                     \
                      ::"i" (PROC_AR_USER_MODE))

/* Function prototypes */
VOID PROC_AR_User_Mode(VOID)__attribute__ ((section("nutramp")));
VOID PROC_AR_Software_Interrupt(INT exception_num, VOID *stack_frame);
VOID PROC_AR_Trampoline_Return(VOID) __attribute__ ((section("nutramp"),optimize("-fomit-frame-pointer"),noreturn));

/* Macro to switch to supervisor mode without trampoline,
   passing 1 to r12 will indicate that the system stack
   pointer doesn't need to be updated */
#define PROC_SUPERVISOR_MODE()  __asm volatile (" li        $t0, 0x1\n"                         \
                                                " syscall\n")

#ifndef NU_PROCESS

/* The context is root-kernel, use trampoline return service directly. */

/* Architecture specific trampoline code */
#define PROC_AR_TRAMPOLINE(symbol_name,export_name)                                             \
        asm ("    .section nutramp\n"                                                           \
             "__nutramp_" #export_name ":\n"                                                    \
             /* Save return address in 't0' so that it can be saved in SWI handler */           \
             "    move    $t0, $ra\n"                                                           \
                                                                                                \
             /* Perform service call to switch to supervisor mode */                            \
             "    syscall\n"                                                                    \
                                                                                                \
             /* Get address to return to after service call */                                  \
             "    la      $ra,1f\n"                                                             \
             "    lw      $ra, 0($ra)\n"                                                        \
                                                                                                \
             /* Get address of actual kernel service and call service */                        \
             "    la      $t0, 2f\n"                                                            \
             "    lw      $t0, 0($t0)\n"                                                        \
             "    jr      $t0\n"                                                                \
             "    nop\n"                                                                        \
                                                                                                \
             /* Local address copies to bypass relative addressing limits */                    \
             "1:  .long   PROC_AR_Trampoline_Return\n"                                          \
             "2:  .long " #symbol_name "\n")

#elif   (defined(NU_PROCESS) && defined(NU_KERNEL_MODE))

/* The context is kernel-mode process, use trampoline return service indirectly. */

/* Architecture specific trampoline code */
#define PROC_AR_TRAMPOLINE(symbol_name,export_name)                                             \
        asm ("    .section nutramp\n"                                                           \
             "__nutramp_" #export_name ":\n"                                                    \
             /* Save return address in 't0' so that it can be saved in SWI handler */           \
             "    move    $t0, $ra\n"                                                           \
                                                                                                \
             /* Perform service call to switch to supervisor mode */                            \
             "    syscall\n"                                                                    \
                                                                                                \
             /* Get address to return to after service call */                                  \
             "    la      $ra,1f\n"                                                             \
             "    lw      $ra, 0($ra)\n"                                                        \
             "    lw      $ra, 0($ra)\n"                                                        \
                                                                                                \
             /* Get address of actual kernel service and call service */                        \
             "    la      $t0, 2f\n"                                                            \
             "    lw      $t0, 0($t0)\n"                                                        \
             "    jr      $t0\n"                                                                \
             "    nop\n"                                                                        \
                                                                                                \
             /* Local address copies to bypass relative addressing limits */                    \
             "1:  .long   PROC_AR_Trampoline_Return_Address\n"                                  \
             "2:  .long " #symbol_name "\n")

#endif  /* NU_PROCESS */

#endif /* _ARCH_PROC_MODE_H */
