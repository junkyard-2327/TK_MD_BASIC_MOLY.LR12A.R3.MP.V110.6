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
#ifdef __AST_TL1_TDD__

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "nvram_data_items.h"
#include "tl1d_custom_drdi.h"
#ifdef __TAS_SUPPORT__
#include "tl1d_custom_rf_tas_struct.h"
#endif

const tl1CustomDynamicInitMipiData *tl1_mipiData_ptr;
kal_uint16 gSetIdx = 0xf;
kal_uint16 gDefaultPath = 0xf;

#ifdef __TAS_SUPPORT__

const T_TD_CUSTOMIZATION_TAS_STRUCT_P *tl1_TasData_ptr;
#if defined(__MTK_TARGET__)
extern T_TD_CUSTOMIZATION_TAS_STRUCT   g_tl1_d_tl_tas_param;
#endif
extern void tl1_custom_point_empty_check(void * express,kal_uint16 flag,kal_uint16 value1, kal_uint16 value2);

void td_tl1_rf_tas_param_updatere(void)
{
#if defined(__MTK_TARGET__)
	tl1_custom_point_empty_check((void *)tl1_mipiData_ptr,gSetIdx,gDefaultPath , 0x1 );
	tl1_custom_point_empty_check((void *)tl1_TasData_ptr, gSetIdx,gDefaultPath , 0x2 );

    //TAS2P0 XUTING need more modify
    kal_mem_cpy(&g_tl1_d_tl_tas_param.tdbandsetting, tl1_TasData_ptr->TD_tas_commonsetting_P, sizeof(TDSCDMA_CUSTOM_TAS_FE_ROUTE_DATABASE_T));

    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatA_BpiSetting,tl1_TasData_ptr->TDSCDMA_TAS_CATA_BPI_TABLE,sizeof(TDSCDMA_CUSTOM_TAS_FE_SETTING_T)*TDSCDMA_TAS_MAX_CAT_BPIROUTE_NUM);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatA_MIPI_Rout0_EventSetting,tl1_TasData_ptr->Td_CatA_MIPI_EventSetting[0],sizeof(TDSCDMA_TAS_MIPI_EVENT_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatA_MIPI_Rout1_EventSetting,tl1_TasData_ptr->Td_CatA_MIPI_EventSetting[1],sizeof(TDSCDMA_TAS_MIPI_EVENT_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatA_MIPI_Rout2_EventSetting,tl1_TasData_ptr->Td_CatA_MIPI_EventSetting[2],sizeof(TDSCDMA_TAS_MIPI_EVENT_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatA_MIPI_Rout3_EventSetting,tl1_TasData_ptr->Td_CatA_MIPI_EventSetting[3],sizeof(TDSCDMA_TAS_MIPI_EVENT_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatA_MIPI_Rout0_dataSetting,tl1_TasData_ptr->Td_CatA_MIPI_dataSetting[0], sizeof(TDSCDMA_TAS_MIPI_DATA_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatA_MIPI_Rout1_dataSetting,tl1_TasData_ptr->Td_CatA_MIPI_dataSetting[1], sizeof(TDSCDMA_TAS_MIPI_DATA_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatA_MIPI_Rout2_dataSetting,tl1_TasData_ptr->Td_CatA_MIPI_dataSetting[2], sizeof(TDSCDMA_TAS_MIPI_DATA_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatA_MIPI_Rout3_dataSetting,tl1_TasData_ptr->Td_CatA_MIPI_dataSetting[3], sizeof(TDSCDMA_TAS_MIPI_DATA_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE);

    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatB_BpiSetting,tl1_TasData_ptr->TDSCDMA_TAS_CATB_BPI_TABLE,sizeof(TDSCDMA_CUSTOM_TAS_FE_SETTING_T)*TDSCDMA_TAS_MAX_CAT_BPIROUTE_NUM);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatB_MIPI_Rout0_EventSetting,tl1_TasData_ptr->Td_CatB_MIPI_EventSetting[0],sizeof(TDSCDMA_TAS_MIPI_EVENT_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatB_MIPI_Rout1_EventSetting,tl1_TasData_ptr->Td_CatB_MIPI_EventSetting[1],sizeof(TDSCDMA_TAS_MIPI_EVENT_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatB_MIPI_Rout2_EventSetting,tl1_TasData_ptr->Td_CatB_MIPI_EventSetting[2],sizeof(TDSCDMA_TAS_MIPI_EVENT_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatB_MIPI_Rout3_EventSetting,tl1_TasData_ptr->Td_CatB_MIPI_EventSetting[3],sizeof(TDSCDMA_TAS_MIPI_EVENT_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatB_MIPI_Rout0_dataSetting,tl1_TasData_ptr->Td_CatB_MIPI_dataSetting[0], sizeof(TDSCDMA_TAS_MIPI_DATA_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatB_MIPI_Rout1_dataSetting,tl1_TasData_ptr->Td_CatB_MIPI_dataSetting[1], sizeof(TDSCDMA_TAS_MIPI_DATA_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatB_MIPI_Rout2_dataSetting,tl1_TasData_ptr->Td_CatB_MIPI_dataSetting[2], sizeof(TDSCDMA_TAS_MIPI_DATA_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE);
    kal_mem_cpy(&g_tl1_d_tl_tas_param.Td_CatB_MIPI_Rout3_dataSetting,tl1_TasData_ptr->Td_CatB_MIPI_dataSetting[3], sizeof(TDSCDMA_TAS_MIPI_DATA_TABLE_T)*TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE);
#endif
}
#endif

//const tl1CustomDynamicInitMipiData tl1CustomMipiDataDefault[] = {{
//       &AST_TL1_RF_PARAMETER_DEFAULT_SetDefault[0],
//	     &AST_TL1_RFFE_PARAMETER_DEFAULT_SetDefault[0],
//	     &AST_TL1_SEQ_DEFAULT_SetDefault[0],
//       &tl1CustomDATData_SetDefault
//}};

kal_bool tl1d_DRDI_had_done = KAL_FALSE;

#ifdef __RF_DRDI_CAPABILITY_SUPPORT__
void nvram_tl1_drdiPointerInit(kal_uint16 setIdx)
{
     tl1_mipiData_ptr = &(tl1CustomMipiData[setIdx]);
#ifdef __TAS_SUPPORT__
     tl1_TasData_ptr  = tl1CustomTASData_drdi_point[setIdx];
     tl1_custom_point_empty_check((void *)tl1_TasData_ptr, setIdx,0 , 0x2 );     
#endif

     tl1_custom_point_empty_check((void *)tl1_mipiData_ptr,setIdx,0 , 0x1 );
}
#endif

void nvram_tl1_drdiPointerInitDefault(kal_uint16 setIdx)
{
     tl1_mipiData_ptr = &(tl1CustomMipiDataDefault[0]);
#ifdef __TAS_SUPPORT__
     tl1_TasData_ptr  = &(tl1CustomTASData_SetDefault);
#endif

}

void nvram_tl1_drdi(void)
{
#ifdef __RF_DRDI_CAPABILITY_SUPPORT__
   if(gTdsDrdiFlag)
   {
       if(!tl1d_DRDI_had_done)
       {
           if(MML1_RF_DRDI_CUSTOM_IsDynamicInitEnable())
           {
               kal_uint16 setIdx;
               setIdx = MML1_RF_DRDI_Dynamic_GetParamAddr(MML1_RF_3G_TDD);
               /* set the pointer to RF custom data by set index */
               gSetIdx = setIdx;
               nvram_tl1_drdiPointerInit(setIdx);
           }
           else
           {
           	   nvram_tl1_drdiPointerInit(0);
           }
           tl1d_DRDI_had_done = KAL_TRUE;
       }
   }
   else
   {
       nvram_tl1_drdiPointerInitDefault(0);
       gDefaultPath = 0xc;
   }
#ifdef __TAS_SUPPORT__
    td_tl1_rf_tas_param_updatere();
#endif
#else
       nvram_tl1_drdiPointerInitDefault(0);
#ifdef __TAS_SUPPORT__
       td_tl1_rf_tas_param_updatere();
#endif
       gDefaultPath = 0xb;

#endif
}

void nvram_get_tL1_default_value_to_write(nvram_lid_core_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size)
{
   nvram_tl1_drdi();

   //tl1_mipiData_ptr->rfTable_p->tReserverData.uwPadding[0] = gSetIdx;
   //tl1_mipiData_ptr->rfTable_p->tReserverData.uwPadding[1] = gDefaultPath;

   switch (lid)
   {
      case NVRAM_EF_AST_TL1_RF_PARAM_LID:
      {
          T_TD_CUSTOMIZATION_STRUCT *rf_param_ptr = (T_TD_CUSTOMIZATION_STRUCT *)buffer;
          kal_mem_cpy(rf_param_ptr, tl1_mipiData_ptr->rfTable_p, NVRAM_EF_AST_TL1_RF_PARAM_SIZE);
          rf_param_ptr->tReserverData.uwPadding[0] = gSetIdx;
          rf_param_ptr->tReserverData.uwPadding[1] = gDefaultPath;
      }
      break;
      case NVRAM_EF_AST_TL1_RFFE_PARAM_LID:
      {
          kal_mem_cpy(buffer, tl1_mipiData_ptr->mipiTable_p, NVRAM_EF_AST_TL1_RFFE_PARAM_SIZE);
      }
      break;
      case NVRAM_EF_AST_TL1_RF_TIMESEQ_LID:
      {
          kal_mem_cpy(buffer, tl1_mipiData_ptr->timingTable_p, NVRAM_EF_AST_TL1_RF_TIMESEQ_SIZE);
      }
      break;
#ifdef __TAS_SUPPORT__
      case NVRAM_EF_AST_TL1_TAS_CUSTOM_PARAMES_LID:
      {
#if defined(__MTK_TARGET__)
         kal_mem_cpy(buffer, &g_tl1_d_tl_tas_param, NVRAM_EF_AST_TL1_TAS_CUSTOM_PARAMES_SIZE);
#endif
      }
      break;
#endif
      case NVRAM_EF_AST_TL1_DAT_PARAM_LID:
      {
         T_TD_CUSTOMIZATION_DAT_STRUCT *gDatData = (T_TD_CUSTOMIZATION_DAT_STRUCT *)buffer;

         kal_mem_cpy(&(gDatData->TL1D_DAT_CONFIG), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CONFIG, sizeof(T_TD_CUSTOMIZATION_DAT_CONFIG));

         kal_mem_cpy(&(gDatData->TL1D_DAT_CATA_BPI_TABLE), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CATA_BPI_TABLE, sizeof(TL1D_CUSTOM_DAT_FE_CAT_A_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_A_CONFIG0_MIPIEVENT[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_A_MIPI_EventSet[0], TL1D_DAT_MAX_MIPI_EVNET_NUM*sizeof(TL1D_DAT_MIPI_EVENT_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_A_CONFIG1_MIPIEVENT[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_A_MIPI_EventSet[1], TL1D_DAT_MAX_MIPI_EVNET_NUM*sizeof(TL1D_DAT_MIPI_EVENT_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_A_CONFIG2_MIPIEVENT[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_A_MIPI_EventSet[2], TL1D_DAT_MAX_MIPI_EVNET_NUM*sizeof(TL1D_DAT_MIPI_EVENT_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_A_CONFIG3_MIPIEVENT[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_A_MIPI_EventSet[3], TL1D_DAT_MAX_MIPI_EVNET_NUM*sizeof(TL1D_DAT_MIPI_EVENT_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_A_CONFIG0_MIPIDATA[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_A_MIPI_DataSet[0], TL1D_DAT_MAX_MIPI_DATA_NUM*sizeof(TL1D_DAT_MIPI_DATA_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_A_CONFIG1_MIPIDATA[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_A_MIPI_DataSet[1], TL1D_DAT_MAX_MIPI_DATA_NUM*sizeof(TL1D_DAT_MIPI_DATA_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_A_CONFIG2_MIPIDATA[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_A_MIPI_DataSet[2], TL1D_DAT_MAX_MIPI_DATA_NUM*sizeof(TL1D_DAT_MIPI_DATA_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_A_CONFIG3_MIPIDATA[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_A_MIPI_DataSet[3], TL1D_DAT_MAX_MIPI_DATA_NUM*sizeof(TL1D_DAT_MIPI_DATA_TABLE_T));

         kal_mem_cpy(&(gDatData->TL1D_DAT_CATB_BPI_TABLE), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CATB_BPI_TABLE, sizeof(TL1D_CUSTOM_DAT_FE_CAT_B_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG0_MIPIEVENT[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_EventSet[0], TL1D_DAT_MAX_MIPI_EVNET_NUM*sizeof(TL1D_DAT_MIPI_EVENT_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG1_MIPIEVENT[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_EventSet[1], TL1D_DAT_MAX_MIPI_EVNET_NUM*sizeof(TL1D_DAT_MIPI_EVENT_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG2_MIPIEVENT[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_EventSet[2], TL1D_DAT_MAX_MIPI_EVNET_NUM*sizeof(TL1D_DAT_MIPI_EVENT_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG3_MIPIEVENT[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_EventSet[3], TL1D_DAT_MAX_MIPI_EVNET_NUM*sizeof(TL1D_DAT_MIPI_EVENT_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG4_MIPIEVENT[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_EventSet[4], TL1D_DAT_MAX_MIPI_EVNET_NUM*sizeof(TL1D_DAT_MIPI_EVENT_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG5_MIPIEVENT[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_EventSet[5], TL1D_DAT_MAX_MIPI_EVNET_NUM*sizeof(TL1D_DAT_MIPI_EVENT_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG6_MIPIEVENT[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_EventSet[6], TL1D_DAT_MAX_MIPI_EVNET_NUM*sizeof(TL1D_DAT_MIPI_EVENT_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG7_MIPIEVENT[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_EventSet[7], TL1D_DAT_MAX_MIPI_EVNET_NUM*sizeof(TL1D_DAT_MIPI_EVENT_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG0_MIPIDATA[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_DataSet[0], TL1D_DAT_MAX_MIPI_DATA_NUM*sizeof(TL1D_DAT_MIPI_DATA_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG1_MIPIDATA[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_DataSet[1], TL1D_DAT_MAX_MIPI_DATA_NUM*sizeof(TL1D_DAT_MIPI_DATA_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG2_MIPIDATA[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_DataSet[2], TL1D_DAT_MAX_MIPI_DATA_NUM*sizeof(TL1D_DAT_MIPI_DATA_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG3_MIPIDATA[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_DataSet[3], TL1D_DAT_MAX_MIPI_DATA_NUM*sizeof(TL1D_DAT_MIPI_DATA_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG4_MIPIDATA[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_DataSet[4], TL1D_DAT_MAX_MIPI_DATA_NUM*sizeof(TL1D_DAT_MIPI_DATA_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG5_MIPIDATA[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_DataSet[5], TL1D_DAT_MAX_MIPI_DATA_NUM*sizeof(TL1D_DAT_MIPI_DATA_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG6_MIPIDATA[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_DataSet[6], TL1D_DAT_MAX_MIPI_DATA_NUM*sizeof(TL1D_DAT_MIPI_DATA_TABLE_T));
         kal_mem_cpy(&(gDatData->TL1D_DAT_CAT_B_CONFIG7_MIPIDATA[0]), tl1_mipiData_ptr->datTable_p->TL1D_DAT_CAT_B_MIPI_DataSet[7], TL1D_DAT_MAX_MIPI_DATA_NUM*sizeof(TL1D_DAT_MIPI_DATA_TABLE_T));

         //kal_mem_cpy(buffer, &gDatData, NVRAM_EF_AST_TL1_DAT_PARAM_SIZE);
      }
      break;

      default:
         ASSERT(KAL_FALSE);
      break;
   }
}

#endif  //#ifdef __AST_TL1_TDD__
