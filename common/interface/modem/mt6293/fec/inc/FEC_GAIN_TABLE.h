/******************************************************************************
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

/******************************************************************************
 *
 * Filename:
 * ---------
 *   FEC_GAIN_TABLE.h
 *
 * Project:
 * --------
 *   TK6291 Project
 *
  * Description:
 * ------------
 *   TK6291 RX CodeWord gain table
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 * removed!
 * removed!
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *******************************************************************************/


#ifndef _FEC_GAIN_TABLE_H_
#define _FEC_GAIN_TABLE_H_


/************************************************************************************
* #include
************************************************************************************/

#include "string.h"

/************************************************************************************
* #define
************************************************************************************/

typedef unsigned char            UINT8;
typedef signed char              INT8;
typedef unsigned short int       UINT16;
typedef signed short int         INT16;
typedef unsigned int             UINT32;
typedef signed int               INT32;
typedef unsigned char            BOOL;

#define FEC_AGC_PATH_NUM     2
#define FEC_AGC_CC_NUM     2
#define FEC_AGC_ANT_NUM    2
#define FEC_AGC_LNA_NUM    6
#define FEC_AGC_PGA_NUM    (9+5) // 3 for LPM , 2 for T 1 mode
#define FEC_AGC_LTE_MODE   0
#define FEC_AGC_WCDMA_MODE 1
#define FEC_AGC_ARX_NUM 2
#define FEC_AGC_ARX_HPM 0
#define FEC_AGC_ARX_LPM 1
#define FEC_RXCAL_MODE_NUM   2   // LTE and WCDMA
#define FEC_RXCAL_RF_GAIN_INDEX_NUM 19
#define FEC_RXCAL_RF_ELNA_GAIN_INDEX_NUM 17
#define FEC_RXCAL_RF_TIER1_GAIN_INDEX_NUM 21
#define FEC_RXCAL_GAIN_TABLE_SEARCH_IDX 21
#define FEC_AGC_LNA_HW_TABLE_INDEX_NUM    7
#define FEC_AGC_PGA_TIA_IF_INDEX_NUM 16

/*AGTD API use*/
#define MAX_SEQUENCE_NUM_TYPE_I 7
#define MAX_SEQUENCE_NUM_TYPE_II 18
#define calib_gain_mode_num_hpm 7  // 6 + 2 ; 2 for eLNA bypass
#define seq_idx_assert_num 100
//#define calib_gain_mode_num_lpm 5  // 3 + 2 ; 2 for eLNA bypass
#if defined(MT6177M_LTE_RF)
#define FEC_AGC_GAIN_TBL_NUM    8
#define FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_ALWAYS_ON         17
#define FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_BYPASS_ON_WO_SAW  9
#define FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_BYPASS_ON_WI_SAW  11
#define FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_OFF               17
#define FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_BYPASS_WO_SAW     11
#define FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_BYPASS_WI_SAW     11
#define FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_ALWAYS_ON         11
#define FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_BYPASS_ON_WO_SAW  3
#define FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_BYPASS_ON_WI_SAW  5
#define FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_OFF               11
#define FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_BYPASS_WO_SAW     9  //4+7
#define FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_BYPASS_WI_SAW     9  //4+7
#else
#define FEC_AGC_GAIN_TBL_NUM    8
#define FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_ALWAYS_ON         18
#define FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_BYPASS_ON_WO_SAW  9
#define FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_BYPASS_ON_WI_SAW  12
#define FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_OFF               18
#define FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_BYPASS_WO_SAW     11
#define FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_BYPASS_WI_SAW     11
#define FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_ALWAYS_ON         17
#define FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_BYPASS_ON_WO_SAW  8
#define FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_BYPASS_ON_WI_SAW  11
#define FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_OFF               17
#define FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_BYPASS_WO_SAW     11  //4+7
#define FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_BYPASS_WI_SAW     11  //4+7

#endif

#define FEC_AGC_DEFAULT_DIG_GAIN                    (0)
#define FEC_AGC_MAX_RF_GAIN_dB                      2195

#define FEC_AGC_PGA_GAIN_CW_LSB    (3)
#define FEC_AGC_HPM_PGA_NUM        (9)  //7+2(T1)
#define FEC_AGC_LPM_PGA_NUM        (6)
#define FEC_AGC_CW_ADDR_NUM        (4)
#define FEC_AGC_LPM_CW_NUM         (6)
#define FEC_AGC_ARX_CW_NUM         (6)
#define FEC_AGC_DC_CW_NUM          (64)


/************************************************************************************
*  Enums
************************************************************************************/

/****************************************/
/******** Enum for 93/95 Calibration*********/
/****************************************/
#if !defined(__CORE_USIP1__) || defined(__LTE_L1SIM__)
typedef enum
{
   ANT_MAIN  = 0,
   ANT_DIV   = 1
}FEC_RX_ANT_MAPPING;

typedef enum
{
   FEC_AGC_ELNA_OFF,
   FEC_AGC_ELNA_ALWAYS_ON,
   FEC_AGC_ELNA_ALWAYS_ON_2ND_SAW,
   FEC_AGC_ELNA_BYPASS,
   FEC_AGC_ELNA_BYPASS_2ND_SAW
}FEC_AGC_ELNA_E;

typedef enum
{
   /* bit3: LPM, bit2: ELNA_bypass, bit1: ELNA_bypass_mode, bit0: 2nd_Saw*/
   FEC_AGC_GAIN_TBL_HPM_ELNA_ALWAYS_ON = 0,
   FEC_AGC_GAIN_TBL_HPM_ELNA_BYPASS_ON_WO_SAW = 2,
   FEC_AGC_GAIN_TBL_HPM_ELNA_BYPASS_ON_WI_SAW = 3,
   FEC_AGC_GAIN_TBL_HPM_ELNA_OFF = 4,
   FEC_AGC_GAIN_TBL_HPM_ELNA_BYPASS_WO_SAW = 6,
   FEC_AGC_GAIN_TBL_HPM_ELNA_BYPASS_WI_SAW = 7,
   FEC_AGC_GAIN_TBL_LPM_ELNA_ALWAYS_ON = 8,
   FEC_AGC_GAIN_TBL_LPM_ELNA_BYPASS_ON_WO_SAW = 10,
   FEC_AGC_GAIN_TBL_LPM_ELNA_BYPASS_ON_WI_SAW = 11,
   FEC_AGC_GAIN_TBL_LPM_ELNA_OFF = 12,
   FEC_AGC_GAIN_TBL_LPM_ELNA_BYPASS_WO_SAW = 14,
   FEC_AGC_GAIN_TBL_LPM_ELNA_BYPASS_WI_SAW = 15
}FEC_AGC_GAIN_TBL_IDX_E;
#endif

/************************************************************************************
*  Structures
************************************************************************************/
#if !defined(__CORE_USIP1__) || defined(__LTE_L1SIM__)
/*to be removed*/
typedef struct
{
unsigned int  LNA_CW[FEC_AGC_LNA_NUM];
unsigned int  PGA_CW[FEC_RXCAL_MODE_NUM][FEC_AGC_PGA_NUM];
}Fec_Use_Gain_Table_T;

typedef struct
{
unsigned int  LNA_CW[FEC_AGC_LNA_NUM];
unsigned int  PGA_CW[FEC_RXCAL_MODE_NUM][FEC_AGC_PGA_NUM];
unsigned int  W_RF_GAIN_CW[FEC_AGC_ARX_NUM][FEC_RXCAL_RF_GAIN_INDEX_NUM];//gain table & calibration
unsigned int  W_ELNA_ON_RF_GAIN_CW[FEC_AGC_ARX_NUM][FEC_RXCAL_RF_ELNA_GAIN_INDEX_NUM];//calibration
unsigned int  W_ELNA_ONE_OFF_RF_GAIN_CW[FEC_RXCAL_RF_GAIN_INDEX_NUM];//calibration
unsigned int  W_RF_ELNA_GAIN_CW[FEC_RXCAL_RF_ELNA_GAIN_INDEX_NUM];//gain table
unsigned int  W_RF_TIER1_MODE_GAIN_CW[FEC_RXCAL_RF_TIER1_GAIN_INDEX_NUM];//gain table
unsigned int  L_RF_GAIN_CW[FEC_RXCAL_RF_GAIN_INDEX_NUM];
unsigned int  LNA_L_H[FEC_RXCAL_RF_GAIN_INDEX_NUM];
}Fec_Gain_Table_T;

typedef struct
{
   unsigned char rf_gain_idx[FEC_AGC_ANT_NUM];
   unsigned char lna_gain_idx[FEC_AGC_ANT_NUM];
   unsigned char pga_gain_idx[FEC_AGC_ANT_NUM];
   unsigned char ctrl_mode;
   unsigned char elna_setting[FEC_AGC_ANT_NUM];
   unsigned char is_lpm;
   unsigned char is_cal;
   unsigned char is_rxd;
}Fec_Use_Rf_Gain_CW_Input_T;


/****************************************/
/****** Structure for 93/95 Calibration********/
/****************************************/
typedef struct
{
   UINT8 RF_GAIN_CW_HPM_ELNA_ALWAYS_ON[FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_ALWAYS_ON];
   UINT8 RF_GAIN_CW_HPM_ELNA_BYPASS_ON_WO_SAW[FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_BYPASS_ON_WO_SAW];
   UINT8 RF_GAIN_CW_HPM_ELNA_BYPASS_ON_WI_SAW[FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_BYPASS_ON_WI_SAW];
   UINT8 RF_GAIN_CW_HPM_ELNA_OFF[FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_OFF];
   UINT8 RF_GAIN_CW_HPM_ELNA_BYPASS_WO_SAW[FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_BYPASS_WO_SAW];
   UINT8 RF_GAIN_CW_HPM_ELNA_BYPASS_WI_SAW[FEC_AGC_GAIN_IDX_NUM_HPM_ELNA_BYPASS_WI_SAW];
   UINT8 RF_GAIN_CW_LPM_ELNA_ALWAYS_ON[FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_ALWAYS_ON];
   UINT8 RF_GAIN_CW_LPM_ELNA_BYPASS_ON_WO_SAW[FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_BYPASS_ON_WO_SAW];
   UINT8 RF_GAIN_CW_LPM_ELNA_BYPASS_ON_WI_SAW[FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_BYPASS_ON_WI_SAW];
   UINT8 RF_GAIN_CW_LPM_ELNA_OFF[FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_OFF];
   UINT8 RF_GAIN_CW_LPM_ELNA_BYPASS_WO_SAW[FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_BYPASS_WO_SAW];
   UINT8 RF_GAIN_CW_LPM_ELNA_BYPASS_WI_SAW[FEC_AGC_GAIN_IDX_NUM_LPM_ELNA_BYPASS_WI_SAW];
}FEC_AGC_RF_GAIN_CW_TBL_T;

typedef struct
{
   BOOL elna_bypass;        //elna bypass = TRUE, elna_on = FALSE
   FEC_AGC_ELNA_E elna_mode;
}FEC_ELNA_INFO_T;

/**** For Fec_Rxcal_Get_RF_Gain_CW ****/
//INPUT
typedef struct
{
   /* use for 3G & 4G*/
   INT16 wanted_rf_gain[FEC_AGC_ANT_NUM];
   FEC_ELNA_INFO_T elna_info[FEC_AGC_ANT_NUM];
   BOOL lpm_flag;
   /* 4G CW use only, 3G can fill zero*/
   UINT16 freq;
   UINT8 srx_path;           // 0 or 1
   UINT32 agg_bw;            // rf aggregated bw   
   BOOL qdl_info;
}FEC_RXCAL_COMMON_INFO_T;

typedef union
{
   FEC_RXCAL_COMMON_INFO_T sc_info;
   FEC_RXCAL_COMMON_INFO_T gbg_info[FEC_AGC_CC_NUM];
}FEC_RXCAL_TYPE_U;

typedef struct
{
   UINT16 comp_route;          //0~259, invalid:260
   FEC_RXCAL_TYPE_U cal_info;
}FEC_RXCAL_INFO_T;

//OUTPUT
typedef struct
{
   INT16  used_rf_gain_db[FEC_AGC_ANT_NUM];
   UINT32 rf_gain_cw[FEC_AGC_ANT_NUM];
   UINT32 lpm_setting_cw[FEC_AGC_ANT_NUM];
   UINT32 arx_cw[FEC_AGC_ANT_NUM];
   UINT32 latch_cw[FEC_AGC_ANT_NUM];
   UINT32 delay_cw[FEC_AGC_ANT_NUM];
   UINT8  lna_mode[FEC_AGC_ANT_NUM];
}FEC_RXCAL_GAIN_CW_DATA_T;

typedef union
{
   FEC_RXCAL_GAIN_CW_DATA_T sc_cw;
   FEC_RXCAL_GAIN_CW_DATA_T gbg_cw[FEC_AGC_CC_NUM];
}FEC_RXCAL_GAIN_CW_U;


/**** For Fec_Rxcal_AGTD_GAINmode_to_DLPWR_AND_GAIN_Type_I ****/
//INPUT
typedef struct
{
   FEC_AGC_ELNA_E elna_mode[FEC_AGC_ANT_NUM];
   BOOL           lpm_flag;
   BOOL           elna_bypass[FEC_AGC_ANT_NUM];
   UINT8          gain_mode[FEC_AGC_ANT_NUM];
}FEC_RXCAL_GAINMODEtoGAIN_INFO_TYPE_I;


//OUTPUT
typedef struct
{
   INT16 used_DL_pwr;
   INT16 rf_gain_dB  [FEC_AGC_ANT_NUM];  //sx.5
   INT16 dig_gain_dB    [FEC_AGC_ANT_NUM];  //sx.5
}FEC_RXCAL_GAINMODEtoGAIN_OUTPUT_TYPE_I;

/**** For Fec_Rxcal_AGTD_GAINmode_to_DLPWR_AND_GAIN_Type_II ****/
//INPUT
typedef struct
{
   FEC_AGC_ELNA_E  elna_mode;
   BOOL            lpm_flag;
   BOOL            elna_bypass[FEC_AGC_PATH_NUM];
   UINT8           gain_mode[FEC_AGC_PATH_NUM];
}FEC_RXCAL_GAINMODEtoGAIN_INFO_TYPE_II;


//OUTPUT
typedef struct
{
   INT16 used_DL_pwr;
   INT16 rf_gain_dB  [FEC_AGC_PATH_NUM];  //sx.5
   INT16 dig_gain_dB [FEC_AGC_PATH_NUM];  //sx.5
}FEC_RXCAL_GAINMODEtoGAIN_OUTPUT_TYPE_II;



/*for auto gain table database*/
//output type I
typedef struct
{
   INT16 max_dl_power;                  //sx.5
   INT16 min_dl_power;                  //sx.5
   INT16 default_dl_power;              //sx.5
   BOOL  elna_bypass    [FEC_AGC_ANT_NUM];  // on:1 ; off:0
   INT16 max_gain_dB    [FEC_AGC_ANT_NUM];  //sx.5
   INT16 min_gain_dB    [FEC_AGC_ANT_NUM];  //sx.5
   INT16 default_gain_dB[FEC_AGC_ANT_NUM];  //sx.5
   UINT8 lna_mode       [FEC_AGC_ANT_NUM];  //G1~G6
   INT16 dig_gain_dB    [FEC_AGC_ANT_NUM];  //sx.5
   UINT8 location_idx   [FEC_AGC_ANT_NUM];
}FEC_RXCAL_CALIB_INFO_TYPE_I;

//output type II
typedef struct
{
   INT16 max_dl_power;               //sx.5
   INT16 min_dl_power;               //sx.5
   INT16 default_dl_power;           //sx.5
   BOOL  elna_bypass      [FEC_AGC_PATH_NUM];// on:1 ; off:0
   INT16 max_gain_dB      [FEC_AGC_PATH_NUM];  //sx.5
   INT16 min_gain_dB      [FEC_AGC_PATH_NUM];  //sx.5
   INT16 default_gain_dB  [FEC_AGC_PATH_NUM];  //sx.5
   UINT8 lna_mode         [FEC_AGC_PATH_NUM];  //G1~G6
   INT16 dig_gain_dB      [FEC_AGC_PATH_NUM];  //sx.5
   UINT8 location_idx     [FEC_AGC_PATH_NUM];
}FEC_RXCAL_CALIB_INFO_TYPE_II_NCCA;


/*output*/
typedef struct
{
   BOOL  elna_bypass  [FEC_AGC_ANT_NUM];  // on:1 ; off:0
   INT16 rf_gain_dB   [FEC_AGC_ANT_NUM];  //sx.5
   UINT8 lna_mode     [FEC_AGC_ANT_NUM];  //G1~G6
   INT16 dig_gain_dB     [FEC_AGC_ANT_NUM];  //sx.5
}FEC_RXCAL_CALIB_INFO_DLGetGain_TYPE_I;

typedef struct
{
   BOOL  elna_bypass [FEC_AGC_PATH_NUM];// on:1 ; off:0
   INT16 rf_gain_dB  [FEC_AGC_PATH_NUM];  //sx.5
   UINT8 lna_mode    [FEC_AGC_PATH_NUM];  //G1~G6
   INT16 dig_gain_dB    [FEC_AGC_PATH_NUM];  //sx.5
}FEC_RXCAL_CALIB_INFO_DLGetGain_TYPE_II_NCCA;

/*normal gain table max gain & min gain*/
typedef struct
{
   INT16 max_dl_pwr     [calib_gain_mode_num_hpm];
   INT16 min_dl_pwr     [calib_gain_mode_num_hpm];
   INT16 max_gain_dB    [calib_gain_mode_num_hpm];
   INT16 min_gain_dB    [calib_gain_mode_num_hpm];
   INT16 DL_to_Gain_factor;
}FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM;

typedef struct
{
   UINT8 seq_idx_to_lna_mode    [FEC_AGC_PATH_NUM][MAX_SEQUENCE_NUM_TYPE_II];
}FEC_RXCAL_NCCA_LNA_MODE_COMBINE_MAPPING;

typedef struct
{
   UINT8 lna_mode_to_lna_group    [FEC_AGC_PATH_NUM][6];
}FEC_RXCAL_NCCA_LNA_GROUP_MAPPING;
#endif

typedef struct
{
   INT16 default_DL_pwr    [20][MAX_SEQUENCE_NUM_TYPE_I];
}FEC_RXCAL_DEFAULT_DL_PWR_SUMMARY_TYPE_I;

typedef struct
{
   INT16 default_DL_pwr    [4][MAX_SEQUENCE_NUM_TYPE_II];
}FEC_RXCAL_DEFAULT_DL_PWR_SUMMARY_TYPE_II;

/************************************************************************************
* Global Variables (Interface)
************************************************************************************/
/*********************************/
/******** FEC CW Table ************/
/*********************************/
/******** RF Gain CW **********/
extern UINT32 Fec_lna_gain_cw[FEC_AGC_LNA_NUM];
extern UINT32 Fec_hpm_pga_gain_cw[FEC_AGC_HPM_PGA_NUM];
extern UINT32 Fec_lpm_pga_gain_cw[FEC_AGC_LPM_PGA_NUM];
extern UINT32 Fec_rf_gain_cw_addr[FEC_AGC_CW_ADDR_NUM];
extern UINT32 Fec_gain_cw_mask;

/******** LPM Setting CW **********/
extern UINT32 Fec_lpm_setting_cw[FEC_AGC_LPM_CW_NUM];
extern UINT32 Fec_lpm_setting_cw_addr[FEC_AGC_CW_ADDR_NUM];

/******** ARX CW **********/
extern UINT32 Fec_arx_cw[FEC_AGC_ARX_CW_NUM];
extern UINT32 Fec_arx_cw_addr[FEC_AGC_CW_ADDR_NUM];

/******** Latch CW **********/
extern UINT32 Fec_latch_cw[FEC_AGC_PATH_NUM];
extern UINT32 Fec_latch_cw_addr;

/******** Delay CW **********/
extern UINT32 Fec_delay_cw[FEC_AGC_PATH_NUM];
extern UINT32 Fec_delay_cw_addr[FEC_AGC_PATH_NUM];

/******** DC CW **********/
extern UINT32 Fec_dc_i_cw[FEC_AGC_DC_CW_NUM];
extern UINT32 Fec_dc_q_cw[FEC_AGC_DC_CW_NUM];
extern UINT32 Fec_dc_fix_cw;
extern UINT32 Fec_dc_cw_addr[FEC_AGC_CW_ADDR_NUM];

/******** high/low freq CW **********/
extern UINT32 Fec_high_low_freq_cw[2];

/******** PGA TIA IF mapping table **********/
extern UINT32 PGA_TIA_IF_H_table[FEC_AGC_PGA_TIA_IF_INDEX_NUM];
extern UINT32 PGA_TIA_IF_L_table[FEC_AGC_PGA_TIA_IF_INDEX_NUM];
extern UINT32 PGA_TIA_IF_H_T1_table[FEC_AGC_PGA_TIA_IF_INDEX_NUM];
extern UINT32 PGA_TIA_IF_BQ_limit_table[FEC_AGC_PGA_TIA_IF_INDEX_NUM];

/******** LNA CW table **********/
extern UINT32 LNA_CW_TABLE_no_eLNA[FEC_AGC_LNA_HW_TABLE_INDEX_NUM];
extern UINT32 LNA_CW_TABLE_eLNA_always_on_WO_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM];
extern UINT32 LNA_CW_TABLE_eLNA_always_on_WI_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM];
extern UINT32 LNA_CW_TABLE_eLNA_bypass_WO_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM];
extern UINT32 LNA_CW_TABLE_eLNA_bypass_WI_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM];

/******** LNA gain table **********/
extern UINT32 LNA_GAIN_TABLE_no_eLNA[FEC_AGC_LNA_HW_TABLE_INDEX_NUM];
extern UINT32 LNA_GAIN_TABLE_eLNA_always_on_WO_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM];
extern UINT32 LNA_GAIN_TABLE_eLNA_always_on_WI_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM];
extern UINT32 LNA_GAIN_TABLE_eLNA_bypass_WO_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM];
extern UINT32 LNA_GAIN_TABLE_eLNA_bypass_WI_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM];


#if !defined(__CORE_USIP1__) || defined(__LTE_L1SIM__)
extern const unsigned int fec_lna_ph_comp_table[FEC_AGC_LNA_NUM];
extern Fec_Gain_Table_T fec_gain_table_cw;
#endif



/************************************************************************************
* Global Functions Prototype (Interface)
************************************************************************************/
#if !defined(__CORE_USIP1__) || defined(__LTE_L1SIM__)
/** Function Prototypes can be used by other files**/
/** for WCDMA meta query RF gain API **/
unsigned int UL1D_RF_CellPowerMaptoRXGainValue(int query_cell/*qdbm*/,unsigned char elna_setting);

/** for WCDMA meta query RF gain CW API **/
#if 1//defined(__L1_EXTERNAL_LNA_SUPPORT__)
void UL1D_RF_GetGainCW(unsigned short int rf_gain_cw[FEC_AGC_ANT_NUM], Fec_Use_Rf_Gain_CW_Input_T* rf_gain_info);
extern void UL1D_RF_FOR_FEC_DEBUG(int label, int first_int,int second_int, int third_int, int first_hex, int second_hex, int third_hex);
#else
/* under construction !*/
#endif

/** for WCDMA PGA_B table update API **/
void PGA_B_update(signed short int *PGA_A, signed short int *PGA_B, signed short int PGA_AB);


/*to be remove*/
void Fec_Rxcal_GetCW(int *CW, int *used, int wanted, unsigned char is_lpm, int *tia_idx, int *if_idx);


/********** MT6293 MM Calibration API ***********/

/***************************************************************************//**
 * @brief        TST get LNA gain mode
 * @details
 * @return      LNA mode
 * @date        -2016/09/29
*******************************************************************************/
void Fec_Rxcal_GetLNAMode(INT16 wanted_rf_gain, BOOL lpm_flag, FEC_ELNA_INFO_T elna_info, UINT8 *return_lna_mode);

/***************************************************************************//**
 * @brief         TST get Used Gain & CW
 * @details
 * @return        - Used Gain, RF Gain CW, LPM CW, ARX CW, LATCH CW, DELAY CW
 * @date          - 2016/09/06
*******************************************************************************/
void Fec_Rxcal_Set_Gain_Into_Range(UINT8 gain_tbl_idx, INT16 *wanted_gain);

UINT8 Fec_Get_Gain_Tbl_Idx(BOOL lpm_flag, FEC_ELNA_INFO_T elna_info);

UINT32 Fec_Set_Gain_Cw_By_Tbl_Idx(UINT8 gain_tbl_idx, UINT16 gain_seq_idx);

void Fec_Rxcal_Get_RF_Gain_CW(BOOL partial_on, FEC_RXCAL_INFO_T *cal_info, FEC_RXCAL_GAIN_CW_U *return_cfg);

UINT8 Fec_Rxcal_AGTD_Type_I(BOOL LPM_flag, FEC_AGC_ELNA_E Elna_mode[FEC_AGC_ANT_NUM], FEC_RXCAL_CALIB_INFO_TYPE_I Calib_info[MAX_SEQUENCE_NUM_TYPE_I]);
UINT8 Fec_Rxcal_AGTD_Type_II_NCCA(BOOL LPM_flag, FEC_AGC_ELNA_E Elna_mode, FEC_RXCAL_CALIB_INFO_TYPE_II_NCCA Calib_info[MAX_SEQUENCE_NUM_TYPE_II]);
UINT8 Fec_Rxcal_AGTD_Type_II_SRX_seq_idx_switch(BOOL LPM_flag, FEC_AGC_ELNA_E Elna_mode, BOOL SRX_switch, UINT8 old_seq_idx);

void Fec_Rxcal_AGTD_DLPWRGetGain_Type_I(INT16 used_DL_PWR, UINT8 seq_num, BOOL LPM_flag, FEC_AGC_ELNA_E Elna_mode[FEC_AGC_ANT_NUM], FEC_RXCAL_CALIB_INFO_DLGetGain_TYPE_I *Calib_info);
void Fec_Rxcal_AGTD_DLPWRGetGain_Type_II_NCCA(INT16 used_DL_PWR, UINT8 seq_num, BOOL LPM_flag, FEC_AGC_ELNA_E Elna_mode, FEC_RXCAL_CALIB_INFO_DLGetGain_TYPE_II_NCCA* Calib_info);

BOOL Fec_Rxcal_AGTD_GAINmode_to_DLPWR_AND_GAIN_Type_I(FEC_RXCAL_GAINMODEtoGAIN_INFO_TYPE_I *Calib_info , FEC_RXCAL_GAINMODEtoGAIN_OUTPUT_TYPE_I *Calib_output);
BOOL Fec_Rxcal_AGTD_GAINmode_to_DLPWR_AND_GAIN_Type_II(FEC_RXCAL_GAINMODEtoGAIN_INFO_TYPE_II *Calib_info , FEC_RXCAL_GAINMODEtoGAIN_OUTPUT_TYPE_II *Calib_output);


void Fec_Rxcal_AGTD_Wanted_Gain_to_Used_And_Idx(INT16 wanted_gain, BOOL LPM_flag, BOOL eLNA_bypass, FEC_AGC_ELNA_E Elna_mode, UINT16* seq_idx, INT16* used_gain);
void Fec_Rxcal_AGTD_Wanted_Gain_to_Used_And_Idx_no_LPM_constrain(INT16 wanted_gain, BOOL LPM_flag, BOOL eLNA_enable, FEC_AGC_ELNA_E Elna_mode, UINT16* seq_idx, INT16* used_gain);
void FEC_Rxcal_AGTD_dig_gain_dB_to_man_exp_for_calib_use(INT16 dig_gain_dB, INT16* dig_gain_exp, INT16* dig_gain_man); // no use in normal mode

extern void EL1D_RXAGC_DBG_TRACE3(UINT32 a, UINT32 b, UINT32 c);
extern void EL1D_RXAGC_DBG_TRACE7(UINT32 a, UINT32 b, UINT32 c, UINT32 d, UINT32 e, UINT32 f, UINT32 g);
extern void EL1D_RXAGC_DBG_TRACE8(UINT32 a, UINT32 b, UINT32 c, UINT32 d, UINT32 e, UINT32 f, UINT32 g, UINT32 h);

#endif

#endif
