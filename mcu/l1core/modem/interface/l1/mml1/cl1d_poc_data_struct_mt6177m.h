/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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

#ifndef _CL1D_POC_DATA_STRUCT_MT6177M_H_
#define _CL1D_POC_DATA_STRUCT_MT6177M_H_
/*****************************************************************************
* 
* FILE NAME   : cl1d_poc_data_struct_mt6177m.h
*
* DESCRIPTION : Hardware Driver Test Modes Interface. All message structures
*               and Ids are defined in etsicd.doc.
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/
              
/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#define MMRFC_C2K_RX_IRR_COMP_ROUTE_MAX          4   /*>  maximum numbers of RX IRR  routes*/
#define MMRFC_C2K_RX_DC_COMP_ROUTE_MAX           MMRFC_C2K_RX_IRR_COMP_ROUTE_MAX  /* >RX DC and RX IRR have the same routes*/
#define MMRFC_C2K_RX_IIP2_COMP_ROUTE_MAX         10  /*>  maximum numbers of RX IIP2 routes*/
#define MMRFC_C2K_RXDC_TIA_GAIN_HPM_STEPS        2   /*>  TIA Gains for RX DCOC cal for HPM*/
#define MMRFC_C2K_RXDC_PGA_GAIN_HPM_STEPS        7   /*>  BQ Gains for RX DCOC cal for HPM*/
#define MMRFC_C2K_RXDC_TIA_GAIN_LPM_STEPS        1   /*>  TIA Gains for RX DCOC cal for LPM*/ 
#define MMRFC_C2K_RXDC_PGA_GAIN_LPM_STEPS        6   /*>  BQ Gains for RX DCOC cal for LPM*/
#define MMRFC_C2K_DET_FE_GAIN_STEPS              2   /*>  DET FE gains steps*/
#define MMRFC_C2K_DET_GAIN_STEPS                 15  /*>  DET PGA Steps*/
#define MMRFC_C2K_DET_GAIN_STEPS_DET_CAL         17  /*>  DET PGA Cal steps */  
#define MMRFC_C2K_DET_SAMPLE_RATE_NUM            4   /*>  13, 26, 52, 104MHz */
#define MMRFC_C2K_TX_PGA_A_SLICE_NUM             4   /*>  Slice for PGA-A = 8, 4, 2, 1 */
#define MMRFC_C2K_TX_PGA_B_SLICE_NUM             0
#define MMRFC_C2K_TX_PGA_SLICE_NUM               (MMRFC_C2K_TX_PGA_A_SLICE_NUM + MMRFC_C2K_TX_PGA_B_SLICE_NUM)
#define MMRFC_C2K_TX_RC_LPF_CBW_NUM              5   /*>  1.7, 3.3, 6.75, 13.5, 20.2MHz */
#define MMRFC_C2K_TX_DNL_PGA_A_SEQ_NUM           21  /*>  Calibration sequence for PGA-A */
#define MMRFC_C2K_TX_DNL_PGA_B_SEQ_NUM           (MMRFC_C2K_TX_DNL_PGA_B_GAIN_STEPS + MMRFC_C2K_TX_DNL_PGA_AUX_GAIN_STEPS)  /*>  Calibration sequence for PGA-B and PGA-AUX */
#define MMRFC_C2K_TX_DNL_PGA_A_GAIN_STEPS        22  /*>  G0~G21 */
#define MMRFC_C2K_TX_DNL_PGA_B_GAIN_STEPS        0   /*> no PGA-B for 77M*/
#define MMRFC_C2K_TX_DNL_PGA_AUX_GAIN_STEPS      8   /*>  G22~G29 */
#define MMRFC_C2K_TX_PGA_TYPE_NUM                2   /*>  PGA-A, PGA-AUX */
#define MMRFC_C2K_TX_PGA_GAIN_STEP_SUBBAND_NUM   12  /*>  12 subband for PGA gain step cal */
#define MMRFC_C2K_TX_PGA_GAIN_STEP_NUM           10  /*>  G11a-G12b, G12a-G13b, G13a-G14b, G14a-G15b, G15a-G16b,
                                                          G16a-G17b, G17a-G18b, G18a-G19b, G19a-G20b, G20a-G21b */
#define MMRFC_C2K_TX_PGA_CAP_TUNING_SUBBAND_NUM  3   /*>  3 subband for B40/41 */
    
#define MMRFC_C2K_RXIRR_FILT_TAPS_NUM            5   /*>  maximum numbers of RXIRR compensation filter taps  */
#define MMRFC_C2K_DET_EQLPF_TAP_NUM              11  /*>  maximum numbers of DET IRR compensation filter taps */
#define MMRFC_C2K_TXFDAD_FILT_TAPS_NUM           13  /*>  maximum numbers of TX FDIQ compensation filter taps */
#define MMRFC_C2K_TXGA_FILT_TAPS_NUM             5   /*>  maximum numbers of TX GA compensation filter taps */  


#define MMRFC_C2K_TXFDIQ_MAX_TONE_PAIRS          5   /*>  maximum numbers of test tone pairs for TX FDIQ */
#define MMRFC_C2K_TXGA_MAX_TONES_PAIRS           6   /*>  maximum numbers of test tone pairs for TXGA */ 
#define MMRFC_C2K_TXGA_MAX_TONES                 MMRFC_C2K_TXGA_MAX_TONES_PAIRS * 2  
#define MMRFC_C2K_ANT_NUM                        2   /*>  maximum numbers of antennas*/  
    
#define MMRFC_C2K_MAX_SUPPORT_BAND_NUM           5   /*>  maximum bumbers of band class, BC0/1/4/6/10/14/15 */
    
/** Define calibration item list bitmap according to order */
#define MMRFC_C2K_POC_CAL_ORDER_LO_DET_CDCOC     (0x00001)
#define MMRFC_C2K_TX_GAIN_STEPS                 MMRFC_C2K_TX_DNL_PGA_A_GAIN_STEPS + MMRFC_C2K_TX_DNL_PGA_B_GAIN_STEPS + MMRFC_C2K_TX_DNL_PGA_AUX_GAIN_STEPS
#define MMRFC_IQ_COMP_PGA_SLICE_SET_NUM         (8)
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    
#define POC_CW_TYPE_NUM                               (14)

/* the max byte number of CW table */
#define C2K_RF_SELF_CAL_CW_MAX_BYTE_SIZE              (2000)

/** RF Route Table parameters*/
#define MMRFC_C2K_RX_IRR_DC_ROUTE_NUM_MAX             (1)
#define MMRFC_C2K_RX_IIP2_ROUTE_NUM_MAX               (1)
#define MMRFC_C2K_TX_ROUTE_NUM_MAX                    (1)
/** RF VCO type definition*/
#define MMPOC_C2K_VCO1                                (1)
#define MMPOC_C2K_VCO2                                (2)
#define MMPOC_C2K_VCO3                                (3)
#define MMPOC_C2K_VCO31                               (31)
#define MMPOC_C2K_VCO32                               (32)
#define MMPOC_C2K_VCO_NULL                            (0xFF)
/** RF TX DCO Type definition*/
#define MMPOC_C2K_DCOH                                (11)
#define MMPOC_C2K_DCOL                                (12)
#define MMPOC_C2K_DCO_NULL                            (0xFF)
/** RF VCO/DCO div definition*/
#define MMPOC_C2K_DIV2                                (2)
#define MMPOC_C2K_DIV4                                (4)
#define MMPOC_C2K_DIV6                                (6)
#define MMPOC_C2K_DIV8                                (8)
#define MMPOC_C2K_DIV10                               (10)
#define MMPOC_C2K_DIV3                                (3)
#define MMPOC_C2K_DIV_NULL                            (0xFF)

#if defined(__C2K_BC0_SUBCLASS_3_ENABLE__)
#define MMPOC_C2K_DL_CENTER_FREQ_100KHZ \
/*BC0 */ 8770 , \
/*BC1 */ 19600, \
/*BC2 */ 9380 , \
/*BC3 */ 8510 , \
/*BC4 */ 18550, \
/*BC5 */ 4570 , \
/*BC6 */ 21400, \
/*BC7 */ 7520 , \
/*BC8 */ 18420, \
/*BC9 */ 9420 , \
/*BC10*/ 8656 , \
/*BC11*/ 4250 , \
/*BC12*/ 9180 , \
/*BC13*/ 26550, \
/*BC14*/ 19625, \
/*BC15*/ 21325, \
/*BC16*/ 27790, \
/*BC17*/ 26570, \
/*BC18*/ 7930 , \
/*BC19*/ 7070 , \
/*BC20*/ 15420

#define MMPOC_C2K_UL_CENTER_FREQ_100KHZ \
/*BC0 */ 8320 , \
/*BC1 */ 18800, \
/*BC2 */ 8930 , \
/*BC3 */ 9060 , \
/*BC4 */ 17650, \
/*BC5 */ 4470 , \
/*BC6 */ 19500, \
/*BC7 */ 7820 , \
/*BC8 */ 17470, \
/*BC9 */ 8970 , \
/*BC10*/ 8206 , \
/*BC11*/ 4150 , \
/*BC12*/ 8730 , \
/*BC13*/ 25350, \
/*BC14*/ 18825, \
/*BC15*/ 17325, \
/*BC16*/ 26570, \
/*BC17*/ 26570, \
/*BC18*/ 7630 , \
/*BC19*/ 7370 , \
/*BC20*/ 15420
#else
#define MMPOC_C2K_DL_CENTER_FREQ_100KHZ \
/*BC0 */ 8820 , \
/*BC1 */ 19600, \
/*BC2 */ 9380 , \
/*BC3 */ 8510 , \
/*BC4 */ 18550, \
/*BC5 */ 4570 , \
/*BC6 */ 21400, \
/*BC7 */ 7520 , \
/*BC8 */ 18420, \
/*BC9 */ 9420 , \
/*BC10*/ 8656 , \
/*BC11*/ 4250 , \
/*BC12*/ 9180 , \
/*BC13*/ 26550, \
/*BC14*/ 19625, \
/*BC15*/ 21325, \
/*BC16*/ 27790, \
/*BC17*/ 26570, \
/*BC18*/ 7930 , \
/*BC19*/ 7070 , \
/*BC20*/ 15420

#define MMPOC_C2K_UL_CENTER_FREQ_100KHZ \
/*BC0 */ 8370 , \
/*BC1 */ 18800, \
/*BC2 */ 8930 , \
/*BC3 */ 9060 , \
/*BC4 */ 17650, \
/*BC5 */ 4470 , \
/*BC6 */ 19500, \
/*BC7 */ 7820 , \
/*BC8 */ 17470, \
/*BC9 */ 8970 , \
/*BC10*/ 8206 , \
/*BC11*/ 4150 , \
/*BC12*/ 8730 , \
/*BC13*/ 25350, \
/*BC14*/ 18825, \
/*BC15*/ 17325, \
/*BC16*/ 26570, \
/*BC17*/ 26570, \
/*BC18*/ 7630 , \
/*BC19*/ 7370 , \
/*BC20*/ 15420
#endif

/** Enumeration of band class number for c2k to report its band support capability */
typedef enum
{
  C2K_BAND_CLASS_0 = 0,   /* 800 MHz cellular band       */
  C2K_BAND_CLASS_1,       /* 1.8 to 2.0 GHz band     */
  C2K_BAND_CLASS_2,       /* 872 to 960 MHz TACS band    */
  C2K_BAND_CLASS_3,       /* 832 to 925 MHz JTACS band   */
  C2K_BAND_CLASS_4,       /* 1.75 to 1.87 GHz Korean PCS */
  C2K_BAND_CLASS_5,       /* 450 MHz NMT band            */
  C2K_BAND_CLASS_6,       /* 2 GHz IMT-2000 band         */
  C2K_BAND_CLASS_7,       /* 700 MHz band                */
  C2K_BAND_CLASS_8,       /* 1800 MHz band               */
  C2K_BAND_CLASS_9,       /* 900 MHz band                */
  C2K_BAND_CLASS_10,      /* Secondary 800 MHz NMT band  */
  C2K_BAND_CLASS_11,      /* 400 MHz European PARM band  */
  C2K_BAND_CLASS_12,      /* 800 MHz PAMR band           */
  C2K_BAND_CLASS_13,      /* 2.5 GHz IMT-2000            */
  C2K_BAND_CLASS_14,      /* US PCS 1.9 GHz band         */
  C2K_BAND_CLASS_15,      /* AWS band                    */
  C2K_BAND_CLASS_16,      /* US 2.5 GHz band             */
  C2K_BAND_CLASS_17,      /* US 2.5GHz Forward Link Only Band */
  C2K_BAND_CLASS_18,      /* 700 MHz Public Safety Band  */
  C2K_BAND_CLASS_19,      /* Lower 700 MHz Band */
  C2K_BAND_CLASS_20,      /* L-Band */
  C2K_BAND_CLASS_MAX,
  C2K_BAND_CLASS_NOT_USED = C2K_BAND_CLASS_MAX,
}MMRFC_C2K_BAND_NUM_E;

typedef enum
{
   MMRF_C2K_PMIC_VPA1 = 0,
   MMRF_C2K_PMIC_VPA2,
   MMRF_C2K_PMIC_VPA_COUNT,
   MMRF_C2K_PMIC_VPA_INVALID = 0xFFFF
}MMRF_C2K_PMIC_VPA_NUM_E;

typedef struct
{
   kal_uint16  rxio;
   kal_uint16  rxdio;
   kal_uint8   vco;
   kal_uint8   div;
   kal_uint8   is_intra_ncca;
   kal_uint8   dc_comp_idx;
   kal_uint8   srx_path;
   kal_uint8   rfic_sel;
   kal_bool    isolation_buffer;
}MMRFC_C2K_RX_CAL_CFG_T;

typedef struct
{
   MMRFC_C2K_BAND_NUM_E  band;
   kal_uint16            txio;
   kal_uint8             dco;
   kal_uint8             div;
   kal_uint8             tx_rfic_sel;
   MMRF_C2K_PMIC_VPA_NUM_E   vpaIdx;
}MMRFC_C2K_TX_CAL_CFG_T;


typedef struct
{
   kal_uint8              route_num;
   MMRFC_C2K_RX_CAL_CFG_T rx_cfg[MMRFC_C2K_RX_IIP2_ROUTE_NUM_MAX];
   MMRFC_C2K_TX_CAL_CFG_T tx_cfg[MMRFC_C2K_RX_IIP2_ROUTE_NUM_MAX];
}MMRFC_C2K_RX_CAL_IIP2_CFG_T;

typedef struct
{
   kal_uint8          route_num;
   MMRFC_C2K_RX_CAL_CFG_T cfg[MMRFC_C2K_RX_IRR_DC_ROUTE_NUM_MAX];
}MMRFC_C2K_RX_CAL_IRR_DC_CFG_T;

typedef struct
{
   kal_uint8          route_num;		
   MMRFC_C2K_TX_CAL_CFG_T cfg[MMRFC_C2K_TX_ROUTE_NUM_MAX];
}MMRFC_C2K_TX_ROUTE_CFG_T;

typedef enum
{  
   C2K_MML1_RF_MIPI0   = 0x0002,
   C2K_MML1_RF_MIPI1   = 0x0003,
   C2K_MML1_RF_MIPI2   = 0x0004,
   C2K_MML1_RF_MIPI3   = 0x0005,
}C2K_MML1_RF_BSIMM_PORT_T;

/*******************************************************************************
 * MMRFTST POC result
 ******************************************************************************/
/**RF frequency high/middle/low band enum type*/
typedef enum
{
  RF_FREQ_HIGH_BAND,
  RF_FREQ_MID_BAND,
  RF_FREQ_LOW_BAND,
  RF_FREQ_BAND_MAX
}RfFreqBandTypeT;

typedef struct
{
   kal_int16 dc_i; /*>  RF DC:S5.0,resolution = 9mV. DFE DC: S0.14, fixed point value at Rx ADC, Rx ADC full swing is +/-1.62v */
   kal_int16 dc_q; /*>  RF DC:S5.0,resolution = 9mV. DFE DC: S0.14, fixed point value at Rx ADC, Rx ADC full swing is +/-1.62v */
} MMRFC_C2K_RX_DC_RESULT_T;


typedef struct{    
    kal_int32            gain_est_hw;
    kal_int32            phase_est_hw;
    kal_int32            freq_dep_filt[MMRFC_C2K_RXIRR_FILT_TAPS_NUM]; ///< Valid for 2-point meas.
   
} MMRFC_C2K_RX_IRR_RESULT_T;


typedef struct
{
   MMRFC_C2K_RX_DC_RESULT_T rx_dc[MMRFC_C2K_RXDC_TIA_GAIN_HPM_STEPS][MMRFC_C2K_RXDC_PGA_GAIN_HPM_STEPS];
} MMRFC_C2K_RX_DC_HPM_RESULT_T;


typedef struct
{
   MMRFC_C2K_RX_DC_RESULT_T rx_dc[MMRFC_C2K_RXDC_TIA_GAIN_LPM_STEPS][MMRFC_C2K_RXDC_PGA_GAIN_LPM_STEPS];
} MMRFC_C2K_RX_DC_LPM_RESULT_T;


typedef struct{
    kal_uint32           i_idx_opt; /*> optimum gate bias on I channel  */
    kal_uint32           q_idx_opt; /*> optimum gate bias on Q channel  */
} MMRFC_C2K_IIP2_RESULT_T;

typedef struct
{
   kal_int32 i_part;
   kal_int32 q_part;

} MMRFC_C2K_DET_EQLPF_COMP_T;

typedef struct
{
   MMRFC_C2K_DET_EQLPF_COMP_T coef[MMRFC_C2K_DET_EQLPF_TAP_NUM];
   kal_int32              scale_i;
   kal_int32              scale_q;
} MMRFC_C2K_DET_EQLPF_CFG_T;

typedef struct{    
    kal_int32              gain_est_hw;
    kal_int32              phase_est_hw;
    kal_int32              dnl; 
    kal_int32              freq_dep_phase_est;                 ///< Valid for 2-point meas. for error handling
    MMRFC_C2K_DET_EQLPF_CFG_T  det_fdad_filter;
} MMRFC_C2K_DET_IQDNL_RESULT_T;


typedef struct{    
    kal_int32            dc_est_i; /*>  S0.11, fixed point value at Det ADC, Det ADC full swing is +/-0.6v */
    kal_int32            dc_est_q; /*>  S0.11, fixed point value at Det ADC, Det ADC full swing is +/-0.6v */
} MMRFC_C2K_DET_DC_RESULT_T;


typedef struct{    
    kal_int32            gain_est;   /*>  S-4.10, epsilon/2 */
    kal_int32            phase_est;  /*>  S-4.10, -theta/2, in radians */
    kal_int32            dc_est_i;   /*>  S0.12, fixed point value at Tx DAC, Tx DAC full swing is +/-1v */
    kal_int32            dc_est_q;   /*>  S0.12, fixed point value at Tx DAC, Tx DAC full swing is +/-1v */
    kal_int16            freq_dep_phase_tx; /*>  temp output for TX FDIQ */
} MMRFC_C2K_TX_IQDC_RESULT_T;


typedef struct{    
    kal_int32            freq_dep_filt_i[MMRFC_C2K_TXFDAD_FILT_TAPS_NUM]; ///< for I channel
    kal_int32            freq_dep_filt_q[MMRFC_C2K_TXFDAD_FILT_TAPS_NUM]; ///< for Q channel
    kal_int32            freq_dep_phase_est[MMRFC_C2K_TXFDIQ_MAX_TONE_PAIRS]; ///< for error handling
} MMRFC_C2K_TX_FD_FILT_RESULT_T;

typedef struct{    
    kal_int32            tx_asym_filt_i[MMRFC_C2K_TXGA_FILT_TAPS_NUM]; //for I channel
    kal_int32            tx_asym_filt_q[MMRFC_C2K_TXGA_FILT_TAPS_NUM]; //for Q channel
    kal_int32            slope[MMRFC_C2K_TXGA_MAX_TONES-1];
    kal_int32            mag_inv_norm[MMRFC_C2K_TXGA_MAX_TONES];
} MMRFC_C2K_TX_GA_RESULT_T;

typedef struct
{
   kal_uint32 V_TX_BAL_CAPA;
   kal_uint32 V_TX_BAL_CAPB;
} MMRFC_C2K_CAP_TUNNING_SETTING_T;

typedef enum
{
   C2K_DET_IO_DET1 = 0,
   C2K_DET_IO_DET2 = 1,

   C2K_DET_IO_NON_USED = 0xFFFF,
}MMRF_C2K_DET_IO_E;

typedef struct
{
   /* RX IRR */
   MMRFC_C2K_RX_IRR_RESULT_T       rx_irr_hpm[MMRFC_C2K_RX_IRR_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM]; /*> 4route */
   MMRFC_C2K_RX_IRR_RESULT_T       rx_irr_lpm[MMRFC_C2K_RX_IRR_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM]; /*> 4route */

   /* RX DC */
   MMRFC_C2K_RX_DC_HPM_RESULT_T    rx_dc_hpm[MMRFC_C2K_RX_DC_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM]; /*> 4route */
   MMRFC_C2K_RX_DC_LPM_RESULT_T    rx_dc_lpm[MMRFC_C2K_RX_DC_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM]; /*> 4route */
   MMRFC_C2K_RX_DC_HPM_RESULT_T    rx_dig_dc_hpm[MMRFC_C2K_RX_DC_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM]; /*> 4route */
   MMRFC_C2K_RX_DC_LPM_RESULT_T    rx_dig_dc_lpm[MMRFC_C2K_RX_DC_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM]; /*> 4route */

   /* RX IIP2 */
   /* CW473 for Rx path 1, CW482 for Rx path 2 */
   /* i_idx_opt->V_RX1_IIP2_IRESULTS[6:0], q_idx_opt->V_RX1_IIP2_QRESULTS[6:0] */
   MMRFC_C2K_IIP2_RESULT_T         rx_iip2[MMRFC_C2K_RX_IIP2_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM];

   /* DET coarse DCOC */
   kal_uint32                  det_coarse_dcoc_cw807; /*> CW807, V_TXCDCOC1[19:0], CW811->CW807 */
   kal_uint32                  det_coarse_dcoc_cw808; /*> CW808, V_TXCDCOC2[19:0], CW812->CW808 */

   /* DET IQ imbalance and FE gain with Tx path forward signal */
   MMRFC_C2K_DET_IQDNL_RESULT_T    det_iqdnl_fwd[MMRFC_C2K_DET_FE_GAIN_STEPS];

   /* DET fine DC with Tx path forward signal */
   MMRFC_C2K_DET_DC_RESULT_T       det_dc_fwd[MMRFC_C2K_DET_GAIN_STEPS]; /*> 15 DET gain step */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
   /* TX LO Cal */
   /* CW714, {2'b00,V_TXLOCAP[6:0],V_TXLOIND,V_TXLOINBIAS[4:0],V_TXLOINBIAS[4:0]}*/
   kal_uint8                   tx_lo_ind;
   kal_uint8                   tx_lo_capcal_peak_cap; //CW714
   kal_uint8                   tx_lo_in_bias_hpm;     //CW714
   kal_uint8                   tx_lo_in_bias_lpm;     //CW714   

   /* TX RC */
   kal_int16                   tx_rc_lpf; /*> CW787, V_TXLPFCSEL[7:0] */
   kal_int16                   tx_rc_rcf; /*> CW793, V_TXRCFCSEL[6:0] */

   /* TX IQDC */
   /* TXIQ: G0, G9, G10, G12a, G14a, G12b, G14b, G22  */
   /* TXDC: G0, G9, G10, G12a, G14a, G12b, G14b, G22  */
   MMRFC_C2K_TX_IQDC_RESULT_T      tx_iqdc_lin[MMRFC_IQ_COMP_PGA_SLICE_SET_NUM]; 

   /* TX DNL */
   kal_int16                   tx_dnl_lin_pga[MMRFC_C2K_TX_GAIN_STEPS]; /*> 22 PGA-A+8 PGA-B, S7.8 */

   /* TX PGA phase step */
   kal_int16                   tx_pga_phase_step; /*> Diff of B-A, S0.14 */

   /* TX PGA Gain Step */
   kal_int16                   pga_gain_step[MMRFC_C2K_TX_PGA_GAIN_STEP_SUBBAND_NUM][MMRFC_C2K_TX_PGA_GAIN_STEP_NUM]; /*> S7.8 */

   /* TX PGA Cap Tuning */
   MMRFC_C2K_CAP_TUNNING_SETTING_T        cap_tuning_pga_a; /*> CW795, V_TX_BAL_CAPA_AACT[5:0] , V_TX_BAL_CAPB_AACT[5:0]*/
   MMRFC_C2K_CAP_TUNNING_SETTING_T        cap_tuning_pga_b; /*> CW796, V_TX_BAL_CAPA_BACT[5:0] , V_TX_BAL_CAPB_BACT[5:0]*/

   /* TX PGA Pre-Cap Tuning*/
   MMRFC_C2K_CAP_TUNNING_SETTING_T        pre_cap_tuning_pga_a; /*> CW795, V_TX_BAL_CAPA_AACT[5:0] , V_TX_BAL_CAPB_AACT[5:0]*/
   MMRFC_C2K_CAP_TUNNING_SETTING_T        pre_cap_tuning_pga_b; /*> CW796, V_TX_BAL_CAPA_BACT[5:0] , V_TX_BAL_CAPB_BACT[5:0]*/

}MMRFC_C2K_RESULT_PER_BAND_T;

typedef struct
{
   MMRFC_C2K_RESULT_PER_BAND_T c2k_result;  
} MMRFC_C2K_RESULT_T;


/*******************************************************************************
 * MMRFTST POC data base for MT6292
 ******************************************************************************/
typedef struct
{
   kal_uint32  cal_item;
   kal_uint8   band_num;
   kal_uint8   band[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];
   kal_uint32  crfcalPocBufferOffsetTable[POC_CW_TYPE_NUM]; /* the bit32 offset of lrfcalPocCwBuffer for each CW type */
   kal_uint32  crfcalPocBufferSizeTable[POC_CW_TYPE_NUM];
   kal_uint32  crfcalPocMIPIOnSize[MMRFC_C2K_MAX_SUPPORT_BAND_NUM]; /* record each band number of TX ON MIPI CWs */
   kal_uint32  crfcalPocMIPIOffSize[MMRFC_C2K_MAX_SUPPORT_BAND_NUM]; /* record each band number of TX OFF MIPI CWs */
   kal_uint32  crfcalPocBufferWarmUpOffsetTable[MMRFC_C2K_MAX_SUPPORT_BAND_NUM]; /* C2K Warm-up CW Offset */
   kal_uint32  crfcalPocBufferWarmUpSizeTable[MMRFC_C2K_MAX_SUPPORT_BAND_NUM]; /* C2K Warm-up CW Size */
   kal_uint32  crfcalPocBufferBurstOffsetTable[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];/* C2K Burst CW Offset */
   kal_uint32  crfcalPocBufferBurstSizeTable[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];/* C2K Burst CW Size */
   kal_uint32  crfcalPocBufferDetAntSelOffsetTable[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];/* Det Path Sel CW Offset */
   kal_uint32  crfcalPocBufferDetAntSelSizeTable[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];/* Det Path Sel CW Size */
   kal_uint32  crfcalPocBufferRxOffOffsetTable[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];/* C2K Rx-Off CW Offset */
   kal_uint32  crfcalPocBufferRxOffSizeTable[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];/*C2K Rx-Off CW Size*/
   MMRFC_C2K_RX_CAL_IIP2_CFG_T   rxCalIip2Cfg[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];
   MMRFC_C2K_RX_CAL_IRR_DC_CFG_T rxCalIrrDcCfg[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];
   MMRFC_C2K_TX_ROUTE_CFG_T      txCalCfg[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];
   MMRF_C2K_DET_IO_E             detDataBase[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];

}HwdRfC2kPocDataBaseCfgT;

typedef struct
{
   HwdRfC2kPocDataBaseCfgT   dataBaseCfg;
   kal_uint32                crfcalPocCwBuffer[C2K_RF_SELF_CAL_CW_MAX_BYTE_SIZE];
}HwdRfC2kPocDataBaseT;


/*******************************************************************************
 *Get C2K calibration information from C2K RFC
 ******************************************************************************/

typedef struct
{
   kal_uint32       cal_item;
   kal_uint8        band_num;
   kal_uint8        band[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];  
   kal_uint32       rx_freq_khz[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];
   kal_uint32       tx_freq_khz[MMRFC_C2K_MAX_SUPPORT_BAND_NUM];   
}CL1D_RF_POC_CAL_INFO;

/*******************************************************************************
 *NEW DATA STRUCT FOR MT6293
 *C2K is also in MD1, here we just get the CWs Per Band
 ******************************************************************************/

typedef struct
{     
   kal_uint32*         PocCwTypePtr[POC_CW_TYPE_NUM]; /*CW Ptr for 14 CW types*/
   kal_uint32          PocCwTypeSize[POC_CW_TYPE_NUM]; /*CW size for 14 CW types*/
   kal_uint32          crfcalPocMIPIOnSize;/*record each band number of TX ON MIPI CWs*/
   kal_uint32          crfcalPocMIPIOffSize;/*record each band number of TX OFF MIPI CWs*/
   kal_uint32*         crfcalPocBufferWarmUpPtr;/* TX Warm-up CW pointer*/
   kal_uint32          crfcalPocBufferWarmUpSize;/*TX Warm-up CW size*/
   kal_uint32*         crfcalPocBufferBurstPtr;/* TX Burst MODE CW pointer*/
   kal_uint32          crfcalPocBufferBurstSize;/*TX Burst MODE CW size*/
   kal_uint32*         crfPocBufferDetAntSelPtr;/* Det Path Sel CW pointer*/
   kal_uint32          crfPocBufferDetAntSelSize;/* Det Path Sel CW size*/
   kal_uint32*         crfcalPocBufferRxOffPtr;/*RX OFF CW pointer*/
   kal_uint32          crfcalPocBufferRxOffSize;/*RX OFF CW size*/
   MMRF_C2K_DET_IO_E   detDataBase;/*RX DET IO Port Info*/
}CL1D_RF_CAL_POC_BUFFER_MIXED_T;


typedef struct
{
   CL1D_RF_CAL_POC_BUFFER_MIXED_T                 crfcalPocBufferMixer;/*Ptr of CWs ,such as TX Burst & TX Warm-up.etc */
   MMRFC_C2K_RX_CAL_IIP2_CFG_T                    rxCalIip2Cfg; /*get RX IIP2 cfg table*/
   MMRFC_C2K_RX_CAL_IRR_DC_CFG_T                  rxCalIrrDcCfg; /*get RX IRR&DC cfg table*/
   MMRFC_C2K_TX_ROUTE_CFG_T                       txCalCfg;/*get TX cfg table*/

}CL1D_RF_POC_DATA_BASE_CFG_T;

typedef enum
{
   MMRFC_C2K_TXPA_ON_LOWGAIN_BUFFER_TYPE,
   MMRFC_C2K_TXPA_OFF_BUFFER_TYPE,
   MMRFC_C2K_TX_ON_BPI_CTRL_BUFFER_TYPE,
   MMRFC_C2K_TX_OFF_BPI_CTRL_BUFFER_TYPE,
   MMRFC_C2K_RF_STX_CONFIG_BUFFER_TYPE,
   MMRFC_C2K_RF_TX_CONFIG_BUFFER_TYPE,
   MMRFC_C2K_RF_TX_PGA_AB_SUBBAND_CONFIG_BUFFER_TYPE,
   MMRFC_C2K_RF_TX_DRV_BIAS_LIN_CONFIG_BUFFER_TYPE,
   MMRFC_C2K_RF_TX_DRV_BIAS_TEMP_COEFFICIENT_BUFFER_TYPE,
   MMRFC_C2K_RF_TX_DRV_BIAS_DPD_CONFIG_BUFFER_TYPE,
   MMRFC_C2K_RF_RX_PATH_CTRL_BUFFER_TYPE,
   MMRFC_C2K_RF_RX_MIXER_GATE_BIAS_BUFFER_TYPE,
   MMRFC_C2K_RF_RX_LO_CTRL_BUFFER_TYPE,
   MMRFC_C2K_RF_SRX_CONFIG_BUFFER_TYPE,
   
}CL1D_RFC_CW_TYPE_E;
/*****************************************************************************
* End of File
*****************************************************************************/
#endif

