/*****************************************************************************
*  Copyright Statement:
*  ---------------------------
*  This software/firmware and related documentation ("MediaTek Software") are
*  protected under relevant copyright laws. The information contained herein
*  is confidential and proprietary to MediaTek Inc. and/or its licensors.
*  Without the prior written permission of MediaTek inc. and/or its licensors,
*  any reproduction,modification, use or disclosure of MediaTek Software, and
*  information contained herein, in whole or in part, shall be strictly prohibited.
*
*  MediaTek Inc.(C)2011.All rights reserved.
*
*  BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND
*  AGREES THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK
*  SOFTWARE") RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED
*  TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
*  WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
*  WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
*  NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER
*  WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
*  INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER
*  AGREES TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING
*  THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE
*  RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
*  CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR
*  ANY MEDIATEK SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO
*  CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND
*  EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT
*  TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,AT MEDIATEK'S OPTION,
*  TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,OR REFUND ANY SOFTWARE
*  LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK
*  SOFTWARE AT ISSUE.
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   bigram_tdscdma.h
 *
 * Project:
 * --------
 *   MT6293 Project
 *
 * Description:
 * ------------
 *   Bigram plan for TDSCDMA
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/


#ifndef __BIGRAM_TDSCDMA_H__
#define __BIGRAM_TDSCDMA_H__

#include "bigram.h"
#include "bigram_coef.h"


/* GUIDELINE (refer to LTE)
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
// Layer-2

/* Input data:
1. DFE/PP internal
2. DFE/PP output to inner FW
3. inner FW copy back
*/



typedef union {
    kal_uint8 container[BIGRAM_TDB_TDSCDMA_SZ];
    struct {
        kal_uint8 dfe_pp_mem[BYTE64(129)];
        kal_uint8 pp_vdsp_mem[BYTE64(129)];
        kal_uint8 tddinr_ma_mem[BYTE64(16)];
        kal_uint8 tddinr_d0_mem[BYTE64(46)];
        kal_uint8 tddinr_d1_mem[BYTE64(46)];
        kal_uint8 tddinr_sd_mem[BYTE64(16)];
    } payload;
} bigram_grp0_tdscdma_tdb_t;


#define BIGRAM_TDSCDMA_TDB_DFE_PP_MEM_ADDR         (BIGRAM_TDB_TDSCDMA_ADDR + offsetof(bigram_grp0_tdscdma_tdb_t, payload.dfe_pp_mem))
#define BIGRAM_TDSCDMA_TDB_PP_VDSP_MEM_ADDR        (BIGRAM_TDB_TDSCDMA_ADDR + offsetof(bigram_grp0_tdscdma_tdb_t, payload.pp_vdsp_mem))
#define BIGRAM_TDSCDMA_TDB_TDDINR_MA_MEM_ADDR      (BIGRAM_TDB_TDSCDMA_ADDR + offsetof(bigram_grp0_tdscdma_tdb_t, payload.tddinr_ma_mem))
#define BIGRAM_TDSCDMA_TDB_TDDINR_D0_MEM_ADDR      (BIGRAM_TDB_TDSCDMA_ADDR + offsetof(bigram_grp0_tdscdma_tdb_t, payload.tddinr_d0_mem))
#define BIGRAM_TDSCDMA_TDB_TDDINR_D1_MEM_ADDR      (BIGRAM_TDB_TDSCDMA_ADDR + offsetof(bigram_grp0_tdscdma_tdb_t, payload.tddinr_d1_mem))
#define BIGRAM_TDSCDMA_TDB_TDDINR_SD_MEM_ADDR      (BIGRAM_TDB_TDSCDMA_ADDR + offsetof(bigram_grp0_tdscdma_tdb_t, payload.tddinr_sd_mem))



/* Static buffer
1. bigram report to L1 EMI
2. internal module interface
3. bigram report to BRP
*/
#define BIGRAM_TDSCDMA_STATIC_CE_AVE_BUF_NUM               (2)  //for nts0 and ts0
#define BIGRAM_TDSCDMA_STATIC_CE_PICH_BIN_NUM              (5)
#define BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM             (4)
#define BIGRAM_TDSCDMA_STATIC_CE_MAX_JD_CODE_NUM           (16)

/* ce related struct (static mem) */
typedef struct bigram_grp1_ce_data_mem_s bigram_grp1_ce_data_mem_t;
struct bigram_grp1_ce_data_mem_s   ///size = 2304 bytes
{
    kal_uint8 ce_ave_dp[BIGRAM_TDSCDMA_STATIC_CE_AVE_BUF_NUM][BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(1)];
    kal_uint8 ce_ave_dp_flp[BIGRAM_TDSCDMA_STATIC_CE_AVE_BUF_NUM][BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(1)];
    kal_uint8 norm_dp_sw[BIGRAM_TDSCDMA_STATIC_CE_PICH_BIN_NUM][BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(1)];
};

typedef struct bigram_grp1_ce2jd_mem_s bigram_grp1_ce2jd_mem_t;
struct bigram_grp1_ce2jd_mem_s  //size = 4352 bytes
{
    kal_uint8 chnl_cnv_code[BIGRAM_TDSCDMA_STATIC_CE_MAX_JD_CODE_NUM][BYTE64(4)];
    kal_uint8 mi_buf_for_jd_mic[BYTE64(4)];
};

typedef struct bigram_grp1_ce2mmc_mem_s bigram_grp1_ce2mmc_mem_t;
struct bigram_grp1_ce2mmc_mem_s   ///size = 1024 bytes
{
    kal_uint8 rec_ma_after_cnl_freq[BYTE64(16)];
};

typedef struct bigram_grp1_ce2s1s2_mem_s bigram_grp1_ce2s1s2_mem_t;
struct bigram_grp1_ce2s1s2_mem_s   ///size = 128 bytes
{
    kal_uint8 ce_est_cir[BYTE64(2)];
};

/* ttu related struct (static mem) */
typedef struct bigram_grp1_ttu_data_mem_s bigram_grp1_ttu_data_mem_t;
struct bigram_grp1_ttu_data_mem_s   ///size = 512 bytes
{
    kal_uint8 ttu_ave_dp[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(2)];
};

typedef struct bigram_grp1_ttu2msc_mem_s bigram_grp1_ttu2msc_mem_t;
struct bigram_grp1_ttu2msc_mem_s   ///size = 1024 bytes
{
    kal_uint8 rec_sdl_after_cnl_freq[BYTE64(16)];
};

typedef struct bigram_grp1_ttu2s1s2_mem_s bigram_grp1_ttu2s1s2_mem_t;
struct bigram_grp1_ttu2s1s2_mem_s   ///size = 256 bytes
{
    kal_uint8 ttu_est_cir[BYTE64(4)];
};



typedef union {
    kal_uint8 container[BIGRAM_TDSCDMA_STATIC_BUF_SZ];
    struct {
        // this has only 5 ave_dp values for mult-bin. Don't need  ceu_data_mem_sel_1 for parallel processing
        kal_uint8 jd_jd2srp_mem_sel_0[BYTE64(44)];
        bigram_grp1_ce2jd_mem_t     bigram_grp1_ce2jd_mem_sel_0;
        bigram_grp1_ce2jd_mem_t     bigram_grp1_ce2jd_mem_sel_1;
        kal_uint8 jd_jd2srp_mem_sel_1[BYTE64(44)];
        kal_uint8 ceu_l1r_mem_sel_2_3[BYTE64(1)];
        kal_uint8 ceu_l1r_mem_sel_4_res[BYTE64(1)];
        kal_uint8 srp_l1r_mem[BYTE64(6)];
        kal_uint8 jd_l1r_mem[BYTE64(1)];
        kal_uint8 ceu_l1r_spur_mem_sel_1[BYTE64(8)];
        kal_uint8 ceu_l1r_spur_mem_sel_2[BYTE64(8)];
        kal_uint8 ceu_l1r_spur_mem_sel_3[BYTE64(8)];
        kal_uint8 ceu_l1r_spur_mem_sel_4[BYTE64(8)];
        kal_uint8 srp_srp2brp_mem[BYTE64(523)];
    } payload;
} bigram_grp1_tdscdma_static_buf_t;

typedef union {
    kal_uint8 container[BIGRAM_TDD_CM_SZ];
    struct {
        // this has only 5 ave_dp values for mult-bin. Don't need  ceu_data_mem_sel_1 for parallel processing
        bigram_grp1_ce_data_mem_t   bigram_grp1_ce_data_mem;
        bigram_grp1_ce2mmc_mem_t    bigram_grp1_ce2mmc_mem;
        bigram_grp1_ce2s1s2_mem_t   bigram_grp1_ce2s1s2_mem;
        bigram_grp1_ttu_data_mem_t  bigram_grp1_ttu_data_mem;
        bigram_grp1_ttu2msc_mem_t   bigram_grp1_ttu2msc_mem;
        bigram_grp1_ttu2s1s2_mem_t  bigram_grp1_ttu2s1s2_mem;
        kal_uint8 msc_l1r_mem[BYTE64(2)];
        kal_uint8 mmc_l1r_mem[BYTE64(2)];    /*MMC3 report align first, then the MMC2 report */
        kal_uint8 ceu_l1r_mem_sel_0_1[BYTE64(1)];
        kal_uint8 ceu_l1r_spur_mem_sel_0[BYTE64(8)];
    } payload;
} bigram_grp1_tdscdma_cm_buf_t;

#define BIGRAM_TDSCDMA_STATIC_CEU_DATA_MEM_AVE_DP_ADDR(buff_idx, cell_idx)      (BIGRAM_TDD_CM_BUF_ADDR + offsetof(bigram_grp1_tdscdma_cm_buf_t, payload.bigram_grp1_ce_data_mem.ce_ave_dp[(buff_idx)][(cell_idx)]))
#define BIGRAM_TDSCDMA_STATIC_CEU_DATA_MEM_AVE_DP_FLP_ADDR(buff_idx, cell_idx)      (BIGRAM_TDD_CM_BUF_ADDR + offsetof(bigram_grp1_tdscdma_cm_buf_t, payload.bigram_grp1_ce_data_mem.ce_ave_dp_flp[(buff_idx)][(cell_idx)]))
#define BIGRAM_TDSCDMA_STATIC_CEU_DATA_MEM_NORM_DP_SW_ADDR(bin_idx, cell_idx)   (BIGRAM_TDD_CM_BUF_ADDR + offsetof(bigram_grp1_tdscdma_cm_buf_t, payload.bigram_grp1_ce_data_mem.norm_dp_sw[(bin_idx)][(cell_idx)]))
#define BIGRAM_TDSCDMA_STATIC_CEU_CE2MMC_MEM_REC_MA_ADDR                        (BIGRAM_TDD_CM_BUF_ADDR + offsetof(bigram_grp1_tdscdma_cm_buf_t, payload.bigram_grp1_ce2mmc_mem.rec_ma_after_cnl_freq))
#define BIGRAM_TDSCDMA_STATIC_CEU_CE2S1S2_MEM_EST_CIR_ADDR                      (BIGRAM_TDD_CM_BUF_ADDR + offsetof(bigram_grp1_tdscdma_cm_buf_t, payload.bigram_grp1_ce2s1s2_mem.ce_est_cir))
#define BIGRAM_TDSCDMA_STATIC_TTU_DATA_MEM_AVE_DP_ADDR(cell_idx)                (BIGRAM_TDD_CM_BUF_ADDR + offsetof(bigram_grp1_tdscdma_cm_buf_t, payload.bigram_grp1_ttu_data_mem.ttu_ave_dp[(cell_idx)]))
#define BIGRAM_TDSCDMA_STATIC_TTU_TTU2MSC_MEM_REC_SYNC_ADDR                     (BIGRAM_TDD_CM_BUF_ADDR + offsetof(bigram_grp1_tdscdma_cm_buf_t, payload.bigram_grp1_ttu2msc_mem.rec_sdl_after_cnl_freq))
#define BIGRAM_TDSCDMA_STATIC_TTU_TTU2S1S2_MEM_EST_CIR_ADDR                     (BIGRAM_TDD_CM_BUF_ADDR + offsetof(bigram_grp1_tdscdma_cm_buf_t, payload.bigram_grp1_ttu2s1s2_mem.ttu_est_cir))
#define BIGRAM_TDSCDMA_STATIC_JD_JD2SRP_MEM_SEL_0_ADDR       (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.jd_jd2srp_mem_sel_0))
#define BIGRAM_TDSCDMA_STATIC_CEU_CE2JD_MEM_CHNL_CONV_CODE_SEL_0_ADDR(code_idx) (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.bigram_grp1_ce2jd_mem_sel_0.chnl_cnv_code[(code_idx)]))
#define BIGRAM_TDSCDMA_STATIC_CEU_CE2JD_MEM_MI_BUF_SEL_0_ADDR                   (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.bigram_grp1_ce2jd_mem_sel_0.mi_buf_for_jd_mic))
#define BIGRAM_TDSCDMA_STATIC_CEU_CE2JD_MEM_CHNL_CONV_CODE_SEL_1_ADDR(code_idx) (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.bigram_grp1_ce2jd_mem_sel_1.chnl_cnv_code[(code_idx)]))
#define BIGRAM_TDSCDMA_STATIC_CEU_CE2JD_MEM_MI_BUF_SEL_1_ADDR                   (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.bigram_grp1_ce2jd_mem_sel_1.mi_buf_for_jd_mic))
#define BIGRAM_TDSCDMA_STATIC_JD_JD2SRP_MEM_SEL_1_ADDR       (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.jd_jd2srp_mem_sel_1))
#define BIGRAM_TDSCDMA_STATIC_MSC_L1R_MEM_ADDR               (BIGRAM_TDD_CM_BUF_ADDR + offsetof(bigram_grp1_tdscdma_cm_buf_t, payload.msc_l1r_mem))
#define BIGRAM_TDSCDMA_STATIC_MMC_L1R_MEM_ADDR               (BIGRAM_TDD_CM_BUF_ADDR + offsetof(bigram_grp1_tdscdma_cm_buf_t, payload.mmc_l1r_mem))
#define BIGRAM_TDSCDMA_STATIC_CEU_L1R_MEM_SEL_0_1_ADDR         (BIGRAM_TDD_CM_BUF_ADDR + offsetof(bigram_grp1_tdscdma_cm_buf_t, payload.ceu_l1r_mem_sel_0_1))
#define BIGRAM_TDSCDMA_STATIC_CEU_L1R_MEM_SEL_2_3_ADDR         (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.ceu_l1r_mem_sel_2_3))
#define BIGRAM_TDSCDMA_STATIC_CEU_L1R_MEM_SEL_4_res_ADDR         (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.ceu_l1r_mem_sel_4_res))
#define BIGRAM_TDSCDMA_STATIC_SRP_L1R_MEM_ADDR               (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.srp_l1r_mem))
#define BIGRAM_TDSCDMA_STATIC_JD_L1R_MEM_ADDR                (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.jd_l1r_mem))
#define BIGRAM_TDSCDMA_STATIC_CEU_L1R_SPUR_MEM_SEL_0_ADDR         (BIGRAM_TDD_CM_BUF_ADDR + offsetof(bigram_grp1_tdscdma_cm_buf_t, payload.ceu_l1r_spur_mem_sel_0))
#define BIGRAM_TDSCDMA_STATIC_CEU_L1R_SPUR_MEM_SEL_1_ADDR         (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.ceu_l1r_spur_mem_sel_1))
#define BIGRAM_TDSCDMA_STATIC_CEU_L1R_SPUR_MEM_SEL_2_ADDR         (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.ceu_l1r_spur_mem_sel_2))
#define BIGRAM_TDSCDMA_STATIC_CEU_L1R_SPUR_MEM_SEL_3_ADDR         (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.ceu_l1r_spur_mem_sel_3))
#define BIGRAM_TDSCDMA_STATIC_CEU_L1R_SPUR_MEM_SEL_4_ADDR         (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.ceu_l1r_spur_mem_sel_4))
#define BIGRAM_TDSCDMA_STATIC_SRP_SRP2BRP_MEM_ADDR           (BIGRAM_TDSCDMA_STATIC_BUF_ADDR + offsetof(bigram_grp1_tdscdma_static_buf_t, payload.srp_srp2brp_mem))


/* Working buffer:
grp0_common.tdb_wcdma_tdscdma.tdscdma.wbuf, size = 50KB = 25KB*2
grp1_common.wbuf, size = 64KB = 32KB*2

*/

typedef struct bigram_grp0_tdb_tdscdma_wbuf_s bigram_grp0_tdb_tdscdma_wbuf_t;
struct bigram_grp0_tdb_tdscdma_wbuf_s
{
#define HALF_BIGRAM_TDB_TDSCDMA_WBUF_SZ     KB(25)

    kal_uint8 tdb_tdscdma_wbuf[NUM_VDSP][HALF_BIGRAM_TDB_TDSCDMA_WBUF_SZ];
};

#define BIGRAM_TDB_TDSCDMA_wbuf_ADDR(x)       (BIGRAM_TDB_TDSCDMA_WBUF_ADDR + offsetof(bigram_grp0_tdb_tdscdma_wbuf_t, tdb_tdscdma_wbuf[x]))
//#define BIGRAM_WBUF_ADDR(x)        offsetof(bigram_t, grp1_common.wbuf[x])  /* Just for reminding that already defined in the bigram.h*/

/*-------------CE working buff allocation in BigRAM-------------------------------------*/
#define BIGRAM_TDSCDMA_WBUF_CE_MAX_WIN_NUM                 (16)
#define BIGRAM_TDSCDMA_WBUF_CE_MAX_JD_CODE_NUM             (16)
#define BIGRAM_TDSCDMA_WBUF_CE_MAX_NC_CODE_NUM             (64)
typedef struct bigram_tdscdma_wbuf_ce_mcsic_s bigram_tdscdma_wbuf_ce_mcsic_t;
struct bigram_tdscdma_wbuf_ce_mcsic_s //total size = 24576 bytes   (we move ma_seq_freq and ma_seq_freq_inv to working buf)
{
    kal_uint8 ma_seq_cell0[BYTE64(16)];                                           // 1024 bytes
    kal_uint8 ma_seq_freq[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(16)];    // 4096 bytes
    kal_uint8 ma_seq_freq_inv[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(16)];// 4096 bytes
    kal_uint8 rec_ma_last[BYTE64(16)];                                            // 1024 bytes
    kal_uint8 sel_cir[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(16)];        // 4096 bytes
    kal_uint8 dp_sw[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(8)];           // 2048 bytes          
    kal_uint8 rec_after_cnl[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(16)];  // 4096 bytes    
    kal_uint8 reb_ma[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(16)];         // 4096 bytes

};
typedef struct bigram_tdscdma_wbuf_ce_form_post_ce_s bigram_tdscdma_wbuf_ce_form_post_ce_t;
struct bigram_tdscdma_wbuf_ce_form_post_ce_s //total size = 20928 bytes  + 2496 bytes - 256 bytes = 23168 bytes 
{
    kal_uint8 vcr_cir_ccsm[BIGRAM_TDSCDMA_WBUF_CE_MAX_JD_CODE_NUM][BYTE64(2)];                                               //2048 bytes
    kal_uint8 norm_win_dp[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BIGRAM_TDSCDMA_WBUF_CE_MAX_WIN_NUM][BYTE64(1)];   //4096 bytes
    kal_uint8 norm_win_cir[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BIGRAM_TDSCDMA_WBUF_CE_MAX_WIN_NUM][BYTE64(2)];  //8192 bytes
    kal_uint8 sel_win_cir[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BIGRAM_TDSCDMA_WBUF_CE_MAX_WIN_NUM][BYTE64(2)];   //8192 bytes    
    kal_uint8 avg_dp[BYTE64(1)];                                                                                    //64 bytes
    kal_uint8 avg_cir[BYTE64(2)];                                                                                   //128 bytes     
    kal_uint8 jd_code_pw[BYTE64(1)];  /* actually 32 bytes used, and 32 bytes padded*/                                             //64 bytes
    kal_uint8 jd_nc_code_pw[BIGRAM_TDSCDMA_WBUF_CE_MAX_NC_CODE_NUM][2];                                                      //128 bytes
    kal_uint8 scamb_code[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(1)];  /* This can be remove if vr array is OK in vml coding*/ //256 bytes   
};
typedef struct bigram_tdscdma_wbuf_ce_est_dp_cir_s bigram_tdscdma_wbuf_ce_est_dp_cir_t;
struct bigram_tdscdma_wbuf_ce_est_dp_cir_s //total size = 6144 bytes
{
    kal_uint8 est_cir[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(16)];        // 4096 bytes
    kal_uint8 est_dp[BIGRAM_TDSCDMA_STATIC_WBUF_CE_CELL_NUM][BYTE64(8)];          // 2048 bytes

};
typedef union
{
    //total size = 20928 bytes + 6144 bytes + 4096 + 4096 = 30720 bytes
    kal_uint8 container[BIGRAM_WBUF_SZ];
    struct
    {        
        bigram_tdscdma_wbuf_ce_est_dp_cir_t   bigram_tdscdma_wbuf_ce_est_dp_cir;
        union
        {   
            /* data from pre ce to mcsic*/
            bigram_tdscdma_wbuf_ce_mcsic_t        bigram_tdscdma_wbuf_ce_mcsic;
            /* data from post ce to end*/
            bigram_tdscdma_wbuf_ce_form_post_ce_t bigram_tdscdma_wbuf_ce_form_post_ce;
        } bigram_tdscdma_wbuf_ce_reuse_part;
    } payload;
} bigram_tdscdma_wbuf_ce_t;

/* WBUF, CE, data from pre ce to mcsic, reused */
#define BIGRAM_TDSCDMA_WBUF_CE_MA_SEQ_CELL0_ADDR(x)                    (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_mcsic.ma_seq_cell0))
#define BIGRAM_TDSCDMA_WBUF_CE_MA_SEQ_FREQ_ADDR(x, cell_idx)           (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_mcsic.ma_seq_freq[(cell_idx)]))
#define BIGRAM_TDSCDMA_WBUF_CE_MA_SEQ_FREQ_INV_ADDR(x, cell_idx)       (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_mcsic.ma_seq_freq_inv[(cell_idx)]))
#define BIGRAM_TDSCDMA_WBUF_CE_REC_MA_LAST_ADDR(x)                     (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_mcsic.rec_ma_last))
#define BIGRAM_TDSCDMA_WBUF_CE_SEL_CIR_ADDR(x, cell_idx)               (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_mcsic.sel_cir[(cell_idx)]))        /*x:0~1, cell_idx:0~3 */
#define BIGRAM_TDSCDMA_WBUF_CE_DP_SW_ADDR(x, cell_idx)                 (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_mcsic.dp_sw[(cell_idx)]))          /*x:0~1, cell_idx:0~3 */
#define BIGRAM_TDSCDMA_WBUF_CE_REC_AFTER_CNL_ADDR(x, cell_idx)         (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_mcsic.rec_after_cnl[cell_idx]))
#define BIGRAM_TDSCDMA_WBUF_CE_REB_MA_ADDR(x, cell_idx)                (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_mcsic.reb_ma[cell_idx]))

/* WBUF, CE, data from post ce to end, reused */
#define BIGRAM_TDSCDMA_WBUF_CE_CIR_CCSM_ADDR(x, code_idx)              (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_form_post_ce.vcr_cir_ccsm[(code_idx)]))  /*x:0~1, code_idx:0~15 */
#define BIGRAM_TDSCDMA_WBUF_CE_NORM_WIN_DP_ADDR(x, cell_idx, win_idx)  (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_form_post_ce.norm_win_dp[(cell_idx)][(win_idx)]))  /*x:0~1, cell_idx:0~3, win_idx:0~15 */
#define BIGRAM_TDSCDMA_WBUF_CE_NORM_WIN_CIR_ADDR(x, cell_idx, win_idx) (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_form_post_ce.norm_win_cir[(cell_idx)][(win_idx)]))  /*x:0~1, cell_idx:0~3, win_idx:0~15 */
#define BIGRAM_TDSCDMA_WBUF_CE_SEL_WIN_CIR_ADDR(x, cell_idx, win_idx)  (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_form_post_ce.sel_win_cir[(cell_idx)][(win_idx)]))  /*x:0~1, cell_idx:0~3, win_idx:0~15 */
#define BIGRAM_TDSCDMA_WBUF_CE_AVE_DP_ADDR(x)                          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_form_post_ce.avg_dp))  /*x:0~1*/
#define BIGRAM_TDSCDMA_WBUF_CE_AVE_CIR_ADDR(x)                         (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_form_post_ce.avg_cir))  /*x:0~1 */
#define BIGRAM_TDSCDMA_WBUF_CE_JD_CODE_PW_ADDR(x)                      (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_form_post_ce.jd_code_pw))  /*x:0~1*/
#define BIGRAM_TDSCDMA_WBUF_CE_JD_NC_CODE_PW_ADDR(x, code_idx)         (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_form_post_ce.jd_nc_code_pw[(code_idx)]))  /*x:0~1*/
#define BIGRAM_TDSCDMA_WBUF_CE_SCAMBLE_CODE_ADDR(x, cell_idx)          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_reuse_part.bigram_tdscdma_wbuf_ce_form_post_ce.scamb_code[(cell_idx)]))  /*x:0~1, cell_idx:0~3 */

/* WBUF, CE, data from mcsic to post ce, reused */
#define BIGRAM_TDSCDMA_WBUF_CE_EST_CIR_ADDR(x, cell_idx)               (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_est_dp_cir.est_cir[(cell_idx)]))        /*x:0~1, cell_idx:0~3 */
#define BIGRAM_TDSCDMA_WBUF_CE_EST_DP_ADDR(x, cell_idx)                (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ce_t, payload.bigram_tdscdma_wbuf_ce_est_dp_cir.est_dp[(cell_idx)]))         /*x:0~1, cell_idx:0~3 */


/*-------------JD working buff allocation in BigRAM-------------------------------------*/
typedef struct bigram_tdscdma_wbuf_jd_part0_s bigram_tdscdma_wbuf_jd_part0_t;
struct bigram_tdscdma_wbuf_jd_part0_s  /* size = 10240 bytes*/
{
    union
    {
        kal_uint8 pp_df_0_data_scaled[BYTE64(48)];
        kal_uint8 df_0_data[BYTE64(48)];
    } bigram_tdscdma_wbuf_jd_part0_union;

    union
    {
        kal_uint8 pp_df_1_data_scaled[BYTE64(48)];
        kal_uint8 df_1_data[BYTE64(48)];
    } bigram_tdscdma_wbuf_jd_part1_union;



};

typedef struct bigram_tdscdma_wbuf_jd_part1_s bigram_tdscdma_wbuf_jd_part1_t;
struct bigram_tdscdma_wbuf_jd_part1_s  /* size =  2816 bytes*/
{
    kal_uint8 mf_r_df_0[BYTE64(22)];
    kal_uint8 mf_r_df_1[BYTE64(22)];
};

typedef struct bigram_tdscdma_wbuf_jd_part2_s bigram_tdscdma_wbuf_jd_part2_t;
struct bigram_tdscdma_wbuf_jd_part2_s  /* size =   1600 bytes*/
{
    kal_uint8 mtxq0_vec[BYTE64(9)];
    kal_uint8 mtxq1_vec[BYTE64(16)];
};

typedef struct bigram_tdscdma_wbuf_jd_part3_s bigram_tdscdma_wbuf_jd_part3_t;
struct bigram_tdscdma_wbuf_jd_part3_s  /* size = 2816 bytes*/
{
    union
    {
        kal_uint8 fw_df_0[BYTE64(22)];
        kal_uint8 cma_acd_mfr_df0[BYTE64(22)];
    } bigram_tdscdma_wbuf_jd_part3_union;
    kal_uint8 fw_df_1[BYTE64(22)];
};

typedef struct bigram_tdscdma_wbuf_jd_part4_s bigram_tdscdma_wbuf_jd_part4_t;
struct bigram_tdscdma_wbuf_jd_part4_s  /* size = 12416 bytes*/
{
    kal_uint8 mtxb_chop_vec[BYTE64(64)];
    kal_uint8 sqr_d[BYTE64(2)];
    kal_uint8 mtxs0_0_vec[BYTE64(16)];   //Store mtxs0_0 in a square
    kal_uint8 mtxs0_1_vec[BYTE64(32)];   //Store 0_1 and 1_0
    kal_uint8 mtxs1_0_vec[BYTE64(16)];   //Store 1_0
    kal_uint8 mtxs1_1_vec[BYTE64(32)];   //Store 1_1 and 1_0

    kal_uint8 remap_mtxs0_0_vec[BYTE64(16)]; //Store tS0_0
    kal_uint8 remap_mtxs0_1_vec[BYTE64(32)]; //Store tS0_0 and tS0_1
    kal_uint8 remap_mtxs1_0_vec[BYTE64(16)]; //Store tS1_0
    kal_uint8 remap_mtxs1_1_vec[BYTE64(32)]; //Store tS1_0 and tS1_1
};


typedef union
{
    /* total size = 29888 bytes*/
    kal_uint8 container[BIGRAM_WBUF_SZ];
    struct
    {
        bigram_tdscdma_wbuf_jd_part0_t bigram_tdscdma_wbuf_jd_part0;
        bigram_tdscdma_wbuf_jd_part1_t bigram_tdscdma_wbuf_jd_part1;
        bigram_tdscdma_wbuf_jd_part2_t bigram_tdscdma_wbuf_jd_part2;
        bigram_tdscdma_wbuf_jd_part3_t bigram_tdscdma_wbuf_jd_part3;
        bigram_tdscdma_wbuf_jd_part4_t bigram_tdscdma_wbuf_jd_part4;
    } payload;

} bigram_tdscdma_wbuf_jd_t;


#define BIGRAM_TDSCDMA_WBUF_JD_USIP_CTRL_DF0_DATA_SCALED_ADDR(x)                     (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part0.bigram_tdscdma_wbuf_jd_part0_union.pp_df_0_data_scaled))
#define BIGRAM_TDSCDMA_WBUF_JD_USIP_CTRL_DF1_DATA_SCALED_ADDR(x)                     (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part0.bigram_tdscdma_wbuf_jd_part1_union.pp_df_1_data_scaled))
#define BIGRAM_TDSCDMA_WBUF_JD_USIP_CTRL_DF0_DATA_ADDR(x)                            (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part0.bigram_tdscdma_wbuf_jd_part0_union.df_0_data))
#define BIGRAM_TDSCDMA_WBUF_JD_USIP_CTRL_DF1_DATA_ADDR(x)                            (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part0.bigram_tdscdma_wbuf_jd_part1_union.df_1_data))

#define BIGRAM_TDSCDMA_WBUF_JD_USIP_CTRL_MF_R_DF0_ADDR(x)                            (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part1.mf_r_df_0))
#define BIGRAM_TDSCDMA_WBUF_JD_USIP_CTRL_MF_R_DF1_ADDR(x)                            (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part1.mf_r_df_1))


#define BIGRAM_TDSCDMA_WBUF_JD_MTXQ0_VEC_ADDR(x)                                 (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part2.mtxq0_vec))
#define BIGRAM_TDSCDMA_WBUF_JD_MTXQ1_VEC_ADDR(x)                                 (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part2.mtxq1_vec))


#define BIGRAM_TDSCDMA_WBUF_JD_FW_DF0_ADDR(x)                                    (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part3.bigram_tdscdma_wbuf_jd_part3_union.fw_df_0))
#define BIGRAM_TDSCDMA_WBUF_JD_FW_DF1_ADDR(x)                                    (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part3.fw_df_1))
#define BIGRAM_TDSCDMA_WBUF_JD_CMA_ACD_MF_R_DF0_ADDR                             (BIGRAM_WBUF_ADDR(0) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part3.bigram_tdscdma_wbuf_jd_part3_union.cma_acd_mfr_df0))


#define BIGRAM_TDSCDMA_WBUF_JD_MTXB_CHOP_VEC_ADDR(x)                             (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part4.mtxb_chop_vec))
#define BIGRAM_TDSCDMA_WBUF_JD_SQR_D_ADDR(x)                                     (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part4.sqr_d))
#define BIGRAM_TDSCDMA_WBUF_JD_MTXS0_0_VEC_ADDR(x)                               (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part4.mtxs0_0_vec))
#define BIGRAM_TDSCDMA_WBUF_JD_MTXS0_1_VEC_ADDR(x)                               (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part4.mtxs0_1_vec))
#define BIGRAM_TDSCDMA_WBUF_JD_MTXS1_0_VEC_ADDR(x)                               (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part4.mtxs1_0_vec))
#define BIGRAM_TDSCDMA_WBUF_JD_MTXS1_1_VEC_ADDR(x)                               (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part4.mtxs1_1_vec))

#define BIGRAM_TDSCDMA_WBUF_JD_REMAP_MTXS0_0_VEC_ADDR(x)                         (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part4.remap_mtxs0_0_vec))
#define BIGRAM_TDSCDMA_WBUF_JD_REMAP_MTXS0_1_VEC_ADDR(x)                         (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part4.remap_mtxs0_1_vec))
#define BIGRAM_TDSCDMA_WBUF_JD_REMAP_MTXS1_0_VEC_ADDR(x)                         (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part4.remap_mtxs1_0_vec))
#define BIGRAM_TDSCDMA_WBUF_JD_REMAP_MTXS1_1_VEC_ADDR(x)                         (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_jd_t, payload.bigram_tdscdma_wbuf_jd_part4.remap_mtxs1_1_vec))


/*-------------SRP working buff allocation in BigRAM-------------------------------------*/

/*-------------TTU working buff allocation in BigRAM-------------------------------------*/
#define BIGRAM_TDSCDMA_WBUF_TTU_MAX_CELL_NUM             (4)
typedef union
{
    //total size = 12544 bytes + 4096 bytes + 4096 bytes= 20736 bytes
    kal_uint8 container[BIGRAM_WBUF_SZ];    
    struct
    {
        kal_uint8 rec_syncdl_last[BYTE64(16)];                                               //1024 bytes
        kal_uint8 syncdl_freq[BIGRAM_TDSCDMA_WBUF_TTU_MAX_CELL_NUM][BYTE64(16)];             //4096 bytes
        kal_uint8 reb_syncdl[BIGRAM_TDSCDMA_WBUF_TTU_MAX_CELL_NUM][BYTE64(16)];              //4096 bytes
        kal_uint8 rec_syncdl_after_cnl[BIGRAM_TDSCDMA_WBUF_TTU_MAX_CELL_NUM][BYTE64(16)];    //4096 bytes
        kal_uint8 est_cir[BIGRAM_TDSCDMA_WBUF_TTU_MAX_CELL_NUM][BYTE64(4)];                  //1024 bytes
        kal_uint8 est_dp[BIGRAM_TDSCDMA_WBUF_TTU_MAX_CELL_NUM][BYTE64(2)];                   //512 bytes
        kal_uint8 est_cir_after_path_sel[BIGRAM_TDSCDMA_WBUF_TTU_MAX_CELL_NUM][BYTE64(4)];   //1024 bytes
        kal_uint8 ave_dp_sw[BIGRAM_TDSCDMA_WBUF_TTU_MAX_CELL_NUM][BYTE64(2)];                //512 bytes
        kal_uint8 syncdl_seq[BIGRAM_TDSCDMA_WBUF_TTU_MAX_CELL_NUM][BYTE64(1)];               //256 bytes

        kal_uint8 debug_dump[BYTE64(64)];                                                    //4096 bytes
    } payload;
} bigram_tdscdma_wbuf_ttu_t;

#define BIGRAM_TDSCDMA_WBUF_TTU_REC_SYNCDL_LAST_ADDR(x)                     (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ttu_t, payload.rec_syncdl_last))
#define BIGRAM_TDSCDMA_WBUF_TTU_SYNCDL_FREQ_ADDR(x, cell_idx)               (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ttu_t, payload.syncdl_freq[(cell_idx)]))
#define BIGRAM_TDSCDMA_WBUF_TTU_REB_SYNCDL_ADDR(x, cell_idx)                (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ttu_t, payload.reb_syncdl[(cell_idx)]))
#define BIGRAM_TDSCDMA_WBUF_TTU_REC_SYNCDL_AFTER_CNL_ADDR(x, cell_idx)      (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ttu_t, payload.rec_syncdl_after_cnl[(cell_idx)]))
#define BIGRAM_TDSCDMA_WBUF_TTU_EST_CIR_ADDR(x, cell_idx)                   (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ttu_t, payload.est_cir[(cell_idx)]))
#define BIGRAM_TDSCDMA_WBUF_TTU_EST_DP_ADDR(x, cell_idx)                    (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ttu_t, payload.est_dp[(cell_idx)]))
#define BIGRAM_TDSCDMA_WBUF_TTU_SEL_CIR_ADDR(x, cell_idx)                   (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ttu_t, payload.est_cir_after_path_sel[(cell_idx)]))
#define BIGRAM_TDSCDMA_WBUF_TTU_AVE_DP_SW_ADDR(x, cell_idx)                 (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ttu_t, payload.ave_dp_sw[(cell_idx)]))
#define BIGRAM_TDSCDMA_WBUF_TTU_SYNCDL_SEQ_ADDR(x, cell_idx)                (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ttu_t, payload.syncdl_seq[(cell_idx)]))
#define BIGRAM_TDSCDMA_WBUF_TTU_DEBUG_DUMP_ADDR(x)                          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_tdscdma_wbuf_ttu_t, payload.debug_dump))

/* ---------- */
// Layer-3


#endif // __BIGRAM_TDSCDMA_H__
