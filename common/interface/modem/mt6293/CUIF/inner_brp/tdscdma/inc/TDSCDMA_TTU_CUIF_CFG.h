#ifndef __TDSCDMA_TTU_CUIF_CFG_H__
#define __TDSCDMA_TTU_CUIF_CFG_H__

// ----------------- TDSCDMA_TTU_CUIF_CFG Register Definition -------------------
typedef volatile struct {
    kal_uint32 TDDTTU_CFG0;                                                               // 0x0090
    kal_uint32 TDDTTU_CFG1;                                                               // 0x0094
    kal_uint32 TDDTTU2_CFG;                                                               // 0x0098
    kal_uint32 TDDTTU_CELL0_CFG0;                                                         // 0x009C
    kal_uint32 TDDTTU_CELL0_CFG1;                                                         // 0x00A0
    kal_uint32 TDDTTU_CELL0_PATH_POS0;                                                    // 0x00A4
    kal_uint32 TDDTTU_CELL0_PATH_POS1;                                                    // 0x00A8
    kal_uint32 TDDTTU_CELL1_CFG0;                                                         // 0x00AC
    kal_uint32 TDDTTU_CELL1_CFG1;                                                         // 0x00B0
    kal_uint32 TDDTTU_CELL1_PATH_POS0;                                                    // 0x00B4
    kal_uint32 TDDTTU_CELL1_PATH_POS1;                                                    // 0x00B8
    kal_uint32 TDDTTU_CELL2_CFG0;                                                         // 0x00BC
    kal_uint32 TDDTTU_CELL2_CFG1;                                                         // 0x00C0
    kal_uint32 TDDTTU_CELL2_PATH_POS0;                                                    // 0x00C4
    kal_uint32 TDDTTU_CELL2_PATH_POS1;                                                    // 0x00C8
    kal_uint32 TDDTTU_CELL3_CFG0;                                                         // 0x00CC
    kal_uint32 TDDTTU_CELL3_CFG1;                                                         // 0x00D0
    kal_uint32 TDDTTU_CELL3_PATH_POS0;                                                    // 0x00D4
    kal_uint32 TDDTTU_CELL3_PATH_POS1;                                                    // 0x00D8
    kal_uint32 CFG_RESV[5];                                                               // 0x00DC..0x00EC
} TDSCDMA_TTU_CUIF_CFG_REGS, *PTDSCDMA_TTU_CUIF_CFG_REGS;

// ---------- TDSCDMA_TTU_CUIF_CFG word-offset  ----------
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0                                                (0)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG1                                                (1)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG                                                (2)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG0                                          (3)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1                                          (4)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_PATH_POS0                                     (5)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_PATH_POS1                                     (6)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG0                                          (7)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1                                          (8)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_PATH_POS0                                     (9)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_PATH_POS1                                     (10)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG0                                          (11)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1                                          (12)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_PATH_POS0                                     (13)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_PATH_POS1                                     (14)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG0                                          (15)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1                                          (16)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_PATH_POS0                                     (17)
#define O_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_PATH_POS1                                     (18)
#define O_TDSCDMA_TTU_CUIF_CFG_CFG_RESV(i)                                                (19 + (i))

// ---------- TDDTTU_CFG0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_PATH_DETECT_ONLY_MODE                          (27)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_PATH_DETECT_ONLY_MODE                          (1)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_PATH_DETECT_ONLY_MODE                          (0x08000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_THIRD_SIC_EN                                   (26)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_THIRD_SIC_EN                                   (1)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_THIRD_SIC_EN                                   (0x04000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_AFC_SC_CFG                                     (22)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_AFC_SC_CFG                                     (1)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_AFC_SC_CFG                                     (0x00400000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_AFC_NC_CFG                                     (20)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_AFC_NC_CFG                                     (2)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_AFC_NC_CFG                                     (0x00300000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_CELL_NUM                                       (16)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_CELL_NUM                                       (2)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_CELL_NUM                                       (0x00030000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_CELL_ORDER                                     (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_CELL_ORDER                                     (16)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG0_CELL_ORDER                                     (0x0000FFFF)

// ---------- TDDTTU_CFG1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG1_THIRD_SIC_ORDER                                (16)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG1_THIRD_SIC_ORDER                                (8)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG1_THIRD_SIC_ORDER                                (0x00FF0000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG1_TTU1_ALPHA                                     (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG1_TTU1_ALPHA                                     (10)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CFG1_TTU1_ALPHA                                     (0x000003FF)

// ---------- TDDTTU2_CFG bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU2_ALPHA                                     (16)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU2_ALPHA                                     (10)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU2_ALPHA                                     (0x03FF0000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU2_PATH_DETECT_ONLY_MODE                     (6)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU2_PATH_DETECT_ONLY_MODE                     (1)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU2_PATH_DETECT_ONLY_MODE                     (0x00000040)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU2_CELL_RESET                                (2)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU2_CELL_RESET                                (4)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU2_CELL_RESET                                (0x0000003C)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU2_EN                                        (1)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU2_EN                                        (1)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU2_EN                                        (0x00000002)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU1_EN                                        (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU1_EN                                        (1)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU2_CFG_TTU1_EN                                        (0x00000001)

// ---------- TDDTTU_CELL0_CFG0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG0_TIMING_OFFSET                            (25)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG0_TIMING_OFFSET                            (6)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG0_TIMING_OFFSET                            (0x7E000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG0_SYNC_DL_ID                               (20)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG0_SYNC_DL_ID                               (5)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG0_SYNC_DL_ID                               (0x01F00000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG0_PATH_NUM                                 (16)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG0_PATH_NUM                                 (4)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG0_PATH_NUM                                 (0x000F0000)

// ---------- TDDTTU_CELL0_CFG1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1_CELL_RESET                               (30)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1_CELL_RESET                               (1)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1_CELL_RESET                               (0x40000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1_K_FACTOR                                 (24)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1_K_FACTOR                                 (6)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1_K_FACTOR                                 (0x3F000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1_TOFF                                     (16)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1_TOFF                                     (6)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1_TOFF                                     (0x003F0000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1_AVE_NOISE                                (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1_AVE_NOISE                                (16)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_CFG1_AVE_NOISE                                (0x0000FFFF)

// ---------- TDDTTU_CELL0_PATH_POS0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_PATH_POS0_PATH_POS                            (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_PATH_POS0_PATH_POS                            (32)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_PATH_POS0_PATH_POS                            (0xFFFFFFFF)

// ---------- TDDTTU_CELL0_PATH_POS1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_PATH_POS1_PATH_POS                            (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_PATH_POS1_PATH_POS                            (32)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL0_PATH_POS1_PATH_POS                            (0xFFFFFFFF)

// ---------- TDDTTU_CELL1_CFG0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG0_TIMING_OFFSET                            (25)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG0_TIMING_OFFSET                            (6)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG0_TIMING_OFFSET                            (0x7E000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG0_SYNC_DL_ID                               (20)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG0_SYNC_DL_ID                               (5)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG0_SYNC_DL_ID                               (0x01F00000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG0_PATH_NUM                                 (16)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG0_PATH_NUM                                 (4)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG0_PATH_NUM                                 (0x000F0000)

// ---------- TDDTTU_CELL1_CFG1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1_CELL_RESET                               (30)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1_CELL_RESET                               (1)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1_CELL_RESET                               (0x40000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1_K_FACTOR                                 (24)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1_K_FACTOR                                 (6)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1_K_FACTOR                                 (0x3F000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1_TOFF                                     (16)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1_TOFF                                     (6)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1_TOFF                                     (0x003F0000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1_AVE_NOISE                                (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1_AVE_NOISE                                (16)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_CFG1_AVE_NOISE                                (0x0000FFFF)

// ---------- TDDTTU_CELL1_PATH_POS0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_PATH_POS0_PATH_POS                            (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_PATH_POS0_PATH_POS                            (32)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_PATH_POS0_PATH_POS                            (0xFFFFFFFF)

// ---------- TDDTTU_CELL1_PATH_POS1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_PATH_POS1_PATH_POS                            (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_PATH_POS1_PATH_POS                            (32)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL1_PATH_POS1_PATH_POS                            (0xFFFFFFFF)

// ---------- TDDTTU_CELL2_CFG0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG0_TIMING_OFFSET                            (25)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG0_TIMING_OFFSET                            (6)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG0_TIMING_OFFSET                            (0x7E000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG0_SYNC_DL_ID                               (20)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG0_SYNC_DL_ID                               (5)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG0_SYNC_DL_ID                               (0x01F00000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG0_PATH_NUM                                 (16)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG0_PATH_NUM                                 (4)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG0_PATH_NUM                                 (0x000F0000)

// ---------- TDDTTU_CELL2_CFG1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1_CELL_RESET                               (30)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1_CELL_RESET                               (1)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1_CELL_RESET                               (0x40000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1_K_FACTOR                                 (24)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1_K_FACTOR                                 (6)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1_K_FACTOR                                 (0x3F000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1_TOFF                                     (16)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1_TOFF                                     (6)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1_TOFF                                     (0x003F0000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1_AVE_NOISE                                (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1_AVE_NOISE                                (16)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_CFG1_AVE_NOISE                                (0x0000FFFF)

// ---------- TDDTTU_CELL2_PATH_POS0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_PATH_POS0_PATH_POS                            (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_PATH_POS0_PATH_POS                            (32)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_PATH_POS0_PATH_POS                            (0xFFFFFFFF)

// ---------- TDDTTU_CELL2_PATH_POS1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_PATH_POS1_PATH_POS                            (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_PATH_POS1_PATH_POS                            (32)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL2_PATH_POS1_PATH_POS                            (0xFFFFFFFF)

// ---------- TDDTTU_CELL3_CFG0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG0_TIMING_OFFSET                            (25)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG0_TIMING_OFFSET                            (6)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG0_TIMING_OFFSET                            (0x7E000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG0_SYNC_DL_ID                               (20)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG0_SYNC_DL_ID                               (5)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG0_SYNC_DL_ID                               (0x01F00000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG0_PATH_NUM                                 (16)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG0_PATH_NUM                                 (4)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG0_PATH_NUM                                 (0x000F0000)

// ---------- TDDTTU_CELL3_CFG1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1_CELL_RESET                               (30)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1_CELL_RESET                               (1)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1_CELL_RESET                               (0x40000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1_K_FACTOR                                 (24)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1_K_FACTOR                                 (6)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1_K_FACTOR                                 (0x3F000000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1_TOFF                                     (16)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1_TOFF                                     (6)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1_TOFF                                     (0x003F0000)
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1_AVE_NOISE                                (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1_AVE_NOISE                                (16)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_CFG1_AVE_NOISE                                (0x0000FFFF)

// ---------- TDDTTU_CELL3_PATH_POS0 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_PATH_POS0_PATH_POS                            (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_PATH_POS0_PATH_POS                            (32)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_PATH_POS0_PATH_POS                            (0xFFFFFFFF)

// ---------- TDDTTU_CELL3_PATH_POS1 bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_PATH_POS1_PATH_POS                            (0)
#define L_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_PATH_POS1_PATH_POS                            (32)
#define M_TDSCDMA_TTU_CUIF_CFG_TDDTTU_CELL3_PATH_POS1_PATH_POS                            (0xFFFFFFFF)

// ---------- CFG_RESV bit-field ----------
#define P_TDSCDMA_TTU_CUIF_CFG_CFG_RESV_RESV                                              (0)
#define L_TDSCDMA_TTU_CUIF_CFG_CFG_RESV_RESV                                              (32)
#define M_TDSCDMA_TTU_CUIF_CFG_CFG_RESV_RESV                                              (0xFFFFFFFF)

#endif // __TDSCDMA_TTU_CUIF_CFG_H__
