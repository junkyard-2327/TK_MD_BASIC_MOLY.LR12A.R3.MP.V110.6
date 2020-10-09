#ifndef __CUIF_LTE_RSSI_CC_CMD_H__
#define __CUIF_LTE_RSSI_CC_CMD_H__

// ----------------- CUIF_LTE_RSSI_CC_CMD Register Definition -------------------
typedef volatile struct {
    kal_uint32 CC_INFO0;                                                                  // 0x0000
    kal_uint32 TIME_INFO0[2];                                                             // 0x0004..0x0008
} CUIF_LTE_RSSI_CC_CMD_REGS, *PCUIF_LTE_RSSI_CC_CMD_REGS;

// ---------- CUIF_LTE_RSSI_CC_CMD word-offset  ----------
#define O_CUIF_LTE_RSSI_CC_CMD_CC_INFO0                                                   (0)
#define O_CUIF_LTE_RSSI_CC_CMD_TIME_INFO0(i)                                              (1 + (i))

// ---------- CC_INFO0 bit-field ----------
#define P_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_RSSI_MODE                                         (22)
#define L_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_RSSI_MODE                                         (1)
#define M_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_RSSI_MODE                                         (0x00400000)
#define P_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_CP_TYPE                                           (21)
#define L_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_CP_TYPE                                           (1)
#define M_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_CP_TYPE                                           (0x00200000)
#define P_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_DL_BW                                             (18)
#define L_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_DL_BW                                             (3)
#define M_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_DL_BW                                             (0x001C0000)
#define P_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_RX_EN_MSK                                         (14)
#define L_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_RX_EN_MSK                                         (4)
#define M_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_RX_EN_MSK                                         (0x0003C000)
#define P_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_DL_SYM_BITMAP                                     (0)
#define L_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_DL_SYM_BITMAP                                     (14)
#define M_CUIF_LTE_RSSI_CC_CMD_CC_INFO0_DL_SYM_BITMAP                                     (0x00003FFF)

// ---------- TIME_INFO0 bit-field ----------
#define P_CUIF_LTE_RSSI_CC_CMD_TIME_INFO0_SFBD                                            (0)
#define L_CUIF_LTE_RSSI_CC_CMD_TIME_INFO0_SFBD                                            (20)
#define M_CUIF_LTE_RSSI_CC_CMD_TIME_INFO0_SFBD                                            (0x000FFFFF)

#endif // __CUIF_LTE_RSSI_CC_CMD_H__
