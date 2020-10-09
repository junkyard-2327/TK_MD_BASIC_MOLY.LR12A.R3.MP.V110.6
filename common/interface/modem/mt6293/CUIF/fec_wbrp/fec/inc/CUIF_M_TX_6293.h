#ifndef _FEC_M_TX_MT6293_H_
#define _FEC_M_TX_MT6293_H_


#ifndef _FEC_ADDR_FORMAT_MT6293_H_
#define _FEC_ADDR_FORMAT_MT6293_H_

typedef volatile unsigned short* SRAMADDR;         /* SRAM addr is 16 bits  */
typedef volatile unsigned short  SRAMDATA;         /* SRAM data is 16 bits  */
typedef volatile unsigned short* APBADDR;          /* APB addr is 16 bits   */
typedef volatile unsigned short  APBDATA;          /* APB data is 16 bits   */
typedef volatile unsigned long*  APBADDR32;        /* APB addr is 32 bits   */
typedef volatile unsigned long   APBDATA32;        /* APB data is 32 bits   */
typedef volatile unsigned short* DPRAMADDR;        /* DPRAM addr is 16 bits */
typedef volatile signed   short* DPRAMADDR_S;      /* DPRAM addr is 16 bits */
typedef volatile unsigned short  DPRAMDATA;        /* DPRAM data is 16 bits */

#endif //#ifndef _FEC_HW_REG_MT6291_H_


// ---------- FEC_M_TX word-offset  ----------
#define FEC_MMTX_CUIF_O_MM_TX_RAT(i)                                                      (0)

// ---------- MM_TX_RAT bit-field ----------
#define FEC_MMTX_CUIF_P_MM_TX_RAT_BOOT_UP_STATUS                                          (4)
#define FEC_MMTX_CUIF_L_MM_TX_RAT_BOOT_UP_STATUS                                          (1)
#define FEC_MMTX_CUIF_M_MM_TX_RAT_BOOT_UP_STATUS                                          (0x00000010)
#define FEC_MMTX_CUIF_P_MM_TX_RAT_MM_TX_RAT                                               (0)
#define FEC_MMTX_CUIF_L_MM_TX_RAT_MM_TX_RAT                                               (2)
#define FEC_MMTX_CUIF_M_MM_TX_RAT_MM_TX_RAT                                               (0x00000003)

#endif // __FEC_M_TX_H__
