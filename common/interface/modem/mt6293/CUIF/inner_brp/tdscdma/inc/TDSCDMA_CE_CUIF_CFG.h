#ifndef __TDSCDMA_CE_CUIF_CFG_H__
#define __TDSCDMA_CE_CUIF_CFG_H__

// ----------------- TDSCDMA_CE_CUIF_CFG Register Definition -------------------
typedef volatile struct {
    kal_uint32 TDDMAD_SFT_SEL;                                                            // 0x0020
    kal_uint32 TDDCEU_PS_CFG;                                                             // 0x0024
    kal_uint32 TDDCEU_SEL_MEAS_PATH;                                                      // 0x0028
    kal_uint32 TDDCEU_STR_CODE;                                                           // 0x002C
    kal_uint32 TDDCEU_FINE_TIMING_PEAKPOS;                                                // 0x0030
    kal_uint32 TDDCEU_POST_PROCESS;                                                       // 0x0034
    kal_uint32 TDDCEU_CELL0_CFG0;                                                         // 0x0038
    kal_uint32 TDDCEU_CELL0_CFG1;                                                         // 0x003C
    kal_uint32 TDDCEU_CELL0_PATH_POS;                                                     // 0x0040
    kal_uint32 TDDCEU_CELL1_CFG0;                                                         // 0x0044
    kal_uint32 TDDCEU_CELL1_CFG1;                                                         // 0x0048
    kal_uint32 TDDCEU_CELL1_PATH_POS;                                                     // 0x004C
    kal_uint32 TDDCEU_CELL2_CFG0;                                                         // 0x0050
    kal_uint32 TDDCEU_CELL2_CFG1;                                                         // 0x0054
    kal_uint32 TDDCEU_CELL2_PATH_POS;                                                     // 0x0058
    kal_uint32 TDDCEU_CELL3_CFG0;                                                         // 0x005C
    kal_uint32 TDDCEU_CELL3_CFG1;                                                         // 0x0060
    kal_uint32 TDDCEU_CELL3_PATH_POS;                                                     // 0x0064
    kal_uint32 TDDCEU_SW_PATH_SEL0;                                                       // 0x0068
    kal_uint32 TDDCEU_SW_PATH_SEL1;                                                       // 0x006C
    kal_uint32 TDDCEU_CFG0;                                                               // 0x0070
    kal_uint32 TDDCEU_CFG1;                                                               // 0x0074
    kal_uint32 CFG_RESV[6];                                                               // 0x0078..0x008C
} TDSCDMA_CE_CUIF_CFG_REGS, *PTDSCDMA_CE_CUIF_CFG_REGS;

// ---------- TDSCDMA_CE_CUIF_CFG word-offset  ----------
#define O_TDSCDMA_CE_CUIF_CFG_TDDMAD_SFT_SEL                                              (0)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_PS_CFG                                               (1)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_SEL_MEAS_PATH                                        (2)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_STR_CODE                                             (3)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_FINE_TIMING_PEAKPOS                                  (4)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_POST_PROCESS                                         (5)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0                                           (6)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1                                           (7)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_PATH_POS                                       (8)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0                                           (9)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG1                                           (10)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_PATH_POS                                       (11)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0                                           (12)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG1                                           (13)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_PATH_POS                                       (14)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0                                           (15)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG1                                           (16)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_PATH_POS                                       (17)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL0                                         (18)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1                                         (19)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0                                                 (20)
#define O_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG1                                                 (21)
#define O_TDSCDMA_CE_CUIF_CFG_CFG_RESV(i)                                                 (22 + (i))

// ---------- TDDMAD_SFT_SEL bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDMAD_SFT_SEL_MAD_MAXDP_WIN_SEL                            (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDMAD_SFT_SEL_MAD_MAXDP_WIN_SEL                            (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDMAD_SFT_SEL_MAD_MAXDP_WIN_SEL                            (0x0000FFFF)

// ---------- TDDCEU_PS_CFG bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_PS_CFG_OWN_MA_ALLOC                                  (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_PS_CFG_OWN_MA_ALLOC                                  (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_PS_CFG_OWN_MA_ALLOC                                  (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_PS_CFG_OWN_CODE_ALLOC                                (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_PS_CFG_OWN_CODE_ALLOC                                (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_PS_CFG_OWN_CODE_ALLOC                                (0x0000FFFF)

// ---------- TDDCEU_SEL_MEAS_PATH bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_SEL_MEAS_PATH_SW_SC_THM                              (1)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_SEL_MEAS_PATH_SW_SC_THM                              (7)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_SEL_MEAS_PATH_SW_SC_THM                              (0x000000FE)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_SEL_MEAS_PATH_MEAS_IND                               (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_SEL_MEAS_PATH_MEAS_IND                               (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_SEL_MEAS_PATH_MEAS_IND                               (0x00000001)

// ---------- TDDCEU_STR_CODE bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_STR_CODE_SIR2_STR_CODE                               (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_STR_CODE_SIR2_STR_CODE                               (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_STR_CODE_SIR2_STR_CODE                               (0xFFFF0000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_STR_CODE_SIR1_STR_CODE                               (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_STR_CODE_SIR1_STR_CODE                               (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_STR_CODE_SIR1_STR_CODE                               (0x0000FFFF)

// ---------- TDDCEU_FINE_TIMING_PEAKPOS bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_FINE_TIMING_PEAKPOS_FINE_TIMING_PEAKPOS              (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_FINE_TIMING_PEAKPOS_FINE_TIMING_PEAKPOS              (8)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_FINE_TIMING_PEAKPOS_FINE_TIMING_PEAKPOS              (0x000000FF)

// ---------- TDDCEU_POST_PROCESS bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_POST_PROCESS_IS_FIRST_NTS0                           (6)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_POST_PROCESS_IS_FIRST_NTS0                           (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_POST_PROCESS_IS_FIRST_NTS0                           (0x00000040)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_POST_PROCESS_INIT_FLAG_BMP                           (2)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_POST_PROCESS_INIT_FLAG_BMP                           (4)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_POST_PROCESS_INIT_FLAG_BMP                           (0x0000003C)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_POST_PROCESS_AVE_BUF_ID                              (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_POST_PROCESS_AVE_BUF_ID                              (2)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_POST_PROCESS_AVE_BUF_ID                              (0x00000003)

// ---------- TDDCEU_CELL0_CFG0 bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_MA_MODE                                   (28)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_MA_MODE                                   (2)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_MA_MODE                                   (0x30000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_CMA_SEL_ALL_CODE_MODE                     (27)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_CMA_SEL_ALL_CODE_MODE                     (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_CMA_SEL_ALL_CODE_MODE                     (0x08000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_SF_TYPE                                   (24)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_SF_TYPE                                   (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_SF_TYPE                                   (0x01000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_PATH_NUM                                  (20)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_PATH_NUM                                  (4)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_PATH_NUM                                  (0x00F00000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_KCELL                                     (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_KCELL                                     (4)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_KCELL                                     (0x000F0000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_AVE_NOISE                                 (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_AVE_NOISE                                 (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG0_AVE_NOISE                                 (0x0000FFFF)

// ---------- TDDCEU_CELL0_CFG1 bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1_PTHE_EX_MODE                              (31)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1_PTHE_EX_MODE                              (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1_PTHE_EX_MODE                              (0x80000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1_TIMING_OFFSET                             (24)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1_TIMING_OFFSET                             (7)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1_TIMING_OFFSET                             (0x7F000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1_BASIC_MA_ID                               (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1_BASIC_MA_ID                               (7)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1_BASIC_MA_ID                               (0x007F0000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1_ACTIVE_MA                                 (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1_ACTIVE_MA                                 (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_CFG1_ACTIVE_MA                                 (0x0000FFFF)

// ---------- TDDCEU_CELL0_PATH_POS bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_PATH_POS_PATH_POS                              (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_PATH_POS_PATH_POS                              (32)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL0_PATH_POS_PATH_POS                              (0xFFFFFFFF)

// ---------- TDDCEU_CELL1_CFG0 bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_MA_MODE                                   (28)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_MA_MODE                                   (2)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_MA_MODE                                   (0x30000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_SF_TYPE                                   (24)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_SF_TYPE                                   (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_SF_TYPE                                   (0x01000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_PATH_NUM                                  (20)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_PATH_NUM                                  (4)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_PATH_NUM                                  (0x00F00000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_KCELL                                     (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_KCELL                                     (4)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_KCELL                                     (0x000F0000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_AVE_NOISE                                 (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_AVE_NOISE                                 (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG0_AVE_NOISE                                 (0x0000FFFF)

// ---------- TDDCEU_CELL1_CFG1 bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG1_TIMING_OFFSET                             (24)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG1_TIMING_OFFSET                             (7)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG1_TIMING_OFFSET                             (0x7F000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG1_BASIC_MA_ID                               (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG1_BASIC_MA_ID                               (7)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG1_BASIC_MA_ID                               (0x007F0000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG1_ACTIVE_MA                                 (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG1_ACTIVE_MA                                 (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_CFG1_ACTIVE_MA                                 (0x0000FFFF)

// ---------- TDDCEU_CELL1_PATH_POS bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_PATH_POS_PATH_POS                              (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_PATH_POS_PATH_POS                              (32)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL1_PATH_POS_PATH_POS                              (0xFFFFFFFF)

// ---------- TDDCEU_CELL2_CFG0 bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_MA_MODE                                   (28)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_MA_MODE                                   (2)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_MA_MODE                                   (0x30000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_SF_TYPE                                   (24)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_SF_TYPE                                   (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_SF_TYPE                                   (0x01000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_PATH_NUM                                  (20)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_PATH_NUM                                  (4)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_PATH_NUM                                  (0x00F00000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_KCELL                                     (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_KCELL                                     (4)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_KCELL                                     (0x000F0000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_AVE_NOISE                                 (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_AVE_NOISE                                 (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG0_AVE_NOISE                                 (0x0000FFFF)

// ---------- TDDCEU_CELL2_CFG1 bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG1_TIMING_OFFSET                             (24)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG1_TIMING_OFFSET                             (7)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG1_TIMING_OFFSET                             (0x7F000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG1_BASIC_MA_ID                               (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG1_BASIC_MA_ID                               (7)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG1_BASIC_MA_ID                               (0x007F0000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG1_ACTIVE_MA                                 (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG1_ACTIVE_MA                                 (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_CFG1_ACTIVE_MA                                 (0x0000FFFF)

// ---------- TDDCEU_CELL2_PATH_POS bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_PATH_POS_PATH_POS                              (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_PATH_POS_PATH_POS                              (32)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL2_PATH_POS_PATH_POS                              (0xFFFFFFFF)

// ---------- TDDCEU_CELL3_CFG0 bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_MA_MODE                                   (28)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_MA_MODE                                   (2)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_MA_MODE                                   (0x30000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_SF_TYPE                                   (24)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_SF_TYPE                                   (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_SF_TYPE                                   (0x01000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_PATH_NUM                                  (20)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_PATH_NUM                                  (4)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_PATH_NUM                                  (0x00F00000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_KCELL                                     (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_KCELL                                     (4)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_KCELL                                     (0x000F0000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_AVE_NOISE                                 (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_AVE_NOISE                                 (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG0_AVE_NOISE                                 (0x0000FFFF)

// ---------- TDDCEU_CELL3_CFG1 bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG1_TIMING_OFFSET                             (24)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG1_TIMING_OFFSET                             (7)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG1_TIMING_OFFSET                             (0x7F000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG1_BASIC_MA_ID                               (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG1_BASIC_MA_ID                               (7)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG1_BASIC_MA_ID                               (0x007F0000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG1_ACTIVE_MA                                 (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG1_ACTIVE_MA                                 (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_CFG1_ACTIVE_MA                                 (0x0000FFFF)

// ---------- TDDCEU_CELL3_PATH_POS bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_PATH_POS_PATH_POS                              (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_PATH_POS_PATH_POS                              (32)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CELL3_PATH_POS_PATH_POS                              (0xFFFFFFFF)

// ---------- TDDCEU_SW_PATH_SEL0 bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL0_ADJ_LEN                                 (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL0_ADJ_LEN                                 (6)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL0_ADJ_LEN                                 (0x003F0000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL0_TTU_TRACK_CHIP_POS                      (10)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL0_TTU_TRACK_CHIP_POS                      (6)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL0_TTU_TRACK_CHIP_POS                      (0x0000FC00)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL0_FACTOR                                  (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL0_FACTOR                                  (10)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL0_FACTOR                                  (0x000003FF)

// ---------- TDDCEU_SW_PATH_SEL1 bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1_THN_NC                                  (23)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1_THN_NC                                  (9)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1_THN_NC                                  (0xFF800000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1_THM_NC                                  (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1_THM_NC                                  (7)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1_THM_NC                                  (0x007F0000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1_THN_SC                                  (7)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1_THN_SC                                  (9)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1_THN_SC                                  (0x0000FF80)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1_THM_SC                                  (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1_THM_SC                                  (7)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_SW_PATH_SEL1_THM_SC                                  (0x0000007F)

// ---------- TDDCEU_CFG0 bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_POW_SORT_EN                                     (27)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_POW_SORT_EN                                     (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_POW_SORT_EN                                     (0x08000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_THIRD_SIC_EN                                    (26)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_THIRD_SIC_EN                                    (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_THIRD_SIC_EN                                    (0x04000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_MIC_CAL_EN                                      (23)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_MIC_CAL_EN                                      (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_MIC_CAL_EN                                      (0x00800000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_AFC_SC_CFG                                      (22)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_AFC_SC_CFG                                      (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_AFC_SC_CFG                                      (0x00400000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_AFC_NC_CFG                                      (20)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_AFC_NC_CFG                                      (2)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_AFC_NC_CFG                                      (0x00300000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_OWNPS_MODE                                      (19)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_OWNPS_MODE                                      (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_OWNPS_MODE                                      (0x00080000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_SPUR_DET_EN                                     (18)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_SPUR_DET_EN                                     (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_SPUR_DET_EN                                     (0x00040000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_CELL_NUM                                        (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_CELL_NUM                                        (2)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_CELL_NUM                                        (0x00030000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_CELL_ORDER                                      (0)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_CELL_ORDER                                      (16)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG0_CELL_ORDER                                      (0x0000FFFF)

// ---------- TDDCEU_CFG1 bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG1_CMA_FALSE_ALARM_MA_ACT_EN                       (28)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG1_CMA_FALSE_ALARM_MA_ACT_EN                       (1)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG1_CMA_FALSE_ALARM_MA_ACT_EN                       (0x10000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG1_CMA_FALSE_ALARM_MA_ACT_IDX                      (24)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG1_CMA_FALSE_ALARM_MA_ACT_IDX                      (4)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG1_CMA_FALSE_ALARM_MA_ACT_IDX                      (0x0F000000)
#define P_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG1_THIRD_SIC_ORDER                                 (16)
#define L_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG1_THIRD_SIC_ORDER                                 (8)
#define M_TDSCDMA_CE_CUIF_CFG_TDDCEU_CFG1_THIRD_SIC_ORDER                                 (0x00FF0000)

// ---------- CFG_RESV bit-field ----------
#define P_TDSCDMA_CE_CUIF_CFG_CFG_RESV_RESV                                               (0)
#define L_TDSCDMA_CE_CUIF_CFG_CFG_RESV_RESV                                               (32)
#define M_TDSCDMA_CE_CUIF_CFG_CFG_RESV_RESV                                               (0xFFFFFFFF)

#endif // __TDSCDMA_CE_CUIF_CFG_H__
