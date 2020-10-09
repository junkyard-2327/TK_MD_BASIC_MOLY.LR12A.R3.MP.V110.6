#ifndef __CUIF_LTE_RX_COMM_RPT_H__
#define __CUIF_LTE_RX_COMM_RPT_H__

// ----------------- CUIF_LTE_RX_COMM_RPT Register Definition -------------------
typedef volatile struct {
    kal_uint32 AFC_RPT1;                                                                  // 0x0000
    kal_uint32 FWS_RPT0;                                                                  // 0x0004
    kal_uint32 FWS_RPT1;                                                                  // 0x0008
    kal_uint32 RLM_RPT0;                                                                  // 0x000C
    kal_uint32 LORX_RPT0;                                                                 // 0x0010
    kal_uint32 TBMIMO_RPT0;                                                               // 0x0014
    kal_uint32 TIS_RSSI_MAN_RX0;                                                          // 0x0018
    kal_uint32 TIS_RSSI_MAN_RX1;                                                          // 0x001C
    kal_uint32 TIS_RSSI_EXP;                                                              // 0x0020
    kal_uint32 TIS_PHASE;                                                                 // 0x0024
} CUIF_LTE_RX_COMM_RPT_REGS, *PCUIF_LTE_RX_COMM_RPT_REGS;

// ---------- CUIF_LTE_RX_COMM_RPT word-offset  ----------
#define O_CUIF_LTE_RX_COMM_RPT_AFC_RPT1                                                   (0)
#define O_CUIF_LTE_RX_COMM_RPT_FWS_RPT0                                                   (1)
#define O_CUIF_LTE_RX_COMM_RPT_FWS_RPT1                                                   (2)
#define O_CUIF_LTE_RX_COMM_RPT_RLM_RPT0                                                   (3)
#define O_CUIF_LTE_RX_COMM_RPT_LORX_RPT0                                                  (4)
#define O_CUIF_LTE_RX_COMM_RPT_TBMIMO_RPT0                                                (5)
#define O_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_MAN_RX0                                           (6)
#define O_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_MAN_RX1                                           (7)
#define O_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_EXP                                               (8)
#define O_CUIF_LTE_RX_COMM_RPT_TIS_PHASE                                                  (9)

// ---------- AFC_RPT1 bit-field ----------
#define P_CUIF_LTE_RX_COMM_RPT_AFC_RPT1_AFC_REL                                           (5)
#define L_CUIF_LTE_RX_COMM_RPT_AFC_RPT1_AFC_REL                                           (1)
#define M_CUIF_LTE_RX_COMM_RPT_AFC_RPT1_AFC_REL                                           (0x00000020)
#define P_CUIF_LTE_RX_COMM_RPT_AFC_RPT1_NBR_RPT                                           (4)
#define L_CUIF_LTE_RX_COMM_RPT_AFC_RPT1_NBR_RPT                                           (1)
#define M_CUIF_LTE_RX_COMM_RPT_AFC_RPT1_NBR_RPT                                           (0x00000010)
#define P_CUIF_LTE_RX_COMM_RPT_AFC_RPT1_SEQ_NUM                                           (0)
#define L_CUIF_LTE_RX_COMM_RPT_AFC_RPT1_SEQ_NUM                                           (4)
#define M_CUIF_LTE_RX_COMM_RPT_AFC_RPT1_SEQ_NUM                                           (0x0000000F)

// ---------- FWS_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_COMM_RPT_FWS_RPT0_RTP_TIMING_OFFSET                                 (16)
#define L_CUIF_LTE_RX_COMM_RPT_FWS_RPT0_RTP_TIMING_OFFSET                                 (16)
#define M_CUIF_LTE_RX_COMM_RPT_FWS_RPT0_RTP_TIMING_OFFSET                                 (0xFFFF0000)
#define P_CUIF_LTE_RX_COMM_RPT_FWS_RPT0_TDE_TIMING_OFFSET                                 (0)
#define L_CUIF_LTE_RX_COMM_RPT_FWS_RPT0_TDE_TIMING_OFFSET                                 (16)
#define M_CUIF_LTE_RX_COMM_RPT_FWS_RPT0_TDE_TIMING_OFFSET                                 (0x0000FFFF)

// ---------- FWS_RPT1 bit-field ----------
#define P_CUIF_LTE_RX_COMM_RPT_FWS_RPT1_RTP_PDP_RELIA                                     (1)
#define L_CUIF_LTE_RX_COMM_RPT_FWS_RPT1_RTP_PDP_RELIA                                     (1)
#define M_CUIF_LTE_RX_COMM_RPT_FWS_RPT1_RTP_PDP_RELIA                                     (0x00000002)
#define P_CUIF_LTE_RX_COMM_RPT_FWS_RPT1_TDE_PDP_RELIA                                     (0)
#define L_CUIF_LTE_RX_COMM_RPT_FWS_RPT1_TDE_PDP_RELIA                                     (1)
#define M_CUIF_LTE_RX_COMM_RPT_FWS_RPT1_TDE_PDP_RELIA                                     (0x00000001)

// ---------- RLM_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_COMM_RPT_RLM_RPT0_RLM_OOS_SNR                                       (16)
#define L_CUIF_LTE_RX_COMM_RPT_RLM_RPT0_RLM_OOS_SNR                                       (16)
#define M_CUIF_LTE_RX_COMM_RPT_RLM_RPT0_RLM_OOS_SNR                                       (0xFFFF0000)
#define P_CUIF_LTE_RX_COMM_RPT_RLM_RPT0_RLM_IS_SNR                                        (0)
#define L_CUIF_LTE_RX_COMM_RPT_RLM_RPT0_RLM_IS_SNR                                        (16)
#define M_CUIF_LTE_RX_COMM_RPT_RLM_RPT0_RLM_IS_SNR                                        (0x0000FFFF)

// ---------- LORX_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_TRIG_FLAG                                   (30)
#define L_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_TRIG_FLAG                                   (1)
#define M_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_TRIG_FLAG                                   (0x40000000)
#define P_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_NOT_TRIG_REASON                             (20)
#define L_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_NOT_TRIG_REASON                             (8)
#define M_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_NOT_TRIG_REASON                             (0x0FF00000)
#define P_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_ABORT_CHANNEL                               (16)
#define L_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_ABORT_CHANNEL                               (2)
#define M_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_ABORT_CHANNEL                               (0x00030000)
#define P_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_RPT_SF                                      (8)
#define L_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_RPT_SF                                      (4)
#define M_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_RPT_SF                                      (0x00000F00)
#define P_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_TRIG_SYMBOL_CC1                             (4)
#define L_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_TRIG_SYMBOL_CC1                             (4)
#define M_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_TRIG_SYMBOL_CC1                             (0x000000F0)
#define P_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_TRIG_SYMBOL_CC0                             (0)
#define L_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_TRIG_SYMBOL_CC0                             (4)
#define M_CUIF_LTE_RX_COMM_RPT_LORX_RPT0_LORX_TRIG_SYMBOL_CC0                             (0x0000000F)

// ---------- TBMIMO_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_COMM_RPT_TBMIMO_RPT0_NUM_LITTLE_GAIN                                (4)
#define L_CUIF_LTE_RX_COMM_RPT_TBMIMO_RPT0_NUM_LITTLE_GAIN                                (4)
#define M_CUIF_LTE_RX_COMM_RPT_TBMIMO_RPT0_NUM_LITTLE_GAIN                                (0x000000F0)
#define P_CUIF_LTE_RX_COMM_RPT_TBMIMO_RPT0_NUM_RPT_SUBFRM                                 (0)
#define L_CUIF_LTE_RX_COMM_RPT_TBMIMO_RPT0_NUM_RPT_SUBFRM                                 (4)
#define M_CUIF_LTE_RX_COMM_RPT_TBMIMO_RPT0_NUM_RPT_SUBFRM                                 (0x0000000F)

// ---------- TIS_RSSI_MAN_RX0 bit-field ----------
#define P_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_MAN_RX0_MAN                                       (0)
#define L_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_MAN_RX0_MAN                                       (32)
#define M_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_MAN_RX0_MAN                                       (0xFFFFFFFF)

// ---------- TIS_RSSI_MAN_RX1 bit-field ----------
#define P_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_MAN_RX1_MAN                                       (0)
#define L_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_MAN_RX1_MAN                                       (32)
#define M_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_MAN_RX1_MAN                                       (0xFFFFFFFF)

// ---------- TIS_RSSI_EXP bit-field ----------
#define P_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_EXP_EXP1                                          (16)
#define L_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_EXP_EXP1                                          (16)
#define M_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_EXP_EXP1                                          (0xFFFF0000)
#define P_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_EXP_EXP0                                          (0)
#define L_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_EXP_EXP0                                          (16)
#define M_CUIF_LTE_RX_COMM_RPT_TIS_RSSI_EXP_EXP0                                          (0x0000FFFF)

// ---------- TIS_PHASE bit-field ----------
#define P_CUIF_LTE_RX_COMM_RPT_TIS_PHASE_REL_PHASE                                        (0)
#define L_CUIF_LTE_RX_COMM_RPT_TIS_PHASE_REL_PHASE                                        (32)
#define M_CUIF_LTE_RX_COMM_RPT_TIS_PHASE_REL_PHASE                                        (0xFFFFFFFF)

#endif // __CUIF_LTE_RX_COMM_RPT_H__
