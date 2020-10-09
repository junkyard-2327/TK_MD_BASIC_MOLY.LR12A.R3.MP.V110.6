#ifndef __CMIF_LTE_BASE_H__
#define __CMIF_LTE_BASE_H__

#if defined __LTE_93_PORTING_EN__
    extern UINT32 rxbrp_md32erk_cmif[(0X1260+0X320+0X2ec)/4];
    #define rxbrp_md32erk_cmif_MD32_ADDR ((UINT32)rxbrp_md32erk_cmif)
#else
    #define rxbrp_md32erk_cmif_MD32_ADDR (0xD0358000)
#endif


#define CMIF_LTE_CMD_ADDR (rxbrp_md32erk_cmif_MD32_ADDR + 0x1260)
#define CMIF_LTE_RPT_ADDR (CMIF_LTE_CMD_ADDR + 0x320)

// C-RNTI: at most 3358 Kbyte are needed for HARQ buffer when CA and 15 HARQ processes are enabled
//      formula: 3358 = {ceil[3654144/2(K_C)/2(TB)/min(8,15)/13(CB)*4(bits/LLR)/64]+2}*64*13*2(CC)*2(TB)*15(HARQ)/8(bits/byte)/1024
// SI-RNTI: 26.75 Kbyte
//      formula: 26.75 = {CEIL[6816*4(bits/LLR)/64 + 2]*64 / 8} * 8 / 1024
// TODO: modify the length
#define MD32_BRP_LTE_MAX_HARQ_SIZE_BYTE (3465984*2)

#endif //__CMIF_LTE_BASE_H__

