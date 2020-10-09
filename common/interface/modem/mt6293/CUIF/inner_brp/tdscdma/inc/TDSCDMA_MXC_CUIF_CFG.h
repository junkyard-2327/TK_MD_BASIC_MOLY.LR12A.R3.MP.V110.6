#ifndef __TDSCDMA_MXC_CUIF_CFG_H__
#define __TDSCDMA_MXC_CUIF_CFG_H__

// ----------------- TDSCDMA_MXC_CUIF_CFG Register Definition -------------------
typedef volatile struct {
    kal_uint32 TDDMXC_MSC_SDL_BMP;                                                        // 0x0180
    kal_uint32 TDDMXC_MMC_CFG;                                                            // 0x0184
    kal_uint32 TDDMXC_MMC2_MA_ID[4];                                                      // 0x0188..0x0194
    kal_uint32 TDDMXC_MMC3_MA_ID[4];                                                      // 0x0198..0x01A4
    kal_uint32 CFG_RESV[6];                                                               // 0x01A8..0x01BC
} TDSCDMA_MXC_CUIF_CFG_REGS, *PTDSCDMA_MXC_CUIF_CFG_REGS;

// ---------- TDSCDMA_MXC_CUIF_CFG word-offset  ----------
#define O_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MSC_SDL_BMP                                         (0)
#define O_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG                                             (1)
#define O_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID(i)                                       (2 + (i))
#define O_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID(i)                                       (6 + (i))
#define O_TDSCDMA_MXC_CUIF_CFG_CFG_RESV(i)                                                (10 + (i))

// ---------- TDDMXC_MSC_SDL_BMP bit-field ----------
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MSC_SDL_BMP_MSC_SDL_BMP                             (0)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MSC_SDL_BMP_MSC_SDL_BMP                             (32)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MSC_SDL_BMP_MSC_SDL_BMP                             (0xFFFFFFFF)

// ---------- TDDMXC_MMC_CFG bit-field ----------
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC3_MA_NUM                                 (17)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC3_MA_NUM                                 (4)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC3_MA_NUM                                 (0x001E0000)
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC3_IQ_SRC                                 (16)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC3_IQ_SRC                                 (1)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC3_IQ_SRC                                 (0x00010000)
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC2_MA_NUM                                 (9)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC2_MA_NUM                                 (4)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC2_MA_NUM                                 (0x00001E00)
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC2_IQ_SRC                                 (8)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC2_IQ_SRC                                 (1)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC2_IQ_SRC                                 (0x00000100)
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC1_MA_NUM                                 (1)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC1_MA_NUM                                 (4)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC1_MA_NUM                                 (0x0000001E)
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC1_IQ_SRC                                 (0)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC1_IQ_SRC                                 (1)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC_CFG_MMC1_IQ_SRC                                 (0x00000001)

// ---------- TDDMXC_MMC2_MA_ID bit-field ----------
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID_MMC2_MA_IDfourth                         (24)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID_MMC2_MA_IDfourth                         (7)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID_MMC2_MA_IDfourth                         (0x7F000000)
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID_MMC2_MA_IDthird                          (16)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID_MMC2_MA_IDthird                          (7)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID_MMC2_MA_IDthird                          (0x007F0000)
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID_MMC2_MA_Idsecond                         (8)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID_MMC2_MA_Idsecond                         (7)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID_MMC2_MA_Idsecond                         (0x00007F00)
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID_MMC2_MA_IDfirst                          (0)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID_MMC2_MA_IDfirst                          (7)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC2_MA_ID_MMC2_MA_IDfirst                          (0x0000007F)

// ---------- TDDMXC_MMC3_MA_ID bit-field ----------
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID_MMC3_MA_IDfourth                         (24)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID_MMC3_MA_IDfourth                         (7)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID_MMC3_MA_IDfourth                         (0x7F000000)
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID_MMC3_MA_IDthird                          (16)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID_MMC3_MA_IDthird                          (7)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID_MMC3_MA_IDthird                          (0x007F0000)
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID_MMC3_MA_Idsecond                         (8)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID_MMC3_MA_Idsecond                         (7)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID_MMC3_MA_Idsecond                         (0x00007F00)
#define P_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID_MMC3_MA_IDfirst                          (0)
#define L_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID_MMC3_MA_IDfirst                          (7)
#define M_TDSCDMA_MXC_CUIF_CFG_TDDMXC_MMC3_MA_ID_MMC3_MA_IDfirst                          (0x0000007F)

// ---------- CFG_RESV bit-field ----------
#define P_TDSCDMA_MXC_CUIF_CFG_CFG_RESV_RESV                                              (0)
#define L_TDSCDMA_MXC_CUIF_CFG_CFG_RESV_RESV                                              (32)
#define M_TDSCDMA_MXC_CUIF_CFG_CFG_RESV_RESV                                              (0xFFFFFFFF)

#endif // __TDSCDMA_MXC_CUIF_CFG_H__
