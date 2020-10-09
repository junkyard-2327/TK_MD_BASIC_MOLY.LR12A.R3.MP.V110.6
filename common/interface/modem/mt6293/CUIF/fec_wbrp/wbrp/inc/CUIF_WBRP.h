#ifndef __WR99_CUIF_H__
#define __WR99_CUIF_H__

// ----------------- WR99_CUIF Register Definition -------------------
typedef volatile struct {
    kal_uint32 RXBRP_CCm_TRCH_EN_OR_EBD[2];                                               // 0x8004..0x8008
    kal_uint32 RXBRP_CCm_FRAME_IDX[2];                                                    // 0x8014..0x8018
    kal_uint32 RXBRP_CCm_PHCH[2];                                                         // 0x801C..0x8020
    kal_uint32 RXBRP_CCm_BTFD_DMA_DST_CALC[2];                                            // 0x8024..0x8028
    kal_uint32 RXBRP_CCm_BTFD_PARAMk[6];                                                  // 0x802C..0x8040
    kal_uint32 RXBRP_CCm_BTFD_STOP_POINTk[32];                                            // 0x8044..0x80C0
    kal_uint32 RXBRP_CCm_BTFD_CRC_POINTk[32];                                             // 0x80C4..0x8140
    kal_uint32 RXBRP_TRCHm_E_PLUS[16];                                                    // 0x8144..0x8180
    kal_uint32 RXBRP_TRCHm_E_MINUS[16];                                                   // 0x8184..0x81C0
    kal_uint32 RXBRP_TRCHm_CLEN[16];                                                      // 0x81C4..0x8200
    kal_uint32 RXBRP_TRCHm_BASEP[16];                                                     // 0x8204..0x8240
    kal_uint32 RXBRP_TRCHm_TRBK[16];                                                      // 0x8244..0x8280
    kal_uint32 RXBRP_TRCHm_COBK[16];                                                      // 0x8284..0x82C0
    kal_uint32 RXBRP_TRCHm_DST_ADDR[16];                                                  // 0x82C4..0x8300
    kal_uint32 RXBRP_TRCHm_DMA_CFG[16];                                                   // 0x8304..0x8340
    kal_uint32 RXBRP_BCH_DMA_CFG;                                                         // 0x8344
    kal_uint32 RXBRP_BCH_DST_ADDR;                                                        // 0x8348
    kal_uint32 RXBRP_CCm_TFk_ENERGY[32];                                                  // 0x834C..0x83C8
    kal_uint32 RXBRP_CCm_BTFD_RESULTk[6];                                                 // 0x83CC..0x83E0
    kal_uint32 RXBRP_TRCHm_TBCRC_STATUS[16];                                              // 0x83E4..0x8420
    kal_uint32 RXBRP_TRCHm_ENERGY[16];                                                    // 0x8424..0x8460
    kal_uint32 RXBRP_TRCHm_CBkSVALUE[80];                                                 // 0x8464..0x85A0
    kal_uint32 RXBRP_BCH_SFN;                                                             // 0x85A4
    kal_uint32 RXBRP_BCH_SVALUE;                                                          // 0x85AC
    kal_uint32 RXBRP_CCm_PARAM[2];                                                        // 0x8710..0x8714
    kal_uint32 RXBRP_TRCHm_CFG[16];                                                       // 0x8798..0x87D4
    kal_uint32 RXBRP_BCH_START;                                                           // 0x87D8
    kal_uint32 RXBRP_BCHSFN_STOP;                                                         // 0x87DC
    kal_uint32 RXBRP_CCm_TRCH_EN_OR_EBD_IRQ[2];                                           // 0x87EC..0x87F0
    kal_uint32 RXBRP_CCm_BTFD_PHASE_ACT[2];                                               // 0x87F4..0x87F8
    kal_uint32 RXBRP_BCH_GNRL_CFG;                                                        // 0x87FC
    kal_uint32 RXBRP_CCm_3GLORX_EN[2];                                                    // 0x8800..0x8804
    kal_uint32 RXBRP_CCm_3GLORX_VALID_DATA_NUM[2];                                        // 0x8808..0x880C
    kal_uint32 RXBRP_CCm_3GLORX_SVALUE_THRESHOLD[2];                                      // 0x8810..0x8814
    kal_uint32 RXBRP_CCm_3GLORX_EBD_COEFF[2];                                             // 0x8818..0x881C
    kal_uint32 RXBRP_CCm_3GLORX_DUAL_COEFF[2];                                            // 0x8820..0x8824
    kal_uint32 RXBRP_3GLORX_DFE_PULSE;                                                    // 0x8828
    kal_uint32 RXBRP_CCm_EBD_DEC_TRCH_MASK[2];                                            // 0x882C..0x8830
    kal_uint32 RXBRP_CCm_STOP[2];                                                         // 0x8834..0x8838
    kal_uint32 RXBRP_CCm_SYMBOL_NUM[2];                                                   // 0x883C..0x8840
    kal_uint32 RXBRP_CCm_SYMBOL_SUM[2];                                                   // 0x8844..0x8848
    kal_uint32 RXBRP_CCm_BUFIDX[2];                                                       // 0x884C..0x8850
    kal_uint32 RXBRP_CCm_SUSPEND_GAP[2];                                                  // 0x8854..0x8858
    kal_uint32 RXBRP_CCm_WRITE_PHCH_TWICE[2];                                             // 0x8860..0x8864
    kal_uint32 RXBRP_CCm_TRCH_DONE[2];                                                    // 0x88BC..0x88C0
    kal_uint32 RXBRP_TRCHm_TTI_MIN_SCF[16];                                               // 0x88E4..0x8920
    kal_uint32 RXBRP_BCHSFN_GUARD_TIME;                                                   // 0x8924
} WR99_CUIF_REGS, *PWR99_CUIF_REGS;

// ---------- WR99_CUIF word-offset  ----------
#define O_WR99_CUIF_RXBRP_CCm_TRCH_EN_OR_EBD(i)                                           (1 + (i))
#define O_WR99_CUIF_RXBRP_CCm_FRAME_IDX(i)                                                (5 + (i))
#define O_WR99_CUIF_RXBRP_CCm_PHCH(i)                                                     (7 + (i))
#define O_WR99_CUIF_RXBRP_CCm_BTFD_DMA_DST_CALC(i)                                        (9 + (i))
#define O_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk(i)                                              (11 + (i))
#define O_WR99_CUIF_RXBRP_CCm_BTFD_STOP_POINTk(i)                                         (17 + (i))
#define O_WR99_CUIF_RXBRP_CCm_BTFD_CRC_POINTk(i)                                          (49 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_E_PLUS(i)                                                 (81 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_E_MINUS(i)                                                (97 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_CLEN(i)                                                   (113 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_BASEP(i)                                                  (129 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_TRBK(i)                                                   (145 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_COBK(i)                                                   (161 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_DST_ADDR(i)                                               (177 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_DMA_CFG(i)                                                (193 + (i))
#define O_WR99_CUIF_RXBRP_BCH_DMA_CFG                                                     (209)
#define O_WR99_CUIF_RXBRP_BCH_DST_ADDR                                                    (210)
#define O_WR99_CUIF_RXBRP_CCm_TFk_ENERGY(i)                                               (211 + (i))
#define O_WR99_CUIF_RXBRP_CCm_BTFD_RESULTk(i)                                             (243 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_TBCRC_STATUS(i)                                           (249 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_ENERGY(i)                                                 (265 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_CBkSVALUE(i)                                              (281 + (i))
#define O_WR99_CUIF_RXBRP_BCH_SFN                                                         (361)
#define O_WR99_CUIF_RXBRP_BCH_SVALUE                                                      (363)
#define O_WR99_CUIF_RXBRP_CCm_PARAM(i)                                                    (452 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_CFG(i)                                                    (486 + (i))
#define O_WR99_CUIF_RXBRP_BCH_START                                                       (502)
#define O_WR99_CUIF_RXBRP_BCHSFN_STOP                                                     (503)
#define O_WR99_CUIF_RXBRP_CCm_TRCH_EN_OR_EBD_IRQ(i)                                       (507 + (i))
#define O_WR99_CUIF_RXBRP_CCm_BTFD_PHASE_ACT(i)                                           (509 + (i))
#define O_WR99_CUIF_RXBRP_BCH_GNRL_CFG                                                    (511)
#define O_WR99_CUIF_RXBRP_CCm_3GLORX_EN(i)                                                (512 + (i))
#define O_WR99_CUIF_RXBRP_CCm_3GLORX_VALID_DATA_NUM(i)                                    (514 + (i))
#define O_WR99_CUIF_RXBRP_CCm_3GLORX_SVALUE_THRESHOLD(i)                                  (516 + (i))
#define O_WR99_CUIF_RXBRP_CCm_3GLORX_EBD_COEFF(i)                                         (518 + (i))
#define O_WR99_CUIF_RXBRP_CCm_3GLORX_DUAL_COEFF(i)                                        (520 + (i))
#define O_WR99_CUIF_RXBRP_3GLORX_DFE_PULSE                                                (522)
#define O_WR99_CUIF_RXBRP_CCm_EBD_DEC_TRCH_MASK(i)                                        (523 + (i))
#define O_WR99_CUIF_RXBRP_CCm_STOP(i)                                                     (525 + (i))
#define O_WR99_CUIF_RXBRP_CCm_SYMBOL_NUM(i)                                               (527 + (i))
#define O_WR99_CUIF_RXBRP_CCm_SYMBOL_SUM(i)                                               (529 + (i))
#define O_WR99_CUIF_RXBRP_CCm_BUFIDX(i)                                                   (531 + (i))
#define O_WR99_CUIF_RXBRP_CCm_SUSPEND_GAP(i)                                              (533 + (i))
#define O_WR99_CUIF_RXBRP_CCm_WRITE_PHCH_TWICE(i)                                         (535 + (i))
#define O_WR99_CUIF_RXBRP_CCm_TRCH_DONE(i)                                                (559 + (i))
#define O_WR99_CUIF_RXBRP_TRCHm_TTI_MIN_SCF(i)                                            (569 + (i))
#define O_WR99_CUIF_RXBRP_BCHSFN_GUARD_TIME                                               (585 + (i))

// ---------- RXBRP_CCm_TRCH_EN_OR_EBD bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_TRCH_EN_OR_EBD_TRCH_EN_OR_EBD                               (0)
#define L_WR99_CUIF_RXBRP_CCm_TRCH_EN_OR_EBD_TRCH_EN_OR_EBD                               (16)
#define M_WR99_CUIF_RXBRP_CCm_TRCH_EN_OR_EBD_TRCH_EN_OR_EBD                               (0x0000FFFF)

// ---------- RXBRP_CCm_FRAME_IDX bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_FRAME_IDX_FRAME_INDEX                                       (0)
#define L_WR99_CUIF_RXBRP_CCm_FRAME_IDX_FRAME_INDEX                                       (3)
#define M_WR99_CUIF_RXBRP_CCm_FRAME_IDX_FRAME_INDEX                                       (0x00000007)

// ---------- RXBRP_CCm_PHCH bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_PHCH_PHCH_NUM                                               (30)
#define L_WR99_CUIF_RXBRP_CCm_PHCH_PHCH_NUM                                               (2)
#define M_WR99_CUIF_RXBRP_CCm_PHCH_PHCH_NUM                                               (0xC0000000)
#define P_WR99_CUIF_RXBRP_CCm_PHCH_PHCH_ROWS                                              (20)
#define L_WR99_CUIF_RXBRP_CCm_PHCH_PHCH_ROWS                                              (10)
#define M_WR99_CUIF_RXBRP_CCm_PHCH_PHCH_ROWS                                              (0x3FF00000)
#define P_WR99_CUIF_RXBRP_CCm_PHCH_PHCH_LAST_ROW                                          (15)
#define L_WR99_CUIF_RXBRP_CCm_PHCH_PHCH_LAST_ROW                                          (5)
#define M_WR99_CUIF_RXBRP_CCm_PHCH_PHCH_LAST_ROW                                          (0x000F8000)
#define P_WR99_CUIF_RXBRP_CCm_PHCH_PHCH_LENGTH                                            (0)
#define L_WR99_CUIF_RXBRP_CCm_PHCH_PHCH_LENGTH                                            (15)
#define M_WR99_CUIF_RXBRP_CCm_PHCH_PHCH_LENGTH                                            (0x00007FFF)

// ---------- RXBRP_CCm_BTFD_DMA_DST_CALC bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_BTFD_DMA_DST_CALC_DMA_DST_CALC_SET                          (0)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_DMA_DST_CALC_DMA_DST_CALC_SET                          (1)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_DMA_DST_CALC_DMA_DST_CALC_SET                          (0x00000001)

// ---------- RXBRP_CCm_BTFD_PARAMk bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk_EXPLICIT_IND                                    (12)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk_EXPLICIT_IND                                    (1)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk_EXPLICIT_IND                                    (0x00001000)
#define P_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk_TRCH_ID                                         (8)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk_TRCH_ID                                         (4)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk_TRCH_ID                                         (0x00000F00)
#define P_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk_LAST_STOP_POINT_IDX                             (4)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk_LAST_STOP_POINT_IDX                             (4)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk_LAST_STOP_POINT_IDX                             (0x000000F0)
#define P_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk_FIRST_STOP_POINT_IDX                            (0)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk_FIRST_STOP_POINT_IDX                            (4)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_PARAMk_FIRST_STOP_POINT_IDX                            (0x0000000F)

// ---------- RXBRP_CCm_BTFD_STOP_POINTk bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_BTFD_STOP_POINTk_TF_GLEN                                    (16)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_STOP_POINTk_TF_GLEN                                    (16)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_STOP_POINTk_TF_GLEN                                    (0xFFFF0000)
#define P_WR99_CUIF_RXBRP_CCm_BTFD_STOP_POINTk_BTFD_MULTI                                 (10)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_STOP_POINTk_BTFD_MULTI                                 (1)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_STOP_POINTk_BTFD_MULTI                                 (0x00000400)
#define P_WR99_CUIF_RXBRP_CCm_BTFD_STOP_POINTk_BTFD_STOP_POINT                            (0)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_STOP_POINTk_BTFD_STOP_POINT                            (10)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_STOP_POINTk_BTFD_STOP_POINT                            (0x000003FF)

// ---------- RXBRP_CCm_BTFD_CRC_POINTk bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_BTFD_CRC_POINTk_BTFD_CRC_POINT_TB_NUM                       (10)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_CRC_POINTk_BTFD_CRC_POINT_TB_NUM                       (6)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_CRC_POINTk_BTFD_CRC_POINT_TB_NUM                       (0x0000FC00)
#define P_WR99_CUIF_RXBRP_CCm_BTFD_CRC_POINTk_BTFD_CRC_POINT_TB_SIZE                      (0)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_CRC_POINTk_BTFD_CRC_POINT_TB_SIZE                      (10)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_CRC_POINTk_BTFD_CRC_POINT_TB_SIZE                      (0x000003FF)

// ---------- RXBRP_TRCHm_E_PLUS bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_E_PLUS_E_PLUS                                             (0)
#define L_WR99_CUIF_RXBRP_TRCHm_E_PLUS_E_PLUS                                             (18)
#define M_WR99_CUIF_RXBRP_TRCHm_E_PLUS_E_PLUS                                             (0x0003FFFF)

// ---------- RXBRP_TRCHm_E_MINUS bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_E_MINUS_E_M_2_FACTOR                                      (24)
#define L_WR99_CUIF_RXBRP_TRCHm_E_MINUS_E_M_2_FACTOR                                      (1)
#define M_WR99_CUIF_RXBRP_TRCHm_E_MINUS_E_M_2_FACTOR                                      (0x01000000)
#define P_WR99_CUIF_RXBRP_TRCHm_E_MINUS_E_MINUS                                           (0)
#define L_WR99_CUIF_RXBRP_TRCHm_E_MINUS_E_MINUS                                           (18)
#define M_WR99_CUIF_RXBRP_TRCHm_E_MINUS_E_MINUS                                           (0x0003FFFF)

// ---------- RXBRP_TRCHm_CLEN bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_CLEN_CLEN                                                 (0)
#define L_WR99_CUIF_RXBRP_TRCHm_CLEN_CLEN                                                 (16)
#define M_WR99_CUIF_RXBRP_TRCHm_CLEN_CLEN                                                 (0x0000FFFF)

// ---------- RXBRP_TRCHm_BASEP bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_BASEP_FRAME_RD_BASEP                                      (16)
#define L_WR99_CUIF_RXBRP_TRCHm_BASEP_FRAME_RD_BASEP                                      (16)
#define M_WR99_CUIF_RXBRP_TRCHm_BASEP_FRAME_RD_BASEP                                      (0xFFFF0000)
#define P_WR99_CUIF_RXBRP_TRCHm_BASEP_TTI_BASEP                                           (0)
#define L_WR99_CUIF_RXBRP_TRCHm_BASEP_TTI_BASEP                                           (16)
#define M_WR99_CUIF_RXBRP_TRCHm_BASEP_TTI_BASEP                                           (0x0000FFFF)

// ---------- RXBRP_TRCHm_TRBK bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_TRBK_TBSIZE                                               (16)
#define L_WR99_CUIF_RXBRP_TRCHm_TRBK_TBSIZE                                               (14)
#define M_WR99_CUIF_RXBRP_TRCHm_TRBK_TBSIZE                                               (0x3FFF0000)
#define P_WR99_CUIF_RXBRP_TRCHm_TRBK_TBNUM                                                (0)
#define L_WR99_CUIF_RXBRP_TRCHm_TRBK_TBNUM                                                (6)
#define M_WR99_CUIF_RXBRP_TRCHm_TRBK_TBNUM                                                (0x0000003F)

// ---------- RXBRP_TRCHm_COBK bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_COBK_CBSIZE                                               (16)
#define L_WR99_CUIF_RXBRP_TRCHm_COBK_CBSIZE                                               (13)
#define M_WR99_CUIF_RXBRP_TRCHm_COBK_CBSIZE                                               (0x1FFF0000)
#define P_WR99_CUIF_RXBRP_TRCHm_COBK_CBPAD                                                (4)
#define L_WR99_CUIF_RXBRP_TRCHm_COBK_CBPAD                                                (6)
#define M_WR99_CUIF_RXBRP_TRCHm_COBK_CBPAD                                                (0x000003F0)
#define P_WR99_CUIF_RXBRP_TRCHm_COBK_CBNUM                                                (0)
#define L_WR99_CUIF_RXBRP_TRCHm_COBK_CBNUM                                                (4)
#define M_WR99_CUIF_RXBRP_TRCHm_COBK_CBNUM                                                (0x0000000F)

// ---------- RXBRP_TRCHm_DST_ADDR bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_DST_ADDR_DST_ADDR                                         (0)
#define L_WR99_CUIF_RXBRP_TRCHm_DST_ADDR_DST_ADDR                                         (32)
#define M_WR99_CUIF_RXBRP_TRCHm_DST_ADDR_DST_ADDR                                         (0xFFFFFFFF)

// ---------- RXBRP_TRCHm_DMA_CFG bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_DMA_CFG_CRC_REMOVE                                        (7)
#define L_WR99_CUIF_RXBRP_TRCHm_DMA_CFG_CRC_REMOVE                                        (1)
#define M_WR99_CUIF_RXBRP_TRCHm_DMA_CFG_CRC_REMOVE                                        (0x00000080)
#define P_WR99_CUIF_RXBRP_TRCHm_DMA_CFG_SWAP_ENDIAN                                       (5)
#define L_WR99_CUIF_RXBRP_TRCHm_DMA_CFG_SWAP_ENDIAN                                       (1)
#define M_WR99_CUIF_RXBRP_TRCHm_DMA_CFG_SWAP_ENDIAN                                       (0x00000020)
#define P_WR99_CUIF_RXBRP_TRCHm_DMA_CFG_BIT_OFFSET                                        (0)
#define L_WR99_CUIF_RXBRP_TRCHm_DMA_CFG_BIT_OFFSET                                        (5)
#define M_WR99_CUIF_RXBRP_TRCHm_DMA_CFG_BIT_OFFSET                                        (0x0000001F)

// ---------- RXBRP_BCH_DMA_CFG bit-field ----------
#define P_WR99_CUIF_RXBRP_BCH_DMA_CFG_DMA_ENAB                                            (8)
#define L_WR99_CUIF_RXBRP_BCH_DMA_CFG_DMA_ENAB                                            (1)
#define M_WR99_CUIF_RXBRP_BCH_DMA_CFG_DMA_ENAB                                            (0x00000100)
#define P_WR99_CUIF_RXBRP_BCH_DMA_CFG_CRC_REMOVE                                          (7)
#define L_WR99_CUIF_RXBRP_BCH_DMA_CFG_CRC_REMOVE                                          (1)
#define M_WR99_CUIF_RXBRP_BCH_DMA_CFG_CRC_REMOVE                                          (0x00000080)
#define P_WR99_CUIF_RXBRP_BCH_DMA_CFG_SWAP_ENDIAN                                         (5)
#define L_WR99_CUIF_RXBRP_BCH_DMA_CFG_SWAP_ENDIAN                                         (1)
#define M_WR99_CUIF_RXBRP_BCH_DMA_CFG_SWAP_ENDIAN                                         (0x00000020)
#define P_WR99_CUIF_RXBRP_BCH_DMA_CFG_BIT_OFFSET                                          (0)
#define L_WR99_CUIF_RXBRP_BCH_DMA_CFG_BIT_OFFSET                                          (5)
#define M_WR99_CUIF_RXBRP_BCH_DMA_CFG_BIT_OFFSET                                          (0x0000001F)

// ---------- RXBRP_BCH_DST_ADDR bit-field ----------
#define P_WR99_CUIF_RXBRP_BCH_DST_ADDR_DST_ADDR                                           (0)
#define L_WR99_CUIF_RXBRP_BCH_DST_ADDR_DST_ADDR                                           (32)
#define M_WR99_CUIF_RXBRP_BCH_DST_ADDR_DST_ADDR                                           (0xFFFFFFFF)

// ---------- RXBRP_CCm_TFk_ENERGY bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_TFk_ENERGY_CCm_TFk_ENERGY                                   (0)
#define L_WR99_CUIF_RXBRP_CCm_TFk_ENERGY_CCm_TFk_ENERGY                                   (15)
#define M_WR99_CUIF_RXBRP_CCm_TFk_ENERGY_CCm_TFk_ENERGY                                   (0x00007FFF)

// ---------- RXBRP_CCm_BTFD_RESULTk bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_BTFD_RESULTk_BTFD_PASS                                      (15)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_RESULTk_BTFD_PASS                                      (1)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_RESULTk_BTFD_PASS                                      (0x00008000)
#define P_WR99_CUIF_RXBRP_CCm_BTFD_RESULTk_BTFD_POINT_IDX                                 (0)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_RESULTk_BTFD_POINT_IDX                                 (4)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_RESULTk_BTFD_POINT_IDX                                 (0x0000000F)

// ---------- RXBRP_TRCHm_TBCRC_STATUS bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_TBCRC_STATUS_TB0_TB31                                     (0)
#define L_WR99_CUIF_RXBRP_TRCHm_TBCRC_STATUS_TB0_TB31                                     (32)
#define M_WR99_CUIF_RXBRP_TRCHm_TBCRC_STATUS_TB0_TB31                                     (0xFFFFFFFF)

// ---------- RXBRP_TRCHm_ENERGY bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_ENERGY_ENERGY                                             (0)
#define L_WR99_CUIF_RXBRP_TRCHm_ENERGY_ENERGY                                             (21)
#define M_WR99_CUIF_RXBRP_TRCHm_ENERGY_ENERGY                                             (0x001FFFFF)

// ---------- RXBRP_TRCHm_CBkSVALUE bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_CBkSVALUE_CONFIDENCE_VALUE                                (0)
#define L_WR99_CUIF_RXBRP_TRCHm_CBkSVALUE_CONFIDENCE_VALUE                                (21)
#define M_WR99_CUIF_RXBRP_TRCHm_CBkSVALUE_CONFIDENCE_VALUE                                (0x001FFFFF)

// ---------- RXBRP_BCH_SFN bit-field ----------
#define P_WR99_CUIF_RXBRP_BCH_SFN_CRC_IND                                                 (14)
#define L_WR99_CUIF_RXBRP_BCH_SFN_CRC_IND                                                 (1)
#define M_WR99_CUIF_RXBRP_BCH_SFN_CRC_IND                                                 (0x00004000)
#define P_WR99_CUIF_RXBRP_BCH_SFN_BCH_SFN                                                 (0)
#define L_WR99_CUIF_RXBRP_BCH_SFN_BCH_SFN                                                 (11)
#define M_WR99_CUIF_RXBRP_BCH_SFN_BCH_SFN                                                 (0x000007FF)

// ---------- RXBRP_BCH_SVALUE bit-field ----------
#define P_WR99_CUIF_RXBRP_BCH_SVALUE_CONFIDENCE_VALUE                                     (0)
#define L_WR99_CUIF_RXBRP_BCH_SVALUE_CONFIDENCE_VALUE                                     (21)
#define M_WR99_CUIF_RXBRP_BCH_SVALUE_CONFIDENCE_VALUE                                     (0x001FFFFF)

// ---------- RXBRP_CCm_PARAM bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_PARAM_TRCH_EN                                               (16)
#define L_WR99_CUIF_RXBRP_CCm_PARAM_TRCH_EN                                               (16)
#define M_WR99_CUIF_RXBRP_CCm_PARAM_TRCH_EN                                               (0xFFFF0000)
#define P_WR99_CUIF_RXBRP_CCm_PARAM_MINTTI                                                (12)
#define L_WR99_CUIF_RXBRP_CCm_PARAM_MINTTI                                                (2)
#define M_WR99_CUIF_RXBRP_CCm_PARAM_MINTTI                                                (0x00003000)
#define P_WR99_CUIF_RXBRP_CCm_PARAM_FMO_RESUME                                            (3)
#define L_WR99_CUIF_RXBRP_CCm_PARAM_FMO_RESUME                                            (1)
#define M_WR99_CUIF_RXBRP_CCm_PARAM_FMO_RESUME                                            (0x00000008)
#define P_WR99_CUIF_RXBRP_CCm_PARAM_MAXTTI                                                (1)
#define L_WR99_CUIF_RXBRP_CCm_PARAM_MAXTTI                                                (2)
#define M_WR99_CUIF_RXBRP_CCm_PARAM_MAXTTI                                                (0x00000006)
#define P_WR99_CUIF_RXBRP_CCm_PARAM_BTFD_MODE                                             (0)
#define L_WR99_CUIF_RXBRP_CCm_PARAM_BTFD_MODE                                             (1)
#define M_WR99_CUIF_RXBRP_CCm_PARAM_BTFD_MODE                                             (0x00000001)

// ---------- RXBRP_TRCHm_CFG bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_CFG_REF_EBD_IDX                                           (25)
#define L_WR99_CUIF_RXBRP_TRCHm_CFG_REF_EBD_IDX                                           (2)
#define M_WR99_CUIF_RXBRP_TRCHm_CFG_REF_EBD_IDX                                           (0x06000000)
#define P_WR99_CUIF_RXBRP_TRCHm_CFG_DUAL_TF_EN                                            (24)
#define L_WR99_CUIF_RXBRP_TRCHm_CFG_DUAL_TF_EN                                            (1)
#define M_WR99_CUIF_RXBRP_TRCHm_CFG_DUAL_TF_EN                                            (0x01000000)
#define P_WR99_CUIF_RXBRP_TRCHm_CFG_RM_TYPE                                               (16)
#define L_WR99_CUIF_RXBRP_TRCHm_CFG_RM_TYPE                                               (2)
#define M_WR99_CUIF_RXBRP_TRCHm_CFG_RM_TYPE                                               (0x00030000)
#define P_WR99_CUIF_RXBRP_TRCHm_CFG_CRC                                                   (5)
#define L_WR99_CUIF_RXBRP_TRCHm_CFG_CRC                                                   (3)
#define M_WR99_CUIF_RXBRP_TRCHm_CFG_CRC                                                   (0x000000E0)
#define P_WR99_CUIF_RXBRP_TRCHm_CFG_RATE                                                  (4)
#define L_WR99_CUIF_RXBRP_TRCHm_CFG_RATE                                                  (1)
#define M_WR99_CUIF_RXBRP_TRCHm_CFG_RATE                                                  (0x00000010)
#define P_WR99_CUIF_RXBRP_TRCHm_CFG_ENCODING                                              (2)
#define L_WR99_CUIF_RXBRP_TRCHm_CFG_ENCODING                                              (2)
#define M_WR99_CUIF_RXBRP_TRCHm_CFG_ENCODING                                              (0x0000000C)
#define P_WR99_CUIF_RXBRP_TRCHm_CFG_TTI                                                   (0)
#define L_WR99_CUIF_RXBRP_TRCHm_CFG_TTI                                                   (2)
#define M_WR99_CUIF_RXBRP_TRCHm_CFG_TTI                                                   (0x00000003)

// ---------- RXBRP_BCH_START bit-field ----------
#define P_WR99_CUIF_RXBRP_BCH_START_BCH_EN                                                (0)
#define L_WR99_CUIF_RXBRP_BCH_START_BCH_EN                                                (1)
#define M_WR99_CUIF_RXBRP_BCH_START_BCH_EN                                                (0x00000001)

// ---------- RXBRP_BCHSFN_STOP bit-field ----------
#define P_WR99_CUIF_RXBRP_BCHSFN_STOP_ENABLE                                              (15)
#define L_WR99_CUIF_RXBRP_BCHSFN_STOP_ENABLE                                              (1)
#define M_WR99_CUIF_RXBRP_BCHSFN_STOP_ENABLE                                              (0x00008000)
#define P_WR99_CUIF_RXBRP_BCHSFN_STOP_STOPPING                                            (0)
#define L_WR99_CUIF_RXBRP_BCHSFN_STOP_STOPPING                                            (1)
#define M_WR99_CUIF_RXBRP_BCHSFN_STOP_STOPPING                                            (0x00000001)

// ---------- RXBRP_CCm_TRCH_EN_OR_EBD_IRQ bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_TRCH_EN_OR_EBD_IRQ_TRCH_EN_OR_EBD_IRQ                       (0)
#define L_WR99_CUIF_RXBRP_CCm_TRCH_EN_OR_EBD_IRQ_TRCH_EN_OR_EBD_IRQ                       (16)
#define M_WR99_CUIF_RXBRP_CCm_TRCH_EN_OR_EBD_IRQ_TRCH_EN_OR_EBD_IRQ                       (0x0000FFFF)

// ---------- RXBRP_CCm_BTFD_PHASE_ACT bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_BTFD_PHASE_ACT_PHASE_ACT                                    (0)
#define L_WR99_CUIF_RXBRP_CCm_BTFD_PHASE_ACT_PHASE_ACT                                    (1)
#define M_WR99_CUIF_RXBRP_CCm_BTFD_PHASE_ACT_PHASE_ACT                                    (0x00000001)

// ---------- RXBRP_BCH_GNRL_CFG bit-field ----------
#define P_WR99_CUIF_RXBRP_BCH_GNRL_CFG_SFN_MODE                                           (0)
#define L_WR99_CUIF_RXBRP_BCH_GNRL_CFG_SFN_MODE                                           (1)
#define M_WR99_CUIF_RXBRP_BCH_GNRL_CFG_SFN_MODE                                           (0x00000001)

// ---------- RXBRP_CCm_3GLORX_EN bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_3GLORX_EN_SW_MODE                                           (16)
#define L_WR99_CUIF_RXBRP_CCm_3GLORX_EN_SW_MODE                                           (1)
#define M_WR99_CUIF_RXBRP_CCm_3GLORX_EN_SW_MODE                                           (0x00010000)
#define P_WR99_CUIF_RXBRP_CCm_3GLORX_EN_FRAME_BOUND                                       (8)
#define L_WR99_CUIF_RXBRP_CCm_3GLORX_EN_FRAME_BOUND                                       (1)
#define M_WR99_CUIF_RXBRP_CCm_3GLORX_EN_FRAME_BOUND                                       (0x00000100)
#define P_WR99_CUIF_RXBRP_CCm_3GLORX_EN_ENABLE                                            (0)
#define L_WR99_CUIF_RXBRP_CCm_3GLORX_EN_ENABLE                                            (1)
#define M_WR99_CUIF_RXBRP_CCm_3GLORX_EN_ENABLE                                            (0x00000001)

// ---------- RXBRP_CCm_3GLORX_VALID_DATA_NUM bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_3GLORX_VALID_DATA_NUM_VALID_NUM                             (0)
#define L_WR99_CUIF_RXBRP_CCm_3GLORX_VALID_DATA_NUM_VALID_NUM                             (15)
#define M_WR99_CUIF_RXBRP_CCm_3GLORX_VALID_DATA_NUM_VALID_NUM                             (0x00007FFF)

// ---------- RXBRP_CCm_3GLORX_SVALUE_THRESHOLD bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_3GLORX_SVALUE_THRESHOLD_S_THRES                             (0)
#define L_WR99_CUIF_RXBRP_CCm_3GLORX_SVALUE_THRESHOLD_S_THRES                             (21)
#define M_WR99_CUIF_RXBRP_CCm_3GLORX_SVALUE_THRESHOLD_S_THRES                             (0x001FFFFF)

// ---------- RXBRP_CCm_3GLORX_EBD_COEFF bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_3GLORX_EBD_COEFF_REF                                        (0)
#define L_WR99_CUIF_RXBRP_CCm_3GLORX_EBD_COEFF_REF                                        (26)
#define M_WR99_CUIF_RXBRP_CCm_3GLORX_EBD_COEFF_REF                                        (0x03FFFFFF)

// ---------- RXBRP_CCm_3GLORX_DUAL_COEFF bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_3GLORX_DUAL_COEFF_DUALTF                                    (0)
#define L_WR99_CUIF_RXBRP_CCm_3GLORX_DUAL_COEFF_DUALTF                                    (10)
#define M_WR99_CUIF_RXBRP_CCm_3GLORX_DUAL_COEFF_DUALTF                                    (0x000003FF)

// ---------- RXBRP_3GLORX_DFE_PULSE bit-field ----------
#define P_WR99_CUIF_RXBRP_3GLORX_DFE_PULSE_WIDTH                                          (0)
#define L_WR99_CUIF_RXBRP_3GLORX_DFE_PULSE_WIDTH                                          (5)
#define M_WR99_CUIF_RXBRP_3GLORX_DFE_PULSE_WIDTH                                          (0x0000001F)

// ---------- RXBRP_CCm_EBD_DEC_TRCH_MASK bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_EBD_DEC_TRCH_MASK_TRCH_EN                                   (0)
#define L_WR99_CUIF_RXBRP_CCm_EBD_DEC_TRCH_MASK_TRCH_EN                                   (16)
#define M_WR99_CUIF_RXBRP_CCm_EBD_DEC_TRCH_MASK_TRCH_EN                                   (0x0000FFFF)

// ---------- RXBRP_CCm_STOP bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_STOP_ENABLE                                                 (15)
#define L_WR99_CUIF_RXBRP_CCm_STOP_ENABLE                                                 (1)
#define M_WR99_CUIF_RXBRP_CCm_STOP_ENABLE                                                 (0x00008000)
#define P_WR99_CUIF_RXBRP_CCm_STOP_STOPPING                                               (0)
#define L_WR99_CUIF_RXBRP_CCm_STOP_STOPPING                                               (1)
#define M_WR99_CUIF_RXBRP_CCm_STOP_STOPPING                                               (0x00000001)

// ---------- RXBRP_CCm_SYMBOL_NUM bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_SYMBOL_NUM_SYM_NUM                                          (0)
#define L_WR99_CUIF_RXBRP_CCm_SYMBOL_NUM_SYM_NUM                                          (15)
#define M_WR99_CUIF_RXBRP_CCm_SYMBOL_NUM_SYM_NUM                                          (0x00007FFF)

// ---------- RXBRP_CCm_SYMBOL_SUM bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_SYMBOL_SUM_SYM_SUM                                          (0)
#define L_WR99_CUIF_RXBRP_CCm_SYMBOL_SUM_SYM_SUM                                          (22)
#define M_WR99_CUIF_RXBRP_CCm_SYMBOL_SUM_SYM_SUM                                          (0x003FFFFF)

// ---------- RXBRP_CCm_BUFIDX bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_BUFIDX_BUFIDX                                               (0)
#define L_WR99_CUIF_RXBRP_CCm_BUFIDX_BUFIDX                                               (1)
#define M_WR99_CUIF_RXBRP_CCm_BUFIDX_BUFIDX                                               (0x00000001)

// ---------- RXBRP_CCm_SUSPEND_GAP bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_SUSPEND_GAP_DVIT_RESET_FOR_GEMINI_RESUME                    (1)
#define L_WR99_CUIF_RXBRP_CCm_SUSPEND_GAP_DVIT_RESET_FOR_GEMINI_RESUME                    (1)
#define M_WR99_CUIF_RXBRP_CCm_SUSPEND_GAP_DVIT_RESET_FOR_GEMINI_RESUME                    (0x00000002)
#define P_WR99_CUIF_RXBRP_CCm_SUSPEND_GAP_GAP                                             (0)
#define L_WR99_CUIF_RXBRP_CCm_SUSPEND_GAP_GAP                                             (1)
#define M_WR99_CUIF_RXBRP_CCm_SUSPEND_GAP_GAP                                             (0x00000001)

// ---------- RXBRP_CCm_WRITE_PHCH_TWICE bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_WRITE_PHCH_TWICE                                            (0)
#define L_WR99_CUIF_RXBRP_CCm_WRITE_PHCH_TWICE                                            (1)
#define M_WR99_CUIF_RXBRP_CCm_WRITE_PHCH_TWICE                                            (0x00000001)

// ---------- RXBRP_CCm_TRCH_DONE bit-field ----------
#define P_WR99_CUIF_RXBRP_CCm_TRCH_DONE_RFOFF_STATUS                                      (24)
#define L_WR99_CUIF_RXBRP_CCm_TRCH_DONE_RFOFF_STATUS                                      (1)
#define M_WR99_CUIF_RXBRP_CCm_TRCH_DONE_RFOFF_STATUS                                      (0x01000000)
#define P_WR99_CUIF_RXBRP_CCm_TRCH_DONE_SVALUE_STATUS                                     (19)
#define L_WR99_CUIF_RXBRP_CCm_TRCH_DONE_SVALUE_STATUS                                     (1)
#define M_WR99_CUIF_RXBRP_CCm_TRCH_DONE_SVALUE_STATUS                                     (0x00080000)
#define P_WR99_CUIF_RXBRP_CCm_TRCH_DONE_CRC_STATUS                                        (18)
#define L_WR99_CUIF_RXBRP_CCm_TRCH_DONE_CRC_STATUS                                        (1)
#define M_WR99_CUIF_RXBRP_CCm_TRCH_DONE_CRC_STATUS                                        (0x00040000)
#define P_WR99_CUIF_RXBRP_CCm_TRCH_DONE_EBD_STATUS                                        (17)
#define L_WR99_CUIF_RXBRP_CCm_TRCH_DONE_EBD_STATUS                                        (1)
#define M_WR99_CUIF_RXBRP_CCm_TRCH_DONE_EBD_STATUS                                        (0x00020000)
#define P_WR99_CUIF_RXBRP_CCm_TRCH_DONE_DUALTF_STATUS                                     (16)
#define L_WR99_CUIF_RXBRP_CCm_TRCH_DONE_DUALTF_STATUS                                     (1)
#define M_WR99_CUIF_RXBRP_CCm_TRCH_DONE_DUALTF_STATUS                                     (0x00010000)
#define P_WR99_CUIF_RXBRP_CCm_TRCH_DONE_DONE_FLAG                                         (0)
#define L_WR99_CUIF_RXBRP_CCm_TRCH_DONE_DONE_FLAG                                         (16)
#define M_WR99_CUIF_RXBRP_CCm_TRCH_DONE_DONE_FLAG                                         (0x0000FFFF)

// ---------- RXBRP_TRCHm_TTI_MIN_SCF bit-field ----------
#define P_WR99_CUIF_RXBRP_TRCHm_TTI_MIN_SCF_MINSCF                                        (0)
#define L_WR99_CUIF_RXBRP_TRCHm_TTI_MIN_SCF_MINSCF                                        (7)
#define M_WR99_CUIF_RXBRP_TRCHm_TTI_MIN_SCF_MINSCF                                        (0x0000007F)

// ---------- RXBRP_BCHSFN_GUARD_TIME bit-field ----------
#define P_WR99_CUIF_RXBRP_BCHSFN_GUARD_TIME_SLOT_MASK                                     (0)
#define L_WR99_CUIF_RXBRP_BCHSFN_GUARD_TIME_SLOT_MASK                                     (15)
#define M_WR99_CUIF_RXBRP_BCHSFN_GUARD_TIME_SLOT_MASK                                     (0x00007FFF)

typedef volatile struct {
  WR99_CUIF_REGS 	wbrp_cuif;
} CUIF_WBRP_region;
#endif // __WR99_CUIF_H__
