#ifndef __CUIF_LTE_NCM_FDB_INFO_H__
#define __CUIF_LTE_NCM_FDB_INFO_H__

// ----------------- CUIF_LTE_NCM_FDB_INFO Register Definition -------------------
typedef volatile struct {
    kal_uint32 FDB_INFO;                                                                  // 0x0000
} CUIF_LTE_NCM_FDB_INFO_REGS, *PCUIF_LTE_NCM_FDB_INFO_REGS;

// ---------- CUIF_LTE_NCM_FDB_INFO word-offset  ----------
#define O_CUIF_LTE_NCM_FDB_INFO_FDB_INFO                                                  (0)

// ---------- FDB_INFO bit-field ----------
#define P_CUIF_LTE_NCM_FDB_INFO_FDB_INFO_CM_MODE                                          (31)
#define L_CUIF_LTE_NCM_FDB_INFO_FDB_INFO_CM_MODE                                          (1)
#define M_CUIF_LTE_NCM_FDB_INFO_FDB_INFO_CM_MODE                                          (0x80000000)
#define P_CUIF_LTE_NCM_FDB_INFO_FDB_INFO_MEAS_BW_CC1                                      (4)
#define L_CUIF_LTE_NCM_FDB_INFO_FDB_INFO_MEAS_BW_CC1                                      (3)
#define M_CUIF_LTE_NCM_FDB_INFO_FDB_INFO_MEAS_BW_CC1                                      (0x00000070)
#define P_CUIF_LTE_NCM_FDB_INFO_FDB_INFO_MEAS_BW_CC0                                      (0)
#define L_CUIF_LTE_NCM_FDB_INFO_FDB_INFO_MEAS_BW_CC0                                      (3)
#define M_CUIF_LTE_NCM_FDB_INFO_FDB_INFO_MEAS_BW_CC0                                      (0x00000007)

#endif // __CUIF_LTE_NCM_FDB_INFO_H__
