#ifndef __CUIF_LTE_RX_BRP_STATIC_COMM_RPT_H__
#define __CUIF_LTE_RX_BRP_STATIC_COMM_RPT_H__

// ----------------- CUIF_LTE_RX_BRP_STATIC_COMM_RPT Register Definition -------------------
typedef volatile struct {
    kal_uint32 CUIF_IDLE_INFO;                                                            // 0x0000
    kal_uint32 CUIF_SLEEP_INFO;                                                           // 0x0004
    kal_uint32 CUIF_COSIM_VERIFY_RPT;                                                     // 0x0008
} CUIF_LTE_RX_BRP_STATIC_COMM_RPT_REGS, *PCUIF_LTE_RX_BRP_STATIC_COMM_RPT_REGS;

// ---------- CUIF_LTE_RX_BRP_STATIC_COMM_RPT word-offset  ----------
#define O_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_IDLE_INFO                                  (0)
#define O_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_SLEEP_INFO                                 (1)
#define O_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT                           (2)

// ---------- CUIF_IDLE_INFO bit-field ----------
#define P_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_IDLE_INFO_IS_IDLE                          (0)
#define L_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_IDLE_INFO_IS_IDLE                          (1)
#define M_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_IDLE_INFO_IS_IDLE                          (0x00000001)

// ---------- CUIF_SLEEP_INFO bit-field ----------
#define P_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_SLEEP_INFO_PM_DM_STATE                     (24)
#define L_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_SLEEP_INFO_PM_DM_STATE                     (2)
#define M_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_SLEEP_INFO_PM_DM_STATE                     (0x03000000)
#define P_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_SLEEP_INFO_NACK_REASON_3G                  (8)
#define L_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_SLEEP_INFO_NACK_REASON_3G                  (8)
#define M_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_SLEEP_INFO_NACK_REASON_3G                  (0x0000FF00)
#define P_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_SLEEP_INFO_NACK_REASON_4G                  (0)
#define L_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_SLEEP_INFO_NACK_REASON_4G                  (8)
#define M_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_SLEEP_INFO_NACK_REASON_4G                  (0x000000FF)

// ---------- CUIF_COSIM_VERIFY_RPT bit-field ----------
#define P_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT_BRP_B_SFBD_TICK           (3)
#define L_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT_BRP_B_SFBD_TICK           (1)
#define M_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT_BRP_B_SFBD_TICK           (0x00000008)
#define P_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT_BRP_B_CMD_TICK            (2)
#define L_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT_BRP_B_CMD_TICK            (1)
#define M_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT_BRP_B_CMD_TICK            (0x00000004)
#define P_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT_BRP_A_SFBD_TICK           (1)
#define L_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT_BRP_A_SFBD_TICK           (1)
#define M_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT_BRP_A_SFBD_TICK           (0x00000002)
#define P_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT_BRP_A_CMD_TICK            (0)
#define L_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT_BRP_A_CMD_TICK            (1)
#define M_CUIF_LTE_RX_BRP_STATIC_COMM_RPT_CUIF_COSIM_VERIFY_RPT_BRP_A_CMD_TICK            (0x00000001)

#endif // __CUIF_LTE_RX_BRP_STATIC_COMM_RPT_H__
