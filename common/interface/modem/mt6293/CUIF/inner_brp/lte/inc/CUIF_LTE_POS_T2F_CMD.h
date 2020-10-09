#ifndef __CUIF_LTE_POS_T2F_CMD_H__
#define __CUIF_LTE_POS_T2F_CMD_H__

// ----------------- CUIF_LTE_POS_T2F_CMD Register Definition -------------------
typedef volatile struct {
    kal_uint32 T2F_INFO;                                                                  // 0x0000
    kal_uint32 SEG_INFO;                                                                  // 0x0004
    kal_uint32 N_PRE_PRS;                                                                 // 0x0008
    kal_uint32 TDBUF0_ADDR;                                                               // 0x000C
    kal_uint32 TDBUF1_ADDR;                                                               // 0x0010
    kal_uint32 AGC_START_RX0_ADDR;                                                        // 0x0014
    kal_uint32 AGC_INFO_RX0;                                                              // 0x0018
    kal_uint32 AGC_START_RX1_ADDR;                                                        // 0x001C
    kal_uint32 AGC_INFO_RX1;                                                              // 0x0020
    kal_uint32 PACK_SEGMENT_LEN[6];                                                       // 0x0024..0x0038
    kal_uint32 SEGMENT_LEN[6];                                                            // 0x003C..0x0050
    kal_uint32 FDBUF0_ADDR;                                                               // 0x0054
    kal_uint32 FDBUF1_ADDR;                                                               // 0x0058
} CUIF_LTE_POS_T2F_CMD_REGS, *PCUIF_LTE_POS_T2F_CMD_REGS;

// ---------- CUIF_LTE_POS_T2F_CMD word-offset  ----------
#define O_CUIF_LTE_POS_T2F_CMD_T2F_INFO                                                   (0)
#define O_CUIF_LTE_POS_T2F_CMD_SEG_INFO                                                   (1)
#define O_CUIF_LTE_POS_T2F_CMD_N_PRE_PRS                                                  (2)
#define O_CUIF_LTE_POS_T2F_CMD_TDBUF0_ADDR                                                (3)
#define O_CUIF_LTE_POS_T2F_CMD_TDBUF1_ADDR                                                (4)
#define O_CUIF_LTE_POS_T2F_CMD_AGC_START_RX0_ADDR                                         (5)
#define O_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0                                               (6)
#define O_CUIF_LTE_POS_T2F_CMD_AGC_START_RX1_ADDR                                         (7)
#define O_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1                                               (8)
#define O_CUIF_LTE_POS_T2F_CMD_PACK_SEGMENT_LEN(i)                                        (9 + (i))
#define O_CUIF_LTE_POS_T2F_CMD_SEGMENT_LEN(i)                                             (15 + (i))
#define O_CUIF_LTE_POS_T2F_CMD_FDBUF0_ADDR                                                (21)
#define O_CUIF_LTE_POS_T2F_CMD_FDBUF1_ADDR                                                (22)

// ---------- T2F_INFO bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_T2F_INFO_TAS_SWAP                                          (31)
#define L_CUIF_LTE_POS_T2F_CMD_T2F_INFO_TAS_SWAP                                          (1)
#define M_CUIF_LTE_POS_T2F_CMD_T2F_INFO_TAS_SWAP                                          (0x80000000)
#define P_CUIF_LTE_POS_T2F_CMD_T2F_INFO_NUM_RX                                            (29)
#define L_CUIF_LTE_POS_T2F_CMD_T2F_INFO_NUM_RX                                            (2)
#define M_CUIF_LTE_POS_T2F_CMD_T2F_INFO_NUM_RX                                            (0x60000000)
#define P_CUIF_LTE_POS_T2F_CMD_T2F_INFO_RX_PATH_BITMAP                                    (27)
#define L_CUIF_LTE_POS_T2F_CMD_T2F_INFO_RX_PATH_BITMAP                                    (2)
#define M_CUIF_LTE_POS_T2F_CMD_T2F_INFO_RX_PATH_BITMAP                                    (0x18000000)
#define P_CUIF_LTE_POS_T2F_CMD_T2F_INFO_NUM_SEG                                           (24)
#define L_CUIF_LTE_POS_T2F_CMD_T2F_INFO_NUM_SEG                                           (3)
#define M_CUIF_LTE_POS_T2F_CMD_T2F_INFO_NUM_SEG                                           (0x07000000)
#define P_CUIF_LTE_POS_T2F_CMD_T2F_INFO_DPX_MODE                                          (16)
#define L_CUIF_LTE_POS_T2F_CMD_T2F_INFO_DPX_MODE                                          (1)
#define M_CUIF_LTE_POS_T2F_CMD_T2F_INFO_DPX_MODE                                          (0x00010000)
#define P_CUIF_LTE_POS_T2F_CMD_T2F_INFO_HW_BW_IDX                                         (8)
#define L_CUIF_LTE_POS_T2F_CMD_T2F_INFO_HW_BW_IDX                                         (3)
#define M_CUIF_LTE_POS_T2F_CMD_T2F_INFO_HW_BW_IDX                                         (0x00000700)
#define P_CUIF_LTE_POS_T2F_CMD_T2F_INFO_NUM_CELL                                          (0)
#define L_CUIF_LTE_POS_T2F_CMD_T2F_INFO_NUM_CELL                                          (7)
#define M_CUIF_LTE_POS_T2F_CMD_T2F_INFO_NUM_CELL                                          (0x0000007F)

// ---------- SEG_INFO bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG5                                    (15)
#define L_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG5                                    (3)
#define M_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG5                                    (0x00038000)
#define P_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG4                                    (12)
#define L_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG4                                    (3)
#define M_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG4                                    (0x00007000)
#define P_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG3                                    (9)
#define L_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG3                                    (3)
#define M_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG3                                    (0x00000E00)
#define P_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG2                                    (6)
#define L_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG2                                    (3)
#define M_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG2                                    (0x000001C0)
#define P_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG1                                    (3)
#define L_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG1                                    (3)
#define M_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG1                                    (0x00000038)
#define P_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG0                                    (0)
#define L_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG0                                    (3)
#define M_CUIF_LTE_POS_T2F_CMD_SEG_INFO_NUM_SF_IN_SEG0                                    (0x00000007)

// ---------- N_PRE_PRS bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_N_PRE_PRS_N_PRE_PRS                                        (0)
#define L_CUIF_LTE_POS_T2F_CMD_N_PRE_PRS_N_PRE_PRS                                        (32)
#define M_CUIF_LTE_POS_T2F_CMD_N_PRE_PRS_N_PRE_PRS                                        (0xFFFFFFFF)

// ---------- TDBUF0_ADDR bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_TDBUF0_ADDR_TD_RX0_BUF_ADDR                                (0)
#define L_CUIF_LTE_POS_T2F_CMD_TDBUF0_ADDR_TD_RX0_BUF_ADDR                                (32)
#define M_CUIF_LTE_POS_T2F_CMD_TDBUF0_ADDR_TD_RX0_BUF_ADDR                                (0xFFFFFFFF)

// ---------- TDBUF1_ADDR bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_TDBUF1_ADDR_TD_RX1_BUF_ADDR                                (0)
#define L_CUIF_LTE_POS_T2F_CMD_TDBUF1_ADDR_TD_RX1_BUF_ADDR                                (32)
#define M_CUIF_LTE_POS_T2F_CMD_TDBUF1_ADDR_TD_RX1_BUF_ADDR                                (0xFFFFFFFF)

// ---------- AGC_START_RX0_ADDR bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_AGC_START_RX0_ADDR_AGC_ADDR                                (0)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_START_RX0_ADDR_AGC_ADDR                                (32)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_START_RX0_ADDR_AGC_ADDR                                (0xFFFFFFFF)

// ---------- AGC_INFO_RX0 bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG5                               (25)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG5                               (5)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG5                               (0x3E000000)
#define P_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG4                               (20)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG4                               (5)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG4                               (0x01F00000)
#define P_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG3                               (15)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG3                               (5)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG3                               (0x000F8000)
#define P_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG2                               (10)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG2                               (5)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG2                               (0x00007C00)
#define P_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG1                               (5)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG1                               (5)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG1                               (0x000003E0)
#define P_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG0                               (0)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG0                               (5)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX0_AGC_CHANGE_SEG0                               (0x0000001F)

// ---------- AGC_START_RX1_ADDR bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_AGC_START_RX1_ADDR_AGC_ADDR                                (0)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_START_RX1_ADDR_AGC_ADDR                                (32)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_START_RX1_ADDR_AGC_ADDR                                (0xFFFFFFFF)

// ---------- AGC_INFO_RX1 bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG5                               (25)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG5                               (5)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG5                               (0x3E000000)
#define P_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG4                               (20)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG4                               (5)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG4                               (0x01F00000)
#define P_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG3                               (15)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG3                               (5)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG3                               (0x000F8000)
#define P_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG2                               (10)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG2                               (5)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG2                               (0x00007C00)
#define P_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG1                               (5)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG1                               (5)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG1                               (0x000003E0)
#define P_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG0                               (0)
#define L_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG0                               (5)
#define M_CUIF_LTE_POS_T2F_CMD_AGC_INFO_RX1_AGC_CHANGE_SEG0                               (0x0000001F)

// ---------- PACK_SEGMENT_LEN bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_PACK_SEGMENT_LEN_PACK_SEG_LEN                              (0)
#define L_CUIF_LTE_POS_T2F_CMD_PACK_SEGMENT_LEN_PACK_SEG_LEN                              (32)
#define M_CUIF_LTE_POS_T2F_CMD_PACK_SEGMENT_LEN_PACK_SEG_LEN                              (0xFFFFFFFF)

// ---------- SEGMENT_LEN bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_SEGMENT_LEN_SEG_LEN                                        (0)
#define L_CUIF_LTE_POS_T2F_CMD_SEGMENT_LEN_SEG_LEN                                        (32)
#define M_CUIF_LTE_POS_T2F_CMD_SEGMENT_LEN_SEG_LEN                                        (0xFFFFFFFF)

// ---------- FDBUF0_ADDR bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_FDBUF0_ADDR_FD_RX0_BUF_ADDR                                (0)
#define L_CUIF_LTE_POS_T2F_CMD_FDBUF0_ADDR_FD_RX0_BUF_ADDR                                (32)
#define M_CUIF_LTE_POS_T2F_CMD_FDBUF0_ADDR_FD_RX0_BUF_ADDR                                (0xFFFFFFFF)

// ---------- FDBUF1_ADDR bit-field ----------
#define P_CUIF_LTE_POS_T2F_CMD_FDBUF1_ADDR_FD_RX1_BUF_ADDR                                (0)
#define L_CUIF_LTE_POS_T2F_CMD_FDBUF1_ADDR_FD_RX1_BUF_ADDR                                (32)
#define M_CUIF_LTE_POS_T2F_CMD_FDBUF1_ADDR_FD_RX1_BUF_ADDR                                (0xFFFFFFFF)

#endif // __CUIF_LTE_POS_T2F_CMD_H__
