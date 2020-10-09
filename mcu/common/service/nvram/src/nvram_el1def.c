/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * nvram_el1def.c
 *
 * Project:
 * --------
 *   MT7206RF
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/
/*===============================================================================================*/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "nvram_data_items.h"

#if defined(__LTE_RAT__)
#include "el1d_rf_custom_data.h"
#include "el1d_rf_dpd_custom_data.h"
#include "el1d_rf_drdi.h"
#include "mml1_dpd_def.h"


void nvram_get_eL1_default_value_to_write(nvram_lid_core_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size)
{

   kal_uint32 i;
   
   /** DRDI */
   EL1D_RF_CUSTOM_DynamicInit();
   EL1D_RF_CUSTOM_DynamicInitMipi();

   EL1D_RF_UpdateDatabaseTable();

   switch (lid)
   {
      /** EL1 RF Calibration */
      case NVRAM_EF_EL1_FREQADJTBL_LID:
      {
         if (buffer != (kal_uint8 *)&FreqAdjustTbl_SetDefault)
         {
            kal_mem_cpy(buffer, &FreqAdjustTbl_SetDefault, sizeof(LTE_FreqAdjustTable));
         }
      }
      break;
      
      case NVRAM_EF_EL1_RX_POWER_OFFSET_SWITCH_LID:
      {
#if IS_4G_RX_POWER_OFFSET_SUPPORT
         if (buffer != (kal_uint8 *)&LTE_RX_POWER_OFFSET_SWITCH_SetDefault)
         {
            kal_mem_cpy(buffer, &LTE_RX_POWER_OFFSET_SWITCH_SetDefault, NVRAM_EF_EL1_RX_POWER_OFFSET_SWITCH_SIZE);
         }
#endif
      }
      break;

      /** EL1D RF General Parammeters */
      case NVRAM_EF_EL1_MPRADJTBL_LID:
      {
#if 0 /* Temporary disabled by jaska 10-Nov-2015 
       * => LTE_MPRAdjustTbl commented out in lrfcustomdata.c to be fixed by RFSW */ 
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
      }
      break;

      case NVRAM_EF_EL1_AMPRADJTBL_LID:
      {
#if 0 /* Temporary disabled by jaska 10-Nov-2015 
       * => LTE_AMPRAdjustTbl commented out in lrfcustomdata.c to be fixed by RFSW */ 
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
      }
      break;

      /** EL1D RF Customization data */
      case NVRAM_EF_EL1_BAND_INDICATOR_LID:
      {
         if (buffer != (kal_uint8 *)lteBandIndArray)
         {
            kal_mem_cpy(buffer, lteBandIndArray, NVRAM_EF_EL1_BAND_INDICATOR_SIZE);
         }
      }
      break;

      case NVRAM_EF_EL1_FE_CA_LINKAGE_DATABASE_LID:
      {
#if IS_LTE_RF_DL_CA_SUPPORT || IS_LTE_RF_UL_CA_SUPPORT
         if (buffer != (kal_uint8 *)(&(LTE_FE_CA_LINKAGE_DATABASE_SetDefault)))
         {
            kal_mem_cpy(buffer, &(LTE_FE_CA_LINKAGE_DATABASE_SetDefault), NVRAM_EF_EL1_FE_CA_LINKAGE_DATABASE_SIZE);
         }
#endif
      }
      break;

      case NVRAM_EF_EL1_EVT_TIME_OFST_TABLE_LID:
      {
         if (buffer != (kal_uint8 *)(&(ERF_EVT_TIME_OFST_TABLE.lteBpiOfst)))
         {
            kal_mem_cpy(buffer, &(ERF_EVT_TIME_OFST_TABLE.lteBpiOfst), NVRAM_EF_EL1_EVT_TIME_OFST_TABLE_SIZE);
         }
      }
      break;

      /* LTE Antenna tuner setting*/
      case NVRAM_EF_EL1_OLAT_FEATURE_LID:
      {
         if (buffer != (kal_uint8 *)(&LTE_OLAT_ENABLE))
         {
            kal_mem_cpy(buffer, &LTE_OLAT_ENABLE, NVRAM_EF_EL1_OLAT_FEATURE_SIZE);
         }
      }
      break;

#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
      
      case NVRAM_EF_EL1_ANT_PDATABASE_LID:
      case NVRAM_EF_EL1_ANT_CA_LINKAGE_DATABASE_LID:
      break;
      
      case NVRAM_EF_EL1_ANT_ROUTE_DATABASE_LID:
      {
         if (buffer != (kal_uint8 *)(&(LTE_ANT_FE_ROUTE_DATABASE_SetDefault)))
         {
            kal_mem_cpy(buffer, &(LTE_ANT_FE_ROUTE_DATABASE_SetDefault), NVRAM_EF_EL1_ANT_ROUTE_DATABASE_SIZE);
         }
      }
      break;

      /* DAT Feature */
      case NVRAM_EF_EL1_DAT_FEATURE_ENABLE_LID:
      {
   #if __IS_EL1D_RF_DAT_SUPPORT__
         if (buffer != (kal_uint8 *)(&(LTE_DAT_FEATURE_ENABLE)))
         {
            kal_mem_cpy(buffer, &(LTE_DAT_FEATURE_ENABLE), NVRAM_EF_EL1_DAT_FEATURE_ENABLE_SIZE);
         }
   #endif
      }
      break;

      case NVRAM_EF_EL1_DAT_ROUTE_DATABASE_LID:
      {
   #if __IS_EL1D_RF_DAT_SUPPORT__
         if (buffer != (kal_uint8 *)(&(LTE_DAT_FE_ROUTE_DATABASE_SetDefault)))
         {
            kal_mem_cpy(buffer, &(LTE_DAT_FE_ROUTE_DATABASE_SetDefault), NVRAM_EF_EL1_DAT_ROUTE_DATABASE_SIZE);
         }
   #endif
      }
      break;
#else
      case NVRAM_EF_EL1_ANT_PDATABASE_LID:
      {
         if (buffer != (kal_uint8 *)(&(LTE_ANT_ROUTE_DATABASE_SetDefault)))
         {
            kal_mem_cpy(buffer, &(LTE_ANT_ROUTE_DATABASE_SetDefault), NVRAM_EF_EL1_ANT_PDATABASE_SIZE);
         }
      }
      break;

      case NVRAM_EF_EL1_ANT_CA_LINKAGE_DATABASE_LID:
      {
   #if IS_LTE_RF_DL_CA_SUPPORT || IS_LTE_RF_UL_CA_SUPPORT
         if (buffer != (kal_uint8 *)(&(LTE_ANT_CA_LINKAGE_DATABASE_SetDefault)))
         {
            kal_mem_cpy(buffer, &(LTE_ANT_CA_LINKAGE_DATABASE_SetDefault), NVRAM_EF_EL1_ANT_CA_LINKAGE_DATABASE_SIZE);
         }
   #endif
      }
      break;

      case NVRAM_EF_EL1_ANT_ROUTE_DATABASE_LID:
      case NVRAM_EF_EL1_DAT_FEATURE_ENABLE_LID:
      case NVRAM_EF_EL1_DAT_ROUTE_DATABASE_LID:
      break;

#endif
      
      case NVRAM_EF_EL1_VPA_CONFIG_DATABASE_LID:
      {
         if (buffer != (kal_uint8 *)(&(LTE_VPA_SOURCE_CONFIG_DATABASE)))
         {
            kal_mem_cpy(buffer, &(LTE_VPA_SOURCE_CONFIG_DATABASE), NVRAM_EF_EL1_VPA_CONFIG_DATABASE_SIZE);
         }
      }
      break;

      case NVRAM_EF_EL1_TAS_FORCE_PARAMETER_LID:
      {
         if (buffer != (kal_uint8 *)(&(ERF_TAS_FORCE_PARAMETER)))
         {
            kal_mem_cpy(buffer, &(ERF_TAS_FORCE_PARAMETER), NVRAM_EF_EL1_TAS_FORCE_PARAMETER_SIZE);
         }
      }
      break;

      case NVRAM_EF_EL1_TAS_FEATURE_BY_RAT_LID:
      {
         if (buffer != (kal_uint8 *)(&(ERF_TAS_FEATURE_BY_RAT_SetDefault)))
         {
            kal_mem_cpy(buffer, &(ERF_TAS_FEATURE_BY_RAT_SetDefault), NVRAM_EF_EL1_TAS_FEATURE_BY_RAT_SIZE);
         }
      }
      break;
      
      case NVRAM_EF_EL1_TAS_FEATURE_ENABLE_LID:
      {
         kal_uint32 i;

         for (i=0;i<LTE_TAS_MAX_FE_ROUTE_NUM;i++)
         {
            kal_mem_cpy(&(ERF_TAS_FEATURE_ENABLE[i]), 
                        &(LTE_TAS_FE_ROUTE_DATABASE_SetDefault.lte_tas_fe_route_db[i].tas_feature_enable), 
                        sizeof(LTE_CUSTOM_TAS_FEATURE_ENABLE_T));
         }

         if (buffer != (kal_uint8 *)ERF_TAS_FEATURE_ENABLE)
         {
            kal_mem_cpy(buffer, ERF_TAS_FEATURE_ENABLE, NVRAM_EF_EL1_TAS_FEATURE_ENABLE_SIZE);
         }
      }
      break;
    
      /* Dynamic Radio-setting Dedicated Image (DRDI) */
      case NVRAM_EF_EL1_CUSTOM_DYNAMIC_INIT_DEBUG_LID:
      {
         if (buffer != (kal_uint8 *)(&LTE_DRDI_DEBUG_INFO))
         {
            kal_mem_cpy(buffer, &LTE_DRDI_DEBUG_INFO, NVRAM_EF_EL1_CUSTOM_DYNAMIC_INIT_DEBUG_SIZE);
         }
      }
      break;

      /* Single ANT Feature */
      case NVRAM_EF_EL1_RF_RX_PATH_CONFIG_LID:
      {
         if (buffer != (kal_uint8 *)(&LTE_RF_RX_PATH_CONFIG_DEFAULT))
         {
            kal_mem_cpy(buffer, &LTE_RF_RX_PATH_CONFIG_DEFAULT, NVRAM_EF_EL1_RF_RX_PATH_CONFIG_SIZE);
         }
      }
      break;

      case NVRAM_EF_EL1_TAS_FE_DATABASE_CAT_A_LID:
      {
#if defined(__TAS_VERSION_BAND_SUPPORT__)
         if (buffer != (kal_uint8 *)(&LTE_TAS_CAT_A_DATABASE_SetDefault))
         {
            kal_mem_cpy(buffer, &LTE_TAS_CAT_A_DATABASE_SetDefault, NVRAM_EF_EL1_TAS_FE_DATABASE_CAT_A_SIZE);
         }
#endif
      }
      break;

      case NVRAM_EF_EL1_TAS_FE_DATABASE_CAT_B_LID:
      {
#if defined(__TAS_VERSION_BAND_SUPPORT__)
         if (buffer != (kal_uint8 *)(&LTE_TAS_CAT_B_DATABASE_SetDefault))
         {
            kal_mem_cpy(buffer, &LTE_TAS_CAT_B_DATABASE_SetDefault, NVRAM_EF_EL1_TAS_FE_DATABASE_CAT_B_SIZE);
         }
#endif
      }
      break;

      case NVRAM_EF_EL1_TAS_ROUTE_DATABASE_LID:
      {
#if defined(__TAS_VERSION_BAND_SUPPORT__)
         if (buffer != (kal_uint8 *)(&LTE_TAS_FE_ROUTE_DATABASE_SetDefault))
         {
            kal_mem_cpy(buffer, &LTE_TAS_FE_ROUTE_DATABASE_SetDefault, NVRAM_EF_EL1_TAS_ROUTE_DATABASE_SIZE);
         }
#endif
      }
      break;

      case NVRAM_EF_EL1_PRX_DRX_ONLY_ANT_CONFIG_LID:
      {
#if defined(__LTE_PRX_DRX_BETTER_INFO__)		  
         if (buffer != (kal_uint8 *)(&LTE_PRX_DRX_BETTER_FE_ROUTE_DATABASE_SetDefault))
         {
            kal_mem_cpy(buffer, &LTE_PRX_DRX_BETTER_FE_ROUTE_DATABASE_SetDefault, NVRAM_EF_EL1_PRX_DRX_ONLY_ANT_CONFIG_SIZE);
         }
#endif
      }
      break;

      case NVRAM_EF_EL1_PRX_DRX_CONFIG_LID:
      {
#if defined(__LTE_PRX_DRX_BETTER_INFO__)		  
         if (buffer != (kal_uint8 *)(&LTE_PRX_DRX_BETTER_CONFIG))
         {
            kal_mem_cpy(buffer, &LTE_PRX_DRX_BETTER_CONFIG, NVRAM_EF_EL1_PRX_DRX_CONFIG_SIZE);
         }
#endif		 
      }
      break;

      /* MIPI Feature */
      case NVRAM_EF_EL1_MIPI_FEATURE_LID:
      {
         if (buffer != (kal_uint8 *)(&LTE_MIPI_ENABLE))
         {
            kal_mem_cpy(buffer, &LTE_MIPI_ENABLE, NVRAM_EF_EL1_MIPI_FEATURE_SIZE);
         }
      }
      break;


      /* Filter Database removed, part of FE Tx Database now; NVRAM functionality TBDL */
      /*** MIPI BYPASS Feature ***/
      case NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_0THBAND_LID:
      case NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_1STBAND_LID:
      case NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_2NDBAND_LID:
      case NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_3RDBAND_LID:
      case NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_4THBAND_LID:
      {
         //kal_mem_set(buffer, 0, NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_SIZE);
         //kal_mem_cpy(buffer,
         //LTE_MIPI_FILTER_TX_DATA_TABLE_SetDefault[lid-NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_START],
         //LTE_MIPI_FILTER_TX_DATA_SIZE_TABLE_SetDefault[lid-NVRAM_EF_EL1_MIPI_BYPASS_TX_DATA_START]);
      }
      break;

      case NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_0THBAND_LID:
      case NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_1STBAND_LID:
      case NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_2NDBAND_LID:
      case NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_3RDBAND_LID:
      case NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_4THBAND_LID:
      {
         //kal_mem_set(buffer, 0, NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_SIZE);
         //kal_mem_cpy(buffer,
         //LTE_MIPI_FILTER_TX_EVENT_TABLE_SetDefault[lid-NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_START],
         //LTE_MIPI_FILTER_TX_EVENT_SIZE_TABLE_SetDefault[lid-NVRAM_EF_EL1_MIPI_BYPASS_TX_EVENT_START]);
      }
      break;

      case NVRAM_EF_EL1_TX_POWER_BACKOFF_LID:
      {
         if (buffer != (kal_uint8 *)ERF_TX_POWER_BACKOFF)
         {
            kal_mem_cpy(buffer, ERF_TX_POWER_BACKOFF, sizeof(ERF_TX_POWER_BACKOFF_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM);
         }
      }
      break;

#if IS_EL1D_RF_MT6177M || defined(__RF_TX_CONDITIONAL_BACKOFF_SUPPORT__)
      case NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_LID:
      {
         if (buffer != (kal_uint8 *)ERF_TX_POWER_BACKOFF_CONDITION)
         {
            kal_mem_cpy(buffer, ERF_TX_POWER_BACKOFF_CONDITION, sizeof(ERF_TX_POWER_BACKOFF_CONDITION_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM);
         }
      }
      break;

      case NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_LID:
      {
         if (buffer != (kal_uint8 *)ERF_TX_POWER_CONDITIONAL_BACKOFF_TABLE)
         {
            kal_mem_cpy(buffer, ERF_TX_POWER_CONDITIONAL_BACKOFF_TABLE, sizeof(ERF_TX_POWER_CONDITIONAL_BACKOFF_TABLE_T)*LTE_TX_CONDI_BF_TBL_CNT);
         }
      }
      break;     
#else
      case NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_LID:
      case NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_LID:
      {
         //bypass
      }
      break;
#endif

#if ((IS_EL1D_RF_MT6177M) && (IS_LTE_RF_UL_CA_SUPPORT)) || defined(__RF_TX_CONDITIONAL_BACKOFF_CCA_SUPPORT__)
      case NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_CCA_LID:
      {
         if (buffer != (kal_uint8 *)ERF_TX_POWER_BACKOFF_CONDITION_CCA)
         {
            kal_mem_cpy(buffer, ERF_TX_POWER_BACKOFF_CONDITION_CCA, sizeof(ERF_TX_POWER_BACKOFF_CONDITION_CCA_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM);
         }
      }
      break;

      case NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA_LID:
      {
         if (buffer != (kal_uint8 *)ERF_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA)
         {
            kal_mem_cpy(buffer, ERF_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA, sizeof(ERF_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA_T)*LTE_TX_CONDI_BF_CCA_TBL_CNT);
         }
      }
      break;
#else
      case NVRAM_EF_EL1_TX_POWER_BACKOFF_CONDITION_CCA_LID:
      case NVRAM_EF_EL1_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA_LID:
      {
         //bypass
      }
      break;
#endif

      case NVRAM_EF_EL1_TX_MC_VCC_IDX_OFS_LID:
      {
      }
      break;
      
      case NVRAM_EF_EL1_TX_MC_POW_BF_LID:
      {
         if (buffer != (kal_uint8 *)ERF_TX_MC_POW_BF)
         {
            kal_mem_cpy(buffer, ERF_TX_MC_POW_BF, sizeof(ERF_TX_MULTI_CLUSTER_POW_BF_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM);
         }
      }
      break;
      
#if ((IS_EL1D_RF_MT6177M) && (IS_LTE_RF_UL_CA_SUPPORT)) || defined(__RF_TX_CCA_PA_BIAS_SUPPORT__)
      /*CCA cases, also NS0~2 cases*/
      case NVRAM_EF_EL1_TX_MC_POW_BF_CCA_LID:
      {
         if (buffer != (kal_uint8 *)ERF_TX_MC_POW_BF_CCA)
         {
            kal_mem_cpy(buffer, ERF_TX_MC_POW_BF_CCA, sizeof(ERF_TX_MULTI_CLUSTER_POW_BF_CCA_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM);
         }
      }
      break;

      case NVRAM_EF_EL1_TX_MC_POW_BF_CCA_0_LID:
      {
         if (buffer != (kal_uint8 *)ERF_TX_MC_POW_BF_CCA_0)
         {
            kal_mem_cpy(buffer, ERF_TX_MC_POW_BF_CCA_0, sizeof(ERF_TX_MULTI_CLUSTER_POW_BF_CCA_0_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM);
         }
      }
      break;

      case NVRAM_EF_EL1_TX_MC_POW_BF_CCA_1_LID:
      {
         if (buffer != (kal_uint8 *)ERF_TX_MC_POW_BF_CCA_1)
         {
            kal_mem_cpy(buffer, ERF_TX_MC_POW_BF_CCA_1, sizeof(ERF_TX_MULTI_CLUSTER_POW_BF_CCA_1_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM);
         }
      }
      break;
      case NVRAM_EF_EL1_TX_MC_POW_BF_CCA_2_LID:
      {
         if (buffer != (kal_uint8 *)ERF_TX_MC_POW_BF_CCA_2)
         {
            kal_mem_cpy(buffer, ERF_TX_MC_POW_BF_CCA_2, sizeof(ERF_TX_MULTI_CLUSTER_POW_BF_CCA_2_PARAM_T)*LTE_TARGET_MAX_SUPPORT_BAND_NUM);
         }
      }
      break;
#else
      case NVRAM_EF_EL1_TX_MC_POW_BF_CCA_LID:
      case NVRAM_EF_EL1_TX_MC_POW_BF_CCA_0_LID:
      case NVRAM_EF_EL1_TX_MC_POW_BF_CCA_1_LID:
      case NVRAM_EF_EL1_TX_MC_POW_BF_CCA_2_LID:
      {
         //bypass
      }
      break;
#endif

      /* Split Band Feature */
      case NVRAM_EF_EL1_SPLIT_BAND_DATABASE_LID:
      {
         if (buffer != (kal_uint8 *)(&ERF_SPLIT_BAND_DATABASE))
         {
            kal_mem_cpy(buffer, &ERF_SPLIT_BAND_DATABASE, NVRAM_EF_EL1_SPLIT_BAND_DATABASE_SIZE);
         }
      }
      break;

      /* Bypass Mode Feature */
      case NVRAM_EF_EL1_FILTER_MODE_DATABASE_LID:
      {
         if (buffer != (kal_uint8 *)(&ERF_RF_FILTER_MODE_DATABASE))
         {
            kal_mem_cpy(buffer, &ERF_RF_FILTER_MODE_DATABASE, NVRAM_EF_EL1_FILTER_MODE_DATABASE_SIZE);
         }
      }
      break;

      case NVRAM_EF_EL1_BAND_IND_CCA_SUPPORT_LID:
      {
         if (buffer != lteBandIndArrayCCASupport)
         {
            kal_mem_cpy(buffer, lteBandIndArrayCCASupport, NVRAM_EF_EL1_BAND_IND_CCA_SUPPORT_SIZE);
         }
      }
      break;

      case NVRAM_EF_EL1_BAND_IND_FLT_CCA_SUPPORT_LID:
      {
         if (buffer != lteBandIndArrayFilterCCASupport)
         {
            kal_mem_cpy(buffer, lteBandIndArrayFilterCCASupport, NVRAM_EF_EL1_BAND_IND_FLT_CCA_SUPPORT_SIZE);
         }
      }
      break;

      case NVRAM_EF_EL1_DPD_PCFE_OTFC_CUSTOM_PARA_LID:
      {
         #if __IS_EL1D_DPD_SUPPORT__
         #if   __IS_4G_PCFE_SA_TUNE_PARA_SUPPORT__  
         kal_mem_cpy(buffer, p_LTE_PCFE_DPD_OTFC_CUSTOM_PARA_SetDefault, NVRAM_EF_EL1_DPD_PCFE_OTFC_CUSTOM_PARA_SIZE);
         #endif
         #endif
      }
      break;  
      
      case NVRAM_EF_EL1_DPD_PCFE_OTFC_NONCUSTOM_PARA_LID:
      {
         #if __IS_EL1D_DPD_SUPPORT__
         #if   __IS_4G_PCFE_SA_TUNE_PARA_SUPPORT__  
         kal_mem_cpy(buffer, p_LTE_PCFE_DPD_OTFC_NONCUSTOM_PARA, NVRAM_EF_EL1_DPD_PCFE_OTFC_NONCUSTOM_PARA_SIZE);
         #endif
         #endif
      }
      break;

      case NVRAM_EF_EL1_DPD_BYPASS_DPD_NS_INFO_LID:
      {
         #if __IS_EL1D_DPD_SUPPORT__
         kal_mem_cpy(buffer, p_LTE_DPD_BYPASS_DPD_NS_INFO_SetDefault, buffer_size);
         #endif
      }
      break; 

      case NVRAM_EF_EL1_FE_RX_ROUTE_DATABASE_LID:
      {
         if (buffer != (kal_uint8 *)(&LTE_FRONT_END_RX_ROUTE_DATABASE_SetDefault))
         {
            kal_mem_cpy(buffer, &LTE_FRONT_END_RX_ROUTE_DATABASE_SetDefault, buffer_size);
         }
      }
      break;

      case NVRAM_EF_EL1_FE_TX_ROUTE_DATABASE_LID:
      {
         if (buffer != (kal_uint8 *)(&LTE_FRONT_END_TX_ROUTE_DATABASE_SetDefault))
         {
            kal_mem_cpy(buffer, &LTE_FRONT_END_TX_ROUTE_DATABASE_SetDefault, buffer_size);
         }
      }
      break;

      case NVRAM_EF_EL1_MIPI_RX_EVENT_LID:
      {        
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_RX_EVENT_TABLE_SetDefault[0]))
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_RX_EVENT_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {            
               if (LTE_MIPI_RX_EVENT_TABLE_SetDefault[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_RX_EVENT_SIZE)), LTE_MIPI_RX_EVENT_TABLE_SetDefault[i], LTE_MIPI_RX_EVENT_SIZE_TABLE_SetDefault[i]);
               }
            }
         }         
      }
      break;

      case NVRAM_EF_EL1_MIPI_TX_EVENT_LID:
      {        
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_TX_EVENT_TABLE_SetDefault[0]))
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_TX_EVENT_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {           
               if (LTE_MIPI_TX_EVENT_TABLE_SetDefault[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_TX_EVENT_SIZE)), LTE_MIPI_TX_EVENT_TABLE_SetDefault[i], LTE_MIPI_TX_EVENT_SIZE_TABLE_SetDefault[i]);
               }
            }
         }         
      }
      break;

      case NVRAM_EF_EL1_MIPI_RX_DATA_LID:
      {        
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_RX_DATA_TABLE_SetDefault[0]))
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_RX_DATA_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {    
               if (LTE_MIPI_RX_DATA_TABLE_SetDefault[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_RX_DATA_SIZE)), LTE_MIPI_RX_DATA_TABLE_SetDefault[i], LTE_MIPI_RX_DATA_SIZE_TABLE_SetDefault[i]);
               }
            }
         }         
      }
      break;
     
      case NVRAM_EF_EL1_MIPI_TX_DATA_LID:
      {        
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_TX_DATA_TABLE_SetDefault[0]))
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_TX_DATA_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {    
               if (LTE_MIPI_TX_DATA_TABLE_SetDefault[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_TX_DATA_SIZE)), LTE_MIPI_TX_DATA_TABLE_SetDefault[i], LTE_MIPI_TX_DATA_SIZE_TABLE_SetDefault[i]);
               }
            }
         }         
      }
      break;

      case NVRAM_EF_EL1_MIPI_ANTRX_EVENT_LID:
      {        
#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#else         
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_ANTRX_EVENT_TABLE_SetDefault[0]))
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_ANTRX_EVENT_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {               
               if (LTE_MIPI_ANTRX_EVENT_TABLE_SetDefault[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_ANTRX_EVENT_SIZE)), LTE_MIPI_ANTRX_EVENT_TABLE_SetDefault[i], LTE_MIPI_ANTRX_EVENT_SIZE_TABLE_SetDefault[i]);
               }
            }
         } 
#endif         
      }
      break;

      case NVRAM_EF_EL1_MIPI_ANTTX_EVENT_LID:
      {  
#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#else         
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_ANTTX_EVENT_TABLE_SetDefault[0]))
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_ANTTX_EVENT_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {       
               if (LTE_MIPI_ANTTX_EVENT_TABLE_SetDefault[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_ANTTX_EVENT_SIZE)), LTE_MIPI_ANTTX_EVENT_TABLE_SetDefault[i], LTE_MIPI_ANTTX_EVENT_SIZE_TABLE_SetDefault[i]);
               }
            }
         }
#endif         
      }
      break;

      case NVRAM_EF_EL1_MIPI_ANTRX_DATA_LID:
      {       
#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#else         
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_ANTRX_DATA_TABLE_SetDefault[0]))
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_ANTRX_DATA_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {        
               if (LTE_MIPI_ANTRX_DATA_TABLE_SetDefault[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_ANTRX_DATA_SIZE)), LTE_MIPI_ANTRX_DATA_TABLE_SetDefault[i], LTE_MIPI_ANTRX_DATA_SIZE_TABLE_SetDefault[i]);
               }
            }
         }
#endif         
      }
      break;

      case NVRAM_EF_EL1_MIPI_ANTTX_DATA_LID:
      { 
#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#else         
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_ANTTX_DATA_TABLE_SetDefault[0]))
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_ANTTX_DATA_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {             
               if (LTE_MIPI_ANTTX_DATA_TABLE_SetDefault[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_ANTTX_DATA_SIZE)), LTE_MIPI_ANTTX_DATA_TABLE_SetDefault[i], LTE_MIPI_ANTTX_DATA_SIZE_TABLE_SetDefault[i]);
               }
            }
         } 
#endif         
      }
      break;

      case NVRAM_EF_EL1_MIPI_TPC_EVENT_LID:
      {        
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_TPC_EVENT_TABLE_SetDefault[0]))
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_TPC_EVENT_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {          
               if (LTE_MIPI_TPC_EVENT_TABLE_SetDefault[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_TPC_EVENT_SIZE)), LTE_MIPI_TPC_EVENT_TABLE_SetDefault[i], LTE_MIPI_TPC_EVENT_SIZE_TABLE_SetDefault[i]);
               }
            }
         }         
      }
      break;

      case NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA_LID:
      {                             
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[0].set_default_single_carrier))
         {
            LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE tmp_data_buffer;
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {        
               if ((LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[i].set_default_single_carrier != NULL) &&
                   (LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[i].set_default_cca != NULL))
               {
                  kal_mem_cpy(&tmp_data_buffer.single_carrier, LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[i].set_default_single_carrier, LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[i]);
                  kal_mem_cpy(&tmp_data_buffer.cca, LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[i].set_default_cca, LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[i]);
                  tmp_data_buffer.txcca = LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[i].is_txcca;
                  
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA_SIZE)), &tmp_data_buffer, NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA_SIZE);
               }
            }
         }         
      }
      break;

      case NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA2_LID:
      {                             
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[25].set_default_single_carrier))
         {
            LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE tmp_data_buffer;
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA2_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {        
               if ((LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[i+25].set_default_single_carrier != NULL) &&
                   (LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[i+25].set_default_cca != NULL))
               {
                  kal_mem_cpy(&tmp_data_buffer.single_carrier, LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[i+25].set_default_single_carrier, LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[i+25]);
                  kal_mem_cpy(&tmp_data_buffer.cca, LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[i+25].set_default_cca, LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[i+25]);
                  tmp_data_buffer.txcca = LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[i+25].is_txcca;
                  
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA2_SIZE)), &tmp_data_buffer, NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA2_SIZE);
               }
               else
               {//to the end of the table                 
                  i=record_size;
               }
            }
         }         
      }
      break;

      case NVRAM_EF_EL1_MIPI_FILTER_TPC_EVENT_LID:
      {        
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_FILTER_TPC_EVENT_TABLE_SetDefault[0]))
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_FILTER_TPC_EVENT_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {       
               if (LTE_MIPI_FILTER_TPC_EVENT_TABLE_SetDefault[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_FILTER_TPC_EVENT_SIZE)), LTE_MIPI_FILTER_TPC_EVENT_TABLE_SetDefault[i], LTE_MIPI_FILTER_TPC_EVENT_SIZE_TABLE_SetDefault[i]);
               }
            }
         }         
      }
      break;

      case NVRAM_EF_EL1_MIPI_FILTER_PA_TPC_SECTION_DATA_LID:
      {                   
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SetDefault[0].set_default_single_carrier))
         {
            LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE tmp_data_buffer;
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {     
               if ((LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SetDefault[i].set_default_single_carrier != NULL) &&
                   (LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SetDefault[i].set_default_cca != NULL))
               {
                  kal_mem_cpy(&tmp_data_buffer.single_carrier, LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SetDefault[i].set_default_single_carrier, LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE_SetDefault[i]);
                  kal_mem_cpy(&tmp_data_buffer.cca, LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SetDefault[i].set_default_cca, LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE_SetDefault[i]);
                  tmp_data_buffer.txcca = LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SetDefault[i].is_txcca;
                  
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE)), &tmp_data_buffer, NVRAM_EF_EL1_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE);
               }
            }
         }         
      }
      break;

      case NVRAM_EF_EL1_SAR_TX_POWER_OFFSET_LID:
      { 
#if IS_4G_SAR_TX_POWER_OFFSET_SUPPORT
         if (buffer != (kal_uint8 *)LTE_SAR_TX_POWER_OFFSET_TABLE[0])
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_SAR_TX_POWER_OFFSET_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {               
               if (LTE_SAR_TX_POWER_OFFSET_TABLE[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_SAR_TX_POWER_OFFSET_SIZE)), LTE_SAR_TX_POWER_OFFSET_TABLE[i], NVRAM_EF_EL1_SAR_TX_POWER_OFFSET_SIZE);
               }
            }
         }  
#endif         
      }
      break; 

      case NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_LID:
      { 
#if IS_4G_SAR_TX_POWER_OFFSET_SUPPORT || IS_4G_TX_POWER_OFFSET_SUPPORT
         if (buffer != (kal_uint8 *)LTE_SWTP_TX_POWER_OFFSET_TABLE[0])
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {           
               if (LTE_SWTP_TX_POWER_OFFSET_TABLE[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_SIZE)), LTE_SWTP_TX_POWER_OFFSET_TABLE[i], NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_SIZE);
               }
            }
         }  
#endif         
      }
      break;       

      case NVRAM_EF_EL1_RX_POWER_OFFSET_LID:
      {
#if IS_4G_RX_POWER_OFFSET_SUPPORT         
         if (buffer != (kal_uint8 *)LTE_RX_POWER_OFFSET_TABLE[0])
         {
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_RX_POWER_OFFSET_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {
               if (LTE_RX_POWER_OFFSET_TABLE[i] != NULL)
               {
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_RX_POWER_OFFSET_SIZE)), LTE_RX_POWER_OFFSET_TABLE[i], NVRAM_EF_EL1_RX_POWER_OFFSET_SIZE);
               }
            }
         }
#endif          
      }
      break;

	  // DPD mipi
      case NVRAM_EF_EL1_DPD_MIPI_PA_TPC_SECTION_DATA_LID:
      {      
	  	 #if __IS_EL1D_DPD_SUPPORT__
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SetDefault[0].set_default_single_carrier))
         {
            LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE tmp_data_buffer;
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_DPD_MIPI_PA_TPC_SECTION_DATA_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {        
               if ((LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SetDefault[i].set_default_single_carrier != NULL) &&
                   (LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SetDefault[i].set_default_cca != NULL))
               {
                  kal_mem_cpy(&tmp_data_buffer.single_carrier, LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SetDefault[i].set_default_single_carrier, LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SIZE_SetDefault[i]);
                  kal_mem_cpy(&tmp_data_buffer.cca, LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SetDefault[i].set_default_cca, LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SIZE_SetDefault[i]);
                  tmp_data_buffer.txcca = LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SetDefault[i].is_txcca;
                  
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_DPD_MIPI_PA_TPC_SECTION_DATA_SIZE)), &tmp_data_buffer, NVRAM_EF_EL1_DPD_MIPI_PA_TPC_SECTION_DATA_SIZE);
               }
            }
         }         
         #endif
	  }
      break;

	  case NVRAM_EF_EL1_DPD_MIPI_FILTER_PA_TPC_SECTION_DATA_LID:
      {
	     #if __IS_EL1D_DPD_SUPPORT__
         if ((LTE_MIPI_ENABLE == 1) && (buffer != (kal_uint8 *)LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SetDefault[0].set_default_single_carrier))
         {
            LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE tmp_data_buffer;
            kal_uint32 record_size = buffer_size/NVRAM_EF_EL1_DPD_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE;
            kal_mem_set(buffer, 0, buffer_size);
            for (i=0 ; i<record_size ; i++)
            {        
               if ((LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SetDefault[i].set_default_single_carrier != NULL) &&
                   (LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SetDefault[i].set_default_cca != NULL))
               {
                  kal_mem_cpy(&tmp_data_buffer.single_carrier, LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SetDefault[i].set_default_single_carrier, LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SIZE_SetDefault[i]);
                  kal_mem_cpy(&tmp_data_buffer.cca, LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SetDefault[i].set_default_cca, LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SIZE_SetDefault[i]);
                  tmp_data_buffer.txcca = LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SetDefault[i].is_txcca;
                  
                  kal_mem_cpy((buffer + (i*NVRAM_EF_EL1_DPD_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE)), &tmp_data_buffer, NVRAM_EF_EL1_DPD_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE);
               }
            }
         }         
         #endif
	  }
	  break;

      default:
         ASSERT(KAL_FALSE);
      break;
   }
}

void nvram_get_eL1_default_value_to_write_with_record(nvram_lid_core_enum lid, kal_uint16 rec_index, kal_uint8 *buffer, kal_uint16 buffer_size)
{
   kal_uint32 index_select = rec_index-1;

   /** DRDI */
   EL1D_RF_CUSTOM_DynamicInit();
   EL1D_RF_CUSTOM_DynamicInitMipi();

   EL1D_RF_UpdateDatabaseTable();

   switch (lid)
   {
      /** EL1D RF RX RSSI Table */
      case NVRAM_EF_EL1_RSSIGAINTBL_TYPE1_LID:
      {
         if (LTE_RSSIGainTblType1_SetDefault[index_select] != 0)
         {
            kal_mem_cpy(buffer, LTE_RSSIGainTblType1_SetDefault[index_select], sizeof(LTE_RX_PL_ROUTE_TYPE1_T));
         }
      }
      break;

      case NVRAM_EF_EL1_RSSIGAINTBL_TYPE2_LID:
      {
#if IS_LTE_RF_DL_CA_SUPPORT
         if (LTE_RSSIGainTblType2_SetDefault[index_select] != 0)
         {
            kal_mem_cpy(buffer, LTE_RSSIGainTblType2_SetDefault[index_select], sizeof(LTE_RX_PL_ROUTE_TYPE2_T));
         }
#endif
      }
      break;

      case NVRAM_EF_EL1_RX_POWER_OFFSET_LID:
      {
#if IS_4G_RX_POWER_OFFSET_SUPPORT
         if (LTE_RX_POWER_OFFSET_TABLE[index_select] != 0)
         {
            kal_mem_cpy(buffer, LTE_RX_POWER_OFFSET_TABLE[index_select], NVRAM_EF_EL1_RX_POWER_OFFSET_SIZE);
         }
#endif
      }
      break;
      
      /** EL1D RF Tx DAC */
      case NVRAM_EF_EL1_TXDAC_LID:
      {
         if (LTE_RampData_SetDefault[index_select].set_default_single_carrier != 0)
         {
            kal_mem_cpy(buffer, LTE_RampData_SetDefault[index_select].set_default_single_carrier, sizeof(LTE_sRAMPDATA));
            buffer += sizeof(LTE_sRAMPDATA);

            kal_mem_cpy(buffer, LTE_RampData_SetDefault[index_select].set_default_cca, sizeof(LTE_sRAMPDATA));
            buffer += sizeof(LTE_sRAMPDATA);

            kal_mem_cpy(buffer, &(LTE_RampData_SetDefault[index_select].is_txcca), sizeof(kal_uint8));
         }
      }
      break;

      /** EL1D RF Tx PA OCT level */
      case NVRAM_EF_EL1_TXPAOCTLEV_LID:
      {
         if (LTE_PaOctLevTable_SetDefault[index_select].set_default_single_carrier != 0)
         {
            kal_mem_cpy(buffer, LTE_PaOctLevTable_SetDefault[index_select].set_default_single_carrier, sizeof(LTE_sPAOCTLVLSETTING));
            buffer += sizeof(LTE_sPAOCTLVLSETTING);

            kal_mem_cpy(buffer, LTE_PaOctLevTable_SetDefault[index_select].set_default_cca, sizeof(LTE_sPAOCTLVLSETTING));
            buffer += sizeof(LTE_sPAOCTLVLSETTING);

            kal_mem_cpy(buffer, &(LTE_PaOctLevTable_SetDefault[index_select].is_txcca), sizeof(kal_uint8));
         }
      }
      break;

      /*** EL1D RF TX DAC (Ramp) filter ***/
      case NVRAM_EF_EL1_FILTER_TXDAC_LID:
      {
         if (LTE_FILTER_RampData_SetDefault[index_select].set_default_single_carrier != 0)
         {
            kal_mem_cpy(buffer, LTE_FILTER_RampData_SetDefault[index_select].set_default_single_carrier, sizeof(LTE_sRAMPDATA));
            buffer += sizeof(LTE_sRAMPDATA);

            kal_mem_cpy(buffer, LTE_FILTER_RampData_SetDefault[index_select].set_default_cca, sizeof(LTE_sRAMPDATA));
            buffer += sizeof(LTE_sRAMPDATA);

            kal_mem_cpy(buffer, &(LTE_FILTER_RampData_SetDefault[index_select].is_txcca), sizeof(kal_uint8));
         }
      }
      break;

      /*** EL1D RF Tx PA OCT level filter  ***/
      case NVRAM_EF_EL1_FILTER_TXPAOCTLEV_LID:
      {
         if (LTE_FILTER_PaOctLevTable_SetDefault[index_select].set_default_single_carrier != 0)
         {
            kal_mem_cpy(buffer, LTE_FILTER_PaOctLevTable_SetDefault[index_select].set_default_single_carrier, sizeof(LTE_sPAOCTLVLSETTING));
            buffer += sizeof(LTE_sPAOCTLVLSETTING);

            kal_mem_cpy(buffer, LTE_FILTER_PaOctLevTable_SetDefault[index_select].set_default_cca, sizeof(LTE_sPAOCTLVLSETTING));
            buffer += sizeof(LTE_sPAOCTLVLSETTING);

            kal_mem_cpy(buffer, &(LTE_FILTER_PaOctLevTable_SetDefault[index_select].is_txcca), sizeof(kal_uint8));
         }
      }
      break;
      
      /** POWER CAL Related NVRAM Lid */        
      case NVRAM_EF_EL1_RF_SELF_CAL_RX_DC_IRR_LID:
      {
         if(1/*need to check src is not empty*/)
         {
            kal_mem_set(buffer, 0, sizeof(LTE_RF_POC_RX_DC_IRR_COMP_PER_ROUTE_T));
            //kal_mem_cpy(buffer, 0, sizeof(LTE_RF_POC_RX_DC_IRR_COMP_PER_ROUTE_T));
         }
      }
      break;

      case NVRAM_EF_EL1_RF_SELF_CAL_RX_IIP2_LID:
      {
         if(1/*need to check src is not empty*/)
         {
            kal_mem_set(buffer, 0, sizeof(LTE_RF_POC_RX_IIP2_COMP_PER_ROUTE_T) );
            //kal_mem_cpy(buffer, 0, sizeof(LTE_RF_POC_RX_IIP2_COMP_PER_ROUTE_T) );
         }
      }
      break;

      case NVRAM_EF_EL1_RF_SELF_CAL_DET_TX_LID:
      {
         if(1/*need to check src is not empty*/)
         {
            kal_mem_set(buffer, 0, sizeof(LTE_RF_POC_DET_TX_COMP_CAL_DATA_ELEMENT_T) );
            //kal_mem_cpy(buffer, 0, sizeof(LTE_RF_POC_DET_TX_COMP_CAL_DATA_ELEMENT_T) );
         }
      }
      break;

      case NVRAM_EF_EL1_RF_SELF_CAL_TX_SB_LID:
      {
         if(1/*need to check src is not empty*/)
         {
            kal_mem_set(buffer, 0, sizeof(LTE_RF_POC_TX_SB_COMP_CAL_DATA_PER_BAND_T) );
            //kal_mem_cpy(buffer, 0, sizeof(LTE_RF_POC_TX_SB_COMP_CAL_DATA_PER_BAND_T) );
         }
      }
      break;

      /*** LTE_FRONT_END_RX_ROUTE_DATABASE ***/
      case NVRAM_EF_EL1_FE_RX_ROUTE_DATABASE_LID:
      {
         if (&(LTE_FRONT_END_RX_ROUTE_DATABASE_SetDefault.lte_rx_front_end_route_table[index_select]) != 0)
         {
            kal_mem_cpy(buffer, &(LTE_FRONT_END_RX_ROUTE_DATABASE_SetDefault.lte_rx_front_end_route_table[index_select]), sizeof(LTE_FE_RX_ROUTE_TABLE_T));
         }
      }
      break;

      /*** LTE_FRONT_END_TX_ROUTE_DATABASE ***/
      case NVRAM_EF_EL1_FE_TX_ROUTE_DATABASE_LID:
      {
         if (&(LTE_FRONT_END_TX_ROUTE_DATABASE_SetDefault.lte_tx_front_end_route_table[index_select]) != 0)
         {
            kal_mem_cpy(buffer, &(LTE_FRONT_END_TX_ROUTE_DATABASE_SetDefault.lte_tx_front_end_route_table[index_select]), sizeof(LTE_FE_TX_ROUTE_TABLE_T));
         }
      }
      break;

      /*** LTE MIPI RX EVT TABLE ***/
      case NVRAM_EF_EL1_MIPI_RX_EVENT_LID:
      {
         if(LTE_MIPI_ENABLE == 1)
         {
            if (LTE_MIPI_RX_EVENT_TABLE_SetDefault[index_select] != 0 )
            {
               kal_mem_set(buffer, 0, NVRAM_EF_EL1_MIPI_RX_EVENT_SIZE);
               kal_mem_cpy(buffer,
                           LTE_MIPI_RX_EVENT_TABLE_SetDefault[index_select],
                           LTE_MIPI_RX_EVENT_SIZE_TABLE_SetDefault[index_select]);
            }
         }
      }
      break;

      /*** LTE MIPI TX EVT TABLE ***/
      case NVRAM_EF_EL1_MIPI_TX_EVENT_LID:
      {
         if(LTE_MIPI_ENABLE == 1)
         {
            if (LTE_MIPI_TX_EVENT_TABLE_SetDefault[index_select] != 0 )
            {
               kal_mem_set(buffer, 0, NVRAM_EF_EL1_MIPI_TX_EVENT_SIZE);
               kal_mem_cpy(buffer,
                           LTE_MIPI_TX_EVENT_TABLE_SetDefault[index_select],
                           LTE_MIPI_TX_EVENT_SIZE_TABLE_SetDefault[index_select]);
            }
         }
      }
      break;

      /*** LTE MIPI RX DATA TABLE ***/
      case NVRAM_EF_EL1_MIPI_RX_DATA_LID:
      {
         if(LTE_MIPI_ENABLE == 1)
         {
            if (LTE_MIPI_RX_DATA_TABLE_SetDefault[index_select] != 0 )
            {
               kal_mem_set(buffer, 0, NVRAM_EF_EL1_MIPI_RX_DATA_SIZE);
               kal_mem_cpy(buffer,
                           LTE_MIPI_RX_DATA_TABLE_SetDefault[index_select],
                           LTE_MIPI_RX_DATA_SIZE_TABLE_SetDefault[index_select]);
            }
         }
      }
      break;

      /*** LTE MIPI TX DATA TABLE ***/
      case NVRAM_EF_EL1_MIPI_TX_DATA_LID:
      {
         if(LTE_MIPI_ENABLE == 1)
         {
            if (LTE_MIPI_TX_DATA_TABLE_SetDefault[index_select] != 0 )
            {
               kal_mem_set(buffer, 0, NVRAM_EF_EL1_MIPI_TX_DATA_SIZE);
               kal_mem_cpy(buffer,
                           LTE_MIPI_TX_DATA_TABLE_SetDefault[index_select],
                           LTE_MIPI_TX_DATA_SIZE_TABLE_SetDefault[index_select]);
            }
         }
      }
      break;

      case NVRAM_EF_EL1_MIPI_TPC_EVENT_LID:
      {
         if(LTE_MIPI_ENABLE == 1)
         {
            if (LTE_MIPI_TPC_EVENT_TABLE_SetDefault[index_select] != 0)
            {
               kal_mem_cpy(buffer, LTE_MIPI_TPC_EVENT_TABLE_SetDefault[index_select], LTE_MIPI_TPC_EVENT_SIZE_TABLE_SetDefault[index_select]);
            }
         }
      }
      break;

      case NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA_LID:
      {
         if(LTE_MIPI_ENABLE == 1)
         {
            if (LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[index_select].set_default_single_carrier != 0)
            {
               kal_mem_cpy(buffer, LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[index_select].set_default_single_carrier, LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select]);
               buffer += LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select];

               kal_mem_cpy(buffer, LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[index_select].set_default_cca, LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select]);
               buffer += LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select];

               kal_mem_cpy(buffer, &(LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[index_select].is_txcca), sizeof(kal_uint8));
            }
         }
      }
	  break;

      case NVRAM_EF_EL1_MIPI_PA_TPC_SECTION_DATA2_LID:
      {
         if(LTE_MIPI_ENABLE == 1)
         {
            if (LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[index_select+25].set_default_single_carrier != 0)
            {
               kal_mem_cpy(buffer, LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[index_select+25].set_default_single_carrier, LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select+25]);
               buffer += LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select+25];

               kal_mem_cpy(buffer, LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[index_select+25].set_default_cca, LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select+25]);
               buffer += LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select+25];

               kal_mem_cpy(buffer, &(LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault[index_select+25].is_txcca), sizeof(kal_uint8));
            }
         }
      }
	  break;

      case NVRAM_EF_EL1_MIPI_FILTER_TPC_EVENT_LID:
      {
         if(LTE_MIPI_ENABLE == 1)
         {
            if (LTE_MIPI_FILTER_TPC_EVENT_TABLE_SetDefault[index_select] != 0)
            {
               kal_mem_cpy(buffer, LTE_MIPI_FILTER_TPC_EVENT_TABLE_SetDefault[index_select], LTE_MIPI_FILTER_TPC_EVENT_SIZE_TABLE_SetDefault[index_select]);
            }
         }
      }
      break;

      case NVRAM_EF_EL1_MIPI_FILTER_PA_TPC_SECTION_DATA_LID:
      {
         if(LTE_MIPI_ENABLE == 1)
         {   
            if (LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SetDefault[index_select].set_default_single_carrier != 0)
            {
               kal_mem_cpy(buffer, LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SetDefault[index_select].set_default_single_carrier, LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select]);
               buffer += LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select];

               kal_mem_cpy(buffer, LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SetDefault[index_select].set_default_cca, LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select]);
               buffer += LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select];

               kal_mem_cpy(buffer, &(LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SetDefault[index_select].is_txcca), sizeof(kal_uint8));
            }
         }
      }
      break;

      case NVRAM_EF_EL1_SAR_TX_POWER_OFFSET_LID:
      {
#if IS_4G_SAR_TX_POWER_OFFSET_SUPPORT
         if (LTE_SAR_TX_POWER_OFFSET_TABLE[index_select] != 0)
         {
            kal_mem_cpy(buffer, LTE_SAR_TX_POWER_OFFSET_TABLE[index_select], sizeof(LTE_SAR_TX_POWER_OFFSET_DATA_T));
         }
#endif
      }
      break;
      case NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_LID:
      {
#if IS_4G_SAR_TX_POWER_OFFSET_SUPPORT || IS_4G_TX_POWER_OFFSET_SUPPORT
         if (LTE_SWTP_TX_POWER_OFFSET_TABLE[index_select] != 0)
         {
            kal_mem_cpy(buffer, LTE_SWTP_TX_POWER_OFFSET_TABLE[index_select], sizeof(LTE_SWTP_TX_POWER_OFFSET_DATA_T));
         }
#endif
      }
      break;

      case NVRAM_EF_EL1_TX_POWER_OFFSET_LID:
      {
         /*Since SWTP is using new LID: NVRAM_EF_EL1_SWTP_TX_POWER_OFFSET_LID, it's need to be remove in 95*/
      }

      break;

       /*** LTE MIPI ANTRX EVT TABLE ***/
      case NVRAM_EF_EL1_MIPI_ANTRX_EVENT_LID:
      {
#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#else
         if(LTE_MIPI_ENABLE == 1)
         {
            if (LTE_MIPI_ANTRX_EVENT_TABLE_SetDefault[index_select] != 0 )
            {
               kal_mem_set(buffer, 0, NVRAM_EF_EL1_MIPI_ANTRX_EVENT_SIZE);
               kal_mem_cpy(buffer,
                           LTE_MIPI_ANTRX_EVENT_TABLE_SetDefault[index_select],
                           LTE_MIPI_ANTRX_EVENT_SIZE_TABLE_SetDefault[index_select]);
            }
         }
#endif
       }
       break;
      
       /*** LTE MIPI ANTTX EVT TABLE ***/
       case NVRAM_EF_EL1_MIPI_ANTTX_EVENT_LID:
       {
#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#else
          if(LTE_MIPI_ENABLE == 1)
          {
             if (LTE_MIPI_ANTTX_EVENT_TABLE_SetDefault[index_select] != 0 )
             {
                kal_mem_set(buffer, 0, NVRAM_EF_EL1_MIPI_ANTTX_EVENT_SIZE);
                kal_mem_cpy(buffer,
                            LTE_MIPI_ANTTX_EVENT_TABLE_SetDefault[index_select],
                            LTE_MIPI_ANTTX_EVENT_SIZE_TABLE_SetDefault[index_select]);
             }
          }
#endif
       }
       break;
      
       /*** LTE MIPI ANTRX DATA TABLE ***/
       case NVRAM_EF_EL1_MIPI_ANTRX_DATA_LID:
       {
#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#else
          if(LTE_MIPI_ENABLE == 1)
          {
             if (LTE_MIPI_ANTRX_DATA_TABLE_SetDefault[index_select] != 0 )
             {
                kal_mem_set(buffer, 0, NVRAM_EF_EL1_MIPI_ANTRX_DATA_SIZE);
                kal_mem_cpy(buffer,
                            LTE_MIPI_ANTRX_DATA_TABLE_SetDefault[index_select],
                            LTE_MIPI_ANTRX_DATA_SIZE_TABLE_SetDefault[index_select]);
             }
          }
#endif
       }
       break;
      
      /*** LTE MIPI ANTTX DATA TABLE ***/
      case NVRAM_EF_EL1_MIPI_ANTTX_DATA_LID:
      {
#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#else
         if(LTE_MIPI_ENABLE == 1)
         {
            if (LTE_MIPI_ANTTX_DATA_TABLE_SetDefault[index_select] != 0 )
            {
               kal_mem_set(buffer, 0, NVRAM_EF_EL1_MIPI_ANTTX_DATA_SIZE);
               kal_mem_cpy(buffer,
                           LTE_MIPI_ANTTX_DATA_TABLE_SetDefault[index_select],
                           LTE_MIPI_ANTTX_DATA_SIZE_TABLE_SetDefault[index_select]);
            }
         }
#endif
      }
      break;
     
      /** EL1D DPD Factory Calibration Data */
      case NVRAM_EF_EL1_DPD_FACTORY_CAL_DATA_LID:
      {
         #if __IS_EL1D_DPD_SUPPORT__
         LTE_DPD_GROUP_CAL_DEFAULT_SIZE *p_buffer = (LTE_DPD_GROUP_CAL_DEFAULT_SIZE*)buffer;

         kal_mem_set(&(p_buffer->single_carrier.lte_dpd_ramp_data), 0, sizeof(LTE_sRAMPDATA));
         kal_mem_set(&(p_buffer->cca.lte_dpd_ramp_data),            0, sizeof(LTE_sRAMPDATA));
         kal_mem_set(&(p_buffer->txcca),                            0, sizeof(kal_uint8));
         
         kal_mem_set(&(p_buffer->single_carrier.lte_dpd_pa_oct_lev_tbl), 0, sizeof(LTE_sPAOCTLVLSETTING));
         kal_mem_set(&(p_buffer->cca.lte_dpd_pa_oct_lev_tbl),            0, sizeof(LTE_sPAOCTLVLSETTING));

         kal_mem_set(&(p_buffer->single_carrier.lte_dpd_common_cal), 0, sizeof(LTE_DPD_COMMON_CAL_T));
         kal_mem_set(&(p_buffer->cca.lte_dpd_common_cal),            0, sizeof(LTE_DPD_COMMON_CAL_T));
         
         kal_mem_set(&(p_buffer->single_carrier.lte_dpd_am_lut_perband), 0, sizeof(LTE_DPD_AMLUT_PERBAND_T));
         kal_mem_set(&(p_buffer->cca.lte_dpd_am_lut_perband),            0, sizeof(LTE_DPD_AMLUT_PERBAND_T));

         kal_mem_set(&(p_buffer->single_carrier.lte_dpd_pm_lut_perband), 0, sizeof(LTE_DPD_PMLUT_PERBAND_T));
         kal_mem_set(&(p_buffer->cca.lte_dpd_pm_lut_perband), 0, sizeof(LTE_DPD_PMLUT_PERBAND_T));
         #endif
      }
      break;
      
      /** EL1D FILTER DPD Factory Calibration Data */
      case NVRAM_EF_EL1_DPD_FILTER_FACTORY_CAL_DATA_LID:
      {
         #if __IS_EL1D_DPD_SUPPORT__
         LTE_DPD_GROUP_CAL_DEFAULT_SIZE *p_buffer = (LTE_DPD_GROUP_CAL_DEFAULT_SIZE*)buffer;

         kal_mem_set(&(p_buffer->single_carrier.lte_dpd_ramp_data), 0, sizeof(LTE_sRAMPDATA));
         kal_mem_set(&(p_buffer->cca.lte_dpd_ramp_data),            0, sizeof(LTE_sRAMPDATA));
         kal_mem_set(&(p_buffer->txcca),                            0, sizeof(kal_uint8));
         
         kal_mem_set(&(p_buffer->single_carrier.lte_dpd_pa_oct_lev_tbl), 0, sizeof(LTE_sPAOCTLVLSETTING));
         kal_mem_set(&(p_buffer->cca.lte_dpd_pa_oct_lev_tbl),            0, sizeof(LTE_sPAOCTLVLSETTING));

         kal_mem_set(&(p_buffer->single_carrier.lte_dpd_common_cal), 0, sizeof(LTE_DPD_COMMON_CAL_T));
         kal_mem_set(&(p_buffer->cca.lte_dpd_common_cal),            0, sizeof(LTE_DPD_COMMON_CAL_T));
         
         kal_mem_set(&(p_buffer->single_carrier.lte_dpd_am_lut_perband), 0, sizeof(LTE_DPD_AMLUT_PERBAND_T));
         kal_mem_set(&(p_buffer->cca.lte_dpd_am_lut_perband),            0, sizeof(LTE_DPD_AMLUT_PERBAND_T));

         kal_mem_set(&(p_buffer->single_carrier.lte_dpd_pm_lut_perband), 0, sizeof(LTE_DPD_PMLUT_PERBAND_T));
         kal_mem_set(&(p_buffer->cca.lte_dpd_pm_lut_perband),            0, sizeof(LTE_DPD_PMLUT_PERBAND_T));
         #endif
      }
      break;

      /** EL1D DPD Factory Calibration Data */
      case NVRAM_EF_EL1_DPD_COMMON_CTRL_DATA_LID:
      {
         #if __IS_EL1D_DPD_SUPPORT__
         if (LTE_DPD_FacCommonData_Table_SetDefault[index_select].single_carrier  != 0)
         {
            LTE_DPD_COMMON_CTRL_DEFAULT_SIZE *p_buffer = (LTE_DPD_COMMON_CTRL_DEFAULT_SIZE*)buffer;
            
            kal_mem_cpy(&(p_buffer->single_carrier), LTE_DPD_FacCommonData_Table_SetDefault[index_select].single_carrier, sizeof(LTE_DPD_COMMON_CTRL_T));
            kal_mem_cpy(&(p_buffer->cca),            LTE_DPD_FacCommonData_Table_SetDefault[index_select].cca,            sizeof(LTE_DPD_COMMON_CTRL_T));
            kal_mem_cpy(&(p_buffer->txcca),        &(LTE_DPD_FacCommonData_Table_SetDefault[index_select].txcca),         sizeof(kal_uint8));
         }
         #endif
      }
      break;
      
      /** EL1D FILTER DPD Factory Calibration Data */
      case NVRAM_EF_EL1_DPD_FILTER_COMMON_CTRL_DATA_LID:
      {
         #if __IS_EL1D_DPD_SUPPORT__
         if (LTE_FILTER_DPD_FacCommonData_Table_SetDefault[index_select].single_carrier  != 0)
         {
            LTE_DPD_COMMON_CTRL_DEFAULT_SIZE *p_buffer = (LTE_DPD_COMMON_CTRL_DEFAULT_SIZE*)buffer;
            
            kal_mem_cpy(&(p_buffer->single_carrier), LTE_FILTER_DPD_FacCommonData_Table_SetDefault[index_select].single_carrier, sizeof(LTE_DPD_COMMON_CTRL_T));
            kal_mem_cpy(&(p_buffer->cca),            LTE_FILTER_DPD_FacCommonData_Table_SetDefault[index_select].cca,            sizeof(LTE_DPD_COMMON_CTRL_T));
            kal_mem_cpy(&(p_buffer->txcca),        &(LTE_FILTER_DPD_FacCommonData_Table_SetDefault[index_select].txcca),         sizeof(kal_uint8));
         }
         #endif
      }
      break;

      case NVRAM_EF_EL1_DPD_MIPI_PA_TPC_SECTION_DATA_LID:
      {
         #if __IS_EL1D_DPD_SUPPORT__
         if(LTE_MIPI_ENABLE == 1)
         {
            if (LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SetDefault[index_select].set_default_single_carrier != 0 )
            {
               LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE *p_buffer = (LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE*)buffer;
               
               kal_mem_cpy(&(p_buffer->single_carrier), LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SetDefault[index_select].set_default_single_carrier, LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select]);
               kal_mem_cpy(&(p_buffer->cca),            LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SetDefault[index_select].set_default_cca,            LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select]);
               kal_mem_cpy(&(p_buffer->txcca),        &(LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SetDefault[index_select].is_txcca),                  sizeof(kal_uint8));
            }          
         }
         #endif
      }
      break;

      case NVRAM_EF_EL1_DPD_MIPI_FILTER_PA_TPC_SECTION_DATA_LID:
      {
         #if __IS_EL1D_DPD_SUPPORT__
         if(LTE_MIPI_ENABLE == 1)
         {
            if (LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SetDefault[index_select].set_default_single_carrier != 0 )
            {
               LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE *p_buffer = (LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE*)buffer;
               
               kal_mem_cpy(&(p_buffer->single_carrier), LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SetDefault[index_select].set_default_single_carrier, LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select]);
               kal_mem_cpy(&(p_buffer->cca),            LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SetDefault[index_select].set_default_cca,            LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SIZE_SetDefault[index_select]);
               kal_mem_cpy(&(p_buffer->txcca),        &(LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SetDefault[index_select].is_txcca),                  sizeof(kal_uint8));
            }            
         }
         #endif
      }
      break;

      default:
      {
         ASSERT(KAL_FALSE);
      }
      break;
   }
}

#endif  // end of #if defined(__LTE_RAT__)
