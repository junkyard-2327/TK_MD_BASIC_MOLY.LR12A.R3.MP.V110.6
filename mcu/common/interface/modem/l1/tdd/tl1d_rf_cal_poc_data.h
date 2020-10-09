/*******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/


/*****************************************************************************
 *
 * Filename:
 * ---------
 *   tl1d_rf_cal_poc_data.h
 *
 * Project:
 * --------
 *   TK6291 Project
 *
 * Description:
 * ------------
 *   poc data struction definition
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*===============================================================================*/

#ifndef _TL1_RF_CAL_POC_DATA_H_
#define _TL1_RF_CAL_POC_DATA_H_

/*******************************************************************************
 * #include
 ******************************************************************************/
#include "kal_general_types.h"
#include "mml1_rf_cal_def.h"
#include "tl1d_rf_cid.h"


/*******************************************************************************
 * #define
 ******************************************************************************/


/*******************************************************************************
 * Typedef
 ******************************************************************************/

typedef struct{    
    kal_int32            gain_est_hw;
    kal_int32            phase_est_hw;
    kal_int32            freq_dep_filt[MMRFC_FILT_TAPS_NUM]; ///< Valid for 2-point meas.
} TDS_RF_POC_RX_IRR_COMP_T;


typedef struct
{
   kal_int16            dc_i;
   kal_int16            dc_q;
} TDS_RF_POC_RX_DC_COMP_T;

typedef struct
{
   kal_int32 i_part;
   kal_int32 q_part;
} TDS_RF_POC_DET_FREQ_DEP_T;

typedef struct{    
    kal_int32                            gain_est_hw;
    kal_int32                            phase_est_hw;
    TDS_RF_POC_DET_FREQ_DEP_T            freq_dep_filt[MMRFC_DET_EQLPF_TAP_NUM]; ///< Valid for 2-point meas.
    kal_int32            dnl;
} TDS_RF_POC_DET_IQ_COMP_T;

typedef struct
{
   kal_int32            dc_i;
   kal_int32            dc_q;
} TDS_RF_POC_DET_DC_COMP_T;

typedef struct
{    
    kal_int32            gain_est;
    kal_int32            phase_est;
    kal_int32            dc_est_i;
    kal_int32            dc_est_q;
    kal_int32            freq_dep_phase_tx; ///< temp output for TX FDIQ
} TDS_RF_POC_TX_IQDC_COMP_T;



typedef struct{    
    kal_int16            freq_dep_filt_mode1[MMRFC_FILT_TAPS_NUM];
	kal_int16            freq_dep_filt_mode2[MMRFC_FILT_TAPS_NUM];
} TDS_RF_POC_TX_FDIQ_COMP_T;


typedef struct
{
   #ifndef TK6291_E1EVB
	 kal_uint32 verno;
   #endif	
   /* RX IRR */
   TDS_RF_POC_RX_IRR_COMP_T       rx_irr_hpm[MMRFC_ANT_NUM]; //3 
   TDS_RF_POC_RX_IRR_COMP_T       rx_irr_lpm[MMRFC_ANT_NUM]; //3 

   /* RX DC */
   TDS_RF_POC_RX_DC_COMP_T        rx_dc_hpm[MMRFC_RXDC_TIA_GAIN_STEPS][MMRFC_RXDC_PGA_GAIN_STEPS]; //3 
   TDS_RF_POC_RX_DC_COMP_T        rx_dc_lpm[MMRFC_RXDC_TIA_GAIN_STEPS][MMRFC_RXDC_PGA_GAIN_STEPS]; //3 

   TDS_RF_POC_RX_DC_COMP_T        rx_dig_dc_hpm[MMRFC_RXDC_TIA_GAIN_STEPS][MMRFC_RXDC_PGA_GAIN_STEPS]; //3 


   /* DET */
   /* Only FDIQ is dependent with sample rates, other redundent items need to be removed in NVRAM/share memory structure */
   TDS_RF_POC_DET_IQ_COMP_T       det_iqdnl[MMRFC_DET_FE_GAIN_STEPS]; //2 
   TDS_RF_POC_DET_DC_COMP_T       det_dc[MMRFC_DET_GAIN_STEPS+2]; //15 DET gain step

   kal_uint32                     det_coarse_dcoc_cw807; //CW807, V_TXCDCOC1[19:0]
   kal_uint32                     det_coarse_dcoc_cw808; //CW808, V_TXCDCOC2[19:0]

   kal_uint32                     tx_lo;            //CW714, {2'b00,V_TXLOCAP[6:0],V_TXLOIND,V_TXLOINBIAS[4:0],V_TXLOINBIAS[4:0]}
   kal_uint8                      tx_lo_ind;
   kal_uint8                      tx_lo_capcal_peak_cap; //CW714
   kal_uint8                      tx_lo_in_bias_hpm;     //CW714
   kal_uint8                      tx_lo_in_bias_lpm;     //CW714   
   /* TX RC */
   kal_int16                      tx_rc_lpf;
   kal_int16                      tx_rc_rcf;
 
   /* TX IQDC */
   /* TXIQ: G0, G9, G10, G12a, G14a, G12b, G14b       */
   /* TXDC: G0, G9, G10, G12a, G14a, G12b, G14b, G21  */
   /* freq_dep_phase_tx is temp output for FDIQ cal   */
   TDS_RF_POC_TX_IQDC_COMP_T      tx_iqdc_lin[MMRFC_TX_PGA_SLICE_NUM+1]; //+1 only for DC with PGA-AUX
   TDS_RF_POC_TX_IQDC_COMP_T      tx_iqdc_dpd[MMRFC_TX_PGA_SLICE_NUM+1]; //+1 only for DC with PGA-AUX
   TDS_RF_POC_TX_FDIQ_COMP_T      tx_fdiq[MMRFC_TX_PGA_SLICE_NUM+1];

   /* TX DNL */
   kal_int16                   tx_dnl_lin_pga_a[MMRFC_TX_DNL_PGA_A_SEQ_NUM]; //20 gain diff
   kal_int16                   tx_dnl_lin_pga_b[MMRFC_TX_DNL_PGA_B_SEQ_NUM]; //15 gain diff
   kal_int16                   tx_dnl_dpd_pga_a[MMRFC_TX_DNL_PGA_A_SEQ_NUM]; //20 gain diff
   kal_int16                   tx_dnl_dpd_pga_b[MMRFC_TX_DNL_PGA_B_SEQ_NUM]; //15 gain diff

   /* TX PGA Gain Step */
   kal_int16                   pga_gain_step[MMRFC_TX_PGA_GAIN_STEP_NUM];

   /* TX PGA Cap Tuning */
   kal_int16                   cap_tuning_pga_a;
   kal_int16                   cap_tuning_pga_b;
   
} TDS_RF_POC_COMP_PER_BAND_T;

typedef struct
{
   TDS_RF_POC_COMP_PER_BAND_T tds_result[2];
} TDS_RF_POC_COMP_T;



/*POC NVRAM DATA, DON NOT CHANGE*/
#ifdef _TL1_RF_CC_SHM_DATA_C_
#if IS_TL1D_RF_MT6177L
TDS_RF_POC_COMP_T NVRAM_EF_AST_TL1_POCDATA_3439_DEFAULT = {
{{
	 #ifndef TK6291_E1EVB
	    0,
	 #endif	
    {{0},{0}},
    {{0},{0}},
    {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}},
    {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}},
    {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}},
    {{0,0,{{5,5}, {-35,-35}, {144,144}, {-454,-454}, {-350,-350}, {312,312}, {-218,-218}, {127,127}, {-59,-59}, {19,19}, {-3,-3}},701},\
    {0,0,{{5,5}, {-36,-36}, {144,144}, {-437,-437}, {-371,-371}, {316,316}, {-215,-215}, {123,123}, {-56,-56}, {18,18}, {-3,-3}},701}},
    {{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     172,
     13,
    {{0},{0},{0},{0},{0},{0},{0},{0}},
    {{0},{0},{0},{0},{0},{0},{0},{0}},
    {{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},
    {-156,-147,-163,-172,-190,-208,-234,-233,-287,-374,-398,-516,-626,-906,-288,-341,-400,-462,-623,-908},
    {-624,-894,-295,-328,-406,-471,-634,-867,-1513,-1505,-1671,-1457,-1583,-1563,-1502,-1520},
    {0},
    {0},
    {0},
     0,
     0
},
{
	 #ifndef TK6291_E1EVB
	    0,
	 #endif	
    {{0},{0}},
    {{0},{0}},
    {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}},
    {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}},
    {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}},
    {{0,0,{{5,5}, {-35,-35}, {144,144}, {-454,-454}, {-350,-350}, {312,312}, {-218,-218}, {127,127}, {-59,-59}, {19,19}, {-3,-3}},701},\
    {0,0,{{5,5}, {-36,-36}, {144,144}, {-437,-437}, {-371,-371}, {316,316}, {-215,-215}, {123,123}, {-56,-56}, {18,18}, {-3,-3}},701}},
    {{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     172,
     13,
    {{0},{0},{0},{0},{0},{0},{0},{0}},
    {{0},{0},{0},{0},{0},{0},{0},{0}},
    {{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},
    {-156,-147,-163,-172,-190,-208,-234,-233,-287,-374,-398,-516,-626,-906,-288,-341,-400,-462,-623,-908},
    {-624,-894,-295,-328,-406,-471,-634,-867,-1513,-1505,-1671,-1457,-1583,-1563,-1502,-1520},
    {0},
    {0},
    {0},
     0,
     0
}}
};
#elif IS_TL1D_RF_MT6177M
TDS_RF_POC_COMP_T NVRAM_EF_AST_TL1_POCDATA_3439_DEFAULT = {
{{
	 #ifndef TK6291_E1EVB
	    0,
	 #endif	
	 {{0},{0}},
	 {{0},{0}},
	 {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}},
	 {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}},
	 {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}},
	 {{0,0,{{5,5}, {-35,-35}, {144,144}, {-454,-454}, {-350,-350}, {312,312}, {-218,-218}, {127,127}, {-59,-59}, {19,19}, {-3,-3}},701},\
	 {0,0,{{5,5}, {-36,-36}, {144,144}, {-437,-437}, {-371,-371}, {316,316}, {-215,-215}, {123,123}, {-56,-56}, {18,18}, {-3,-3}},701}},
	 {{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     26,
     22,
	 {{0},{0},{0},{0},{0}},
     {{0},{0},{0},{0},{0}},
	 {{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},
    { -136,-160,-160,-184,-192,-208,-240,-256,-296,-344,-408,-496,-640,-896,-304,-336,-408,-496,-640,-904,-1536}, //21
    { -256,-1536, -1536, -1536, -1536, -1536, -1536,-1536 },
    {0},
    {0},
    {0},
     0,
     0
},
{
	 #ifndef TK6291_E1EVB
	    0,
	 #endif	
	 {{0},{0}},
	 {{0},{0}},
	 {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}},
	 {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}},
	 {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}},
	 {{0,0,{{5,5}, {-35,-35}, {144,144}, {-454,-454}, {-350,-350}, {312,312}, {-218,-218}, {127,127}, {-59,-59}, {19,19}, {-3,-3}},701},\
	 {0,0,{{5,5}, {-36,-36}, {144,144}, {-437,-437}, {-371,-371}, {316,316}, {-215,-215}, {123,123}, {-56,-56}, {18,18}, {-3,-3}},701}},
	 {{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},
     0,
     0,
     0,
     0,
     0,
     0,
     0,
     26,
     22,
	 {{0},{0},{0},{0},{0}},
	 {{0},{0},{0},{0},{0}},
	 {{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}},{{0},{0}}},
    { -136,-160,-160,-184,-192,-208,-240,-256,-296,-344,-408,-496,-640,-896,-304,-336,-408,-496,-640,-904,-1536}, //21
	{ -256,-1536, -1536, -1536, -1536, -1536, -1536,-1536  },
    {0},
    {0},
    {0},
     0,
     0
}}
};
#else
#error "Unexpected RF Chip was defined"
#endif
#else
extern TDS_RF_POC_COMP_T NVRAM_EF_AST_TL1_POCDATA_3439_DEFAULT;
#endif

#endif //#ifndef _MML1_RF_CC_SHM_DATA_H_
