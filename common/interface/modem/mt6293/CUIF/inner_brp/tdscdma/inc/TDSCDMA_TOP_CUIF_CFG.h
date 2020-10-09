#ifndef __TDSCDMA_TOP_CUIF_CFG_H__
#define __TDSCDMA_TOP_CUIF_CFG_H__

// ----------------- TDSCDMA_TOP_CUIF_CFG Register Definition -------------------
typedef volatile struct {
    kal_uint32 TDDINR_SCHD_INFO;                                                          // 0x0000
    kal_uint32 TDDINR_MODULE_CFG_START;                                                   // 0x0004
    kal_uint32 CFG_RESV[2];                                                               // 0x0008..0x000C
} TDSCDMA_TOP_CUIF_CFG_REGS, *PTDSCDMA_TOP_CUIF_CFG_REGS;

// ---------- TDSCDMA_TOP_CUIF_CFG word-offset  ----------
#define O_TDSCDMA_TOP_CUIF_CFG_TDDINR_SCHD_INFO                                           (0)
#define O_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START                                    (1)
#define O_TDSCDMA_TOP_CUIF_CFG_CFG_RESV(i)                                                (2 + (i))

// ---------- TDDINR_SCHD_INFO bit-field ----------
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_SCHD_INFO_SLOT_IDX                                  (4)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_SCHD_INFO_SLOT_IDX                                  (3)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_SCHD_INFO_SLOT_IDX                                  (0x00000070)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_SCHD_INFO_RXD                                       (1)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_SCHD_INFO_RXD                                       (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_SCHD_INFO_RXD                                       (0x00000002)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_SCHD_INFO_NEW_SCHD                                  (0)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_SCHD_INFO_NEW_SCHD                                  (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_SCHD_INFO_NEW_SCHD                                  (0x00000001)

// ---------- TDDINR_MODULE_CFG_START bit-field ----------
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_3_FULL_CFG                     (23)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_3_FULL_CFG                     (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_3_FULL_CFG                     (0x00800000)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_3_PARTIAL_CFG                  (22)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_3_PARTIAL_CFG                  (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_3_PARTIAL_CFG                  (0x00400000)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_3_START                        (21)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_3_START                        (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_3_START                        (0x00200000)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_2_FULL_CFG                     (20)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_2_FULL_CFG                     (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_2_FULL_CFG                     (0x00100000)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_2_PARTIAL_CFG                  (19)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_2_PARTIAL_CFG                  (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_2_PARTIAL_CFG                  (0x00080000)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_2_START                        (18)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_2_START                        (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_2_START                        (0x00040000)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_1_FULL_CFG                     (17)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_1_FULL_CFG                     (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_1_FULL_CFG                     (0x00020000)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_1_PARTIAL_CFG                  (16)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_1_PARTIAL_CFG                  (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_1_PARTIAL_CFG                  (0x00010000)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_1_START                        (15)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_1_START                        (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MMC_1_START                        (0x00008000)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MSC_FULL_CFG                       (14)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MSC_FULL_CFG                       (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MSC_FULL_CFG                       (0x00004000)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MSC_PARTIAL_CFG                    (13)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MSC_PARTIAL_CFG                    (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MSC_PARTIAL_CFG                    (0x00002000)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MSC_START                          (12)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MSC_START                          (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_MSC_START                          (0x00001000)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_TTU_FULL_CFG                       (11)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_TTU_FULL_CFG                       (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_TTU_FULL_CFG                       (0x00000800)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_TTU_PARTIAL_CFG                    (10)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_TTU_PARTIAL_CFG                    (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_TTU_PARTIAL_CFG                    (0x00000400)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_TTU_START                          (9)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_TTU_START                          (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_TTU_START                          (0x00000200)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_SRP_FULL_CFG                       (8)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_SRP_FULL_CFG                       (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_SRP_FULL_CFG                       (0x00000100)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_SRP_PARTIAL_CFG                    (7)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_SRP_PARTIAL_CFG                    (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_SRP_PARTIAL_CFG                    (0x00000080)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_SRP_START                          (6)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_SRP_START                          (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_SRP_START                          (0x00000040)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_JD_FULL_CFG                        (5)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_JD_FULL_CFG                        (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_JD_FULL_CFG                        (0x00000020)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_JD_PARTIAL_CFG                     (4)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_JD_PARTIAL_CFG                     (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_JD_PARTIAL_CFG                     (0x00000010)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_JD_START                           (3)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_JD_START                           (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_JD_START                           (0x00000008)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_CE_FULL_CFG                        (2)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_CE_FULL_CFG                        (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_CE_FULL_CFG                        (0x00000004)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_CE_PARTIAL_CFG                     (1)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_CE_PARTIAL_CFG                     (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_CE_PARTIAL_CFG                     (0x00000002)
#define P_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_CE_START                           (0)
#define L_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_CE_START                           (1)
#define M_TDSCDMA_TOP_CUIF_CFG_TDDINR_MODULE_CFG_START_CE_START                           (0x00000001)

// ---------- CFG_RESV bit-field ----------
#define P_TDSCDMA_TOP_CUIF_CFG_CFG_RESV_RESV                                              (0)
#define L_TDSCDMA_TOP_CUIF_CFG_CFG_RESV_RESV                                              (32)
#define M_TDSCDMA_TOP_CUIF_CFG_CFG_RESV_RESV                                              (0xFFFFFFFF)

#endif // __TDSCDMA_TOP_CUIF_CFG_H__