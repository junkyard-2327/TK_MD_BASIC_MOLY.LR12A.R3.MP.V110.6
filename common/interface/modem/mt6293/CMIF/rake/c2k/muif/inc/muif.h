#ifndef __MUIF_H__
#define __MUIF_H__

// ----------------- MUIF Register Definition -------------------
typedef volatile struct {
    kal_uint32 GEN_CTRL_0;                                                                // 0x0000
    kal_uint32 GEN_CTRL_1;                                                                // 0x0004
    kal_uint32 CE_CTRL;                                                                   // 0x0008
    kal_uint32 FNG_STATUS;                                                                // 0x000C
    kal_uint32 FNG_POWER[3];                                                              // 0x0010..0x0018
    kal_uint32 FNG_ORDER;                                                                 // 0x001C
    kal_uint32 FNG_DELAY[3];                                                              // 0x0020..0x0028
    kal_uint32 EQ_CTRL;                                                                   // 0x002C
    kal_uint32 SLOT_BOUNDARY_POS;                                                         // 0x0030
//    kal_uint32 rsv_0034;                                                                  // 0x0034
    kal_uint32 POST_SNR_DRC;                                                              // 0x0038
    kal_uint32 EQ_BYPASS_MODE_PARAM_0;                                                    // 0x003C
    kal_uint32 EQ_BYPASS_MODE_PARAM_1;                                                    // 0x0040
    kal_uint32 CELL_SWITCH_INFO;                                                          // 0x0044
} MUIF_REGS, *PMUIF_REGS;

// ---------- MUIF word-offset  ----------
#define O_MUIF_GEN_CTRL_0                                                                      (0)
#define O_MUIF_GEN_CTRL_1                                                                      (1)
#define O_MUIF_CE_CTRL                                                                         (2)
#define O_MUIF_FNG_STATUS                                                                      (3)
#define O_MUIF_FNG_POWER(i)                                                                    (4 + (i))
#define O_MUIF_FNG_ORDER                                                                       (7)
#define O_MUIF_FNG_DELAY(i)                                                                    (8 + (i))
#define O_MUIF_EQ_CTRL                                                                         (11)
#define O_MUIF_SLOT_BOUNDARY_POS                                                               (12)
#define O_MUIF_POST_SNR_DRC                                                                    (14)
#define O_MUIF_EQ_BYPASS_MODE_PARAM_0                                                          (15)
#define O_MUIF_EQ_BYPASS_MODE_PARAM_1                                                          (16)
#define O_MUIF_CELL_SWITCH_INFO                                                                (17)

// ---------- GEN_CTRL_0 bit-field ----------
#define P_MUIF_GEN_CTRL_0_PN_OFFSET                                                            (16)
#define L_MUIF_GEN_CTRL_0_PN_OFFSET                                                            (9)
#define M_MUIF_GEN_CTRL_0_PN_OFFSET                                                            (0x01FF0000)
#define P_MUIF_GEN_CTRL_0_SUB_TYPE                                                             (8)
#define L_MUIF_GEN_CTRL_0_SUB_TYPE                                                             (2)
#define M_MUIF_GEN_CTRL_0_SUB_TYPE                                                             (0x00000300)
#define P_MUIF_GEN_CTRL_0_RXD_EN                                                               (0)
#define L_MUIF_GEN_CTRL_0_RXD_EN                                                               (1)
#define M_MUIF_GEN_CTRL_0_RXD_EN                                                               (0x00000001)

// ---------- GEN_CTRL_1 bit-field ----------
#define P_MUIF_GEN_CTRL_1_DOPPLER                                                              (16)
#define L_MUIF_GEN_CTRL_1_DOPPLER                                                              (16)
#define M_MUIF_GEN_CTRL_1_DOPPLER                                                              (0xFFFF0000)
#define P_MUIF_GEN_CTRL_1_TIME_STAMP                                                           (0)
#define L_MUIF_GEN_CTRL_1_TIME_STAMP                                                           (13)
#define M_MUIF_GEN_CTRL_1_TIME_STAMP                                                           (0x00001FFF)

// ---------- CE_CTRL bit-field ----------
#define P_MUIF_CE_CTRL_FNG_BITMAP                                                              (16)
#define L_MUIF_CE_CTRL_FNG_BITMAP                                                              (3)
#define M_MUIF_CE_CTRL_FNG_BITMAP                                                              (0x00070000)
#define P_MUIF_CE_CTRL_NEXT_EQ_DRC_IDX                                                         (8)
#define L_MUIF_CE_CTRL_NEXT_EQ_DRC_IDX                                                         (4)
#define M_MUIF_CE_CTRL_NEXT_EQ_DRC_IDX                                                         (0x00000F00)
#define P_MUIF_CE_CTRL_CE_ENABLE                                                               (0)
#define L_MUIF_CE_CTRL_CE_ENABLE                                                               (1)
#define M_MUIF_CE_CTRL_CE_ENABLE                                                               (0x00000001)

// ---------- FNG_STATUS bit-field ----------
#define P_MUIF_FNG_STATUS_FNG2                                                                 (16)
#define L_MUIF_FNG_STATUS_FNG2                                                                 (2)
#define M_MUIF_FNG_STATUS_FNG2                                                                 (0x00030000)
#define P_MUIF_FNG_STATUS_FNG1                                                                 (8)
#define L_MUIF_FNG_STATUS_FNG1                                                                 (2)
#define M_MUIF_FNG_STATUS_FNG1                                                                 (0x00000300)
#define P_MUIF_FNG_STATUS_FNG0                                                                 (0)
#define L_MUIF_FNG_STATUS_FNG0                                                                 (2)
#define M_MUIF_FNG_STATUS_FNG0                                                                 (0x00000003)

// ---------- FNG_POWER bit-field ----------
#define P_MUIF_FNG_POWER_FILT_MIC_POWER                                                        (0)
#define L_MUIF_FNG_POWER_FILT_MIC_POWER                                                        (32)
#define M_MUIF_FNG_POWER_FILT_MIC_POWER                                                        (0xFFFFFFFF)

// ---------- FNG_ORDER bit-field ----------
#define P_MUIF_FNG_ORDER_FNG2_ORDER                                                            (16)
#define L_MUIF_FNG_ORDER_FNG2_ORDER                                                            (2)
#define M_MUIF_FNG_ORDER_FNG2_ORDER                                                            (0x00030000)
#define P_MUIF_FNG_ORDER_FNG1_ORDER                                                            (8)
#define L_MUIF_FNG_ORDER_FNG1_ORDER                                                            (2)
#define M_MUIF_FNG_ORDER_FNG1_ORDER                                                            (0x00000300)
#define P_MUIF_FNG_ORDER_FNG0_ORDER                                                            (0)
#define L_MUIF_FNG_ORDER_FNG0_ORDER                                                            (2)
#define M_MUIF_FNG_ORDER_FNG0_ORDER                                                            (0x00000003)

// ---------- FNG_DELAY bit-field ----------
#define P_MUIF_FNG_DELAY_FNG_OFFSET                                                            (0)
#define L_MUIF_FNG_DELAY_FNG_OFFSET                                                            (16)
#define M_MUIF_FNG_DELAY_FNG_OFFSET                                                            (0x0000FFFF)

// ---------- EQ_CTRL bit-field ----------
#define P_MUIF_EQ_CTRL_EQ_DRC_IDX                                                              (24)
#define L_MUIF_EQ_CTRL_EQ_DRC_IDX                                                              (4)
#define M_MUIF_EQ_CTRL_EQ_DRC_IDX                                                              (0x0F000000)
#define P_MUIF_EQ_CTRL_PREAMBLE_MAC_IDX                                                        (16)
#define L_MUIF_EQ_CTRL_PREAMBLE_MAC_IDX                                                        (8)
#define M_MUIF_EQ_CTRL_PREAMBLE_MAC_IDX                                                        (0x00FF0000)
#define P_MUIF_EQ_CTRL_PACKET_SLOT_COUNT                                                       (8)
#define L_MUIF_EQ_CTRL_PACKET_SLOT_COUNT                                                       (4)
#define M_MUIF_EQ_CTRL_PACKET_SLOT_COUNT                                                       (0x00000F00)
#define P_MUIF_EQ_CTRL_EQ_ENABLE                                                               (0)
#define L_MUIF_EQ_CTRL_EQ_ENABLE                                                               (1)
#define M_MUIF_EQ_CTRL_EQ_ENABLE                                                               (0x00000001)

// ---------- SLOT_BOUNDARY_POS bit-field ----------
#define P_MUIF_SLOT_BOUNDARY_POS_SLOT_BOUNDARY_POS                                             (0)
#define L_MUIF_SLOT_BOUNDARY_POS_SLOT_BOUNDARY_POS                                             (32)
#define M_MUIF_SLOT_BOUNDARY_POS_SLOT_BOUNDARY_POS                                             (0xFFFFFFFF)

// ---------- POST_SNR_DRC bit-field ----------
#define P_MUIF_POST_SNR_DRC_POST_SNR_DRC                                                       (0)
#define L_MUIF_POST_SNR_DRC_POST_SNR_DRC                                                       (16)
#define M_MUIF_POST_SNR_DRC_POST_SNR_DRC                                                       (0x0000FFFF)

// ---------- EQ_BYPASS_MODE_PARAM_0 bit-field ----------
#define P_MUIF_EQ_BYPASS_MODE_PARAM_0_FNG_WEIGHT_COEFF_R                                       (16)
#define L_MUIF_EQ_BYPASS_MODE_PARAM_0_FNG_WEIGHT_COEFF_R                                       (16)
#define M_MUIF_EQ_BYPASS_MODE_PARAM_0_FNG_WEIGHT_COEFF_R                                       (0xFFFF0000)
#define P_MUIF_EQ_BYPASS_MODE_PARAM_0_FNG_WEIGHT_COEFF_I                                       (0)
#define L_MUIF_EQ_BYPASS_MODE_PARAM_0_FNG_WEIGHT_COEFF_I                                       (16)
#define M_MUIF_EQ_BYPASS_MODE_PARAM_0_FNG_WEIGHT_COEFF_I                                       (0x0000FFFF)

// ---------- EQ_BYPASS_MODE_PARAM_1 bit-field ----------
#define P_MUIF_EQ_BYPASS_MODE_PARAM_1_POST_SNR                                                 (0)
#define L_MUIF_EQ_BYPASS_MODE_PARAM_1_POST_SNR                                                 (16)
#define M_MUIF_EQ_BYPASS_MODE_PARAM_1_POST_SNR                                                 (0x0000FFFF)

// ---------- CELL_SWITCH_INFO bit-field ----------
#define P_MUIF_CELL_SWITCH_INFO_CELL_SWITCH_EN                                                 (0)
#define L_MUIF_CELL_SWITCH_INFO_CELL_SWITCH_EN                                                 (1)
#define M_MUIF_CELL_SWITCH_INFO_CELL_SWITCH_EN                                                 (0x00000001)

#endif // __MUIF_H__
