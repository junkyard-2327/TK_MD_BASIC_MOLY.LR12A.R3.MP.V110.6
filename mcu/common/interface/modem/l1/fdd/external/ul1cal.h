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
 *   ul1cal.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   The structure definition of UL1 calibration data
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------ 
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef UL1CAL_H
#define UL1CAL_H

/*===============================================================================*/

#include "kal_general_types.h"
#include "ul1d_rf_public.h"
#include "dcl.h"        //SmartPhone Project's CommonModemImage need this
#include "ul1d_rf_cid.h"
#include "ul1d_rf_cal_poc_data.h"
#include "ul1d_mipi_public.h"
/*===============================================================================*/

/* ------------------------------------------------------------------------- */
typedef struct
{
   kal_uint16 tempdacData[8];
}ul1cal_tempdacData_T; 

typedef struct
{
   U_sTEMPAGCOFFSET  pathlossData; 
}ul1cal_pathlossData_T;

typedef struct
{
   U_sRAMPDATA txdacData; 
}ul1cal_txdacData_T;

/* PA 8-level control (MT6276, MT6573) */
typedef struct
{
   U_sPAOCTLVLSETTING txPaOctLevData; 
}ul1cal_txPaOctLevData_T;

typedef struct
{
   U_sPARACHTMCOMPDATA txPrachTmCompData;
}ul1cal_txPrachTmCompData_T;

typedef struct
{
   U_sAFCDACDATA afcDacData;
}ul1cal_afcDacData_T;

typedef struct
{
   U_sAFCCAPDATA afcCapData;
}ul1cal_afcCapData_T;

#if defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__) 

typedef struct
{
   U_sUl1dRfCustomInputData umtsRfCustomInput;
}ul1cal_umtsRfCustomInput_T;

#endif

typedef struct
{
   U_sTEMPAGCOFFSET  pathlossData; 
}ul1cal_pathlossRxdData_T;

typedef struct
{
   U_sPADRIFTSETTING txPaDriftCompData; 
}ul1cal_txPaDriftCompData_T;

#if (IS_3G_TX_POWER_OFFSET_SUPPORT || IS_3G_SAR_TX_POWER_BACKOFF_SUPPORT)
typedef struct
{
   U_sTXPOWEROFFSETDATA txPowerOffsetData;
}ul1cal_txPowerOffsetData_T;

typedef struct
{
   const U_sTXPOWEROFFSETDATA* const* TpoData_p;
}Ul1CustomDynamicTpoData;

#endif

#if (IS_3G_RX_POWER_OFFSET_SUPPORT )
typedef struct
{
   U_sUl1dMetaRxPowerOffsetSetting RpoSetting;
   const U_sRXPOWEROFFSETDATA* const* RpoData_p;
}Ul1CustomDynamicRpoData;
#endif
#if (IS_3G_VPA_SEL_BY_BAND_SUPPORT)
typedef struct
{
   const UMTS_VPA_SOURCE_TYPE* const* vpaSrcSelTable_p;
}Ul1CustomDynamicVpaSrcSelData;
#endif/*IS_3G_VPA_SEL_BY_BAND_SUPPORT*/

/*------------- Single Software Load for Multiple Components Compatible -------------*/
/*****************************************************************************
* Constant    : UL1CUSTOM_MAX_RF_BPI_EVENT_NUM
* Group       : Real target, Internal, UL1D common operation
* Description : Constant to be used for record the maximum 3G BPI event
*               support numbers currently in use
*****************************************************************************/
#define UL1CUSTOM_MAX_RF_BPI_EVENT_NUM  (15)          //MT6280 Changes to 15

/*****************************************************************************
* Constant    : UL1CUSTOM_MAX_RF_SUPPORT_BAND_NUM
* Group       : Real target, Internal, UL1D common operation
* Description : Constant to be used for record the maximum 3G RF band
*               support numbers currently in use
*****************************************************************************/
#define UL1CUSTOM_MAX_RF_SUPPORT_BAND_NUM  (MAX_SUPPORTED_BAND_INDEX)          //MT6280 Changes to 5

/*****************************************************************************
* Constant    : UL1CUSTOM_NULL_ACTION
*               UL1CUSTOM_GPIO_DETECTION_ID
*               UL1CUSTOM_ADC_DETECTION_ID
*               UL1CUSTOM_NVRAM_BARCODE_DETECTION_ID
* Group       : Real target, Internals, UL1D common operation
* Description : Constant to be used to define the value to be used in
*               enumeration Ul1CustomActionId
*****************************************************************************/
#define UL1CUSTOM_NULL_ACTION                (0)
#define UL1CUSTOM_GPIO_DETECTION_ID          (1)
#define UL1CUSTOM_ADC_DETECTION_ID           (2)
#define UL1CUSTOM_NVRAM_BARCODE_DETECTION_ID (3)

/*****************************************************************************
* Typedef     : Ul1CustomFunction
* Group       : Real target, Internals, UL1D common operation
* Type        : Function pointer
* Description : Internal typedef used by UL1 Custom action function prototype
*****************************************************************************/
typedef void (*Ul1CustomFunction)(void *usrDataPtr);

/*****************************************************************************
* Typedef     : Ul1CustomDynamicInitLnaPortTxPath
* Group       : Real target, Internals, UL1D common operation
* Type        : structure
* Description : Internal typedef used by UL1 Custom dynamic initialization data
*               for LNA port and Tx path setting
*****************************************************************************/
typedef struct
{
   /* User input to notify the band of the data to be modified */
   kal_uint32 bandToModify;

   /* LNA port selection */
   kal_uint8  lnaPortNum;

   /* TX output path selection */
   kal_uint8  txOutputSel; 

   /* RXD LNA port selection */
   kal_uint8  lnaPortNum2;
} Ul1CustomDynamicInitLnaPortTxPath;

/*****************************************************************************
* Typedef     : Ul1CustomDynamicInitUmtsBpiData
* Group       : Real target, Internals, UL1D common operation
* Type        : structure
* Description : Internal typedef used by UL1 Custom dynamic initialization data
*               3G BPI data
*****************************************************************************/
typedef struct
{
   /* User input to notify the band of the data to be modified */
   kal_uint32 bandToModify;

   /* ASM logics */
   kal_uint16 asmLogics[UL1CUSTOM_MAX_RF_BPI_EVENT_NUM];

   /* PA enable control bits */
//   kal_uint8 paEnables[UL1CUSTOM_MAX_RF_BPI_EVENT_NUM];

} Ul1CustomDynamicInitUmtsBpiData;

/*****************************************************************************
* Typedef     : Ul1CustomDynamicInitUmtsTxRampData
* Group       : Real target, Internals, UL1D common operation
* Type        : structure
* Description : Internal typedef used by UL1 Custom dynamic initialization data
*               3G Tx Ramp data
*****************************************************************************/
typedef struct
{
   /* 3G TX Ramp data array */
   U_sRAMPDATA *TxRampData[UL1CUSTOM_MAX_RF_SUPPORT_BAND_NUM];

} Ul1CustomDynamicInitUmtsTxRampData;

/*****************************************************************************
* Typedef     : Ul1CustomDynamicInitUmtsTxPaOctLvlData
* Group       : Real target, Internals, UL1D common operation
* Type        : structure
* Description : Internal typedef used by UL1 Custom dynamic initialization data
*               3G Tx PA oct-level data
*****************************************************************************/
typedef struct
{
   /* 3G TX Ramp data array */
   U_sPAOCTLVLSETTING *TxPaOctLvl[UL1CUSTOM_MAX_RF_SUPPORT_BAND_NUM];

} Ul1CustomDynamicInitUmtsTxPaOctLvlData;

/*****************************************************************************
* Typedef     : Ul1CustomDynamicInitUmtsRxPathLossData
* Group       : Real target, Internals, UL1D common operation
* Type        : structure
* Description : Internal typedef used by UL1 Custom dynamic initialization data
*               3G Rx path loss data
*****************************************************************************/

typedef struct
{
   /* 3G TX Ramp data array */
   U_sTEMPAGCOFFSET **RxPathLoss_p;

} Ul1CustomDynamicInitUmtsRxPathLossData;

typedef struct
{
   /* 3G RX path loss */
   const U_sTEMPAGCOFFSET*    const*   RxPathLoss_p;
   const U_sTEMPAGCOFFSET*    const*   RxDPathLoss_p;
   const U_sPAOCTLVLSETTING*  const*   PaOctLev_p;
   const U_sPARACHTMCOMPDATA* const*   PaRachComp_p;
   const U_sPADRIFTSETTING*   const*   PaDrift_p;
   const U_sRAMPDATA*         const*   RampData_p;
   const kal_uint16          *TempDac_p;
   const U_sAFCCAPDATA       *AfcCap_p;
   const U_sAFCDACDATA       *AfcDac_p;
} Ul1CustomDynamicInitUmtsCalData;

typedef struct
{
   const UMTS_FE_ROUTE_TABLE_T *FeSetting;
   
} Ul1CustomDynamicInitUmtsFeSettingData;

typedef struct
{
   const U_sDPD_COMMON_CTRL                 **DpdCtrlData_p;
   const U_UL1D_PCFE_DPD_OTFC_CUSTOM_PARA_T *DpdPcfeCustomData_p;
#if IS_3G_MIPI_SUPPORT   
   const UL1_UMTS_MIPI_TPC_T                **DpdTpcTable_p;
#endif
         DPD_ENABLE_E                       dpd_enable;                           
} Ul1CustomDynamicInitUmtsDpdfactoryData;

/*****************************************************************************
* Typedef     : Ul1CustomDynamicInitUmtsTxPrachTmCompData
* Group       : Real target, Internals, UL1D common operation
* Type        : structure
* Description : Internal typedef used by UL1 Custom dynamic initialization data
*               3G Tx PRACH TM comp. data
*****************************************************************************/
typedef struct
{
   /* 3G TX PRACH TM comp data array */
   U_sPARACHTMCOMPDATA *TxPrachTmComp[UL1CUSTOM_MAX_RF_SUPPORT_BAND_NUM];

} Ul1CustomDynamicInitUmtsTxPrachTmCompData;

/*****************************************************************************
* Typedef     : Ul1CustomDynamicInitUmtsTempDac
* Group       : Real target, Internals, UL1D common operation
* Type        : structure
* Description : Internal typedef used by UL1 Custom dynamic initialization data
*               3G temperature DAC data
*****************************************************************************/
typedef struct
{
   /* 3G Temperature DAC */
   kal_uint16 *UTempDac;

} Ul1CustomDynamicInitUmtsTempDac;

/*****************************************************************************
* Typedef     : Ul1CustomDynamicInitUmtsAfcDac
* Group       : Real target, Internals, UL1D common operation
* Type        : structure
* Description : Internal typedef used by UL1 Custom dynamic initialization data
*               3G temperature DAC data
*****************************************************************************/
typedef struct
{
   /* 3G AFC DAC */
   U_sAFCDACDATA *UAfcDac;

} Ul1CustomDynamicInitUmtsAfcDac;

/*****************************************************************************
* Typedef     : Ul1CustomDynamicInitUmtsAfcCap
* Group       : Real target, Internals, UL1D common operation
* Type        : structure
* Description : Internal typedef used by UL1 Custom dynamic initialization data
*               3G temperature DAC data
*****************************************************************************/
typedef struct
{
   /* 3G AFC CAP */
   U_sAFCCAPDATA *UAfcCap;

} Ul1CustomDynamicInitUmtsAfcCap;

#if (IS_3G_MIPI_SUPPORT)
typedef struct
{
   MIPI_Setting                   mipiSetting;
   const UL1_MIPI_EVENT_TABLE_T*         const* rxEventTable_p;
   const UL1_MIPI_DATA_SUBBAND_TABLE_T*  const* rxDataTable_p;
   const UL1_MIPI_EVENT_TABLE_T*         const* txEventTable_p;
   const UL1_MIPI_DATA_SUBBAND_TABLE_T*  const* txDataTable_p;
   const UL1_UMTS_MIPI_TPC_T*            const* tpcTable_p;
   const UL1_MIPI_DATA_TABLE_T*          const* asmIsoTable_p;
#if (IS_3G_ET_SUPPORT)
   UL1_UMTS_MIPI_ET_T             **etTable_p;
   UL1_MIPI_DATA_TABLE_T          *etOnStaticCwTable_p;
   UL1_MIPI_DATA_TABLE_T          *etOffStaticCwTable_p;
   funcptr                        fVpa2EtCw_p;
#endif/*IS_3G_ET_SUPPORT*/
}Ul1CustomDynamicInitMipiData;
#endif

#if (IS_3G_DAT_UL1_CUSTOM_SUPPORT)
typedef struct
{
   const UMTS_CUSTOM_DAT_FE_ROUTE_DATABASE_T  *dat_fe_route;
}Ul1CustomDynamicDatRoute;

typedef struct
{
   const UMTS_CUSTOM_DAT_FE_CAT_A_T   *dat_cat_a_fe_db;
   const UMTS_CUSTOM_DAT_FE_CAT_B_T   *dat_cat_b_fe_db;
}Ul1CustomDynamicDatDb;

typedef struct
{
   UMTS_CUSTOM_DAT_FEATURE_BY_RAT_T  dat_feature_byRat;
}Ul1CustomDynamicDatFeatureByRat;

#if (IS_3G_MIPI_SUPPORT)
typedef struct
{
   const UL1_MIPI_EVENT_TABLE_T*        const* catA_eventTable_p;
   const UL1_MIPI_DATA_SUBBAND_TABLE_T* const* catA_dataTable_p;
   const UL1_MIPI_EVENT_TABLE_T*        const* catB_eventTable_p;
   const UL1_MIPI_DATA_SUBBAND_TABLE_T* const* catB_dataTable_p;
}Ul1CustomDynamicDatMipiData;
#endif
#endif

#if (IS_3G_TAS_UL1_CUSTOM_SUPPORT)
typedef struct
{
   const UMTS_CUSTOM_TAS_FE_ROUTE_DATABASE_T  *tas_fe_route;
}Ul1CustomDynamicTasRoute;

typedef struct
{
   const UMTS_CUSTOM_TAS_FE_CAT_A_T   *tas_cat_a_fe_db;
   const UMTS_CUSTOM_TAS_FE_CAT_B_T   *tas_cat_b_fe_db;
   const UMTS_CUSTOM_TAS_FE_CAT_C_T   *tas_cat_c_fe_db;
}Ul1CustomDynamicTasDb;

typedef struct
{
   UMTS_CUSTOM_TAS_FEATURE_BY_RAT_T  tas_feature_byRat;
}Ul1CustomDynamicTasFeatureByRat;

#if (IS_3G_MIPI_SUPPORT)
typedef struct
{
   const UL1_MIPI_EVENT_TABLE_T*         const* catA_eventTable_p;
   const UL1_MIPI_DATA_SUBBAND_TABLE_T*  const* catA_dataTable_p;
   const UL1_MIPI_EVENT_TABLE_T*         const* catB_eventTable_p;
   const UL1_MIPI_DATA_SUBBAND_TABLE_T*  const* catB_dataTable_p;
   const UL1_MIPI_EVENT_TABLE_T*         const* catC_eventTable_p;
   const UL1_MIPI_DATA_SUBBAND_TABLE_T*  const* catC_dataTable_p;
}Ul1CustomDynamicTasMipiData;
#endif

#if IS_3G_TAS_TST_SUPPORT
typedef struct
{
   const UMTS_CUSTOM_TAS_TST_FE_ROUTE_DATABASE_T  *tas_tst_fe_route;
}Ul1CustomDynamicTasTstRoute;
#endif
#endif

#if IS_3G_TAS_INHERIT_4G_ANT
typedef struct
{
   const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T* const* inheritLteAntTable_p;
}Ul1CustomDynamicTasInheritLteAnt;
#endif

typedef struct
{  
   kal_bool                  xPMU_PA_CONTROL;
   kal_bool                  umtsRxDAlwaysOn;
   kal_bool                  ultra_low_cost_solution;
   kal_uint32                umtsPADriftCompensation;
   kal_uint8                 PA_section;
   kal_bool                  band5_and_band6_indicator;
#if IS_3G_B5_AND_B19_INDICATOR_SUPPORT 
   kal_bool                  band5_and_band19_indicator;
   kal_bool                  disable_band5_indicator;
#endif
   U_sUl1dRfBsiBpiTiming     RfBpiTiming;
   U_sUl1dRfPaControlTiming  RfPaControlTiming;
#if defined (__UL1_HS_PLUS_PLATFORM__)
   U_sUl1dMprBackOff         umtsMprBackOff;
#endif
#if IS_3G_MIPI_SUPPORT
   U_sUl1dRfMipiSetting      umtsRfMipiSetting;
#endif
   
}Ul1CustomDynamicRfParameter;

#if IS_3G_ELNA_SUPPORT
typedef struct
{
   U_sUl1DElnaSetting        umtsRxElnaSetting;
}Ul1CustomDynamicElnaData;
#endif

#if IS_3G_ELNA_IDX_SUPPORT
typedef struct
{
   UMTS_CUSTOM_ELNA_IDX_T    umtsRxElnaIdxSetting;
}Ul1CustomDynamicElnaIdxData;
#endif

#if IS_3G_RFEQ_COEF_SUBBAND_SUPPORT
typedef struct
{
   const hs_dsch_rfeq_info_band_T*   const* rfeqCoef_p;
}Ul1CustomDynamicRfeqCoefData;
#endif

#if IS_3G_RFEQ_REAL_COEF_TEST
typedef struct
{
   const URXDFE_REAL_RFEQ_CUSTOM_BAND_T*  const* realRfeqCoef_p;
}Ul1CustomDynamicRealRfeqCoefData;
#endif

#if IS_3G_FDD_INTERFERENCE_CHECK_SUPPORT
typedef struct
{
   UMTS_RF_INTERFERENCE_FREQUENCY_T    umtsRfInterferenceFreq;
}Ul1CustomDynamicInterferenceFrequencyTable;
#endif

/*****************************************************************************
* Typedef     : Ul1CustomActionId
* Group       : Real target, Internals, UL1D common operation
* Type        : Enumeration
* Description : Internal typedef used by UL1 Custom action ID constant value
*****************************************************************************/
typedef enum
{
   UL1CUSTOM_NULL_ACTION_ID = UL1CUSTOM_NULL_ACTION,
   UL1CUSTOM_BASE_PROC_ACTION_ID = UL1CUSTOM_NULL_ACTION_ID,
   UL1CUSTOM_GPIO_DETECTION = UL1CUSTOM_GPIO_DETECTION_ID,
   UL1CUSTOM_ADC_DETECTION = UL1CUSTOM_ADC_DETECTION_ID,
   UL1CUSTOM_NVRAM_BARCODE_DETECTION = UL1CUSTOM_NVRAM_BARCODE_DETECTION_ID,
   UL1CUSTOM_MAX_PROC_ACTIONS

} Ul1CustomActionId;

/*****************************************************************************
* Typedef     : Ul1CustomDynamicInitResultRFParams
* Group       : Real target, Internals, UL1D common operation
* Type        : Enumeration
* Description : Internal typedef used by UL1 Custom Dynamic init debug
*****************************************************************************/
typedef struct
{
   /* BPI data allocation */
   U_sUl1dRfBpiData umtsPdata;

   /* RF Hign-band and Low-band indicator */
   U_sUl1dRfBandIndicator umtsBandIndicator;

   /* RX LNA port selection */
   U_sUl1dRfRxLnaPortSel umtsRxLnaPortSel;

   /* TX output path selection */
   U_sUl1dRfTxPathSel umtsTxPathSel;

   /* RXd Path Setting (Main/Diversity on off Switch) */
   U_sUl1dRxdPathSetting   umtsRxdPathSetting;

   /* PA Drift Compensation (On/Off Switch Mask) */
   kal_uint32 umtsPADriftCompensation;
} Ul1CustomDynamicInitResultRFParams;

/*****************************************************************************
* Typedef     : Ul1CustomDynamicInitDebug
* Group       : Real target, Internals, UL1D common operation
* Type        : Enumeration
* Description : Internal typedef used by UL1 Custom Dynamic init debug
*****************************************************************************/
typedef struct
{
   kal_uint16 combined_config_index;
   kal_uint8  first_config_index_base;
   kal_uint8  second_config_index_base;
   kal_uint8  third_config_index_base;
   kal_int32  gpio_get_pin_rpc_status;
   kal_uint32 gpio_return_pin_num[3];
   kal_uint32 gpio_pin_value[3];
   kal_uint32 gpio_combined_pin_value;
   kal_int32  adc_get_ch_num_rpc_status;
   DCL_STATUS adc_dcl_handle_status;
   DCL_STATUS adc_cal_dcl_handle_status;
   kal_uint32 adc_get_ch_num;
   kal_uint32 adc_dac_read_result;
   kal_uint32 adc_volt_translate_result;
   kal_uint8  adc_volt_level;
   kal_bool   barcode_lid_read_status;
   kal_uint8  barcode_digit_read_result;
   kal_bool   umts_tempdac_lid_write_status;
   kal_bool   umts_txrampdata_lid_write_status;
   kal_bool   umts_txpaoctlvl_lid_write_status;
   kal_bool   umts_rxpathloss_lid_write_status;   
   kal_bool   umts_txprachtmcomp_lid_write_status;
   kal_bool   umts_rf_params_lid_write_status;
   Ul1CustomDynamicInitResultRFParams custom_dynamic_init_result_params;   

} Ul1CustomDynamicInitDebug;
/*------------- Single Software Load for Multiple Components Compatible -------------*/

/*****************************************************************************
*  Description : POC calibration global
*****************************************************************************/
/************************************************************************************
*  Global Functions Prototype (Interface)
************************************************************************************/
/* Function Prototypes can be used by other files */
void UL1D_RFC_SHARE_CW_INIT(void);

/************************************************************************************
*  Global Variables extern (Interface)
************************************************************************************/
#if 0/* No more used */
/* under construction !*/
#endif

extern void UL1D_RF_DynamicCustomTable_Update(const Ul1CustomDynamicInitUmtsFeSettingData *RfFeRoute_array_ptr);
extern void UL1D_RF_DynamicSetRfParameter(U_sUl1dRfCustomInputData *dst, const Ul1CustomDynamicRfParameter *RfTiming_ptr );
   #if IS_3G_ELNA_SUPPORT
extern void UL1D_RF_DynamicElna_Update(U_sUl1dRfCustomInputData *dst, const Ul1CustomDynamicElnaData *source);
   #endif
   #if(IS_3G_RX_POWER_OFFSET_SUPPORT)
extern void UL1D_RF_DynamicRxPowerOffset_Update(U_sUl1dRfCustomInputData *dst, const Ul1CustomDynamicRpoData *source);	
	#endif

#endif 	
