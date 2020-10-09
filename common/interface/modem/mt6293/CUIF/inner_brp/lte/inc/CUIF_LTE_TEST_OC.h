#ifndef __CUIF_LTE_TEST_OC_H__
#define __CUIF_LTE_TEST_OC_H__

// ----------------- CUIF_LTE_TEST_OC Register Definition -------------------
typedef volatile struct {
    kal_uint32 CRSDET_BITMAP;                                                             // 0x0000
    kal_uint32 SD_SET_IDX;                                                                // 0x0004
} CUIF_LTE_TEST_OC_REGS, *PCUIF_LTE_TEST_OC_REGS;

// ---------- CUIF_LTE_TEST_OC word-offset  ----------
#define O_CUIF_LTE_TEST_OC_CRSDET_BITMAP                                                  (0)
#define O_CUIF_LTE_TEST_OC_SD_SET_IDX                                                     (1)

// ---------- CRSDET_BITMAP bit-field ----------
#define P_CUIF_LTE_TEST_OC_CRSDET_BITMAP_SF_NUM                                           (5)
#define L_CUIF_LTE_TEST_OC_CRSDET_BITMAP_SF_NUM                                           (4)
#define M_CUIF_LTE_TEST_OC_CRSDET_BITMAP_SF_NUM                                           (0x000001E0)
#define P_CUIF_LTE_TEST_OC_CRSDET_BITMAP_RPT_VLD                                          (4)
#define L_CUIF_LTE_TEST_OC_CRSDET_BITMAP_RPT_VLD                                          (1)
#define M_CUIF_LTE_TEST_OC_CRSDET_BITMAP_RPT_VLD                                          (0x00000010)
#define P_CUIF_LTE_TEST_OC_CRSDET_BITMAP_BITMAP                                           (0)
#define L_CUIF_LTE_TEST_OC_CRSDET_BITMAP_BITMAP                                           (4)
#define M_CUIF_LTE_TEST_OC_CRSDET_BITMAP_BITMAP                                           (0x0000000F)

// ---------- SD_SET_IDX bit-field ----------
#define P_CUIF_LTE_TEST_OC_SD_SET_IDX_RX1                                                 (4)
#define L_CUIF_LTE_TEST_OC_SD_SET_IDX_RX1                                                 (4)
#define M_CUIF_LTE_TEST_OC_SD_SET_IDX_RX1                                                 (0x000000F0)
#define P_CUIF_LTE_TEST_OC_SD_SET_IDX_RX0                                                 (0)
#define L_CUIF_LTE_TEST_OC_SD_SET_IDX_RX0                                                 (4)
#define M_CUIF_LTE_TEST_OC_SD_SET_IDX_RX0                                                 (0x0000000F)

#endif // __CUIF_LTE_TEST_OC_H__
