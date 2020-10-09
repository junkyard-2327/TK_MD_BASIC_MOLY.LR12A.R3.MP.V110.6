#ifndef __BIGRAM_H__
#define __BIGRAM_H__

#include "bigram_api.h"
// [Comment by Leo]
// 1. This file is put in common/ because other cores may need to know which portion of BigRAM is shareable
//    These users could know the base address via this file
// 2. Regarding other RAT's header file (eg. bigram_lte.h), they are not necessarily been put here.
//    However, developers could find all bigram related definition in one folder. So I do this way.

#include <stddef.h>
// this macro is defined in stddef.h if compiler support
//#define offsetof(s, m)      ((unsigned int)(&((s*)0)->m))


#define KB(x)               ((x)*1024)
#define BYTE64(x)           ((x)*64)        // Honors the BigRAM base address is 64-byte alignment
#define CEILING_BYTE64(x)   (BYTE64(((x)+63)/64))
#define HALF2BYTE(x)        ((x)*2)
#define CHALF2BYTE(x)       ((x)*4)

// wcdma time domain buffer samples per cc per 1 rxd, currently is 2560(chips) * 2(slot)  * 2(sampling rate) = 10240
#define WCDMA_TDB_SAMPLE_PER_CC_PER_RXD (2560*2*2)
// wcdma time domain buffer length in bytes per cc per rxd, currently is (2560(chips) * 2(slot)  * 2(sampling rate)) * 2(I 8bits+ Q 8bits)
#define WCDMA_TDB_LENGTH_PER_CC_PER_RXD (WCDMA_TDB_SAMPLE_PER_CC_PER_RXD*2)
// wcdma time domain buffer length in bytes, currently is (2560(chips) * 2(slot)  * 2(sampling rate)) * 2(I 8bits+ Q 8bits) * 2 (rxd) * 2(cc)
#define WCDMA_TDB_LENGH (WCDMA_TDB_LENGTH_PER_CC_PER_RXD*2*BIGRAM_WCDMA_NUM_CC)
/* ---------- */
// BigRAM size definition

#if defined(MT6293) || defined(BIANCO) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
    #define GRP0_SZ     (KB(512))
    #define GRP1_SZ     (KB(512))

    #define BIGRAM_LTE_NUM_CC          (2)
    #define BIGRAM_WCDMA_NUM_CC        (2)
    #define BIGRAM_LTE_DMEM_NUM_SYM    (21)
    #define BIGRAM_LTE_DMEM_BLK_SZ     KB(5) // 2RX*1200RE*68BIT/4RE ~ 5KB
    #define BIGRAM_LTE_DMEM_SZ         (BIGRAM_LTE_DMEM_NUM_SYM*BIGRAM_LTE_DMEM_BLK_SZ*BIGRAM_LTE_NUM_CC)
    #define BIGRAM_LTE_FDB0_SZ         KB(24) // 3MHz Data + 3MHz header (3MHz Data+header > 10MHz Data+header)
    #define BIGRAM_LTE_FDB1_SZ         KB(63)  // This size is 4*(10MHz Data + Header) - (3MHz Data + Header)
    #define BIGRAM_LTE_VMEM_SZ         KB(115)
    #define BIGRAM_LTE_RMEM_SZ         KB(40)
    #define BIGRAM_LTE_NO_CC_SZ        KB(39)
    #define BIGRAM_LTE_NON_OVERLAY_SZ  KB(35)

#elif defined(MT6293L17) || defined(MT6739) // L1 name corresponding to L17 is not available now (2016/9/5)
    #define GRP0_SZ     (KB(384))
    #define GRP1_SZ     (KB(384))

    #define BIGRAM_LTE_NUM_CC          (1)
    #define BIGRAM_WCDMA_NUM_CC        (2)
    #define BIGRAM_LTE_DMEM_NUM_SYM    (20)
    #define BIGRAM_LTE_DMEM_BLK_SZ     KB(5) // 2RX*1200RE*68BIT/4RE ~ 5KB
    #define BIGRAM_LTE_DMEM_SZ         (BIGRAM_LTE_DMEM_NUM_SYM*BIGRAM_LTE_DMEM_BLK_SZ*BIGRAM_LTE_NUM_CC)
    #define BIGRAM_LTE_FDB0_SZ         KB(12) // 24/2 = 12
    #define BIGRAM_LTE_FDB1_SZ         KB(32) // ceiling(63/2) = 32

#if __TBMIMO_ON_ZION__
    #define BIGRAM_LTE_VMEM_SZ         KB(153) // 38 for SC, 115KB for NOMA_MIMO
    #define BIGRAM_LTE_RMEM_SZ         KB(65)  // 10.25-> 11 for SC, 52.75->54 for NOMA_MIMO
    #define BIGRAM_LTE_NO_CC_SZ        KB(27)
#else
    #define BIGRAM_LTE_VMEM_SZ         KB(58) // ceiling(115/2) = 58
    #define BIGRAM_LTE_RMEM_SZ         KB(20)
    #define BIGRAM_LTE_NO_CC_SZ        KB(29)
#endif

    #define BIGRAM_LTE_NON_OVERLAY_SZ  KB(35)

#else
    #error "Unsupported CHIP in bigram.h"

#endif


/* ---------- */
// # of VDSP (affecting VDSP working buffer size)

#define NUM_VDSP    (2)

/* ---------- */
// BigRAM group 0


#define BIGRAM_3G_TDB_SZ               KB(80)
#define BIGRAM_TDB_WCDMA_SZ            (WCDMA_TDB_LENGH) // WCDMA TDB requires 80KB
#define BIGRAM_TDB_TDSCDMA_SZ          KB(30) // WCDMA/TDSCDMA is not happened simultaneously, 80KB(WCDMA) & TDD(30+50) shares the same region
#define BIGRAM_TDB_TDSCDMA_WBUF_SZ     KB(10)
#define BIGRAM_TDB_C2K_SZ              KB(16) // C2K 1xRTT QLIC mode TDB size
#define BIGRAM_TDB_C2K_1XRTT_RXD_SZ    (BIGRAM_TDB_C2K_SZ/2) // C2K 1xRTT RXD mode TDB size (rxd mode need 4kb+4kb size, just divide 16kb into two part)
#define BIGRAM_TDB_C2K_EVDO_SZ         HALF2BYTE(1024*2*3) // C2K EVDO TDB
#define BIGRAM_HWDVT_LTE_CM_FDB        KB(58)

typedef union {
    kal_uint8 container[BIGRAM_3G_TDB_SZ];
    union {
        kal_uint8 wcdma[BIGRAM_TDB_WCDMA_SZ];
        struct {
            kal_uint8 tdb[BIGRAM_TDB_TDSCDMA_SZ];
            kal_uint8 wbuf[BIGRAM_TDB_TDSCDMA_WBUF_SZ]; // TODO: polling HY Chung @ 2016/07/01, able to remove this?
        } tdscdma;

        struct {
            kal_uint8 pad[KB(40)];
            union {
                // 1xRTT QLIC mode TDB buffer
                kal_uint8 tdb_c2k[BIGRAM_TDB_C2K_SZ];
                // 1xRTT RXD mode TDB buffer
                kal_uint8 tdb_c2k_rxd[2][BIGRAM_TDB_C2K_1XRTT_RXD_SZ];
            } c2k_rtt;
            kal_uint8 tdb_c2k_evdo[2][BIGRAM_TDB_C2K_EVDO_SZ];
        } c2k;

        // Test purpose, for LTE HWDVT, LTE-CM buffer. The size must less than WCDMA buffer (TODO: add assertion)
        kal_uint8 hwdvt_lte_cm_fdb  [BIGRAM_HWDVT_LTE_CM_FDB];
    } payload;
} bigram_tdb_3g_t;


#define BIGRAM_TDB_LTE_SZ               KB(33)
/* In M17, LTE runs 2CC, so it needs full 33KB buffer
 *
 * In L17, LTE runs 1CC, it needs only 16.5KB buffer. However, due to MB-PBCH implementation, we still need 33KB here
 * In L17, LTE-CM could leverage 17~33KB spaces which uses as FDB, since MB-PBCH & LTE-CM will not happen at the same time
 */
typedef union {
    kal_uint8 container[BIGRAM_TDB_LTE_SZ];
    union {
        kal_uint8 tdb_lte[BIGRAM_TDB_LTE_SZ];

#if defined(MT6293L17) || defined(MT6739)
#define BIGRAM_LTE_FDB_IN_TDB           KB(16)
        struct {
            kal_uint8 pad[BIGRAM_TDB_LTE_SZ - BIGRAM_LTE_FDB_IN_TDB];
            kal_uint8 lte_standby_fdb[BIGRAM_LTE_FDB_IN_TDB];
        } share;
#endif
    } payload;
} bigram_tdb_lte_t;

// COMMON
typedef struct {
    bigram_tdb_3g_t tdb_3g;
    bigram_tdb_lte_t tdb_lte;
    kal_uint8 lte_fdb0      [BIGRAM_LTE_FDB0_SZ];
} bigram_grp0_common_t;

// LTE
typedef struct {
    kal_uint8 dmem[BIGRAM_LTE_DMEM_SZ];
    kal_uint8 vmem[BIGRAM_LTE_VMEM_SZ];
} bigram_grp0_lte_t;

// WCDMA/ TDSCDMA/ C2K

#define BIGRAM_WCDMA_EQTD_SZ    KB(23)
#define BIGRAM_WCDMA_EQFD_SZ    KB(48)
#define BIGRAM_WCDMA_2BRP_SZ    KB(29)
#define BIGRAM_WCDMA_DEBUG_SZ    KB(1)


typedef struct {
    kal_uint8 lte_fdb1[BIGRAM_LTE_FDB1_SZ];
    union {
        struct {
            kal_uint8 wcdma_eqtd[BIGRAM_WCDMA_NUM_CC][BIGRAM_WCDMA_EQTD_SZ];
            kal_uint8 wcdma_eqfd[BIGRAM_WCDMA_NUM_CC][BIGRAM_WCDMA_EQFD_SZ];
            kal_uint8 wcdma_2brp[BIGRAM_WCDMA_NUM_CC][BIGRAM_WCDMA_2BRP_SZ];
            kal_uint8 wcdma_debug[BIGRAM_WCDMA_DEBUG_SZ];
        } wcdma;
    } _3g_data;
} bigram_grp0_3g_t;


// composite grp-0 structure
typedef union {
    kal_uint8 container[GRP0_SZ];

    struct {
        bigram_grp0_common_t common;
        union {
            bigram_grp0_lte_t lte;
            bigram_grp0_3g_t _3g;
        } overlay;
    } payload;
} bigram_grp0_t;


/* ---------- */
// BigRAM group 1

#define BIGRAM_GRP1_PAD_SZ(structure)   (GRP0_SZ + GRP1_SZ - sizeof(bigram_grp1_common_t) - sizeof(structure))



// COMMON

typedef struct {
#define BIGRAM_TDD_CM_SZ            KB(7)
#define BIGRAM_RAKE_BRP_SZ          KB(40)
#define BIGRAM_MISC_SZ              KB(1)
#define BIGRAM_COEF_SZ              KB(47)
#define BIGRAM_WBUF_SZ              KB(32)
    kal_uint8 non_overlay_lte[BIGRAM_LTE_NON_OVERLAY_SZ];
    kal_uint8 tdd_cm_buf[BIGRAM_TDD_CM_SZ];
    kal_uint8 rake_brp[BIGRAM_RAKE_BRP_SZ];
    kal_uint8 misc[BIGRAM_MISC_SZ];
    kal_uint8 coef[BIGRAM_COEF_SZ];
    kal_uint8 wbuf[NUM_VDSP][BIGRAM_WBUF_SZ];
} bigram_grp1_common_t;

// LTE
typedef struct {
#define BIGRAM_LTE_CC_SZ           KB(98)
    kal_uint8 cc[BIGRAM_LTE_NUM_CC][BIGRAM_LTE_CC_SZ];
#if defined(MT6293) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
    #define BIGRAM_LTE_DMRS_OC_SZ      KB(12)
    kal_uint8 dmrs_oc[BIGRAM_LTE_DMRS_OC_SZ];
#endif
    kal_uint8 rmem[BIGRAM_LTE_RMEM_SZ];
    kal_uint8 no_cc[BIGRAM_LTE_NO_CC_SZ];
} _bigram_grp1_lte_t;


typedef struct {
    kal_uint8 pad[BIGRAM_GRP1_PAD_SZ(_bigram_grp1_lte_t)];
    _bigram_grp1_lte_t data;
} bigram_grp1_lte_t;




// WCDMA
#define BIGRAM_WCDMA_CE_SZ      KB(73)
#define BIGRAM_WCDMA_SRP_SZ     KB(7)

typedef struct {
    kal_uint8 wcdma_ce[BIGRAM_WCDMA_NUM_CC][BIGRAM_WCDMA_CE_SZ];
    kal_uint8 wcdma_srp[BIGRAM_WCDMA_NUM_CC][BIGRAM_WCDMA_SRP_SZ];
} _bigram_grp1_wcdma_t;

typedef struct {
    kal_uint8 pad[BIGRAM_GRP1_PAD_SZ(_bigram_grp1_wcdma_t)];
    _bigram_grp1_wcdma_t data;
} bigram_grp1_wcdma_t;



// TDSCDMA
typedef struct {
#define BIGRAM_TDSCDMA_STATIC_BUF_SZ   KB(50)
    kal_uint8 static_buf[BIGRAM_TDSCDMA_STATIC_BUF_SZ];
} _bigram_grp1_tdscdma_t;

typedef struct {
    kal_uint8 pad[BIGRAM_GRP1_PAD_SZ(_bigram_grp1_tdscdma_t)];
    _bigram_grp1_tdscdma_t data;
} bigram_grp1_tdscdma_t;



// C2K
typedef struct {
#define BIGRAM_C2K_EQ_DATA_SZ  KB(32)
#define BIGRAM_C2K_CE_SZ       KB(7)
#define BIGRAM_C2K_EVDO_BRP_SZ KB(7)
    kal_uint8                   eq_data[BIGRAM_C2K_EQ_DATA_SZ];
    kal_uint8                   ce[BIGRAM_C2K_CE_SZ];
    kal_uint8                   evdo_brp[BIGRAM_C2K_EVDO_BRP_SZ];
} _bigram_grp1_c2k_t;

typedef struct {
    kal_uint8 pad[BIGRAM_GRP1_PAD_SZ(_bigram_grp1_c2k_t)];
    _bigram_grp1_c2k_t data;
} bigram_grp1_c2k_t;

// composite grp-1 structure
typedef union {
    kal_uint8 container[GRP0_SZ + GRP1_SZ];

    struct {
        union {
            bigram_grp1_lte_t       lte;
            bigram_grp1_wcdma_t     wcdma;
            bigram_grp1_tdscdma_t   tdscdma;
            bigram_grp1_c2k_t       c2k;
        } overlay;
        bigram_grp1_common_t common;
    } payload;
} bigram_grp1_t;



/* ---------- */
// BIGRAM memory map

typedef union {
    bigram_grp0_t grp0;
    bigram_grp1_t grp1;
} bigram_t;


/* ---------- */
// Base address macros

// COMMON-GRP0
// C2K 1xRTT QLIC mode TDB starting address
#define BIGRAM_TDB_C2K_ADDR                 offsetof(bigram_t, grp0.payload.common.tdb_3g.payload.c2k.c2k_rtt.tdb_c2k)
// C2K 1xRTT RXD mode TDB starting address (2 rxd dimension)
#define BIGRAM_TDB_C2K_1XRTT_RXD_ADDR(x)    offsetof(bigram_t, grp0.payload.common.tdb_3g.payload.c2k.c2k_rtt.tdb_c2k_rxd[x])
// C2K EVDO mode TDB starting address (2 rxd dimension)
#define BIGRAM_TDB_C2K_EVDO_ADDR            offsetof(bigram_t, grp0.payload.common.tdb_3g.payload.c2k.tdb_c2k_evdo)
#define BIGRAM_TDB_WCDMA_ADDR               offsetof(bigram_t, grp0.payload.common.tdb_3g.payload.wcdma)
#define BIGRAM_TDB_TDSCDMA_ADDR             offsetof(bigram_t, grp0.payload.common.tdb_3g.payload.tdscdma.tdb)
#define BIGRAM_TDB_TDSCDMA_WBUF_ADDR        offsetof(bigram_t, grp0.payload.common.tdb_3g.payload.tdscdma.wbuf)
#define BIGRAM_HWDVT_LTE_CM_FDB_ADDR        offsetof(bigram_t, grp0.payload.common.tdb_3g.payload.hwdvt_lte_cm_fdb)
#define BIGRAM_TDB_LTE_ADDR                 offsetof(bigram_t, grp0.payload.common.tdb_lte.payload.tdb_lte)

#if defined(MT6293) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
    #define BIGRAM_LTE_FDB0_ADDR            offsetof(bigram_t, grp0.payload.common.lte_fdb0)
    #define _BIGRAM_LTE_FDB0_ADDR           BIGRAM_LTE_FDB0_ADDR
#elif defined(MT6293L17) || defined(MT6739)
    //#define BIGRAM_LTE_FDB0_ADDR            offsetof(bigram_t, grp0.payload.common.tdb_lte.payload.share.lte_standby_fdb) //Memory conflict with MB-PBCH
    #define BIGRAM_LTE_FDB0_ADDR            offsetof(bigram_t, grp0.payload.common.lte_fdb0)
    #define _BIGRAM_LTE_FDB0_ADDR           offsetof(bigram_t, grp0.payload.common.lte_fdb0)
#endif

// COMMON-GRP1
#define BIGRAM_LTE_NON_OVERLAY_ADDR     offsetof(bigram_t, grp1.payload.common.non_overlay_lte)
#define BIGRAM_TDD_CM_BUF_ADDR          offsetof(bigram_t, grp1.payload.common.tdd_cm_buf)
#define BIGRAM_RAKE_BRP_ADDR            offsetof(bigram_t, grp1.payload.common.rake_brp)
#define BIGRAM_MISC_ADDR                offsetof(bigram_t, grp1.payload.common.misc)
#define BIGRAM_COEF_ADDR                offsetof(bigram_t, grp1.payload.common.coef)
#define BIGRAM_WBUF_ADDR(x)             offsetof(bigram_t, grp1.payload.common.wbuf[x])

// LTE
#define BIGRAM_LTE_DMEM_ADDR            offsetof(bigram_t, grp0.payload.overlay.lte.dmem)
#define BIGRAM_LTE_FDB1_ADDR            offsetof(bigram_t, grp0.payload.overlay._3g.lte_fdb1)
#define BIGRAM_LTE_VMEM_ADDR            offsetof(bigram_t, grp0.payload.overlay.lte.vmem)
#define BIGRAM_LTE_RMEM_ADDR            offsetof(bigram_t, grp1.payload.overlay.lte.data.rmem)
#if defined(MT6293) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
    #define BIGRAM_LTE_DMRS_OC_ADDR         offsetof(bigram_t, grp1.payload.overlay.lte.data.dmrs_oc)
    #define BIGRAM_LTE_NOMA_BUF_ADDR        offsetof(bigram_t, grp1.payload.overlay.lte.data.noma_buf)
#endif
#define BIGRAM_LTE_NO_CC_ADDR           offsetof(bigram_t, grp1.payload.overlay.lte.data.no_cc)
#define BIGRAM_LTE_CC_ADDR(x)           offsetof(bigram_t, grp1.payload.overlay.lte.data.cc[x])

// WCDMA

#define BIGRAM_WCDMA_CC_HSCE_ADDR(x)          offsetof(bigram_t, grp1.payload.overlay.wcdma.data.wcdma_ce[x])
#define BIGRAM_WCDMA_CC_HSSRP_ADDR(x)         offsetof(bigram_t, grp1.payload.overlay.wcdma.data.wcdma_srp[x])

#define BIGRAM_WCDMA_CC_HSEQ_TD_ADDR(x)       offsetof(bigram_t, grp0.payload.overlay._3g._3g_data.wcdma.wcdma_eqtd[x])
#define BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(x)       offsetof(bigram_t, grp0.payload.overlay._3g._3g_data.wcdma.wcdma_eqfd[x])
#define BIGRAM_WCDMA_CC_HSEQ_TD2BRP_ADDR(x)   offsetof(bigram_t, grp0.payload.overlay._3g._3g_data.wcdma.wcdma_2brp[x])
#define BIGRAM_WCDMA_DEBUG_ADDR               offsetof(bigram_t, grp0.payload.overlay._3g._3g_data.wcdma.wcdma_debug)

// TDSCDMA
#define BIGRAM_TDSCDMA_STATIC_BUF_ADDR  offsetof(bigram_t, grp1.payload.overlay.tdscdma.data.static_buf)

// C2K
#define BIGRAM_C2K_EQ_DATA_ADDR         offsetof(bigram_t, grp1.payload.overlay.c2k.data.eq_data)
#define BIGRAM_C2K_CE_ADDR              offsetof(bigram_t, grp1.payload.overlay.c2k.data.ce)
#define BIGRAM_C2K_EVDO_BRP_ADDR        offsetof(bigram_t, grp1.payload.overlay.c2k.data.evdo_brp)
#define BIGRAM_C2K_PAC_ADDR(x)          offsetof(bigram_t, grp0.payload.common.tdb_3g.payload.c2k.tdb_c2k_evdo[x])
#define BIGRAM_GRP0_TDB_C2K_EVDO_SZ     (1024*2*3*2)










/* ---------- */
// Misc group partition

// Misc group is used to provide misc functions among DSP development
// To use this group, one shall document its purpose carefully in this place

// Purpose #1, memory barrier does not need to separate address of different VDSP
// [20161226, Leo/Lupin] 
//     The memory barrier function now is implemented with hardware version, and the definition here is no longer used
//     We reserve these code here because Tina's CBr still uses older WCDMA code which still needs them
#define BIGRAM_MEMORY_BARRIER_SRC_ADDR      (BIGRAM_MISC_ADDR + 0)
#define BIGRAM_MEMORY_BARRIER_DST_ADDR      (BIGRAM_MISC_ADDR + 2*256)

// Purpose #2, in 6293, we no longer use BigRAM V-Stack. However, to avoid hardware panic, we just reserve fake VU-stack region here
#define BIGRAM_FAKE_VSTACK_ADDR         (BIGRAM_MISC_ADDR)

#endif // __BIGRAM_H__
