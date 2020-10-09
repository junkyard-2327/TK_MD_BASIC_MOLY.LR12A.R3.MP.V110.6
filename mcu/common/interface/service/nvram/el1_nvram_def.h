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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __EL1_NVRAM_DEF_H__
#define __EL1_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"

#ifdef __LTE_RAT__
#include "el1d_custom_data.h"
#include "el1d_rf_custom_data.h"
#include "el1d_rf_drdi.h"                   /* Dynamic Radio-setting Dedicated Image */
#endif

// LID Enums

typedef enum
{
        NVRAM_EF_EL1_FREQADJTBL_LID                 = NVRAM_LID_GRP_EL1(0), /** move outside __LTE_RAT__ for MML1 access */     
              /** EL1 RF Calibration */
        NVRAM_EF_EL1_CTRL_REG_RW_LID,
        NVRAM_EF_EL1_DSPLOGFILTER_LID,

        /** EL1D RF RX RSSI Table */
        NVRAM_EF_EL1_RSSIGAINTBL_TYPE1_LID,

        NVRAM_EF_EL1_RSSIGAINTBL_TYPE2_LID,

        /** EL1D RF Tx DAC */
        NVRAM_EF_EL1_TXDAC_LID,

        /** EL1D RF Tx PA OCT level */
        NVRAM_EF_EL1_TXPAOCTLEV_LID,

        /** EL1D RF General Parammeters */
        NVRAM_EF_EL1_MPRADJTBL_LID,
        NVRAM_EF_EL1_MPRADJTBLCA_LID,
        NVRAM_EF_EL1_MPR_HPUE_CA_FEATURE_LID,
        NVRAM_EF_EL1_AMPRADJTBL_LID,
        NVRAM_EF_EL1_AMPRADJTBLCA_LID,
        NVRAM_EF_EL1_AMPR_VZW_FEATURE_LID,
        NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_LID,
        NVRAM_EF_EL1_AMPR_JP_FEATURE_LID,
        NVRAM_EF_EL1_AMPR_HPUE_FEATURE_LID,
        NVRAM_EF_EL1_AMPR_HPUE_CA_FEATURE_LID,
        NVRAM_EF_EL1_AMPRADJTBL_EXTRA_LID,
        NVRAM_EF_EL1_AMPRADJTBLCA_EXTRA_LID,
        NVRAM_EF_EL1_AMPRADJTBL_SPRINT_LID,

        /** EL1D RF Customization data */
        NVRAM_EF_EL1_BAND_INDICATOR_LID,
        NVRAM_EF_EL1_FE_CA_LINKAGE_DATABASE_LID,
        NVRAM_EF_EL1_EVT_TIME_OFST_TABLE_LID,
        NVRAM_EF_EL1_FE_RX_ROUTE_DATABASE_LID,
        NVRAM_EF_EL1_FE_TX_ROUTE_DATABASE_LID,

        /* EL1D Antenna Tuner setting*/
        NVRAM_EF_EL1_OLAT_FEATURE_LID,
        NVRAM_EF_EL1_ANT_PDATABASE_LID,
        NVRAM_EF_EL1_ANT_CA_LINKAGE_DATABASE_LID,
        NVRAM_EF_EL1_MIPI_ANTRX_EVENT_LID,
        NVRAM_EF_EL1_MIPI_ANTTX_EVENT_LID,
        NVRAM_EF_EL1_MIPI_ANTRX_DATA_LID,
        NVRAM_EF_EL1_MIPI_ANTTX_DATA_LID,

        /** 4G reuse 2G PA VPA source data */
        NVRAM_EF_EL1_VPA_CONFIG_DATABASE_LID,

        /** Dynamic Radio-setting Dedicated Image (DRDI) */
        NVRAM_EF_EL1_CUSTOM_DYNAMIC_INIT_DEBUG_LID,

        /** Single ANT Feature */
        NVRAM_EF_EL1_RF_RX_PATH_CONFIG_LID,

        /** Transmit Antenna Selection Feature */
        NVRAM_EF_EL1_TAS_FORCE_PARAMETER_LID,
        NVRAM_EF_EL1_TAS_FEATURE_BY_RAT_LID,
        NVRAM_EF_EL1_TAS_FEATURE_ENABLE_LID,

        /** Split Band Feature */
        NVRAM_EF_EL1_SPLIT_BAND_DATABASE_LID,

        /** Filter Mode Feature */
        NVRAM_EF_EL1_FILTER_MODE_DATABASE_LID,

        /** MIPI Feature */
        NVRAM_EF_EL1_MIPI_FEATURE_LID,
        NVRAM_EF_EL1_MIPI_RX_EVENT_LID,
        NVRAM_EF_EL1_MIPI_TX_EVENT_LID,
        NVRAM_EF_EL1_MIPI_RX_DATA_LID,
        NVRAM_EF_EL1_MIPI_TX_DATA_LID,

        NVRAM_EF_EL1_MIPI_TPC_EVENT_LID,

        NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA_LID,

        /*** MIPI BYPASS Feature ***/
        NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_START,
        NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_0THBAND_LID = NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_START,
        NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_1STBAND_LID,
        NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_2NDBAND_LID,
        NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_3RDBAND_LID,
        NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_4THBAND_LID,
        NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_END = NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_4THBAND_LID,

        NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_START,
        NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_0THBAND_LID = NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_START,
        NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_1STBAND_LID,
        NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_2NDBAND_LID,
        NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_3RDBAND_LID,
        NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_4THBAND_LID,
        NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_END = NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_4THBAND_LID,

        NVRAM_EF_EL1_MIPI_FILTER_TPC_EVENT_LID,

        NVRAM_EF_EL1_MIPI_FILTER_PA_TPC_SECTION_DATA_LID,

        /*** TX Power Offset Feature under HPUE ***/
        NVRAM_EF_EL1_HPUE_TPOS_LID,

        /*** TX Power Offset Feature ***/
        NVRAM_EF_EL1_TX_POWER_OFFSET_LID,/*Since SWTP is using new LID: NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_LID, it's need to be remove in 95*/

        /*** TX Power Backoff Parameters ***/
        NVRAM_EF_EL1_TX_POWER_BACKOFF_LID,

        /*** TX Multi-Cluster Vcc Index Offset Parameters ***/
        NVRAM_EF_EL1_TX_MC_VCC_IDX_OFS_LID,
        
        /*** TX Multi-Cluster Vcc Index Offset Parameters ***/
        NVRAM_EF_EL1_TX_MC_POW_BF_LID,

        /*** TX Multi-Cluster Vcc Index Offset Parameters CCA cases and NS0-2***/
        NVRAM_EF_EL1_TX_MC_POW_BF_CCA_LID,

        NVRAM_EF_EL1_TX_MC_POW_BF_CCA_0_LID,

        NVRAM_EF_EL1_TX_MC_POW_BF_CCA_1_LID,

        NVRAM_EF_EL1_TX_MC_POW_BF_CCA_2_LID,

        NVRAM_EF_EL1_FILTER_TXDAC_LID,

        NVRAM_EF_EL1_FILTER_TXPAOCTLEV_LID,

        /*** EL1 Band Ind CCA Support LID ***/
        NVRAM_EF_EL1_BAND_IND_CCA_SUPPORT_LID,

        /*** EL1 Band Ind Filter CCA Support LID ***/
        NVRAM_EF_EL1_BAND_IND_FLT_CCA_SUPPORT_LID,

        /* EL1D EL1D_FEATURE ON */
        NVRAM_EF_EL1D_FEATURE_LID,

        /*** EL1 RX DC IRR CAL DATA LID ***/
        NVRAM_EF_EL1_RF_SELF_CAL_RX_DC_IRR_LID,

        /*** EL1 RX IIP2 CAL DATA LID ***/
        NVRAM_EF_EL1_RF_SELF_CAL_RX_IIP2_LID,

        /*** EL1 DET_TX CAL DATA LID ***/
        NVRAM_EF_EL1_RF_SELF_CAL_DET_TX_LID,

        /*** EL1 TX SB CAL DATA LID ***/
        NVRAM_EF_EL1_RF_SELF_CAL_TX_SB_LID,
        
        /*DAT Feature*/
        NVRAM_EF_EL1_DAT_FEATURE_ENABLE_LID,
        
        NVRAM_EF_EL1_DAT_ROUTE_DATABASE_LID,

        // ANT default route LID for ANT Merge feature
        NVRAM_EF_EL1_ANT_ROUTE_DATABASE_LID,
        
        /** EL1D DPD Feature*/
        NVRAM_EF_EL1_DPD_FACTORY_CAL_DATA_LID,
        NVRAM_EF_EL1_DPD_FILTER_FACTORY_CAL_DATA_LID,
        NVRAM_EF_EL1_DPD_COMMON_CTRL_DATA_LID,
        NVRAM_EF_EL1_DPD_FILTER_COMMON_CTRL_DATA_LID,
        NVRAM_EF_EL1_DPD_MIPI_PA_TPC_SECTION_DATA_LID,
        NVRAM_EF_EL1_DPD_MIPI_FILTER_PA_TPC_SECTION_DATA_LID,
        NVRAM_EF_EL1_DPD_PCFE_OTFC_CUSTOM_PARA_LID,
        NVRAM_EF_EL1_DPD_PCFE_OTFC_NONCUSTOM_PARA_LID,

        /*** SAR Power Offset Feature ***/
        NVRAM_EF_EL1_SAR_TX_POWER_OFFSET_LID,

        /*** SWTP Feature ***/
        NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_LID,

        /*** RX Power Offset Feature ***/
        NVRAM_EF_EL1_RX_POWER_OFFSET_SWITCH_LID,
        NVRAM_EF_EL1_RX_POWER_OFFSET_LID,
        
        /*** TX Power Conditional Backoff Feature ***/
        NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_LID,
        NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_LID,

        /*** TX Power Conditional Backoff Feature CCA***/
        NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_CCA_LID,
        NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA_LID,
        
        /*** TX Power NSFT Power Backoff Feature ***/
        NVRAM_EF_EL1_TX_NSFT_POWER_BACKOFF_LID,

        
        /** EL1D DPD bypass DPD NS info*/
        NVRAM_EF_EL1_DPD_BYPASS_DPD_NS_INFO_LID,

        /*MUSE swap test*/
        NVRAM_EF_EL1_PRX_DRX_ONLY_ANT_CONFIG_LID,
        NVRAM_EF_EL1_PRX_DRX_CONFIG_LID,

        /*TPC Section data for alternative Tx route*/
        NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA2_LID,

        /*TAS config database and FE database*/
        NVRAM_EF_EL1_TAS_FE_DATABASE_CAT_A_LID,
        NVRAM_EF_EL1_TAS_FE_DATABASE_CAT_B_LID,
        NVRAM_EF_EL1_TAS_ROUTE_DATABASE_LID,

        NVRAM_EF_EL1_LAST_LID                       = NVRAM_LID_GRP_EL1(255)        

}nvram_lid_el1_enum;

#ifdef __LTE_RAT__

// VERNO
/** EL1 RF Calibration */
#define NVRAM_EF_EL1_CTRL_REG_RW_LID_VERNO                             "001"
#define NVRAM_EF_EL1_DSPLOGFILTER_LID_VERNO                            "001"
#define NVRAM_EF_EL1_FREQADJTBL_LID_VERNO                              "001"

/** EL1D RF RX RSSI Table */
#define NVRAM_EF_EL1_RSSIGAINTBL_TYPE1_LID_VERNO                       "001"
#define NVRAM_EF_EL1_RSSIGAINTBL_TYPE2_LID_VERNO                       "001"

/** EL1D RF Tx DAC */
#define NVRAM_EF_EL1_TXDAC_LID_VERNO                                   "001"

/** EL1D RF Tx PA OCT level */
#define NVRAM_EF_EL1_TXPAOCTLEV_LID_VERNO                              "001"

/** EL1 POWER ON Calibration */
#define NVRAM_EF_EL1_RF_SELF_CAL_RX_DC_IRR_LID_VERNO                   "001"

#define NVRAM_EF_EL1_RF_SELF_CAL_RX_IIP2_LID_VERNO                     "001"

#define NVRAM_EF_EL1_RF_SELF_CAL_DET_TX_LID_VERNO                      "001"

#define NVRAM_EF_EL1_RF_SELF_CAL_TX_SB_LID_VERNO                       "001"

#define NVRAM_EF_EL1_PWRONCAL_LID_VERNO                                "000"

#define NVRAM_EF_EL1_PWRONCAL_LTE_TX_SUBBAND_LID_VERNO                 "000"


/** EL1D RF Tx ET */


/** EL1D RF General Parammeters */
#define NVRAM_EF_EL1_ETCOMPPARAM_LID_VERNO                             "000"
#define NVRAM_EF_EL1_MPRADJTBL_LID_VERNO                               "001"
#define NVRAM_EF_EL1_AMPRADJTBL_LID_VERNO                              "001"
#define NVRAM_EF_EL1_MPRADJTBLCA_LID_VERNO                             "000"
#define NVRAM_EF_EL1_AMPRADJTBLCA_LID_VERNO                            "000"
#define NVRAM_EF_EL1_MPR_HPUE_CA_FEATURE_LID_VERNO                     "000"
#define NVRAM_EF_EL1_AMPR_VZW_FEATURE_LID_VERNO                        "000"
#define NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_LID_VERNO                     "000"
#define NVRAM_EF_EL1_AMPR_JP_FEATURE_LID_VERNO                         "000"
#define NVRAM_EF_EL1_AMPR_HPUE_FEATURE_LID_VERNO                       "000"
#define NVRAM_EF_EL1_AMPR_HPUE_CA_FEATURE_LID_VERNO                    "000"
#define NVRAM_EF_EL1_AMPRADJTBL_EXTRA_LID_VERNO                        "000"
#define NVRAM_EF_EL1_AMPRADJTBLCA_EXTRA_LID_VERNO                      "000"
#define NVRAM_EF_EL1_AMPRADJTBL_SPRINT_LID_VERNO                       "000"

/** EL1D RF Customization data */
#define NVRAM_EF_EL1_BAND_INDICATOR_LID_VERNO                          "001"
#define NVRAM_EF_EL1_FE_CA_LINKAGE_DATABASE_LID_VERNO                  "001"
#define NVRAM_EF_EL1_EVT_TIME_OFST_TABLE_LID_VERNO                     "001"
#define NVRAM_EF_EL1_FE_RX_ROUTE_DATABASE_LID_VERNO                    "002"
#define NVRAM_EF_EL1_FE_TX_ROUTE_DATABASE_LID_VERNO                    "001"

/*EL1D RF Antenna tuner setting*/
#define NVRAM_EF_EL1_OLAT_FEATURE_LID_VERNO                            "000"
#define NVRAM_EF_EL1_ANT_PDATABASE_LID_VERNO                           "001"
#define NVRAM_EF_EL1_ANT_CA_LINKAGE_DATABASE_LID_VERNO                 "001"
#define NVRAM_EF_EL1_MIPI_ANTRX_EVENT_LID_VERNO                        "001"
#define NVRAM_EF_EL1_MIPI_ANTTX_EVENT_LID_VERNO                        "001"
#define NVRAM_EF_EL1_MIPI_ANTRX_DATA_LID_VERNO                         "001"
#define NVRAM_EF_EL1_MIPI_ANTTX_DATA_LID_VERNO                         "001"


/** 4G reuse 2G PA VPA source data */
#define NVRAM_EF_EL1_VPA_CONFIG_DATABASE_LID_VERNO                     "001"

/* Dynamic Radio-setting Dedicated Image (DRDI) */
#define NVRAM_EF_EL1_CUSTOM_DYNAMIC_INIT_DEBUG_LID_VERNO               "001"

/* Single ANT Feature */
#define NVRAM_EF_EL1_RF_RX_PATH_CONFIG_LID_VERNO                       "001"

/* MUSE swap  test */
#define NVRAM_EF_EL1_PRX_DRX_ONLY_ANT_CONFIG_LID_VERNO                 "000"
#define NVRAM_EF_EL1_PRX_DRX_CONFIG_LID_VERNO                          "000"

/* MIPI Feature */
#define NVRAM_EF_EL1_MIPI_FEATURE_LID_VERNO                            "001"
#define NVRAM_EF_EL1_MIPI_RX_EVENT_LID_VERNO                           "001"
#define NVRAM_EF_EL1_MIPI_TX_EVENT_LID_VERNO                           "001"
#define NVRAM_EF_EL1_MIPI_RX_DATA_LID_VERNO                            "001"
#define NVRAM_EF_EL1_MIPI_TX_DATA_LID_VERNO                            "001"

#define NVRAM_EF_EL1_MIPI_TPC_EVENT_LID_VERNO                          "001"

#define NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA_LID_VERNO                "002"

#define NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA2_LID_VERNO               "000"

#define NVRAM_EF_EL1_TAS_FE_DATABASE_CAT_A_LID_VERNO                   "000"
#define NVRAM_EF_EL1_TAS_FE_DATABASE_CAT_B_LID_VERNO                   "000"
#define NVRAM_EF_EL1_TAS_ROUTE_DATABASE_LID_VERNO                      "000"

/*** MIPI BYPASS Feature ***/
#define NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_0THBAND_LID_VERNO            "000"
#define NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_1STBAND_LID_VERNO            "000"
#define NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_2NDBAND_LID_VERNO            "000"
#define NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_3RDBAND_LID_VERNO            "000"
#define NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_4THBAND_LID_VERNO            "000"

#define NVRAM_EF_EL1_MIPI_FILTER_TPC_EVENT_LID_VERNO                   "001"

#define NVRAM_EF_EL1_MIPI_FILTER_PA_TPC_SECTION_DATA_LID_VERNO         "002"

#define NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_0THBAND_LID_VERNO             "000"
#define NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_1STBAND_LID_VERNO             "000"
#define NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_2NDBAND_LID_VERNO             "000"
#define NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_3RDBAND_LID_VERNO             "000"
#define NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_4THBAND_LID_VERNO             "000"


/* Transmit Antenna Selection Feature */
#define NVRAM_EF_EL1_TAS_FORCE_PARAMETER_LID_VERNO                     "001"
#define NVRAM_EF_EL1_TAS_FEATURE_BY_RAT_LID_VERNO                      "001"
#define NVRAM_EF_EL1_TAS_FEATURE_ENABLE_LID_VERNO                      "001"


/* DAT Feature */
#define NVRAM_EF_EL1_DAT_FEATURE_ENABLE_LID_VERNO                      "000"
#define NVRAM_EF_EL1_DAT_ROUTE_DATABASE_LID_VERNO                      "000"

#define NVRAM_EF_EL1_ANT_ROUTE_DATABASE_LID_VERNO                      "000"

/* Split Band Feature */
#define NVRAM_EF_EL1_SPLIT_BAND_DATABASE_LID_VERNO                     "001"

/* Filter Mode Feature */
#define NVRAM_EF_EL1_FILTER_MODE_DATABASE_LID_VERNO                    "001"

/* RX Power Offset Feature */
#define NVRAM_EF_EL1_RX_POWER_OFFSET_SWITCH_LID_VERNO                  "000"
#define NVRAM_EF_EL1_RX_POWER_OFFSET_LID_VERNO                         "000"

/* SAR Power Offset Feature */
#define NVRAM_EF_EL1_SAR_TX_POWER_OFFSET_LID_VERNO                     "000"

/* SWTP Feature */
#define NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_LID_VERNO                    "000"

/* TX Power Offset Feature under HPUE*/
#define NVRAM_EF_EL1_HPUE_TPOS_LID_VERNO                               "000"

/* TX Power Offset Feature */
#define NVRAM_EF_EL1_TX_POWER_OFFSET_LID_VERNO                         "001"/*Since SWTP is using new LID: NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_LID, it's need to be remove in 95*/

#define NVRAM_EF_EL1_TX_POWER_BACKOFF_LID_VERNO                        "001"

#define NVRAM_EF_EL1_TX_MC_VCC_IDX_OFS_LID_VERNO                       "000"

#define NVRAM_EF_EL1_TX_MC_POW_BF_LID_VERNO                            "000"

#define NVRAM_EF_EL1_TX_MC_POW_BF_CCA_LID_VERNO                        "000"

#define NVRAM_EF_EL1_TX_MC_POW_BF_CCA_0_LID_VERNO                    "000"

#define NVRAM_EF_EL1_TX_MC_POW_BF_CCA_1_LID_VERNO                    "000"

#define NVRAM_EF_EL1_TX_MC_POW_BF_CCA_2_LID_VERNO                    "000"

/* TX Power Conditional Backoff Parameters */
#define NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_LID_VERNO              "000"
#define NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_LID_VERNO      "000"

/* TX Power Conditional Backoff Parameters */
#define NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_CCA_LID_VERNO              "000"
#define NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA_LID_VERNO      "000"

/* TX NSFT Power Backoff Parameters */
#define NVRAM_EF_EL1_TX_NSFT_POWER_BACKOFF_LID_VERNO                   "000"

#define NVRAM_EF_EL1_FILTER_TXDAC_LID_VERNO                            "001"

#define NVRAM_EF_EL1_FILTER_TXPAOCTLEV_LID_VERNO                       "001"

#define NVRAM_EF_EL1_BAND_IND_CCA_SUPPORT_LID_VERNO                    "000"

#define NVRAM_EF_EL1_BAND_IND_FLT_CCA_SUPPORT_LID_VERNO                "000"

/** EL1D Feature */
#define NVRAM_EF_EL1D_FEATURE_LID_VERNO                      "001"

/** EL1D DPD Feature **/
#define NVRAM_EF_EL1_DPD_FACTORY_CAL_DATA_LID_VERNO                    "000"

#define NVRAM_EF_EL1_DPD_FILTER_FACTORY_CAL_DATA_LID_VERNO             "000"

#define NVRAM_EF_EL1_DPD_COMMON_CTRL_DATA_LID_VERNO                    "000"

#define NVRAM_EF_EL1_DPD_FILTER_COMMON_CTRL_DATA_LID_VERNO             "000"

#define NVRAM_EF_EL1_DPD_MIPI_PA_TPC_SECTION_DATA_LID_VERNO            "001"

#define NVRAM_EF_EL1_DPD_MIPI_FILTER_PA_TPC_SECTION_DATA_LID_VERNO     "001"

#define NVRAM_EF_EL1_DPD_PCFE_OTFC_CUSTOM_PARA_LID_VERNO               "002"

#define NVRAM_EF_EL1_DPD_PCFE_OTFC_NONCUSTOM_PARA_LID_VERNO            "002"

#define NVRAM_EF_EL1_DPD_BYPASS_DPD_NS_INFO_LID_VERNO                  "000"



// Size and Total 
/** EL1 RF Calibration */
#define NVRAM_EF_EL1_CTRL_REG_RW_SIZE                  2104
#define NVRAM_EF_EL1_CTRL_REG_RW_TOTAL                 1

#define NVRAM_EF_EL1_DSPLOGFILTER_SIZE                 2048
#define NVRAM_EF_EL1_DSPLOGFILTER_TOTAL                1

#define NVRAM_EF_EL1_FREQADJTBL_SIZE                   sizeof(LTE_FreqAdjustTable)
#define NVRAM_EF_EL1_FREQADJTBL_TOTAL                  1

/** EL1D RF RX RSSI Table */
#define NVRAM_EF_EL1_RSSIGAINTBL_TYPE1_BAND_SIZE       sizeof(LTE_RX_PL_ROUTE_TYPE1_T)
#define NVRAM_EF_EL1_RSSIGAINTBL_TYPE1_BAND_TOTAL      LTE_MAX_RX_TYPE1_COMP_ROUTE_NUM

#define NVRAM_EF_EL1_RSSIGAINTBL_TYPE2_BAND_SIZE       sizeof(LTE_RX_PL_ROUTE_TYPE2_T)
#define NVRAM_EF_EL1_RSSIGAINTBL_TYPE2_BAND_TOTAL      LTE_MAX_RX_TYPE2_COMP_ROUTE_NUM

/*** Power On Calibration  ***/
#define NVRAM_EF_EL1_RF_SELF_CAL_RX_DC_IRR_SIZE        sizeof(LTE_RF_POC_RX_DC_IRR_COMP_PER_ROUTE_T)
#define NVRAM_EF_EL1_RF_SELF_CAL_RX_DC_IRR_TOTAL       EL1D_RXDC_IRR_RF_ROUTE_MAX

#define NVRAM_EF_EL1_RF_SELF_CAL_RX_IIP2_SIZE          sizeof(LTE_RF_POC_RX_IIP2_COMP_PER_ROUTE_T)
#define NVRAM_EF_EL1_RF_SELF_CAL_RX_IIP2_TOTAL         EL1D_RXIIP2_USAGE_ROUTE_MAX

#define NVRAM_EF_EL1_RF_SELF_CAL_DET_TX_SIZE           sizeof(LTE_RF_POC_DET_TX_COMP_CAL_DATA_ELEMENT_T)
#define NVRAM_EF_EL1_RF_SELF_CAL_DET_TX_TOTAL          EL1D_TX_RF_ROUTE_MAX

#define NVRAM_EF_EL1_RF_SELF_CAL_TX_SB_SIZE            sizeof(LTE_RF_POC_TX_SB_COMP_CAL_DATA_PER_BAND_T)
#define NVRAM_EF_EL1_RF_SELF_CAL_TX_SB_TOTAL           EL1D_TX_SPLIT_BAND_NUM

/** EL1D RF Tx DAC */
#define NVRAM_EF_EL1_TXDAC_BAND_SIZE                   sizeof(LTE_sRAMP_DEFAULT_SIZE)
#define NVRAM_EF_EL1_TXDAC_BAND_TOTAL                  LTE_MAX_TX_COMP_ROUTE_NUM

/** EL1D RF Tx PA OCT level */
#define NVRAM_EF_EL1_TXPAOCTLEV_BAND_SIZE              sizeof(LTE_sPAOCTLVL_DEFAULT_SIZE)
#define NVRAM_EF_EL1_TXPAOCTLEV_BAND_TOTAL             LTE_MAX_TX_COMP_ROUTE_NUM

/** EL1D RF Tx FILTER DAC */
#define NVRAM_EF_EL1_FILTER_TXDAC_BAND_SIZE            sizeof(LTE_sRAMP_DEFAULT_SIZE)
#define NVRAM_EF_EL1_FILTER_TXDAC_BAND_TOTAL           LTE_FILTER_MAX_SUPPORT_BAND_NUM

/** EL1D RF Tx FILTER PA OCT level */
#define NVRAM_EF_EL1_FILTER_TXPAOCTLEV_BAND_SIZE       sizeof(LTE_sPAOCTLVL_DEFAULT_SIZE)
#define NVRAM_EF_EL1_FILTER_TXPAOCTLEV_BAND_TOTAL      LTE_FILTER_MAX_SUPPORT_BAND_NUM

/** EL1D RF General Parammeters */
#define NVRAM_EF_EL1_TEMPERATUREDAC_SIZE               sizeof(LTE_TemperatureDac_T)
#define NVRAM_EF_EL1_TEMPERATUREDAC_TOTAL              1

#define NVRAM_EF_EL1_MPRADJTBL_SIZE                   (sizeof(LTE_MPRAdjust_T)*(LTE_TARGET_MAX_SUPPORT_BAND_NUM))
#define NVRAM_EF_EL1_MPRADJTBL_TOTAL                   1

#define NVRAM_EF_EL1_AMPRADJTBL_SIZE                  (sizeof(LTE_AMPRAdjust_T)*(LTE_TARGET_MAX_SUPPORT_BAND_NUM))
#define NVRAM_EF_EL1_AMPRADJTBL_TOTAL                  1

#define NVRAM_EF_EL1_MPRADJTBLCA_SIZE                 (sizeof(LTE_MPRAdjust_CA_T)*(LTE_TARGET_MAX_SUPPORT_BAND_NUM))
#define NVRAM_EF_EL1_MPRADJTBLCA_TOTAL                 1

#define NVRAM_EF_EL1_MPR_HPUE_CA_FEATURE_SIZE         (sizeof(LTE_MPRAdjust_CA_T)*(LTE_TARGET_MAX_SUPPORT_BAND_NUM))
#define NVRAM_EF_EL1_MPR_HPUE_CA_FEATURE_TOTAL         1

#define NVRAM_EF_EL1_AMPRADJTBLCA_SIZE                (sizeof(LTE_AMPRAdjust_CA_T)*(LTE_TARGET_MAX_SUPPORT_AMPR_INTRACABAND_NUM))
#define NVRAM_EF_EL1_AMPRADJTBLCA_TOTAL                1

#define NVRAM_EF_EL1_AMPR_VZW_NUM_ITEMS                1
#define NVRAM_EF_EL1_AMPR_VZW_FEATURE_SIZE            (sizeof(kal_uint16)*(NVRAM_EF_EL1_AMPR_VZW_NUM_ITEMS))
#define NVRAM_EF_EL1_AMPR_VZW_FEATURE_TOTAL            1

#define NVRAM_EF_EL1_AMPR_SPRINT_NUM_ITEMS                1
#define NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_SIZE            (sizeof(kal_uint16)*(NVRAM_EF_EL1_AMPR_SPRINT_NUM_ITEMS))
#define NVRAM_EF_EL1_AMPR_SPRINT_FEATURE_TOTAL            1

#define NVRAM_EF_EL1_AMPR_JP_NUM_ITEMS                1
#define NVRAM_EF_EL1_AMPR_JP_FEATURE_SIZE            (sizeof(kal_uint16)*(NVRAM_EF_EL1_AMPR_JP_NUM_ITEMS))
#define NVRAM_EF_EL1_AMPR_JP_FEATURE_TOTAL            1

#define NVRAM_EF_EL1_AMPR_HPUE_FEATURE_SIZE           (sizeof(LTE_AMPR_HPUE_Adjust_T))
#define NVRAM_EF_EL1_AMPR_HPUE_FEATURE_TOTAL           1

#define NVRAM_EF_EL1_AMPR_HPUE_CA_FEATURE_SIZE        (sizeof(LTE_AMPR_HPUE_CA_Adjust_T))
#define NVRAM_EF_EL1_AMPR_HPUE_CA_FEATURE_TOTAL        1

#define NVRAM_EF_EL1_HPUE_TPOS_SIZE                   (sizeof(LTE_RF_HPUE_TX_POWER_OFFSET_T))
#define NVRAM_EF_EL1_HPUE_TPOS_TOTAL                   1

#define NVRAM_EF_EL1_AMPRADJTBL_EXTRA_SIZE            (sizeof(LTE_AMPR_EXTRA_Adjust_T))
#define NVRAM_EF_EL1_AMPRADJTBL_EXTRA_TOTAL            1

#define NVRAM_EF_EL1_AMPRADJTBLCA_EXTRA_SIZE          (sizeof(LTE_AMPR_EXTRA_CA_Adjust_T))
#define NVRAM_EF_EL1_AMPRADJTBLCA_EXTRA_TOTAL          1

#define NVRAM_EF_EL1_AMPRADJTBL_SPRINT_SIZE            (sizeof(LTE_AMPR_SPRINT_Adjust_T))
#define NVRAM_EF_EL1_AMPRADJTBL_SPRINT_TOTAL            1

/** EL1D RF Customization data */
#define NVRAM_EF_EL1_BAND_INDICATOR_SIZE              (sizeof(LTE_Band)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_BAND_INDICATOR_TOTAL              1

#define NVRAM_EF_EL1_FE_CA_LINKAGE_DATABASE_SIZE      (sizeof(LTE_FE_CUSTOM_CA_LINKAGE_DATABASE_T))
#define NVRAM_EF_EL1_FE_CA_LINKAGE_DATABASE_TOTAL     1

/* EL1D RF Antenna tuner setting*/
#define NVRAM_EF_EL1_OLAT_FEATURE_SIZE                (sizeof(kal_uint16))
#define NVRAM_EF_EL1_OLAT_FEATURE_TOTAL                1

#define NVRAM_EF_EL1_ANT_PDATABASE_SIZE               (sizeof(LTE_ANT_ROUTE_TABLE_T)*LTE_MAX_SUPPORT_FE_ROUTE_NUM)
#define NVRAM_EF_EL1_ANT_PDATABASE_TOTAL              1

#define NVRAM_EF_EL1_ANT_CA_LINKAGE_DATABASE_SIZE     (sizeof(LTE_ANT_CUSTOM_CA_LINKAGE_DATABASE_T))
#define NVRAM_EF_EL1_ANT_CA_LINKAGE_DATABASE_TOTAL    1

#define NVRAM_EF_EL1_MIPI_ANTRX_EVENT_SIZE            (sizeof(LTE_MIPI_EVENT_TABLE_T)*LTE_MIPI_ANT_EVENT_NUM)
#define NVRAM_EF_EL1_MIPI_ANTRX_EVENT_TOTAL           LTE_TARGET_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_MIPI_ANTTX_EVENT_SIZE            (sizeof(LTE_MIPI_EVENT_TABLE_T)*LTE_MIPI_ANT_EVENT_NUM)
#define NVRAM_EF_EL1_MIPI_ANTTX_EVENT_TOTAL           LTE_TARGET_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_MIPI_ANTRX_DATA_SIZE             (sizeof(LTE_MIPI_DATA_SUBBAND_TABLE_T)*LTE_MIPI_ANT_DATA_NUM)
#define NVRAM_EF_EL1_MIPI_ANTRX_DATA_TOTAL            LTE_TARGET_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_MIPI_ANTTX_DATA_SIZE             (sizeof(LTE_MIPI_DATA_SUBBAND_TABLE_T)*LTE_MIPI_ANT_DATA_NUM)
#define NVRAM_EF_EL1_MIPI_ANTTX_DATA_TOTAL            LTE_TARGET_MAX_SUPPORT_BAND_NUM


#define NVRAM_EF_EL1_VPA_CONFIG_DATABASE_SIZE         (sizeof(LTE_VPA_SOURCE_CONFIGUATION_TYPE)*LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM)
#define NVRAM_EF_EL1_VPA_CONFIG_DATABASE_TOTAL         1

/* RF BPI event offset */
#define NVRAM_EF_EL1_EVT_TIME_OFST_TABLE_SIZE         (sizeof(LTE_BPI_EVT_TIME_OFST_TABLE_T))
#define NVRAM_EF_EL1_EVT_TIME_OFST_TABLE_TOTAL        1

#define NVRAM_EF_EL1_FE_RX_ROUTE_DATABASE_SIZE        (sizeof(LTE_FE_RX_ROUTE_TABLE_T))
#define NVRAM_EF_EL1_FE_RX_ROUTE_DATABASE_TOTAL       LTE_MAX_SUPPORT_RX_FE_ROUTE_NUM

#define NVRAM_EF_EL1_FE_TX_ROUTE_DATABASE_SIZE        (sizeof(LTE_FE_TX_ROUTE_TABLE_T))
#define NVRAM_EF_EL1_FE_TX_ROUTE_DATABASE_TOTAL       LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM

/* Dynamic Radio-setting Dedicated Image (DRDI) */
#define NVRAM_EF_EL1_CUSTOM_DYNAMIC_INIT_DEBUG_SIZE   (sizeof(LTE_DRDI_DEBUG_INFO_T))
#define NVRAM_EF_EL1_CUSTOM_DYNAMIC_INIT_DEBUG_TOTAL   1

/* Single ANT Feature */
#define NVRAM_EF_EL1_RF_RX_PATH_CONFIG_SIZE           (sizeof(LTE_RX_PATH_CONFIG_T))
#define NVRAM_EF_EL1_RF_RX_PATH_CONFIG_TOTAL           1

/* MUSE swap feature */
#define NVRAM_EF_EL1_PRX_DRX_ONLY_ANT_CONFIG_SIZE     (sizeof(LTE_ANT_BETTER_INFO_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_PRX_DRX_ONLY_ANT_CONFIG_TOTAL     1

#define NVRAM_EF_EL1_PRX_DRX_CONFIG_SIZE              (sizeof(LTE_PRX_DRX_BETTER_CONFIG_E))
#define NVRAM_EF_EL1_PRX_DRX_CONFIG_TOTAL              1

/* MIPI Feature */
#define NVRAM_EF_EL1_MIPI_FEATURE_SIZE                (sizeof(kal_uint16))
#define NVRAM_EF_EL1_MIPI_FEATURE_TOTAL                1

#define NVRAM_EF_EL1_MIPI_RX_EVENT_SIZE               (sizeof(LTE_MIPI_EVENT_TABLE_T)*LTE_MIPI_RX_EVENT_NUM)
#define NVRAM_EF_EL1_MIPI_RX_EVENT_TOTAL               LTE_TARGET_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_MIPI_TX_EVENT_SIZE               (sizeof(LTE_MIPI_EVENT_TABLE_T)*LTE_MIPI_TX_EVENT_NUM)
#define NVRAM_EF_EL1_MIPI_TX_EVENT_TOTAL               LTE_TARGET_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_MIPI_TPC_EVENT_SIZE              (sizeof(LTE_MIPI_EVENT_TABLE_T)*LTE_MIPI_TPC_EVENT_NUM)
#define NVRAM_EF_EL1_MIPI_TPC_EVENT_TOTAL              LTE_TARGET_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_MIPI_RX_DATA_SIZE                (sizeof(LTE_MIPI_DATA_SUBBAND_TABLE_T)*LTE_MIPI_RX_DATA_NUM)
#define NVRAM_EF_EL1_MIPI_RX_DATA_TOTAL                LTE_TARGET_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_MIPI_TX_DATA_SIZE                (sizeof(LTE_MIPI_DATA_SUBBAND_TABLE_T)*LTE_MIPI_TX_DATA_NUM)
#define NVRAM_EF_EL1_MIPI_TX_DATA_TOTAL                LTE_TARGET_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA_SIZE     sizeof(LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE)
#define NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA_TOTAL    LTE_TARGET_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA2_SIZE     sizeof(LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE)
#define NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA2_TOTAL    LTE_TARGET_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_TAS_FE_DATABASE_CAT_A_SIZE         sizeof(LTE_CUSTOM_TAS_FE_CAT_A_T)
#define NVRAM_EF_EL1_TAS_FE_DATABASE_CAT_A_TOTAL        1
#define NVRAM_EF_EL1_TAS_FE_DATABASE_CAT_B_SIZE         sizeof(LTE_CUSTOM_TAS_FE_CAT_B_T)
#define NVRAM_EF_EL1_TAS_FE_DATABASE_CAT_B_TOTAL        1
#define NVRAM_EF_EL1_TAS_ROUTE_DATABASE_SIZE            sizeof(LTE_CUSTOM_TAS_FE_ROUTE_DATABASE_T)
#define NVRAM_EF_EL1_TAS_ROUTE_DATABASE_TOTAL           1

/*** MIPI BYPASS Feature ***/
#define NVRAM_EF_EL1_MIPI_BYPASS_FEATURE_SIZE                (sizeof(kal_uint16))
#define NVRAM_EF_EL1_MIPI_BYPASS_FEATURE_TOTAL                1

#define NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_SIZE               (sizeof(LTE_MIPI_EVENT_TABLE_T)*LTE_MIPI_TX_EVENT_NUM)
#define NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_TOTAL               1

#define NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_SIZE                (sizeof(LTE_MIPI_DATA_SUBBAND_TABLE_T)*LTE_MIPI_TX_DATA_NUM)
#define NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_TOTAL                1

#define NVRAM_EF_EL1_MIPI_FILTER_TPC_EVENT_SIZE              (sizeof(LTE_MIPI_EVENT_TABLE_T)*LTE_MIPI_TPC_EVENT_NUM)
#define NVRAM_EF_EL1_MIPI_FILTER_TPC_EVENT_TOTAL              LTE_FILTER_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE     sizeof(LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE)
#define NVRAM_EF_EL1_MIPI_FILTER_PA_TPC_SECTION_DATA_TOTAL    LTE_FILTER_MAX_SUPPORT_BAND_NUM

/*** RX Power Offset Feature ***/
#define NVRAM_EF_EL1_RX_POWER_OFFSET_SWITCH_SIZE              sizeof(LTE_CUSTOM_RPO_OPTION_T)
#define NVRAM_EF_EL1_RX_POWER_OFFSET_SWITCH_TOTAL             1

#define NVRAM_EF_EL1_RX_POWER_OFFSET_SIZE                     sizeof(LTE_CUSTOM_RPO_ROUTE_T)
#define NVRAM_EF_EL1_RX_POWER_OFFSET_TOTAL                    LTE_TARGET_MAX_SUPPORT_BAND_NUM

/*** TX Power Backoff Parameters ***/
#define NVRAM_EF_EL1_TX_POWER_BACKOFF_SIZE                   (sizeof(ERF_TX_POWER_BACKOFF_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_TX_POWER_BACKOFF_TOTAL                   1

/*** TX Power Backoff Parameters ***/
#define NVRAM_EF_EL1_TX_MC_VCC_IDX_OFS_SIZE                  (sizeof(ERF_TX_MULTI_CLUSTER_VCC_SHIFT_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_TX_MC_VCC_IDX_OFS_TOTAL                  1

/*** TX Power Backoff Parameters ***/
#define NVRAM_EF_EL1_TX_MC_POW_BF_SIZE                       (sizeof(ERF_TX_MULTI_CLUSTER_POW_BF_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_TX_MC_POW_BF_TOTAL                       1

/*** TX Power Backoff Parameters CCA cases and NS0-2***/
#define NVRAM_EF_EL1_TX_MC_POW_BF_CCA_SIZE                   (sizeof(ERF_TX_MULTI_CLUSTER_POW_BF_CCA_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_TX_MC_POW_BF_CCA_TOTAL                   1

#define NVRAM_EF_EL1_TX_MC_POW_BF_CCA_0_SIZE               (sizeof(ERF_TX_MULTI_CLUSTER_POW_BF_CCA_0_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_TX_MC_POW_BF_CCA_0_TOTAL               1

#define NVRAM_EF_EL1_TX_MC_POW_BF_CCA_1_SIZE               (sizeof(ERF_TX_MULTI_CLUSTER_POW_BF_CCA_1_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_TX_MC_POW_BF_CCA_1_TOTAL               1

#define NVRAM_EF_EL1_TX_MC_POW_BF_CCA_2_SIZE               (sizeof(ERF_TX_MULTI_CLUSTER_POW_BF_CCA_2_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_TX_MC_POW_BF_CCA_2_TOTAL               1

/*** TX Power Conditional Backoff Parameters ***/
#define NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_SIZE            (sizeof(ERF_TX_POWER_BACKOFF_CONDITION_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_TOTAL            1

#define NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_SIZE    (sizeof(ERF_TX_POWER_CONDITIONAL_BACKOFF_TABLE_T)*LTE_TX_CONDI_BF_TBL_CNT)
#define NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_TOTAL    1

/*** TX Power Conditional Backoff Parameters CCA case ***/
#define NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_CCA_SIZE            (sizeof(ERF_TX_POWER_BACKOFF_CONDITION_CCA_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_CCA_TOTAL            1

#define NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA_SIZE    (sizeof(ERF_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA_T)*LTE_TX_CONDI_BF_CCA_TBL_CNT)
#define NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA_TOTAL    1

/*** TX NSFT Power Backoff Parameters ***/
#define NVRAM_EF_EL1_TX_NSFT_POWER_BACKOFF_SIZE               (sizeof(ERF_TX_NSFT_POWER_BACKOFF_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_TX_NSFT_POWER_BACKOFF_TOTAL               1

/*** Transmit Antenna Selection Feature ***/
#define NVRAM_EF_EL1_TAS_FORCE_PARAMETER_SIZE                 sizeof(LTE_RF_TAS_FORCE_PARAMETER_T)
#define NVRAM_EF_EL1_TAS_FORCE_PARAMETER_TOTAL                1

#define NVRAM_EF_EL1_TAS_FEATURE_BY_RAT_SIZE                  sizeof(LTE_CUSTOM_TAS_FEATURE_BY_RAT_T)
#define NVRAM_EF_EL1_TAS_FEATURE_BY_RAT_TOTAL                 1

#define NVRAM_EF_EL1_TAS_FEATURE_ENABLE_SIZE                 (sizeof(LTE_CUSTOM_TAS_FEATURE_ENABLE_T)*LTE_TAS_MAX_FE_ROUTE_NUM)
#define NVRAM_EF_EL1_TAS_FEATURE_ENABLE_TOTAL                 1


/*DAT Feature*/
#define NVRAM_EF_EL1_DAT_FEATURE_ENABLE_SIZE                  (sizeof(kal_uint16))
#define NVRAM_EF_EL1_DAT_FEATURE_ENABLE_TOTAL                 1
   
#define NVRAM_EF_EL1_DAT_ROUTE_DATABASE_SIZE                  (sizeof(LTE_CUSTOM_DAT_FE_ROUTE_DATABASE_T))
#define NVRAM_EF_EL1_DAT_ROUTE_DATABASE_TOTAL                 1

// [ANT Reorg] Route table of ANT default setting
#define NVRAM_EF_EL1_ANT_ROUTE_DATABASE_SIZE                  (sizeof(LTE_CUSTOM_ANT_FE_ROUTE_DATABASE_T))
#define NVRAM_EF_EL1_ANT_ROUTE_DATABASE_TOTAL                 1

/* Split Band Feature */
#define NVRAM_EF_EL1_SPLIT_BAND_DATABASE_SIZE                (sizeof(LTE_RF_SPLIT_BAND_DATABASE_T))
#define NVRAM_EF_EL1_SPLIT_BAND_DATABASE_TOTAL                1

/* Filter Mode Feature */
#define NVRAM_EF_EL1_FILTER_MODE_DATABASE_SIZE               (sizeof(LTE_RF_FILTER_MODE_DATABASE_T))
#define NVRAM_EF_EL1_FILTER_MODE_DATABASE_TOTAL              1

#define NVRAM_EF_EL1_SAR_TX_POWER_OFFSET_SIZE                   sizeof(LTE_SAR_TX_POWER_OFFSET_DATA_T)
#define NVRAM_EF_EL1_SAR_TX_POWER_OFFSET_TOTAL                  LTE_TARGET_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_SIZE               sizeof(LTE_SWTP_TX_POWER_OFFSET_DATA_T)
#define NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_TOTAL              LTE_TARGET_MAX_SUPPORT_BAND_NUM

/*Since SWTP is using new LID: NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_LID, it's need to be remove in 95*/
#define NVRAM_EF_EL1_TX_POWER_OFFSET_SIZE                    sizeof(LTE_TX_POWER_OFFSET_DATA_T)
#define NVRAM_EF_EL1_TX_POWER_OFFSET_TOTAL                   LTE_TARGET_MAX_SUPPORT_BAND_NUM

#define NVRAM_EF_EL1_BAND_IND_CCA_SUPPORT_SIZE              (sizeof(kal_uint8)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_BAND_IND_CCA_SUPPORT_TOTAL              1

#define NVRAM_EF_EL1_BAND_IND_FLT_CCA_SUPPORT_SIZE          (sizeof(kal_uint8)*LTE_FILTER_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_BAND_IND_FLT_CCA_SUPPORT_TOTAL          1
/** EL1D Feature */
#define NVRAM_EF_EL1D_FEATURE_SIZE     sizeof(LTE_EL1D_FEATURE_NVRAM_T)
#define NVRAM_EF_EL1D_FEATURE_TOTAL    1

/** EL1D DPD band indicator */
#define NVRAM_EF_EL1_DPD_BAND_INDICATOR_SIZE                     (sizeof(LTE_Band)*LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define NVRAM_EF_EL1_DPD_BAND_INDICATOR_TOTAL                     1

/** EL1D DPD factory cal data */
#define NVRAM_EF_EL1_DPD_FACTORY_CAL_DATA_SIZE                    sizeof(LTE_DPD_GROUP_CAL_DEFAULT_SIZE)
#define NVRAM_EF_EL1_DPD_FACTORY_CAL_DATA_TOTAL                   LTE_MAX_TX_COMP_ROUTE_NUM
        
/** EL1D DPD FILTER factory cal data */
#define NVRAM_EF_EL1_DPD_FILTER_FACTORY_CAL_DATA_SIZE             sizeof(LTE_DPD_GROUP_CAL_DEFAULT_SIZE)
#define NVRAM_EF_EL1_DPD_FILTER_FACTORY_CAL_DATA_TOTAL            LTE_FILTER_MAX_SUPPORT_BAND_NUM

/** EL1D DPD common control data */
#define NVRAM_EF_EL1_DPD_COMMON_CTRL_DATA_SIZE                    sizeof(LTE_DPD_COMMON_CTRL_DEFAULT_SIZE)
#define NVRAM_EF_EL1_DPD_COMMON_CTRL_DATA_TOTAL                   LTE_MAX_TX_COMP_ROUTE_NUM
        
/** EL1D DPD FILTER common control data */
#define NVRAM_EF_EL1_DPD_FILTER_COMMON_CTRL_DATA_SIZE             sizeof(LTE_DPD_COMMON_CTRL_DEFAULT_SIZE)
#define NVRAM_EF_EL1_DPD_FILTER_COMMON_CTRL_DATA_TOTAL            LTE_FILTER_MAX_SUPPORT_BAND_NUM

/** EL1D DPD PA TPC section data */
#define NVRAM_EF_EL1_DPD_MIPI_PA_TPC_SECTION_DATA_SIZE            sizeof(LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE)
#define NVRAM_EF_EL1_DPD_MIPI_PA_TPC_SECTION_DATA_TOTAL           LTE_TARGET_MAX_SUPPORT_BAND_NUM

/** EL1D DPD FILTER PA TPC section data */
#define NVRAM_EF_EL1_DPD_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE     sizeof(LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE)
#define NVRAM_EF_EL1_DPD_MIPI_FILTER_PA_TPC_SECTION_DATA_TOTAL    LTE_FILTER_MAX_SUPPORT_BAND_NUM

/** EL1D PCFE and DPD OTFC parameters in custom file*/
#define NVRAM_EF_EL1_DPD_PCFE_OTFC_CUSTOM_PARA_SIZE               sizeof(LTE_PCFE_DPD_OTFC_CUSTOM_PARA_T)
#define NVRAM_EF_EL1_DPD_PCFE_OTFC_CUSTOM_PARA_TOTAL              1

/** EL1D PCFE and DPD OTFC parameters not in custom file*/
#define NVRAM_EF_EL1_DPD_PCFE_OTFC_NONCUSTOM_PARA_SIZE            sizeof(LTE_PCFE_DPD_OTFC_NONCUSTOM_PARA_T)
#define NVRAM_EF_EL1_DPD_PCFE_OTFC_NONCUSTOM_PARA_TOTAL           1

/** EL1D DPD bypasss DPD mode by NS in custom file*/
#define NVRAM_EF_EL1_DPD_BYPASS_DPD_NS_INFO_SIZE                 sizeof(LTE_DPD_BYPASS_DPD_NS_INFO_T)
#define NVRAM_EF_EL1_DPD_BYPASS_DPD_NS_INFO_TOTAL                DPD_BYPASS_DPD_NS_INFO_MAX_TOTAL_NUM

#ifdef __cplusplus
}
#endif 

#endif
#endif /* __ASBAND_NVRAM_DEF_H__ */ 
