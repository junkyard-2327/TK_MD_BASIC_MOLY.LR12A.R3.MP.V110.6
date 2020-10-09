#ifndef __CUIF_LTE_RX_SF_OC_CMD_H__
#define __CUIF_LTE_RX_SF_OC_CMD_H__

// ----------------- CUIF_LTE_RX_SF_OC_CMD Register Definition -------------------
typedef volatile struct {
    kal_uint32 OC_INFO0;                                                                  // 0x0000
    kal_uint32 OC_INFO1;                                                                  // 0x0004
    kal_uint32 OC_INFO2;                                                                  // 0x0008
    kal_uint32 MOD_EN;                                                                    // 0x000C
    kal_uint32 RST_SCENARIO;                                                              // 0x0010
    kal_uint32 DELTA_FREQ;                                                                // 0x0014
} CUIF_LTE_RX_SF_OC_CMD_REGS, *PCUIF_LTE_RX_SF_OC_CMD_REGS;

// ---------- CUIF_LTE_RX_SF_OC_CMD word-offset  ----------
#define O_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0                                                  (0)
#define O_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1                                                  (1)
#define O_CUIF_LTE_RX_SF_OC_CMD_OC_INFO2                                                  (2)
#define O_CUIF_LTE_RX_SF_OC_CMD_MOD_EN                                                    (3)
#define O_CUIF_LTE_RX_SF_OC_CMD_RST_SCENARIO                                              (4)
#define O_CUIF_LTE_RX_SF_OC_CMD_DELTA_FREQ                                                (5)

// ---------- OC_INFO0 bit-field ----------
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_OC_VLD                                           (31)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_OC_VLD                                           (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_OC_VLD                                           (0x80000000)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_MIB_KNOWN                                        (30)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_MIB_KNOWN                                        (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_MIB_KNOWN                                        (0x40000000)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_CC_IDX                                           (29)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_CC_IDX                                           (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_CC_IDX                                           (0x20000000)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_TDD_UDC                                          (26)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_TDD_UDC                                          (3)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_TDD_UDC                                          (0x1C000000)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_TDD_SSP                                          (22)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_TDD_SSP                                          (4)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_TDD_SSP                                          (0x03C00000)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_DL_BW                                            (15)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_DL_BW                                            (3)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_DL_BW                                            (0x00038000)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_TX_NUM                                           (13)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_TX_NUM                                           (2)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_TX_NUM                                           (0x00006000)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_SELECTED_RX                                      (12)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_SELECTED_RX                                      (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_SELECTED_RX                                      (0x00001000)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_MBSFN_TYPE                                       (10)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_MBSFN_TYPE                                       (2)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_MBSFN_TYPE                                       (0x00000C00)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_CELL_ID                                          (0)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_CELL_ID                                          (9)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO0_CELL_ID                                          (0x000001FF)

// ---------- OC_INFO1 bit-field ----------
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1_IC_LST_STATUS                                    (29)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1_IC_LST_STATUS                                    (3)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1_IC_LST_STATUS                                    (0xE0000000)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1_PBCH_IC_MODE                                     (27)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1_PBCH_IC_MODE                                     (2)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1_PBCH_IC_MODE                                     (0x18000000)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1_PBCH_BUF_IDX                                     (25)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1_PBCH_BUF_IDX                                     (2)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1_PBCH_BUF_IDX                                     (0x06000000)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1_MIB_INFO_REB                                     (0)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1_MIB_INFO_REB                                     (24)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO1_MIB_INFO_REB                                     (0x00FFFFFF)

// ---------- OC_INFO2 bit-field ----------
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO2_SYS_FRM_NUM                                      (22)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO2_SYS_FRM_NUM                                      (10)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO2_SYS_FRM_NUM                                      (0xFFC00000)
#define P_CUIF_LTE_RX_SF_OC_CMD_OC_INFO2_SNR                                              (0)
#define L_CUIF_LTE_RX_SF_OC_CMD_OC_INFO2_SNR                                              (16)
#define M_CUIF_LTE_RX_SF_OC_CMD_OC_INFO2_SNR                                              (0x0000FFFF)

// ---------- MOD_EN bit-field ----------
#define P_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_SD                                                 (7)
#define L_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_SD                                                 (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_SD                                                 (0x00000080)
#define P_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_FWS                                                (6)
#define L_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_FWS                                                (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_FWS                                                (0x00000040)
#define P_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_CE                                                 (4)
#define L_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_CE                                                 (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_CE                                                 (0x00000010)
#define P_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_IPD                                                (3)
#define L_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_IPD                                                (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_IPD                                                (0x00000008)
#define P_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_MD                                                 (2)
#define L_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_MD                                                 (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_MD                                                 (0x00000004)
#define P_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_CRS_DET                                            (1)
#define L_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_CRS_DET                                            (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_CRS_DET                                            (0x00000002)
#define P_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_RSFOE                                              (0)
#define L_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_RSFOE                                              (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_MOD_EN_RSFOE                                              (0x00000001)

// ---------- RST_SCENARIO bit-field ----------
#define P_CUIF_LTE_RX_SF_OC_CMD_RST_SCENARIO_UDC_SSP_CHANGE                               (4)
#define L_CUIF_LTE_RX_SF_OC_CMD_RST_SCENARIO_UDC_SSP_CHANGE                               (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_RST_SCENARIO_UDC_SSP_CHANGE                               (0x00000010)
#define P_CUIF_LTE_RX_SF_OC_CMD_RST_SCENARIO_MIB_CHANGE                                   (3)
#define L_CUIF_LTE_RX_SF_OC_CMD_RST_SCENARIO_MIB_CHANGE                                   (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_RST_SCENARIO_MIB_CHANGE                                   (0x00000008)
#define P_CUIF_LTE_RX_SF_OC_CMD_RST_SCENARIO_ANY2OC                                       (2)
#define L_CUIF_LTE_RX_SF_OC_CMD_RST_SCENARIO_ANY2OC                                       (1)
#define M_CUIF_LTE_RX_SF_OC_CMD_RST_SCENARIO_ANY2OC                                       (0x00000004)

// ---------- DELTA_FREQ bit-field ----------
#define P_CUIF_LTE_RX_SF_OC_CMD_DELTA_FREQ_OFFSET                                         (0)
#define L_CUIF_LTE_RX_SF_OC_CMD_DELTA_FREQ_OFFSET                                         (32)
#define M_CUIF_LTE_RX_SF_OC_CMD_DELTA_FREQ_OFFSET                                         (0xFFFFFFFF)

#endif // __CUIF_LTE_RX_SF_OC_CMD_H__
