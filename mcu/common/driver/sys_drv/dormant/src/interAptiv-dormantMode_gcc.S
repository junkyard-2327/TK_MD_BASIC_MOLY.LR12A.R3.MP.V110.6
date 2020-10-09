#include <boot.h>
#include <mips/mt.h>
#include <mips/regdef.h>
#include <cps.h>
#include <mips/m32c0.h>
#include "interAptiv_dorm_macros_gcc.h"
#include <sst_temp_ex_handlers.h>

#define MAX_NUM_CORE                (0x2)
#define ALL_COHERENCE               (0x13)
#define DORM_INV_L1_CACHE           (0x0)
#define INV_L1_CACHE_ISPRAM         (0x0)
#define DORM_INV_L2_CACHE           (0x0)
#define INV_L2_CACHE_ISPRAM         (0x0)
#define DORM_PROBE_C0_COUNT         (0x0)
#define DORM_STEP_LOGGING           (0x1)
#define DORM_FRC_RECORD             (0x1)
#define ACCELERATION                (0x1)
#define MX_FEATURE                  (0x0)
#define DORM_REINIT_VPE1_EARLY      (0x1)
#define POLLING_LEAVE_DOMAIN_STATUS (0x0)

// For future implementation, this option is used to backup VPE1 contexts
#define VPE1_BACKUP                 (0x0)

#define C0_PERFCTL0 $25, 0
#define C0_PERFCTL1 $25, 2
#define C0_PERFCNT0 $25, 1
#define C0_PERFCNT1 $25, 3
#define C0_CONFIG7  $16, 7

// Debug loop macro by checking t5 == 1?
#define DBG_LOOP(label)             \
loop_##label:;                      \
    li      t5, 1;                  \
    bnez    t5, loop_##label;       \
    nop

.set noreorder              // Don't allow the assembler to reorder instructions
.set noat                   // Don't allow the assembler to use r1(at) for sythetic instr.

.extern dormant_save_mpu_core0
.extern dormant_save_mpu_core1
.extern dormant_restore_mpu_core0
.extern dormant_restore_mpu_core1
.extern drv_pdamon_configure_dormant_leave

// Every Core's VPE0 has a backup buffer that be declared in dormant_service.c
.extern dorm_c0_v0_emi_backup_buf_nc
.extern dorm_c1_v2_emi_backup_buf_nc
#if (VPE1_BACKUP == 0x1)
.extern dorm_c0_v1_emi_backup_buf_nc
.extern dorm_c1_v3_emi_backup_buf_nc
#endif
.extern dorm_c0_v0_emi_backup_buf_c
.extern dorm_c1_v2_emi_backup_buf_c
#if (VPE1_BACKUP == 0x1)
.extern dorm_c0_v1_emi_backup_buf_c
.extern dorm_c1_v3_emi_backup_buf_c
#endif

// Every Core's VPE0 has a stack buffer for dormant flow that be declared in dormant_service.c
.extern dorm_c0_v0_stack
.extern dorm_c1_v2_stack
#if (VPE1_BACKUP == 0x1)
.extern dorm_c0_v1_stack
.extern dorm_c1_v3_stack
#endif

/*
 * Every Core's VPEs except Core0 VPE0 should check dormant_recovery_lock in case
 * of they running dormant recovery earlier than Core0 VPE0 which would configure
 * CM registers
 */
.extern dormant_recovery_reset_lock
.extern dormant_recovery_lock
// Every Core's VPE0 would use its per-Core lock to notify VPE1 go back to assigned entry
.extern dormant_local_notify_VPE1_lock
.extern DCM_Service_Set_Dormant_Abort

#if (DORM_FRC_RECORD == 1)
.extern dormant_reset_frc
.extern dormant_abort_frc
.extern dormant_switch_coherent_frc
.extern dormant_enter_coherent_frc
#define MD_TOPSM_FRC_SRC    (0xA00D0830)
#endif

/*
 * Be aware of used registers in below macros, because those registers might be corrupted, e.g., s7
 */
#if (DORM_STEP_LOGGING  == 0x1)
/*
 * Every Core's VPEs would use this global pointer for step logging and per-VPE has 2 words
 * in which the second one would be logged in assembly
 */
.extern dormnat_dbg_ptr
#define STEP_LOGGING_VALUE_WITHOUT_FRC(value, sync_stype) \
    mfc0    a0, C0_EBASE;               \
    ext     a0, a0, 0, 4;               \
    la      a1, dormant_dbg_ptr;        \
    lw      a1, 0x0(a1);                \
    sll     a0, a0, 3;                  \
    addu    a1, a1, a0;                 \
    li      a0, value;                  \
    sw      a0, 0x0(a1);                \
    sync    sync_stype;
	
#define STEP_LOGGING_ADDR(addr, sync_stype) \
    mfc0    a0, C0_EBASE;               \
    ext     a0, a0, 0, 4;               \
    la      a1, dormant_dbg_ptr;        \
    lw      a1, 0x0(a1);                \
    sll     a0, a0, 3;                  \
    addu    a1, a1, a0;                 \
    la      a0, addr;                  \
    sw      a0, 0x0(a1);                \
	addiu   a1, a1, 0x4;                \
	li      a0, MD_TOPSM_FRC_SRC;       \
    lw      a0, 0x0(a0);				\
	sw      a0, 0x0(a1);			    \
    sync    sync_stype;
	
#define STEP_LOGGING_VALUE(value, sync_stype) \
    mfc0    a0, C0_EBASE;               \
    ext     a0, a0, 0, 4;               \
    la      a1, dormant_dbg_ptr;        \
    lw      a1, 0x0(a1);                \
    sll     a0, a0, 3;                  \
    addu    a1, a1, a0;                 \
    li      a0, value;              	\
    sw      a0, 0x0(a1);                \
	addiu   a1, a1, 0x4;                \
	li      a0, MD_TOPSM_FRC_SRC;       \
    lw      a0, 0x0(a0);				\
	sw      a0, 0x0(a1);			    \
    sync    sync_stype;	
#else
#define STEP_LOGGING_VALUE_WITHOUT_FRC(value, sync_stype)
#define STEP_LOGGING_ADDR(addr, sync_stype)
#define STEP_LOGGING_VALUE(value, sync_stype)
#endif

#if (DORM_PROBE_C0_COUNT == 1)
/*
 * Only Core0 VPE0 probes C0_COUNT information for observation puporse
 *      a. Observe points during recover: DBG_RECOVER_TS_PROBE()
 *      b. Observe points during backup: DBG_ENTER_TS_PROBE()
 */
.extern enter_CPU_cycles_2
.extern dormant_time_stamp_buf

#define DBG_RECOVER_TS_ENTER()          \
    mtc0    zero, C0_COUNT;

#define DBG_RECOVER_TS_PROBE(row_idx)   \
    li      a0, MD_TOPSM_FRC_SRC;       \
    lw      a1, 0x0(a0);                \
    la      k1, dormant_time_stamp_buf; \
    mfc0    a0, C0_EBASE;               \
    ext     a0, a0, 0, 4;               \
    sll     a0, a0, 2;                  \
    addu    k1, a0, k1;                 \
    sw      a1, (row_idx << 4)(k1);     \
done_##row_idx:

#if (DORM_FRC_RECORD == 1)
#define READ_TIME()                     \
    li      a0, MD_TOPSM_FRC_SRC;       \
    lw      k0, 0x0(a0);                
#else
#define READ_TIME()                     \
    mfc0    k0, C0_COUNT;               \
    sll     k0, k0, 1;                  
#endif

#define DBG_ENTER_TS_PROBE()            \
    READ_TIME()                         \
    la      a0, enter_CPU_cycles_2;     \
    mfc0    a1, C0_EBASE;               \
    ext     a1, a1, 0, 4;               \
    sll     a1, a1, 2;                  \
    addu    a0, a0, a1;                 \
    sw      k0, 0x0(a0);                \
    sync    0x2;

#else
#define DBG_RECOVER_TS_ENTER()
#define DBG_RECOVER_TS_PROBE(row_idx)
#define DBG_ENTER_TS_PROBE()
#endif

/********************************************************************************
 * Follow the SUM Rev 1.40, 6.1.2.1 Coherent to Non-Coherent Mode Transition    *
 *                                                                              *
 * Subroutine: void leave_coherence_domain(kal_uint32 current_core)             *
 * Usage     : This API is only support on self-core call                       *
 *                                                                              *
 ********************************************************************************/
LEAF(leave_coherence_domain)
    /*
     * Assume core index a0 = {0, 1, 2, 3}, 0 < a0 < MAX_CORE_NUM
     *      a) Check (a0 < MAX_NUM_CORE)? continue : goto dorm_leave_domain_done
     *      b) Check (a0 < 0) ? goto dorm_leave_domain_done : continue
     */
    move    r8_core_num, a0
    slti    a0, r8_core_num, MAX_NUM_CORE
    beqz    a0, dorm_leave_domain_done
    slt     a0, r8_core_num, zero
    bnez    a0, dorm_leave_domain_done

    /*
     * Initialize GCR_CONFIG_ADDR
     */
    //li      r22_gcr_addr, GCR_CONFIG_ADDR

    /*
     * Step 1: Swith to non-coherent CCA
     * Step 2: Flush dirty data form L1 D-Cache using IndexWritebackInvalidate CACHE instruction
     *         on all lines in the cache
     */
    /* Insure t3 would not corrupted by the subroutine and backup ra of leave_coherence_domain */
	STEP_LOGGING_ADDR(mips_clean_dcache, 0x3)
    addu    t3, zero, ra
    la      a1, mips_clean_dcache
    jalr    a1
    nop
    /* Restore ra of leave_coherence_domain */
    addu    ra, zero, t3

    /*
     * Step 3: Write GCR_CL_COHERENCE (Core Local GCR address 0x0008). Write 0 to all bits except
     *         bit for "self", which should stay set 1. This is required so that the core can issue
     *         a coherent SYNC (Step 5) to make sure all previous interventions are completed.
     */
    li      a2, GCR_CONFIG_ADDR
    li      a0, 0x1
    sllv    a0, a0, r8_core_num
    lw      a1, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a2)
    and     a1, a0, a1
    /* Read and check (GCR_CL_COHERENCE[core idx] == 1)? continue : goto dorm_leave_domain_done */
    bne     a0, a1, dorm_leave_domain_done
    nop
    sw      a1, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a2)

    /*
     * Step 4: a) Read GCR_CL_COHERENCE (ensures Step 3 has completed):
     *            lw a1, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a2)
     *         b) Clear the execution hazard and make sure the write has taken effect before
     *            the code continues
     */
    ehb

    /*
     * Step 5: Issue Coherent SYNC (intervention-only SYNC) is fine.
     */
    sync    0x2

    /*
     * Step 6: a) Write 0 to GCR_CL_COHERENCE[core idx] to completely remove core form coherence domain
     *         b) (OPTIONANL) Write 0 to GCR_CO_COHERENCE[core idx] to clear core idx coherent requests
     *            to other cores
     */
    sw      zero, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a2)

    /*
     * Step 7: Clear the execution hazard and make sure the write has taken effect before
     *         the code continues
     */
#if (POLLING_LEAVE_DOMAIN_STATUS == 0x1)
dorm_leave_domain_polling:
    lw      a1, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a2)
    bnez    a1, dorm_leave_domain_polling
    nop
#else
    ehb
#endif

dorm_leave_domain_done:
    jr  ra
    nop
END(leave_coherence_domain)

/********************************************************************************
 * a) Follow the SUM Rev 1.40, 6.1.2.2 Non-Coherent to Coherent Mode Transition *
 * b) Reference to join_domain.S                                                *
 *                                                                              *
 * Subroutine: void join_coherence_domain(kal_uint32 current_core)              *
 * Usage     : This API is only support on self-core call                       *
 *                                                                              *
 ********************************************************************************/
LEAF(join_coherence_domain)
    /*
     * Assume core index a0 = {0, 1, 2, 3}, 0 < a0 < MAX_CORE_NUM
     *      a) Check (a0 < MAX_NUM_CORE)? continue : goto dorm_join_domain_done
     *      b) Check (a0 < 0) ? goto dorm_join_domain_done : continue
     */
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    move    r8_core_num, a0
    slti    a0, r8_core_num, MAX_NUM_CORE
    beqz    a0, dorm_join_domain_done
    nop
    slt     a0, r8_core_num, zero
    bnez    a0, dorm_join_domain_done
    nop
#else
    move    r8_core_num, a0
    slti    a0, r8_core_num, MAX_NUM_CORE
    beqz    a0, dorm_join_domain_done
    slt     a0, r8_core_num, zero
    bnez    a0, dorm_join_domain_done
#endif

    /*
     * Initialize GCR_CONFIG_ADDR
     */
    //li      r22_gcr_addr, GCR_CONFIG_ADDR

    /*
     * Read and check (GCR_CL_COHERENCE[core idx] == 0)? continue : goto dorm_join_domain_done
     */
    li      a2, GCR_CONFIG_ADDR
    li      a0, 0x1
    sllv    a0, a0, r8_core_num
    lw      a1, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a2)
    and     a1, a0, a1
    bnez    a1, dorm_join_domain_done
    nop

    /*
     * Step 1: Caches must be initialized first (since last reset)
     * Step 2: There should be no data in the caches that will later be accessed coherently.
     *         Non-coherent data is treated as exclusive/modified which can lead to violations
     *         of the coherence protocol if other caches have copies of the data.
     */
    /* Insure t3 would not corrupted by the subroutine and backup ra of join_coherence_domain */
    addu    t3, zero, ra
    la      a1, mips_invalidate_dcache
    jalr    a1
    nop
    /* Restore ra of join_coherence_domain */
    addu    ra, zero, t3

    /*
     * Step 3: a) (OPTIONAL) The GCR_CO_COHERENECE and GCR_CL_COHERENCE are programmed to add the core
     *         to the coherent domain
     *         b) GCR_CL_COHERENCE is programmed to add the core to coherence domain
     */
    li      a2, GCR_CONFIG_ADDR
    ori     a1, zero, ALL_COHERENCE         // Set GCR_CL_COHERENCE = 0x13
    sw      a1, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a2)

    /*
     * Step 4: a) Read GCR_CL_COHERENCE (ensures Step 3 has completed):
     *            lw a1, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a2)
     *         b) Clear the execution hazard and make sure the write has taken effect before
     *            the code continues
     */
    ehb

    /*
     * Step 5: Switch to coherent Cache Coherence Attribute (CCA)
     * Step 6: Regular coherent programs can now start on this core
     */

dorm_join_domain_done:
    jr      ra
    nop
END(join_coherence_domain)

/********************************************************************************
 *                                                                              *
 * Subroutine: void get_emi_backup_buf_c(void)                                  *
 * Usage     : Every Core's VPEs reteive the buffer C ptr to v0, or $10         *
 *                                                                              *
 ********************************************************************************/
LEAF(get_emi_backup_buf_c)
    /*
     * Every Core's VPEs do load C emi backup buffer ptr
     */
#if (VPE1_BACKUP == 0x0)
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3        // i.e., Core0~1
    li      a1, 0x0             // Core0
    beq     a0, a1, dorm_la_c0_v0_buf_c
    nop
    li      a1, 0x1             // Core1
    beq     a0, a1, dorm_la_c1_v2_buf_c
    nop
dorm_la_c0_v0_buf_c:
    la      v0, dorm_c0_v0_emi_backup_buf_c
    b       dorm_la_cx_buf_c_done
    nop
dorm_la_c1_v2_buf_c:
    la      v0, dorm_c1_v2_emi_backup_buf_c
#else
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4        // i.e., VPE0~3
    li      a1, 0x0             // VPE0
    beq     a0, a1, dorm_la_c0_v0_buf_c
    nop
    li      a1, 0x2             // VPE2
    beq     a0, a1, dorm_la_c1_v2_buf_c
    nop
    li      a1, 0x1             // VPE1
    beq     a0, a1, dorm_la_c0_v1_buf_c
    nop
    li      a1, 0x3             // VPE3
    beq     a0, a1, dorm_la_c1_v3_buf_c
    nop
dorm_la_c0_v0_buf_c:
    la      v0, dorm_c0_v0_emi_backup_buf_c
    b       dorm_la_cx_buf_c_done
    nop
dorm_la_c1_v2_buf_c:
    la      v0, dorm_c1_v2_emi_backup_buf_c
    b       dorm_la_cx_buf_c_done
    nop
dorm_la_c0_v1_buf_c:
    la      v0, dorm_c0_v1_emi_backup_buf_c
    b       dorm_la_cx_buf_c_done
    nop
dorm_la_c1_v3_buf_c:
    la      v0, dorm_c1_v3_emi_backup_buf_c
#endif
dorm_la_cx_buf_c_done:
    lw      v0, 0x0(v0)         // Retreive backup buf
    jr      ra
    nop
    //DBG_LOOP(_buf_c)
END(get_emi_backup_buf_c)

/********************************************************************************
 *                                                                              *
 * Subroutine: void get_emi_backup_buf_nc(void)                                 *
 * Usage     : Every Core's VPEs reteive the buffer NC ptr to v0, or $10        *
 *                                                                              *
 ********************************************************************************/
.section "NONCACHED_ROCODE", "ax"
.global get_emi_backup_buf_nc
.ent get_emi_backup_buf_nc
get_emi_backup_buf_nc:
    /*
     * Every Core's VPEs do load NC emi backup buffer ptr
     */
#if (VPE1_BACKUP == 0x0)
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3        // i.e., Core0~1
    li      a1, 0x0             // Core0
    beq     a0, a1, dorm_la_c0_v0_buf_nc
    nop
    li      a1, 0x1             // Core1
    beq     a0, a1, dorm_la_c1_v2_buf_nc
    nop
dorm_la_c0_v0_buf_nc:
    la      v0, dorm_c0_v0_emi_backup_buf_nc
    b       dorm_la_cx_buf_nc_done
    nop
dorm_la_c1_v2_buf_nc:
    la      v0, dorm_c1_v2_emi_backup_buf_nc
#else
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4        // i.e., VPE0~3
    li      a1, 0x0             // VPE0
    beq     a0, a1, dorm_la_c0_v0_buf_nc
    nop
    li      a1, 0x2             // VPE2
    beq     a0, a1, dorm_la_c1_v2_buf_nc
    nop
    li      a1, 0x1             // VPE1
    beq     a0, a1, dorm_la_c0_v1_buf_nc
    nop
    li      a1, 0x3             // VPE3
    beq     a0, a1, dorm_la_c1_v3_buf_nc
    nop
dorm_la_c0_v0_buf_nc:
    la      v0, dorm_c0_v0_emi_backup_buf_nc
    b       dorm_la_cx_buf_nc_done
    nop
dorm_la_c1_v2_buf_nc:
    la      v0, dorm_c1_v2_emi_backup_buf_nc
    b       dorm_la_cx_buf_nc_done
    nop
dorm_la_c0_v1_buf_nc:
    la      v0, dorm_c0_v1_emi_backup_buf_nc
    b       dorm_la_cx_buf_nc_done
    nop
dorm_la_c1_v3_buf_nc:
    la      v0, dorm_c1_v3_emi_backup_buf_nc
#endif
dorm_la_cx_buf_nc_done:
    lw      v0, 0x0(v0)         // Retreive backup buf
    jr      ra
    nop
    //DBG_LOOP(_buf_nc)
END(get_emi_backup_buf_nc)

/********************************************************************************
 *                                                                              *
 * Subroutine: void enter_dormant_mode(kal_uint32 current_core)                 *
 * Usage     :                                                                  *
 *                                                                              *
 ********************************************************************************/
LEAF(enter_dormant_mode)
    /*
     * Backup GCR: a) Before using v0, a0, a1, t0, push them to current core's stack
     *             b) Restore them first and then save to the dorm_cx_vx_emi_backup_buf
     */
    addiu   sp, sp, -0xC        // sp = sp - 0xC
    sw      v0, 0x0(sp)         // Push v0
    sw      a0, 0x4(sp)         // Push a0
    sw      a1, 0x8(sp)         // Push a1
    sw      t0, 0xC(sp)         // Push t0
    STEP_LOGGING_VALUE(DORMANT_BACKUP_ENTER, 0x3)

    /*
     * Get dorm_cx_vx_emi_backup_buf cacheable ptr and save to a0
     * Backup ra is a MUST because we using a function to retreive backup buffer 
     */
    addu    t0, zero, ra
    la      a1, get_emi_backup_buf_c
    jalr    a1
    nop
    addu    ra, zero, t0 
    move    a0, v0

    // <TODO> Should we backup all of contexts?
    sw      AT, AT_OFFSET(a0)
    //sw      v0, v0_OFFSET(a0)
    lw      v0, 0x0(sp)         // Pop v0 to v0
    sw      v0, v0_OFFSET(a0)
    sw      v1, v1_OFFSET(a0)
    //sw      a0, a0_OFFSET(a0)
    lw      v0, 0x4(sp)         // Pop a0 to v0
    sw      v0, a0_OFFSET(a0)
    //sw      a1, a1_OFFSET(a0)
    lw      v0, 0x8(sp)         // Pop a1 to v0
    sw      v0, a1_OFFSET(a0)
    sw      a2, a2_OFFSET(a0)
    sw      a3, a3_OFFSET(a0)
    //sw      t0, t0_OFFSET(a0)
    lw      v0, 0xC(sp)         // Pop t0 to v0
    sw      v0, t0_OFFSET(a0)
    addiu   sp, sp, 0xC         // sp = sp + 0xC
    sw      t1, t1_OFFSET(a0)
    sw      t2, t2_OFFSET(a0)
    sw      t3, t3_OFFSET(a0)
    sw      t4, t4_OFFSET(a0)
    sw      t5, t5_OFFSET(a0)
    sw      t6, t6_OFFSET(a0)
    sw      t7, t7_OFFSET(a0)
    sw      s0, s0_OFFSET(a0)
    sw      s1, s1_OFFSET(a0)
    sw      s2, s2_OFFSET(a0)
    sw      s3, s3_OFFSET(a0)
    sw      s4, s4_OFFSET(a0)
    sw      s5, s5_OFFSET(a0)
    sw      s6, s6_OFFSET(a0)
    sw      s7, s7_OFFSET(a0)
    sw      t8, t8_OFFSET(a0)
    sw      t9, t9_OFFSET(a0)
    sw      k0, k0_OFFSET(a0)
    sw      k1, k1_OFFSET(a0)
    sw      gp, gp_OFFSET(a0)
    sw      sp, sp_OFFSET(a0)
    sw      fp, fp_OFFSET(a0)
    sw      ra, ra_OFFSET(a0)

    /*
     * Backup CP0 registers:
     *      a) normal
     *      b) MIPS32 MT ASE
     */
    mfc0    v0, C0_STATUS
    sw      v0, TC0_C0_STATUS_OFFSET(a0)
    mfc0    v0, C0_CONFIG7
    sw      v0, TC0_C0_CONFIG7_OFFSET(a0)
    mfc0    v0, C0_CONFIG5
    sw      v0, TC0_C0_CONFIG5_OFFSET(a0)
    mfc0    v0, C0_EBASE
    sw      v0, TC0_C0_EBASE_OFFSET(a0)
    mfc0    v0, C0_CDMMBASE
    sw      v0, C0_CDMMBASE_OFFSET(a0)
    /*
     * <TODO> Remember that current core's VPE1 and TC configuration
     * => This will be done by leave_dormant_mode that re-initialize VPE1 configuration
     */
    //mfc0    v0, C0_TCSTATUS
    //mfc0    v0, C0_TCRESTART
    //mfc0    v0, C0_TCBIND
    //mfc0    v0, C0_VPECONTROL
    //mfc0    v0, C0_VPECONF0
    //mfc0    v0, C0_MVPCONTROL
    //mfc0    v0, C0_MVPCONF0

    /*
     * <TODO> Backup GCR if all of the cores go into dormant mode
     * => This will be done by leave_dormant_mode that re-initialize GCR configuration
     */
    // 0x1F00_0000~0x1F00_7FFF

    /*
     * Backup ISPRAM, DSPRAM address base
     *      a) Set C0_ERRCTL.SPR[28] = 1 to make cache operation to I/DSPRAM
     *      b) Read ISPRAM base and DSPRAM base
     */
    li      v0, 0xFFFFFFFF
    mfc0    a1, C0_ERRCTL
    move    a2, a1
    ins     a2, v0, 28, 1
    mtc0    a2, C0_ERRCTL
    ehb
    // Read ISPRAM base address
    cache   0x4, 0x0(zero)
    ehb
    mfc0    v0, C0_ITAGLO
    sw      v0, ISPRAM_OFFSET(a0)
    // Read DSPRAM base address
    cache   0x5, 0x0(zero)
    ehb
    mfc0    v0, C0_DTAGLO
    sw      v0, DSPRAM_OFFSET(a0)
    // Restore C0_ERRCTL to clean C0_ERRCTL.SPR[28] = 0
    mtc0    a1, C0_ERRCTL
    ehb

    /*
     * Backup ISPRAM, DSPRAM size from custom GCR
     */
    li      a1, GCR_CUSTOM_ADDR
    lw      v0, 0xC0(a1)
    sw      v0, C0_ISPRAM_SIZE_OFFSET(a0)
    lw      v0, 0xC4(a1)
    sw      v0, C0_DSPRAM_SIZE_OFFSET(a0)
    lw      v0, 0xC8(a1)
    sw      v0, C1_ISPRAM_SIZE_OFFSET(a0)
    lw      v0, 0xCC(a1)
    sw      v0, C1_DSPRAM_SIZE_OFFSET(a0)

    /*
     * Backup ITC AddressMap0 and AddressMap1
     *      a) Set C0_ERRCTL.ITC[26] = 1 to make cache operation to ITC
     *      b) Write ITC mask to C0_DTAGLO and ITC base to C0_DTAGLO
     */
    li      v0, 0xFFFFFFFF
    mfc0    a1, C0_ERRCTL
    move    a2, a1
    ins     a2, v0, 26, 1
    mtc0    a2, C0_ERRCTL
    ehb
    // Read ITC mask
    cache   0x5, 0x8(zero)
    ehb
    mfc0    v0, C0_DTAGLO
    sw      v0, ITC_CONFIG_OFFSET(a0)
    // Read ITC base address
    cache   0x5, 0x0(zero)
    ehb
    mfc0    v0, C0_DTAGLO
    sw      v0, ITC_BASE_OFFSET(a0)
    // Restore C0_ERRCTL to clean C0_ERRCTL.ITC[26] = 1
    mtc0    a1, C0_ERRCTL
    ehb

    /*
     * <TODO> Backup per-TC C0_PERFCTL0-1, C0_PERFCNT0-1 and TC0 C0_TCCONTEXT
     * Notice that they are per-TC
     */
    mfc0    v0, C0_TCCONTEXT
    sw      v0, TC0_C0_TCCONTEXT_OFFSET(a0)
    // TC0
    mfc0    v0, C0_PERFCTL0
    sw      v0, TC0_C0_PERFCTL0_OFFSET(a0)
    mfc0    v0, C0_PERFCTL1
    sw      v0, TC0_C0_PERFCTL1_OFFSET(a0)
    mfc0    v0, C0_PERFCNT0
    sw      v0, TC0_C0_PERFCNT0_OFFSET(a0)
    mfc0    v0, C0_PERFCNT1
    sw      v0, TC0_C0_PERFCNT1_OFFSET(a0)
	mfc0    v0, C0_TCSCHEDULE
    sw      v0, TC0_C0_SCHEDULE_OFFSET(a0)
	

    // Config C0_VPECONTROL.TargTC[7:0] = TC1
    li      a3, 0x1
    mfc0    v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, a3, 0, 8        // insert TargTC
    mtc0    v0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb
    // Config C0_TCHALT.H[0] to halt target TC
    mftc0   v1, C0_TCHALT
    ehb
    li      v0, 0x1             // set Halt bit
    mttc0   v0, C0_TCHALT       // write C0_TCHALT
    ehb
    mftc0   v0, C0_PERFCTL0
    sw      v0, TC1_C0_PERFCTL0_OFFSET(a0)
    mftc0   v0, C0_PERFCTL1
    sw      v0, TC1_C0_PERFCTL1_OFFSET(a0)
    mftc0   v0, C0_PERFCNT0
    sw      v0, TC1_C0_PERFCNT0_OFFSET(a0)
    mftc0   v0, C0_PERFCNT1
    sw      v0, TC1_C0_PERFCNT1_OFFSET(a0)
    /* Every Core's VPE0 help to backup another VPE's C0_STATUS, C0_CONFIG7*/
    mftc0   v0, C0_STATUS
    sw      v0, TC1_C0_STATUS_OFFSET(a0)
    mftc0   v0, C0_CONFIG7
    sw      v0, TC1_C0_CONFIG7_OFFSET(a0) 
    // backup TCSCHEUDLE
    mftc0    v0, C0_TCSCHEDULE
    sw      v0, TC1_C0_SCHEDULE_OFFSET(a0)
    // Config C0_TCHALT.H[0] to unhalt TC1
    mttc0   v1, C0_TCHALT     // write C0_TCHALT
    ehb

    // Config C0_VPECONTROL.TargTC[7:0] = TC2
    li      a3, 0x2
    mfc0    v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, a3, 0, 8        // insert TargTC
    mtc0    v0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb
    // Config C0_TCHALT.H[0] to halt target TC
    //li      v0, 0x1             // set Halt bit
    //mttc0   v0, C0_TCHALT       // write C0_TCHALT
    //ehb
    mftc0   v0, C0_PERFCTL0
    sw      v0, TC2_C0_PERFCTL0_OFFSET(a0)
    mftc0   v0, C0_PERFCTL1
    sw      v0, TC2_C0_PERFCTL1_OFFSET(a0)
    mftc0   v0, C0_PERFCNT0
    sw      v0, TC2_C0_PERFCNT0_OFFSET(a0)
    mftc0   v0, C0_PERFCNT1
    sw      v0, TC2_C0_PERFCNT1_OFFSET(a0)
	// backup TCSCHEUDLE
	mftc0    v0, C0_TCSCHEDULE
    sw      v0, TC2_C0_SCHEDULE_OFFSET(a0)
    // Config C0_TCHALT.H[0] to unhalt TC2
    //mttc0   v1, C0_TCHALT     // write C0_TCHALT
    //ehb

    // Config C0_VPECONTROL.TargTC[7:0] = TC3
    li      a3, 0x3
    mfc0    v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, a3, 0, 8        // insert TargTC
    mtc0    v0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb
    // Config C0_TCHALT.H[0] to halt target TC
    //li      v0, 0x1             // set Halt bit
    //mttc0   v0, C0_TCHALT       // write C0_TCHALT
    //ehb
    mftc0   v0, C0_PERFCTL0
    sw      v0, TC3_C0_PERFCTL0_OFFSET(a0)
    mftc0   v0, C0_PERFCTL1
    sw      v0, TC3_C0_PERFCTL1_OFFSET(a0)
    mftc0   v0, C0_PERFCNT0
    sw      v0, TC3_C0_PERFCNT0_OFFSET(a0)
    mftc0   v0, C0_PERFCNT1
    sw      v0, TC3_C0_PERFCNT1_OFFSET(a0)
	// backup TCSCHEUDLE
	mftc0    v0, C0_TCSCHEDULE
    sw      v0, TC3_C0_SCHEDULE_OFFSET(a0)
    // Config C0_TCHALT.H[0] to unhalt TC3
    //mttc0   v1, C0_TCHALT     // write C0_TCHALT
    //ehb
dorm_pmu_backup_done:

    /*
     * Every Core's VPE0 will backup CP0 debug registers
     *      a) E.g., C0_WATCHLO, and C0_WATCHHI
     */
	STEP_LOGGING_ADDR(mddbg_backup, 0x3)
    addu    t4, zero, ra
    la      a2, mddbg_backup
    jalr    a2
    nop
    addu    ra, zero, t4

	STEP_LOGGING_ADDR(mddbg_backup, 0x3)
	addu    t4, zero, ra
	mfc0    a3, C0_EBASE
    ext     a1, a3, 1, 3   // $8 = t0, i.e., Core0~3
    li      a0, 0x0
    beq     a1, a0, dorm_Core0_save_MPU
    nop
    li      a0, 0x1
    beq     a1, a0, dorm_Core1_save_MPU
    nop
dorm_Core0_save_MPU:
	STEP_LOGGING_ADDR(dormant_save_mpu_core0, 0x3)
    la       a1, dormant_save_mpu_core0
    jalr     a1
    nop
    b       dorm_mpu_backup_done
    nop
dorm_Core1_save_MPU:
	STEP_LOGGING_ADDR(dormant_save_mpu_core1, 0x3)
    la       a1, dormant_save_mpu_core1
    jalr     a1
    nop
dorm_mpu_backup_done:	
	addu    ra, zero, t4

    /*
     * <TODO> Only Core0 VPE0 write this lock in case of other Cores
     * in dormant recovery execute sth earlier than Core0 set-up
     *      a) E.g., Core1~3 write CM2 GCR before Core0 re-initialize CM registers
     */
    mfc0    a1, C0_EBASE
    ext     a1, a1, 0, 4
    bnez    a1, dorm_write_lock_done
    nop
    la      a1, dormant_recovery_lock
    li      a2, 0x444F524D //DORM
    sw      a2, 0x0(a1)
    la      a1, dormant_recovery_reset_lock
    sw      a2, 0x0(a1)
dorm_write_lock_done:

    /*
     * <TODO> Every Core's VPE0 write this lock to notify VPE1 go back to schedule
     */
    mfc0    a1, C0_EBASE
    ext     a1, a1, 1, 3
    sll     a2, a1, 2
    la      a1, dormant_local_notify_VPE1_lock
    addu    a1, a1, a2
    li      a2, 0x444F524D //DORM
    sw      a2, 0x0(a1)

    /*
     * Leave coherency domain: backup ra to a register that
     * not being in use by leave_coherence_domain
     */
	STEP_LOGGING_VALUE(DORMANT_LEAVE_DOMAIN_ENTER, 0x3) 
    addu    t4, zero, ra
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3   // i.e., Core0~1
    la      a1, leave_coherence_domain
    jalr    a1
    nop
    addu    ra, zero, t4

#if (DORM_FRC_RECORD == 1)
    /*
     * Every Core's VPE0 would record frc dbg info when switch to non-coherent domain
     */
    li      a0, MD_TOPSM_FRC_SRC
    lw      a3, 0x0(a0)
    la      a0, dormant_switch_coherent_frc
    mfc0    a1, C0_EBASE
    ext     a1, a1, 1, 3
    sll     a1, a1, 2
    addu    a0, a0, a1
    sw      a3, 0x0(a0)
    sync    0x2
#endif
    /*
     * Every Core's VPE0 should clean out all pending requests in CM2 and do wait instruction 
     * to reach the sleep condition
     */

    STEP_LOGGING_VALUE(DORMANT_CPU_WAIT, 0x3)
    DBG_ENTER_TS_PROBE()
    //sync    0x7
    //wait
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    li      a1, 0x0
    beq     a0, a1, dorm_Core0_wait
    nop
    li      a1, 0x2
    beq     a0, a1, dorm_Core1_wait
    nop
dorm_Core0_wait:
    addu    t4, zero, ra
    la      a1, wait_instruction_ISPRAM0
    jalr    a1
    nop
    addu    ra, zero, t4
    b       dorm_abort
    nop
dorm_Core1_wait:
    addu    t4, zero, ra
    la      a1, wait_instruction_ISPRAM1
    jalr    a1
    nop
    addu    ra, zero, t4
dorm_abort:
// <TODO> [6293] Dormant abort
    STEP_LOGGING_VALUE(DORMANT_EXIT_WAIT_ABORT, 0x3)
#if (DORM_FRC_RECORD == 1)
    /*
     * Every Core's VPE0 would record frc dbg info when switch to non-coherent domain
     */
    li      a0, MD_TOPSM_FRC_SRC
    lw      a3, 0x0(a0)
    la      a0, dormant_abort_frc
    mfc0    a1, C0_EBASE
    ext     a1, a1, 1, 3
    sll     a1, a1, 2
    addu    a0, a0, a1
    sw      a3, 0x0(a0)
    sync    0x3
#endif

    /*
     * <TODO> Only Core0 VPE0 clean this lock in case of other Cores stock
     */
    mfc0    a1, C0_EBASE
    ext     a1, a1, 0, 4
    bnez    a1, dorm_abort_clean_lock_done
    nop
    la      a1, dormant_recovery_lock
    li      a2, 0x0
    sw      a2, 0x0(a1)
dorm_abort_clean_lock_done:

    /*
     * <TODO> Only Core0 VPE0 clean this resetlock in case of other Cores stock
     */
    mfc0    a1, C0_EBASE
    ext     a1, a1, 0, 4    
    bnez    a1, dorm_abort_clean_reset_lock_done 
    nop
    la      a1, dormant_recovery_reset_lock
    sw      zero, 0x0(a1)
dorm_abort_clean_reset_lock_done:

    /*
     * Every Core's VPE0 should call join_coheren_domain()
     */
	STEP_LOGGING_VALUE(DORMANT_JOIN_DOMAIN_ABORT, 0x3) 
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1   // i.e., VPE0~1
    bnez    a0, enter_dormant_mode_done
    nop
    addu    t4, zero, ra
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3   // i.e., Core0~1
    la      a1, join_coherence_domain
    jalr    a1
    nop
    /*
     * Every Core's VPE0 should call DCM_Service_Set_Dormant_Abort to record status
     */
	STEP_LOGGING_ADDR(DCM_Service_Set_Dormant_Abort, 0x3)  
    la      a1, DCM_Service_Set_Dormant_Abort
    jalr    a1
    nop
    addu    ra, zero, t4
enter_dormant_mode_done:
    jr      ra
    nop
END(enter_dormant_mode)


/********************************************************************************
 *                                                                              *
 * Subroutine : void dormant_mode_reset_interwork()                             *
 * Usage      :                                                                 *
 * Description: If this section code were put into bank 0 or bank 9, cpu        *
 *      relocating would cause exception and fail on leaving dormant            *
 ********************************************************************************/
//.section "AUROM_ROCODE", "ax"
.section "NONCACHED_ROCODE", "ax"
.global dormant_mode_reset_interwork
.ent dormant_mode_reset_interwork
dormant_mode_reset_interwork:
	// avoid to corrupt NMI info, the sequence could consume 3 PCMON history
	mtc0    a0, C0_KSCRATCH1 //will be used@get_emi_backup_buf_nc
	mtc0    a1, C0_KSCRATCH2 //will be used@get_emi_backup_buf_nc
	mtc0    ra, C0_KSCRATCH3 //if it is not real reset that please don't corrupt the ra value
	ehb
	/*
     * Get dorm_cx_vx_emi_backup_buf non-cacheable ptr
     */
	la      a1, get_emi_backup_buf_nc //use a0, a1, v0, ra
    jalr    a1
    nop
	
	// Add power down status check, if it is invalid status then jump to NMI_Handler
	mfc0    a0, C0_STATUS
	ext     a1, a0, 19, 1   //check Status.NMI
	li      a0, 0x1
	bne     a1, a0, dorm_do_reset_interwork 
	nop
	mfc0    a0, C0_KSCRATCH1
	mfc0    a1, C0_KSCRATCH2
	mfc0    ra, C0_KSCRATCH3
	lw      a0, BOOTSLAVE_OFFSET(v0)
	jr.hb   a0
	nop
dorm_do_reset_interwork:
	//save get_emi_backup_buf_nc return v0 to t2
	move    t2, v0
    DBG_RECOVER_TS_ENTER()
    STEP_LOGGING_VALUE_WITHOUT_FRC(DORMANT_RESTORE_ENTER, 0x3)
    DBG_RECOVER_TS_PROBE(0x0)

#if (DORM_FRC_RECORD == 1)
    /*
     * Every Core's VPEs would check BankA/B routing settings before records frc dbg info when dormant wakeup
     */
    // Set region attribute in order to write VA: BankA/B to MO port
    li      r22_gcr_addr, GCR_CONFIG_ADDR
    lui     a0, 0xA000                      //set CM2 Region 0 BASE = 0xA0000000
    sw      a0, GCR_REG0_BASE(r22_gcr_addr)
    lui     a0, 0xE000                      //set CM2 Region Mask = 0xE0000002
    li      a3, 0x1
    ins     a0, a3, 1, 1                    //set CM2_TARGET to IOCU0
    sw      a0, GCR_REG0_MASK(r22_gcr_addr)
    ehb

    /*
     * Install temporary exception handler for the dormant leave.
     * Currently dormant exception handler will stop PCMON so MO port needs to be routed before installing it.
     */
    INSTALL_TEMP_EXCEPTION_VECTOR

    li      a0, MD_TOPSM_FRC_SRC
    lw      a3, 0x0(a0)
    la      a0, dormant_reset_frc
    mfc0    a1, C0_EBASE
    ext     a1, a1, 0, 4
    sll     a1, a1, 2
    addu    a0, a0, a1
    sw      a3, 0x0(a0)
#endif  //(DORM_FRC_RECORD == 1)

    /*
     * <TODO>: Sould try to open I-$
     * Every Core's VPEs would check C0_CDMMBASE enabled or not, then restore it
     *      a) Enable cacheable instruction fetch by set [0x1FC100D8] = 0x02020302
     */
    //mfc0    a0, C0_CDMMBASE
    //andi    a0, a0, 0x400
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1
    bnez    a0, dorm_enable_CDMMBASE_done
    nop
    lw      a0, C0_CDMMBASE_OFFSET(t2)
    mtc0    a0, C0_CDMMBASE
	ehb
    // Extract address base
    srl     a0, a0, 11
    sll     a0, a0, 15
    // Read-modify-write the CCA of the Bank9 segment
#if (ACCELERATION == 0x1)
    lw      a1, 0xD8(a0)
    li      a2, 0x3    
    ins     a1, a2, 8, 4
    sw      a1, 0xD8(a0)

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    /* Due to MPU backup parameter(mpu_backup_core1) would be put to Bank 2, and Lv2 Cache for Bank 2 is WB(Data may keep in Lv2 cache and not flush to EMI).
       To let MPU could get valid data(mpu_backup_corex) from Bank 2 from Lv2 cache in dormant_restore_mpu_coreX(), we config Bank 2 segment CCA to WB here. */
    lw      a1, 0xD0(a0) /* Config SegmentControl_0 (MPU offset 0x10), config Bank 2 segment CCA to WB and XI */
    li      a2, 0xB    
    ins     a1, a2, 16, 8
    sw      a1, 0xD0(a0)
#endif
#endif

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    /*
     * Every Core's VPE0 do join cohrency domain
     */
	STEP_LOGGING_VALUE(DORMANT_JOIN_DOMAIN_RESTORE, 0x3) 
    mfc0    a0, C0_EBASE
    ext     r9_vpe_num, a0, 0, 1    // i.e., VPE0 or VPE1 per Core
    bnez    r9_vpe_num, check_coherence_domain //Per-CORE VPE0 join_coherence_domain, Per-CORE VPE1 check_coherence_domain
    nop
dorm_join_ch_domain:/* Only Per-CORE VPE0 do join_coherence_domain */
    ext     a0, a0, 1, 3            // i.e., Core0~1
    la      a1, join_coherence_domain
    jalr    a1
    nop
    b       dorm_join_ch_domain_done
    nop    

check_coherence_domain:/* Only Per-Core VPE1 run, confirm already enter coherence domain. */
    //GET_CORE_ID(a0)
    li      a2, GCR_CONFIG_ADDR
    lw      a1, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a2)
    li      a0, ALL_COHERENCE
    beq     a0, a1, dorm_join_ch_domain_done
    nop
    li      a0, -1 //release pipeline
    yield   a0     //release pipeline to avoid block VPE0      
    b       check_coherence_domain
    nop

dorm_join_ch_domain_done:/* Every VPE would go here */
    /*
     * Every VPE would record frc dbg info after enter to coherent domain
     */
    li      a0, MD_TOPSM_FRC_SRC
    lw      a2, 0x0(a0)
    la      a0, dormant_enter_coherent_frc
    mfc0    a1, C0_EBASE
    ext     a1, a1, 0, 4
    sll     a1, a1, 2
    addu    a0, a0, a1
    sw      a2, 0x0(a0)
    sync    0x2    
#endif

dorm_enable_CDMMBASE_done:

dormant_mode_reset_interwork_done:
    la      a0, leave_dormant_mode
    jr.hb   a0
    nop
END(dormant_mode_reset_interwork)


LEAF(enable_spram)
    move    a3, ra
    /*
     * Every Core's VPEs retreive the base of dormant backup container, t2 is reserved as global register
     * Do not use t2
     */
    la      a1, get_emi_backup_buf_nc
    jalr    a1
    nop
    move    t2, v0

    /*
     * Every Core's VPE0 restore ISPRAM, DSPRAM base address
     *      a) Set C0_ERRCTL.SPR[28] = 1 to make cache operation to SPRAM
     *      b) Write ISPRAM base to C0_ITAGLO and DSPRAM base C0_DTAGLO
     */
    mfc0    a0, C0_EBASE
    ext     r9_vpe_num, a0, 0, 1    // $9 = t1, i.e., VPE0 or VPE1 per Core
    bnez    r9_vpe_num, dorm_spram_base_done
    nop
dorm_spram_base:
    li      a0, 0xFFFFFFFF
    mfc0    a1, C0_ERRCTL
    move    a2, a1
    ins     a2, a0, 28, 1
    mtc0    a2, C0_ERRCTL
    ehb
    // Write ISPRAM base address
    lw      a0, ISPRAM_OFFSET(t2)
    mtc0    a0, C0_ITAGLO
    ehb
    cache   0x8, 0x0(zero)
    ehb
    // Write DSPRAM base address
    lw      a0, DSPRAM_OFFSET(t2)
    mtc0    a0, C0_DTAGLO
    ehb
    cache   0x9, 0x0(zero)
    ehb
    // Restore C0_ERRCTL to clean C0_ERRCTL.SPR[28] = 0
    mtc0    a1, C0_ERRCTL
    ehb
    //DBG_LOOP(0_3)
dorm_spram_base_done:
    move    ra, a3
    jr      ra
    nop
END(enable_spram)


/********************************************************************************
 *                                                                              *
 * Subroutine : void leave_dormant_mode(kal_uint32 current_core)                *
 * Description: The subroutine resides Bank 0, unmapped to PA Bank0, UC         *
 *      a) Before C0_STATUS.BEV[22] is cleared, all other exception vector:     *
 *          1) Legacy mode + BEVOV: 2'b10||SI_ExceptionBase[29:12]||0x380       *
 *          2) EVA mode           : SI_ExceptionBase[31:12]||0x380              *
 *      b) After C0_STATUS.BEV[22] is cleared, all other exception vector:      *
 *         EBase[31:12]||0x180                                                  *
 *                                                                              *
 ********************************************************************************/
#if (ACCELERATION == 0x1)
LEAF(leave_dormant_mode)
#else
.section "NONCACHED_ROCODE", "ax"
.global leave_dormant_mode
.ent leave_dormant_mode
leave_dormant_mode:
#endif
    /* Every Core's VPEs disable interrupt because C0_STATUS.IE[0] is undefined after reset */
    di
    ehb
    /* <Others Core>
     * <TODO> Core1 VPE0 check this lock in case of executing sth earlier
     * than Core0's set-up in dormant recovery
     *      a) E.g., Core1 using cacheable variable before Core0 re-initialize init_cm_wt
     */
	STEP_LOGGING_VALUE(DORMANT_RESET_LOCK_ENTER, 0x3)
    mfc0    a0, C0_EBASE
    ext     r23_cpu_num, a0, 0, 4    // i.e., VPE0~3
    beqz    r23_cpu_num, dorm_check_reset_lock_done 
    nop
dorm_clean_reset_lock_done:
    la      a1, dormant_recovery_reset_lock
    lw      a2, 0x0(a1)
    bnez    a2, dorm_clean_reset_lock_done
    nop
dorm_check_reset_lock_done:

    DBG_RECOVER_TS_PROBE(0x1)
    //DBG_LOOP(0_0)
    /*
     * Initialize global resgisters in which defined @ boot.h
     * $2 - $7 (v0, v1 a0 - a3) reserved for program use
     */
    mfc0    a0, C0_EBASE
    /* $23 = s7 Unique per vpe "cpu" identifier (CP0 EBase[CPUNUM]), i.e., VPE0~3 */
    ext     r23_cpu_num, a0, 0, 4
    /* $8 = t0 Core number. Only core 0 is active after reset, i.e., Core0~1 */
    ext     r8_core_num, a0, 1, 3
    /* $9 = t1 MT ASE VPE number that this TC is bound to (0 if non-MT.), i.e., VPE0 or VPE1 per Core */
    ext     r9_vpe_num, a0, 0, 1

    /*
     * Retreive the base of dorm_cx_vx_emi_backup_buf in t2
     * MUST be aware of using t2
     */
     la      a1, enable_spram
     jalr    a1
     nop

    /*
     * Every Core's VPEs switch to dormant mode stack
     */
    mfc0    a0, C0_EBASE
    ext     r23_cpu_num, a0, 0, 4   // i.e., VPE0~3
    li      a1, 0x0                 // VPE0
    beq     r23_cpu_num, a1, dorm_la_c0_v0_stack_buf
    nop
    li      a1, 0x2                 // VPE2
    beq     r23_cpu_num, a1, dorm_la_c1_v2_stack_buf
    nop
    li      a1, 0x1                 // VPE1
    beq     r23_cpu_num, a1, dorm_la_c0_v1_stack_buf
    nop
    li      a1, 0x3                 // VPE3
    beq     r23_cpu_num, a1, dorm_la_c1_v3_stack_buf
    nop
dorm_la_c0_v0_stack_buf:
    la      a0, dorm_c0_v0_stack
    b       dorm_la_cx_stack_buf_done
    nop
dorm_la_c0_v1_stack_buf:
    la      a0, dorm_c0_v1_stack
    b       dorm_la_cx_stack_buf_done
    nop
dorm_la_c1_v2_stack_buf:
    la      a0, dorm_c1_v2_stack
    b       dorm_la_cx_stack_buf_done
    nop
dorm_la_c1_v3_stack_buf:
    la      a0, dorm_c1_v3_stack
dorm_la_cx_stack_buf_done:
    lw      sp, 0x0(a0)             // Retreive dormant stack buf
	addi    sp, sp, -16             // M16 caller reserve 16 bytes
    /*
     * Restore here and follow init flow
     * 1. Clear C0_CAUSE.WP[22] to avoid watch exception upon user code entry, IV, and software interrupts
     * 2. Clear timer interrupt. (Count was cleared at the reset vector to allow timing boot
     */
    mtc0    zero, C0_CAUSE
    mtc0    zero, C0_COMPARE
    DBG_RECOVER_TS_PROBE(0x2)

    /*
     * Only Core0 VPE0 do:
     *      a) disable_L2_init_stage @ l2cache.S: configure GCR_BASE(0x1F00_0008) by enabling
     *         UC CCA override L2 and default route to MM port
     *      b) init_cm @ init_cm.S:
     *         - enable GCR ACCESS(0x1F00_0020),
     *         - initialize GCR_REG0~5_BASE(0x1F00_0000 + 0x90, 0xA0, 0xB0, 0xC0, 0x190, 0x1A0)
     *           and GCR_REG0~5_MASK(0x1F00_0000 + 0x98, 0xA8, 0xB8, 0xC8, 0x198, 0x1A8) and
     *           set GCR_REG0~1_BASE and GCR_REG0~1_MASK
     *         - configure and enable GCR_CUSTOM_ADDR(0x1F00_0060), CPC_P_BASE_ADDR(0x1F00_0088)
     */
    mfc0    a0, C0_EBASE
    ext     r23_cpu_num, a0, 0, 4   // i.e., VPE0~3
    bnez    r23_cpu_num, dorm_init_cm2_done
    nop
dorm_init_cm2:
	STEP_LOGGING_ADDR(disable_L2_init_stage, 0x3)
    la      a1, disable_L2_init_stage // Would modify r8_core_num = [0x1F00_2028]
    jalr    a1
    nop
    //DBG_LOOP(0_1)
	STEP_LOGGING_ADDR(init_cm, 0x3)
    la      a1, init_cm
    jalr    a1
    nop
    /*
     * Restore ISPRAM, DSPRAM size to custom GCR to enable backdoor access
     *      a) It has dependency on enable GCR_CUSTOM_ADDR
     */ 
    li      a1, GCR_CUSTOM_ADDR
    lw      a0, C0_ISPRAM_SIZE_OFFSET(t2)
    sw      a0, 0xC0(a1)
    lw      a0, C0_DSPRAM_SIZE_OFFSET(t2)
    sw      a0, 0xC4(a1)
    lw      a0, C1_ISPRAM_SIZE_OFFSET(t2)
    sw      a0, 0xC8(a1)
    lw      a0, C1_DSPRAM_SIZE_OFFSET(t2)
    sw      a0, 0xCC(a1)
    //DBG_LOOP(0_2)
dorm_init_cm2_done:
    DBG_RECOVER_TS_PROBE(0x3)

    /*
     * Every Core's VPE0 do L1 cache_initialization
     *      a) l1_cache_init @ l1caches.S: would access variables which declared .data (VA: Bank6)
     *         in l1caches.S and l2cache.S thus set CFG4 temporarily
     *         -  r8_core_num = t0 will be corrupted, restore it from C0_EBASE again
     */
    mfc0    a0, C0_EBASE
    ext     r9_vpe_num, a0, 0, 1    // i.e., VPE0 or VPE1 per Core
    bnez    r9_vpe_num, dorm_init_L1_done
    nop
dorm_init_L1:
#if (DORM_INV_L1_CACHE == 1)
	STEP_LOGGING_VALUE(DORMANT_L1CACHE_INIT, 0x3)
#if (INV_L1_CACHE_ISPRAM == 1)
    mfc0    a0, C0_EBASE
    ext     r23_cpu_num, a0, 0, 4   // i.e., VPE0~3
    li      a0, 0x0
    beq     r23_cpu_num, a0, dorm_Core0_inv_L1
    nop
    li      a0, 0x2
    beq     r23_cpu_num, a0, dorm_Core1_inv_L1
    nop
dorm_Core0_inv_L1:
    la      a1, mips_invalidate_icache_ISPRAM0
    jal     a1
    nop
    la      a1, mips_invalidate_dcache_ISPRAM0
    jal     a1
    nop
    b       dorm_inv_L1_done
    nop
dorm_Core1_inv_L1:
    la      a1, mips_invalidate_icache_ISPRAM1
    jal     a1
    nop
    la      a1, mips_invalidate_dcache_ISPRAM1
    jal     a1
    nop
dorm_inv_L1_done:
#else
    la      a1, mips_invalidate_icache_init
    jal     a1
    nop
    //DBG_LOOP(0_4)
    la      a1, mips_invalidate_dcache_init
    jal     a1
    nop
    //DBG_LOOP(0_5)
#endif
#endif
dorm_init_L1_done:
	STEP_LOGGING_ADDR(drv_pdamon_configure_dormant_leave, 0x3)
	la      a1, drv_pdamon_configure_dormant_leave
    jalr    a1
    nop
	
    DBG_RECOVER_TS_PROBE(0x4)

    /*
     * Every Core's VPEs do set MPU segments and regions for every Banks:
     *      a) MPU_Init @ mpu.c
     */
	//mfc0    a0, C0_EBASE
    //ext     r8_core_num, a0, 0, 1   // i.e., VPE0 or VPE1 per Core
    //bnez    r8_core_num, dorm_init_MPU_done
	mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4        // i.e., VPE0~3
    li      a1, 0x0             // VPE0
    beq     a0, a1, dorm_mpu_c0_v0
    nop
    li      a1, 0x2             // VPE2
    beq     a0, a1, dorm_mpu_c1_v2
    nop
    b		dorm_init_MPU_done
    nop	 
dorm_mpu_c0_v0:
	STEP_LOGGING_ADDR(dormant_restore_mpu_core0, 0x3)
	la      a1, dormant_restore_mpu_core0
    jalr    a1
    nop
	b		dorm_init_MPU_done
    nop	 
dorm_mpu_c1_v2:	
	STEP_LOGGING_ADDR(dormant_restore_mpu_core1, 0x3)
    la      a1, dormant_restore_mpu_core1
    jalr    a1
    nop
	
    //DBG_LOOP(0_6)
dorm_init_MPU_done:
    DBG_RECOVER_TS_PROBE(0x5)

    /*
     * Only Core0 VPE0 do:
     *      a) <TODO> init_L23 @ l2cache.S: L2/L3 cache initialization. leave_dormant_mode
     *         should not do this, L2$ is sleep type SRAM (i.e., data retaintion)
     *      b) enable_L23 @ l2cache.S: configure GCR_BASE(0x1F00_0008) by diabling CCA override
     *      c) init_cm_wt @ init_cm.S: config L2 WT by setting GCR_REG2~5_BASE and GCR_REG2~5_MASK
     */
    mfc0    a0, C0_EBASE
    ext     r23_cpu_num, a0, 0, 4   // i.e., VPE0~3
    bnez    r23_cpu_num, dorm_init_L2_done
    nop
dorm_init_L2:
#if (DORM_INV_L2_CACHE == 1)
	STEP_LOGGING_VALUE(DORMANT_L2_INIT_DONE, 0x3)
#if (INV_L2_CACHE_ISPRAM == 1)
    la      a1, init_L23_ISPRAM0
    jalr    a1
    nop
#else
    la      a1, init_L23
    jalr    a1
    nop
#endif
#endif
	STEP_LOGGING_ADDR(enable_L23, 0x3)
    la      a1, enable_L23
    jalr    a1
    nop
    //DBG_LOOP(0_7)
	STEP_LOGGING_ADDR(init_cm_wt, 0x3)
    la      a1, init_cm_wt
    jalr    a1
    nop
	
    /*
     * <TODO> Only Core0 VPE0 clean this resetlock in case of other Cores stock
     */
    la      a1, dormant_recovery_reset_lock
    sw      zero, 0x0(a1)
    //DBG_LOOP(0_8)
dorm_init_L2_done:
    DBG_RECOVER_TS_PROBE(0x6)

    /* Every Core's VPEs do load NC emi backup buffer */
    la      a1, get_emi_backup_buf_nc
    jalr    a1
    nop
    move    k0, v0

#if (DORM_REINIT_VPE1_EARLY == 0x1)
    /*
     * Every Core's VPE0 do init_vpe1. VPE1's TC1 begins to run after C0_MVPCONTROL.EVP[1] = 1
     */
    mfc0    a0, C0_EBASE
    ext     r9_vpe_num, a0, 0, 1    // i.e., VPE0 or VPE1 per Core
    bnez    r9_vpe_num, dorm_init_vpe1_done
    nop
dorm_init_vpe1:
	STEP_LOGGING_VALUE(DORMANT_REINIT_VPE1_RESTORE, 0x3)
    la      a1, dormant_reinit_vpe1
    jalr    a1
    nop
    //DBG_LOOP(1_2)
dorm_init_vpe1_done:
    DBG_RECOVER_TS_PROBE(0x7)
#endif

    /* 
     *      a) Clear C0_STATUS.BEV[22] and C0_STATUS.ERL[2] and set C0_STATUS.IM2[10]
     *      b) If the value of C0_EBASE is to be changed, this must be done
     *         with C0_STATUS.BEV[22] equal to 1
     */
    mtc0    zero, C0_KSCRATCH3         // clear scratch3 before normal ex vector set
    lw      a0, TC0_C0_EBASE_OFFSET(k0)
    mtc0    a0, C0_EBASE
    lw      a0, TC0_C0_CONFIG5_OFFSET(k0)
    mtc0    a0, C0_CONFIG5

    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 1            // i.e., VPE0 or VPE1 per Core
    bnez    a0, dorm_restore_VPE0_C0_STATUS
    nop
    lw      a0, TC0_C0_STATUS_OFFSET(k0)
    b       dorm_restore_C0_STATUS_done
    nop
dorm_restore_VPE0_C0_STATUS:
    lw      a0, TC1_C0_STATUS_OFFSET(k0)
dorm_restore_C0_STATUS_done:
    mtc0    a0, C0_STATUS
	ehb
    //DBG_LOOP(0_9)

leave_dormant_mode_done:
    la      a1, cacheable_leave_dormant_mode
    jr      a1
    nop
END(leave_dormant_mode)

LEAF(cacheable_leave_dormant_mode)
    DBG_RECOVER_TS_PROBE(0x8)

#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
    /*
     * Every Core's VPE0 do join cohrency domain
     */
	STEP_LOGGING_VALUE(DORMANT_JOIN_DOMAIN_RESTORE, 0x3) 
    mfc0    a0, C0_EBASE
    ext     r9_vpe_num, a0, 0, 1    // i.e., VPE0 or VPE1 per Core
    bnez    r9_vpe_num, check_coherence_domain //Per-CORE VPE0 join_coherence_domain, Per-CORE VPE1 check_coherence_domain
    nop
dorm_join_ch_domain:/* Only Per-CORE VPE0 do join_coherence_domain */
    ext     a0, a0, 1, 3            // i.e., Core0~1
    la      a1, join_coherence_domain
    jalr    a1
    nop
    b       dorm_join_ch_domain_done
    nop    

check_coherence_domain:/* Only Per-Core VPE1 run, confirm already enter coherence domain. */
    //GET_CORE_ID(a0)
    li      a2, GCR_CONFIG_ADDR
    lw      a1, (CORE_LOCAL_CONTROL_BLOCK | GCR_CL_COHERENCE)(a2)
    li      a0, ALL_COHERENCE
    beq     a0, a1, dorm_join_ch_domain_done
    nop
    li      a0, -1 //release pipeline
    yield   a0     //release pipeline to avoid block VPE0      
    b       check_coherence_domain
    nop

dorm_join_ch_domain_done:/* Every VPE would go here */
    /*
     * Every VPE would record frc dbg info after enter to coherent domain
     */
    li      a0, MD_TOPSM_FRC_SRC
    lw      a2, 0x0(a0)
    la      a0, dormant_enter_coherent_frc
    mfc0    a1, C0_EBASE
    ext     a1, a1, 0, 4
    sll     a1, a1, 2
    addu    a0, a0, a1
    sw      a2, 0x0(a0)
    sync    0x2     
#endif
    
	/*
     * Core0 VPE0 must do itc_init earlier than other Cores VPE0
     */    
    mfc0    a0, C0_EBASE
    ext     r23_cpu_num, a0, 0, 4    // i.e., VPE0~3
    bnez    r23_cpu_num, dorm_c0_itc_config_done
    nop
dorm_c0_itc_config:
	STEP_LOGGING_ADDR(itc_init, 0x3)
    la      a1, itc_init
    jalr    a1
    nop
dorm_c0_itc_config_done:
    DBG_RECOVER_TS_PROBE(0x9)
	
	//DBG_LOOP(1_0)
    DBG_RECOVER_TS_PROBE(0xA)
	/*
     * <TODO> Core1 VPE0 check this lock in case of executing sth earlier
     * than Core0's set-up in dormant recovery
     *      a) E.g., Core1 write CM2 GCR before Core0 re-initialize CM registers
     *      b) Core0 VPE0 write this lock with 0x444F524D (i.e., DORM) before MIPS_CPC_PowerDown
     *      //c) Every Core's VPE1 skip these code because of dormant_reinit_vpe1
     */
    mfc0    a0, C0_EBASE
    ext     r23_cpu_num, a0, 0, 4    // i.e., VPE0~3
    bnez    r23_cpu_num, dorm_clean_lock_done 
    nop
    la      a1, dormant_recovery_lock
    sw      zero, 0x0(a1)
dorm_clean_lock_done:
    la      a1, dormant_recovery_lock
    lw      a2, 0x0(a1)
    bnez    a2, dorm_clean_lock_done
    nop
dorm_check_lock_done:
    DBG_RECOVER_TS_PROBE(0xB)

#if (DORM_REINIT_VPE1_EARLY == 0x0)
    /*
     * Every Core's VPE0 do init_vpe1. VPE1's TC1 begins to run after C0_MVPCONTROL.EVP[1] = 1
     */
    mfc0    a0, C0_EBASE
    ext     r9_vpe_num, a0, 0, 1    // i.e., VPE0 or VPE1 per Core
    bnez    r9_vpe_num, dorm_init_vpe1_done
    nop
dorm_init_vpe1:
	STEP_LOGGING_VALUE(DORMANT_REINIT_VPE1_RESTORE, 0x3)
    la      a1, dormant_reinit_vpe1
    jalr    a1
    nop
    //DBG_LOOP(1_2)
dorm_init_vpe1_done:
    DBG_RECOVER_TS_PROBE(0x7)
#endif

    /*
     * <TODO: I-Chun> Every Core's VPEs do drv_mipsgic_reset
     *      a) Clear C0_STATUS.BEV[22], set C0_CAUSE.IV[23], and C0_INTCTL.VS[9:5]
     */
	STEP_LOGGING_ADDR(drv_vpe_irq_reset, 0x3)
    la      a1, drv_vpe_irq_reset
    jalr    a1
    nop
	STEP_LOGGING_VALUE(DORMANT_PMU_RESTORE, 0x3)
    //DBG_LOOP(1_4)
    la      a1, get_emi_backup_buf_c
    jalr    a1
    nop
    move    t2, v0
    //DBG_LOOP(1_5)
    DBG_RECOVER_TS_PROBE(0xC)

    /*
     * <TODO: PMU, C0_TCCONTEXT> Every Core's VPE0 do restore per-TC C0_PERFCTL0-1, C0_PERFCNT0-1 and
     * TC0 C0_TCCONTEXT
     *      a) Restore per-TC C0_PERFCNT0-1 first, becasue the counter++ when hitting on an event
     *         that is set by C0_PERFCTL0-1
     *      b) TC2/TC3 will be unhalted by TC1 in HRT_domain_P_env
     */
    mfc0    a0, C0_EBASE
    ext     r9_vpe_num, a0, 0, 1    // $9 = t1, i.e., VPE0 or VPE1 per Core
    bnez    r9_vpe_num, dorm_pmu_restore_done
    nop
dorm_pmu_restore:
    lw      a0, TC0_C0_TCCONTEXT_OFFSET(t2)
    mtc0    a0, C0_TCCONTEXT
	li      a0, 0
	mtc0    a0, C0_USERLOCAL
    // TC0
    lw      a0, TC0_C0_PERFCNT0_OFFSET(t2)
    mtc0    a0, C0_PERFCNT0
    lw      a0, TC0_C0_PERFCNT1_OFFSET(t2)
    mtc0    a0, C0_PERFCNT1
    lw      a0, TC0_C0_PERFCTL0_OFFSET(t2)
    mtc0    a0, C0_PERFCTL0
    lw      a0, TC0_C0_PERFCTL1_OFFSET(t2)
    mtc0    a0, C0_PERFCTL1
	lw      a0, TC0_C0_SCHEDULE_OFFSET(t2)
    mtc0    a0, C0_TCSCHEDULE
    // Config C0_VPECONTROL.TargTC[7:0] = TC1
    li      a3, 0x1
    mfc0    a0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     a0, a3, 0, 8        // insert TargTC
    mtc0    a0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb
    // Config C0_TCHALT.H[0] to halt target TC
    mftc0   v1, C0_TCHALT
    ehb
    li      a0, 0x1             // set Halt bit
    mttc0   a0, C0_TCHALT       // write C0_TCHALT
    ehb
    lw      a0, TC1_C0_PERFCNT0_OFFSET(t2)
    mttc0   a0, C0_PERFCNT0
    lw      a0, TC1_C0_PERFCNT1_OFFSET(t2)
    mttc0   a0, C0_PERFCNT1
    lw      a0, TC1_C0_PERFCTL0_OFFSET(t2)
    mttc0   a0, C0_PERFCTL0
    lw      a0, TC1_C0_PERFCTL1_OFFSET(t2)
    mttc0   a0, C0_PERFCTL1
	lw      a0, TC1_C0_SCHEDULE_OFFSET(t2)
    mttc0    a0, C0_TCSCHEDULE
    // Config C0_TCHALT.H[0] to unhalt TC1
    mttc0   v1, C0_TCHALT     // write C0_TCHALT
    ehb

    // Config C0_VPECONTROL.TargTC[7:0] = TC2
    li      a3, 0x2
    mfc0    a0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     a0, a3, 0, 8        // insert TargTC
    mtc0    a0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb
    // Config C0_TCHALT.H[0] to halt target TC
    //li      a0, 0x1             // set Halt bit
    //mttc0   a0, C0_TCHALT       // write C0_TCHALT
    //ehb
    lw      a0, TC2_C0_PERFCNT0_OFFSET(t2)
    mttc0   a0, C0_PERFCNT0
    lw      a0, TC2_C0_PERFCNT1_OFFSET(t2)
    mttc0   a0, C0_PERFCNT1
    lw      a0, TC2_C0_PERFCTL0_OFFSET(t2)
    mttc0   a0, C0_PERFCTL0
    lw      a0, TC2_C0_PERFCTL1_OFFSET(t2)
    mttc0   a0, C0_PERFCTL1
	lw      a0, TC2_C0_SCHEDULE_OFFSET(t2)
    mttc0    a0, C0_TCSCHEDULE
    ehb

    // Config C0_VPECONTROL.TargTC[7:0] = TC3
    li      a3, 0x3
    mfc0    a0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     a0, a3, 0, 8        // insert TargTC
    mtc0    a0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb
    // Config C0_TCHALT.H[0] to halt target TC
    //li      a0, 0x1             // set Halt bit
    //mttc0   a0, C0_TCHALT       // write C0_TCHALT
    //ehb
    lw      a0, TC3_C0_PERFCNT0_OFFSET(t2)
    mttc0   a0, C0_PERFCNT0
    lw      a0, TC3_C0_PERFCNT1_OFFSET(t2)
    mttc0   a0, C0_PERFCNT1
    lw      a0, TC3_C0_PERFCTL0_OFFSET(t2)
    mttc0   a0, C0_PERFCTL0
    lw      a0, TC3_C0_PERFCTL1_OFFSET(t2)
    mttc0   a0, C0_PERFCTL1
	lw      a0, TC3_C0_SCHEDULE_OFFSET(t2)
    mttc0    a0, C0_TCSCHEDULE
    ehb
dorm_pmu_restore_done:
    DBG_RECOVER_TS_PROBE(0xD)
    //DBG_LOOP(1_6)

    /*
     * <TODO: Tee-Yuen> Every Core's VPEs restore per-VPE debug CP0 registers
     */
    // Reserve entry for CP0 WATCH and DEBUG
dorm_dbg_restore:
	STEP_LOGGING_ADDR(mddbg_restore, 0x3)
    la      a2, mddbg_restore
    jalr    a2
    nop
dorm_dbg_restore_done:
    STEP_LOGGING_ADDR(system_set_null_protection, 0x3)
    /*
     *  Every Core's VPE0 use the 22 entry that covers VA: Bank0 for MPU NULL Check
     */
    mfc0    a0, C0_EBASE
    ext     r9_vpe_num, a0, 0, 1    // i.e., VPE0 or VPE1 per Core
    bnez    r9_vpe_num, dorm_system_set_null_protection_done
    li      a0, 1
    la      a2, system_set_null_protection
    jalr    a2
    nop
dorm_system_set_null_protection_done:
     

    /*
     * Every Core's VPE0 restore ITC AddressMap0 and AddressMap1
     *      a) Set C0_ERRCTL.ITC[26] = 1 to make cache operation to ITC
     *      b) Write ITC mask to C0_DTAGLO and ITC base to C0_DTAGLO
     */
    mfc0    a0, C0_EBASE
    ext     r8_core_num, a0, 1, 3   // i.e., Core0~1
    ext     r9_vpe_num, a0, 0, 1    // i.e., VPE0 or VPE1 per Core
    beq     r8_core_num, zero, dorm_c123_itc_config_done
    nop 
    bnez    r9_vpe_num, dorm_c123_itc_config_done
    nop
dorm_c123_itc_config:
	STEP_LOGGING_ADDR(itc_init, 0x3)
    la      a1, itc_init
    jalr    a1
    nop
    //DBG_LOOP(1_7)
dorm_c123_itc_config_done:
    la      a1, get_emi_backup_buf_c
    jalr    a1
    nop
    move    t2, v0
    DBG_RECOVER_TS_PROBE(0xE)

    /*
     * Every Core's VPE0 restore its GPR
     */
    mfc0    a0, C0_EBASE
    ext     r9_vpe_num, a0, 0, 1    // i.e., VPE0 or VPE1 per Core
    ext     r23_cpu_num, a0, 0, 4   // i.e., VPE0~3
    bnez    r9_vpe_num, dorm_restore_vpe1_gpr
    nop
dorm_restore_vpe0_gpr:
    lw      AT, AT_OFFSET(t2)
    lw      v0, v0_OFFSET(t2)
    lw      v1, v1_OFFSET(t2)
    lw      a0, a0_OFFSET(t2)
    lw      a1, a1_OFFSET(t2)
    lw      a2, a2_OFFSET(t2)
    lw      a3, a3_OFFSET(t2)
    move    v0, t2
    lw      t0, t0_OFFSET(v0)
    lw      t1, t1_OFFSET(v0)
    lw      t2, t2_OFFSET(v0)
    lw      t3, t3_OFFSET(v0)
    lw      t4, t4_OFFSET(v0)
    lw      t5, t5_OFFSET(v0)
    lw      t6, t6_OFFSET(v0)
    lw      t7, t7_OFFSET(v0)
    lw      s0, s0_OFFSET(v0)
    lw      s1, s1_OFFSET(v0)
    lw      s2, s2_OFFSET(v0)
    lw      s3, s3_OFFSET(v0)
    lw      s4, s4_OFFSET(v0)
    lw      s5, s5_OFFSET(v0)
    lw      s6, s6_OFFSET(v0)
    lw      s7, s7_OFFSET(v0)
    lw      t8, t8_OFFSET(v0)
    lw      t9, t9_OFFSET(v0)
    lw      k0, k0_OFFSET(v0)
    lw      k1, k1_OFFSET(v0)
    lw      gp, gp_OFFSET(v0)
    lw      sp, sp_OFFSET(v0)
    lw      fp, fp_OFFSET(v0)
    lw      ra, ra_OFFSET(v0)
    b       dorm_restore_gpr_done
dorm_restore_vpe1_gpr:
    li      AT, 0x0
    li      v0, 0x0
    li      v1, 0x0
    li      a0, 0x0
    li      a1, 0x0
    li      a2, 0x0
    li      a3, 0x0
    //li      t0, 0x0   // r8_core_num
    //li      t1, 0x0   // r9_vpe_num
    li      t2, 0x0
    li      t3, 0x0
    li      t4, 0x0
    li      t5, 0x0
    li      t6, 0x0
    li      t7, 0x0
    li      s0, 0x0
    li      s1, 0x0
    li      s2, 0x0
    li      s3, 0x0
    li      s4, 0x0
    li      s5, 0x0
    li      s6, 0x0
    //li      s7, 0x0   // r23_cpu_num
    li      t8, 0x0
    li      t9, 0x0
    li      k0, 0x0
    li      k1, 0x0
    li      gp, 0x0     // <TODO> Check if VPE1 originally has gp
    //li        sp, 0x0
    /*
     * Every Core's VPE1 TC1 restore its sp
     */
    li      a1, 0x1
    beq     r23_cpu_num, a1, dorm_reinit_la_VPE1_STACK
    nop
    li      a1, 0x3
    beq     r23_cpu_num, a1, dorm_reinit_la_VPE3_STACK
    nop
dorm_reinit_la_VPE1_STACK:
    la      sp, CORE0_VPE1_TC1_SYS_STACK_PTR
    b       dorm_reinit_COREx_VPE1_TC1_STACK_done
    nop
dorm_reinit_la_VPE3_STACK:
    la      sp, CORE1_VPE1_TC1_SYS_STACK_PTR
dorm_reinit_COREx_VPE1_TC1_STACK_done:
    lw      sp, 0x0(sp)
    li      a1, 0x0     // clean a1 again
    li      ra, 0x0
dorm_restore_gpr_done:
    //DBG_LOOP(1_8)

    DBG_RECOVER_TS_PROBE(0xF)

    /*
     * 1. Every Core's VPE0 restore the PC to the ra of enter_dormant_mode
     * 2. Every Core's VPE1 sould run a piece of code retrieved from INC_Initialize
     */
    STEP_LOGGING_VALUE(DORMANT_READY_BACK_TO_C, 0x3)
    mfc0    a0, C0_EBASE
    ext     r9_vpe_num, a0, 0, 1    // i.e., VPE0 or VPE1 per Core
    beqz    r9_vpe_num, cacheable_leave_dormant_mode_done
    nop
dorm_every_VPE1_restart_entry:
    // It is fine to set VPE1's C0_TCCONTEXT again
    mtc0    zero, C0_TCCONTEXT
    ehb
    /*
     * <TODO> Every Core's VPE1 check the lock of notification from VPE0 to see restoration done or not
     */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3
    sll     a0, a0, 2
    la      a1, dormant_local_notify_VPE1_lock
    addu    a1, a0, a1
dorm_check_VPE0_notification:
    lw      a0, 0x0(a1)
    bnez    a0, dorm_check_VPE0_notification
    nop
    // DCM_Service_vpe1_dormant_leave();
    la      a0, DCM_Service_vpe1_dormant_leave
    jalr    a0
    nop
    // HRT_domain_P_env();
    //la      a0, HRT_domain_P_env
    //jr      a0
    //nop
cacheable_leave_dormant_mode_done:
    DBG_RECOVER_TS_PROBE(0x10)
    jr      ra
    nop
END(cacheable_leave_dormant_mode)

/********************************************************************************
 *                                                                              *
 * Subroutine: void dormant_reinit_vpe1(kal_uint32 current_core)                *
 * Usage     : Restore MIPS32 MT ASE CP0 registers                              *
 * <TODO> If possible, merge with init_vpe1.S                                   *
 *                                                                              *
 ********************************************************************************/
LEAF(dormant_reinit_vpe1)
// Each vpe will need to set up additional TC bound to it. (No rebinding.)

/* Check this core has more than 1 TC, if only 1 TC than trapping */
DORM_VPEINIT_TC_CHECK:
    mfc0    a0, C0_MVPCONF0
    ext     a0, a0, 0, 8
    bgtz    a0, DORM_VPEINIT_VPE_CHECK
    nop
DORM_VPEINIT_TC_CHECK_FAIL:
    b       DORM_VPEINIT_TC_CHECK_FAIL
    nop

/* Check this core has more than 1 VPE, if only 1 VPE than trapping */
DORM_VPEINIT_VPE_CHECK:
    mfc0    a0, C0_MVPCONF0
    ext     a0, a0, 10, 4
    bgtz    a0, DORM_VPEINIT
    nop
DORM_VPEINIT_VPE_CHECK_FAIL:
    b       DORM_VPEINIT_VPE_CHECK_FAIL
    nop
DORM_VPEINIT:

    /* This is executing on TC0 bound to VPE0.  Therefore VPEConf0.MVP is set. */

    /* Config C0_MVPCONTROL.VPC[1]
     * Purpose: Enter config mode */
    mfc0    v0, C0_MVPCONTROL
    or      v0, (1 << 1)        // set VPC[1]
    mtc0    v0, C0_MVPCONTROL
    ehb

#define a0_NTCS     a0          // Total TCs
#define a2_NVPES    a2          // Total VPEs
#define a3_TC       a3
#define INDEX_VPE1  0x1

    /* Get number of Total TCs(a0_NTCS) and Total VPEs(a2_NVPES)
     * Elbrus: a0_NTCS = 3
     *         a2_NVPES = 1 */
    mfc0    v0, C0_MVPCONF0     // read C0_MVPCONF0
    ext     a0_NTCS, v0, 0, 8	// extract PTC[7:0]
    ext     a2_NVPES, v0, 10, 4	// extract PVPE[13:10]


DORM_VPEINIT_VPE0_TC0:

    /* Initialize a3_TC as 0 to start from TC0 */
    move    a3_TC, zero

    /* Config C0_VPECONTROL.TargTC[7:0]
     * to set target TC be configured */
    mfc0    v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, a3_TC, 0, 8     // insert TargTC[7:0]
    mtc0    v0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb

    /* Disable multi-threading with a3_TC's VPE
     * Disable multi-threading of VPE0 */
    mftc0   v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, zero, 15, 1     // clear TE[15]
    mttc0   v0, C0_VPECONTROL   // write C0_VPECONTROL

    /* Set YQMask */
    addi    v0, zero, 0xF0F     // bit 0~3 for VPE0, 8~11 for VPE1
    mtc0    v0, C0_YQMASK

    /* Set C0_TCSCHEDULE */
    mtc0    zero, C0_TCSCHEDULE

    /* Restore VPE0's C0_CONFIG7 here due to here is single thread. (For RPS.) */
    lw      v0, TC0_C0_CONFIG7_OFFSET(k0) /* Restore CONFIG7 */
    mtc0    v0, C0_CONFIG7   

DORM_VPEINIT_VPE1_TC1:

    /* This is executing on TC0 bound to VPE0.  Therefore VPEConf0.MVP is set. */

    /* Config C0_MVPCONTROL.VPC[1]
     * Purpose: Enter config mode */
    mfc0    v0, C0_MVPCONTROL
    or      v0, (1 << 1)        // set VPC[1]
    ins     v0, zero, 0, 1      // clear EVP[0]
    mtc0    v0, C0_MVPCONTROL
    ehb

    li      a3_TC, 0x1
    /* Config C0_VPECONTROL.TargTC[7:0]
     * to set target TC be configured */
    mfc0    v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, a3_TC, 0, 8     // insert TargTC[7:0]
    mtc0    v0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb

    /* Config C0_TCHALT.H[0]
     * to halt target TC, a3_TC */
    li      v0, 1               // set Halt bit
    mttc0   v0, C0_TCHALT       // write C0_TCHALT
    ehb

    /* Config C0_TCBIND.CurVPE[3:0]
     * bind TC1 to VPE1 */
    li      v1, INDEX_VPE1
    mftc0   v0, C0_TCBIND       // Read C0_TCBIND
    ins     v0, v1, 0, 4        // change CurVPE[3:0]
    mttc0   v0, C0_TCBIND       // write C0_TCBIND
    ehb

    /* Only VPE1 TC1 set YQMask */
    addi    v0, zero, 0xF0F     // bit 0~3 for VPE0, 8~11 for VPE1
    mttc0   v0, C0_YQMASK

    // Set XTC for active a3_TC's
    mftc0   v0, C0_VPECONF0     // read C0_VPECONF0
    ins     v0, a3_TC, 21, 8    // insert XTC[28:21]
    mttc0   v0, C0_VPECONF0     // write C0_VPECONF0

    // Set up TCStatus register:
    // Disable Coprocessor Usable bits
    // Disable MDMX/DSP ASE
    // Clear Dirty a3_TC
    // not dynamically allocatable
    // not allocated
    // Kernel mode
    // interrupt exempt
    // ASID 0
    li      v0, (1 << 10)       // set IXMT[10]
    mttc0   v0, C0_TCSTATUS     // write C0_TCSTATUS

    // Initialize the a3_TC's register file
    li      v0, 0xDEADBEEF
    mttgpr  v0, $1
    mttgpr  v0, $2
    mttgpr  v0, $3
    mttgpr  v0, $4
    mttgpr  v0, $5
    mttgpr  v0, $6
    mttgpr  v0, $7
    mttgpr  v0, $8
    mttgpr  v0, $9
    mttgpr  v0, $10
    mttgpr  v0, $11
    mttgpr  v0, $12
    mttgpr  v0, $13
    mttgpr  v0, $14
    mttgpr  v0, $15
    mttgpr  v0, $16
    mttgpr  v0, $17
    mttgpr  v0, $18
    mttgpr  v0, $19
    mttgpr  v0, $20
    mttgpr  v0, $21
    mttgpr  v0, $22
    mttgpr  v0, $23
    mttgpr  v0, $24
    mttgpr  v0, $25
    mttgpr  v0, $26
    mttgpr  v0, $27
    mttgpr  v0, $28
    mttgpr  v0, $29
    mttgpr  v0, $30
    mttgpr  v0, $31

    /* Enable multi-threading with a3_TC's VPE
     * Enable multi-threading of VPE1 */
    li      v1, 1
    mftc0   v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, v1, 15, 1       // set TE[15]
    mttc0   v0, C0_VPECONTROL   // write C0_VPECONTROL

    // For VPE1..n
    // Only VPE1 TC1 clear VPA and set master VPE
    mftc0   v0, C0_VPECONF0     // read C0_VPECONF0
    ins     v0, zero, 0, 1      // clear VPA[0]
    or      v0, (1 << 1)        // set MVP[1]
    mttc0   v0, C0_VPECONF0     // write C0_VPECONF0

    la      v0, dormant_mode_reset_interwork
    mttc0   v0, C0_EPC          // write C0_EPC

    mttc0   zero, C0_CAUSE      // write C0_CAUSE

    mfc0    v0, C0_CONFIG       // read C0_CONFIG
    mttc0   v0, C0_CONFIG       // write C0_CONFIG

    mftc0   v0, C0_EBASE        // read C0_EBASE
    ext     v0, v0, 0, 10       // extract CPUNum[9:0]
    mttgpr  v0, r23_cpu_num

    // VPE1 of each core can execute cached as it's L1 I$ has already been initialized.
    // and the L2$ has been initialized or "disabled" via CCA override.
    la      a1, dormant_mode_reset_interwork    // Convert to cached kseg0 address in case we linked to kseg1.
    mttc0   a1, C0_TCRESTART    // write C0_TCRESTART
    ehb

    /* Restore VPE1's C0_CONFIG7 here due to here is single thread. (For RPS.). */
    lw      v0, TC1_C0_CONFIG7_OFFSET(k0) /* Restore CONFIG7 */
    mttc0   v0, C0_CONFIG7	

    // Yes.. this is undoing all of the work done above... :)
    mftc0   v0, C0_TCSTATUS     // read C0_TCSTATUS
    ins     v0, zero, 10, 1     // clear IXMT[10]
    ori     v0, (1 << 13)       // set A[13]
    ori     v0, (1 << 15)       // set DA[15]
#if (MX_FEATURE == 1)
    li      v1, 0x1
    ins     v0, v1, 27, 1       // set TMX[27]
#endif
    mttc0   v0, C0_TCSTATUS     // write C0_TCSTATUS

    /* Set C0_TCSCHEDULE */
    mttc0   zero, C0_TCSCHEDULE

    mttc0   zero, C0_TCHALT     // write C0_TCHALT

    // Only VPE1 TC1 set VPA
    mftc0   v0, C0_VPECONF0     // read C0_VPECONF0
    ori     v0, 1               // set VPA[0]
    mttc0   v0, C0_VPECONF0     // write C0_VPECONF0

    // Exit config mode
    mfc0    v0, C0_MVPCONTROL   // read C0_MVPCONTROL
    ori     v0, 1               // set EVP[0] will enable execution by vpe1
    ins     v0, zero, 1, 1      // clear VPC[1]
    mtc0    v0, C0_MVPCONTROL   // write C0_MVPCONTROL
    ehb


DORM_VPEINIT_VPE1_TC2:

    /* This is executing on TC0 bound to VPE0.  Therefore VPEConf0.MVP is set. */

    /* Config C0_MVPCONTROL.VPC[1]
     * Purpose: Enter config mode */
    mfc0    v0, C0_MVPCONTROL
    or      v0, (1 << 1)        // set VPC[1]
    ins     v0, zero, 0, 1      // clear EVP[0]
    mtc0    v0, C0_MVPCONTROL
    ehb

    li      a3_TC, 0x2
    /* Config C0_VPECONTROL.TargTC[7:0]
     * to set target TC be configured */
    mfc0    v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, a3_TC, 0, 8     // insert TargTC[7:0]
    mtc0    v0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb

    /* Config C0_TCHALT.H[0]
     * to halt target TC, a3_TC */
    //li      v0, 1               // set Halt bit
    //mttc0   v0, C0_TCHALT       // write C0_TCHALT
    //ehb

    /* Config C0_TCBIND.CurVPE[3:0]
     * bind TC2 to VPE1 */
    li      v1, INDEX_VPE1
    mftc0   v0, C0_TCBIND       // Read C0_TCBIND
    ins     v0, v1, 0, 4        // change CurVPE[3:0]
    mttc0   v0, C0_TCBIND       // write C0_TCBIND
    ehb

    // Set up TCStatus register:
    // Disable Coprocessor Usable bits
    // Disable MDMX/DSP ASE
    // Clear Dirty a3_TC
    // not dynamically allocatable
    // not allocated
    // Kernel mode
    // interrupt exempt
    // ASID 0
    li      v0, (1 << 10)       // set IXMT[10]
    mttc0   v0, C0_TCSTATUS     // write C0_TCSTATUS

    // Initialize the a3_TC's register file
    li      v0, 0xDEADBEEF
    mttgpr  v0, $1
    mttgpr  v0, $2
    mttgpr  v0, $3
    mttgpr  v0, $4
    mttgpr  v0, $5
    mttgpr  v0, $6
    mttgpr  v0, $7
    mttgpr  v0, $8
    mttgpr  v0, $9
    mttgpr  v0, $10
    mttgpr  v0, $11
    mttgpr  v0, $12
    mttgpr  v0, $13
    mttgpr  v0, $14
    mttgpr  v0, $15
    mttgpr  v0, $16
    mttgpr  v0, $17
    mttgpr  v0, $18
    mttgpr  v0, $19
    mttgpr  v0, $20
    mttgpr  v0, $21
    mttgpr  v0, $22
    mttgpr  v0, $23
    mttgpr  v0, $24
    mttgpr  v0, $25
    mttgpr  v0, $26
    mttgpr  v0, $27
    mttgpr  v0, $28
    //mttgpr  v0, $29
    mttgpr  v0, $30
    mttgpr  v0, $31

DORM_VPEINIT_VPE1_TC2_StackInit:
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3
    li      a1, 0
    beq     a0, a1, DORM_VPEINIT_VPE1_TC2_StackInit_Core0
    nop
#if !defined(__SINGLE_CORE__)
    addi    a1, a1, 1
    beq     a0, a1, DORM_VPEINIT_VPE1_TC2_StackInit_Core1
    nop
#endif

DORM_VPEINIT_VPE1_TC2_StackInit_Core0:
    la      v0, CORE0_VPE1_TC2_SYS_STACK_PTR
    lw      v0, 0x0(v0)
#if !defined(__SINGLE_CORE__)
    b       DORM_VPEINIT_VPE1_TC2_StackInit_done
    nop
DORM_VPEINIT_VPE1_TC2_StackInit_Core1:
    la      v0, CORE1_VPE1_TC2_SYS_STACK_PTR
    lw      v0, 0x0(v0)
    b       DORM_VPEINIT_VPE1_TC2_StackInit_done
    nop
#endif
DORM_VPEINIT_VPE1_TC2_StackInit_done:
    mttgpr  v0, $29

    // VPE1 of each core can execute cached as it's L1 I$ has already been initialized.
    // and the L2$ has been initialized or "disabled" via CCA override.
    //la      a1, INC_InitializeWrapper   // Convert to cached kseg0 address in case we linked to kseg1.
    la      a1, HRT_domain_C_env    // Convert to cached kseg0 address in case we linked to kseg1.
    mttc0   a1, C0_TCRESTART    // write C0_TCRESTART
    ehb

    // Yes.. this is undoing all of the work done above... :)
    mftc0   v0, C0_TCSTATUS     // read C0_TCSTATUS
    //ins     v0, zero, 10, 1     // clear IXMT[10]
    ori     v0, (1 << 13)       // set A[13]
    ori     v0, (1 << 15)       // set DA[15]
#if (MX_FEATURE == 1)
    li      v1, 0x1
    ins     v0, v1, 27, 1       // set TMX[27]
#endif
    mttc0   v0, C0_TCSTATUS     // write C0_TCSTATUS

    //mttc0   zero, C0_TCHALT     // write C0_TCHALT

    // Exit config mode
    mfc0    v0, C0_MVPCONTROL   // read C0_MVPCONTROL
    ori     v0, 1               // set EVP[0] will enable execution by vpe1
    ins     v0, zero, 1, 1      // clear VPC[1]
    mtc0    v0, C0_MVPCONTROL   // write C0_MVPCONTROL
    ehb

DORM_VPEINIT_VPE1_TC3:

    /* This is executing on TC0 bound to VPE0.  Therefore VPEConf0.MVP is set. */

    /* Config C0_MVPCONTROL.VPC[1]
     * Purpose: Enter config mode */
    mfc0    v0, C0_MVPCONTROL
    or      v0, (1 << 1)        // set VPC[1]
    ins     v0, zero, 0, 1      // clear EVP[0]
    mtc0    v0, C0_MVPCONTROL
    ehb

    li      a3_TC, 0x3
    /* Config C0_VPECONTROL.TargTC[7:0]
     * to set target TC be configured */
    mfc0    v0, C0_VPECONTROL   // read C0_VPECONTROL
    ins     v0, a3_TC, 0, 8     // insert TargTC[7:0]
    mtc0    v0, C0_VPECONTROL   // write C0_VPECONTROL
    ehb

    /* Config C0_TCHALT[0]:H
     * to halt target TC, a3_TC */
    //li      v0, 1               // set Halt bit
    //mttc0   v0, C0_TCHALT       // write C0_TCHALT
    //ehb

    /* Config C0_TCBIND[3:0]:CurVPE
     * bind TC3 to VPE1 */
    li      v1, INDEX_VPE1
    mftc0   v0, C0_TCBIND       // Read C0_TCBIND
    ins     v0, v1, 0, 4        // change CurVPE[3:0]
    mttc0   v0, C0_TCBIND       // write C0_TCBIND
    ehb

    // Set up TCStatus register:
    // Disable Coprocessor Usable bits
    // Disable MDMX/DSP ASE
    // Clear Dirty a3_TC
    // not dynamically allocatable
    // not allocated
    // Kernel mode
    // interrupt exempt
    // ASID 0
    li      v0, (1 << 10)       // set IXMT[10]
    mttc0   v0, C0_TCSTATUS     // write C0_TCSTATUS

    // Initialize the a3_TC's register file
    li      v0, 0xDEADBEEF
    mttgpr  v0, $1
    mttgpr  v0, $2
    mttgpr  v0, $3
    mttgpr  v0, $4
    mttgpr  v0, $5
    mttgpr  v0, $6
    mttgpr  v0, $7
    mttgpr  v0, $8
    mttgpr  v0, $9
    mttgpr  v0, $10
    mttgpr  v0, $11
    mttgpr  v0, $12
    mttgpr  v0, $13
    mttgpr  v0, $14
    mttgpr  v0, $15
    mttgpr  v0, $16
    mttgpr  v0, $17
    mttgpr  v0, $18
    mttgpr  v0, $19
    mttgpr  v0, $20
    mttgpr  v0, $21
    mttgpr  v0, $22
    mttgpr  v0, $23
    mttgpr  v0, $24
    mttgpr  v0, $25
    mttgpr  v0, $26
    mttgpr  v0, $27
    mttgpr  v0, $28
    //mttgpr  v0, $29
    mttgpr  v0, $30
    mttgpr  v0, $31

DORM_VPEINIT_VPE1_TC3_StackInit:
    mfc0    a0, C0_EBASE
    ext     a0, a0, 1, 3
    li      a1, 0
    beq     a0, a1, DORM_VPEINIT_VPE1_TC3_StackInit_Core0
    nop
#if !defined(__SINGLE_CORE__)
    addi    a1, a1, 1
    beq     a0, a1, DORM_VPEINIT_VPE1_TC3_StackInit_Core1
    nop
#endif

DORM_VPEINIT_VPE1_TC3_StackInit_Core0:
    la      v0, CORE0_VPE1_TC3_SYS_STACK_PTR
    lw      v0, 0x0(v0)
#if !defined(__SINGLE_CORE__)
    b       DORM_VPEINIT_VPE1_TC3_StackInit_done
    nop
DORM_VPEINIT_VPE1_TC3_StackInit_Core1:
    la      v0, CORE1_VPE1_TC3_SYS_STACK_PTR
    lw      v0, 0x0(v0)
    b       DORM_VPEINIT_VPE1_TC3_StackInit_done
    nop
#endif
DORM_VPEINIT_VPE1_TC3_StackInit_done:
    mttgpr  v0, $29

    // VPE1 of each core can execute cached as it's L1 I$ has already been initialized.
    // and the L2$ has been initialized or "disabled" via CCA override.
    //la      a1, INC_InitializeWrapper   // Convert to cached kseg0 address in case we linked to kseg1.
    la      a1, HRT_domain_C_env   // Convert to cached kseg0 address in case we linked to kseg1.
    mttc0   a1, C0_TCRESTART    // write C0_TCRESTART
    ehb

    // Yes.. this is undoing all of the work done above... :)
    mftc0   v0, C0_TCSTATUS     // read C0_TCSTATUS
    //ins     v0, zero, 10, 1     // clear IXMT[10]
    ori     v0, (1 << 13)       // set A[13]
    ori     v0, (1 << 15)       // set DA[15]
#if (MX_FEATURE == 1)
    li      v1, 0x1
    ins     v0, v1, 27, 1       // set TMX[27]
#endif
    mttc0   v0, C0_TCSTATUS     // write C0_TCSTATUS

    //mttc0   zero, C0_TCHALT     // write C0_TCHALT

    // Exit config mode
    mfc0    v0, C0_MVPCONTROL   // read C0_MVPCONTROL
    ori     v0, 1               // set EVP[0] will enable execution by vpe1
    ins     v0, zero, 1, 1      // clear VPC[1]
    mtc0    v0, C0_MVPCONTROL   // write C0_MVPCONTROL
    ehb

dorm_reinit_vpe1_done:

#undef a0_NTCS
#undef a2_NVPES
#undef a3_TC
#undef INDEX_VPE1
    
    jr      ra
    nop
END(dormant_reinit_vpe1)

.section "ISPRAM_ROCODE_CORE0", "ax"
.globl    wait_instruction_ISPRAM0
.ent  wait_instruction_ISPRAM0
wait_instruction_ISPRAM0:
    sync    0x7
    wait
    jr      ra
    nop
END(wait_instruction_ISPRAM0)

.section "ISPRAM_ROCODE_CORE1", "ax"
.globl    wait_instruction_ISPRAM1
.ent  wait_instruction_ISPRAM1
wait_instruction_ISPRAM1:
    sync    0x7
    wait
    jr      ra
    nop
END(wait_instruction_ISPRAM1)


#if (INV_L1_CACHE_ISPRAM == 1)
/**************************************************************************************
* [ISPRAM solution] Put mips_invalidate_i/dcache into ISPRAM
**************************************************************************************/
#include <l1cache_def.h>
.section "ISPRAM_ROCODE_CORE0", "ax"
.globl    mips_invalidate_icache_ISPRAM0
.ent  mips_invalidate_icache_ISPRAM0
mips_invalidate_icache_ISPRAM0:

    li      v1, L1CACHE_LINE_SIZE                   // Line size is always 32 bytes.
    mfc0    v0, C0_CONFIG1                          // Read C0_Config1
    ext     a3, v0, CFG1_ISSHIFT, 3                 // Extract IS
    li      a2, 2                                   // Used to test against
    beq     a2, a3, process_icache_total_set_ISPRAM0// if  IS = 2
    li      a3, 1024                                // sets = 1024
    li      a3, 2048                                // else sets = 2048 Skipped if branch taken

process_icache_total_set_ISPRAM0:
    lui     a2, 0x8000                              // Get a KSeg0 address for cacheops
                                                    // clear the lock bit, valid bit, and the LRF bit
    mtc0    zero, CM_ITAGLO                         // Clear ITAGLO to invalidate entry
	ehb
invalidate_next_icache_tag_ISPRAM0:
    cache   CACHE_Index_Store_Tag|I_CACHE, 0(a2)        // Index Store tag Cache opt
    addiu   a3, a3, -1                                  // Decrement set counter
    bne     a3, zero, invalidate_next_icache_tag_ISPRAM0// Done yet?
    add     a2, v1                                      // Increment line address by line size
    jr      ra
        nop
END(mips_invalidate_icache_ISPRAM0)

.section "ISPRAM_ROCODE_CORE1", "ax"
.globl    mips_invalidate_icache_ISPRAM1
.ent  mips_invalidate_icache_ISPRAM1
mips_invalidate_icache_ISPRAM1:

    li      v1, L1CACHE_LINE_SIZE                   // Line size is always 32 bytes.
    mfc0    v0, C0_CONFIG1                          // Read C0_Config1
    ext     a3, v0, CFG1_ISSHIFT, 3                 // Extract IS
    li      a2, 2                                   // Used to test against
    beq     a2, a3, process_icache_total_set_ISPRAM1// if  IS = 2
    li      a3, 1024                                // sets = 1024
    li      a3, 2048                                // else sets = 2048 Skipped if branch taken

process_icache_total_set_ISPRAM1:
    lui     a2, 0x8000                              // Get a KSeg0 address for cacheops
                                                    // clear the lock bit, valid bit, and the LRF bit
    mtc0    zero, CM_ITAGLO                         // Clear ITAGLO to invalidate entry
	ehb
invalidate_next_icache_tag_ISPRAM1:
    cache   CACHE_Index_Store_Tag|I_CACHE, 0(a2)        // Index Store tag Cache opt
    addiu   a3, a3, -1                                  // Decrement set counter
    bne     a3, zero, invalidate_next_icache_tag_ISPRAM1// Done yet?
    add     a2, v1                                      // Increment line address by line size
    jr      ra
        nop
END(mips_invalidate_icache_ISPRAM1)


.section "ISPRAM_ROCODE_CORE0", "ax"
.globl    mips_invalidate_dcache_ISPRAM0
.ent  mips_invalidate_dcache_ISPRAM0
mips_invalidate_dcache_ISPRAM0:

    li      v1, L1CACHE_LINE_SIZE                   // Line size is always 32 bytes.
    mfc0    v0, C0_CONFIG1                          // Read C0_Config1
    ext     a3, v0, CFG1_DSSHIFT, 3                 // Extract IS
    li      a2, 2                                   // Used to test against
    beq     a2, a3, process_dcache_total_set_ISPRAM0// if  IS = 2
    li      a3, 1024                                // sets = 1024
    li      a3, 2048                                // else sets = 2048 Skipped if branch taken

process_dcache_total_set_ISPRAM0:
    lui     a2, 0x8000                              // Get a KSeg0 address for cacheops
                                                    // clear the lock bit, valid bit, and the LRF bit
    mtc0    zero, CM_DTAGLO                         // Clear DTagLo to invalidate entry
	ehb
invalidate_next_dcache_tag_ISPRAM0:
    cache   CACHE_Index_Store_Tag|D_CACHE, 0(a2)        // Index Store tag Cache opt
    addiu   a3, a3, -1                                  // Decrement set counter
    bne     a3, zero, invalidate_next_dcache_tag_ISPRAM0// Done yet?
    add     a2, v1                                      // Increment line address by line size
    jr      ra
    nop
END(mips_invalidate_dcache_ISPRAM0)

.section "ISPRAM_ROCODE_CORE1", "ax"
.globl    mips_invalidate_dcache_ISPRAM1
.ent  mips_invalidate_dcache_ISPRAM1
mips_invalidate_dcache_ISPRAM1:

    li      v1, L1CACHE_LINE_SIZE                   // Line size is always 32 bytes.
    mfc0    v0, C0_CONFIG1                          // Read C0_Config1
    ext     a3, v0, CFG1_DSSHIFT, 3                 // Extract IS
    li      a2, 2                                   // Used to test against
    beq     a2, a3, process_dcache_total_set_ISPRAM1// if  IS = 2
    li      a3, 1024                                // sets = 1024
    li      a3, 2048                                // else sets = 2048 Skipped if branch taken

process_dcache_total_set_ISPRAM1:
    lui     a2, 0x8000                              // Get a KSeg0 address for cacheops
                                                    // clear the lock bit, valid bit, and the LRF bit
    mtc0    zero, CM_DTAGLO                         // Clear DTagLo to invalidate entry
	ehb
invalidate_next_dcache_tag_ISPRAM1:
    cache   CACHE_Index_Store_Tag|D_CACHE, 0(a2)        // Index Store tag Cache opt
    addiu   a3, a3, -1                                  // Decrement set counter
    bne     a3, zero, invalidate_next_dcache_tag_ISPRAM1// Done yet?
    add     a2, v1                                      // Increment line address by line size
    jr      ra
    nop
END(mips_invalidate_dcache_ISPRAM1)
#endif
