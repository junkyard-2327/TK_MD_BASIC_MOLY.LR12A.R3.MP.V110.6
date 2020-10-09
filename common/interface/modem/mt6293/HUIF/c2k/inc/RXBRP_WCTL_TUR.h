#ifndef __RXBRP_WCTL_TUR_REGS_H__
#define __RXBRP_WCTL_TUR_REGS_H__

//#include "common_typedef.h"
typedef   unsigned int  UINT32;

#define RXBRP_WCTL_TUR_REG_BASE                                       (0xad120000)
#define DBRP_TUR_CFG                                                  (RXBRP_WCTL_TUR_REG_BASE + 0x0000)
#define DBRP_TUR_DSCRM                                                (RXBRP_WCTL_TUR_REG_BASE + 0x0004)
#define DBRP_TUR_C_DBG                                                (RXBRP_WCTL_TUR_REG_BASE + 0x0008)
#define DBRP_TUR_DSCH_TRG                                             (RXBRP_WCTL_TUR_REG_BASE + 0x2000)
#define DBRP_TUR_DSCH_DONE                                            (RXBRP_WCTL_TUR_REG_BASE + 0x2004)
#define DBRP_TUR_DSCH_EN                                              (RXBRP_WCTL_TUR_REG_BASE + 0x2008)
#define DBRP_TUR_DSCH_CFG                                             (RXBRP_WCTL_TUR_REG_BASE + 0x200C)
#define DBRP_TUR_DSCH_CBBUF                                           (RXBRP_WCTL_TUR_REG_BASE + 0x2010)
#define DBRP_TUR_DSCH_CH0_CFG                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2014)
#define DBRP_TUR_DSCH_CH0_LP0                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2018)
#define DBRP_TUR_DSCH_CH0_LP1                                         (RXBRP_WCTL_TUR_REG_BASE + 0x201C)
#define DBRP_TUR_DSCH_CH0_LP2                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2020)
#define DBRP_TUR_DSCH_CH0_TrBK                                        (RXBRP_WCTL_TUR_REG_BASE + 0x2024)
#define DBRP_TUR_DSCH_CH0_CoBK                                        (RXBRP_WCTL_TUR_REG_BASE + 0x2028)
#define DBRP_TUR_DSCH_CH0_DMA_DST                                     (RXBRP_WCTL_TUR_REG_BASE + 0x202C)
#define DBRP_TUR_DSCH_CH0_DMA_CFG                                     (RXBRP_WCTL_TUR_REG_BASE + 0x2030)
#define DBRP_TUR_DSCH_CH0_TRACE_CFG                                   (RXBRP_WCTL_TUR_REG_BASE + 0x2034)
#define DBRP_TUR_DSCH_CH0_HSRM_CFG                                    (RXBRP_WCTL_TUR_REG_BASE + 0x2038)
#define DBRP_TUR_DSCH_CH1_CFG                                         (RXBRP_WCTL_TUR_REG_BASE + 0x203C)
#define DBRP_TUR_DSCH_CH1_LP0                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2040)
#define DBRP_TUR_DSCH_CH1_LP1                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2044)
#define DBRP_TUR_DSCH_CH1_LP2                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2048)
#define DBRP_TUR_DSCH_CH1_TrBK                                        (RXBRP_WCTL_TUR_REG_BASE + 0x204C)
#define DBRP_TUR_DSCH_CH1_CoBK                                        (RXBRP_WCTL_TUR_REG_BASE + 0x2050)
#define DBRP_TUR_DSCH_CH1_DMA_DST                                     (RXBRP_WCTL_TUR_REG_BASE + 0x2054)
#define DBRP_TUR_DSCH_CH1_DMA_CFG                                     (RXBRP_WCTL_TUR_REG_BASE + 0x2058)
#define DBRP_TUR_DSCH_CH1_TRACE_CFG                                   (RXBRP_WCTL_TUR_REG_BASE + 0x205C)
#define DBRP_TUR_DSCH_CH1_HSRM_CFG                                    (RXBRP_WCTL_TUR_REG_BASE + 0x2060)
#define DBRP_TUR_DSCH_CH2_CFG                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2064)
#define DBRP_TUR_DSCH_CH2_LP0                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2068)
#define DBRP_TUR_DSCH_CH2_LP1                                         (RXBRP_WCTL_TUR_REG_BASE + 0x206C)
#define DBRP_TUR_DSCH_CH2_LP2                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2070)
#define DBRP_TUR_DSCH_CH2_TrBK                                        (RXBRP_WCTL_TUR_REG_BASE + 0x2074)
#define DBRP_TUR_DSCH_CH2_CoBK                                        (RXBRP_WCTL_TUR_REG_BASE + 0x2078)
#define DBRP_TUR_DSCH_CH2_DMA_DST                                     (RXBRP_WCTL_TUR_REG_BASE + 0x207C)
#define DBRP_TUR_DSCH_CH2_DMA_CFG                                     (RXBRP_WCTL_TUR_REG_BASE + 0x2080)
#define DBRP_TUR_DSCH_CH2_TRACE_CFG                                   (RXBRP_WCTL_TUR_REG_BASE + 0x2084)
#define DBRP_TUR_DSCH_CH2_HSRM_CFG                                    (RXBRP_WCTL_TUR_REG_BASE + 0x2088)
#define DBRP_TUR_DSCH_CH3_CFG                                         (RXBRP_WCTL_TUR_REG_BASE + 0x208C)
#define DBRP_TUR_DSCH_CH3_LP0                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2090)
#define DBRP_TUR_DSCH_CH3_LP1                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2094)
#define DBRP_TUR_DSCH_CH3_LP2                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2098)
#define DBRP_TUR_DSCH_CH3_TrBK                                        (RXBRP_WCTL_TUR_REG_BASE + 0x209C)
#define DBRP_TUR_DSCH_CH3_CoBK                                        (RXBRP_WCTL_TUR_REG_BASE + 0x20A0)
#define DBRP_TUR_DSCH_CH3_DMA_DST                                     (RXBRP_WCTL_TUR_REG_BASE + 0x20A4)
#define DBRP_TUR_DSCH_CH3_DMA_CFG                                     (RXBRP_WCTL_TUR_REG_BASE + 0x20A8)
#define DBRP_TUR_DSCH_CH3_TRACE_CFG                                   (RXBRP_WCTL_TUR_REG_BASE + 0x20AC)
#define DBRP_TUR_DSCH_CH3_HSRM_CFG                                    (RXBRP_WCTL_TUR_REG_BASE + 0x20B0)
#define DBRP_TUR_DSCH_CH4_CFG                                         (RXBRP_WCTL_TUR_REG_BASE + 0x20B4)
#define DBRP_TUR_DSCH_CH4_LP0                                         (RXBRP_WCTL_TUR_REG_BASE + 0x20B8)
#define DBRP_TUR_DSCH_CH4_LP1                                         (RXBRP_WCTL_TUR_REG_BASE + 0x20BC)
#define DBRP_TUR_DSCH_CH4_LP2                                         (RXBRP_WCTL_TUR_REG_BASE + 0x20C0)
#define DBRP_TUR_DSCH_CH4_TrBK                                        (RXBRP_WCTL_TUR_REG_BASE + 0x20C4)
#define DBRP_TUR_DSCH_CH4_CoBK                                        (RXBRP_WCTL_TUR_REG_BASE + 0x20C8)
#define DBRP_TUR_DSCH_CH4_DMA_DST                                     (RXBRP_WCTL_TUR_REG_BASE + 0x20CC)
#define DBRP_TUR_DSCH_CH4_DMA_CFG                                     (RXBRP_WCTL_TUR_REG_BASE + 0x20D0)
#define DBRP_TUR_DSCH_CH4_TRACE_CFG                                   (RXBRP_WCTL_TUR_REG_BASE + 0x20D4)
#define DBRP_TUR_DSCH_CH4_HSRM_CFG                                    (RXBRP_WCTL_TUR_REG_BASE + 0x20D8)
#define DBRP_TUR_DSCH_CH0_TBCRC                                       (RXBRP_WCTL_TUR_REG_BASE + 0x20DC)
#define DBRP_TUR_DSCH_CH0_LST                                         (RXBRP_WCTL_TUR_REG_BASE + 0x20E0)
#define DBRP_TUR_DSCH_CH0_HDCRC                                       (RXBRP_WCTL_TUR_REG_BASE + 0x20E4)
#define DBRP_TUR_DSCH_CH0_LP0_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x20E8)
#define DBRP_TUR_DSCH_CH0_LP1_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x20EC)
#define DBRP_TUR_DSCH_CH0_LP2_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x20F0)
#define DBRP_TUR_DSCH_CH0_iCRC                                        (RXBRP_WCTL_TUR_REG_BASE + 0x20F4)
#define DBRP_TUR_DSCH_CH0_ENERGY                                      (RXBRP_WCTL_TUR_REG_BASE + 0x20F8)
#define DBRP_TUR_DSCH_CH1_TBCRC                                       (RXBRP_WCTL_TUR_REG_BASE + 0x20FC)
#define DBRP_TUR_DSCH_CH1_LST                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2100)
#define DBRP_TUR_DSCH_CH1_HDCRC                                       (RXBRP_WCTL_TUR_REG_BASE + 0x2104)
#define DBRP_TUR_DSCH_CH1_LP0_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x2108)
#define DBRP_TUR_DSCH_CH1_LP1_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x210C)
#define DBRP_TUR_DSCH_CH1_LP2_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x2110)
#define DBRP_TUR_DSCH_CH1_iCRC                                        (RXBRP_WCTL_TUR_REG_BASE + 0x2114)
#define DBRP_TUR_DSCH_CH1_ENERGY                                      (RXBRP_WCTL_TUR_REG_BASE + 0x2118)
#define DBRP_TUR_DSCH_CH2_TBCRC                                       (RXBRP_WCTL_TUR_REG_BASE + 0x211C)
#define DBRP_TUR_DSCH_CH2_LST                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2120)
#define DBRP_TUR_DSCH_CH2_HDCRC                                       (RXBRP_WCTL_TUR_REG_BASE + 0x2124)
#define DBRP_TUR_DSCH_CH2_LP0_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x2128)
#define DBRP_TUR_DSCH_CH2_LP1_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x212C)
#define DBRP_TUR_DSCH_CH2_LP2_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x2130)
#define DBRP_TUR_DSCH_CH2_iCRC                                        (RXBRP_WCTL_TUR_REG_BASE + 0x2134)
#define DBRP_TUR_DSCH_CH3_TBCRC                                       (RXBRP_WCTL_TUR_REG_BASE + 0x2138)
#define DBRP_TUR_DSCH_CH3_LST                                         (RXBRP_WCTL_TUR_REG_BASE + 0x213C)
#define DBRP_TUR_DSCH_CH3_HDCRC                                       (RXBRP_WCTL_TUR_REG_BASE + 0x2140)
#define DBRP_TUR_DSCH_CH3_LP0_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x2144)
#define DBRP_TUR_DSCH_CH3_LP1_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x2148)
#define DBRP_TUR_DSCH_CH3_LP2_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x214C)
#define DBRP_TUR_DSCH_CH3_iCRC                                        (RXBRP_WCTL_TUR_REG_BASE + 0x2150)
#define DBRP_TUR_DSCH_CH4_TBCRC                                       (RXBRP_WCTL_TUR_REG_BASE + 0x2154)
#define DBRP_TUR_DSCH_CH4_LST                                         (RXBRP_WCTL_TUR_REG_BASE + 0x2158)
#define DBRP_TUR_DSCH_CH4_HDCRC                                       (RXBRP_WCTL_TUR_REG_BASE + 0x215C)
#define DBRP_TUR_DSCH_CH4_LP0_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x2160)
#define DBRP_TUR_DSCH_CH4_LP1_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x2164)
#define DBRP_TUR_DSCH_CH4_LP2_STORE                                   (RXBRP_WCTL_TUR_REG_BASE + 0x2168)
#define DBRP_TUR_DSCH_CH4_iCRC                                        (RXBRP_WCTL_TUR_REG_BASE + 0x216C)
#define DBRP_TUR_BUSY                                                 (RXBRP_WCTL_TUR_REG_BASE + 0x2170)
#define DBRP_TUR_LTE_TRG                                              (RXBRP_WCTL_TUR_REG_BASE + 0x3000)
#define DBRP_TUR_LTE_DONE                                             (RXBRP_WCTL_TUR_REG_BASE + 0x3004)
#define DBRP_TUR_LTE_LATCH                                            (RXBRP_WCTL_TUR_REG_BASE + 0x3008)
#define DBRP_TUR_LTE_FRM                                              (RXBRP_WCTL_TUR_REG_BASE + 0x300C)
#define DBRP_TUR_LTE_SI_PI                                            (RXBRP_WCTL_TUR_REG_BASE + 0x3010)
#define DBRP_TUR_LTE_CBNUM                                            (RXBRP_WCTL_TUR_REG_BASE + 0x3014)
#define DBRP_TUR_LTE_CH0_ITER                                         (RXBRP_WCTL_TUR_REG_BASE + 0x3018)
#define DBRP_TUR_LTE_CH0_MAC_INFO                                     (RXBRP_WCTL_TUR_REG_BASE + 0x301C)
#define DBRP_TUR_LTE_CH0_INI                                          (RXBRP_WCTL_TUR_REG_BASE + 0x3020)
#define DBRP_TUR_LTE_CH0_TBINFO1                                      (RXBRP_WCTL_TUR_REG_BASE + 0x3024)
#define DBRP_TUR_LTE_CH0_EMI_INFO0                                    (RXBRP_WCTL_TUR_REG_BASE + 0x3028)
#define DBRP_TUR_LTE_CH0_EMI_INFO1                                    (RXBRP_WCTL_TUR_REG_BASE + 0x302C)
#define DBRP_TUR_LTE_CH1_ITER                                         (RXBRP_WCTL_TUR_REG_BASE + 0x3030)
#define DBRP_TUR_LTE_CH1_MAC_INFO                                     (RXBRP_WCTL_TUR_REG_BASE + 0x3034)
#define DBRP_TUR_LTE_CH1_INI                                          (RXBRP_WCTL_TUR_REG_BASE + 0x3038)
#define DBRP_TUR_LTE_CH1_TBINFO1                                      (RXBRP_WCTL_TUR_REG_BASE + 0x303C)
#define DBRP_TUR_LTE_CH1_EMI_INFO0                                    (RXBRP_WCTL_TUR_REG_BASE + 0x3040)
#define DBRP_TUR_LTE_CH1_EMI_INFO1                                    (RXBRP_WCTL_TUR_REG_BASE + 0x3044)
#define DBRP_TUR_LTE_CH2_ITER                                         (RXBRP_WCTL_TUR_REG_BASE + 0x3048)
#define DBRP_TUR_LTE_CH2_MAC_INFO                                     (RXBRP_WCTL_TUR_REG_BASE + 0x304C)
#define DBRP_TUR_LTE_CH2_INI                                          (RXBRP_WCTL_TUR_REG_BASE + 0x3050)
#define DBRP_TUR_LTE_CH2_TBINFO1                                      (RXBRP_WCTL_TUR_REG_BASE + 0x3054)
#define DBRP_TUR_LTE_CH2_EMI_INFO0                                    (RXBRP_WCTL_TUR_REG_BASE + 0x3058)
#define DBRP_TUR_LTE_CH2_EMI_INFO1                                    (RXBRP_WCTL_TUR_REG_BASE + 0x305C)
#define DBRP_TUR_LTE_CH3_ITER                                         (RXBRP_WCTL_TUR_REG_BASE + 0x3060)
#define DBRP_TUR_LTE_CH3_MAC_INFO                                     (RXBRP_WCTL_TUR_REG_BASE + 0x3064)
#define DBRP_TUR_LTE_CH3_INI                                          (RXBRP_WCTL_TUR_REG_BASE + 0x3068)
#define DBRP_TUR_LTE_CH3_TBINFO1                                      (RXBRP_WCTL_TUR_REG_BASE + 0x306C)
#define DBRP_TUR_LTE_CH3_EMI_INFO0                                    (RXBRP_WCTL_TUR_REG_BASE + 0x3070)
#define DBRP_TUR_LTE_CH3_EMI_INFO1                                    (RXBRP_WCTL_TUR_REG_BASE + 0x3074)
#define DBRP_TUR_LTE_CH4_ITER                                         (RXBRP_WCTL_TUR_REG_BASE + 0x3078)
#define DBRP_TUR_LTE_CH4_MAC_INFO                                     (RXBRP_WCTL_TUR_REG_BASE + 0x307C)
#define DBRP_TUR_LTE_CH4_INI                                          (RXBRP_WCTL_TUR_REG_BASE + 0x3080)
#define DBRP_TUR_LTE_CH4_TBINFO1                                      (RXBRP_WCTL_TUR_REG_BASE + 0x3084)
#define DBRP_TUR_LTE_CH4_EMI_INFO0                                    (RXBRP_WCTL_TUR_REG_BASE + 0x3088)
#define DBRP_TUR_LTE_CH4_EMI_INFO1                                    (RXBRP_WCTL_TUR_REG_BASE + 0x308C)
#define DBRP_TUR_LTE_CC0_CH0_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30A0)
#define DBRP_TUR_LTE_CC0_CH0_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30A4)
#define DBRP_TUR_LTE_CC0_CH1_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30A8)
#define DBRP_TUR_LTE_CC0_CH1_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30AC)
#define DBRP_TUR_LTE_CC0_CH2_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30B0)
#define DBRP_TUR_LTE_CC0_CH2_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30B4)
#define DBRP_TUR_LTE_CC0_CH3_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30B8)
#define DBRP_TUR_LTE_CC0_CH3_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30BC)
#define DBRP_TUR_LTE_CC0_CH4_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30C0)
#define DBRP_TUR_LTE_CC0_CH4_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30C4)
#define DBRP_TUR_LTE_CC1_CH0_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30C8)
#define DBRP_TUR_LTE_CC1_CH0_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30CC)
#define DBRP_TUR_LTE_CC1_CH1_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30D0)
#define DBRP_TUR_LTE_CC1_CH1_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30D4)
#define DBRP_TUR_LTE_CC1_CH2_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30D8)
#define DBRP_TUR_LTE_CC1_CH2_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30DC)
#define DBRP_TUR_LTE_CC1_CH3_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30E0)
#define DBRP_TUR_LTE_CC1_CH3_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30E4)
#define DBRP_TUR_LTE_CC1_CH4_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30E8)
#define DBRP_TUR_LTE_CC1_CH4_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30EC)
#define DBRP_TUR_LTE_CC2_CH0_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30F0)
#define DBRP_TUR_LTE_CC2_CH0_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30F4)
#define DBRP_TUR_LTE_CC2_CH1_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30F8)
#define DBRP_TUR_LTE_CC2_CH1_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x30FC)
#define DBRP_TUR_LTE_CC2_CH2_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x3100)
#define DBRP_TUR_LTE_CC2_CH2_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x3104)
#define DBRP_TUR_LTE_CC2_CH3_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x3108)
#define DBRP_TUR_LTE_CC2_CH3_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x310C)
#define DBRP_TUR_LTE_CC2_CH4_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x3110)
#define DBRP_TUR_LTE_CC2_CH4_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x3114)
#define DBRP_TUR_LTE_DONE_CC                                          (RXBRP_WCTL_TUR_REG_BASE + 0x3118)
#define DBRP_TUR_LTE_CMD0                                             (RXBRP_WCTL_TUR_REG_BASE + 0x311C)
#define DBRP_TUR_LTE_CMD1                                             (RXBRP_WCTL_TUR_REG_BASE + 0x3120)
#define DBRP_TUR_LTE_CC0_CMD_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x3124)
#define DBRP_TUR_LTE_CC0_CMD_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x3128)
#define DBRP_TUR_LTE_CC1_CMD_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x312C)
#define DBRP_TUR_LTE_CC1_CMD_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x3130)
#define DBRP_TUR_LTE_CC2_CMD_RPT0                                     (RXBRP_WCTL_TUR_REG_BASE + 0x3134)
#define DBRP_TUR_LTE_CC2_CMD_RPT1                                     (RXBRP_WCTL_TUR_REG_BASE + 0x3138)
#define DBRP_TUR_LTE_DONE_ASSERT                                      (RXBRP_WCTL_TUR_REG_BASE + 0x313C)
#define DBRP_TUR_LTE_FW_RST                                           (RXBRP_WCTL_TUR_REG_BASE + 0x3FFC)
#define DBRP_TUR_RSRV_MPU_START                                       (RXBRP_WCTL_TUR_REG_BASE + 0x400C)
#define DBRP_TUR_RSRV_MPU_END                                         (RXBRP_WCTL_TUR_REG_BASE + 0x4010)
#define DBRP_TUR_RSRV_MPU                                             (RXBRP_WCTL_TUR_REG_BASE + 0x4014)
#define DBRP_TUR_DSCH_MPU_START                                       (RXBRP_WCTL_TUR_REG_BASE + 0x4018)
#define DBRP_TUR_DSCH_MPU_END                                         (RXBRP_WCTL_TUR_REG_BASE + 0x401C)
#define DBRP_TUR_DSCH_MPU                                             (RXBRP_WCTL_TUR_REG_BASE + 0x4020)
#define DBRP_TUR_LTE_MPU_START                                        (RXBRP_WCTL_TUR_REG_BASE + 0x4024)
#define DBRP_TUR_LTE_MPU_END                                          (RXBRP_WCTL_TUR_REG_BASE + 0x4028)
#define DBRP_TUR_LTE_MPU                                              (RXBRP_WCTL_TUR_REG_BASE + 0x402C)
#define DBRP_TUR_MPU_VIO                                              (RXBRP_WCTL_TUR_REG_BASE + 0x4030)
#define DBRP_TUR_MPU                                                  (RXBRP_WCTL_TUR_REG_BASE + 0x4034)
#define DBRP_TUR_LTE_MPIF_DATA_CNT                                    (RXBRP_WCTL_TUR_REG_BASE + 0x5000)
#define DBRP_TUR_LTE_MPIF_DBG_0                                       (RXBRP_WCTL_TUR_REG_BASE + 0x5004)
#define DBRP_TUR_LTE_MPIF_DBG_1                                       (RXBRP_WCTL_TUR_REG_BASE + 0x5008)
#define DBRP_TUR_LTE_MPIF_DBG_2                                       (RXBRP_WCTL_TUR_REG_BASE + 0x500C)
#define DBRP_TUR_LTE_MPIF_DBG_3                                       (RXBRP_WCTL_TUR_REG_BASE + 0x5010)
#define DBRP_TUR_LTE_MPIF_DBG_4                                       (RXBRP_WCTL_TUR_REG_BASE + 0x5014)
#define DBRP_TUR_LTE_MPIF_DBG_5                                       (RXBRP_WCTL_TUR_REG_BASE + 0x5018)
#define DBRP_TUR_LTE_MPIF_DBG_6                                       (RXBRP_WCTL_TUR_REG_BASE + 0x501C)
#define DBRP_TUR_LTE_MPIF_DBG_7                                       (RXBRP_WCTL_TUR_REG_BASE + 0x5020)
#define DBRP_TUR_LTE_MPIF_DBG_8                                       (RXBRP_WCTL_TUR_REG_BASE + 0x5024)
#define DBRP_TUR_LTE_MPIF_DBG_9                                       (RXBRP_WCTL_TUR_REG_BASE + 0x5028)
#define DBRP_TUR_LTE_MPIF_DBG_10                                      (RXBRP_WCTL_TUR_REG_BASE + 0x502C)
#define DBRP_TUR_LTE_MPIF_DBG_11                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5030)
#define DBRP_TUR_LTE_MPIF_DBG_12                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5034)
#define DBRP_TUR_LTE_MPIF_DBG_13                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5038)
#define DBRP_TUR_LTE_MPIF_DBG_14                                      (RXBRP_WCTL_TUR_REG_BASE + 0x503C)
#define DBRP_TUR_LTE_MPIF_DBG_15                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5040)
#define DBRP_TUR_LTE_MPIF_DBG_16                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5044)
#define DBRP_TUR_LTE_MPIF_DBG_17                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5048)
#define DBRP_TUR_LTE_MPIF_DBG_18                                      (RXBRP_WCTL_TUR_REG_BASE + 0x504C)
#define DBRP_TUR_LTE_MPIF_DBG_19                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5050)
#define DBRP_TUR_LTE_MPIF_DBG_20                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5054)
#define DBRP_TUR_LTE_MPIF_DBG_21                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5058)
#define DBRP_TUR_LTE_MPIF_DBG_22                                      (RXBRP_WCTL_TUR_REG_BASE + 0x505C)
#define DBRP_TUR_LTE_MPIF_DBG_23                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5060)
#define DBRP_TUR_LTE_MPIF_DBG_24                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5064)
#define DBRP_TUR_LTE_MPIF_DBG_25                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5068)
#define DBRP_TUR_LTE_MPIF_DBG_26                                      (RXBRP_WCTL_TUR_REG_BASE + 0x506C)
#define DBRP_TUR_LTE_MPIF_DBG_27                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5070)
#define DBRP_TUR_LTE_MPIF_DBG_28                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5074)
#define DBRP_TUR_LTE_MPIF_DBG_29                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5078)
#define DBRP_TUR_LTE_MPIF_DBG_30                                      (RXBRP_WCTL_TUR_REG_BASE + 0x507C)
#define DBRP_TUR_LTE_MPIF_DBG_31                                      (RXBRP_WCTL_TUR_REG_BASE + 0x5080)
#define DBRP_TUR_LTE_MPIF_WRITE                                       (RXBRP_WCTL_TUR_REG_BASE + 0x5084)
#define DBRP_TUR_L_FSM                                                (RXBRP_WCTL_TUR_REG_BASE + 0x5088)
#define DBRP_TUR_WT_FSM                                               (RXBRP_WCTL_TUR_REG_BASE + 0x508C)
#define DBRP_TUR_DEC_FSM                                              (RXBRP_WCTL_TUR_REG_BASE + 0x5090)
#define DBRP_TUR_DOB_FSM                                              (RXBRP_WCTL_TUR_REG_BASE + 0x5094)
#define DBRP_TUR_C_FSM                                                (RXBRP_WCTL_TUR_REG_BASE + 0x5098)
#define DBRP_TUR_RTT_CFG                                              (RXBRP_WCTL_TUR_REG_BASE + 0x6000)
#define DBRP_TUR_RTT_DST                                              (RXBRP_WCTL_TUR_REG_BASE + 0x6004)
#define DBRP_TUR_RTT_DMA_CFG                                          (RXBRP_WCTL_TUR_REG_BASE + 0x6008)
#define DBRP_TUR_RTT_TRACE_CFG                                        (RXBRP_WCTL_TUR_REG_BASE + 0x600C)
#define DBRP_TUR_RTT_CBCRC                                            (RXBRP_WCTL_TUR_REG_BASE + 0x6010)
#define DBRP_TUR_RTT_LST                                              (RXBRP_WCTL_TUR_REG_BASE + 0x6014)
#define DBRP_TUR_RTT_ENERGY                                           (RXBRP_WCTL_TUR_REG_BASE + 0x6018)
#define DBRP_TUR_EVDO_ITER_CFG                                        (RXBRP_WCTL_TUR_REG_BASE + 0x7000)
#define DBRP_TUR_EVDO_DST_PING                                        (RXBRP_WCTL_TUR_REG_BASE + 0x7004)
#define DBRP_TUR_EVDO_DST_PONG                                        (RXBRP_WCTL_TUR_REG_BASE + 0x7008)
#define DBRP_TUR_EVDO_DMA_CFG                                         (RXBRP_WCTL_TUR_REG_BASE + 0x700C)
#define DBRP_TUR_EVDO_TRACE_CFG                                       (RXBRP_WCTL_TUR_REG_BASE + 0x7010)
#define DBRP_TUR_EVDO_CBCRC                                           (RXBRP_WCTL_TUR_REG_BASE + 0x7014)
#define DBRP_TUR_EVDO_LST                                             (RXBRP_WCTL_TUR_REG_BASE + 0x7018)
#define DBRP_TUR_EVDO_HARQ                                            (RXBRP_WCTL_TUR_REG_BASE + 0x701C)
#define DBRP_TUR_EVDO_PACKET                                          (RXBRP_WCTL_TUR_REG_BASE + 0x7020)
#define DBRP_TUR_EVDO_DST_ADR                                         (RXBRP_WCTL_TUR_REG_BASE + 0x7024)
#define DBRP_TUR_EVDO_ENERGY                                          (RXBRP_WCTL_TUR_REG_BASE + 0x7028)
#define DBRP_TUR_C2K_BUSY                                             (RXBRP_WCTL_TUR_REG_BASE + 0x702C)
#define DBRP_TUR_CB_NUM                                               (RXBRP_WCTL_TUR_REG_BASE + 0xD000)
#define DBRP_TUR_CH0_CB_SIZE                                          (RXBRP_WCTL_TUR_REG_BASE + 0xD018)
#define DBRP_TUR_CH0_CBNUM                                            (RXBRP_WCTL_TUR_REG_BASE + 0xD028)
#define DBRP_TUR_CH0_DMY_FIL_INFO                                     (RXBRP_WCTL_TUR_REG_BASE + 0xD030)
#define DBRP_TUR_CH1_CB_SIZE                                          (RXBRP_WCTL_TUR_REG_BASE + 0xD034)
#define DBRP_TUR_CH1_CBNUM                                            (RXBRP_WCTL_TUR_REG_BASE + 0xD044)
#define DBRP_TUR_CH1_DMY_FIL_INFO                                     (RXBRP_WCTL_TUR_REG_BASE + 0xD04C)
#define DBRP_TUR_CH2_CB_SIZE                                          (RXBRP_WCTL_TUR_REG_BASE + 0xD050)
#define DBRP_TUR_CH2_CBNUM                                            (RXBRP_WCTL_TUR_REG_BASE + 0xD060)
#define DBRP_TUR_CH2_DMY_FIL_INFO                                     (RXBRP_WCTL_TUR_REG_BASE + 0xD068)
#define DBRP_TUR_CH3_CB_SIZE                                          (RXBRP_WCTL_TUR_REG_BASE + 0xD06C)
#define DBRP_TUR_CH3_CBNUM                                            (RXBRP_WCTL_TUR_REG_BASE + 0xD07C)
#define DBRP_TUR_CH3_DMY_FIL_INFO                                     (RXBRP_WCTL_TUR_REG_BASE + 0xD084)
#define DBRP_TUR_CH4_CB_SIZE                                          (RXBRP_WCTL_TUR_REG_BASE + 0xD088)
#define DBRP_TUR_CH4_CBNUM                                            (RXBRP_WCTL_TUR_REG_BASE + 0xD098)
#define DBRP_TUR_CH4_DMY_FIL_INFO                                     (RXBRP_WCTL_TUR_REG_BASE + 0xD0A0)


#define DBRP_TUR_CFG_CR_TH_OFST_BIT_LSB                               (0)
#define DBRP_TUR_CFG_CR_TH_OFST_BIT_WIDTH                             (13)
#define DBRP_TUR_CFG_CR_TH_OFST_BIT_MASK                              ((UINT32) (((1<<DBRP_TUR_CFG_CR_TH_OFST_BIT_WIDTH)-1) << DBRP_TUR_CFG_CR_TH_OFST_BIT_LSB) )

#define DBRP_TUR_DSCRM_BYPASS_BIT_LSB                                 (0)
#define DBRP_TUR_DSCRM_BYPASS_BIT_WIDTH                               (1)
#define DBRP_TUR_DSCRM_BYPASS_BIT_MASK                                ((UINT32) (((1<<DBRP_TUR_DSCRM_BYPASS_BIT_WIDTH)-1) << DBRP_TUR_DSCRM_BYPASS_BIT_LSB) )

#define DBRP_TUR_C_DBG_TIMER_LATCH_EN_BIT_LSB                         (4)
#define DBRP_TUR_C_DBG_TIMER_LATCH_EN_BIT_WIDTH                       (1)
#define DBRP_TUR_C_DBG_TIMER_LATCH_EN_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_C_DBG_TIMER_LATCH_EN_BIT_WIDTH)-1) << DBRP_TUR_C_DBG_TIMER_LATCH_EN_BIT_LSB) )

#define DBRP_TUR_C_DBG_EMI_EN_BIT_LSB                                 (0)
#define DBRP_TUR_C_DBG_EMI_EN_BIT_WIDTH                               (1)
#define DBRP_TUR_C_DBG_EMI_EN_BIT_MASK                                ((UINT32) (((1<<DBRP_TUR_C_DBG_EMI_EN_BIT_WIDTH)-1) << DBRP_TUR_C_DBG_EMI_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_TRG_START_BIT_LSB                               (0)
#define DBRP_TUR_DSCH_TRG_START_BIT_WIDTH                             (1)
#define DBRP_TUR_DSCH_TRG_START_BIT_MASK                              ((UINT32) (((1<<DBRP_TUR_DSCH_TRG_START_BIT_WIDTH)-1) << DBRP_TUR_DSCH_TRG_START_BIT_LSB) )

#define DBRP_TUR_DSCH_DONE_SW_IRQ_TRG_BIT_LSB                         (9)
#define DBRP_TUR_DSCH_DONE_SW_IRQ_TRG_BIT_WIDTH                       (1)
#define DBRP_TUR_DSCH_DONE_SW_IRQ_TRG_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_DONE_SW_IRQ_TRG_BIT_WIDTH)-1) << DBRP_TUR_DSCH_DONE_SW_IRQ_TRG_BIT_LSB) )

#define DBRP_TUR_DSCH_DONE_SW_IRQ_STATUS_BIT_LSB                      (8)
#define DBRP_TUR_DSCH_DONE_SW_IRQ_STATUS_BIT_WIDTH                    (1)
#define DBRP_TUR_DSCH_DONE_SW_IRQ_STATUS_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_DONE_SW_IRQ_STATUS_BIT_WIDTH)-1) << DBRP_TUR_DSCH_DONE_SW_IRQ_STATUS_BIT_LSB) )

#define DBRP_TUR_DSCH_DONE_STATUS_DISABLE_BIT_LSB                     (6)
#define DBRP_TUR_DSCH_DONE_STATUS_DISABLE_BIT_WIDTH                   (1)
#define DBRP_TUR_DSCH_DONE_STATUS_DISABLE_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_DSCH_DONE_STATUS_DISABLE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_DONE_STATUS_DISABLE_BIT_LSB) )

#define DBRP_TUR_DSCH_DONE_STATUS_CH4_BIT_LSB                         (4)
#define DBRP_TUR_DSCH_DONE_STATUS_CH4_BIT_WIDTH                       (1)
#define DBRP_TUR_DSCH_DONE_STATUS_CH4_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_DONE_STATUS_CH4_BIT_WIDTH)-1) << DBRP_TUR_DSCH_DONE_STATUS_CH4_BIT_LSB) )

#define DBRP_TUR_DSCH_DONE_STATUS_CH3_BIT_LSB                         (3)
#define DBRP_TUR_DSCH_DONE_STATUS_CH3_BIT_WIDTH                       (1)
#define DBRP_TUR_DSCH_DONE_STATUS_CH3_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_DONE_STATUS_CH3_BIT_WIDTH)-1) << DBRP_TUR_DSCH_DONE_STATUS_CH3_BIT_LSB) )

#define DBRP_TUR_DSCH_DONE_STATUS_CH2_BIT_LSB                         (2)
#define DBRP_TUR_DSCH_DONE_STATUS_CH2_BIT_WIDTH                       (1)
#define DBRP_TUR_DSCH_DONE_STATUS_CH2_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_DONE_STATUS_CH2_BIT_WIDTH)-1) << DBRP_TUR_DSCH_DONE_STATUS_CH2_BIT_LSB) )

#define DBRP_TUR_DSCH_DONE_STATUS_CH1_BIT_LSB                         (1)
#define DBRP_TUR_DSCH_DONE_STATUS_CH1_BIT_WIDTH                       (1)
#define DBRP_TUR_DSCH_DONE_STATUS_CH1_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_DONE_STATUS_CH1_BIT_WIDTH)-1) << DBRP_TUR_DSCH_DONE_STATUS_CH1_BIT_LSB) )

#define DBRP_TUR_DSCH_DONE_STATUS_CH0_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_DONE_STATUS_CH0_BIT_WIDTH                       (1)
#define DBRP_TUR_DSCH_DONE_STATUS_CH0_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_DONE_STATUS_CH0_BIT_WIDTH)-1) << DBRP_TUR_DSCH_DONE_STATUS_CH0_BIT_LSB) )

#define DBRP_TUR_DSCH_EN_LOWPWR_EN_BIT_LSB                            (6)
#define DBRP_TUR_DSCH_EN_LOWPWR_EN_BIT_WIDTH                          (1)
#define DBRP_TUR_DSCH_EN_LOWPWR_EN_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_DSCH_EN_LOWPWR_EN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_EN_LOWPWR_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_EN_CHi_BIT_LSB                                  (0)
#define DBRP_TUR_DSCH_EN_CHi_BIT_WIDTH                                (5)
#define DBRP_TUR_DSCH_EN_CHi_BIT_MASK                                 ((UINT32) (((1<<DBRP_TUR_DSCH_EN_CHi_BIT_WIDTH)-1) << DBRP_TUR_DSCH_EN_CHi_BIT_LSB) )

#define DBRP_TUR_DSCH_CFG_HDACRC_MODE_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CFG_HDACRC_MODE_BIT_WIDTH                       (5)
#define DBRP_TUR_DSCH_CFG_HDACRC_MODE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CFG_HDACRC_MODE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CFG_HDACRC_MODE_BIT_LSB) )

#define DBRP_TUR_DSCH_CBBUF_BASE_ADDR_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CBBUF_BASE_ADDR_BIT_WIDTH                       (12)
#define DBRP_TUR_DSCH_CBBUF_BASE_ADDR_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CBBUF_BASE_ADDR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CBBUF_BASE_ADDR_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_CFG_UEID_BIT_LSB                            (16)
#define DBRP_TUR_DSCH_CH0_CFG_UEID_BIT_WIDTH                          (16)
#define DBRP_TUR_DSCH_CH0_CFG_UEID_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_CFG_UEID_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_CFG_UEID_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_CFG_CRC_METHOD_BIT_LSB                      (15)
#define DBRP_TUR_DSCH_CH0_CFG_CRC_METHOD_BIT_WIDTH                    (1)
#define DBRP_TUR_DSCH_CH0_CFG_CRC_METHOD_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_CFG_CRC_METHOD_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_CFG_CRC_METHOD_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_CFG_MIN_ITER_BIT_LSB                        (10)
#define DBRP_TUR_DSCH_CH0_CFG_MIN_ITER_BIT_WIDTH                      (5)
#define DBRP_TUR_DSCH_CH0_CFG_MIN_ITER_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_CFG_MIN_ITER_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_CFG_MIN_ITER_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_CFG_MAX_ITER_BIT_LSB                        (5)
#define DBRP_TUR_DSCH_CH0_CFG_MAX_ITER_BIT_WIDTH                      (5)
#define DBRP_TUR_DSCH_CH0_CFG_MAX_ITER_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_CFG_MAX_ITER_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_CFG_MAX_ITER_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_CFG_TB_EQ_BIT_LSB                           (4)
#define DBRP_TUR_DSCH_CH0_CFG_TB_EQ_BIT_WIDTH                         (1)
#define DBRP_TUR_DSCH_CH0_CFG_TB_EQ_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_CFG_TB_EQ_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_CFG_TB_EQ_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_CFG_HDCRCES_EN_BIT_LSB                      (3)
#define DBRP_TUR_DSCH_CH0_CFG_HDCRCES_EN_BIT_WIDTH                    (1)
#define DBRP_TUR_DSCH_CH0_CFG_HDCRCES_EN_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_CFG_HDCRCES_EN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_CFG_HDCRCES_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_CFG_CRCSIZE_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH0_CFG_CRCSIZE_BIT_WIDTH                       (3)
#define DBRP_TUR_DSCH_CH0_CFG_CRCSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_CFG_CRCSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_CFG_CRCSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_LP0_DSCRM_INI_BIT_LSB                       (16)
#define DBRP_TUR_DSCH_CH0_LP0_DSCRM_INI_BIT_WIDTH                     (16)
#define DBRP_TUR_DSCH_CH0_LP0_DSCRM_INI_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_LP0_DSCRM_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_LP0_DSCRM_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_LP0_WBUF_INI_BIT_LSB                        (4)
#define DBRP_TUR_DSCH_CH0_LP0_WBUF_INI_BIT_WIDTH                      (10)
#define DBRP_TUR_DSCH_CH0_LP0_WBUF_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_LP0_WBUF_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_LP0_WBUF_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_LP0_START_IDX_BIT_LSB                       (0)
#define DBRP_TUR_DSCH_CH0_LP0_START_IDX_BIT_WIDTH                     (4)
#define DBRP_TUR_DSCH_CH0_LP0_START_IDX_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_LP0_START_IDX_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_LP0_START_IDX_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_LP1_PCRC_INI_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH0_LP1_PCRC_INI_BIT_WIDTH                      (24)
#define DBRP_TUR_DSCH_CH0_LP1_PCRC_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_LP1_PCRC_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_LP1_PCRC_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_LP2_CBUF_INI_BIT_LSB                        (21)
#define DBRP_TUR_DSCH_CH0_LP2_CBUF_INI_BIT_WIDTH                      (10)
#define DBRP_TUR_DSCH_CH0_LP2_CBUF_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_LP2_CBUF_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_LP2_CBUF_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_LP2_RDCNT_INI_BIT_LSB                       (0)
#define DBRP_TUR_DSCH_CH0_LP2_RDCNT_INI_BIT_WIDTH                     (21)
#define DBRP_TUR_DSCH_CH0_LP2_RDCNT_INI_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_LP2_RDCNT_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_LP2_RDCNT_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_TrBK_TBSIZE_BIT_LSB                         (16)
#define DBRP_TUR_DSCH_CH0_TrBK_TBSIZE_BIT_WIDTH                       (16)
#define DBRP_TUR_DSCH_CH0_TrBK_TBSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_TrBK_TBSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_TrBK_TBSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_TrBK_TBNUM_BIT_LSB                          (0)
#define DBRP_TUR_DSCH_CH0_TrBK_TBNUM_BIT_WIDTH                        (6)
#define DBRP_TUR_DSCH_CH0_TrBK_TBNUM_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_TrBK_TBNUM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_TrBK_TBNUM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_CoBK_CBSIZE_BIT_LSB                         (16)
#define DBRP_TUR_DSCH_CH0_CoBK_CBSIZE_BIT_WIDTH                       (13)
#define DBRP_TUR_DSCH_CH0_CoBK_CBSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_CoBK_CBSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_CoBK_CBSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_CoBK_CBPAD_BIT_LSB                          (4)
#define DBRP_TUR_DSCH_CH0_CoBK_CBPAD_BIT_WIDTH                        (6)
#define DBRP_TUR_DSCH_CH0_CoBK_CBPAD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_CoBK_CBPAD_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_CoBK_CBPAD_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_CoBK_CBNUM_BIT_LSB                          (0)
#define DBRP_TUR_DSCH_CH0_CoBK_CBNUM_BIT_WIDTH                        (4)
#define DBRP_TUR_DSCH_CH0_CoBK_CBNUM_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_CoBK_CBNUM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_CoBK_CBNUM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_DMA_DST_ADR_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH0_DMA_DST_ADR_BIT_WIDTH                       (32)
#define DBRP_TUR_DSCH_CH0_DMA_DST_ADR_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_DMA_DST_ADR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_DMA_DST_ADR_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_DMA_CFG_CRC_REMOVE_BIT_LSB                  (7)
#define DBRP_TUR_DSCH_CH0_DMA_CFG_CRC_REMOVE_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH0_DMA_CFG_CRC_REMOVE_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_DMA_CFG_CRC_REMOVE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_DMA_CFG_CRC_REMOVE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_DMA_CFG_SWAP_ENDIAN_BIT_LSB                 (5)
#define DBRP_TUR_DSCH_CH0_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH               (1)
#define DBRP_TUR_DSCH_CH0_DMA_CFG_SWAP_ENDIAN_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_DMA_CFG_SWAP_ENDIAN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_DMA_CFG_MAC_OFST_BIT_LSB                    (0)
#define DBRP_TUR_DSCH_CH0_DMA_CFG_MAC_OFST_BIT_WIDTH                  (5)
#define DBRP_TUR_DSCH_CH0_DMA_CFG_MAC_OFST_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_DMA_CFG_MAC_OFST_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_DMA_CFG_MAC_OFST_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_TRACE_CFG_TRACE_CB_IDX_BIT_LSB              (4)
#define DBRP_TUR_DSCH_CH0_TRACE_CFG_TRACE_CB_IDX_BIT_WIDTH            (4)
#define DBRP_TUR_DSCH_CH0_TRACE_CFG_TRACE_CB_IDX_BIT_MASK             ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_TRACE_CFG_TRACE_CB_IDX_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_TRACE_CFG_TRACE_CB_IDX_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_TRACE_CFG_TRACE_EN_BIT_LSB                  (0)
#define DBRP_TUR_DSCH_CH0_TRACE_CFG_TRACE_EN_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH0_TRACE_CFG_TRACE_EN_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_TRACE_CFG_TRACE_EN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_TRACE_CFG_TRACE_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_HSRM_CFG_PING_PONG_BIT_LSB                  (0)
#define DBRP_TUR_DSCH_CH0_HSRM_CFG_PING_PONG_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH0_HSRM_CFG_PING_PONG_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_HSRM_CFG_PING_PONG_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_HSRM_CFG_PING_PONG_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_CFG_UEID_BIT_LSB                            (16)
#define DBRP_TUR_DSCH_CH1_CFG_UEID_BIT_WIDTH                          (16)
#define DBRP_TUR_DSCH_CH1_CFG_UEID_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_CFG_UEID_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_CFG_UEID_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_CFG_CRC_METHOD_BIT_LSB                      (15)
#define DBRP_TUR_DSCH_CH1_CFG_CRC_METHOD_BIT_WIDTH                    (1)
#define DBRP_TUR_DSCH_CH1_CFG_CRC_METHOD_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_CFG_CRC_METHOD_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_CFG_CRC_METHOD_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_CFG_MIN_ITER_BIT_LSB                        (10)
#define DBRP_TUR_DSCH_CH1_CFG_MIN_ITER_BIT_WIDTH                      (5)
#define DBRP_TUR_DSCH_CH1_CFG_MIN_ITER_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_CFG_MIN_ITER_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_CFG_MIN_ITER_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_CFG_MAX_ITER_BIT_LSB                        (5)
#define DBRP_TUR_DSCH_CH1_CFG_MAX_ITER_BIT_WIDTH                      (5)
#define DBRP_TUR_DSCH_CH1_CFG_MAX_ITER_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_CFG_MAX_ITER_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_CFG_MAX_ITER_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_CFG_TB_EQ_BIT_LSB                           (4)
#define DBRP_TUR_DSCH_CH1_CFG_TB_EQ_BIT_WIDTH                         (1)
#define DBRP_TUR_DSCH_CH1_CFG_TB_EQ_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_CFG_TB_EQ_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_CFG_TB_EQ_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_CFG_HDCRCES_EN_BIT_LSB                      (3)
#define DBRP_TUR_DSCH_CH1_CFG_HDCRCES_EN_BIT_WIDTH                    (1)
#define DBRP_TUR_DSCH_CH1_CFG_HDCRCES_EN_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_CFG_HDCRCES_EN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_CFG_HDCRCES_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_CFG_CRCSIZE_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH1_CFG_CRCSIZE_BIT_WIDTH                       (3)
#define DBRP_TUR_DSCH_CH1_CFG_CRCSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_CFG_CRCSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_CFG_CRCSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_LP0_DSCRM_INI_BIT_LSB                       (16)
#define DBRP_TUR_DSCH_CH1_LP0_DSCRM_INI_BIT_WIDTH                     (16)
#define DBRP_TUR_DSCH_CH1_LP0_DSCRM_INI_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_LP0_DSCRM_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_LP0_DSCRM_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_LP0_WBUF_INI_BIT_LSB                        (4)
#define DBRP_TUR_DSCH_CH1_LP0_WBUF_INI_BIT_WIDTH                      (10)
#define DBRP_TUR_DSCH_CH1_LP0_WBUF_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_LP0_WBUF_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_LP0_WBUF_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_LP0_START_IDX_BIT_LSB                       (0)
#define DBRP_TUR_DSCH_CH1_LP0_START_IDX_BIT_WIDTH                     (4)
#define DBRP_TUR_DSCH_CH1_LP0_START_IDX_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_LP0_START_IDX_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_LP0_START_IDX_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_LP1_PCRC_INI_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH1_LP1_PCRC_INI_BIT_WIDTH                      (24)
#define DBRP_TUR_DSCH_CH1_LP1_PCRC_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_LP1_PCRC_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_LP1_PCRC_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_LP2_CBUF_INI_BIT_LSB                        (21)
#define DBRP_TUR_DSCH_CH1_LP2_CBUF_INI_BIT_WIDTH                      (10)
#define DBRP_TUR_DSCH_CH1_LP2_CBUF_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_LP2_CBUF_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_LP2_CBUF_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_LP2_RDCNT_INI_BIT_LSB                       (0)
#define DBRP_TUR_DSCH_CH1_LP2_RDCNT_INI_BIT_WIDTH                     (21)
#define DBRP_TUR_DSCH_CH1_LP2_RDCNT_INI_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_LP2_RDCNT_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_LP2_RDCNT_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_TrBK_TBSIZE_BIT_LSB                         (16)
#define DBRP_TUR_DSCH_CH1_TrBK_TBSIZE_BIT_WIDTH                       (16)
#define DBRP_TUR_DSCH_CH1_TrBK_TBSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_TrBK_TBSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_TrBK_TBSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_TrBK_TBNUM_BIT_LSB                          (0)
#define DBRP_TUR_DSCH_CH1_TrBK_TBNUM_BIT_WIDTH                        (6)
#define DBRP_TUR_DSCH_CH1_TrBK_TBNUM_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_TrBK_TBNUM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_TrBK_TBNUM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_CoBK_CBSIZE_BIT_LSB                         (16)
#define DBRP_TUR_DSCH_CH1_CoBK_CBSIZE_BIT_WIDTH                       (13)
#define DBRP_TUR_DSCH_CH1_CoBK_CBSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_CoBK_CBSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_CoBK_CBSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_CoBK_CBPAD_BIT_LSB                          (4)
#define DBRP_TUR_DSCH_CH1_CoBK_CBPAD_BIT_WIDTH                        (6)
#define DBRP_TUR_DSCH_CH1_CoBK_CBPAD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_CoBK_CBPAD_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_CoBK_CBPAD_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_CoBK_CBNUM_BIT_LSB                          (0)
#define DBRP_TUR_DSCH_CH1_CoBK_CBNUM_BIT_WIDTH                        (4)
#define DBRP_TUR_DSCH_CH1_CoBK_CBNUM_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_CoBK_CBNUM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_CoBK_CBNUM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_DMA_DST_ADR_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH1_DMA_DST_ADR_BIT_WIDTH                       (32)
#define DBRP_TUR_DSCH_CH1_DMA_DST_ADR_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_DMA_DST_ADR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_DMA_DST_ADR_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_DMA_CFG_CRC_REMOVE_BIT_LSB                  (7)
#define DBRP_TUR_DSCH_CH1_DMA_CFG_CRC_REMOVE_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH1_DMA_CFG_CRC_REMOVE_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_DMA_CFG_CRC_REMOVE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_DMA_CFG_CRC_REMOVE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_DMA_CFG_SWAP_ENDIAN_BIT_LSB                 (5)
#define DBRP_TUR_DSCH_CH1_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH               (1)
#define DBRP_TUR_DSCH_CH1_DMA_CFG_SWAP_ENDIAN_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_DMA_CFG_SWAP_ENDIAN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_DMA_CFG_MAC_OFST_BIT_LSB                    (0)
#define DBRP_TUR_DSCH_CH1_DMA_CFG_MAC_OFST_BIT_WIDTH                  (5)
#define DBRP_TUR_DSCH_CH1_DMA_CFG_MAC_OFST_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_DMA_CFG_MAC_OFST_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_DMA_CFG_MAC_OFST_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_TRACE_CFG_TRACE_CB_IDX_BIT_LSB              (4)
#define DBRP_TUR_DSCH_CH1_TRACE_CFG_TRACE_CB_IDX_BIT_WIDTH            (4)
#define DBRP_TUR_DSCH_CH1_TRACE_CFG_TRACE_CB_IDX_BIT_MASK             ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_TRACE_CFG_TRACE_CB_IDX_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_TRACE_CFG_TRACE_CB_IDX_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_TRACE_CFG_TRACE_EN_BIT_LSB                  (0)
#define DBRP_TUR_DSCH_CH1_TRACE_CFG_TRACE_EN_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH1_TRACE_CFG_TRACE_EN_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_TRACE_CFG_TRACE_EN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_TRACE_CFG_TRACE_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_HSRM_CFG_PING_PONG_BIT_LSB                  (0)
#define DBRP_TUR_DSCH_CH1_HSRM_CFG_PING_PONG_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH1_HSRM_CFG_PING_PONG_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_HSRM_CFG_PING_PONG_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_HSRM_CFG_PING_PONG_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_CFG_UEID_BIT_LSB                            (16)
#define DBRP_TUR_DSCH_CH2_CFG_UEID_BIT_WIDTH                          (16)
#define DBRP_TUR_DSCH_CH2_CFG_UEID_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_CFG_UEID_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_CFG_UEID_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_CFG_CRC_METHOD_BIT_LSB                      (15)
#define DBRP_TUR_DSCH_CH2_CFG_CRC_METHOD_BIT_WIDTH                    (1)
#define DBRP_TUR_DSCH_CH2_CFG_CRC_METHOD_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_CFG_CRC_METHOD_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_CFG_CRC_METHOD_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_CFG_MIN_ITER_BIT_LSB                        (10)
#define DBRP_TUR_DSCH_CH2_CFG_MIN_ITER_BIT_WIDTH                      (5)
#define DBRP_TUR_DSCH_CH2_CFG_MIN_ITER_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_CFG_MIN_ITER_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_CFG_MIN_ITER_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_CFG_MAX_ITER_BIT_LSB                        (5)
#define DBRP_TUR_DSCH_CH2_CFG_MAX_ITER_BIT_WIDTH                      (5)
#define DBRP_TUR_DSCH_CH2_CFG_MAX_ITER_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_CFG_MAX_ITER_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_CFG_MAX_ITER_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_CFG_TB_EQ_BIT_LSB                           (4)
#define DBRP_TUR_DSCH_CH2_CFG_TB_EQ_BIT_WIDTH                         (1)
#define DBRP_TUR_DSCH_CH2_CFG_TB_EQ_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_CFG_TB_EQ_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_CFG_TB_EQ_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_CFG_HDCRCES_EN_BIT_LSB                      (3)
#define DBRP_TUR_DSCH_CH2_CFG_HDCRCES_EN_BIT_WIDTH                    (1)
#define DBRP_TUR_DSCH_CH2_CFG_HDCRCES_EN_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_CFG_HDCRCES_EN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_CFG_HDCRCES_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_CFG_CRCSIZE_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH2_CFG_CRCSIZE_BIT_WIDTH                       (3)
#define DBRP_TUR_DSCH_CH2_CFG_CRCSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_CFG_CRCSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_CFG_CRCSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_LP0_DSCRM_INI_BIT_LSB                       (16)
#define DBRP_TUR_DSCH_CH2_LP0_DSCRM_INI_BIT_WIDTH                     (16)
#define DBRP_TUR_DSCH_CH2_LP0_DSCRM_INI_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_LP0_DSCRM_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_LP0_DSCRM_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_LP0_WBUF_INI_BIT_LSB                        (4)
#define DBRP_TUR_DSCH_CH2_LP0_WBUF_INI_BIT_WIDTH                      (10)
#define DBRP_TUR_DSCH_CH2_LP0_WBUF_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_LP0_WBUF_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_LP0_WBUF_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_LP0_START_IDX_BIT_LSB                       (0)
#define DBRP_TUR_DSCH_CH2_LP0_START_IDX_BIT_WIDTH                     (4)
#define DBRP_TUR_DSCH_CH2_LP0_START_IDX_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_LP0_START_IDX_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_LP0_START_IDX_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_LP1_PCRC_INI_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH2_LP1_PCRC_INI_BIT_WIDTH                      (24)
#define DBRP_TUR_DSCH_CH2_LP1_PCRC_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_LP1_PCRC_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_LP1_PCRC_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_LP2_CBUF_INI_BIT_LSB                        (21)
#define DBRP_TUR_DSCH_CH2_LP2_CBUF_INI_BIT_WIDTH                      (10)
#define DBRP_TUR_DSCH_CH2_LP2_CBUF_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_LP2_CBUF_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_LP2_CBUF_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_LP2_RDCNT_INI_BIT_LSB                       (0)
#define DBRP_TUR_DSCH_CH2_LP2_RDCNT_INI_BIT_WIDTH                     (21)
#define DBRP_TUR_DSCH_CH2_LP2_RDCNT_INI_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_LP2_RDCNT_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_LP2_RDCNT_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_TrBK_TBSIZE_BIT_LSB                         (16)
#define DBRP_TUR_DSCH_CH2_TrBK_TBSIZE_BIT_WIDTH                       (16)
#define DBRP_TUR_DSCH_CH2_TrBK_TBSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_TrBK_TBSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_TrBK_TBSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_TrBK_TBNUM_BIT_LSB                          (0)
#define DBRP_TUR_DSCH_CH2_TrBK_TBNUM_BIT_WIDTH                        (6)
#define DBRP_TUR_DSCH_CH2_TrBK_TBNUM_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_TrBK_TBNUM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_TrBK_TBNUM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_CoBK_CBSIZE_BIT_LSB                         (16)
#define DBRP_TUR_DSCH_CH2_CoBK_CBSIZE_BIT_WIDTH                       (13)
#define DBRP_TUR_DSCH_CH2_CoBK_CBSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_CoBK_CBSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_CoBK_CBSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_CoBK_CBPAD_BIT_LSB                          (4)
#define DBRP_TUR_DSCH_CH2_CoBK_CBPAD_BIT_WIDTH                        (6)
#define DBRP_TUR_DSCH_CH2_CoBK_CBPAD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_CoBK_CBPAD_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_CoBK_CBPAD_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_CoBK_CBNUM_BIT_LSB                          (0)
#define DBRP_TUR_DSCH_CH2_CoBK_CBNUM_BIT_WIDTH                        (4)
#define DBRP_TUR_DSCH_CH2_CoBK_CBNUM_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_CoBK_CBNUM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_CoBK_CBNUM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_DMA_DST_ADR_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH2_DMA_DST_ADR_BIT_WIDTH                       (32)
#define DBRP_TUR_DSCH_CH2_DMA_DST_ADR_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_DMA_DST_ADR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_DMA_DST_ADR_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_DMA_CFG_CRC_REMOVE_BIT_LSB                  (7)
#define DBRP_TUR_DSCH_CH2_DMA_CFG_CRC_REMOVE_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH2_DMA_CFG_CRC_REMOVE_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_DMA_CFG_CRC_REMOVE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_DMA_CFG_CRC_REMOVE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_DMA_CFG_SWAP_ENDIAN_BIT_LSB                 (5)
#define DBRP_TUR_DSCH_CH2_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH               (1)
#define DBRP_TUR_DSCH_CH2_DMA_CFG_SWAP_ENDIAN_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_DMA_CFG_SWAP_ENDIAN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_DMA_CFG_MAC_OFST_BIT_LSB                    (0)
#define DBRP_TUR_DSCH_CH2_DMA_CFG_MAC_OFST_BIT_WIDTH                  (5)
#define DBRP_TUR_DSCH_CH2_DMA_CFG_MAC_OFST_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_DMA_CFG_MAC_OFST_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_DMA_CFG_MAC_OFST_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_TRACE_CFG_TRACE_CB_IDX_BIT_LSB              (4)
#define DBRP_TUR_DSCH_CH2_TRACE_CFG_TRACE_CB_IDX_BIT_WIDTH            (4)
#define DBRP_TUR_DSCH_CH2_TRACE_CFG_TRACE_CB_IDX_BIT_MASK             ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_TRACE_CFG_TRACE_CB_IDX_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_TRACE_CFG_TRACE_CB_IDX_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_TRACE_CFG_TRACE_EN_BIT_LSB                  (0)
#define DBRP_TUR_DSCH_CH2_TRACE_CFG_TRACE_EN_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH2_TRACE_CFG_TRACE_EN_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_TRACE_CFG_TRACE_EN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_TRACE_CFG_TRACE_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_HSRM_CFG_PING_PONG_BIT_LSB                  (0)
#define DBRP_TUR_DSCH_CH2_HSRM_CFG_PING_PONG_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH2_HSRM_CFG_PING_PONG_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_HSRM_CFG_PING_PONG_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_HSRM_CFG_PING_PONG_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_CFG_UEID_BIT_LSB                            (16)
#define DBRP_TUR_DSCH_CH3_CFG_UEID_BIT_WIDTH                          (16)
#define DBRP_TUR_DSCH_CH3_CFG_UEID_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_CFG_UEID_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_CFG_UEID_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_CFG_CRC_METHOD_BIT_LSB                      (15)
#define DBRP_TUR_DSCH_CH3_CFG_CRC_METHOD_BIT_WIDTH                    (1)
#define DBRP_TUR_DSCH_CH3_CFG_CRC_METHOD_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_CFG_CRC_METHOD_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_CFG_CRC_METHOD_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_CFG_MIN_ITER_BIT_LSB                        (10)
#define DBRP_TUR_DSCH_CH3_CFG_MIN_ITER_BIT_WIDTH                      (5)
#define DBRP_TUR_DSCH_CH3_CFG_MIN_ITER_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_CFG_MIN_ITER_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_CFG_MIN_ITER_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_CFG_MAX_ITER_BIT_LSB                        (5)
#define DBRP_TUR_DSCH_CH3_CFG_MAX_ITER_BIT_WIDTH                      (5)
#define DBRP_TUR_DSCH_CH3_CFG_MAX_ITER_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_CFG_MAX_ITER_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_CFG_MAX_ITER_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_CFG_TB_EQ_BIT_LSB                           (4)
#define DBRP_TUR_DSCH_CH3_CFG_TB_EQ_BIT_WIDTH                         (1)
#define DBRP_TUR_DSCH_CH3_CFG_TB_EQ_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_CFG_TB_EQ_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_CFG_TB_EQ_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_CFG_HDCRCES_EN_BIT_LSB                      (3)
#define DBRP_TUR_DSCH_CH3_CFG_HDCRCES_EN_BIT_WIDTH                    (1)
#define DBRP_TUR_DSCH_CH3_CFG_HDCRCES_EN_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_CFG_HDCRCES_EN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_CFG_HDCRCES_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_CFG_CRCSIZE_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH3_CFG_CRCSIZE_BIT_WIDTH                       (3)
#define DBRP_TUR_DSCH_CH3_CFG_CRCSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_CFG_CRCSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_CFG_CRCSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_LP0_DSCRM_INI_BIT_LSB                       (16)
#define DBRP_TUR_DSCH_CH3_LP0_DSCRM_INI_BIT_WIDTH                     (16)
#define DBRP_TUR_DSCH_CH3_LP0_DSCRM_INI_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_LP0_DSCRM_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_LP0_DSCRM_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_LP0_WBUF_INI_BIT_LSB                        (4)
#define DBRP_TUR_DSCH_CH3_LP0_WBUF_INI_BIT_WIDTH                      (10)
#define DBRP_TUR_DSCH_CH3_LP0_WBUF_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_LP0_WBUF_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_LP0_WBUF_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_LP0_START_IDX_BIT_LSB                       (0)
#define DBRP_TUR_DSCH_CH3_LP0_START_IDX_BIT_WIDTH                     (4)
#define DBRP_TUR_DSCH_CH3_LP0_START_IDX_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_LP0_START_IDX_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_LP0_START_IDX_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_LP1_PCRC_INI_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH3_LP1_PCRC_INI_BIT_WIDTH                      (24)
#define DBRP_TUR_DSCH_CH3_LP1_PCRC_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_LP1_PCRC_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_LP1_PCRC_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_LP2_CBUF_INI_BIT_LSB                        (21)
#define DBRP_TUR_DSCH_CH3_LP2_CBUF_INI_BIT_WIDTH                      (10)
#define DBRP_TUR_DSCH_CH3_LP2_CBUF_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_LP2_CBUF_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_LP2_CBUF_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_LP2_RDCNT_INI_BIT_LSB                       (0)
#define DBRP_TUR_DSCH_CH3_LP2_RDCNT_INI_BIT_WIDTH                     (21)
#define DBRP_TUR_DSCH_CH3_LP2_RDCNT_INI_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_LP2_RDCNT_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_LP2_RDCNT_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_TrBK_TBSIZE_BIT_LSB                         (16)
#define DBRP_TUR_DSCH_CH3_TrBK_TBSIZE_BIT_WIDTH                       (16)
#define DBRP_TUR_DSCH_CH3_TrBK_TBSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_TrBK_TBSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_TrBK_TBSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_TrBK_TBNUM_BIT_LSB                          (0)
#define DBRP_TUR_DSCH_CH3_TrBK_TBNUM_BIT_WIDTH                        (6)
#define DBRP_TUR_DSCH_CH3_TrBK_TBNUM_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_TrBK_TBNUM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_TrBK_TBNUM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_CoBK_CBSIZE_BIT_LSB                         (16)
#define DBRP_TUR_DSCH_CH3_CoBK_CBSIZE_BIT_WIDTH                       (13)
#define DBRP_TUR_DSCH_CH3_CoBK_CBSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_CoBK_CBSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_CoBK_CBSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_CoBK_CBPAD_BIT_LSB                          (4)
#define DBRP_TUR_DSCH_CH3_CoBK_CBPAD_BIT_WIDTH                        (6)
#define DBRP_TUR_DSCH_CH3_CoBK_CBPAD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_CoBK_CBPAD_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_CoBK_CBPAD_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_CoBK_CBNUM_BIT_LSB                          (0)
#define DBRP_TUR_DSCH_CH3_CoBK_CBNUM_BIT_WIDTH                        (4)
#define DBRP_TUR_DSCH_CH3_CoBK_CBNUM_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_CoBK_CBNUM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_CoBK_CBNUM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_DMA_DST_ADR_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH3_DMA_DST_ADR_BIT_WIDTH                       (32)
#define DBRP_TUR_DSCH_CH3_DMA_DST_ADR_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_DMA_DST_ADR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_DMA_DST_ADR_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_DMA_CFG_CRC_REMOVE_BIT_LSB                  (7)
#define DBRP_TUR_DSCH_CH3_DMA_CFG_CRC_REMOVE_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH3_DMA_CFG_CRC_REMOVE_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_DMA_CFG_CRC_REMOVE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_DMA_CFG_CRC_REMOVE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_DMA_CFG_SWAP_ENDIAN_BIT_LSB                 (5)
#define DBRP_TUR_DSCH_CH3_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH               (1)
#define DBRP_TUR_DSCH_CH3_DMA_CFG_SWAP_ENDIAN_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_DMA_CFG_SWAP_ENDIAN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_DMA_CFG_MAC_OFST_BIT_LSB                    (0)
#define DBRP_TUR_DSCH_CH3_DMA_CFG_MAC_OFST_BIT_WIDTH                  (5)
#define DBRP_TUR_DSCH_CH3_DMA_CFG_MAC_OFST_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_DMA_CFG_MAC_OFST_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_DMA_CFG_MAC_OFST_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_TRACE_CFG_TRACE_CB_IDX_BIT_LSB              (4)
#define DBRP_TUR_DSCH_CH3_TRACE_CFG_TRACE_CB_IDX_BIT_WIDTH            (4)
#define DBRP_TUR_DSCH_CH3_TRACE_CFG_TRACE_CB_IDX_BIT_MASK             ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_TRACE_CFG_TRACE_CB_IDX_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_TRACE_CFG_TRACE_CB_IDX_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_TRACE_CFG_TRACE_EN_BIT_LSB                  (0)
#define DBRP_TUR_DSCH_CH3_TRACE_CFG_TRACE_EN_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH3_TRACE_CFG_TRACE_EN_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_TRACE_CFG_TRACE_EN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_TRACE_CFG_TRACE_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_HSRM_CFG_PING_PONG_BIT_LSB                  (0)
#define DBRP_TUR_DSCH_CH3_HSRM_CFG_PING_PONG_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH3_HSRM_CFG_PING_PONG_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_HSRM_CFG_PING_PONG_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_HSRM_CFG_PING_PONG_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_CFG_UEID_BIT_LSB                            (16)
#define DBRP_TUR_DSCH_CH4_CFG_UEID_BIT_WIDTH                          (16)
#define DBRP_TUR_DSCH_CH4_CFG_UEID_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_CFG_UEID_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_CFG_UEID_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_CFG_CRC_METHOD_BIT_LSB                      (15)
#define DBRP_TUR_DSCH_CH4_CFG_CRC_METHOD_BIT_WIDTH                    (1)
#define DBRP_TUR_DSCH_CH4_CFG_CRC_METHOD_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_CFG_CRC_METHOD_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_CFG_CRC_METHOD_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_CFG_MIN_ITER_BIT_LSB                        (10)
#define DBRP_TUR_DSCH_CH4_CFG_MIN_ITER_BIT_WIDTH                      (5)
#define DBRP_TUR_DSCH_CH4_CFG_MIN_ITER_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_CFG_MIN_ITER_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_CFG_MIN_ITER_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_CFG_MAX_ITER_BIT_LSB                        (5)
#define DBRP_TUR_DSCH_CH4_CFG_MAX_ITER_BIT_WIDTH                      (5)
#define DBRP_TUR_DSCH_CH4_CFG_MAX_ITER_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_CFG_MAX_ITER_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_CFG_MAX_ITER_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_CFG_TB_EQ_BIT_LSB                           (4)
#define DBRP_TUR_DSCH_CH4_CFG_TB_EQ_BIT_WIDTH                         (1)
#define DBRP_TUR_DSCH_CH4_CFG_TB_EQ_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_CFG_TB_EQ_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_CFG_TB_EQ_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_CFG_HDCRCES_EN_BIT_LSB                      (3)
#define DBRP_TUR_DSCH_CH4_CFG_HDCRCES_EN_BIT_WIDTH                    (1)
#define DBRP_TUR_DSCH_CH4_CFG_HDCRCES_EN_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_CFG_HDCRCES_EN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_CFG_HDCRCES_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_CFG_CRCSIZE_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH4_CFG_CRCSIZE_BIT_WIDTH                       (3)
#define DBRP_TUR_DSCH_CH4_CFG_CRCSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_CFG_CRCSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_CFG_CRCSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_LP0_DSCRM_INI_BIT_LSB                       (16)
#define DBRP_TUR_DSCH_CH4_LP0_DSCRM_INI_BIT_WIDTH                     (16)
#define DBRP_TUR_DSCH_CH4_LP0_DSCRM_INI_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_LP0_DSCRM_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_LP0_DSCRM_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_LP0_WBUF_INI_BIT_LSB                        (4)
#define DBRP_TUR_DSCH_CH4_LP0_WBUF_INI_BIT_WIDTH                      (10)
#define DBRP_TUR_DSCH_CH4_LP0_WBUF_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_LP0_WBUF_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_LP0_WBUF_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_LP0_START_IDX_BIT_LSB                       (0)
#define DBRP_TUR_DSCH_CH4_LP0_START_IDX_BIT_WIDTH                     (4)
#define DBRP_TUR_DSCH_CH4_LP0_START_IDX_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_LP0_START_IDX_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_LP0_START_IDX_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_LP1_PCRC_INI_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH4_LP1_PCRC_INI_BIT_WIDTH                      (24)
#define DBRP_TUR_DSCH_CH4_LP1_PCRC_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_LP1_PCRC_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_LP1_PCRC_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_LP2_CBUF_INI_BIT_LSB                        (21)
#define DBRP_TUR_DSCH_CH4_LP2_CBUF_INI_BIT_WIDTH                      (10)
#define DBRP_TUR_DSCH_CH4_LP2_CBUF_INI_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_LP2_CBUF_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_LP2_CBUF_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_LP2_RDCNT_INI_BIT_LSB                       (0)
#define DBRP_TUR_DSCH_CH4_LP2_RDCNT_INI_BIT_WIDTH                     (21)
#define DBRP_TUR_DSCH_CH4_LP2_RDCNT_INI_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_LP2_RDCNT_INI_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_LP2_RDCNT_INI_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_TrBK_TBSIZE_BIT_LSB                         (16)
#define DBRP_TUR_DSCH_CH4_TrBK_TBSIZE_BIT_WIDTH                       (16)
#define DBRP_TUR_DSCH_CH4_TrBK_TBSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_TrBK_TBSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_TrBK_TBSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_TrBK_TBNUM_BIT_LSB                          (0)
#define DBRP_TUR_DSCH_CH4_TrBK_TBNUM_BIT_WIDTH                        (6)
#define DBRP_TUR_DSCH_CH4_TrBK_TBNUM_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_TrBK_TBNUM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_TrBK_TBNUM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_CoBK_CBSIZE_BIT_LSB                         (16)
#define DBRP_TUR_DSCH_CH4_CoBK_CBSIZE_BIT_WIDTH                       (13)
#define DBRP_TUR_DSCH_CH4_CoBK_CBSIZE_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_CoBK_CBSIZE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_CoBK_CBSIZE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_CoBK_CBPAD_BIT_LSB                          (4)
#define DBRP_TUR_DSCH_CH4_CoBK_CBPAD_BIT_WIDTH                        (6)
#define DBRP_TUR_DSCH_CH4_CoBK_CBPAD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_CoBK_CBPAD_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_CoBK_CBPAD_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_CoBK_CBNUM_BIT_LSB                          (0)
#define DBRP_TUR_DSCH_CH4_CoBK_CBNUM_BIT_WIDTH                        (4)
#define DBRP_TUR_DSCH_CH4_CoBK_CBNUM_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_CoBK_CBNUM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_CoBK_CBNUM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_DMA_DST_ADR_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH4_DMA_DST_ADR_BIT_WIDTH                       (32)
#define DBRP_TUR_DSCH_CH4_DMA_DST_ADR_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_DMA_DST_ADR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_DMA_DST_ADR_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_DMA_CFG_CRC_REMOVE_BIT_LSB                  (7)
#define DBRP_TUR_DSCH_CH4_DMA_CFG_CRC_REMOVE_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH4_DMA_CFG_CRC_REMOVE_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_DMA_CFG_CRC_REMOVE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_DMA_CFG_CRC_REMOVE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_DMA_CFG_SWAP_ENDIAN_BIT_LSB                 (5)
#define DBRP_TUR_DSCH_CH4_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH               (1)
#define DBRP_TUR_DSCH_CH4_DMA_CFG_SWAP_ENDIAN_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_DMA_CFG_SWAP_ENDIAN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_DMA_CFG_MAC_OFST_BIT_LSB                    (0)
#define DBRP_TUR_DSCH_CH4_DMA_CFG_MAC_OFST_BIT_WIDTH                  (5)
#define DBRP_TUR_DSCH_CH4_DMA_CFG_MAC_OFST_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_DMA_CFG_MAC_OFST_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_DMA_CFG_MAC_OFST_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_TRACE_CFG_TRACE_CB_IDX_BIT_LSB              (4)
#define DBRP_TUR_DSCH_CH4_TRACE_CFG_TRACE_CB_IDX_BIT_WIDTH            (4)
#define DBRP_TUR_DSCH_CH4_TRACE_CFG_TRACE_CB_IDX_BIT_MASK             ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_TRACE_CFG_TRACE_CB_IDX_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_TRACE_CFG_TRACE_CB_IDX_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_TRACE_CFG_TRACE_EN_BIT_LSB                  (0)
#define DBRP_TUR_DSCH_CH4_TRACE_CFG_TRACE_EN_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH4_TRACE_CFG_TRACE_EN_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_TRACE_CFG_TRACE_EN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_TRACE_CFG_TRACE_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_HSRM_CFG_PING_PONG_BIT_LSB                  (0)
#define DBRP_TUR_DSCH_CH4_HSRM_CFG_PING_PONG_BIT_WIDTH                (1)
#define DBRP_TUR_DSCH_CH4_HSRM_CFG_PING_PONG_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_HSRM_CFG_PING_PONG_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_HSRM_CFG_PING_PONG_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_TBCRC_STATUS_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH0_TBCRC_STATUS_BIT_WIDTH                      (1)
#define DBRP_TUR_DSCH_CH0_TBCRC_STATUS_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_TBCRC_STATUS_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_TBCRC_STATUS_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_LST_ADR_BIT_LSB                             (0)
#define DBRP_TUR_DSCH_CH0_LST_ADR_BIT_WIDTH                           (32)
#define DBRP_TUR_DSCH_CH0_LST_ADR_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_LST_ADR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_LST_ADR_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_HDCRC_RESULT_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH0_HDCRC_RESULT_BIT_WIDTH                      (9)
#define DBRP_TUR_DSCH_CH0_HDCRC_RESULT_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_HDCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_HDCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_LP0_STORE_DSCRM_BIT_LSB                     (16)
#define DBRP_TUR_DSCH_CH0_LP0_STORE_DSCRM_BIT_WIDTH                   (16)
#define DBRP_TUR_DSCH_CH0_LP0_STORE_DSCRM_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_LP0_STORE_DSCRM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_LP0_STORE_DSCRM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_LP0_STORE_WBUF_BIT_LSB                      (0)
#define DBRP_TUR_DSCH_CH0_LP0_STORE_WBUF_BIT_WIDTH                    (10)
#define DBRP_TUR_DSCH_CH0_LP0_STORE_WBUF_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_LP0_STORE_WBUF_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_LP0_STORE_WBUF_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_LP1_STORE_PCRC_BIT_LSB                      (0)
#define DBRP_TUR_DSCH_CH0_LP1_STORE_PCRC_BIT_WIDTH                    (24)
#define DBRP_TUR_DSCH_CH0_LP1_STORE_PCRC_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_LP1_STORE_PCRC_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_LP1_STORE_PCRC_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_LP2_STORE_CBUF_BIT_LSB                      (21)
#define DBRP_TUR_DSCH_CH0_LP2_STORE_CBUF_BIT_WIDTH                    (10)
#define DBRP_TUR_DSCH_CH0_LP2_STORE_CBUF_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_LP2_STORE_CBUF_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_LP2_STORE_CBUF_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_LP2_STORE_RDCNT_BIT_LSB                     (0)
#define DBRP_TUR_DSCH_CH0_LP2_STORE_RDCNT_BIT_WIDTH                   (21)
#define DBRP_TUR_DSCH_CH0_LP2_STORE_RDCNT_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_LP2_STORE_RDCNT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_LP2_STORE_RDCNT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_iCRC_RESULT_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH0_iCRC_RESULT_BIT_WIDTH                       (32)
#define DBRP_TUR_DSCH_CH0_iCRC_RESULT_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_iCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_iCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH0_ENERGY_ACCUMULATE_BIT_LSB                   (0)
#define DBRP_TUR_DSCH_CH0_ENERGY_ACCUMULATE_BIT_WIDTH                 (20)
#define DBRP_TUR_DSCH_CH0_ENERGY_ACCUMULATE_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_DSCH_CH0_ENERGY_ACCUMULATE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH0_ENERGY_ACCUMULATE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_TBCRC_STATUS_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH1_TBCRC_STATUS_BIT_WIDTH                      (1)
#define DBRP_TUR_DSCH_CH1_TBCRC_STATUS_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_TBCRC_STATUS_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_TBCRC_STATUS_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_LST_ADR_BIT_LSB                             (0)
#define DBRP_TUR_DSCH_CH1_LST_ADR_BIT_WIDTH                           (32)
#define DBRP_TUR_DSCH_CH1_LST_ADR_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_LST_ADR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_LST_ADR_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_HDCRC_RESULT_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH1_HDCRC_RESULT_BIT_WIDTH                      (9)
#define DBRP_TUR_DSCH_CH1_HDCRC_RESULT_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_HDCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_HDCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_LP0_STORE_DSCRM_BIT_LSB                     (16)
#define DBRP_TUR_DSCH_CH1_LP0_STORE_DSCRM_BIT_WIDTH                   (16)
#define DBRP_TUR_DSCH_CH1_LP0_STORE_DSCRM_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_LP0_STORE_DSCRM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_LP0_STORE_DSCRM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_LP0_STORE_WBUF_BIT_LSB                      (0)
#define DBRP_TUR_DSCH_CH1_LP0_STORE_WBUF_BIT_WIDTH                    (10)
#define DBRP_TUR_DSCH_CH1_LP0_STORE_WBUF_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_LP0_STORE_WBUF_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_LP0_STORE_WBUF_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_LP1_STORE_PCRC_BIT_LSB                      (0)
#define DBRP_TUR_DSCH_CH1_LP1_STORE_PCRC_BIT_WIDTH                    (24)
#define DBRP_TUR_DSCH_CH1_LP1_STORE_PCRC_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_LP1_STORE_PCRC_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_LP1_STORE_PCRC_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_LP2_STORE_CBUF_BIT_LSB                      (21)
#define DBRP_TUR_DSCH_CH1_LP2_STORE_CBUF_BIT_WIDTH                    (10)
#define DBRP_TUR_DSCH_CH1_LP2_STORE_CBUF_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_LP2_STORE_CBUF_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_LP2_STORE_CBUF_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_LP2_STORE_RDCNT_BIT_LSB                     (0)
#define DBRP_TUR_DSCH_CH1_LP2_STORE_RDCNT_BIT_WIDTH                   (21)
#define DBRP_TUR_DSCH_CH1_LP2_STORE_RDCNT_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_LP2_STORE_RDCNT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_LP2_STORE_RDCNT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_iCRC_RESULT_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH1_iCRC_RESULT_BIT_WIDTH                       (32)
#define DBRP_TUR_DSCH_CH1_iCRC_RESULT_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_iCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_iCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH1_ENERGY_ACCUMULATE_BIT_LSB                   (0)
#define DBRP_TUR_DSCH_CH1_ENERGY_ACCUMULATE_BIT_WIDTH                 (20)
#define DBRP_TUR_DSCH_CH1_ENERGY_ACCUMULATE_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_DSCH_CH1_ENERGY_ACCUMULATE_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH1_ENERGY_ACCUMULATE_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_TBCRC_STATUS_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH2_TBCRC_STATUS_BIT_WIDTH                      (1)
#define DBRP_TUR_DSCH_CH2_TBCRC_STATUS_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_TBCRC_STATUS_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_TBCRC_STATUS_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_LST_ADR_BIT_LSB                             (0)
#define DBRP_TUR_DSCH_CH2_LST_ADR_BIT_WIDTH                           (32)
#define DBRP_TUR_DSCH_CH2_LST_ADR_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_LST_ADR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_LST_ADR_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_HDCRC_RESULT_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH2_HDCRC_RESULT_BIT_WIDTH                      (9)
#define DBRP_TUR_DSCH_CH2_HDCRC_RESULT_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_HDCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_HDCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_LP0_STORE_DSCRM_BIT_LSB                     (16)
#define DBRP_TUR_DSCH_CH2_LP0_STORE_DSCRM_BIT_WIDTH                   (16)
#define DBRP_TUR_DSCH_CH2_LP0_STORE_DSCRM_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_LP0_STORE_DSCRM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_LP0_STORE_DSCRM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_LP0_STORE_WBUF_BIT_LSB                      (0)
#define DBRP_TUR_DSCH_CH2_LP0_STORE_WBUF_BIT_WIDTH                    (10)
#define DBRP_TUR_DSCH_CH2_LP0_STORE_WBUF_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_LP0_STORE_WBUF_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_LP0_STORE_WBUF_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_LP1_STORE_PCRC_BIT_LSB                      (0)
#define DBRP_TUR_DSCH_CH2_LP1_STORE_PCRC_BIT_WIDTH                    (24)
#define DBRP_TUR_DSCH_CH2_LP1_STORE_PCRC_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_LP1_STORE_PCRC_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_LP1_STORE_PCRC_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_LP2_STORE_CBUF_BIT_LSB                      (21)
#define DBRP_TUR_DSCH_CH2_LP2_STORE_CBUF_BIT_WIDTH                    (10)
#define DBRP_TUR_DSCH_CH2_LP2_STORE_CBUF_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_LP2_STORE_CBUF_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_LP2_STORE_CBUF_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_LP2_STORE_RDCNT_BIT_LSB                     (0)
#define DBRP_TUR_DSCH_CH2_LP2_STORE_RDCNT_BIT_WIDTH                   (21)
#define DBRP_TUR_DSCH_CH2_LP2_STORE_RDCNT_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_LP2_STORE_RDCNT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_LP2_STORE_RDCNT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH2_iCRC_RESULT_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH2_iCRC_RESULT_BIT_WIDTH                       (32)
#define DBRP_TUR_DSCH_CH2_iCRC_RESULT_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH2_iCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH2_iCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_TBCRC_STATUS_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH3_TBCRC_STATUS_BIT_WIDTH                      (1)
#define DBRP_TUR_DSCH_CH3_TBCRC_STATUS_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_TBCRC_STATUS_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_TBCRC_STATUS_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_LST_ADR_BIT_LSB                             (0)
#define DBRP_TUR_DSCH_CH3_LST_ADR_BIT_WIDTH                           (32)
#define DBRP_TUR_DSCH_CH3_LST_ADR_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_LST_ADR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_LST_ADR_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_HDCRC_RESULT_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH3_HDCRC_RESULT_BIT_WIDTH                      (9)
#define DBRP_TUR_DSCH_CH3_HDCRC_RESULT_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_HDCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_HDCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_LP0_STORE_DSCRM_BIT_LSB                     (16)
#define DBRP_TUR_DSCH_CH3_LP0_STORE_DSCRM_BIT_WIDTH                   (16)
#define DBRP_TUR_DSCH_CH3_LP0_STORE_DSCRM_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_LP0_STORE_DSCRM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_LP0_STORE_DSCRM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_LP0_STORE_WBUF_BIT_LSB                      (0)
#define DBRP_TUR_DSCH_CH3_LP0_STORE_WBUF_BIT_WIDTH                    (10)
#define DBRP_TUR_DSCH_CH3_LP0_STORE_WBUF_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_LP0_STORE_WBUF_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_LP0_STORE_WBUF_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_LP1_STORE_PCRC_BIT_LSB                      (0)
#define DBRP_TUR_DSCH_CH3_LP1_STORE_PCRC_BIT_WIDTH                    (24)
#define DBRP_TUR_DSCH_CH3_LP1_STORE_PCRC_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_LP1_STORE_PCRC_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_LP1_STORE_PCRC_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_LP2_STORE_CBUF_BIT_LSB                      (21)
#define DBRP_TUR_DSCH_CH3_LP2_STORE_CBUF_BIT_WIDTH                    (10)
#define DBRP_TUR_DSCH_CH3_LP2_STORE_CBUF_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_LP2_STORE_CBUF_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_LP2_STORE_CBUF_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_LP2_STORE_RDCNT_BIT_LSB                     (0)
#define DBRP_TUR_DSCH_CH3_LP2_STORE_RDCNT_BIT_WIDTH                   (21)
#define DBRP_TUR_DSCH_CH3_LP2_STORE_RDCNT_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_LP2_STORE_RDCNT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_LP2_STORE_RDCNT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH3_iCRC_RESULT_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH3_iCRC_RESULT_BIT_WIDTH                       (32)
#define DBRP_TUR_DSCH_CH3_iCRC_RESULT_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH3_iCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH3_iCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_TBCRC_STATUS_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH4_TBCRC_STATUS_BIT_WIDTH                      (1)
#define DBRP_TUR_DSCH_CH4_TBCRC_STATUS_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_TBCRC_STATUS_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_TBCRC_STATUS_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_LST_ADR_BIT_LSB                             (0)
#define DBRP_TUR_DSCH_CH4_LST_ADR_BIT_WIDTH                           (32)
#define DBRP_TUR_DSCH_CH4_LST_ADR_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_LST_ADR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_LST_ADR_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_HDCRC_RESULT_BIT_LSB                        (0)
#define DBRP_TUR_DSCH_CH4_HDCRC_RESULT_BIT_WIDTH                      (9)
#define DBRP_TUR_DSCH_CH4_HDCRC_RESULT_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_HDCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_HDCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_LP0_STORE_DSCRM_BIT_LSB                     (16)
#define DBRP_TUR_DSCH_CH4_LP0_STORE_DSCRM_BIT_WIDTH                   (16)
#define DBRP_TUR_DSCH_CH4_LP0_STORE_DSCRM_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_LP0_STORE_DSCRM_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_LP0_STORE_DSCRM_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_LP0_STORE_WBUF_BIT_LSB                      (0)
#define DBRP_TUR_DSCH_CH4_LP0_STORE_WBUF_BIT_WIDTH                    (10)
#define DBRP_TUR_DSCH_CH4_LP0_STORE_WBUF_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_LP0_STORE_WBUF_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_LP0_STORE_WBUF_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_LP1_STORE_PCRC_BIT_LSB                      (0)
#define DBRP_TUR_DSCH_CH4_LP1_STORE_PCRC_BIT_WIDTH                    (24)
#define DBRP_TUR_DSCH_CH4_LP1_STORE_PCRC_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_LP1_STORE_PCRC_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_LP1_STORE_PCRC_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_LP2_STORE_CBUF_BIT_LSB                      (21)
#define DBRP_TUR_DSCH_CH4_LP2_STORE_CBUF_BIT_WIDTH                    (10)
#define DBRP_TUR_DSCH_CH4_LP2_STORE_CBUF_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_LP2_STORE_CBUF_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_LP2_STORE_CBUF_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_LP2_STORE_RDCNT_BIT_LSB                     (0)
#define DBRP_TUR_DSCH_CH4_LP2_STORE_RDCNT_BIT_WIDTH                   (21)
#define DBRP_TUR_DSCH_CH4_LP2_STORE_RDCNT_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_LP2_STORE_RDCNT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_LP2_STORE_RDCNT_BIT_LSB) )

#define DBRP_TUR_DSCH_CH4_iCRC_RESULT_BIT_LSB                         (0)
#define DBRP_TUR_DSCH_CH4_iCRC_RESULT_BIT_WIDTH                       (32)
#define DBRP_TUR_DSCH_CH4_iCRC_RESULT_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_DSCH_CH4_iCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_DSCH_CH4_iCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_BUSY_DSCH_BIT_LSB                                    (1)
#define DBRP_TUR_BUSY_DSCH_BIT_WIDTH                                  (1)
#define DBRP_TUR_BUSY_DSCH_BIT_MASK                                   ((UINT32) (((1<<DBRP_TUR_BUSY_DSCH_BIT_WIDTH)-1) << DBRP_TUR_BUSY_DSCH_BIT_LSB) )

#define DBRP_TUR_LTE_TRG_START_BIT_LSB                                (0)
#define DBRP_TUR_LTE_TRG_START_BIT_WIDTH                              (1)
#define DBRP_TUR_LTE_TRG_START_BIT_MASK                               ((UINT32) (((1<<DBRP_TUR_LTE_TRG_START_BIT_WIDTH)-1) << DBRP_TUR_LTE_TRG_START_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_SW_IRQ_TRG_BIT_LSB                          (13)
#define DBRP_TUR_LTE_DONE_SW_IRQ_TRG_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_SW_IRQ_TRG_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_SW_IRQ_TRG_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_SW_IRQ_TRG_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_SW_IRQ_STATUS_BIT_LSB                       (12)
#define DBRP_TUR_LTE_DONE_SW_IRQ_STATUS_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_DONE_SW_IRQ_STATUS_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_DONE_SW_IRQ_STATUS_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_SW_IRQ_STATUS_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC2_STATUS_BIT_LSB                          (8)
#define DBRP_TUR_LTE_DONE_CC2_STATUS_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC2_STATUS_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC2_STATUS_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC2_STATUS_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC1_STATUS_BIT_LSB                          (4)
#define DBRP_TUR_LTE_DONE_CC1_STATUS_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC1_STATUS_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC1_STATUS_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC1_STATUS_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC0_STATUS_BIT_LSB                          (0)
#define DBRP_TUR_LTE_DONE_CC0_STATUS_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC0_STATUS_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC0_STATUS_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC0_STATUS_BIT_LSB) )

#define DBRP_TUR_LTE_LATCH_STATUS_BIT_LSB                             (0)
#define DBRP_TUR_LTE_LATCH_STATUS_BIT_WIDTH                           (1)
#define DBRP_TUR_LTE_LATCH_STATUS_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_LTE_LATCH_STATUS_BIT_WIDTH)-1) << DBRP_TUR_LTE_LATCH_STATUS_BIT_LSB) )

#define DBRP_TUR_LTE_FRM_FRAME_IDX_BIT_LSB                            (16)
#define DBRP_TUR_LTE_FRM_FRAME_IDX_BIT_WIDTH                          (10)
#define DBRP_TUR_LTE_FRM_FRAME_IDX_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_LTE_FRM_FRAME_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_FRM_FRAME_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_FRM_SIM_IDX_BIT_LSB                              (4)
#define DBRP_TUR_LTE_FRM_SIM_IDX_BIT_WIDTH                            (1)
#define DBRP_TUR_LTE_FRM_SIM_IDX_BIT_MASK                             ((UINT32) (((1<<DBRP_TUR_LTE_FRM_SIM_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_FRM_SIM_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_FRM_SUBF_IDX_BIT_LSB                             (0)
#define DBRP_TUR_LTE_FRM_SUBF_IDX_BIT_WIDTH                           (4)
#define DBRP_TUR_LTE_FRM_SUBF_IDX_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_LTE_FRM_SUBF_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_FRM_SUBF_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_SI_PI_PI_TID_BIT_LSB                             (22)
#define DBRP_TUR_LTE_SI_PI_PI_TID_BIT_WIDTH                           (10)
#define DBRP_TUR_LTE_SI_PI_PI_TID_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_LTE_SI_PI_PI_TID_BIT_WIDTH)-1) << DBRP_TUR_LTE_SI_PI_PI_TID_BIT_LSB) )

#define DBRP_TUR_LTE_SI_PI_SI_SUBF_IDX_BIT_LSB                        (16)
#define DBRP_TUR_LTE_SI_PI_SI_SUBF_IDX_BIT_WIDTH                      (2)
#define DBRP_TUR_LTE_SI_PI_SI_SUBF_IDX_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_LTE_SI_PI_SI_SUBF_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_SI_PI_SI_SUBF_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_SI_PI_SI_TID_BIT_LSB                             (6)
#define DBRP_TUR_LTE_SI_PI_SI_TID_BIT_WIDTH                           (10)
#define DBRP_TUR_LTE_SI_PI_SI_TID_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_LTE_SI_PI_SI_TID_BIT_WIDTH)-1) << DBRP_TUR_LTE_SI_PI_SI_TID_BIT_LSB) )

#define DBRP_TUR_LTE_SI_PI_SI_TYPE_BIT_LSB                            (0)
#define DBRP_TUR_LTE_SI_PI_SI_TYPE_BIT_WIDTH                          (6)
#define DBRP_TUR_LTE_SI_PI_SI_TYPE_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_LTE_SI_PI_SI_TYPE_BIT_WIDTH)-1) << DBRP_TUR_LTE_SI_PI_SI_TYPE_BIT_LSB) )

#define DBRP_TUR_LTE_CBNUM_BIT_ORDER_BIG_BIT_LSB                      (4)
#define DBRP_TUR_LTE_CBNUM_BIT_ORDER_BIG_BIT_WIDTH                    (1)
#define DBRP_TUR_LTE_CBNUM_BIT_ORDER_BIG_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_LTE_CBNUM_BIT_ORDER_BIG_BIT_WIDTH)-1) << DBRP_TUR_LTE_CBNUM_BIT_ORDER_BIG_BIT_LSB) )

#define DBRP_TUR_LTE_CBNUM_ELLR_CTRL_BIT_LSB                          (0)
#define DBRP_TUR_LTE_CBNUM_ELLR_CTRL_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_CBNUM_ELLR_CTRL_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_CBNUM_ELLR_CTRL_BIT_WIDTH)-1) << DBRP_TUR_LTE_CBNUM_ELLR_CTRL_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_ITER_COM_MIN_BIT_LSB                         (24)
#define DBRP_TUR_LTE_CH0_ITER_COM_MIN_BIT_WIDTH                       (6)
#define DBRP_TUR_LTE_CH0_ITER_COM_MIN_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_LTE_CH0_ITER_COM_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_ITER_COM_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_ITER_SECOND_ELLR_DUMP_BIT_LSB                (20)
#define DBRP_TUR_LTE_CH0_ITER_SECOND_ELLR_DUMP_BIT_WIDTH              (1)
#define DBRP_TUR_LTE_CH0_ITER_SECOND_ELLR_DUMP_BIT_MASK               ((UINT32) (((1<<DBRP_TUR_LTE_CH0_ITER_SECOND_ELLR_DUMP_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_ITER_SECOND_ELLR_DUMP_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_ITER_SECOND_MAX_BIT_LSB                      (12)
#define DBRP_TUR_LTE_CH0_ITER_SECOND_MAX_BIT_WIDTH                    (6)
#define DBRP_TUR_LTE_CH0_ITER_SECOND_MAX_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_LTE_CH0_ITER_SECOND_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_ITER_SECOND_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_ITER_FIRST_ELLR_DUMP_BIT_LSB                 (8)
#define DBRP_TUR_LTE_CH0_ITER_FIRST_ELLR_DUMP_BIT_WIDTH               (1)
#define DBRP_TUR_LTE_CH0_ITER_FIRST_ELLR_DUMP_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CH0_ITER_FIRST_ELLR_DUMP_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_ITER_FIRST_ELLR_DUMP_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_ITER_FIRST_MAX_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CH0_ITER_FIRST_MAX_BIT_WIDTH                     (6)
#define DBRP_TUR_LTE_CH0_ITER_FIRST_MAX_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CH0_ITER_FIRST_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_ITER_FIRST_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_MAC_INFO_DOB_DISABLE_BIT_LSB                 (24)
#define DBRP_TUR_LTE_CH0_MAC_INFO_DOB_DISABLE_BIT_WIDTH               (1)
#define DBRP_TUR_LTE_CH0_MAC_INFO_DOB_DISABLE_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CH0_MAC_INFO_DOB_DISABLE_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_MAC_INFO_DOB_DISABLE_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_MAC_INFO_HARQ_ID_BIT_LSB                     (16)
#define DBRP_TUR_LTE_CH0_MAC_INFO_HARQ_ID_BIT_WIDTH                   (6)
#define DBRP_TUR_LTE_CH0_MAC_INFO_HARQ_ID_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_LTE_CH0_MAC_INFO_HARQ_ID_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_MAC_INFO_HARQ_ID_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_MAC_INFO_CW_SWITCH_BIT_LSB                   (8)
#define DBRP_TUR_LTE_CH0_MAC_INFO_CW_SWITCH_BIT_WIDTH                 (1)
#define DBRP_TUR_LTE_CH0_MAC_INFO_CW_SWITCH_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH0_MAC_INFO_CW_SWITCH_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_MAC_INFO_CW_SWITCH_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_MAC_INFO_TCRNTI_BIT_LSB                      (4)
#define DBRP_TUR_LTE_CH0_MAC_INFO_TCRNTI_BIT_WIDTH                    (1)
#define DBRP_TUR_LTE_CH0_MAC_INFO_TCRNTI_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_LTE_CH0_MAC_INFO_TCRNTI_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_MAC_INFO_TCRNTI_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_MAC_INFO_START_IDX_BIT_LSB                   (0)
#define DBRP_TUR_LTE_CH0_MAC_INFO_START_IDX_BIT_WIDTH                 (4)
#define DBRP_TUR_LTE_CH0_MAC_INFO_START_IDX_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH0_MAC_INFO_START_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_MAC_INFO_START_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_INI_PCRC_BIT_LSB                             (0)
#define DBRP_TUR_LTE_CH0_INI_PCRC_BIT_WIDTH                           (24)
#define DBRP_TUR_LTE_CH0_INI_PCRC_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_LTE_CH0_INI_PCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_INI_PCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_TBINFO1_TBSIZE_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CH0_TBINFO1_TBSIZE_BIT_WIDTH                     (17)
#define DBRP_TUR_LTE_CH0_TBINFO1_TBSIZE_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CH0_TBINFO1_TBSIZE_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_TBINFO1_TBSIZE_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_EMI_INFO0_TRACE_CB_IDX_BIT_LSB               (20)
#define DBRP_TUR_LTE_CH0_EMI_INFO0_TRACE_CB_IDX_BIT_WIDTH             (4)
#define DBRP_TUR_LTE_CH0_EMI_INFO0_TRACE_CB_IDX_BIT_MASK              ((UINT32) (((1<<DBRP_TUR_LTE_CH0_EMI_INFO0_TRACE_CB_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_EMI_INFO0_TRACE_CB_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_EMI_INFO0_TRACE_EN_BIT_LSB                   (16)
#define DBRP_TUR_LTE_CH0_EMI_INFO0_TRACE_EN_BIT_WIDTH                 (1)
#define DBRP_TUR_LTE_CH0_EMI_INFO0_TRACE_EN_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH0_EMI_INFO0_TRACE_EN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_EMI_INFO0_TRACE_EN_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_EMI_INFO0_EMI_EN_BIT_LSB                     (0)
#define DBRP_TUR_LTE_CH0_EMI_INFO0_EMI_EN_BIT_WIDTH                   (1)
#define DBRP_TUR_LTE_CH0_EMI_INFO0_EMI_EN_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_LTE_CH0_EMI_INFO0_EMI_EN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_EMI_INFO0_EMI_EN_BIT_LSB) )

#define DBRP_TUR_LTE_CH0_EMI_INFO1_ADR_BIT_LSB                        (0)
#define DBRP_TUR_LTE_CH0_EMI_INFO1_ADR_BIT_WIDTH                      (32)
#define DBRP_TUR_LTE_CH0_EMI_INFO1_ADR_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_LTE_CH0_EMI_INFO1_ADR_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH0_EMI_INFO1_ADR_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_ITER_COM_MIN_BIT_LSB                         (24)
#define DBRP_TUR_LTE_CH1_ITER_COM_MIN_BIT_WIDTH                       (6)
#define DBRP_TUR_LTE_CH1_ITER_COM_MIN_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_LTE_CH1_ITER_COM_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_ITER_COM_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_ITER_SECOND_ELLR_DUMP_BIT_LSB                (20)
#define DBRP_TUR_LTE_CH1_ITER_SECOND_ELLR_DUMP_BIT_WIDTH              (1)
#define DBRP_TUR_LTE_CH1_ITER_SECOND_ELLR_DUMP_BIT_MASK               ((UINT32) (((1<<DBRP_TUR_LTE_CH1_ITER_SECOND_ELLR_DUMP_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_ITER_SECOND_ELLR_DUMP_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_ITER_SECOND_MAX_BIT_LSB                      (12)
#define DBRP_TUR_LTE_CH1_ITER_SECOND_MAX_BIT_WIDTH                    (6)
#define DBRP_TUR_LTE_CH1_ITER_SECOND_MAX_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_LTE_CH1_ITER_SECOND_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_ITER_SECOND_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_ITER_FIRST_ELLR_DUMP_BIT_LSB                 (8)
#define DBRP_TUR_LTE_CH1_ITER_FIRST_ELLR_DUMP_BIT_WIDTH               (1)
#define DBRP_TUR_LTE_CH1_ITER_FIRST_ELLR_DUMP_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CH1_ITER_FIRST_ELLR_DUMP_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_ITER_FIRST_ELLR_DUMP_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_ITER_FIRST_MAX_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CH1_ITER_FIRST_MAX_BIT_WIDTH                     (6)
#define DBRP_TUR_LTE_CH1_ITER_FIRST_MAX_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CH1_ITER_FIRST_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_ITER_FIRST_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_MAC_INFO_DOB_DISABLE_BIT_LSB                 (24)
#define DBRP_TUR_LTE_CH1_MAC_INFO_DOB_DISABLE_BIT_WIDTH               (1)
#define DBRP_TUR_LTE_CH1_MAC_INFO_DOB_DISABLE_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CH1_MAC_INFO_DOB_DISABLE_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_MAC_INFO_DOB_DISABLE_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_MAC_INFO_HARQ_ID_BIT_LSB                     (16)
#define DBRP_TUR_LTE_CH1_MAC_INFO_HARQ_ID_BIT_WIDTH                   (6)
#define DBRP_TUR_LTE_CH1_MAC_INFO_HARQ_ID_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_LTE_CH1_MAC_INFO_HARQ_ID_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_MAC_INFO_HARQ_ID_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_MAC_INFO_CW_SWITCH_BIT_LSB                   (8)
#define DBRP_TUR_LTE_CH1_MAC_INFO_CW_SWITCH_BIT_WIDTH                 (1)
#define DBRP_TUR_LTE_CH1_MAC_INFO_CW_SWITCH_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH1_MAC_INFO_CW_SWITCH_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_MAC_INFO_CW_SWITCH_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_MAC_INFO_TCRNTI_BIT_LSB                      (4)
#define DBRP_TUR_LTE_CH1_MAC_INFO_TCRNTI_BIT_WIDTH                    (1)
#define DBRP_TUR_LTE_CH1_MAC_INFO_TCRNTI_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_LTE_CH1_MAC_INFO_TCRNTI_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_MAC_INFO_TCRNTI_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_MAC_INFO_START_IDX_BIT_LSB                   (0)
#define DBRP_TUR_LTE_CH1_MAC_INFO_START_IDX_BIT_WIDTH                 (4)
#define DBRP_TUR_LTE_CH1_MAC_INFO_START_IDX_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH1_MAC_INFO_START_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_MAC_INFO_START_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_INI_PCRC_BIT_LSB                             (0)
#define DBRP_TUR_LTE_CH1_INI_PCRC_BIT_WIDTH                           (24)
#define DBRP_TUR_LTE_CH1_INI_PCRC_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_LTE_CH1_INI_PCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_INI_PCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_TBINFO1_TBSIZE_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CH1_TBINFO1_TBSIZE_BIT_WIDTH                     (17)
#define DBRP_TUR_LTE_CH1_TBINFO1_TBSIZE_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CH1_TBINFO1_TBSIZE_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_TBINFO1_TBSIZE_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_EMI_INFO0_TRACE_CB_IDX_BIT_LSB               (20)
#define DBRP_TUR_LTE_CH1_EMI_INFO0_TRACE_CB_IDX_BIT_WIDTH             (4)
#define DBRP_TUR_LTE_CH1_EMI_INFO0_TRACE_CB_IDX_BIT_MASK              ((UINT32) (((1<<DBRP_TUR_LTE_CH1_EMI_INFO0_TRACE_CB_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_EMI_INFO0_TRACE_CB_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_EMI_INFO0_TRACE_EN_BIT_LSB                   (16)
#define DBRP_TUR_LTE_CH1_EMI_INFO0_TRACE_EN_BIT_WIDTH                 (1)
#define DBRP_TUR_LTE_CH1_EMI_INFO0_TRACE_EN_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH1_EMI_INFO0_TRACE_EN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_EMI_INFO0_TRACE_EN_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_EMI_INFO0_EMI_EN_BIT_LSB                     (0)
#define DBRP_TUR_LTE_CH1_EMI_INFO0_EMI_EN_BIT_WIDTH                   (1)
#define DBRP_TUR_LTE_CH1_EMI_INFO0_EMI_EN_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_LTE_CH1_EMI_INFO0_EMI_EN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_EMI_INFO0_EMI_EN_BIT_LSB) )

#define DBRP_TUR_LTE_CH1_EMI_INFO1_ADR_BIT_LSB                        (0)
#define DBRP_TUR_LTE_CH1_EMI_INFO1_ADR_BIT_WIDTH                      (32)
#define DBRP_TUR_LTE_CH1_EMI_INFO1_ADR_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_LTE_CH1_EMI_INFO1_ADR_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH1_EMI_INFO1_ADR_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_ITER_COM_MIN_BIT_LSB                         (24)
#define DBRP_TUR_LTE_CH2_ITER_COM_MIN_BIT_WIDTH                       (6)
#define DBRP_TUR_LTE_CH2_ITER_COM_MIN_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_LTE_CH2_ITER_COM_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_ITER_COM_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_ITER_SECOND_ELLR_DUMP_BIT_LSB                (20)
#define DBRP_TUR_LTE_CH2_ITER_SECOND_ELLR_DUMP_BIT_WIDTH              (1)
#define DBRP_TUR_LTE_CH2_ITER_SECOND_ELLR_DUMP_BIT_MASK               ((UINT32) (((1<<DBRP_TUR_LTE_CH2_ITER_SECOND_ELLR_DUMP_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_ITER_SECOND_ELLR_DUMP_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_ITER_SECOND_MAX_BIT_LSB                      (12)
#define DBRP_TUR_LTE_CH2_ITER_SECOND_MAX_BIT_WIDTH                    (6)
#define DBRP_TUR_LTE_CH2_ITER_SECOND_MAX_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_LTE_CH2_ITER_SECOND_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_ITER_SECOND_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_ITER_FIRST_ELLR_DUMP_BIT_LSB                 (8)
#define DBRP_TUR_LTE_CH2_ITER_FIRST_ELLR_DUMP_BIT_WIDTH               (1)
#define DBRP_TUR_LTE_CH2_ITER_FIRST_ELLR_DUMP_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CH2_ITER_FIRST_ELLR_DUMP_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_ITER_FIRST_ELLR_DUMP_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_ITER_FIRST_MAX_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CH2_ITER_FIRST_MAX_BIT_WIDTH                     (6)
#define DBRP_TUR_LTE_CH2_ITER_FIRST_MAX_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CH2_ITER_FIRST_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_ITER_FIRST_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_MAC_INFO_DOB_DISABLE_BIT_LSB                 (24)
#define DBRP_TUR_LTE_CH2_MAC_INFO_DOB_DISABLE_BIT_WIDTH               (1)
#define DBRP_TUR_LTE_CH2_MAC_INFO_DOB_DISABLE_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CH2_MAC_INFO_DOB_DISABLE_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_MAC_INFO_DOB_DISABLE_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_MAC_INFO_HARQ_ID_BIT_LSB                     (16)
#define DBRP_TUR_LTE_CH2_MAC_INFO_HARQ_ID_BIT_WIDTH                   (6)
#define DBRP_TUR_LTE_CH2_MAC_INFO_HARQ_ID_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_LTE_CH2_MAC_INFO_HARQ_ID_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_MAC_INFO_HARQ_ID_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_MAC_INFO_CW_SWITCH_BIT_LSB                   (8)
#define DBRP_TUR_LTE_CH2_MAC_INFO_CW_SWITCH_BIT_WIDTH                 (1)
#define DBRP_TUR_LTE_CH2_MAC_INFO_CW_SWITCH_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH2_MAC_INFO_CW_SWITCH_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_MAC_INFO_CW_SWITCH_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_MAC_INFO_TCRNTI_BIT_LSB                      (4)
#define DBRP_TUR_LTE_CH2_MAC_INFO_TCRNTI_BIT_WIDTH                    (1)
#define DBRP_TUR_LTE_CH2_MAC_INFO_TCRNTI_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_LTE_CH2_MAC_INFO_TCRNTI_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_MAC_INFO_TCRNTI_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_MAC_INFO_START_IDX_BIT_LSB                   (0)
#define DBRP_TUR_LTE_CH2_MAC_INFO_START_IDX_BIT_WIDTH                 (4)
#define DBRP_TUR_LTE_CH2_MAC_INFO_START_IDX_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH2_MAC_INFO_START_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_MAC_INFO_START_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_INI_PCRC_BIT_LSB                             (0)
#define DBRP_TUR_LTE_CH2_INI_PCRC_BIT_WIDTH                           (24)
#define DBRP_TUR_LTE_CH2_INI_PCRC_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_LTE_CH2_INI_PCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_INI_PCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_TBINFO1_TBSIZE_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CH2_TBINFO1_TBSIZE_BIT_WIDTH                     (17)
#define DBRP_TUR_LTE_CH2_TBINFO1_TBSIZE_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CH2_TBINFO1_TBSIZE_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_TBINFO1_TBSIZE_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_EMI_INFO0_TRACE_CB_IDX_BIT_LSB               (20)
#define DBRP_TUR_LTE_CH2_EMI_INFO0_TRACE_CB_IDX_BIT_WIDTH             (4)
#define DBRP_TUR_LTE_CH2_EMI_INFO0_TRACE_CB_IDX_BIT_MASK              ((UINT32) (((1<<DBRP_TUR_LTE_CH2_EMI_INFO0_TRACE_CB_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_EMI_INFO0_TRACE_CB_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_EMI_INFO0_TRACE_EN_BIT_LSB                   (16)
#define DBRP_TUR_LTE_CH2_EMI_INFO0_TRACE_EN_BIT_WIDTH                 (1)
#define DBRP_TUR_LTE_CH2_EMI_INFO0_TRACE_EN_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH2_EMI_INFO0_TRACE_EN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_EMI_INFO0_TRACE_EN_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_EMI_INFO0_EMI_EN_BIT_LSB                     (0)
#define DBRP_TUR_LTE_CH2_EMI_INFO0_EMI_EN_BIT_WIDTH                   (1)
#define DBRP_TUR_LTE_CH2_EMI_INFO0_EMI_EN_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_LTE_CH2_EMI_INFO0_EMI_EN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_EMI_INFO0_EMI_EN_BIT_LSB) )

#define DBRP_TUR_LTE_CH2_EMI_INFO1_ADR_BIT_LSB                        (0)
#define DBRP_TUR_LTE_CH2_EMI_INFO1_ADR_BIT_WIDTH                      (32)
#define DBRP_TUR_LTE_CH2_EMI_INFO1_ADR_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_LTE_CH2_EMI_INFO1_ADR_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH2_EMI_INFO1_ADR_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_ITER_COM_MIN_BIT_LSB                         (24)
#define DBRP_TUR_LTE_CH3_ITER_COM_MIN_BIT_WIDTH                       (6)
#define DBRP_TUR_LTE_CH3_ITER_COM_MIN_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_LTE_CH3_ITER_COM_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_ITER_COM_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_ITER_SECOND_ELLR_DUMP_BIT_LSB                (20)
#define DBRP_TUR_LTE_CH3_ITER_SECOND_ELLR_DUMP_BIT_WIDTH              (1)
#define DBRP_TUR_LTE_CH3_ITER_SECOND_ELLR_DUMP_BIT_MASK               ((UINT32) (((1<<DBRP_TUR_LTE_CH3_ITER_SECOND_ELLR_DUMP_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_ITER_SECOND_ELLR_DUMP_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_ITER_SECOND_MAX_BIT_LSB                      (12)
#define DBRP_TUR_LTE_CH3_ITER_SECOND_MAX_BIT_WIDTH                    (6)
#define DBRP_TUR_LTE_CH3_ITER_SECOND_MAX_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_LTE_CH3_ITER_SECOND_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_ITER_SECOND_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_ITER_FIRST_ELLR_DUMP_BIT_LSB                 (8)
#define DBRP_TUR_LTE_CH3_ITER_FIRST_ELLR_DUMP_BIT_WIDTH               (1)
#define DBRP_TUR_LTE_CH3_ITER_FIRST_ELLR_DUMP_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CH3_ITER_FIRST_ELLR_DUMP_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_ITER_FIRST_ELLR_DUMP_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_ITER_FIRST_MAX_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CH3_ITER_FIRST_MAX_BIT_WIDTH                     (6)
#define DBRP_TUR_LTE_CH3_ITER_FIRST_MAX_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CH3_ITER_FIRST_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_ITER_FIRST_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_MAC_INFO_DOB_DISABLE_BIT_LSB                 (24)
#define DBRP_TUR_LTE_CH3_MAC_INFO_DOB_DISABLE_BIT_WIDTH               (1)
#define DBRP_TUR_LTE_CH3_MAC_INFO_DOB_DISABLE_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CH3_MAC_INFO_DOB_DISABLE_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_MAC_INFO_DOB_DISABLE_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_MAC_INFO_HARQ_ID_BIT_LSB                     (16)
#define DBRP_TUR_LTE_CH3_MAC_INFO_HARQ_ID_BIT_WIDTH                   (6)
#define DBRP_TUR_LTE_CH3_MAC_INFO_HARQ_ID_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_LTE_CH3_MAC_INFO_HARQ_ID_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_MAC_INFO_HARQ_ID_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_MAC_INFO_CW_SWITCH_BIT_LSB                   (8)
#define DBRP_TUR_LTE_CH3_MAC_INFO_CW_SWITCH_BIT_WIDTH                 (1)
#define DBRP_TUR_LTE_CH3_MAC_INFO_CW_SWITCH_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH3_MAC_INFO_CW_SWITCH_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_MAC_INFO_CW_SWITCH_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_MAC_INFO_TCRNTI_BIT_LSB                      (4)
#define DBRP_TUR_LTE_CH3_MAC_INFO_TCRNTI_BIT_WIDTH                    (1)
#define DBRP_TUR_LTE_CH3_MAC_INFO_TCRNTI_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_LTE_CH3_MAC_INFO_TCRNTI_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_MAC_INFO_TCRNTI_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_MAC_INFO_START_IDX_BIT_LSB                   (0)
#define DBRP_TUR_LTE_CH3_MAC_INFO_START_IDX_BIT_WIDTH                 (4)
#define DBRP_TUR_LTE_CH3_MAC_INFO_START_IDX_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH3_MAC_INFO_START_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_MAC_INFO_START_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_INI_PCRC_BIT_LSB                             (0)
#define DBRP_TUR_LTE_CH3_INI_PCRC_BIT_WIDTH                           (24)
#define DBRP_TUR_LTE_CH3_INI_PCRC_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_LTE_CH3_INI_PCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_INI_PCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_TBINFO1_TBSIZE_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CH3_TBINFO1_TBSIZE_BIT_WIDTH                     (17)
#define DBRP_TUR_LTE_CH3_TBINFO1_TBSIZE_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CH3_TBINFO1_TBSIZE_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_TBINFO1_TBSIZE_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_EMI_INFO0_TRACE_CB_IDX_BIT_LSB               (20)
#define DBRP_TUR_LTE_CH3_EMI_INFO0_TRACE_CB_IDX_BIT_WIDTH             (4)
#define DBRP_TUR_LTE_CH3_EMI_INFO0_TRACE_CB_IDX_BIT_MASK              ((UINT32) (((1<<DBRP_TUR_LTE_CH3_EMI_INFO0_TRACE_CB_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_EMI_INFO0_TRACE_CB_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_EMI_INFO0_TRACE_EN_BIT_LSB                   (16)
#define DBRP_TUR_LTE_CH3_EMI_INFO0_TRACE_EN_BIT_WIDTH                 (1)
#define DBRP_TUR_LTE_CH3_EMI_INFO0_TRACE_EN_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH3_EMI_INFO0_TRACE_EN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_EMI_INFO0_TRACE_EN_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_EMI_INFO0_EMI_EN_BIT_LSB                     (0)
#define DBRP_TUR_LTE_CH3_EMI_INFO0_EMI_EN_BIT_WIDTH                   (1)
#define DBRP_TUR_LTE_CH3_EMI_INFO0_EMI_EN_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_LTE_CH3_EMI_INFO0_EMI_EN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_EMI_INFO0_EMI_EN_BIT_LSB) )

#define DBRP_TUR_LTE_CH3_EMI_INFO1_ADR_BIT_LSB                        (0)
#define DBRP_TUR_LTE_CH3_EMI_INFO1_ADR_BIT_WIDTH                      (32)
#define DBRP_TUR_LTE_CH3_EMI_INFO1_ADR_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_LTE_CH3_EMI_INFO1_ADR_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH3_EMI_INFO1_ADR_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_ITER_COM_MIN_BIT_LSB                         (24)
#define DBRP_TUR_LTE_CH4_ITER_COM_MIN_BIT_WIDTH                       (6)
#define DBRP_TUR_LTE_CH4_ITER_COM_MIN_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_LTE_CH4_ITER_COM_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_ITER_COM_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_ITER_SECOND_ELLR_DUMP_BIT_LSB                (20)
#define DBRP_TUR_LTE_CH4_ITER_SECOND_ELLR_DUMP_BIT_WIDTH              (1)
#define DBRP_TUR_LTE_CH4_ITER_SECOND_ELLR_DUMP_BIT_MASK               ((UINT32) (((1<<DBRP_TUR_LTE_CH4_ITER_SECOND_ELLR_DUMP_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_ITER_SECOND_ELLR_DUMP_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_ITER_SECOND_MAX_BIT_LSB                      (12)
#define DBRP_TUR_LTE_CH4_ITER_SECOND_MAX_BIT_WIDTH                    (6)
#define DBRP_TUR_LTE_CH4_ITER_SECOND_MAX_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_LTE_CH4_ITER_SECOND_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_ITER_SECOND_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_ITER_FIRST_ELLR_DUMP_BIT_LSB                 (8)
#define DBRP_TUR_LTE_CH4_ITER_FIRST_ELLR_DUMP_BIT_WIDTH               (1)
#define DBRP_TUR_LTE_CH4_ITER_FIRST_ELLR_DUMP_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CH4_ITER_FIRST_ELLR_DUMP_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_ITER_FIRST_ELLR_DUMP_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_ITER_FIRST_MAX_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CH4_ITER_FIRST_MAX_BIT_WIDTH                     (6)
#define DBRP_TUR_LTE_CH4_ITER_FIRST_MAX_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CH4_ITER_FIRST_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_ITER_FIRST_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_MAC_INFO_DOB_DISABLE_BIT_LSB                 (24)
#define DBRP_TUR_LTE_CH4_MAC_INFO_DOB_DISABLE_BIT_WIDTH               (1)
#define DBRP_TUR_LTE_CH4_MAC_INFO_DOB_DISABLE_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CH4_MAC_INFO_DOB_DISABLE_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_MAC_INFO_DOB_DISABLE_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_MAC_INFO_HARQ_ID_BIT_LSB                     (16)
#define DBRP_TUR_LTE_CH4_MAC_INFO_HARQ_ID_BIT_WIDTH                   (6)
#define DBRP_TUR_LTE_CH4_MAC_INFO_HARQ_ID_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_LTE_CH4_MAC_INFO_HARQ_ID_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_MAC_INFO_HARQ_ID_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_MAC_INFO_CW_SWITCH_BIT_LSB                   (8)
#define DBRP_TUR_LTE_CH4_MAC_INFO_CW_SWITCH_BIT_WIDTH                 (1)
#define DBRP_TUR_LTE_CH4_MAC_INFO_CW_SWITCH_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH4_MAC_INFO_CW_SWITCH_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_MAC_INFO_CW_SWITCH_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_MAC_INFO_TCRNTI_BIT_LSB                      (4)
#define DBRP_TUR_LTE_CH4_MAC_INFO_TCRNTI_BIT_WIDTH                    (1)
#define DBRP_TUR_LTE_CH4_MAC_INFO_TCRNTI_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_LTE_CH4_MAC_INFO_TCRNTI_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_MAC_INFO_TCRNTI_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_MAC_INFO_START_IDX_BIT_LSB                   (0)
#define DBRP_TUR_LTE_CH4_MAC_INFO_START_IDX_BIT_WIDTH                 (4)
#define DBRP_TUR_LTE_CH4_MAC_INFO_START_IDX_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH4_MAC_INFO_START_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_MAC_INFO_START_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_INI_PCRC_BIT_LSB                             (0)
#define DBRP_TUR_LTE_CH4_INI_PCRC_BIT_WIDTH                           (24)
#define DBRP_TUR_LTE_CH4_INI_PCRC_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_LTE_CH4_INI_PCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_INI_PCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_TBINFO1_TBSIZE_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CH4_TBINFO1_TBSIZE_BIT_WIDTH                     (17)
#define DBRP_TUR_LTE_CH4_TBINFO1_TBSIZE_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CH4_TBINFO1_TBSIZE_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_TBINFO1_TBSIZE_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_EMI_INFO0_TRACE_CB_IDX_BIT_LSB               (20)
#define DBRP_TUR_LTE_CH4_EMI_INFO0_TRACE_CB_IDX_BIT_WIDTH             (4)
#define DBRP_TUR_LTE_CH4_EMI_INFO0_TRACE_CB_IDX_BIT_MASK              ((UINT32) (((1<<DBRP_TUR_LTE_CH4_EMI_INFO0_TRACE_CB_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_EMI_INFO0_TRACE_CB_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_EMI_INFO0_TRACE_EN_BIT_LSB                   (16)
#define DBRP_TUR_LTE_CH4_EMI_INFO0_TRACE_EN_BIT_WIDTH                 (1)
#define DBRP_TUR_LTE_CH4_EMI_INFO0_TRACE_EN_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_CH4_EMI_INFO0_TRACE_EN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_EMI_INFO0_TRACE_EN_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_EMI_INFO0_EMI_EN_BIT_LSB                     (0)
#define DBRP_TUR_LTE_CH4_EMI_INFO0_EMI_EN_BIT_WIDTH                   (1)
#define DBRP_TUR_LTE_CH4_EMI_INFO0_EMI_EN_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_LTE_CH4_EMI_INFO0_EMI_EN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_EMI_INFO0_EMI_EN_BIT_LSB) )

#define DBRP_TUR_LTE_CH4_EMI_INFO1_ADR_BIT_LSB                        (0)
#define DBRP_TUR_LTE_CH4_EMI_INFO1_ADR_BIT_WIDTH                      (32)
#define DBRP_TUR_LTE_CH4_EMI_INFO1_ADR_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_LTE_CH4_EMI_INFO1_ADR_BIT_WIDTH)-1) << DBRP_TUR_LTE_CH4_EMI_INFO1_ADR_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH0_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC0_CH0_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC0_CH0_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH0_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH0_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH0_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC0_CH0_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC0_CH0_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH0_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH0_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH0_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC0_CH0_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC0_CH0_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH0_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH0_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH0_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC0_CH0_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC0_CH0_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH0_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH0_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH0_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC0_CH0_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC0_CH0_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH0_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH0_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH0_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC0_CH0_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC0_CH0_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH0_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH0_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH1_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC0_CH1_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC0_CH1_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH1_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH1_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH1_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC0_CH1_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC0_CH1_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH1_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH1_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH1_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC0_CH1_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC0_CH1_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH1_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH1_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH1_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC0_CH1_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC0_CH1_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH1_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH1_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH1_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC0_CH1_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC0_CH1_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH1_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH1_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH1_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC0_CH1_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC0_CH1_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH1_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH1_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH2_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC0_CH2_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC0_CH2_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH2_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH2_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH2_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC0_CH2_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC0_CH2_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH2_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH2_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH2_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC0_CH2_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC0_CH2_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH2_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH2_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH2_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC0_CH2_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC0_CH2_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH2_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH2_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH2_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC0_CH2_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC0_CH2_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH2_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH2_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH2_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC0_CH2_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC0_CH2_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH2_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH2_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH3_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC0_CH3_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC0_CH3_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH3_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH3_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH3_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC0_CH3_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC0_CH3_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH3_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH3_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH3_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC0_CH3_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC0_CH3_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH3_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH3_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH3_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC0_CH3_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC0_CH3_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH3_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH3_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH3_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC0_CH3_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC0_CH3_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH3_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH3_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH3_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC0_CH3_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC0_CH3_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH3_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH3_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH4_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC0_CH4_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC0_CH4_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH4_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH4_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH4_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC0_CH4_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC0_CH4_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH4_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH4_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH4_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC0_CH4_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC0_CH4_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH4_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH4_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH4_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC0_CH4_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC0_CH4_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH4_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH4_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH4_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC0_CH4_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC0_CH4_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH4_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH4_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CH4_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC0_CH4_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC0_CH4_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CH4_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CH4_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH0_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC1_CH0_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC1_CH0_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH0_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH0_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH0_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC1_CH0_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC1_CH0_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH0_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH0_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH0_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC1_CH0_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC1_CH0_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH0_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH0_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH0_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC1_CH0_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC1_CH0_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH0_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH0_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH0_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC1_CH0_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC1_CH0_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH0_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH0_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH0_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC1_CH0_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC1_CH0_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH0_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH0_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH1_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC1_CH1_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC1_CH1_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH1_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH1_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH1_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC1_CH1_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC1_CH1_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH1_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH1_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH1_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC1_CH1_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC1_CH1_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH1_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH1_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH1_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC1_CH1_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC1_CH1_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH1_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH1_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH1_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC1_CH1_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC1_CH1_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH1_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH1_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH1_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC1_CH1_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC1_CH1_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH1_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH1_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH2_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC1_CH2_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC1_CH2_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH2_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH2_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH2_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC1_CH2_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC1_CH2_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH2_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH2_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH2_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC1_CH2_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC1_CH2_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH2_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH2_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH2_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC1_CH2_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC1_CH2_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH2_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH2_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH2_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC1_CH2_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC1_CH2_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH2_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH2_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH2_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC1_CH2_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC1_CH2_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH2_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH2_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH3_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC1_CH3_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC1_CH3_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH3_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH3_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH3_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC1_CH3_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC1_CH3_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH3_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH3_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH3_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC1_CH3_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC1_CH3_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH3_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH3_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH3_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC1_CH3_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC1_CH3_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH3_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH3_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH3_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC1_CH3_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC1_CH3_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH3_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH3_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH3_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC1_CH3_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC1_CH3_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH3_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH3_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH4_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC1_CH4_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC1_CH4_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH4_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH4_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH4_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC1_CH4_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC1_CH4_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH4_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH4_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH4_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC1_CH4_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC1_CH4_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH4_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH4_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH4_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC1_CH4_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC1_CH4_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH4_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH4_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH4_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC1_CH4_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC1_CH4_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH4_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH4_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CH4_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC1_CH4_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC1_CH4_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CH4_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CH4_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH0_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC2_CH0_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC2_CH0_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH0_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH0_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH0_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC2_CH0_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC2_CH0_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH0_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH0_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH0_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC2_CH0_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC2_CH0_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH0_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH0_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH0_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC2_CH0_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC2_CH0_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH0_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH0_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH0_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC2_CH0_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC2_CH0_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH0_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH0_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH0_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC2_CH0_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC2_CH0_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH0_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH0_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH1_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC2_CH1_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC2_CH1_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH1_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH1_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH1_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC2_CH1_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC2_CH1_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH1_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH1_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH1_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC2_CH1_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC2_CH1_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH1_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH1_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH1_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC2_CH1_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC2_CH1_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH1_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH1_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH1_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC2_CH1_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC2_CH1_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH1_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH1_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH1_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC2_CH1_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC2_CH1_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH1_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH1_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH2_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC2_CH2_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC2_CH2_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH2_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH2_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH2_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC2_CH2_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC2_CH2_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH2_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH2_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH2_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC2_CH2_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC2_CH2_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH2_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH2_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH2_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC2_CH2_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC2_CH2_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH2_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH2_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH2_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC2_CH2_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC2_CH2_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH2_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH2_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH2_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC2_CH2_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC2_CH2_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH2_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH2_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH3_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC2_CH3_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC2_CH3_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH3_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH3_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH3_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC2_CH3_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC2_CH3_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH3_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH3_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH3_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC2_CH3_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC2_CH3_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH3_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH3_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH3_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC2_CH3_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC2_CH3_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH3_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH3_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH3_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC2_CH3_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC2_CH3_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH3_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH3_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH3_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC2_CH3_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC2_CH3_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH3_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH3_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH4_RPT0_ITER_MIN_BIT_LSB                    (26)
#define DBRP_TUR_LTE_CC2_CH4_RPT0_ITER_MIN_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC2_CH4_RPT0_ITER_MIN_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH4_RPT0_ITER_MIN_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH4_RPT0_ITER_MIN_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH4_RPT0_ITER_MAX_BIT_LSB                    (20)
#define DBRP_TUR_LTE_CC2_CH4_RPT0_ITER_MAX_BIT_WIDTH                  (6)
#define DBRP_TUR_LTE_CC2_CH4_RPT0_ITER_MAX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH4_RPT0_ITER_MAX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH4_RPT0_ITER_MAX_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH4_RPT0_TBCRC_BIT_LSB                       (16)
#define DBRP_TUR_LTE_CC2_CH4_RPT0_TBCRC_BIT_WIDTH                     (1)
#define DBRP_TUR_LTE_CC2_CH4_RPT0_TBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH4_RPT0_TBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH4_RPT0_TBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH4_RPT0_CBCRC_BIT_LSB                       (0)
#define DBRP_TUR_LTE_CC2_CH4_RPT0_CBCRC_BIT_WIDTH                     (16)
#define DBRP_TUR_LTE_CC2_CH4_RPT0_CBCRC_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH4_RPT0_CBCRC_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH4_RPT0_CBCRC_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH4_RPT1_STOP_IDX_BIT_LSB                    (25)
#define DBRP_TUR_LTE_CC2_CH4_RPT1_STOP_IDX_BIT_WIDTH                  (4)
#define DBRP_TUR_LTE_CC2_CH4_RPT1_STOP_IDX_BIT_MASK                   ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH4_RPT1_STOP_IDX_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH4_RPT1_STOP_IDX_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CH4_RPT1_PCRC_RESULT_BIT_LSB                 (0)
#define DBRP_TUR_LTE_CC2_CH4_RPT1_PCRC_RESULT_BIT_WIDTH               (24)
#define DBRP_TUR_LTE_CC2_CH4_RPT1_PCRC_RESULT_BIT_MASK                ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CH4_RPT1_PCRC_RESULT_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CH4_RPT1_PCRC_RESULT_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC2_CH4_BIT_LSB                          (20)
#define DBRP_TUR_LTE_DONE_CC_CC2_CH4_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC2_CH4_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC2_CH4_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC2_CH4_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC2_CH3_BIT_LSB                          (19)
#define DBRP_TUR_LTE_DONE_CC_CC2_CH3_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC2_CH3_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC2_CH3_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC2_CH3_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC2_CH2_BIT_LSB                          (18)
#define DBRP_TUR_LTE_DONE_CC_CC2_CH2_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC2_CH2_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC2_CH2_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC2_CH2_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC2_CH1_BIT_LSB                          (17)
#define DBRP_TUR_LTE_DONE_CC_CC2_CH1_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC2_CH1_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC2_CH1_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC2_CH1_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC2_CH0_BIT_LSB                          (16)
#define DBRP_TUR_LTE_DONE_CC_CC2_CH0_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC2_CH0_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC2_CH0_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC2_CH0_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC1_CH4_BIT_LSB                          (12)
#define DBRP_TUR_LTE_DONE_CC_CC1_CH4_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC1_CH4_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC1_CH4_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC1_CH4_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC1_CH3_BIT_LSB                          (11)
#define DBRP_TUR_LTE_DONE_CC_CC1_CH3_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC1_CH3_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC1_CH3_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC1_CH3_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC1_CH2_BIT_LSB                          (10)
#define DBRP_TUR_LTE_DONE_CC_CC1_CH2_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC1_CH2_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC1_CH2_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC1_CH2_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC1_CH1_BIT_LSB                          (9)
#define DBRP_TUR_LTE_DONE_CC_CC1_CH1_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC1_CH1_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC1_CH1_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC1_CH1_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC1_CH0_BIT_LSB                          (8)
#define DBRP_TUR_LTE_DONE_CC_CC1_CH0_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC1_CH0_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC1_CH0_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC1_CH0_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC0_CH4_BIT_LSB                          (4)
#define DBRP_TUR_LTE_DONE_CC_CC0_CH4_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC0_CH4_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC0_CH4_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC0_CH4_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC0_CH3_BIT_LSB                          (3)
#define DBRP_TUR_LTE_DONE_CC_CC0_CH3_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC0_CH3_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC0_CH3_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC0_CH3_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC0_CH2_BIT_LSB                          (2)
#define DBRP_TUR_LTE_DONE_CC_CC0_CH2_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC0_CH2_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC0_CH2_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC0_CH2_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC0_CH1_BIT_LSB                          (1)
#define DBRP_TUR_LTE_DONE_CC_CC0_CH1_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC0_CH1_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC0_CH1_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC0_CH1_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_CC_CC0_CH0_BIT_LSB                          (0)
#define DBRP_TUR_LTE_DONE_CC_CC0_CH0_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_CC_CC0_CH0_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_CC_CC0_CH0_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_CC_CC0_CH0_BIT_LSB) )

#define DBRP_TUR_LTE_CMD0_CMD_BIT_LSB                                 (0)
#define DBRP_TUR_LTE_CMD0_CMD_BIT_WIDTH                               (32)
#define DBRP_TUR_LTE_CMD0_CMD_BIT_MASK                                ((UINT32) (((1<<DBRP_TUR_LTE_CMD0_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_CMD0_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_CMD1_CMD_BIT_LSB                                 (0)
#define DBRP_TUR_LTE_CMD1_CMD_BIT_WIDTH                               (32)
#define DBRP_TUR_LTE_CMD1_CMD_BIT_MASK                                ((UINT32) (((1<<DBRP_TUR_LTE_CMD1_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_CMD1_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CMD_RPT0_CMD_BIT_LSB                         (0)
#define DBRP_TUR_LTE_CC0_CMD_RPT0_CMD_BIT_WIDTH                       (32)
#define DBRP_TUR_LTE_CC0_CMD_RPT0_CMD_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CMD_RPT0_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CMD_RPT0_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_CC0_CMD_RPT1_CMD_BIT_LSB                         (0)
#define DBRP_TUR_LTE_CC0_CMD_RPT1_CMD_BIT_WIDTH                       (32)
#define DBRP_TUR_LTE_CC0_CMD_RPT1_CMD_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_LTE_CC0_CMD_RPT1_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC0_CMD_RPT1_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CMD_RPT0_CMD_BIT_LSB                         (0)
#define DBRP_TUR_LTE_CC1_CMD_RPT0_CMD_BIT_WIDTH                       (32)
#define DBRP_TUR_LTE_CC1_CMD_RPT0_CMD_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CMD_RPT0_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CMD_RPT0_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_CC1_CMD_RPT1_CMD_BIT_LSB                         (0)
#define DBRP_TUR_LTE_CC1_CMD_RPT1_CMD_BIT_WIDTH                       (32)
#define DBRP_TUR_LTE_CC1_CMD_RPT1_CMD_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_LTE_CC1_CMD_RPT1_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC1_CMD_RPT1_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CMD_RPT0_CMD_BIT_LSB                         (0)
#define DBRP_TUR_LTE_CC2_CMD_RPT0_CMD_BIT_WIDTH                       (32)
#define DBRP_TUR_LTE_CC2_CMD_RPT0_CMD_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CMD_RPT0_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CMD_RPT0_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_CC2_CMD_RPT1_CMD_BIT_LSB                         (0)
#define DBRP_TUR_LTE_CC2_CMD_RPT1_CMD_BIT_WIDTH                       (32)
#define DBRP_TUR_LTE_CC2_CMD_RPT1_CMD_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_LTE_CC2_CMD_RPT1_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_CC2_CMD_RPT1_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_ASSERT_CC2_BIT_LSB                          (8)
#define DBRP_TUR_LTE_DONE_ASSERT_CC2_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_ASSERT_CC2_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_ASSERT_CC2_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_ASSERT_CC2_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_ASSERT_CC1_BIT_LSB                          (4)
#define DBRP_TUR_LTE_DONE_ASSERT_CC1_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_ASSERT_CC1_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_ASSERT_CC1_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_ASSERT_CC1_BIT_LSB) )

#define DBRP_TUR_LTE_DONE_ASSERT_CC0_BIT_LSB                          (0)
#define DBRP_TUR_LTE_DONE_ASSERT_CC0_BIT_WIDTH                        (1)
#define DBRP_TUR_LTE_DONE_ASSERT_CC0_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_DONE_ASSERT_CC0_BIT_WIDTH)-1) << DBRP_TUR_LTE_DONE_ASSERT_CC0_BIT_LSB) )

#define DBRP_TUR_LTE_FW_RST_FLAG_BIT_LSB                              (0)
#define DBRP_TUR_LTE_FW_RST_FLAG_BIT_WIDTH                            (1)
#define DBRP_TUR_LTE_FW_RST_FLAG_BIT_MASK                             ((UINT32) (((1<<DBRP_TUR_LTE_FW_RST_FLAG_BIT_WIDTH)-1) << DBRP_TUR_LTE_FW_RST_FLAG_BIT_LSB) )

#define DBRP_TUR_RSRV_MPU_START_ADR_BIT_LSB                           (0)
#define DBRP_TUR_RSRV_MPU_START_ADR_BIT_WIDTH                         (32)
#define DBRP_TUR_RSRV_MPU_START_ADR_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_RSRV_MPU_START_ADR_BIT_WIDTH)-1) << DBRP_TUR_RSRV_MPU_START_ADR_BIT_LSB) )

#define DBRP_TUR_RSRV_MPU_END_ADR_BIT_LSB                             (0)
#define DBRP_TUR_RSRV_MPU_END_ADR_BIT_WIDTH                           (32)
#define DBRP_TUR_RSRV_MPU_END_ADR_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_RSRV_MPU_END_ADR_BIT_WIDTH)-1) << DBRP_TUR_RSRV_MPU_END_ADR_BIT_LSB) )

#define DBRP_TUR_RSRV_MPU_EN_BIT_LSB                                  (0)
#define DBRP_TUR_RSRV_MPU_EN_BIT_WIDTH                                (1)
#define DBRP_TUR_RSRV_MPU_EN_BIT_MASK                                 ((UINT32) (((1<<DBRP_TUR_RSRV_MPU_EN_BIT_WIDTH)-1) << DBRP_TUR_RSRV_MPU_EN_BIT_LSB) )

#define DBRP_TUR_DSCH_MPU_START_ADR_BIT_LSB                           (0)
#define DBRP_TUR_DSCH_MPU_START_ADR_BIT_WIDTH                         (32)
#define DBRP_TUR_DSCH_MPU_START_ADR_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_DSCH_MPU_START_ADR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_MPU_START_ADR_BIT_LSB) )

#define DBRP_TUR_DSCH_MPU_END_ADR_BIT_LSB                             (0)
#define DBRP_TUR_DSCH_MPU_END_ADR_BIT_WIDTH                           (32)
#define DBRP_TUR_DSCH_MPU_END_ADR_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_DSCH_MPU_END_ADR_BIT_WIDTH)-1) << DBRP_TUR_DSCH_MPU_END_ADR_BIT_LSB) )

#define DBRP_TUR_DSCH_MPU_EN_BIT_LSB                                  (0)
#define DBRP_TUR_DSCH_MPU_EN_BIT_WIDTH                                (1)
#define DBRP_TUR_DSCH_MPU_EN_BIT_MASK                                 ((UINT32) (((1<<DBRP_TUR_DSCH_MPU_EN_BIT_WIDTH)-1) << DBRP_TUR_DSCH_MPU_EN_BIT_LSB) )

#define DBRP_TUR_LTE_MPU_START_ADR_BIT_LSB                            (0)
#define DBRP_TUR_LTE_MPU_START_ADR_BIT_WIDTH                          (32)
#define DBRP_TUR_LTE_MPU_START_ADR_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_LTE_MPU_START_ADR_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPU_START_ADR_BIT_LSB) )

#define DBRP_TUR_LTE_MPU_END_ADR_BIT_LSB                              (0)
#define DBRP_TUR_LTE_MPU_END_ADR_BIT_WIDTH                            (32)
#define DBRP_TUR_LTE_MPU_END_ADR_BIT_MASK                             ((UINT32) (((1<<DBRP_TUR_LTE_MPU_END_ADR_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPU_END_ADR_BIT_LSB) )

#define DBRP_TUR_LTE_MPU_EN_BIT_LSB                                   (0)
#define DBRP_TUR_LTE_MPU_EN_BIT_WIDTH                                 (1)
#define DBRP_TUR_LTE_MPU_EN_BIT_MASK                                  ((UINT32) (((1<<DBRP_TUR_LTE_MPU_EN_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPU_EN_BIT_LSB) )

#define DBRP_TUR_MPU_VIO_ADR_BIT_LSB                                  (0)
#define DBRP_TUR_MPU_VIO_ADR_BIT_WIDTH                                (32)
#define DBRP_TUR_MPU_VIO_ADR_BIT_MASK                                 ((UINT32) (((1<<DBRP_TUR_MPU_VIO_ADR_BIT_WIDTH)-1) << DBRP_TUR_MPU_VIO_ADR_BIT_LSB) )

#define DBRP_TUR_MPU_SW_IRQ_TRG_BIT_LSB                               (5)
#define DBRP_TUR_MPU_SW_IRQ_TRG_BIT_WIDTH                             (1)
#define DBRP_TUR_MPU_SW_IRQ_TRG_BIT_MASK                              ((UINT32) (((1<<DBRP_TUR_MPU_SW_IRQ_TRG_BIT_WIDTH)-1) << DBRP_TUR_MPU_SW_IRQ_TRG_BIT_LSB) )

#define DBRP_TUR_MPU_SW_IRQ_STATUS_BIT_LSB                            (4)
#define DBRP_TUR_MPU_SW_IRQ_STATUS_BIT_WIDTH                          (1)
#define DBRP_TUR_MPU_SW_IRQ_STATUS_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_MPU_SW_IRQ_STATUS_BIT_WIDTH)-1) << DBRP_TUR_MPU_SW_IRQ_STATUS_BIT_LSB) )

#define DBRP_TUR_MPU_VIOLATE_BIT_LSB                                  (0)
#define DBRP_TUR_MPU_VIOLATE_BIT_WIDTH                                (1)
#define DBRP_TUR_MPU_VIOLATE_BIT_MASK                                 ((UINT32) (((1<<DBRP_TUR_MPU_VIOLATE_BIT_WIDTH)-1) << DBRP_TUR_MPU_VIOLATE_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DATA_CNT_MISMATCH_BIT_LSB                   (0)
#define DBRP_TUR_LTE_MPIF_DATA_CNT_MISMATCH_BIT_WIDTH                 (1)
#define DBRP_TUR_LTE_MPIF_DATA_CNT_MISMATCH_BIT_MASK                  ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DATA_CNT_MISMATCH_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DATA_CNT_MISMATCH_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_0_CMD_BIT_LSB                           (0)
#define DBRP_TUR_LTE_MPIF_DBG_0_CMD_BIT_WIDTH                         (32)
#define DBRP_TUR_LTE_MPIF_DBG_0_CMD_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_0_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_0_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_1_CMD_BIT_LSB                           (0)
#define DBRP_TUR_LTE_MPIF_DBG_1_CMD_BIT_WIDTH                         (32)
#define DBRP_TUR_LTE_MPIF_DBG_1_CMD_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_1_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_1_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_2_CMD_BIT_LSB                           (0)
#define DBRP_TUR_LTE_MPIF_DBG_2_CMD_BIT_WIDTH                         (32)
#define DBRP_TUR_LTE_MPIF_DBG_2_CMD_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_2_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_2_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_3_CMD_BIT_LSB                           (0)
#define DBRP_TUR_LTE_MPIF_DBG_3_CMD_BIT_WIDTH                         (32)
#define DBRP_TUR_LTE_MPIF_DBG_3_CMD_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_3_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_3_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_4_CMD_BIT_LSB                           (0)
#define DBRP_TUR_LTE_MPIF_DBG_4_CMD_BIT_WIDTH                         (32)
#define DBRP_TUR_LTE_MPIF_DBG_4_CMD_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_4_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_4_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_5_CMD_BIT_LSB                           (0)
#define DBRP_TUR_LTE_MPIF_DBG_5_CMD_BIT_WIDTH                         (32)
#define DBRP_TUR_LTE_MPIF_DBG_5_CMD_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_5_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_5_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_6_CMD_BIT_LSB                           (0)
#define DBRP_TUR_LTE_MPIF_DBG_6_CMD_BIT_WIDTH                         (32)
#define DBRP_TUR_LTE_MPIF_DBG_6_CMD_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_6_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_6_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_7_CMD_BIT_LSB                           (0)
#define DBRP_TUR_LTE_MPIF_DBG_7_CMD_BIT_WIDTH                         (32)
#define DBRP_TUR_LTE_MPIF_DBG_7_CMD_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_7_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_7_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_8_CMD_BIT_LSB                           (0)
#define DBRP_TUR_LTE_MPIF_DBG_8_CMD_BIT_WIDTH                         (32)
#define DBRP_TUR_LTE_MPIF_DBG_8_CMD_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_8_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_8_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_9_CMD_BIT_LSB                           (0)
#define DBRP_TUR_LTE_MPIF_DBG_9_CMD_BIT_WIDTH                         (32)
#define DBRP_TUR_LTE_MPIF_DBG_9_CMD_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_9_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_9_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_10_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_10_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_10_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_10_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_10_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_11_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_11_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_11_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_11_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_11_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_12_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_12_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_12_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_12_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_12_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_13_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_13_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_13_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_13_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_13_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_14_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_14_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_14_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_14_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_14_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_15_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_15_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_15_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_15_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_15_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_16_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_16_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_16_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_16_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_16_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_17_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_17_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_17_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_17_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_17_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_18_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_18_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_18_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_18_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_18_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_19_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_19_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_19_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_19_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_19_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_20_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_20_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_20_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_20_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_20_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_21_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_21_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_21_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_21_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_21_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_22_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_22_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_22_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_22_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_22_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_23_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_23_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_23_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_23_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_23_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_24_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_24_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_24_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_24_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_24_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_25_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_25_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_25_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_25_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_25_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_26_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_26_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_26_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_26_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_26_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_27_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_27_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_27_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_27_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_27_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_28_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_28_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_28_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_28_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_28_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_29_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_29_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_29_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_29_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_29_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_30_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_30_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_30_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_30_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_30_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_DBG_31_CMD_BIT_LSB                          (0)
#define DBRP_TUR_LTE_MPIF_DBG_31_CMD_BIT_WIDTH                        (32)
#define DBRP_TUR_LTE_MPIF_DBG_31_CMD_BIT_MASK                         ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_DBG_31_CMD_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_DBG_31_CMD_BIT_LSB) )

#define DBRP_TUR_LTE_MPIF_WRITE_POINTER_BIT_LSB                       (0)
#define DBRP_TUR_LTE_MPIF_WRITE_POINTER_BIT_WIDTH                     (6)
#define DBRP_TUR_LTE_MPIF_WRITE_POINTER_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_LTE_MPIF_WRITE_POINTER_BIT_WIDTH)-1) << DBRP_TUR_LTE_MPIF_WRITE_POINTER_BIT_LSB) )

#define DBRP_TUR_L_FSM_CUR_CB_IDX_BIT_LSB                             (16)
#define DBRP_TUR_L_FSM_CUR_CB_IDX_BIT_WIDTH                           (7)
#define DBRP_TUR_L_FSM_CUR_CB_IDX_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_L_FSM_CUR_CB_IDX_BIT_WIDTH)-1) << DBRP_TUR_L_FSM_CUR_CB_IDX_BIT_LSB) )

#define DBRP_TUR_L_FSM_STATE_BIT_LSB                                  (0)
#define DBRP_TUR_L_FSM_STATE_BIT_WIDTH                                (9)
#define DBRP_TUR_L_FSM_STATE_BIT_MASK                                 ((UINT32) (((1<<DBRP_TUR_L_FSM_STATE_BIT_WIDTH)-1) << DBRP_TUR_L_FSM_STATE_BIT_LSB) )

#define DBRP_TUR_WT_FSM_STATE_BIT_LSB                                 (0)
#define DBRP_TUR_WT_FSM_STATE_BIT_WIDTH                               (16)
#define DBRP_TUR_WT_FSM_STATE_BIT_MASK                                ((UINT32) (((1<<DBRP_TUR_WT_FSM_STATE_BIT_WIDTH)-1) << DBRP_TUR_WT_FSM_STATE_BIT_LSB) )

#define DBRP_TUR_DEC_FSM_STATE_BIT_LSB                                (0)
#define DBRP_TUR_DEC_FSM_STATE_BIT_WIDTH                              (32)
#define DBRP_TUR_DEC_FSM_STATE_BIT_MASK                               ((UINT32) (((1<<DBRP_TUR_DEC_FSM_STATE_BIT_WIDTH)-1) << DBRP_TUR_DEC_FSM_STATE_BIT_LSB) )

#define DBRP_TUR_DOB_FSM_DMA_STATE_BIT_LSB                            (21)
#define DBRP_TUR_DOB_FSM_DMA_STATE_BIT_WIDTH                          (2)
#define DBRP_TUR_DOB_FSM_DMA_STATE_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_DOB_FSM_DMA_STATE_BIT_WIDTH)-1) << DBRP_TUR_DOB_FSM_DMA_STATE_BIT_LSB) )

#define DBRP_TUR_DOB_FSM_QUE_STATE_BIT_LSB                            (6)
#define DBRP_TUR_DOB_FSM_QUE_STATE_BIT_WIDTH                          (15)
#define DBRP_TUR_DOB_FSM_QUE_STATE_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_DOB_FSM_QUE_STATE_BIT_WIDTH)-1) << DBRP_TUR_DOB_FSM_QUE_STATE_BIT_LSB) )

#define DBRP_TUR_DOB_FSM_TRBK_STATE_BIT_LSB                           (0)
#define DBRP_TUR_DOB_FSM_TRBK_STATE_BIT_WIDTH                         (6)
#define DBRP_TUR_DOB_FSM_TRBK_STATE_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_DOB_FSM_TRBK_STATE_BIT_WIDTH)-1) << DBRP_TUR_DOB_FSM_TRBK_STATE_BIT_LSB) )

#define DBRP_TUR_C_FSM_STATE_BIT_LSB                                  (0)
#define DBRP_TUR_C_FSM_STATE_BIT_WIDTH                                (10)
#define DBRP_TUR_C_FSM_STATE_BIT_MASK                                 ((UINT32) (((1<<DBRP_TUR_C_FSM_STATE_BIT_WIDTH)-1) << DBRP_TUR_C_FSM_STATE_BIT_LSB) )

#define DBRP_TUR_RTT_CFG_MIN_ITER_BIT_LSB                             (5)
#define DBRP_TUR_RTT_CFG_MIN_ITER_BIT_WIDTH                           (5)
#define DBRP_TUR_RTT_CFG_MIN_ITER_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_RTT_CFG_MIN_ITER_BIT_WIDTH)-1) << DBRP_TUR_RTT_CFG_MIN_ITER_BIT_LSB) )

#define DBRP_TUR_RTT_CFG_MAX_ITER_BIT_LSB                             (0)
#define DBRP_TUR_RTT_CFG_MAX_ITER_BIT_WIDTH                           (5)
#define DBRP_TUR_RTT_CFG_MAX_ITER_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_RTT_CFG_MAX_ITER_BIT_WIDTH)-1) << DBRP_TUR_RTT_CFG_MAX_ITER_BIT_LSB) )

#define DBRP_TUR_RTT_DST_ADR_BIT_LSB                                  (0)
#define DBRP_TUR_RTT_DST_ADR_BIT_WIDTH                                (32)
#define DBRP_TUR_RTT_DST_ADR_BIT_MASK                                 ((UINT32) (((1<<DBRP_TUR_RTT_DST_ADR_BIT_WIDTH)-1) << DBRP_TUR_RTT_DST_ADR_BIT_LSB) )

#define DBRP_TUR_RTT_DMA_CFG_CRC_REMOVE_BIT_LSB                       (7)
#define DBRP_TUR_RTT_DMA_CFG_CRC_REMOVE_BIT_WIDTH                     (1)
#define DBRP_TUR_RTT_DMA_CFG_CRC_REMOVE_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_RTT_DMA_CFG_CRC_REMOVE_BIT_WIDTH)-1) << DBRP_TUR_RTT_DMA_CFG_CRC_REMOVE_BIT_LSB) )

#define DBRP_TUR_RTT_DMA_CFG_SWAP_ENDIAN_BIT_LSB                      (5)
#define DBRP_TUR_RTT_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH                    (1)
#define DBRP_TUR_RTT_DMA_CFG_SWAP_ENDIAN_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_RTT_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH)-1) << DBRP_TUR_RTT_DMA_CFG_SWAP_ENDIAN_BIT_LSB) )

#define DBRP_TUR_RTT_DMA_CFG_MAC_OFST_BIT_LSB                         (0)
#define DBRP_TUR_RTT_DMA_CFG_MAC_OFST_BIT_WIDTH                       (5)
#define DBRP_TUR_RTT_DMA_CFG_MAC_OFST_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_RTT_DMA_CFG_MAC_OFST_BIT_WIDTH)-1) << DBRP_TUR_RTT_DMA_CFG_MAC_OFST_BIT_LSB) )

#define DBRP_TUR_RTT_TRACE_CFG_TRACE_EN_BIT_LSB                       (0)
#define DBRP_TUR_RTT_TRACE_CFG_TRACE_EN_BIT_WIDTH                     (1)
#define DBRP_TUR_RTT_TRACE_CFG_TRACE_EN_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_RTT_TRACE_CFG_TRACE_EN_BIT_WIDTH)-1) << DBRP_TUR_RTT_TRACE_CFG_TRACE_EN_BIT_LSB) )

#define DBRP_TUR_RTT_CBCRC_STATUS_BIT_LSB                             (0)
#define DBRP_TUR_RTT_CBCRC_STATUS_BIT_WIDTH                           (1)
#define DBRP_TUR_RTT_CBCRC_STATUS_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_RTT_CBCRC_STATUS_BIT_WIDTH)-1) << DBRP_TUR_RTT_CBCRC_STATUS_BIT_LSB) )

#define DBRP_TUR_RTT_LST_ADR_BIT_LSB                                  (0)
#define DBRP_TUR_RTT_LST_ADR_BIT_WIDTH                                (32)
#define DBRP_TUR_RTT_LST_ADR_BIT_MASK                                 ((UINT32) (((1<<DBRP_TUR_RTT_LST_ADR_BIT_WIDTH)-1) << DBRP_TUR_RTT_LST_ADR_BIT_LSB) )

#define DBRP_TUR_RTT_ENERGY_ACCUMULATE_BIT_LSB                        (0)
#define DBRP_TUR_RTT_ENERGY_ACCUMULATE_BIT_WIDTH                      (20)
#define DBRP_TUR_RTT_ENERGY_ACCUMULATE_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_RTT_ENERGY_ACCUMULATE_BIT_WIDTH)-1) << DBRP_TUR_RTT_ENERGY_ACCUMULATE_BIT_LSB) )

#define DBRP_TUR_EVDO_ITER_CFG_MIN_ITER_BIT_LSB                       (5)
#define DBRP_TUR_EVDO_ITER_CFG_MIN_ITER_BIT_WIDTH                     (5)
#define DBRP_TUR_EVDO_ITER_CFG_MIN_ITER_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_EVDO_ITER_CFG_MIN_ITER_BIT_WIDTH)-1) << DBRP_TUR_EVDO_ITER_CFG_MIN_ITER_BIT_LSB) )

#define DBRP_TUR_EVDO_ITER_CFG_MAX_ITER_BIT_LSB                       (0)
#define DBRP_TUR_EVDO_ITER_CFG_MAX_ITER_BIT_WIDTH                     (5)
#define DBRP_TUR_EVDO_ITER_CFG_MAX_ITER_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_EVDO_ITER_CFG_MAX_ITER_BIT_WIDTH)-1) << DBRP_TUR_EVDO_ITER_CFG_MAX_ITER_BIT_LSB) )

#define DBRP_TUR_EVDO_DST_PING_ADR_BIT_LSB                            (0)
#define DBRP_TUR_EVDO_DST_PING_ADR_BIT_WIDTH                          (32)
#define DBRP_TUR_EVDO_DST_PING_ADR_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_EVDO_DST_PING_ADR_BIT_WIDTH)-1) << DBRP_TUR_EVDO_DST_PING_ADR_BIT_LSB) )

#define DBRP_TUR_EVDO_DST_PONG_ADR_BIT_LSB                            (0)
#define DBRP_TUR_EVDO_DST_PONG_ADR_BIT_WIDTH                          (32)
#define DBRP_TUR_EVDO_DST_PONG_ADR_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_EVDO_DST_PONG_ADR_BIT_WIDTH)-1) << DBRP_TUR_EVDO_DST_PONG_ADR_BIT_LSB) )

#define DBRP_TUR_EVDO_DMA_CFG_CRC_REMOVE_BIT_LSB                      (7)
#define DBRP_TUR_EVDO_DMA_CFG_CRC_REMOVE_BIT_WIDTH                    (1)
#define DBRP_TUR_EVDO_DMA_CFG_CRC_REMOVE_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_EVDO_DMA_CFG_CRC_REMOVE_BIT_WIDTH)-1) << DBRP_TUR_EVDO_DMA_CFG_CRC_REMOVE_BIT_LSB) )

#define DBRP_TUR_EVDO_DMA_CFG_SWAP_ENDIAN_BIT_LSB                     (5)
#define DBRP_TUR_EVDO_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH                   (1)
#define DBRP_TUR_EVDO_DMA_CFG_SWAP_ENDIAN_BIT_MASK                    ((UINT32) (((1<<DBRP_TUR_EVDO_DMA_CFG_SWAP_ENDIAN_BIT_WIDTH)-1) << DBRP_TUR_EVDO_DMA_CFG_SWAP_ENDIAN_BIT_LSB) )

#define DBRP_TUR_EVDO_DMA_CFG_MAC_OFST_BIT_LSB                        (0)
#define DBRP_TUR_EVDO_DMA_CFG_MAC_OFST_BIT_WIDTH                      (5)
#define DBRP_TUR_EVDO_DMA_CFG_MAC_OFST_BIT_MASK                       ((UINT32) (((1<<DBRP_TUR_EVDO_DMA_CFG_MAC_OFST_BIT_WIDTH)-1) << DBRP_TUR_EVDO_DMA_CFG_MAC_OFST_BIT_LSB) )

#define DBRP_TUR_EVDO_TRACE_CFG_TRACE_EN_BIT_LSB                      (0)
#define DBRP_TUR_EVDO_TRACE_CFG_TRACE_EN_BIT_WIDTH                    (1)
#define DBRP_TUR_EVDO_TRACE_CFG_TRACE_EN_BIT_MASK                     ((UINT32) (((1<<DBRP_TUR_EVDO_TRACE_CFG_TRACE_EN_BIT_WIDTH)-1) << DBRP_TUR_EVDO_TRACE_CFG_TRACE_EN_BIT_LSB) )

#define DBRP_TUR_EVDO_CBCRC_STATUS_BIT_LSB                            (0)
#define DBRP_TUR_EVDO_CBCRC_STATUS_BIT_WIDTH                          (1)
#define DBRP_TUR_EVDO_CBCRC_STATUS_BIT_MASK                           ((UINT32) (((1<<DBRP_TUR_EVDO_CBCRC_STATUS_BIT_WIDTH)-1) << DBRP_TUR_EVDO_CBCRC_STATUS_BIT_LSB) )

#define DBRP_TUR_EVDO_LST_ADR_BIT_LSB                                 (0)
#define DBRP_TUR_EVDO_LST_ADR_BIT_WIDTH                               (32)
#define DBRP_TUR_EVDO_LST_ADR_BIT_MASK                                ((UINT32) (((1<<DBRP_TUR_EVDO_LST_ADR_BIT_WIDTH)-1) << DBRP_TUR_EVDO_LST_ADR_BIT_LSB) )

#define DBRP_TUR_EVDO_HARQ_ID_BIT_LSB                                 (0)
#define DBRP_TUR_EVDO_HARQ_ID_BIT_WIDTH                               (2)
#define DBRP_TUR_EVDO_HARQ_ID_BIT_MASK                                ((UINT32) (((1<<DBRP_TUR_EVDO_HARQ_ID_BIT_WIDTH)-1) << DBRP_TUR_EVDO_HARQ_ID_BIT_LSB) )

#define DBRP_TUR_EVDO_PACKET_SIZE_BIT_LSB                             (0)
#define DBRP_TUR_EVDO_PACKET_SIZE_BIT_WIDTH                           (13)
#define DBRP_TUR_EVDO_PACKET_SIZE_BIT_MASK                            ((UINT32) (((1<<DBRP_TUR_EVDO_PACKET_SIZE_BIT_WIDTH)-1) << DBRP_TUR_EVDO_PACKET_SIZE_BIT_LSB) )

#define DBRP_TUR_EVDO_DST_ADR_PING_PONG_BIT_LSB                       (0)
#define DBRP_TUR_EVDO_DST_ADR_PING_PONG_BIT_WIDTH                     (1)
#define DBRP_TUR_EVDO_DST_ADR_PING_PONG_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_EVDO_DST_ADR_PING_PONG_BIT_WIDTH)-1) << DBRP_TUR_EVDO_DST_ADR_PING_PONG_BIT_LSB) )

#define DBRP_TUR_EVDO_ENERGY_ACCUMULATE_BIT_LSB                       (0)
#define DBRP_TUR_EVDO_ENERGY_ACCUMULATE_BIT_WIDTH                     (20)
#define DBRP_TUR_EVDO_ENERGY_ACCUMULATE_BIT_MASK                      ((UINT32) (((1<<DBRP_TUR_EVDO_ENERGY_ACCUMULATE_BIT_WIDTH)-1) << DBRP_TUR_EVDO_ENERGY_ACCUMULATE_BIT_LSB) )

#define DBRP_TUR_C2K_BUSY_EVDO_BIT_LSB                                (1)
#define DBRP_TUR_C2K_BUSY_EVDO_BIT_WIDTH                              (1)
#define DBRP_TUR_C2K_BUSY_EVDO_BIT_MASK                               ((UINT32) (((1<<DBRP_TUR_C2K_BUSY_EVDO_BIT_WIDTH)-1) << DBRP_TUR_C2K_BUSY_EVDO_BIT_LSB) )

#define DBRP_TUR_C2K_BUSY_RTT_BIT_LSB                                 (0)
#define DBRP_TUR_C2K_BUSY_RTT_BIT_WIDTH                               (1)
#define DBRP_TUR_C2K_BUSY_RTT_BIT_MASK                                ((UINT32) (((1<<DBRP_TUR_C2K_BUSY_RTT_BIT_WIDTH)-1) << DBRP_TUR_C2K_BUSY_RTT_BIT_LSB) )

#define DBRP_TUR_CB_NUM_CB_NUM_BIT_LSB                                (0)
#define DBRP_TUR_CB_NUM_CB_NUM_BIT_WIDTH                              (6)
#define DBRP_TUR_CB_NUM_CB_NUM_BIT_MASK                               ((UINT32) (((1<<DBRP_TUR_CB_NUM_CB_NUM_BIT_WIDTH)-1) << DBRP_TUR_CB_NUM_CB_NUM_BIT_LSB) )

#define DBRP_TUR_CH0_CB_SIZE_SMALL_CB_BIT_LSB                         (16)
#define DBRP_TUR_CH0_CB_SIZE_SMALL_CB_BIT_WIDTH                       (13)
#define DBRP_TUR_CH0_CB_SIZE_SMALL_CB_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_CH0_CB_SIZE_SMALL_CB_BIT_WIDTH)-1) << DBRP_TUR_CH0_CB_SIZE_SMALL_CB_BIT_LSB) )

#define DBRP_TUR_CH0_CB_SIZE_LARGE_CB_BIT_LSB                         (0)
#define DBRP_TUR_CH0_CB_SIZE_LARGE_CB_BIT_WIDTH                       (13)
#define DBRP_TUR_CH0_CB_SIZE_LARGE_CB_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_CH0_CB_SIZE_LARGE_CB_BIT_WIDTH)-1) << DBRP_TUR_CH0_CB_SIZE_LARGE_CB_BIT_LSB) )

#define DBRP_TUR_CH0_CBNUM_SMALL_CB_BIT_LSB                           (16)
#define DBRP_TUR_CH0_CBNUM_SMALL_CB_BIT_WIDTH                         (5)
#define DBRP_TUR_CH0_CBNUM_SMALL_CB_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_CH0_CBNUM_SMALL_CB_BIT_WIDTH)-1) << DBRP_TUR_CH0_CBNUM_SMALL_CB_BIT_LSB) )

#define DBRP_TUR_CH0_CBNUM_LARGE_CB_BIT_LSB                           (0)
#define DBRP_TUR_CH0_CBNUM_LARGE_CB_BIT_WIDTH                         (5)
#define DBRP_TUR_CH0_CBNUM_LARGE_CB_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_CH0_CBNUM_LARGE_CB_BIT_WIDTH)-1) << DBRP_TUR_CH0_CBNUM_LARGE_CB_BIT_LSB) )

#define DBRP_TUR_CH0_DMY_FIL_INFO_FILLER_NUM_BIT_LSB                  (16)
#define DBRP_TUR_CH0_DMY_FIL_INFO_FILLER_NUM_BIT_WIDTH                (6)
#define DBRP_TUR_CH0_DMY_FIL_INFO_FILLER_NUM_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_CH0_DMY_FIL_INFO_FILLER_NUM_BIT_WIDTH)-1) << DBRP_TUR_CH0_DMY_FIL_INFO_FILLER_NUM_BIT_LSB) )

#define DBRP_TUR_CH1_CB_SIZE_SMALL_CB_BIT_LSB                         (16)
#define DBRP_TUR_CH1_CB_SIZE_SMALL_CB_BIT_WIDTH                       (13)
#define DBRP_TUR_CH1_CB_SIZE_SMALL_CB_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_CH1_CB_SIZE_SMALL_CB_BIT_WIDTH)-1) << DBRP_TUR_CH1_CB_SIZE_SMALL_CB_BIT_LSB) )

#define DBRP_TUR_CH1_CB_SIZE_LARGE_CB_BIT_LSB                         (0)
#define DBRP_TUR_CH1_CB_SIZE_LARGE_CB_BIT_WIDTH                       (13)
#define DBRP_TUR_CH1_CB_SIZE_LARGE_CB_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_CH1_CB_SIZE_LARGE_CB_BIT_WIDTH)-1) << DBRP_TUR_CH1_CB_SIZE_LARGE_CB_BIT_LSB) )

#define DBRP_TUR_CH1_CBNUM_SMALL_CB_BIT_LSB                           (16)
#define DBRP_TUR_CH1_CBNUM_SMALL_CB_BIT_WIDTH                         (5)
#define DBRP_TUR_CH1_CBNUM_SMALL_CB_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_CH1_CBNUM_SMALL_CB_BIT_WIDTH)-1) << DBRP_TUR_CH1_CBNUM_SMALL_CB_BIT_LSB) )

#define DBRP_TUR_CH1_CBNUM_LARGE_CB_BIT_LSB                           (0)
#define DBRP_TUR_CH1_CBNUM_LARGE_CB_BIT_WIDTH                         (5)
#define DBRP_TUR_CH1_CBNUM_LARGE_CB_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_CH1_CBNUM_LARGE_CB_BIT_WIDTH)-1) << DBRP_TUR_CH1_CBNUM_LARGE_CB_BIT_LSB) )

#define DBRP_TUR_CH1_DMY_FIL_INFO_FILLER_NUM_BIT_LSB                  (16)
#define DBRP_TUR_CH1_DMY_FIL_INFO_FILLER_NUM_BIT_WIDTH                (6)
#define DBRP_TUR_CH1_DMY_FIL_INFO_FILLER_NUM_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_CH1_DMY_FIL_INFO_FILLER_NUM_BIT_WIDTH)-1) << DBRP_TUR_CH1_DMY_FIL_INFO_FILLER_NUM_BIT_LSB) )

#define DBRP_TUR_CH2_CB_SIZE_SMALL_CB_BIT_LSB                         (16)
#define DBRP_TUR_CH2_CB_SIZE_SMALL_CB_BIT_WIDTH                       (13)
#define DBRP_TUR_CH2_CB_SIZE_SMALL_CB_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_CH2_CB_SIZE_SMALL_CB_BIT_WIDTH)-1) << DBRP_TUR_CH2_CB_SIZE_SMALL_CB_BIT_LSB) )

#define DBRP_TUR_CH2_CB_SIZE_LARGE_CB_BIT_LSB                         (0)
#define DBRP_TUR_CH2_CB_SIZE_LARGE_CB_BIT_WIDTH                       (13)
#define DBRP_TUR_CH2_CB_SIZE_LARGE_CB_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_CH2_CB_SIZE_LARGE_CB_BIT_WIDTH)-1) << DBRP_TUR_CH2_CB_SIZE_LARGE_CB_BIT_LSB) )

#define DBRP_TUR_CH2_CBNUM_SMALL_CB_BIT_LSB                           (16)
#define DBRP_TUR_CH2_CBNUM_SMALL_CB_BIT_WIDTH                         (5)
#define DBRP_TUR_CH2_CBNUM_SMALL_CB_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_CH2_CBNUM_SMALL_CB_BIT_WIDTH)-1) << DBRP_TUR_CH2_CBNUM_SMALL_CB_BIT_LSB) )

#define DBRP_TUR_CH2_CBNUM_LARGE_CB_BIT_LSB                           (0)
#define DBRP_TUR_CH2_CBNUM_LARGE_CB_BIT_WIDTH                         (5)
#define DBRP_TUR_CH2_CBNUM_LARGE_CB_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_CH2_CBNUM_LARGE_CB_BIT_WIDTH)-1) << DBRP_TUR_CH2_CBNUM_LARGE_CB_BIT_LSB) )

#define DBRP_TUR_CH2_DMY_FIL_INFO_FILLER_NUM_BIT_LSB                  (16)
#define DBRP_TUR_CH2_DMY_FIL_INFO_FILLER_NUM_BIT_WIDTH                (6)
#define DBRP_TUR_CH2_DMY_FIL_INFO_FILLER_NUM_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_CH2_DMY_FIL_INFO_FILLER_NUM_BIT_WIDTH)-1) << DBRP_TUR_CH2_DMY_FIL_INFO_FILLER_NUM_BIT_LSB) )

#define DBRP_TUR_CH3_CB_SIZE_SMALL_CB_BIT_LSB                         (16)
#define DBRP_TUR_CH3_CB_SIZE_SMALL_CB_BIT_WIDTH                       (13)
#define DBRP_TUR_CH3_CB_SIZE_SMALL_CB_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_CH3_CB_SIZE_SMALL_CB_BIT_WIDTH)-1) << DBRP_TUR_CH3_CB_SIZE_SMALL_CB_BIT_LSB) )

#define DBRP_TUR_CH3_CB_SIZE_LARGE_CB_BIT_LSB                         (0)
#define DBRP_TUR_CH3_CB_SIZE_LARGE_CB_BIT_WIDTH                       (13)
#define DBRP_TUR_CH3_CB_SIZE_LARGE_CB_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_CH3_CB_SIZE_LARGE_CB_BIT_WIDTH)-1) << DBRP_TUR_CH3_CB_SIZE_LARGE_CB_BIT_LSB) )

#define DBRP_TUR_CH3_CBNUM_SMALL_CB_BIT_LSB                           (16)
#define DBRP_TUR_CH3_CBNUM_SMALL_CB_BIT_WIDTH                         (5)
#define DBRP_TUR_CH3_CBNUM_SMALL_CB_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_CH3_CBNUM_SMALL_CB_BIT_WIDTH)-1) << DBRP_TUR_CH3_CBNUM_SMALL_CB_BIT_LSB) )

#define DBRP_TUR_CH3_CBNUM_LARGE_CB_BIT_LSB                           (0)
#define DBRP_TUR_CH3_CBNUM_LARGE_CB_BIT_WIDTH                         (5)
#define DBRP_TUR_CH3_CBNUM_LARGE_CB_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_CH3_CBNUM_LARGE_CB_BIT_WIDTH)-1) << DBRP_TUR_CH3_CBNUM_LARGE_CB_BIT_LSB) )

#define DBRP_TUR_CH3_DMY_FIL_INFO_FILLER_NUM_BIT_LSB                  (16)
#define DBRP_TUR_CH3_DMY_FIL_INFO_FILLER_NUM_BIT_WIDTH                (6)
#define DBRP_TUR_CH3_DMY_FIL_INFO_FILLER_NUM_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_CH3_DMY_FIL_INFO_FILLER_NUM_BIT_WIDTH)-1) << DBRP_TUR_CH3_DMY_FIL_INFO_FILLER_NUM_BIT_LSB) )

#define DBRP_TUR_CH4_CB_SIZE_SMALL_CB_BIT_LSB                         (16)
#define DBRP_TUR_CH4_CB_SIZE_SMALL_CB_BIT_WIDTH                       (13)
#define DBRP_TUR_CH4_CB_SIZE_SMALL_CB_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_CH4_CB_SIZE_SMALL_CB_BIT_WIDTH)-1) << DBRP_TUR_CH4_CB_SIZE_SMALL_CB_BIT_LSB) )

#define DBRP_TUR_CH4_CB_SIZE_LARGE_CB_BIT_LSB                         (0)
#define DBRP_TUR_CH4_CB_SIZE_LARGE_CB_BIT_WIDTH                       (13)
#define DBRP_TUR_CH4_CB_SIZE_LARGE_CB_BIT_MASK                        ((UINT32) (((1<<DBRP_TUR_CH4_CB_SIZE_LARGE_CB_BIT_WIDTH)-1) << DBRP_TUR_CH4_CB_SIZE_LARGE_CB_BIT_LSB) )

#define DBRP_TUR_CH4_CBNUM_SMALL_CB_BIT_LSB                           (16)
#define DBRP_TUR_CH4_CBNUM_SMALL_CB_BIT_WIDTH                         (5)
#define DBRP_TUR_CH4_CBNUM_SMALL_CB_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_CH4_CBNUM_SMALL_CB_BIT_WIDTH)-1) << DBRP_TUR_CH4_CBNUM_SMALL_CB_BIT_LSB) )

#define DBRP_TUR_CH4_CBNUM_LARGE_CB_BIT_LSB                           (0)
#define DBRP_TUR_CH4_CBNUM_LARGE_CB_BIT_WIDTH                         (5)
#define DBRP_TUR_CH4_CBNUM_LARGE_CB_BIT_MASK                          ((UINT32) (((1<<DBRP_TUR_CH4_CBNUM_LARGE_CB_BIT_WIDTH)-1) << DBRP_TUR_CH4_CBNUM_LARGE_CB_BIT_LSB) )

#define DBRP_TUR_CH4_DMY_FIL_INFO_FILLER_NUM_BIT_LSB                  (16)
#define DBRP_TUR_CH4_DMY_FIL_INFO_FILLER_NUM_BIT_WIDTH                (6)
#define DBRP_TUR_CH4_DMY_FIL_INFO_FILLER_NUM_BIT_MASK                 ((UINT32) (((1<<DBRP_TUR_CH4_DMY_FIL_INFO_FILLER_NUM_BIT_WIDTH)-1) << DBRP_TUR_CH4_DMY_FIL_INFO_FILLER_NUM_BIT_LSB) )

#endif /* __RXBRP_WCTL_TUR_REGS_H__ */
