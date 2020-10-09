#ifndef __CUIF_LTE_RX_BRP_COMM_RPT_H__
#define __CUIF_LTE_RX_BRP_COMM_RPT_H__

// ----------------- CUIF_LTE_RX_BRP_COMM_RPT Register Definition -------------------
typedef volatile struct {
    kal_uint32 CUIF_DCI_DL;                                                               // 0x0000
    kal_uint32 CUIF_DCI_UL;                                                               // 0x0004
    kal_uint32 CUIF_MIB_RESULT;                                                           // 0x0008
    kal_uint32 CUIF_PDSCH_REC_TIME;                                                       // 0x000C
    kal_uint32 CUIF_KNOWN_PDCCH_DATA0_FIELD;                                              // 0x0010
    kal_uint32 CUIF_KNOWN_PDCCH_DATA1_FIELD;                                              // 0x0014
} CUIF_LTE_RX_BRP_COMM_RPT_REGS, *PCUIF_LTE_RX_BRP_COMM_RPT_REGS;

// ---------- CUIF_LTE_RX_BRP_COMM_RPT word-offset  ----------
#define O_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL                                            (0)
#define O_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL                                            (1)
#define O_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT                                        (2)
#define O_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME                                    (3)
#define O_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_KNOWN_PDCCH_DATA0_FIELD                           (4)
#define O_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_KNOWN_PDCCH_DATA1_FIELD                           (5)

// ---------- CUIF_DCI_DL bit-field ----------
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL_SIM_IDX                                    (26)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL_SIM_IDX                                    (2)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL_SIM_IDX                                    (0x0C000000)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL_SFN                                        (16)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL_SFN                                        (10)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL_SFN                                        (0x03FF0000)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL_DCI_RPT_VALID                              (8)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL_DCI_RPT_VALID                              (1)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL_DCI_RPT_VALID                              (0x00000100)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL_SF                                         (0)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL_SF                                         (4)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_DL_SF                                         (0x0000000F)

// ---------- CUIF_DCI_UL bit-field ----------
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL_SIM_IDX                                    (26)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL_SIM_IDX                                    (2)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL_SIM_IDX                                    (0x0C000000)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL_SFN                                        (16)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL_SFN                                        (10)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL_SFN                                        (0x03FF0000)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL_DCI_RPT_VALID                              (8)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL_DCI_RPT_VALID                              (1)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL_DCI_RPT_VALID                              (0x00000100)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL_SF                                         (0)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL_SF                                         (4)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_DCI_UL_SF                                         (0x0000000F)

// ---------- CUIF_MIB_RESULT bit-field ----------
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_MIB_RPT_VALID                          (31)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_MIB_RPT_VALID                          (1)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_MIB_RPT_VALID                          (0x80000000)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_BIN_IND                                (26)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_BIN_IND                                (5)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_BIN_IND                                (0x7C000000)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_MIB_RX_SFN                             (16)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_MIB_RX_SFN                             (10)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_MIB_RX_SFN                             (0x03FF0000)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_PASSBIN_NUM                            (8)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_PASSBIN_NUM                            (5)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_PASSBIN_NUM                            (0x00001F00)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_SIM_IDX                                (4)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_SIM_IDX                                (2)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_SIM_IDX                                (0x00000030)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_MIB_RX_SF                              (0)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_MIB_RX_SF                              (4)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_MIB_RESULT_MIB_RX_SF                              (0x0000000F)

// ---------- CUIF_PDSCH_REC_TIME bit-field ----------
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME_SIM_IDX                            (26)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME_SIM_IDX                            (2)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME_SIM_IDX                            (0x0C000000)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME_SFN                                (16)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME_SFN                                (10)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME_SFN                                (0x03FF0000)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME_PDSCH_CRC_VALID                    (8)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME_PDSCH_CRC_VALID                    (1)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME_PDSCH_CRC_VALID                    (0x00000100)
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME_SF                                 (0)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME_SF                                 (4)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_PDSCH_REC_TIME_SF                                 (0x0000000F)

// ---------- CUIF_KNOWN_PDCCH_DATA0_FIELD bit-field ----------
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_KNOWN_PDCCH_DATA0_FIELD_BIT_FIELD                 (0)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_KNOWN_PDCCH_DATA0_FIELD_BIT_FIELD                 (32)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_KNOWN_PDCCH_DATA0_FIELD_BIT_FIELD                 (0xFFFFFFFF)

// ---------- CUIF_KNOWN_PDCCH_DATA1_FIELD bit-field ----------
#define P_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_KNOWN_PDCCH_DATA1_FIELD_BIT_FIELD                 (0)
#define L_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_KNOWN_PDCCH_DATA1_FIELD_BIT_FIELD                 (32)
#define M_CUIF_LTE_RX_BRP_COMM_RPT_CUIF_KNOWN_PDCCH_DATA1_FIELD_BIT_FIELD                 (0xFFFFFFFF)

#endif // __CUIF_LTE_RX_BRP_COMM_RPT_H__
