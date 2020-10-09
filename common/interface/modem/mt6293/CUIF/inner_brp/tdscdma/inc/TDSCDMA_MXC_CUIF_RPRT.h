#ifndef __TDSCDMA_MXC_CUIF_RPRT_H__
#define __TDSCDMA_MXC_CUIF_RPRT_H__

// ----------------- TDSCDMA_MXC_CUIF_RPRT Register Definition -------------------
typedef volatile struct {
    kal_uint32 TDDMXC_MSC_RES_MAX;                                                        // 0x02D0
    kal_uint32 TDDMXC_MMC1_RES_MAX;                                                       // 0x02D4
    kal_uint32 RPRT_RESV;                                                                 // 0x02D8
    kal_uint32 BCKP_REG[17];                                                              // 0x02DC..0x031C
} TDSCDMA_MXC_CUIF_RPRT_REGS, *PTDSCDMA_MXC_CUIF_RPRT_REGS;

// ---------- TDSCDMA_MXC_CUIF_RPRT word-offset  ----------
#define O_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MSC_RES_MAX                                        (0)
#define O_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MMC1_RES_MAX                                       (1)
#define O_TDSCDMA_MXC_CUIF_RPRT_RPRT_RESV                                                 (2)
#define O_TDSCDMA_MXC_CUIF_RPRT_BCKP_REG(i)                                               (3 + (i))

// ---------- TDDMXC_MSC_RES_MAX bit-field ----------
#define P_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MSC_RES_MAX_MSC_MAX_DP_ALL                         (16)
#define L_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MSC_RES_MAX_MSC_MAX_DP_ALL                         (16)
#define M_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MSC_RES_MAX_MSC_MAX_DP_ALL                         (0xFFFF0000)
#define P_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MSC_RES_MAX_MSC_MAX_DP_POS_ALL                     (6)
#define L_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MSC_RES_MAX_MSC_MAX_DP_POS_ALL                     (10)
#define M_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MSC_RES_MAX_MSC_MAX_DP_POS_ALL                     (0x0000FFC0)
#define P_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MSC_RES_MAX_MSC_MAX_SDL_ID_ALL                     (1)
#define L_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MSC_RES_MAX_MSC_MAX_SDL_ID_ALL                     (5)
#define M_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MSC_RES_MAX_MSC_MAX_SDL_ID_ALL                     (0x0000003E)

// ---------- TDDMXC_MMC1_RES_MAX bit-field ----------
#define P_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MMC1_RES_MAX_MMC1_MAX_DP_ALL                       (16)
#define L_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MMC1_RES_MAX_MMC1_MAX_DP_ALL                       (16)
#define M_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MMC1_RES_MAX_MMC1_MAX_DP_ALL                       (0xFFFF0000)
#define P_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MMC1_RES_MAX_MMC1_MAX_DP_POS_ALL                   (7)
#define L_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MMC1_RES_MAX_MMC1_MAX_DP_POS_ALL                   (9)
#define M_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MMC1_RES_MAX_MMC1_MAX_DP_POS_ALL                   (0x0000FF80)
#define P_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MMC1_RES_MAX_MMC1_MAX_MA_ID_ALL                    (0)
#define L_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MMC1_RES_MAX_MMC1_MAX_MA_ID_ALL                    (7)
#define M_TDSCDMA_MXC_CUIF_RPRT_TDDMXC_MMC1_RES_MAX_MMC1_MAX_MA_ID_ALL                    (0x0000007F)

// ---------- RPRT_RESV bit-field ----------
#define P_TDSCDMA_MXC_CUIF_RPRT_RPRT_RESV_RESV                                            (0)
#define L_TDSCDMA_MXC_CUIF_RPRT_RPRT_RESV_RESV                                            (32)
#define M_TDSCDMA_MXC_CUIF_RPRT_RPRT_RESV_RESV                                            (0xFFFFFFFF)

// ---------- BCKP_REG bit-field ----------
#define P_TDSCDMA_MXC_CUIF_RPRT_BCKP_REG_CMN_FIELD                                        (0)
#define L_TDSCDMA_MXC_CUIF_RPRT_BCKP_REG_CMN_FIELD                                        (32)
#define M_TDSCDMA_MXC_CUIF_RPRT_BCKP_REG_CMN_FIELD                                        (0xFFFFFFFF)

#endif // __TDSCDMA_MXC_CUIF_RPRT_H__
