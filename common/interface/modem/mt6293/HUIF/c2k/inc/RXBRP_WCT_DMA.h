#ifndef __RXBRP_WCT_DMA_H__
#define __RXBRP_WCT_DMA_H__

// ----------------- RXBRP_WCT_DMA Register Definition -------------------
typedef volatile struct {
    kal_uint32 DBRP_DMA_RESET;                                                            // 0x0000
    kal_uint32 DBRP_DMA_CH0;                                                              // 0x0004
    kal_uint32 DBRP_DMA_CH0_REQ;                                                          // 0x0008
    kal_uint32 DBRP_DMA_CH0_CTRL;                                                         // 0x000C
    kal_uint32 DBRP_DMA_CH0_CTRL_DATA_PING;                                               // 0x0010
    kal_uint32 DBRP_DMA_CH0_CTRL_DATA_PONG;                                               // 0x0014
    kal_uint32 DBRP_DMA_CH0_CTRL_DATA;                                                    // 0x0018
    kal_uint32 DBRP_DMA_CH1;                                                              // 0x001C
    kal_uint32 DBRP_DMA_CH1_REQ;                                                          // 0x0020
    kal_uint32 DBRP_DMA_CH1_CTRL;                                                         // 0x0024
    kal_uint32 DBRP_DMA_CH1_CTRL_DATA_PING;                                               // 0x0028
    kal_uint32 DBRP_DMA_CH1_CTRL_DATA_PONG;                                               // 0x002C
    kal_uint32 DBRP_DMA_CH1_CTRL_DATA;                                                    // 0x0030
    kal_uint32 DBRP_DMA_CH2;                                                              // 0x0034
    kal_uint32 DBRP_DMA_CH2_REQ;                                                          // 0x0038
    kal_uint32 DBRP_DMA_CH2_CTRL;                                                         // 0x003C
    kal_uint32 DBRP_DMA_CH2_CTRL_CNFG_PING;                                               // 0x0040
    kal_uint32 DBRP_DMA_CH2_CTRL_CNFG_PONG;                                               // 0x0044
    kal_uint32 DBRP_DMA_CH2_CTRL_CNFG;                                                    // 0x0048
    kal_uint32 DBRP_DMA_CH2_CTRL_DATA_PING;                                               // 0x004C
    kal_uint32 DBRP_DMA_CH2_CTRL_DATA_PONG;                                               // 0x0050
    kal_uint32 DBRP_DMA_CH2_CTRL_DATA;                                                    // 0x0054
    kal_uint32 DBRP_DMA_CH3;                                                              // 0x0058
    kal_uint32 DBRP_DMA_CH3_REQ;                                                          // 0x005C
    kal_uint32 DBRP_DMA_CH3_CTRL;                                                         // 0x0060
    kal_uint32 DBRP_DMA_CH3_CTRL_CNFG_PING;                                               // 0x0064
    kal_uint32 DBRP_DMA_CH3_CTRL_CNFG_PONG;                                               // 0x0068
    kal_uint32 DBRP_DMA_CH3_CTRL_CNFG;                                                    // 0x006C
    kal_uint32 DBRP_DMA_CH3_CTRL_DATA_PING;                                               // 0x0070
    kal_uint32 DBRP_DMA_CH3_CTRL_DATA_PONG;                                               // 0x0074
    kal_uint32 DBRP_DMA_CH3_CTRL_DATA;                                                    // 0x0078
    kal_uint32 DBRP_DMA_CH4;                                                              // 0x007C
    kal_uint32 DBRP_DMA_CH4_REQ;                                                          // 0x0080
    kal_uint32 DBRP_DMA_CH4_CTRL;                                                         // 0x0084
    kal_uint32 DBRP_DMA_CH4_CTRL_CNFG_PING_CC0;                                           // 0x0088
    kal_uint32 DBRP_DMA_CH4_CTRL_CNFG_PONG_CC0;                                           // 0x008C
    kal_uint32 DBRP_DMA_CH4_CTRL_CNFG_CC0;                                                // 0x0090
    kal_uint32 DBRP_DMA_CH4_CTRL_DATA_PING_CC0;                                           // 0x0094
    kal_uint32 DBRP_DMA_CH4_CTRL_DATA_PONG_CC0;                                           // 0x0098
    kal_uint32 DBRP_DMA_CH4_CTRL_DATA_CC0;                                                // 0x009C
    kal_uint32 DBRP_DMA_CH4_CTRL_CNFG_PING_CC1;                                           // 0x00A0
    kal_uint32 DBRP_DMA_CH4_CTRL_CNFG_PONG_CC1;                                           // 0x00A4
    kal_uint32 DBRP_DMA_CH4_CTRL_CNFG_CC1;                                                // 0x00A8
    kal_uint32 DBRP_DMA_CH4_CTRL_DATA_PING_CC1;                                           // 0x00AC
    kal_uint32 DBRP_DMA_CH4_CTRL_DATA_PONG_CC1;                                           // 0x00B0
    kal_uint32 DBRP_DMA_CH4_CTRL_DATA_CC1;                                                // 0x00B4
    kal_uint32 DBRP_DMA_CH0_DBG_TIME;                                                     // 0x00B8
    kal_uint32 DBRP_DMA_CH1_DBG_TIME;                                                     // 0x00BC
    kal_uint32 DBRP_DMA_CH2_DBG_TIME;                                                     // 0x00C0
    kal_uint32 DBRP_DMA_CH3_DBG_TIME;                                                     // 0x00C4
    kal_uint32 DBRP_DMA_CH4_DBG_TIME;                                                     // 0x00C8
    kal_uint32 DBRP_DMA_CH0_DBG_TIMEOUT;                                                  // 0x00CC
    kal_uint32 DBRP_DMA_CH1_DBG_TIMEOUT;                                                  // 0x00D0
    kal_uint32 DBRP_DMA_CH2_DBG_TIMEOUT;                                                  // 0x00D4
    kal_uint32 DBRP_DMA_CH3_DBG_TIMEOUT;                                                  // 0x00D8
    kal_uint32 DBRP_DMA_CH4_DBG_TIMEOUT;                                                  // 0x00DC
    kal_uint32 DBRP_DMA_FSM_DBG;                                                          // 0x00E0
    kal_uint32 DBRP_DMA_CTRL_DBG;                                                         // 0x00E4
    kal_uint32 DBRP_DMA_CH0_DBG_TRANS;                                                    // 0x00E8
    kal_uint32 DBRP_DMA_CH1_DBG_TRANS;                                                    // 0x00EC
    kal_uint32 DBRP_DMA_CH2_DBG_TRANS;                                                    // 0x00F0
    kal_uint32 DBRP_DMA_CH3_DBG_TRANS;                                                    // 0x00F4
    kal_uint32 DBRP_DMA_CH4_DBG_TRANS;                                                    // 0x00F8
} RXBRP_WCT_DMA_REGS, *PRXBRP_WCT_DMA_REGS;

// ---------- RXBRP_WCT_DMA word-offset  ----------
#define O_RXBRP_WCT_DMA_DBRP_DMA_RESET                                                    (0)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH0                                                      (1)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH0_REQ                                                  (2)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL                                                 (3)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PING                                       (4)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PONG                                       (5)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA                                            (6)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH1                                                      (7)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH1_REQ                                                  (8)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL                                                 (9)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PING                                       (10)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PONG                                       (11)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA                                            (12)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH2                                                      (13)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH2_REQ                                                  (14)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL                                                 (15)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PING                                       (16)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PONG                                       (17)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG                                            (18)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PING                                       (19)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PONG                                       (20)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA                                            (21)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH3                                                      (22)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH3_REQ                                                  (23)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL                                                 (24)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PING                                       (25)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PONG                                       (26)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG                                            (27)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PING                                       (28)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PONG                                       (29)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA                                            (30)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4                                                      (31)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ                                                  (32)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL                                                 (33)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC0                                   (34)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC0                                   (35)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_CC0                                        (36)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC0                                   (37)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC0                                   (38)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_CC0                                        (39)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC1                                   (40)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC1                                   (41)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_CC1                                        (42)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC1                                   (43)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC1                                   (44)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_CC1                                        (45)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIME                                             (46)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIME                                             (47)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIME                                             (48)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIME                                             (49)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIME                                             (50)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIMEOUT                                          (51)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIMEOUT                                          (52)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIMEOUT                                          (53)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIMEOUT                                          (54)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIMEOUT                                          (55)
#define O_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG                                                  (56)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG                                                 (57)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TRANS                                            (58)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TRANS                                            (59)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TRANS                                            (60)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TRANS                                            (61)
#define O_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TRANS                                            (62)

// ---------- DBRP_DMA_RESET bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_RESET_SW_RESET                                           (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_RESET_SW_RESET                                           (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_RESET_SW_RESET                                           (0x00000001)

// ---------- DBRP_DMA_CH0 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_PWR_MODE                                             (1)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_PWR_MODE                                             (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_PWR_MODE                                             (0x00000002)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_TRIG                                                 (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_TRIG                                                 (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_TRIG                                                 (0x00000001)

// ---------- DBRP_DMA_CH0_REQ bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_REQ_DATA_PING_SEL                                    (1)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_REQ_DATA_PING_SEL                                    (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_REQ_DATA_PING_SEL                                    (0x00000002)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_REQ_CNFG_PING_SEL                                    (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_REQ_CNFG_PING_SEL                                    (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_REQ_CNFG_PING_SEL                                    (0x00000001)

// ---------- DBRP_DMA_CH0_CTRL bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_BUF_IDX                                         (14)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_BUF_IDX                                         (4)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_BUF_IDX                                         (0x0003C000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_ACC_IDX                                         (7)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_ACC_IDX                                         (7)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_ACC_IDX                                         (0x00003F80)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_PRIORITY                                        (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_PRIORITY                                        (3)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_PRIORITY                                        (0x00000070)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_CNFG                                            (3)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_CNFG                                            (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_CNFG                                            (0x00000008)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_MODE                                            (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_MODE                                            (3)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_MODE                                            (0x00000007)

// ---------- DBRP_DMA_CH0_CTRL_DATA_PING bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PING_START_SAMPLE_IDX                      (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PING_START_SAMPLE_IDX                      (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PING_START_SAMPLE_IDX                      (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PING_BASE_ADDR_IDX                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PING_BASE_ADDR_IDX                         (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PING_BASE_ADDR_IDX                         (0x0000FFFF)

// ---------- DBRP_DMA_CH0_CTRL_DATA_PONG bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PONG_START_SAMPLE_IDX                      (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PONG_START_SAMPLE_IDX                      (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PONG_START_SAMPLE_IDX                      (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PONG_BASE_ADDR_IDX                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PONG_BASE_ADDR_IDX                         (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_PONG_BASE_ADDR_IDX                         (0x0000FFFF)

// ---------- DBRP_DMA_CH0_CTRL_DATA bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_LENGTH                                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_LENGTH                                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_CTRL_DATA_LENGTH                                     (0x0000FFFF)

// ---------- DBRP_DMA_CH1 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_PWR_MODE                                             (1)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_PWR_MODE                                             (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_PWR_MODE                                             (0x00000002)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_TRIG                                                 (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_TRIG                                                 (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_TRIG                                                 (0x00000001)

// ---------- DBRP_DMA_CH1_REQ bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_REQ_DATA_PING_SEL                                    (1)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_REQ_DATA_PING_SEL                                    (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_REQ_DATA_PING_SEL                                    (0x00000002)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_REQ_CNFG_PING_SEL                                    (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_REQ_CNFG_PING_SEL                                    (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_REQ_CNFG_PING_SEL                                    (0x00000001)

// ---------- DBRP_DMA_CH1_CTRL bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_BUF_OFFSET_IDX                                  (18)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_BUF_OFFSET_IDX                                  (10)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_BUF_OFFSET_IDX                                  (0x0FFC0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_BUF_IDX                                         (14)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_BUF_IDX                                         (4)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_BUF_IDX                                         (0x0003C000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_ACC_IDX                                         (7)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_ACC_IDX                                         (7)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_ACC_IDX                                         (0x00003F80)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_PRIORITY                                        (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_PRIORITY                                        (3)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_PRIORITY                                        (0x00000070)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_CNFG                                            (3)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_CNFG                                            (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_CNFG                                            (0x00000008)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_MODE                                            (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_MODE                                            (3)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_MODE                                            (0x00000007)

// ---------- DBRP_DMA_CH1_CTRL_DATA_PING bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PING_START_SAMPLE_IDX                      (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PING_START_SAMPLE_IDX                      (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PING_START_SAMPLE_IDX                      (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PING_BASE_ADDR_IDX                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PING_BASE_ADDR_IDX                         (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PING_BASE_ADDR_IDX                         (0x0000FFFF)

// ---------- DBRP_DMA_CH1_CTRL_DATA_PONG bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PONG_START_SAMPLE_IDX                      (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PONG_START_SAMPLE_IDX                      (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PONG_START_SAMPLE_IDX                      (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PONG_BASE_ADDR_IDX                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PONG_BASE_ADDR_IDX                         (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_PONG_BASE_ADDR_IDX                         (0x0000FFFF)

// ---------- DBRP_DMA_CH1_CTRL_DATA bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_LENGTH                                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_LENGTH                                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_CTRL_DATA_LENGTH                                     (0x0000FFFF)

// ---------- DBRP_DMA_CH2 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_PWR_MODE                                             (1)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_PWR_MODE                                             (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_PWR_MODE                                             (0x00000002)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_TRIG                                                 (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_TRIG                                                 (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_TRIG                                                 (0x00000001)

// ---------- DBRP_DMA_CH2_REQ bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_REQ_DATA_PING_SEL                                    (1)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_REQ_DATA_PING_SEL                                    (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_REQ_DATA_PING_SEL                                    (0x00000002)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_REQ_CNFG_PING_SEL                                    (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_REQ_CNFG_PING_SEL                                    (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_REQ_CNFG_PING_SEL                                    (0x00000001)

// ---------- DBRP_DMA_CH2_CTRL bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_BUF_IDX                                         (14)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_BUF_IDX                                         (4)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_BUF_IDX                                         (0x0003C000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_ACC_IDX                                         (7)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_ACC_IDX                                         (7)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_ACC_IDX                                         (0x00003F80)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_PRIORITY                                        (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_PRIORITY                                        (3)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_PRIORITY                                        (0x00000070)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG                                            (3)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG                                            (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG                                            (0x00000008)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_MODE                                            (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_MODE                                            (3)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_MODE                                            (0x00000007)

// ---------- DBRP_DMA_CH2_CTRL_CNFG_PING bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PING_START_SAMPLE_IDX                      (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PING_START_SAMPLE_IDX                      (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PING_START_SAMPLE_IDX                      (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PING_BASE_ADDR_IDX                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PING_BASE_ADDR_IDX                         (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PING_BASE_ADDR_IDX                         (0x0000FFFF)

// ---------- DBRP_DMA_CH2_CTRL_CNFG_PONG bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PONG_START_SAMPLE_IDX                      (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PONG_START_SAMPLE_IDX                      (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PONG_START_SAMPLE_IDX                      (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PONG_BASE_ADDR_IDX                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PONG_BASE_ADDR_IDX                         (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_PONG_BASE_ADDR_IDX                         (0x0000FFFF)

// ---------- DBRP_DMA_CH2_CTRL_CNFG bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_LENGTH                                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_LENGTH                                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_CNFG_LENGTH                                     (0x0000FFFF)

// ---------- DBRP_DMA_CH2_CTRL_DATA_PING bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PING_START_SAMPLE_IDX                      (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PING_START_SAMPLE_IDX                      (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PING_START_SAMPLE_IDX                      (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PING_BASE_ADDR_IDX                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PING_BASE_ADDR_IDX                         (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PING_BASE_ADDR_IDX                         (0x0000FFFF)

// ---------- DBRP_DMA_CH2_CTRL_DATA_PONG bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PONG_START_SAMPLE_IDX                      (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PONG_START_SAMPLE_IDX                      (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PONG_START_SAMPLE_IDX                      (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PONG_BASE_ADDR_IDX                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PONG_BASE_ADDR_IDX                         (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_PONG_BASE_ADDR_IDX                         (0x0000FFFF)

// ---------- DBRP_DMA_CH2_CTRL_DATA bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_LENGTH                                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_LENGTH                                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_CTRL_DATA_LENGTH                                     (0x0000FFFF)

// ---------- DBRP_DMA_CH3 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_PWR_MODE                                             (1)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_PWR_MODE                                             (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_PWR_MODE                                             (0x00000002)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_TRIG                                                 (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_TRIG                                                 (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_TRIG                                                 (0x00000001)

// ---------- DBRP_DMA_CH3_REQ bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_REQ_DATA_PING_SEL                                    (1)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_REQ_DATA_PING_SEL                                    (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_REQ_DATA_PING_SEL                                    (0x00000002)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_REQ_CNFG_PING_SEL                                    (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_REQ_CNFG_PING_SEL                                    (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_REQ_CNFG_PING_SEL                                    (0x00000001)

// ---------- DBRP_DMA_CH3_CTRL bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_BUF_IDX                                         (14)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_BUF_IDX                                         (4)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_BUF_IDX                                         (0x0003C000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_ACC_IDX                                         (7)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_ACC_IDX                                         (7)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_ACC_IDX                                         (0x00003F80)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_PRIORITY                                        (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_PRIORITY                                        (3)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_PRIORITY                                        (0x00000070)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG                                            (3)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG                                            (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG                                            (0x00000008)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_MODE                                            (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_MODE                                            (3)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_MODE                                            (0x00000007)

// ---------- DBRP_DMA_CH3_CTRL_CNFG_PING bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PING_START_SAMPLE_IDX                      (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PING_START_SAMPLE_IDX                      (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PING_START_SAMPLE_IDX                      (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PING_BASE_ADDR_IDX                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PING_BASE_ADDR_IDX                         (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PING_BASE_ADDR_IDX                         (0x0000FFFF)

// ---------- DBRP_DMA_CH3_CTRL_CNFG_PONG bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PONG_START_SAMPLE_IDX                      (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PONG_START_SAMPLE_IDX                      (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PONG_START_SAMPLE_IDX                      (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PONG_BASE_ADDR_IDX                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PONG_BASE_ADDR_IDX                         (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_PONG_BASE_ADDR_IDX                         (0x0000FFFF)

// ---------- DBRP_DMA_CH3_CTRL_CNFG bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_LENGTH                                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_LENGTH                                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_CNFG_LENGTH                                     (0x0000FFFF)

// ---------- DBRP_DMA_CH3_CTRL_DATA_PING bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PING_START_SAMPLE_IDX                      (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PING_START_SAMPLE_IDX                      (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PING_START_SAMPLE_IDX                      (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PING_BASE_ADDR_IDX                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PING_BASE_ADDR_IDX                         (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PING_BASE_ADDR_IDX                         (0x0000FFFF)

// ---------- DBRP_DMA_CH3_CTRL_DATA_PONG bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PONG_START_SAMPLE_IDX                      (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PONG_START_SAMPLE_IDX                      (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PONG_START_SAMPLE_IDX                      (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PONG_BASE_ADDR_IDX                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PONG_BASE_ADDR_IDX                         (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_PONG_BASE_ADDR_IDX                         (0x0000FFFF)

// ---------- DBRP_DMA_CH3_CTRL_DATA bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_LENGTH                                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_LENGTH                                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_CTRL_DATA_LENGTH                                     (0x0000FFFF)

// ---------- DBRP_DMA_CH4 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_PWR_MODE                                             (1)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_PWR_MODE                                             (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_PWR_MODE                                             (0x00000002)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_TRIG                                                 (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_TRIG                                                 (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_TRIG                                                 (0x00000001)

// ---------- DBRP_DMA_CH4_REQ bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ_DATA_CC1_PING_SEL                                (3)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ_DATA_CC1_PING_SEL                                (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ_DATA_CC1_PING_SEL                                (0x00000008)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ_CNFG_CC1_PING_SEL                                (2)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ_CNFG_CC1_PING_SEL                                (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ_CNFG_CC1_PING_SEL                                (0x00000004)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ_DATA_CC0_PING_SEL                                (1)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ_DATA_CC0_PING_SEL                                (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ_DATA_CC0_PING_SEL                                (0x00000002)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ_CNFG_CC0_PING_SEL                                (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ_CNFG_CC0_PING_SEL                                (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_REQ_CNFG_CC0_PING_SEL                                (0x00000001)

// ---------- DBRP_DMA_CH4_CTRL bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CC1_BUF_IDX                                     (20)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CC1_BUF_IDX                                     (4)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CC1_BUF_IDX                                     (0x00F00000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CC0_BUF_IDX                                     (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CC0_BUF_IDX                                     (4)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CC0_BUF_IDX                                     (0x000F0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_ACC_IDX                                         (9)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_ACC_IDX                                         (7)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_ACC_IDX                                         (0x0000FE00)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CC_EN                                           (7)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CC_EN                                           (2)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CC_EN                                           (0x00000180)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_PRIORITY                                        (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_PRIORITY                                        (3)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_PRIORITY                                        (0x00000070)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG                                            (3)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG                                            (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG                                            (0x00000008)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_MODE                                            (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_MODE                                            (3)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_MODE                                            (0x00000007)

// ---------- DBRP_DMA_CH4_CTRL_CNFG_PING_CC0 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC0_START_SAMPLE_IDX                  (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC0_START_SAMPLE_IDX                  (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC0_START_SAMPLE_IDX                  (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC0_BASE_ADDR_IDX                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC0_BASE_ADDR_IDX                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC0_BASE_ADDR_IDX                     (0x0000FFFF)

// ---------- DBRP_DMA_CH4_CTRL_CNFG_PONG_CC0 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC0_START_SAMPLE_IDX                  (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC0_START_SAMPLE_IDX                  (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC0_START_SAMPLE_IDX                  (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC0_BASE_ADDR_IDX                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC0_BASE_ADDR_IDX                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC0_BASE_ADDR_IDX                     (0x0000FFFF)

// ---------- DBRP_DMA_CH4_CTRL_CNFG_CC0 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_CC0_LENGTH                                 (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_CC0_LENGTH                                 (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_CC0_LENGTH                                 (0x0000FFFF)

// ---------- DBRP_DMA_CH4_CTRL_DATA_PING_CC0 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC0_START_SAMPLE_IDX                  (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC0_START_SAMPLE_IDX                  (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC0_START_SAMPLE_IDX                  (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC0_BASE_ADDR_IDX                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC0_BASE_ADDR_IDX                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC0_BASE_ADDR_IDX                     (0x0000FFFF)

// ---------- DBRP_DMA_CH4_CTRL_DATA_PONG_CC0 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC0_START_SAMPLE_IDX                  (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC0_START_SAMPLE_IDX                  (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC0_START_SAMPLE_IDX                  (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC0_BASE_ADDR_IDX                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC0_BASE_ADDR_IDX                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC0_BASE_ADDR_IDX                     (0x0000FFFF)

// ---------- DBRP_DMA_CH4_CTRL_DATA_CC0 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_CC0_LENGTH                                 (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_CC0_LENGTH                                 (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_CC0_LENGTH                                 (0x0000FFFF)

// ---------- DBRP_DMA_CH4_CTRL_CNFG_PING_CC1 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC1_START_SAMPLE_IDX                  (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC1_START_SAMPLE_IDX                  (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC1_START_SAMPLE_IDX                  (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC1_BASE_ADDR_IDX                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC1_BASE_ADDR_IDX                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PING_CC1_BASE_ADDR_IDX                     (0x0000FFFF)

// ---------- DBRP_DMA_CH4_CTRL_CNFG_PONG_CC1 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC1_START_SAMPLE_IDX                  (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC1_START_SAMPLE_IDX                  (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC1_START_SAMPLE_IDX                  (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC1_BASE_ADDR_IDX                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC1_BASE_ADDR_IDX                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_PONG_CC1_BASE_ADDR_IDX                     (0x0000FFFF)

// ---------- DBRP_DMA_CH4_CTRL_CNFG_CC1 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_CC1_LENGTH                                 (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_CC1_LENGTH                                 (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_CNFG_CC1_LENGTH                                 (0x0000FFFF)

// ---------- DBRP_DMA_CH4_CTRL_DATA_PING_CC1 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC1_START_SAMPLE_IDX                  (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC1_START_SAMPLE_IDX                  (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC1_START_SAMPLE_IDX                  (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC1_BASE_ADDR_IDX                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC1_BASE_ADDR_IDX                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PING_CC1_BASE_ADDR_IDX                     (0x0000FFFF)

// ---------- DBRP_DMA_CH4_CTRL_DATA_PONG_CC1 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC1_START_SAMPLE_IDX                  (16)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC1_START_SAMPLE_IDX                  (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC1_START_SAMPLE_IDX                  (0xFFFF0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC1_BASE_ADDR_IDX                     (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC1_BASE_ADDR_IDX                     (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_PONG_CC1_BASE_ADDR_IDX                     (0x0000FFFF)

// ---------- DBRP_DMA_CH4_CTRL_DATA_CC1 bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_CC1_LENGTH                                 (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_CC1_LENGTH                                 (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_CTRL_DATA_CC1_LENGTH                                 (0x0000FFFF)

// ---------- DBRP_DMA_CH0_DBG_TIME bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIME_WINDOW                                      (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIME_WINDOW                                      (28)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIME_WINDOW                                      (0xFFFFFFF0)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIME_DET                                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIME_DET                                         (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIME_DET                                         (0x00000001)

// ---------- DBRP_DMA_CH1_DBG_TIME bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIME_WINDOW                                      (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIME_WINDOW                                      (28)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIME_WINDOW                                      (0xFFFFFFF0)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIME_DET                                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIME_DET                                         (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIME_DET                                         (0x00000001)

// ---------- DBRP_DMA_CH2_DBG_TIME bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIME_WINDOW                                      (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIME_WINDOW                                      (28)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIME_WINDOW                                      (0xFFFFFFF0)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIME_DET                                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIME_DET                                         (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIME_DET                                         (0x00000001)

// ---------- DBRP_DMA_CH3_DBG_TIME bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIME_WINDOW                                      (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIME_WINDOW                                      (28)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIME_WINDOW                                      (0xFFFFFFF0)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIME_DET                                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIME_DET                                         (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIME_DET                                         (0x00000001)

// ---------- DBRP_DMA_CH4_DBG_TIME bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIME_WINDOW                                      (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIME_WINDOW                                      (28)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIME_WINDOW                                      (0xFFFFFFF0)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIME_DET                                         (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIME_DET                                         (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIME_DET                                         (0x00000001)

// ---------- DBRP_DMA_CH0_DBG_TIMEOUT bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIMEOUT_CNT_LATCH                                (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIMEOUT_CNT_LATCH                                (28)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIMEOUT_CNT_LATCH                                (0xFFFFFFF0)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIMEOUT_FLG                                      (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIMEOUT_FLG                                      (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TIMEOUT_FLG                                      (0x00000001)

// ---------- DBRP_DMA_CH1_DBG_TIMEOUT bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIMEOUT_CNT_LATCH                                (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIMEOUT_CNT_LATCH                                (28)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIMEOUT_CNT_LATCH                                (0xFFFFFFF0)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIMEOUT_FLG                                      (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIMEOUT_FLG                                      (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TIMEOUT_FLG                                      (0x00000001)

// ---------- DBRP_DMA_CH2_DBG_TIMEOUT bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIMEOUT_CNT_LATCH                                (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIMEOUT_CNT_LATCH                                (28)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIMEOUT_CNT_LATCH                                (0xFFFFFFF0)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIMEOUT_FLG                                      (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIMEOUT_FLG                                      (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TIMEOUT_FLG                                      (0x00000001)

// ---------- DBRP_DMA_CH3_DBG_TIMEOUT bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIMEOUT_CNT_LATCH                                (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIMEOUT_CNT_LATCH                                (28)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIMEOUT_CNT_LATCH                                (0xFFFFFFF0)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIMEOUT_FLG                                      (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIMEOUT_FLG                                      (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TIMEOUT_FLG                                      (0x00000001)

// ---------- DBRP_DMA_CH4_DBG_TIMEOUT bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIMEOUT_CNT_LATCH                                (4)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIMEOUT_CNT_LATCH                                (28)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIMEOUT_CNT_LATCH                                (0xFFFFFFF0)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIMEOUT_FLG                                      (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIMEOUT_FLG                                      (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TIMEOUT_FLG                                      (0x00000001)

// ---------- DBRP_DMA_FSM_DBG bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH4_CS                                           (21)
#define L_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH4_CS                                           (4)
#define M_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH4_CS                                           (0x01E00000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH3_CS                                           (17)
#define L_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH3_CS                                           (4)
#define M_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH3_CS                                           (0x001E0000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH2_CS                                           (13)
#define L_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH2_CS                                           (4)
#define M_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH2_CS                                           (0x0001E000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH1_CS                                           (9)
#define L_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH1_CS                                           (4)
#define M_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH1_CS                                           (0x00001E00)
#define P_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH0_CS                                           (5)
#define L_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH0_CS                                           (4)
#define M_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_CH0_CS                                           (0x000001E0)
#define P_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_DMA_CS                                           (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_DMA_CS                                           (5)
#define M_RXBRP_WCT_DMA_DBRP_DMA_FSM_DBG_DMA_CS                                           (0x0000001F)

// ---------- DBRP_DMA_CTRL_DBG bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG_DATA_RDY                                        (3)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG_DATA_RDY                                        (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG_DATA_RDY                                        (0x00000008)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG_REQ                                             (2)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG_REQ                                             (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG_REQ                                             (0x00000004)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG_REQ_RDY                                         (1)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG_REQ_RDY                                         (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG_REQ_RDY                                         (0x00000002)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG_DATA_VLD                                        (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG_DATA_VLD                                        (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CTRL_DBG_DATA_VLD                                        (0x00000001)

// ---------- DBRP_DMA_CH0_DBG_TRANS bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TRANS_DONE_LATCH                                 (31)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TRANS_DONE_LATCH                                 (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TRANS_DONE_LATCH                                 (0x80000000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TRANS_NUM                                        (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TRANS_NUM                                        (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH0_DBG_TRANS_NUM                                        (0x0000FFFF)

// ---------- DBRP_DMA_CH1_DBG_TRANS bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TRANS_DONE_LATCH                                 (31)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TRANS_DONE_LATCH                                 (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TRANS_DONE_LATCH                                 (0x80000000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TRANS_NUM                                        (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TRANS_NUM                                        (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH1_DBG_TRANS_NUM                                        (0x0000FFFF)

// ---------- DBRP_DMA_CH2_DBG_TRANS bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TRANS_DONE_LATCH                                 (31)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TRANS_DONE_LATCH                                 (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TRANS_DONE_LATCH                                 (0x80000000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TRANS_NUM                                        (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TRANS_NUM                                        (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH2_DBG_TRANS_NUM                                        (0x0000FFFF)

// ---------- DBRP_DMA_CH3_DBG_TRANS bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TRANS_DONE_LATCH                                 (31)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TRANS_DONE_LATCH                                 (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TRANS_DONE_LATCH                                 (0x80000000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TRANS_NUM                                        (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TRANS_NUM                                        (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH3_DBG_TRANS_NUM                                        (0x0000FFFF)

// ---------- DBRP_DMA_CH4_DBG_TRANS bit-field ----------
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TRANS_DONE_LATCH                                 (31)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TRANS_DONE_LATCH                                 (1)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TRANS_DONE_LATCH                                 (0x80000000)
#define P_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TRANS_NUM                                        (0)
#define L_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TRANS_NUM                                        (16)
#define M_RXBRP_WCT_DMA_DBRP_DMA_CH4_DBG_TRANS_NUM                                        (0x0000FFFF)

#endif // __RXBRP_WCT_DMA_H__
