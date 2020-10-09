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
 *   
 *
 * Project:
 * --------
 *   
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

#include "kal_public_api.h"
#include "c2k_custom_rf.h"
#include "c2k_custom_rf_dpd.h"

/*............................................................................*/
/*                           DPD common data                      */
/*  enable Flag:CL1D_DPD_DISABLE/CL1D_DPD_ENABLE  */
/*............................................................................*/

/* BAND A..............................................................*/
const CL1D_RF_DPD_COMMON_CTRL_T CL1D_RF_DPD_COMMON_CTRL_BAND_A_Set3 = 
{
   /*DPD Normal Mode enable Flag*/
   CL1D_DPD_ENABLE,
   
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

/* BAND B..............................................................*/
const CL1D_RF_DPD_COMMON_CTRL_T CL1D_RF_DPD_COMMON_CTRL_BAND_B_Set3 = 
{
   /*DPD Normal Mode enable Flag*/
   CL1D_DPD_ENABLE,

   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   0,
};

/* BAND C..............................................................*/
const CL1D_RF_DPD_COMMON_CTRL_T CL1D_RF_DPD_COMMON_CTRL_BAND_C_Set3 = 
{
   /*DPD Normal Mode enable Flag*/
   CL1D_DPD_ENABLE,

   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   0,
};

/* BAND D..............................................................*/
const CL1D_RF_DPD_COMMON_CTRL_T CL1D_RF_DPD_COMMON_CTRL_BAND_D_Set3 = 
{
   /*DPD Normal Mode enable Flag*/
   CL1D_DPD_ENABLE,

   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   0,
};

/* BAND E..............................................................*/
const CL1D_RF_DPD_COMMON_CTRL_T CL1D_RF_DPD_COMMON_CTRL_BAND_E_Set3 = 
{
   /*DPD Normal Mode enable Flag*/
   CL1D_DPD_ENABLE,

   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   0,
};


const CL1D_RF_PCFE_DPD_OTFC_CUSTOM_PARA_T  CL1D_RF_PCFE_DPD_OTFC_CUSTOM_PARA__Set3 =
{
   /*U_DPD_OTFC_CUSTOM_PARA_T*/
   //dpd_apt_temperature_th_by_rfic
   {
      { -10 , 50 }
   },
   /*U_PCFE_CUSTOM_PARA_T*/
   //reserved0
   {0},
};


