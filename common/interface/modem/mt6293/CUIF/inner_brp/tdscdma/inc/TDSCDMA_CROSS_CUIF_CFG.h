#ifndef __TDSCDMA_CROSS_CUIF_CFG_H__
#define __TDSCDMA_CROSS_CUIF_CFG_H__

// ----------------- TDSCDMA_CROSS_CUIF_CFG Register Definition -------------------
typedef volatile struct {
    kal_uint32 TDDINR_PICH_BIN;                                                           // 0x0010
    kal_uint32 TDDINR_CROSS_MOD;                                                          // 0x0014
    kal_uint32 TDDINR_RPRT_L1_EMI_ADDR;                                                   // 0x0018
    kal_uint32 CFG_RESV;                                                                  // 0x001C
} TDSCDMA_CROSS_CUIF_CFG_REGS, *PTDSCDMA_CROSS_CUIF_CFG_REGS;

// ---------- TDSCDMA_CROSS_CUIF_CFG word-offset  ----------
#define O_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN                                          (0)
#define O_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD                                         (1)
#define O_TDSCDMA_CROSS_CUIF_CFG_TDDINR_RPRT_L1_EMI_ADDR                                  (2)
#define O_TDSCDMA_CROSS_CUIF_CFG_CFG_RESV                                                 (3)

// ---------- TDDINR_PICH_BIN bit-field ----------
#define P_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN4_EN                                  (4)
#define L_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN4_EN                                  (1)
#define M_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN4_EN                                  (0x00000010)
#define P_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN3_EN                                  (3)
#define L_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN3_EN                                  (1)
#define M_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN3_EN                                  (0x00000008)
#define P_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN2_EN                                  (2)
#define L_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN2_EN                                  (1)
#define M_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN2_EN                                  (0x00000004)
#define P_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN1_EN                                  (1)
#define L_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN1_EN                                  (1)
#define M_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN1_EN                                  (0x00000002)
#define P_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN0_EN                                  (0)
#define L_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN0_EN                                  (1)
#define M_TDSCDMA_CROSS_CUIF_CFG_TDDINR_PICH_BIN_BIN0_EN                                  (0x00000001)

// ---------- TDDINR_CROSS_MOD bit-field ----------
#define P_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_PP_TIMING_OFFSET_HALFTC                 (16)
#define L_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_PP_TIMING_OFFSET_HALFTC                 (16)
#define M_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_PP_TIMING_OFFSET_HALFTC                 (0xFFFF0000)
#define P_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_GAP_MEAS_IRQ_RCV                        (5)
#define L_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_GAP_MEAS_IRQ_RCV                        (4)
#define M_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_GAP_MEAS_IRQ_RCV                        (0x000001E0)
#define P_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_GAP_MEAS_ENABLE                         (4)
#define L_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_GAP_MEAS_ENABLE                         (1)
#define M_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_GAP_MEAS_ENABLE                         (0x00000010)
#define P_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_WORK_MODE                               (2)
#define L_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_WORK_MODE                               (2)
#define M_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_WORK_MODE                               (0x0000000C)
#define P_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_SF_MODE                                 (1)
#define L_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_SF_MODE                                 (1)
#define M_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_SF_MODE                                 (0x00000002)
#define P_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_FFOE_EN                                 (0)
#define L_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_FFOE_EN                                 (1)
#define M_TDSCDMA_CROSS_CUIF_CFG_TDDINR_CROSS_MOD_FFOE_EN                                 (0x00000001)

// ---------- TDDINR_RPRT_L1_EMI_ADDR bit-field ----------
#define P_TDSCDMA_CROSS_CUIF_CFG_TDDINR_RPRT_L1_EMI_ADDR_RPRT_L1_EMI_ADDR                 (0)
#define L_TDSCDMA_CROSS_CUIF_CFG_TDDINR_RPRT_L1_EMI_ADDR_RPRT_L1_EMI_ADDR                 (32)
#define M_TDSCDMA_CROSS_CUIF_CFG_TDDINR_RPRT_L1_EMI_ADDR_RPRT_L1_EMI_ADDR                 (0xFFFFFFFF)

// ---------- CFG_RESV bit-field ----------
#define P_TDSCDMA_CROSS_CUIF_CFG_CFG_RESV_RESV                                            (0)
#define L_TDSCDMA_CROSS_CUIF_CFG_CFG_RESV_RESV                                            (32)
#define M_TDSCDMA_CROSS_CUIF_CFG_CFG_RESV_RESV                                            (0xFFFFFFFF)

#endif // __TDSCDMA_CROSS_CUIF_CFG_H__
