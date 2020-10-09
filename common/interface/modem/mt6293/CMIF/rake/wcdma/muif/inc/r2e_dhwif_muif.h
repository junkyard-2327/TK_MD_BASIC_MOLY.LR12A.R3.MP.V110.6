#ifndef __R2E_DHWIF_H__
#define __R2E_DHWIF_H__

// ----------------- R2E_DHWIF Register Definition -------------------
typedef volatile struct {
    kal_uint32 E2R_CPICH_SIR[2];                                                          // 0x0000..0x0004
    kal_uint32 E2R_CPICH_SIR_RDY[2];                                                      // 0x0008..0x000C
    kal_uint32 E2R_CPICH_SIR_LMS_ON[2];                                                   // 0x0010..0x0014
    kal_uint32 R2E_FOE[2];                                                                // 0x0018..0x001C
    kal_uint32 R2E_W2;                                                                    // 0x0020
} R2E_DHWIF_REGS, *PR2E_DHWIF_REGS;

// ---------- R2E_DHWIF word-offset  ----------
#define O_R2E_DHWIF_E2R_CPICH_SIR(i)                                                      (0 + (i))
#define O_R2E_DHWIF_E2R_CPICH_SIR_RDY(i)                                                  (2 + (i))
#define O_R2E_DHWIF_E2R_CPICH_SIR_LMS_ON(i)                                               (4 + (i))
#define O_R2E_DHWIF_R2E_FOE(i)                                                            (6 + (i))
#define O_R2E_DHWIF_R2E_W2                                                                (8)

// ---------- E2R_CPICH_SIR bit-field ----------
#define P_R2E_DHWIF_E2R_CPICH_SIR_CPICH_SIR                                               (0)
#define L_R2E_DHWIF_E2R_CPICH_SIR_CPICH_SIR                                               (32)
#define M_R2E_DHWIF_E2R_CPICH_SIR_CPICH_SIR                                               (0xFFFFFFFF)

// ---------- E2R_CPICH_SIR_RDY bit-field ----------
#define P_R2E_DHWIF_E2R_CPICH_SIR_RDY_CPICH_SIR_RDY                                       (0)
#define L_R2E_DHWIF_E2R_CPICH_SIR_RDY_CPICH_SIR_RDY                                       (1)
#define M_R2E_DHWIF_E2R_CPICH_SIR_RDY_CPICH_SIR_RDY                                       (0x00000001)

// ---------- E2R_CPICH_SIR_LMS_ON bit-field ----------
#define P_R2E_DHWIF_E2R_CPICH_SIR_LMS_ON_CPICH_SIR_LMS_ON                                 (0)
#define L_R2E_DHWIF_E2R_CPICH_SIR_LMS_ON_CPICH_SIR_LMS_ON                                 (1)
#define M_R2E_DHWIF_E2R_CPICH_SIR_LMS_ON_CPICH_SIR_LMS_ON                                 (0x00000001)

// ---------- R2E_FOE bit-field ----------
#define P_R2E_DHWIF_R2E_FOE_FOE_BUSY                                                      (31)
#define L_R2E_DHWIF_R2E_FOE_FOE_BUSY                                                      (1)
#define M_R2E_DHWIF_R2E_FOE_FOE_BUSY                                                      (0x80000000)
#define P_R2E_DHWIF_R2E_FOE_FOE                                                           (0)
#define L_R2E_DHWIF_R2E_FOE_FOE                                                           (16)
#define M_R2E_DHWIF_R2E_FOE_FOE                                                           (0x0000FFFF)

// ---------- R2E_W2 bit-field ----------
#define P_R2E_DHWIF_R2E_W2_W2_BUSY                                                        (31)
#define L_R2E_DHWIF_R2E_W2_W2_BUSY                                                        (1)
#define M_R2E_DHWIF_R2E_W2_W2_BUSY                                                        (0x80000000)
#define P_R2E_DHWIF_R2E_W2_W2                                                             (0)
#define L_R2E_DHWIF_R2E_W2_W2                                                             (2)
#define M_R2E_DHWIF_R2E_W2_W2                                                             (0x00000003)

#endif // __R2E_DHWIF_H__
