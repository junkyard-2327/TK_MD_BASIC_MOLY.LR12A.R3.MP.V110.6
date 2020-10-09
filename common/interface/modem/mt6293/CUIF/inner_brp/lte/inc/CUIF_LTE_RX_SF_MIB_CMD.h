#ifndef __CUIF_LTE_RX_SF_MIB_CMD_H__
#define __CUIF_LTE_RX_SF_MIB_CMD_H__

// ----------------- CUIF_LTE_RX_SF_MIB_CMD Register Definition -------------------
typedef volatile struct {
    kal_uint32 MIB_INFO0;                                                                 // 0x0000
    kal_uint32 MIB_INFO1;                                                                 // 0x0004
    kal_uint32 MIB_INFO2;                                                                 // 0x0008
} CUIF_LTE_RX_SF_MIB_CMD_REGS, *PCUIF_LTE_RX_SF_MIB_CMD_REGS;

// ---------- CUIF_LTE_RX_SF_MIB_CMD word-offset  ----------
#define O_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0                                                (0)
#define O_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1                                                (1)
#define O_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO2                                                (2)

// ---------- MIB_INFO0 bit-field ----------
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_DL_BW                                          (29)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_DL_BW                                          (3)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_DL_BW                                          (0xE0000000)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PHICH_DU                                       (28)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PHICH_DU                                       (1)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PHICH_DU                                       (0x10000000)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PHICH_NG                                       (26)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PHICH_NG                                       (2)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PHICH_NG                                       (0x0C000000)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PBCH_KN_SFN_MSB                                (18)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PBCH_KN_SFN_MSB                                (8)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PBCH_KN_SFN_MSB                                (0x03FC0000)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_TTI_DIFF_OR_SFN_LSB                            (16)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_TTI_DIFF_OR_SFN_LSB                            (2)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_TTI_DIFF_OR_SFN_LSB                            (0x00030000)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PBCH_PCI                                       (7)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PBCH_PCI                                       (9)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PBCH_PCI                                       (0x0000FF80)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_CP_TYPE                                        (6)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_CP_TYPE                                        (1)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_CP_TYPE                                        (0x00000040)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_ANT_P_MSK                                      (3)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_ANT_P_MSK                                      (3)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_ANT_P_MSK                                      (0x00000038)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_DL_BW_KN                                       (2)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_DL_BW_KN                                       (1)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_DL_BW_KN                                       (0x00000004)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PHICH_PAR_KN                                   (1)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PHICH_PAR_KN                                   (1)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_PHICH_PAR_KN                                   (0x00000002)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_SFN_KN                                         (0)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_SFN_KN                                         (1)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO0_SFN_KN                                         (0x00000001)

// ---------- MIB_INFO1 bit-field ----------
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_INPUT_BUF_IDX_4TX                              (12)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_INPUT_BUF_IDX_4TX                              (3)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_INPUT_BUF_IDX_4TX                              (0x00007000)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_INPUT_BUF_IDX_2TX                              (9)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_INPUT_BUF_IDX_2TX                              (3)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_INPUT_BUF_IDX_2TX                              (0x00000E00)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_INPUT_BUF_IDX_1TX                              (6)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_INPUT_BUF_IDX_1TX                              (3)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_INPUT_BUF_IDX_1TX                              (0x000001C0)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_COMBINE_BUF_IDX                                (2)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_COMBINE_BUF_IDX                                (4)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_COMBINE_BUF_IDX                                (0x0000003C)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_NDI                                            (1)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_NDI                                            (1)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_NDI                                            (0x00000002)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_MIB_EN                                         (0)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_MIB_EN                                         (1)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO1_MIB_EN                                         (0x00000001)

// ---------- MIB_INFO2 bit-field ----------
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO2_MIB_SPARE_KNOWN_BIT_VAL                        (10)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO2_MIB_SPARE_KNOWN_BIT_VAL                        (10)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO2_MIB_SPARE_KNOWN_BIT_VAL                        (0x000FFC00)
#define P_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO2_MIB_SPARE_KNOWN_BIT_EN                         (0)
#define L_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO2_MIB_SPARE_KNOWN_BIT_EN                         (10)
#define M_CUIF_LTE_RX_SF_MIB_CMD_MIB_INFO2_MIB_SPARE_KNOWN_BIT_EN                         (0x000003FF)

#endif // __CUIF_LTE_RX_SF_MIB_CMD_H__
