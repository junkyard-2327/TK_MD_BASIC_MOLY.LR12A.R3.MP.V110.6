#ifndef __CUIF_WCDMA_HSRP_H__
#define __CUIF_WCDMA_HSRP_H__

// ----------------- CUIF_WCDMA_HSRP Register Definition -------------------
typedef volatile struct {
    kal_uint32 HSRP_PAR1;                                                                 // 0x0000
    kal_uint32 HSRP_SW_IMB;                                                               // 0x0004
    kal_uint32 HSRP_DBG0;                                                                 // 0x0008
    kal_uint32 HSRP_DBG1;                                                                 // 0x000C
    kal_uint32 HSRP_DBG2;                                                                 // 0x0010
    kal_uint32 HSRP_CPICH_Fn_SIR[5];                                                      // 0x0014..0x0024
    kal_uint32 HSRP_CPICH_CQI_RPT0;                                                       // 0x0028
    kal_uint32 HSRP_CPICH_CQI_RPT1;                                                       // 0x002C
    kal_uint32 HSRP_CPICH_CQI_RPT2;                                                       // 0x0030
} CUIF_WCDMA_HSRP_REGS, *PCUIF_WCDMA_HSRP_REGS;

// ---------- CUIF_WCDMA_HSRP word-offset  ----------
#define O_CUIF_WCDMA_HSRP_HSRP_PAR1                                                       (0)
#define O_CUIF_WCDMA_HSRP_HSRP_SW_IMB                                                     (1)
#define O_CUIF_WCDMA_HSRP_HSRP_DBG0                                                       (2)
#define O_CUIF_WCDMA_HSRP_HSRP_DBG1                                                       (3)
#define O_CUIF_WCDMA_HSRP_HSRP_DBG2                                                       (4)
#define O_CUIF_WCDMA_HSRP_HSRP_CPICH_Fn_SIR(i)                                            (5 + (i))
#define O_CUIF_WCDMA_HSRP_HSRP_CPICH_CQI_RPT0                                             (10)
#define O_CUIF_WCDMA_HSRP_HSRP_CPICH_CQI_RPT1                                             (11)
#define O_CUIF_WCDMA_HSRP_HSRP_CPICH_CQI_RPT2                                             (12)

// ---------- HSRP_PAR1 bit-field ----------
#define P_CUIF_WCDMA_HSRP_HSRP_PAR1_EI_OC_METHOD                                          (2)
#define L_CUIF_WCDMA_HSRP_HSRP_PAR1_EI_OC_METHOD                                          (2)
#define M_CUIF_WCDMA_HSRP_HSRP_PAR1_EI_OC_METHOD                                          (0x0000000C)
#define P_CUIF_WCDMA_HSRP_HSRP_PAR1_EI_SC_METHOD                                          (0)
#define L_CUIF_WCDMA_HSRP_HSRP_PAR1_EI_SC_METHOD                                          (2)
#define M_CUIF_WCDMA_HSRP_HSRP_PAR1_EI_SC_METHOD                                          (0x00000003)

// ---------- HSRP_SW_IMB bit-field ----------
#define P_CUIF_WCDMA_HSRP_HSRP_SW_IMB_INVSNR_LB                                           (0)
#define L_CUIF_WCDMA_HSRP_HSRP_SW_IMB_INVSNR_LB                                           (6)
#define M_CUIF_WCDMA_HSRP_HSRP_SW_IMB_INVSNR_LB                                           (0x0000003F)

// ---------- HSRP_DBG0 bit-field ----------
#define P_CUIF_WCDMA_HSRP_HSRP_DBG0_ECIOR_SFRM                                            (16)
#define L_CUIF_WCDMA_HSRP_HSRP_DBG0_ECIOR_SFRM                                            (8)
#define M_CUIF_WCDMA_HSRP_HSRP_DBG0_ECIOR_SFRM                                            (0x00FF0000)
#define P_CUIF_WCDMA_HSRP_HSRP_DBG0_ECIOR_OC2_SFRM                                        (8)
#define L_CUIF_WCDMA_HSRP_HSRP_DBG0_ECIOR_OC2_SFRM                                        (8)
#define M_CUIF_WCDMA_HSRP_HSRP_DBG0_ECIOR_OC2_SFRM                                        (0x0000FF00)
#define P_CUIF_WCDMA_HSRP_HSRP_DBG0_ECIOR_OC_SFRM                                         (0)
#define L_CUIF_WCDMA_HSRP_HSRP_DBG0_ECIOR_OC_SFRM                                         (8)
#define M_CUIF_WCDMA_HSRP_HSRP_DBG0_ECIOR_OC_SFRM                                         (0x000000FF)

// ---------- HSRP_DBG1 bit-field ----------
#define P_CUIF_WCDMA_HSRP_HSRP_DBG1_IOC1_SFRM                                             (16)
#define L_CUIF_WCDMA_HSRP_HSRP_DBG1_IOC1_SFRM                                             (10)
#define M_CUIF_WCDMA_HSRP_HSRP_DBG1_IOC1_SFRM                                             (0x03FF0000)
#define P_CUIF_WCDMA_HSRP_HSRP_DBG1_POW_H2S_SFRM                                          (0)
#define L_CUIF_WCDMA_HSRP_HSRP_DBG1_POW_H2S_SFRM                                          (7)
#define M_CUIF_WCDMA_HSRP_HSRP_DBG1_POW_H2S_SFRM                                          (0x0000007F)

// ---------- HSRP_DBG2 bit-field ----------
#define P_CUIF_WCDMA_HSRP_HSRP_DBG2_IOR_SFRM                                              (16)
#define L_CUIF_WCDMA_HSRP_HSRP_DBG2_IOR_SFRM                                              (12)
#define M_CUIF_WCDMA_HSRP_HSRP_DBG2_IOR_SFRM                                              (0x0FFF0000)
#define P_CUIF_WCDMA_HSRP_HSRP_DBG2_IOC2_SFRM                                             (0)
#define L_CUIF_WCDMA_HSRP_HSRP_DBG2_IOC2_SFRM                                             (10)
#define M_CUIF_WCDMA_HSRP_HSRP_DBG2_IOC2_SFRM                                             (0x000003FF)

// ---------- HSRP_CPICH_Fn_SIR bit-field ----------
#define P_CUIF_WCDMA_HSRP_HSRP_CPICH_Fn_SIR_CPICH_SIR                                     (0)
#define L_CUIF_WCDMA_HSRP_HSRP_CPICH_Fn_SIR_CPICH_SIR                                     (11)
#define M_CUIF_WCDMA_HSRP_HSRP_CPICH_Fn_SIR_CPICH_SIR                                     (0x000007FF)

// ---------- HSRP_CPICH_CQI_RPT0 bit-field ----------
#define P_CUIF_WCDMA_HSRP_HSRP_CPICH_CQI_RPT0_CPICH_POW_CQI                               (0)
#define L_CUIF_WCDMA_HSRP_HSRP_CPICH_CQI_RPT0_CPICH_POW_CQI                               (22)
#define M_CUIF_WCDMA_HSRP_HSRP_CPICH_CQI_RPT0_CPICH_POW_CQI                               (0x003FFFFF)

// ---------- HSRP_CPICH_CQI_RPT1 bit-field ----------
#define P_CUIF_WCDMA_HSRP_HSRP_CPICH_CQI_RPT1_DSCH_POW_CQI                                (0)
#define L_CUIF_WCDMA_HSRP_HSRP_CPICH_CQI_RPT1_DSCH_POW_CQI                                (30)
#define M_CUIF_WCDMA_HSRP_HSRP_CPICH_CQI_RPT1_DSCH_POW_CQI                                (0x3FFFFFFF)

// ---------- HSRP_CPICH_CQI_RPT2 bit-field ----------
#define P_CUIF_WCDMA_HSRP_HSRP_CPICH_CQI_RPT2_NPOW_POW_CQI                                (0)
#define L_CUIF_WCDMA_HSRP_HSRP_CPICH_CQI_RPT2_NPOW_POW_CQI                                (15)
#define M_CUIF_WCDMA_HSRP_HSRP_CPICH_CQI_RPT2_NPOW_POW_CQI                                (0x00007FFF)

#endif // __CUIF_WCDMA_HSRP_H__
