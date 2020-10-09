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
 *   bigram_c2k.h
 *
 * Project:
 * --------
 *   MT6293 Project
 *
 * Description:
 * ------------
 *   Bigram plan for C2K EVDO CE and EQ
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/


#ifndef __BIGRAM_C2K_H__
#define __BIGRAM_C2K_H__

#include "bigram.h"

#define CEILING(X, Y)       ((X+Y-1)/Y)
#define BIT2BYTE(x)         ((x)/8)
#define SIZEOF(s,m)         ((unsigned int)sizeof(((s*)0)->m))

#define PHCH0_FCH_SIZE     768
#define PHCH1_SCH_SIZE     12288
#define PING_PONG_BUFF     2
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

// static buffer section
#define EQ_PAC_BUFFER_INTP_LEN              CEILING_BYTE64((1024+312)*2*32/8)
#define EQ_PARAM_ETA_LEN                    HALF2BYTE(1)
#define EQ_PARAM_LAMBDA_LEN                 HALF2BYTE(1)
#define EQ_PARAM_PRE_SNR_LEN                HALF2BYTE(1)

typedef union
{
    kal_uint8 container[CEILING_BYTE64(BIGRAM_C2K_EQ_DATA_SZ)];
    struct
    {
        // half slot interpolation buffer, interpolate from pac buf
        kal_uint8 pac_buf_intp      [2][EQ_PAC_BUFFER_INTP_LEN];
        // 3 iterations pilot eta
        kal_uint8 pilot_eta         [3][EQ_PARAM_ETA_LEN];
        // 3 iterations pilot eta
        kal_uint8 pilot_lambda      [3][EQ_PARAM_LAMBDA_LEN];
        // 2 type, 3 iteration data eta, select type 0 when max(eqPreSnrAn0, eqPreSnrAn1) < 10^{-1.2}, else select type 1
        kal_uint8 data_eta          [2][3][HALF2BYTE(1)];
        // 2 type, 3 iteration data lambda, select type 0 when max(eqPreSnrAn0, eqPreSnrAn1) < 10^{-1.2}, else select type 1
        kal_uint8 data_lambda       [2][3][HALF2BYTE(1)];
        // post snr from eq_pp
        kal_uint16 post_snr         [EQ_PARAM_PRE_SNR_LEN];
//#if defined(__JSP__)
        kal_uint8 dummy_mem[2][CHALF2BYTE(512)];
//#endif
    } payload;
} bigram_grp1_c2k_eq_t;

#define BIGRAM_C2K_PAC_BUF_INTP(x)          (BIGRAM_C2K_EQ_DATA_ADDR + offsetof(bigram_grp1_c2k_eq_t, payload.pac_buf_intp[(x)]))
#define BIGRAM_C2K_EQ_PILOT_ETA(x)          (BIGRAM_C2K_EQ_DATA_ADDR + offsetof(bigram_grp1_c2k_eq_t, payload.pilot_eta[x]))
#define BIGRAM_C2k_EQ_PILOT_LAMBDA(x)       (BIGRAM_C2K_EQ_DATA_ADDR + offsetof(bigram_grp1_c2k_eq_t, payload.pilot_lambda[x]))
#define BIGRAM_C2K_EQ_DATA_ETA(x, y)        (BIGRAM_C2K_EQ_DATA_ADDR + offsetof(bigram_grp1_c2k_eq_t, payload.data_eta[x][y]))
#define BIGRAM_C2K_EQ_DATA_LAMBDA(x, y)     (BIGRAM_C2K_EQ_DATA_ADDR + offsetof(bigram_grp1_c2k_eq_t, payload.data_lambda[x][y]))
#define BIGRAM_C2K_EQ_POST_SNR              (BIGRAM_C2K_EQ_DATA_ADDR + offsetof(bigram_grp1_c2k_eq_t, payload.post_snr))
//#if defined(__JSP__)
#define BIGRAM_C2K_DUMMY_MEM(x)             (BIGRAM_C2K_EQ_DATA_ADDR + offsetof(bigram_grp1_c2k_eq_t, payload.dummy_mem[x]))
//#endif

#define C2K_CE_FNG_RC0_TBL_SZ                (HALF2BYTE(32))
#define C2K_CE_FNG_RC05_TBL_SZ               (HALF2BYTE(32))
#define C2K_CE_H_LS_SZ                       (CHALF2BYTE(64))
#define C2K_CE_H_RAW_SZ                      (CHALF2BYTE(64))
#define C2K_CE_PRE_SNR_SZ                    (HALF2BYTE(5))
#define C2K_CE_PILOT_POW_SZ                  (HALF2BYTE(1))
#define C2K_CE_CORR_POW_SZ                   (HALF2BYTE(1))
#define C2K_CE_NOISE_POW_SZ                  (HALF2BYTE(1))
#define C2K_CE_MATRIX_L_SZ                   (CHALF2BYTE(3*3))
#define C2K_CE_PN_SEQUENCE_SZ                (CHALF2BYTE(96))

typedef union
{
    kal_uint8 container[CEILING_BYTE64(BIGRAM_C2K_CE_SZ)];
    struct
    {
        // h_ls tappled delay line, 2 (rxd) * 4 (taps) * 64 complex floating point elements
        kal_uint8 h_ls          [2][4][C2K_CE_H_LS_SZ];
        // offset 0.5  chip rc table for each finger
        kal_uint8 fng_rc0_table [3][C2K_CE_FNG_RC0_TBL_SZ];
        // offset 0.5  chip rc table for each finger
        kal_uint8 fng_rc05_table[3][C2K_CE_FNG_RC05_TBL_SZ];
        // h_raw from ce output, 2 (rxd) * 5 (segments) * 64 complex floating point elements
        kal_uint8 h_raw         [2][5][C2K_CE_H_RAW_SZ];
        // pre_snr for EQ module, 2 (rxd) * 5 (segments) * 1 real floating point
        kal_uint8 pre_snr       [2][C2K_CE_PRE_SNR_SZ];
        // for pilot power alpha filter calculation, rxd dimension, 1 real floating point
        kal_uint8 pilot_pow     [2][C2K_CE_PILOT_POW_SZ];
        // for pilot power alpha filter calculation, rxd dimension, 1 real floating point
        kal_uint8 corr_pow      [2][C2K_CE_CORR_POW_SZ];
        // for noise power alpha filter calculation,  rxd dimension, 1 real floating point
        kal_uint8 noise_pow     [2][C2K_CE_NOISE_POW_SZ];
        // l matrix
        kal_uint8 matrix_l      [C2K_CE_MATRIX_L_SZ];
        // pn sequence
        kal_uint8 pn_seq        [C2K_CE_PN_SEQUENCE_SZ];
    } payload;
} bigram_grp1_c2k_ce_t;

#define BIGRAM_C2K_CE_FNG_RC0_TABLE(x)      (BIGRAM_C2K_CE_ADDR + offsetof(bigram_grp1_c2k_ce_t, payload.fng_rc0_table[x]))
#define BIGRAM_C2K_CE_FNG_RC0_TABLE_END(x)  (BIGRAM_C2K_CE_FNG_RC0_TABLE(x) + SIZEOF(bigram_grp1_c2k_ce_t, payload.fng_rc0_table[x]) - HALF2BYTE(1))
#define BIGRAM_C2K_CE_FNG_RC05_TABLE(x)     (BIGRAM_C2K_CE_ADDR + offsetof(bigram_grp1_c2k_ce_t, payload.fng_rc05_table[x]))
#define BIGRAM_C2K_CE_FNG_RC05_TABLE_END(x) (BIGRAM_C2K_CE_FNG_RC05_TABLE(x) + SIZEOF(bigram_grp1_c2k_ce_t, payload.fng_rc05_table[x]) - HALF2BYTE(1))
#define BIGRAM_C2K_CE_H_LS(x,y)             (BIGRAM_C2K_CE_ADDR + offsetof(bigram_grp1_c2k_ce_t, payload.h_ls[x][y]))
#define BIGRAM_C2K_CE_H_RAW(x,y)            (BIGRAM_C2K_CE_ADDR + offsetof(bigram_grp1_c2k_ce_t, payload.h_raw[x][y]))
#define BIGRAM_C2K_CE_PRE_SNR(x)            (BIGRAM_C2K_CE_ADDR + offsetof(bigram_grp1_c2k_ce_t, payload.pre_snr[x]))
#define BIGRAM_C2K_CE_PILOT_POW(x)          (BIGRAM_C2K_CE_ADDR + offsetof(bigram_grp1_c2k_ce_t, payload.pilot_pow[x]))
#define BIGRAM_C2K_CE_CORR_POW(x)           (BIGRAM_C2K_CE_ADDR + offsetof(bigram_grp1_c2k_ce_t, payload.corr_pow[x]))
#define BIGRAM_C2K_CE_NOISE_POW(x)          (BIGRAM_C2K_CE_ADDR + offsetof(bigram_grp1_c2k_ce_t, payload.noise_pow[x]))
#define BIGRAM_C2K_CE_ANG_PRE_SNR(x)        (BIGRAM_C2K_CE_ADDR + offsetof(bigram_grp1_c2k_ce_t, payload.avg_pre_snr[x]))
#define BIGRAM_C2K_CE_MATRIX_L_ADDR         (BIGRAM_C2K_CE_ADDR + offsetof(bigram_grp1_c2k_ce_t, payload.matrix_l))
#define BIGRAM_C2K_CE_PN_SEQ                (BIGRAM_C2K_CE_ADDR + offsetof(bigram_grp1_c2k_ce_t, payload.pn_seq))
#define BIGRAM_C2K_CE_PN_SEQ_ADD_1          (BIGRAM_C2K_CE_ADDR + offsetof(bigram_grp1_c2k_ce_t, payload.pn_seq) + CHALF2BYTE(1))

/* Working buffer:
grp1_common.wbuf, size = 64KB = 32KB*2
*/

typedef struct c2k_eq_pilot_gi_s c2k_eq_pilot_gi_t;
struct c2k_eq_pilot_gi_s
{
#define C2K_EQ_PILOT_GI_GI_SZ      (CHALF2BYTE((256-96)/2))
#define C2K_EQ_PILOT_GI_PILOT_SZ   (CHALF2BYTE(96))
#define C2K_EQ_PILOT_GI_DUMMY_SZ   (CHALF2BYTE(512-256))
    // guard interval part 1 for pilot
    kal_uint8   gi_part1    [C2K_EQ_PILOT_GI_GI_SZ];
    // pilot part
    kal_uint8   pilot       [C2K_EQ_PILOT_GI_PILOT_SZ];
    // guard interval part 2 for pilot
    kal_uint8   gi_part2    [C2K_EQ_PILOT_GI_GI_SZ];
    kal_uint8   dummy       [C2K_EQ_PILOT_GI_DUMMY_SZ];
};

typedef struct c2k_eq_data02_gi_s c2k_eq_data02_gi_t;
struct c2k_eq_data02_gi_s
{
#define C2K_EQ_DATA02_GI_GI1_SZ     (CHALF2BYTE(156))
#define C2K_EQ_DATA02_GI_GI2_SZ     (CHALF2BYTE(148))
#define C2K_EQ_DATA02_GI_PILOT_SZ   (CHALF2BYTE(208))
    // guard interval part 1 for data length 208 chips
    kal_uint8   gi_part1    [C2K_EQ_DATA02_GI_GI1_SZ];
    // 208 chips data part
    kal_uint8   data        [C2K_EQ_DATA02_GI_PILOT_SZ];
    // guard interval part 2 for data length 208 chips
    kal_uint8   gi_part2    [C2K_EQ_DATA02_GI_GI2_SZ];
};

typedef struct c2k_eq_data13_gi_s c2k_eq_data13_gi_t;
struct c2k_eq_data13_gi_s
{
#define C2K_EQ_DATA13_GI_GI1_SZ     (CHALF2BYTE(164))
#define C2K_EQ_DATA13_GI_GI2_SZ     (CHALF2BYTE(156))
#define C2K_EQ_DATA13_GI_PILOT_SZ   (CHALF2BYTE(192))
    // guard interval part 1 for data length 192 chips
    kal_uint8   gi_part1    [C2K_EQ_DATA13_GI_GI1_SZ];
    // 208 chips data part
    kal_uint8   data        [C2K_EQ_DATA13_GI_PILOT_SZ];
    // guard interval part 1 for data length 192 chips
    kal_uint8   gi_part2    [C2K_EQ_DATA13_GI_GI2_SZ];
};

#define BIGRAM_C2K_EQ_WBUF_MAX_C_VEC_LEN_SZ     (CHALF2BYTE(512))
#define BIGRAM_C2K_EQ_WBUF_MAX_R_VEC_LEN_SZ     (HALF2BYTE(512))

typedef union
{
    kal_uint8 container[CEILING_BYTE64(BIGRAM_WBUF_SZ)];
    struct
    {
        // match filter output
        kal_uint8 mf_data_out       [BIGRAM_C2K_EQ_WBUF_MAX_C_VEC_LEN_SZ];
        // received signal after fft
        kal_uint8 received_sig_fft  [2][BIGRAM_C2K_EQ_WBUF_MAX_C_VEC_LEN_SZ];
        // chest h after fft, from chest module
        kal_uint8 che_h_fft         [2][BIGRAM_C2K_EQ_WBUF_MAX_C_VEC_LEN_SZ];
        // sigma square sum result
        kal_uint8 sigma_sqr_sum     [BIGRAM_C2K_EQ_WBUF_MAX_R_VEC_LEN_SZ];
        union
        {
            // feedback signal
            kal_uint8 fd_fb_signal      [BIGRAM_C2K_EQ_WBUF_MAX_C_VEC_LEN_SZ];
            c2k_eq_pilot_gi_t      pilot_gi;
            c2k_eq_data02_gi_t     data02_gi;
            c2k_eq_data13_gi_t     data13_gi;
        };
    } payload;
} bigram_grp1_c2k_wbuf_eq_t;

#define C2K_WBUF_EQ_MF_DATA_OUT_ADDR(x)            (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_c2k_wbuf_eq_t, payload.mf_data_out))
#define C2K_WBUF_EQ_RECEIVED_SIG_FFT_ADDR(x, y)    (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_c2k_wbuf_eq_t, payload.received_sig_fft[y]))
#define C2K_WBUF_EQ_CHE_H_FFT_ADDR(x, y)           (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_c2k_wbuf_eq_t, payload.che_h_fft[y]))
#define C2K_WBUF_EQ_SIGMA_SQR_SUM_ADDR(x)          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_c2k_wbuf_eq_t, payload.sigma_sqr_sum))
//#define C2K_WBUF_EQ_PILOT_SQR_SUM_ADDR(x)          (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_c2k_wbuf_eq_t, pilot_sqr_sum))
#define C2K_WBUF_EQ_FD_FB_SIGNAL_ADDR(x)           (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_c2k_wbuf_eq_t, payload.fd_fb_signal))

#define C2K_WBUF_EQ_PILOT_GI_ADDR(x)               (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_c2k_wbuf_eq_t, payload.pilot_gi))
#define C2K_WBUF_EQ_DATA02_GI_ADDR(x)              (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_c2k_wbuf_eq_t, payload.data02_gi))
#define C2K_WBUF_EQ_DATA13_GI_ADDR(x)              (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_c2k_wbuf_eq_t, payload.data13_gi))



/* Working buffer: CE
grp1_common.wbuf, size = 64KB = 32KB*2
*/

#define C2K_WBUF_CE_INPUT_PILOT_SZ      (CHALF2BYTE((96+32)*2))
#define C2K_WBUF_CE_HCORR_SZ            (CHALF2BYTE(64))
#define C2K_WBUF_CE_MATRIX_B_SZ         (CHALF2BYTE(3))

typedef union
{
    kal_uint8 container[CEILING_BYTE64(BIGRAM_WBUF_SZ)];
    struct
    {
        // h correlation result
        // TODO:Only for debug
        kal_uint8 hcorr                 [C2K_WBUF_CE_HCORR_SZ];
        // input pilot
        kal_uint8 input_pilot           [C2K_WBUF_CE_INPUT_PILOT_SZ];
        // b matrix
        kal_uint8 matrix_b              [C2K_WBUF_CE_MATRIX_B_SZ];
    } payload;
} bigram_grp1_c2k_wbuf_ce_t;

#define C2K_WBUF_CE_HCORR(x)                    (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_c2k_wbuf_ce_t, payload.hcorr))
#define C2K_WBUF_CE_HCORR_END(x)                (C2K_WBUF_CE_HCORR(x) + SIZEOF(bigram_grp1_c2k_wbuf_ce_t, payload.hcorr)- CHALF2BYTE(1))
#define C2K_WBUF_CE_INPUT_PILOT_ADDR(x)         (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_c2k_wbuf_ce_t, payload.input_pilot))
#define C2K_WBUF_CE_MATRIX_B_ADDR(x)            (BIGRAM_WBUF_ADDR(x) + offsetof(bigram_grp1_c2k_wbuf_ce_t, payload.matrix_b))
#define C2K_WBUF_CE_MATRIX_B_ADDR_END(x)        (C2K_WBUF_CE_MATRIX_B_ADDR(x) + SIZEOF(bigram_grp1_c2k_wbuf_ce_t, payload.matrix_b) - CHALF2BYTE(1))


/* ---------- */
// Layer-3

#define EQ_PILOT_GI_GI_PART1_ADDR(x)                (C2K_WBUF_EQ_PILOT_GI_ADDR(x) + offsetof(c2k_eq_pilot_gi_t, gi_part1))
#define EQ_PILOT_GI_GI_PILOT_ADDR(x)                (C2K_WBUF_EQ_PILOT_GI_ADDR(x) + offsetof(c2k_eq_pilot_gi_t, pilot))
#define EQ_PILOT_GI_GI_PART2_ADDR(x)                (C2K_WBUF_EQ_PILOT_GI_ADDR(x) + offsetof(c2k_eq_pilot_gi_t, gi_part2))

#define EQ_DATA02_GI_GI_PART1_ADDR(x)                (C2K_WBUF_EQ_DATA02_GI_ADDR(x) + offsetof(c2k_eq_data02_gi_t, gi_part1))
#define EQ_DATA02_GI_GI_DATA_ADDR(x)                 (C2K_WBUF_EQ_DATA02_GI_ADDR(x) + offsetof(c2k_eq_data02_gi_t, data))
#define EQ_DATA02_GI_GI_PART2_ADDR(x)                (C2K_WBUF_EQ_DATA02_GI_ADDR(x) + offsetof(c2k_eq_data02_gi_t, gi_part2))

#define EQ_DATA13_GI_GI_PART1_ADDR(x)                (C2K_WBUF_EQ_DATA13_GI_ADDR(x) + offsetof(c2k_eq_data13_gi_t, gi_part1))
#define EQ_DATA13_GI_GI_DATA_ADDR(x)                 (C2K_WBUF_EQ_DATA13_GI_ADDR(x) + offsetof(c2k_eq_data13_gi_t, data))
#define EQ_DATA13_GI_GI_PART2_ADDR(x)                (C2K_WBUF_EQ_DATA13_GI_ADDR(x) + offsetof(c2k_eq_data13_gi_t, gi_part2))

typedef union
{
	  kal_uint8 container[BIGRAM_RAKE_BRP_SZ];
	  struct
	  {
	  	  kal_uint8 phch0_ping_pong[PING_PONG_BUFF][PHCH0_FCH_SIZE+PHCH1_SCH_SIZE];
	  	  kal_uint8 fch_sym_sum_num[PING_PONG_BUFF][20];
	  }payload;
}bigram_rake_c2k_t;

#define BIGRAM_RAKE_C2K_PHCH0_FCH(x)                (BIGRAM_RAKE_BRP_ADDR + offsetof(bigram_rake_c2k_t, payload.phch0_ping_pong[x]))
#define BIGRAM_RAKE_C2K_FCH_SYM_SUM_NUM(x)          (BIGRAM_RAKE_BRP_ADDR + offsetof(bigram_rake_c2k_t, payload.fch_sym_sum_num[x]))

#endif // __BIGRAM_C2K_H__

