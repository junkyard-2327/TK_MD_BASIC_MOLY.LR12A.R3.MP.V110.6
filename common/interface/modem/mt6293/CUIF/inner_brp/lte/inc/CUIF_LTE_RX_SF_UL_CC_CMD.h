#ifndef __CUIF_LTE_RX_SF_UL_CC_CMD_H__
#define __CUIF_LTE_RX_SF_UL_CC_CMD_H__

// ----------------- CUIF_LTE_RX_SF_UL_CC_CMD Register Definition -------------------
typedef volatile struct {
    kal_uint32 SRV_INFO2;                                                                 // 0x0000
} CUIF_LTE_RX_SF_UL_CC_CMD_REGS, *PCUIF_LTE_RX_SF_UL_CC_CMD_REGS;

// ---------- CUIF_LTE_RX_SF_UL_CC_CMD word-offset  ----------
#define O_CUIF_LTE_RX_SF_UL_CC_CMD_SRV_INFO2                                              (0)

// ---------- SRV_INFO2 bit-field ----------
#define P_CUIF_LTE_RX_SF_UL_CC_CMD_SRV_INFO2_UL_PERMIT                                    (1)
#define L_CUIF_LTE_RX_SF_UL_CC_CMD_SRV_INFO2_UL_PERMIT                                    (1)
#define M_CUIF_LTE_RX_SF_UL_CC_CMD_SRV_INFO2_UL_PERMIT                                    (0x00000002)
#define P_CUIF_LTE_RX_SF_UL_CC_CMD_SRV_INFO2_UL_CMD_EN                                    (0)
#define L_CUIF_LTE_RX_SF_UL_CC_CMD_SRV_INFO2_UL_CMD_EN                                    (1)
#define M_CUIF_LTE_RX_SF_UL_CC_CMD_SRV_INFO2_UL_CMD_EN                                    (0x00000001)

#endif // __CUIF_LTE_RX_SF_UL_CC_CMD_H__
