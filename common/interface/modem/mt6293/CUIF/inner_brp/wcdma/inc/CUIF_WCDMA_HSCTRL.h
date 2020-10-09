#ifndef __CUIF_WCDMA_HSCTRL_H__
#define __CUIF_WCDMA_HSCTRL_H__

// ----------------- CUIF_WCDMA_HSCTRL Register Definition -------------------
typedef volatile struct {
    kal_uint32 HSCTRL_CON0;                                                               // 0x0000
    kal_uint32 HSCTRL_SWRST0;                                                             // 0x0004
    kal_uint32 HSCTRL_SWRST1;                                                             // 0x0008
    kal_uint32 HSCTRL_SWRST2;                                                             // 0x000C
    kal_uint32 HSCTRL_SWRST3;                                                             // 0x0010
    kal_uint32 HSCTRL_SCCH_CON;                                                           // 0x0014
    kal_uint32 HSCTRL_REIF_CON;                                                           // 0x0018
    kal_uint32 HSCTRL_GAP;                                                                // 0x001C
    kal_uint32 HSCTRL_SWT1RST;                                                            // 0x0020
    kal_uint32 HSCTRL_SWMODE0;                                                            // 0x0024
    kal_uint32 HSCTRL_SWMODE1_SUBF[5];                                                    // 0x0028..0x0038
    kal_uint32 HSCTRL_SWMODE2;                                                            // 0x003C
    kal_uint32 HSCTRL_SWMODE3;                                                            // 0x0040
    kal_uint32 HSCTRL_CON3;                                                               // 0x0044
    kal_uint32 HSCTRL_CON5;                                                               // 0x0048
    kal_uint32 HSCTRL_CON6_SUBF[5];                                                       // 0x004C..0x005C
    kal_uint32 HSCTRL_CON8;                                                               // 0x0060
    kal_uint32 HSCTRL_SFCFG0_SUBF[5];                                                     // 0x0064..0x0074
    kal_uint32 HSCTRL_SFCFG1_SUBF[5];                                                     // 0x0078..0x0088
    kal_uint32 HSCTRL_LESSCFG0;                                                           // 0x008C
    kal_uint32 HSCTRL_LESSCFG1_SUBF[5];                                                   // 0x0090..0x00A0
    kal_uint32 HSCTRL_LESSCFG2_SUBF[5];                                                   // 0x00A4..0x00B4
    kal_uint32 HSCTRL_LESSCFG3;                                                           // 0x00B8
} CUIF_WCDMA_HSCTRL_REGS, *PCUIF_WCDMA_HSCTRL_REGS;

// ---------- CUIF_WCDMA_HSCTRL word-offset  ----------
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_CON0                                                   (0)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST0                                                 (1)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST1                                                 (2)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST2                                                 (3)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST3                                                 (4)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_SCCH_CON                                               (5)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_REIF_CON                                               (6)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_GAP                                                    (7)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_SWT1RST                                                (8)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE0                                                (9)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE1_SUBF(i)                                        (10 + (i))
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2                                                (15)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3                                                (16)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_CON3                                                   (17)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_CON5                                                   (18)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_CON6_SUBF(i)                                           (19 + (i))
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_CON8                                                   (24)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_SFCFG0_SUBF(i)                                         (25 + (i))
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_SFCFG1_SUBF(i)                                         (30 + (i))
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG0                                               (35)
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG1_SUBF(i)                                       (36 + (i))
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG2_SUBF(i)                                       (41 + (i))
#define O_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG3                                               (46)

// ---------- HSCTRL_CON0 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_HSEN                                              (15)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_HSEN                                              (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_HSEN                                              (0x00008000)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN4                                          (8)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN4                                          (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN4                                          (0x00000100)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN3                                          (7)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN3                                          (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN3                                          (0x00000080)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN2                                          (6)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN2                                          (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN2                                          (0x00000040)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN1                                          (5)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN1                                          (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN1                                          (0x00000020)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN0                                          (4)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN0                                          (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON0_DSCH_EN0                                          (0x00000010)

// ---------- HSCTRL_SWRST0 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST0_SW_IIR_RST                                      (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST0_SW_IIR_RST                                      (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST0_SW_IIR_RST                                      (0x00000001)

// ---------- HSCTRL_SWRST1 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST1_SW_OC_RST                                       (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST1_SW_OC_RST                                       (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST1_SW_OC_RST                                       (0x00000001)

// ---------- HSCTRL_SWRST2 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST2_SW_SVC_RST                                      (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST2_SW_SVC_RST                                      (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST2_SW_SVC_RST                                      (0x00000001)

// ---------- HSCTRL_SWRST3 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST3_SW_OC2_RST                                      (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST3_SW_OC2_RST                                      (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWRST3_SW_OC2_RST                                      (0x00000001)

// ---------- HSCTRL_SCCH_CON bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SCCH_CON_SCCH_OFS                                      (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SCCH_CON_SCCH_OFS                                      (5)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SCCH_CON_SCCH_OFS                                      (0x0000001F)

// ---------- HSCTRL_REIF_CON bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_REIF_CON_PILOT_LEN                                     (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_REIF_CON_PILOT_LEN                                     (11)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_REIF_CON_PILOT_LEN                                     (0x000007FF)

// ---------- HSCTRL_GAP bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP4                                               (4)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP4                                               (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP4                                               (0x00000010)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP3                                               (3)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP3                                               (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP3                                               (0x00000008)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP2                                               (2)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP2                                               (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP2                                               (0x00000004)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP1                                               (1)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP1                                               (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP1                                               (0x00000002)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP0                                               (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP0                                               (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_GAP_GAP0                                               (0x00000001)

// ---------- HSCTRL_SWT1RST bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWT1RST_SW_T1RST                                       (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWT1RST_SW_T1RST                                       (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWT1RST_SW_T1RST                                       (0x00000001)

// ---------- HSCTRL_SWMODE0 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE0_SW_MODE_EN                                     (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE0_SW_MODE_EN                                     (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE0_SW_MODE_EN                                     (0x00000001)

// ---------- HSCTRL_SWMODE1_SUBF bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE1_SUBF_DSCH_EN                                   (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE1_SUBF_DSCH_EN                                   (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE1_SUBF_DSCH_EN                                   (0x00000001)

// ---------- HSCTRL_SWMODE2 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2_QAM_TYPE                                       (12)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2_QAM_TYPE                                       (2)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2_QAM_TYPE                                       (0x00003000)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2_PROC_ID                                        (8)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2_PROC_ID                                        (3)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2_PROC_ID                                        (0x00000700)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2_OVSF_CNUM                                      (4)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2_OVSF_CNUM                                      (4)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2_OVSF_CNUM                                      (0x000000F0)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2_OVSF_SIDX                                      (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2_OVSF_SIDX                                      (4)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE2_OVSF_SIDX                                      (0x0000000F)

// ---------- HSCTRL_SWMODE3 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI4                                           (4)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI4                                           (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI4                                           (0x00000010)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI3                                           (3)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI3                                           (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI3                                           (0x00000008)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI2                                           (2)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI2                                           (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI2                                           (0x00000004)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI1                                           (1)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI1                                           (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI1                                           (0x00000002)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI0                                           (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI0                                           (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SWMODE3_NDI0                                           (0x00000001)

// ---------- HSCTRL_CON3 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON3_RXD_EN                                            (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON3_RXD_EN                                            (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON3_RXD_EN                                            (0x00000001)

// ---------- HSCTRL_CON5 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON5_CE_STOP_EN                                        (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON5_CE_STOP_EN                                        (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON5_CE_STOP_EN                                        (0x00000001)

// ---------- HSCTRL_CON6_SUBF bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON6_SUBF_CE_STOP                                      (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON6_SUBF_CE_STOP                                      (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON6_SUBF_CE_STOP                                      (0x00000001)

// ---------- HSCTRL_CON8 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_SFC_DATA_BUF_SEL                                  (25)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_SFC_DATA_BUF_SEL                                  (5)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_SFC_DATA_BUF_SEL                                  (0x3E000000)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL4                                (20)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL4                                (5)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL4                                (0x01F00000)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL3                                (15)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL3                                (5)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL3                                (0x000F8000)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL2                                (10)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL2                                (5)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL2                                (0x00007C00)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL1                                (5)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL1                                (5)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL1                                (0x000003E0)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL0                                (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL0                                (5)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_CON8_DSCH_DATA_BUF_SEL0                                (0x0000001F)

// ---------- HSCTRL_SFCFG0_SUBF bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SFCFG0_SUBF_SFk_CON_EN                                 (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SFCFG0_SUBF_SFk_CON_EN                                 (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SFCFG0_SUBF_SFk_CON_EN                                 (0x00000001)

// ---------- HSCTRL_SFCFG1_SUBF bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_SFCFG1_SUBF_SFk_CON                                    (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_SFCFG1_SUBF_SFk_CON                                    (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_SFCFG1_SUBF_SFk_CON                                    (0x00000001)

// ---------- HSCTRL_LESSCFG0 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG0_DCH_LESS_EN                                   (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG0_DCH_LESS_EN                                   (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG0_DCH_LESS_EN                                   (0x00000001)

// ---------- HSCTRL_LESSCFG1_SUBF bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG1_SUBF_LESS_SFk_CON_EN                          (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG1_SUBF_LESS_SFk_CON_EN                          (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG1_SUBF_LESS_SFk_CON_EN                          (0x00000001)

// ---------- HSCTRL_LESSCFG2_SUBF bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG2_SUBF_LESS_SFk_CON                             (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG2_SUBF_LESS_SFk_CON                             (1)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG2_SUBF_LESS_SFk_CON                             (0x00000001)

// ---------- HSCTRL_LESSCFG3 bit-field ----------
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG3_OVSF_CNUM                                     (4)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG3_OVSF_CNUM                                     (4)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG3_OVSF_CNUM                                     (0x000000F0)
#define P_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG3_OVSF_SIDX                                     (0)
#define L_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG3_OVSF_SIDX                                     (4)
#define M_CUIF_WCDMA_HSCTRL_HSCTRL_LESSCFG3_OVSF_SIDX                                     (0x0000000F)

#endif // __CUIF_WCDMA_HSCTRL_H__
