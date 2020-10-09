#ifndef __FDD_HSPA_RXBRP_E2B_INTERFACE_H__
#define __FDD_HSPA_RXBRP_E2B_INTERFACE_H__

// ----------------- FDD_HSPA_RXBRP_E2B_INTERFACE Register Definition -------------------
typedef volatile struct {
    kal_uint32 SUM_ABS_OR_HIT_SLOTm_HILO[3];                                              // 0x0000..0x0008
    kal_uint32 SUM_ABS2_OR_E2_SLOTm_HILO[3];                                              // 0x000C..0x0014
    kal_uint32 SUM_P2_BLKm_HILO[15];                                                      // 0x0018..0x0050
} FDD_HSPA_RXBRP_E2B_INTERFACE_REGS, *PFDD_HSPA_RXBRP_E2B_INTERFACE_REGS;

// ---------- FDD_HSPA_RXBRP_E2B_INTERFACE word-offset  ----------
#define O_FDD_HSPA_RXBRP_E2B_INTERFACE_SUM_ABS_OR_HIT_SLOTm_HILO(i)                       (0 + (i))
#define O_FDD_HSPA_RXBRP_E2B_INTERFACE_SUM_ABS2_OR_E2_SLOTm_HILO(i)                       (3 + (i))
#define O_FDD_HSPA_RXBRP_E2B_INTERFACE_SUM_P2_BLKm_HILO(i)                                (6 + (i))

// ---------- SUM_ABS_OR_HIT_SLOTm_HILO bit-field ----------
#define P_FDD_HSPA_RXBRP_E2B_INTERFACE_SUM_ABS_OR_HIT_SLOTm_HILO_SUM_ABS_OR_HIT_SLOTm_HILO (0)
#define L_FDD_HSPA_RXBRP_E2B_INTERFACE_SUM_ABS_OR_HIT_SLOTm_HILO_SUM_ABS_OR_HIT_SLOTm_HILO (20)
#define M_FDD_HSPA_RXBRP_E2B_INTERFACE_SUM_ABS_OR_HIT_SLOTm_HILO_SUM_ABS_OR_HIT_SLOTm_HILO (0x000FFFFF)

// ---------- SUM_ABS2_OR_E2_SLOTm_HILO bit-field ----------
#define P_FDD_HSPA_RXBRP_E2B_INTERFACE_SUM_ABS2_OR_E2_SLOTm_HILO_SUM_ABS2_OR_E2_SLOTm_HILO (0)
#define L_FDD_HSPA_RXBRP_E2B_INTERFACE_SUM_ABS2_OR_E2_SLOTm_HILO_SUM_ABS2_OR_E2_SLOTm_HILO (32)
#define M_FDD_HSPA_RXBRP_E2B_INTERFACE_SUM_ABS2_OR_E2_SLOTm_HILO_SUM_ABS2_OR_E2_SLOTm_HILO (0xFFFFFFFF)

// ---------- SUM_P2_BLKm_HILO bit-field ----------
#define P_FDD_HSPA_RXBRP_E2B_INTERFACE_SUM_P2_BLKm_HILO_SUM_P2_BLKm_HILO                  (0)
#define L_FDD_HSPA_RXBRP_E2B_INTERFACE_SUM_P2_BLKm_HILO_SUM_P2_BLKm_HILO                  (24)
#define M_FDD_HSPA_RXBRP_E2B_INTERFACE_SUM_P2_BLKm_HILO_SUM_P2_BLKm_HILO                  (0x00FFFFFF)

#endif // __FDD_HSPA_RXBRP_E2B_INTERFACE_H__
