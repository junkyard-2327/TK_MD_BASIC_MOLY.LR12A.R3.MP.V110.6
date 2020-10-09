#ifndef __BOOT_ASM_H__
#define __BOOT_ASM_H__

#include <boot.h>
#include <boot_comm.h>
#include <sst_defs.h>




#if !defined(__COSIM_BYPASS_DRV__)
.macro INT_TRC_SAVE_RA_WO_FMA trace_id
    move    t0, ra
    li      a0, \trace_id
    li      a1, 0x0
    INT_TRC_ENTRY
    move    ra, t0
.endm
.macro INT_TRC_SAVE_RA trace_id
    move    t0, ra
    INT_TRC \trace_id
    move    ra, t0
.endm
.macro INT_TRC trace_id
    li      a0, \trace_id
    la      a1, MD_USCNTI_VAL_ADDR
    lw      a1, 0x0(a1)              // get current time
    INT_TRC_ENTRY
.endm
.macro INT_TRC_ENTRY
//#if defined(__SP_BOOTTRC_ENABLE__)
    la      a2, INT_bootup_entry
    lw      a2, 0x0(a2)
    jalr    a2
    nop
    INT_TRC_PFILE_FLOW
//#endif
.endm
.macro INT_TRC_INIT_MAGIC
    move    t0, ra
    la    a2, INT_TRC_MAGIC_PAT
    jalr  a2
    nop
    move    ra, t0
.endm
.macro INT_TRC_PFILE_FLOW
#if defined(__PROFILE_INIT__)
    la      a2, INC_TRC_PROFILE
    jalr    a2
    nop
#endif
.endm
#else
.macro INT_TRC_SAVE_RA trace_id
    // Bootup trace for MDM supported RTL Cosim
.endm
.macro INT_TRC trace_id
    // Bootup trace for MDM supported RTL Cosim
.endm
.macro INT_TRC_INIT_MAGIC

.endm
#endif /* !defined(__COSIM_BYPASS_DRV__) */

LEAF(INC_TRC_OLD_DESIGN)
//#if defined(__SP_BOOTTRC_ENABLE__)
    mfc0    a2, C0_EBASE
    ext     r23_cpu_num, a2, 0, 4
INT_init_VPE0_boot_trace:
    li      a3, 0x0
    bne     r23_cpu_num, a3, INT_init_VPE1_boot_trace
    nop

    li      a2, BOOTTRC_CCIF0_OLD_VPE0_ADDR
    b       INT_init_boot_trace_done
    nop
INT_init_VPE1_boot_trace:
    li      a3, 0x1
    bne     r23_cpu_num, a3, INT_init_VPE2_boot_trace
    nop
    li      a2, BOOTTRC_CCIF0_OLD_VPE1_ADDR
    b       INT_init_boot_trace_done
    nop
INT_init_VPE2_boot_trace:
    li      a3, 0x2
    bne     r23_cpu_num, a3, INT_init_VPE3_boot_trace
    nop
    li      a2, BOOTTRC_CCIF0_OLD_VPE2_ADDR
    b       INT_init_boot_trace_done
    nop
INT_init_VPE3_boot_trace:
    li      a2, BOOTTRC_CCIF0_OLD_VPE3_ADDR
INT_init_boot_trace_done:
    sw      a0, 0x0(a2)
    jr      ra
    nop
//#endif
END(INC_TRC_OLD_DESIGN)


LEAF(INC_TRC_NEW_DESIGN)
//#if defined(__SP_BOOTTRC_ENABLE__)
    mfc0    a2, C0_EBASE
    ext     r23_cpu_num, a2, 0, 4
INT_init_new_VPE0_boot_trace:
    li      a3, 0x0
    bne     r23_cpu_num, a3, INT_init_new_VPE1_boot_trace
    nop

    li      a2, BOOTTRC_CCIF0_NEW_VPE0_ADDR
    b       INT_init_new_boot_trace_done
    nop
INT_init_new_VPE1_boot_trace:
    li      a3, 0x1
    bne     r23_cpu_num, a3, INT_init_new_VPE2_boot_trace
    nop
    li      a2, BOOTTRC_CCIF0_NEW_VPE1_ADDR
    b       INT_init_new_boot_trace_done
    nop
INT_init_new_VPE2_boot_trace:
    li      a3, 0x2
    bne     r23_cpu_num, a3, INT_init_new_VPE3_boot_trace
    nop
    li      a2, BOOTTRC_CCIF0_NEW_VPE2_ADDR
    b       INT_init_new_boot_trace_done
    nop
INT_init_new_VPE3_boot_trace:
    li      a2, BOOTTRC_CCIF0_NEW_VPE3_ADDR
INT_init_new_boot_trace_done:

    sw      a0, 0x0(a2)  // a0 = index
    sw      a1, 0x4(a2)  // a1 = FMA

INT_init_boot_trace_emm_backup:
    sll     a3, r23_cpu_num, 2
    la      a2, INT_emm_bootup_addr
    add     a2, a2, a3    // a2 = INT_emm_bootup_addr[cpu id]
    lw      a3, 0x0(a2)   // a3 = value(INT_emm_bootup_addr[cpu id])
    ins     a1, a0, 0, BOOTUP_TRC_ID_LEN
    sw      a1, 0x0(a3)

    addi    a3, a3, 4  // update INT_emm_bootup_addr[cpu id]
    sw      a3, 0x0(a2)

INT_init_boot_trace_emm_backup_done:
    jr      ra
    nop
//#endif
END(INC_TRC_NEW_DESIGN)



LEAF(INT_TRC_MAGIC_PAT)

    mfc0    a0, C0_EBASE
    ext     r23_cpu_num, a0, 0, 4
    // r23_cpu_num = cpu id
    
    // check magic pattern
    // jump to old design if g_EMM_NEW_BOOTTRC_MAGIC != 0x7274626E
    li      a2, g_EMM_MAIN_BUFF_MAGIC
    li      a1, g_EMM_MAIN_BUFF_MAGIC_ADDR
    lw      a1, 0x0(a1)
    bne     a1, a2, hs1_old_design_magic_pattern
    nop

hs1_new_design_magic_pattern:
    // get the hs1 emm addr for specific cpu
    li      a1, g_EMM_MAIN_BUFF_ADDR_PTR
    lw      a1, 0x0(a1)                     // a1 = value(g_EMM_MAIN_BUFF_ADDR_PTR) = 0x4000_8000
    li      a2, BOOTUP_TRC_OFFSET           // 7kb
    add     a1, a1, a2                      // a1 = 0x4009_C000

    li      a2, VPE_BOOTUP_TRC_SIZE
    mul     a2, r23_cpu_num, a2             // a2 = 256byte * cpu_id
    add     a1, a1, a2                      // a1 = emm addr per vpe = 0x4009_C000 + (256byte * cpu_id)

    li      a2, BOOTUP_TRC_MAGIC
    add     a2, a2, r23_cpu_num
    sw      a2, 0x0(a1)                     // a2 = magic number for bootup trc

    sll     a3, r23_cpu_num, 2
    la      a2, INT_emm_bootup_addr
    add     a2, a2, a3                      // a2 = INT_emm_bootup_addr [cpu_id]
    addi    a1, a1, 4
    sw      a1, 0x0(a2)                     // a1 = next emm addr per vpe

    li      a2, BOOTTRC_CCIF0_NEW_MAGIC_ADDR
    la      a3, INC_TRC_NEW_DESIGN
    b       hs1_magic_pattern_done
    nop

hs1_old_design_magic_pattern:

    li      a2, BOOTTRC_CCIF0_OLD_MAGIC_ADDR
    la      a3, INC_TRC_OLD_DESIGN

hs1_magic_pattern_done:

    bne     r23_cpu_num, zero, hs1_magic_pattern_leave
    nop

    li      a0, INIT_MAGIC
    sw      a0, 0x0(a2)

    la      a1, INT_bootup_entry
    sw      a3, 0x0(a1)

hs1_magic_pattern_leave:

#if defined(__PROFILE_INIT__)
    la      a2, INT_profile_record          // profile record global array
    li      a1, PROFILE_INIT_VPE_SIZE
    mul     a1, r23_cpu_num, a1
    add     a1, a2, a1

    sll     a3, r23_cpu_num, 2
    la      a2, INT_profile_init_addr
    add     a2, a2, a3
    sw      a1, 0x0(a2)
#endif

    jr     ra
    nop
END(INT_TRC_MAGIC_PAT)


#if defined(__PROFILE_INIT__)
LEAF(INC_TRC_PROFILE)
    mfc0    a3, C0_EBASE
    ext     a3, a3, 0, 4 // cpu id

    la      a2, INT_profile_init_addr
    sll     a3, a3, 2
    add     a3, a2, a3 // a3 = INT_profile_init_addr[cpu id]
    lw      a2, 0x0(a3) // a2 = record address, a3 = INT_profile_init_addr[id] address

    sw      a0, 0x0(a2)
    sw      a1, 0x4(a2)

    addi    a2, a2, 8
    sw      a2, 0x0(a3) // update the next record entry

    jr      ra
    nop

END(INC_TRC_PROFILE)
#endif

#endif /* __BOOTARM_ASM_H__ */
