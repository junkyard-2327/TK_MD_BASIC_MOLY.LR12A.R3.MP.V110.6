#***********************************************************************
#*
#*             Copyright 2011 Mentor Graphics Corporation
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
#*      csgnu_mips_defs.inc
#*
#*  DESCRIPTION
#*
#*      This file contains the architecture specific definitions,
#*      constants, etc, for CSGNU for MIPS
#*
#*  DATA STRUCTURES
#*
#*      None
#*
#*  DEPENDENCIES
#*
#*      None
#*
#***********************************************************************
#****************************
#* INCLUDE NECESSARY FILES  *
#****************************

    #include	"mips_ia_utils.h"


# Define if floating point registers will be saved during context switches
# NOTE:  The assembly define must be changed in esal_ar_stk_defs.h to
#        match this define (0 = NU_FALSE / 1 = NU_TRUE)
# NOTE:  This define will dictate what registers are contained
#        within solicited (TS) and unsolicited (AR) stack frames.

ESAL_AR_STK_SWITCH_TYPE_SIZE          =         4

ESAL_AR_STK_SWITCH_FRAME_SIZE         =         40

ESAL_AR_STK_MIN_FRAME_SIZE            =         100

ESAL_AR_STK_FPU_SUPPORT               =         0

# Startup / initialization stack size in bytes

ESAL_AR_STK_STARTUP_SIZE              =         1024

# Size of max and min architecture stack frames

.if ESAL_AR_STK_FPU_SUPPORT

ESAL_TS_STK_FPU_MAX_FRAME_SIZE        =         132

ESAL_AR_STK_MAX_FRAME_SIZE            =         ESAL_TS_STK_FPU_MAX_FRAME_SIZE + ESAL_AR_STK_MIN_FRAME_SIZE + ESAL_AR_STK_SWITCH_FRAME_SIZE

.else

ESAL_AR_STK_MAX_FRAME_SIZE            =         140

.endif # ESAL_AR_STK_FPU_SUPPORT

# Based on ESAL_TS_REQ_STK_ALIGNMENT in esal_ts_cfg.h

ESAL_AR_STK_ALIGNMENT_OFFSET          =         3

# Status register error level bit

ESAL_AR_STK_SR_ERL_BIT                =         0x00000004

# Initial Status Reg value

ESAL_AR_STK_SR_CU_BITS                =         0xF0000000

# Bitmask to clear the EXL bit in exception handling environment.
# User mode bit needs to be cleared at the same time otherwise subsequent
# privileged operations will not be allowed and result in further exceptions.
# Interrupts are kept disabled as well.

ESAL_AR_STK_SR_EXL_CLEAR_MASK         =         0xFFFFFFEC

# Offset of process ID field in the process control block
PROC_CB_ID_OFFSET                     =         12

#***********************************************************************
#* ESAL_AR_STK_MIN_SAVE
#*
#* Save minimal amount of registers required for handling interrupts.
#* ESAL_AR_STK_Unsolicited_Switch() will save the rest.
#***********************************************************************

.macro    ESAL_AR_STK_MIN_SAVE

    .set     noreorder

    # Offset stack pointer to start of the stack

    addi     $29, $29, -(ESAL_AR_STK_MIN_FRAME_SIZE)

    # Disable assembler use of the $at ($1) register

    .set     noat

    # Save $1 to the stack

    sw       $1, 0($29)

    # Re-enable assembler use of the $at ($1) register

    .set     at

    # Save minium number of remainding registers
    
    sw       $2,  4($29)
    sw       $3,  8($29)
    sw       $4,  12($29)
    sw       $5,  16($29)
    sw       $6,  20($29)
    sw       $7,  24($29)
    sw       $8,  28($29)
    sw       $9,  32($29)
    sw       $10, 36($29)
    sw       $11, 40($29)
    sw       $12, 44($29)
    sw       $13, 48($29)
    sw       $14, 52($29)
    sw       $15, 56($29)
    sw       $24, 60($29)
    sw       $25, 64($29)
    sw       $28, 68($29)

    # Saving high register

    mfhi     $3
    sw       $3, 72($29)

    # Saving low register

    mflo     $3
    sw       $3, 76($29)

    # Saving return register

    sw       $31, 80($29)

    # Saving status register (SR)

    mfc0     $3, $12
    sw       $3, 84($29)

    # Save EPC

    mfc0     $3, $14
    sw       $3, 88($29)

    # save vpecontrol register since HRT interrupt disable/enable function will use DMT/EMT
    mfc0     $2, $1, 1
    sw       $2, 92($29)
    # enable TE bit
    ori      $2, $2, 0x8000
    mtc0     $2, $1, 1
    ehb

    # save TCSchedule
    mfc0     $2, $2, 6
    sw       $2, 96($29)

    # check whether is HRT domain
    ext      $3, $27, 0, 1
    # set TCSchedule GRP to 2
    li       $2, MIU_DEF_HRT_DOM_THROT_VAL | 0x2
    bne      $3, $0, HRT_DOM
	nop
    # set TCSchedule GRP to 0
    li       $2, MIU_DEF_NORMAL_DOM_THROT_VAL | 0x0

HRT_DOM:
    mtc0     $2, $2, 6
    ehb


    .set     reorder

    .endm

#***********************************************************************
#* ESAL_AR_STK_MIN_INT_SAVE
#*
#* Save minimal amount of registers required for handling interrupts when
#* memory management support is enabled.
#* ESAL_AR_STK_Unsolicited_Switch() will save the rest.
#***********************************************************************

.macro    ESAL_AR_STK_MIN_INT_SAVE

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
    sw       $gp, 68($sp)

    # Saving high register

    mfhi     $27
    sw       $27, 72($sp)

    # Saving low register

    mflo     $27
    sw       $27, 76($sp)

    # Saving return register

    sw       $31, 80($sp)

    # Saving status register (SR)

    la       $27, ESAL_AR_ISR_SR_Copy
    lw       $27, 0($27)
    sw       $27, 84($sp)

    # Save EPC

    la       $27, ESAL_AR_ISR_EPC_Copy
    lw       $27, 0($27)
    sw       $27, 88($sp)

    .endm

#***********************************************************************
#* ESAL_AR_STK_MIN_RESTORE
#*
#* Restore minimal amount of registers required for handling interrupts.
#***********************************************************************

.macro    ESAL_AR_STK_MIN_RESTORE

    .set     noreorder

    # Restore all minimum registers to the
    # stack.

    # Disable assembler use of the $at ($1) register
    
    .set     noat

    # restore vpecontrol register
    lw       $2, 92($29)
    mtc0     $2, $1, 1

    # restore TCSchedule
    lw       $2, 96($29)
    mtc0     $2, $2, 6
    ehb

    # Restore $1 from the stack
    
    lw       $1,  0($29)
    lw       $2,  4($29)
    lw       $3,  8($29)
    lw       $4,  12($29)
    lw       $5,  16($29)
    lw       $6,  20($29)
    lw       $7,  24($29)
    lw       $8,  28($29)
    lw       $9,  32($29)
    lw       $10, 36($29)
    lw       $11, 40($29)
    lw       $12, 44($29)
    lw       $13, 48($29)
    lw       $14, 52($29)
    lw       $15, 56($29)
    lw       $24, 60($29)
    lw       $25, 64($29)
    lw       $28, 68($29)

    # Restoring high register

    lw       $27, 72($29)
    mthi     $27

    # Restoring low register

    lw       $27, 76($29)
    mtlo     $27

    # Restore return address

    lw       $31, 80($29)

    # Restoring status register (SR)

    lw       $27, 84($29)
    mtc0     $27, $12
    ehb

    # Get return address from stack frame (EPC)

    lw       $27, 88($29)
    mtc0     $27, $14
    ehb

    # Recover stack space

    addi     $29, $29, ESAL_AR_STK_MIN_FRAME_SIZE

    # Re-enable assembler use of the $at ($1) register

    .set     at

    .set     reorder

    .endm


# Define to allow conditional assembling of lowlevel ISR hook
# Setting this to TRUE (1) will allow a low-level hook to be executed in the
# interrupt handlers

ESAL_AR_ISR_HOOK_ENABLED          =         0

# Architecture Exception mask

ESAL_AR_ISR_CR_EXCCODE_MASK       =         0x0000001F



# Size of toolset stack frame.

.if ESAL_AR_STK_FPU_SUPPORT

ESAL_TS_STK_FPU_SWITCH_FRAME_SIZE     =             48

.endif

#if (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1)

#***********************************************************************
#* ESAL_AR_CPU_ID_GET
#*
#* Fetch the cpu ID for current CPU
#***********************************************************************
.macro ESAL_AR_CPU_ID_GET  reg
    .set push
    .set noat
     mfc0     \reg, $15, 1
     andi     \reg, \reg,0xF
     nop
     
.endm

#endif

