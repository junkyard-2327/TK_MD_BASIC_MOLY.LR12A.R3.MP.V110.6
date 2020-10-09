#ifndef __CUIF_LTE_RX_CC_RPT_H__
#define __CUIF_LTE_RX_CC_RPT_H__

// ----------------- CUIF_LTE_RX_CC_RPT Register Definition -------------------
typedef volatile struct {
    kal_uint32 AFC_RPT0;                                                                  // 0x0000
    kal_uint32 AFC_RPT1;                                                                  // 0x0004
    kal_uint32 AFC_RPT2;                                                                  // 0x0008
    kal_uint32 AFC_RPT3;                                                                  // 0x000C
    kal_uint32 AFC_RPT4;                                                                  // 0x0010
    kal_uint32 AFC_RPT5;                                                                  // 0x0014
    kal_uint32 FWS_RPT0;                                                                  // 0x0018
    kal_uint32 FWS_RPT1;                                                                  // 0x001C
    kal_uint32 FWS_RPT2;                                                                  // 0x0020
    kal_uint32 FWS_RPT3;                                                                  // 0x0024
    kal_uint32 FWS_RPT4;                                                                  // 0x0028
    kal_uint32 FWS_RPT5;                                                                  // 0x002C
    kal_uint32 MD_RPT0;                                                                   // 0x0030
    kal_uint32 NE_RPT0;                                                                   // 0x0034
    kal_uint32 NE_RPT1;                                                                   // 0x0038
    kal_uint32 NE_RPT2;                                                                   // 0x003C
    kal_uint32 NE_RPT3;                                                                   // 0x0040
    kal_uint32 NE_RPT4;                                                                   // 0x0044
    kal_uint32 RRM_RPT0;                                                                  // 0x0048
    kal_uint32 RRM_RPT1;                                                                  // 0x004C
    kal_uint32 RRM_RPT2;                                                                  // 0x0050
    kal_uint32 RRM_RPT3;                                                                  // 0x0054
    kal_uint32 RRM_RPT4;                                                                  // 0x0058
    kal_uint32 RRM_RPT5;                                                                  // 0x005C
    kal_uint32 RRM_RPT6;                                                                  // 0x0060
    kal_uint32 RRM_RSSI_MAN_RX0;                                                          // 0x0064
    kal_uint32 RRM_RSSI_MAN_RX1;                                                          // 0x0068
    kal_uint32 RRM_RSSI_EXP;                                                              // 0x006C
    kal_uint32 RRM_ALL_SYM_RSSI_MAN_RX0;                                                  // 0x0070
    kal_uint32 RRM_ALL_SYM_RSSI_MAN_RX1;                                                  // 0x0074
    kal_uint32 RRM_ALL_SYM_RSSI_EXP;                                                      // 0x0078
    kal_uint32 RRM_MBSFN_RSSI_MAN_RX0;                                                    // 0x007C
    kal_uint32 RRM_MBSFN_RSSI_MAN_RX1;                                                    // 0x0080
    kal_uint32 RRM_MBSFN_RSSI_EXP;                                                        // 0x0084
    kal_uint32 RRM_MBSFN_RSRP_MAN_RX0;                                                    // 0x0088
    kal_uint32 RRM_MBSFN_RSRP_MAN_RX1;                                                    // 0x008C
    kal_uint32 RRM_MBSFN_RSRP_EXP;                                                        // 0x0090
    kal_uint32 NBI_RPT0;                                                                  // 0x0094
    kal_uint32 NBI_SPUR_PWR_RX0;                                                          // 0x0098
    kal_uint32 NBI_SPUR_PWR_RX1;                                                          // 0x009C
    kal_uint32 RRM_RSSI_MEAS_MAN_RX0;                                                     // 0x00A0
    kal_uint32 RRM_RSSI_MEAS_MAN_RX1;                                                     // 0x00A4
    kal_uint32 RRM_RSSI_MEAS_EXP;                                                         // 0x00A8
    kal_uint32 RRM_ALL_SYM_RSSI_MEAS_MAN_RX0;                                             // 0x00AC
    kal_uint32 RRM_ALL_SYM_RSSI_MEAS_MAN_RX1;                                             // 0x00B0
    kal_uint32 RRM_ALL_SYM_RSSI_MEAS_EXP;                                                 // 0x00B4
    kal_uint32 CSI_RPT0;                                                                  // 0x00B8
    kal_uint32 RRM_RPT7;                                                                  // 0x00BC
    kal_uint32 RRM_RPT8;                                                                  // 0x00C0
    kal_uint32 RRM_RPT9;                                                                  // 0x00C4
} CUIF_LTE_RX_CC_RPT_REGS, *PCUIF_LTE_RX_CC_RPT_REGS;

// ---------- CUIF_LTE_RX_CC_RPT word-offset  ----------
#define O_CUIF_LTE_RX_CC_RPT_AFC_RPT0                                                     (0)
#define O_CUIF_LTE_RX_CC_RPT_AFC_RPT1                                                     (1)
#define O_CUIF_LTE_RX_CC_RPT_AFC_RPT2                                                     (2)
#define O_CUIF_LTE_RX_CC_RPT_AFC_RPT3                                                     (3)
#define O_CUIF_LTE_RX_CC_RPT_AFC_RPT4                                                     (4)
#define O_CUIF_LTE_RX_CC_RPT_AFC_RPT5                                                     (5)
#define O_CUIF_LTE_RX_CC_RPT_FWS_RPT0                                                     (6)
#define O_CUIF_LTE_RX_CC_RPT_FWS_RPT1                                                     (7)
#define O_CUIF_LTE_RX_CC_RPT_FWS_RPT2                                                     (8)
#define O_CUIF_LTE_RX_CC_RPT_FWS_RPT3                                                     (9)
#define O_CUIF_LTE_RX_CC_RPT_FWS_RPT4                                                     (10)
#define O_CUIF_LTE_RX_CC_RPT_FWS_RPT5                                                     (11)
#define O_CUIF_LTE_RX_CC_RPT_MD_RPT0                                                      (12)
#define O_CUIF_LTE_RX_CC_RPT_NE_RPT0                                                      (13)
#define O_CUIF_LTE_RX_CC_RPT_NE_RPT1                                                      (14)
#define O_CUIF_LTE_RX_CC_RPT_NE_RPT2                                                      (15)
#define O_CUIF_LTE_RX_CC_RPT_NE_RPT3                                                      (16)
#define O_CUIF_LTE_RX_CC_RPT_NE_RPT4                                                      (17)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RPT0                                                     (18)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RPT1                                                     (19)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RPT2                                                     (20)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RPT3                                                     (21)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RPT4                                                     (22)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RPT5                                                     (23)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RPT6                                                     (24)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MAN_RX0                                             (25)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MAN_RX1                                             (26)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RSSI_EXP                                                 (27)
#define O_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MAN_RX0                                     (28)
#define O_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MAN_RX1                                     (29)
#define O_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_EXP                                         (30)
#define O_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_MAN_RX0                                       (31)
#define O_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_MAN_RX1                                       (32)
#define O_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_EXP                                           (33)
#define O_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_MAN_RX0                                       (34)
#define O_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_MAN_RX1                                       (35)
#define O_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_EXP                                           (36)
#define O_CUIF_LTE_RX_CC_RPT_NBI_RPT0                                                     (37)
#define O_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0                                             (38)
#define O_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1                                             (39)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_MAN_RX0                                        (40)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_MAN_RX1                                        (41)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_EXP                                            (42)
#define O_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_MAN_RX0                                (43)
#define O_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_MAN_RX1                                (44)
#define O_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_EXP                                    (45)
#define O_CUIF_LTE_RX_CC_RPT_CSI_RPT0                                                     (46)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RPT7                                                     (47)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RPT8                                                     (48)
#define O_CUIF_LTE_RX_CC_RPT_RRM_RPT9                                                     (49)

// ---------- AFC_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT0_FE_RXNCO                                            (0)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT0_FE_RXNCO                                            (32)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT0_FE_RXNCO                                            (0xFFFFFFFF)

// ---------- AFC_RPT1 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT1_FE_RXNCO_MBSFN                                      (0)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT1_FE_RXNCO_MBSFN                                      (32)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT1_FE_RXNCO_MBSFN                                      (0xFFFFFFFF)

// ---------- AFC_RPT2 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT2_FE_TXNCO                                            (0)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT2_FE_TXNCO                                            (32)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT2_FE_TXNCO                                            (0xFFFFFFFF)

// ---------- AFC_RPT3 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_RPT_VLD                                         (31)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_RPT_VLD                                         (1)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_RPT_VLD                                         (0x80000000)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_SIM_IDX                                             (29)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_SIM_IDX                                             (2)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_SIM_IDX                                             (0x60000000)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_MBMS_AREA_IDX                                       (14)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_MBMS_AREA_IDX                                       (8)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_MBMS_AREA_IDX                                       (0x003FC000)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_MBMS_BUF_IDX                                        (11)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_MBMS_BUF_IDX                                        (3)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_MBMS_BUF_IDX                                        (0x00003800)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_NONFRZ_TXAFC_RDY                                    (10)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_NONFRZ_TXAFC_RDY                                    (1)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_NONFRZ_TXAFC_RDY                                    (0x00000400)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_MBSFN_FRZ_FLAG                                      (9)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_MBSFN_FRZ_FLAG                                      (1)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_MBSFN_FRZ_FLAG                                      (0x00000200)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_SRV_FRZ_FLAG                                        (8)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_SRV_FRZ_FLAG                                        (1)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_SRV_FRZ_FLAG                                        (0x00000100)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_SRV_IS_MASTER                                   (7)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_SRV_IS_MASTER                                   (1)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_SRV_IS_MASTER                                   (0x00000080)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_UPDATE_RDY                                      (6)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_UPDATE_RDY                                      (1)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_UPDATE_RDY                                      (0x00000040)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_SLOW_MODE                                       (5)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_SLOW_MODE                                       (1)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_SLOW_MODE                                       (0x00000020)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_LOCK                                            (4)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_LOCK                                            (1)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_AFC_LOCK                                            (0x00000010)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_NORMAL_RSFOE                                        (3)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_NORMAL_RSFOE                                        (1)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_NORMAL_RSFOE                                        (0x00000008)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_TXAFC_RDY                                           (2)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_TXAFC_RDY                                           (1)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_TXAFC_RDY                                           (0x00000004)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_RXAFC_RDY                                           (1)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_RXAFC_RDY                                           (1)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_RXAFC_RDY                                           (0x00000002)
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT3_MBSFN_AFC_RDY                                       (0)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT3_MBSFN_AFC_RDY                                       (1)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT3_MBSFN_AFC_RDY                                       (0x00000001)

// ---------- AFC_RPT4 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT4_FQ_ERR_AVG                                          (0)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT4_FQ_ERR_AVG                                          (32)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT4_FQ_ERR_AVG                                          (0xFFFFFFFF)

// ---------- AFC_RPT5 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_AFC_RPT5_FOE_ONE_SHOT                                        (0)
#define L_CUIF_LTE_RX_CC_RPT_AFC_RPT5_FOE_ONE_SHOT                                        (32)
#define M_CUIF_LTE_RX_CC_RPT_AFC_RPT5_FOE_ONE_SHOT                                        (0xFFFFFFFF)

// ---------- FWS_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT0_SF_POS_RX1                                          (16)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT0_SF_POS_RX1                                          (16)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT0_SF_POS_RX1                                          (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT0_SF_POS_RX0                                          (0)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT0_SF_POS_RX0                                          (16)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT0_SF_POS_RX0                                          (0x0000FFFF)

// ---------- FWS_RPT1 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT1_SF_TIMING_ERR_OST_RX1                               (16)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT1_SF_TIMING_ERR_OST_RX1                               (16)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT1_SF_TIMING_ERR_OST_RX1                               (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT1_SF_TIMING_ERR_OST_RX0                               (0)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT1_SF_TIMING_ERR_OST_RX0                               (16)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT1_SF_TIMING_ERR_OST_RX0                               (0x0000FFFF)

// ---------- FWS_RPT2 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT2_LONG_TERM_CIR_MAX_RX1                               (16)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT2_LONG_TERM_CIR_MAX_RX1                               (16)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT2_LONG_TERM_CIR_MAX_RX1                               (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT2_LONG_TERM_CIR_MAX_RX0                               (0)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT2_LONG_TERM_CIR_MAX_RX0                               (16)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT2_LONG_TERM_CIR_MAX_RX0                               (0x0000FFFF)

// ---------- FWS_RPT3 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT3_ACQ_COUNTER                                         (24)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT3_ACQ_COUNTER                                         (3)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT3_ACQ_COUNTER                                         (0x07000000)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT3_SF_NUM                                              (20)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT3_SF_NUM                                              (4)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT3_SF_NUM                                              (0x00F00000)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT3_SIM_IDX                                             (18)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT3_SIM_IDX                                             (2)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT3_SIM_IDX                                             (0x000C0000)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT3_FWS_RELIABLE                                        (17)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT3_FWS_RELIABLE                                        (1)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT3_FWS_RELIABLE                                        (0x00020000)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT3_ACQ_DONE                                            (16)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT3_ACQ_DONE                                            (1)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT3_ACQ_DONE                                            (0x00010000)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT3_RX1_METHOD                                          (10)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT3_RX1_METHOD                                          (2)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT3_RX1_METHOD                                          (0x00000C00)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT3_RX0_METHOD                                          (8)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT3_RX0_METHOD                                          (2)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT3_RX0_METHOD                                          (0x00000300)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT3_RX1_STATUS                                          (6)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT3_RX1_STATUS                                          (2)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT3_RX1_STATUS                                          (0x000000C0)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT3_RX0_STATUS                                          (4)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT3_RX0_STATUS                                          (2)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT3_RX0_STATUS                                          (0x00000030)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT3_SET_IDX                                             (0)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT3_SET_IDX                                             (4)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT3_SET_IDX                                             (0x0000000F)

// ---------- FWS_RPT4 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT4_CIR_LEN_RX1                                         (16)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT4_CIR_LEN_RX1                                         (16)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT4_CIR_LEN_RX1                                         (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT4_CIR_LEN_RX0                                         (0)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT4_CIR_LEN_RX0                                         (16)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT4_CIR_LEN_RX0                                         (0x0000FFFF)

// ---------- FWS_RPT5 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT5_SHORT_TERM_CIR_MAX_DIFF_RX1                         (16)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT5_SHORT_TERM_CIR_MAX_DIFF_RX1                         (16)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT5_SHORT_TERM_CIR_MAX_DIFF_RX1                         (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_FWS_RPT5_SHORT_TERM_CIR_MAX_DIFF_RX0                         (0)
#define L_CUIF_LTE_RX_CC_RPT_FWS_RPT5_SHORT_TERM_CIR_MAX_DIFF_RX0                         (16)
#define M_CUIF_LTE_RX_CC_RPT_FWS_RPT5_SHORT_TERM_CIR_MAX_DIFF_RX0                         (0x0000FFFF)

// ---------- MD_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_MD_RPT0_RPT_VLD_MD_IDX                                       (31)
#define L_CUIF_LTE_RX_CC_RPT_MD_RPT0_RPT_VLD_MD_IDX                                       (1)
#define M_CUIF_LTE_RX_CC_RPT_MD_RPT0_RPT_VLD_MD_IDX                                       (0x80000000)
#define P_CUIF_LTE_RX_CC_RPT_MD_RPT0_SIM_IDX                                              (29)
#define L_CUIF_LTE_RX_CC_RPT_MD_RPT0_SIM_IDX                                              (2)
#define M_CUIF_LTE_RX_CC_RPT_MD_RPT0_SIM_IDX                                              (0x60000000)
#define P_CUIF_LTE_RX_CC_RPT_MD_RPT0_MD_HST_FLAG                                          (6)
#define L_CUIF_LTE_RX_CC_RPT_MD_RPT0_MD_HST_FLAG                                          (1)
#define M_CUIF_LTE_RX_CC_RPT_MD_RPT0_MD_HST_FLAG                                          (0x00000040)
#define P_CUIF_LTE_RX_CC_RPT_MD_RPT0_LONG_CIR_LP                                          (5)
#define L_CUIF_LTE_RX_CC_RPT_MD_RPT0_LONG_CIR_LP                                          (1)
#define M_CUIF_LTE_RX_CC_RPT_MD_RPT0_LONG_CIR_LP                                          (0x00000020)
#define P_CUIF_LTE_RX_CC_RPT_MD_RPT0_CELL_TYPE                                            (4)
#define L_CUIF_LTE_RX_CC_RPT_MD_RPT0_CELL_TYPE                                            (1)
#define M_CUIF_LTE_RX_CC_RPT_MD_RPT0_CELL_TYPE                                            (0x00000010)
#define P_CUIF_LTE_RX_CC_RPT_MD_RPT0_MD_IDX                                               (0)
#define L_CUIF_LTE_RX_CC_RPT_MD_RPT0_MD_IDX                                               (4)
#define M_CUIF_LTE_RX_CC_RPT_MD_RPT0_MD_IDX                                               (0x0000000F)

// ---------- NE_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT0_AR_VLD                                               (30)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT0_AR_VLD                                               (1)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT0_AR_VLD                                               (0x40000000)
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT0_LOW_SNR_RX1                                          (29)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT0_LOW_SNR_RX1                                          (1)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT0_LOW_SNR_RX1                                          (0x20000000)
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT0_LOW_SNR_RX0                                          (28)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT0_LOW_SNR_RX0                                          (1)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT0_LOW_SNR_RX0                                          (0x10000000)
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT0_NO_CROSS_TERM_TYPE                                   (25)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT0_NO_CROSS_TERM_TYPE                                   (2)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT0_NO_CROSS_TERM_TYPE                                   (0x06000000)
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT0_SIM_IDX                                              (16)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT0_SIM_IDX                                              (2)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT0_SIM_IDX                                              (0x00030000)
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT0_COMB_NOISE_PWR                                       (0)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT0_COMB_NOISE_PWR                                       (16)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT0_COMB_NOISE_PWR                                       (0x0000FFFF)

// ---------- NE_RPT1 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT1_SNR_OS_RX1                                           (24)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT1_SNR_OS_RX1                                           (8)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT1_SNR_OS_RX1                                           (0xFF000000)
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT1_SNR_OS_RX0                                           (16)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT1_SNR_OS_RX0                                           (8)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT1_SNR_OS_RX0                                           (0x00FF0000)
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT1_SNR_AR_RX1                                           (8)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT1_SNR_AR_RX1                                           (8)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT1_SNR_AR_RX1                                           (0x0000FF00)
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT1_SNR_AR_RX0                                           (0)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT1_SNR_AR_RX0                                           (8)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT1_SNR_AR_RX0                                           (0x000000FF)

// ---------- NE_RPT2 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT2_RSRP_RX0_MAN                                         (0)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT2_RSRP_RX0_MAN                                         (32)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT2_RSRP_RX0_MAN                                         (0xFFFFFFFF)

// ---------- NE_RPT3 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT3_RSRP_RX1_MAN                                         (0)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT3_RSRP_RX1_MAN                                         (32)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT3_RSRP_RX1_MAN                                         (0xFFFFFFFF)

// ---------- NE_RPT4 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT4_RSRP_RX0_EXP                                         (16)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT4_RSRP_RX0_EXP                                         (16)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT4_RSRP_RX0_EXP                                         (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_NE_RPT4_RSRP_RX1_EXP                                         (0)
#define L_CUIF_LTE_RX_CC_RPT_NE_RPT4_RSRP_RX1_EXP                                         (16)
#define M_CUIF_LTE_RX_CC_RPT_NE_RPT4_RSRP_RX1_EXP                                         (0x0000FFFF)

// ---------- RRM_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT0_RX0_VLD                                             (30)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT0_RX0_VLD                                             (1)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT0_RX0_VLD                                             (0x40000000)
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT0_RX1_VLD                                             (29)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT0_RX1_VLD                                             (1)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT0_RX1_VLD                                             (0x20000000)
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT0_SIM_IDX                                             (16)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT0_SIM_IDX                                             (2)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT0_SIM_IDX                                             (0x00030000)
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT0_USED_RS_NUM                                         (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT0_USED_RS_NUM                                         (3)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT0_USED_RS_NUM                                         (0x00000007)

// ---------- RRM_RPT1 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT1_MEAS_RSRP_RX0_MAN                                   (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT1_MEAS_RSRP_RX0_MAN                                   (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT1_MEAS_RSRP_RX0_MAN                                   (0xFFFFFFFF)

// ---------- RRM_RPT2 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT2_MEAS_RSRP_RX1_MAN                                   (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT2_MEAS_RSRP_RX1_MAN                                   (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT2_MEAS_RSRP_RX1_MAN                                   (0xFFFFFFFF)

// ---------- RRM_RPT3 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT3_MEAS_RSRP_RX0_EXP                                   (16)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT3_MEAS_RSRP_RX0_EXP                                   (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT3_MEAS_RSRP_RX0_EXP                                   (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT3_MEAS_RSRP_RX1_EXP                                   (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT3_MEAS_RSRP_RX1_EXP                                   (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT3_MEAS_RSRP_RX1_EXP                                   (0x0000FFFF)

// ---------- RRM_RPT4 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT4_EBNP_RX0_MAN                                        (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT4_EBNP_RX0_MAN                                        (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT4_EBNP_RX0_MAN                                        (0xFFFFFFFF)

// ---------- RRM_RPT5 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT5_EBNP_RX1_MAN                                        (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT5_EBNP_RX1_MAN                                        (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT5_EBNP_RX1_MAN                                        (0xFFFFFFFF)

// ---------- RRM_RPT6 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT6_EBNP_RX0_EXP                                        (16)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT6_EBNP_RX0_EXP                                        (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT6_EBNP_RX0_EXP                                        (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT6_EBNP_RX1_EXP                                        (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT6_EBNP_RX1_EXP                                        (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT6_EBNP_RX1_EXP                                        (0x0000FFFF)

// ---------- RRM_RSSI_MAN_RX0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MAN_RX0_MAN                                         (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MAN_RX0_MAN                                         (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MAN_RX0_MAN                                         (0xFFFFFFFF)

// ---------- RRM_RSSI_MAN_RX1 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MAN_RX1_MAN                                         (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MAN_RX1_MAN                                         (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MAN_RX1_MAN                                         (0xFFFFFFFF)

// ---------- RRM_RSSI_EXP bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RSSI_EXP_EXP1                                            (16)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RSSI_EXP_EXP1                                            (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RSSI_EXP_EXP1                                            (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_RRM_RSSI_EXP_EXP0                                            (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RSSI_EXP_EXP0                                            (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RSSI_EXP_EXP0                                            (0x0000FFFF)

// ---------- RRM_ALL_SYM_RSSI_MAN_RX0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MAN_RX0_MAN                                 (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MAN_RX0_MAN                                 (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MAN_RX0_MAN                                 (0xFFFFFFFF)

// ---------- RRM_ALL_SYM_RSSI_MAN_RX1 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MAN_RX1_MAN                                 (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MAN_RX1_MAN                                 (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MAN_RX1_MAN                                 (0xFFFFFFFF)

// ---------- RRM_ALL_SYM_RSSI_EXP bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_EXP_EXP1                                    (16)
#define L_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_EXP_EXP1                                    (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_EXP_EXP1                                    (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_EXP_EXP0                                    (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_EXP_EXP0                                    (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_EXP_EXP0                                    (0x0000FFFF)

// ---------- RRM_MBSFN_RSSI_MAN_RX0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_MAN_RX0_MAN                                   (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_MAN_RX0_MAN                                   (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_MAN_RX0_MAN                                   (0xFFFFFFFF)

// ---------- RRM_MBSFN_RSSI_MAN_RX1 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_MAN_RX1_MAN                                   (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_MAN_RX1_MAN                                   (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_MAN_RX1_MAN                                   (0xFFFFFFFF)

// ---------- RRM_MBSFN_RSSI_EXP bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_EXP_EXP1                                      (16)
#define L_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_EXP_EXP1                                      (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_EXP_EXP1                                      (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_EXP_EXP0                                      (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_EXP_EXP0                                      (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSSI_EXP_EXP0                                      (0x0000FFFF)

// ---------- RRM_MBSFN_RSRP_MAN_RX0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_MAN_RX0_MAN                                   (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_MAN_RX0_MAN                                   (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_MAN_RX0_MAN                                   (0xFFFFFFFF)

// ---------- RRM_MBSFN_RSRP_MAN_RX1 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_MAN_RX1_MAN                                   (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_MAN_RX1_MAN                                   (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_MAN_RX1_MAN                                   (0xFFFFFFFF)

// ---------- RRM_MBSFN_RSRP_EXP bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_EXP_EXP1                                      (16)
#define L_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_EXP_EXP1                                      (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_EXP_EXP1                                      (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_EXP_EXP0                                      (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_EXP_EXP0                                      (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_MBSFN_RSRP_EXP_EXP0                                      (0x0000FFFF)

// ---------- NBI_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_NBI_RPT0_NBI_SF_COMM_EXP_RX1                                 (24)
#define L_CUIF_LTE_RX_CC_RPT_NBI_RPT0_NBI_SF_COMM_EXP_RX1                                 (8)
#define M_CUIF_LTE_RX_CC_RPT_NBI_RPT0_NBI_SF_COMM_EXP_RX1                                 (0xFF000000)
#define P_CUIF_LTE_RX_CC_RPT_NBI_RPT0_NBI_SF_COMM_EXP_RX0                                 (16)
#define L_CUIF_LTE_RX_CC_RPT_NBI_RPT0_NBI_SF_COMM_EXP_RX0                                 (8)
#define M_CUIF_LTE_RX_CC_RPT_NBI_RPT0_NBI_SF_COMM_EXP_RX0                                 (0x00FF0000)
#define P_CUIF_LTE_RX_CC_RPT_NBI_RPT0_NBI_SPUR_INDICATOR_RX1                              (8)
#define L_CUIF_LTE_RX_CC_RPT_NBI_RPT0_NBI_SPUR_INDICATOR_RX1                              (8)
#define M_CUIF_LTE_RX_CC_RPT_NBI_RPT0_NBI_SPUR_INDICATOR_RX1                              (0x0000FF00)
#define P_CUIF_LTE_RX_CC_RPT_NBI_RPT0_NBI_SPUR_INDICATOR_RX0                              (0)
#define L_CUIF_LTE_RX_CC_RPT_NBI_RPT0_NBI_SPUR_INDICATOR_RX0                              (8)
#define M_CUIF_LTE_RX_CC_RPT_NBI_RPT0_NBI_SPUR_INDICATOR_RX0                              (0x000000FF)

// ---------- NBI_SPUR_PWR_RX0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0_NBI_SPUR_PWR_RX0_3                          (24)
#define L_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0_NBI_SPUR_PWR_RX0_3                          (8)
#define M_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0_NBI_SPUR_PWR_RX0_3                          (0xFF000000)
#define P_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0_NBI_SPUR_PWR_RX0_2                          (16)
#define L_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0_NBI_SPUR_PWR_RX0_2                          (8)
#define M_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0_NBI_SPUR_PWR_RX0_2                          (0x00FF0000)
#define P_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0_NBI_SPUR_PWR_RX0_1                          (8)
#define L_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0_NBI_SPUR_PWR_RX0_1                          (8)
#define M_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0_NBI_SPUR_PWR_RX0_1                          (0x0000FF00)
#define P_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0_NBI_SPUR_PWR_RX0_0                          (0)
#define L_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0_NBI_SPUR_PWR_RX0_0                          (8)
#define M_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX0_NBI_SPUR_PWR_RX0_0                          (0x000000FF)

// ---------- NBI_SPUR_PWR_RX1 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1_NBI_SPUR_PWR_RX1_3                          (24)
#define L_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1_NBI_SPUR_PWR_RX1_3                          (8)
#define M_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1_NBI_SPUR_PWR_RX1_3                          (0xFF000000)
#define P_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1_NBI_SPUR_PWR_RX1_2                          (16)
#define L_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1_NBI_SPUR_PWR_RX1_2                          (8)
#define M_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1_NBI_SPUR_PWR_RX1_2                          (0x00FF0000)
#define P_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1_NBI_SPUR_PWR_RX1_1                          (8)
#define L_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1_NBI_SPUR_PWR_RX1_1                          (8)
#define M_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1_NBI_SPUR_PWR_RX1_1                          (0x0000FF00)
#define P_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1_NBI_SPUR_PWR_RX1_0                          (0)
#define L_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1_NBI_SPUR_PWR_RX1_0                          (8)
#define M_CUIF_LTE_RX_CC_RPT_NBI_SPUR_PWR_RX1_NBI_SPUR_PWR_RX1_0                          (0x000000FF)

// ---------- RRM_RSSI_MEAS_MAN_RX0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_MAN_RX0_MAN                                    (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_MAN_RX0_MAN                                    (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_MAN_RX0_MAN                                    (0xFFFFFFFF)

// ---------- RRM_RSSI_MEAS_MAN_RX1 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_MAN_RX1_MAN                                    (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_MAN_RX1_MAN                                    (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_MAN_RX1_MAN                                    (0xFFFFFFFF)

// ---------- RRM_RSSI_MEAS_EXP bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_EXP_EXP1                                       (16)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_EXP_EXP1                                       (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_EXP_EXP1                                       (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_EXP_EXP0                                       (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_EXP_EXP0                                       (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RSSI_MEAS_EXP_EXP0                                       (0x0000FFFF)

// ---------- RRM_ALL_SYM_RSSI_MEAS_MAN_RX0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_MAN_RX0_MAN                            (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_MAN_RX0_MAN                            (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_MAN_RX0_MAN                            (0xFFFFFFFF)

// ---------- RRM_ALL_SYM_RSSI_MEAS_MAN_RX1 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_MAN_RX1_MAN                            (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_MAN_RX1_MAN                            (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_MAN_RX1_MAN                            (0xFFFFFFFF)

// ---------- RRM_ALL_SYM_RSSI_MEAS_EXP bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_EXP_EXP1                               (16)
#define L_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_EXP_EXP1                               (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_EXP_EXP1                               (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_EXP_EXP0                               (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_EXP_EXP0                               (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_ALL_SYM_RSSI_MEAS_EXP_EXP0                               (0x0000FFFF)

// ---------- CSI_RPT0 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_CSI_RPT0_STATIC_CH_FLAG                                      (1)
#define L_CUIF_LTE_RX_CC_RPT_CSI_RPT0_STATIC_CH_FLAG                                      (1)
#define M_CUIF_LTE_RX_CC_RPT_CSI_RPT0_STATIC_CH_FLAG                                      (0x00000002)
#define P_CUIF_LTE_RX_CC_RPT_CSI_RPT0_CC_VLD                                              (0)
#define L_CUIF_LTE_RX_CC_RPT_CSI_RPT0_CC_VLD                                              (1)
#define M_CUIF_LTE_RX_CC_RPT_CSI_RPT0_CC_VLD                                              (0x00000001)

// ---------- RRM_RPT7 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT7_MAX_AP_MEAS_RSRP_RX0_MAN                            (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT7_MAX_AP_MEAS_RSRP_RX0_MAN                            (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT7_MAX_AP_MEAS_RSRP_RX0_MAN                            (0xFFFFFFFF)

// ---------- RRM_RPT8 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT8_MAX_AP_MEAS_RSRP_RX1_MAN                            (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT8_MAX_AP_MEAS_RSRP_RX1_MAN                            (32)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT8_MAX_AP_MEAS_RSRP_RX1_MAN                            (0xFFFFFFFF)

// ---------- RRM_RPT9 bit-field ----------
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT9_MAX_AP_MEAS_RSRP_RX0_EXP                            (16)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT9_MAX_AP_MEAS_RSRP_RX0_EXP                            (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT9_MAX_AP_MEAS_RSRP_RX0_EXP                            (0xFFFF0000)
#define P_CUIF_LTE_RX_CC_RPT_RRM_RPT9_MAX_AP_MEAS_RSRP_RX1_EXP                            (0)
#define L_CUIF_LTE_RX_CC_RPT_RRM_RPT9_MAX_AP_MEAS_RSRP_RX1_EXP                            (16)
#define M_CUIF_LTE_RX_CC_RPT_RRM_RPT9_MAX_AP_MEAS_RSRP_RX1_EXP                            (0x0000FFFF)

#endif // __CUIF_LTE_RX_CC_RPT_H__
