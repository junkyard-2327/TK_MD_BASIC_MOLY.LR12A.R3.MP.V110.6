#ifndef __TDSCDMA_JD_CUIF_CFG_H__
#define __TDSCDMA_JD_CUIF_CFG_H__

// ----------------- TDSCDMA_JD_CUIF_CFG Register Definition -------------------
typedef volatile struct {
    kal_uint32 TDDJD_MODE;                                                                // 0x00F0
    kal_uint32 TDDJD_CMA_ACD;                                                             // 0x00F4
    kal_uint32 TDDJD_NOISE;                                                               // 0x00F8
    kal_uint32 TDDJD_SQUANT_DISABLE;                                                      // 0x00FC
    kal_uint32 TDDJD_OWNCODE_MOD_TYPE;                                                    // 0x0100
    kal_uint32 CFG_RESV[3];                                                               // 0x0104..0x010C
} TDSCDMA_JD_CUIF_CFG_REGS, *PTDSCDMA_JD_CUIF_CFG_REGS;

// ---------- TDSCDMA_JD_CUIF_CFG word-offset  ----------
#define O_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE                                                  (0)
#define O_TDSCDMA_JD_CUIF_CFG_TDDJD_CMA_ACD                                               (1)
#define O_TDSCDMA_JD_CUIF_CFG_TDDJD_NOISE                                                 (2)
#define O_TDSCDMA_JD_CUIF_CFG_TDDJD_SQUANT_DISABLE                                        (3)
#define O_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE                                      (4)
#define O_TDSCDMA_JD_CUIF_CFG_CFG_RESV(i)                                                 (5 + (i))

// ---------- TDDJD_MODE bit-field ----------
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE_MIC_MODE                                         (3)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE_MIC_MODE                                         (1)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE_MIC_MODE                                         (0x00000008)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE_SBDFE_EN                                         (2)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE_SBDFE_EN                                         (1)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE_SBDFE_EN                                         (0x00000004)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE_DMA_K8                                           (1)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE_DMA_K8                                           (1)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE_DMA_K8                                           (0x00000002)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE_CMA_ACD_MODE                                     (0)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE_CMA_ACD_MODE                                     (1)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_MODE_CMA_ACD_MODE                                     (0x00000001)

// ---------- TDDJD_CMA_ACD bit-field ----------
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_CMA_ACD_CMA_ACD_ACTIVE_CODE                           (0)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_CMA_ACD_CMA_ACD_ACTIVE_CODE                           (16)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_CMA_ACD_CMA_ACD_ACTIVE_CODE                           (0x0000FFFF)

// ---------- TDDJD_NOISE bit-field ----------
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_NOISE_L1_MMSE_NOISE                                   (16)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_NOISE_L1_MMSE_NOISE                                   (16)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_NOISE_L1_MMSE_NOISE                                   (0xFFFF0000)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_NOISE_NOISE_ADAPTIVE                                  (1)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_NOISE_NOISE_ADAPTIVE                                  (1)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_NOISE_NOISE_ADAPTIVE                                  (0x00000002)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_NOISE_NOISE_SEL                                       (0)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_NOISE_NOISE_SEL                                       (1)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_NOISE_NOISE_SEL                                       (0x00000001)

// ---------- TDDJD_SQUANT_DISABLE bit-field ----------
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_SQUANT_DISABLE_SOFT_QUANT_DISABLE                     (0)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_SQUANT_DISABLE_SOFT_QUANT_DISABLE                     (16)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_SQUANT_DISABLE_SOFT_QUANT_DISABLE                     (0x0000FFFF)

// ---------- TDDJD_OWNCODE_MOD_TYPE bit-field ----------
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE15                      (30)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE15                      (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE15                      (0xC0000000)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE14                      (28)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE14                      (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE14                      (0x30000000)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE13                      (26)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE13                      (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE13                      (0x0C000000)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE12                      (24)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE12                      (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE12                      (0x03000000)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE11                      (22)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE11                      (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE11                      (0x00C00000)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE10                      (20)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE10                      (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE10                      (0x00300000)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE9                       (18)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE9                       (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE9                       (0x000C0000)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE8                       (16)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE8                       (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE8                       (0x00030000)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE7                       (14)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE7                       (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE7                       (0x0000C000)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE6                       (12)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE6                       (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE6                       (0x00003000)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE5                       (10)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE5                       (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE5                       (0x00000C00)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE4                       (8)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE4                       (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE4                       (0x00000300)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE3                       (6)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE3                       (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE3                       (0x000000C0)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE2                       (4)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE2                       (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE2                       (0x00000030)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE1                       (2)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE1                       (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE1                       (0x0000000C)
#define P_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE0                       (0)
#define L_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE0                       (2)
#define M_TDSCDMA_JD_CUIF_CFG_TDDJD_OWNCODE_MOD_TYPE_MOD_TYPE_CODE0                       (0x00000003)

// ---------- CFG_RESV bit-field ----------
#define P_TDSCDMA_JD_CUIF_CFG_CFG_RESV_RESV                                               (0)
#define L_TDSCDMA_JD_CUIF_CFG_CFG_RESV_RESV                                               (32)
#define M_TDSCDMA_JD_CUIF_CFG_CFG_RESV_RESV                                               (0xFFFFFFFF)

#endif // __TDSCDMA_JD_CUIF_CFG_H__
