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
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __L1_NVRAM_DEF_H__
#define __L1_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


#include "kal_general_types.h"
#include "kal_public_defs.h"   /* END_OF_MOD_ID */
#include "stack_buff_pool.h"
#include "ctrl_buff_pool.h"
#include "sysconf_statistics.h"
#include "kal_public_defs.h"   /* LAST_SAP_CODE */
#include "sysservice_msgid.h"
#include "tst.h"
#include "global_def.h"

#include "nvram_defs.h"

#if(defined(ISP_SUPPORT))
#include "drv_sw_features_isp.h"
#include "isp_nvram.h"
#endif

#if defined(__MA_L1__)
#include "stack_common_ma.h"
#endif  /* __MA_L1__ */

#ifdef __GAIN_TABLE_SUPPORT__
#include "gain_table.h"
#endif /* __GAIN_TABLE_SUPPORT__ */

//#include "drv_features.h"
//#include "drv_features_adc.h"
//#include "drv_features_rtc.h"
//#include "drv_features_sim.h"

#ifdef __HMU_ENABLE__
#include "hmu_conf_data.h"
#endif

#ifdef __NMU_ENABLE__
#include "nmu.h"
#endif

#include "dcl.h"                        /* port_setting_struct */

#ifdef __MULTI_LEVEL_BACKLIGHT_SUPPORT__
#include "custom_hw_default.h"
#endif

#if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__)
#include "ul1cal.h"
#endif

#ifdef __AST_TL1_TDD__
#include "tl1cal_ast.h"
#include "tl1d_custom_drdi.h"
#include "tl1d_rf_cal_poc_data.h"
#ifdef __TAS_SUPPORT__
#include "tl1d_custom_rf_tas_struct.h"
#endif
#endif

#ifdef __MULTI_LEVEL_BACKLIGHT_SUPPORT__
#include "custom_hw_default.h"
#endif

#ifdef __LTE_RAT__
#include "el1d_custom_data.h"
#include "el1d_rf_custom_data.h"
#include "el1d_rf_drdi.h"                   /* Dynamic Radio-setting Dedicated Image */
#endif

#include "mml1_rf_global.h"
#include "mml1_mipi_public.h"
#include "mml1_drdi_public.h"

#include "custom_nvram_sec.h"           /* nvram_sml_context_struct */

#include "ps_public_enum.h"
#include "sbp_public_utility.h"
#include "cust_chl_interface.h"
#include "device.h"




/************************************************************
 * Start of L1 Calibration data
 ************************************************************/
/**
 * Total number of L1 Calibration data items
 */
#if defined(__EPSK_TX__)
#define NVRAM_EF_L1_EPSK_SUBTRAHEND 0
#else
#define NVRAM_EF_L1_EPSK_SUBTRAHEND (NVRAM_EF_L1_EPSK_END - NVRAM_EF_L1_EPSK_START + 1)
#endif

#if defined(__PS_SERVICE__)
   #define NVRAM_EF_L1_PS_SERVICE_SUBTRAHEND 0
#else
   #define NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_SUBTRAHEND 1

   #define NVRAM_EF_L1_PS_SERVICE_SUBTRAHEND (NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_SUBTRAHEND)
#endif /*defined(__PS_SERVICE__)*/

#if defined(__EGPRS_MODE__)
   #define NVRAM_EF_L1_EGPRS_MODE_SUBTRAHEND 0
#else
   #define NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_SUBTRAHEND 1

   #define NVRAM_EF_L1_EGPRS_MODE_SUBTRAHEND (NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_SUBTRAHEND)
#endif /*defined(__EGPRS_MODE__)*/

#if defined(__2G_TX_POWER_CONTROL_SUPPORT__)
   #if defined(__EPSK_TX__)
#define NVRAM_EF_L1_EPSK_TXPC_SUBTRAHEND 0
   #else
#define NVRAM_EF_L1_EPSK_TXPC_SUBTRAHEND 1
   #endif /*__EPSK_TX__*/
#else
#define NVRAM_EF_L1_EPSK_TXPC_SUBTRAHEND 2
#endif /*__2G_TX_POWER_CONTROL_SUPPORT__*/

#if defined(__MULTI_LNA_MODE_CALIBRATION_SUPPORT__)
#define NVRAM_EF_L1_LNAPATHLOSS_SUBTRAHEND 0
#else
#define NVRAM_EF_L1_LNAPATHLOSS_SUBTRAHEND 1
#endif

#if defined(__2G_TX_POWER_CONTROL_SUPPORT__)
   #if !defined(__UMTS_RAT__) || !defined(__MTK_UL1_FDD__)|| defined(__MULTI_RAT_AFC_TADC_SHARE_SUPPORT__)
#define NVRAM_EF_L1_TEMPERATURE_ADC_SUBTRAHEND 0
   #else
#define NVRAM_EF_L1_TEMPERATURE_ADC_SUBTRAHEND 1
   #endif
#else
#define NVRAM_EF_L1_TEMPERATURE_ADC_SUBTRAHEND 1
#endif /*__2G_TX_POWER_CONTROL_SUPPORT__*/

#if defined(__F32_XOSC_REMOVAL_SUPPORT__)
#define NVRAM_EF_L1_CLOAD_FREQ_OFFSET_SUBTRAHEND 0
#else
#define NVRAM_EF_L1_CLOAD_FREQ_OFFSET_SUBTRAHEND 1
#endif /*__F32_XOSC_REMOVAL_SUPPORT__*/

#if defined(__2G_TX_GAIN_RF_CALIBRATION__)
#define NVRAM_EF_L1_GAINRF_LID_SUBTRAHEND 0
#else
#define NVRAM_EF_L1_GAINRF_LID_SUBTRAHEND 1
#endif /*__2G_TX_GAIN_RF_CALIBRATION__*/

#if defined(__TX_POWER_OFFSET_SUPPORT__) || defined (__SAR_TX_POWER_BACKOFF_SUPPORT__)
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_LID_SUBTRAHEND 0
#else
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_LID_SUBTRAHEND 9
#endif /*__TX_POWER_OFFSET_SUPPORT__*/

#if defined(__RX_POWER_OFFSET_SUPPORT__)
   #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
#define NVRAM_EF_L1_RX_POWER_OFFSET_LID_SUBTRAHEND 0
   #else
#define NVRAM_EF_L1_RX_POWER_OFFSET_LID_SUBTRAHEND 1
   #endif//__2G_RX_DIVERSITY_PATH_SUPPORT__
#else
#define NVRAM_EF_L1_RX_POWER_OFFSET_LID_SUBTRAHEND 3
#endif /*__RX_POWER_OFFSET_SUPPORT__*/


#define NVRAM_L1CAL_ELEMENT_TOTAL  (NVRAM_EF_L1_END - NVRAM_EF_L1_START + 1 - \
                                    NVRAM_EF_L1_EPSK_SUBTRAHEND -             \
                                    NVRAM_EF_L1_PS_SERVICE_SUBTRAHEND -       \
                                    NVRAM_EF_L1_EGPRS_MODE_SUBTRAHEND -       \
                                    NVRAM_EF_L1_EPSK_TXPC_SUBTRAHEND -        \
                                    NVRAM_EF_L1_LNAPATHLOSS_SUBTRAHEND -      \
                                    NVRAM_EF_L1_TEMPERATURE_ADC_SUBTRAHEND -  \
                                    NVRAM_EF_L1_CLOAD_FREQ_OFFSET_SUBTRAHEND - \
                                    NVRAM_EF_L1_GAINRF_LID_SUBTRAHEND -       \
                                    NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_LID_SUBTRAHEND - \
                                    NVRAM_EF_L1_RX_POWER_OFFSET_LID_SUBTRAHEND)




// LID Enums

typedef enum
{
        NVRAM_EF_L1_START           = NVRAM_LID_GRP_L1(0), 
        NVRAM_EF_L1_AGCPATHLOSS_LID = NVRAM_EF_L1_START,                      // 0
        NVRAM_EF_L1_RAMPTABLE_GSM850_LID,                                     // 1
        NVRAM_EF_L1_RAMPTABLE_GSM900_LID,                                     // 2
        NVRAM_EF_L1_RAMPTABLE_DCS1800_LID,                                    // 3
        NVRAM_EF_L1_RAMPTABLE_PCS1900_LID,                                    // 4
        NVRAM_EF_L1_EPSK_START,                                               // 5
        NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_LID = NVRAM_EF_L1_EPSK_START,       // 5
        NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_LID,                                // 6
        NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_LID,                               // 7
        NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_LID,                               // 8
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_LID,                           // 9
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_LID,                           //10
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_LID,                          //11
        NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_LID,                          //12
        NVRAM_EF_L1_EPSK_END = NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_LID,   //12
        NVRAM_EF_L1_AFCDATA_LID,                                              //13
        NVRAM_EF_L1_TXIQ_LID,                                                 //14
        NVRAM_EF_L1_RFSPECIALCOEF_LID,                                        //15
        NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_LID,                                //16
        NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_LID,                                //17
        NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_LID,                               //18
        NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_LID,                               //19
        NVRAM_EF_L1_CRYSTAL_AFCDATA_LID,                                      //20
        NVRAM_EF_L1_CRYSTAL_CAPDATA_LID,                                      //21
        /*Chuwei: for TX power rollback*/
        NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_LID,                         //22
        NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_LID,                         //23
        /*for TX power control*/
        NVRAM_EF_L1_GMSK_TXPC_LID,                                            //24
        NVRAM_EF_L1_EPSK_TXPC_LID,                                            //25
        /*for LNA Middle/Low mode*/
        NVRAM_EF_L1_LNAPATHLOSS_LID,                                          //26
        /*for Temperature ADC*/
        NVRAM_EF_L1_TEMPERATURE_ADC_LID,                                      //27
        /*for DCXO LPM Cload freq. offset*/
        NVRAM_EF_L1_CLOAD_FREQ_OFFSET_LID,                                    //28
        NVRAM_EF_L1_GAINRF_LID,                                               //29
        /* for 2g Tx power Offset */
        NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_LID,                          //30
        NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_LID,                          //31
        NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_LID,                             //32
        NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_LID,                             //33
        NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_LID,                          //34
        NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_LID,                          //35
        NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_LID,                             //36
        NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_LID,                             //37
        /*for modem bin update tool*/
        NVRAM_EF_L1_2G_RF_PARAMETER_LID,                                      //38
        /* for GGE MIPI CTRL TABLE AT NVRAM */
        NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_LID,                               //39
        NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_LID,                               //40
        NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_LID,                              //41
        NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_LID,                              //42
        NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_LID,                                  //43
        NVRAM_EF_L1_TAS_CUSTOM_PARAMES_LID,                                   //44
        NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_LID,                                 //45
        NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_LID,                          //46
        NVRAM_EF_L1_RFC_LID,                                                  //47
        NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_LID,                               //48
        NVRAM_EF_L1_AGCPATHLOSS_OFFSET_LID,                                   //49
        NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_LID,                          //50
        NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_LID,                          //51
        NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_LID,                          //52
        NVRAM_EF_L1_ANT_RXPWR_OFFSET_LID,                                     //53
        /* for 2G RXD*/
        NVRAM_EF_L1_AGCPATHLOSS_RXD_LID,                                      //54
        NVRAM_EF_L1_LNAPATHLOSS_RXD_LID,                                      //55
        NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_LID,                               //56
        NVRAM_EF_L1_WCOEF_RXD_LID,                                            //57
        NVRAM_EF_L1_RAS_CUSTOM_PARAMES_LID,                                   //58
        /* for 2G SAR TX POWER BACKOFF DB*/
        NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_LID,                     //59          
        NVRAM_EF_L1_END =  NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_LID,
        NVRAM_EF_L1_LAST_LID        = NVRAM_LID_GRP_L1(255)
}nvram_lid_l1_enum;

// VERNO
#define  NVRAM_EF_L1_AGCPATHLOSS_LID_VERNO                   "002"
#define  NVRAM_EF_L1_RAMPTABLE_GSM850_LID_VERNO              "002"
#define  NVRAM_EF_L1_RAMPTABLE_GSM900_LID_VERNO              "002"
#define  NVRAM_EF_L1_RAMPTABLE_DCS1800_LID_VERNO             "002"
#define  NVRAM_EF_L1_RAMPTABLE_PCS1900_LID_VERNO             "002"
#define  NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_LID_VERNO         "002"
#define  NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_LID_VERNO         "002"
#define  NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_LID_VERNO        "002"
#define  NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_LID_VERNO        "002"
#define  NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_LID_VERNO    "002"
#define  NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_LID_VERNO    "002"
#define  NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_LID_VERNO   "002"
#define  NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_LID_VERNO   "002"
#define  NVRAM_EF_L1_AFCDATA_LID_VERNO                       "002"
#define  NVRAM_EF_L1_TXIQ_LID_VERNO                          "004"
#define  NVRAM_EF_L1_RFSPECIALCOEF_LID_VERNO                 "006"
#define  NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_LID_VERNO         "002"
#define  NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_LID_VERNO         "002"
#define  NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_LID_VERNO        "002"
#define  NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_LID_VERNO        "002"
#define  NVRAM_EF_L1_CRYSTAL_AFCDATA_LID_VERNO               "003"
#define  NVRAM_EF_L1_CRYSTAL_CAPDATA_LID_VERNO               "002"
        /*Chuwei: for TX power rollback*/
#define  NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_LID_VERNO  "000"
#define  NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_LID_VERNO  "000"
/*for TX power control*/
#define  NVRAM_EF_L1_GMSK_TXPC_LID_VERNO                     "000"
#define  NVRAM_EF_L1_EPSK_TXPC_LID_VERNO                     "000"
/*for LNA Middle/Low mode*/
#define  NVRAM_EF_L1_LNAPATHLOSS_LID_VERNO                   "002"
#define  NVRAM_EF_L1_2G_RF_PARAMETER_LID_VERNO               "000"
/*for Temperature ADC*/
#define  NVRAM_EF_L1_TEMPERATURE_ADC_LID_VERNO               "000"
/*for CLoad freq offset*/
#define  NVRAM_EF_L1_CLOAD_FREQ_OFFSET_LID_VERNO             "000"
/*for TX gain rf cal */
#define  NVRAM_EF_L1_GAINRF_LID_VERNO                        "000"
/*for MIPI NVRAM CTRL TABLE */
#define NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_LID_VERNO         "000"
#define NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_LID_VERNO         "000"
#define NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_LID_VERNO        "000"
#define NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_LID_VERNO        "000"
#define NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_LID_VERNO            "000"
/* for 2g Tx power Offset */
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_LID_VERNO    "000"
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_LID_VERNO    "000"
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_LID_VERNO       "000"
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_LID_VERNO       "000"
#define NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_LID_VERNO    "000"
#define NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_LID_VERNO    "000"
#define NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_LID_VERNO       "000"
#define NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_LID_VERNO       "000"

/* for 2g Rx power Offset */
#define NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_LID_VERNO         "000"
#define NVRAM_EF_L1_AGCPATHLOSS_OFFSET_LID_VERNO             "000"

/* for 2g DAT */
#define NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_LID_VERNO    "000"
#define NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_LID_VERNO    "000"
#define NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_LID_VERNO    "000"

/* for 2g antenna rx power offset */
#define NVRAM_EF_L1_ANT_RXPWR_OFFSET_LID_VERNO               "000"

#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
/* for 2G RXD */
#define NVRAM_EF_L1_AGCPATHLOSS_RXD_LID_VERNO                "000"
#define NVRAM_EF_L1_LNAPATHLOSS_RXD_LID_VERNO                "000"
#define NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_LID_VERNO         "000"
#define NVRAM_EF_L1_WCOEF_RXD_LID_VERNO                      "000"
#define NVRAM_EF_L1_RAS_CUSTOM_PARAMES_LID_VERNO             "000"
#endif


/*for 2G RF cal */
#define  NVRAM_EF_L1_RFC_LID_VERNO                           "000"
/* for 2G TAS */
#define NVRAM_EF_L1_TAS_CUSTOM_PARAMES_LID_VERNO             "000"
#define NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_LID_VERNO           "000"
#define NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_LID_VERNO    "000"

#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
#define NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_LID_VERNO  "000"
#endif


/**********************************************************************************/
/**
 * L1 Crystal AFC Data
 */
#define NVRAM_EF_L1_CRYSTAL_AFCDATA_SIZE         sizeof(l1cal_crystalAfcData_T)
#define NVRAM_EF_L1_CRYSTAL_AFCDATA_TOTAL        1

/**
 * L1 Crystal CAP Data
 */
#define NVRAM_EF_L1_CRYSTAL_CAPDATA_SIZE         sizeof(l1cal_crystalCapData_T)
#define NVRAM_EF_L1_CRYSTAL_CAPDATA_TOTAL        1

/**
 * L1 Tx power rollback table
 */
#define NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_SIZE    sizeof(l1cal_tx_power_rollback_T)
#define NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_TOTAL   1

#define NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_SIZE    sizeof(l1cal_tx_power_rollback_T)
#define NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_TOTAL   1

/**
 * L1 TX power control ADC Data
 */
#define NVRAM_EF_L1_GMSK_TXPC_SIZE    sizeof(l1cal_txpc_T)
#define NVRAM_EF_L1_GMSK_TXPC_TOTAL   1

#define NVRAM_EF_L1_EPSK_TXPC_SIZE    sizeof(l1cal_txpc_T)
#define NVRAM_EF_L1_EPSK_TXPC_TOTAL   1

/**
 * L1 LNA Path Loss
 */
#define NVRAM_EF_L1_LNAPATHLOSS_SIZE     sizeof(l1cal_lnaPathLoss_T)
#define NVRAM_EF_L1_LNAPATHLOSS_TOTAL    1

#define NVRAM_EF_L1_2G_RF_PARAMETER_SIZE    sizeof(l1d_rf_custom_input_data_T)
#define NVRAM_EF_L1_2G_RF_PARAMETER_TOTAL   1

/**
 * L1 Temperature ADC
 */
#define NVRAM_EF_L1_TEMPERATURE_ADC_SIZE  sizeof(l1cal_temperatureADC_T)
#define NVRAM_EF_L1_TEMPERATURE_ADC_TOTAL 1

/************************************************************
 * End of L1 Calibration data
 ************************************************************/




// Size and Total 
/**
 * L1 AGC Path Loss
 */
#define NVRAM_EF_L1_AGCPATHLOSS_SIZE     sizeof(l1cal_agcPathLoss_T)
#define NVRAM_EF_L1_AGCPATHLOSS_TOTAL    1

/**
 * L1 Ramp Table for GSM850
 */
#define NVRAM_EF_L1_RAMPTABLE_GSM850_SIZE    sizeof(l1cal_rampTable_T)
#define NVRAM_EF_L1_RAMPTABLE_GSM850_TOTAL   1

/**
 * L1 Ramp Table for GSM900
 */
#define NVRAM_EF_L1_RAMPTABLE_GSM900_SIZE    sizeof(l1cal_rampTable_T)
#define NVRAM_EF_L1_RAMPTABLE_GSM900_TOTAL   1

/**
 * L1 Ramp Table for DCS1800
 */
#define NVRAM_EF_L1_RAMPTABLE_DCS1800_SIZE   sizeof(l1cal_rampTable_T)
#define NVRAM_EF_L1_RAMPTABLE_DCS1800_TOTAL  1

/**
 * L1 Ramp Table for PCS1900
 */
#define NVRAM_EF_L1_RAMPTABLE_PCS1900_SIZE   sizeof(l1cal_rampTable_T)
#define NVRAM_EF_L1_RAMPTABLE_PCS1900_TOTAL  1

#if defined(__EPSK_TX__)
/**
 * L1 EPSK_Ramp Table for GSM850
 */
#define NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_SIZE    sizeof(l1cal_rampTable_T)
#define NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_TOTAL   1

/**
 * L1 EPSK_Ramp Table for GSM900
 */
#define NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_SIZE    sizeof(l1cal_rampTable_T)
#define NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_TOTAL   1

/**
 * L1 EPSK_Ramp Table for DCS1800
 */
#define NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_SIZE   sizeof(l1cal_rampTable_T)
#define NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_TOTAL  1

/**
 * L1 EPSK_Ramp Table for PCS1900
 */
#define NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_SIZE   sizeof(l1cal_rampTable_T)
#define NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_TOTAL  1
#endif /* defined(__EPSK_TX__) */
/**
 * L1 AFC Data
 */
#define NVRAM_EF_L1_AFCDATA_SIZE         sizeof(l1cal_afcData_T)
#define NVRAM_EF_L1_AFCDATA_TOTAL        1

/**
 * L1 TXIQ Calibration data
 */
#define NVRAM_EF_L1_TXIQ_SIZE         sizeof(l1cal_txiq_T)
#define NVRAM_EF_L1_TXIQ_TOTAL        1

/**
 * L1 RF Special Coef Calibration data
 */
#define NVRAM_EF_L1_RFSPECIALCOEF_SIZE         sizeof(l1cal_rfspecialcoef_T)
#define NVRAM_EF_L1_RFSPECIALCOEF_TOTAL        1

/**
 * L1 CLoad freq offset Calibration data
 */
#define NVRAM_EF_L1_CLOAD_FREQ_OFFSET_SIZE         sizeof(l1cal_cload_freq_offset_T)
#define NVRAM_EF_L1_CLOAD_FREQ_OFFSET_TOTAL        1

/**
 * L1 TX GAIN RF Calibration data
 */
#define NVRAM_EF_L1_GAINRF_LID_SIZE             sizeof(l1cal_gainrf_T)
#define NVRAM_EF_L1_GAINRF_LID_TOTAL            1

#if defined(__TX_POWER_OFFSET_SUPPORT__) || defined (__SAR_TX_POWER_BACKOFF_SUPPORT__)
/**
 * L1 GMSK TX power offset parameter
 */

/**
 * L1 GMSK TX power offset data for GSM850
 */
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_SIZE  sizeof(tx_power_offset_t)
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_TOTAL 1

/**
 * L1 GMSK TX power offset data for GSM900
 */
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_SIZE  sizeof(tx_power_offset_t)
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_TOTAL 1

/**
 * L1 GMSK TX power offset data for DCS
 */
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_SIZE     sizeof(tx_power_offset_t)
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_TOTAL    1

/**
 * L1 GMSK TX power offset data for PCS
 */
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_SIZE     sizeof(tx_power_offset_t)
#define NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_TOTAL    1

/**
 * L1 EPSK TX power offset data for GSM850
 */
#define NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_SIZE  sizeof(tx_power_offset_t)
#define NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_TOTAL 1

/**
 * L1 EPSK TX power offset data for GSM900
 */
#define NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_SIZE  sizeof(tx_power_offset_t)
#define NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_TOTAL 1

/**
 * L1 EPSK TX power offset data for DCS
 */
#define NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_SIZE     sizeof(tx_power_offset_t)
#define NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_TOTAL    1

/**
 * L1 EPSK TX power offset data for PCS
 */
#define NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_SIZE     sizeof(tx_power_offset_t)
#define NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_TOTAL    1
#endif /*__TX_POWER_OFFSET_SUPPORT__*/

#if defined(__RX_POWER_OFFSET_SUPPORT__)
/**
 * L1 RX power offset parameter
 */
#define NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_SIZE   sizeof(l1_2g_rf_rx_parameter_ext_t)
#define NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_TOTAL  1

/**
 * L1 AGC Path Loss Offset
 */
#define NVRAM_EF_L1_AGCPATHLOSS_OFFSET_SIZE     sizeof(l1cal_agclnaPathLoss_T)
#define NVRAM_EF_L1_AGCPATHLOSS_OFFSET_TOTAL    1

#endif/*__RX_POWER_OFFSET_SUPPORT__*/

#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
/**
 * L1 LNA Path Loss RXD
 */
#define NVRAM_EF_L1_LNAPATHLOSS_RXD_SIZE     sizeof(l1cal_lnaPathLoss_T)
#define NVRAM_EF_L1_LNAPATHLOSS_RXD_TOTAL    1

/**
 * L1 AGC Path Loss RXD
 */
#define NVRAM_EF_L1_AGCPATHLOSS_RXD_SIZE     sizeof(l1cal_agcPathLoss_T)
#define NVRAM_EF_L1_AGCPATHLOSS_RXD_TOTAL    1

/**
 * L1 AGC Path Loss Offset RXD
 */
#define NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_SIZE     sizeof(l1cal_agclnaPathLoss_T)
#define NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_TOTAL    1

/**
 * L1 Wcoef RXD
 */
#define NVRAM_EF_L1_WCOEF_RXD_SIZE     sizeof(l1cal_wcoef_T)
#define NVRAM_EF_L1_WCOEF_RXD_TOTAL    1

/**
 * L1 RXD Custom Setting
 */
#define NVRAM_EF_L1_RAS_CUSTOM_PARAMES_SIZE     sizeof(L1D_CUSTOM_RAS_NVRAM_T)
#define NVRAM_EF_L1_RAS_CUSTOM_PARAMES_TOTAL    1
#endif

#if defined(__DYNAMIC_ANTENNA_TUNING__)
/**
 * L1 DAT CUSTOM PDATA
 */
#define NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_SIZE     sizeof(l1_dat_custom_fe_route_params_T)
#define NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_TOTAL    1

#define NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_SIZE     sizeof(l1_dat_custom_fe_cata_params_T)
#define NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_TOTAL    1

#define NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_SIZE     sizeof(l1_dat_custom_fe_catb_params_T)
#define NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_TOTAL    1
#endif /*__DYNAMIC_ANTENNA_TUNING__*/

#if defined(__ANT_RXPWR_OFFSET_SUPPORT__)
/**
 * L1 Antenna Rx Power Offset
 */
#define NVRAM_EF_L1_ANT_RXPWR_OFFSET_SIZE     sizeof(sL1D_ANT_RxPWR_Offset_v2_T)
#define NVRAM_EF_L1_ANT_RXPWR_OFFSET_TOTAL    1
#endif
/**
 * L1 RF RF Calibration data
 */
#define NVRAM_EF_L1_RFC_LID_SIZE                sizeof(l1cal_mmrfc_result_T)
#define NVRAM_EF_L1_RFC_LID_TOTAL               1

#if defined(__TAS_SUPPORT__)
/**
 * L1 TAS CUSTOM PARAMS
 */
#define NVRAM_EF_L1_TAS_CUSTOM_PARAMES_SIZE              sizeof(L1D_CUSTOM_TAS_NVRAM_T)
#define NVRAM_EF_L1_TAS_CUSTOM_PARAMES_TOTAL             1
/**
 * L1 TAS CUSTOM FE PARAMS
 */
#define NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_SIZE              sizeof(L1D_CUSTOM_TAS_FE_NVRAM_T)
#define NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_TOTAL             1
/**
 * L1_TAS_CUSTOM_INHERIT_LTE_BAND
 */
#define NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_SIZE              sizeof(L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T)
#define NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_TOTAL             1

#endif /*__TAS_SUPPORT__*/

#if defined(__2G_MIPI_SUPPORT__)
/**
 * L1 MIPI CTRL tatble data gsm850
 */
#define NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_SIZE             sizeof(l1cal_mipi_ctrl_table_band_T)
#define NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_TOTAL            1
/**
 * L1 MIPI CTRL tatble data gsm850
 */
#define NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_SIZE             sizeof(l1cal_mipi_ctrl_table_band_T)
#define NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_TOTAL            1
/**
 * L1 MIPI CTRL tatble data gsm850
 */
#define NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_SIZE             sizeof(l1cal_mipi_ctrl_table_band_T)
#define NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_TOTAL            1
/**
 * L1 MIPI CTRL tatble data gsm850
 */
#define NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_SIZE             sizeof(l1cal_mipi_ctrl_table_band_T)
#define NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_TOTAL            1
#endif

/* L1 Dynamic Radio-setting Dedicated Image (DRDI) */
#define NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_SIZE         (sizeof(l1cal_l1CustomBandSupport_T))
#define NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_TOTAL        1

/**
 * L1 Inter-slot ramp table Calibration data for GSM 850
 */
#define NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_SIZE    sizeof(l1cal_interRampData_T)
#define NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_TOTAL   1

/**
 * L1 Inter-slot ramp table Calibration data for GSM 900
 */
#define NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_SIZE    sizeof(l1cal_interRampData_T)
#define NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_TOTAL   1

/**
 * L1 Inter-slot ramp table Calibration data for DCS 1800
 */
#define NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_SIZE    sizeof(l1cal_interRampData_T)
#define NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_TOTAL   1

/**
 * L1 Inter-slot ramp table Calibration data for PCS 1900
 */
#define NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_SIZE    sizeof(l1cal_interRampData_T)
#define NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_TOTAL   1

#if defined(__EPSK_TX__)
/**********************************************************************************/
/**
 * L1 EPSK Inter-slot ramp table Calibration data for GSM 850
 */
#define NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_SIZE    sizeof(l1cal_EPSK_interRampData_T)
#define NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_TOTAL   1

/**
 * L1 EPSK Inter-slot ramp table Calibration data for GSM 900
 */
#define NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_SIZE    sizeof(l1cal_EPSK_interRampData_T)
#define NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_TOTAL   1

/**
 * L1 EPSK Inter-slot ramp table Calibration data for DCS 1800
 */
#define NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_SIZE    sizeof(l1cal_EPSK_interRampData_T)
#define NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_TOTAL   1

/**
 * L1 EPSK Inter-slot ramp table Calibration data for PCS 1900
 */
#define NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_SIZE    sizeof(l1cal_EPSK_interRampData_T)
#define NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_TOTAL   1

#endif /* defined(__EPSK_TX__) */

#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
#define NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_SIZE    sizeof(L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T)
#define NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_TOTAL   1
#endif

#ifdef __cplusplus
}
#endif 

#endif /* __L1_NVRAM_DEF_H__ */ 
