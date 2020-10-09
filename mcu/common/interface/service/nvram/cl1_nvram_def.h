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
 * cl1_nvram_def.h
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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __CL1_NVRAM_DEF_H__
#define __CL1_NVRAM_DEF_H__

#if defined (__C2K_RAT__)

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"

// LID Enums

typedef enum
{
   NVRAM_EF_CL1_CUST_PARAM_LID                          = NVRAM_LID_GRP_CL1(0),
   NVRAM_EF_CL1_CUST_BPI_CFG_LID                        = NVRAM_LID_GRP_CL1(1),
   NVRAM_EF_CL1_MIPI_PARAM_LID                          = NVRAM_LID_GRP_CL1(2),
   NVRAM_EF_CL1_MIPI_RX_EVENT_LID                       = NVRAM_LID_GRP_CL1(3),
   NVRAM_EF_CL1_MIPI_RX_DATA_LID                        = NVRAM_LID_GRP_CL1(4),
   NVRAM_EF_CL1_MIPI_TX_EVENT_LID                       = NVRAM_LID_GRP_CL1(5),
   NVRAM_EF_CL1_MIPI_TX_DATA_LID                        = NVRAM_LID_GRP_CL1(6),
   NVRAM_EF_CL1_MIPI_TPC_EVENT_LID                      = NVRAM_LID_GRP_CL1(7),
   NVRAM_EF_CL1_MIPI_TPC_DATA_LID                       = NVRAM_LID_GRP_CL1(8),
   NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_1XRTT_LID          = NVRAM_LID_GRP_CL1(9),
   NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_EVDO_LID           = NVRAM_LID_GRP_CL1(10),
   NVRAM_EF_CL1_MIPI_ETM_TX_EVENT_LID                   = NVRAM_LID_GRP_CL1(11),
   NVRAM_EF_CL1_MIPI_ETM_TX_DATA_LID                    = NVRAM_LID_GRP_CL1(12),
   NVRAM_EF_CL1_MIPI_ETM_TPC_EVENT_LID                  = NVRAM_LID_GRP_CL1(13),
   NVRAM_EF_CL1_MIPI_ETM_TPC_DATA_LID                   = NVRAM_LID_GRP_CL1(14),
   NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_1XRTT_LID      = NVRAM_LID_GRP_CL1(15),
   NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_EVDO_LID       = NVRAM_LID_GRP_CL1(16),
   
   /*** TAS ***//*VAR*/
   NVRAM_EF_CL1_CUST_TAS_FEATURE_LID                    = NVRAM_LID_GRP_CL1(17),
   NVRAM_EF_CL1_CUST_TAS_FE_ROUTE_DATABASE_LID          = NVRAM_LID_GRP_CL1(18),
   NVRAM_EF_CL1_CUST_TAS_FE_CAT_A_LID                   = NVRAM_LID_GRP_CL1(19),
   NVRAM_EF_CL1_CUST_TAS_FE_CAT_B_LID                   = NVRAM_LID_GRP_CL1(20),
   NVRAM_EF_CL1_CUST_TAS_FE_CAT_C_LID                   = NVRAM_LID_GRP_CL1(21),
   NVRAM_EF_CL1_CUST_TUNER_FE_ROUTE_TABLE_LID           = NVRAM_LID_GRP_CL1(22),
   NVRAM_EF_CL1_CUST_TUNER_LID                          = NVRAM_LID_GRP_CL1(23),
   /*** TAS ***//*ARRAY*/
   NVRAM_EF_CL1_CUST_TUNER_ROUTE_EVENT_LID              = NVRAM_LID_GRP_CL1(24),
   NVRAM_EF_CL1_CUST_TUNER_ROUTE_DATA_LID               = NVRAM_LID_GRP_CL1(25),
   NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_A_LID                = NVRAM_LID_GRP_CL1(26),
   NVRAM_EF_CL1_CUST_TAS_DATA_CAT_A_LID                 = NVRAM_LID_GRP_CL1(27),
   NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_B_LID                = NVRAM_LID_GRP_CL1(28),
   NVRAM_EF_CL1_CUST_TAS_DATA_CAT_B_LID                 = NVRAM_LID_GRP_CL1(29),      
   NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_C_LID                = NVRAM_LID_GRP_CL1(30),
   NVRAM_EF_CL1_CUST_TAS_DATA_CAT_C_LID                 = NVRAM_LID_GRP_CL1(31),
   
   NVRAM_EF_CL1_CUST_TAS_CFG_LID                        = NVRAM_LID_GRP_CL1(32),
   NVRAM_EF_CL1_CUST_ELNA_CFG_LID                       = NVRAM_LID_GRP_CL1(33),
   NVRAM_EF_CL1_CUST_ELNA_EVENT_LID                     = NVRAM_LID_GRP_CL1(34),
   NVRAM_EF_CL1_CUST_ELNA_DATA_LID                      = NVRAM_LID_GRP_CL1(35),
  
   NVRAM_EF_CL1_TX_POWER_BACK_OFF_LID                   = NVRAM_LID_GRP_CL1(36),
   NVRAM_EF_CL1_TX_POWER_OFFSET_LID                     = NVRAM_LID_GRP_CL1(37),
   
   NVRAM_EF_CL1_TAS_TST_CONFIG_LID						= NVRAM_LID_GRP_CL1(38),
   NVRAM_EF_CL1_DAT_FE_ROUTE_DATABASE_LID				= NVRAM_LID_GRP_CL1(39),
   NVRAM_EF_CL1_DAT_FE_CAT_A_DATABASE_LID				= NVRAM_LID_GRP_CL1(40),
   NVRAM_EF_CL1_DAT_FE_CAT_B_DATABASE_LID				= NVRAM_LID_GRP_CL1(41),

   NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_A_LID				= NVRAM_LID_GRP_CL1(42),
   NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_A_LID					= NVRAM_LID_GRP_CL1(43),

   NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_B_LID				= NVRAM_LID_GRP_CL1(44),
   NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_B_LID					= NVRAM_LID_GRP_CL1(45),
   NVRAM_EF_CL1_SAR_TX_POWER_OFFSET_LID					= NVRAM_LID_GRP_CL1(46),
   NVRAM_EF_CL1_L1D_TX_POWER_OFFSET_LID                 = NVRAM_LID_GRP_CL1(47),

   NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_1XRTT_LID      = NVRAM_LID_GRP_CL1(48),
   NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_EVDO_LID       = NVRAM_LID_GRP_CL1(49),
   
   NVRAM_EF_CL1_DPD_COMMON_CTRL_LID						= NVRAM_LID_GRP_CL1(50),
   NVRAM_EF_CL1_PCFE_DPD_OTFC_CUSTOM_PARA_LID			= NVRAM_LID_GRP_CL1(51),
   
   /* WARNING: DO NOT modify the last LID */
   NVRAM_EF_CL1_LAST_LID                                = NVRAM_LID_GRP_CL1(255)
}nvram_lid_cl1_enum;

// VERNO

#define NVRAM_EF_CL1_CUST_PARAM_LID_VERNO                          "001"
#define NVRAM_EF_CL1_CUST_BPI_CFG_LID_VERNO                        "001"
#define NVRAM_EF_CL1_MIPI_PARAM_LID_VERNO                          "001"
#define NVRAM_EF_CL1_MIPI_RX_EVENT_LID_VERNO                       "001"
#define NVRAM_EF_CL1_MIPI_RX_DATA_LID_VERNO                        "001"
#define NVRAM_EF_CL1_MIPI_TX_EVENT_LID_VERNO                       "001"
#define NVRAM_EF_CL1_MIPI_TX_DATA_LID_VERNO                        "001"
#define NVRAM_EF_CL1_MIPI_TPC_EVENT_LID_VERNO                      "001"
#define NVRAM_EF_CL1_MIPI_TPC_DATA_LID_VERNO                       "001"
#define NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_1XRTT_LID_VERNO          "001"
#define NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_EVDO_LID_VERNO           "001"
#define NVRAM_EF_CL1_MIPI_ETM_TX_EVENT_LID_VERNO                   "001"
#define NVRAM_EF_CL1_MIPI_ETM_TX_DATA_LID_VERNO                    "001"
#define NVRAM_EF_CL1_MIPI_ETM_TPC_EVENT_LID_VERNO                  "001"
#define NVRAM_EF_CL1_MIPI_ETM_TPC_DATA_LID_VERNO                   "001"
#define NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_1XRTT_LID_VERNO      "001"
#define NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_EVDO_LID_VERNO       "001"
/*** TAS ***//*VAR*/
#define NVRAM_EF_CL1_CUST_TAS_FEATURE_LID_VERNO                    "001"
#define NVRAM_EF_CL1_CUST_TAS_FE_ROUTE_DATABASE_LID_VERNO          "001"
#define NVRAM_EF_CL1_CUST_TAS_FE_CAT_A_LID_VERNO                   "001"
#define NVRAM_EF_CL1_CUST_TAS_FE_CAT_B_LID_VERNO                   "001"
#define NVRAM_EF_CL1_CUST_TAS_FE_CAT_C_LID_VERNO                   "001"
#define NVRAM_EF_CL1_CUST_TUNER_FE_ROUTE_TABLE_LID_VERNO           "001"
#define NVRAM_EF_CL1_CUST_TUNER_LID_VERNO                          "001"
/*** TAS ***//*ARRAY*/
#define NVRAM_EF_CL1_CUST_TUNER_ROUTE_EVENT_LID_VERNO              "001"
#define NVRAM_EF_CL1_CUST_TUNER_ROUTE_DATA_LID_VERNO               "001"

#define NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_A_LID_VERNO                "001"
#define NVRAM_EF_CL1_CUST_TAS_DATA_CAT_A_LID_VERNO                 "001"

#define NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_B_LID_VERNO                "001"
#define NVRAM_EF_CL1_CUST_TAS_DATA_CAT_B_LID_VERNO                 "001"
                                                             
#define NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_C_LID_VERNO                "001"
#define NVRAM_EF_CL1_CUST_TAS_DATA_CAT_C_LID_VERNO                 "001"

/*ELNA*/
#define NVRAM_EF_CL1_CUST_ELNA_CFG_LID_VERNO                       "001"
#define NVRAM_EF_CL1_CUST_ELNA_EVENT_LID_VERNO                     "001"
#define NVRAM_EF_CL1_CUST_ELNA_DATA_LID_VERNO                      "001"

#define NVRAM_EF_CL1_TX_POWER_BACK_OFF_LID_VERNO                   "001"
#define NVRAM_EF_CL1_TX_POWER_OFFSET_LID_VERNO                     "002"
#define NVRAM_EF_CL1_TAS_TST_CONFIG_LID_VERNO					   "001"
/*DAT*/
#define NVRAM_EF_CL1_DAT_FE_ROUTE_DATABASE_LID_VERNO			   "001"
#define NVRAM_EF_CL1_DAT_FE_CAT_A_DATABASE_LID_VERNO			   "001"
#define NVRAM_EF_CL1_DAT_FE_CAT_B_DATABASE_LID_VERNO			   "001"
#define NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_A_LID_VERNO				   "001"
#define NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_A_LID_VERNO				   "001"
#define NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_B_LID_VERNO				   "001"
#define NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_B_LID_VERNO				   "001"

#define NVRAM_EF_CL1_SAR_TX_POWER_OFFSET_LID_VERNO				   "001"
#define NVRAM_EF_CL1_L1D_TX_POWER_OFFSET_LID_VERNO                 "000"

#define NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_1XRTT_LID_VERNO      "001"
#define NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_EVDO_LID_VERNO       "001"
/*DPD*/
#define NVRAM_EF_CL1_DPD_COMMON_CTRL_LID_VERNO				       "001"
#define NVRAM_EF_CL1_PCFE_DPD_OTFC_CUSTOM_PARA_LID_VERNO		   "001"








/*this tx power offset adjustment is set for verizon case*/
#include "cl1_rf_public.h"
typedef struct
{
  kal_uint16 accTxPwrOffset[SYS_BAND_CLASS_MAX];/*tx power offset  in dB of band0-20, access tx power += accTxPwrOffset[band], default 0*/
  kal_uint16 maxPwrbackoff[SYS_BAND_CLASS_MAX];/*access max power backoff of band0-20, max power -= maxPwrbackoff[band], default 0*/
}CL1_L1D_TX_POWER_OFFSET_T;
// Size and Total 

#define NVRAM_EF_CL1_CUST_PARAM_SIZE                               sizeof(CL1D_RF_CUST_PARAM_T)
#define NVRAM_EF_CL1_CUST_BPI_CFG_SIZE                             sizeof(CL1D_RF_CUST_BPI_CFG_T)
#define NVRAM_EF_CL1_MIPI_PARAM_SIZE                               sizeof(CL1D_RF_MIPI_PARAM_T)
#define NVRAM_EF_CL1_MIPI_RX_EVENT_SIZE                            sizeof(CL1D_RF_MIPI_EVENT_TABLE_T) * MIPI_RX_EVENT_MAX_NUM
#define NVRAM_EF_CL1_MIPI_RX_DATA_SIZE                             sizeof(CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T) * MIPI_RX_DATA_MAX_NUM
#define NVRAM_EF_CL1_MIPI_TX_EVENT_SIZE                            sizeof(CL1D_RF_MIPI_EVENT_TABLE_T) * MIPI_TX_EVENT_MAX_NUM
#define NVRAM_EF_CL1_MIPI_TX_DATA_SIZE                             sizeof(CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T) * MIPI_TX_DATA_MAX_NUM
#define NVRAM_EF_CL1_MIPI_TPC_EVENT_SIZE                           sizeof(CL1D_RF_MIPI_EVENT_TABLE_T) * MIPI_TPC_EVENT_MAX_NUM
#define NVRAM_EF_CL1_MIPI_TPC_DATA_SIZE                            sizeof(CL1D_RF_MIPI_DATA_TABLE_T) * MIPI_TPC_DATA_MAX_NUM
#define NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_1XRTT_SIZE               sizeof(CL1D_RF_TPC_SECTION_TABLE_T) * MIPI_PA_SECTION_DATA_MAX_NUM
#define NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_EVDO_SIZE                sizeof(CL1D_RF_TPC_SECTION_TABLE_T) * MIPI_PA_SECTION_DATA_MAX_NUM
#define NVRAM_EF_CL1_MIPI_ETM_TX_EVENT_SIZE                        sizeof(CL1D_RF_MIPI_EVENT_TABLE_T) * MIPI_ETM_TX_EVENT_MAX_NUM
#define NVRAM_EF_CL1_MIPI_ETM_TX_DATA_SIZE                         sizeof(CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T) * MIPI_ETM_TX_DATA_MAX_NUM
#define NVRAM_EF_CL1_MIPI_ETM_TPC_EVENT_SIZE                       sizeof(CL1D_RF_MIPI_EVENT_TABLE_T) * MIPI_ETM_TPC_EVENT_MAX_NUM
#define NVRAM_EF_CL1_MIPI_ETM_TPC_DATA_SIZE                        sizeof(CL1D_RF_MIPI_DATA_TABLE_T) * MIPI_ETM_TPC_DATA_MAX_NUM
#define NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_1XRTT_SIZE           sizeof(CL1D_RF_TPC_SECTION_TABLE_T) * MIPI_ETM_PA_SECTION_DATA_MAX_NUM
#define NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_EVDO_SIZE            sizeof(CL1D_RF_TPC_SECTION_TABLE_T) * MIPI_ETM_PA_SECTION_DATA_MAX_NUM

/*** TAS ***//*VAR*/
#define NVRAM_EF_CL1_CUST_TAS_FEATURE_SIZE                         sizeof(C2K_CUSTOM_TAS_FEATURE_BY_RAT_T)
#define NVRAM_EF_CL1_CUST_TAS_FE_ROUTE_DATABASE_SIZE               sizeof(C2K_CUSTOM_TAS_FE_ROUTE_DATABASE_T)
#define NVRAM_EF_CL1_CUST_TAS_FE_CAT_A_SIZE                        sizeof(C2K_CUSTOM_TAS_FE_CAT_A_T)
#define NVRAM_EF_CL1_CUST_TAS_FE_CAT_B_SIZE                        sizeof(C2K_CUSTOM_TAS_FE_CAT_B_T)
#define NVRAM_EF_CL1_CUST_TAS_FE_CAT_C_SIZE                        sizeof(C2K_CUSTOM_TAS_FE_CAT_C_T)
#define NVRAM_EF_CL1_CUST_TUNER_FE_ROUTE_TABLE_SIZE                sizeof(C2K_CUSTOM_TUNER_FE_ROUTE_TABLE)
#define NVRAM_EF_CL1_CUST_TUNER_SIZE                               sizeof(C2K_CUSTOM_TUNER_BAND_T)
#define NVRAM_EF_CL1_TAS_TST_CONFIG_SZIE						   sizeof(CL1D_RF_TAS_TST_CONFIG_T)
#define NVRAM_EF_CL1_L1D_TX_POWER_OFFSET_SIZE                      sizeof(CL1_L1D_TX_POWER_OFFSET_T)
/*** TAS ***//*ARRAY*/                                                                                                                         
#define NVRAM_EF_CL1_CUST_TUNER_ROUTE_EVENT_SIZE                   sizeof(CL1D_RF_MIPI_EVENT_TABLE_T) * MIPI_TAS_EVENT_MAX_NUM

#define NVRAM_EF_CL1_CUST_TUNER_ROUTE_DATA_SIZE                    sizeof(CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T) * MIPI_TAS_DATA_MAX_NUM


#define NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_A_SIZE                     sizeof(CL1D_RF_MIPI_EVENT_TABLE_T) * MIPI_TAS_EVENT_MAX_NUM
#define NVRAM_EF_CL1_CUST_TAS_DATA_CAT_A_SIZE                      sizeof(CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T) * MIPI_TAS_DATA_MAX_NUM
#define NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_B_SIZE                     sizeof(CL1D_RF_MIPI_EVENT_TABLE_T) * MIPI_TAS_EVENT_MAX_NUM
#define NVRAM_EF_CL1_CUST_TAS_DATA_CAT_B_SIZE                      sizeof(CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T) * MIPI_TAS_DATA_MAX_NUM
#define NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_C_SIZE                     sizeof(CL1D_RF_MIPI_EVENT_TABLE_T) * MIPI_TAS_EVENT_MAX_NUM
#define NVRAM_EF_CL1_CUST_TAS_DATA_CAT_C_SIZE                      sizeof(CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T) * MIPI_TAS_DATA_MAX_NUM

/*ELNA*/
#define NVRAM_EF_CL1_CUST_ELNA_CFG_SIZE                            sizeof(CL1D_RF_CUST_ELNA_CFG_T)
#define NVRAM_EF_CL1_CUST_ELNA_EVENT_SIZE                          sizeof(CL1D_RF_MIPI_EVENT_TABLE_T)*MIPI_ELNA_EVENT_MAX_NUM

#define NVRAM_EF_CL1_CUST_ELNA_DATA_SIZE                           sizeof(CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T)*MIPI_ELNA_DATA_MAX_NUM

/*TX POWER*/
#define NVRAM_EF_CL1_TX_POWER_BACK_OFF_SIZE                        sizeof(CL1D_RF_TX_POWER_BACK_OFF_T)
#define NVRAM_EF_CL1_TX_POWER_OFFSET_SIZE                          sizeof(CL1D_RF_SAR_TX_POWER_OFFSET_T)
#if IS_C2K_DAT_RFD_CTRL_EN
/*DAT*/
#define NVRAM_EF_CL1_DAT_FE_ROUTE_DATABASE_SIZE					   sizeof(CL1D_RF_DAT_FE_ROUTE_DATABASE_T)
#define NVRAM_EF_CL1_DAT_FE_CAT_A_DATABASE_SIZE					   sizeof(CL1D_RF_DAT_FE_CAT_A_T)
#define NVRAM_EF_CL1_DAT_FE_CAT_B_DATABASE_SIZE					   sizeof(CL1D_RF_DAT_FE_CAT_B_T)
#define NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_A_SIZE				   	   sizeof(CL1D_RF_MIPI_EVENT_TABLE_T)*MIPI_DAT_EVENT_MAX_NUM
#define NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_A_SIZE					   sizeof(CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T)*MIPI_DAT_DATA_MAX_NUM
#define NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_B_SIZE					   sizeof(CL1D_RF_MIPI_EVENT_TABLE_T)*MIPI_DAT_EVENT_MAX_NUM
#define NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_B_SIZE					   sizeof(CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T)*MIPI_DAT_DATA_MAX_NUM
#endif
#define NVRAM_EF_CL1_SAR_TX_POWER_OFFSET_SIZE					   sizeof(CL1D_RF_SAR_TX_POWER_OFFSET_T)
/*TX PA Section DPD*/
#define NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_1XRTT_SIZE           sizeof(CL1D_RF_TPC_SECTION_TABLE_T) * MIPI_PA_SECTION_DATA_MAX_NUM
#define NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_EVDO_SIZE            sizeof(CL1D_RF_TPC_SECTION_TABLE_T) * MIPI_PA_SECTION_DATA_MAX_NUM

#define NVRAM_EF_CL1_DPD_COMMON_CTRL_SIZE			               sizeof(CL1D_RF_DPD_COMMON_CTRL_T)
#define NVRAM_EF_CL1_PCFE_DPD_OTFC_CUSTOM_PARA_SIZE                sizeof(CL1D_RF_PCFE_DPD_OTFC_CUSTOM_PARA_T)



#define NVRAM_EF_CL1_CUST_PARAM_TOTAL                               1
#define NVRAM_EF_CL1_CUST_BPI_CFG_TOTAL                             MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_PARAM_TOTAL                               1
#define NVRAM_EF_CL1_MIPI_RX_EVENT_TOTAL                            MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_RX_DATA_TOTAL                             MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_TX_EVENT_TOTAL                            MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_TX_DATA_TOTAL                             MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_TPC_EVENT_TOTAL                           MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_TPC_DATA_TOTAL                            MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_1XRTT_TOTAL               MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_EVDO_TOTAL                MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_ETM_TX_EVENT_TOTAL                        MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_ETM_TX_DATA_TOTAL                         MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_ETM_TPC_EVENT_TOTAL                       MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_ETM_TPC_DATA_TOTAL                        MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_1XRTT_TOTAL           MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_EVDO_TOTAL            MAX_BAND_NUM

/*** TAS ***//*VAR*/
#define NVRAM_EF_CL1_CUST_TAS_FEATURE_TOTAL                         1
#define NVRAM_EF_CL1_CUST_TAS_FE_ROUTE_DATABASE_TOTAL               1
#define NVRAM_EF_CL1_CUST_TAS_FE_CAT_A_TOTAL                        1
#define NVRAM_EF_CL1_CUST_TAS_FE_CAT_B_TOTAL                        1
#define NVRAM_EF_CL1_CUST_TAS_FE_CAT_C_TOTAL                        1
#define NVRAM_EF_CL1_CUST_TUNER_FE_ROUTE_TABLE_TOTAL                1
#define NVRAM_EF_CL1_CUST_TUNER_TOTAL                               MAX_BAND_NUM

/*** TAS ***//*ARRAY*/                                                              
#define NVRAM_EF_CL1_CUST_TUNER_ROUTE_EVENT_TOTAL                   MAX_BAND_NUM

#define NVRAM_EF_CL1_CUST_TUNER_ROUTE_DATA_TOTAL                    MAX_BAND_NUM







#define NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_A_TOTAL                     MAX_Route_NUM
#define NVRAM_EF_CL1_CUST_TAS_DATA_CAT_A_TOTAL                      MAX_Route_NUM
#define NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_B_TOTAL                     MAX_Route_NUM
#define NVRAM_EF_CL1_CUST_TAS_DATA_CAT_B_TOTAL                      MAX_Route_NUM
#define NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_C_TOTAL                     MAX_Route_NUM
#define NVRAM_EF_CL1_CUST_TAS_DATA_CAT_C_TOTAL                      MAX_Route_NUM

/*ELNA*/
#define NVRAM_EF_CL1_CUST_ELNA_CFG_TOTAL                            1
#define NVRAM_EF_CL1_CUST_ELNA_EVENT_TOTAL                          MAX_ELNA_NUM
#define NVRAM_EF_CL1_CUST_ELNA_DATA_TOTAL                           MAX_ELNA_NUM

/*TX POWER*/
#define NVRAM_EF_CL1_TX_POWER_BACK_OFF_TOTAL                        MAX_BAND_NUM
#define NVRAM_EF_CL1_TX_POWER_OFFSET_TOTAL                          MAX_BAND_NUM
#define NVRAM_EF_CL1_TAS_TST_CFG_TOTAL 						        1
/*DAT*/
#define NVRAM_EF_CL1_DAT_FE_ROUTE_DATABASE_TOTAL					1
#define NVRAM_EF_CL1_DAT_FE_CAT_A_DATABASE_TOTAL					1
#define NVRAM_EF_CL1_DAT_FE_CAT_B_DATABASE_TOTAL					1
#define NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_A_TOTAL						MAX_DAT_CAT_A_Route_NUM
#define NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_A_TOTAL						MAX_DAT_CAT_A_Route_NUM
#define NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_B_TOTAL						MAX_DAT_CAT_B_Route_NUM
#define NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_B_TOTAL						MAX_DAT_CAT_B_Route_NUM

#define NVRAM_EF_CL1_SAR_TX_POWER_OFFSET_TOTAL						MAX_BAND_NUM
#define NVRAM_EF_CL1_L1D_TX_POWER_OFFSET_TOTAL                      1
/*TX DPD PA Section*/
#define NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_1XRTT_TOTAL           MAX_BAND_NUM
#define NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_EVDO_TOTAL            MAX_BAND_NUM
#define NVRAM_EF_CL1_DPD_COMMON_CTRL_TOTAL		                    MAX_BAND_NUM
#define NVRAM_EF_CL1_PCFE_DPD_OTFC_CUSTOM_PARA_TOTAL                1

#undef NVRAM_ITEM_RF_CUST
#undef NVRAM_ITEM_MIPI
#undef NVRAM_ITEM_RF_CAL
#undef NVRAM_ITEM_RF_POC
#undef NVRAM_ITEM_RF_TAS_VAR
#undef NVRAM_ITEM_RF_TAS_ARRAY
#undef NVRAM_ITEM_ELNA_VAR
#undef NVRAM_ITEM_ELNA_ARRAY
#undef NVRAM_ITEM_TX_POWER_VAR
#undef NVRAM_ITEM_RF_TAS_TST
#define NVRAM_ITEM_RF_CUST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
#define NVRAM_ITEM_MIPI(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
#define NVRAM_ITEM_RF_CAL(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
#define NVRAM_ITEM_RF_POC(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
/*** TAS LID REC SIZE ***/
#define NVRAM_ITEM_RF_TAS_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
#define NVRAM_ITEM_RF_TAS_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
/*ELNA*/
#define NVRAM_ITEM_ELNA_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
#define NVRAM_ITEM_ELNA_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
/*TX POWER*/
#define NVRAM_ITEM_TX_POWER_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
#define NVRAM_ITEM_RF_TAS_TST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)

#include "cl1_nvram_id.h"

#ifdef __cplusplus
}
#endif 

#endif /*__C2K_RAT__ */
#endif /* __CL1_NVRAM_DEF_H__ */

