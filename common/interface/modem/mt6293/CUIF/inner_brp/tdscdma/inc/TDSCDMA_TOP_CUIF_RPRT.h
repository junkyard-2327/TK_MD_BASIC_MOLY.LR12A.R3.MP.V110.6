#ifndef __TDSCDMA_TOP_CUIF_RPRT_H__
#define __TDSCDMA_TOP_CUIF_RPRT_H__

// ----------------- TDSCDMA_TOP_CUIF_RPRT Register Definition -------------------
typedef volatile struct {
    kal_uint32 TDDINR_MODULE_STS_PING;                                                    // 0x01C0
    kal_uint32 TDDINR_MODULE_STS_PONG;                                                    // 0x01C4
    kal_uint32 RPRT_RESV[2];                                                              // 0x01C8..0x01CC
} TDSCDMA_TOP_CUIF_RPRT_REGS, *PTDSCDMA_TOP_CUIF_RPRT_REGS;

// ---------- TDSCDMA_TOP_CUIF_RPRT word-offset  ----------
#define O_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING                                    (0)
#define O_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG                                    (1)
#define O_TDSCDMA_TOP_CUIF_RPRT_RPRT_RESV(i)                                              (2 + (i))

// ---------- TDDINR_MODULE_STS_PING bit-field ----------
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_SLOT_IDX                           (12)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_SLOT_IDX                           (3)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_SLOT_IDX                           (0x00007000)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_PICH_CHNL_DONE                     (8)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_PICH_CHNL_DONE                     (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_PICH_CHNL_DONE                     (0x00000100)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_MMC_3_DONE                         (7)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_MMC_3_DONE                         (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_MMC_3_DONE                         (0x00000080)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_MMC_1_2_DONE                       (6)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_MMC_1_2_DONE                       (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_MMC_1_2_DONE                       (0x00000040)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_MMC_1_DONE                         (5)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_MMC_1_DONE                         (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_MMC_1_DONE                         (0x00000020)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_MSC_DONE                           (4)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_MSC_DONE                           (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_MSC_DONE                           (0x00000010)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_TTU_DONE                           (3)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_TTU_DONE                           (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_TTU_DONE                           (0x00000008)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_SRP_DONE                           (2)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_SRP_DONE                           (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_SRP_DONE                           (0x00000004)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_JD_DONE                            (1)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_JD_DONE                            (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_JD_DONE                            (0x00000002)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_CE_DONE                            (0)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_CE_DONE                            (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PING_CE_DONE                            (0x00000001)

// ---------- TDDINR_MODULE_STS_PONG bit-field ----------
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_SLOT_IDX                           (12)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_SLOT_IDX                           (3)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_SLOT_IDX                           (0x00007000)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_PICH_CHNL_DONE                     (8)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_PICH_CHNL_DONE                     (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_PICH_CHNL_DONE                     (0x00000100)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_MMC_3_DONE                         (7)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_MMC_3_DONE                         (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_MMC_3_DONE                         (0x00000080)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_MMC_1_2_DONE                       (6)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_MMC_1_2_DONE                       (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_MMC_1_2_DONE                       (0x00000040)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_MMC_1_DONE                         (5)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_MMC_1_DONE                         (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_MMC_1_DONE                         (0x00000020)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_MSC_DONE                           (4)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_MSC_DONE                           (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_MSC_DONE                           (0x00000010)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_TTU_DONE                           (3)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_TTU_DONE                           (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_TTU_DONE                           (0x00000008)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_SRP_DONE                           (2)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_SRP_DONE                           (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_SRP_DONE                           (0x00000004)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_JD_DONE                            (1)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_JD_DONE                            (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_JD_DONE                            (0x00000002)
#define P_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_CE_DONE                            (0)
#define L_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_CE_DONE                            (1)
#define M_TDSCDMA_TOP_CUIF_RPRT_TDDINR_MODULE_STS_PONG_CE_DONE                            (0x00000001)

// ---------- RPRT_RESV bit-field ----------
#define P_TDSCDMA_TOP_CUIF_RPRT_RPRT_RESV_RESV                                            (0)
#define L_TDSCDMA_TOP_CUIF_RPRT_RPRT_RESV_RESV                                            (32)
#define M_TDSCDMA_TOP_CUIF_RPRT_RPRT_RESV_RESV                                            (0xFFFFFFFF)

#endif // __TDSCDMA_TOP_CUIF_RPRT_H__
