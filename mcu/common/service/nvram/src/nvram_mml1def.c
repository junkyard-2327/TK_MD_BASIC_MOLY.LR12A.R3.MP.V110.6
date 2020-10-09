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
 *	nvram_mml1_default.c
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

#include "mml1_rf_global.h"

#include "mml1_custom_mipi.h"
#include "mml1_custom_drdi.h"

#include "mml1_fe_public.h"

kal_bool mmrf_drdiHadDone = KAL_FALSE;

void nvram_mmrf_drdiPointerInit(kal_uint16 setIdx)
{
#ifdef __MTK_TARGET__
   mmrf_mipiData_ptr = &(mml1CustomMipiData[setIdx]);
   mmrf_rfData_ptr   = &(mml1CustomRfData[setIdx]);
   mmrf_feData_ptr   = &(mml1CustomFeData[setIdx]);

   #if defined(__TX_POWER_OFFSET_SUPPORT__) || defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
   mml1_sar_swtp_data_info_ptr = &(mml1CustomRfSarSwtpData[setIdx]);
   #endif
   #if defined(__SAR_SENSOR_TX_DETECTION_SUPPORT__)
   mml1_tx_pwr_indication_param_ptr = mml1CustomTxPwrIndicationParam[setIdx];
   #endif//__SAR_SENSOR_TX_DETECTION_SUPPORT__
#endif   
}

void nvram_mmrf_drdi(void)
{
#ifdef __MTK_TARGET__
   #if (IS_MML1_RF_DRDI_CAPABILITY_SUPPORT)
   if(mml1_custom_drdiEnable)
   {
      kal_uint16 setIdx;

      setIdx = MML1_RF_DRDI_Dynamic_GetParamAddr(MML1_RF_MMRF);
      if (!mmrf_drdiHadDone)
      {
         /* set the pointer to RF custom data by set index */
         nvram_mmrf_drdiPointerInit(setIdx);
         mmrf_drdiHadDone = KAL_TRUE;
      }
   }
   else
   {
      /* set the pointer to default RF custom data, set0*/
      nvram_mmrf_drdiPointerInit(0);
   }
   #else
   /* set the pointer to default RF custom data, set0*/
   nvram_mmrf_drdiPointerInit(0);
   #endif      
#endif   
}


void nvram_get_mmL1_default_value_to_write(nvram_lid_core_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size)
{
#ifdef __MTK_TARGET__

   nvram_mmrf_drdi();

   switch (lid)
   {
      case NVRAM_EF_MML1_RF_PARAMETER_LID:
      {
         //kal_mem_cpy(buffer, &MML1_RF_CUSTOM_INPUT_DATA, NVRAM_EF_MML1_RF_PARAMETER_SIZE);
         kal_mem_cpy(buffer, &mmrf_rfData_ptr->rfInputData, NVRAM_EF_MML1_RF_PARAMETER_SIZE);
      }
      break;
      case NVRAM_EF_MML1_ABB_CAL_LID:
      {
         kal_mem_cpy(buffer, &mml1_rf_abb_cal_data_pcore, NVRAM_EF_MML1_ABB_CAL_SIZE);
      }
      break;
      case NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_LID:
      {
         kal_mem_cpy(buffer, &mml1_rf_pmic_slt_data_pcore, NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_SIZE);
      }
      break;
      case NVRAM_EF_MML1_RF_POC_DATA_LID:
      {
         kal_mem_cpy(buffer, &MML1_RF_POC_DATA, NVRAM_EF_MML1_RF_POC_DATA_SIZE);
      }
      break;
      case NVRAM_EF_MML1_MIPI_INITIAL_CW_LID:
      {
         kal_mem_cpy(buffer, mmrf_mipiData_ptr->initTable_p, NVRAM_EF_MML1_MIPI_INITIAL_CW_SIZE);
      }
      break;
      case NVRAM_EF_MML1_MIPI_USID_CHANGE_LID:
      {
         kal_mem_cpy(buffer, mmrf_mipiData_ptr->changeUsidTable_p, NVRAM_EF_MML1_MIPI_USID_CHANGE_SIZE);
      }
      break;
   #if IS_MMRF_MIPI_HW_CHECK_SUPPORT
      case NVRAM_EF_MML1_MIPI_HW_CHECK_LID:
      {
         kal_mem_cpy(buffer, mmrf_mipiData_ptr->checkHwTable_p, NVRAM_EF_MML1_MIPI_HW_CHECK_SIZE);
      }
      break;
   #endif
   #ifdef __RF_DRDI_CAPABILITY_SUPPORT__
      case NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_LID:
      {
         kal_mem_cpy(buffer, &mml1_rf_drdi_dynamic_init_param, NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_SIZE);
      }
      break;
   #endif
      case NVRAM_EF_MML1_CRYSTAL_LID:
      {
         kal_mem_cpy(buffer, &MML1_CRYSTAL_CTRL, NVRAM_EF_MML1_CRYSTAL_SIZE);
      }
      break;
      case NVRAM_EF_MML1_GPS_CO_TMS_DATA_LID:
      {
         kal_mem_cpy(buffer, MML1_CoTMSTbl[0], NVRAM_EF_MML1_GPS_CO_TMS_DATA_SIZE);
      }
      break;
      case NVRAM_EF_MML1_TEMPERATURE_DAC_LID:
      {
         kal_mem_cpy(buffer, &MML1_TempDacTable, NVRAM_EF_MML1_TEMPERATURE_DAC_SIZE);
      }
      break;
   #if defined(__TX_POWER_OFFSET_SUPPORT__)
      case NVRAM_EF_MML1_TXPOWEROFFSET_LID:
      {
         kal_mem_cpy(buffer, &mml1_sar_swtp_data_info_ptr->swtp, NVRAM_EF_MML1_TXPOWEROFFSET_SIZE);
      }
      break;
   #endif
   #if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
      case NVRAM_EF_MML1_SAR_TXPOWEROFFSET_LID:
      {
         kal_mem_cpy(buffer, &mml1_sar_swtp_data_info_ptr->sar, NVRAM_EF_MML1_SAR_TXPOWEROFFSET_SIZE);
      }
      break;
   #endif
      case NVRAM_EF_MML1_MIPI_LPM_CW_LID:
      {
         kal_mem_cpy(buffer, mmrf_mipiData_ptr->lpmTable_p, NVRAM_EF_MML1_MIPI_LPM_CW_SIZE);
      }
      break;
      case NVRAM_EF_MML1_ELNA_DATABASE_LID:
      {
         kal_uint32 i;
         MML1_FE_ELNA_NVRAM_T elna_nvram_data = {{0}};
         const MML1_FE_ELNA_RAW_T *elna_rawdata_p;

         elna_rawdata_p = &(mmrf_feData_ptr->feComponentsList.elna_raw_database[0]);
         
         for(i = 0; i < MML1_FE_ELNA_NUM; i++)
         {
            elna_nvram_data.elna_settling_time[i] = elna_rawdata_p->elna_config_data.elna_settling_time;
            elna_rawdata_p++;
         }
         kal_mem_cpy(buffer, &(elna_nvram_data), NVRAM_EF_MML1_ELNA_DATABASE_SIZE);
      }
      break;
      case NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_LID:
      {
         kal_mem_cpy(buffer, mmrf_mipiData_ptr->extVpaTable_p, NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_SIZE);
      }
      break;
      case NVRAM_EF_MML1_TX_PWR_INDICATION_THRESHOLD_LID:
      {
        #if defined(__SAR_SENSOR_TX_DETECTION_SUPPORT__)
        kal_mem_cpy(buffer,mml1_tx_pwr_indication_param_ptr,NVRAM_EF_MML1_TX_PWR_INDICATION_THRESHOLD_SIZE);
        #endif//__SAR_SENSOR_TX_DETECTION_SUPPORT__
      }
      break;
      default:
         ASSERT(KAL_FALSE);
      break;
   }
#endif   
}

