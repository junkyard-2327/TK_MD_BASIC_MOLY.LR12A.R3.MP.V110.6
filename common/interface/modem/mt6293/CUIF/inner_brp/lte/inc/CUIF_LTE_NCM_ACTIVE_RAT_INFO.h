#ifndef __CUIF_LTE_NCM_ACTIVE_RAT_INFO_H__
#define __CUIF_LTE_NCM_ACTIVE_RAT_INFO_H__

// ----------------- CUIF_LTE_NCM_ACTIVE_RAT_INFO Register Definition -------------------
typedef volatile struct {
    kal_uint32 ACTIVE_RAT_INFO;                                                           // 0x0000
} CUIF_LTE_NCM_ACTIVE_RAT_INFO_REGS, *PCUIF_LTE_NCM_ACTIVE_RAT_INFO_REGS;

// ---------- CUIF_LTE_NCM_ACTIVE_RAT_INFO word-offset  ----------
#define O_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO                                    (0)

// ---------- ACTIVE_RAT_INFO bit-field ----------
#define P_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO_CM_MODE                            (31)
#define L_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO_CM_MODE                            (1)
#define M_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO_CM_MODE                            (0x80000000)
#define P_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO_LAST_OCCASION_EN                   (4)
#define L_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO_LAST_OCCASION_EN                   (1)
#define M_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO_LAST_OCCASION_EN                   (0x00000010)
#define P_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO_FIRST_OCCASION_EN                  (3)
#define L_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO_FIRST_OCCASION_EN                  (1)
#define M_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO_FIRST_OCCASION_EN                  (0x00000008)
#define P_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO_ACTIVE_RAT                         (0)
#define L_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO_ACTIVE_RAT                         (3)
#define M_CUIF_LTE_NCM_ACTIVE_RAT_INFO_ACTIVE_RAT_INFO_ACTIVE_RAT                         (0x00000007)

#endif // __CUIF_LTE_NCM_ACTIVE_RAT_INFO_H__
