#***********************************************************************
#*
#*             Copyright 1993-2006 Mentor Graphics Corporation
#*                         All Rights Reserved.
#*
#* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
#* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
#* SUBJECT TO LICENSE TERMS.
#*
#***********************************************************************

#***********************************************************************
#*
#*  FILE NAME
#*
#*      esal_ar_stk_defs.inc
#*
#*  COMPONENT
#*
#*      ESAL - Embedded Software Abstraction Layer
#*
#*  DESCRIPTION
#*
#*      This file contains the architecture specific definitions,
#*      constants, etc, related to stacks
#*
#*  DATA STRUCTURES
#*
#*      None
#*
#*  DEPENDENCIES
#*
#*      None
#*
#*============================================================================
#*             HISTORY
#* Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*------------------------------------------------------------------------------
#* $Revision$
#* $Modtime$
#* $Log$
#*
#* 08 07 2015 hc.yang
#* [MOLY00136062] [System Service] Merge Nucleus/KAL changes from 91 Plus DEV to UMOLY Trunk
#* check in common folder modification
#*
#* 05 13 2015 hc.yang
#* [MOLY00111263] [MT6291PLUS] Fix build error for MIPS toolchain
#* modify asm code of nucleus to mips
#*
#* 03 19 2014 hc.yang
#* [MOLY00059827] [System Service][MOLY Kernel Internal Request]Add MTK header to each Nucleus Plus file for check-in history
#* .
#*
#*------------------------------------------------------------------------------
#* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*============================================================================
#***********************************************************************

# Define if floating point registers will be saved during context switches
# NOTE:  The C define must be changed in esal_ar_stk_defs.h to
#        match this define.
# NOTE:  This define will dictate what registers are contained
#        within solicited (TS) and unsolicited (AR) stack frames.

#    GBLL ESAL_AR_STK_FPU_SUPPORT 
#ESAL_AR_STK_FPU_SUPPORT SETL                    {FALSE}



# Startup / initialization stack size in bytes

#ESAL_AR_STK_STARTUP_STACK_SIZE  EQU          1024
.equ ESAL_AR_STK_STARTUP_STACK_SIZE , 1024

    #if defined(ESAL_AR_STK_FPU_SUPPORT)
    
# Size, in bytes, of max architecture stack frames (with floating point)
# for VFPv2, we need 32+4 more register space, FPSCR, FPEXC, FPINST, FPINST2, 32 General FP Regs ( + 144bytes)
.equ ESAL_AR_STK_MAX_FRAME_SIZE , 256
# Size, in bytes, of min architecture stack frames
.equ ESAL_AR_STK_MIN_FRAME_SIZE , 88

.equ ESAL_TS_STK_FRAME_SIZE , 92

# Offsets, in bytes, of registers in minimum stack frame
    #if defined(ARMV6_INST_ENABLE)
.equ ESAL_AR_STK_MIN_LR_OFFSET , 164
.equ ESAL_AR_STK_MIN_PC_OFFSET , 168
.equ ESAL_AR_STK_MIN_SPSR_OFFSET , 172
    #else  // ARMV6_INST_ENABLE
.equ ESAL_AR_STK_MIN_PC_OFFSET , 172
.equ ESAL_AR_STK_MIN_LR_OFFSET , 168
.equ ESAL_AR_STK_MIN_SPSR_OFFSET , 164
    #endif // ARMV6_INST_ENABLE

    #else

# Size, in bytes, of max architecture stack frames (without floating point)
.equ ESAL_AR_STK_MAX_FRAME_SIZE , 128
# Size, in bytes, of min architecture stack frames
.equ ESAL_AR_STK_MIN_FRAME_SIZE , 88

.equ ESAL_TS_STK_FRAME_SIZE , 44

# Offsets, in bytes, of registers in minimum stack frame
    #if defined(ARMV6_INST_ENABLE)
.equ ESAL_AR_STK_MIN_LR_OFFSET , 20
.equ ESAL_AR_STK_MIN_PC_OFFSET , 24
.equ ESAL_AR_STK_MIN_SPSR_OFFSET , 28
    #else // ARMV6_INST_ENABLE
.equ ESAL_AR_STK_MIN_PC_OFFSET , 28
.equ ESAL_AR_STK_MIN_LR_OFFSET , 24
.equ ESAL_AR_STK_MIN_SPSR_OFFSET , 20
    #endif // ARMV6_INST_ENABLE
    #endif // ESAL_AR_STK_FPU_SUPPORT

# Offset, in bytes, of LR in full stack frame


    #if defined(ARMV6_INST_ENABLE)
.equ ESAL_AR_STK_LR_OFFSET , (ESAL_AR_STK_MAX_FRAME_SIZE-12)
    #else // ARMV6_INST_ENABLE
.equ ESAL_AR_STK_LR_OFFSET , (ESAL_AR_STK_MAX_FRAME_SIZE-8)
    #endif // ARMV6_INST_ENABLE



# Based on ESAL_TS_REQ_STK_ALIGNMENT in esal_ts_cfg.h
 
#ESAL_AR_STK_ALIGNMENT_MASK  EQU              0x00000007
.equ ESAL_AR_STK_ALIGNMENT_MASK,0x00000007

.equ ESAL_AR_STK_ALIGNMENT_OFFSET , 3

# Offsets, in bytes, of registers on temp stack


.equ ESAL_AR_STK_TMP_R0_OFFSET,0
.equ ESAL_AR_STK_TMP_SPSR_OFFSET,4
.equ ESAL_AR_STK_TMP_LR_OFFSET,8


# VFP enable value

.equ ESAL_AR_STK_VFP_ENABLE,0x40000000

    .macro ESAL_AR_STK_FPU_SAVE 
#if defined(ESAL_AR_STK_FPU_SUPPORT)
    
    # Save required floating point registers on the current stack.
    # We need to save FPEXC first, and clear VFP exception state
    # So that we can safely read/store other VFP registers
#    MRS     r3,FPEXC                  # Store FPEXC first
#    STMDB   sp!,{r3}
#    BIC     r3,#(1<<31)               
#    MSR     FPEXC,r3                  # Clear EX bit
#    MRS     r3,FPINST
#    STMDB   sp!,{r3}         
#    MRS     r3,FPINST2
#    STMDB   sp!,{r3}                      
#    MRS     r3,FPSCR
#    STMDB   sp!,{r3}
#    VSTMDB  sp!,{s0-s31}        
#endif // ESAL_AR_STK_FPU_SUPPORT
    .endm
    
    
    .macro ESAL_AR_STK_FPU_RESTORE 
#if defined(ESAL_AR_STK_FPU_SUPPORT)
    # Restore required floating point registers from the current stack.

#    VLDMIA  sp!,{s0-s31}
#    LDMIA   sp!,{r3}
#    MSR     FPSCR,r3
#    LDMIA   sp!,{r3}
#    MSR     FPINST2,r3
#    LDMIA   sp!,{r3}
#    MSR     FPINST,r3
#    LDMIA   sp!,{r3}
#    MSR     FPEXC,r3
#endif // ESAL_AR_STK_FPU_SUPPORT

    .endm
    

#***********************************************************************
#* ESAL_AR_STK_MIN_INT_SAVE
#*
#* Save minimal amount of registers required for handling interrupts.
#* ESAL_AR_STK_Unsolicited_Switch() will save the rest.
#***********************************************************************

    .macro ESAL_AR_STK_MIN_INT_SAVE 

    # Offset stack pointer to start of the stack

    addi     $sp, $sp, -(ESAL_AR_STK_MIN_FRAME_SIZE)

    # Disable assembler use of the $at ($1) register

    .set     noat

    # Save $1 to the stack

    sw       $1, 0($sp)

    # Re-enable assembler use of the $at ($1) register

    .set     at

    # Save minium number of remainding registers

    sw       $2,  4($sp)
    sw       $3,  8($sp)
    sw       $4,  12($sp)
    sw       $5,  16($sp)
    sw       $6,  20($sp)
    sw       $7,  24($sp)
    sw       $8,  28($sp)
    sw       $9,  32($sp)
    sw       $10, 36($sp)
    sw       $11, 40($sp)
    sw       $12, 44($sp)
    sw       $13, 48($sp)
    sw       $14, 52($sp)
    sw       $15, 56($sp)
    sw       $24, 60($sp)
    sw       $25, 64($sp)

    # Saving high register

    mfhi     $27
    sw       $27, 68($sp)

    # Saving low register

    mflo     $27
    sw       $27, 72($sp)

    # Saving return register

    sw       $31, 76($sp)

    # Saving status register (SR)

    mfc0     $27, $12
    sw       $27, 80($sp)

    # Save EPC

    mfc0     $27, $14
    sw       $27, 84($sp)
    
    .endm


#***********************************************************************
#* ESAL_AR_STK_MIN_INT_RESTORE
#* 
#* Restore minimal amount of registers required for handling interrupts.
#***********************************************************************

    .macro ESAL_AR_STK_MIN_INT_RESTORE 

    # Restore all minimum registers to the
    # stack.

    # Disable assembler use of the $at ($1) register

    .set     noat

    # Restore $1 from the stack

    lw       $1,  0($sp)
    lw       $2,  4($sp)
    lw       $3,  8($sp)
    lw       $4,  12($sp)
    lw       $5,  16($sp)
    lw       $6,  20($sp)
    lw       $7,  24($sp)
    lw       $8,  28($sp)
    lw       $9,  32($sp)
    lw       $10, 36($sp)
    lw       $11, 40($sp)
    lw       $12, 44($sp)
    lw       $13, 48($sp)
    lw       $14, 52($sp)
    lw       $15, 56($sp)
    lw       $24, 60($sp)
    lw       $25, 64($sp)

    # Restoring high register

    lw       $27, 68($sp)
    mthi     $27

    # Restoring low register

    lw       $27, 72($sp)
    mtlo     $27

    # Restore return address

    lw       $31, 76($sp)

    # Restoring status register (SR)

    lw       $27, 80($sp)
    mtc0     $27, $12
    ssnop
    ssnop
    ehb

    # Get return address from stack frame (EPC)

    lw       $27, 84($sp)
    mtc0     $27, $14
    ssnop
    ssnop
    ehb

    # Recover stack space

    addi     $sp, $sp, ESAL_AR_STK_MIN_FRAME_SIZE

    # Re-enable assembler use of the $at ($1) register

    .set     at
    
    .endm


#***********************************************************************
#* ESAL_AR_STK_MIN_EXCEPT_SAVE
#* 
#* Save minimal amount of registers required for handling exceptions.
#***********************************************************************

    .macro ESAL_AR_STK_MIN_EXCEPT_SAVE 

    # Save exception return address on stack

#    STR     lr,[sp,#-4]!

    # No lr to save, so skip it on stack

#    SUB     sp,sp,#4

    # Put spsr in r14 and save remaining 
    # minimal context on stack

#    MRS     r14,spsr
#    STMDB   sp!,{r0-r3, r12, r14}

    .endm


#***********************************************************************
#* ESAL_AR_STK_MIN_EXCEPT_RESTORE
#* 
#* Restore minimal amount of registers required for handling exceptions.
#***********************************************************************

    .macro ESAL_AR_STK_MIN_EXCEPT_RESTORE 

    # Restore min stack registers

#    LDMIA   sp!,{r0-r3, r12, r14}

    # Restore SPSR

#    MSR     SPSR_cxsf,r14

    # Skip lr on stack

#    ADD     sp,sp,#4

    # Return to point of interrupt
    # NOTE: {pc}^ also restores the CPSR from the SPSR
    
#    LDMIA   sp!,{pc}^

    .endm
    
#    END
