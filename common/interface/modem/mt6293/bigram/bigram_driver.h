#include <stdio.h>

#if defined(BYPASS_REG_BASE_H)
#else
    #if defined(__CORE_USIP__)
        #include "reg_base.h"
    #elif defined(__MIPS_IA__)
        #include "reg_base.h"
        #define BIGRAM_REG_base BASE_MADDR_BRAM_BIGRAM_REG
    #endif
#endif

/* ---------- */
// TEST usage
//
// 1. Simulate user calling API and direct memory-write to printf
//    gcc -DBYPASS_REG_BASE_H -DMEMORY_WRITE_TO_PRINTF bigram_driver_test.c
//
// 2. Generate bigram control register table
//    gcc -DBYPASS_REG_BASE_H -DMEMORY_WRITE_TO_PRINTF -DBIGRAM_UNCOND_WRITE=1 bigram_driver_test.c

/* ---------- */
// Top-level setting

// BIGRAM_UNCOND_WRITE=1 only happens with driver test. Otherwise, it shall be 0
#if defined(BIGRAM_UNCOND_WRITE)
#else
    #define BIGRAM_UNCOND_WRITE (0)
#endif

// BIGRAM_REG_base shall come from reg_base.h. We would hack its value only in driver-test
#if defined(BIGRAM_REG_base)
#else
    #define BIGRAM_REG_base (0)
#endif

/* ---------- */
// BigRAM control registers

// Register definition
#define BIGRAM_CON                      (BIGRAM_REG_base + 0x0   )

#define BIGRAM_ARBI_CON_0               (BIGRAM_REG_base + 0x10  )
#define BIGRAM_ARBI_START_ADDR_0        (BIGRAM_REG_base + 0x14  )
#define BIGRAM_ARBI_D2BIF_R_0           (BIGRAM_REG_base + 0x20  )
#define BIGRAM_ARBI_D2BIF_W_0           (BIGRAM_REG_base + 0x24  )
#define BIGRAM_ARBI_RXT2F_R_0           (BIGRAM_REG_base + 0x28  )
#define BIGRAM_ARBI_RXT2F_W_0           (BIGRAM_REG_base + 0x2C  )
#define BIGRAM_ARBI_BRDMA_R_0           (BIGRAM_REG_base + 0x30  )
#define BIGRAM_ARBI_BRDMA_W_0           (BIGRAM_REG_base + 0x34  )
#define BIGRAM_ARBI_DEMOD_R_0           (BIGRAM_REG_base + 0x38  )
#define BIGRAM_ARBI_LTECE_R_0           (BIGRAM_REG_base + 0x3C  )
#define BIGRAM_ARBI_MIMO_R_0            (BIGRAM_REG_base + 0x40  )
#define BIGRAM_ARBI_MIMO_W_0            (BIGRAM_REG_base + 0x44  )
#define BIGRAM_ARBI_LREBRP_W_0          (BIGRAM_REG_base + 0x48  )
#define BIGRAM_ARBI_BRP_R_0             (BIGRAM_REG_base + 0x4C  )
#define BIGRAM_ARBI_B2RIF_R_0           (BIGRAM_REG_base + 0x50  )
#define BIGRAM_ARBI_R2BIF_W_0           (BIGRAM_REG_base + 0x54  )
#define BIGRAM_ARBI_VU0_R_0             (BIGRAM_REG_base + 0x58  )
#define BIGRAM_ARBI_VU0_W_0             (BIGRAM_REG_base + 0x5C  )
#define BIGRAM_ARBI_VU1_R_0             (BIGRAM_REG_base + 0x60  )
#define BIGRAM_ARBI_VU1_W_0             (BIGRAM_REG_base + 0x64  )
#define BIGRAM_ARBI_BRBDGE_R_0          (BIGRAM_REG_base + 0x68  )
#define BIGRAM_ARBI_BRBDGE_W_0          (BIGRAM_REG_base + 0x6C  )

#define BIGRAM_ARBI_CON_1               (BIGRAM_REG_base + 0x110 )
#define BIGRAM_ARBI_START_ADDR_1        (BIGRAM_REG_base + 0x114 )
#define BIGRAM_ARBI_D2BIF_R_1           (BIGRAM_REG_base + 0x120 )
#define BIGRAM_ARBI_D2BIF_W_1           (BIGRAM_REG_base + 0x124 )
#define BIGRAM_ARBI_RXT2F_R_1           (BIGRAM_REG_base + 0x128 )
#define BIGRAM_ARBI_RXT2F_W_1           (BIGRAM_REG_base + 0x12C )
#define BIGRAM_ARBI_BRDMA_R_1           (BIGRAM_REG_base + 0x130 )
#define BIGRAM_ARBI_BRDMA_W_1           (BIGRAM_REG_base + 0x134 )
#define BIGRAM_ARBI_DEMOD_R_1           (BIGRAM_REG_base + 0x138 )
#define BIGRAM_ARBI_LTECE_R_1           (BIGRAM_REG_base + 0x13C )
#define BIGRAM_ARBI_MIMO_R_1            (BIGRAM_REG_base + 0x140 )
#define BIGRAM_ARBI_MIMO_W_1            (BIGRAM_REG_base + 0x144 )
#define BIGRAM_ARBI_LREBRP_W_1          (BIGRAM_REG_base + 0x148 )
#define BIGRAM_ARBI_BRP_R_1             (BIGRAM_REG_base + 0x14C )
#define BIGRAM_ARBI_B2RIF_R_1           (BIGRAM_REG_base + 0x150 )
#define BIGRAM_ARBI_R2BIF_W_1           (BIGRAM_REG_base + 0x154 )
#define BIGRAM_ARBI_VU0_R_1             (BIGRAM_REG_base + 0x158 )
#define BIGRAM_ARBI_VU0_W_1             (BIGRAM_REG_base + 0x15C )
#define BIGRAM_ARBI_VU1_R_1             (BIGRAM_REG_base + 0x160 )
#define BIGRAM_ARBI_VU1_W_1             (BIGRAM_REG_base + 0x164 )
#define BIGRAM_ARBI_BRBDGE_R_1          (BIGRAM_REG_base + 0x168 )
#define BIGRAM_ARBI_BRBDGE_W_1          (BIGRAM_REG_base + 0x16C )



/* ---------- */
// Bigram control register setting (ASIC/USER)

// There are 2 tables {ASIC/USER}, and we provide macro to auto compare these settings
// If not match, then set corresponding registers


#define REC_PRIO                    (24)
#define REC_OFFSET0                 (0)
#define REC_OFFSET1                 (12)

// The setting below is default register values
#define ASIC_BIGRAM_CON                 (0x0)
#define ASIC_BIGRAM_ARBI_CON0           ((0<<17) | (0<<16) | (127<<0)) // [17]VU_QUOTA_SEL, [16]VU_ARBI_SEL, [9:0] window size = 128
#define ASIC_BIGRAM_ARBI_CON1           ((0<<17) | (0<<16) | (1<<12) | (127<<0)) // [17]VU_QUOTA_SEL, [16]VU_ARBI_SEL, [12]GRP1_EN, [9:0] window size = 128

#define ASIC_BIGRAM_CLIENT_DEMOD_R      (( 0<<REC_PRIO) | ( 3<<REC_OFFSET0) | (10<<REC_OFFSET1))  // [Wei-Hsuan] grp-0 drains Y (DMEM), which is sequential (less data),  grp-1 drains (others, N), more data
#define ASIC_BIGRAM_CLIENT_LTECE_R      (( 2<<REC_PRIO) | (24<<REC_OFFSET0) | (12<<REC_OFFSET1))  // [Jocelyn Hsu] grp-0 drains VMEM, grp-1 grains {ULCCE-TDI-coef, AP5-coef, ZMEM}, grp-1 has urgent timing constraint(priority=2)
#define ASIC_BIGRAM_CLIENT_MIMO_R       (( 4<<REC_PRIO) | ( 2<<REC_OFFSET0) | ( 8<<REC_OFFSET1))  // [Felicity Chou] T-MIMO uses partial of CC[1]/DMRS-OC/RMEM in grp-1, uses partial of VMEM in grp-0
#define ASIC_BIGRAM_CLIENT_MIMO_W       (( 5<<REC_PRIO) | ( 0<<REC_OFFSET0) | ( 8<<REC_OFFSET1))  // [Felicity Chou] T-MIMO uses partial of CC[1]/DMRS-OC/RMEM in grp-1, uses partial of VMEM in grp-0
#define ASIC_BIGRAM_CLIENT_D2BIF_R      (( 6<<REC_PRIO) | ( 9<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [Enjui Chang] TDSCDMA D2BIF will read, quota=9 (Rocky Yin)
#define ASIC_BIGRAM_CLIENT_D2BIF_W      (( 7<<REC_PRIO) | ( 4<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [Enjui Chang]
#define ASIC_BIGRAM_CLIENT_LREBRP_W     (( 9<<REC_PRIO) | (12<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [Chamo] Re-BRP uses partial of VMEM in grp-0
#define ASIC_BIGRAM_CLIENT_RXT2F_R      ((10<<REC_PRIO) | (20<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [WL Hung] read TDB in grp-0
#define ASIC_BIGRAM_CLIENT_RXT2F_W      ((11<<REC_PRIO) | (10<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [WL Hung] write DMEM/LTE-CM-FDB in grp-0
#define ASIC_BIGRAM_CLIENT_VDSP0_R      ((12<<REC_PRIO) | (10<<REC_OFFSET0) | (31<<REC_OFFSET1))  // [Leo]BigRAM treats R/W quota as a pool VDSP0(10,8R+2W), VDSP1(31,25R+6W), only read-register is used; write-register is ignored due to VU_QUOTA_SEL==0
#define ASIC_BIGRAM_CLIENT_VDSP0_W      ((13<<REC_PRIO) | ( 0<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [Leo](ignored)
#define ASIC_BIGRAM_CLIENT_VDSP1_R      ((14<<REC_PRIO) | (10<<REC_OFFSET0) | (31<<REC_OFFSET1))  // [Leo]BigRAM treats R/W quota as a pool (8R + 2W) = 10, only read-register is used; write-register is ignored due to VU_QUOTA_SEL==0
#define ASIC_BIGRAM_CLIENT_VDSP1_W      ((15<<REC_PRIO) | ( 0<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [Leo](ignored)
#define ASIC_BIGRAM_CLIENT_BRDMA_R      ((16<<REC_PRIO) | ( 1<<REC_OFFSET0) | ( 1<<REC_OFFSET1))  // [Matthew Yin] Bigram DMA should not need very high BW, give it permission to both grp0/grp1
#define ASIC_BIGRAM_CLIENT_BRDMA_W      ((17<<REC_PRIO) | ( 1<<REC_OFFSET0) | ( 1<<REC_OFFSET1))  // [Matthew Yin] Bigram DMA should not need very high BW, give it permission to both grp0/grp1
#define ASIC_BIGRAM_CLIENT_R2BIF_W      ((19<<REC_PRIO) | ( 0<<REC_OFFSET0) | ( 4<<REC_OFFSET1))  // [ShangHai, Shijie Wu] RAKE will write RAKE-BRP in grp-1
#define ASIC_BIGRAM_CLIENT_BRP_R        ((20<<REC_PRIO) | ( 0<<REC_OFFSET0) | ( 6<<REC_OFFSET1))  // [Ash] BRP-HW (3G mode) will read RAKE-BRP in grp-1
#define ASIC_BIGRAM_CLIENT_B2RIF_R      ((22<<REC_PRIO) | ( 5<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [ShangHai, Wuhan Liu ] RAKE will read TDB in grp-0
#define ASIC_BIGRAM_CLIENT_BRBDGE_R     ((24<<REC_PRIO) | ( 2<<REC_OFFSET0) | ( 2<<REC_OFFSET1))  // [Watson] BigRAM bridge
#define ASIC_BIGRAM_CLIENT_BRBDGE_W     ((25<<REC_PRIO) | ( 2<<REC_OFFSET0) | ( 2<<REC_OFFSET1))  // [Watson] BigRAM bridge

// The setting below is current users' setting
#define USER_BIGRAM_CON                 (0x1)
#define USER_BIGRAM_ARBI_CON0           ((0<<17) | (0<<16) | (127<<0)) // [17]VU_QUOTA_SEL, [16]VU_ARBI_SEL, [9:0] window size = 128
#define USER_BIGRAM_ARBI_CON1           ((0<<17) | (0<<16) | (1<<12) | (127<<0)) // [17]VU_QUOTA_SEL, [16]VU_ARBI_SEL, [12]GRP1_EN, [9:0] window size = 128

#ifdef __TBMIMO_ON_ZION__
#define USER_BIGRAM_CLIENT_MIMO_R       (( 4<<REC_PRIO) | ( 8<<REC_OFFSET0) | ( 2<<REC_OFFSET1))  // [Felicity Chou] T-MIMO uses partial of CC[1]/DMRS-OC/RMEM in grp-1, uses partial of VMEM in grp-0
#define USER_BIGRAM_CLIENT_MIMO_W       (( 5<<REC_PRIO) | ( 8<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [Felicity Chou] T-MIMO uses partial of CC[1]/DMRS-OC/RMEM in grp-1, uses partial of VMEM in grp-0
#define USER_BIGRAM_CLIENT_LREBRP_W     (( 9<<REC_PRIO) | ( 0<<REC_OFFSET0) | (15<<REC_OFFSET1))  // [Chamo] Re-BRP uses partial of VMEM in grp-1
#else
#define USER_BIGRAM_CLIENT_MIMO_R       (( 4<<REC_PRIO) | ( 3<<REC_OFFSET0) | ( 8<<REC_OFFSET1))  // [Felicity Chou] T-MIMO uses partial of CC[1]/DMRS-OC/RMEM in grp-1, uses partial of VMEM in grp-0
#define USER_BIGRAM_CLIENT_MIMO_W       (( 5<<REC_PRIO) | ( 0<<REC_OFFSET0) | ( 8<<REC_OFFSET1))  // [Felicity Chou] T-MIMO uses partial of CC[1]/DMRS-OC/RMEM in grp-1, uses partial of VMEM in grp-0
#define USER_BIGRAM_CLIENT_LREBRP_W     (( 9<<REC_PRIO) | ( 16<<REC_OFFSET0) | (0<<REC_OFFSET1))  // [Chamo] Re-BRP uses partial of VMEM in grp-0
#endif

#define USER_BIGRAM_CLIENT_DEMOD_R      (( 0<<REC_PRIO) | ( 3<<REC_OFFSET0) | (10<<REC_OFFSET1))  // [Wei-Hsuan] grp-0 drains Y (DMEM), which is sequential (less data),  grp-1 drains (others, N), more data
#define USER_BIGRAM_CLIENT_LTECE_R      (( 2<<REC_PRIO) | (24<<REC_OFFSET0) | (12<<REC_OFFSET1))  // [Jocelyn Hsu] grp-0 drains VMEM, grp-1 grains {ULCCE-TDI-coef, AP5-coef, ZMEM}, grp-1 has urgent timing constraint(priority=2)
#define USER_BIGRAM_CLIENT_D2BIF_R      (( 6<<REC_PRIO) | ( 9<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [Enjui Chang] TDSCDMA D2BIF will read, quota=9 (Rocky Yin)
#define USER_BIGRAM_CLIENT_D2BIF_W      (( 7<<REC_PRIO) | ( 4<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [Enjui Chang]
#define USER_BIGRAM_CLIENT_RXT2F_R      ((10<<REC_PRIO) | (20<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [WL Hung] read TDB in grp-0
#define USER_BIGRAM_CLIENT_RXT2F_W      ((11<<REC_PRIO) | (10<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [WL Hung] write DMEM/LTE-CM-FDB in grp-0
#define USER_BIGRAM_CLIENT_VDSP0_R      ((12<<REC_PRIO) | (10<<REC_OFFSET0) | (31<<REC_OFFSET1))  // [Leo]BigRAM treats R/W quota as a pool VDSP0(10,8R+2W), VDSP1(31,25R+6W), only read-register is used; write-register is ignored due to VU_QUOTA_SEL==0
#define USER_BIGRAM_CLIENT_VDSP0_W      ((13<<REC_PRIO) | ( 0<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [Leo](ignored)
#define USER_BIGRAM_CLIENT_VDSP1_R      ((14<<REC_PRIO) | (10<<REC_OFFSET0) | (31<<REC_OFFSET1))  // [Leo]BigRAM treats R/W quota as a pool (8R + 2W) = 10, only read-register is used; write-register is ignored due to VU_QUOTA_SEL==0
#define USER_BIGRAM_CLIENT_VDSP1_W      ((15<<REC_PRIO) | ( 0<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [Leo](ignored)
#define USER_BIGRAM_CLIENT_BRDMA_R      ((16<<REC_PRIO) | ( 1<<REC_OFFSET0) | ( 1<<REC_OFFSET1))  // [Matthew Yin] Bigram DMA should not need very high BW, give it permission to both grp0/grp1
#define USER_BIGRAM_CLIENT_BRDMA_W      ((17<<REC_PRIO) | ( 1<<REC_OFFSET0) | ( 1<<REC_OFFSET1))  // [Matthew Yin] Bigram DMA should not need very high BW, give it permission to both grp0/grp1
#define USER_BIGRAM_CLIENT_R2BIF_W      ((19<<REC_PRIO) | ( 0<<REC_OFFSET0) | (19<<REC_OFFSET1))  // [ShangHai, Shijie Wu] RAKE will write RAKE-BRP in grp-1
#define USER_BIGRAM_CLIENT_BRP_R        ((20<<REC_PRIO) | ( 0<<REC_OFFSET0) | (16<<REC_OFFSET1))  // [Ash] BRP-HW (3G mode) will read RAKE-BRP in grp-1
#define USER_BIGRAM_CLIENT_B2RIF_R      ((22<<REC_PRIO) | ( 5<<REC_OFFSET0) | ( 0<<REC_OFFSET1))  // [ShangHai, Wuhan Liu ] RAKE will read TDB in grp-0
#define USER_BIGRAM_CLIENT_BRBDGE_R     ((24<<REC_PRIO) | ( 2<<REC_OFFSET0) | ( 2<<REC_OFFSET1))  // [Watson] BigRAM bridge
#define USER_BIGRAM_CLIENT_BRBDGE_W     ((25<<REC_PRIO) | ( 2<<REC_OFFSET0) | ( 2<<REC_OFFSET1))  // [Watson] BigRAM bridge

/* ---------- */
// API to convert BigRAM-setting to register-value

#define BIGRAM_OFFSET_EN            (31)
#define BIGRAM_OFFSET_PRIO          (16)
#define BIGRAM_OFFSET_QUOTA         (0)
#define BIGRAM_SETTING_GRP0(x)          (                   \
    (((x>>REC_PRIO) & 0x1F) << BIGRAM_OFFSET_PRIO) |        \
    (((x>>REC_OFFSET0) & 0x3FF) << BIGRAM_OFFSET_QUOTA) |   \
    (1<<BIGRAM_OFFSET_EN)                                   \
)

#define BIGRAM_SETTING_GRP1(x)          (                   \
    (((x>>REC_PRIO) & 0x1F) << BIGRAM_OFFSET_PRIO) |        \
    (((x>>REC_OFFSET1) & 0x3FF) << BIGRAM_OFFSET_QUOTA) |   \
    (1<<BIGRAM_OFFSET_EN)                                   \
)


/* ---------- */
// L1D working area
// L1D may have different targets which has different WRITE destination

#if defined(MEMORY_WRITE_TO_PRINTF)
    // In standalone test, direct write to printf()
    #define BIGRAM_REG_WRITE(reg_name,x,y) printf("%-32s 0x%08X, 0x%08X\n", reg_name, x, y)

#else
    #if defined(__CORE_USIP__)
        // Normal target, write to memory
        #define BIGRAM_REG_WRITE(reg_name,x,y) ((*(volatile unsigned int *)(x)) = y)
    
    #elif defined(__MIPS_IA__)
        // Normal target, write to memory
        #define BIGRAM_REG_WRITE(reg_name,x,y) ((*(volatile unsigned int *)(x)) = y)

        // Other target... eg. xl1sim
    #endif
#endif


/* ---------- */
// API to compare user setting & ASIC setting

#define BIGRAM_ARBI_REGISTER_UPDATE(REG_NAME, RECORD) do {                                                              \
    if((BIGRAM_SETTING_GRP0(ASIC_ ## RECORD) != BIGRAM_SETTING_GRP0(USER_ ## RECORD)) || (BIGRAM_UNCOND_WRITE)) {       \
        BIGRAM_REG_WRITE(#REG_NAME"_0", REG_NAME ## _0, BIGRAM_SETTING_GRP0(USER_ ## RECORD));                          \
        BIGRAM_REG_WRITE(#REG_NAME"_1", REG_NAME ## _1, BIGRAM_SETTING_GRP1(USER_ ## RECORD));                          \
    }                                                                                                                   \
} while(0)

#define BIGRAM_REGISTER_UPDATE(REG_NAME, ASIC_SETTING, USER_SETTING) do {       \
    if((ASIC_SETTING != USER_SETTING) || (BIGRAM_UNCOND_WRITE)) {               \
        BIGRAM_REG_WRITE(#REG_NAME, REG_NAME, USER_SETTING);                    \
    }                                                                           \
} while(0)


/* ---------- */
// API to set BIGRAM REGISTERS

#define UPDATE_BIGRAM_REGISTER() do {                                                                                   \
    BIGRAM_REGISTER_UPDATE(BIGRAM_CON,                  ASIC_BIGRAM_CON,            USER_BIGRAM_CON);                   \
    BIGRAM_REGISTER_UPDATE(BIGRAM_ARBI_CON_0,           ASIC_BIGRAM_ARBI_CON0,      USER_BIGRAM_ARBI_CON0);             \
    BIGRAM_REGISTER_UPDATE(BIGRAM_ARBI_CON_1,           ASIC_BIGRAM_ARBI_CON1,      USER_BIGRAM_ARBI_CON1);             \
                                                                                                                        \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_D2BIF_R,    BIGRAM_CLIENT_D2BIF_R);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_D2BIF_W,    BIGRAM_CLIENT_D2BIF_W);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_RXT2F_R,    BIGRAM_CLIENT_RXT2F_R);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_RXT2F_W,    BIGRAM_CLIENT_RXT2F_W);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_BRDMA_R,    BIGRAM_CLIENT_BRDMA_R);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_BRDMA_W,    BIGRAM_CLIENT_BRDMA_W);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_DEMOD_R,    BIGRAM_CLIENT_DEMOD_R);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_LTECE_R,    BIGRAM_CLIENT_LTECE_R);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_MIMO_R,     BIGRAM_CLIENT_MIMO_R);                                          \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_MIMO_W,     BIGRAM_CLIENT_MIMO_W);                                          \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_LREBRP_W,   BIGRAM_CLIENT_LREBRP_W);                                        \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_BRP_R,      BIGRAM_CLIENT_BRP_R);                                           \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_B2RIF_R,    BIGRAM_CLIENT_B2RIF_R);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_R2BIF_W,    BIGRAM_CLIENT_R2BIF_W);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_VU0_R,      BIGRAM_CLIENT_VDSP0_R);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_VU0_W,      BIGRAM_CLIENT_VDSP0_W);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_VU1_R,      BIGRAM_CLIENT_VDSP1_R);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_VU1_W,      BIGRAM_CLIENT_VDSP1_W);                                         \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_BRBDGE_R,   BIGRAM_CLIENT_BRBDGE_R);                                        \
    BIGRAM_ARBI_REGISTER_UPDATE(BIGRAM_ARBI_BRBDGE_W,   BIGRAM_CLIENT_BRBDGE_W);                                        \
} while(0)



// During exception flow, BigRAM may not be clocked. Write following 2 registers to enable clock
#define UPDATE_BIGRAM_REGISTER_EXCEPTION_FLOW() do {                                                                    \
    *(volatile kal_uint32*)(BASE_MADDR_BRAM_BIGRAM_GLOBAL_CON + 0x8) = 0x7FF;                                           \
    BIGRAM_REGISTER_UPDATE(BIGRAM_CON,                  ASIC_BIGRAM_CON,            USER_BIGRAM_CON);                   \
} while(0)


/*
// Output message with "gcc -DBYPASS_REG_BASE_H -DMEMORY_WRITE_TO_PRINTF bigram_driver_test.c"
BIGRAM_CON                       0x00000000, 0x00000001
BIGRAM_ARBI_CON_0                0x00000010, 0x0000007F
BIGRAM_ARBI_CON_1                0x00000110, 0x0000107F
BIGRAM_ARBI_D2BIF_R_0            0x00000020, 0x80060009
BIGRAM_ARBI_D2BIF_R_1            0x00000120, 0x80060000
BIGRAM_ARBI_D2BIF_W_0            0x00000024, 0x80070004
BIGRAM_ARBI_D2BIF_W_1            0x00000124, 0x80070000
BIGRAM_ARBI_RXT2F_R_0            0x00000028, 0x800A0014
BIGRAM_ARBI_RXT2F_R_1            0x00000128, 0x800A0000
BIGRAM_ARBI_RXT2F_W_0            0x0000002C, 0x800B000A
BIGRAM_ARBI_RXT2F_W_1            0x0000012C, 0x800B0000
BIGRAM_ARBI_BRDMA_R_0            0x00000030, 0x80100001
BIGRAM_ARBI_BRDMA_R_1            0x00000130, 0x80100001
BIGRAM_ARBI_BRDMA_W_0            0x00000034, 0x80110001
BIGRAM_ARBI_BRDMA_W_1            0x00000134, 0x80110001
BIGRAM_ARBI_DEMOD_R_0            0x00000038, 0x80000003
BIGRAM_ARBI_DEMOD_R_1            0x00000138, 0x8000000A
BIGRAM_ARBI_LTECE_R_0            0x0000003C, 0x80020018
BIGRAM_ARBI_LTECE_R_1            0x0000013C, 0x8002000C
BIGRAM_ARBI_MIMO_R_0             0x00000040, 0x80040002
BIGRAM_ARBI_MIMO_R_1             0x00000140, 0x80040008
BIGRAM_ARBI_MIMO_W_0             0x00000044, 0x80050000
BIGRAM_ARBI_MIMO_W_1             0x00000144, 0x80050008
BIGRAM_ARBI_LREBRP_W_0           0x00000048, 0x8009000A
BIGRAM_ARBI_LREBRP_W_1           0x00000148, 0x80090000
BIGRAM_ARBI_BRP_R_0              0x0000004C, 0x80140000
BIGRAM_ARBI_BRP_R_1              0x0000014C, 0x80140006
BIGRAM_ARBI_B2RIF_R_0            0x00000050, 0x80160005
BIGRAM_ARBI_B2RIF_R_1            0x00000150, 0x80160000
BIGRAM_ARBI_R2BIF_W_0            0x00000054, 0x80130000
BIGRAM_ARBI_R2BIF_W_1            0x00000154, 0x80130004
BIGRAM_ARBI_VU0_R_0              0x00000058, 0x800C000A
BIGRAM_ARBI_VU0_R_1              0x00000158, 0x800C001F
BIGRAM_ARBI_VU0_W_0              0x0000005C, 0x800D0000
BIGRAM_ARBI_VU0_W_1              0x0000015C, 0x800D0000
BIGRAM_ARBI_VU1_R_0              0x00000060, 0x800E000A
BIGRAM_ARBI_VU1_R_1              0x00000160, 0x800E001F
BIGRAM_ARBI_VU1_W_0              0x00000064, 0x800F0000
BIGRAM_ARBI_VU1_W_1              0x00000164, 0x800F0000
BIGRAM_ARBI_BRBDGE_R_0           0x00000068, 0x80180002
BIGRAM_ARBI_BRBDGE_R_1           0x00000168, 0x80180002
BIGRAM_ARBI_BRBDGE_W_0           0x0000006C, 0x80190002
BIGRAM_ARBI_BRBDGE_W_1           0x0000016C, 0x80190002
*/
