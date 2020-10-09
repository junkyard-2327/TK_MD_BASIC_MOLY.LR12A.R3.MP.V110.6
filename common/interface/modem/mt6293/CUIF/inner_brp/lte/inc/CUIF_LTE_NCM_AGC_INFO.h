#ifndef __CUIF_LTE_NCM_AGC_INFO_H__
#define __CUIF_LTE_NCM_AGC_INFO_H__

// ----------------- CUIF_LTE_NCM_AGC_INFO Register Definition -------------------
typedef volatile struct {
    kal_uint32 AGC_INFO;                                                                  // 0x0000
} CUIF_LTE_NCM_AGC_INFO_REGS, *PCUIF_LTE_NCM_AGC_INFO_REGS;

// ---------- CUIF_LTE_NCM_AGC_INFO word-offset  ----------
#define O_CUIF_LTE_NCM_AGC_INFO_AGC_INFO                                                  (0)

// ---------- AGC_INFO bit-field ----------
#define P_CUIF_LTE_NCM_AGC_INFO_AGC_INFO_AGC_INI_GAIN_RX_MSK_CC1                          (16)
#define L_CUIF_LTE_NCM_AGC_INFO_AGC_INFO_AGC_INI_GAIN_RX_MSK_CC1                          (2)
#define M_CUIF_LTE_NCM_AGC_INFO_AGC_INFO_AGC_INI_GAIN_RX_MSK_CC1                          (0x00030000)
#define P_CUIF_LTE_NCM_AGC_INFO_AGC_INFO_AGC_INI_GAIN_RX_MSK_CC0                          (0)
#define L_CUIF_LTE_NCM_AGC_INFO_AGC_INFO_AGC_INI_GAIN_RX_MSK_CC0                          (2)
#define M_CUIF_LTE_NCM_AGC_INFO_AGC_INFO_AGC_INI_GAIN_RX_MSK_CC0                          (0x00000003)

#endif // __CUIF_LTE_NCM_AGC_INFO_H__
