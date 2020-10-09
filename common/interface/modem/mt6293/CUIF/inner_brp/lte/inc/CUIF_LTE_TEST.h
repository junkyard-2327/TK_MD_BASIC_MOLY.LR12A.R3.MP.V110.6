#ifndef __CUIF_LTE_TEST_H__
#define __CUIF_LTE_TEST_H__

// ----------------- CUIF_LTE_TEST Register Definition -------------------
typedef volatile struct {
    kal_uint32 CRSDET_BITMAP;                                                             // 0x0000
    kal_uint32 CC0_SD_SET;                                                                // 0x0004
    kal_uint32 CC1_SD_SET;                                                                // 0x0008
    kal_uint32 OC_SD_SET;                                                                 // 0x000C
    kal_uint32 MRS_SD_SET;                                                                // 0x0010
    kal_uint32 CC0_MRS_CIR_LEN;                                                           // 0x0014
    kal_uint32 CC1_MRS_CIR_LEN;                                                           // 0x0018
    kal_uint32 CC0_NE_FLAG;                                                               // 0x001C
    kal_uint32 CC1_NE_FLAG;                                                               // 0x0020
    kal_uint32 CC0_NE_SNR_RX0;                                                            // 0x0024
    kal_uint32 CC0_NE_SNR_RX1;                                                            // 0x0028
    kal_uint32 CC1_NE_SNR_RX0;                                                            // 0x002C
    kal_uint32 CC1_NE_SNR_RX1;                                                            // 0x0030
} CUIF_LTE_TEST_REGS, *PCUIF_LTE_TEST_REGS;

// ---------- CUIF_LTE_TEST word-offset  ----------
#define O_CUIF_LTE_TEST_CRSDET_BITMAP                                                     (0)
#define O_CUIF_LTE_TEST_CC0_SD_SET                                                        (1)
#define O_CUIF_LTE_TEST_CC1_SD_SET                                                        (2)
#define O_CUIF_LTE_TEST_OC_SD_SET                                                         (3)
#define O_CUIF_LTE_TEST_MRS_SD_SET                                                        (4)
#define O_CUIF_LTE_TEST_CC0_MRS_CIR_LEN                                                   (5)
#define O_CUIF_LTE_TEST_CC1_MRS_CIR_LEN                                                   (6)
#define O_CUIF_LTE_TEST_CC0_NE_FLAG                                                       (7)
#define O_CUIF_LTE_TEST_CC1_NE_FLAG                                                       (8)
#define O_CUIF_LTE_TEST_CC0_NE_SNR_RX0                                                    (9)
#define O_CUIF_LTE_TEST_CC0_NE_SNR_RX1                                                    (10)
#define O_CUIF_LTE_TEST_CC1_NE_SNR_RX0                                                    (11)
#define O_CUIF_LTE_TEST_CC1_NE_SNR_RX1                                                    (12)

// ---------- CRSDET_BITMAP bit-field ----------
#define P_CUIF_LTE_TEST_CRSDET_BITMAP_SF_NUM                                              (5)
#define L_CUIF_LTE_TEST_CRSDET_BITMAP_SF_NUM                                              (4)
#define M_CUIF_LTE_TEST_CRSDET_BITMAP_SF_NUM                                              (0x000001E0)
#define P_CUIF_LTE_TEST_CRSDET_BITMAP_OC0_RPT_VLD                                         (4)
#define L_CUIF_LTE_TEST_CRSDET_BITMAP_OC0_RPT_VLD                                         (1)
#define M_CUIF_LTE_TEST_CRSDET_BITMAP_OC0_RPT_VLD                                         (0x00000010)
#define P_CUIF_LTE_TEST_CRSDET_BITMAP_OC0_BITMAP                                          (0)
#define L_CUIF_LTE_TEST_CRSDET_BITMAP_OC0_BITMAP                                          (4)
#define M_CUIF_LTE_TEST_CRSDET_BITMAP_OC0_BITMAP                                          (0x0000000F)

// ---------- CC0_SD_SET bit-field ----------
#define P_CUIF_LTE_TEST_CC0_SD_SET_AP3_RX1                                                (28)
#define L_CUIF_LTE_TEST_CC0_SD_SET_AP3_RX1                                                (4)
#define M_CUIF_LTE_TEST_CC0_SD_SET_AP3_RX1                                                (0xF0000000)
#define P_CUIF_LTE_TEST_CC0_SD_SET_AP3_RX0                                                (24)
#define L_CUIF_LTE_TEST_CC0_SD_SET_AP3_RX0                                                (4)
#define M_CUIF_LTE_TEST_CC0_SD_SET_AP3_RX0                                                (0x0F000000)
#define P_CUIF_LTE_TEST_CC0_SD_SET_AP2_RX1                                                (20)
#define L_CUIF_LTE_TEST_CC0_SD_SET_AP2_RX1                                                (4)
#define M_CUIF_LTE_TEST_CC0_SD_SET_AP2_RX1                                                (0x00F00000)
#define P_CUIF_LTE_TEST_CC0_SD_SET_AP2_RX0                                                (16)
#define L_CUIF_LTE_TEST_CC0_SD_SET_AP2_RX0                                                (4)
#define M_CUIF_LTE_TEST_CC0_SD_SET_AP2_RX0                                                (0x000F0000)
#define P_CUIF_LTE_TEST_CC0_SD_SET_AP1_RX1                                                (12)
#define L_CUIF_LTE_TEST_CC0_SD_SET_AP1_RX1                                                (4)
#define M_CUIF_LTE_TEST_CC0_SD_SET_AP1_RX1                                                (0x0000F000)
#define P_CUIF_LTE_TEST_CC0_SD_SET_AP1_RX0                                                (8)
#define L_CUIF_LTE_TEST_CC0_SD_SET_AP1_RX0                                                (4)
#define M_CUIF_LTE_TEST_CC0_SD_SET_AP1_RX0                                                (0x00000F00)
#define P_CUIF_LTE_TEST_CC0_SD_SET_AP0_RX1                                                (4)
#define L_CUIF_LTE_TEST_CC0_SD_SET_AP0_RX1                                                (4)
#define M_CUIF_LTE_TEST_CC0_SD_SET_AP0_RX1                                                (0x000000F0)
#define P_CUIF_LTE_TEST_CC0_SD_SET_AP0_RX0                                                (0)
#define L_CUIF_LTE_TEST_CC0_SD_SET_AP0_RX0                                                (4)
#define M_CUIF_LTE_TEST_CC0_SD_SET_AP0_RX0                                                (0x0000000F)

// ---------- CC1_SD_SET bit-field ----------
#define P_CUIF_LTE_TEST_CC1_SD_SET_AP3_RX1                                                (28)
#define L_CUIF_LTE_TEST_CC1_SD_SET_AP3_RX1                                                (4)
#define M_CUIF_LTE_TEST_CC1_SD_SET_AP3_RX1                                                (0xF0000000)
#define P_CUIF_LTE_TEST_CC1_SD_SET_AP3_RX0                                                (24)
#define L_CUIF_LTE_TEST_CC1_SD_SET_AP3_RX0                                                (4)
#define M_CUIF_LTE_TEST_CC1_SD_SET_AP3_RX0                                                (0x0F000000)
#define P_CUIF_LTE_TEST_CC1_SD_SET_AP2_RX1                                                (20)
#define L_CUIF_LTE_TEST_CC1_SD_SET_AP2_RX1                                                (4)
#define M_CUIF_LTE_TEST_CC1_SD_SET_AP2_RX1                                                (0x00F00000)
#define P_CUIF_LTE_TEST_CC1_SD_SET_AP2_RX0                                                (16)
#define L_CUIF_LTE_TEST_CC1_SD_SET_AP2_RX0                                                (4)
#define M_CUIF_LTE_TEST_CC1_SD_SET_AP2_RX0                                                (0x000F0000)
#define P_CUIF_LTE_TEST_CC1_SD_SET_AP1_RX1                                                (12)
#define L_CUIF_LTE_TEST_CC1_SD_SET_AP1_RX1                                                (4)
#define M_CUIF_LTE_TEST_CC1_SD_SET_AP1_RX1                                                (0x0000F000)
#define P_CUIF_LTE_TEST_CC1_SD_SET_AP1_RX0                                                (8)
#define L_CUIF_LTE_TEST_CC1_SD_SET_AP1_RX0                                                (4)
#define M_CUIF_LTE_TEST_CC1_SD_SET_AP1_RX0                                                (0x00000F00)
#define P_CUIF_LTE_TEST_CC1_SD_SET_AP0_RX1                                                (4)
#define L_CUIF_LTE_TEST_CC1_SD_SET_AP0_RX1                                                (4)
#define M_CUIF_LTE_TEST_CC1_SD_SET_AP0_RX1                                                (0x000000F0)
#define P_CUIF_LTE_TEST_CC1_SD_SET_AP0_RX0                                                (0)
#define L_CUIF_LTE_TEST_CC1_SD_SET_AP0_RX0                                                (4)
#define M_CUIF_LTE_TEST_CC1_SD_SET_AP0_RX0                                                (0x0000000F)

// ---------- OC_SD_SET bit-field ----------
#define P_CUIF_LTE_TEST_OC_SD_SET_OC0_RX1                                                 (4)
#define L_CUIF_LTE_TEST_OC_SD_SET_OC0_RX1                                                 (4)
#define M_CUIF_LTE_TEST_OC_SD_SET_OC0_RX1                                                 (0x000000F0)
#define P_CUIF_LTE_TEST_OC_SD_SET_OC0_RX0                                                 (0)
#define L_CUIF_LTE_TEST_OC_SD_SET_OC0_RX0                                                 (4)
#define M_CUIF_LTE_TEST_OC_SD_SET_OC0_RX0                                                 (0x0000000F)

// ---------- MRS_SD_SET bit-field ----------
#define P_CUIF_LTE_TEST_MRS_SD_SET_CC1_RX1                                                (12)
#define L_CUIF_LTE_TEST_MRS_SD_SET_CC1_RX1                                                (4)
#define M_CUIF_LTE_TEST_MRS_SD_SET_CC1_RX1                                                (0x0000F000)
#define P_CUIF_LTE_TEST_MRS_SD_SET_CC1_RX0                                                (8)
#define L_CUIF_LTE_TEST_MRS_SD_SET_CC1_RX0                                                (4)
#define M_CUIF_LTE_TEST_MRS_SD_SET_CC1_RX0                                                (0x00000F00)
#define P_CUIF_LTE_TEST_MRS_SD_SET_CC0_RX1                                                (4)
#define L_CUIF_LTE_TEST_MRS_SD_SET_CC0_RX1                                                (4)
#define M_CUIF_LTE_TEST_MRS_SD_SET_CC0_RX1                                                (0x000000F0)
#define P_CUIF_LTE_TEST_MRS_SD_SET_CC0_RX0                                                (0)
#define L_CUIF_LTE_TEST_MRS_SD_SET_CC0_RX0                                                (4)
#define M_CUIF_LTE_TEST_MRS_SD_SET_CC0_RX0                                                (0x0000000F)

// ---------- CC0_MRS_CIR_LEN bit-field ----------
#define P_CUIF_LTE_TEST_CC0_MRS_CIR_LEN_CC0_RX1                                           (16)
#define L_CUIF_LTE_TEST_CC0_MRS_CIR_LEN_CC0_RX1                                           (16)
#define M_CUIF_LTE_TEST_CC0_MRS_CIR_LEN_CC0_RX1                                           (0xFFFF0000)
#define P_CUIF_LTE_TEST_CC0_MRS_CIR_LEN_CC0_RX0                                           (0)
#define L_CUIF_LTE_TEST_CC0_MRS_CIR_LEN_CC0_RX0                                           (16)
#define M_CUIF_LTE_TEST_CC0_MRS_CIR_LEN_CC0_RX0                                           (0x0000FFFF)

// ---------- CC1_MRS_CIR_LEN bit-field ----------
#define P_CUIF_LTE_TEST_CC1_MRS_CIR_LEN_CC1_RX1                                           (16)
#define L_CUIF_LTE_TEST_CC1_MRS_CIR_LEN_CC1_RX1                                           (16)
#define M_CUIF_LTE_TEST_CC1_MRS_CIR_LEN_CC1_RX1                                           (0xFFFF0000)
#define P_CUIF_LTE_TEST_CC1_MRS_CIR_LEN_CC1_RX0                                           (0)
#define L_CUIF_LTE_TEST_CC1_MRS_CIR_LEN_CC1_RX0                                           (16)
#define M_CUIF_LTE_TEST_CC1_MRS_CIR_LEN_CC1_RX0                                           (0x0000FFFF)

// ---------- CC0_NE_FLAG bit-field ----------
#define P_CUIF_LTE_TEST_CC0_NE_FLAG_SNR_RPT_VLD                                           (31)
#define L_CUIF_LTE_TEST_CC0_NE_FLAG_SNR_RPT_VLD                                           (1)
#define M_CUIF_LTE_TEST_CC0_NE_FLAG_SNR_RPT_VLD                                           (0x80000000)
#define P_CUIF_LTE_TEST_CC0_NE_FLAG_DATA_SCM_RPT_VLD                                      (28)
#define L_CUIF_LTE_TEST_CC0_NE_FLAG_DATA_SCM_RPT_VLD                                      (1)
#define M_CUIF_LTE_TEST_CC0_NE_FLAG_DATA_SCM_RPT_VLD                                      (0x10000000)
#define P_CUIF_LTE_TEST_CC0_NE_FLAG_DATA_OFF_DIAG_NULL                                    (20)
#define L_CUIF_LTE_TEST_CC0_NE_FLAG_DATA_OFF_DIAG_NULL                                    (8)
#define M_CUIF_LTE_TEST_CC0_NE_FLAG_DATA_OFF_DIAG_NULL                                    (0x0FF00000)
#define P_CUIF_LTE_TEST_CC0_NE_FLAG_DATA_WHITE_NOISE                                      (16)
#define L_CUIF_LTE_TEST_CC0_NE_FLAG_DATA_WHITE_NOISE                                      (1)
#define M_CUIF_LTE_TEST_CC0_NE_FLAG_DATA_WHITE_NOISE                                      (0x00010000)
#define P_CUIF_LTE_TEST_CC0_NE_FLAG_CTRL_SCM_RPT_VLD                                      (12)
#define L_CUIF_LTE_TEST_CC0_NE_FLAG_CTRL_SCM_RPT_VLD                                      (1)
#define M_CUIF_LTE_TEST_CC0_NE_FLAG_CTRL_SCM_RPT_VLD                                      (0x00001000)
#define P_CUIF_LTE_TEST_CC0_NE_FLAG_CTRL_OFF_DIAG_NULL                                    (4)
#define L_CUIF_LTE_TEST_CC0_NE_FLAG_CTRL_OFF_DIAG_NULL                                    (8)
#define M_CUIF_LTE_TEST_CC0_NE_FLAG_CTRL_OFF_DIAG_NULL                                    (0x00000FF0)
#define P_CUIF_LTE_TEST_CC0_NE_FLAG_CTRL_WHITE_NOISE                                      (0)
#define L_CUIF_LTE_TEST_CC0_NE_FLAG_CTRL_WHITE_NOISE                                      (1)
#define M_CUIF_LTE_TEST_CC0_NE_FLAG_CTRL_WHITE_NOISE                                      (0x00000001)

// ---------- CC1_NE_FLAG bit-field ----------
#define P_CUIF_LTE_TEST_CC1_NE_FLAG_SNR_RPT_VLD                                           (31)
#define L_CUIF_LTE_TEST_CC1_NE_FLAG_SNR_RPT_VLD                                           (1)
#define M_CUIF_LTE_TEST_CC1_NE_FLAG_SNR_RPT_VLD                                           (0x80000000)
#define P_CUIF_LTE_TEST_CC1_NE_FLAG_DATA_SCM_RPT_VLD                                      (28)
#define L_CUIF_LTE_TEST_CC1_NE_FLAG_DATA_SCM_RPT_VLD                                      (1)
#define M_CUIF_LTE_TEST_CC1_NE_FLAG_DATA_SCM_RPT_VLD                                      (0x10000000)
#define P_CUIF_LTE_TEST_CC1_NE_FLAG_DATA_OFF_DIAG_NULL                                    (20)
#define L_CUIF_LTE_TEST_CC1_NE_FLAG_DATA_OFF_DIAG_NULL                                    (8)
#define M_CUIF_LTE_TEST_CC1_NE_FLAG_DATA_OFF_DIAG_NULL                                    (0x0FF00000)
#define P_CUIF_LTE_TEST_CC1_NE_FLAG_DATA_WHITE_NOISE                                      (16)
#define L_CUIF_LTE_TEST_CC1_NE_FLAG_DATA_WHITE_NOISE                                      (1)
#define M_CUIF_LTE_TEST_CC1_NE_FLAG_DATA_WHITE_NOISE                                      (0x00010000)
#define P_CUIF_LTE_TEST_CC1_NE_FLAG_CTRL_SCM_RPT_VLD                                      (12)
#define L_CUIF_LTE_TEST_CC1_NE_FLAG_CTRL_SCM_RPT_VLD                                      (1)
#define M_CUIF_LTE_TEST_CC1_NE_FLAG_CTRL_SCM_RPT_VLD                                      (0x00001000)
#define P_CUIF_LTE_TEST_CC1_NE_FLAG_CTRL_OFF_DIAG_NULL                                    (4)
#define L_CUIF_LTE_TEST_CC1_NE_FLAG_CTRL_OFF_DIAG_NULL                                    (8)
#define M_CUIF_LTE_TEST_CC1_NE_FLAG_CTRL_OFF_DIAG_NULL                                    (0x00000FF0)
#define P_CUIF_LTE_TEST_CC1_NE_FLAG_CTRL_WHITE_NOISE                                      (0)
#define L_CUIF_LTE_TEST_CC1_NE_FLAG_CTRL_WHITE_NOISE                                      (1)
#define M_CUIF_LTE_TEST_CC1_NE_FLAG_CTRL_WHITE_NOISE                                      (0x00000001)

// ---------- CC0_NE_SNR_RX0 bit-field ----------
#define P_CUIF_LTE_TEST_CC0_NE_SNR_RX0_AR_SNR                                             (16)
#define L_CUIF_LTE_TEST_CC0_NE_SNR_RX0_AR_SNR                                             (16)
#define M_CUIF_LTE_TEST_CC0_NE_SNR_RX0_AR_SNR                                             (0xFFFF0000)
#define P_CUIF_LTE_TEST_CC0_NE_SNR_RX0_OS_SNR                                             (0)
#define L_CUIF_LTE_TEST_CC0_NE_SNR_RX0_OS_SNR                                             (16)
#define M_CUIF_LTE_TEST_CC0_NE_SNR_RX0_OS_SNR                                             (0x0000FFFF)

// ---------- CC0_NE_SNR_RX1 bit-field ----------
#define P_CUIF_LTE_TEST_CC0_NE_SNR_RX1_AR_SNR                                             (16)
#define L_CUIF_LTE_TEST_CC0_NE_SNR_RX1_AR_SNR                                             (16)
#define M_CUIF_LTE_TEST_CC0_NE_SNR_RX1_AR_SNR                                             (0xFFFF0000)
#define P_CUIF_LTE_TEST_CC0_NE_SNR_RX1_OS_SNR                                             (0)
#define L_CUIF_LTE_TEST_CC0_NE_SNR_RX1_OS_SNR                                             (16)
#define M_CUIF_LTE_TEST_CC0_NE_SNR_RX1_OS_SNR                                             (0x0000FFFF)

// ---------- CC1_NE_SNR_RX0 bit-field ----------
#define P_CUIF_LTE_TEST_CC1_NE_SNR_RX0_AR_SNR                                             (16)
#define L_CUIF_LTE_TEST_CC1_NE_SNR_RX0_AR_SNR                                             (16)
#define M_CUIF_LTE_TEST_CC1_NE_SNR_RX0_AR_SNR                                             (0xFFFF0000)
#define P_CUIF_LTE_TEST_CC1_NE_SNR_RX0_OS_SNR                                             (0)
#define L_CUIF_LTE_TEST_CC1_NE_SNR_RX0_OS_SNR                                             (16)
#define M_CUIF_LTE_TEST_CC1_NE_SNR_RX0_OS_SNR                                             (0x0000FFFF)

// ---------- CC1_NE_SNR_RX1 bit-field ----------
#define P_CUIF_LTE_TEST_CC1_NE_SNR_RX1_AR_SNR                                             (16)
#define L_CUIF_LTE_TEST_CC1_NE_SNR_RX1_AR_SNR                                             (16)
#define M_CUIF_LTE_TEST_CC1_NE_SNR_RX1_AR_SNR                                             (0xFFFF0000)
#define P_CUIF_LTE_TEST_CC1_NE_SNR_RX1_OS_SNR                                             (0)
#define L_CUIF_LTE_TEST_CC1_NE_SNR_RX1_OS_SNR                                             (16)
#define M_CUIF_LTE_TEST_CC1_NE_SNR_RX1_OS_SNR                                             (0x0000FFFF)

#endif // __CUIF_LTE_TEST_H__
