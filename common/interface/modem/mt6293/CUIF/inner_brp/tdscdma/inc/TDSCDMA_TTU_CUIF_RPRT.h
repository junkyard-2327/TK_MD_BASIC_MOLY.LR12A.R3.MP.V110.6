#ifndef __TDSCDMA_TTU_CUIF_RPRT_H__
#define __TDSCDMA_TTU_CUIF_RPRT_H__

// ----------------- TDSCDMA_TTU_CUIF_RPRT Register Definition -------------------
typedef volatile struct {
    kal_uint32 TDDTTU_CELL0_NOISE_LVL;                                                    // 0x0250
    kal_uint32 TDDTTU_CELL0_MAX_DP_REPORT;                                                // 0x0254
    kal_uint32 TDDTTU_CELL0_PATH_POS_REPORT0;                                             // 0x0258
    kal_uint32 TDDTTU_CELL0_PATH_POS_REPORT1;                                             // 0x025C
    kal_uint32 TDDTTU_CELL1_NOISE_LVL;                                                    // 0x0260
    kal_uint32 TDDTTU_CELL1_MAX_DP_REPORT;                                                // 0x0264
    kal_uint32 TDDTTU_CELL1_PATH_POS_REPORT0;                                             // 0x0268
    kal_uint32 TDDTTU_CELL1_PATH_POS_REPORT1;                                             // 0x026C
    kal_uint32 TDDTTU_CELL2NOISE_LVL;                                                     // 0x0270
    kal_uint32 TDDTTU_CELL2_MAX_DP_REPORT;                                                // 0x0274
    kal_uint32 TDDTTU_CELL2_PATH_POS_REPORT0;                                             // 0x0278
    kal_uint32 TDDTTU_CELL2_PATH_POS_REPORT1;                                             // 0x027C
    kal_uint32 TDDTTU_CELL3_NOISE_LVL;                                                    // 0x0280
    kal_uint32 TDDTTU_CELL3_MAX_DP_REPORT;                                                // 0x0284
    kal_uint32 TDDTTU_CELL3_PATH_POS_REPORT0;                                             // 0x0288
    kal_uint32 TDDTTU_CELL3_PATH_POS_REPORT1;                                             // 0x028C
    kal_uint32 TDDTTU_FOE;                                                                // 0x0290
    kal_uint32 TDDTDDTTU_S1S2_CORRELATION0;                                               // 0x0294
    kal_uint32 TDDTTU_S1S2_CORRELATION1;                                                  // 0x0298
    kal_uint32 RPRT_RESV[5];                                                              // 0x029C..0x02AC
} TDSCDMA_TTU_CUIF_RPRT_REGS, *PTDSCDMA_TTU_CUIF_RPRT_REGS;

// ---------- TDSCDMA_TTU_CUIF_RPRT word-offset  ----------
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_NOISE_LVL                                    (0)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_MAX_DP_REPORT                                (1)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_PATH_POS_REPORT0                             (2)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_PATH_POS_REPORT1                             (3)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_NOISE_LVL                                    (4)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_MAX_DP_REPORT                                (5)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_PATH_POS_REPORT0                             (6)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_PATH_POS_REPORT1                             (7)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2NOISE_LVL                                     (8)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_MAX_DP_REPORT                                (9)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_PATH_POS_REPORT0                             (10)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_PATH_POS_REPORT1                             (11)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_NOISE_LVL                                    (12)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_MAX_DP_REPORT                                (13)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_PATH_POS_REPORT0                             (14)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_PATH_POS_REPORT1                             (15)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_FOE                                                (16)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTDDTTU_S1S2_CORRELATION0                               (17)
#define O_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_S1S2_CORRELATION1                                  (18)
#define O_TDSCDMA_TTU_CUIF_RPRT_RPRT_RESV(i)                                              (19 + (i))

// ---------- TDDTTU_CELL0_NOISE_LVL bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_NOISE_LVL_NOISE_LVL                          (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_NOISE_LVL_NOISE_LVL                          (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_NOISE_LVL_NOISE_LVL                          (0x0000FFFF)

// ---------- TDDTTU_CELL0_MAX_DP_REPORT bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_MAX_DP_REPORT_MAX_PATH_POS                   (16)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_MAX_DP_REPORT_MAX_PATH_POS                   (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_MAX_DP_REPORT_MAX_PATH_POS                   (0xFFFF0000)
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_MAX_DP_REPORT_MAX_AVG_DP                     (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_MAX_DP_REPORT_MAX_AVG_DP                     (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_MAX_DP_REPORT_MAX_AVG_DP                     (0x0000FFFF)

// ---------- TDDTTU_CELL0_PATH_POS_REPORT0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_PATH_POS_REPORT0_PATH_POS                    (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_PATH_POS_REPORT0_PATH_POS                    (32)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_PATH_POS_REPORT0_PATH_POS                    (0xFFFFFFFF)

// ---------- TDDTTU_CELL0_PATH_POS_REPORT1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_PATH_POS_REPORT1_PATH_POS                    (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_PATH_POS_REPORT1_PATH_POS                    (32)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL0_PATH_POS_REPORT1_PATH_POS                    (0xFFFFFFFF)

// ---------- TDDTTU_CELL1_NOISE_LVL bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_NOISE_LVL_NOISE_LVL                          (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_NOISE_LVL_NOISE_LVL                          (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_NOISE_LVL_NOISE_LVL                          (0x0000FFFF)

// ---------- TDDTTU_CELL1_MAX_DP_REPORT bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_MAX_DP_REPORT_MAX_PATH_POS                   (16)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_MAX_DP_REPORT_MAX_PATH_POS                   (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_MAX_DP_REPORT_MAX_PATH_POS                   (0xFFFF0000)
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_MAX_DP_REPORT_MAX_AVG_DP                     (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_MAX_DP_REPORT_MAX_AVG_DP                     (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_MAX_DP_REPORT_MAX_AVG_DP                     (0x0000FFFF)

// ---------- TDDTTU_CELL1_PATH_POS_REPORT0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_PATH_POS_REPORT0_PATH_POS                    (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_PATH_POS_REPORT0_PATH_POS                    (32)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_PATH_POS_REPORT0_PATH_POS                    (0xFFFFFFFF)

// ---------- TDDTTU_CELL1_PATH_POS_REPORT1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_PATH_POS_REPORT1_PATH_POS                    (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_PATH_POS_REPORT1_PATH_POS                    (32)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL1_PATH_POS_REPORT1_PATH_POS                    (0xFFFFFFFF)

// ---------- TDDTTU_CELL2NOISE_LVL bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2NOISE_LVL_NOISE_LVL                           (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2NOISE_LVL_NOISE_LVL                           (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2NOISE_LVL_NOISE_LVL                           (0x0000FFFF)

// ---------- TDDTTU_CELL2_MAX_DP_REPORT bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_MAX_DP_REPORT_MAX_PATH_POS                   (16)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_MAX_DP_REPORT_MAX_PATH_POS                   (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_MAX_DP_REPORT_MAX_PATH_POS                   (0xFFFF0000)
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_MAX_DP_REPORT_MAX_AVG_DP                     (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_MAX_DP_REPORT_MAX_AVG_DP                     (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_MAX_DP_REPORT_MAX_AVG_DP                     (0x0000FFFF)

// ---------- TDDTTU_CELL2_PATH_POS_REPORT0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_PATH_POS_REPORT0_PATH_POS                    (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_PATH_POS_REPORT0_PATH_POS                    (32)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_PATH_POS_REPORT0_PATH_POS                    (0xFFFFFFFF)

// ---------- TDDTTU_CELL2_PATH_POS_REPORT1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_PATH_POS_REPORT1_PATH_POS                    (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_PATH_POS_REPORT1_PATH_POS                    (32)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL2_PATH_POS_REPORT1_PATH_POS                    (0xFFFFFFFF)

// ---------- TDDTTU_CELL3_NOISE_LVL bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_NOISE_LVL_NOISE_LVL                          (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_NOISE_LVL_NOISE_LVL                          (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_NOISE_LVL_NOISE_LVL                          (0x0000FFFF)

// ---------- TDDTTU_CELL3_MAX_DP_REPORT bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_MAX_DP_REPORT_MAX_PATH_POS                   (16)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_MAX_DP_REPORT_MAX_PATH_POS                   (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_MAX_DP_REPORT_MAX_PATH_POS                   (0xFFFF0000)
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_MAX_DP_REPORT_MAX_AVG_DP                     (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_MAX_DP_REPORT_MAX_AVG_DP                     (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_MAX_DP_REPORT_MAX_AVG_DP                     (0x0000FFFF)

// ---------- TDDTTU_CELL3_PATH_POS_REPORT0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_PATH_POS_REPORT0_PATH_POS                    (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_PATH_POS_REPORT0_PATH_POS                    (32)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_PATH_POS_REPORT0_PATH_POS                    (0xFFFFFFFF)

// ---------- TDDTTU_CELL3_PATH_POS_REPORT1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_PATH_POS_REPORT1_PATH_POS                    (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_PATH_POS_REPORT1_PATH_POS                    (32)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_CELL3_PATH_POS_REPORT1_PATH_POS                    (0xFFFFFFFF)

// ---------- TDDTTU_FOE bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_FOE_FOE_NC                                         (16)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_FOE_FOE_NC                                         (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_FOE_FOE_NC                                         (0xFFFF0000)
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_FOE_FOE_SC                                         (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_FOE_FOE_SC                                         (16)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_FOE_FOE_SC                                         (0x0000FFFF)

// ---------- TDDTDDTTU_S1S2_CORRELATION0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTDDTTU_S1S2_CORRELATION0_FOE_CORR_REAL                 (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTDDTTU_S1S2_CORRELATION0_FOE_CORR_REAL                 (32)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTDDTTU_S1S2_CORRELATION0_FOE_CORR_REAL                 (0xFFFFFFFF)

// ---------- TDDTTU_S1S2_CORRELATION1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_S1S2_CORRELATION1_FOE_CORR_IMAG                    (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_S1S2_CORRELATION1_FOE_CORR_IMAG                    (32)
#define M_TDSCDMA_TTU_CUIF_RPRT_TDDTTU_S1S2_CORRELATION1_FOE_CORR_IMAG                    (0xFFFFFFFF)

// ---------- RPRT_RESV bit-field ----------
#define P_TDSCDMA_TTU_CUIF_RPRT_RPRT_RESV_RESV                                            (0)
#define L_TDSCDMA_TTU_CUIF_RPRT_RPRT_RESV_RESV                                            (32)
#define M_TDSCDMA_TTU_CUIF_RPRT_RPRT_RESV_RESV                                            (0xFFFFFFFF)

#endif // __TDSCDMA_TTU_CUIF_RPRT_H__
