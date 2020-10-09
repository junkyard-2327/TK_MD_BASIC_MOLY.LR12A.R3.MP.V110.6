#ifndef __TDSCDMA_SRP_CUIF_CFG_H__
#define __TDSCDMA_SRP_CUIF_CFG_H__

// ----------------- TDSCDMA_SRP_CUIF_CFG Register Definition -------------------
typedef volatile struct {
    kal_uint32 TDDSRP_SIR_CFG;                                                            // 0x0110
    kal_uint32 TDDSRP_SIR1_SIR2_CODE_BMP;                                                 // 0x0114
    kal_uint32 TDDSRP_SIR3_SIR4_CODE_BMP;                                                 // 0x0118
    kal_uint32 TDDSRP_SIR5_SIR6_CODE_BMP;                                                 // 0x011C
    kal_uint32 TDDSRP_SIR7_CODE_BMP;                                                      // 0x0120
    kal_uint32 TDDSRP_DDFOE_CFG;                                                          // 0x0124
    kal_uint32 TDDSRP_OWN_CODE_BMP;                                                       // 0x0128
    kal_uint32 TDDSRP_HICH_CODE_BMP;                                                      // 0x012C
    kal_uint32 TDDSRP_PICH_CFG;                                                           // 0x0130
    kal_uint32 TDDSRP_PICH_CODE_BMP;                                                      // 0x0134
    kal_uint32 TDDSRP_SRP2BRP_CODE_ADDR_OFFSET[8];                                        // 0x0138..0x0154
    kal_uint32 TDDSRP_SRP2BRP_CC1_CC2_SCALING_ADDR_OFFSET;                                // 0x0158
    kal_uint32 TDDSRP_SRP2BRP_BCH_SCALING_ADDR_OFFSET;                                    // 0x015C
    kal_uint32 TDDSRP_SRP2BRP_DSCH_SEG0_SCALING_AMEAN_ADDR_OFFSET;                        // 0x0160
    kal_uint32 TDDSRP_SRP2BRP_F_BUF_CLR;                                                  // 0x0164
    kal_uint32 TDDSRP_SRP2BRP_SUBF_BUF_CLR;                                               // 0x0168
    kal_uint32 TDDSRP_SRP2BRP_BCH_BUF_CLR;                                                // 0x016C
    kal_uint32 TDDSRP_SRP2BRP_CTRL_BUF_CLR;                                               // 0x0170
    kal_uint32 TDDSRP_SRP2BRP_BUF_DUMP;                                                   // 0x0174
    kal_uint32 CFG_RESV[2];                                                               // 0x0178..0x017C
} TDSCDMA_SRP_CUIF_CFG_REGS, *PTDSCDMA_SRP_CUIF_CFG_REGS;

// ---------- TDSCDMA_SRP_CUIF_CFG word-offset  ----------
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG                                             (0)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR1_SIR2_CODE_BMP                                  (1)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR3_SIR4_CODE_BMP                                  (2)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR5_SIR6_CODE_BMP                                  (3)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR7_CODE_BMP                                       (4)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG                                           (5)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_OWN_CODE_BMP                                        (6)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_HICH_CODE_BMP                                       (7)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG                                            (8)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CODE_BMP                                       (9)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CODE_ADDR_OFFSET(i)                         (10 + (i))
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CC1_CC2_SCALING_ADDR_OFFSET                 (18)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BCH_SCALING_ADDR_OFFSET                     (19)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_DSCH_SEG0_SCALING_AMEAN_ADDR_OFFSET         (20)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_F_BUF_CLR                                   (21)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_SUBF_BUF_CLR                                (22)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BCH_BUF_CLR                                 (23)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CTRL_BUF_CLR                                (24)
#define O_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP                                    (25)
#define O_TDSCDMA_SRP_CUIF_CFG_CFG_RESV(i)                                                (26 + (i))

// ---------- TDDSRP_SIR_CFG bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_FMT_CFG                                     (15)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_FMT_CFG                                     (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_FMT_CFG                                     (0x00008000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_DSCH_OUT_MODE                               (14)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_DSCH_OUT_MODE                               (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_DSCH_OUT_MODE                               (0x00004000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_CHAN_TYPE                              (12)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_CHAN_TYPE                              (2)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_CHAN_TYPE                              (0x00003000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_CHAN_TYPE                              (10)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_CHAN_TYPE                              (2)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_CHAN_TYPE                              (0x00000C00)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_DEMAP_MODE                             (9)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_DEMAP_MODE                             (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_DEMAP_MODE                             (0x00000200)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_DEMAP_MODE                             (8)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_DEMAP_MODE                             (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_DEMAP_MODE                             (0x00000100)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_MOD_TYPE                               (6)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_MOD_TYPE                               (2)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_MOD_TYPE                               (0x000000C0)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_MOD_TYPE                               (4)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_MOD_TYPE                               (2)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_MOD_TYPE                               (0x00000030)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_SEG_EN                                 (3)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_SEG_EN                                 (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_SEG_EN                                 (0x00000008)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_SEG_EN                                 (2)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_SEG_EN                                 (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_SEG_EN                                 (0x00000004)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_STR_EN                                 (1)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_STR_EN                                 (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR2_STR_EN                                 (0x00000002)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_STR_EN                                 (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_STR_EN                                 (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR_CFG_SIR1_STR_EN                                 (0x00000001)

// ---------- TDDSRP_SIR1_SIR2_CODE_BMP bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR1_SIR2_CODE_BMP_SIR2_CODE_BMP                    (16)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR1_SIR2_CODE_BMP_SIR2_CODE_BMP                    (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR1_SIR2_CODE_BMP_SIR2_CODE_BMP                    (0xFFFF0000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR1_SIR2_CODE_BMP_SIR1_CODE_BMP                    (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR1_SIR2_CODE_BMP_SIR1_CODE_BMP                    (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR1_SIR2_CODE_BMP_SIR1_CODE_BMP                    (0x0000FFFF)

// ---------- TDDSRP_SIR3_SIR4_CODE_BMP bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR3_SIR4_CODE_BMP_SIR4_CODE_BMP                    (16)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR3_SIR4_CODE_BMP_SIR4_CODE_BMP                    (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR3_SIR4_CODE_BMP_SIR4_CODE_BMP                    (0xFFFF0000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR3_SIR4_CODE_BMP_SIR3_CODE_BMP                    (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR3_SIR4_CODE_BMP_SIR3_CODE_BMP                    (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR3_SIR4_CODE_BMP_SIR3_CODE_BMP                    (0x0000FFFF)

// ---------- TDDSRP_SIR5_SIR6_CODE_BMP bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR5_SIR6_CODE_BMP_SIR6_CODE_BMP                    (16)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR5_SIR6_CODE_BMP_SIR6_CODE_BMP                    (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR5_SIR6_CODE_BMP_SIR6_CODE_BMP                    (0xFFFF0000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR5_SIR6_CODE_BMP_SIR5_CODE_BMP                    (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR5_SIR6_CODE_BMP_SIR5_CODE_BMP                    (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR5_SIR6_CODE_BMP_SIR5_CODE_BMP                    (0x0000FFFF)

// ---------- TDDSRP_SIR7_CODE_BMP bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR7_CODE_BMP_SIR7_CODE_BMP                         (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR7_CODE_BMP_SIR7_CODE_BMP                         (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SIR7_CODE_BMP_SIR7_CODE_BMP                         (0x0000FFFF)

// ---------- TDDSRP_DDFOE_CFG bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG_DDFOE_CODE_BMP                            (16)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG_DDFOE_CODE_BMP                            (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG_DDFOE_CODE_BMP                            (0xFFFF0000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG_DDFOE_SYM_NUM                             (4)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG_DDFOE_SYM_NUM                             (9)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG_DDFOE_SYM_NUM                             (0x00001FF0)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG_DDFOE_FIX_NUM                             (1)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG_DDFOE_FIX_NUM                             (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG_DDFOE_FIX_NUM                             (0x00000002)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG_DDFOE_EN                                  (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG_DDFOE_EN                                  (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_DDFOE_CFG_DDFOE_EN                                  (0x00000001)

// ---------- TDDSRP_OWN_CODE_BMP bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_OWN_CODE_BMP_OWN_CODE_BMP                           (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_OWN_CODE_BMP_OWN_CODE_BMP                           (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_OWN_CODE_BMP_OWN_CODE_BMP                           (0x0000FFFF)

// ---------- TDDSRP_HICH_CODE_BMP bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_HICH_CODE_BMP_HICH_CODE_BMP                         (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_HICH_CODE_BMP_HICH_CODE_BMP                         (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_HICH_CODE_BMP_HICH_CODE_BMP                         (0x0000FFFF)

// ---------- TDDSRP_PICH_CFG bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_TH_HIGH                               (17)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_TH_HIGH                               (14)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_TH_HIGH                               (0x7FFE0000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_SUBF                                  (16)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_SUBF                                  (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_SUBF                                  (0x00010000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_TH_LOW                                (10)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_TH_LOW                                (6)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_TH_LOW                                (0x0000FC00)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_POS                                   (4)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_POS                                   (6)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_POS                                   (0x000003F0)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_PARTIAL_MODE                          (3)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_PARTIAL_MODE                          (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_PARTIAL_MODE                          (0x00000008)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_BCH                                   (2)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_BCH                                   (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_BCH                                   (0x00000004)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_LEN                                   (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_LEN                                   (2)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CFG_PICH_LEN                                   (0x00000003)

// ---------- TDDSRP_PICH_CODE_BMP bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CODE_BMP_PICH_CODE_BMP                         (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CODE_BMP_PICH_CODE_BMP                         (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_PICH_CODE_BMP_PICH_CODE_BMP                         (0x0000FFFF)

// ---------- TDDSRP_SRP2BRP_CODE_ADDR_OFFSET bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CODE_ADDR_OFFSET_CODEodd_ADDR_OFFSET        (16)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CODE_ADDR_OFFSET_CODEodd_ADDR_OFFSET        (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CODE_ADDR_OFFSET_CODEodd_ADDR_OFFSET        (0xFFFF0000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CODE_ADDR_OFFSET_CODEeven_ADDR_OFFSET       (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CODE_ADDR_OFFSET_CODEeven_ADDR_OFFSET       (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CODE_ADDR_OFFSET_CODEeven_ADDR_OFFSET       (0x0000FFFF)

// ---------- TDDSRP_SRP2BRP_CC1_CC2_SCALING_ADDR_OFFSET bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CC1_CC2_SCALING_ADDR_OFFSET_CC2_SCALING_ADDR_OFFSET (16)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CC1_CC2_SCALING_ADDR_OFFSET_CC2_SCALING_ADDR_OFFSET (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CC1_CC2_SCALING_ADDR_OFFSET_CC2_SCALING_ADDR_OFFSET (0xFFFF0000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CC1_CC2_SCALING_ADDR_OFFSET_CC1_SCALING_ADDR_OFFSET (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CC1_CC2_SCALING_ADDR_OFFSET_CC1_SCALING_ADDR_OFFSET (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CC1_CC2_SCALING_ADDR_OFFSET_CC1_SCALING_ADDR_OFFSET (0x0000FFFF)

// ---------- TDDSRP_SRP2BRP_BCH_SCALING_ADDR_OFFSET bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BCH_SCALING_ADDR_OFFSET_BCH_SCALING_ADDR_OFFSET (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BCH_SCALING_ADDR_OFFSET_BCH_SCALING_ADDR_OFFSET (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BCH_SCALING_ADDR_OFFSET_BCH_SCALING_ADDR_OFFSET (0x0000FFFF)

// ---------- TDDSRP_SRP2BRP_DSCH_SEG0_SCALING_AMEAN_ADDR_OFFSET bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_DSCH_SEG0_SCALING_AMEAN_ADDR_OFFSET_DSCH_SEG0_AMEAN_ADDR_OFFSET (16)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_DSCH_SEG0_SCALING_AMEAN_ADDR_OFFSET_DSCH_SEG0_AMEAN_ADDR_OFFSET (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_DSCH_SEG0_SCALING_AMEAN_ADDR_OFFSET_DSCH_SEG0_AMEAN_ADDR_OFFSET (0xFFFF0000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_DSCH_SEG0_SCALING_AMEAN_ADDR_OFFSET_DSCH_SEG0_SCALING_ADDR_OFFSET (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_DSCH_SEG0_SCALING_AMEAN_ADDR_OFFSET_DSCH_SEG0_SCALING_ADDR_OFFSET (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_DSCH_SEG0_SCALING_AMEAN_ADDR_OFFSET_DSCH_SEG0_SCALING_ADDR_OFFSET (0x0000FFFF)

// ---------- TDDSRP_SRP2BRP_F_BUF_CLR bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_F_BUF_CLR_F_BUF_CLR                         (31)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_F_BUF_CLR_F_BUF_CLR                         (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_F_BUF_CLR_F_BUF_CLR                         (0x80000000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_F_BUF_CLR_F_CLR_ADDR_OFFSET                 (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_F_BUF_CLR_F_CLR_ADDR_OFFSET                 (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_F_BUF_CLR_F_CLR_ADDR_OFFSET                 (0x0000FFFF)

// ---------- TDDSRP_SRP2BRP_SUBF_BUF_CLR bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_SUBF_BUF_CLR_SUBF_BUF_CLR                   (31)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_SUBF_BUF_CLR_SUBF_BUF_CLR                   (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_SUBF_BUF_CLR_SUBF_BUF_CLR                   (0x80000000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_SUBF_BUF_CLR_SUBF_CLR_ADDR_OFFSET           (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_SUBF_BUF_CLR_SUBF_CLR_ADDR_OFFSET           (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_SUBF_BUF_CLR_SUBF_CLR_ADDR_OFFSET           (0x0000FFFF)

// ---------- TDDSRP_SRP2BRP_BCH_BUF_CLR bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BCH_BUF_CLR_BCH_BUF_CLR                     (31)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BCH_BUF_CLR_BCH_BUF_CLR                     (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BCH_BUF_CLR_BCH_BUF_CLR                     (0x80000000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BCH_BUF_CLR_BCH_CLR_ADDR_OFFSET             (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BCH_BUF_CLR_BCH_CLR_ADDR_OFFSET             (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BCH_BUF_CLR_BCH_CLR_ADDR_OFFSET             (0x0000FFFF)

// ---------- TDDSRP_SRP2BRP_CTRL_BUF_CLR bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CTRL_BUF_CLR_CTRL_BUF_CLR                   (31)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CTRL_BUF_CLR_CTRL_BUF_CLR                   (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CTRL_BUF_CLR_CTRL_BUF_CLR                   (0x80000000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CTRL_BUF_CLR_CTRL_CLR_ADDR_OFFSET           (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CTRL_BUF_CLR_CTRL_CLR_ADDR_OFFSET           (16)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_CTRL_BUF_CLR_CTRL_CLR_ADDR_OFFSET           (0x0000FFFF)

// ---------- TDDSRP_SRP2BRP_BUF_DUMP bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_SUBF_BUF_PONG_DUMP                 (12)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_SUBF_BUF_PONG_DUMP                 (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_SUBF_BUF_PONG_DUMP                 (0x00001000)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_F_BUF_PONG_DUMP                    (11)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_F_BUF_PONG_DUMP                    (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_F_BUF_PONG_DUMP                    (0x00000800)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_SUBF_BUF_PING_DUMP                 (10)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_SUBF_BUF_PING_DUMP                 (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_SUBF_BUF_PING_DUMP                 (0x00000400)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_F_BUF_PING_DUMP                    (9)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_F_BUF_PING_DUMP                    (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_F_BUF_PING_DUMP                    (0x00000200)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CTRL_BUF_DUMP                      (8)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CTRL_BUF_DUMP                      (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CTRL_BUF_DUMP                      (0x00000100)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_BCH_BUF_DUMP                       (7)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_BCH_BUF_DUMP                       (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_BCH_BUF_DUMP                       (0x00000080)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_DSCH_SCALING_AMEAN_PONG_DUMP       (6)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_DSCH_SCALING_AMEAN_PONG_DUMP       (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_DSCH_SCALING_AMEAN_PONG_DUMP       (0x00000040)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CC2_SCALING_PONG_DUMP              (5)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CC2_SCALING_PONG_DUMP              (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CC2_SCALING_PONG_DUMP              (0x00000020)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CC1_SCALING_PONG_DUMP              (4)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CC1_SCALING_PONG_DUMP              (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CC1_SCALING_PONG_DUMP              (0x00000010)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_DSCH_SCALING_AMEAN_PING_DUMP       (3)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_DSCH_SCALING_AMEAN_PING_DUMP       (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_DSCH_SCALING_AMEAN_PING_DUMP       (0x00000008)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CC2_SCALING_PING_DUMP              (2)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CC2_SCALING_PING_DUMP              (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CC2_SCALING_PING_DUMP              (0x00000004)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CC1_SCALING_PING_DUMP              (1)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CC1_SCALING_PING_DUMP              (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_CC1_SCALING_PING_DUMP              (0x00000002)
#define P_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_BCH_SCALING_DUMP                   (0)
#define L_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_BCH_SCALING_DUMP                   (1)
#define M_TDSCDMA_SRP_CUIF_CFG_TDDSRP_SRP2BRP_BUF_DUMP_BCH_SCALING_DUMP                   (0x00000001)

// ---------- CFG_RESV bit-field ----------
#define P_TDSCDMA_SRP_CUIF_CFG_CFG_RESV_RESV                                              (0)
#define L_TDSCDMA_SRP_CUIF_CFG_CFG_RESV_RESV                                              (32)
#define M_TDSCDMA_SRP_CUIF_CFG_CFG_RESV_RESV                                              (0xFFFFFFFF)

#endif // __TDSCDMA_SRP_CUIF_CFG_H__
