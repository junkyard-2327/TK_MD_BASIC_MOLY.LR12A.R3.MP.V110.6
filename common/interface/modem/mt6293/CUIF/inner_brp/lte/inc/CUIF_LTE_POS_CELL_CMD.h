#ifndef __CUIF_LTE_POS_CELL_CMD_H__
#define __CUIF_LTE_POS_CELL_CMD_H__

// ----------------- CUIF_LTE_POS_CELL_CMD Register Definition -------------------
typedef volatile struct {
    kal_uint32 DUMP_PER_CELL_INFO;                                                        // 0x0000
    kal_uint32 DUMP_PER_CELL_SEG_INFO_0_1;                                                // 0x0004
    kal_uint32 DUMP_PER_CELL_SEG_INFO_2_3;                                                // 0x0008
    kal_uint32 DUMP_PER_CELL_SEG_INFO_4_5;                                                // 0x000C
    kal_uint32 PCTI_DATA_0;                                                               // 0x0010
    kal_uint32 PCTI_DATA_1;                                                               // 0x0014
} CUIF_LTE_POS_CELL_CMD_REGS, *PCUIF_LTE_POS_CELL_CMD_REGS;

// ---------- CUIF_LTE_POS_CELL_CMD word-offset  ----------
#define O_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO                                        (0)
#define O_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1                                (1)
#define O_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3                                (2)
#define O_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5                                (3)
#define O_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0                                               (4)
#define O_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_1                                               (5)

// ---------- DUMP_PER_CELL_INFO bit-field ----------
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO_START_SEG_IDX                          (24)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO_START_SEG_IDX                          (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO_START_SEG_IDX                          (0x07000000)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO_NUM_SEG                                (16)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO_NUM_SEG                                (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO_NUM_SEG                                (0x00070000)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO_NUM_PRS_SF                             (8)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO_NUM_PRS_SF                             (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO_NUM_PRS_SF                             (0x00000700)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO_PCTI                                   (0)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO_PCTI                                   (7)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_INFO_PCTI                                   (0x0000007F)

// ---------- DUMP_PER_CELL_SEG_INFO_0_1 bit-field ----------
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_START_SF_IDX_1                 (24)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_START_SF_IDX_1                 (6)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_START_SF_IDX_1                 (0x3F000000)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_NUM_SF_PER_SEG_1               (19)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_NUM_SF_PER_SEG_1               (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_NUM_SF_PER_SEG_1               (0x00380000)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_START_SF_IDX_IN_SEG_1          (16)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_START_SF_IDX_IN_SEG_1          (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_START_SF_IDX_IN_SEG_1          (0x00070000)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_START_SF_IDX_0                 (8)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_START_SF_IDX_0                 (6)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_START_SF_IDX_0                 (0x00003F00)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_NUM_SF_PER_SEG_0               (3)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_NUM_SF_PER_SEG_0               (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_NUM_SF_PER_SEG_0               (0x00000038)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_START_SF_IDX_IN_SEG_0          (0)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_START_SF_IDX_IN_SEG_0          (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_0_1_START_SF_IDX_IN_SEG_0          (0x00000007)

// ---------- DUMP_PER_CELL_SEG_INFO_2_3 bit-field ----------
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_START_SF_IDX_3                 (24)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_START_SF_IDX_3                 (6)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_START_SF_IDX_3                 (0x3F000000)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_NUM_SF_PER_SEG_3               (19)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_NUM_SF_PER_SEG_3               (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_NUM_SF_PER_SEG_3               (0x00380000)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_START_SF_IDX_IN_SEG_3          (16)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_START_SF_IDX_IN_SEG_3          (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_START_SF_IDX_IN_SEG_3          (0x00070000)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_START_SF_IDX_2                 (8)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_START_SF_IDX_2                 (6)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_START_SF_IDX_2                 (0x00003F00)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_NUM_SF_PER_SEG_2               (3)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_NUM_SF_PER_SEG_2               (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_NUM_SF_PER_SEG_2               (0x00000038)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_START_SF_IDX_IN_SEG_2          (0)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_START_SF_IDX_IN_SEG_2          (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_2_3_START_SF_IDX_IN_SEG_2          (0x00000007)

// ---------- DUMP_PER_CELL_SEG_INFO_4_5 bit-field ----------
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_START_SF_IDX_5                 (24)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_START_SF_IDX_5                 (6)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_START_SF_IDX_5                 (0x3F000000)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_NUM_SF_PER_SEG_5               (19)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_NUM_SF_PER_SEG_5               (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_NUM_SF_PER_SEG_5               (0x00380000)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_START_SF_IDX_IN_SEG_5          (16)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_START_SF_IDX_IN_SEG_5          (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_START_SF_IDX_IN_SEG_5          (0x00070000)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_START_SF_IDX_4                 (8)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_START_SF_IDX_4                 (6)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_START_SF_IDX_4                 (0x00003F00)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_NUM_SF_PER_SEG_4               (3)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_NUM_SF_PER_SEG_4               (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_NUM_SF_PER_SEG_4               (0x00000038)
#define P_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_START_SF_IDX_IN_SEG_4          (0)
#define L_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_START_SF_IDX_IN_SEG_4          (3)
#define M_CUIF_LTE_POS_CELL_CMD_DUMP_PER_CELL_SEG_INFO_4_5_START_SF_IDX_IN_SEG_4          (0x00000007)

// ---------- PCTI_DATA_0 bit-field ----------
#define P_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0_PRSBW                                         (24)
#define L_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0_PRSBW                                         (3)
#define M_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0_PRSBW                                         (0x07000000)
#define P_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0_CP                                            (17)
#define L_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0_CP                                            (1)
#define M_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0_CP                                            (0x00020000)
#define P_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0_NUM_ANT                                       (16)
#define L_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0_NUM_ANT                                       (1)
#define M_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0_NUM_ANT                                       (0x00010000)
#define P_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0_PCI                                           (0)
#define L_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0_PCI                                           (9)
#define M_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_0_PCI                                           (0x000001FF)

// ---------- PCTI_DATA_1 bit-field ----------
#define P_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_1_EXP_UNCER                                     (16)
#define L_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_1_EXP_UNCER                                     (11)
#define M_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_1_EXP_UNCER                                     (0x07FF0000)
#define P_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_1_EXP_RSTD                                      (0)
#define L_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_1_EXP_RSTD                                      (14)
#define M_CUIF_LTE_POS_CELL_CMD_PCTI_DATA_1_EXP_RSTD                                      (0x00003FFF)

#endif // __CUIF_LTE_POS_CELL_CMD_H__
