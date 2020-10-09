
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
 * ul1d_custom_rf_dpd.c
 *
 * Project:
 * --------
 *   MT6292
 *
 * Description:
 * ------------
 *   WCDMA DPD custom data.
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
#if !defined(MT6177M_RF)
   #error "rf files mismatch with compile option!"
#endif

/*===============================================================================================*/
#include "kal_public_api.h"
#include "ul1d_rf_public.h"
#include "ul1d_custom_rf.h"
#include "ul1d_custom_rf_dpd.h"

#ifdef __MTK_TARGET__
#include "wcustomdata.h"
#endif

#if defined(L1_SIM)
#include "SymWrap.h"
#endif

/* WCDMA DPD factory calibration common control data */
const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBandNone_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_DISABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand1_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand2_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand3_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand4_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand5_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand6_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand7_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand8_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand9_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand10_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};
const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand11_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand19_Set1 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* The delta term add to pa_idx_th, value from custom file */   
   0,
};

/* WCDMA DPD factory common control data */
const U_sDPD_COMMON_CTRL*  UMTS_DPD_CommonCtrlData_Set1[] =
{
   M_UMTS_DPD_COMMON_CTRL_DATA(UMTSBandNone,Set1),
   M_UMTS_DPD_COMMON_CTRL_DATA(RX_BAND_INDICATOR_0_Set1,Set1),
   M_UMTS_DPD_COMMON_CTRL_DATA(RX_BAND_INDICATOR_1_Set1,Set1),
   M_UMTS_DPD_COMMON_CTRL_DATA(RX_BAND_INDICATOR_2_Set1,Set1),
   M_UMTS_DPD_COMMON_CTRL_DATA(RX_BAND_INDICATOR_3_Set1,Set1),
   M_UMTS_DPD_COMMON_CTRL_DATA(RX_BAND_INDICATOR_4_Set1,Set1)
};

const U_UL1D_PCFE_DPD_OTFC_CUSTOM_PARA_T  ul1d_pcfe_dpd_otfc_custom_para_Set1 =
{
   /*U_DPD_OTFC_CUSTOM_PARA_T*/
   //dpd_apt_temperature_th_by_rfic
   {
      { 0x41 , 0x41 }
   },
   /*U_PCFE_CUSTOM_PARA_T*/
   //reserved0
   {0},
   
   /* PCFE power threshold form DPD mode to linear mode */
   0x0A00,
   /* PCFE power threshold form linear mode to DPD mode */
   0x0B00,
};


