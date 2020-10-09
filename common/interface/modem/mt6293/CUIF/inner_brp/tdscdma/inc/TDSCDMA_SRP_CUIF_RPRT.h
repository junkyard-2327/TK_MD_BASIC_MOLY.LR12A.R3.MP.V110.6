#ifndef __TDSCDMA_SRP_CUIF_RPRT_H__
#define __TDSCDMA_SRP_CUIF_RPRT_H__

// ----------------- TDSCDMA_SRP_CUIF_RPRT Register Definition -------------------
typedef volatile struct {
    kal_uint32 TDDSRP_DDFOE_AFC;                                                          // 0x02B0
    kal_uint32 TDDSRP_SB_NUM;                                                             // 0x02B4
    kal_uint32 TDDSRP_PICH_MAX_SIR;                                                       // 0x02B8
    kal_uint32 TDDSRP_PICH_RES;                                                           // 0x02BC
    kal_uint32 RPRT_RESV[4];                                                              // 0x02C0..0x02CC
} TDSCDMA_SRP_CUIF_RPRT_REGS, *PTDSCDMA_SRP_CUIF_RPRT_REGS;

// ---------- TDSCDMA_SRP_CUIF_RPRT word-offset  ----------
#define O_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_DDFOE_AFC                                          (0)
#define O_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_SB_NUM                                             (1)
#define O_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_MAX_SIR                                       (2)
#define O_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES                                           (3)
#define O_TDSCDMA_SRP_CUIF_RPRT_RPRT_RESV(i)                                              (4 + (i))

// ---------- TDDSRP_DDFOE_AFC bit-field ----------
#define P_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_DDFOE_AFC_DDFOE_THETA                              (0)
#define L_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_DDFOE_AFC_DDFOE_THETA                              (16)
#define M_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_DDFOE_AFC_DDFOE_THETA                              (0x0000FFFF)

// ---------- TDDSRP_SB_NUM bit-field ----------
#define P_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_SB_NUM_SB_NUM2                                     (16)
#define L_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_SB_NUM_SB_NUM2                                     (7)
#define M_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_SB_NUM_SB_NUM2                                     (0x007F0000)
#define P_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_SB_NUM_SB_NUM1                                     (0)
#define L_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_SB_NUM_SB_NUM1                                     (11)
#define M_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_SB_NUM_SB_NUM1                                     (0x000007FF)

// ---------- TDDSRP_PICH_MAX_SIR bit-field ----------
#define P_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_MAX_SIR_PICH_MAX_SIR                          (0)
#define L_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_MAX_SIR_PICH_MAX_SIR                          (16)
#define M_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_MAX_SIR_PICH_MAX_SIR                          (0x0000FFFF)

// ---------- TDDSRP_PICH_RES bit-field ----------
#define P_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES_PICH_FBIN_SEL                             (20)
#define L_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES_PICH_FBIN_SEL                             (3)
#define M_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES_PICH_FBIN_SEL                             (0x00700000)
#define P_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES_PICH_CBIN_SEL                             (17)
#define L_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES_PICH_CBIN_SEL                             (3)
#define M_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES_PICH_CBIN_SEL                             (0x000E0000)
#define P_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES_PICH_PI_HARD                              (16)
#define L_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES_PICH_PI_HARD                              (1)
#define M_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES_PICH_PI_HARD                              (0x00010000)
#define P_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES_PICH_PI_SOFT                              (0)
#define L_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES_PICH_PI_SOFT                              (16)
#define M_TDSCDMA_SRP_CUIF_RPRT_TDDSRP_PICH_RES_PICH_PI_SOFT                              (0x0000FFFF)

// ---------- RPRT_RESV bit-field ----------
#define P_TDSCDMA_SRP_CUIF_RPRT_RPRT_RESV_RESV                                            (0)
#define L_TDSCDMA_SRP_CUIF_RPRT_RPRT_RESV_RESV                                            (32)
#define M_TDSCDMA_SRP_CUIF_RPRT_RPRT_RESV_RESV                                            (0xFFFFFFFF)

#endif // __TDSCDMA_SRP_CUIF_RPRT_H__
