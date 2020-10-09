#ifndef __CUIF_LTE_RX_BRP_MIB_RPT_H__
#define __CUIF_LTE_RX_BRP_MIB_RPT_H__

// ----------------- CUIF_LTE_RX_BRP_MIB_RPT Register Definition -------------------
typedef volatile struct {
    kal_uint32 CUIF_MIB_RESULT_CC;                                                        // 0x0000
    kal_uint32 CUIF_MIB_RESULT_RESERVED_0;                                                // 0x0004
} CUIF_LTE_RX_BRP_MIB_RPT_REGS, *PCUIF_LTE_RX_BRP_MIB_RPT_REGS;

// ---------- CUIF_LTE_RX_BRP_MIB_RPT word-offset  ----------
#define O_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC                                      (0)
#define O_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_RESERVED_0                              (1)

// ---------- CUIF_MIB_RESULT_CC bit-field ----------
#define P_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_MIB_CRC_RES                          (31)
#define L_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_MIB_CRC_RES                          (1)
#define M_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_MIB_CRC_RES                          (0x80000000)
#define P_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_MIB_TEN_SPARE_BITS                   (18)
#define L_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_MIB_TEN_SPARE_BITS                   (10)
#define M_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_MIB_TEN_SPARE_BITS                   (0x0FFC0000)
#define P_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_DL_BW                                (15)
#define L_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_DL_BW                                (3)
#define M_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_DL_BW                                (0x00038000)
#define P_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_PHICH_DUR                            (14)
#define L_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_PHICH_DUR                            (1)
#define M_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_PHICH_DUR                            (0x00004000)
#define P_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_PHICH_RES                            (12)
#define L_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_PHICH_RES                            (2)
#define M_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_PHICH_RES                            (0x00003000)
#define P_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_SFN_RESULT                           (2)
#define L_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_SFN_RESULT                           (10)
#define M_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_SFN_RESULT                           (0x00000FFC)
#define P_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_ANT_P                                (0)
#define L_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_ANT_P                                (2)
#define M_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_CC_ANT_P                                (0x00000003)

// ---------- CUIF_MIB_RESULT_RESERVED_0 bit-field ----------
#define P_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_RESERVED_0_MIB_RESULT_RESERVED_0        (0)
#define L_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_RESERVED_0_MIB_RESULT_RESERVED_0        (32)
#define M_CUIF_LTE_RX_BRP_MIB_RPT_CUIF_MIB_RESULT_RESERVED_0_MIB_RESULT_RESERVED_0        (0xFFFFFFFF)

#endif // __CUIF_LTE_RX_BRP_MIB_RPT_H__
