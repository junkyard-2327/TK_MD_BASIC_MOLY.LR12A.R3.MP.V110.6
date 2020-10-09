#ifndef __CUIF_C2K_EVDO_H__
#define __CUIF_C2K_EVDO_H__

// ----------------- CUIF_C2K_EVDO Register Definition -------------------
typedef volatile struct {
    kal_uint32 EVDO_USIP_ENABLE;                                                          // 0x0000
    kal_uint32 EVDO_USIP_IRQ_OFFSET;                                                      // 0x0004
    kal_uint32 EVDO_BRP_CTRL_0[4];                                                        // 0x0008..0x0014
    kal_uint32 EVDO_PRE_SNR;                                                              // 0x0018
    kal_uint32 rsv_001C[5];                                                               // 0x001C..0x002C
    kal_uint32 L1_CTRL;                                                                   // 0x0030
    kal_uint32 EQ_CTRL_1;                                                                 // 0x0034
    kal_uint32 EQ_CTRL_2;                                                                 // 0x0038
    kal_uint32 EQ_CTRL_3;                                                                 // 0x003C
    kal_uint32 CE_CTRL_1;                                                                 // 0x0040
    kal_uint32 CE_CTRL_2;                                                                 // 0x0044
    kal_uint32 CE_CTRL_3;                                                                 // 0x0048
} CUIF_C2K_EVDO_REGS, *PCUIF_C2K_EVDO_REGS;

// ---------- CUIF_C2K_EVDO word-offset  ----------
#define O_CUIF_C2K_EVDO_EVDO_USIP_ENABLE                                                  (0)
#define O_CUIF_C2K_EVDO_EVDO_USIP_IRQ_OFFSET                                              (1)
#define O_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0(i)                                                (2 + (i))
#define O_CUIF_C2K_EVDO_PRE_SNR                                                           (6)
#define O_CUIF_C2K_EVDO_L1_CTRL                                                           (12)
#define O_CUIF_C2K_EVDO_EQ_CTRL_1                                                         (13)
#define O_CUIF_C2K_EVDO_EQ_CTRL_2                                                         (14)
#define O_CUIF_C2K_EVDO_EQ_CTRL_3                                                         (15)
#define O_CUIF_C2K_EVDO_CE_CTRL_1                                                         (16)
#define O_CUIF_C2K_EVDO_CE_CTRL_2                                                         (17)
#define O_CUIF_C2K_EVDO_CE_CTRL_3                                                         (18)

// ---------- EVDO_USIP_ENABLE bit-field ----------
#define P_CUIF_C2K_EVDO_EVDO_USIP_ENABLE_EVDO_USIP_EN                                     (0)
#define L_CUIF_C2K_EVDO_EVDO_USIP_ENABLE_EVDO_USIP_EN                                     (1)
#define M_CUIF_C2K_EVDO_EVDO_USIP_ENABLE_EVDO_USIP_EN                                     (0x00000001)

// ---------- EVDO_USIP_IRQ_OFFSET bit-field ----------
#define P_CUIF_C2K_EVDO_EVDO_USIP_IRQ_OFFSET_SLOT_INT_OFFSET_EN                           (16)
#define L_CUIF_C2K_EVDO_EVDO_USIP_IRQ_OFFSET_SLOT_INT_OFFSET_EN                           (1)
#define M_CUIF_C2K_EVDO_EVDO_USIP_IRQ_OFFSET_SLOT_INT_OFFSET_EN                           (0x00010000)
#define P_CUIF_C2K_EVDO_EVDO_USIP_IRQ_OFFSET_SLOT_INT_OFFSET_HCHIPS                       (2)
#define L_CUIF_C2K_EVDO_EVDO_USIP_IRQ_OFFSET_SLOT_INT_OFFSET_HCHIPS                       (12)
#define M_CUIF_C2K_EVDO_EVDO_USIP_IRQ_OFFSET_SLOT_INT_OFFSET_HCHIPS                       (0x00003FFC)

// ---------- EVDO_BRP_CTRL_0 bit-field ----------
#define P_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0_POST_SNR                                          (16)
#define L_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0_POST_SNR                                          (16)
#define M_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0_POST_SNR                                          (0xFFFF0000)
#define P_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0_CRC_TYPE                                          (8)
#define L_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0_CRC_TYPE                                          (1)
#define M_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0_CRC_TYPE                                          (0x00000100)
#define P_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0_DRC_IDX                                           (4)
#define L_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0_DRC_IDX                                           (4)
#define M_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0_DRC_IDX                                           (0x000000F0)
#define P_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0_SLOT_COUNT                                        (0)
#define L_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0_SLOT_COUNT                                        (4)
#define M_CUIF_C2K_EVDO_EVDO_BRP_CTRL_0_SLOT_COUNT                                        (0x0000000F)

// ---------- PRE_SNR bit-field ----------
#define P_CUIF_C2K_EVDO_PRE_SNR_PRE_SNR_2                                                 (16)
#define L_CUIF_C2K_EVDO_PRE_SNR_PRE_SNR_2                                                 (16)
#define M_CUIF_C2K_EVDO_PRE_SNR_PRE_SNR_2                                                 (0xFFFF0000)
#define P_CUIF_C2K_EVDO_PRE_SNR_PRE_SNR_1                                                 (0)
#define L_CUIF_C2K_EVDO_PRE_SNR_PRE_SNR_1                                                 (16)
#define M_CUIF_C2K_EVDO_PRE_SNR_PRE_SNR_1                                                 (0x0000FFFF)

// ---------- L1_CTRL bit-field ----------
#define P_CUIF_C2K_EVDO_L1_CTRL_L1_CTRL_DONE                                              (0)
#define L_CUIF_C2K_EVDO_L1_CTRL_L1_CTRL_DONE                                              (1)
#define M_CUIF_C2K_EVDO_L1_CTRL_L1_CTRL_DONE                                              (0x00000001)

// ---------- EQ_CTRL_1 bit-field ----------
#define P_CUIF_C2K_EVDO_EQ_CTRL_1_MMSE_FLAG                                               (24)
#define L_CUIF_C2K_EVDO_EQ_CTRL_1_MMSE_FLAG                                               (1)
#define M_CUIF_C2K_EVDO_EQ_CTRL_1_MMSE_FLAG                                               (0x01000000)
#define P_CUIF_C2K_EVDO_EQ_CTRL_1_MMSE_FLAG_L1_EN                                         (16)
#define L_CUIF_C2K_EVDO_EQ_CTRL_1_MMSE_FLAG_L1_EN                                         (1)
#define M_CUIF_C2K_EVDO_EQ_CTRL_1_MMSE_FLAG_L1_EN                                         (0x00010000)
#define P_CUIF_C2K_EVDO_EQ_CTRL_1_EQ_MODE                                                 (8)
#define L_CUIF_C2K_EVDO_EQ_CTRL_1_EQ_MODE                                                 (3)
#define M_CUIF_C2K_EVDO_EQ_CTRL_1_EQ_MODE                                                 (0x00000700)
#define P_CUIF_C2K_EVDO_EQ_CTRL_1_EQ_MODE_L1_EN                                           (0)
#define L_CUIF_C2K_EVDO_EQ_CTRL_1_EQ_MODE_L1_EN                                           (1)
#define M_CUIF_C2K_EVDO_EQ_CTRL_1_EQ_MODE_L1_EN                                           (0x00000001)

// ---------- EQ_CTRL_2 bit-field ----------
#define P_CUIF_C2K_EVDO_EQ_CTRL_2_ALPHA_FILTER_MODE                                       (24)
#define L_CUIF_C2K_EVDO_EQ_CTRL_2_ALPHA_FILTER_MODE                                       (2)
#define M_CUIF_C2K_EVDO_EQ_CTRL_2_ALPHA_FILTER_MODE                                       (0x03000000)
#define P_CUIF_C2K_EVDO_EQ_CTRL_2_ALPHA_FILTER_MODE_L1_EN                                 (16)
#define L_CUIF_C2K_EVDO_EQ_CTRL_2_ALPHA_FILTER_MODE_L1_EN                                 (1)
#define M_CUIF_C2K_EVDO_EQ_CTRL_2_ALPHA_FILTER_MODE_L1_EN                                 (0x00010000)
#define P_CUIF_C2K_EVDO_EQ_CTRL_2_ITER_NUM                                                (8)
#define L_CUIF_C2K_EVDO_EQ_CTRL_2_ITER_NUM                                                (2)
#define M_CUIF_C2K_EVDO_EQ_CTRL_2_ITER_NUM                                                (0x00000300)
#define P_CUIF_C2K_EVDO_EQ_CTRL_2_ITER_NUM_L1_EN                                          (0)
#define L_CUIF_C2K_EVDO_EQ_CTRL_2_ITER_NUM_L1_EN                                          (1)
#define M_CUIF_C2K_EVDO_EQ_CTRL_2_ITER_NUM_L1_EN                                          (0x00000001)

// ---------- EQ_CTRL_3 bit-field ----------
#define P_CUIF_C2K_EVDO_EQ_CTRL_3_C2I_FRAC_PART                                           (16)
#define L_CUIF_C2K_EVDO_EQ_CTRL_3_C2I_FRAC_PART                                           (5)
#define M_CUIF_C2K_EVDO_EQ_CTRL_3_C2I_FRAC_PART                                           (0x001F0000)
#define P_CUIF_C2K_EVDO_EQ_CTRL_3_DATA_FRAC_PART                                          (8)
#define L_CUIF_C2K_EVDO_EQ_CTRL_3_DATA_FRAC_PART                                          (5)
#define M_CUIF_C2K_EVDO_EQ_CTRL_3_DATA_FRAC_PART                                          (0x00001F00)
#define P_CUIF_C2K_EVDO_EQ_CTRL_3_DATA_FMT_L1_EN                                          (0)
#define L_CUIF_C2K_EVDO_EQ_CTRL_3_DATA_FMT_L1_EN                                          (1)
#define M_CUIF_C2K_EVDO_EQ_CTRL_3_DATA_FMT_L1_EN                                          (0x00000001)

// ---------- CE_CTRL_1 bit-field ----------
#define P_CUIF_C2K_EVDO_CE_CTRL_1_CORR_LEN                                                (24)
#define L_CUIF_C2K_EVDO_CE_CTRL_1_CORR_LEN                                                (8)
#define M_CUIF_C2K_EVDO_CE_CTRL_1_CORR_LEN                                                (0xFF000000)
#define P_CUIF_C2K_EVDO_CE_CTRL_1_CORR_LEN_L1_EN                                          (16)
#define L_CUIF_C2K_EVDO_CE_CTRL_1_CORR_LEN_L1_EN                                          (1)
#define M_CUIF_C2K_EVDO_CE_CTRL_1_CORR_LEN_L1_EN                                          (0x00010000)
#define P_CUIF_C2K_EVDO_CE_CTRL_1_PRE_COURSE                                              (8)
#define L_CUIF_C2K_EVDO_CE_CTRL_1_PRE_COURSE                                              (8)
#define M_CUIF_C2K_EVDO_CE_CTRL_1_PRE_COURSE                                              (0x0000FF00)
#define P_CUIF_C2K_EVDO_CE_CTRL_1_PRE_COURSE_L1_EN                                        (0)
#define L_CUIF_C2K_EVDO_CE_CTRL_1_PRE_COURSE_L1_EN                                        (1)
#define M_CUIF_C2K_EVDO_CE_CTRL_1_PRE_COURSE_L1_EN                                        (0x00000001)

// ---------- CE_CTRL_2 bit-field ----------
#define P_CUIF_C2K_EVDO_CE_CTRL_2_WIN_ADD_BD                                              (24)
#define L_CUIF_C2K_EVDO_CE_CTRL_2_WIN_ADD_BD                                              (8)
#define M_CUIF_C2K_EVDO_CE_CTRL_2_WIN_ADD_BD                                              (0xFF000000)
#define P_CUIF_C2K_EVDO_CE_CTRL_2_WIN_ADD_BD_L1_EN                                        (16)
#define L_CUIF_C2K_EVDO_CE_CTRL_2_WIN_ADD_BD_L1_EN                                        (1)
#define M_CUIF_C2K_EVDO_CE_CTRL_2_WIN_ADD_BD_L1_EN                                        (0x00010000)
#define P_CUIF_C2K_EVDO_CE_CTRL_2_ALPHA_SHIFT                                             (8)
#define L_CUIF_C2K_EVDO_CE_CTRL_2_ALPHA_SHIFT                                             (8)
#define M_CUIF_C2K_EVDO_CE_CTRL_2_ALPHA_SHIFT                                             (0x0000FF00)
#define P_CUIF_C2K_EVDO_CE_CTRL_2_ALPHA_SHIFT_L1_EN                                       (0)
#define L_CUIF_C2K_EVDO_CE_CTRL_2_ALPHA_SHIFT_L1_EN                                       (1)
#define M_CUIF_C2K_EVDO_CE_CTRL_2_ALPHA_SHIFT_L1_EN                                       (0x00000001)

// ---------- CE_CTRL_3 bit-field ----------
#define P_CUIF_C2K_EVDO_CE_CTRL_3_PD_MATRIX_NOISE                                         (8)
#define L_CUIF_C2K_EVDO_CE_CTRL_3_PD_MATRIX_NOISE                                         (16)
#define M_CUIF_C2K_EVDO_CE_CTRL_3_PD_MATRIX_NOISE                                         (0x00FFFF00)
#define P_CUIF_C2K_EVDO_CE_CTRL_3_PD_MATRIX_NOISE_L1_EN                                   (0)
#define L_CUIF_C2K_EVDO_CE_CTRL_3_PD_MATRIX_NOISE_L1_EN                                   (1)
#define M_CUIF_C2K_EVDO_CE_CTRL_3_PD_MATRIX_NOISE_L1_EN                                   (0x00000001)

#endif // __CUIF_C2K_EVDO_H__
