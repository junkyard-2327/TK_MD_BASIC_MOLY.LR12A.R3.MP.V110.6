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
 * mml1_rf_pcore_custom_data.c
 *
 * Project:
 * --------
 * MT6290
 *
 * Description:
 * ------------
 * MML1 RF Custom Data
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
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
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*===============================================================================*/
#include "mmrf_common_cid.h"

#include "kal_general_types.h"
#include "kal_public_api.h"

#include "mml1_rf_global.h"
#include "mml1_rf_cal_def.h"
#include "mml1_custom_rf.h"
#include "mml1_custom_elna.h"
#include "mml1_custom_mipi.h"
//#include "mml1_rf_interface.h"

#include "mml1_rf_pcore_custom_data.h"
#if defined(__MTK_TARGET__)
#include "mml1_custom_drdi.h"
#endif

#include "mmrf_cc_global.h"


#if defined (__MTK_TARGET__)
#else
const MML1_FE_ELNA_RAW_T MML1CUSTOMFEDATA_SetDefault[MML1_FE_ELNA_NUM] = 
{
   {                                                                                                  
      {
         MML1_FE_ELNA_NONE,   MML1_FE_ELNA_NONE_CATEGORY_SetDefault,  MML1_FE_ELNA_NONE_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA_NONE_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA_NONE_PIN0_SetDefault, {PDATA_MML1_FE_ELNA_NONE_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA_NONE_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA_NONE_PIN1_SetDefault, {PDATA_MML1_FE_ELNA_NONE_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA_NONE_PIN1_BYPASS_DATA_SetDefault}}
         },
      },      
      MML1_FE_ELNA_NONE_MIPI_DATA_SetDefault,    
   },
   {                                                                                                  
      {
         MML1_FE_ELNA1,   MML1_FE_ELNA1_CATEGORY_SetDefault,  MML1_FE_ELNA1_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA1_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA1_PIN0_SetDefault, {PDATA_MML1_FE_ELNA1_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA1_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA1_PIN1_SetDefault, {PDATA_MML1_FE_ELNA1_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA1_PIN1_BYPASS_DATA_SetDefault}}
         },
      },      
      MML1_FE_ELNA1_MIPI_DATA_SetDefault,    
   },
   {                                                                                                  
      {
         MML1_FE_ELNA2,   MML1_FE_ELNA2_CATEGORY_SetDefault,  MML1_FE_ELNA2_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA2_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA2_PIN0_SetDefault, {PDATA_MML1_FE_ELNA2_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA2_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA2_PIN1_SetDefault, {PDATA_MML1_FE_ELNA2_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA2_PIN1_BYPASS_DATA_SetDefault}}
         },
      }, 
      MML1_FE_ELNA2_MIPI_DATA_SetDefault,
   },
   {                                                                                                  
      {
         MML1_FE_ELNA3,   MML1_FE_ELNA3_CATEGORY_SetDefault,  MML1_FE_ELNA3_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA3_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA3_PIN0_SetDefault, {PDATA_MML1_FE_ELNA3_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA3_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA3_PIN1_SetDefault, {PDATA_MML1_FE_ELNA3_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA3_PIN1_BYPASS_DATA_SetDefault}}
         },
      }, 
      MML1_FE_ELNA3_MIPI_DATA_SetDefault,
   },
   {                                                                                                  
      {
         MML1_FE_ELNA4,   MML1_FE_ELNA4_CATEGORY_SetDefault,  MML1_FE_ELNA4_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA4_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA4_PIN0_SetDefault, {PDATA_MML1_FE_ELNA4_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA4_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA4_PIN1_SetDefault, {PDATA_MML1_FE_ELNA4_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA4_PIN1_BYPASS_DATA_SetDefault}}
         },
      }, 
      MML1_FE_ELNA4_MIPI_DATA_SetDefault,
   },
   {                                                                                                  
      {
         MML1_FE_ELNA5,   MML1_FE_ELNA5_CATEGORY_SetDefault,  MML1_FE_ELNA5_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA5_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA5_PIN0_SetDefault, {PDATA_MML1_FE_ELNA5_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA5_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA5_PIN1_SetDefault, {PDATA_MML1_FE_ELNA5_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA5_PIN1_BYPASS_DATA_SetDefault}}
         },
      }, 
      MML1_FE_ELNA5_MIPI_DATA_SetDefault,
   },
   {                                                                                                  
      {
         MML1_FE_ELNA6,   MML1_FE_ELNA6_CATEGORY_SetDefault,  MML1_FE_ELNA6_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA6_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA6_PIN0_SetDefault, {PDATA_MML1_FE_ELNA6_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA6_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA6_PIN1_SetDefault, {PDATA_MML1_FE_ELNA6_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA6_PIN1_BYPASS_DATA_SetDefault}}
         },
      }, 
      MML1_FE_ELNA6_MIPI_DATA_SetDefault,
   },
   {                                                                                                  
      {
         MML1_FE_ELNA7,   MML1_FE_ELNA7_CATEGORY_SetDefault,  MML1_FE_ELNA7_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA7_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA7_PIN0_SetDefault, {PDATA_MML1_FE_ELNA7_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA7_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA7_PIN1_SetDefault, {PDATA_MML1_FE_ELNA7_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA7_PIN1_BYPASS_DATA_SetDefault}}
         },
      }, 
      MML1_FE_ELNA7_MIPI_DATA_SetDefault,
   },
   {                                                                                                  
      {
         MML1_FE_ELNA8,   MML1_FE_ELNA8_CATEGORY_SetDefault,  MML1_FE_ELNA8_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA8_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA8_PIN0_SetDefault, {PDATA_MML1_FE_ELNA8_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA8_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA8_PIN1_SetDefault, {PDATA_MML1_FE_ELNA8_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA8_PIN1_BYPASS_DATA_SetDefault}}
         },
      }, 
      MML1_FE_ELNA8_MIPI_DATA_SetDefault,
   },
   {                                                                                                  
      {
         MML1_FE_ELNA9,   MML1_FE_ELNA9_CATEGORY_SetDefault,  MML1_FE_ELNA9_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA9_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA9_PIN0_SetDefault, {PDATA_MML1_FE_ELNA9_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA9_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA9_PIN1_SetDefault, {PDATA_MML1_FE_ELNA9_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA9_PIN1_BYPASS_DATA_SetDefault}}
         },
      }, 
      MML1_FE_ELNA9_MIPI_DATA_SetDefault,
   },
   {                                                                                                  
      {
         MML1_FE_ELNA10,   MML1_FE_ELNA10_CATEGORY_SetDefault,  MML1_FE_ELNA10_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA10_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA10_PIN0_SetDefault, {PDATA_MML1_FE_ELNA10_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA10_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA10_PIN1_SetDefault, {PDATA_MML1_FE_ELNA10_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA10_PIN1_BYPASS_DATA_SetDefault}}
         },
      }, 
      MML1_FE_ELNA10_MIPI_DATA_SetDefault,
   },
   {                                                                                                  
      {
         MML1_FE_ELNA11,   MML1_FE_ELNA11_CATEGORY_SetDefault,  MML1_FE_ELNA11_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA11_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA11_PIN0_SetDefault, {PDATA_MML1_FE_ELNA11_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA11_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA11_PIN1_SetDefault, {PDATA_MML1_FE_ELNA11_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA11_PIN1_BYPASS_DATA_SetDefault}}
         },
      }, 
      MML1_FE_ELNA11_MIPI_DATA_SetDefault,
   },
   {                                                                                                  
      {
         MML1_FE_ELNA12,   MML1_FE_ELNA12_CATEGORY_SetDefault,  MML1_FE_ELNA12_CONTROL_INTERFACE_SetDefault,  MML1_FE_ELNA12_SETTLING_TIME_SetDefault,
         {
            {PDATA_MML1_FE_ELNA12_PIN0_SetDefault, {PDATA_MML1_FE_ELNA12_PIN0_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA12_PIN0_BYPASS_DATA_SetDefault}}, 
            {PDATA_MML1_FE_ELNA12_PIN1_SetDefault, {PDATA_MML1_FE_ELNA12_PIN1_ON_DATA_SetDefault, PDATA_MML1_FE_ELNA12_PIN1_BYPASS_DATA_SetDefault}}
         },
      }, 
      MML1_FE_ELNA12_MIPI_DATA_SetDefault,
   },
};
#endif

const sMML1_RF_CUSTOM_INPUT_DATA MML1_RF_CUSTOM_INPUT_DATA =
{
#if defined(ELBRUS)
   0x12345678,                                                            // the special pattern of start position
   1,                                                                     // Struct Version ID
   MMRF_TYPE,                                                             // MMRF Type
   1,                                                                     // default is false, and will be changed  as true after tool update
   {
      MML1_CLK1_EN_SetDefault,
      MML1_CLK2_EN_SetDefault,
      MML1_CLK3_EN_SetDefault,
      MML1_CLK4_EN_SetDefault
   },
   {
      MML1_CLK1_DRIVING_SetDefault,
      MML1_CLK2_DRIVING_SetDefault,
      MML1_CLK3_DRIVING_SetDefault,
      MML1_CLK4_DRIVING_SetDefault
   },
   {
      {
         PRX1_IQ_SWAP_EN_SetDefault, PRX2_IQ_SWAP_EN_SetDefault,
         PRX3_IQ_SWAP_EN_SetDefault, PRX4_IQ_SWAP_EN_SetDefault,
      },
      {
         DRX1_IQ_SWAP_EN_SetDefault, DRX2_IQ_SWAP_EN_SetDefault,
         DRX3_IQ_SWAP_EN_SetDefault, DRX4_IQ_SWAP_EN_SetDefault,
      },
   },
   {
      {
         PRX1_I_INV_EN_SetDefault, PRX2_I_INV_EN_SetDefault,
         PRX3_I_INV_EN_SetDefault, PRX4_I_INV_EN_SetDefault,
      },
      {
         PRX1_Q_INV_EN_SetDefault, PRX2_Q_INV_EN_SetDefault,
         PRX3_Q_INV_EN_SetDefault, PRX4_Q_INV_EN_SetDefault,
      },
      {
         DRX1_I_INV_EN_SetDefault, DRX2_I_INV_EN_SetDefault,
         DRX3_I_INV_EN_SetDefault, DRX4_I_INV_EN_SetDefault,
      },
      {
         DRX1_Q_INV_EN_SetDefault, DRX2_Q_INV_EN_SetDefault,
         DRX3_Q_INV_EN_SetDefault, DRX4_Q_INV_EN_SetDefault,
      },
   },
   0x87654321,                                                            //the special pattern of end2 position
#elif IS_MML1_CHIP_MT6739
   0x12345678,                                                            // the special pattern of start position
   1,                                                                     // Struct Version ID
   MMRF_TYPE,                                                             // MMRF Type
   1,                                                                     // default is false, and will be changed  as true after tool update
   {
      MML1_CLK1_EN_SetDefault,
      MML1_CLK2_EN_SetDefault,
      MML1_CLK3_EN_SetDefault,
      MML1_CLK4_EN_SetDefault
   },
   {
      MML1_CLK1_DRIVING_SetDefault,
      MML1_CLK2_DRIVING_SetDefault,
      MML1_CLK3_DRIVING_SetDefault,
      MML1_CLK4_DRIVING_SetDefault
   },
   {
      {
         PRX1_IQ_SWAP_EN_SetDefault
      },
      {
         DRX1_IQ_SWAP_EN_SetDefault
      },
   },
   {
      {
         PRX1_I_INV_EN_SetDefault
      },
      {
         PRX1_Q_INV_EN_SetDefault
      },
      {
         DRX1_I_INV_EN_SetDefault
      },
      {
         DRX1_Q_INV_EN_SetDefault
      },
   },
   0x87654321,                                                            //the special pattern of end2 position
#else
   0x12345678,                                                            // the special pattern of start position
   1,                                                                     // Struct Version ID
   MMRF_TYPE,                                                             // MMRF Type
   1,                                                                     // default is false, and will be changed  as true after tool update
   {
      MML1_CLK1_EN_SetDefault,
      MML1_CLK2_EN_SetDefault,
      MML1_CLK3_EN_SetDefault,
      MML1_CLK4_EN_SetDefault
   },
   {
      MML1_CLK1_DRIVING_SetDefault,
      MML1_CLK2_DRIVING_SetDefault,
      MML1_CLK3_DRIVING_SetDefault,
      MML1_CLK4_DRIVING_SetDefault
   },
   {
      {
         PRX1_IQ_SWAP_EN_SetDefault, PRX2_IQ_SWAP_EN_SetDefault,
      },
      {
         DRX1_IQ_SWAP_EN_SetDefault, DRX2_IQ_SWAP_EN_SetDefault,
      },
   },
   {
      {
         PRX1_I_INV_EN_SetDefault, PRX2_I_INV_EN_SetDefault,
      },
      {
         PRX1_Q_INV_EN_SetDefault, PRX2_Q_INV_EN_SetDefault,
      },
      {
         DRX1_I_INV_EN_SetDefault, DRX2_I_INV_EN_SetDefault,
      },
      {
         DRX1_Q_INV_EN_SetDefault, DRX2_Q_INV_EN_SetDefault,
      },
   },
   0x87654321,                                                            //the special pattern of end2 position
#endif
};

const kal_uint32 MML1_RF_CUSTOM_BPI_TPC_CONTROL_SetDefault = MML1_BPI_TPC_CONTROL_ENABLE_SetDefault;

const sMML1_RF_POC_DATA MML1_RF_POC_DATA =
{
   {  //MML1_RFIC_POC_Data
      {  //common_poc_data
         {  //unused[10]
            MMRFC_TX_LPF_NOMINAL_VALUE,
#if   defined(MT6179_RF)
            MMRFC_TX_LPF_NOMINAL_VALUE, // MT6179 has two RF
#else
            0,
#endif            
            0, 0, 0, 0, 0, 0, 0, 0
         },
      },
   },
};

const MML1_CRYSTAL_T MML1_CRYSTAL_CTRL =
{
   FIXAFC_EN,
   VCXO_TYPE,
   MML1_CRYSTAL_ON_PMIC_EN,
};

#if defined(__MTK_TARGET__)
kal_bool mml1_custom_drdiEnable = IS_MML1_DRDI_ENABLE;
kal_uint16 mml1_custom_total_set_nums     = MML1_CUSTOM_TOTAL_SET_NUMS;
kal_uint16 mml1_custom_mmrf_real_set_nums = MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS;
kal_uint16 mml1_custom_gge_real_set_nums  = MML1_DRDI_REMAP_GGE_REAL_SET_NUMS;
kal_uint16 mml1_custom_umts_real_set_nums = MML1_DRDI_REMAP_UMTS_REAL_SET_NUMS;
kal_uint16 mml1_custom_tds_real_set_nums  = MML1_DRDI_REMAP_TDS_REAL_SET_NUMS;
kal_uint16 mml1_custom_lte_real_set_nums  = MML1_DRDI_REMAP_LTE_REAL_SET_NUMS;
#else
kal_bool mml1_custom_drdiEnable           = (0);
kal_uint16 mml1_custom_total_set_nums     = (0);
kal_uint16 mml1_custom_mmrf_real_set_nums = (0);
kal_uint16 mml1_custom_gge_real_set_nums  = (0);
kal_uint16 mml1_custom_umts_real_set_nums = (0);
kal_uint16 mml1_custom_tds_real_set_nums  = (0);
kal_uint16 mml1_custom_lte_real_set_nums  = (0);
#endif

MMRF_AbbDacCalFromNVRAM_T mml1_rf_abb_cal_data_pcore = 
{
 {
  {
    {
       {604,  92, 988, 220, 1692, 284, 3004, 380, 5212, 796, 9148, 1276, 17340, 956, 0, 0},
       {604,  92, 988, 220, 1692, 284, 3004, 380, 5212, 796, 9148, 1276, 17340, 956, 0, 0}
    },
#if (MMRF_ABB_DPDADC_NUMBER>1)
    {
       {604,  92, 988, 220, 1692, 284, 3004, 380, 5212, 796, 9148, 1276, 17340, 956, 0, 0},
       {604,  92, 988, 220, 1692, 284, 3004, 380, 5212, 796, 9148, 1276, 17340, 956, 0, 0}
    }
#endif
  },
  {
    {
       {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
       {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}
    },
 #if (MMRF_ABB_TXDAC_NUMBER>1)
    {
       {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
       {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}
    }
 #endif
  },
 #if (MMRF_ABB_ETDAC_NUMBER>0)
  {
    {
       {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}
    }

  },
 #endif
  {
     {1,36}
  }
 },
 0, //abbCalDataVersion
 0  //abbCalDoneTag
};

const MMRF_PmicSltDataFromNVRAM_T mml1_rf_pmic_slt_data_pcore =
{
   0,   //pmic_nvram_control_enable
   0,   //pmic_reg_read_when_1_write_when_2
   999, //pmic_vrf18_vocal
   999, //pmic_vrf12_vocal
   999, //pmic_vrf18_votrim
   999, //pmic_vrf12_votrim
   999, //pmic_vrf18_vosel
   999  //pmic_vrf12_vosel
};
   
#if (IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT)
/*===============================================================================*/
/* this function can be modified by customer,they can set the mapping rule whatever they want;*/
kal_uint16 mml_rf_drdi_DynamicMappingSettingForCustom(kal_uint32 result_idx)
{
   kal_uint16 MappingRFSettingValue=0;
   MappingRFSettingValue=MML1_DRDI_CUSTOM_ReMapTable[result_idx];
   return MappingRFSettingValue;
}
#endif

/*===============================================================================*/

