#ifndef __CUIF_LTE_NCM_CC_CTRL_H__
#define __CUIF_LTE_NCM_CC_CTRL_H__

// ----------------- CUIF_LTE_NCM_CC_CTRL Register Definition -------------------
typedef volatile struct {
    kal_uint32 ABORT;                                                                     // 0x0000
    kal_uint32 ABORT_RDY;                                                                 // 0x0004
    kal_uint32 CMD_VLD_OCC;                                                               // 0x0008
    kal_uint32 CMD_VLD_1MS_BUF0;                                                          // 0x000C
    kal_uint32 CMD_VLD_1MS_BUF1;                                                          // 0x0010
    kal_uint32 RPT_OCC;                                                                   // 0x0014
} CUIF_LTE_NCM_CC_CTRL_REGS, *PCUIF_LTE_NCM_CC_CTRL_REGS;

// ---------- CUIF_LTE_NCM_CC_CTRL word-offset  ----------
#define O_CUIF_LTE_NCM_CC_CTRL_ABORT                                                      (0)
#define O_CUIF_LTE_NCM_CC_CTRL_ABORT_RDY                                                  (1)
#define O_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_OCC                                                (2)
#define O_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF0                                           (3)
#define O_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF1                                           (4)
#define O_CUIF_LTE_NCM_CC_CTRL_RPT_OCC                                                    (5)

// ---------- ABORT bit-field ----------
#define P_CUIF_LTE_NCM_CC_CTRL_ABORT_ABORT                                                (0)
#define L_CUIF_LTE_NCM_CC_CTRL_ABORT_ABORT                                                (1)
#define M_CUIF_LTE_NCM_CC_CTRL_ABORT_ABORT                                                (0x00000001)

// ---------- ABORT_RDY bit-field ----------
#define P_CUIF_LTE_NCM_CC_CTRL_ABORT_RDY_ABORT_RDY                                        (0)
#define L_CUIF_LTE_NCM_CC_CTRL_ABORT_RDY_ABORT_RDY                                        (1)
#define M_CUIF_LTE_NCM_CC_CTRL_ABORT_RDY_ABORT_RDY                                        (0x00000001)

// ---------- CMD_VLD_OCC bit-field ----------
#define P_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_OCC_VLD_OCC                                        (0)
#define L_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_OCC_VLD_OCC                                        (1)
#define M_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_OCC_VLD_OCC                                        (0x00000001)

// ---------- CMD_VLD_1MS_BUF0 bit-field ----------
#define P_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF0_VLD_RSSI_0                                (1)
#define L_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF0_VLD_RSSI_0                                (1)
#define M_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF0_VLD_RSSI_0                                (0x00000002)
#define P_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF0_VLD_1MS_0                                 (0)
#define L_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF0_VLD_1MS_0                                 (1)
#define M_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF0_VLD_1MS_0                                 (0x00000001)

// ---------- CMD_VLD_1MS_BUF1 bit-field ----------
#define P_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF1_VLD_RSSI_1                                (1)
#define L_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF1_VLD_RSSI_1                                (1)
#define M_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF1_VLD_RSSI_1                                (0x00000002)
#define P_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF1_VLD_1MS_1                                 (0)
#define L_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF1_VLD_1MS_1                                 (1)
#define M_CUIF_LTE_NCM_CC_CTRL_CMD_VLD_1MS_BUF1_VLD_1MS_1                                 (0x00000001)

// ---------- RPT_OCC bit-field ----------
#define P_CUIF_LTE_NCM_CC_CTRL_RPT_OCC_VLD_RPT                                            (0)
#define L_CUIF_LTE_NCM_CC_CTRL_RPT_OCC_VLD_RPT                                            (1)
#define M_CUIF_LTE_NCM_CC_CTRL_RPT_OCC_VLD_RPT                                            (0x00000001)

#endif // __CUIF_LTE_NCM_CC_CTRL_H__
