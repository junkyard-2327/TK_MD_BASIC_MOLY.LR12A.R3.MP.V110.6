#ifndef __CUIF_LTE_CSI_SF_CC_CMD_H__
#define __CUIF_LTE_CSI_SF_CC_CMD_H__

// ----------------- CUIF_LTE_CSI_SF_CC_CMD Register Definition -------------------
typedef volatile struct {
    kal_uint32 CSI_CC_INFO0;                                                              // 0x0000
    kal_uint32 CSI_CC_INFO1;                                                              // 0x0004
    kal_uint32 CSI_CC_INFO2;                                                              // 0x0008
    kal_uint32 CSI_CC_INFO3;                                                              // 0x000C
    kal_uint32 CELL_INFO0;                                                                // 0x0010
    kal_uint32 RRC_INFO_0;                                                                // 0x0014
    kal_uint32 RRC_INFO_1;                                                                // 0x0018
    kal_uint32 CSI_PMI_INFO_0;                                                            // 0x001C
    kal_uint32 CSI_PMI_INFO_1;                                                            // 0x0020
    kal_uint32 CSI_PMI_INFO_2;                                                            // 0x0024
    kal_uint32 CSI_PMI_INFO_3;                                                            // 0x0028
    kal_uint32 CSI_PCSI_CMD;                                                              // 0x002C
} CUIF_LTE_CSI_SF_CC_CMD_REGS, *PCUIF_LTE_CSI_SF_CC_CMD_REGS;

// ---------- CUIF_LTE_CSI_SF_CC_CMD word-offset  ----------
#define O_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0                                             (0)
#define O_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1                                             (1)
#define O_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO2                                             (2)
#define O_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3                                             (3)
#define O_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0                                               (4)
#define O_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0                                               (5)
#define O_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1                                               (6)
#define O_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_0                                           (7)
#define O_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_1                                           (8)
#define O_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_2                                           (9)
#define O_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_3                                           (10)
#define O_CUIF_LTE_CSI_SF_CC_CMD_CSI_PCSI_CMD                                             (11)

// ---------- CSI_CC_INFO0 bit-field ----------
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_CC_VLD                                      (31)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_CC_VLD                                      (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_CC_VLD                                      (0x80000000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_CELL_IDX                                    (10)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_CELL_IDX                                    (3)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_CELL_IDX                                    (0x00001C00)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_IS_ALT_CQI_TABLE                            (9)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_IS_ALT_CQI_TABLE                            (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_IS_ALT_CQI_TABLE                            (0x00000200)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_CQI_UPPER_BOUND                             (5)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_CQI_UPPER_BOUND                             (4)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_CQI_UPPER_BOUND                             (0x000001E0)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_CQI_LOWER_BOUND                             (1)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_CQI_LOWER_BOUND                             (4)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_CQI_LOWER_BOUND                             (0x0000001E)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_FLAG_FORCE_R1                               (0)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_FLAG_FORCE_R1                               (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO0_FLAG_FORCE_R1                               (0x00000001)

// ---------- CSI_CC_INFO1 bit-field ----------
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_REPORT_TYPE_PTI_0                           (16)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_REPORT_TYPE_PTI_0                           (9)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_REPORT_TYPE_PTI_0                           (0x01FF0000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_REPORT_TYPE                                 (7)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_REPORT_TYPE                                 (9)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_REPORT_TYPE                                 (0x0000FF80)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_BP_IDX_J                                    (4)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_BP_IDX_J                                    (3)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_BP_IDX_J                                    (0x00000070)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_PCSI_MEAS_EN                                (3)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_PCSI_MEAS_EN                                (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_PCSI_MEAS_EN                                (0x00000008)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_PCSI_MEAS_SET                               (1)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_PCSI_MEAS_SET                               (2)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO1_PCSI_MEAS_SET                               (0x00000006)

// ---------- CSI_CC_INFO2 bit-field ----------
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO2_ACSI_REQ                                    (0)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO2_ACSI_REQ                                    (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO2_ACSI_REQ                                    (0x00000001)

// ---------- CSI_CC_INFO3 bit-field ----------
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3_FORCE_RANK_IDX                              (23)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3_FORCE_RANK_IDX                              (2)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3_FORCE_RANK_IDX                              (0x01800000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3_CQI_DELTA                                   (20)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3_CQI_DELTA                                   (3)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3_CQI_DELTA                                   (0x00700000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3_RI_CONFIGINDEX                              (10)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3_RI_CONFIGINDEX                              (10)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3_RI_CONFIGINDEX                              (0x000FFC00)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3_CQI_PMI_CONFIGINDEX                         (0)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3_CQI_PMI_CONFIGINDEX                         (10)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_CC_INFO3_CQI_PMI_CONFIGINDEX                         (0x000003FF)

// ---------- CELL_INFO0 bit-field ----------
#define P_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_CP_TYPE                                       (30)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_CP_TYPE                                       (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_CP_TYPE                                       (0x40000000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_DL_BW                                         (27)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_DL_BW                                         (3)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_DL_BW                                         (0x38000000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_TDD_UDC                                       (24)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_TDD_UDC                                       (3)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_TDD_UDC                                       (0x07000000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_TX_NUM                                        (22)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_TX_NUM                                        (2)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_TX_NUM                                        (0x00C00000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_FRAME_STRUCT                                  (21)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_FRAME_STRUCT                                  (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CELL_INFO0_FRAME_STRUCT                                  (0x00200000)

// ---------- RRC_INFO_0 bit-field ----------
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PA                                            (29)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PA                                            (3)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PA                                            (0xE0000000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PB                                            (27)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PB                                            (2)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PB                                            (0x18000000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PC                                            (22)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PC                                            (5)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PC                                            (0x07C00000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_EPRE_OFFSET                                   (19)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_EPRE_OFFSET                                   (3)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_EPRE_OFFSET                                   (0x00380000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_TM_MODE                                       (15)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_TM_MODE                                       (4)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_TM_MODE                                       (0x00078000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PMI_RI_REPORT                                 (14)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PMI_RI_REPORT                                 (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PMI_RI_REPORT                                 (0x00004000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_RRC_ACSI_VALID                                (13)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_RRC_ACSI_VALID                                (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_RRC_ACSI_VALID                                (0x00002000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PCSI_REPORT_MODE                              (9)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PCSI_REPORT_MODE                              (4)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_PCSI_REPORT_MODE                              (0x00001E00)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_ACSI_REPORT_MODE                              (5)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_ACSI_REPORT_MODE                              (4)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_ACSI_REPORT_MODE                              (0x000001E0)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_FLAG_CSI_SF_PATTERN_CFG_R12                   (4)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_FLAG_CSI_SF_PATTERN_CFG_R12                   (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_FLAG_CSI_SF_PATTERN_CFG_R12                   (0x00000010)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_FLAG_ALT_4TX_CB                               (3)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_FLAG_ALT_4TX_CB                               (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_FLAG_ALT_4TX_CB                               (0x00000008)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_ACSI_TRIGGER3_SF_SET                          (2)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_ACSI_TRIGGER3_SF_SET                          (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_ACSI_TRIGGER3_SF_SET                          (0x00000004)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_ACSI_TRIGGER2_SF_SET                          (1)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_ACSI_TRIGGER2_SF_SET                          (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_ACSI_TRIGGER2_SF_SET                          (0x00000002)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_ACSI_TRIGGER1_SF_SET                          (0)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_ACSI_TRIGGER1_SF_SET                          (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_0_ACSI_TRIGGER1_SF_SET                          (0x00000001)

// ---------- RRC_INFO_1 bit-field ----------
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_ACSI_TRIGGER3_CELL_SET_EN                     (24)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_ACSI_TRIGGER3_CELL_SET_EN                     (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_ACSI_TRIGGER3_CELL_SET_EN                     (0x01000000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_ACSI_TRIGGER2_CELL_SET_EN                     (23)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_ACSI_TRIGGER2_CELL_SET_EN                     (1)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_ACSI_TRIGGER2_CELL_SET_EN                     (0x00800000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_CSIRS_CONFIG                                  (18)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_CSIRS_CONFIG                                  (5)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_CSIRS_CONFIG                                  (0x007C0000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_CSIRS_TX_NUM                                  (16)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_CSIRS_TX_NUM                                  (2)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_CSIRS_TX_NUM                                  (0x00030000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_CSIRS_ZERO_POWER_BITMAP                       (0)
#define L_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_CSIRS_ZERO_POWER_BITMAP                       (16)
#define M_CUIF_LTE_CSI_SF_CC_CMD_RRC_INFO_1_CSIRS_ZERO_POWER_BITMAP                       (0x0000FFFF)

// ---------- CSI_PMI_INFO_0 bit-field ----------
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_0_PMI_MASK_1                                (0)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_0_PMI_MASK_1                                (32)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_0_PMI_MASK_1                                (0xFFFFFFFF)

// ---------- CSI_PMI_INFO_1 bit-field ----------
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_1_PMI_MASK_2                                (0)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_1_PMI_MASK_2                                (32)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_1_PMI_MASK_2                                (0xFFFFFFFF)

// ---------- CSI_PMI_INFO_2 bit-field ----------
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_2_PMI_MASK_3                                (0)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_2_PMI_MASK_3                                (32)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_2_PMI_MASK_3                                (0xFFFFFFFF)

// ---------- CSI_PMI_INFO_3 bit-field ----------
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_3_PMI_MASK_4                                (0)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_3_PMI_MASK_4                                (12)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_PMI_INFO_3_PMI_MASK_4                                (0x00000FFF)

// ---------- CSI_PCSI_CMD bit-field ----------
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_PCSI_CMD_PCSI_PERIOD_1                               (16)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_PCSI_CMD_PCSI_PERIOD_1                               (16)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_PCSI_CMD_PCSI_PERIOD_1                               (0xFFFF0000)
#define P_CUIF_LTE_CSI_SF_CC_CMD_CSI_PCSI_CMD_PCSI_PERIOD_0                               (0)
#define L_CUIF_LTE_CSI_SF_CC_CMD_CSI_PCSI_CMD_PCSI_PERIOD_0                               (16)
#define M_CUIF_LTE_CSI_SF_CC_CMD_CSI_PCSI_CMD_PCSI_PERIOD_0                               (0x0000FFFF)

#endif // __CUIF_LTE_CSI_SF_CC_CMD_H__
