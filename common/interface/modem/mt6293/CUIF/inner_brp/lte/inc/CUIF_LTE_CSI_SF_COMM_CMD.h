#ifndef __CUIF_LTE_CSI_SF_COMM_CMD_H__
#define __CUIF_LTE_CSI_SF_COMM_CMD_H__

// ----------------- CUIF_LTE_CSI_SF_COMM_CMD Register Definition -------------------
typedef volatile struct {
    kal_uint32 CSI_COMM_INFO;                                                             // 0x0000
    kal_uint32 CSI_COMM_INFO3;                                                            // 0x0004
} CUIF_LTE_CSI_SF_COMM_CMD_REGS, *PCUIF_LTE_CSI_SF_COMM_CMD_REGS;

// ---------- CUIF_LTE_CSI_SF_COMM_CMD word-offset  ----------
#define O_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO                                          (0)
#define O_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO3                                         (1)

// ---------- CSI_COMM_INFO bit-field ----------
#define P_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_IS_TEST_SIM                              (26)
#define L_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_IS_TEST_SIM                              (1)
#define M_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_IS_TEST_SIM                              (0x04000000)
#define P_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_TX_SFN                                   (16)
#define L_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_TX_SFN                                   (10)
#define M_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_TX_SFN                                   (0x03FF0000)
#define P_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_TX_SF_IDX                                (8)
#define L_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_TX_SF_IDX                                (4)
#define M_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_TX_SF_IDX                                (0x00000F00)
#define P_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_S_SIM_IND                                (2)
#define L_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_S_SIM_IND                                (2)
#define M_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_S_SIM_IND                                (0x0000000C)
#define P_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_CELL_TYPE                                (1)
#define L_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_CELL_TYPE                                (1)
#define M_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_CELL_TYPE                                (0x00000002)
#define P_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_IS_SRV                                   (0)
#define L_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_IS_SRV                                   (1)
#define M_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO_IS_SRV                                   (0x00000001)

// ---------- CSI_COMM_INFO3 bit-field ----------
#define P_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO3_ACSI_K_IDX                              (2)
#define L_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO3_ACSI_K_IDX                              (3)
#define M_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO3_ACSI_K_IDX                              (0x0000001C)
#define P_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO3_DCI0_FLAG                               (1)
#define L_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO3_DCI0_FLAG                               (1)
#define M_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO3_DCI0_FLAG                               (0x00000002)
#define P_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO3_ACSI_UPDATE_VLD                         (0)
#define L_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO3_ACSI_UPDATE_VLD                         (1)
#define M_CUIF_LTE_CSI_SF_COMM_CMD_CSI_COMM_INFO3_ACSI_UPDATE_VLD                         (0x00000001)

#endif // __CUIF_LTE_CSI_SF_COMM_CMD_H__
