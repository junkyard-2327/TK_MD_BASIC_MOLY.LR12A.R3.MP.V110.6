/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 * cl1d_rf_public.h
 *
 * Project:
 * --------
 * C2K
 *
 * Description:
 * ------------
 * Header file containing typedefs and definitions pertaining
 * to C2K RF driver external interface.
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef  _CL1D_RF_PUBLIC_H_
#define  _CL1D_RF_PUBLIC_H_
/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/

#include "sysdefs.h"
#include "kal_general_types.h"
#include "cl1_rf_poc_public.h"
#include "cl1d_rf_common_defs.h"
#include "cl1_rf_tas_public.h"
#include "cl1_rf_elna_public.h"
#include "cl1_rf_public.h"
/*----------------------------------------------------------------------------
 Global Defines And Macros
----------------------------------------------------------------------------*/
#define CL1D_RF_SUB_CLASS_MAX  16

#define CL1D_RF_SUB_CLASS_0_SUPPORTED    0x80000000
#define CL1D_RF_SUB_CLASS_1_SUPPORTED    (1<<30)
#define CL1D_RF_SUB_CLASS_2_SUPPORTED    (1<<29)
#define CL1D_RF_SUB_CLASS_3_SUPPORTED    (1<<28)
#define CL1D_RF_SUB_CLASS_4_SUPPORTED    (1<<27)
#define CL1D_RF_SUB_CLASS_5_SUPPORTED    (1<<26)
#define CL1D_RF_SUB_CLASS_6_SUPPORTED    (1<<25)
#define CL1D_RF_SUB_CLASS_7_SUPPORTED    (1<<24)
#define CL1D_RF_SUB_CLASS_8_SUPPORTED    (1<<23)
#define CL1D_RF_SUB_CLASS_9_SUPPORTED    (1<<22)
#define CL1D_RF_SUB_CLASS_10_SUPPORTED   (1<<21)
#define CL1D_RF_SUB_CLASS_11_SUPPORTED   (1<<20)
#define CL1D_RF_SUB_CLASS_12_SUPPORTED   (1<<19)
#define CL1D_RF_SUB_CLASS_13_SUPPORTED   (1<<18)
#define CL1D_RF_SUB_CLASS_14_SUPPORTED   (1<<17)
#define CL1D_RF_SUB_CLASS_15_SUPPORTED   (1<<16)

#define CL1D_RF_SUB_CLASS_0_UNSUPPORTED  (0<<31)
#define CL1D_RF_SUB_CLASS_1_UNSUPPORTED  (0<<30)
#define CL1D_RF_SUB_CLASS_2_UNSUPPORTED  (0<<29)
#define CL1D_RF_SUB_CLASS_3_UNSUPPORTED  (0<<28)
#define CL1D_RF_SUB_CLASS_4_UNSUPPORTED  (0<<27)
#define CL1D_RF_SUB_CLASS_5_UNSUPPORTED  (0<<26)
#define CL1D_RF_SUB_CLASS_6_UNSUPPORTED  (0<<25)
#define CL1D_RF_SUB_CLASS_7_UNSUPPORTED  (0<<24)
#define CL1D_RF_SUB_CLASS_8_UNSUPPORTED  (0<<23)
#define CL1D_RF_SUB_CLASS_9_UNSUPPORTED  (0<<22)
#define CL1D_RF_SUB_CLASS_10_UNSUPPORTED (0<<21)
#define CL1D_RF_SUB_CLASS_11_UNSUPPORTED (0<<20)
#define CL1D_RF_SUB_CLASS_12_UNSUPPORTED (0<<19)
#define CL1D_RF_SUB_CLASS_13_UNSUPPORTED (0<<18)
#define CL1D_RF_SUB_CLASS_14_UNSUPPORTED (0<<17)
#define CL1D_RF_SUB_CLASS_15_UNSUPPORTED (0<<16)

#define CL1D_RF_SUB_CLASS_ALL_SUPPORTED  0xffff0000
#define CL1D_RF_SUB_CLASS_NONE_SUPPORTED 0x00000000

#define CL1D_RF_RXDFE_NBIF_NUM   3

/** RFD NV operation */
#define CL1D_RF_NV_LOCAL        (1 << 0)
#define CL1D_RF_NV_NVRAM        (1 << 1)
#define CL1D_RF_NV_INIT         (1 << 2)
/* Return status */
#define CL1D_RF_NV_SUCCESS      (0)
#define CL1D_RF_NV_FAIL         (-1)

#define CL1D_RF_NUM_RAMP_LEVEL 16


/** C2K test mode enumeration */
typedef enum
{
  CL1D_RF_RX_TEST_MODE = 0,
  CL1D_RF_TX_TEST_MODE = 1,
  CL1D_RF_META_MODE    = 2,
}CL1D_RF_TEST_MODE_E;


/** C2K temperature enumeration */
typedef enum
{
  CL1D_RF_TMP_STOP   = 0,
  CL1D_RF_TMP_START  = 1,
  CL1D_RF_TMP_IMM    = 2,
  CL1D_RF_TMP_MODE_NUM
}CL1D_RF_TMP_MODE_E;

/** RF Path type enumeration */
typedef enum
{
  CL1D_RF_MAIN_RX       = 0,
  CL1D_RF_DIV_RX        ,
  CL1D_RF_SEC_RX        ,
  CL1D_RF_MAX_NUM_OF_RX ,
  CL1D_RF_TX            = CL1D_RF_MAX_NUM_OF_RX,
  CL1D_RF_MAX_NUM_OF_TXRX,
  CL1D_RF_MAX_NUM_OF_TX =CL1D_RF_MAX_NUM_OF_TXRX-CL1D_RF_MAX_NUM_OF_RX,
}CL1D_RF_PATH_E;

/** RF power mode enumeration */
typedef enum
{
   CL1D_RF_HPM           = 0,
   CL1D_RF_LPM           = 1,
   CL1D_RF_MAX_NUM_OF_PM = 2,
}CL1D_RF_PWR_MODE_E;

/** RxAGC gain history record index enumeration */
typedef enum
{
   CL1D_RF_RXAGC_HISTORY_REC_IDX0 = 0,
   CL1D_RF_RXAGC_HISTORY_REC_IDX1,
   CL1D_RF_RXAGC_HISTORY_REC_IDX2,
   CL1D_RF_RXAGC_HISTORY_REC_IDX3,
   CL1D_RF_RXAGC_HISTORY_REC_IDX4,
   CL1D_RF_RXAGC_HISTORY_REC_NUM,
   CL1D_RF_RXAGC_HISTORY_REC_IDX_INVALID = 0xFF,
}CL1D_RF_RXAGC_HISTORY_REC_IDX_E;

/** C2K TX AGC test mode type enumeration */
typedef enum
{
  CL1D_RF_TPC_TEST_MODE_FIXPWR = 0,
  CL1D_RF_TPC_TEST_MODE_MANUAL = 1,
  CL1D_RF_TPC_TEST_MODE_FDB = 2
}CL1D_RF_TPC_TEST_MODE_E;

/** C2K RX AGC test mode type enumeration */
typedef enum
{
  CL1D_RF_AGC_TEST_MODE_FIXGAIN   = 0,
}CL1D_RF_AGC_TEST_MODE_E;

/** C2K RX AGC FSM type enumeration */
typedef enum
{
  CL1D_RF_AGC_FSM_FAST   = 0,
  CL1D_RF_AGC_FSM_STEADY = 1,
  CL1D_RF_AGC_FSM_ICS    = 2,
  CL1D_RF_AGC_FSM_CAL    = 3,
  CL1D_RF_AGC_FSM_NUM    = 4
}CL1D_RF_AGC_FSM_E;

/** C2K NBIF rounding mode enumeration */
typedef enum
{
    CL1D_RF_RXDFE_NBIF_ROUND_MODE_6 = 0,  /* shift 6, round 3 */
    CL1D_RF_RXDFE_NBIF_ROUND_MODE_7 = 1,  /* shift 7, round 4 */
    CL1D_RF_RXDFE_NBIF_ROUND_MODE_8 = 2,  /* shift 8, round 5 */
    CL1D_RF_RXDFE_NBIF_ROUND_MODE_9 = 3,  /* shift 9, round 6 */
    CL1D_RF_RXDFE_NBIF_ROUND_MODE_10 = 4  /* shift 10, round 7 */

}CL1D_RF_RXDFE_NBIF_ROUND_MODE_E;

/** C2K RXDFE Test out IQ data dump point*/
typedef enum
{
    CL1D_RF_RXDFE_TEST_OUT_IQ_DATA_DUMP_SRRC,
    CL1D_RF_RXDFE_TEST_OUT_IQ_DATA_DUMP_DAGC,
    CL1D_RF_RXDFE_TEST_OUT_IQ_DATA_DUMP_SRC,
    CL1D_RF_RXDFE_TEST_OUT_IQ_DATA_DUMP_CS,
    CL1D_RF_RXDFE_TEST_OUT_IQ_DATA_DUMP_NUM

}CL1D_RF_RXDFE_TEST_OUT_IQ_DATA_DUMP_E;

/** C2K TX ON/OFF RF/TPC CTRL enumeration */
typedef enum
{
    CL1D_RF_TX_ON_RF_TPC_CTRL_RF_ON_TPC_INIT    = 0,
    CL1D_RF_TX_ON_RF_TPC_CTRL_RF_ON_TPC_GATE_ON = 1,
} CL1D_RF_TX_ON_RF_TPC_CTRL_E;

typedef enum
{
    CL1D_RF_TX_OFF_RF_TPC_CTRL_RF_OFF_TPC_OFF      = 0,
    CL1D_RF_TX_OFF_RF_TPC_CTRL_RF_OFF_TPC_GATE_OFF = 1,
    CL1D_RF_TX_OFF_RF_TPC_CTRL_TPC_OFF             = 2,
} CL1D_RF_TX_OFF_RF_TPC_CTRL_E;


/*----------------------------------------------------------------------------
 Global Typedefs
----------------------------------------------------------------------------*/
/* This structure describes the support for a particular bandclass.
   The Subclass element is a bitmap field with each bit indicating support
   for a particular subclass. The Supported element indicates in general
   support for a specific band class
*/
typedef struct CL1D_RF_SUPPORTED_BAND_INFO_tag
{
   kal_uint32   subclass;
   kal_uint16   supported;
} CL1D_RF_SUPPORTED_BAND_INFO_T;

/** Ads structure to provide parameters to the CL1D_RF_Get_Platform_Info() function. */
typedef struct CL1D_RF_GET_PLATFORM_INFO_tag
{
  /** [out] - RF chip ID */
  kal_uint16   rf_chip_id;
  /** [out] - total suported band class number */
  kal_uint16   support_bc_num;
  /** [out] - suported band class info */
  CL1D_RF_SUPPORTED_BAND_INFO_T support_bc_info[SYS_BAND_CLASS_MAX];
  /** [out] - diversity supported status,1: support, 0:not support */
  kal_uint16   diversity_en[SYS_BAND_CLASS_MAX];
  /** [out] - diversity only test feature supported status,1: support, 0:not support */
  kal_uint16   diversity_only_test_en[SYS_BAND_CLASS_MAX];
  /** [out] - RX path number */
  kal_uint16   rx_path_num;
  /** [out] - RX synthesizer number */
  kal_uint16   rx_synth_num;
  /** [out] - TX path number */
  kal_uint16   tx_path_num;
  /** [out] - TX synthesizer number */
  kal_uint16   tx_synth_num;
  /** [out] - high power mode LNA number */
  kal_uint16   hpm_lna_num;
  /** [out] - low power mode LNA number */
  kal_uint16   lpm_lna_num;
  /** [out] - the HRT of RXON in us unit*/
  kal_uint16   rxon_hrt;
  /** [out] - the HRT of RXOFF in us unit */
  kal_uint16   rxoff_hrt;
  /** [out] - the HRT of TXON in us unit */
  kal_uint16   txon_hrt;
  /** [out] - the HRT of TXOFF in us unit */
  kal_uint16   txoff_hrt;
  /** [out] - the AGPS Group Delay in ns unit */
  kal_int32    agps_group_delay[SYS_BAND_CLASS_MAX];
  /** [out] - dpd enable status,1: enable, 0:disable */
  kal_uint16   dpd_en[SYS_BAND_CLASS_MAX];

} CL1D_RF_GET_PLATFORM_INFO_T;

/** Ads structure to provide parameters to the CL1D_RF_AFC_Synth_Offset_Update() function. */
typedef struct CL1D_RF_AFC_SYNTH_OFFSET_UPDATE_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8   rat_type;
  /** [in] - Rx timer value of tuning RF PLL frequency, range is 0~0xBFFFF */
  kal_uint32  rx_stime;
  /** [in] - CL1D_RF_PATH_E enum type of RF path */
  kal_uint8   path_type;
  /** [in] - total frequency offset error in Hz */
  kal_int32   foe_hz;
} CL1D_RF_AFC_SYNTH_OFFSET_UPDATE_T;

/** Ads structure to provide parameters to the CL1D_RF_AFC_Init_Foe_Ppb_Query() function. */
typedef struct CL1D_RF_AFC_INIT_FOE_PPB_QUERY_tag
{
  /** [out] - total frequency offset error in ppb*/
  kal_int32 foe_ppb;
} CL1D_RF_AFC_INIT_FOE_PPB_QUERY_T;

/** s-curve structure. */
typedef struct CL1D_RF_AFC_S_CURVE_tag
{
  float c0Fac;
  float c1Fac;
  float c2Fac;
  float c3Fac;
} CL1D_RF_AFC_S_CURVE_T;

/** Ads structure to provide parameters to the CL1D_RF_AFC_S_Curve_Param_Query() function. */
typedef struct CL1D_RF_AFC_S_CURVE_PARAM_QUERY_tag
{
  /** [out] - Pointer of s-curve structure*/
  CL1D_RF_AFC_S_CURVE_T s_curve;
} CL1D_RF_AFC_S_CURVE_PARAM_QUERY_T;

/** Ads structure to provide parameters to the CL1D_RF_AFC_Foe_Ppb_To_Dac() function. */
typedef struct CL1D_RF_AFC_FOE_PPB_TO_DAC_tag
{
  /** [in] - total frequency offset error in ppb*/
  kal_int32   foe_ppb;
  /** [out] - AFC DAC value*/
  kal_uint32  afc_dac;
} CL1D_RF_AFC_FOE_PPB_TO_DAC_T;

/** Ads structure to provide parameters to the CL1D_RF_AFC_Dac_To_Foe_Ppb() function. */
typedef struct CL1D_RF_AFC_DAC_TO_FOE_PPB_tag
{
  /** [in] - AFC DAC value*/
  kal_uint32 afc_dac;
  /** [out] - total frequency offset error in ppb*/
  kal_int32  foe_ppb;
} CL1D_RF_AFC_DAC_TO_FOE_PPB_T;

/** Ads structure to provide parameters to the CL1D_RF_AFC_Rx_Channel_To_Frequency() function. */
typedef struct CL1D_RF_AFC_RX_CHANNEL_TO_FREQUENCY_tag
{
  /** [in] - 3GPP2 band class*/
  kal_uint8  band_class;
  /** [in] - channel number*/
  kal_uint16 channel;
  /** [out] - frequency in KHz unit*/
  kal_int32  freq_khz;
} CL1D_RF_AFC_RX_CHANNEL_TO_FREQUENCY_T;

/** Ads structure to provide parameters to the CL1D_RF_AFC_Tx_Channel_To_Frequency() function. */
typedef struct CL1D_RF_AFC_TX_CHANNEL_TO_FREQUENCY_tag
{
  /** [in] - 3GPP2 band class*/
  kal_uint8  band_class;
  /** [in] - channel number*/
  kal_uint16 channel;
  /** [out] - frequency in KHz unit*/
  kal_int32  freq_khz;
} CL1D_RF_AFC_TX_CHANNEL_TO_FREQUENCY_T;

/** Ads structure to provide parameters to the CL1D_RF_AFC_Cap_Id_Update() function. */
typedef struct CL1D_RF_AFC_CAP_ID_UPDATE_tag
{
  /** [in] - cap ID*/
  kal_uint8 cap_id;
} CL1D_RF_AFC_CAP_ID_UPDATE_T;

/** Ads structure to provide parameters to the CL1D_RF_AFC_Dac_Update() function. */
typedef struct CL1D_RF_AFC_DAC_UPDATE_tag
{
  /** [in] - AFC DAC value*/
  kal_uint16 afc_dac;
} CL1D_RF_AFC_DAC_UPDATE_T;


/** Ads structure to provide parameters to the CL1D_RF_Temperature_Query() function. */
typedef struct CL1D_RF_TEMPERATURE_QUERY_tag
{
  /** [in] - 0: From RF for RF temperature compensation
             1: From PMIC for AFC temperature compensation
  */
  kal_uint8  temp_type;
  /** [out] - Temperature value in Celsius*/
  kal_int16  temperature;
} CL1D_RF_TEMPERATURE_QUERY_T;

/** Ads structure to provide parameters to the CL1D_RF_Tx_Path_On() function. */
typedef struct CL1D_RF_TX_PATH_ON_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - Tx on air boundary in RX stimer, range is 0~0xBFFFF */
  kal_uint32 rx_stime;
  /** [in] - Tx on air boundary in TX stimer, range is 0~0xBFFFF */
  kal_int32  tx_stime;
  /** [in] - 3GPP2 band class*/
  kal_uint8  band_class;
  /** [in] - channel number*/
  kal_uint16 channel;
  /** [in] - total frequency offset error in Hz*/
  kal_int32  foe_hz;
  /** [in] - Power reference used for open loop estimation in 1/64dBm@S9.6 unit.*/
  kal_int16  pwr_ref;
  /** [in] - RSSI value with filter in 1/64dBm@S7.6 unit.*/
  kal_int16  rssi_wi_filter;
  /** [in] - Open loop correct gain with S0.16 unit*/
  kal_int32  ol_corr_gain;
  /** [in] - Open loop max slew with S2.6 unit*/
  kal_int32  ol_max_slew;
  /** [in] - RPC combine with U5.0*/
  kal_uint16 rpc_comb_thr;
  /** [in] - TXAGC SW mode control
             bit[7:0]:   rpc_bit_src_sel,  1: sw mode, 0: normal mode
             bit[15:8]:  ks_value_src_sel, 1: sw mode, 0: normal mode
             bit[23:16]: rpc_sym_pos_sel,  1: sw mode, 0: normal mode
  */
  kal_uint32 txagc_sw_mode_ctrl;
  /** [in] - diversity only enable info, 0: not div only mode, 1: div only mode*/
  kal_uint32 div_only_en;
  /** [in] - tx on contrl, 0: RF/FEM on + TPC ON(initial), 1: RF/FEM on + TPC gate on(not initial) */
  kal_uint32 tx_on_ctrl;
  
} CL1D_RF_TX_PATH_ON_T;

/** Ads structure to provide parameters to the CL1D_RF_Tx_Path_Off() function. */
typedef struct CL1D_RF_TX_PATH_OFF_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - Tx off air boundary in RX stimer, range is 0~0xBFFFF */
  kal_uint32 rx_stime;
  /** [in] - Tx off air boundary in TX stimer, range is 0~0xBFFFF */
  kal_int32  tx_stime;
  /** [in] - Tx off control, 0:RF/FEM/DFE off + TPC off 1:RF/FEM/DFE off + TPC Gate off; 2:TPC off */
  kal_int32  tx_off_ctrl;
} CL1D_RF_TX_PATH_OFF_T;

/** Ads structure to provide parameters to the CL1D_RF_Tx_Path_Gate_On() function. */
typedef struct CL1D_RF_TX_PATH_GATE_ON_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - Tx on air boundary in RX stimer, range is 0~0xBFFFF */
  kal_uint32 rx_stime;
  /** [in] - Tx on air boundary in TX stimer, range is 0~0xBFFFF */
  kal_int32  tx_stime;
} CL1D_RF_TX_PATH_GATE_ON_T;

/** Ads structure to provide parameters to the CL1D_RF_Tx_Path_Gate_Off() function. */
typedef struct CL1D_RF_TX_PATH_GATE_OFF_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - Tx on air boundary in RX stimer, range is 0~0xBFFFF */
  kal_uint32 rx_stime;
  /** [in] - Tx on air boundary in TX stimer, range is 0~0xBFFFF */
  kal_int32  tx_stime;
} CL1D_RF_TX_PATH_GATE_OFF_T;

/** This structure is used to dynamic configure TXAGC/TPC HW in EVDO mode. */
typedef struct CL1D_RF_TPC_CFG_EVDO_tag
{
  /** [in] - close loop valid status, TRUE: valid, FALE: invalid
  0: ol+cl+ks   --> cl_valid = TRUE
  1: ol+ks      --> cl_valid = FALSE, slot boundary
  2: ks         --> cl_valid = FALSE, half slot boundary
  */
  kal_bool   cl_valid;
  /** [in] - close loop step up size in 1/64dB@S2.6 unit */
  kal_int16  cl_step_up;
  /** [in] - close loop step down size in 1/64dB@S2.6 unit */
  kal_int16  cl_step_down;
  /** [in] - close loop adjustment limited in 1/64dB@S8.6 unit */
  kal_int16  cl_adj_max;
  /** [in] - close loop adjustment limited in 1/64dB@S8.6 unit */
  kal_int16  cl_adj_min;
  /** [in] - maximum transmit power adjustment in 1/64dB@S5.6 unit, set zero if not use it */
  kal_int16  max_pwr_adj;
  /** [in] - RPC bit in SW mode with U2.0 unit*/
  kal_uint16 rpc_bit_sw;
  /** [in] - KS value in SW mode with S6.6 unit*/
  kal_int16  ks_value_sw;

} CL1D_RF_TPC_CFG_EVDO_T;

/** This structure is used to dynamic configure TXAGC/TPC HW in 1XRTT mode. */
typedef struct CL1D_RF_TPC_CFG_1XRTT_tag
{
  /** [in] - For non-RC8 case, indicate TPC whether needs to configure TQ inside of PCG*/
  kal_bool   tq_en;
  /** [in] - Half PCG power control status, TRUE: valid (RC8),FALSE: invalid */
  kal_bool   hpcg_pctrl_en;
  /** [in] - Whether needs to update close loop accumulation */
  kal_bool   pcg_vld;
  /** [in] - close loop step up size in 1/64dB@S2.6 unit */
  kal_int16  cl_step_up;
  /** [in] - close loop step down size in 1/64dB@S2.6 unit */
  kal_int16  cl_step_down;
  /** [in] - close loop adjustment limited in 1/64dB unit */
  kal_int16  cl_adj_max;
  /** [in] - close loop adjustment limited in 1/64dB unit */
  kal_int16  cl_adj_min;
  /** [in] - maximum transmit power adjustment in 1/64dB unit */
  kal_int16  max_pwr_adj;
  /** [in] - RPC bit in SW mode with U2.0 unit*/
  kal_uint16 rpc_bit_sw;
  /** [in] - KS value in SW mode with S6.6 unit*/
  kal_int16  ks_value_sw;
  /** [in] - RPC symbol position in SW mode with U5.0 unit*/
  kal_uint16 rpc_sym_pos_sw;
} CL1D_RF_TPC_CFG_1XRTT_T;

/** Ads structure to provide parameters to the CL1D_RF_TPC_Cfg() function. */
typedef struct CL1D_RF_TPC_CFG_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8   rat_type;
  /** [in] - Tx timer value of boundary, range is 0~0xBFFFF */
  kal_uint32  tx_stime;
  /** [in] - Structure pointer of CL1D_RF_TPC_CFG_EVDO_T/CL1D_RF_TPC_CFG_1XRTT_T */
  kal_uint32* tpc_cfg_ptr;
} CL1D_RF_TPC_CFG_T;

/** This structure is used to store TPC HW information in EVDO mode. */
typedef struct CL1D_RF_TPC_INFO_EVDO_tag
{
  /** [out] - slot number */
  kal_uint16 slot_num;
  /** [out] - close loop adjust accumulation with 1/64dB@S8.6 unit */
  kal_int16  cl_accum_pre;
  /** [out] - RSSI value with filter in TXAGC HW with 1/64dBm@S7.6 unit*/
  kal_int16  ol_rx_pwr_filter_pre;
  /** [out] - current max limit Tx power with temperature back off and SWTP back off in HW with 1/64dBm@S5.6 unit */
  kal_int16  pwr_max;
  /** [out] - Tx power at antenna in 1/32dBm@S6.5 unit */
  kal_int16  target_pwr;
  /** [out] - (calculate target power - pwr_max) in HW with 1/64dBm@S5.6 unit */
  kal_int16  max_limit_thd_clip;
  /** [out] - KS in HW with 1/64dBm@S6.6 unit */
  kal_int16  ks;
  /** [out] - RPC bit */
  kal_int16  rpc_bit;
  /** [out] - Power reference used for open loop estimation in 1/64dBm@S9.6 unit.*/
  kal_int16  pwr_ref;
} CL1D_RF_TPC_INFO_EVDO_T;

/** This structure is used to store TPC HW information in 1XRTT mode. */
typedef struct CL1D_RF_TPC_INFO_1XRTT_T
{
  /** [out] - PCG number */
  kal_uint16 pcg_num;
  /** [out] - close loop adjust accumulation with 1/64dB@S8.6 unit */
  kal_int16  cl_accum_pre;
  /** [out] - RSSI value with filter in TXAGC HW with 1/64dBm@S7.6 unit*/
  kal_int16  ol_rx_pwr_filter_pre;
  /** [out] - current max limit Tx power with temperature back off and SWTP back off in HW with 1/64dBm@S5.6 unit */
  kal_int16  pwr_max;
  /** [out] - Tx power at antenna in 1/32dBm@S6.5 unit */
  kal_int16  target_pwr;
  /** [out] - KS in HW with 1/64dBm@S6.6 unit */
  kal_int16  ks;
  /** [out] - RPC bit position*/
  kal_int16  rpc_sym_pos;
  /** [out] - TX UPC trigger */
  kal_int16  tx_upc_trig;
  /** [out] - RPC bit */
  kal_int16  rpc_bit;
} CL1D_RF_TPC_INFO_1XRTT_T;

/** Ads structure to provide parameters to the CL1D_RF_TPC_Info_Query() function. */
typedef struct CL1D_RF_TPC_INFO_QUERY_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [out] - Structure pointer of CL1D_RF_TPC_INFO_EVDO_T/ CL1D_RF_TPC_INFO_1XRTT_T array,
              array dimension is two half-slot or half-PCG.
  */
  kal_uint32* tpc_info;
} CL1D_RF_TPC_INFO_QUERY_T;

/** This structure is used to configure TPC HW in SW mode, the PA/CPL table is come from RFNVRAM. */
typedef struct CL1D_RF_TPC_CFG_TST_FIX_POWER_tag
{
  /** [in] - Tx timer value on air, range is 0~0xBFFFF */
  kal_uint32 tx_stime;
  /** [in] - Tx power on air in 1/32dBm unit */
  kal_int32  target_power;
  /** [in] - TRUE: ILPC enable,FALSE: ILPC disable */
  kal_bool   ilpc_en;
  /** [in] - PA power control mode,0:APT mode, 1: DPD mode, 2: ET mode, 3: Auto mode */
  kal_uint16 pa_ctrl_mode;
} CL1D_RF_TPC_CFG_TST_FIX_POWER_T;

/** This structure is used to configure TPC HW in SW mode, the PA/CPL table is come from manual configure info. */
typedef struct CL1D_RF_TPC_CFG_TST_MANUAL_POWER_tag
{
  /** [in] - Tx timer value on air, range is 0~0xBFFFF */
  kal_uint32 tx_stime;
  /** [in] - Tx power on air in 1/64dBm unit */
  kal_int32  target_power;
  /** [in] - Coupler loss from antenna to RFDET port in 1/32dB unit */
  kal_int32  cpl_gain;
  /** [in] - TRUE: ILPC enable,FALSE: ILPC disable */
  kal_bool   ilpc_en;
  /** [in] - PA power control mode,2: ET mode, 1: DPD mode, 0:APT mode */
  kal_uint16 pa_ctrl_mode;
  /** [in] - PA context table index */
  kal_uint16 pa_tbl_idx;
  /** [in] - Reference Tx power at antenna, in 1/32dBm unit */
  kal_int32  ref_target_power;
  /** [in] - Algorithm reference Tx power output PA in 1/32dBm unit */
  kal_int32  pa_gain;
  /** [in] - PA power mode: H/M/L mode, CL1D_RF_PA_MODE_E */
  kal_uint16 pa_mode;
  /** [in] - PA buck voltage in mV unit */
  kal_uint16 pa_vdd;
  /** [in] - PA mode control BPI logic */
  kal_uint16 pa_vm0;
  /** [in] - PA mode control BPI logic */
  kal_uint16 pa_vm1;
  /** [in] - AM value in DPD mode(TBD) */
  kal_int16  dpd_am;
  /** [in] - PM value in DPD mode(TBD) */
  kal_int16  dpd_pm;
} CL1D_RF_TPC_CFG_TST_MANUAL_POWER_T;

/** This structure is used to configure TPC FdB parameters. */
typedef struct CL1D_RF_TPC_CFG_TST_FDB_Tag
{  
  /** [in] - FdB_Idx, unit 1/32 */
  kal_int16  fdb_idx;
  /** [in] - FdB, unit 1/32 */
  kal_int16  fdb;
} CL1D_RF_TPC_CFG_TST_FDB_T;


/** Ads structure to provide parameters to the CL1D_RF_TPC_Cfg_Test() function. */
typedef struct CL1D_RF_TPC_CFG_TEST_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - 0: TPC fix power mode,1: TPC manual power mode */
  kal_uint8  test_mode;
  /** [in] - Structure pointer of CL1D_RF_TPC_CFG_TST_FIX_POWER_T/ CL1D_RF_TPC_CFG_TST_MANUAL_POWER_T */
  kal_uint32* cfg_ptr;
} CL1D_RF_TPC_CFG_TEST_T;

/** Ads structure to provide parameters to the CL1D_RF_TPC_Antenna_Power_Query() function. */
typedef struct CL1D_RF_TPC_ANTENNA_POWER_QUERY_tag
{
  /** [OUT] - current Tx power at antenna in 1/32dB unit */
  kal_int16 ant_power;
} CL1D_RF_TPC_ANTENNA_POWER_QUERY_T;


/** This structure is used to configure RXDFE NCO. */
typedef struct CL1D_RF_RXDFE_NCO_CFG_tag
{
  /** [in] - RXDFE NCO phase, unit is ? */
  kal_int32  phase;
} CL1D_RF_RXDFE_NCO_CFG_T;

/** This structure is used to configure RXDFE NBIF. */
typedef struct CL1D_RF_RXDFE_NBIF_CFG_tag
{
  /** [in] - the valid bit map info of three NBIFs, 3b'xxx */
  kal_uint8  nbif_bmp;
  /** [in] - position of NBIF for I path */
  kal_int32  nbif_ai[CL1D_RF_RXDFE_NBIF_NUM];
  /** [in] - position of NBIF for Q path */
  kal_int32  nbif_aq[CL1D_RF_RXDFE_NBIF_NUM];
  /** [in] - rounding mode of NBIF */
  kal_uint32 nbif_p[CL1D_RF_RXDFE_NBIF_NUM];
} CL1D_RF_RXDFE_NBIF_CFG_T;

/** Ads structure to provide parameters to the CL1D_RF_Rx_Path_On() function. */
typedef struct CL1D_RF_RX_PATH_ON_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - Rx timer value that align to HRT of RXON, range is 0~0xBFFFF */
  kal_uint32 rx_stime;
  /** [in] - 3GPP2 band class */
  kal_uint8  band_class;
  /** [in] - Channel number */
  kal_uint16 channel;
  /** [in] - { second Rx, diversity Rx, main Rx}
              bit0: main Rx
              bit1: diversity Rx
              bit2: second Rx
  */
  kal_uint8  path_bmp;
  /** [in] - total frequency offset error in Hz */
  kal_int32  foe_hz;
  /** [in] - initial RSSI in 1/32 dBm*/
  kal_int32  init_rssi[CL1D_RF_MAX_NUM_OF_RX];
  /** [in] - power mode of CL1D_RF_PWR_MODE_E*/
  kal_uint8  power_mode;
  /** [in] - The slot/PCG number to keep FAST state before STEADY state*/
  kal_uint8  fast_num;
  /** [in] - ICS/FAST/STEADY, ICS state only for EVDO*/
  kal_uint8  agc_fsm;
  /** [in] - use to get the backup gain setting from cell table by rx path,0xFF means NOT resume from history record */
  kal_uint16 cell_index[CL1D_RF_MAX_NUM_OF_RX];
} CL1D_RF_RX_PATH_ON_T;

/** Ads structure to provide parameters to the CL1D_RF_Rx_Path_On() function. */
typedef struct CL1D_RF_RX_PATH_OFF_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - Rx timer value that align to HRT of RXON, range is 0~0xBFFFF */
  kal_uint32 rx_stime;
  /** [in] - { second Rx, diversity Rx, main Rx}
              bit0: main Rx
              bit1: diversity Rx
              bit2: second Rx
  */
  kal_uint8  path_bmp;
  /** [in] - save AGC index in history recode. 0xFF means NOT save in history record */
  kal_uint16 cell_index[CL1D_RF_MAX_NUM_OF_RX];
} CL1D_RF_RX_PATH_OFF_T;

/** This structure is used to dynamic update AGC FSM and power mode in EVDO mode. */
typedef struct CL1D_RF_AGC_CFG_EVDO_tag
{
  /** [in] - Indicate whether FSM is valid */
  kal_bool   agc_fsm_vld;
  /** [in] - ICS/FAST/STEADY, ICS state only for EVDO */
  kal_uint8  agc_fsm;
  /** [in] - Indicate whether power mode is valid */
  kal_bool   power_mode_vld;
  /** [in] - power mode of CL1D_RF_PWR_MODE_E*/
  kal_uint8  power_mode;
} CL1D_RF_AGC_CFG_EVDO_T;

/** This structure is used to dynamic update AGC FSM and power mode in EVDO mode. */
typedef struct CL1D_RF_AGC_CFG_1XRTT_tag
{
  /** [in] - Indicate whether power mode is valid */
  kal_bool   power_mode_vld;
  /** [in] - power mode of CL1D_RF_PWR_MODE_E*/
  kal_uint8  power_mode;
} CL1D_RF_AGC_CFG_1XRTT_T;

/** Ads structure to provide parameters to the CL1D_RF_AGC_Cfg() function. */
typedef struct CL1D_RF_AGC_CFG_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8   rat_type;
  /** [in] - Rx timer value, range is 0~0xBFFFF */
  kal_uint32 rx_stime;
  /** [in] - { second Rx, diversity Rx, main Rx}
              bit0: main Rx
              bit1: diversity Rx
              bit2: second Rx
  */
  kal_uint8  path_bmp;
  /** [in] - Structure pointer of CL1D_RF_AGC_CFG_EVDO_T/CL1D_RF_AGC_CFG_1XRTT_T */
  kal_uint32*   agc_cfg_ptr;
} CL1D_RF_AGC_CFG_T;

/** Ads structure to provide parameters to the CL1D_RF_AGC_Rssi_Query() function. */
typedef struct CL1D_RF_AGC_RSSI_QUERY_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - { second Rx, diversity Rx, main Rx}
              bit0: main Rx
              bit1: diversity Rx
              bit2: second Rx
  */
  kal_uint8  path_bmp;
  /** [out] - RSSI result of 3 Rx path.
              normal mode: include temperature comp and low power comp, it's a average of current SLOT/PCG
              test/meta mode: include temperature comp without lower comp, it's a average of testing period
  */
  kal_int16  rssi[CL1D_RF_MAX_NUM_OF_RX];
} CL1D_RF_AGC_RSSI_QUERY_T;

/** Ads structure to provide parameters to the CL1D_RF_PAHT_SNR_Query() function. */
typedef struct CL1D_RF_PATH_SNR_QUERY_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - { second Rx, diversity Rx, main Rx}
              bit0: main Rx
              bit1: diversity Rx
              bit2: second Rx
  */
  kal_uint8  path_bmp;
  /** [out] - SNR result of 3 Rx path.
              normal mode: include temperature comp and low power comp, it's a average of current SLOT/PCG
              test/meta mode: include temperature comp without lower comp, it's a average of testing period
  */
  kal_int16  snr[CL1D_RF_MAX_NUM_OF_RX];
} CL1D_RF_PATH_SNR_QUERY_T;

/** Ads structure to provide parameters to the CL1D_RF_PATH_EC_IO_Query() function. */
typedef struct CL1D_RF_PATH_EC_IO_QUERY_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - { second Rx, diversity Rx, main Rx}
              bit0: main Rx
              bit1: diversity Rx
              bit2: second Rx
  */
  kal_uint8  path_bmp;
  /** [out] - RSSI result of 3 Rx path.
              normal mode: include temperature comp and low power comp, it's a average of current SLOT/PCG
              test/meta mode: include temperature comp without lower comp, it's a average of testing period
  */
  kal_int16  ecio[CL1D_RF_MAX_NUM_OF_RX];
} CL1D_RF_PATH_EC_IO_QUERY_T;


/** This structure is used to This structure is used to configure AGCDC HW in SW mode. */
typedef struct CL1D_RF_AGC_CFG_TST_FIX_GAIN_tag
{
  /** [in] - ICS/FAST/STEADY/FHC */
  kal_uint8  agc_fsm;
  /** [in] - power mode of CL1D_RF_PWR_MODE_E*/
  kal_uint8  power_mode;
  /** [in] - LNA index of CL1D_RF_LNA_MODE_E*/
  kal_uint8  lna_idx;
  /** [in] - Rx timer value, range is 0~0xBFFFF, indicate when to begin RSSI average,
             0xFFFFFFFF means no time limitation
  */
  kal_uint32 rssi_avg_start_time;

  /** [in] - Rx timer value, range is 0~0xBFFFF, indicate when to end RSSI average,
             0xFFFFFFFF means no time limitation
  */
  kal_uint32 rssi_avg_end_time;

} CL1D_RF_AGC_CFG_TST_FIX_GAIN_T;

/** Ads structure to provide parameters to the CL1D_RF_AGC_Cfg_Test() function. */
typedef struct CL1D_RF_AGC_CFG_TEST_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8   rat_type;
  /** [in] - Rx timer value, range is 0~0xBFFFF */
  kal_uint32  rx_stime;
  /** [in] - { second Rx, diversity Rx, main Rx}
              bit0: main Rx
              bit1: diversity Rx
              bit2: second Rx
  */
  kal_uint8   path_bmp;
  /** [in] - 0: AGC fix gain mode 1: бн */
  kal_uint8   test_mode;
  /** [in] - Structure pointer of L1D_RF_AGC_CFG_TST_FIX_GAIN_T/CL1D_RF_AGC_CFG_TST_RSSI_SCAN_T */
  kal_uint32*   cfg_ptr;
} CL1D_RF_AGC_CFG_TEST_T;

/** Ads structure to provide parameters to the CL1D_RF_AGC_Backup_Info_Query() function. */
typedef struct CL1D_RF_AGC_BACKUP_INFO_QUERY_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - { second Rx, diversity Rx, main Rx}
              bit0: main Rx
              bit1: diversity Rx
              bit2: second Rx
  */
  kal_uint8  path_bmp;
  /** [in] - use to get the backup gain setting from cell table by rx path*/
  kal_uint16 cell_index[CL1D_RF_MAX_NUM_OF_RX];

  /** [out] - power mode of CL1D_RF_PWR_MODE_E*/
  kal_uint8  power_mode[CL1D_RF_MAX_NUM_OF_RX];
} CL1D_RF_AGC_BACKUP_INFO_QUERY_T;

/** Ads structure to provide parameters to the CL1D_RF_RXDFE_IQC_Update() function. */
typedef struct CL1D_RF_RXDFE_IQC_UPDATE_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8   rat_type;
  /** [in] - Rx timer value of update IQ compensation, range is 0~0xBFFFF */
  kal_uint32  rx_stime;
  /** [in] - { bit2:second Rx, bit1:diversity Rx, bit0:main Rx} */
  kal_uint8   path_bmp;
  /** [in] - power mode of CL1D_RF_PWR_MODE_E*/
  kal_uint8   power_mode;
} CL1D_RF_RXDFE_IQC_UPDATE_T;


/** Ads structure to provide parameters to the CL1D_RF_RXDFE_Nbif_Update() function. */
typedef struct CL1D_RF_RXDFE_NCO_UPDATE_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8   rat_type;
  /** [in] - Rx timer value of set NCO, range is 0~0xBFFFF */
  kal_uint32  rx_stime;
  /** [in] - { bit2:second Rx, bit1:diversity Rx, bit0:main Rx} */
  kal_uint8   path_bmp;
  /** [in] - RXDFE NCO configuration*/
  CL1D_RF_RXDFE_NCO_CFG_T  nco_cfg;
} CL1D_RF_RXDFE_NCO_UPDATE_T;

/** Ads structure to provide parameters to the CL1D_RF_RXDFE_Nbif_Update() function. */
typedef struct CL1D_RF_RXDFE_NBIF_UPDATE_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8   rat_type;
  /** [in] - Rx timer value, range is 0~0xBFFFF */
  kal_uint32  rx_stime;
  /** [in] - { second Rx, diversity Rx, main Rx}
              bit0: main Rx
              bit1: diversity Rx
              bit2: second Rx
  */
  kal_uint8   path_bmp;
  /** [in] - RXDFE NBIF configuration*/
  CL1D_RF_RXDFE_NBIF_CFG_T nbif_cfg;
} CL1D_RF_RXDFE_NBIF_UPDATE_T;

/** Ads structure to provide parameters to the CL1D_RF_RXDFE_Sort_Done() function. */
typedef struct CL1D_RF_RXDFE_SORT_DONE_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8   rat_type;

} CL1D_RF_RXDFE_SORT_DONE_T;

/** Ads structure to provide parameters to the CL1D_RF_TXDFE_RF_TTG_Cfg() function. */
typedef struct CL1D_RF_TXDFE_RF_TTG_CFG_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - TRUE: turn on TXDFE_WIN and TTG
             FALSE: turn off TXDFE_WIN and TTG
  */
  kal_bool   ttg_en;
  /** [in] - Sine tone frequency in Hz */
  kal_uint32 ttg_freq;

} CL1D_RF_TXDFE_RF_TTG_CFG_T;

/** Ads structure to provide parameters to the CL1D_RF_Test_Mode_Request() function. */
typedef struct CL1D_RF_TEST_MODE_REQUEST_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [in] - TRUE: test mode enable
             FALSE: test mode disablein   */
  kal_bool  test_mode_en;

  /** [in] - bit0: RX test mode
             bit1: TX test mode
             bit2: META mode
      Note: just one bit can be set/clear every time
 */
  kal_uint8 test_mode_bmp;

} CL1D_RF_TEST_MODE_REQUEST_T;

typedef struct CL1D_RF_NV_tag
{
    kal_uint32 nvram_lid;
    kal_uint8* data_buf;
    kal_uint32 oper_bmp;
    kal_uint16 nvram_rec_idx;
} CL1D_RF_NV_T;

typedef struct CL1D_RF_NV_RE_INIT_tag
{
    kal_uint32 oper_bmp;
} CL1D_RF_NV_RE_INIT_T;

/** This structure is used to store UPC HW information in EVDO and 1xRTT mode. */
typedef struct CL1D_RF_UPC_INFO_tag
{
	/** [in] - PA index */
	kal_uint8  pa_idx;
	
	/** [out] - PGA gain */
	kal_int16  pga_gain;

	/** [out] - DET path PGA gain */
	kal_int16  det_gain;
	
	/** [out] - BB gain */
	kal_int16  bb_gain;

} CL1D_RF_UPC_INFO_T;

/** Ads structure to provide parameters to the CL1D_RF_UPC_Info_Query() function. */
typedef struct CL1D_RF_UPC_INFO_QUERY_tag
{
  /** [in] - Indicate the RAT type of EVDO/1XRTT */
  kal_uint8  rat_type;
  /** [out] - Structure pointer of CL1D_RF_UPC_INFO_T
  */
  CL1D_RF_UPC_INFO_T* upc_info;
} CL1D_RF_UPC_INFO_QUERY_T;

/** Ads structure to provide parameters to the CL1D_RF_TPC_Gain_Info_Query() function. */
typedef struct CL1D_RF_TPC_GAIN_INFO_QUERY_tag
{
	/** [in] - PA index */
	kal_uint8  pa_idx;
	
	/** [out] - PA gain */
	kal_int16  pa_gain;
	
	/** [in] - PGA index */
	kal_uint8  pga_idx;
	
	/** [out] - PGA gain */
	kal_int16  pga_gain;
	
	/** [in] - DET PA index */
	kal_uint8  det_pga_idx;
	
	/** [out] - DET PA gain */
	kal_int16  det_pga_gain;
	
	/** [in] - CPL PA index */
	kal_uint8  cpl_idx;
	
	/** [out] - CPL PA gain */
	kal_int16  cpl_gain;
	
	/** [in] - BB PA index */
	kal_uint8  bb_idx;
	
	/** [out] - BB PA gain */
	kal_int16  bb_gain;

} CL1D_RF_TPC_GAIN_INFO_QUERY_T;


/** This structure is used to get PA LUT table */
typedef struct CL1D_RF_CUST_GET_PA_LUT_TBL_CONTEX_tag
{
	/** [in] - Indicate the RAT type of EVDO/1XRTT */
	kal_uint8  rat_type;

	/** [in] - PA index */
	kal_uint8  pa_idx;

	/** [out] - PA mode */
	kal_uint8  pa_mode;

	/** [out] - target power */
	kal_int16  prf;

	/** [out] - PA gain (include compensation) */
	kal_int16  pa_gain;

	/** [out] - Coupler loss (include compensation) */
	kal_int16  coupler_loss;

	/** [out] - VM0 */
	kal_uint8  vm0;

	/** [out] - VM1 */
	kal_uint8  vm1;

	/** [out] - VDD */
	kal_uint16 vdd;

	/** [out] - PA comp**/
	kal_int16  pa_gain_comp;

} CL1D_RF_CUST_GET_PA_LUT_TBL_CONTEX_T;

/** This structure is used to get custom item info */
typedef struct CL1D_RF_CUST_GET_CUST_ITEM_INFO_tag
{
	/** [in] - LID */
	kal_uint32  item_lid;

	/** [in] - rec_idx */
	kal_uint32	rec_idx;

	/** [out] - LID item address */
	kal_uint32* item_addr;

} CL1D_RF_CUST_GET_CUST_ITEM_INFO_T;

/** This structure is used to copy data from SHM to NVRAM */
typedef struct CL1D_RF_COPY_DATA_FROM_SHM_TO_NVRAM_tag
{
	/** [in] - LID */
	kal_uint32  item_lid;

	/** [in] - rec_idx */
	kal_uint32	rec_idx;

} CL1D_RF_COPY_DATA_FROM_SHM_TO_NVRAM_T;

/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/
extern kal_uint8 rat2mmrfMode[CL1D_RF_RAT_NUM];
#define M_RAT_TO_MMRF_MODE(rat)		(rat2mmrfMode[rat])

/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/
/**RFD common interface*/
extern void CL1D_RF_Get_Platform_Info(CL1D_RF_GET_PLATFORM_INFO_T* adsPtr);
extern void CL1D_RF_Sw_Init(void);
extern void CL1D_RF_HW_Init(void);
extern void CL1D_RF_Init(void);

/**RFD AFC interface*/
extern void CL1D_RF_AFC_Synth_Offset_Update(CL1D_RF_AFC_SYNTH_OFFSET_UPDATE_T* adsPtr);
extern void CL1D_RF_AFC_Init_Foe_Ppb_Query(CL1D_RF_AFC_INIT_FOE_PPB_QUERY_T* adsPtr);
extern void CL1D_RF_AFC_S_Curve_Param_Query(CL1D_RF_AFC_S_CURVE_PARAM_QUERY_T* adsPtr);
extern void CL1D_RF_AFC_Foe_Ppb_To_Dac(CL1D_RF_AFC_FOE_PPB_TO_DAC_T* adsPtr);
extern void CL1D_RF_AFC_Dac_To_Foe_Ppb(CL1D_RF_AFC_DAC_TO_FOE_PPB_T* adsPtr);
extern void CL1D_RF_AFC_Rx_Channel_To_Frequency(CL1D_RF_AFC_RX_CHANNEL_TO_FREQUENCY_T* adsPtr);
extern void CL1D_RF_AFC_Tx_Channel_To_Frequency(CL1D_RF_AFC_TX_CHANNEL_TO_FREQUENCY_T* adsPtr);
extern void CL1D_RF_AFC_Cap_Id_Update(CL1D_RF_AFC_CAP_ID_UPDATE_T* adsPtr);
extern void CL1D_RF_AFC_Dac_Update(CL1D_RF_AFC_DAC_UPDATE_T* adsPtr);

/**RFD power saving interface*/
extern void CL1D_RF_Power_On(void);
extern void CL1D_RF_Power_Off(void);

/**RFD temperature feature interface*/
extern void CL1D_RF_Temperature_Query(CL1D_RF_TEMPERATURE_QUERY_T* adsPtr);
extern void CL1D_RF_Temperature_Meas(kal_uint8 rat, CL1D_RF_TMP_MODE_E tmp_mode);

/**RFD TX path control interface*/
extern void CL1D_RF_Tx_Path_On(CL1D_RF_TX_PATH_ON_T* adsPtr);
extern void CL1D_RF_Tx_Path_Off(CL1D_RF_TX_PATH_OFF_T* adsPtr);
extern void CL1D_RF_Tx_Path_Gate_On(CL1D_RF_TX_PATH_GATE_ON_T* adsPtr);
extern void CL1D_RF_Tx_Path_Gate_Off(CL1D_RF_TX_PATH_GATE_OFF_T* adsPtr);

/**RFD TPC control interface*/
extern void CL1D_RF_TPC_Init(void);
extern void CL1D_RF_TPC_Cfg(CL1D_RF_TPC_CFG_T* adsPtr);
extern void CL1D_RF_TPC_Info_Query(CL1D_RF_TPC_INFO_QUERY_T* adsPtr);
extern void CL1D_RF_TPC_Cfg_Test(CL1D_RF_TPC_CFG_TEST_T* adsPtr);
extern void CL1D_RF_TPC_Antenna_Power_Query(CL1D_RF_TPC_ANTENNA_POWER_QUERY_T* adsPtr);
extern kal_bool CL1D_RF_CUST_Fdb_Read_Done_Query(void);

/**RFD RX path control interface*/
extern void CL1D_RF_Rx_Path_On(CL1D_RF_RX_PATH_ON_T* adsPtr);
extern void CL1D_RF_Rx_Path_Off(CL1D_RF_RX_PATH_OFF_T* adsPtr);

/**RFD AGC control interface*/
extern void CL1D_RF_AGC_Cfg(CL1D_RF_AGC_CFG_T* adsPtr);
extern void CL1D_RF_AGC_Rssi_Query(CL1D_RF_AGC_RSSI_QUERY_T* adsPtr);
extern void CL1D_RF_AGC_Cfg_Test(CL1D_RF_AGC_CFG_TEST_T* adsPtr);
extern void CL1D_RF_AGC_Backup_Info_Query(CL1D_RF_AGC_BACKUP_INFO_QUERY_T* adsPtr);

/**RFD DFE control interface*/
extern void CL1D_RF_RXDFE_Iqc_Update(CL1D_RF_RXDFE_IQC_UPDATE_T* adsPtr);
extern void CL1D_RF_RXDFE_Nco_Update(CL1D_RF_RXDFE_NCO_UPDATE_T* adsPtr);
extern void CL1D_RF_RXDFE_Nbif_Update(CL1D_RF_RXDFE_NBIF_UPDATE_T* adsPtr);
extern void CL1D_RF_RXDFE_Sort_Done(CL1D_RF_RXDFE_SORT_DONE_T* adsPtr);
extern void CL1D_RF_TXDFE_RF_TTG_Cfg(CL1D_RF_TXDFE_RF_TTG_CFG_T* adsPtr);
extern void CL1D_RF_RXDFE_Test_Out(void);
extern void CL1D_RF_RXDFE_Test_Out_Cfg(CL1D_RF_RXDFE_TEST_OUT_IQ_DATA_DUMP_E dump_point);
/**RFD test control interface*/
extern void CL1D_RF_Test_Mode_Request(CL1D_RF_TEST_MODE_REQUEST_T* adsPtr);

/**RFD NV interface */
extern kal_int32 CL1D_RF_NV_Get(CL1D_RF_NV_T* nv_get_p);
extern kal_int32 CL1D_RF_NV_Set(CL1D_RF_NV_T* nv_set_p);
extern kal_int32 CL1d_RF_NV_Re_Init(CL1D_RF_NV_RE_INIT_T* re_init_p);

/**RFD Band conversion interface */
extern kal_uint8 CL1D_RF_CUST_C2k_Band_To_Rf_Band(kal_uint8 c2k_band);

/** RFD TAS interface **/
extern C2K_CUSTOM_TAS_STATE_E CL1D_RF_Tas_GetCurrentState(SysCdmaBandT band, CL1D_RF_RAT_E l1_rat);

extern void CL1D_RF_Tas_SwitchMainRoute(
		SysCdmaBandT band, 
		C2K_CUSTOM_TAS_STATE_E state, 
		CL1D_RF_RAT_E l1_rat, 
		kal_int32 l1_time,
		kal_bool delay,
		CL1D_RF_TAS_AT_CMD_T* tasAtCmdInfoPtr);

extern void CL1D_RF_Tas_SwitchDivRoute(
		SysCdmaBandT band, 
		C2K_CUSTOM_TAS_STATE_E state, 
		CL1D_RF_RAT_E l1_rat, 
		kal_int32 l1_time, 
		kal_bool delay,
		CL1D_RF_TAS_AT_CMD_T* tasAtCmdInfoPtr);

extern kal_bool CL1D_RF_Tas2_IsEnable(CL1D_RF_BAND_E rf_band);
extern C2K_CUSTOM_TAS_VER_E CL1D_RF_Tas_GetVersion(void);
extern kal_bool CL1D_RF_Tas_IsEnable(void);
extern void CL1D_RF_Tas_Update_State(SysCdmaBandT band, 
										C2K_CUSTOM_TAS_STATE_E state, 
										CL1D_RF_RAT_E l1_rat);
extern void CL1D_RF_Tas_Update_ATcmd_Info(CL1D_RF_TAS_AT_CMD_T* tasAtCmdInfoPtr);
extern void CL1D_RF_Tas_Update_SIM_Status(kal_bool tstSIMstatus);
/*TAS NVRAM API*/
/*Api-1 */
extern C2K_CUSTOM_TAS_STATE_E TasForceStateInfo(SysCdmaBandT band);
/*Api-2 */
extern void CL1D_TAS_ENABLE_SETTING(kal_bool nvram_write);
/*Api-3 */
extern void FORCE_TAS_STATE_TO_NVRAM(
		C2K_CUSTOM_TAS_STATE_E 	TasState,
		kal_bool nvram_write);
/*Api-4 */
extern void FORCE_TAS_STATE_BY_BAND(
		C2K_CUSTOM_TAS_STATE_E TasState,
		SysCdmaBandT band);
/*Api-5 */
extern C2K_CUSTOM_TAS_STATE_E RESTORE_TAS_STATE_BY_BAND(SysCdmaBandT band);

/*Api-6 */
extern C2K_CUSTOM_TAS_FEATURE_BY_RAT_T* TasByRatInfoQuery(void);

/**Turn On Pa**/
extern void CL1D_RF_Vpa_Enable(kal_bool vpa_en,SysCdmaBandT band);

/**Send/Read BSI/MIPI CW**/
void CL1D_RF_IMM_SEND_BSI(kal_uint16 bsiid, kal_uint32 bsiaddr, kal_uint32 bsidata);
void CL1D_RF_IMM_READ_BSI(kal_uint16 bsiid, kal_uint32 bsiaddr, kal_uint32* bsidata);
void CL1D_RF_IMM_SEND_MIPI(kal_uint16 mipiport, kal_uint32 mipiusid, kal_uint32 mipiaddr, kal_uint32 mipidata);
void CL1D_RF_IMM_READ_MIPI(kal_uint16 mipiport, kal_uint32 mipiusid, kal_uint32 mipiaddr, kal_uint32* mipidata);

/**RFD Trace**/
void CL1D_RF_Log_Tick(CL1D_RF_RAT_TYPE_E rat);
void CL1D_RF_Dump_Bsi_Bpi_Mipi_Cw_Logger(void);

/**RF conflict checking interface**/
void CL1D_RF_Bpi_Conflict_Check(CL1D_RF_RAT_TYPE_E rat);

/*****************************************************************************
* End of File
*****************************************************************************/
#endif

