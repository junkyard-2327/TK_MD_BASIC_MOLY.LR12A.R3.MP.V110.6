#ifndef __FDD_EVENTGEN_H__
#define __FDD_EVENTGEN_H__

// ----------------- FDD_EVENTGEN Register Definition -------------------
typedef volatile struct {
    kal_uint32 CS_EVENT_0;                                                                // 0x0000
    kal_uint32 CS_EVENT_1;                                                                // 0x0004
    kal_uint32 CS_EVENT_2;                                                                // 0x0008
    kal_uint32 CS_EVENT_3;                                                                // 0x000C
    kal_uint32 CS_EVENT_4;                                                                // 0x0010
    kal_uint32 CS_EVENT_5;                                                                // 0x0014
    kal_uint32 rsv_0018[2];                                                               // 0x0018..0x001C
    kal_uint32 TXBRP_EVENT_0;                                                             // 0x0020
    kal_uint32 TXBRP_EVENT_1;                                                             // 0x0024
    kal_uint32 rsv_0028[2];                                                               // 0x0028..0x002C
    kal_uint32 RXDFE_ON_EVENT;                                                            // 0x0030
    kal_uint32 RXDFE_OFF_EVENT;                                                           // 0x0034
    kal_uint32 rsv_0038[2];                                                               // 0x0038..0x003C
    kal_uint32 TTR_ON_EVENT;                                                              // 0x0040
    kal_uint32 TTR_OFF_EVENT;                                                             // 0x0044
    kal_uint32 rsv_0048[2];                                                               // 0x0048..0x004C
    kal_uint32 DBG_ON_EVENT;                                                              // 0x0050
    kal_uint32 DBG_OFF_EVENT;                                                             // 0x0054
    kal_uint32 rsv_0058[2];                                                               // 0x0058..0x005C
    kal_uint32 DVFS_EVENT[3];                                                             // 0x0060..0x0068
    kal_uint32 rsv_006C[33];                                                              // 0x006C..0x00EC
    kal_uint32 PWR_MEAS_MODE;                                                             // 0x00F0
    kal_uint32 PWR_MEAS_MASK;                                                             // 0x00F4
} FDD_EVENTGEN_REGS, *PFDD_EVENTGEN_REGS;

// ---------- FDD_EVENTGEN word-offset  ----------
#define O_FDD_EVENTGEN_CS_EVENT_0                                                         (0)
#define O_FDD_EVENTGEN_CS_EVENT_1                                                         (1)
#define O_FDD_EVENTGEN_CS_EVENT_2                                                         (2)
#define O_FDD_EVENTGEN_CS_EVENT_3                                                         (3)
#define O_FDD_EVENTGEN_CS_EVENT_4                                                         (4)
#define O_FDD_EVENTGEN_CS_EVENT_5                                                         (5)
#define O_FDD_EVENTGEN_TXBRP_EVENT_0                                                      (8)
#define O_FDD_EVENTGEN_TXBRP_EVENT_1                                                      (9)
#define O_FDD_EVENTGEN_RXDFE_ON_EVENT                                                     (12)
#define O_FDD_EVENTGEN_RXDFE_OFF_EVENT                                                    (13)
#define O_FDD_EVENTGEN_TTR_ON_EVENT                                                       (16)
#define O_FDD_EVENTGEN_TTR_OFF_EVENT                                                      (17)
#define O_FDD_EVENTGEN_DBG_ON_EVENT                                                       (20)
#define O_FDD_EVENTGEN_DBG_OFF_EVENT                                                      (21)
#define O_FDD_EVENTGEN_DVFS_EVENT(i)                                                      (24 + (i))
#define O_FDD_EVENTGEN_PWR_MEAS_MODE                                                      (60)
#define O_FDD_EVENTGEN_PWR_MEAS_MASK                                                      (61)

// ---------- CS_EVENT_0 bit-field ----------
#define P_FDD_EVENTGEN_CS_EVENT_0_EN                                                      (31)
#define L_FDD_EVENTGEN_CS_EVENT_0_EN                                                      (1)
#define M_FDD_EVENTGEN_CS_EVENT_0_EN                                                      (0x80000000)
#define P_FDD_EVENTGEN_CS_EVENT_0_CS_EVENT                                                (2)
#define L_FDD_EVENTGEN_CS_EVENT_0_CS_EVENT                                                (17)
#define M_FDD_EVENTGEN_CS_EVENT_0_CS_EVENT                                                (0x0007FFFC)

// ---------- CS_EVENT_1 bit-field ----------
#define P_FDD_EVENTGEN_CS_EVENT_1_EN                                                      (31)
#define L_FDD_EVENTGEN_CS_EVENT_1_EN                                                      (1)
#define M_FDD_EVENTGEN_CS_EVENT_1_EN                                                      (0x80000000)
#define P_FDD_EVENTGEN_CS_EVENT_1_TAG_EN                                                  (30)
#define L_FDD_EVENTGEN_CS_EVENT_1_TAG_EN                                                  (1)
#define M_FDD_EVENTGEN_CS_EVENT_1_TAG_EN                                                  (0x40000000)
#define P_FDD_EVENTGEN_CS_EVENT_1_CS_EVENT                                                (2)
#define L_FDD_EVENTGEN_CS_EVENT_1_CS_EVENT                                                (17)
#define M_FDD_EVENTGEN_CS_EVENT_1_CS_EVENT                                                (0x0007FFFC)

// ---------- CS_EVENT_2 bit-field ----------
#define P_FDD_EVENTGEN_CS_EVENT_2_EN                                                      (31)
#define L_FDD_EVENTGEN_CS_EVENT_2_EN                                                      (1)
#define M_FDD_EVENTGEN_CS_EVENT_2_EN                                                      (0x80000000)
#define P_FDD_EVENTGEN_CS_EVENT_2_CS_EVENT                                                (2)
#define L_FDD_EVENTGEN_CS_EVENT_2_CS_EVENT                                                (17)
#define M_FDD_EVENTGEN_CS_EVENT_2_CS_EVENT                                                (0x0007FFFC)

// ---------- CS_EVENT_3 bit-field ----------
#define P_FDD_EVENTGEN_CS_EVENT_3_EN                                                      (31)
#define L_FDD_EVENTGEN_CS_EVENT_3_EN                                                      (1)
#define M_FDD_EVENTGEN_CS_EVENT_3_EN                                                      (0x80000000)
#define P_FDD_EVENTGEN_CS_EVENT_3_CS_EVENT                                                (2)
#define L_FDD_EVENTGEN_CS_EVENT_3_CS_EVENT                                                (17)
#define M_FDD_EVENTGEN_CS_EVENT_3_CS_EVENT                                                (0x0007FFFC)

// ---------- CS_EVENT_4 bit-field ----------
#define P_FDD_EVENTGEN_CS_EVENT_4_EN                                                      (31)
#define L_FDD_EVENTGEN_CS_EVENT_4_EN                                                      (1)
#define M_FDD_EVENTGEN_CS_EVENT_4_EN                                                      (0x80000000)
#define P_FDD_EVENTGEN_CS_EVENT_4_CS_EVENT                                                (2)
#define L_FDD_EVENTGEN_CS_EVENT_4_CS_EVENT                                                (17)
#define M_FDD_EVENTGEN_CS_EVENT_4_CS_EVENT                                                (0x0007FFFC)

// ---------- CS_EVENT_5 bit-field ----------
#define P_FDD_EVENTGEN_CS_EVENT_5_EN                                                      (31)
#define L_FDD_EVENTGEN_CS_EVENT_5_EN                                                      (1)
#define M_FDD_EVENTGEN_CS_EVENT_5_EN                                                      (0x80000000)
#define P_FDD_EVENTGEN_CS_EVENT_5_CS_EVENT                                                (2)
#define L_FDD_EVENTGEN_CS_EVENT_5_CS_EVENT                                                (17)
#define M_FDD_EVENTGEN_CS_EVENT_5_CS_EVENT                                                (0x0007FFFC)

// ---------- TXBRP_EVENT_0 bit-field ----------
#define P_FDD_EVENTGEN_TXBRP_EVENT_0_EN                                                   (31)
#define L_FDD_EVENTGEN_TXBRP_EVENT_0_EN                                                   (1)
#define M_FDD_EVENTGEN_TXBRP_EVENT_0_EN                                                   (0x80000000)
#define P_FDD_EVENTGEN_TXBRP_EVENT_0_TXBRP_EVENT                                          (2)
#define L_FDD_EVENTGEN_TXBRP_EVENT_0_TXBRP_EVENT                                          (17)
#define M_FDD_EVENTGEN_TXBRP_EVENT_0_TXBRP_EVENT                                          (0x0007FFFC)

// ---------- TXBRP_EVENT_1 bit-field ----------
#define P_FDD_EVENTGEN_TXBRP_EVENT_1_EN                                                   (31)
#define L_FDD_EVENTGEN_TXBRP_EVENT_1_EN                                                   (1)
#define M_FDD_EVENTGEN_TXBRP_EVENT_1_EN                                                   (0x80000000)
#define P_FDD_EVENTGEN_TXBRP_EVENT_1_TXBRP_EVENT                                          (2)
#define L_FDD_EVENTGEN_TXBRP_EVENT_1_TXBRP_EVENT                                          (17)
#define M_FDD_EVENTGEN_TXBRP_EVENT_1_TXBRP_EVENT                                          (0x0007FFFC)

// ---------- RXDFE_ON_EVENT bit-field ----------
#define P_FDD_EVENTGEN_RXDFE_ON_EVENT_EN                                                  (31)
#define L_FDD_EVENTGEN_RXDFE_ON_EVENT_EN                                                  (1)
#define M_FDD_EVENTGEN_RXDFE_ON_EVENT_EN                                                  (0x80000000)
#define P_FDD_EVENTGEN_RXDFE_ON_EVENT_RXDFE_ON_EVENT                                      (2)
#define L_FDD_EVENTGEN_RXDFE_ON_EVENT_RXDFE_ON_EVENT                                      (17)
#define M_FDD_EVENTGEN_RXDFE_ON_EVENT_RXDFE_ON_EVENT                                      (0x0007FFFC)

// ---------- RXDFE_OFF_EVENT bit-field ----------
#define P_FDD_EVENTGEN_RXDFE_OFF_EVENT_EN                                                 (31)
#define L_FDD_EVENTGEN_RXDFE_OFF_EVENT_EN                                                 (1)
#define M_FDD_EVENTGEN_RXDFE_OFF_EVENT_EN                                                 (0x80000000)
#define P_FDD_EVENTGEN_RXDFE_OFF_EVENT_RXDFE_OFF_EVENT                                    (2)
#define L_FDD_EVENTGEN_RXDFE_OFF_EVENT_RXDFE_OFF_EVENT                                    (17)
#define M_FDD_EVENTGEN_RXDFE_OFF_EVENT_RXDFE_OFF_EVENT                                    (0x0007FFFC)

// ---------- TTR_ON_EVENT bit-field ----------
#define P_FDD_EVENTGEN_TTR_ON_EVENT_EN                                                    (31)
#define L_FDD_EVENTGEN_TTR_ON_EVENT_EN                                                    (1)
#define M_FDD_EVENTGEN_TTR_ON_EVENT_EN                                                    (0x80000000)
#define P_FDD_EVENTGEN_TTR_ON_EVENT_TTR_ON_EVENT                                          (3)
#define L_FDD_EVENTGEN_TTR_ON_EVENT_TTR_ON_EVENT                                          (16)
#define M_FDD_EVENTGEN_TTR_ON_EVENT_TTR_ON_EVENT                                          (0x0007FFF8)

// ---------- TTR_OFF_EVENT bit-field ----------
#define P_FDD_EVENTGEN_TTR_OFF_EVENT_EN                                                   (31)
#define L_FDD_EVENTGEN_TTR_OFF_EVENT_EN                                                   (1)
#define M_FDD_EVENTGEN_TTR_OFF_EVENT_EN                                                   (0x80000000)
#define P_FDD_EVENTGEN_TTR_OFF_EVENT_TTR_OFF_EVENT                                        (3)
#define L_FDD_EVENTGEN_TTR_OFF_EVENT_TTR_OFF_EVENT                                        (16)
#define M_FDD_EVENTGEN_TTR_OFF_EVENT_TTR_OFF_EVENT                                        (0x0007FFF8)

// ---------- DBG_ON_EVENT bit-field ----------
#define P_FDD_EVENTGEN_DBG_ON_EVENT_EN                                                    (31)
#define L_FDD_EVENTGEN_DBG_ON_EVENT_EN                                                    (1)
#define M_FDD_EVENTGEN_DBG_ON_EVENT_EN                                                    (0x80000000)
#define P_FDD_EVENTGEN_DBG_ON_EVENT_DBG_ON_EVENT                                          (2)
#define L_FDD_EVENTGEN_DBG_ON_EVENT_DBG_ON_EVENT                                          (17)
#define M_FDD_EVENTGEN_DBG_ON_EVENT_DBG_ON_EVENT                                          (0x0007FFFC)

// ---------- DBG_OFF_EVENT bit-field ----------
#define P_FDD_EVENTGEN_DBG_OFF_EVENT_EN                                                   (31)
#define L_FDD_EVENTGEN_DBG_OFF_EVENT_EN                                                   (1)
#define M_FDD_EVENTGEN_DBG_OFF_EVENT_EN                                                   (0x80000000)
#define P_FDD_EVENTGEN_DBG_OFF_EVENT_DBG_OFF_EVENT                                        (2)
#define L_FDD_EVENTGEN_DBG_OFF_EVENT_DBG_OFF_EVENT                                        (17)
#define M_FDD_EVENTGEN_DBG_OFF_EVENT_DBG_OFF_EVENT                                        (0x0007FFFC)

// ---------- DVFS_EVENT bit-field ----------
#define P_FDD_EVENTGEN_DVFS_EVENT_EN                                                      (31)
#define L_FDD_EVENTGEN_DVFS_EVENT_EN                                                      (1)
#define M_FDD_EVENTGEN_DVFS_EVENT_EN                                                      (0x80000000)
#define P_FDD_EVENTGEN_DVFS_EVENT_MODE                                                    (30)
#define L_FDD_EVENTGEN_DVFS_EVENT_MODE                                                    (1)
#define M_FDD_EVENTGEN_DVFS_EVENT_MODE                                                    (0x40000000)
#define P_FDD_EVENTGEN_DVFS_EVENT_DVFS_EVENT                                              (2)
#define L_FDD_EVENTGEN_DVFS_EVENT_DVFS_EVENT                                              (17)
#define M_FDD_EVENTGEN_DVFS_EVENT_DVFS_EVENT                                              (0x0007FFFC)

// ---------- PWR_MEAS_MODE bit-field ----------
#define P_FDD_EVENTGEN_PWR_MEAS_MODE_MODE                                                 (0)
#define L_FDD_EVENTGEN_PWR_MEAS_MODE_MODE                                                 (1)
#define M_FDD_EVENTGEN_PWR_MEAS_MODE_MODE                                                 (0x00000001)

// ---------- PWR_MEAS_MASK bit-field ----------
#define P_FDD_EVENTGEN_PWR_MEAS_MASK_TXB_1                                                (9)
#define L_FDD_EVENTGEN_PWR_MEAS_MASK_TXB_1                                                (1)
#define M_FDD_EVENTGEN_PWR_MEAS_MASK_TXB_1                                                (0x00000200)
#define P_FDD_EVENTGEN_PWR_MEAS_MASK_TXB_0                                                (8)
#define L_FDD_EVENTGEN_PWR_MEAS_MASK_TXB_0                                                (1)
#define M_FDD_EVENTGEN_PWR_MEAS_MASK_TXB_0                                                (0x00000100)
#define P_FDD_EVENTGEN_PWR_MEAS_MASK_CS_5                                                 (5)
#define L_FDD_EVENTGEN_PWR_MEAS_MASK_CS_5                                                 (1)
#define M_FDD_EVENTGEN_PWR_MEAS_MASK_CS_5                                                 (0x00000020)
#define P_FDD_EVENTGEN_PWR_MEAS_MASK_CS_4                                                 (4)
#define L_FDD_EVENTGEN_PWR_MEAS_MASK_CS_4                                                 (1)
#define M_FDD_EVENTGEN_PWR_MEAS_MASK_CS_4                                                 (0x00000010)
#define P_FDD_EVENTGEN_PWR_MEAS_MASK_CS_3                                                 (3)
#define L_FDD_EVENTGEN_PWR_MEAS_MASK_CS_3                                                 (1)
#define M_FDD_EVENTGEN_PWR_MEAS_MASK_CS_3                                                 (0x00000008)
#define P_FDD_EVENTGEN_PWR_MEAS_MASK_CS_2                                                 (2)
#define L_FDD_EVENTGEN_PWR_MEAS_MASK_CS_2                                                 (1)
#define M_FDD_EVENTGEN_PWR_MEAS_MASK_CS_2                                                 (0x00000004)
#define P_FDD_EVENTGEN_PWR_MEAS_MASK_CS_1                                                 (1)
#define L_FDD_EVENTGEN_PWR_MEAS_MASK_CS_1                                                 (1)
#define M_FDD_EVENTGEN_PWR_MEAS_MASK_CS_1                                                 (0x00000002)
#define P_FDD_EVENTGEN_PWR_MEAS_MASK_CS_0                                                 (0)
#define L_FDD_EVENTGEN_PWR_MEAS_MASK_CS_0                                                 (1)
#define M_FDD_EVENTGEN_PWR_MEAS_MASK_CS_0                                                 (0x00000001)

#endif // __FDD_EVENTGEN_H__
