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


 /*******************************************************************************
 * Filename:
 * ---------
 *   l1_types_public.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Layer1 global types
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
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
 *
 *
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
 *******************************************************************************/

#ifndef l1_types_public_h
#define l1_types_public_h

#include "l1_option.h"
#include "l1_public_defs.h"
#include "mph_types.h"
#include "kal_general_types.h"

#include "l1_gemini_def.h"

typedef kal_int8   int8;
typedef kal_int16  int16;
typedef kal_int32  int32;
typedef kal_int64  int64;
typedef kal_int32  intx;
typedef kal_uint8  uint8;
typedef kal_uint16 uint16;
typedef kal_uint32 uint32;
typedef kal_uint32 uintx;
typedef kal_bool   bool;

#define false KAL_FALSE
#define true  KAL_TRUE


/* --- GSM primitive types ------------------------------------------------- */

typedef int16  Gain; /* in 0.125 dB *//* !!important: please update the copy in m12194.c */
typedef uint32 TimeStamp; /* redefine in l1-CORE_PRIVATE.H */

/*
@enum ReportType_FT | Type of a report for factory testing.
*/
typedef enum
{
   ReportFTNone,             /* @emem No valid report. */
   ReportFTReportPeriodDone, /* @emem End of report period. */
   ReportFTPowerScanDone,    /* @emem Power scan results. */
   ReportFTFCCh,             /* @emem FCCh result. */
#if MD_DRV_IS_FHC_SUPPORT
   ReportFTDTS,
   ReportFTUTS,
#endif
#if MD_DRV_IS_NSFT_SUPPORT
   ReportFTNSFT,
#endif
   ReportFTEnd               /* @emem No valid report. Marks end of <t ReportType> enumeration */
} ReportType_FT;

/* For Gemini*/
typedef enum
{
    L1C_SIM1    = 0x00
#if defined(__GL1_GEMINI__)
    ,L1C_SIM2    = 0x01
#endif    
#if (GL1_GEMINI_NUM >= 3)
    ,L1C_SIM3    = 0x02
#endif    
#if (GL1_GEMINI_NUM >= 4)
    ,L1C_SIM4    = 0x03
#endif
    ,L1C_SIM_NUM
} l1c_sim_mode_enum;


/* Create a general enum for LWG or LTG to represent the number of MM SIMs.
Currently only WCDMA may have SIMx service */
typedef enum
{
#ifdef __GL1_MULTI_MODE__
    L1C_MM_SIM1    = 0x00,
#if defined(__GL1_GEMINI_WCDMA__)
    L1C_MM_SIM2    = 0x01,
#endif    
#if (GL1_GEMINI_WCDMA_NUM >= 3)
    L1C_MM_SIM3    = 0x02,
#endif    
#if (GL1_GEMINI_WCDMA_NUM >= 4)
    L1C_MM_SIM4    = 0x03,
#endif
#endif /* __GL1_MULTI_MODE__ */
    L1C_MM_SIM_NUM
} l1c_mm_sim_mode_enum;
/*
@struct Time | GSM time.
*/
typedef struct
{
   FrameNumber frame; /* @field Frame number */
   intx        ebits; /* @field Eighth bits */
} Time;

typedef struct MeasurementsStruct Measurements;
struct MeasurementsStruct
{
/* --- must be initialised by called of L1I_StartMeasurements() --- */

   /* not changed by measurement manager */

   ARFCN       ( *get )( Measurements* meas, int index );
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
   void        ( *put )( Measurements* meas, int index, Power power, Power power_drx );
#else
   void        ( *put )( Measurements* meas, int index, Power power);
#endif
   void        ( *done )( Measurements* meas, intx measurementsDone );

   intx           indexCount;
   intx           measurementCount; /* number of measurements to be performed */

/* --- private data of measurement manager --- */

   intx           started;      /* total number of measurements started */
   intx           finished;     /* total number of measurements completed */
   intx           sessionLimit; /* total number of measurments to be done before session ends */
   intx           startIndex;
   intx           resultIndex;
   uint8          runIndex;   /* record the index of session run*/
   bool           is_stopped;
#if defined(__GL1_GEMINI__)
   l1c_sim_mode_enum  sim_mode;
#endif
};

#define GSM_ANT_RXM_IDX 0
#define GSM_ANT_RXD_IDX 1
//typedef enum 
//{
//  GSM_ANT_RXM_IDX = 0,
//  GSM_ANT_RXD_IDX = 1,
//  GSM_ANT_BOTH = 2
//} GSM_AntDimension;

typedef enum 
{
  GSM_ANT_MASK_NULL = 0x0,
  GSM_ANT_MASK_RXM  = 0x1,
  GSM_ANT_MASK_RXD  = 0x2,
  GSM_ANT_MASK_BOTH = 0x3
} GSM_AntDimension;  // L1D_RX_PATH_MASK_E



#define GSM_RF_MAX_RX_ANT_NUM 2
#define GSM_RF_MAX_RX_GAIN_NUM_V5  6

#if MD_DRV_IS_FHC_SUPPORT

#define L1_MAX_DTS_STEP_CNT  512
#define L1_MAX_UTS_STEP_CNT  512

#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
typedef struct
{
    int32         power[GSM_RF_MAX_RX_ANT_NUM][L1_MAX_DTS_STEP_CNT-2];
    int16         valid_sample[GSM_RF_MAX_RX_ANT_NUM][L1_MAX_DTS_STEP_CNT-2];
    bool          ok;
} ResultDSSPL;  //RfTestResultDSSPL_512P_V5
#else
typedef struct
{
    int32         power[L1_MAX_DTS_STEP_CNT-2];
    int16         valid_sample[L1_MAX_DTS_STEP_CNT-2];
    bool          ok;
} ResultDSSPL;
#endif

typedef struct
{
    int32         freq_offset[33];  // only valid when 33 stage calibration is True
    int32         deviation[33];    // only valid when 33 stage calibration is True
    int16         fcb_ok_number[33];
    int32         capid;            // only valid when capid calibration is True
    int16         init_dac_value;   // only valid when 33 stage calibration is False
    int32         slope;            // only valid when 33 stage calibration is False
    bool          ok;
} ResultDSSAfc;

typedef struct
{
    int32         cload_freq_offset;
    bool          ok;
    bool          is_perform_cal;
} ResultDSSLPM;

typedef struct
{
    ResultDSSPL   PLResult;
    ResultDSSAfc  AfcResult;
    ResultDSSLPM  LPMResult;
//  bool          ok;
} ResultDTS;
#endif


typedef enum
{
   AdditionalSB,
   PeekSB,
   ThermalSB
} SBType;  //The same with L1I_Str_ServingSB


/*
@struct SChData | Report data for sync burst reporting.
*/
typedef struct
{
   ARFCN     arfcn;
   bool      ok;            /* @field Sync burst status. Set by the baseband driver.
                               @flag false | Burst was bad. Other fields in this structure are invalid.
                               @flag true | Burst was OK. Other fields in this structure are valid. */
   bool      fcb_ok;
   intx      frameDelay;    /* @field Frame where sync burst has been received relative to the frame where <f L1T_FCChStart> was called. . Set by the baseband driver. */
   intx      ebitDelay;     /* @field Position of sync burst relative to current frame start in eighth bits. Set by the baseband driver. */
   BlockData data[ 4 ];     /* @field Sync burst data. Set by the baseband driver. */

   Time      bsTimingOffset; /* @field Timing offset of the base station relative to the mobiles current
                                       synchronisation. Calculated by layer1 */
   FrameNumber bsFrame;      /* @field Frame number decoded from the sync burst. Calculated by layer1. */
   BSIC      bsic;           /* @field BSIC number decoded from the sync burst. Calculated by layer1. */
   Time      rxTime;         /* @field Time the sync burst has been received. Calculated by layer1. */

   bool      hardwareUnavailable; /* special flag returned by SChT only if SCh was aborted because hardware
                                     was occupied by higher priority operation */
   bool      extBsic;        /* @field A flag to indicate if Extended measurement BSIC */
   bool      manual;         /* @distinguish manual or surrounding */
   bool      enhancePM;      /* default value is false*/
                             /* Set true for usage enhanced power measurement to update AGC ahead of FB/SB search in blind handover*/

/* Tier-1 Modem */  int16     snr;
/* Tier-1 Modem */  intx      bitErrorCount;
#if IS_SB_ENHANCE_TRACE_SUPPORT
   uint8     wb_filter;
   uint8     saic;
   int16     wsnr;
   int16     pre_snr;
#endif
  uint8 bsic_tid; /* for distinguish from different transaction  */

#ifdef __UMTS_RAT__
   bool      ready_to_report;   /* True if L1C is ready to report SCh result to L1A, false otherwise. */
   TimeStamp timeStamp; 
#endif
#ifdef __GL1_MULTI_MODE__
   uint8 fbWinOffDelay;  /* FB win will be closed after "fbWinOffDelay" CT1 when L1C gets FCCh report. */
#endif 
} SChData;

#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
typedef struct
{
   int32              power[GSM_RF_MAX_RX_ANT_NUM];
   int32              iOffset[GSM_RF_MAX_RX_ANT_NUM];
   int32              qOffset[GSM_RF_MAX_RX_ANT_NUM];
   int32              deviation[GSM_RF_MAX_RX_ANT_NUM];
   int32              validSamples[GSM_RF_MAX_RX_ANT_NUM];
   Gain               usedGain[GSM_RF_MAX_RX_ANT_NUM];  //For RF Tool PM & Rx AT CMD set gain
   Measurements       meas;
} PM_TST_Data;
#else
typedef struct
{
   int32              power;
   int32              iOffset;
   int32              qOffset;
   int32              deviation;
   int32              validSamples;
   Gain               usedGain;
   Measurements       meas;
} PM_TST_Data;
#endif

/*
@union ReportData | Contains report information for factory testing
*/
typedef union
{
   SChData                *sch;          /* @field Results of FCB and SB search */
   PM_TST_Data            *pm_tst;       /* @field power meas results in test mode */
#if MD_DRV_IS_FHC_SUPPORT
   ResultDTS              *dts_result;
#endif
} ReportData_FT;

/*
@struct Report | Results of operations for factory testing.
*/
typedef struct
{
   ReportType_FT  type; /* @field Type of report */
   ReportData_FT  data; /* @field Contains information dependent on the <e Report.type> field */
} Report_FT;

/*
@struct sBBTXCfg | used to set/get run-time BBTX param
*/
typedef struct
{
   int8   TxTrimI;
   int8   TxTrimQ;
   int8   TxOffsetI;
   int8   TxOffsetQ;
   int8   TxCalbias;
   int8   TxIQSwap;
   int8   TxCMV;
   int8   TxGain;
   int8   TxCalrcsel;
   int8   TxPhasesel;
   int8   TxDccoarseI;
   int8   TxDccoarseQ;
} sBBTXCfg;

typedef enum
{
   GL1_ANT_STATE_0,
   GL1_ANT_STATE_1,
   GL1_ANT_STATE_2,
   GL1_ANT_STATE_3,
   GL1_ANT_STATE_NUM
} AntennaStatus;

typedef struct
{
   AntennaStatus        status;
   uint8                rxd_mode;  //only valid when RXD is enabled
} TransmitAntenna;

#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
typedef enum UTAS_STATE
{
   GL1_UTAS_NULL,
   GL1_UTAS_STX_SO_1,
   GL1_UTAS_STX_SO_2,
   GL1_UTAS_BTX_PERIOD_SO,
   GL1_UTAS_BTX_SO_1,
   GL1_UTAS_BTX_SO_2,
   GL1_UTAS_BRX_PERIOD_SO,
   GL1_UTAS_BRX_SO_1,
   GL1_UTAS_BRX_SO_2,
} GL1_UTAS_STATE;

typedef enum
{
   GL1_PHY_ANT_STATE_0,
   GL1_PHY_ANT_STATE_1,
   GL1_PHY_ANT_STATE_2,
   GL1_PHY_ANT_STATE_NUM
} GL1_PHY_AntennaStatus;
#endif 

typedef enum
{
   L1D_TAS_VER_1_0 = 0,
   L1D_TAS_VER_2_0 = 1,
   L1D_MAX_TAS_VER_NUM,
} L1D_CUSTOM_TAS_VER_E;

typedef enum
{
   L1D_TAS_DISABLE,
   L1D_TAS_ENABLE,
}L1D_CUSTOM_TAS_SWITCH_E;

typedef enum
{
   L1D_TAS_STATE0,
   L1D_TAS_STATE1,
   L1D_TAS_STATE2,
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
   L1D_TAS_STATE3,
#endif /* (__2G_RX_DIVERSITY_PATH_SUPPORT__) */
   //L1D_TAS_STATE4,
   //L1D_TAS_STATE5,
   //L1D_TAS_STATE6,
   //L1D_TAS_STATE7,
   L1D_TAS_STATE_NUM,   
   L1D_TAS_STATE_NULL,
}L1D_CUSTOM_TAS_STATE_E;

typedef enum
{
   L1D_NUM_TAS_STATES_NA  = 0,
   L1D_NUM_TAS_STATES_1   = 1,
   L1D_NUM_TAS_STATES_2   = 2,
   L1D_NUM_TAS_STATES_3   = 3,
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
   L1D_NUM_TAS_STATES_4   = 4,
#endif
   L1D_NUM_TAS_STATES_MAX,
}L1D_CUSTOM_TAS_NUM_STATES_E;

#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
typedef struct
{
   /* STx SB Threshhold*/
   kal_int16     RXD_STX_SB_PCL_CB_PRE_SWT_THD;
   kal_int16     RXD_STX_SB_HR_CB_PRE_SWT_THD;
   /*BTx and BRx threshhold*/
   kal_int32     RXD_BTX_EVENT_SO_N_CB;
   kal_int16     RXD_BTX_EVENT_SO_HR_ABS_THD;
   kal_int16     RXD_BTX_EVENT_SO_RXLEV_CB_THD;
   kal_int32     RXD_BRX_EVENT_SO_N_CB;
   kal_int16     RXD_BRX_EVENT_SO_LOW_QUAL_THD;
   kal_int16     RXD_BRX_EVENT_SO_RXLEV_CB_THD;
   kal_uint16    RXD_BRX_EVENT_SO_SNR_THD;
   /*BTx and BRx Threshhold*/
   kal_int16     RXD_BTX_SB_HR_ABS_THD;
   kal_int16     RXD_BTX_SB_PCL_CB_PRE_SWT_THD;
   kal_int16     RXD_BTX_SB_HR_CB_PRE_SWT_THD;
   kal_int16     RXD_BRX_SB_RXLEV_CB_PRE_SWT_THD;
   kal_uint8     RXD_BTX_S_SNR_BLOCK;
   kal_uint8     RXD_BRX_S_SNR_BLOCK;
   /* STx SO Threshhold*/
   kal_int32      RXD_STX_SO_PHR_ABS_THD;
   kal_int32      RXD_STX_SO_PPCL_GAIN_THD;
   kal_int32      RXD_STX_SO_PHR_GAIN_THD;
}L1D_CUSTOM_RXD_THRESHOLD_T;
#endif  /* __2G_RX_DIVERSITY_PATH_SUPPORT__ */  


typedef struct
{
   L1D_CUSTOM_TAS_VER_E L1_TAS_VERSION;                                                /* TAS1.0 or TAS2.0                               */
   L1D_CUSTOM_TAS_SWITCH_E L1_TAS_FORCE_ENABLE;                                        /* 0: off 1: Don't change antenna                 */
   L1D_CUSTOM_TAS_STATE_E L1_TAS_FORCE_INIT_SETTING;                                   /* The antenna which user forces to stay          */
   L1D_CUSTOM_TAS_SWITCH_E L1_TAS_ENABLE_ON_REAL_SIM;                                  /* 0: off   1: enable TS feature                  */
   L1D_CUSTOM_TAS_SWITCH_E L1_TAS_ENABLE_ON_TEST_SIM;                                  /* 0: off   1: enable TS feature                  */
   L1D_CUSTOM_TAS_NUM_STATES_E L1_TAS_STATE_NUM             [FrequencyBandCount];      /* total antenna number for each band             */
   L1D_CUSTOM_TAS_SWITCH_E L1_TAS_REAL_SIM_TAS_ENABLE       [FrequencyBandCount];
   L1D_CUSTOM_TAS_STATE_E L1_TAS_REAL_SIM_INIT_SETTING      [FrequencyBandCount];       /* Default antenna                               */
   L1D_CUSTOM_TAS_SWITCH_E L1_TAS_TEST_SIM_TAS_ENABLE       [FrequencyBandCount];
   L1D_CUSTOM_TAS_STATE_E L1_TAS_TEST_SIM_INIT_SETTING      [FrequencyBandCount];        /* Default antenna                               */
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
   L1D_CUSTOM_RXD_THRESHOLD_T L1_RXD_THD_VALUES;
#endif  /* __2G_RX_DIVERSITY_PATH_SUPPORT__ */  
   }TASPublicParams;

typedef struct
{
   kal_int16     TH_RXLEV;               /* Enable TAS if RXLEV < TH_RXLEV                                */
   kal_int16     TH_RXLEV_PS;            /* Enable TAS if RXLEV < TH_RXLEV_PS in PTM                */
   kal_int16     S_RXLEV;                  /* Hysteresis for RXLEV comparison between 2 antennas(dB)     */
   kal_int32     FORCE_CHANGE_IDLE;       /* Maximal period that adopted antenna remains unchanged at idle mode     */
   kal_int32     FORCE_CHANGE_DEDICATED;   /* Maximal period that adopted antenna remains unchanged at dedicated mod  */
   kal_int32     PERIOD_IDLE;              /* Checking period of TAS criterion at idle mode                     */  
   kal_int32     PERIOD_DEDICATED;         /* Checking period of TAS criterion at dedicated mode; unit: 208 frames     */
   kal_uint16    TH_SNR;                  /* SNR threshold, used in criterion 1                                                  */
   kal_uint8     TH_PCL[FrequencyBandCount]; /* PCL threshold, used in criterion 1 in connected mode                             */
   kal_uint8     S_SNR_BLOCK;             /* Hysteresis for block-average SNR comparison between 2 antennas, need to divide by 8 */
   kal_uint8     S_SNR_SMOOTH;            /* Hysteresis for smoothing SNR comparison between 2 antennas, need to divide by 8     */
   kal_bool      FORCE_POWER_SCAN_ANT;    /* 0: off    1: Force antenna utilizing in power scan state */
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)  
   /*BTx DB parameters*/
   kal_int16     RXD_BTX_PERIOD_SO_RXLEV_THD;
   kal_int32     RXD_BTX_PERIOD_SO_t_BTX_D;
   kal_int32     RXD_BTX_PERIOD_SO_t_BTX_I;
   kal_int16     RXD_BTX_PERIOD_SO_t_BTX_STEP_D;
   kal_int16     RXD_BTX_PERIOD_SO_t_BTX_STEP_I;
   kal_int32     RXD_BTX_PERIOD_SO_t_BTX_BOUND_D;
   kal_int32     RXD_BTX_PERIOD_SO_t_BTX_BOUND_I;
   kal_int32     RXD_BTX_HR_DB_L_BOUND;
   kal_int32     RXD_BTX_HR_DB_U_BOUND;
   kal_int32     RXD_BTX_HR_DB_FAIL_STEP;
   kal_int32     RXD_BTX_HR_DB_TO_STEP;
   kal_int32     RXD_BTX_HR_DB_T_RELAX_D;
   kal_int32     RXD_BTX_HR_DB_T_RELAX_I;
   kal_int16     RXD_BTX_RXLEV_DB_L_BOUND;
   kal_int16     RXD_BTX_RXLEV_DB_U_BOUND;
   kal_int16     RXD_BTX_RXLEV_DB_FAIL_STEP;
   kal_int16     RXD_BTX_RXLEV_DB_TO_STEP;
   kal_int32     RXD_BTX_RXLEV_DB_T_RELAX_D;
   kal_int32     RXD_BTX_RXLEV_DB_T_RELAX_I;
   /*BRx DB Parameters*/
   kal_int16     RXD_BRX_PERIOD_SO_RXLEV_THD;
   kal_int32     RXD_BRX_PERIOD_SO_t_BRX_D;
   kal_int32     RXD_BRX_PERIOD_SO_t_BRX_I;
   kal_int16     RXD_BRX_PERIOD_SO_t_BRX_STEP_D;
   kal_int16     RXD_BRX_PERIOD_SO_t_BRX_STEP_I;
   kal_int32     RXD_BRX_PERIOD_SO_t_BRX_BOUND_D;
   kal_int32     RXD_BRX_PERIOD_SO_t_BRX_BOUND_I;
   kal_int16     RXD_BRX_RXLEV_DB_L_BOUND;
   kal_int16     RXD_BRX_RXLEV_DB_U_BOUND;
   kal_int16     RXD_BRX_RXLEV_DB_FAIL_STEP;
   kal_int16     RXD_BRX_RXLEV_DB_TO_STEP;
   kal_int32     RXD_BRX_RXLEV_DB_T_RELAX;
   /*STx PPCL DB Parameters*/
   kal_int16     RXD_STX_PPCL_DB_L_BOUND;
   kal_int16     RXD_STX_PPCL_DB_U_BOUND;
   kal_int16     RXD_STX_PPCL_DB_FAIL_STEP;
   kal_int16     RXD_STX_PPCL_DB_TO_STEP;
   kal_int32     RXD_STX_PPCL_DB_T_RELAX_D;
   kal_int32     RXD_STX_PPCL_DB_T_RELAX_I;
#endif /* __2G_RX_DIVERSITY_PATH_SUPPORT__ */
} TASPrivateParams;

typedef struct
{
   kal_uint8 TAS_INIT_ANT_IDX[FrequencyBandCount];  
} TASInitANTParams;

//#if IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_SUPPORT

#if defined(__IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_ENHANCEMENT_SUPPORT__)
#define ARFCN_SIZE 120
#else
#define ARFCN_SIZE 24
#endif

typedef struct
{
   ARFCN GROUP_A_ARFCNs[ARFCN_SIZE];
   ARFCN GROUP_B_ARFCNs[ARFCN_SIZE];
}DisplayMIPIClockParams;
//#endif

typedef TASPublicParams    L1D_CUSTOM_TAS_NVRAM_T ;
typedef TASPublicParams    sL1_TAS_CUSTOM_PARAMS;
typedef TASPrivateParams   sL1_TAS_LIB_PARAMS ;

//#if IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_SUPPORT
typedef DisplayMIPIClockParams   L1D_CUSTOM_DISPLAY_MIPI_CLK_NVRAM_T ;
//#endif

typedef enum
{
   L1D_DAT_STATE_NULL = -1,
   L1D_DAT_STATE0,
   L1D_DAT_STATE1,
   L1D_DAT_STATE2,
   L1D_DAT_STATE3,
   L1D_DAT_STATE4,
   L1D_DAT_STATE5,
   L1D_DAT_STATE6,
   L1D_DAT_STATE7,
   L1D_DAT_STATE_NUM,   
}L1D_CUSTOM_DAT_STATE_E;

//NVRAM related feature (custom file)do not follow defined(__2G_RX_DIVERSITY_PATH_SUPPORT__) to prevent structure change
//#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
typedef enum
{
   RXD_MODE_CROSS_MASK           =0x10,                                                //(CROSS Mask bit for cross mode)
   RXD_MODE_OBB_MASK             =0x20,


   /*Following 3 enum can be apply to BFE setting and SW control*/
   RXD_MODE_LEGACY               =0x0,                                                 //(LEGACY/SA         :RX and TX are at primary, only can apply when RxD disable and FB/SB/PKT)
   RXD_MODE_OBB                  =(RXD_MODE_OBB_MASK|RXD_MODE_LEGACY),                 //(LEGACY/SA         :RX and TX are at primary, only can apply when RxD disable and FB/SB/PKT)
   RXD_MODE_DISABLE              =RXD_MODE_OBB,                 //(LEGACY/SA         :RX and TX are at primary, only can apply when RxD disable and FB/SB/PKT)

   RXD_MODE_1RX_DESENSE          =0x1,                                                 //(1RX_DESENSE       :Two RF path ON for AGC power but only PRX is uesd in data)   
   RXD_MODE_RXD                  =0x3,                                                 //(RXD               :Two RF path ON, P-ANT to BFE PRX and D-ANT to BFE DRX )   
   /*Below enum only apply for SW only , for cross case */
   RXD_MODE_1RX_DESENSE_CROSS    =(RXD_MODE_CROSS_MASK|RXD_MODE_1RX_DESENSE),          //(1RX_DESENSE CROSS :Two RF path ON for AGC power but only DRX is uesd in data)   
   RXD_MODE_RXD_CROSS            =(RXD_MODE_CROSS_MASK|RXD_MODE_RXD),                  //(RXD CROSS         :Two RF path ON , D-ANT to BFE PRX and P-ANT to BFE DRX )

   /*Below enum only apply for SW only, GL1C free runing  */
   RXD_MODE_RAS                  =0x5,                                                 //(RAS               :MODE CHANGE BY GL1C NOTE:This enum only used by GL1C )
}L1D_RXD_MODE; 


#define CHECK_RXD_MODE_CROSS_MASK(v)      (((v)&(RXD_MODE_CROSS_MASK))==RXD_MODE_CROSS_MASK)
#define EXCLUDE_RXD_MODE_CROSS_MASK(v)    ((~RXD_MODE_CROSS_MASK)&(v))
#define CHECK_RXD_MODE_OBB_MASK(v)        (((v)&(RXD_MODE_OBB_MASK))==RXD_MODE_OBB_MASK)
#define EXCLUDE_RXD_MODE_OBB_MASK(v)      ((~RXD_MODE_OBB_MASK)&(v))
#define EXCLUDE_RXD_MODE_ALL_MASK(v)      ((~(RXD_MODE_OBB_MASK|RXD_MODE_CROSS_MASK))&(v))


typedef enum
{  
   L1D_RAS_MODE                 =RXD_MODE_RAS,                 //(RAS:MODE CHANGE BY GL1C) NOTE:This enum only used by GL1C (excluding AGC)

   /*Below enum only apply for custom force mode*/
   L1D_FORCE_RXD_MODE           =RXD_MODE_RXD,                 //(RXD               :Two RF path ON)
   L1D_FORCE_P_PATH_ONLY        =RXD_MODE_1RX_DESENSE,         //(1RX_DESENSE       :Two RF path ON for AGC power but only PRX is uesd in data)
   L1D_FORCE_D_PATH_ONLY        =RXD_MODE_1RX_DESENSE_CROSS,   //(1RX_DESENSE Cross :RX is at diversity, TX is at primary) NOTE:This enum only used in RF, BPI and MIPI.(excluding AGC)
}L1D_CUSTOM_RXD_MODE; 


#define L1D_RXD_MODE_LEGACY_CROSS   (RXD_MODE_LEGACY|RXD_MODE_CROSS_MASK)
#define L1D_RXD_MODE_FSI            (RXD_MODE_LEGACY)
#define L1D_RXD_MODE_FSI_CROSS      (L1D_RXD_MODE_LEGACY_CROSS)
#define L1D_RXD_MODE_PM             (RXD_MODE_RXD)      //test for ARX please use RXD_MODE_LEGACY
#define L1D_RXD_MODE_RX_NOT_GSM     (RXD_MODE_LEGACY)  //RXD_MODE_RXD only in single slot
#define L1D_RXD_MODE_PKT            (RXD_MODE_LEGACY)  //RXD_MODE_RXD only in single slot
#define L1D_RXD_MODE_PKT_CROSS      (L1D_RXD_MODE_LEGACY_CROSS)

#define L1D_RXD_RFIC_GGE_PATH       KAL_TRUE
#define L1D_RXD_RFIC_LTE_PATH       KAL_FALSE


typedef enum
{
   L1D_RX_PATH_OFF,
   L1D_RX_PATH_ON,
}L1D_RX_PATH_ENABLE_E;

typedef enum
{
   L1D_RXD_DISABLE,
   L1D_RXD_ENABLE,
}L1D_RXD_EN;

typedef enum
{
   L1D_RX_PRX,
   L1D_RX_DRX,
   L1D_RX_NUM,
}L1D_RX_PATH_E;

typedef enum
{
   L1D_RX_PATH_MASK_NULL = 0x0,
   L1D_RX_PATH_MASK_PRX  = 0x1,
   L1D_RX_PATH_MASK_DRX  = 0x2,
}L1D_RX_PATH_MASK_E;

typedef struct
{
   unsigned int PRX;
   unsigned int DRX;
} L1D_RX_PATH;

typedef struct
{
   Power     PRX;   /* in 0.125 dBm */
   Power     DRX;   /* in 0.125 dBm */
} L1D_RX_POWER;

typedef struct
{
   Gain      PRX;   /* in 0.125 dB *//* !!important: please update the copy in m12194.c */
   Gain      DRX;   /* in 0.125 dB *//* !!important: please update the copy in m12194.c */
} L1D_RX_GAIN;

typedef struct
{
   uint32    PRX;   /* Code Word for RF*/
   uint32    DRX;   /* Code Word for RF*/
} L1D_RX_SETTING;

typedef struct
{
   int     PRX;
   int     DRX;
} L1D_RX_ELNA_TYPE;

typedef struct
{
   Gain     PRX;
   Gain     DRX;
} L1D_RX_PATHLOSS;

typedef struct
{
   short     PRX;
   short     DRX;
} L1D_RX_RANGE_ERROR;

typedef enum
{
   BFE_RXSWAP_PARALLEL,
   BFE_RXSWAP_CROSS,
} L1D_BFE_MUX_SETTING;

typedef struct
{
   L1D_RXD_EN              RXD_ENABLE[FrequencyBandCount];   /* RxD enable flag by band */
   L1D_CUSTOM_RXD_MODE     RXD_MODE;                         /* RxD mode, by RAS or forced mode */
   kal_int32               C1_P_THD_HIGH_RXLEV;              
   kal_int16               C1_THD_HIGH_RXLEV;                /* C1 threshold for 1 Rx de-sense detection; if rxlev < C1, go to sub-rxd */   
   kal_int16               C1_THD_LOW_RXLEV;                 /* C1 threshold for 1 Rx de-sense detection; if rxlev < C1, go to sub-rxd */
   kal_int16               C1_P_D_THD_RXLEV_DIFF;
   kal_int16               C2_THD_RXLEV;                     /* C2 rxlev threshold */
   kal_uint16              C2_THD_TSCSNR;                    /* C2 tscsnr threshold */
   kal_uint32              C2_THD_PRESNR;                    /* C2 presnr threshold; if all C2 criterion are met, go to single antenna  */
   kal_uint16              C3_THD_OBB_DEDICATED;             /* C3 OBB detection threshold; if accumulate OBB detected during one period, go to sub-rxd */
   kal_uint16              C3_THD_OBB_IDLE;                  /* C3 OBB detection threshold; if accumulate OBB detected during one period, go to sub-rxd */   
   kal_int16               RXD_THD_RXLEV_DIFF;                 /* */
   kal_int32               PERIOD_IDLE;                      /* RAS check period in idle mode (frame) */  
   kal_int32               PERIOD_DEDICATED;                 /* RAS check period in dedi mode (frame)*/
   kal_int32               OBB_PERIOD_DEDICATED;             /* RAS check period in dedi mode (frame)*/
} RASPublicParams;


typedef RASPublicParams    L1D_CUSTOM_RAS_NVRAM_T ;

//#endif /* #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__) */

typedef enum
{
   CONT_TX_ALL_ZEROS
  ,CONT_TX_ALL_ONES
  ,CONT_TX_ALTERNATE_BITS
  ,CONT_TX_PSEUDO_RANDOM
  ,CONT_TX_PATTERN_WITHOUT_TSC
} ContTxPattern;

typedef enum
{
   AB_TX_RANDOM_WITH_SYNC_SEQ
  ,NB_TX_ALL_ZEROS_WITHOUT_TSC
  ,NB_TX_ALL_ONES_WITHOUT_TSC
  ,NB_TX_ALTER_BITS_WITHOUT_TSC
  ,NB_TX_RANDOM_WITH_TSC
  ,NB_TX_PATTERN_WITHOUT_TSC
  ,NB_TX_FIXED_RANDOM_WITH_TSC
  ,NB_TX_FIXED_ALL_ZEROS_WITH_TSC
  ,NB_TX_FIXED_ALTER_BITS_WITH_TSC
  ,NB_TX_FIXED_ALL_ONES_WITH_TSC
  ,NB_TX_FIXED_OE_PATTERN_WITH_TSC
} APCTxPattern;



#endif
