#include <boot.h>
#include <mips/m32c0.h>
#include <mips/regdef.h>
#include <cps.h>
#include "csgnu_mips_defs.inc"
#include "irqid.h"
#include "drv_mdcirq_reg.h"

//#include "esal_ar_isr_defs_gcc.inc"
//#include "esal_ar_stk_defs_gcc.inc"

.data
.extern ESAL_GE_STK_System_SP
.extern ESAL_GE_ISR_OS_Entry
.extern ESAL_GE_ISR_OS_Nested_Entry
.extern ESAL_GE_STK_Unsol_Switch_Req
.extern SysProfiler_LISRNoContextSwitch
.extern TP_Update_Preempted_Time
.extern drv_mdcirq_Restore_VPE_state
.extern ECT_VPE_Trigger_Status
.extern CTI_Triggered_ex_handler
.extern processing_irqx_read

.text
.section "INTERRUPT_VECTOR", "ax"
.set push
.set nomips16
.set noreorder
interrupt_vector:
.globl    interrupt_vector
.ent  interrupt_vector
    IRQ0_VEC:
        addi    k0, zero, 0
        j   irq_handler
        nop
        nop
        nop
        nop
        nop
        nop
    IRQ1_VEC:
        addi    k0, zero, 1
        j   irq_handler
        nop
        nop
        nop
        nop
        nop
        nop
    IRQ2_VEC:
        addi    k0, zero, 2
        j   irq_handler
        nop
        nop
        nop
        nop
        nop
        nop
    IRQ3_VEC:
        addi    k0, zero, 3
        j   irq_handler
        nop
        nop
        nop
        nop
        nop
        nop
    IRQ4_VEC:
        addi    k0, zero, 4
        j   irq_handler
        nop
        nop
        nop
        nop
        nop
        nop
    IRQ5_VEC:
        addi    k0, zero, 5
        j   irq_handler
        nop
        nop
        nop
        nop
        nop
        nop
    IRQ6_VEC:
        addi    k0, zero, 6
        j   irq_handler
        nop
        nop
        nop
        nop
        nop
        nop
    IRQ7_VEC:
        addi    k0, zero, 7
        j   irq_handler
        nop
        nop
        nop
        nop
        nop
        nop

.size interrupt_vector,.-interrupt_vector
.end  interrupt_vector

.section L2CACHE_LOCK_ROCODE, "ax"
.globl    irq_handler
.ent  irq_handler
irq_handler:

    /* get VPE number */
    mfc0    k1, $15, 1
    ext     k1, k1, 0, 3

    ESAL_AR_STK_MIN_SAVE

    .set noreorder

    move    a0, k0
    sll     k0, k1, 2

#if defined(__MDCIRQ_OSIPI_SPECIAL_FLOW__)    
    /* Note: hard code for MDCIRQ vector ID(5)!!
             only MDCIRQ interrupt need to read ID here!! */
    addiu   t0, zero, 5
    bne     a0, t0, Read_MDCIRQ_ID_done
    nop    

    /*
    irqx = DRV_Reg32(MDCIRQ_VPE_IRQ_ID_BASE + (vpe_num<<2));
    */
#if defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
    li      t0, MDCIRQ_VPE_IRQ_ID_BASE
#else
    li      t0, MDCIRQ_GCR_VPE_IRQ_ID_BASE
#endif
    addu    t0, k0
    lw      t1, 0(t0)

    addiu   t2, k1, MD_IRQID_SW_TRIGGER_RESERVED_0
    bne     t1, t2, ipi_check_done
    nop

    j       ipi_handler
    nop

ipi_check_done:
    /* processing_irqx_read[vpe_num] = irqx; */
    la      t0, processing_irqx_read
    addu    t0, k0
    sw      t1, 0(t0) 

Read_MDCIRQ_ID_done:
#endif
    move    a1, sp

    /*    Check if this interrupt occurred during execution of another interrupt (nested) */
    //la      a2,ESAL_GE_ISR_Executing
    //add     a2, a2, k0
    //lw      a2, 0(a2)

    /*Using Userlocal replace ESAL_GE_ISR_Executing*/
    mfc0    a2, $4, 2
	
    bne     a2, zero, Nestedinterrupt
    nop

    la      sp,ESAL_GE_STK_System_SP
    add     sp, sp, k0
    lw      sp, 0(sp)

    la      a3,ESAL_GE_ISR_OS_Entry
    lw      a3,(a3)
    jalr    a3
    addi    sp, sp, -20

    mfc0    k1, $15, 1
    ext     k1, k1, 0, 3
    sll     k0, k1, 2

MIPS_ISR_restore:

    la      a2, ESAL_GE_STK_Unsol_Switch_Req
    add     a2, a2, k0
    lw      a2, 0(a2)
    beq     a2, zero, MIPS_ISR_Original_Task
    nop

    j       ESAL_AR_STK_Unsolicited_Switch
    nop

MIPS_ISR_Original_Task:

    //addi    sp, sp, (4) * (-1)
    sw      v0, 16(sp)
    move    a0, k1
    la      a3, SysProfiler_LISRNoContextSwitch
    jalr    a3
    nop
    lw      v0, 16(sp)
    //addi    sp, sp, (4) * (1)
    
    lw      sp, (v0)
	
Prev_Context_Restore:

    ESAL_AR_STK_MIN_RESTORE

    .set noreorder

    la    k1, ECT_VPE_Trigger_Status
    add   k1, k1, k0
    lw    k1, 0(k1)
    bnez  k1, EnterException
    nop
    eret
    nop
Nestedinterrupt:

    la      a3,ESAL_GE_ISR_OS_Nested_Entry
    lw      a3,(a3)
    jalr    a3
    addi    sp, sp, -16

    mfc0    k1, $15, 1
    ext     k1, k1, 0, 3
    sll     k0, k1, 2

    j       Prev_Context_Restore
    addi    sp, sp, 16

EnterException:
    j CTI_Triggered_ex_handler
    nop

    .set reorder
.end  irq_handler
.set pop
