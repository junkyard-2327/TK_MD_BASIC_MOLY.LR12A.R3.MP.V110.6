#ifndef __CUIF_LTE_POS_RPT_H__
#define __CUIF_LTE_POS_RPT_H__

// ----------------- CUIF_LTE_POS_RPT Register Definition -------------------
typedef volatile struct {
    kal_uint32 POS_RPT_ID;                                                                // 0x0000
    kal_uint32 STRONG_PATH_TOA;                                                           // 0x0004
    kal_uint32 FIRST_PATH_TOA;                                                            // 0x0008
    kal_uint32 NOISE;                                                                     // 0x000C
    kal_uint32 PEAK_POWER;                                                                // 0x0010
} CUIF_LTE_POS_RPT_REGS, *PCUIF_LTE_POS_RPT_REGS;

// ---------- CUIF_LTE_POS_RPT word-offset  ----------
#define O_CUIF_LTE_POS_RPT_POS_RPT_ID                                                     (0)
#define O_CUIF_LTE_POS_RPT_STRONG_PATH_TOA                                                (1)
#define O_CUIF_LTE_POS_RPT_FIRST_PATH_TOA                                                 (2)
#define O_CUIF_LTE_POS_RPT_NOISE                                                          (3)
#define O_CUIF_LTE_POS_RPT_PEAK_POWER                                                     (4)

// ---------- POS_RPT_ID bit-field ----------
#define P_CUIF_LTE_POS_RPT_POS_RPT_ID_VAL_FLAG                                            (24)
#define L_CUIF_LTE_POS_RPT_POS_RPT_ID_VAL_FLAG                                            (1)
#define M_CUIF_LTE_POS_RPT_POS_RPT_ID_VAL_FLAG                                            (0x01000000)
#define P_CUIF_LTE_POS_RPT_POS_RPT_ID_POS_ENOUGH                                          (17)
#define L_CUIF_LTE_POS_RPT_POS_RPT_ID_POS_ENOUGH                                          (1)
#define M_CUIF_LTE_POS_RPT_POS_RPT_ID_POS_ENOUGH                                          (0x00020000)
#define P_CUIF_LTE_POS_RPT_POS_RPT_ID_CELL_DET_IND                                        (16)
#define L_CUIF_LTE_POS_RPT_POS_RPT_ID_CELL_DET_IND                                        (1)
#define M_CUIF_LTE_POS_RPT_POS_RPT_ID_CELL_DET_IND                                        (0x00010000)
#define P_CUIF_LTE_POS_RPT_POS_RPT_ID_NUM_MEA_SF                                          (8)
#define L_CUIF_LTE_POS_RPT_POS_RPT_ID_NUM_MEA_SF                                          (3)
#define M_CUIF_LTE_POS_RPT_POS_RPT_ID_NUM_MEA_SF                                          (0x00000700)
#define P_CUIF_LTE_POS_RPT_POS_RPT_ID_PCTIDX                                              (0)
#define L_CUIF_LTE_POS_RPT_POS_RPT_ID_PCTIDX                                              (7)
#define M_CUIF_LTE_POS_RPT_POS_RPT_ID_PCTIDX                                              (0x0000007F)

// ---------- STRONG_PATH_TOA bit-field ----------
#define P_CUIF_LTE_POS_RPT_STRONG_PATH_TOA_STRONG_PATH_TOA                                (0)
#define L_CUIF_LTE_POS_RPT_STRONG_PATH_TOA_STRONG_PATH_TOA                                (32)
#define M_CUIF_LTE_POS_RPT_STRONG_PATH_TOA_STRONG_PATH_TOA                                (0xFFFFFFFF)

// ---------- FIRST_PATH_TOA bit-field ----------
#define P_CUIF_LTE_POS_RPT_FIRST_PATH_TOA_FIRST_PATH_TOA                                  (0)
#define L_CUIF_LTE_POS_RPT_FIRST_PATH_TOA_FIRST_PATH_TOA                                  (32)
#define M_CUIF_LTE_POS_RPT_FIRST_PATH_TOA_FIRST_PATH_TOA                                  (0xFFFFFFFF)

// ---------- NOISE bit-field ----------
#define P_CUIF_LTE_POS_RPT_NOISE_NOISE_FLOOR                                              (0)
#define L_CUIF_LTE_POS_RPT_NOISE_NOISE_FLOOR                                              (32)
#define M_CUIF_LTE_POS_RPT_NOISE_NOISE_FLOOR                                              (0xFFFFFFFF)

// ---------- PEAK_POWER bit-field ----------
#define P_CUIF_LTE_POS_RPT_PEAK_POWER_STRONG_PATH_PEAK                                    (0)
#define L_CUIF_LTE_POS_RPT_PEAK_POWER_STRONG_PATH_PEAK                                    (32)
#define M_CUIF_LTE_POS_RPT_PEAK_POWER_STRONG_PATH_PEAK                                    (0xFFFFFFFF)

#endif // __CUIF_LTE_POS_RPT_H__
