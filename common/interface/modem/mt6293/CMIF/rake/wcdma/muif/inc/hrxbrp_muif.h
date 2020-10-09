#ifndef __BRP_MUIF_H__
#define __BRP_MUIF_H__

// ----------------- BRP_MUIF Register Definition -------------------
typedef volatile struct {
    kal_uint32 AGCH_SYM_SUM_C0;                                                           // 0x8000
    kal_uint32 TAR_SCCH_SYM_SUM;                                                          // 0x8004
    kal_uint32 SCCH_3_SYM_SUM_C1;                                                         // 0x8008
    kal_uint32 SCCH_2_SYM_SUM_C1;                                                         // 0x800C
    kal_uint32 SCCH_1_SYM_SUM_C1;                                                         // 0x8010
    kal_uint32 SCCH_0_SYM_SUM_C1;                                                         // 0x8014
    kal_uint32 SCCH_3_SYM_SUM_C0;                                                         // 0x8018
    kal_uint32 SCCH_2_SYM_SUM_C0;                                                         // 0x801C
    kal_uint32 SCCH_1_SYM_SUM_C0;                                                         // 0x8020
    kal_uint32 SCCH_0_SYM_SUM_C0;                                                         // 0x8024
    kal_uint32 AGCH_SUBFRAME_INDEX_C0;                                                    // 0x8028
    kal_uint32 TAR_SCCH_SUBFRAME_INDEX;                                                   // 0x802C
    kal_uint32 SCCH_SUBFRAME_INDEX_C1;                                                    // 0x8030
    kal_uint32 SCCH_SUBFRAME_INDEX_C0;                                                    // 0x8034
} BRP_MUIF_REGS, *PBRP_MUIF_REGS;

// ---------- BRP_MUIF word-offset  ----------
#define O_BRP_MUIF_AGCH_SYM_SUM_C0                                                        (0)
#define O_BRP_MUIF_TAR_SCCH_SYM_SUM                                                       (1)
#define O_BRP_MUIF_SCCH_3_SYM_SUM_C1                                                      (2)
#define O_BRP_MUIF_SCCH_2_SYM_SUM_C1                                                      (3)
#define O_BRP_MUIF_SCCH_1_SYM_SUM_C1                                                      (4)
#define O_BRP_MUIF_SCCH_0_SYM_SUM_C1                                                      (5)
#define O_BRP_MUIF_SCCH_3_SYM_SUM_C0                                                      (6)
#define O_BRP_MUIF_SCCH_2_SYM_SUM_C0                                                      (7)
#define O_BRP_MUIF_SCCH_1_SYM_SUM_C0                                                      (8)
#define O_BRP_MUIF_SCCH_0_SYM_SUM_C0                                                      (9)
#define O_BRP_MUIF_AGCH_SUBFRAME_INDEX_C0                                                 (10)
#define O_BRP_MUIF_TAR_SCCH_SUBFRAME_INDEX                                                (11)
#define O_BRP_MUIF_SCCH_SUBFRAME_INDEX_C1                                                 (12)
#define O_BRP_MUIF_SCCH_SUBFRAME_INDEX_C0                                                 (13)

// ---------- AGCH_SYM_SUM_C0 bit-field ----------
#define P_BRP_MUIF_AGCH_SYM_SUM_C0_AGCH_TRIG_C0                                           (31)
#define L_BRP_MUIF_AGCH_SYM_SUM_C0_AGCH_TRIG_C0                                           (1)
#define M_BRP_MUIF_AGCH_SYM_SUM_C0_AGCH_TRIG_C0                                           (0x80000000)
#define P_BRP_MUIF_AGCH_SYM_SUM_C0_AGCH_SYM_SUM_C0                                        (0)
#define L_BRP_MUIF_AGCH_SYM_SUM_C0_AGCH_SYM_SUM_C0                                        (13)
#define M_BRP_MUIF_AGCH_SYM_SUM_C0_AGCH_SYM_SUM_C0                                        (0x00001FFF)

// ---------- TAR_SCCH_SYM_SUM bit-field ----------
#define P_BRP_MUIF_TAR_SCCH_SYM_SUM_TAR_SCCH_TRIG                                         (31)
#define L_BRP_MUIF_TAR_SCCH_SYM_SUM_TAR_SCCH_TRIG                                         (1)
#define M_BRP_MUIF_TAR_SCCH_SYM_SUM_TAR_SCCH_TRIG                                         (0x80000000)
#define P_BRP_MUIF_TAR_SCCH_SYM_SUM_TAR_SCCH_SUM                                          (0)
#define L_BRP_MUIF_TAR_SCCH_SYM_SUM_TAR_SCCH_SUM                                          (14)
#define M_BRP_MUIF_TAR_SCCH_SYM_SUM_TAR_SCCH_SUM                                          (0x00003FFF)

// ---------- SCCH_3_SYM_SUM_C1 bit-field ----------
#define P_BRP_MUIF_SCCH_3_SYM_SUM_C1_SCCH_3_TRIG_C1                                       (31)
#define L_BRP_MUIF_SCCH_3_SYM_SUM_C1_SCCH_3_TRIG_C1                                       (1)
#define M_BRP_MUIF_SCCH_3_SYM_SUM_C1_SCCH_3_TRIG_C1                                       (0x80000000)
#define P_BRP_MUIF_SCCH_3_SYM_SUM_C1_SCCH_3_SYM_SUM_C1                                    (0)
#define L_BRP_MUIF_SCCH_3_SYM_SUM_C1_SCCH_3_SYM_SUM_C1                                    (14)
#define M_BRP_MUIF_SCCH_3_SYM_SUM_C1_SCCH_3_SYM_SUM_C1                                    (0x00003FFF)

// ---------- SCCH_2_SYM_SUM_C1 bit-field ----------
#define P_BRP_MUIF_SCCH_2_SYM_SUM_C1_SCCH_2_TRIG_C1                                       (31)
#define L_BRP_MUIF_SCCH_2_SYM_SUM_C1_SCCH_2_TRIG_C1                                       (1)
#define M_BRP_MUIF_SCCH_2_SYM_SUM_C1_SCCH_2_TRIG_C1                                       (0x80000000)
#define P_BRP_MUIF_SCCH_2_SYM_SUM_C1_SCCH_2_SYM_SUM_C1                                    (0)
#define L_BRP_MUIF_SCCH_2_SYM_SUM_C1_SCCH_2_SYM_SUM_C1                                    (14)
#define M_BRP_MUIF_SCCH_2_SYM_SUM_C1_SCCH_2_SYM_SUM_C1                                    (0x00003FFF)

// ---------- SCCH_1_SYM_SUM_C1 bit-field ----------
#define P_BRP_MUIF_SCCH_1_SYM_SUM_C1_SCCH_1_TRIG_C1                                       (31)
#define L_BRP_MUIF_SCCH_1_SYM_SUM_C1_SCCH_1_TRIG_C1                                       (1)
#define M_BRP_MUIF_SCCH_1_SYM_SUM_C1_SCCH_1_TRIG_C1                                       (0x80000000)
#define P_BRP_MUIF_SCCH_1_SYM_SUM_C1_SCCH_1_SYM_SUM_C1                                    (0)
#define L_BRP_MUIF_SCCH_1_SYM_SUM_C1_SCCH_1_SYM_SUM_C1                                    (14)
#define M_BRP_MUIF_SCCH_1_SYM_SUM_C1_SCCH_1_SYM_SUM_C1                                    (0x00003FFF)

// ---------- SCCH_0_SYM_SUM_C1 bit-field ----------
#define P_BRP_MUIF_SCCH_0_SYM_SUM_C1_SCCH_0_TRIG_C1                                       (31)
#define L_BRP_MUIF_SCCH_0_SYM_SUM_C1_SCCH_0_TRIG_C1                                       (1)
#define M_BRP_MUIF_SCCH_0_SYM_SUM_C1_SCCH_0_TRIG_C1                                       (0x80000000)
#define P_BRP_MUIF_SCCH_0_SYM_SUM_C1_SCCH_0_SYM_SUM_C1                                    (0)
#define L_BRP_MUIF_SCCH_0_SYM_SUM_C1_SCCH_0_SYM_SUM_C1                                    (14)
#define M_BRP_MUIF_SCCH_0_SYM_SUM_C1_SCCH_0_SYM_SUM_C1                                    (0x00003FFF)

// ---------- SCCH_3_SYM_SUM_C0 bit-field ----------
#define P_BRP_MUIF_SCCH_3_SYM_SUM_C0_SCCH_3_TRIG_C0                                       (31)
#define L_BRP_MUIF_SCCH_3_SYM_SUM_C0_SCCH_3_TRIG_C0                                       (1)
#define M_BRP_MUIF_SCCH_3_SYM_SUM_C0_SCCH_3_TRIG_C0                                       (0x80000000)
#define P_BRP_MUIF_SCCH_3_SYM_SUM_C0_SCCH_3_SYM_SUM_C0                                    (0)
#define L_BRP_MUIF_SCCH_3_SYM_SUM_C0_SCCH_3_SYM_SUM_C0                                    (14)
#define M_BRP_MUIF_SCCH_3_SYM_SUM_C0_SCCH_3_SYM_SUM_C0                                    (0x00003FFF)

// ---------- SCCH_2_SYM_SUM_C0 bit-field ----------
#define P_BRP_MUIF_SCCH_2_SYM_SUM_C0_SCCH_2_TRIG_C0                                       (31)
#define L_BRP_MUIF_SCCH_2_SYM_SUM_C0_SCCH_2_TRIG_C0                                       (1)
#define M_BRP_MUIF_SCCH_2_SYM_SUM_C0_SCCH_2_TRIG_C0                                       (0x80000000)
#define P_BRP_MUIF_SCCH_2_SYM_SUM_C0_SCCH_2_SYM_SUM_C0                                    (0)
#define L_BRP_MUIF_SCCH_2_SYM_SUM_C0_SCCH_2_SYM_SUM_C0                                    (14)
#define M_BRP_MUIF_SCCH_2_SYM_SUM_C0_SCCH_2_SYM_SUM_C0                                    (0x00003FFF)

// ---------- SCCH_1_SYM_SUM_C0 bit-field ----------
#define P_BRP_MUIF_SCCH_1_SYM_SUM_C0_SCCH_1_TRIG_C0                                       (31)
#define L_BRP_MUIF_SCCH_1_SYM_SUM_C0_SCCH_1_TRIG_C0                                       (1)
#define M_BRP_MUIF_SCCH_1_SYM_SUM_C0_SCCH_1_TRIG_C0                                       (0x80000000)
#define P_BRP_MUIF_SCCH_1_SYM_SUM_C0_SCCH_1_SYM_SUM_C0                                    (0)
#define L_BRP_MUIF_SCCH_1_SYM_SUM_C0_SCCH_1_SYM_SUM_C0                                    (14)
#define M_BRP_MUIF_SCCH_1_SYM_SUM_C0_SCCH_1_SYM_SUM_C0                                    (0x00003FFF)

// ---------- SCCH_0_SYM_SUM_C0 bit-field ----------
#define P_BRP_MUIF_SCCH_0_SYM_SUM_C0_SCCH_0_TRIG_C0                                       (31)
#define L_BRP_MUIF_SCCH_0_SYM_SUM_C0_SCCH_0_TRIG_C0                                       (1)
#define M_BRP_MUIF_SCCH_0_SYM_SUM_C0_SCCH_0_TRIG_C0                                       (0x80000000)
#define P_BRP_MUIF_SCCH_0_SYM_SUM_C0_SCCH_0_SYM_SUM_C0                                    (0)
#define L_BRP_MUIF_SCCH_0_SYM_SUM_C0_SCCH_0_SYM_SUM_C0                                    (14)
#define M_BRP_MUIF_SCCH_0_SYM_SUM_C0_SCCH_0_SYM_SUM_C0                                    (0x00003FFF)

// ---------- AGCH_SUBFRAME_INDEX_C0 bit-field ----------
#define P_BRP_MUIF_AGCH_SUBFRAME_INDEX_C0_AGCH_SUBFRAME_INDEX_C0                          (0)
#define L_BRP_MUIF_AGCH_SUBFRAME_INDEX_C0_AGCH_SUBFRAME_INDEX_C0                          (3)
#define M_BRP_MUIF_AGCH_SUBFRAME_INDEX_C0_AGCH_SUBFRAME_INDEX_C0                          (0x00000007)

// ---------- TAR_SCCH_SUBFRAME_INDEX bit-field ----------
#define P_BRP_MUIF_TAR_SCCH_SUBFRAME_INDEX_TAR_SCCH_SUBFRAME_INDEX                        (0)
#define L_BRP_MUIF_TAR_SCCH_SUBFRAME_INDEX_TAR_SCCH_SUBFRAME_INDEX                        (3)
#define M_BRP_MUIF_TAR_SCCH_SUBFRAME_INDEX_TAR_SCCH_SUBFRAME_INDEX                        (0x00000007)

// ---------- SCCH_SUBFRAME_INDEX_C1 bit-field ----------
#define P_BRP_MUIF_SCCH_SUBFRAME_INDEX_C1_SCCH_SUBFRAME_INDEX_C1                          (0)
#define L_BRP_MUIF_SCCH_SUBFRAME_INDEX_C1_SCCH_SUBFRAME_INDEX_C1                          (3)
#define M_BRP_MUIF_SCCH_SUBFRAME_INDEX_C1_SCCH_SUBFRAME_INDEX_C1                          (0x00000007)

// ---------- SCCH_SUBFRAME_INDEX_C0 bit-field ----------
#define P_BRP_MUIF_SCCH_SUBFRAME_INDEX_C0_SCCH_SUBFRAME_INDEX_C0                          (0)
#define L_BRP_MUIF_SCCH_SUBFRAME_INDEX_C0_SCCH_SUBFRAME_INDEX_C0                          (3)
#define M_BRP_MUIF_SCCH_SUBFRAME_INDEX_C0_SCCH_SUBFRAME_INDEX_C0                          (0x00000007)

#endif // __BRP_MUIF_H__
