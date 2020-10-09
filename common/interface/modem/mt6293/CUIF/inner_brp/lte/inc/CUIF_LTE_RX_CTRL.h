#ifndef __CUIF_LTE_RX_CTRL_H__
#define __CUIF_LTE_RX_CTRL_H__

// ----------------- CUIF_LTE_RX_CTRL Register Definition -------------------
typedef volatile struct {
    kal_uint32 RX_CMD[2];                                                                 // 0x0000..0x0004
    kal_uint32 RX_RPT0;                                                                   // 0x0008
    kal_uint32 RX_RPT1;                                                                   // 0x000C
    kal_uint32 CSI_CMD[2];                                                                // 0x0010..0x0014
    kal_uint32 CSI_COMM_INFO2[2];                                                         // 0x0018..0x001C
    kal_uint32 CSI_RPT[2];                                                                // 0x0020..0x0024
    kal_uint32 CTRLCH_RPT[2];                                                             // 0x0028..0x002C
    kal_uint32 AFC_VLD_RPT;                                                               // 0x0030
} CUIF_LTE_RX_CTRL_REGS, *PCUIF_LTE_RX_CTRL_REGS;

// ---------- CUIF_LTE_RX_CTRL word-offset  ----------
#define O_CUIF_LTE_RX_CTRL_RX_CMD(i)                                                      (0 + (i))
#define O_CUIF_LTE_RX_CTRL_RX_RPT0                                                        (2)
#define O_CUIF_LTE_RX_CTRL_RX_RPT1                                                        (3)
#define O_CUIF_LTE_RX_CTRL_CSI_CMD(i)                                                     (4 + (i))
#define O_CUIF_LTE_RX_CTRL_CSI_COMM_INFO2(i)                                              (6 + (i))
#define O_CUIF_LTE_RX_CTRL_CSI_RPT(i)                                                     (8 + (i))
#define O_CUIF_LTE_RX_CTRL_CTRLCH_RPT(i)                                                  (10 + (i))
#define O_CUIF_LTE_RX_CTRL_AFC_VLD_RPT                                                    (12)

// ---------- RX_CMD bit-field ----------
#define P_CUIF_LTE_RX_CTRL_RX_CMD_CMD_VLD                                                 (7)
#define L_CUIF_LTE_RX_CTRL_RX_CMD_CMD_VLD                                                 (1)
#define M_CUIF_LTE_RX_CTRL_RX_CMD_CMD_VLD                                                 (0x00000080)
#define P_CUIF_LTE_RX_CTRL_RX_CMD_SEQ_NUM                                                 (0)
#define L_CUIF_LTE_RX_CTRL_RX_CMD_SEQ_NUM                                                 (4)
#define M_CUIF_LTE_RX_CTRL_RX_CMD_SEQ_NUM                                                 (0x0000000F)

// ---------- RX_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_STATIC                                         (30)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_STATIC                                         (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_STATIC                                         (0x40000000)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_RLM                                            (28)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_RLM                                            (2)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_RLM                                            (0x30000000)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_NE                                             (24)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_NE                                             (2)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_NE                                             (0x03000000)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_MD                                             (22)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_MD                                             (2)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_MD                                             (0x00C00000)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_TDE                                            (20)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_TDE                                            (2)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_TDE                                            (0x00300000)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_RTP                                            (18)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_RTP                                            (2)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_RTP                                            (0x000C0000)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_FWS                                            (16)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_FWS                                            (2)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_FWS                                            (0x00030000)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_AFC                                            (14)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_AFC                                            (2)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_NUM_AFC                                            (0x0000C000)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_TIS                                            (12)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_TIS                                            (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_TIS                                            (0x00001000)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_RSSI                                           (11)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_RSSI                                           (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_RSSI                                           (0x00000800)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_TBMIMO                                         (10)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_TBMIMO                                         (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_TBMIMO                                         (0x00000400)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_LORX                                           (9)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_LORX                                           (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_LORX                                           (0x00000200)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_NBI                                            (8)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_NBI                                            (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_NBI                                            (0x00000100)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_RLM                                            (7)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_RLM                                            (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_RLM                                            (0x00000080)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_RRM                                            (6)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_RRM                                            (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_RRM                                            (0x00000040)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_NE                                             (5)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_NE                                             (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_NE                                             (0x00000020)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_MD                                             (4)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_MD                                             (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_MD                                             (0x00000010)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_TDE                                            (3)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_TDE                                            (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_TDE                                            (0x00000008)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_RTP                                            (2)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_RTP                                            (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_RTP                                            (0x00000004)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_FWS                                            (1)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_FWS                                            (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_FWS                                            (0x00000002)
#define P_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_AFC                                            (0)
#define L_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_AFC                                            (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT0_RPT_VLD_AFC                                            (0x00000001)

// ---------- RX_RPT1 bit-field ----------
#define P_CUIF_LTE_RX_CTRL_RX_RPT1_RPT_NUM_FWS                                            (16)
#define L_CUIF_LTE_RX_CTRL_RX_RPT1_RPT_NUM_FWS                                            (2)
#define M_CUIF_LTE_RX_CTRL_RX_RPT1_RPT_NUM_FWS                                            (0x00030000)
#define P_CUIF_LTE_RX_CTRL_RX_RPT1_RPT_VLD_FWS                                            (1)
#define L_CUIF_LTE_RX_CTRL_RX_RPT1_RPT_VLD_FWS                                            (1)
#define M_CUIF_LTE_RX_CTRL_RX_RPT1_RPT_VLD_FWS                                            (0x00000002)

// ---------- CSI_CMD bit-field ----------
#define P_CUIF_LTE_RX_CTRL_CSI_CMD_CMD_VLD                                                (0)
#define L_CUIF_LTE_RX_CTRL_CSI_CMD_CMD_VLD                                                (1)
#define M_CUIF_LTE_RX_CTRL_CSI_CMD_CMD_VLD                                                (0x00000001)

// ---------- CSI_COMM_INFO2 bit-field ----------
#define P_CUIF_LTE_RX_CTRL_CSI_COMM_INFO2_CSI_TX_RPT                                      (0)
#define L_CUIF_LTE_RX_CTRL_CSI_COMM_INFO2_CSI_TX_RPT                                      (1)
#define M_CUIF_LTE_RX_CTRL_CSI_COMM_INFO2_CSI_TX_RPT                                      (0x00000001)

// ---------- CSI_RPT bit-field ----------
#define P_CUIF_LTE_RX_CTRL_CSI_RPT_RPT_VLD                                                (0)
#define L_CUIF_LTE_RX_CTRL_CSI_RPT_RPT_VLD                                                (1)
#define M_CUIF_LTE_RX_CTRL_CSI_RPT_RPT_VLD                                                (0x00000001)

// ---------- CTRLCH_RPT bit-field ----------
#define P_CUIF_LTE_RX_CTRL_CTRLCH_RPT_RPT_VLD                                             (0)
#define L_CUIF_LTE_RX_CTRL_CTRLCH_RPT_RPT_VLD                                             (1)
#define M_CUIF_LTE_RX_CTRL_CTRLCH_RPT_RPT_VLD                                             (0x00000001)

// ---------- AFC_VLD_RPT bit-field ----------
#define P_CUIF_LTE_RX_CTRL_AFC_VLD_RPT_RPT_VLD_OC1                                        (3)
#define L_CUIF_LTE_RX_CTRL_AFC_VLD_RPT_RPT_VLD_OC1                                        (1)
#define M_CUIF_LTE_RX_CTRL_AFC_VLD_RPT_RPT_VLD_OC1                                        (0x00000008)
#define P_CUIF_LTE_RX_CTRL_AFC_VLD_RPT_RPT_VLD_OC0                                        (2)
#define L_CUIF_LTE_RX_CTRL_AFC_VLD_RPT_RPT_VLD_OC0                                        (1)
#define M_CUIF_LTE_RX_CTRL_AFC_VLD_RPT_RPT_VLD_OC0                                        (0x00000004)
#define P_CUIF_LTE_RX_CTRL_AFC_VLD_RPT_RPT_VLD_CC1                                        (1)
#define L_CUIF_LTE_RX_CTRL_AFC_VLD_RPT_RPT_VLD_CC1                                        (1)
#define M_CUIF_LTE_RX_CTRL_AFC_VLD_RPT_RPT_VLD_CC1                                        (0x00000002)
#define P_CUIF_LTE_RX_CTRL_AFC_VLD_RPT_RPT_VLD_CC0                                        (0)
#define L_CUIF_LTE_RX_CTRL_AFC_VLD_RPT_RPT_VLD_CC0                                        (1)
#define M_CUIF_LTE_RX_CTRL_AFC_VLD_RPT_RPT_VLD_CC0                                        (0x00000001)

#endif // __CUIF_LTE_RX_CTRL_H__
