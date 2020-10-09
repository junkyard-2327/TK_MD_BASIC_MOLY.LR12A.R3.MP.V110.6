#ifndef __CUIF_LTE_RX_STATIC_COMM_CMD_H__
#define __CUIF_LTE_RX_STATIC_COMM_CMD_H__

// ----------------- CUIF_LTE_RX_STATIC_COMM_CMD Register Definition -------------------
typedef volatile struct {
    kal_uint32 RSTR_PAT0;                                                                 // 0x0000
    kal_uint32 RSTR_PAT1;                                                                 // 0x0004
    kal_uint32 RSTR_PAT2;                                                                 // 0x0008
    kal_uint32 DEMOD_ORDER;                                                               // 0x000C
    kal_uint32 BRP_INFO0;                                                                 // 0x0010
    kal_uint32 KNOWN_PDCCH_SET0_FIELD;                                                    // 0x0014
    kal_uint32 KNOWN_PDCCH_SET0_EN;                                                       // 0x0018
    kal_uint32 KNOWN_PDCCH_SET1_FIELD;                                                    // 0x001C
    kal_uint32 KNOWN_PDCCH_SET1_EN;                                                       // 0x0020
    kal_uint32 HARQ_INF1;                                                                 // 0x0024
    kal_uint32 SPS_INFO;                                                                  // 0x0028
    kal_uint32 TPC_RNTI;                                                                  // 0x002C
    kal_uint32 TPC_INFO;                                                                  // 0x0030
    kal_uint32 BRP_RESERVED_0;                                                            // 0x0034
    kal_uint32 BRP_RESERVED_1;                                                            // 0x0038
    kal_uint32 FACTORY_MODE_INFO;                                                         // 0x003C
} CUIF_LTE_RX_STATIC_COMM_CMD_REGS, *PCUIF_LTE_RX_STATIC_COMM_CMD_REGS;

// ---------- CUIF_LTE_RX_STATIC_COMM_CMD word-offset  ----------
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT0                                           (0)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT1                                           (1)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT2                                           (2)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_DEMOD_ORDER                                         (3)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0                                           (4)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET0_FIELD                              (5)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET0_EN                                 (6)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET1_FIELD                              (7)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET1_EN                                 (8)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_HARQ_INF1                                           (9)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO                                            (10)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_RNTI                                            (11)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_INFO                                            (12)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_RESERVED_0                                      (13)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_RESERVED_1                                      (14)
#define O_CUIF_LTE_RX_STATIC_COMM_CMD_FACTORY_MODE_INFO                                   (15)

// ---------- RSTR_PAT0 bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT0_PAT_0                                     (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT0_PAT_0                                     (32)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT0_PAT_0                                     (0xFFFFFFFF)

// ---------- RSTR_PAT1 bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT1_PAT_1                                     (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT1_PAT_1                                     (32)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT1_PAT_1                                     (0xFFFFFFFF)

// ---------- RSTR_PAT2 bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT2_PAT_VLD                                   (31)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT2_PAT_VLD                                   (1)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT2_PAT_VLD                                   (0x80000000)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT2_PAT_2                                     (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT2_PAT_2                                     (6)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_RSTR_PAT2_PAT_2                                     (0x0000003F)

// ---------- DEMOD_ORDER bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_DEMOD_ORDER_PDSCH_2ND_CC                            (4)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_DEMOD_ORDER_PDSCH_2ND_CC                            (4)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_DEMOD_ORDER_PDSCH_2ND_CC                            (0x000000F0)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_DEMOD_ORDER_PDSCH_1ST_CC                            (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_DEMOD_ORDER_PDSCH_1ST_CC                            (4)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_DEMOD_ORDER_PDSCH_1ST_CC                            (0x0000000F)

// ---------- BRP_INFO0 bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_MAX_UE_CAT                                (16)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_MAX_UE_CAT                                (5)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_MAX_UE_CAT                                (0x001F0000)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_PCC_TDD_UDC                               (13)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_PCC_TDD_UDC                               (3)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_PCC_TDD_UDC                               (0x0000E000)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_PCC_FRAME_STRUCT                          (12)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_PCC_FRAME_STRUCT                          (1)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_PCC_FRAME_STRUCT                          (0x00001000)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_DIS_CMCC_LUT_CR2CQI                       (11)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_DIS_CMCC_LUT_CR2CQI                       (1)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_DIS_CMCC_LUT_CR2CQI                       (0x00000800)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_KNOW_PDCCH_CC_IDX                         (8)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_KNOW_PDCCH_CC_IDX                         (3)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_KNOW_PDCCH_CC_IDX                         (0x00000700)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_KNOWN_DCI_FMT                             (2)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_KNOWN_DCI_FMT                             (6)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_KNOWN_DCI_FMT                             (0x000000FC)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_DL_HARQ_DISABLE                           (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_DL_HARQ_DISABLE                           (1)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_INFO0_DL_HARQ_DISABLE                           (0x00000001)

// ---------- KNOWN_PDCCH_SET0_FIELD bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET0_FIELD_BIT_FIELD                    (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET0_FIELD_BIT_FIELD                    (32)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET0_FIELD_BIT_FIELD                    (0xFFFFFFFF)

// ---------- KNOWN_PDCCH_SET0_EN bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET0_EN_BIT_KNOWN_EN                    (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET0_EN_BIT_KNOWN_EN                    (32)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET0_EN_BIT_KNOWN_EN                    (0xFFFFFFFF)

// ---------- KNOWN_PDCCH_SET1_FIELD bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET1_FIELD_BIT_FIELD                    (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET1_FIELD_BIT_FIELD                    (32)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET1_FIELD_BIT_FIELD                    (0xFFFFFFFF)

// ---------- KNOWN_PDCCH_SET1_EN bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET1_EN_BIT_KNOWN_EN                    (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET1_EN_BIT_KNOWN_EN                    (32)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_KNOWN_PDCCH_SET1_EN_BIT_KNOWN_EN                    (0xFFFFFFFF)

// ---------- HARQ_INF1 bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_HARQ_INF1_HARQ_BUF_EMI_WR_NUM                       (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_HARQ_INF1_HARQ_BUF_EMI_WR_NUM                       (15)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_HARQ_INF1_HARQ_BUF_EMI_WR_NUM                       (0x00007FFF)

// ---------- SPS_INFO bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO_SPS_C_RNTI                                 (16)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO_SPS_C_RNTI                                 (16)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO_SPS_C_RNTI                                 (0xFFFF0000)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO_DL_SPS_INTERVAL                            (6)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO_DL_SPS_INTERVAL                            (10)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO_DL_SPS_INTERVAL                            (0x0000FFC0)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO_DL_SPS_HARQ_NUM                            (2)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO_DL_SPS_HARQ_NUM                            (4)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO_DL_SPS_HARQ_NUM                            (0x0000003C)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO_DL_SPS_EN                                  (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO_DL_SPS_EN                                  (1)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_SPS_INFO_DL_SPS_EN                                  (0x00000001)

// ---------- TPC_RNTI bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_RNTI_TPC_SCH_RNTI                               (16)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_RNTI_TPC_SCH_RNTI                               (16)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_RNTI_TPC_SCH_RNTI                               (0xFFFF0000)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_RNTI_TPC_CCH_RNTI                               (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_RNTI_TPC_CCH_RNTI                               (16)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_RNTI_TPC_CCH_RNTI                               (0x0000FFFF)

// ---------- TPC_INFO bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_INFO_UL_SPS_EN                                  (4)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_INFO_UL_SPS_EN                                  (1)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_INFO_UL_SPS_EN                                  (0x00000010)
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_INFO_TTIBUNDLE                                  (3)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_INFO_TTIBUNDLE                                  (1)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_TPC_INFO_TTIBUNDLE                                  (0x00000008)

// ---------- BRP_RESERVED_0 bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_RESERVED_0_BRP_RESERVED                         (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_RESERVED_0_BRP_RESERVED                         (32)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_RESERVED_0_BRP_RESERVED                         (0xFFFFFFFF)

// ---------- BRP_RESERVED_1 bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_RESERVED_1_BRP_RESERVED                         (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_RESERVED_1_BRP_RESERVED                         (32)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_BRP_RESERVED_1_BRP_RESERVED                         (0xFFFFFFFF)

// ---------- FACTORY_MODE_INFO bit-field ----------
#define P_CUIF_LTE_RX_STATIC_COMM_CMD_FACTORY_MODE_INFO_RSRP_OS_FLAG                      (0)
#define L_CUIF_LTE_RX_STATIC_COMM_CMD_FACTORY_MODE_INFO_RSRP_OS_FLAG                      (1)
#define M_CUIF_LTE_RX_STATIC_COMM_CMD_FACTORY_MODE_INFO_RSRP_OS_FLAG                      (0x00000001)

#endif // __CUIF_LTE_RX_STATIC_COMM_CMD_H__
