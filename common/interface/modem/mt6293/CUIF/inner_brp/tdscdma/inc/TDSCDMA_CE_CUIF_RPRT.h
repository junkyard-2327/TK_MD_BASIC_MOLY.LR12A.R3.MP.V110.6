#ifndef __TDSCDMA_CE_CUIF_RPRT_H__
#define __TDSCDMA_CE_CUIF_RPRT_H__

// ----------------- TDSCDMA_CE_CUIF_RPRT Register Definition -------------------
typedef volatile struct {
    kal_uint32 TDDCEU_CELLk_NOISE_MAXDP[4];                                               // 0x01D0..0x01DC
    kal_uint32 TDDCEU_CELL0_MAXDP_POS;                                                    // 0x01E0
    kal_uint32 TDDCEU_MID_FOE;                                                            // 0x01E4
    kal_uint32 TDDCEU_CELL0_REPORT0;                                                      // 0x01E8
    kal_uint32 TDDCEU_CELL0_REPORT1;                                                      // 0x01EC
    kal_uint32 TDDCEU_CELL0_REPORT2;                                                      // 0x01F0
    kal_uint32 TDDCEU_CELL0_REPORT3;                                                      // 0x01F4
    kal_uint32 TDDCEU_CELL1_REPORT0;                                                      // 0x01F8
    kal_uint32 TDDCEU_CELL1_REPORT1;                                                      // 0x01FC
    kal_uint32 TDDCEU_CELL1_REPORT2;                                                      // 0x0200
    kal_uint32 TDDCEU_CELL1_REPORT3;                                                      // 0x0204
    kal_uint32 TDDCEU_CELL2_REPORT0;                                                      // 0x0208
    kal_uint32 TDDCEU_CELL2_REPORT1;                                                      // 0x020C
    kal_uint32 TDDCEU_CELL2_REPORT2;                                                      // 0x0210
    kal_uint32 TDDCEU_CELL2_REPORT3;                                                      // 0x0214
    kal_uint32 TDDCEU_CELL3_REPORT0;                                                      // 0x0218
    kal_uint32 TDDCEU_CELL3_REPORT1;                                                      // 0x021C
    kal_uint32 TDDCEU_CELL3_REPORT2;                                                      // 0x0220
    kal_uint32 TDDCEU_CELL3_REPORT3;                                                      // 0x0224
    kal_uint32 TDDCEU_REPORT4;                                                            // 0x0228
    kal_uint32 TDDCEU_CELLk_MEAS_DP[4];                                                   // 0x022C..0x0238
    kal_uint32 TDDCEU_DLL_PEAKPOS0;                                                       // 0x023C
    kal_uint32 TDDCEU_DLL_PEAKPOS1;                                                       // 0x0240
    kal_uint32 RPRT_RESV[3];                                                              // 0x0244..0x024C
} TDSCDMA_CE_CUIF_RPRT_REGS, *PTDSCDMA_CE_CUIF_RPRT_REGS;

// ---------- TDSCDMA_CE_CUIF_RPRT word-offset  ----------
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELLk_NOISE_MAXDP(i)                                (0 + (i))
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_MAXDP_POS                                     (4)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_MID_FOE                                             (5)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT0                                       (6)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT1                                       (7)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT2                                       (8)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT3                                       (9)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT0                                       (10)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT1                                       (11)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT2                                       (12)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT3                                       (13)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT0                                       (14)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT1                                       (15)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT2                                       (16)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT3                                       (17)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT0                                       (18)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT1                                       (19)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT2                                       (20)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT3                                       (21)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_REPORT4                                             (22)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELLk_MEAS_DP(i)                                    (23 + (i))
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS0                                        (27)
#define O_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS1                                        (28)
#define O_TDSCDMA_CE_CUIF_RPRT_RPRT_RESV(i)                                               (29 + (i))

// ---------- TDDCEU_CELLk_NOISE_MAXDP bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELLk_NOISE_MAXDP_NOISE                             (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELLk_NOISE_MAXDP_NOISE                             (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELLk_NOISE_MAXDP_NOISE                             (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELLk_NOISE_MAXDP_MAX_DP                            (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELLk_NOISE_MAXDP_MAX_DP                            (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELLk_NOISE_MAXDP_MAX_DP                            (0x0000FFFF)

// ---------- TDDCEU_CELL0_MAXDP_POS bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_MAXDP_POS_MAX_DP_POS_CELL0                    (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_MAXDP_POS_MAX_DP_POS_CELL0                    (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_MAXDP_POS_MAX_DP_POS_CELL0                    (0x0000FFFF)

// ---------- TDDCEU_MID_FOE bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_MID_FOE_FOE_NC                                      (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_MID_FOE_FOE_NC                                      (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_MID_FOE_FOE_NC                                      (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_MID_FOE_FOE_SC                                      (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_MID_FOE_FOE_SC                                      (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_MID_FOE_FOE_SC                                      (0x0000FFFF)

// ---------- TDDCEU_CELL0_REPORT0 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT0_MAX_AVE_DP                            (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT0_MAX_AVE_DP                            (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT0_MAX_AVE_DP                            (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT0_AVE_NOISE                             (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT0_AVE_NOISE                             (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT0_AVE_NOISE                             (0x0000FFFF)

// ---------- TDDCEU_CELL0_REPORT1 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT1_PATH_NUM                              (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT1_PATH_NUM                              (4)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT1_PATH_NUM                              (0x000F0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT1_DL_TIMING_OFFSET                      (8)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT1_DL_TIMING_OFFSET                      (7)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT1_DL_TIMING_OFFSET                      (0x00007F00)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT1_MAX_AVE_DP_POS                        (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT1_MAX_AVE_DP_POS                        (8)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT1_MAX_AVE_DP_POS                        (0x000000FF)

// ---------- TDDCEU_CELL0_REPORT2 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT2_PATH_POS                              (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT2_PATH_POS                              (32)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT2_PATH_POS                              (0xFFFFFFFF)

// ---------- TDDCEU_CELL0_REPORT3 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT3_ACTIVE_MA_BMP                         (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT3_ACTIVE_MA_BMP                         (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT3_ACTIVE_MA_BMP                         (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT3_MAX_DP_FW                             (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT3_MAX_DP_FW                             (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL0_REPORT3_MAX_DP_FW                             (0x0000FFFF)

// ---------- TDDCEU_CELL1_REPORT0 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT0_MAX_AVE_DP                            (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT0_MAX_AVE_DP                            (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT0_MAX_AVE_DP                            (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT0_AVE_NOISE                             (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT0_AVE_NOISE                             (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT0_AVE_NOISE                             (0x0000FFFF)

// ---------- TDDCEU_CELL1_REPORT1 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT1_PATH_NUM                              (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT1_PATH_NUM                              (4)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT1_PATH_NUM                              (0x000F0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT1_DL_TIMING_OFFSET                      (8)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT1_DL_TIMING_OFFSET                      (7)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT1_DL_TIMING_OFFSET                      (0x00007F00)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT1_MAX_AVE_DP_POS                        (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT1_MAX_AVE_DP_POS                        (8)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT1_MAX_AVE_DP_POS                        (0x000000FF)

// ---------- TDDCEU_CELL1_REPORT2 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT2_PATH_POS                              (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT2_PATH_POS                              (32)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT2_PATH_POS                              (0xFFFFFFFF)

// ---------- TDDCEU_CELL1_REPORT3 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT3_ACTIVE_MA_BMP                         (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT3_ACTIVE_MA_BMP                         (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT3_ACTIVE_MA_BMP                         (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT3_MAX_DP_FW                             (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT3_MAX_DP_FW                             (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL1_REPORT3_MAX_DP_FW                             (0x0000FFFF)

// ---------- TDDCEU_CELL2_REPORT0 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT0_MAX_AVE_DP                            (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT0_MAX_AVE_DP                            (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT0_MAX_AVE_DP                            (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT0_AVE_NOISE                             (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT0_AVE_NOISE                             (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT0_AVE_NOISE                             (0x0000FFFF)

// ---------- TDDCEU_CELL2_REPORT1 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT1_PATH_NUM                              (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT1_PATH_NUM                              (4)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT1_PATH_NUM                              (0x000F0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT1_DL_TIMING_OFFSET                      (8)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT1_DL_TIMING_OFFSET                      (7)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT1_DL_TIMING_OFFSET                      (0x00007F00)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT1_MAX_AVE_DP_POS                        (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT1_MAX_AVE_DP_POS                        (8)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT1_MAX_AVE_DP_POS                        (0x000000FF)

// ---------- TDDCEU_CELL2_REPORT2 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT2_PATH_POS                              (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT2_PATH_POS                              (32)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT2_PATH_POS                              (0xFFFFFFFF)

// ---------- TDDCEU_CELL2_REPORT3 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT3_ACTIVE_MA_BMP                         (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT3_ACTIVE_MA_BMP                         (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT3_ACTIVE_MA_BMP                         (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT3_MAX_DP_FW                             (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT3_MAX_DP_FW                             (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL2_REPORT3_MAX_DP_FW                             (0x0000FFFF)

// ---------- TDDCEU_CELL3_REPORT0 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT0_MAX_AVE_DP                            (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT0_MAX_AVE_DP                            (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT0_MAX_AVE_DP                            (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT0_AVE_NOISE                             (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT0_AVE_NOISE                             (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT0_AVE_NOISE                             (0x0000FFFF)

// ---------- TDDCEU_CELL3_REPORT1 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT1_PATH_NUM                              (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT1_PATH_NUM                              (4)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT1_PATH_NUM                              (0x000F0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT1_DL_TIMING_OFFSET                      (8)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT1_DL_TIMING_OFFSET                      (7)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT1_DL_TIMING_OFFSET                      (0x00007F00)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT1_MAX_AVE_DP_POS                        (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT1_MAX_AVE_DP_POS                        (8)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT1_MAX_AVE_DP_POS                        (0x000000FF)

// ---------- TDDCEU_CELL3_REPORT2 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT2_PATH_POS                              (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT2_PATH_POS                              (32)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT2_PATH_POS                              (0xFFFFFFFF)

// ---------- TDDCEU_CELL3_REPORT3 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT3_ACTIVE_MA_BMP                         (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT3_ACTIVE_MA_BMP                         (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT3_ACTIVE_MA_BMP                         (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT3_MAX_DP_FW                             (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT3_MAX_DP_FW                             (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELL3_REPORT3_MAX_DP_FW                             (0x0000FFFF)

// ---------- TDDCEU_REPORT4 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_REPORT4_OWN_CODE_BMP                                (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_REPORT4_OWN_CODE_BMP                                (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_REPORT4_OWN_CODE_BMP                                (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_REPORT4_AVE_DP_UPDATE_FLAG                          (6)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_REPORT4_AVE_DP_UPDATE_FLAG                          (1)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_REPORT4_AVE_DP_UPDATE_FLAG                          (0x00000040)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_REPORT4_MATRIX_B_OFFSET                             (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_REPORT4_MATRIX_B_OFFSET                             (6)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_REPORT4_MATRIX_B_OFFSET                             (0x0000003F)

// ---------- TDDCEU_CELLk_MEAS_DP bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELLk_MEAS_DP_LINEAR_DP_PW                          (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELLk_MEAS_DP_LINEAR_DP_PW                          (32)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_CELLk_MEAS_DP_LINEAR_DP_PW                          (0xFFFFFFFF)

// ---------- TDDCEU_DLL_PEAKPOS0 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS0_BEHIND_DLLPEAKPOS_DP                   (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS0_BEHIND_DLLPEAKPOS_DP                   (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS0_BEHIND_DLLPEAKPOS_DP                   (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS0_AHEAD_DLLPEAKPOS_DP                    (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS0_AHEAD_DLLPEAKPOS_DP                    (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS0_AHEAD_DLLPEAKPOS_DP                    (0x0000FFFF)

// ---------- TDDCEU_DLL_PEAKPOS1 bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS1_RSSI                                   (16)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS1_RSSI                                   (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS1_RSSI                                   (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS1_DLL_PEAKPOS_DP                         (0)
#define L_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS1_DLL_PEAKPOS_DP                         (16)
#define M_TDSCDMA_CE_CUIF_RPRT_TDDCEU_DLL_PEAKPOS1_DLL_PEAKPOS_DP                         (0x0000FFFF)

// ---------- RPRT_RESV bit-field ----------
#define P_TDSCDMA_CE_CUIF_RPRT_RPRT_RESV_RESV                                             (0)
#define L_TDSCDMA_CE_CUIF_RPRT_RPRT_RESV_RESV                                             (32)
#define M_TDSCDMA_CE_CUIF_RPRT_RPRT_RESV_RESV                                             (0xFFFFFFFF)

#endif // __TDSCDMA_CE_CUIF_RPRT_H__
