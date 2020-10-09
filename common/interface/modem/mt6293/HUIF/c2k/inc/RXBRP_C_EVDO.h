#ifndef __RXBRP_C_EVDO_H__
#define __RXBRP_C_EVDO_H__

// ----------------- RXBRP_C_EVDO Register Definition -------------------
typedef volatile struct {
    kal_uint32 DBRP_EVDO_START;                                                           // 0x0000
    kal_uint32 DBRP_EVDO_DONE;                                                            // 0x0004
    kal_uint32 DBRP_EVDO_DONE_VEC;                                                        // 0x0008
    kal_uint32 DBRP_EVDO_CH_DET;                                                          // 0x000C
    kal_uint32 DBRP_EVDO_HARQ_INFO;                                                       // 0x0010
    kal_uint32 DBRP_EVDO_C2I_SCAL_QPSK;                                                   // 0x0014
    kal_uint32 DBRP_EVDO_C2I_SCAL_8PSK;                                                   // 0x0018
    kal_uint32 DBRP_EVDO_C2I_SCAL_16QAM;                                                  // 0x001C
    kal_uint32 rsv_0020[32];                                                              // 0x0020..0x009C
    kal_uint32 DBRP_EVDO_HARQ_DBG;                                                        // 0x00A0
    kal_uint32 DBRP_EVDO_C2I_RD;                                                          // 0x00A4
    kal_uint32 DBRP_EVDO_C2I_RD_ADDR;                                                     // 0x00A8
    kal_uint32 DBRP_EVDO_C2I_RD_DATA;                                                     // 0x00AC
    kal_uint32 DBRP_EVDO_HARQ_RD;                                                         // 0x00B0
    kal_uint32 DBRP_EVDO_HARQ_RD_ADDR;                                                    // 0x00B4
    kal_uint32 DBRP_EVDO_HARQ_RD_DATA;                                                    // 0x00B8
    kal_uint32 DBRP_EVDO_HARQ_ABSACC_03;                                                  // 0x00BC
    kal_uint32 DBRP_EVDO_HARQ_ABSACC_47;                                                  // 0x00C0
    kal_uint32 rsv_00C4[3];                                                               // 0x00C4..0x00CC
    kal_uint32 DBRP_EVDO_DBG0;                                                            // 0x00D0
    kal_uint32 rsv_00D4[7];                                                               // 0x00D4..0x00EC
    kal_uint32 DBRP_EVDO_PWR_CFG;                                                         // 0x00F0
    kal_uint32 rsv_00F4[3];                                                               // 0x00F4..0x00FC
    kal_uint32 DBRP_EVDO_HARQ_PARAM;                                                      // 0x0100
    kal_uint32 DBRP_EVDO_CH0_PARAM1;                                                      // 0x0104
    kal_uint32 DBRP_EVDO_CH0_PARAM2;                                                      // 0x0108
    kal_uint32 DBRP_EVDO_CH0_PARAM3;                                                      // 0x010C
    kal_uint32 DBRP_EVDO_CH1_PARAM1;                                                      // 0x0110
    kal_uint32 DBRP_EVDO_CH1_PARAM2;                                                      // 0x0114
    kal_uint32 DBRP_EVDO_CH1_PARAM3;                                                      // 0x0118
    kal_uint32 DBRP_EVDO_CH2_PARAM1;                                                      // 0x011C
    kal_uint32 DBRP_EVDO_CH2_PARAM2;                                                      // 0x0120
    kal_uint32 DBRP_EVDO_CH2_PARAM3;                                                      // 0x0124
    kal_uint32 DBRP_EVDO_CH3_PARAM1;                                                      // 0x0128
    kal_uint32 DBRP_EVDO_CH3_PARAM2;                                                      // 0x012C
    kal_uint32 DBRP_EVDO_CH3_PARAM3;                                                      // 0x0130
    kal_uint32 rsv_0134[51];                                                              // 0x0134..0x01FC
    kal_uint32 DBRP_EVDO_C2I_PARAM0;                                                      // 0x0200
    kal_uint32 DBRP_EVDO_C2I_PARAM1;                                                      // 0x0204
} RXBRP_C_EVDO_REGS, *PRXBRP_C_EVDO_REGS;

// ---------- RXBRP_C_EVDO word-offset  ----------
#define O_RXBRP_C_EVDO_DBRP_EVDO_START                                                    (0)
#define O_RXBRP_C_EVDO_DBRP_EVDO_DONE                                                     (1)
#define O_RXBRP_C_EVDO_DBRP_EVDO_DONE_VEC                                                 (2)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH_DET                                                   (3)
#define O_RXBRP_C_EVDO_DBRP_EVDO_HARQ_INFO                                                (4)
#define O_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK                                            (5)
#define O_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK                                            (6)
#define O_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM                                           (7)
#define O_RXBRP_C_EVDO_DBRP_EVDO_HARQ_DBG                                                 (40)
#define O_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD                                                   (41)
#define O_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_ADDR                                              (42)
#define O_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_DATA                                              (43)
#define O_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD                                                  (44)
#define O_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_ADDR                                             (45)
#define O_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_DATA                                             (46)
#define O_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03                                           (47)
#define O_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47                                           (48)
#define O_RXBRP_C_EVDO_DBRP_EVDO_DBG0                                                     (52)
#define O_RXBRP_C_EVDO_DBRP_EVDO_PWR_CFG                                                  (60)
#define O_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM                                               (64)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1                                               (65)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2                                               (66)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM3                                               (67)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1                                               (68)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2                                               (69)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM3                                               (70)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1                                               (71)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2                                               (72)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM3                                               (73)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1                                               (74)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2                                               (75)
#define O_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM3                                               (76)
#define O_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM0                                               (128)
#define O_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM1                                               (129)

// ---------- DBRP_EVDO_START bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_START_EVDO_START                                         (15)
#define L_RXBRP_C_EVDO_DBRP_EVDO_START_EVDO_START                                         (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_START_EVDO_START                                         (0x00008000)

// ---------- DBRP_EVDO_DONE bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_DONE_EVDO_SW_IRQ_TRIG                                    (16)
#define L_RXBRP_C_EVDO_DBRP_EVDO_DONE_EVDO_SW_IRQ_TRIG                                    (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_DONE_EVDO_SW_IRQ_TRIG                                    (0x00010000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_DONE_EVDO_DONE                                           (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_DONE_EVDO_DONE                                           (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_DONE_EVDO_DONE                                           (0x00000001)

// ---------- DBRP_EVDO_DONE_VEC bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_DONE_VEC_TURBO_DONE                                      (1)
#define L_RXBRP_C_EVDO_DBRP_EVDO_DONE_VEC_TURBO_DONE                                      (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_DONE_VEC_TURBO_DONE                                      (0x00000002)
#define P_RXBRP_C_EVDO_DBRP_EVDO_DONE_VEC_DRM_DONE                                        (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_DONE_VEC_DRM_DONE                                        (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_DONE_VEC_DRM_DONE                                        (0x00000001)

// ---------- DBRP_EVDO_CH_DET bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH_DET_CH3_EN                                            (3)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH_DET_CH3_EN                                            (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH_DET_CH3_EN                                            (0x00000008)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH_DET_CH2_EN                                            (2)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH_DET_CH2_EN                                            (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH_DET_CH2_EN                                            (0x00000004)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH_DET_CH1_EN                                            (1)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH_DET_CH1_EN                                            (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH_DET_CH1_EN                                            (0x00000002)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH_DET_CH0_EN                                            (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH_DET_CH0_EN                                            (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH_DET_CH0_EN                                            (0x00000001)

// ---------- DBRP_EVDO_HARQ_INFO bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_INFO_CRCSIZE                                        (3)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_INFO_CRCSIZE                                        (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_INFO_CRCSIZE                                        (0x00000008)
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_INFO_INTERLANCE                                     (1)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_INFO_INTERLANCE                                     (2)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_INFO_INTERLANCE                                     (0x00000006)
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_INFO_NDI                                            (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_INFO_NDI                                            (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_INFO_NDI                                            (0x00000001)

// ---------- DBRP_EVDO_C2I_SCAL_QPSK bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_NORM_TYPE                                  (31)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_NORM_TYPE                                  (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_NORM_TYPE                                  (0x80000000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_SHIFT_C2I                                  (24)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_SHIFT_C2I                                  (5)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_SHIFT_C2I                                  (0x1F000000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_DIV_C2I_3                                  (18)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_DIV_C2I_3                                  (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_DIV_C2I_3                                  (0x00FC0000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_DIV_C2I_2                                  (12)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_DIV_C2I_2                                  (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_DIV_C2I_2                                  (0x0003F000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_DIV_C2I_1                                  (6)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_DIV_C2I_1                                  (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_DIV_C2I_1                                  (0x00000FC0)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_DIV_C2I_0                                  (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_DIV_C2I_0                                  (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_QPSK_DIV_C2I_0                                  (0x0000003F)

// ---------- DBRP_EVDO_C2I_SCAL_8PSK bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_NORM_TYPE                                  (31)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_NORM_TYPE                                  (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_NORM_TYPE                                  (0x80000000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_SHIFT_C2I                                  (24)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_SHIFT_C2I                                  (5)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_SHIFT_C2I                                  (0x1F000000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_DIV_C2I_3                                  (18)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_DIV_C2I_3                                  (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_DIV_C2I_3                                  (0x00FC0000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_DIV_C2I_2                                  (12)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_DIV_C2I_2                                  (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_DIV_C2I_2                                  (0x0003F000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_DIV_C2I_1                                  (6)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_DIV_C2I_1                                  (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_DIV_C2I_1                                  (0x00000FC0)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_DIV_C2I_0                                  (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_DIV_C2I_0                                  (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_8PSK_DIV_C2I_0                                  (0x0000003F)

// ---------- DBRP_EVDO_C2I_SCAL_16QAM bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_NORM_TYPE                                 (31)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_NORM_TYPE                                 (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_NORM_TYPE                                 (0x80000000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_SHIFT_C2I                                 (24)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_SHIFT_C2I                                 (5)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_SHIFT_C2I                                 (0x1F000000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_DIV_C2I_3                                 (18)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_DIV_C2I_3                                 (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_DIV_C2I_3                                 (0x00FC0000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_DIV_C2I_2                                 (12)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_DIV_C2I_2                                 (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_DIV_C2I_2                                 (0x0003F000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_DIV_C2I_1                                 (6)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_DIV_C2I_1                                 (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_DIV_C2I_1                                 (0x00000FC0)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_DIV_C2I_0                                 (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_DIV_C2I_0                                 (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_SCAL_16QAM_DIV_C2I_0                                 (0x0000003F)

// ---------- DBRP_EVDO_HARQ_DBG bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_DBG_EN                                              (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_DBG_EN                                              (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_DBG_EN                                              (0x00000001)

// ---------- DBRP_EVDO_C2I_RD bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_TRG                                               (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_TRG                                               (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_TRG                                               (0x00000001)

// ---------- DBRP_EVDO_C2I_RD_ADDR bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_ADDR_AUTO_INC                                     (15)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_ADDR_AUTO_INC                                     (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_ADDR_AUTO_INC                                     (0x00008000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_ADDR_MEM_ADDR                                     (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_ADDR_MEM_ADDR                                     (6)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_ADDR_MEM_ADDR                                     (0x0000003F)

// ---------- DBRP_EVDO_C2I_RD_DATA bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_DATA_MEM_DATA                                     (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_DATA_MEM_DATA                                     (12)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_RD_DATA_MEM_DATA                                     (0x00000FFF)

// ---------- DBRP_EVDO_HARQ_RD bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_TRG                                              (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_TRG                                              (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_TRG                                              (0x00000001)

// ---------- DBRP_EVDO_HARQ_RD_ADDR bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_ADDR_AUTO_INC                                    (15)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_ADDR_AUTO_INC                                    (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_ADDR_AUTO_INC                                    (0x00008000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_ADDR_MEM_ADDR                                    (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_ADDR_MEM_ADDR                                    (11)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_ADDR_MEM_ADDR                                    (0x000007FF)

// ---------- DBRP_EVDO_HARQ_RD_DATA bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_DATA_MEM_DATA                                    (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_DATA_MEM_DATA                                    (32)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_RD_DATA_MEM_DATA                                    (0xFFFFFFFF)

// ---------- DBRP_EVDO_HARQ_ABSACC_03 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03_ABSACC_3                                  (24)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03_ABSACC_3                                  (7)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03_ABSACC_3                                  (0x7F000000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03_ABSACC_2                                  (16)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03_ABSACC_2                                  (7)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03_ABSACC_2                                  (0x007F0000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03_ABSACC_1                                  (8)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03_ABSACC_1                                  (7)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03_ABSACC_1                                  (0x00007F00)
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03_ABSACC_0                                  (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03_ABSACC_0                                  (7)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_03_ABSACC_0                                  (0x0000007F)

// ---------- DBRP_EVDO_HARQ_ABSACC_47 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47_ABSACC_7                                  (24)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47_ABSACC_7                                  (7)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47_ABSACC_7                                  (0x7F000000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47_ABSACC_6                                  (16)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47_ABSACC_6                                  (7)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47_ABSACC_6                                  (0x007F0000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47_ABSACC_5                                  (8)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47_ABSACC_5                                  (7)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47_ABSACC_5                                  (0x00007F00)
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47_ABSACC_4                                  (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47_ABSACC_4                                  (7)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_ABSACC_47_ABSACC_4                                  (0x0000007F)

// ---------- DBRP_EVDO_DBG0 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_DBG0_DET_CHNL_ITER                                       (12)
#define L_RXBRP_C_EVDO_DBRP_EVDO_DBG0_DET_CHNL_ITER                                       (2)
#define M_RXBRP_C_EVDO_DBRP_EVDO_DBG0_DET_CHNL_ITER                                       (0x00003000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_DBG0_MAIN_FSM_CS                                         (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_DBG0_MAIN_FSM_CS                                         (9)
#define M_RXBRP_C_EVDO_DBRP_EVDO_DBG0_MAIN_FSM_CS                                         (0x000001FF)

// ---------- DBRP_EVDO_PWR_CFG bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_PWR_CFG_PWR_MODE                                         (15)
#define L_RXBRP_C_EVDO_DBRP_EVDO_PWR_CFG_PWR_MODE                                         (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_PWR_CFG_PWR_MODE                                         (0x00008000)

// ---------- DBRP_EVDO_HARQ_PARAM bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM_HARQ_BUF_SIZE                                 (16)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM_HARQ_BUF_SIZE                                 (13)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM_HARQ_BUF_SIZE                                 (0x1FFF0000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM_PRE_QUAR_SLT2_SIZE                            (5)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM_PRE_QUAR_SLT2_SIZE                            (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM_PRE_QUAR_SLT2_SIZE                            (0x00000020)
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM_PRE_QUAR_SLT1_SIZE                            (3)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM_PRE_QUAR_SLT1_SIZE                            (2)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM_PRE_QUAR_SLT1_SIZE                            (0x00000018)
#define P_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM_PRE_QUAR_SLT0_SIZE                            (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM_PRE_QUAR_SLT0_SIZE                            (2)
#define M_RXBRP_C_EVDO_DBRP_EVDO_HARQ_PARAM_PRE_QUAR_SLT0_SIZE                            (0x00000003)

// ---------- DBRP_EVDO_CH0_PARAM1 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_D                                       (23)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_D                                       (4)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_D                                       (0x07800000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_M                                       (20)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_M                                       (3)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_M                                       (0x00700000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_R                                       (17)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_R                                       (3)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_R                                       (0x000E0000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_K                                       (14)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_K                                       (3)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_K                                       (0x0001C000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_SIZE                                    (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_SIZE                                    (14)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM1_INTLV_SIZE                                    (0x00003FFF)

// ---------- DBRP_EVDO_CH0_PARAM2 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2_CODE_RATE                                     (20)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2_CODE_RATE                                     (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2_CODE_RATE                                     (0x00100000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2_ENCODED_BITS                                  (6)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2_ENCODED_BITS                                  (14)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2_ENCODED_BITS                                  (0x000FFFC0)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2_MOD                                           (4)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2_MOD                                           (2)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2_MOD                                           (0x00000030)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2_REPEAT_RATE                                   (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2_REPEAT_RATE                                   (4)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM2_REPEAT_RATE                                   (0x0000000F)

// ---------- DBRP_EVDO_CH0_PARAM3 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM3_SCRAMB_INIT_13_0                              (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM3_SCRAMB_INIT_13_0                              (14)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH0_PARAM3_SCRAMB_INIT_13_0                              (0x00003FFF)

// ---------- DBRP_EVDO_CH1_PARAM1 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_D                                       (23)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_D                                       (4)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_D                                       (0x07800000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_M                                       (20)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_M                                       (3)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_M                                       (0x00700000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_R                                       (17)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_R                                       (3)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_R                                       (0x000E0000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_K                                       (14)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_K                                       (3)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_K                                       (0x0001C000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_SIZE                                    (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_SIZE                                    (14)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM1_INTLV_SIZE                                    (0x00003FFF)

// ---------- DBRP_EVDO_CH1_PARAM2 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2_CODE_RATE                                     (20)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2_CODE_RATE                                     (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2_CODE_RATE                                     (0x00100000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2_ENCODED_BITS                                  (6)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2_ENCODED_BITS                                  (14)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2_ENCODED_BITS                                  (0x000FFFC0)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2_MOD                                           (4)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2_MOD                                           (2)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2_MOD                                           (0x00000030)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2_REPEAT_RATE                                   (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2_REPEAT_RATE                                   (4)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM2_REPEAT_RATE                                   (0x0000000F)

// ---------- DBRP_EVDO_CH1_PARAM3 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM3_SCRAMB_INIT_13_0                              (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM3_SCRAMB_INIT_13_0                              (14)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH1_PARAM3_SCRAMB_INIT_13_0                              (0x00003FFF)

// ---------- DBRP_EVDO_CH2_PARAM1 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_D                                       (23)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_D                                       (4)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_D                                       (0x07800000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_M                                       (20)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_M                                       (3)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_M                                       (0x00700000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_R                                       (17)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_R                                       (3)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_R                                       (0x000E0000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_K                                       (14)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_K                                       (3)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_K                                       (0x0001C000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_SIZE                                    (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_SIZE                                    (14)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM1_INTLV_SIZE                                    (0x00003FFF)

// ---------- DBRP_EVDO_CH2_PARAM2 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2_CODE_RATE                                     (20)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2_CODE_RATE                                     (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2_CODE_RATE                                     (0x00100000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2_ENCODED_BITS                                  (6)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2_ENCODED_BITS                                  (14)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2_ENCODED_BITS                                  (0x000FFFC0)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2_MOD                                           (4)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2_MOD                                           (2)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2_MOD                                           (0x00000030)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2_REPEAT_RATE                                   (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2_REPEAT_RATE                                   (4)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM2_REPEAT_RATE                                   (0x0000000F)

// ---------- DBRP_EVDO_CH2_PARAM3 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM3_SCRAMB_INIT_13_0                              (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM3_SCRAMB_INIT_13_0                              (14)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH2_PARAM3_SCRAMB_INIT_13_0                              (0x00003FFF)

// ---------- DBRP_EVDO_CH3_PARAM1 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_D                                       (23)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_D                                       (4)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_D                                       (0x07800000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_M                                       (20)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_M                                       (3)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_M                                       (0x00700000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_R                                       (17)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_R                                       (3)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_R                                       (0x000E0000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_K                                       (14)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_K                                       (3)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_K                                       (0x0001C000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_SIZE                                    (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_SIZE                                    (14)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM1_INTLV_SIZE                                    (0x00003FFF)

// ---------- DBRP_EVDO_CH3_PARAM2 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2_CODE_RATE                                     (20)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2_CODE_RATE                                     (1)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2_CODE_RATE                                     (0x00100000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2_ENCODED_BITS                                  (6)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2_ENCODED_BITS                                  (14)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2_ENCODED_BITS                                  (0x000FFFC0)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2_MOD                                           (4)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2_MOD                                           (2)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2_MOD                                           (0x00000030)
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2_REPEAT_RATE                                   (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2_REPEAT_RATE                                   (4)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM2_REPEAT_RATE                                   (0x0000000F)

// ---------- DBRP_EVDO_CH3_PARAM3 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM3_SCRAMB_INIT_13_0                              (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM3_SCRAMB_INIT_13_0                              (14)
#define M_RXBRP_C_EVDO_DBRP_EVDO_CH3_PARAM3_SCRAMB_INIT_13_0                              (0x00003FFF)

// ---------- DBRP_EVDO_C2I_PARAM0 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM0_C2I_QUAR_SLOT1                                (16)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM0_C2I_QUAR_SLOT1                                (12)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM0_C2I_QUAR_SLOT1                                (0x0FFF0000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM0_C2I_QUAR_SLOT0                                (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM0_C2I_QUAR_SLOT0                                (12)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM0_C2I_QUAR_SLOT0                                (0x00000FFF)

// ---------- DBRP_EVDO_C2I_PARAM1 bit-field ----------
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM1_C2I_QUAR_SLOT3                                (16)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM1_C2I_QUAR_SLOT3                                (12)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM1_C2I_QUAR_SLOT3                                (0x0FFF0000)
#define P_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM1_C2I_QUAR_SLOT2                                (0)
#define L_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM1_C2I_QUAR_SLOT2                                (12)
#define M_RXBRP_C_EVDO_DBRP_EVDO_C2I_PARAM1_C2I_QUAR_SLOT2                                (0x00000FFF)

#endif // __RXBRP_C_EVDO_H__
