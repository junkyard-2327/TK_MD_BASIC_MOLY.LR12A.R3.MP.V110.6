#ifndef __CUIF_LTE_RX_STATIC_UL_CC_CMD_H__
#define __CUIF_LTE_RX_STATIC_UL_CC_CMD_H__

// ----------------- CUIF_LTE_RX_STATIC_UL_CC_CMD Register Definition -------------------
typedef volatile struct {
    kal_uint32 TPC_UL;                                                                    // 0x0000
} CUIF_LTE_RX_STATIC_UL_CC_CMD_REGS, *PCUIF_LTE_RX_STATIC_UL_CC_CMD_REGS;

// ---------- CUIF_LTE_RX_STATIC_UL_CC_CMD word-offset  ----------
#define O_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL                                             (0)

// ---------- TPC_UL bit-field ----------
#define P_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_PUSCH_HOPPING_OFFSET                        (20)
#define L_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_PUSCH_HOPPING_OFFSET                        (7)
#define M_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_PUSCH_HOPPING_OFFSET                        (0x07F00000)
#define P_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_N_SB                                        (17)
#define L_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_N_SB                                        (3)
#define M_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_N_SB                                        (0x000E0000)
#define P_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_UL_CELL_IDX                                 (15)
#define L_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_UL_CELL_IDX                                 (2)
#define M_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_UL_CELL_IDX                                 (0x00018000)
#define P_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_UE_TX_ANT_SELECT_EN                         (14)
#define L_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_UE_TX_ANT_SELECT_EN                         (1)
#define M_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_UE_TX_ANT_SELECT_EN                         (0x00004000)
#define P_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_SRS_REQ_EXIST_DCI0                          (13)
#define L_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_SRS_REQ_EXIST_DCI0                          (1)
#define M_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_SRS_REQ_EXIST_DCI0                          (0x00002000)
#define P_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_IS_CSI_REQ_2_BIT                            (12)
#define L_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_IS_CSI_REQ_2_BIT                            (1)
#define M_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_IS_CSI_REQ_2_BIT                            (0x00001000)
#define P_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_CCH_TPC_IND                                 (7)
#define L_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_CCH_TPC_IND                                 (5)
#define M_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_CCH_TPC_IND                                 (0x00000F80)
#define P_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_SCH_TPC_IND                                 (2)
#define L_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_SCH_TPC_IND                                 (5)
#define M_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_SCH_TPC_IND                                 (0x0000007C)
#define P_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_CCH_TPC_TYPE                                (1)
#define L_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_CCH_TPC_TYPE                                (1)
#define M_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_CCH_TPC_TYPE                                (0x00000002)
#define P_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_SCH_TPC_TYPE                                (0)
#define L_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_SCH_TPC_TYPE                                (1)
#define M_CUIF_LTE_RX_STATIC_UL_CC_CMD_TPC_UL_SCH_TPC_TYPE                                (0x00000001)

#endif // __CUIF_LTE_RX_STATIC_UL_CC_CMD_H__
