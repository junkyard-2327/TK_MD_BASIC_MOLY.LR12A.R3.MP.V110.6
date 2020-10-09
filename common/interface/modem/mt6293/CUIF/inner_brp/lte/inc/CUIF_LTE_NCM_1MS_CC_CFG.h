#ifndef __CUIF_LTE_NCM_1MS_CC_CFG_H__
#define __CUIF_LTE_NCM_1MS_CC_CFG_H__

// ----------------- CUIF_LTE_NCM_1MS_CC_CFG Register Definition -------------------
typedef volatile struct {
    kal_uint32 SF_CFG;                                                                    // 0x0000
    kal_uint32 WINSTART;                                                                  // 0x0004
    kal_uint32 CELL_CFG[12];                                                              // 0x0008..0x0034
    kal_uint32 FIFO_OFF_OFFSET;                                                           // 0x0038
} CUIF_LTE_NCM_1MS_CC_CFG_REGS, *PCUIF_LTE_NCM_1MS_CC_CFG_REGS;

// ---------- CUIF_LTE_NCM_1MS_CC_CFG word-offset  ----------
#define O_CUIF_LTE_NCM_1MS_CC_CFG_SF_CFG                                                  (0)
#define O_CUIF_LTE_NCM_1MS_CC_CFG_WINSTART                                                (1)
#define O_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG(i)                                             (2 + (i))
#define O_CUIF_LTE_NCM_1MS_CC_CFG_FIFO_OFF_OFFSET                                         (14)

// ---------- SF_CFG bit-field ----------
#define P_CUIF_LTE_NCM_1MS_CC_CFG_SF_CFG_RSTR_PAT_SF_FLAG                                 (1)
#define L_CUIF_LTE_NCM_1MS_CC_CFG_SF_CFG_RSTR_PAT_SF_FLAG                                 (1)
#define M_CUIF_LTE_NCM_1MS_CC_CFG_SF_CFG_RSTR_PAT_SF_FLAG                                 (0x00000002)
#define P_CUIF_LTE_NCM_1MS_CC_CFG_SF_CFG_LAST_SF_FLG                                      (0)
#define L_CUIF_LTE_NCM_1MS_CC_CFG_SF_CFG_LAST_SF_FLG                                      (1)
#define M_CUIF_LTE_NCM_1MS_CC_CFG_SF_CFG_LAST_SF_FLG                                      (0x00000001)

// ---------- WINSTART bit-field ----------
#define P_CUIF_LTE_NCM_1MS_CC_CFG_WINSTART_WINSTART                                       (0)
#define L_CUIF_LTE_NCM_1MS_CC_CFG_WINSTART_WINSTART                                       (20)
#define M_CUIF_LTE_NCM_1MS_CC_CFG_WINSTART_WINSTART                                       (0x000FFFFF)

// ---------- CELL_CFG bit-field ----------
#define P_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_ALL_SYM_RSSI_FLAG1                             (26)
#define L_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_ALL_SYM_RSSI_FLAG1                             (1)
#define M_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_ALL_SYM_RSSI_FLAG1                             (0x04000000)
#define P_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_ALL_SYM_RSSI_FLAG0                             (25)
#define L_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_ALL_SYM_RSSI_FLAG0                             (1)
#define M_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_ALL_SYM_RSSI_FLAG0                             (0x02000000)
#define P_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_ON_SYM                                         (20)
#define L_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_ON_SYM                                         (4)
#define M_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_ON_SYM                                         (0x00F00000)
#define P_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_SF_IDX                                         (16)
#define L_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_SF_IDX                                         (4)
#define M_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_SF_IDX                                         (0x000F0000)
#define P_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_RS_BMP                                         (0)
#define L_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_RS_BMP                                         (14)
#define M_CUIF_LTE_NCM_1MS_CC_CFG_CELL_CFG_RS_BMP                                         (0x00003FFF)

// ---------- FIFO_OFF_OFFSET bit-field ----------
#define P_CUIF_LTE_NCM_1MS_CC_CFG_FIFO_OFF_OFFSET_FIFO_OFF_OFFSET                         (0)
#define L_CUIF_LTE_NCM_1MS_CC_CFG_FIFO_OFF_OFFSET_FIFO_OFF_OFFSET                         (16)
#define M_CUIF_LTE_NCM_1MS_CC_CFG_FIFO_OFF_OFFSET_FIFO_OFF_OFFSET                         (0x0000FFFF)

#endif // __CUIF_LTE_NCM_1MS_CC_CFG_H__
