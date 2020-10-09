#ifndef __CUIF_LTE_RX_OC_RPT_H__
#define __CUIF_LTE_RX_OC_RPT_H__

// ----------------- CUIF_LTE_RX_OC_RPT Register Definition -------------------
typedef volatile struct {
    kal_uint32 AFC_RPT0;                                                                  // 0x0000
    kal_uint32 AFC_RPT1;                                                                  // 0x0004
} CUIF_LTE_RX_OC_RPT_REGS, *PCUIF_LTE_RX_OC_RPT_REGS;

// ---------- CUIF_LTE_RX_OC_RPT word-offset  ----------
#define O_CUIF_LTE_RX_OC_RPT_AFC_RPT0                                                     (0)
#define O_CUIF_LTE_RX_OC_RPT_AFC_RPT1                                                     (1)

// ---------- AFC_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_OC_RPT_AFC_RPT0_FE_RXNCO                                            (0)
#define L_CUIF_LTE_RX_OC_RPT_AFC_RPT0_FE_RXNCO                                            (32)
#define M_CUIF_LTE_RX_OC_RPT_AFC_RPT0_FE_RXNCO                                            (0xFFFFFFFF)

// ---------- AFC_RPT1 bit-field ----------
#define P_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OC_CC_IDX                                           (13)
#define L_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OC_CC_IDX                                           (1)
#define M_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OC_CC_IDX                                           (0x00002000)
#define P_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OC_CELL_ID                                          (3)
#define L_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OC_CELL_ID                                          (10)
#define M_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OC_CELL_ID                                          (0x00001FF8)
#define P_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OC_FRZ_FLAG                                         (2)
#define L_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OC_FRZ_FLAG                                         (1)
#define M_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OC_FRZ_FLAG                                         (0x00000004)
#define P_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OCAFC_RDY                                           (1)
#define L_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OCAFC_RDY                                           (1)
#define M_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OCAFC_RDY                                           (0x00000002)
#define P_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OC_AFC_EN                                           (0)
#define L_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OC_AFC_EN                                           (1)
#define M_CUIF_LTE_RX_OC_RPT_AFC_RPT1_OC_AFC_EN                                           (0x00000001)

#endif // __CUIF_LTE_RX_OC_RPT_H__
