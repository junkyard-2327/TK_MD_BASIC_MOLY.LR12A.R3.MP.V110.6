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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   l1d_rf_data_common.h
 *
 * Project:
 * --------
 *   MT6292
 *
 * Description:
 * ------------
 *   Definition of RF global data & tables used in L1D
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision:
 * $Modtime:
 * $Log:
 *
 *******************************************************************************/

#ifndef  _L1D_RF_DATA_COMMON_H_
#define  _L1D_RF_DATA_COMMON_H_

#include "l1_option.h"
#include "mml1_fe_public.h"

#if MD_DRV_IS_RF_MT6177M
/*===============================================================================*/
/*                     RF Calibration Result Structure                           */
/*===============================================================================*/
// Since MMRFC is module cross multi-module, add L1_SIM to avoid xL1Sim build error
#define MMRFC_GSM_DET_FE_GAIN_STEPS              2
#define MMRFC_GSM_TX_PGA_A_SLICE_NUM             4   //Slice for PGA-A = 8, 4, 2, 1
#define MMRFC_GSM_TX_PGA_B_SLICE_NUM             0   //MT6177M don't have PGA B
#define MMRFC_GSM_TX_PGA_SLICE_NUM               (MMRFC_GSM_TX_PGA_A_SLICE_NUM + MMRFC_GSM_TX_PGA_B_SLICE_NUM)
#define MMRFC_GSM_TX_DNL_PGA_A_GAIN_STEPS        22  ///< G0~G21
#define MMRFC_GSM_TX_DNL_PGA_B_GAIN_STEPS        0  
#define MMRFC_GSM_TX_DNL_PGA_AUX_GAIN_STEPS      8   ///< G22~G29 
#define MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM           (MMRFC_GSM_TX_DNL_PGA_A_GAIN_STEPS+MMRFC_GSM_TX_DNL_PGA_AUX_GAIN_STEPS-1)  // Calibration sequence for PGA-A
#define MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM           (MMRFC_GSM_TX_DNL_PGA_B_GAIN_STEPS)  // Calibration sequence for PGA-B and PGA-AUX
#define MMRFC_GSM_TX_PGA_TYPE_NUM                2   //PGA-A, PGA-AUX   
#define MMRFC_GSM_TX_PGA_GAIN_STEP_SUBBAND_NUM   12  //12 subband for PGA gain step cal
#define MMRFC_GSM_TX_PGA_GAIN_STEP_NUM           10  ///< G11a-G12b, G12a-G13b, G13a-G14b, G14a-G15b, G15a-G16b, G16a-G17b, G17a-G18b, G18a-G19b, G19a-G20b, G20a-G21b
#define MMRFC_GSM_TX_PGA_GAIN_START              11  //PGA-A&B Switch Start Point, use for POC value init, in view of PGA-A.
#define MMRFC_GSM_TX_PGA_GAIN_SWITCH             14  //Switch Point for PGA-A -> PGA-B, use for L1D_RF_Gainrf_Init(), in view of PGA-A.
#define MMRFC_GSM_TX_CBW_NUM                     1
#define MMRFC_GSM_DET_GAIN_STEPS_DET_CAL         17
#define MMRFC_GSM_FILT_TAPS_NUM                  7   ///< maximum numbers of compensation filter taps 
#define MMRFC_GSM_DET_EQLPF_TAP_NUM              11
#define MMRFC_GSM_DET_FE_GAIN_STEPS               2

#elif MD_DRV_IS_RF_MT6176 || MD_DRV_IS_RF_MT6179 || MD_DRV_IS_RF_MT6177L
/*===============================================================================*/
/*                     RF Calibration Result Structure                           */
/*===============================================================================*/
// Since MMRFC is module cross multi-module, add L1_SIM to avoid xL1Sim build error
#define MMRFC_GSM_DET_FE_GAIN_STEPS              2
#define MMRFC_GSM_TX_PGA_A_SLICE_NUM             5   //Slice for PGA-A = 8, 7, 4, 2, 1
#define MMRFC_GSM_TX_PGA_B_SLICE_NUM             2   //Slice for PGA-B = 2, 1
#define MMRFC_GSM_TX_PGA_SLICE_NUM               (MMRFC_GSM_TX_PGA_A_SLICE_NUM + MMRFC_GSM_TX_PGA_B_SLICE_NUM)
   #if MD_DRV_IS_RF_MT6177L
#define MMRFC_GSM_TX_DNL_PGA_A_GAIN_STEPS        22  ///< G0~G21
   #else
#define MMRFC_GSM_TX_DNL_PGA_A_GAIN_STEPS        21  ///< G0~G20
   #endif
#define MMRFC_GSM_TX_DNL_PGA_B_GAIN_STEPS        10  ///< G12~G21
#define MMRFC_GSM_TX_DNL_PGA_AUX_GAIN_STEPS      7   ///< G22~G28
#define MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM           (MMRFC_GSM_TX_DNL_PGA_A_GAIN_STEPS-1)  //20, Calibration sequence for PGA-A, 21 for MT6177L
#define MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM           (MMRFC_GSM_TX_DNL_PGA_B_GAIN_STEPS+MMRFC_GSM_TX_DNL_PGA_AUX_GAIN_STEPS-1)  //16, Calibration sequence for PGA-B and PGA-AUX
#define MMRFC_GSM_TX_PGA_TYPE_NUM                3   //PGA-A, PGA-B, PGA-AUX
#define MMRFC_GSM_TX_PGA_GAIN_STEP_SUBBAND_NUM   12  //12 subband for PGA gain step cal
#define MMRFC_GSM_TX_PGA_GAIN_STEP_NUM           10  ///< G11a-G12b, G12a-G13b, G13a-G14b, G14a-G15b, G15a-G16b, G16a-G17b, G17a-G18b, G18a-G19b, G19a-G20b, G20a-G21b
#define MMRFC_GSM_TX_PGA_GAIN_START              11  //PGA-A&B Switch Start Point, use for POC value init, in view of PGA-A.
#define MMRFC_GSM_TX_PGA_GAIN_SWITCH             14  //Switch Point for PGA-A -> PGA-B, use for L1D_RF_Gainrf_Init(), in view of PGA-A.
#define MMRFC_GSM_TX_CBW_NUM                     1
#define MMRFC_GSM_DET_GAIN_STEPS_DET_CAL         17
#define MMRFC_GSM_FILT_TAPS_NUM                  7   ///< maximum numbers of compensation filter taps 
#define MMRFC_GSM_DET_EQLPF_TAP_NUM              11
#define MMRFC_GSM_DET_FE_GAIN_STEPS               2
#endif

#if MD_DRV_IS_RF_MT6176 || MD_DRV_IS_RF_MT6179 || MD_DRV_IS_RF_MT6177L || MD_DRV_IS_RF_MT6177M

typedef struct{    
    kal_int32            gain_est;
    kal_int32            phase_est;
    kal_int32            dc_est_i;
    kal_int32            dc_est_q;
    kal_int16            freq_dep_phase_tx;
} MMRFC_GSM_TX_IQDC_RESULT_T;

typedef struct{    
    kal_int32            gain_est_hw;
    kal_int32            phase_est_hw;
    kal_int16            freq_dep_filt[MMRFC_GSM_FILT_TAPS_NUM];
    kal_int32            dnl; 
} MMRFC_GSM_DET_IQDNL_RESULT_T;

typedef struct{    
    kal_int32            dc_est_i;
    kal_int32            dc_est_q;
} MMRFC_GSM_DET_DC_RESULT_T;

typedef struct
{
   kal_int32 i_part;
   kal_int32 q_part;

} MMRFC_DET_GSM_EQLPF_COMP_T;


typedef struct
{
   MMRFC_DET_GSM_EQLPF_COMP_T coef[MMRFC_GSM_DET_EQLPF_TAP_NUM]; //< maximum numbers of filter taps for DET EQLPF comp.
   kal_int32              scale_i;
   kal_int32              scale_q;
} MMRFC_GSM_DET_EQLPF_CFG_T;

typedef struct
{
   kal_uint32 det_coarse_dcoc_cw807;
   kal_uint32 det_coarse_dcoc_cw808;
   MMRFC_GSM_DET_IQDNL_RESULT_T    det_iqdnl_fwd[MMRFC_GSM_DET_FE_GAIN_STEPS][MMRFC_GSM_TX_CBW_NUM];
   MMRFC_GSM_DET_DC_RESULT_T       det_dc_fwd[MMRFC_GSM_DET_GAIN_STEPS_DET_CAL];

   MMRFC_GSM_DET_IQDNL_RESULT_T    det_iqdnl_rev[MMRFC_GSM_DET_FE_GAIN_STEPS][MMRFC_GSM_TX_CBW_NUM];
   MMRFC_GSM_DET_DC_RESULT_T       det_dc_rev[MMRFC_GSM_DET_GAIN_STEPS_DET_CAL];
   MMRFC_GSM_DET_EQLPF_CFG_T  det_fdadpcb_filter[MMRFC_GSM_DET_FE_GAIN_STEPS];

   kal_int16                   tx_rc_lpf;
   kal_int16                   tx_rc_rcf;

   kal_uint32                  tx_lo;                
   kal_uint8                   tx_lo_ind;            
   kal_uint8                   tx_lo_capcal_peak_cap;
   kal_uint8                   tx_lo_in_bias_hpm;    
   kal_uint8                   tx_lo_in_bias_lpm;    

   MMRFC_GSM_TX_IQDC_RESULT_T      tx_iqdc_lin[MMRFC_GSM_TX_PGA_SLICE_NUM+1]; //+1 only for PGA-AUX

   kal_int16                   tx_dnl_lin_pga_a[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM];
#if MD_DRV_IS_RF_MT6176 || MD_DRV_IS_RF_MT6179 || MD_DRV_IS_RF_MT6177L
   kal_int16                   tx_dnl_lin_pga_b[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM];
#endif

   kal_int16                   pga_gain_subband[MMRFC_GSM_TX_PGA_GAIN_STEP_SUBBAND_NUM];
   kal_int16                   pga_gain_step[MMRFC_GSM_TX_PGA_GAIN_STEP_SUBBAND_NUM][MMRFC_GSM_TX_PGA_GAIN_STEP_NUM];

   kal_uint16                   cap_tuning_pga_a;
   kal_uint16                   cap_tuning_pga_b;

} MMRFC_GSM_RESULT_PER_BAND_T;
/* ------------------------------------------------------------------------- */

   #if MD_DRV_IS_RF_MT6176
/*---------------------------------------------------------------*/
/*   Primary RX Path (bit[20]=0: Primarary)                      */
/*   Primary RX Path (bit[21]=Reserved for future extension)     */
/*   Primary RX Path (bit[22]=Reserved for future extension)     */
/*   Primary RX Path (bit[23]=Reserved for future extension)     */
/*   Primary RX Path (bit[24]=0: w/o eLNA, bit[24]=1: w/ eLNA)   */
/*---------------------------------------------------------------*/
/*   Diversity RX Path (bit[20]=1: Diversity)                    */
/*   Diversity RX Path (bit[21]=Reserved for future extension)   */
/*   Diversity RX Path (bit[22]=Reserved for future extension)   */
/*   Diversity RX Path (bit[23]=Reserved for future extension)   */
/*   Diversity RX Path (bit[24]=0: w/o eLNA, bit[24]=1: w/ eLNA) */
/*---------------------------------------------------------------*/
typedef enum
{
   IORX_PRX1  = 0x000048,
   IORX_PRX2  = 0x000088,
   IORX_PRX3  = 0x000108,
   IORX_PRX4  = 0x000044,
   IORX_PRX5  = 0x000084,
   IORX_PRX6  = 0x000104,
   IORX_PRX7  = 0x000204,
   IORX_PRX8  = 0x000042,
   IORX_PRX9  = 0x000082,
   IORX_PRX10 = 0x000102,
   IORX_PRX11 = 0x000202,
   IORX_PRX12 = 0x000041,
   IORX_PRX13 = 0x000081,
   IORX_PRX14 = 0x000101,
   //IORX_DRX1  = 0x100048,
   //IORX_DRX2  = 0x100088,
   //IORX_DRX3  = 0x100108,
   //IORX_DRX4  = 0x100044,
   //IORX_DRX5  = 0x100084,
   //IORX_DRX6  = 0x100104,
   //IORX_DRX7  = 0x100204,
   //IORX_DRX8  = 0x100042,
   //IORX_DRX9  = 0x100082,
   //IORX_DRX10 = 0x100102,
   //IORX_DRX11 = 0x100202,
   //IORX_DRX12 = 0x100041,
   //IORX_DRX13 = 0x100081,
   //IORX_DRX14 = 0x100101,
}GGE_IORX_E;

   #elif MD_DRV_IS_RF_MT6179
/*---------------------------------------------------------------*/
/*   Primary RX Path (bit[20]=0: Primarary)                      */
/*   Primary RX Path (bit[21]=Reserved for future extension)     */
/*   Primary RX Path (bit[22]=0: RFIC1, bit[22]=1: RFIC2)        */
/*   Primary RX Path (bit[23]=0: LNA LMB, bit[23]=1: LNA MHB)    */
/*   Primary RX Path (bit[24]=0: w/o eLNA, bit[24]=1: w/ eLNA)   */
/*---------------------------------------------------------------*/
/*   Diversity RX Path (bit[20]=1: Diversity)                    */
/*   Diversity RX Path (bit[21]=Reserved for future extension)   */
/*   Diversity RX Path (bit[22]=0: RFIC1, bit[22]=1: RFIC2)      */
/*   Diversity RX Path (bit[23]=0: LNA LMB, bit[23]=1: LNA MHB)  */
/*   Diversity RX Path (bit[24]=0: w/o eLNA, bit[24]=1: w/ eLNA) */
/*---------------------------------------------------------------*/
#define IORX_PATH_LSB          20 
#define IORX_RFIC_LSB          22 
#define IORX_LNA_GROUP_LSB     23
#define IORX_ELNA_LSB          24


#define IORX_PRIMARY           (0<<IORX_PATH_LSB)
#define IORX_DIVERSITY         (1<<IORX_PATH_LSB)

#define IORX_RFIC0             (0<<IORX_RFIC_LSB)
#define IORX_RFIC1             (1<<IORX_RFIC_LSB)

#define IORX_LNA_LMB           (0<<IORX_LNA_GROUP_LSB)
#define IORX_LNA_MHB           (1<<IORX_LNA_GROUP_LSB) 

#define IORX_ELNA_USAGE        (1<<IORX_ELNA_LSB)


typedef enum
{
   IORX_PRX1  = ( 0x000021 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX2  = ( 0x000041 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX3  = ( 0x000061 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX4  = ( 0x0000A1 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX5  = ( 0x000101 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX6  = ( 0x0000C1 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX7  = ( 0x000022 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_PRX8  = ( 0x000042 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_PRX9  = ( 0x0000C2 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_PRX10 = ( 0x0000E2 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_PRX11 = ( 0x0000A2 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_PRX12 = ( 0x000021 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_LMB) ),
   IORX_PRX13 = ( 0x000041 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_LMB) ),
   IORX_PRX14 = ( 0x000061 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_LMB) ),
   IORX_PRX15 = ( 0x000081 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_LMB) ),
   IORX_PRX16 = ( 0x0000A1 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_LMB) ),
   IORX_PRX17 = ( 0x000101 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_LMB) ),
   IORX_PRX18 = ( 0x000022 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_MHB) ),
   IORX_PRX19 = ( 0x000042 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_MHB) ),
   IORX_PRX20 = ( 0x0000A2 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_MHB) ),
   IORX_PRX21 = ( 0x0000E2 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_MHB) ),
   IORX_PRX22 = ( 0x0000C2 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_MHB) ),
      #if MD_DRV_IS_2G_EXTERNAL_LNA_SUPPORT
   IORX_PRX1_ELNA  = ( 0x000021 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   IORX_PRX2_ELNA  = ( 0x000041 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   IORX_PRX3_ELNA  = ( 0x000061 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   IORX_PRX4_ELNA  = ( 0x0000A1 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   IORX_PRX5_ELNA  = ( 0x000101 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   IORX_PRX6_ELNA  = ( 0x0000C1 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   IORX_PRX7_ELNA  = ( 0x000022 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   IORX_PRX8_ELNA  = ( 0x000042 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   IORX_PRX9_ELNA  = ( 0x0000C2 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   IORX_PRX10_ELNA = ( 0x0000E2 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   IORX_PRX11_ELNA = ( 0x0000A2 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   IORX_PRX12_ELNA = ( 0x000021 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   IORX_PRX13_ELNA = ( 0x000041 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   IORX_PRX14_ELNA = ( 0x000061 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   IORX_PRX15_ELNA = ( 0x000081 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   IORX_PRX16_ELNA = ( 0x0000A1 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   IORX_PRX17_ELNA = ( 0x000101 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   IORX_PRX18_ELNA = ( 0x000022 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   IORX_PRX19_ELNA = ( 0x000042 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   IORX_PRX20_ELNA = ( 0x0000A2 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   IORX_PRX21_ELNA = ( 0x0000E2 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   IORX_PRX22_ELNA = ( 0x0000C2 | (IORX_PRIMARY) | (IORX_RFIC1) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
      #endif
   //IORX_DRX1  = ( 0x000021 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   //IORX_DRX2  = ( 0x000041 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   //IORX_DRX3  = ( 0x000061 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   //IORX_DRX4  = ( 0x0000A1 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   //IORX_DRX5  = ( 0x0000C1 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   //IORX_DRX6  = ( 0x0000E1 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   //IORX_DRX7  = ( 0x000042 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   //IORX_DRX8  = ( 0x000022 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   //IORX_DRX9  = ( 0x0000E2 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   //IORX_DRX10 = ( 0x0000C2 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   //IORX_DRX11 = ( 0x0000A2 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   //IORX_DRX12 = ( 0x000021 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_LMB) ),
   //IORX_DRX13 = ( 0x000041 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_LMB) ),
   //IORX_DRX14 = ( 0x000061 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_LMB) ),
   //IORX_DRX15 = ( 0x000081 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_LMB) ),
   //IORX_DRX16 = ( 0x0000A1 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_LMB) ),
   //IORX_DRX17 = ( 0x0000C1 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_LMB) ),
   //IORX_DRX18 = ( 0x000042 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_MHB) ),
   //IORX_DRX19 = ( 0x000022 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_MHB) ),
   //IORX_DRX20 = ( 0x0000A2 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_MHB) ),
   //IORX_DRX21 = ( 0x0000C2 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_MHB) ),
   //IORX_DRX22 = ( 0x0000E2 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_MHB) ),   
   //   #if MD_DRV_IS_2G_EXTERNAL_LNA_SUPPORT
   //IORX_DRX1_ELNA  = ( 0x000021 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX2_ELNA  = ( 0x000041 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX3_ELNA  = ( 0x000061 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX4_ELNA  = ( 0x0000A1 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX5_ELNA  = ( 0x0000C1 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX6_ELNA  = ( 0x0000E1 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX7_ELNA  = ( 0x000042 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX8_ELNA  = ( 0x000022 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX9_ELNA  = ( 0x0000E2 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX10_ELNA = ( 0x0000C2 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX11_ELNA = ( 0x0000A2 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX12_ELNA = ( 0x000021 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX13_ELNA = ( 0x000041 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX14_ELNA = ( 0x000061 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX15_ELNA = ( 0x000081 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX16_ELNA = ( 0x0000A1 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX17_ELNA = ( 0x0000C1 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_LMB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX18_ELNA = ( 0x000042 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX19_ELNA = ( 0x000022 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX20_ELNA = ( 0x0000A2 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX21_ELNA = ( 0x0000C2 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   //IORX_DRX22_ELNA = ( 0x0000E2 | (IORX_DIVERSITY) | (IORX_RFIC1) | (IORX_LNA_MHB) | (IORX_ELNA_USAGE) ),
   //   #endif
}GGE_IORX_E;
   #elif MD_DRV_IS_RF_MT6177L
/*---------------------------------------------------------------*/
/*   Primary RX Path (bit[20]=0: Primarary)                      */
/*   Primary RX Path (bit[21]=Reserved for future extension)     */
/*   Primary RX Path (bit[22]=0: RFIC1, bit[22]=1: RFIC2)        */
/*   Primary RX Path (bit[23]=0: LNA LMB, bit[23]=1: LNA MHB)    */
/*   Primary RX Path (bit[24]=0: w/o eLNA, bit[24]=1: w/ eLNA)   */
/*   Diversity RX Path (bit[20]=1: Diversity)                    */
/*   Diversity RX Path (bit[21]=Reserved for future extension)   */
/*   Diversity RX Path (bit[22]=0: RFIC1, bit[22]=1: RFIC2)      */
/*   Diversity RX Path (bit[23]=0: LNA LMB, bit[23]=1: LNA MHB)  */
/*   Diversity RX Path (bit[24]=0: w/o eLNA, bit[24]=1: w/ eLNA) */
/*---------------------------------------------------------------*/
#define IORX_PATH_LSB          20 
#define IORX_RFIC_LSB          22 
#define IORX_LNA_GROUP_LSB     23
#define IORX_ELNA_ROUTE        24 // keep index for MML1_FE_ELNA_ROUTE_E from bit[24] to bit[28] 

#define IORX_PRIMARY           (0<<IORX_PATH_LSB)
#define IORX_DIVERSITY         (1<<IORX_PATH_LSB)

#define IORX_RFIC0             (0<<IORX_RFIC_LSB)
#define IORX_RFIC1             (1<<IORX_RFIC_LSB)

#define IORX_LNA_LMB           (0<<IORX_LNA_GROUP_LSB)
#define IORX_LNA_MHB           (1<<IORX_LNA_GROUP_LSB) 

#define IORX_LNASEL_LNA0       0
#define IORX_LNASEL_LNA1       1
#define IORX_LNASEL_LNA2       2
#define IORX_LNASEL_LNA3       3
#define IORX_LNASEL_LNA4       4
#define IORX_LNASEL_LNA5       5
#define IORX_LNASEL_LNA6       6
#define IORX_LNASEL_LNA7       7


#define L1D_RF_ELNA_PDATABASE_SETTING(b,s)\
   b##_##s=(b | (s<<IORX_ELNA_ROUTE) )

#define L1D_RF_ELNA_PDATABASE_LIST(b)\
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA_NONE),\
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA1),    \
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA2),    \
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA3),    \
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA4),    \
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA5),    \
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA6),    \
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA7),    \
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA8),    \
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA9),    \
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA10),   \
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA11),   \
   L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA12)
   
typedef enum
{
/*				PRX 				*/
   IORX_PRX1  = ( IORX_LNASEL_LNA0 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX2  = ( IORX_LNASEL_LNA1 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX3  = ( IORX_LNASEL_LNA2 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX4  = ( IORX_LNASEL_LNA3 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX5  = ( IORX_LNASEL_LNA5 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX6  = ( IORX_LNASEL_LNA4 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX7  = ( IORX_LNASEL_LNA7 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX8  = ( IORX_LNASEL_LNA6 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX9  = ( IORX_LNASEL_LNA0 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_PRX10 = ( IORX_LNASEL_LNA1 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_PRX11 = ( IORX_LNASEL_LNA2 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_PRX12 = ( IORX_LNASEL_LNA3 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_PRX13 = ( IORX_LNASEL_LNA5 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_PRX14 = ( IORX_LNASEL_LNA4 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   
   /*				DRX 				*/
   IORX_DRX1  = ( IORX_LNASEL_LNA0 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX2  = ( IORX_LNASEL_LNA1 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX3  = ( IORX_LNASEL_LNA2 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX4  = ( IORX_LNASEL_LNA3 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX5  = ( IORX_LNASEL_LNA5 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX6  = ( IORX_LNASEL_LNA4 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX7  = ( IORX_LNASEL_LNA6 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX8  = ( IORX_LNASEL_LNA7 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX9  = ( IORX_LNASEL_LNA1 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_DRX10 = ( IORX_LNASEL_LNA0 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_DRX11 = ( IORX_LNASEL_LNA2 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_DRX12 = ( IORX_LNASEL_LNA3 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_DRX13 = ( IORX_LNASEL_LNA4 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_DRX14 = ( IORX_LNASEL_LNA5 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),

#if MD_DRV_IS_2G_EXTERNAL_LNA_SUPPORT
   /*              PRX                 */
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX1),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX2),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX3),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX4),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX5),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX6),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX7),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX8),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX9),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX10),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX11),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX12),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX13),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX14),
   
   /*              DRX                 */
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX1),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX2),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX3),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX4),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX5),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX6),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX7),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX8),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX9),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX10),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX11),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX12),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX13),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX14),
#endif
      //#if MD_DRV_IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
      //#endif
}GGE_IORX_E;
   #elif MD_DRV_IS_RF_MT6177M
   /*---------------------------------------------------------------*/
   /*   Primary RX Path (bit[20]=0: Primarary)                      */
   /*   Primary RX Path (bit[21]=Reserved for future extension)     */
   /*   Primary RX Path (bit[22]=0: RFIC1, bit[22]=1: RFIC2)        */
   /*   Primary RX Path (bit[23]=0: LNA LMB, bit[23]=1: LNA MHB)    */
   /*   Primary RX Path (bit[24]=0: w/o eLNA, bit[24]=1: w/ eLNA)   */
   /*   Diversity RX Path (bit[20]=1: Diversity)                    */
   /*   Diversity RX Path (bit[21]=Reserved for future extension)   */
   /*   Diversity RX Path (bit[22]=0: RFIC1, bit[22]=1: RFIC2)      */
   /*   Diversity RX Path (bit[23]=0: LNA LMB, bit[23]=1: LNA MHB)  */
   /*   Diversity RX Path (bit[24]=0: w/o eLNA, bit[24]=1: w/ eLNA) */
   /*---------------------------------------------------------------*/
#define IORX_PATH_LSB          20 
#define IORX_RFIC_LSB          22 
#define IORX_LNA_GROUP_LSB     23
#define IORX_ELNA_ROUTE        24 
   
#define IORX_PRIMARY           (0<<IORX_PATH_LSB)
#define IORX_DIVERSITY         (1<<IORX_PATH_LSB)
   
#define IORX_RFIC0             (0<<IORX_RFIC_LSB)
#define IORX_RFIC1             (1<<IORX_RFIC_LSB)
   
#define IORX_LNA_LMB           (0<<IORX_LNA_GROUP_LSB)
#define IORX_LNA_MHB           (1<<IORX_LNA_GROUP_LSB) 
   
#define IORX_LNASEL_LNA0       0
#define IORX_LNASEL_LNA1       1
#define IORX_LNASEL_LNA2       3
#define IORX_LNASEL_LNA3       4
#define IORX_LNASEL_LNA4       5
#define IORX_LNASEL_LNA5       6
#define IORX_LNASEL_LNA6       7
#define IORX_LNASEL_LNA7       8
#define IORX_LNASEL_LNA8       9
#define IORX_LNASEL_LNA9       10
#define IORX_LNASEL_LNA10      2

#define L1D_RF_ELNA_PDATABASE_SETTING(b,s)\
	  b##_##s=(b | (s<<IORX_ELNA_ROUTE) )
   
#define L1D_RF_ELNA_PDATABASE_LIST(b)\
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA_NONE),\
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA1),	 \
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA2),	 \
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA3),	 \
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA4),	 \
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA5),	 \
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA6),	 \
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA7),	 \
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA8),	 \
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA9),	 \
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA10),	 \
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA11),	 \
	  L1D_RF_ELNA_PDATABASE_SETTING(b,MML1_FE_ELNA12)

typedef enum
{
   /* PRX */
   IORX_PRX1  = ( IORX_LNASEL_LNA1 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX2  = ( IORX_LNASEL_LNA2 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX3  = ( IORX_LNASEL_LNA3 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX4  = ( IORX_LNASEL_LNA4 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX5  = ( IORX_LNASEL_LNA5 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX6  = ( IORX_LNASEL_LNA6 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX7  = ( IORX_LNASEL_LNA7 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX8  = ( IORX_LNASEL_LNA8 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_PRX9  = ( IORX_LNASEL_LNA9 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_PRX10 = ( IORX_LNASEL_LNA10 | (IORX_PRIMARY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   
   /* DRX */
   IORX_DRX1  = ( IORX_LNASEL_LNA1 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX2  = ( IORX_LNASEL_LNA2 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX3  = ( IORX_LNASEL_LNA3 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX4  = ( IORX_LNASEL_LNA4 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX5  = ( IORX_LNASEL_LNA5 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX6  = ( IORX_LNASEL_LNA6 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX7  = ( IORX_LNASEL_LNA7 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX8  = ( IORX_LNASEL_LNA8 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_LMB) ),
   IORX_DRX9  = ( IORX_LNASEL_LNA9 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
   IORX_DRX10 = ( IORX_LNASEL_LNA10 | (IORX_DIVERSITY) | (IORX_RFIC0) | (IORX_LNA_MHB) ),
#if MD_DRV_IS_2G_EXTERNAL_LNA_SUPPORT
   /* PRX */
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX1),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX2),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX3),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX4),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX5),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX6),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX7),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX8),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX9),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_PRX10),
   
   /* DRX */
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX1),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX2),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX3),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX4),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX5),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX6),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX7),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX8),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX9),
   L1D_RF_ELNA_PDATABASE_LIST(IORX_DRX10),
   
#endif
   }GGE_IORX_E;
   #endif

#endif  /*End of #if MD_DRV_IS_RF_MT6176 || MD_DRV_IS_RF_MT6179 || MD_DRV_IS_RF_MT6177L || MD_DRV_IS_RF_MT6177M */

#if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
   #if MD_DRV_IS_RF_MT6177M
      #define SAWless_port_HB IORX_PRX9
      #define SAWless_port_LB IORX_PRX10
   #elif MD_DRV_IS_RF_MT6177L
      #define SAWless_port_HB IORX_PRX6
      #define SAWless_port_LB IORX_PRX1
   #else
      #ERROR "Please update RFIC SAWless_port for LB/HB"
   #endif
#endif
/*---------------------------------------------------------------------------*/
#endif /*End of "#ifndef _L1D_RF_DATA_COMMON_H_" */

