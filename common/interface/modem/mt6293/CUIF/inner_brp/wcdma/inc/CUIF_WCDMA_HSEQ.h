#ifndef __CUIF_WCDMA_HSEQ_H__
#define __CUIF_WCDMA_HSEQ_H__

// ----------------- CUIF_WCDMA_HSEQ Register Definition -------------------
typedef volatile struct {
    kal_uint32 HSEQ_SETP;                                                                 // 0x0000
    kal_uint32 HSEQ_SCAN0;                                                                // 0x0004
    kal_uint32 HSEQ_DUALSC;                                                               // 0x0008
    kal_uint32 HSEQ_BYPASS;                                                               // 0x000C
} CUIF_WCDMA_HSEQ_REGS, *PCUIF_WCDMA_HSEQ_REGS;

// ---------- CUIF_WCDMA_HSEQ word-offset  ----------
#define O_CUIF_WCDMA_HSEQ_HSEQ_SETP                                                       (0)
#define O_CUIF_WCDMA_HSEQ_HSEQ_SCAN0                                                      (1)
#define O_CUIF_WCDMA_HSEQ_HSEQ_DUALSC                                                     (2)
#define O_CUIF_WCDMA_HSEQ_HSEQ_BYPASS                                                     (3)

// ---------- HSEQ_SETP bit-field ----------
#define P_CUIF_WCDMA_HSEQ_HSEQ_SETP_DYNAMIC_EN                                            (0)
#define L_CUIF_WCDMA_HSEQ_HSEQ_SETP_DYNAMIC_EN                                            (1)
#define M_CUIF_WCDMA_HSEQ_HSEQ_SETP_DYNAMIC_EN                                            (0x00000001)

// ---------- HSEQ_SCAN0 bit-field ----------
#define P_CUIF_WCDMA_HSEQ_HSEQ_SCAN0_SCH_CAN_EN                                           (0)
#define L_CUIF_WCDMA_HSEQ_HSEQ_SCAN0_SCH_CAN_EN                                           (1)
#define M_CUIF_WCDMA_HSEQ_HSEQ_SCAN0_SCH_CAN_EN                                           (0x00000001)

// ---------- HSEQ_DUALSC bit-field ----------
#define P_CUIF_WCDMA_HSEQ_HSEQ_DUALSC_DUAL_SC_EN                                          (0)
#define L_CUIF_WCDMA_HSEQ_HSEQ_DUALSC_DUAL_SC_EN                                          (1)
#define M_CUIF_WCDMA_HSEQ_HSEQ_DUALSC_DUAL_SC_EN                                          (0x00000001)

// ---------- HSEQ_BYPASS bit-field ----------
#define P_CUIF_WCDMA_HSEQ_HSEQ_BYPASS_BYPASS_EN                                           (0)
#define L_CUIF_WCDMA_HSEQ_HSEQ_BYPASS_BYPASS_EN                                           (1)
#define M_CUIF_WCDMA_HSEQ_HSEQ_BYPASS_BYPASS_EN                                           (0x00000001)

#endif // __CUIF_WCDMA_HSEQ_H__
