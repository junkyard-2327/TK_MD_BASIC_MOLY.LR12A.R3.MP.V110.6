#ifndef __CUIF_LTE_CTRLCH_CC_RPT_H__
#define __CUIF_LTE_CTRLCH_CC_RPT_H__

// ----------------- CUIF_LTE_CTRLCH_CC_RPT Register Definition -------------------
typedef volatile struct {
    kal_uint32 HICH_RES;                                                                  // 0x0000
} CUIF_LTE_CTRLCH_CC_RPT_REGS, *PCUIF_LTE_CTRLCH_CC_RPT_REGS;

// ---------- CUIF_LTE_CTRLCH_CC_RPT word-offset  ----------
#define O_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES                                                 (0)

// ---------- HICH_RES bit-field ----------
#define P_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_SIM_IDX                                         (30)
#define L_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_SIM_IDX                                         (2)
#define M_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_SIM_IDX                                         (0xC0000000)
#define P_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_RES_SFN                                         (20)
#define L_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_RES_SFN                                         (10)
#define M_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_RES_SFN                                         (0x3FF00000)
#define P_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_RES_SF                                          (16)
#define L_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_RES_SF                                          (4)
#define M_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_RES_SF                                          (0x000F0000)
#define P_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_PHICH1_RES                                      (8)
#define L_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_PHICH1_RES                                      (1)
#define M_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_PHICH1_RES                                      (0x00000100)
#define P_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_PHICH0_RES                                      (0)
#define L_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_PHICH0_RES                                      (1)
#define M_CUIF_LTE_CTRLCH_CC_RPT_HICH_RES_PHICH0_RES                                      (0x00000001)

#endif // __CUIF_LTE_CTRLCH_CC_RPT_H__
