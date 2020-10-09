#ifndef __BIGRAM_COEF_H__
#define __BIGRAM_COEF_H__

#include "bigram.h"


/* ---------- */
// LTE

typedef union {
    kal_uint8 container[CEILING_BYTE64(1008)];

    struct {
        kal_uint16 crsne_coeff[504/2];
        kal_uint16 mrsne_coeff[504/2];
    } payload;
} bigram_coef_lte_crsne_t;


#define CRSCE_TBL_U_LAMDA_SIZE  (CEILING_BYTE64(9216)) // =8448
#define CRSCE_TBL_R_HPT_SIZE    (CEILING_BYTE64(2560)) // =2560

// 20160816, dc vecbymat , from 4488 -> 5742
#define CRSCE_TBL_FDI_COEF_SIZE (CEILING_BYTE64(5742)) // =5760
#define CRSCE_TBL_LOW_SNR_MASK_INIT_TABLE_SIZE (CEILING_BYTE64(360)) // =384

// 20160816, dc vecbymat , from 15552 -> 16768
// 20161003, low_snr_init, from 16768 -> 17152
// 20160810, U Lamda table add 4_yxyx, 5_yxyxy table, from 17152->17920
#define CRSCE_TBL_COEF_SIZE     (CRSCE_TBL_U_LAMDA_SIZE+CRSCE_TBL_R_HPT_SIZE+CRSCE_TBL_FDI_COEF_SIZE+CRSCE_TBL_LOW_SNR_MASK_INIT_TABLE_SIZE) // =16768

#if CRSCE_TBL_COEF_SIZE != 17920
    #error "CRSCE_TBL_COEF_SIZE should be 17920"
#endif
typedef union {
    kal_uint8 container[17920];

    struct {
        kal_uint8 fdi[CRSCE_TBL_FDI_COEF_SIZE];     // 12b fixed point format
        kal_uint8 r_hpt[CRSCE_TBL_R_HPT_SIZE];      // 12b fixed point format
        kal_uint8 u_lamda[CRSCE_TBL_U_LAMDA_SIZE];  // 1/5/10 floating format
	kal_uint8 low_snr_init_table[CRSCE_TBL_LOW_SNR_MASK_INIT_TABLE_SIZE]; //bit level
    } payload;
} bigram_coef_lte_ulcce_t;


#define CSI_R9_PREC_OLSM_TX2_R2_SIZE    (2*2*2)   // [2 PMI][2 tx * 2 CW * CPLX 2 16-bit words]
#define CSI_R9_PREC_OLSM_TX4_R2_SIZE    (4*2*2) // [8 PMI][4 tx * 2CW * CPLX 2 16-bit words]
#define CSI_R9_PREC_CLSM_TX2_R1_SIZE    (2*2)   // [4 PMI][2 tx * CPLX 2 16-bit words]
#define CSI_R9_PREC_CLSM_TX2_R2_SIZE    (2*2*2) // [3 PMI][2 tx*2 CW * CPLX 2 16-bit words] 
#define CSI_R9_PREC_CLSM_TX4_R1_SIZE    (4*2)   // [16 PMI][4 tx * CPLX 2 16-bit words]
#define CSI_R9_PREC_CLSM_TX4_R2_SIZE    (4*2*2) // [16 PMI][4 tx*2 CW * CPLX 2 16-bit words]

typedef union {
    kal_uint8 container[CEILING_BYTE64(1316)];

    struct {
        kal_uint16 r9_prec_olsm_tx2_r2[2][CSI_R9_PREC_OLSM_TX2_R2_SIZE];      
        kal_uint16 r9_prec_olsm_tx4_r2[8][CSI_R9_PREC_OLSM_TX4_R2_SIZE];    
        kal_uint16 r9_prec_clsm_tx2_r1[4][CSI_R9_PREC_CLSM_TX2_R1_SIZE];      
        kal_uint16 r9_prec_clsm_tx2_r2[3][CSI_R9_PREC_CLSM_TX2_R2_SIZE];    
        kal_uint16 r9_prec_clsm_tx4_r1[16][CSI_R9_PREC_CLSM_TX4_R1_SIZE];     
        kal_uint16 r9_prec_clsm_tx4_r2[16][CSI_R9_PREC_CLSM_TX4_R2_SIZE];   
        kal_uint8 mi2cqi_th[180];
    } payload;
} bigram_coef_lte_csi_t;


typedef union {
    kal_uint8 container[CEILING_BYTE64(832)];
    struct {
        kal_uint8 rel_mse_coef[384];
        kal_uint8 hst_mse_coef[128];
        kal_uint8 hst_phase_rot_coef[280];
    } payload;
} bigram_coef_lte_md_t;


typedef union {
    kal_uint8 container[CEILING_BYTE64(402)];

    struct {
        kal_uint16 ncm_12tap_coeff[192];
        kal_uint16 ncm_9tap_coeff[9];
    } payload;
} bigram_coef_lte_ncm_t;


typedef union {
    kal_uint8 container[CEILING_BYTE64(13440)];

    struct {
        kal_uint8 dmrsce_u_coeff[CEILING_BYTE64((7276*12)/(8))];    // real size is 7276
        kal_uint8 dmrsce_lambda_coeff[CEILING_BYTE64((1106*16)/(8))];                               //TODO: temp size
        kal_uint8 dmrsce_ap5_r_coeff[CEILING_BYTE64((248*8)/(8))];              //TODO: temp size
    } payload;
} bigram_coef_lte_dmrsce_t;


/* ---------- */
// WCDMA
#define WCDMA_HSCE_RC_COEF_SIZE (64)
#define WCDMA_HSCE_INTERP_COEF_SIZE (5)

typedef union {
//    kal_uint8 container[CEILING_BYTE64(4768)];
    kal_uint8 container[CEILING_BYTE64(5472)];

    struct {
        kal_uint16 coef_hsce_rc_coef[WCDMA_HSCE_RC_COEF_SIZE];
        kal_uint16 coef_hsce_interp_coef[16][4][WCDMA_HSCE_INTERP_COEF_SIZE];
        kal_uint32 coef_hseq_td_psc[8];
        kal_uint32 coef_hseq_td_ssc[16][8];
        kal_uint8 coef_hseq_td_cpich_base[BYTE64(1)];
        kal_uint8 coef_hssrp[BYTE64(64)];
    } payload;
} bigram_coef_wcdma_t;


/* ---------- */
// TDSCDMA

#define BIGRAM_COEF_TDSCDMA_CE_OVSF_CODE_NUM                   (16)
#define BIGRAM_COEF_TDSCDMA_CE_SCRAMB_CODE_NUM                 (128)
#define BIGRAM_COEF_TDSCDMA_CE_MA_SEQ_NUM                      (128)
#define BIGRAM_COEF_TDSCDMA_CE_DMA_CODE_MASK_NUM               (72)  // 2+4+6+8+10+12+14+16
#define BIGRAM_COEF_TDSCDMA_CE_SYNCDL_SEQ_NUM                  (32)

typedef union {
    kal_uint8 container[CEILING_BYTE64(5612)];

    struct {
        kal_uint8 midamble_seq_mask[BIGRAM_COEF_TDSCDMA_CE_MA_SEQ_NUM][32];     // 4096
        kal_uint8 scramb_seq_mask[BIGRAM_COEF_TDSCDMA_CE_SCRAMB_CODE_NUM][4];   // 512
        kal_uint8 chnl_code_mask[BIGRAM_COEF_TDSCDMA_CE_OVSF_CODE_NUM][2];      // 32
        kal_uint8 ccsm_factor[BIGRAM_COEF_TDSCDMA_CE_OVSF_CODE_NUM][4];         // 64
        kal_uint8 dummy1[32];                                                   // 32
        kal_uint8 dma_code_mask[BIGRAM_COEF_TDSCDMA_CE_DMA_CODE_MASK_NUM][2];   // 144
        kal_uint8 dummy2[48];                                                   // 48
        kal_uint8 ceu_const_mem[BYTE64(2)];                                     // 128
        kal_uint8 syncdl_seq_mask[BIGRAM_COEF_TDSCDMA_CE_SYNCDL_SEQ_NUM][16];   // 512
        kal_uint8 pich_scram_seq[2][22];                                        // 44
    } payload;
} bigram_coef_tdscdma_t;


/* ---------- */
// C2K

typedef union {
    kal_uint8 container[CEILING_BYTE64(1090)];
    struct {
        // C2K CE
        #define C2K_CE_WEIGHT_COMB_COEF_TBL (5*4)
        #define C2K_CE_CIR_RC_TBL (185)
        kal_uint16 ce_weight_coef_tbl [18][C2K_CE_WEIGHT_COMB_COEF_TBL];
        kal_uint16 ce_cir_rc_tbl [C2K_CE_CIR_RC_TBL];
    } payload;
} bigram_coef_c2k_coef_t;


/* ---------- */


typedef union {
    kal_uint8 container[BIGRAM_COEF_SZ];

    struct {
        // TODO: group LTE coefficients into a single structure
        bigram_coef_lte_crsne_t lte_crsne_coef;
        bigram_coef_lte_md_t    lte_md_coef;
        bigram_coef_lte_ncm_t   lte_ncm_coef;
        bigram_coef_lte_ulcce_t lte_ulcce_coef;
        bigram_coef_lte_dmrsce_t  lte_dmrsce_coef;
        bigram_coef_lte_csi_t   lte_csi_coef;

        bigram_coef_wcdma_t     wcdma_coef;

        bigram_coef_tdscdma_t   tdscdma_coef; 

        bigram_coef_c2k_coef_t  c2k_coef;
    } payload;
} bigram_coef_t;



/* ---------- */
// Access Macros

// LTE
    // MD
    #define BIGRAM_COEF_LTE_MD_MMSE_COEF_ADDR  (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_md_coef.payload.rel_mse_coef))
    #define BIGRAM_COEF_LTE_HST_MMSE_COEF_ADDR  (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_md_coef.payload.hst_mse_coef))
    #define BIGRAM_COEF_LTE_HST_PHASE_ROT_COEF_ADDR  (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_md_coef.payload.hst_phase_rot_coef))

    // NCM
    #define BIGRAM_COEF_LTE_NCM_12TAP_COEF_ADDR     (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_ncm_coef.payload.ncm_12tap_coeff))
    #define BIGRAM_COEF_LTE_NCM_9TAP_COEF_ADDR      (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_ncm_coef.payload.ncm_9tap_coeff))

    // DMRS (TODO: Temp)
    #define BIGRAM_COEF_LTE_DMRSCE_U_COEF_ADDR           (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_dmrsce_coef.payload.dmrsce_u_coeff))
    #define BIGRAM_COEF_LTE_DMRSCE_LAMBDA_COEF_ADDR      (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_dmrsce_coef.payload.dmrsce_lambda_coeff))
    #define BIGRAM_COEF_LTE_DMRSCE_AP5_R_COEF_ADDR            (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_dmrsce_coef.payload.dmrsce_ap5_r_coeff))

    // CRSNE
    #define BIGRAM_COEF_LTE_CRSNE_CRS_COEF_ADDR     (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_crsne_coef.payload.crsne_coeff))
    #define BIGRAM_COEF_LTE_CRSNE_MRS_COEF_ADDR     (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_crsne_coef.payload.mrsne_coeff))

    // ULCCE
    #define BIGRAM_COEF_LTE_CRSCE_FDI_ADDR          (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_ulcce_coef.payload.fdi))
    #define BIGRAM_COEF_LTE_CRSCE_R_HPT_ADDR        (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_ulcce_coef.payload.r_hpt))
    #define BIGRAM_COEF_LTE_CRSCE_U_LAMDA_ADDR      (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_ulcce_coef.payload.u_lamda))
    #define BIGRAM_COEF_LTE_CRSCE_INIT_MASK_ADDR    (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_ulcce_coef.payload.low_snr_init_table))

    // CSI
    #define BIGRAM_COEF_LTE_CSI_R9_PREC_OLSM_TX2_R2_ADDR    (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_csi_coef.payload.r9_prec_olsm_tx2_r2))
    #define BIGRAM_COEF_LTE_CSI_R9_PREC_OLSM_TX4_R2_ADDR    (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_csi_coef.payload.r9_prec_olsm_tx4_r2))
    #define BIGRAM_COEF_LTE_CSI_R9_PREC_CLSM_TX2_R1_ADDR    (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_csi_coef.payload.r9_prec_clsm_tx2_r1))
    #define BIGRAM_COEF_LTE_CSI_R9_PREC_CLSM_TX2_R2_ADDR    (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_csi_coef.payload.r9_prec_clsm_tx2_r2))
    #define BIGRAM_COEF_LTE_CSI_R9_PREC_CLSM_TX4_R1_ADDR    (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_csi_coef.payload.r9_prec_clsm_tx4_r1))
    #define BIGRAM_COEF_LTE_CSI_R9_PREC_CLSM_TX4_R2_ADDR    (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_csi_coef.payload.r9_prec_clsm_tx4_r2))
    #define BIGRAM_COEF_LTE_CSI_MI2CQI_TH_ADDR              (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.lte_csi_coef.payload.mi2cqi_th))

// WCDMA
    // HSCE
    #define BIGRAM_COEF_WCDMA_HSCE_RC_ADDR                  (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.wcdma_coef.payload.coef_hsce_rc_coef))
    #define BIGRAM_COEF_WCDMA_HSCE_INTERP_ADDR(bias,phase)  (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.wcdma_coef.payload.coef_hsce_interp_coef[(bias)][(phase)]))
    // HSEQ-TD
    #define BIGRAM_COEF_WCDMA_HSEQ_TD_PSC_ADDR         (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.wcdma_coef.payload.coef_hseq_td_psc))
    #define BIGRAM_COEF_WCDMA_HSEQ_TD_SSC_ADDR(x)      (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.wcdma_coef.payload.coef_hseq_td_ssc[x]))
    #define BIGRAM_COEF_WCDMA_HSEQ_TD_CPICH_BASE_ADDR  (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.wcdma_coef.payload.coef_hseq_td_cpich_base))

    // HSSRP
    #define BIGRAM_COEF_WCDMA_HSSRP_ADDR               (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.wcdma_coef.payload.coef_hssrp))


// TDSCDMA
    #define BIGRAM_COEF_TDSCDMA_CEU_CODE_MEM_MA_SEQ_MASK_ADDR(i)     (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.tdscdma_coef.payload.midamble_seq_mask[(i)]))
    #define BIGRAM_COEF_TDSCDMA_CEU_CODE_MEM_SCRAMB_SEQ_MASK_ADDR(i) (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.tdscdma_coef.payload.scramb_seq_mask[(i)]))
    #define BIGRAM_COEF_TDSCDMA_CEU_CODE_MEM_CHNL_CODE_MASK_ADDR(i)  (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.tdscdma_coef.payload.chnl_code_mask[(i)]))
    #define BIGRAM_COEF_TDSCDMA_CEU_CODE_MEM_CCSM_FACTOR_ADDR(i)     (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.tdscdma_coef.payload.ccsm_factor[(i)]))
    #define BIGRAM_COEF_TDSCDMA_CEU_TABLE_MEM_DMA_TABLE_ADDR(i)      (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.tdscdma_coef.payload.dma_code_mask[(i)]))
    #define BIGRAM_COEF_TDSCDMA_CEU_CONST_MEM_ADDR                   (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.tdscdma_coef.payload.ceu_const_mem))
    #define BIGRAM_COEF_TDSCDMA_TTU_CODE_MEM_SYNCDL_ADDR(i)          (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.tdscdma_coef.payload.syncdl_seq_mask[(i)]))
    #define BIGRAM_COEF_TDSCDMA_PICH_SCRAM_SEQ_ADDR(i)               (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.tdscdma_coef.payload.pich_scram_seq[(i)]))

// C2K
    #define BIGRAM_COEF_C2K_EQ_ACOS_PARAM           (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.c2k_coef.payload.acos_param))
    #define BIGRAM_COEF_C2K_EQ_COS_PARAM            (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.c2k_coef.payload.cos_param))
    #define BIGRAM_COEF_C2K_EQ_LINEAR_EQU_PARAM(x)  (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.c2k_coef.payload.linear_equ_param[x]))
    #define BIGRAM_COEF_C2K_EQ_ANGLE_MIN_MAX_THRE   (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.c2k_coef.payload.angle_min_max_thre))
    #define BIGRAM_COEF_C2K_CE_WEIGHT_COEF_TBL(x)   (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.c2k_coef.payload.ce_weight_coef_tbl[x]))
    #define BIGRAM_COEF_C2K_CE_CIR_RC_TBL           (BIGRAM_COEF_ADDR + offsetof(bigram_coef_t, payload.c2k_coef.payload.ce_cir_rc_tbl))    

#endif // __BIGRAM_COEF_H__
