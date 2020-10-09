/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   mml1_rf_calgor_interface.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   Multi-Mode Multi-RAT Layer1 RF Calibration interface to each RAT
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _MML1_RF_CALGOR_INTERFACE_H_
#define  _MML1_RF_CALGOR_INTERFACE_H_

/*===============================================================================*/
#include "kal_general_types.h"
#include "mml1_rf_calgor_def.h"
#include "mmrf_common_cid.h"


/*===============================================================================*/
/*        Define for Multi-Mode RF Calibration                                   */
/*===============================================================================*/
/** DET Self-K */
#define MMRFC_DETDC_MAX_TONE_PAIRS             (2)      ///<maximum numbers of tone pairs meas result for DET_DC
#define MMRFC_DETIQPCBDNL_MAX_TONE_PAIRS_NB    (26)     ///<maximum numbers of tone pairs for DET_IQPCBDNL under NB setting
#define MMRFC_DETIQPCBDNL_MAX_TONE_PAIRS_WB    (20)     ///<maximum numbers of tone pairs for DET_IQPCBDNL under WB setting

/** TX Self-K */
#define MMRFC_TXFDIQ_MAX_TONE_PAIRS            (4)      ///<maximum numbers of tone pairs for TX FDIQ
#define MMRFC_TXFDIQ_MAX_TONE_PAIRS_PADDED     (6)      ///<maximum numbers of padded tone pairs for TX FDIQ
#define MMRFC_TXFIIQ_MAX_TONE_PAIRS            (1)      ///<maximum numbers of tone pairs for TX FIIQ/DC

/** RX Self-K */
#define MMRFC_RXIRR_MAX_TONE_PAIRS             (6)      ///<maximum numbers of tone pairs for RX IRR calibration
#define MMRFC_RXIRR_MAX_TONE_PAIRS_PADDED      (3)      ///<maximum numbers of padded tone pairs for RX IRR calibration
//#define MMRFC_RXIRR_MAX_TONES                  (2 * MMRFC_MAX_RXIRR_TONE_PAIRS)          ///<maximum numbers of tones for RX IRR calibration
//#define MMRFC_RXIRR_MAX_TONES_PADDED           (2 * MMRFC_MAX_RXIRR_TONE_PAIRS_PADDED)   ///<maximum numbers of padded tones for RX IRR calibration
#define MMRFC_RXIRR_ACC_LEN                    (13)     ///<RX IRR accumulation length=2^13 for POC
#define MMRFC_RXIIP2_NOISE_MEAS_ACC_LEN        (14)     ///<RX IIP2 noise measurement accumulation length=2^14 for POC
#define MMRFC_RXIIP2_ACC_LEN                   (12)     ///<RX IIP2 accumulation length=2^12 for POC

/*RX DC Calibration*/
#define MMRFC_RXDC_ACC_LEN                     (14)     ///<RX DC accumulation length=2^14 for POC
#define MMRFC_RXDC_SCALE_FACTOR                (180*8)  ///<RX DC scale factor, u10.0

/*RX Path Loss Calibration (RSSI)*/
#define MMRFC_RXPL_ACC_LEN                     (12)     ///<RX PathLoss Cal accumulation length=2^12
#define MMRFC_RXDFE_FC_GAIN_ADJ_LTE            (0)      ///<RXDFE FC gain adjustment for 4G LTE
#define MMRFC_RXDFE_FC_GAIN_ADJ_FDD            (0)      ///<RXDFE FC gain adjustment for 3G FDD
#define MMRFC_RXDFE_FC_GAIN_ADJ_TDD            (0)      ///<RXDFE FC gain adjustment for 3G TDD
#define MMRFC_RXDFE_FC_GAIN_ADJ_C2K            (0)      ///<RXDFE FC gain adjustment for 3G C2K

/*TX Self-K Multi-tone*/
#define MMRFC_TXFIIQ_MULTI_TONE_PAIRS          (14)     ///<maximum numbers of multi-tone pairs for TX FIIQ/DC

/* Tx leakage */
#define MMRFC_RX_TX_LEAKAGE_MEAS_ACC_LEN       (8)     ///<RX tx leakage accumulation length=2^8 for POC
#define MMRFC_RX_TX_LEAKAGE_MEAS_STEP          (50) // Tx leakage measure step is 5Mkz, unit = 100KhZ
#define MMPOC_TX_LEAKAGE_RESULT_NUM            (1)

/*===============================================================================*/
/*        Enums for Multi-Mode RF Calibration                                    */
/*===============================================================================*/
typedef enum
{
   MMRFC_RAT_2G,
   MMRFC_RAT_3G_FDD,
   MMRFC_RAT_3G_TDD,
   MMRFC_RAT_LTE,
   MMRFC_RAT_C2K,
   MMRFC_RAT_CNT,
} MMRFC_RAT_E;

typedef enum{
   MMRFC_RX_LTE_1P4MHZ,            // 0
   MMRFC_RX_LTE_3MHZ,              // 1
   MMRFC_RX_LTE_5MHZ,              // 2
   MMRFC_RX_LTE_10MHZ,             // 3
   MMRFC_RX_LTE_15MHZ,             // 4
   MMRFC_RX_LTE_20MHZ,             // 5
   MMRFC_RX_LTE_30MHZ,             // 6
   MMRFC_RX_LTE_35MHZ,             // 7
   MMRFC_RX_LTE_40MHZ,             // 8
   MMRFC_RX_LTE_50MHZ,             // 9
   MMRFC_RX_LTE_60MHZ,             // 10
   MMRFC_RX_WCDMA_SC,              // 11
   MMRFC_RX_WCDMA_DC,              // 12
   MMRFC_RX_WCDMA_3C,              // 13
   MMRFC_RX_TDSCDMA_SC,            // 14
   MMRFC_RX_TDSCDMA_DC,            // 15
   MMRFC_RX_C2K,                   // 16
   MMRFC_RX_RAT_CBW_CFG_NUM,       // 17 
   MMRFC_RX_RAT_CBW_CFG_INVALID,
} MMRFC_RX_RAT_CBW_CFG_E;

typedef enum{
   MMRFC_TX_LTE_1P4MHZ,            // 0
   MMRFC_TX_LTE_3MHZ,              // 1
   MMRFC_TX_LTE_5MHZ,              // 2
   MMRFC_TX_LTE_10MHZ,             // 3
   MMRFC_TX_LTE_15MHZ,             // 4
   MMRFC_TX_LTE_20MHZ,             // 5
   MMRFC_TX_LTE_40MHZ,             // 6
   MMRFC_TX_WCDMA_SC,              // 7
   MMRFC_TX_WCDMA_DC,              // 8
   MMRFC_TX_TDSCDMA_SC,            // 9
   MMRFC_TX_C2K,                   // 10
   MMRFC_TX_RAT_CBW_CFG_NUM,       // 11 
   MMRFC_TX_RAT_CBW_CFG_INVALID,
} MMRFC_TX_RAT_CBW_CFG_E;

typedef enum
{
   MMRFC_RXMEAS_RC_CONFIG_C0R7   = 0,  /* Clipping 0, Rounding 7 */
   MMRFC_RXMEAS_RC_CONFIG_C2R5   = 1,  /* Clipping 2, Rounding 5 */
   MMRFC_RXMEAS_RC_CONFIG_C7R0   = 2,  /* Clipping 7, Rounding 0 */
   MMRFC_RXMEAS_RC_CONFIG_C1T6   = 3,  /* Clipping 1, Truncate 6 */
   MMRFC_RXMEAS_RC_CONFIG_C3T4   = 4,  /* Clipping 3, Truncate 4 */
   MMRFC_RXMEAS_RC_CONFIG_C6T1   = 5,  /* Clipping 6, Truncate 1 */
   MMRFC_RXMEAS_RC_CONFIG_C4R3   = 6,  /* Clipping 4, Rounding 3 */
   MMRFC_RXMEAS_RC_CONFIG_C5R2   = 7,  /* Clipping 5, Rounding 2 */
   MMRFC_RXMEAS_RC_CONFIG_INVALID,
} MMRFC_RXMEAS_RC_CONFIG_E;

typedef enum
{
   MMRFC_DET_CIC_DCM_RATE_1,   ///< CIC Decimation Rate = 1x
   MMRFC_DET_CIC_DCM_RATE_2,   ///< CIC Decimation Rate = 2x
   MMRFC_DET_CIC_DCM_RATE_4,   ///< CIC Decimation Rate = 4x
   MMRFC_DET_CIC_DCM_RATE_8,   ///< CIC Decimation Rate = 8x
   MMRFC_DET_CIC_DCM_RATE_16,  ///< CIC Decimation Rate = 16x
   MMRFC_DET_CIC_DCM_RATE_32,  ///< CIC Decimation Rate = 32x
   MMRFC_DET_CIC_DCM_RATE_NUM, 
} MMRFC_DET_CIC_DCM_RATE_E;

/*===============================================================================*/
/*        Structures for Multi-Mode RF Calibration                               */
/*===============================================================================*/
typedef struct{    
    kal_int16            re;    
    kal_int16            im;
} MMRFC_COMPLEX_16_T;

typedef struct{    
    kal_int32            re;    
    kal_int32            im;
} MMRFC_COMPLEX_32_T;

typedef struct{    
    kal_int64            re;    
    kal_int64            im;
} MMRFC_COMPLEX_64_T;

typedef struct{    
    kal_uint32           acc_i_sqr;
    kal_int32            acc_i;
    kal_int32            acc_iq;
    kal_int32            acc_q;
    kal_uint32           acc_q_sqr;
} MMRFC_IQK_MEAS_T;

typedef struct{    
    kal_int32            i_sin;
    kal_int32            q_sin;
    kal_int32            i_cos;
    kal_int32            q_cos;
} MMRFC_RXK_MEAS_T; ///< for RX IIP2 cal

typedef struct{    
    kal_int32            acc_i_cos;  ///< nco_acc_i_p
    kal_int32            acc_q_sin;  ///< nco_acc_q_n
    kal_int32            acc_q_cos;  ///< nco_acc_q_p
    kal_int32            acc_i_sin;  ///< nco_acc_i_n
    kal_int32            acc_i;
    kal_int32            acc_q;
} MMRFC_TXK_MEAS_T;


typedef struct
{
   kal_int32 dc_i;
   kal_int32 dc_q;
} MMRFC_RX_DC_RESULT_T;

typedef struct{    
    kal_int32            gain_est[MMRFC_RXIRR_MAX_TONE_PAIRS];
    kal_int32            gain_est_hw;
    kal_int32            phase_est_hw;
    kal_int32            freq_dep_phase_est[MMRFC_RXIRR_MAX_TONE_PAIRS];
    kal_int32            freq_dep_filt[MMRFC_RXIRR_FILT_TAPS_NUM]; ///< Valid for 2-point meas.
    
} MMRFC_RX_IRR_RESULT_T;

typedef struct{    
    kal_int32            gain_est_hw;
    kal_int32            gain_est;    
    kal_int32            phase_est_hw;
    kal_int32            phase_est;                          ///< phase_est_hw raw data
    kal_int32            freq_dep_phase_est;                 ///< phi_k
    MMRFC_COMPLEX_16_T   freq_resp;
    kal_int32            freq_dep_filt[MMRFC_FILT_TAPS_NUM]; ///< Valid for 2-point meas.
} MMRFC_RX_LS_IRR_T;

typedef struct{
   kal_uint32 sel_fd_filt_cal;
   kal_uint32 acc_len;
   kal_uint32 num_filt_tap;
   kal_uint32 num_tone_pairs;
   kal_uint32 inv_wttg;
   kal_uint32 len_pad;
   kal_uint32 tr_len;
   kal_uint32 rn1;
   kal_uint32 rn2;      
} MMRFC_DET_RX_IQ_POST_PROC_T;

typedef struct{    
    kal_int32            dc_est_i;
    kal_int32            dc_est_q;
} MMRFC_DET_DC_RESULT_T;

typedef struct
{
   kal_int32 i_part;
   kal_int32 q_part;

} MMRFC_DET_EQLPF_COMP_T;

typedef struct
{
   MMRFC_DET_EQLPF_COMP_T coef[MMRFC_DET_EQLPF_TAP_NUM];
   kal_int32              scale_i;
   kal_int32              scale_q;
} MMRFC_DET_EQLPF_CFG_T;

typedef struct{    
    kal_int32              gain_est_hw;
    kal_int32              phase_est_hw;
    kal_int32              freq_dep_filt[MMRFC_DET_EQLPF_TAP_NUM]; ///< Valid for 2-point meas.
    kal_int32              dnl; 
    kal_int32              freq_dep_phase_est;                 ///< Valid for 2-point meas. for error handling
    MMRFC_DET_EQLPF_CFG_T  det_fdad_filter;
} MMRFC_DET_IQDNL_RESULT_T;

typedef struct{    
    kal_int32              gain_est[MMRFC_DET_MAX_TONE_PAIRS];
    kal_int32              gain_est_hw;
    kal_int32              phase_est_hw;
    kal_int32              y_inv[MMRFC_DET_MAX_TONE_PAIRS];
    kal_int32              dnl; 
    kal_int32              freq_dep_phase_est[MMRFC_DET_MAX_TONE_PAIRS];///< Valid for 2-point meas. for error handling
    MMRFC_DET_EQLPF_CFG_T  det_fdadpcb_filter;
} MMRFC_DET_IQAD_RESULT_T;

typedef struct{
    kal_int32            im2_i;
    kal_int32            im2_q;
} MMRFC_IM2_SIGNAL_T;

typedef struct{
    kal_uint32           i_idx_opt; //optimum gate bias on I channel 
    kal_uint32           q_idx_opt; //optimum gate bias on Q channel 
} MMRFC_IIP2_RESULT_T;

typedef struct{    
    kal_int32            gain_est;
    kal_int32            phase_est;
    kal_int32            dc_est_i;
    kal_int32            dc_est_q;
    kal_int32            freq_dep_phase_tx[MMRFC_TXFDIQ_MAX_TONE_PAIRS]; ///< temp output for TX FDIQ
} MMRFC_TX_IQDC_RESULT_T;

typedef struct{    
    kal_int32            freq_dep_filt_i[MMRFC_TXFDAD_FILT_TAPS_NUM]; ///< for I channel
    kal_int32            freq_dep_filt_q[MMRFC_TXFDAD_FILT_TAPS_NUM]; ///< for Q channel
    kal_int32            freq_dep_phase_est[MMRFC_TXFDIQ_MAX_TONE_PAIRS]; ///< for error handling
} MMRFC_TX_FD_FILT_RESULT_T;

typedef struct{    
    kal_int32            tx_asym_filt_i[MMRFC_TXGA_FILT_TAPS_NUM]; //for I channel
    kal_int32            tx_asym_filt_q[MMRFC_TXGA_FILT_TAPS_NUM]; //for Q channel
} MMRFC_TX_GA_RESULT_T;

typedef struct
{
   MMRFC_DET_CIC_DCM_RATE_E cic_dcm;   ///< CIC Decimation
   kal_uint32 cic_scale;               ///< CIC Scale
} MMRFC_DET_CIC_CFG_T;

typedef struct
{
   kal_uint32 meas_sample; ///< detection path measurement accumulation sample length: 0~15
   kal_uint32 det_tr_len;  ///< detection path measurement input truncation length : 0~7
   kal_uint32 wait_sample; ///< bypass detection dfe sample before accumulation: 0~8
} MMRFC_DET_CON_T;

typedef struct
{
   kal_uint32             leak_pwr[MMRFC_TX_LEAKAGE_MEASURE_TONES];
} MMRFC_TX_LEAK_PWR_RESULT_T;

/*===============================================================================*/
/*        Extern for Multi-Mode RF Calibration                                   */
/*===============================================================================*/
extern const MMRFC_DET_CIC_CFG_T mmrfc_det_cic_cfg[MMRFC_TX_RAT_CBW_CFG_NUM];
extern const MMRFC_DET_CON_T mmrfc_det_con_detk[MMRFC_TX_RAT_CBW_CFG_NUM];
extern const MMRFC_DET_CON_T mmrfc_det_con_txk[MMRFC_TX_RAT_CBW_CFG_NUM];
extern const kal_uint32 mmrfc_tone_len_tx[MMRFC_TX_RAT_CBW_CFG_NUM];
extern const kal_uint32 mmrfc_tx_meas_1_tone_wait_us[MMRFC_TX_RAT_CBW_CFG_NUM];
extern const kal_uint32 mmrfc_tx_meas_2_tone_wait_us[MMRFC_TX_RAT_CBW_CFG_NUM];

/*===============================================================================*/
/*        Global Functions declaration (interface)                               */
/*===============================================================================*/
//MMRFC Algorithm
//DET FDFI ADPCB DCDNL
void MMRFC_Algo_Det_IqDnl(const MMRFC_IQK_MEAS_T* iqk_meas, MMRFC_DET_IQAD_RESULT_T* out_iq, MMRFC_TX_RAT_CBW_CFG_E det_cfg, kal_bool is_middle_gain);
void MMRFC_Algo_Det_Dc(const MMRFC_IQK_MEAS_T* iqk_meas, MMRFC_TX_RAT_CBW_CFG_E det_cfg, kal_uint16 is_freq_dep, MMRFC_DET_DC_RESULT_T* result);
//TX FDFIDC GA
void MMRFC_Algo_Tx_Fdiq(const MMRFC_TXK_MEAS_T* txk_meas, MMRFC_TX_RAT_CBW_CFG_E tx_cfg, MMRFC_TX_FD_FILT_RESULT_T* result, MMRFC_TX_IQDC_RESULT_T* out_tx);
void MMRFC_Algo_Tx_FiiqDc(const MMRFC_TXK_MEAS_T* txk_meas, MMRFC_TX_RAT_CBW_CFG_E tx_cfg, kal_int32 is_freq_dep, kal_int32 en_tx_dc_cal, kal_int32 dc_inv, MMRFC_TX_IQDC_RESULT_T* out_tx, kal_int32 ind_ttg);
kal_int32 MMRFC_Algo_Tx_Rc(const MMRFC_TXK_MEAS_T* txk_meas, MMRFC_TX_RAT_CBW_CFG_E cfg, kal_uint32 sel_lpf_rc_cal);
void MMRFC_Algo_Pga_Phase_Step(const MMRFC_TXK_MEAS_T* txk_meas, MMRFC_TX_RAT_CBW_CFG_E cfg, kal_int32* result);
void MMRFC_Algo_Tx_Ga(const MMRFC_TXK_MEAS_T* txk_meas, MMRFC_TX_RAT_CBW_CFG_E tx_cfg, MMRFC_TX_GA_RESULT_T* result, kal_bool is_73_pga_g12);

//RXIRR
void MMRFC_Algo_Rx_Irr_Drooping_Estimation(const MMRFC_IQK_MEAS_T* iqk_meas, MMRFC_RXMEAS_RC_CONFIG_E* final_cfg, MMRFC_RXMEAS_RC_CONFIG_E* ideal_cfg);
void MMRFC_Algo_Rx_Irr(const MMRFC_IQK_MEAS_T* iqk_meas, MMRFC_RX_IRR_RESULT_T* out_iq, MMRFC_RX_RAT_CBW_CFG_E rx_cfg);

void MMRFC_Algo_Rx_Dc(const MMRFC_IQK_MEAS_T* iqk_meas, kal_bool is_dig_dc_only, MMRFC_RX_DC_RESULT_T* rf_dc, MMRFC_RX_DC_RESULT_T* dig_dc);
kal_int32 MMRFC_Algo_Rx_Rssi(kal_int32 ib_power, kal_int32 total_gain, MMRFC_RAT_E rat);
void MMRFC_Algo_Rx_Iip2_Noise_Meas(const MMRFC_IQK_MEAS_T* iqk_meas, kal_uint16 acc_len, kal_uint32* result);
void MMRFC_Algo_Rx_Iip2_Algo2(const MMRFC_RXK_MEAS_T* rxk_meas, kal_uint16 acc_len, MMRFC_IIP2_RESULT_T* result);
kal_uint8 MMRFC_Algo_Rx_Iip2_Code_Compare(const MMRFC_RXK_MEAS_T* rxk_meas, kal_uint16 acc_len, kal_uint8 compare_num);
void MMRFC_Algo_Tx_Tone_Pwr(const MMRFC_TXK_MEAS_T* txk_meas, kal_int32* pwr_db); // 93 modification: always clipping 11 bits. Hence, no need acc_len anymore
kal_int32 MMRFC_Algo_Stx_Dcc_Delta_Nc(kal_int32 delta_duty_cycle, kal_uint32 nmmd);
kal_int32 MMRFC_Algo_Stx_Delta_Duty_Cycle(kal_uint32 tdc_ratio, kal_int32 dcc_delta_tdc_out);
void MMRFC_RX_HWOutput2SWPost(MMRFC_IQK_MEAS_T* iqk_meas, kal_int16 acc_len, kal_uint32* I_square, kal_uint32* Q_square, kal_int32* I_mean, kal_int32* Q_mean, kal_int32* IQ);
void MMRFC_DET_HWOutput2SWPost(MMRFC_IQK_MEAS_T* iqk_meas, kal_int16 acc_len, kal_uint32* I_square, kal_uint32* Q_square, kal_int32* I_mean, kal_int32* Q_mean, kal_int32* IQ);
void MMRFC_TX_FI_IRR(const MMRFC_TXK_MEAS_T* txk_meas, MMRFC_TX_RAT_CBW_CFG_E tx_cfg, kal_int16 acc_len, kal_uint32* gain_est_pos, kal_uint32* gain_est_neg, kal_int32* phase_est_pos, kal_int32* phase_est_neg);
void MMRFC_RX_DET_gain_phase_cal(kal_uint32 I_square, kal_uint32 Q_square, kal_int32 I_mean, kal_int32 Q_mean, kal_int32 IQ, kal_int32* gain_est_rx_pos, kal_int32* phase_est_rx_pos);
void MMRFC_RX_IQ2HWOutput(kal_int64* HW_i, kal_int64* HW_q, kal_uint64* x_square, kal_uint64* y_square, kal_int64* x_mean, kal_int64* y_mean, kal_int64* xy);
void MMRFC_RX_gain_phase_cal_IQ(kal_int64 x_square, kal_int64 y_square, kal_int64 x_mean, kal_int64 y_mean, kal_int64 xy, kal_int32* gain_est_rx_pos, kal_int32* phase_est_rx_pos);
void MMRFC_TX_GA(const MMRFC_TXK_MEAS_T* txk_meas, kal_int16 rn, MMRFC_COMPLEX_16_T* mean_tone_pos, MMRFC_COMPLEX_16_T* mean_tone_neg);

void MMRFC_RX_HWOutput2SWPost_93(MMRFC_IQK_MEAS_T* iqk_meas, kal_int16 acc_len, kal_uint32* I_square, kal_uint32* Q_square, kal_int32* I_mean, kal_int32* Q_mean, kal_int32* IQ);
void MMRFC_DET_HWOutput2SWPost_93(MMRFC_IQK_MEAS_T* iqk_meas, kal_uint32* I_square, kal_uint32* Q_square, kal_int32* I_mean, kal_int32* Q_mean, kal_int32* IQ);
void MMRFC_TX_FI_IRR_93(const MMRFC_TXK_MEAS_T* txk_meas, MMRFC_TX_RAT_CBW_CFG_E tx_cfg, kal_uint32* gain_est_pos, kal_uint32* gain_est_neg, kal_int32* phase_est_pos, kal_int32* phase_est_neg, kal_int32 ind_ttg);
void MMRFC_RX_DET_gain_phase_cal_93(kal_uint32 I_square, kal_uint32 Q_square, kal_int32 I_mean, kal_int32 Q_mean, kal_int32 IQ, kal_int32* gain_est_rx_pos, kal_int32* phase_est_rx_pos);
void MMRFC_RX_IQ2HWOutput_93(kal_int16* HW_i, kal_int16* HW_q, kal_uint64* x_square, kal_uint64* y_square, kal_int64* x_mean, kal_int64* y_mean, kal_int64* xy);
void MMRFC_RX_gain_phase_cal_IQ_93(kal_int64 x_square, kal_int64 y_square, kal_int64 x_mean, kal_int64 y_mean, kal_int64 xy, kal_int32* gain_est_rx_pos, kal_int32* phase_est_rx_pos);
void MMRFC_TX_GA_93(const MMRFC_TXK_MEAS_T* txk_meas, MMRFC_COMPLEX_16_T* mean_tone_pos, MMRFC_COMPLEX_16_T* mean_tone_neg);

kal_int16 MMRFC_Get_Tx_Ga_FilterTap_Num( MMRFC_TX_RAT_CBW_CFG_E cbw_idx, kal_bool is_73_pga_g12 );

void MML1_RF_CAL_ALGO_Rx_Txleakage_Algo(const MMRFC_RXK_MEAS_T* rxk_meas,kal_uint16 acc_len,kal_uint8 point_num, MMRFC_TX_LEAK_PWR_RESULT_T* result);
void MML1_RF_CAL_ALGO_Rx_Txleakage_Max_Pwr(MMRFC_TX_LEAK_PWR_RESULT_T* tx_leakage_pwr, kal_uint32* max_leakage_pwr);
void MMRFC_Pcfe_Gain_Determination(kal_int32 Ptar,  kal_int32* idx_pga,kal_int32* PGA_LUT_B,kal_int32 PGA_LUT_B_size, kal_int32* Gpa_dB, kal_int32* Gpga_dB,kal_int32* Gbb_dB );

#endif /* End of #ifndef _MML1_RF_CAL_INTERFACE_H_ */

