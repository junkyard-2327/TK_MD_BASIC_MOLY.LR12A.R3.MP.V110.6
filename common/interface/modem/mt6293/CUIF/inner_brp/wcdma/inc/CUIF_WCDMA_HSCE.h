#ifndef __CUIF_WCDMA_HSCE_H__
#define __CUIF_WCDMA_HSCE_H__

// ----------------- CUIF_WCDMA_HSCE Register Definition -------------------
typedef volatile struct {
    kal_uint32 HSCE_OV_CON;                                                               // 0xA000
    kal_uint32 HSCE_OCIC;                                                                 // 0xA004
    kal_uint32 HSCE_RST;                                                                  // 0xA008
    kal_uint32 HSCE_CON0;                                                                 // 0xA00C
    kal_uint32 HSCE_CON1;                                                                 // 0xA010
    kal_uint32 HSCE_CH1_CON0;                                                             // 0xA014
    kal_uint32 HSCE_CH1_CON1;                                                             // 0xA018
    kal_uint32 HSCE_CH1_CON2;                                                             // 0xA01C
    kal_uint32 HSCE_CH1_CON3;                                                             // 0xA020
    kal_uint32 HSCE_CH2_CON0;                                                             // 0xA024
    kal_uint32 HSCE_CH2_CON1;                                                             // 0xA028
    kal_uint32 HSCE_CH2_CON2;                                                             // 0xA02C
    kal_uint32 HSCE_CH3_CON0;                                                             // 0xA030
    kal_uint32 HSCE_CH3_CON1;                                                             // 0xA034
    kal_uint32 HSCE_CH4_CON0;                                                             // 0xA038
    kal_uint32 HSCE_CH4_CON1;                                                             // 0xA03C
    kal_uint32 HSCE_EQ0;                                                                  // 0xA040
    kal_uint32 HSCE_EQ1;                                                                  // 0xA044
    kal_uint32 HSCE_EQ2;                                                                  // 0xA048
    kal_uint32 HSCE_MPATH0;                                                               // 0xA04C
    kal_uint32 HSCE_MPATH1;                                                               // 0xA050
    kal_uint32 HSCE_MPATH2;                                                               // 0xA054
    kal_uint32 HSCE_MPATH3;                                                               // 0xA058
    kal_uint32 HSCE_MPATH4;                                                               // 0xA05C
    kal_uint32 HSCE_MPATH5;                                                               // 0xA060
    kal_uint32 HSCE_IOEST;                                                                // 0xA064
    kal_uint32 HSCE_WC0;                                                                  // 0xA068
    kal_uint32 HSCE_WC1;                                                                  // 0xA06C
    kal_uint32 HSCE_WC2;                                                                  // 0xA070
    kal_uint32 HSCE_WC3;                                                                  // 0xA074
    kal_uint32 HSCE_SPEST_CON0;                                                           // 0xA078
    kal_uint32 HSCE_SPEST_CON1;                                                           // 0xA07C
    kal_uint32 HSCE_SPEST_LCR0;                                                           // 0xA080
    kal_uint32 HSCE_SPEST_LCR1;                                                           // 0xA084
    kal_uint32 HSCE_SPEST_LCR2;                                                           // 0xA088
    kal_uint32 HSCE_SPEST_LCR3;                                                           // 0xA08C
    kal_uint32 HSCE_SPEST_INT0;                                                           // 0xA090
    kal_uint32 HSCE_SPEST_INT1;                                                           // 0xA094
    kal_uint32 HSCE_DBG_CON;                                                              // 0xA098
    kal_uint32 HSCE_DBG_LOG0;                                                             // 0xA09C
    kal_uint32 HSCE_DBG_LOG1;                                                             // 0xA0A0
    kal_uint32 HSCE_DBG_LOG2;                                                             // 0xA0A4
    kal_uint32 HSCE_DBG_LOG3;                                                             // 0xA0A8
    kal_uint32 HSCE_DBG_LOG4;                                                             // 0xA0AC
    kal_uint32 HSCE_DBG_LOG5;                                                             // 0xA0B0
    kal_uint32 HSCE_DBG_LOG6;                                                             // 0xA0B4
    kal_uint32 HSCE_DBG_LOG7;                                                             // 0xA0B8
    kal_uint32 HSCE_RFEQ_CON0;                                                            // 0xA0BC
    kal_uint32 HSCE_RFEQ_RX0_COEF[7];                                                     // 0xA0C0
    kal_uint32 HSCE_RFEQ_RX1_COEF[7];                                                     // 0xA0DC
} CUIF_WCDMA_HSCE_REGS, *PCUIF_WCDMA_HSCE_REGS;

// ---------- CUIF_WCDMA_HSCE word-offset  ----------
#define O_CUIF_WCDMA_HSCE_HSCE_OV_CON                                                     (0)
#define O_CUIF_WCDMA_HSCE_HSCE_OCIC                                                       (1)
#define O_CUIF_WCDMA_HSCE_HSCE_RST                                                        (2)
#define O_CUIF_WCDMA_HSCE_HSCE_CON0                                                       (3)
#define O_CUIF_WCDMA_HSCE_HSCE_CON1                                                       (4)
#define O_CUIF_WCDMA_HSCE_HSCE_CH1_CON0                                                   (5)
#define O_CUIF_WCDMA_HSCE_HSCE_CH1_CON1                                                   (6)
#define O_CUIF_WCDMA_HSCE_HSCE_CH1_CON2                                                   (7)
#define O_CUIF_WCDMA_HSCE_HSCE_CH1_CON3                                                   (8)
#define O_CUIF_WCDMA_HSCE_HSCE_CH2_CON0                                                   (9)
#define O_CUIF_WCDMA_HSCE_HSCE_CH2_CON1                                                   (10)
#define O_CUIF_WCDMA_HSCE_HSCE_CH2_CON2                                                   (11)
#define O_CUIF_WCDMA_HSCE_HSCE_CH3_CON0                                                   (12)
#define O_CUIF_WCDMA_HSCE_HSCE_CH3_CON1                                                   (13)
#define O_CUIF_WCDMA_HSCE_HSCE_CH4_CON0                                                   (14)
#define O_CUIF_WCDMA_HSCE_HSCE_CH4_CON1                                                   (15)
#define O_CUIF_WCDMA_HSCE_HSCE_EQ0                                                        (16)
#define O_CUIF_WCDMA_HSCE_HSCE_EQ1                                                        (17)
#define O_CUIF_WCDMA_HSCE_HSCE_EQ2                                                        (18)
#define O_CUIF_WCDMA_HSCE_HSCE_MPATH0                                                     (19)
#define O_CUIF_WCDMA_HSCE_HSCE_MPATH1                                                     (20)
#define O_CUIF_WCDMA_HSCE_HSCE_MPATH2                                                     (21)
#define O_CUIF_WCDMA_HSCE_HSCE_MPATH3                                                     (22)
#define O_CUIF_WCDMA_HSCE_HSCE_MPATH4                                                     (23)
#define O_CUIF_WCDMA_HSCE_HSCE_MPATH5                                                     (24)
#define O_CUIF_WCDMA_HSCE_HSCE_IOEST                                                      (25)
#define O_CUIF_WCDMA_HSCE_HSCE_WC0                                                        (26)
#define O_CUIF_WCDMA_HSCE_HSCE_WC1                                                        (27)
#define O_CUIF_WCDMA_HSCE_HSCE_WC2                                                        (28)
#define O_CUIF_WCDMA_HSCE_HSCE_WC3                                                        (29)
#define O_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0                                                 (30)
#define O_CUIF_WCDMA_HSCE_HSCE_SPEST_CON1                                                 (31)
#define O_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0                                                 (32)
#define O_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR1                                                 (33)
#define O_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR2                                                 (34)
#define O_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR3                                                 (35)
#define O_CUIF_WCDMA_HSCE_HSCE_SPEST_INT0                                                 (36)
#define O_CUIF_WCDMA_HSCE_HSCE_SPEST_INT1                                                 (37)
#define O_CUIF_WCDMA_HSCE_HSCE_DBG_CON                                                    (38)
#define O_CUIF_WCDMA_HSCE_HSCE_DBG_LOG0                                                   (39)
#define O_CUIF_WCDMA_HSCE_HSCE_DBG_LOG1                                                   (40)
#define O_CUIF_WCDMA_HSCE_HSCE_DBG_LOG2                                                   (41)
#define O_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3                                                   (42)
#define O_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4                                                   (43)
#define O_CUIF_WCDMA_HSCE_HSCE_DBG_LOG5                                                   (44)
#define O_CUIF_WCDMA_HSCE_HSCE_DBG_LOG6                                                   (45)
#define O_CUIF_WCDMA_HSCE_HSCE_DBG_LOG7                                                   (46)

// ---------- HSCE_OV_CON bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_OV_CON_HSCE_OV_RATE_EN                                     (16)
#define L_CUIF_WCDMA_HSCE_HSCE_OV_CON_HSCE_OV_RATE_EN                                     (1)
#define M_CUIF_WCDMA_HSCE_HSCE_OV_CON_HSCE_OV_RATE_EN                                     (0x00010000)
#define P_CUIF_WCDMA_HSCE_HSCE_OV_CON_HSCE_TRK_PWR_THRESH                                 (8)
#define L_CUIF_WCDMA_HSCE_HSCE_OV_CON_HSCE_TRK_PWR_THRESH                                 (8)
#define M_CUIF_WCDMA_HSCE_HSCE_OV_CON_HSCE_TRK_PWR_THRESH                                 (0x0000FF00)
#define P_CUIF_WCDMA_HSCE_HSCE_OV_CON_HSCE_TRK_EN                                         (0)
#define L_CUIF_WCDMA_HSCE_HSCE_OV_CON_HSCE_TRK_EN                                         (1)
#define M_CUIF_WCDMA_HSCE_HSCE_OV_CON_HSCE_TRK_EN                                         (0x00000001)

// ---------- HSCE_OCIC bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_OCIC_HSCE_OCIC_PRATIO_HIGH                                 (8)
#define L_CUIF_WCDMA_HSCE_HSCE_OCIC_HSCE_OCIC_PRATIO_HIGH                                 (5)
#define M_CUIF_WCDMA_HSCE_HSCE_OCIC_HSCE_OCIC_PRATIO_HIGH                                 (0x00001F00)
#define P_CUIF_WCDMA_HSCE_HSCE_OCIC_HSCE_OCIC_PRATIO_LOW                                  (0)
#define L_CUIF_WCDMA_HSCE_HSCE_OCIC_HSCE_OCIC_PRATIO_LOW                                  (5)
#define M_CUIF_WCDMA_HSCE_HSCE_OCIC_HSCE_OCIC_PRATIO_LOW                                  (0x0000001F)

// ---------- HSCE_RST bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_RST_HSCE_SW_RESET                                          (0)
#define L_CUIF_WCDMA_HSCE_HSCE_RST_HSCE_SW_RESET                                          (1)
#define M_CUIF_WCDMA_HSCE_HSCE_RST_HSCE_SW_RESET                                          (0x00000001)

// ---------- HSCE_CON0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CON0_HSCE_WIN_REFRESH                                      (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CON0_HSCE_WIN_REFRESH                                      (1)
#define M_CUIF_WCDMA_HSCE_HSCE_CON0_HSCE_WIN_REFRESH                                      (0x00000001)

// ---------- HSCE_CON1 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CON1_HSCE_LS_REFRESH                                       (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CON1_HSCE_LS_REFRESH                                       (1)
#define M_CUIF_WCDMA_HSCE_HSCE_CON1_HSCE_LS_REFRESH                                       (0x00000001)

// ---------- HSCE_CH1_CON0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CH1_CON0_HSCE_CH1_OFFSET                                   (24)
#define L_CUIF_WCDMA_HSCE_HSCE_CH1_CON0_HSCE_CH1_OFFSET                                   (8)
#define M_CUIF_WCDMA_HSCE_HSCE_CH1_CON0_HSCE_CH1_OFFSET                                   (0xFF000000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH1_CON0_HSCE_CH1_OVSF_IDX                                 (16)
#define L_CUIF_WCDMA_HSCE_HSCE_CH1_CON0_HSCE_CH1_OVSF_IDX                                 (8)
#define M_CUIF_WCDMA_HSCE_HSCE_CH1_CON0_HSCE_CH1_OVSF_IDX                                 (0x00FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH1_CON0_HSCE_CPICH_TXTD                                   (15)
#define L_CUIF_WCDMA_HSCE_HSCE_CH1_CON0_HSCE_CPICH_TXTD                                   (1)
#define M_CUIF_WCDMA_HSCE_HSCE_CH1_CON0_HSCE_CPICH_TXTD                                   (0x00008000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH1_CON0_HSCE_CH1_SC_IDX                                   (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CH1_CON0_HSCE_CH1_SC_IDX                                   (13)
#define M_CUIF_WCDMA_HSCE_HSCE_CH1_CON0_HSCE_CH1_SC_IDX                                   (0x00001FFF)

// ---------- HSCE_CH1_CON1 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CH1_CON1_HSCE_EQ1_SC_IDX                                   (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CH1_CON1_HSCE_EQ1_SC_IDX                                   (13)
#define M_CUIF_WCDMA_HSCE_HSCE_CH1_CON1_HSCE_EQ1_SC_IDX                                   (0x00001FFF)

// ---------- HSCE_CH1_CON2 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CH1_CON2_HSCE_CH1_GSR_ADRS                                 (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CH1_CON2_HSCE_CH1_GSR_ADRS                                 (14)
#define M_CUIF_WCDMA_HSCE_HSCE_CH1_CON2_HSCE_CH1_GSR_ADRS                                 (0x00003FFF)

// ---------- HSCE_CH1_CON3 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CH1_CON3_HSCE_ALPHA_COEF                                   (28)
#define L_CUIF_WCDMA_HSCE_HSCE_CH1_CON3_HSCE_ALPHA_COEF                                   (2)
#define M_CUIF_WCDMA_HSCE_HSCE_CH1_CON3_HSCE_ALPHA_COEF                                   (0x30000000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH1_CON3_HSCE_CH1_LS_ON                                    (24)
#define L_CUIF_WCDMA_HSCE_HSCE_CH1_CON3_HSCE_CH1_LS_ON                                    (1)
#define M_CUIF_WCDMA_HSCE_HSCE_CH1_CON3_HSCE_CH1_LS_ON                                    (0x01000000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH1_CON3_HSCE_CH1_PRATIO                                   (16)
#define L_CUIF_WCDMA_HSCE_HSCE_CH1_CON3_HSCE_CH1_PRATIO                                   (6)
#define M_CUIF_WCDMA_HSCE_HSCE_CH1_CON3_HSCE_CH1_PRATIO                                   (0x003F0000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH1_CON3_HSCE_IDB_GSR_ADRS                                 (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CH1_CON3_HSCE_IDB_GSR_ADRS                                 (14)
#define M_CUIF_WCDMA_HSCE_HSCE_CH1_CON3_HSCE_IDB_GSR_ADRS                                 (0x00003FFF)

// ---------- HSCE_CH2_CON0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CH2_CON0_HSCE_CH2_OFFSET                                   (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CH2_CON0_HSCE_CH2_OFFSET                                   (8)
#define M_CUIF_WCDMA_HSCE_HSCE_CH2_CON0_HSCE_CH2_OFFSET                                   (0x000000FF)

// ---------- HSCE_CH2_CON1 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CH2_CON1_HSCE_CH2_ON                                       (20)
#define L_CUIF_WCDMA_HSCE_HSCE_CH2_CON1_HSCE_CH2_ON                                       (1)
#define M_CUIF_WCDMA_HSCE_HSCE_CH2_CON1_HSCE_CH2_ON                                       (0x00100000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH2_CON1_HSCE_CH2_GSR_ADRS                                 (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CH2_CON1_HSCE_CH2_GSR_ADRS                                 (14)
#define M_CUIF_WCDMA_HSCE_HSCE_CH2_CON1_HSCE_CH2_GSR_ADRS                                 (0x00003FFF)

// ---------- HSCE_CH2_CON2 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CH2_CON2_HSCE_CH2_PRATIO                                   (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CH2_CON2_HSCE_CH2_PRATIO                                   (6)
#define M_CUIF_WCDMA_HSCE_HSCE_CH2_CON2_HSCE_CH2_PRATIO                                   (0x0000003F)

// ---------- HSCE_CH3_CON0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CH3_CON0_HSCE_CH3_OFFSET                                   (24)
#define L_CUIF_WCDMA_HSCE_HSCE_CH3_CON0_HSCE_CH3_OFFSET                                   (8)
#define M_CUIF_WCDMA_HSCE_HSCE_CH3_CON0_HSCE_CH3_OFFSET                                   (0xFF000000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH3_CON0_HSCE_CH3_OVSF_IDX                                 (16)
#define L_CUIF_WCDMA_HSCE_HSCE_CH3_CON0_HSCE_CH3_OVSF_IDX                                 (8)
#define M_CUIF_WCDMA_HSCE_HSCE_CH3_CON0_HSCE_CH3_OVSF_IDX                                 (0x00FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH3_CON0_HSCE_CH3_SC_IDX                                   (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CH3_CON0_HSCE_CH3_SC_IDX                                   (13)
#define M_CUIF_WCDMA_HSCE_HSCE_CH3_CON0_HSCE_CH3_SC_IDX                                   (0x00001FFF)

// ---------- HSCE_CH3_CON1 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CH3_CON1_HSCE_CH3_ON                                       (31)
#define L_CUIF_WCDMA_HSCE_HSCE_CH3_CON1_HSCE_CH3_ON                                       (1)
#define M_CUIF_WCDMA_HSCE_HSCE_CH3_CON1_HSCE_CH3_ON                                       (0x80000000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH3_CON1_HSCE_CH3_PRATIO                                   (16)
#define L_CUIF_WCDMA_HSCE_HSCE_CH3_CON1_HSCE_CH3_PRATIO                                   (6)
#define M_CUIF_WCDMA_HSCE_HSCE_CH3_CON1_HSCE_CH3_PRATIO                                   (0x003F0000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH3_CON1_HSCE_CH3_GSR_ADRS                                 (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CH3_CON1_HSCE_CH3_GSR_ADRS                                 (14)
#define M_CUIF_WCDMA_HSCE_HSCE_CH3_CON1_HSCE_CH3_GSR_ADRS                                 (0x00003FFF)

// ---------- HSCE_CH4_CON0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CH4_CON0_HSCE_CH4_OFFSET                                   (24)
#define L_CUIF_WCDMA_HSCE_HSCE_CH4_CON0_HSCE_CH4_OFFSET                                   (8)
#define M_CUIF_WCDMA_HSCE_HSCE_CH4_CON0_HSCE_CH4_OFFSET                                   (0xFF000000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH4_CON0_HSCE_CH4_OVSF_IDX                                 (16)
#define L_CUIF_WCDMA_HSCE_HSCE_CH4_CON0_HSCE_CH4_OVSF_IDX                                 (8)
#define M_CUIF_WCDMA_HSCE_HSCE_CH4_CON0_HSCE_CH4_OVSF_IDX                                 (0x00FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH4_CON0_HSCE_CH4_SC_IDX                                   (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CH4_CON0_HSCE_CH4_SC_IDX                                   (13)
#define M_CUIF_WCDMA_HSCE_HSCE_CH4_CON0_HSCE_CH4_SC_IDX                                   (0x00001FFF)

// ---------- HSCE_CH4_CON1 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_CH4_CON1_HSCE_CH4_ON                                       (31)
#define L_CUIF_WCDMA_HSCE_HSCE_CH4_CON1_HSCE_CH4_ON                                       (1)
#define M_CUIF_WCDMA_HSCE_HSCE_CH4_CON1_HSCE_CH4_ON                                       (0x80000000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH4_CON1_HSCE_CH4_PRATIO                                   (16)
#define L_CUIF_WCDMA_HSCE_HSCE_CH4_CON1_HSCE_CH4_PRATIO                                   (6)
#define M_CUIF_WCDMA_HSCE_HSCE_CH4_CON1_HSCE_CH4_PRATIO                                   (0x003F0000)
#define P_CUIF_WCDMA_HSCE_HSCE_CH4_CON1_HSCE_CH4_GSR_ADRS                                 (0)
#define L_CUIF_WCDMA_HSCE_HSCE_CH4_CON1_HSCE_CH4_GSR_ADRS                                 (14)
#define M_CUIF_WCDMA_HSCE_HSCE_CH4_CON1_HSCE_CH4_GSR_ADRS                                 (0x00003FFF)

// ---------- HSCE_EQ0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_EQ0_HSCE_EQPF_REFRESH                                      (28)
#define L_CUIF_WCDMA_HSCE_HSCE_EQ0_HSCE_EQPF_REFRESH                                      (1)
#define M_CUIF_WCDMA_HSCE_HSCE_EQ0_HSCE_EQPF_REFRESH                                      (0x10000000)
#define P_CUIF_WCDMA_HSCE_HSCE_EQ0_HSCE_FFT_ADRS2                                         (16)
#define L_CUIF_WCDMA_HSCE_HSCE_EQ0_HSCE_FFT_ADRS2                                         (9)
#define M_CUIF_WCDMA_HSCE_HSCE_EQ0_HSCE_FFT_ADRS2                                         (0x01FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_EQ0_HSCE_FFT_ADRS1                                         (0)
#define L_CUIF_WCDMA_HSCE_HSCE_EQ0_HSCE_FFT_ADRS1                                         (9)
#define M_CUIF_WCDMA_HSCE_HSCE_EQ0_HSCE_FFT_ADRS1                                         (0x000001FF)

// ---------- HSCE_EQ1 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_EQ1_HSEQ_BYPASS_ON                                         (5)
#define L_CUIF_WCDMA_HSCE_HSCE_EQ1_HSEQ_BYPASS_ON                                         (1)
#define M_CUIF_WCDMA_HSCE_HSCE_EQ1_HSEQ_BYPASS_ON                                         (0x00000020)
#define P_CUIF_WCDMA_HSCE_HSCE_EQ1_HSCE_SCIC_ON                                           (4)
#define L_CUIF_WCDMA_HSCE_HSCE_EQ1_HSCE_SCIC_ON                                           (1)
#define M_CUIF_WCDMA_HSCE_HSCE_EQ1_HSCE_SCIC_ON                                           (0x00000010)
#define P_CUIF_WCDMA_HSCE_HSCE_EQ1_HSCE_DSCH_TXTD                                         (0)
#define L_CUIF_WCDMA_HSCE_HSCE_EQ1_HSCE_DSCH_TXTD                                         (2)
#define M_CUIF_WCDMA_HSCE_HSCE_EQ1_HSCE_DSCH_TXTD                                         (0x00000003)

// ---------- HSCE_EQ2 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_EQ2_HSCE_FFT_ADRS4                                         (16)
#define L_CUIF_WCDMA_HSCE_HSCE_EQ2_HSCE_FFT_ADRS4                                         (9)
#define M_CUIF_WCDMA_HSCE_HSCE_EQ2_HSCE_FFT_ADRS4                                         (0x01FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_EQ2_HSCE_FFT_ADRS3                                         (0)
#define L_CUIF_WCDMA_HSCE_HSCE_EQ2_HSCE_FFT_ADRS3                                         (9)
#define M_CUIF_WCDMA_HSCE_HSCE_EQ2_HSCE_FFT_ADRS3                                         (0x000001FF)

// ---------- HSCE_MPATH0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH0_HSCE_MPATH_NUM                                      (16)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH0_HSCE_MPATH_NUM                                      (4)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH0_HSCE_MPATH_NUM                                      (0x000F0000)
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH0_HSCE_MPATH_TIMING0                                  (8)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH0_HSCE_MPATH_TIMING0                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH0_HSCE_MPATH_TIMING0                                  (0x0000FF00)
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH0_HSCE_MPATH_TIMING1                                  (0)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH0_HSCE_MPATH_TIMING1                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH0_HSCE_MPATH_TIMING1                                  (0x000000FF)

// ---------- HSCE_MPATH1 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH1_HSCE_MPATH_TIMING2                                  (24)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH1_HSCE_MPATH_TIMING2                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH1_HSCE_MPATH_TIMING2                                  (0xFF000000)
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH1_HSCE_MPATH_TIMING3                                  (16)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH1_HSCE_MPATH_TIMING3                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH1_HSCE_MPATH_TIMING3                                  (0x00FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH1_HSCE_MPATH_TIMING4                                  (8)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH1_HSCE_MPATH_TIMING4                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH1_HSCE_MPATH_TIMING4                                  (0x0000FF00)
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH1_HSCE_MPATH_TIMING5                                  (0)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH1_HSCE_MPATH_TIMING5                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH1_HSCE_MPATH_TIMING5                                  (0x000000FF)

// ---------- HSCE_MPATH2 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH2_HSCE_MPATH_TIMING6                                  (24)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH2_HSCE_MPATH_TIMING6                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH2_HSCE_MPATH_TIMING6                                  (0xFF000000)
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH2_HSCE_MPATH_TIMING7                                  (16)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH2_HSCE_MPATH_TIMING7                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH2_HSCE_MPATH_TIMING7                                  (0x00FF0000)

// ---------- HSCE_MPATH3 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH3_HSCE_MPATH_NUM                                      (16)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH3_HSCE_MPATH_NUM                                      (4)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH3_HSCE_MPATH_NUM                                      (0x000F0000)
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH3_HSCE_MPATH_TIMING0                                  (8)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH3_HSCE_MPATH_TIMING0                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH3_HSCE_MPATH_TIMING0                                  (0x0000FF00)
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH3_HSCE_MPATH_TIMING1                                  (0)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH3_HSCE_MPATH_TIMING1                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH3_HSCE_MPATH_TIMING1                                  (0x000000FF)

// ---------- HSCE_MPATH4 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH4_HSCE_MPATH_TIMING2                                  (24)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH4_HSCE_MPATH_TIMING2                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH4_HSCE_MPATH_TIMING2                                  (0xFF000000)
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH4_HSCE_MPATH_TIMING3                                  (16)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH4_HSCE_MPATH_TIMING3                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH4_HSCE_MPATH_TIMING3                                  (0x00FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH4_HSCE_MPATH_TIMING4                                  (8)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH4_HSCE_MPATH_TIMING4                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH4_HSCE_MPATH_TIMING4                                  (0x0000FF00)
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH4_HSCE_MPATH_TIMING5                                  (0)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH4_HSCE_MPATH_TIMING5                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH4_HSCE_MPATH_TIMING5                                  (0x000000FF)

// ---------- HSCE_MPATH5 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH5_HSCE_MPATH_TIMING6                                  (24)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH5_HSCE_MPATH_TIMING6                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH5_HSCE_MPATH_TIMING6                                  (0xFF000000)
#define P_CUIF_WCDMA_HSCE_HSCE_MPATH5_HSCE_MPATH_TIMING7                                  (16)
#define L_CUIF_WCDMA_HSCE_HSCE_MPATH5_HSCE_MPATH_TIMING7                                  (8)
#define M_CUIF_WCDMA_HSCE_HSCE_MPATH5_HSCE_MPATH_TIMING7                                  (0x00FF0000)

// ---------- HSCE_IOEST bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_IOEST_HSCE_IO_NORM                                         (16)
#define L_CUIF_WCDMA_HSCE_HSCE_IOEST_HSCE_IO_NORM                                         (6)
#define M_CUIF_WCDMA_HSCE_HSCE_IOEST_HSCE_IO_NORM                                         (0x003F0000)
#define P_CUIF_WCDMA_HSCE_HSCE_IOEST_HSCE_IO_MASK                                         (0)
#define L_CUIF_WCDMA_HSCE_HSCE_IOEST_HSCE_IO_MASK                                         (16)
#define M_CUIF_WCDMA_HSCE_HSCE_IOEST_HSCE_IO_MASK                                         (0x0000FFFF)

// ---------- HSCE_WC0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_WC0_HSCE_WC_COEF0                                          (24)
#define L_CUIF_WCDMA_HSCE_HSCE_WC0_HSCE_WC_COEF0                                          (8)
#define M_CUIF_WCDMA_HSCE_HSCE_WC0_HSCE_WC_COEF0                                          (0xFF000000)
#define P_CUIF_WCDMA_HSCE_HSCE_WC0_HSCE_WC_COEF1                                          (16)
#define L_CUIF_WCDMA_HSCE_HSCE_WC0_HSCE_WC_COEF1                                          (8)
#define M_CUIF_WCDMA_HSCE_HSCE_WC0_HSCE_WC_COEF1                                          (0x00FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_WC0_HSCE_WC_COEF2                                          (8)
#define L_CUIF_WCDMA_HSCE_HSCE_WC0_HSCE_WC_COEF2                                          (8)
#define M_CUIF_WCDMA_HSCE_HSCE_WC0_HSCE_WC_COEF2                                          (0x0000FF00)
#define P_CUIF_WCDMA_HSCE_HSCE_WC0_HSCE_WC_COEF3                                          (0)
#define L_CUIF_WCDMA_HSCE_HSCE_WC0_HSCE_WC_COEF3                                          (8)
#define M_CUIF_WCDMA_HSCE_HSCE_WC0_HSCE_WC_COEF3                                          (0x000000FF)

// ---------- HSCE_WC1 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_WC1_HSCE_WC_COEF4                                          (24)
#define L_CUIF_WCDMA_HSCE_HSCE_WC1_HSCE_WC_COEF4                                          (8)
#define M_CUIF_WCDMA_HSCE_HSCE_WC1_HSCE_WC_COEF4                                          (0xFF000000)
#define P_CUIF_WCDMA_HSCE_HSCE_WC1_HSCE_WC_COEF5                                          (16)
#define L_CUIF_WCDMA_HSCE_HSCE_WC1_HSCE_WC_COEF5                                          (8)
#define M_CUIF_WCDMA_HSCE_HSCE_WC1_HSCE_WC_COEF5                                          (0x00FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_WC1_HSCE_WC_COEF6                                          (8)
#define L_CUIF_WCDMA_HSCE_HSCE_WC1_HSCE_WC_COEF6                                          (8)
#define M_CUIF_WCDMA_HSCE_HSCE_WC1_HSCE_WC_COEF6                                          (0x0000FF00)
#define P_CUIF_WCDMA_HSCE_HSCE_WC1_HSCE_WC_COEF7                                          (0)
#define L_CUIF_WCDMA_HSCE_HSCE_WC1_HSCE_WC_COEF7                                          (8)
#define M_CUIF_WCDMA_HSCE_HSCE_WC1_HSCE_WC_COEF7                                          (0x000000FF)

// ---------- HSCE_WC2 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_WC2_HSCE_WC_LENGTH                                         (16)
#define L_CUIF_WCDMA_HSCE_HSCE_WC2_HSCE_WC_LENGTH                                         (7)
#define M_CUIF_WCDMA_HSCE_HSCE_WC2_HSCE_WC_LENGTH                                         (0x007F0000)
#define P_CUIF_WCDMA_HSCE_HSCE_WC2_HSCE_WC_COEF_REFRESH                                   (15)
#define L_CUIF_WCDMA_HSCE_HSCE_WC2_HSCE_WC_COEF_REFRESH                                   (1)
#define M_CUIF_WCDMA_HSCE_HSCE_WC2_HSCE_WC_COEF_REFRESH                                   (0x00008000)
#define P_CUIF_WCDMA_HSCE_HSCE_WC2_HSCE_WC_LONG_COEF2                                     (0)
#define L_CUIF_WCDMA_HSCE_HSCE_WC2_HSCE_WC_LONG_COEF2                                     (11)
#define M_CUIF_WCDMA_HSCE_HSCE_WC2_HSCE_WC_LONG_COEF2                                     (0x000007FF)

// ---------- HSCE_WC3 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_WC3_HSCE_WC_LONG_COEF1                                     (16)
#define L_CUIF_WCDMA_HSCE_HSCE_WC3_HSCE_WC_LONG_COEF1                                     (15)
#define M_CUIF_WCDMA_HSCE_HSCE_WC3_HSCE_WC_LONG_COEF1                                     (0x7FFF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_WC3_HSCE_WC_LONG_COEF0                                     (0)
#define L_CUIF_WCDMA_HSCE_HSCE_WC3_HSCE_WC_LONG_COEF0                                     (16)
#define M_CUIF_WCDMA_HSCE_HSCE_WC3_HSCE_WC_LONG_COEF0                                     (0x0000FFFF)

// ---------- HSCE_SPEST_CON0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_LCR_EN                                     (16)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_LCR_EN                                     (8)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_LCR_EN                                     (0x00FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_LCR_RESET                                  (3)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_LCR_RESET                                  (1)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_LCR_RESET                                  (0x00000008)
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_SPEST_INT_RESET                            (2)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_SPEST_INT_RESET                            (1)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_SPEST_INT_RESET                            (0x00000004)
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_SPEST_WIN_RESET                            (1)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_SPEST_WIN_RESET                            (1)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_SPEST_WIN_RESET                            (0x00000002)
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_SPEST_ALL_RESET                            (0)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_SPEST_ALL_RESET                            (1)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_CON0_HSCE_SPEST_ALL_RESET                            (0x00000001)

// ---------- HSCE_SPEST_CON1 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_CON1_HSCE_SPEST_ADD_BD                               (16)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_CON1_HSCE_SPEST_ADD_BD                               (13)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_CON1_HSCE_SPEST_ADD_BD                               (0x1FFF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_CON1_HSCE_SPEST_MULT_BD                              (0)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_CON1_HSCE_SPEST_MULT_BD                              (13)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_CON1_HSCE_SPEST_MULT_BD                              (0x00001FFF)

// ---------- HSCE_SPEST_LCR0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0_HSCE_LCR_RDY                                    (31)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0_HSCE_LCR_RDY                                    (1)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0_HSCE_LCR_RDY                                    (0x80000000)
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0_HSCE_LCR_OCCUR0                                 (16)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0_HSCE_LCR_OCCUR0                                 (10)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0_HSCE_LCR_OCCUR0                                 (0x03FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0_HSCE_LCR_ERR                                    (15)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0_HSCE_LCR_ERR                                    (1)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0_HSCE_LCR_ERR                                    (0x00008000)
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0_HSCE_LCR_OCCUR1                                 (0)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0_HSCE_LCR_OCCUR1                                 (10)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR0_HSCE_LCR_OCCUR1                                 (0x000003FF)

// ---------- HSCE_SPEST_LCR1 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR1_HSCE_LCR_OCCUR2                                 (16)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR1_HSCE_LCR_OCCUR2                                 (10)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR1_HSCE_LCR_OCCUR2                                 (0x03FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR1_HSCE_LCR_OCCUR3                                 (0)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR1_HSCE_LCR_OCCUR3                                 (10)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR1_HSCE_LCR_OCCUR3                                 (0x000003FF)

// ---------- HSCE_SPEST_LCR2 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR2_HSCE_LCR_OCCUR4                                 (16)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR2_HSCE_LCR_OCCUR4                                 (10)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR2_HSCE_LCR_OCCUR4                                 (0x03FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR2_HSCE_LCR_OCCUR5                                 (0)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR2_HSCE_LCR_OCCUR5                                 (10)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR2_HSCE_LCR_OCCUR5                                 (0x000003FF)

// ---------- HSCE_SPEST_LCR3 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR3_HSCE_LCR_OCCUR6                                 (16)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR3_HSCE_LCR_OCCUR6                                 (10)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR3_HSCE_LCR_OCCUR6                                 (0x03FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR3_HSCE_LCR_OCCUR7                                 (0)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR3_HSCE_LCR_OCCUR7                                 (10)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_LCR3_HSCE_LCR_OCCUR7                                 (0x000003FF)

// ---------- HSCE_SPEST_INT0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_INT0_HSCE_INT_RDY                                    (31)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_INT0_HSCE_INT_RDY                                    (1)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_INT0_HSCE_INT_RDY                                    (0x80000000)
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_INT0_HSCE_INT_VALUE                                  (0)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_INT0_HSCE_INT_VALUE                                  (21)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_INT0_HSCE_INT_VALUE                                  (0x001FFFFF)

// ---------- HSCE_SPEST_INT1 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_SPEST_INT1_HSCE_INT_COUNT                                  (0)
#define L_CUIF_WCDMA_HSCE_HSCE_SPEST_INT1_HSCE_INT_COUNT                                  (12)
#define M_CUIF_WCDMA_HSCE_HSCE_SPEST_INT1_HSCE_INT_COUNT                                  (0x00000FFF)

// ---------- HSCE_DBG_CON bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_CON_DBG_SF_ANT_SEL                                     (0)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_CON_DBG_SF_ANT_SEL                                     (5)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_CON_DBG_SF_ANT_SEL                                     (0x0000001F)

// ---------- HSCE_DBG_LOG0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG0_DNG_TRK_BIAS                                      (28)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG0_DNG_TRK_BIAS                                      (4)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG0_DNG_TRK_BIAS                                      (0xF0000000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG0_DBG_OV_PHASE                                      (12)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG0_DBG_OV_PHASE                                      (3)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG0_DBG_OV_PHASE                                      (0x00007000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG0_DBG_IOEST                                         (0)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG0_DBG_IOEST                                         (10)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG0_DBG_IOEST                                         (0x000003FF)

// ---------- HSCE_DBG_LOG1 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG1_DBG_SV_PWR                                        (16)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG1_DBG_SV_PWR                                        (13)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG1_DBG_SV_PWR                                        (0x1FFF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG1_DBG_OC1_PWR                                       (0)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG1_DBG_OC1_PWR                                       (13)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG1_DBG_OC1_PWR                                       (0x00001FFF)

// ---------- HSCE_DBG_LOG2 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG2_DBG_OC2_PWR                                       (16)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG2_DBG_OC2_PWR                                       (13)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG2_DBG_OC2_PWR                                       (0x1FFF0000)

// ---------- HSCE_DBG_LOG3 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_SF_STATE                                      (28)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_SF_STATE                                      (4)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_SF_STATE                                      (0xF0000000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_LONG_CH_EN                                    (15)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_LONG_CH_EN                                    (1)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_LONG_CH_EN                                    (0x00008000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_EQ_CH_MODE                                    (12)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_EQ_CH_MODE                                    (2)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_EQ_CH_MODE                                    (0x00003000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_OCIC1_EN                                      (9)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_OCIC1_EN                                      (1)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_OCIC1_EN                                      (0x00000200)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_OCIC2_EN                                      (8)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_OCIC2_EN                                      (1)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG3_DBG_OCIC2_EN                                      (0x00000100)

// ---------- HSCE_DBG_LOG4 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4_DBG_SV_PMAX_IDX                                   (26)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4_DBG_SV_PMAX_IDX                                   (5)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4_DBG_SV_PMAX_IDX                                   (0x7C000000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4_DBG_SV_PMAX_I                                     (16)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4_DBG_SV_PMAX_I                                     (10)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4_DBG_SV_PMAX_I                                     (0x03FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4_LOG_SF_IDX                                        (12)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4_LOG_SF_IDX                                        (3)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4_LOG_SF_IDX                                        (0x00007000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4_DBG_SV_PMAX_Q                                     (0)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4_DBG_SV_PMAX_Q                                     (10)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG4_DBG_SV_PMAX_Q                                     (0x000003FF)

// ---------- HSCE_DBG_LOG5 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG5_DBG_OC1_PMAX_IDX                                  (26)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG5_DBG_OC1_PMAX_IDX                                  (5)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG5_DBG_OC1_PMAX_IDX                                  (0x7C000000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG5_DBG_OC1_PMAX_I                                    (16)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG5_DBG_OC1_PMAX_I                                    (10)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG5_DBG_OC1_PMAX_I                                    (0x03FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG5_DBG_OC1_PMAX_Q                                    (0)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG5_DBG_OC1_PMAX_Q                                    (10)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG5_DBG_OC1_PMAX_Q                                    (0x000003FF)

// ---------- HSCE_DBG_LOG6 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG6_DBG_OC2_PMAX_IDX                                  (26)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG6_DBG_OC2_PMAX_IDX                                  (5)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG6_DBG_OC2_PMAX_IDX                                  (0x7C000000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG6_DBG_OC2_PMAX_I                                    (16)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG6_DBG_OC2_PMAX_I                                    (10)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG6_DBG_OC2_PMAX_I                                    (0x03FF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG6_DBG_OC2_PMAX_Q                                    (0)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG6_DBG_OC2_PMAX_Q                                    (10)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG6_DBG_OC2_PMAX_Q                                    (0x000003FF)

// ---------- HSCE_DBG_LOG7 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG7_DBG_TRK_BIAS2                                     (28)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG7_DBG_TRK_BIAS2                                     (4)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG7_DBG_TRK_BIAS2                                     (0xF0000000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG7_DBG_OV_PHASE2                                     (12)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG7_DBG_OV_PHASE2                                     (3)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG7_DBG_OV_PHASE2                                     (0x00007000)
#define P_CUIF_WCDMA_HSCE_HSCE_DBG_LOG7_DBG_IOEST2                                        (0)
#define L_CUIF_WCDMA_HSCE_HSCE_DBG_LOG7_DBG_IOEST2                                        (10)
#define M_CUIF_WCDMA_HSCE_HSCE_DBG_LOG7_DBG_IOEST2                                        (0x000003FF)

// ---------- HSCE_RFEQ_CON0 bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_RFEQ_CON0_HSCE_RFEQ_TAP_NUM                                 (8)
#define L_CUIF_WCDMA_HSCE_HSCE_RFEQ_CON0_HSCE_RFEQ_TAP_NUM                                 (3)
#define M_CUIF_WCDMA_HSCE_HSCE_RFEQ_CON0_HSCE_RFEQ_TAP_NUM                                 (0x00000700)
#define P_CUIF_WCDMA_HSCE_HSCE_RFEQ_CON0_HSCE_RFEQ_RX1_EN                                  (1)
#define L_CUIF_WCDMA_HSCE_HSCE_RFEQ_CON0_HSCE_RFEQ_RX1_EN                                  (1)
#define M_CUIF_WCDMA_HSCE_HSCE_RFEQ_CON0_HSCE_RFEQ_RX1_EN                                  (0x00000002)
#define P_CUIF_WCDMA_HSCE_HSCE_RFEQ_CON0_HSCE_RFEQ_RX0_EN                                  (0)
#define L_CUIF_WCDMA_HSCE_HSCE_RFEQ_CON0_HSCE_RFEQ_RX0_EN                                  (1)
#define M_CUIF_WCDMA_HSCE_HSCE_RFEQ_CON0_HSCE_RFEQ_RX0_EN                                  (0x00000001)

// ---------- HSCE_RFEQ_RX0_COEF bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_RFEQ_RX0_COEF_HSCE_RFEQ_RX0_COEF_IMG                        (16)
#define L_CUIF_WCDMA_HSCE_HSCE_RFEQ_RX0_COEF_HSCE_RFEQ_RX0_COEF_IMG                        (16)
#define M_CUIF_WCDMA_HSCE_HSCE_RFEQ_RX0_COEF_HSCE_RFEQ_RX0_COEF_IMG                        (0xFFFF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_RFEQ_RX0_COEF_HSCE_RFEQ_RX0_COEF_REAL                       (0)
#define L_CUIF_WCDMA_HSCE_HSCE_RFEQ_RX0_COEF_HSCE_RFEQ_RX0_COEF_REAL                       (16)
#define M_CUIF_WCDMA_HSCE_HSCE_RFEQ_RX0_COEF_HSCE_RFEQ_RX0_COEF_REAL                       (0x0000FFFF)

// ---------- HSCE_RFEQ_RX1_COEF bit-field ----------
#define P_CUIF_WCDMA_HSCE_HSCE_RFEQ_RX1_COEF_HSCE_RFEQ_RX1_COEF_IMG                        (16)
#define L_CUIF_WCDMA_HSCE_HSCE_RFEQ_RX1_COEF_HSCE_RFEQ_RX1_COEF_IMG                        (16)
#define M_CUIF_WCDMA_HSCE_HSCE_RFEQ_RX1_COEF_HSCE_RFEQ_RX1_COEF_IMG                        (0xFFFF0000)
#define P_CUIF_WCDMA_HSCE_HSCE_RFEQ_RX1_COEF_HSCE_RFEQ_RX1_COEF_REAL                       (0)
#define L_CUIF_WCDMA_HSCE_HSCE_RFEQ_RX1_COEF_HSCE_RFEQ_RX1_COEF_REAL                       (16)
#define M_CUIF_WCDMA_HSCE_HSCE_RFEQ_RX1_COEF_HSCE_RFEQ_RX1_COEF_REAL                       (0x0000FFFF)
#endif // __CUIF_WCDMA_HSCE_H__
