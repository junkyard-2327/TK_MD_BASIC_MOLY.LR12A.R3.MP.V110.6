#ifndef __BIGRAM_LTE_H__
#define __BIGRAM_LTE_H__

#include "bigram.h"
#include "bigram_coef.h"
#include "bigram_lte_working.h"

/* GUIDELINE
 *
 * 1. If memory block is pool such as DMEM/VMEM in LTE, since we have separate memory manager, then layer-1 declaration is just enough
 *
 * 2. Layer-2 decomposes the memory by struct {} and BYTE64[] to separate memory of each modules.
 *    - If the memory is owned by single module, then we can skip this step
 *    - It's reasonable that each module's starting address is 64-byte alignment to honor BigRAM implementation
 *    - Use BYTE64() as container to hold all vectors of modules
 *    - Refer to bigram_grp0_coef_lte_t as an example
 *
 * 3. Layer-3 decomposes the memory by user's requirement. Typically 2 methods:
 *    - Declare layer-3 struct {} to hold all vectors like layer-1 & layer-2
 *      * Use this way, if the vector data type is 8-bit aligned
 *    - Declare layer-3 vectors by #define of {BASE, SYM}
 *      * For example, data type is 20bits per IQ. Each vector may not byte-aligned
 *      * Users could only access these vectors by {BASE, SYM} pair
 */



/* ---------- */
// BIGRAM_LTE_NON_OVERLAY_ADDR

// SLIDING FFT
#define POS_SLIDE_NUM_TD_SAMPLE     ( 730 * 2 + 2048 + 12)
#define POS_SLIDE_NUM_FD_SAMPLE     ( 1200 )
// INI SEA
#define POS_INIS_NUM_FD_SAMPLE      ( 200 * 8 )
#define POS_INIS_NUM_SAMPLE_CIR     512
#define POS_INIS_NUM_SAMPLE_4CIR    ( POS_INIS_NUM_SAMPLE_CIR * 4 )
// RSTD
#define POS_RSTD_NUM_SAMPLE_CIR     2048
#define POS_AGC_TOTAL_NUMBER        (( 1 + 1 + (3 + 1) * 9 + 2))    // ( 1 delay_path + 1 begin + (3 changes per SF + 1 16-bytes alignment) * 9 SF + 2 16-bytes alignment )
typedef union {
    kal_uint8 container[CEILING_BYTE64(21632)];

    union {
        struct {
            kal_uint16 td_buf[POS_SLIDE_NUM_TD_SAMPLE]; // 2 bytes * num_sample
            kal_uint16 fd_buf[3][POS_SLIDE_NUM_FD_SAMPLE];
            kal_uint32 agc_info[2][POS_AGC_TOTAL_NUMBER];
        } sliding_fft;

        struct {
            kal_uint16  fd_buf[POS_INIS_NUM_FD_SAMPLE]; // 2 bytes * num_sample
            kal_uint16  cir_buf[3][POS_INIS_NUM_SAMPLE_4CIR];
            kal_uint8   pdp_buf[3][POS_INIS_NUM_SAMPLE_4CIR];
        } inis;
        struct {
            kal_uint16  fd_buf[2][POS_INIS_NUM_FD_SAMPLE]; // 2 bytes * num_sample
            kal_uint32  cir_buf[POS_RSTD_NUM_SAMPLE_CIR];
            kal_uint16  pdp_buf[POS_RSTD_NUM_SAMPLE_CIR];
        } rstd;
    } payload;
} bigram_lte_pos_t;


#define NUM_CSI_SF_SET      (4)    // 3 for PCC + 1 for SCC
#define CSI_SF_SET_PER_TX_RX_SIZE (250) // [100 RS * 2.5 (884 FMT)]
#define CSI_SF_SET_SIZE     (2 * 4 * CSI_SF_SET_PER_TX_RX_SIZE) // [2RX * 4TX * 100RS*2.5(884 FMT)]
#define CSI_PMI_MIAR_SIZE   (512) // (3+1) set * (32 + 16*2) PMI * 2 bytes
#define CSI_CQI_MIAR_SIZE   (624) // (3+1) set * (26 + 26*2) WB/SB CQI * 2 bytes

typedef union {
    kal_uint8 container[CEILING_BYTE64(9136)];
    struct {
        kal_uint8 sf_set_buf[NUM_CSI_SF_SET][CSI_SF_SET_SIZE]; // [SF SET][RX*TX*SAMPLE*(884 FMT)]
        kal_uint8 pmi_mi_ar[CSI_PMI_MIAR_SIZE];
        kal_uint8 cqi_mi_ar[CSI_CQI_MIAR_SIZE];
    } payload;
} bigram_lte_csi_t;

typedef union {
    kal_uint8 container[CEILING_BYTE64(4672)];
    struct {
        kal_uint8 fws_pdp_tx_comb[1280];
        kal_uint8 rtp_ar_buff[640];
        kal_uint8 tde_ar_buff[640];
        kal_uint8 rtp_pdp_ref[1028];
        kal_uint8 tde_pdp_ref[1028];
    } payload;
} bigram_lte_rtp_tde_t;

typedef union {
    kal_uint8 container[BIGRAM_LTE_NON_OVERLAY_SZ];
    struct {
        bigram_lte_pos_t            pos;
        bigram_lte_csi_t            csi;
        bigram_lte_rtp_tde_t        rtp_tde;
    } payload;
} bigram_lte_non_overlay_t;

// POS
    // SLIDING FFT
    #define BIGRAM_LTE_POS_S_TD_ADDR    (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.pos.payload.sliding_fft.td_buf))
    #define BIGRAM_LTE_POS_S_FD_ADDR    (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.pos.payload.sliding_fft.fd_buf))
    #define BIGRAM_LTE_POS_S_AGC_RX0_ADDR   (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.pos.payload.sliding_fft.agc_info[0][0]))
    #define BIGRAM_LTE_POS_S_AGC_RX1_ADDR   (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.pos.payload.sliding_fft.agc_info[1][0]))


    // INITIAL TIME SEARCH
    #define BIGRAM_LTE_POS_I_FD_ADDR    (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.pos.payload.inis.fd_buf))
    #define BIGRAM_LTE_POS_I_CIR_ADDR   (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.pos.payload.inis.cir_buf))
    #define BIGRAM_LTE_POS_I_PDP_ADDR   (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.pos.payload.inis.pdp_buf))

    // RSTD
    #define BIGRAM_LTE_POS_R_FD0_ADDR   (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.pos.payload.rstd.fd_buf[0][0]))
    #define BIGRAM_LTE_POS_R_FD1_ADDR   (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.pos.payload.rstd.fd_buf[1][0]))
    #define BIGRAM_LTE_POS_R_CIR_ADDR   (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.pos.payload.rstd.cir_buf))
    #define BIGRAM_LTE_POS_R_PDP_ADDR   (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.pos.payload.rstd.pdp_buf))
    
// CSI
    #define BIGRAM_LTE_CSI_SF_SET_BUF_ADDR   (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.csi.payload.sf_set_buf))
    #define BIGRAM_LTE_CSI_PMI_MI_AR_ADDR    (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.csi.payload.pmi_mi_ar))
    #define BIGRAM_LTE_CSI_CQI_MI_AR_ADDR    (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.csi.payload.cqi_mi_ar))


// RTP_TDE
    #define BIGRAM_LTE_SC_FWS_PDP_TX_COMB_ADDR  (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.rtp_tde.payload.fws_pdp_tx_comb))  
    #define BIGRAM_LTE_SC_TDE_PDP_AR_ADDR       (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.rtp_tde.payload.tde_ar_buff))  
    #define BIGRAM_LTE_SC_RTP_PDP_AR_ADDR       (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.rtp_tde.payload.rtp_ar_buff))
    #define BIGRAM_LTE_SC_TDE_PDP_REF_ADDR      (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.rtp_tde.payload.tde_pdp_ref))
    #define BIGRAM_LTE_SC_RTP_PDP_REF_ADDR      (BIGRAM_LTE_NON_OVERLAY_ADDR + offsetof(bigram_lte_non_overlay_t, payload.rtp_tde.payload.rtp_pdp_ref))

/* ---------- */
// BIGRAM_LTE_NO_CC_ADDR


#define CRSCE_TDI_COEF_HW_SLOW_SIZE        (CEILING_BYTE64(2912)) // =2944
#define CRSCE_OC_ALP_BET_PIRC_SIZE         (CEILING_BYTE64(600))  // =640
#define CRSCE_OC_ALPHA_PIRC_SIZE           (CEILING_BYTE64(400))  // =448
#define PIRC_HW_PINGPONG_BUF               2
#define CRSCE_SC0_RLM_BUFFER_SIZE          (CEILING_BYTE64(4000)) // =4032
#define CRSCE_NO_CC_TOTAL                  (CRSCE_TDI_COEF_HW_SLOW_SIZE*3+CRSCE_OC_ALP_BET_PIRC_SIZE*PIRC_HW_PINGPONG_BUF+CRSCE_OC_ALPHA_PIRC_SIZE+CRSCE_SC0_RLM_BUFFER_SIZE) // =10496

#if CRSCE_NO_CC_TOTAL != 14592
    #error "Structure bigram_lte_ulcce_no_cc_t container size error"
#endif
typedef union {
    kal_uint8 container[CEILING_BYTE64(CRSCE_NO_CC_TOTAL)]; // =10496

    struct {
        kal_uint8 sc0_tdi_coeff_forhw_slow[CRSCE_TDI_COEF_HW_SLOW_SIZE];    // SC0, rEightBit, fixed point
        kal_uint8 oc1_tdi_coeff_forhw_slow[CRSCE_TDI_COEF_HW_SLOW_SIZE];    // SC1 or OC1, rEightBit, fixed point   x
        kal_uint8 oc0_tdi_coeff_forhw_slow[CRSCE_TDI_COEF_HW_SLOW_SIZE];    // OC0, rEightBit, fixed point          x
        kal_uint8 oc_pirc_pdsch_alpha_beta[PIRC_HW_PINGPONG_BUF][CRSCE_OC_ALP_BET_PIRC_SIZE];                 // 1/5/10 floating point, cHalf
        kal_uint8 oc_pirc_cmimo_alpha_beta[CRSCE_OC_ALPHA_PIRC_SIZE];                 // 1/5/10 floating point, cHalf         x
        kal_uint8 sc0_rlm_buffer[CRSCE_SC0_RLM_BUFFER_SIZE];
    } payload;
} bigram_lte_ulcce_no_cc_t;

typedef union {
    kal_uint8 container[CEILING_BYTE64(7600)];
    struct {
        kal_uint8 sym7_slow_ce[6000];
        kal_uint8 ipd_rvv[2][800];
    } payload;
} bigram_lte_ipd_t;

typedef union {
    kal_uint8 container[CEILING_BYTE64(200)];

    struct {
    } payload;
} bigram_lte_agc_afc_t;

typedef union {
#if defined(MT6293) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768) 
    kal_uint8 container[CEILING_BYTE64(644)];
    struct {
        kal_uint8 acir[640];
        kal_uint8 top_buf[2];
        kal_uint8 dowm_buf[2];
    } payload;
#elif defined(MT6293L17) || defined(MT6739)

#ifdef __TBMIMO_ON_ZION__
#define CRS_DET_CONTAINER_SZ 3
#define CRS_DET_ACIR_SZ 1
#define CRS_DET_TOP_BUF_SZ 1
#define DOWM_BUF_SZ 1
#else
#define CRS_DET_CONTAINER_SZ 644
#define CRS_DET_ACIR_SZ 640
#define CRS_DET_TOP_BUF_SZ 2
#define DOWM_BUF_SZ 2
#endif

    kal_uint8 container[CEILING_BYTE64(CRS_DET_CONTAINER_SZ)];
    struct {
        kal_uint8 acir[CRS_DET_ACIR_SZ];
        kal_uint8 top_buf[CRS_DET_TOP_BUF_SZ];
        kal_uint8 dowm_buf[DOWM_BUF_SZ];
    } payload; 

#endif

} bigram_lte_crsdet_t;

typedef union {
#if defined(MT6293) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768) 
    kal_uint8 container[CEILING_BYTE64(1536)];
    struct {
        kal_uint8 fwssd_short_pdp_ar_oc[1280];
        kal_uint8 fwssd_low_snr_mask_oc[128];
        kal_uint8 fwssd_valid_mask_oc[64];
        kal_uint8 fwssd_noise_ar_oc[8];
    } payload;
#elif defined(MT6293L17) || defined(MT6739)

#ifdef __TBMIMO_ON_ZION__
#define FWSSD_OC_CONTAINER_SZ 4
#define FWSSD_OC_SHORT_PDP_AR_OC_SZ 1
#define FWSSD_OC_LOW_SNR_MASK_OC_SZ 1
#define FWSSD_OC_VALID_MASK_OC_SZ 1
#define FWSSD_OC_NOISE_AR_OC_SZ 1

#else
#define FWSSD_OC_CONTAINER_SZ 1536
#define FWSSD_OC_SHORT_PDP_AR_OC_SZ 1280
#define FWSSD_OC_LOW_SNR_MASK_OC_SZ 128
#define FWSSD_OC_VALID_MASK_OC_SZ 64
#define FWSSD_OC_NOISE_AR_OC_SZ 8

#endif

    kal_uint8 container[CEILING_BYTE64(FWSSD_OC_CONTAINER_SZ)];
    struct {
        kal_uint8 fwssd_short_pdp_ar_oc[FWSSD_OC_SHORT_PDP_AR_OC_SZ];
        kal_uint8 fwssd_low_snr_mask_oc[FWSSD_OC_LOW_SNR_MASK_OC_SZ];
        kal_uint8 fwssd_valid_mask_oc[FWSSD_OC_VALID_MASK_OC_SZ];
        kal_uint8 fwssd_noise_ar_oc[FWSSD_OC_NOISE_AR_OC_SZ];
    } payload;


#endif
} bigram_lte_fwssd_oc_t;

typedef union {
    kal_uint8 container[CEILING_BYTE64(12480)];

    struct {
        kal_uint8 cc0_sym0_llr[1200]; //800 RE * 12 bits /8 bits = 1200 bytes(CRS removed)
        kal_uint8 cc0_sym1_llr[1800];
        kal_uint8 cc0_sym2_llr[1800];
        kal_uint8 cc1_sym0_llr[1200];
        kal_uint8 cc1_sym1_llr[1800];
        kal_uint8 cc1_sym2_llr[1800];
        kal_uint8 pbch_llr[1440]; // address of pbch_llr[0] should be 64-byte aligned
        kal_uint8 phich_llr[192];
        kal_uint8 cc0_sp_factor[480]; //240 RE * 16 bits/8 bits = 480 bytes
        kal_uint8 cc1_sp_factor[480];
        kal_uint8 pbch_cc0_sp_factor[144]; //72 RE * 16 bits/8 bits = 144 bytes
        kal_uint8 pbch_cc1_sp_factor[144];
    } payload;
} bigram_lte_cmimo_t;

typedef union {
    kal_uint8 container[BIGRAM_LTE_NO_CC_SZ];
    struct {
        bigram_lte_ulcce_no_cc_t    ulcce;
#if defined(MT6293) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768) 
        bigram_lte_ipd_t            ipd;
        bigram_lte_crsdet_t         crsdet[2];
        bigram_lte_fwssd_oc_t       fwssd[2];
#elif defined(MT6293L17) || defined(MT6739)
        bigram_lte_crsdet_t         crsdet[1];
        bigram_lte_fwssd_oc_t       fwssd[1];
#endif
        bigram_lte_agc_afc_t        agc_afc;
        bigram_lte_cmimo_t          cmimo;
    } payload;
} bigram_lte_no_cc_t;

// ULCCE
    // HW SLOW CE COEF
    #define BIGRAM_LTE_SC0_TDI_COEF_FORHW_SLOW          (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.ulcce.payload.sc0_tdi_coeff_forhw_slow))
    #define BIGRAM_LTE_OC1_TDI_COEF_FORHW_SLOW          (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.ulcce.payload.oc1_tdi_coeff_forhw_slow))
    #define BIGRAM_LTE_OC0_TDI_COEF_FORHW_SLOW          (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.ulcce.payload.oc0_tdi_coeff_forhw_slow))
    #define DIFF_OCx_TDI_COEF_FORHW_SLOW                (BIGRAM_LTE_OC0_TDI_COEF_FORHW_SLOW - BIGRAM_LTE_OC1_TDI_COEF_FORHW_SLOW)    
    #define DIFF_SCx_TDI_COEF_FORHW_SLOW                (BIGRAM_LTE_OC1_TDI_COEF_FORHW_SLOW - BIGRAM_LTE_SC0_TDI_COEF_FORHW_SLOW)
    #define BIGRAM_LTE_OCx_TDI_COEF_FORHW_SLOW(x)       (BIGRAM_LTE_OC0_TDI_COEF_FORHW_SLOW - DIFF_OCx_TDI_COEF_FORHW_SLOW*x)
    #define BIGRAM_LTE_SCx_TDI_COEF_FORHW_SLOW(x)       (BIGRAM_LTE_SC0_TDI_COEF_FORHW_SLOW + DIFF_SCx_TDI_COEF_FORHW_SLOW*x)
    
    //PIRC
    #define BIGRAM_LTE_PIRC_PDSCH_HW_ALPHA_0            (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.ulcce.payload.oc_pirc_pdsch_alpha_beta[0][0]))
    #define BIGRAM_LTE_PIRC_PDSCH_HW_ALPHA_1            (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.ulcce.payload.oc_pirc_pdsch_alpha_beta[1][0]))
    #define BIGRAM_LTE_PIRC_PDSCH_HW_ALPHA(x)           (BIGRAM_LTE_PIRC_PDSCH_HW_ALPHA_0 + (BIGRAM_LTE_PIRC_PDSCH_HW_ALPHA_1 - BIGRAM_LTE_PIRC_PDSCH_HW_ALPHA_0) * x)
    #define BIGRAM_LTE_PIRC_PDSCH_HW_BETA_0             (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.ulcce.payload.oc_pirc_pdsch_alpha_beta[0][400]))
    #define BIGRAM_LTE_PIRC_PDSCH_HW_BETA_1             (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.ulcce.payload.oc_pirc_pdsch_alpha_beta[1][400]))
    #define BIGRAM_LTE_PIRC_PDSCH_HW_BETA(x)            (BIGRAM_LTE_PIRC_PDSCH_HW_BETA_0 + (BIGRAM_LTE_PIRC_PDSCH_HW_BETA_1 - BIGRAM_LTE_PIRC_PDSCH_HW_BETA_0) * x)
    #define BIGRAM_LTE_PIRC_CMIMO_ALPHA                 (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.ulcce.payload.oc_pirc_cmimo_alpha_beta[0]))
    //RLM
    #define BIGRAM_LTE_RLM_H_ADDR                       (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.ulcce.payload.sc0_rlm_buffer))

// CMIMO
    #define BIGRAM_LTE_CC_CMIMO_CC0_SYM0_LLR_ADDR       (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.cmimo.payload.cc0_sym0_llr))
    #define BIGRAM_LTE_CC_CMIMO_CC0_SYM1_LLR_ADDR       (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.cmimo.payload.cc0_sym1_llr))
    #define BIGRAM_LTE_CC_CMIMO_CC0_SYM2_LLR_ADDR       (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.cmimo.payload.cc0_sym2_llr))
    #define BIGRAM_LTE_CC_CMIMO_CC1_SYM0_LLR_ADDR       (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.cmimo.payload.cc1_sym0_llr))
    #define BIGRAM_LTE_CC_CMIMO_CC1_SYM1_LLR_ADDR       (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.cmimo.payload.cc1_sym1_llr))
    #define BIGRAM_LTE_CC_CMIMO_CC1_SYM2_LLR_ADDR       (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.cmimo.payload.cc1_sym2_llr))
    #define BIGRAM_LTE_CMIMO_PBCH_LLR_ADDR              (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.cmimo.payload.pbch_llr))
    #define BIGRAM_LTE_CMIMO_PHICH_LLR_ADDR             (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.cmimo.payload.phich_llr))
    #define BIGRAM_LTE_CC_CMIMO_CC0_SP_FAC_ADDR         (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.cmimo.payload.cc0_sp_factor))
    #define BIGRAM_LTE_CC_CMIMO_CC1_SP_FAC_ADDR         (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.cmimo.payload.cc1_sp_factor))
    #define BIGRAM_LTE_PBCHCMIMO_CC0_SP_FAC_ADDR        (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.cmimo.payload.pbch_cc0_sp_factor))
    #define BIGRAM_LTE_PBCHCMIMO_CC1_SP_FAC_ADDR        (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.cmimo.payload.pbch_cc1_sp_factor))

#if defined(MT6293) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
// IPD
    #define BIGRAM_LTE_IPD_SYM7_SLOWCE_ADDR             (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.ipd.payload.sym7_slow_ce))
    #define BIGRAM_LTE_IPD_IPD_RVV_ADDR(p)              (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.ipd.payload.ipd_rvv[p]))
#endif

// AGC_AFC

// CRSDET
    #define BIGRAM_LTE_OC_CRSDET_ACIR_ADDR(x)           (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.crsdet[x].payload.acir))
    #define BIGRAM_LTE_OC_CRSDET_TOP_BUF_ADDR(x)        (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.crsdet[x].payload.top_buf))
    #define BIGRAM_LTE_OC_CRSDET_DOWN_BUF_ADDR(x)       (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.crsdet[x].payload.down_buf))

// FWSSD
    #define OC_SHORT_PDP_AR_RX_OFFSET (0x280)
    #define OC_LOW_SNR_MASK_RX_OFFSET (0x40)
    #define OC_VALID_MASK_RX_OFFSET   (0x20)
    #define OC_NOISE_AR_RX_OFFSET     (0x4)

    #define BIGRAM_LTE_OC_FWSSD_SHORT_PDP_AR_ADDR(x)    (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.fwssd[x].payload.fwssd_short_pdp_ar_oc))
    #define BIGRAM_LTE_OC_FWSSD_LOW_SNR_MASK_ADDR(x)    (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.fwssd[x].payload.fwssd_low_snr_mask_oc))
    #define BIGRAM_LTE_OC_FWSSD_VALID_MASK_ADDR(x)      (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.fwssd[x].payload.fwssd_valid_mask_oc))
    #define BIGRAM_LTE_OC_FWSSD_NOISE_AR_ADDR(x)        (BIGRAM_LTE_NO_CC_ADDR + offsetof(bigram_lte_no_cc_t, payload.fwssd[x].payload.fwssd_noise_ar_oc))




/* ---------- */
// BIGRAM_LTE_CC_ADDR


typedef union {
    kal_uint8 container[CEILING_BYTE64(9152)];
    struct {
        kal_uint8 ctrl_ar[800];
        kal_uint8 data_ar[800];
        kal_uint8 data_td_acc[800];
        kal_uint8 oc_comp[800];
        kal_uint8 data_adap_ar[200];
        kal_uint8 ebne_ar[64];
        kal_uint8 ebne_seg_snr_ar_buff[64];
        struct {
            kal_uint8 scm2dmrs[400];
            kal_uint8 ctrl_swm[800];
            kal_uint8 data_swm[800];
            kal_uint8 data_swm_csi[800];
        } pingpong[2];
    } payload;
} bigram_lte_crsne_t;

typedef union {
    kal_uint8 container[CEILING_BYTE64(9152)];
    struct {
        kal_uint8 fwssd_short_pdp_ar_ap01[2560]; // 8/8/4 formate, for CRSCE ARPDP. 512 samples.
        kal_uint8 fwssd_short_pdp_ar_ap23[2560]; // 8/8/4 formate, for CRSCE ARPDP
        kal_uint8 fwssd_long_pdp_ar[2048];       // 1/5/10
        kal_uint8 mrs_fwssd_pdp_ar_ap4[1280];
        kal_uint8 fwssd_low_snr_mask_ap01[256]; // mask, 512bits 
        kal_uint8 fwssd_low_snr_mask_ap23[256]; // mask, 512bits 
        kal_uint8 fwssd_noise_ar_ap01[16];
        kal_uint8 fwssd_noise_ar_ap23[16];
        kal_uint8 mrs_fwssd_low_snr_mask_ap4[128];
        kal_uint8 mrs_fwssd_noise_ar_ap4[8];
    } payload;
} bigram_lte_fwssd_cc_t;

typedef union {
    kal_uint8 container[CEILING_BYTE64(1600)];
    struct {
        kal_uint8 md_acir_td_buff[960];
        kal_uint8 md_mse_coef_pre[512];
        kal_uint8 md_corr_vec_buff[80];
        kal_uint8 md_ar_buff[44];
    } payload;
} bigram_lte_md_t;


typedef union {
    kal_uint8 container[CEILING_BYTE64(900)];
    struct {
    } payload;
} bigram_lte_pirc_t;

#define DMRSCE_DMMSE_AP5C_SIZE         (1600) // =ceiling(1560), where 1560 = 10rank * 12RE * 13Sym.
#define DMRSCE_DMMSE_HZ_SIZE           (4160) // =1024*4 + 64, where 1024 = ceiling_64byte(400*20/8) for h_est(rx,ap) of each slot, and 64 is the extra buffer for AP5C.
#define DMRSNE_SWM_SIZE                (800)  
#define DMRSNE_AR_SIZE                 (800)    
#define DMRS_CC_TOTAL_SIZE             (DMRSCE_DMMSE_HZ_SIZE*2*2 + DMRSNE_SWM_SIZE*2*2 + DMRSNE_AR_SIZE*2) // = 21120

typedef union {
    kal_uint8 container[CEILING_BYTE64(21440)];
    struct {
        struct {
            kal_uint8 dmrsce_dmmse_ap5c[DMRSCE_DMMSE_AP5C_SIZE];                            // FXP 8  format, for hw data RE CE, 1560 samples.
            kal_uint8 dmrsce_dmmse_hz_slot0[DMRSCE_DMMSE_HZ_SIZE-DMRSCE_DMMSE_AP5C_SIZE];   // 8/8/4  format, for hw data RE CE, 1600 samples (ECP).
                                                                                            // Note that AP5C reuse the HZ slot0 buffer, so
                                                                                            // - AP78 H buffer include the AP5C buffer.
                                                                                            // - AP5  Z buffer is concate behine the AP5C buffer.
            kal_uint8 dmrsce_dmmse_hz_slot1[DMRSCE_DMMSE_HZ_SIZE];                          // 8/8/4  format, for hw data RE CE, 1600 samples (ECP).
            kal_uint8 dmrsne_swm_irc[DMRSNE_SWM_SIZE];                // 1/5/10 format, for DMC
            kal_uint8 dmrsne_swm_mimoic[DMRSNE_SWM_SIZE];             // 1/5/10 format, for DMC
        } pingpong[2];
        kal_uint8 dmrsne_ar_irc[DMRSNE_AR_SIZE];                  // 1/5/10 format, for dmrsne
        kal_uint8 dmrsne_ar_mimoic[DMRSNE_AR_SIZE];               // 1/5/10 format, for dmrsne
    } payload;
} bigram_lte_dmrsce_t;


#define CRSCE_PREDICT_BUF_SIZE          (CEILING_BYTE64(8000)) // =8000
#define CRSCE_TDI_COEF_FW_FAST_SIZE     (CEILING_BYTE64(384))  // =384
#define CRSCE_TDI_COEF_FW_SLOW_SIZE     (CEILING_BYTE64(384))  // =384
#define CRSCE_SC_RHC_PIRC_SIZE          (CEILING_BYTE64(400))  // =448
#define CRSCE_WEIGHTING_COEF_SIZE       (CEILING_BYTE64(8192)) // =8192
#define CRSCE_FAST_H_BUFFER_SIZE        (CEILING_BYTE64(24000)) //=24000
#define CRSCE_CC_TOTAL_SIZE             (CRSCE_PREDICT_BUF_SIZE+CRSCE_TDI_COEF_FW_FAST_SIZE+CRSCE_TDI_COEF_FW_SLOW_SIZE*2+CRSCE_SC_RHC_PIRC_SIZE+CRSCE_WEIGHTING_COEF_SIZE+CRSCE_FAST_H_BUFFER_SIZE) // =8000

#if CRSCE_CC_TOTAL_SIZE != 41792
    #error "Structure bigram_lte_ulcce_t container size error"
#endif

typedef union {
    kal_uint8 container[CRSCE_CC_TOTAL_SIZE];
    struct {
        kal_uint8 predict_buffer[CRSCE_PREDICT_BUF_SIZE];                   // SC+OC, c2CEFL32
        kal_uint8 tdi_coeff_forfw_fast[CRSCE_TDI_COEF_FW_FAST_SIZE];        // 1/5/10 floating point, rHalf
        kal_uint8 sc_tdi_coeff_forfw_slow[CRSCE_TDI_COEF_FW_SLOW_SIZE];     // 1/5/10 floating point, rHalf
        kal_uint8 oc_tdi_coeff_forfw_slow[CRSCE_TDI_COEF_FW_SLOW_SIZE];     // 1/5/10 floating point, rHalf
        kal_uint8 sc_rhc_pirc[CRSCE_SC_RHC_PIRC_SIZE];                      // 1/5/10 floating point, cHalf
	kal_uint8 weighting_coef[CRSCE_WEIGHTING_COEF_SIZE];                // 1/5/10 floating point, rHalf
	kal_uint8 fast_h_buffer[CRSCE_FAST_H_BUFFER_SIZE];
    } payload;
} bigram_lte_ulcce_t;


#define PBCH_CE_SIZE_PER_SYM            (CEILING_BYTE64(2880)) //=2880
#define PBCH_NE_SIZE                    (CEILING_BYTE64(96))  //=128
#define PBCH_IC_SIZE_PER_SYM            (CEILING_BYTE64(306)) //=320
#define PBCH_REBUILT_CRS_SIZE_PER_SYM   (CEILING_BYTE64(768)) //=256
#define PBCH_CC_TOTAL_SIZE             (PBCH_CE_SIZE_PER_SYM*4+PBCH_NE_SIZE+PBCH_IC_SIZE_PER_SYM*4+PBCH_REBUILT_CRS_SIZE_PER_SYM*2)

#if PBCH_CC_TOTAL_SIZE != 14464
    #error "Structure bigram_lte_pbchic_t container size error"
#endif

typedef union {
    kal_uint8 container[CEILING_BYTE64(14464)];
    struct {//CC + OC dimension
        kal_uint8 pbch_ce[4][PBCH_CE_SIZE_PER_SYM];//ap0~3 first, then rx0~1, then cc0~oc0
        kal_uint8 pbch_ne[PBCH_NE_SIZE];//cc0~oc0
        kal_uint8 pbch_ic[4][PBCH_IC_SIZE_PER_SYM];//raw y, rx0~1 first, then only cc0
        kal_uint8 rebuilt_crs[2][PBCH_REBUILT_CRS_SIZE_PER_SYM];//rx0~1 first, then cc0~oc0
    } payload;
} bigram_lte_pbchic_t;

#define NUM_NBI_SPUR  4
#define COR_BYTES     (NUM_NBI_SPUR*4)
#define PWR_BYTES     (NUM_NBI_SPUR*2)
#define INB_PWR_B     4  //4 bytes but only 16b are used
#define NBI_SIZE_BYTES ((COR_BYTES+PWR_BYTES+INB_PWR_B)*2)
typedef union {
    kal_uint8 container[CEILING_BYTE64(NBI_SIZE_BYTES)];

    struct {
        kal_uint8 dly_corr_rx0[COR_BYTES];
        kal_uint8 pwr_rx0[PWR_BYTES]; 
        kal_uint8 pwr_inband_rx0[INB_PWR_B];
        kal_uint8 dly_corr_rx1[COR_BYTES];
        kal_uint8 pwr_rx1[PWR_BYTES]; 
        kal_uint8 pwr_inband_rx1[INB_PWR_B];
    } payload;
} bigram_lte_nbi_t;

#define DMRS_OFFSET_PER_CW_PER_RX_PER_SAMPLE 125 //  (50 RB w/ 884 FMT)
#define DMRS_SAMPLE_NUM_PER_BLK             (50) // sample number
#define NUM_TOTAL_DMRS_SAMPLE (2 * 2 * 2 * 50) // 2 CW * 2 rx * 2 sample * 50 RB 

typedef union {
    kal_uint8 container[CEILING_BYTE64(1000)];

    struct {
        kal_uint8 dmrs_tracking_buffer[2][2][2][DMRS_OFFSET_PER_CW_PER_RX_PER_SAMPLE]; // n_pdsch <= 50: 2 CW * 2 rx * 2 sample * (50 RB w/ 884 FMT)
                                                                                       // n_pdsch > 50: 2 CW * 2 rx * 1 sample * (100 RB w/ 884 FMT)
    } payload;
} bigram_lte_csi_cc_t;

typedef union {
    kal_uint8 container[BIGRAM_LTE_CC_SZ];
    struct {
        bigram_lte_crsne_t      crsne;
        bigram_lte_fwssd_cc_t   fwssd;
        bigram_lte_md_t         md;
        bigram_lte_pirc_t       pirc;
        bigram_lte_dmrsce_t     dmrsce;
        bigram_lte_ulcce_t      ulcce;
        bigram_lte_pbchic_t     pbchic;
        bigram_lte_nbi_t        nbi;
        bigram_lte_csi_cc_t     csi;
    } payload;
} bigram_lte_cc_t;

// CRSNE
    #define BIGRAM_LTE_CC_CRSNE_CTRL_AR_ADDR(x)             (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.crsne.payload.ctrl_ar))
    #define BIGRAM_LTE_CC_CRSNE_DATA_AR_ADDR(x)             (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.crsne.payload.data_ar))
    #define BIGRAM_LTE_CC_CRSNE_DATA_TDAVG_ADDR(x)          (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.crsne.payload.data_td_acc))
    #define BIGRAM_LTE_CC_CRSNE_OC_COMP_ADDR(x)             (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.crsne.payload.oc_comp))
    #define BIGRAM_LTE_CC_CRSNE_DATA_ADAP_AR_ADDR(x)        (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.crsne.payload.data_adap_ar))
    #define BIGRAM_LTE_CC_CRSNE_EBNE_AR_ADDR(x)             (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.crsne.payload.ebne_ar))
    #define BIGRAM_LTE_CC_CRSNE_SEG_EBNE_AR_ADDR(x)         (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.crsne.payload.ebne_seg_snr_ar_buff))
    #define BIGRAM_LTE_CC_CRSNE_SCM2DMRS_ADDR(x,p)          (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.crsne.payload.pingpong[p].scm2dmrs))
    #define BIGRAM_LTE_CC_CRSNE_CTRL_SWM_ADDR(x,p)          (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.crsne.payload.pingpong[p].ctrl_swm))
    #define BIGRAM_LTE_CC_CRSNE_DATA_SWM_ADDR(x,p)          (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.crsne.payload.pingpong[p].data_swm))
    #define BIGRAM_LTE_CC_CRSNE_DATA_SWM_CSI_ADDR(x,p)      (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.crsne.payload.pingpong[p].data_swm_csi))

// FWSSD
    #define CC_SHORT_PDP_AR_RX_OFFSET  (0x500)
    #define CC_SHORT_PDP_AR_TX_OFFSET  (0x280)
    #define FWS_PDP_TXCMB_RX_OFFSET    (0x280)
    #define CC_LONG_PDP_AR_RX_OFFSET   (0x400)
    #define CC_LOW_SNR_MASK_RX_OFFSET  (0x80)
    #define CC_LOW_SNR_MASK_TX_OFFSET  (0x40)
    #define CC_NOISE_AR_RX_OFFSET      (0x8)
    #define CC_NOISE_AR_TX_OFFSET      (0x4)
    #define MRS_PDP_AR_RX_OFFSET       (0x280)
    #define MRS_LOW_SNR_MASK_RX_OFFSET (0x40)
    #define MRS_NOISE_AR_RX_OFFSET     (0x4)

    #define BIGRAM_LTE_CC_FWSSD_SHORT_PDP_AR_AP01_ADDR(x)    (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.fwssd.payload.fwssd_short_pdp_ar_ap01))
    #define BIGRAM_LTE_CC_FWSSD_SHORT_PDP_AR_AP23_ADDR(x)    (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.fwssd.payload.fwssd_short_pdp_ar_ap23))    
    #define BIGRAM_LTE_CC_FWSSD_LONG_PDP_AR_ADDR(x)          (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.fwssd.payload.fwssd_long_pdp_ar))
    #define BIGRAM_LTE_CC_FWSSD_LOW_SNR_MASK_AP01_ADDR(x)    (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.fwssd.payload.fwssd_low_snr_mask_ap01))
    #define BIGRAM_LTE_CC_FWSSD_LOW_SNR_MASK_AP23_ADDR(x)    (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.fwssd.payload.fwssd_low_snr_mask_ap23))
    #define BIGRAM_LTE_CC_FWSSD_NOISE_AR_AP01_ADDR(x)        (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.fwssd.payload.fwssd_noise_ar_ap01))
    #define BIGRAM_LTE_CC_FWSSD_NOISE_AR_AP23_ADDR(x)        (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.fwssd.payload.fwssd_noise_ar_ap23))
    #define BIGRAM_LTE_CC_MRS_FWSSD_PDP_AR_AP4_ADDR(x)       (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.fwssd.payload.mrs_fwssd_pdp_ar_ap4))
    #define BIGRAM_LTE_CC_MRS_FWSSD_NOISE_AR_AP4_ADDR(x)     (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.fwssd.payload.mrs_fwssd_noise_ar_ap4))
    #define BIGRAM_LTE_CC_MRS_FWSSD_LOW_SNR_MASK_AP4_ADDR(x) (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.fwssd.payload.mrs_fwssd_low_snr_mask_ap4))

// NBI
    #define BIGRAM_LTE_CC_NBI_RX0_ADDR(x)                    (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.nbi.payload.dly_corr_rx0))
    #define BIGRAM_LTE_CC_NBI_RX1_ADDR(x)                    (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.nbi.payload.dly_corr_rx1))

// CSI
    #define BIGRAM_LTE_CC_CSI_DMRS_TRACKING_BUFFER_ADDR(x)   (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.csi.payload.dmrs_tracking_buffer))

    /*
    * ARPDP AP01 BigRAM address layout 
    * ===========================================================
    *  RX0 AP0 -> sample offset = 0    , byte address offset = 0
    *  RX0 AP1 -> sample offset = 512  , byte address offset = 640
    *  RX1 AP0 -> sample offset = 1024 , byte address offset = 1280
    *  RX1 AP1 -> sample offset = 1536 , byte address offset = 1920
    *
    * ***Note, AP23 have the same layout and OC combine ap
    */
    // block size of a PDP, 512 samples
    #define FWSSD_SHORT_PDP_AR_BLK_BYTE     (512*10/8)
    
    // x: cc index, n: RX index {0,1}, m: AP0 or AP1 select {0,1}
    #define BIGRAM_LTE_CCx_FWSSD_SHORT_PDP_AR_AP01m_RXn_ADDR(x,n,m)   (BIGRAM_LTE_CC_FWSSD_SHORT_PDP_AR_AP01_ADDR(x) + (2*(n)+(m))*FWSSD_SHORT_PDP_AR_BLK_BYTE)
    #define BIGRAM_LTE_CCx_FWSSD_SHORT_PDP_AR_AP23m_RXn_ADDR(x,n,m)   (BIGRAM_LTE_CC_FWSSD_SHORT_PDP_AR_AP23_ADDR(x) + (2*(n)+(m))*FWSSD_SHORT_PDP_AR_BLK_BYTE)
    #define BIGRAM_LTE_CCx_FWSSD_SHORT_PDP_AR_AP4_RXn_ADDR(x, n)      (BIGRAM_LTE_CC_MRS_FWSSD_PDP_AR_AP4_ADDR(x) + n * FWSSD_SHORT_PDP_AR_BLK_BYTE)
    #define BIGRAM_LTE_OCx_FWSSD_SHORT_PDP_AR_RXn_ADDR(x,n)           (BIGRAM_LTE_OC_FWSSD_SHORT_PDP_AR_ADDR(x) + (n)*FWSSD_SHORT_PDP_AR_BLK_BYTE)

    /*
    * Low SNR Mask AP01 BigRAM address layout 
    * ===========================================================
    *  RX0 AP0 -> byte address offset = 0
    *  RX0 AP1 -> byte address offset = 64
    *  RX1 AP0 -> byte address offset = 128
    *  RX1 AP1 -> byte address offset = 192
    * 
    * ***Note, AP23 have the same layout and OC combine ap
    */
    // block size of Low SNR mask, 512bits=64bytes
    #define FWSSD_LOW_SNR_MASK_BLK_BYTE     (64)
    
    // x: cc index, n: RX index {0,1}, m: AP0 or AP1 select {0,1}
    #define BIGRAM_LTE_CCx_FWSSD_LOW_SNR_MASK_AP01m_RXn_ADDR(x,n,m)   (BIGRAM_LTE_CC_FWSSD_LOW_SNR_MASK_AP01_ADDR(x) + (2*(n)+(m))*FWSSD_LOW_SNR_MASK_BLK_BYTE) 
    #define BIGRAM_LTE_CCx_FWSSD_LOW_SNR_MASK_AP23m_RXn_ADDR(x,n,m)   (BIGRAM_LTE_CC_FWSSD_LOW_SNR_MASK_AP23_ADDR(x) + (2*(n)+(m))*FWSSD_LOW_SNR_MASK_BLK_BYTE) 
    #define BIGRAM_LTE_CCx_FWSSD_LOW_SNR_MASK_AP4_RXn_AADR(x,n)       (BIGRAM_LTE_CC_MRS_FWSSD_LOW_SNR_MASK_AP4_ADDR(x) + n * FWSSD_LOW_SNR_MASK_BLK_BYTE)
    #define BIGRAM_LTE_OCx_FWSSD_LOW_SNR_MASK_RXn_ADDR(x,n)           (BIGRAM_LTE_OC_FWSSD_LOW_SNR_MASK_ADDR(x) + (n)*FWSSD_LOW_SNR_MASK_BLK_BYTE) 



// MD
    #define BIGRAM_LTE_CC_MD_ACIR_TD_BUFF_ADDR(x)            (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.md.payload.md_acir_td_buff))
    #define BIGRAM_LTE_CC_MD_MSE_COEF_PRE_ADDR(x)            (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.md.payload.md_mse_coef_pre))
    #define BIGRAM_LTE_CC_MD_CORR_VEC_BUFF_ADDR(x)           (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.md.payload.md_corr_vec_buff))
    #define BIGRAM_LTE_CC_MD_AR_BUFF_ADDR(x)                 (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.md.payload.md_ar_buff))

// PIRC

// DMRSCE
    // x: cc index {0,1}, p: pingpong index {0,1}.
    #define BIGRAM_LTE_CC_DMRSCE_DMMSE_H_BUFF_SLOT0(x,p)      (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.dmrsce.payload.pingpong[p].dmrsce_dmmse_ap5c))
    #define BIGRAM_LTE_CC_DMRSCE_DMMSE_H_BUFF_SLOT1(x,p)      (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.dmrsce.payload.pingpong[p].dmrsce_dmmse_hz_slot1))
    #define BIGRAM_LTE_CC_DMRSCE_DMMSE_AP5_COEFF_W(x,p)       (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.dmrsce.payload.pingpong[p].dmrsce_dmmse_ap5c))
    #define BIGRAM_LTE_CC_DMRSCE_DMMSE_Z_BUFF_SLOT0(x,p)      (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.dmrsce.payload.pingpong[p].dmrsce_dmmse_hz_slot0))
    #define BIGRAM_LTE_CC_DMRSCE_DMMSE_Z_BUFF_SLOT1(x,p)      (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.dmrsce.payload.pingpong[p].dmrsce_dmmse_hz_slot1))
    #define BIGRAM_LTE_CC_DMRSNE_SWM_IRC(x,p)                 (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.dmrsce.payload.pingpong[p].dmrsne_swm_irc))
    #define BIGRAM_LTE_CC_DMRSNE_SWM_MIMOIC(x,p)              (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.dmrsce.payload.pingpong[p].dmrsne_swm_mimoic))
    #define BIGRAM_LTE_CC_DMRSNE_AR_IRC(x)                    (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.dmrsce.payload.dmrsne_ar_irc))
    #define BIGRAM_LTE_CC_DMRSNE_AR_MIMOIC(x)                 (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.dmrsce.payload.dmrsne_ar_mimoic))

// ULCCE
    #define BIGRAM_LTE_CC_CRSCE_PREDICT_BUFFER_ADDR(x)       (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.ulcce.payload.predict_buffer))
    #define BIGRAM_LTE_CC_CRSCE_TDI_COEF_FW_FAST_ADDR(x)     (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.ulcce.payload.tdi_coeff_forfw_fast))
    #define BIGRAM_LTE_CC_SCx_CRSCE_TDI_COEF_FW_SLOW_ADDR(x) (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.ulcce.payload.sc_tdi_coeff_forfw_slow))
    #define BIGRAM_LTE_CC_OCx_CRSCE_TDI_COEF_FW_SLOW_ADDR(x) (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.ulcce.payload.oc_tdi_coeff_forfw_slow))
    #define BIGRAM_LTE_CC_CRSCE_SC_RHC_PIRC_ADDR(x)          (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.ulcce.payload.sc_rhc_pirc))
    #define BIGRAM_LTE_CC_CRSCE_WEIGHTING_COEF_ADDR(x)       (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.ulcce.payload.weighting_coef))
    #define BIGRAM_LTE_CC_CRSCE_FAST_H_BUFFER_ADDR(x)        (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.ulcce.payload.fast_h_buffer))

// PBCHIC
    #define BIGRAM_LTE_CC_PBCHIC_PBCH_CE_ADDR(x, sym)           (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.pbchic.payload.pbch_ce[sym]))
    #define BIGRAM_LTE_CC_PBCHIC_PBCH_NE_ADDR(x)                (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.pbchic.payload.pbch_ne))
    #define BIGRAM_LTE_CC_PBCHIC_PBCH_IC_ADDR(x, sym)           (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.pbchic.payload.pbch_ic[sym]))
    #define BIGRAM_LTE_CC_PBCHIC_REBUILT_CRS_ADDR(x, sym)       (BIGRAM_LTE_CC_ADDR(x) + offsetof(bigram_lte_cc_t, payload.pbchic.payload.rebuilt_crs[sym]))


/* ---------- */
// BIGRAM_LTE_VMEM_ADDR

#define BIGRAM_VMEM_WB_ONE_LINE_SIZE   (CEILING_BYTE64(9000)) // =9024, blk=200, 20blk, c2cefl36
#define BIGRAM_VMEM_BE_ONE_LINE_SIZE   (CEILING_BYTE64(720))  // =768, blk=16, 20blk, c2cefl36
#define BIGRAM_VMEM_TOTAL_SIZE         (12*(BIGRAM_VMEM_WB_ONE_LINE_SIZE+BIGRAM_VMEM_BE_ONE_LINE_SIZE)) // =117504(real size)


#if defined(MT6293) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
    typedef union {
        kal_uint8 container[BIGRAM_LTE_VMEM_SZ]; // =117760(allocated size) > 117504(real size)
        struct {
            // BE SC0
            kal_uint8 be_sc0_vmem_rx0[BIGRAM_VMEM_BE_ONE_LINE_SIZE*2]; //40 blk
            kal_uint8 be_sc0_vmem_rx1[BIGRAM_VMEM_BE_ONE_LINE_SIZE*2]; //40 blk
            // WB SC0
            kal_uint8 wb_sc0_vmem_rx0[BIGRAM_VMEM_WB_ONE_LINE_SIZE*2]; //40 blk
            kal_uint8 wb_sc0_vmem_rx1[BIGRAM_VMEM_WB_ONE_LINE_SIZE*2]; //40 blk

            union {
                struct {
                    // BE SC1
                    kal_uint8 be_sc1_vmem_rx0[BIGRAM_VMEM_BE_ONE_LINE_SIZE*2]; //40 blk x
                    kal_uint8 be_sc1_vmem_rx1[BIGRAM_VMEM_BE_ONE_LINE_SIZE*2]; //40 blk x
                    // WB SC1
                    kal_uint8 wb_sc1_vmem_rx0[BIGRAM_VMEM_WB_ONE_LINE_SIZE*2]; //40 blk x
                    kal_uint8 wb_sc1_vmem_rx1[BIGRAM_VMEM_WB_ONE_LINE_SIZE*2]; //40 blk x

                    // BE OC0~1
                    kal_uint8 be_oc0_vmem_rx0[BIGRAM_VMEM_BE_ONE_LINE_SIZE];   //20 blk
                    kal_uint8 be_oc1_vmem_rx0[BIGRAM_VMEM_BE_ONE_LINE_SIZE];   //20 blk x
                    kal_uint8 be_oc0_vmem_rx1[BIGRAM_VMEM_BE_ONE_LINE_SIZE];   //20 blk
                    kal_uint8 be_oc1_vmem_rx1[BIGRAM_VMEM_BE_ONE_LINE_SIZE];   //20 blk x
                    
                    // WB OC0~1
                    kal_uint8 wb_oc0_vmem_rx0[BIGRAM_VMEM_WB_ONE_LINE_SIZE];   //20 blk 
                    kal_uint8 wb_oc1_vmem_rx0[BIGRAM_VMEM_WB_ONE_LINE_SIZE];   //20 blk x
                    kal_uint8 wb_oc0_vmem_rx1[BIGRAM_VMEM_WB_ONE_LINE_SIZE];   //20 blk
                    kal_uint8 wb_oc1_vmem_rx1[BIGRAM_VMEM_WB_ONE_LINE_SIZE];   //20 blk x
                } vmem;

                #define NOMA_REBRP_PER_CC_SZ (27008)
                kal_uint8 noma_rebrp[2][NOMA_REBRP_PER_CC_SZ];
            } vmem_share;
        } payload;
    } bigram_lte_vmem_t;

    // VMEM BE address  
    #define BIGRAM_LTE_BE_SC0_VMEM_RX0_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.be_sc0_vmem_rx0))
    #define BIGRAM_LTE_BE_SC0_VMEM_RX1_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.be_sc0_vmem_rx1))
    #define BIGRAM_LTE_BE_SC1_VMEM_RX0_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.be_sc1_vmem_rx0)) // x
    #define BIGRAM_LTE_BE_SC1_VMEM_RX1_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.be_sc1_vmem_rx1)) // x
    #define BIGRAM_LTE_BE_OC0_VMEM_RX0_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.be_oc0_vmem_rx0))
    #define BIGRAM_LTE_BE_OC0_VMEM_RX1_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.be_oc0_vmem_rx1))
    #define BIGRAM_LTE_BE_OC1_VMEM_RX0_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.be_oc1_vmem_rx0)) // x
    #define BIGRAM_LTE_BE_OC1_VMEM_RX1_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.be_oc1_vmem_rx1)) // x

    // VMEM WB address
    #define BIGRAM_LTE_WB_SC0_VMEM_RX0_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.wb_sc0_vmem_rx0))
    #define BIGRAM_LTE_WB_SC0_VMEM_RX1_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.wb_sc0_vmem_rx1))
    #define BIGRAM_LTE_WB_SC1_VMEM_RX0_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.wb_sc1_vmem_rx0)) // x
    #define BIGRAM_LTE_WB_SC1_VMEM_RX1_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.wb_sc1_vmem_rx1)) // x
    #define BIGRAM_LTE_WB_OC0_VMEM_RX0_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.wb_oc0_vmem_rx0))
    #define BIGRAM_LTE_WB_OC0_VMEM_RX1_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.wb_oc0_vmem_rx1))
    #define BIGRAM_LTE_WB_OC1_VMEM_RX0_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.wb_oc1_vmem_rx0)) // x
    #define BIGRAM_LTE_WB_OC1_VMEM_RX1_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.wb_oc1_vmem_rx1)) // x
    
    #define BIGRAM_LTE_NOMA_REBRP_ADDR(x)       (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.noma_rebrp[x]))


#elif defined(MT6293L17) || defined(MT6739)

    typedef union {
        kal_uint8 container[BIGRAM_LTE_VMEM_SZ]; // =117760(allocated size) > 117504(real size)
        struct {
            // BE SC0
            kal_uint8 be_sc0_vmem_rx0[BIGRAM_VMEM_BE_ONE_LINE_SIZE*2]; //40 blk
            kal_uint8 be_sc0_vmem_rx1[BIGRAM_VMEM_BE_ONE_LINE_SIZE*2]; //40 blk
            // WB SC0
            kal_uint8 wb_sc0_vmem_rx0[BIGRAM_VMEM_WB_ONE_LINE_SIZE*2]; //40 blk
            kal_uint8 wb_sc0_vmem_rx1[BIGRAM_VMEM_WB_ONE_LINE_SIZE*2]; //40 blk

            union {
                struct {
                    // BE OC0~1
                    kal_uint8 be_oc0_vmem_rx0[BIGRAM_VMEM_BE_ONE_LINE_SIZE];   //20 blk
                    kal_uint8 be_oc0_vmem_rx1[BIGRAM_VMEM_BE_ONE_LINE_SIZE];   //20 blk
                    
                    // WB OC0~1
                    kal_uint8 wb_oc0_vmem_rx0[BIGRAM_VMEM_WB_ONE_LINE_SIZE];   //20 blk 
                    kal_uint8 wb_oc0_vmem_rx1[BIGRAM_VMEM_WB_ONE_LINE_SIZE];   //20 blk
                } vmem;
#if __TBMIMO_ON_ZION__
             #define NOMA_TMIMO_SZ (117120)
             kal_uint8 noma_tmimo[NOMA_TMIMO_SZ];
#endif

            } vmem_share;
        } payload;
    } bigram_lte_vmem_t;

    // VMEM BE address  
    #define BIGRAM_LTE_BE_SC0_VMEM_RX0_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.be_sc0_vmem_rx0))
    #define BIGRAM_LTE_BE_SC0_VMEM_RX1_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.be_sc0_vmem_rx1))
    #define BIGRAM_LTE_BE_OC0_VMEM_RX0_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.be_oc0_vmem_rx0))
    #define BIGRAM_LTE_BE_OC0_VMEM_RX1_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.be_oc0_vmem_rx1))

    // VMEM WB address
    #define BIGRAM_LTE_WB_SC0_VMEM_RX0_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.wb_sc0_vmem_rx0))
    #define BIGRAM_LTE_WB_SC0_VMEM_RX1_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.wb_sc0_vmem_rx1))
    #define BIGRAM_LTE_WB_OC0_VMEM_RX0_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.wb_oc0_vmem_rx0))
    #define BIGRAM_LTE_WB_OC0_VMEM_RX1_ADDR     (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.vmem.wb_oc0_vmem_rx1))
#if __TBMIMO_ON_ZION__
    #define BIGRAM_LTE_NOMA_TMIMO_ADDR (BIGRAM_LTE_VMEM_ADDR + offsetof(bigram_lte_vmem_t, payload.vmem_share.noma_tmimo))
#endif

#endif



/* ---------- */
// BIGRAM_LTE_RMEM_ADDR

#define BIGRAM_RMEM_SC_ONE_LINE_SIZE   (CEILING_BYTE64(5200)) // =5248, blk=200, 13blk, c2cefl32
#define BIGRAM_RMEM_OC_ONE_LINE_SIZE   (CEILING_BYTE64(4800)) // =4800, blk=200, 12blk, c2cefl32
#define BIGRAM_RMEM_TOTAL_SIZE         (4*(BIGRAM_RMEM_SC_ONE_LINE_SIZE+BIGRAM_RMEM_OC_ONE_LINE_SIZE)) // =40192(real size)

#if defined(MT6293) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
    typedef union {
        kal_uint8 container[BIGRAM_LTE_RMEM_SZ]; // =40969(allocated) > 40192(real size)

        struct {
            union {
                #define NOMA_TMIMO_SZ (117000)
                kal_uint8 noma_tmimo[NOMA_TMIMO_SZ - BIGRAM_LTE_CC_SZ - BIGRAM_LTE_DMRS_OC_SZ];
                struct {
                    //OC1
                    kal_uint8 oc1_rmem_rx0[BIGRAM_RMEM_OC_ONE_LINE_SIZE]; //12 blk x
                    kal_uint8 oc1_rmem_rx1[BIGRAM_RMEM_OC_ONE_LINE_SIZE]; //12 blk x
                
                    //SC1
                    kal_uint8 sc1_rmem_rx0[BIGRAM_RMEM_SC_ONE_LINE_SIZE]; //13 blk x
                    kal_uint8 sc1_rmem_rx1[BIGRAM_RMEM_SC_ONE_LINE_SIZE]; //13 blk x

                    //OC0
                    kal_uint8 oc0_rmem_rx0[BIGRAM_RMEM_OC_ONE_LINE_SIZE]; //12 blk
                    kal_uint8 oc0_rmem_rx1[BIGRAM_RMEM_OC_ONE_LINE_SIZE]; //12 blk
                } rmem;
            } rmem_share;
        
            //SC0
            kal_uint8 sc0_rmem_rx0[BIGRAM_RMEM_SC_ONE_LINE_SIZE]; //13 blk
            kal_uint8 sc0_rmem_rx1[BIGRAM_RMEM_SC_ONE_LINE_SIZE]; //13 blk
        } payload;
    } bigram_lte_rmem_t;

    // RMEM address
    #define BIGRAM_LTE_SC0_RMEM_RX0_ADDR    (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.sc0_rmem_rx0))
    #define BIGRAM_LTE_SC0_RMEM_RX1_ADDR    (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.sc0_rmem_rx1))
    #define BIGRAM_LTE_SC1_RMEM_RX0_ADDR    (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.rmem_share.rmem.sc1_rmem_rx0))
    #define BIGRAM_LTE_SC1_RMEM_RX1_ADDR    (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.rmem_share.rmem.sc1_rmem_rx1))
    #define BIGRAM_LTE_OC0_RMEM_RX0_ADDR    (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.rmem_share.rmem.oc0_rmem_rx0))
    #define BIGRAM_LTE_OC0_RMEM_RX1_ADDR    (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.rmem_share.rmem.oc0_rmem_rx1))
    #define BIGRAM_LTE_OC1_RMEM_RX0_ADDR    (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.rmem_share.rmem.oc1_rmem_rx0))
    #define BIGRAM_LTE_OC1_RMEM_RX1_ADDR    (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.rmem_share.rmem.oc1_rmem_rx1))


    #define BIGRAM_LTE_NOMA_TMIMO_P0_ADDR   (BIGRAM_LTE_CC_ADDR(1))
    #define BIGRAM_LTE_NOMA_TMIMO_P1_ADDR   (BIGRAM_LTE_DMRS_OC_ADDR)
    #define BIGRAM_LTE_NOMA_TMIMO_P2_ADDR   (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.rmem_share.noma_tmimo))

    #define BIGRAM_LTE_NOMA_TMIMO_ADDR      (BIGRAM_LTE_NOMA_TMIMO_P0_ADDR)
    
#elif defined(MT6293L17) || defined(MT6739)
    typedef union {
        kal_uint8 container[BIGRAM_LTE_RMEM_SZ]; // =40969(allocated) > 40192(real size)

        struct {
            union {
#ifdef __TBMIMO_ON_ZION__
                #define NOMA_REBRP_PER_CC_SZ (27008)
                kal_uint8 noma_rebrp[2][NOMA_REBRP_PER_CC_SZ];
#endif
                struct {
                    //OC0
                    kal_uint8 oc0_rmem_rx0[BIGRAM_RMEM_OC_ONE_LINE_SIZE]; //12 blk
                    kal_uint8 oc0_rmem_rx1[BIGRAM_RMEM_OC_ONE_LINE_SIZE]; //12 blk
                } rmem;
            } rmem_share;
        
            //SC0
            kal_uint8 sc0_rmem_rx0[BIGRAM_RMEM_SC_ONE_LINE_SIZE]; //13 blk
            kal_uint8 sc0_rmem_rx1[BIGRAM_RMEM_SC_ONE_LINE_SIZE]; //13 blk
        } payload;
    } bigram_lte_rmem_t;

    // RMEM address
    #define BIGRAM_LTE_SC0_RMEM_RX0_ADDR    (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.sc0_rmem_rx0))
    #define BIGRAM_LTE_SC0_RMEM_RX1_ADDR    (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.sc0_rmem_rx1))
    #define BIGRAM_LTE_OC0_RMEM_RX0_ADDR    (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.rmem_share.rmem.oc0_rmem_rx0))
    #define BIGRAM_LTE_OC0_RMEM_RX1_ADDR    (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.rmem_share.rmem.oc0_rmem_rx1))

#ifdef __TBMIMO_ON_ZION__
    #define BIGRAM_LTE_NOMA_REBRP_ADDR(x)   (BIGRAM_LTE_RMEM_ADDR + offsetof(bigram_lte_rmem_t, payload.rmem_share.noma_rebrp[x]))

#endif

#endif

/* ---------- */
// Not completed BASE

// BIGRAM_LTE_FDB0_ADDR
// BIGRAM_LTE_FDB1_ADDR
// BIGRAM_LTE_DMRS_WBUF_ADDR



#endif // __BIGRAM_LTE_H__
