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
 *  lte_custom_drdi.h
 *
 * Project:
 * --------
 *  MOLY
 *
 * Description:
 * ------------
 *  Dynamic Radio-setting Dedicated Image.
 *  DRDI parameters custom macro definitions
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/

#ifndef  _LTE_CUSTOM_DRDI_H_
#define  _LTE_CUSTOM_DRDI_H_

/*******************************************************************************
** Includes
*******************************************************************************/
#include "kal_general_types.h"
#include "el1d_rf_common.h"
#include "el1d_rf_drdi.h"
#include "mml1_custom_drdi.h"
#include "lte_custom_rf.h"
#include "lte_custom_rf_ca.h"
#include "lte_custom_rf_dpd.h"
#include "lte_custom_rf_tpc.h"
#include "lte_custom_rf_tas.h"
#include "lte_custom_rf_dat.h"
#include "lte_custom_rf_ant_reorg.h"

/*******************************************************************************
** Define
*******************************************************************************/
/****************************************************************************/
/* Dynamic Radio-setting Dedicated Images                                   */
/* Let DRDI GPIO/ADC/Barcode BPI setting overwrite NVRAN BPI setting        */
/****************************************************************************/
#define  EL1_CUSTOM_DYNAMIC_INIT_ENABLE  IS_MML1_DRDI_ENABLE

/*****************************************************************************
* Constant    : IS_EL1_CALIBRATION_DATA_DRDI_ENABLE
* Group       : Real target, Internals, EL1 common operation
* Description : Enable flag for DRDI of RF calibration data 
*****************************************************************************/
#define IS_EL1_CALIBRATION_DATA_DRDI_ENABLE   IS_MML1_CALIBRATION_DATA_DRDI_ENABLE


/*****************************************************************************
* Constant    : EL1_CUSTOM_DEBUG_ENABLE
* Group       : Real target, Customization, EL1 common operation
* Description : Constants to enable "Dynamic Initialization RF parameters"
*               debug info logging
*               For trace output to debug ( EL1_CustomDynamicDebug() )
*****************************************************************************/
#define  EL1_CUSTOM_DEBUG_ENABLE         1

/*****************************************************************************
* Constant    : EL1_CUSTOM_TOTAL_SET_NUMS
* Group       : Real target, Internals, EL1 common operation
* Description : Constant to be used as the number of total supported configuration sets
*****************************************************************************/
#define  EL1_CUSTOM_TOTAL_SET_NUMS       MML1_CUSTOM_TOTAL_SET_NUMS

/*****************************************************************************
* Constant    : EL1_CUSTOM_TOTAL_REAL_SET_NUMS
* Group       : Real target, Internals, EL1 common operation
* Description : Constant to be used as the number of total REAL configuration sets
*****************************************************************************/
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
#define  EL1_CUSTOM_TOTAL_REAL_SET_NUMS  MML1_DRDI_REMAP_LTE_REAL_SET_NUMS
#else
#define  EL1_CUSTOM_TOTAL_REAL_SET_NUMS  1
#endif


/*******************************************************************************
** Macro
*******************************************************************************/
#define EL1_CUSTOM_LTE_BAND(s) \
{                              \
   BAND_INDICATOR0_##s,        \
   BAND_INDICATOR1_##s,        \
   BAND_INDICATOR2_##s,        \
   BAND_INDICATOR3_##s,        \
   BAND_INDICATOR4_##s,        \
   BAND_INDICATOR5_##s,        \
   BAND_INDICATOR6_##s,        \
   BAND_INDICATOR7_##s,        \
   BAND_INDICATOR8_##s,        \
   BAND_INDICATOR9_##s,        \
   BAND_INDICATOR10_##s,       \
   BAND_INDICATOR11_##s,       \
   BAND_INDICATOR12_##s,       \
   BAND_INDICATOR13_##s,       \
   BAND_INDICATOR14_##s,       \
   BAND_INDICATOR15_##s,       \
   BAND_INDICATOR16_##s,       \
   BAND_INDICATOR17_##s,       \
   BAND_INDICATOR18_##s,       \
   BAND_INDICATOR19_##s,       \
   BAND_INDICATOR20_##s,       \
   BAND_INDICATOR21_##s,       \
   BAND_INDICATOR22_##s,       \
   BAND_INDICATOR23_##s,       \
   BAND_INDICATOR24_##s,       \
}

#define EL1_CUSTOM_LTE_BAND_SW(s)      \
{                                      \
   BAND_INDICATOR0_SUPPORT_##s,        \
   BAND_INDICATOR1_SUPPORT_##s,        \
   BAND_INDICATOR2_SUPPORT_##s,        \
   BAND_INDICATOR3_SUPPORT_##s,        \
   BAND_INDICATOR4_SUPPORT_##s,        \
   BAND_INDICATOR5_SUPPORT_##s,        \
   BAND_INDICATOR6_SUPPORT_##s,        \
   BAND_INDICATOR7_SUPPORT_##s,        \
   BAND_INDICATOR8_SUPPORT_##s,        \
   BAND_INDICATOR9_SUPPORT_##s,        \
   BAND_INDICATOR10_SUPPORT_##s,       \
   BAND_INDICATOR11_SUPPORT_##s,       \
   BAND_INDICATOR12_SUPPORT_##s,       \
   BAND_INDICATOR13_SUPPORT_##s,       \
   BAND_INDICATOR14_SUPPORT_##s,       \
   BAND_INDICATOR15_SUPPORT_##s,       \
   BAND_INDICATOR16_SUPPORT_##s,       \
   BAND_INDICATOR17_SUPPORT_##s,       \
   BAND_INDICATOR18_SUPPORT_##s,       \
   BAND_INDICATOR19_SUPPORT_##s,       \
   BAND_INDICATOR20_SUPPORT_##s,       \
   BAND_INDICATOR21_SUPPORT_##s,       \
   BAND_INDICATOR22_SUPPORT_##s,       \
   BAND_INDICATOR23_SUPPORT_##s,       \
   BAND_INDICATOR24_SUPPORT_##s,       \
}

#define EL1_CUSTOM_LTE_DPD_BAND(s) \
{                                  \
   BAND_INDICATOR0_##s,            \
   BAND_INDICATOR1_##s,            \
   BAND_INDICATOR2_##s,            \
   BAND_INDICATOR3_##s,            \
   BAND_INDICATOR4_##s,            \
   BAND_INDICATOR5_##s,            \
   BAND_INDICATOR6_##s,            \
   BAND_INDICATOR7_##s,            \
   BAND_INDICATOR8_##s,            \
   BAND_INDICATOR9_##s,            \
   BAND_INDICATOR10_##s,           \
   BAND_INDICATOR11_##s,           \
   BAND_INDICATOR12_##s,           \
   BAND_INDICATOR13_##s,           \
   BAND_INDICATOR14_##s,           \
   BAND_INDICATOR15_##s,           \
   BAND_INDICATOR16_##s,           \
   BAND_INDICATOR17_##s,           \
   BAND_INDICATOR18_##s,           \
   BAND_INDICATOR19_##s,           \
   BAND_INDICATOR20_##s,           \
}

#define EL1_CUSTOM_LTE_BAND_CCA(s) \
{                              \
   BAND_INDICATOR0_CCA_Support_##s,        \
   BAND_INDICATOR1_CCA_Support_##s,        \
   BAND_INDICATOR2_CCA_Support_##s,        \
   BAND_INDICATOR3_CCA_Support_##s,        \
   BAND_INDICATOR4_CCA_Support_##s,        \
   BAND_INDICATOR5_CCA_Support_##s,        \
   BAND_INDICATOR6_CCA_Support_##s,        \
   BAND_INDICATOR7_CCA_Support_##s,        \
   BAND_INDICATOR8_CCA_Support_##s,        \
   BAND_INDICATOR9_CCA_Support_##s,        \
   BAND_INDICATOR10_CCA_Support_##s,       \
   BAND_INDICATOR11_CCA_Support_##s,       \
   BAND_INDICATOR12_CCA_Support_##s,       \
   BAND_INDICATOR13_CCA_Support_##s,       \
   BAND_INDICATOR14_CCA_Support_##s,       \
   BAND_INDICATOR15_CCA_Support_##s,       \
   BAND_INDICATOR16_CCA_Support_##s,       \
   BAND_INDICATOR17_CCA_Support_##s,       \
   BAND_INDICATOR18_CCA_Support_##s,       \
   BAND_INDICATOR19_CCA_Support_##s,       \
   BAND_INDICATOR20_CCA_Support_##s,       \
   BAND_INDICATOR21_CCA_Support_##s,       \
   BAND_INDICATOR22_CCA_Support_##s,       \
   BAND_INDICATOR23_CCA_Support_##s,       \
   BAND_INDICATOR24_CCA_Support_##s,       \
}
#define EL1_CUSTOM_LTE_BAND_FILTER_CCA(s) \
{                              \
   BAND_FILTER_INDICATOR0_CCA_Support_##s,        \
   BAND_FILTER_INDICATOR1_CCA_Support_##s,        \
   BAND_FILTER_INDICATOR2_CCA_Support_##s,        \
   BAND_FILTER_INDICATOR3_CCA_Support_##s,        \
   BAND_FILTER_INDICATOR4_CCA_Support_##s,        \
}
#define EL1_CUSTOM_LTE_CIM3_BAND(s) \
{                                   \
   CIM3_BAND_INDICATOR0_##s,        \
   CIM3_BAND_INDICATOR1_##s,        \
   CIM3_BAND_INDICATOR2_##s,        \
   CIM3_BAND_INDICATOR3_##s,        \
   CIM3_BAND_INDICATOR4_##s,        \
   CIM3_BAND_INDICATOR5_##s,        \
   CIM3_BAND_INDICATOR6_##s,        \
   CIM3_BAND_INDICATOR7_##s,        \
   CIM3_BAND_INDICATOR8_##s,        \
   CIM3_BAND_INDICATOR9_##s,        \
   CIM3_BAND_INDICATOR10_##s,       \
   CIM3_BAND_INDICATOR11_##s,       \
   CIM3_BAND_INDICATOR12_##s,       \
   CIM3_BAND_INDICATOR13_##s,       \
   CIM3_BAND_INDICATOR14_##s,       \
   CIM3_BAND_INDICATOR15_##s,       \
   CIM3_BAND_INDICATOR16_##s,       \
   CIM3_BAND_INDICATOR17_##s,       \
   CIM3_BAND_INDICATOR18_##s,       \
   CIM3_BAND_INDICATOR19_##s,       \
   CIM3_BAND_INDICATOR20_##s,       \
}


#define EL1_CUSTOM_LTE_MPR_ADJUST_DATA(s)      \
{                                              \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR0_##s,  s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR1_##s,  s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR2_##s,  s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR3_##s,  s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR4_##s,  s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR5_##s,  s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR6_##s,  s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR7_##s,  s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR8_##s,  s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR9_##s,  s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR10_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR11_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR12_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR13_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR14_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR15_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR16_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR17_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR18_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR19_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR20_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR21_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR22_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR23_##s, s), \
   LTE_RF_MPR_ADJUST(BAND_INDICATOR24_##s, s), \
}

#define EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(s)      \
{                                                 \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR0_##s,  s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR1_##s,  s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR2_##s,  s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR3_##s,  s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR4_##s,  s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR5_##s,  s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR6_##s,  s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR7_##s,  s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR8_##s,  s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR9_##s,  s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR10_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR11_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR12_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR13_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR14_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR15_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR16_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR17_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR18_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR19_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR20_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR21_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR22_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR23_##s, s), \
   LTE_RF_MPR_ADJUST_CA(BAND_INDICATOR24_##s, s), \
}

#define EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(s)      \
{                                                      \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR0_##s,  s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR1_##s,  s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR2_##s,  s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR3_##s,  s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR4_##s,  s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR5_##s,  s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR6_##s,  s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR7_##s,  s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR8_##s,  s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR9_##s,  s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR10_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR11_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR12_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR13_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR14_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR15_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR16_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR17_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR18_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR19_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR20_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR21_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR22_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR23_##s, s), \
   LTE_RF_MPR_ADJUST_HPUE_CA(BAND_INDICATOR24_##s, s), \
}

#define EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(s)      \
{                                              \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR0,  s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR1,  s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR2,  s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR3,  s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR4,  s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR5,  s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR6,  s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR7,  s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR8,  s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR9,  s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR10, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR11, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR12, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR13, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR14, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR15, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR16, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR17, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR18, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR19, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR20, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR21, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR22, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR23, s), \
   LTE_TX_MULTICLUSTER_POW_BF(BAND_INDICATOR24, s), \
}

#define EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_CCA_DATA(s)      \
{                                                              \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR0,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR1,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR2,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR3,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR4,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR5,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR6,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR7,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR8,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR9,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR10, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR11, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR12, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR13, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR14, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR15, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR16, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR17, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR18, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR19, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR20, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR21, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR22, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR23, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA(BAND_INDICATOR24, s), \
}

#define EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_CCA_0_DATA(s)      \
{                                                              \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR0,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR1,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR2,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR3,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR4,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR5,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR6,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR7,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR8,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR9,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR10, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR11, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR12, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR13, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR14, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR15, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR16, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR17, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR18, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR19, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR20, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR21, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR22, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR23, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_0(BAND_INDICATOR24, s), \
}

#define EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_CCA_1_DATA(s)      \
{                                                              \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR0,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR1,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR2,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR3,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR4,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR5,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR6,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR7,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR8,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR9,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR10, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR11, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR12, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR13, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR14, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR15, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR16, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR17, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR18, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR19, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR20, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR21, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR22, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR23, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_1(BAND_INDICATOR24, s), \
}

#define EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_CCA_2_DATA(s)      \
{                                                              \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR0,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR1,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR2,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR3,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR4,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR5,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR6,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR7,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR8,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR9,  s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR10, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR11, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR12, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR13, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR14, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR15, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR16, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR17, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR18, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR19, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR20, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR21, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR22, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR23, s), \
   LTE_TX_MULTICLUSTER_POW_BF_CCA_2(BAND_INDICATOR24, s), \
}

#define LTE_HPUE_TPOS_PARAMETER_TABLE(s)                                                             \
{                                                                                                    \
   LTE_HPUE_TPOS_ENA_##s,                                                                            \
   {                                                                                                 \
      {LTE_HPUE_PC2_TPOS(BAND_HPUE_INDICATOR0_##s,s),LTE_HPUE_PC3_TPOS(BAND_HPUE_INDICATOR0_##s,s)}, \
      {LTE_HPUE_PC2_TPOS(BAND_HPUE_INDICATOR1_##s,s),LTE_HPUE_PC3_TPOS(BAND_HPUE_INDICATOR1_##s,s)}, \
      {LTE_HPUE_PC2_TPOS(BAND_HPUE_INDICATOR2_##s,s),LTE_HPUE_PC3_TPOS(BAND_HPUE_INDICATOR2_##s,s)}, \
      {LTE_HPUE_PC2_TPOS(BAND_HPUE_INDICATOR3_##s,s),LTE_HPUE_PC3_TPOS(BAND_HPUE_INDICATOR3_##s,s)}, \
      {LTE_HPUE_PC2_TPOS(BAND_HPUE_INDICATOR4_##s,s),LTE_HPUE_PC3_TPOS(BAND_HPUE_INDICATOR4_##s,s)}, \
   }                                                                                                 \
}

#define EL1_CUSTOM_FE_RX_ROUTE_DATA(s)     &LTE_FRONT_END_RX_ROUTE_DATABASE_##s
#define EL1_CUSTOM_FE_TX_ROUTE_DATA(s)     &LTE_FRONT_END_TX_ROUTE_DATABASE_##s
#define EL1_CUSTOM_FE_CA_LINKAGE_DB(s)     &LTE_FE_CA_LINKAGE_DATABASE_##s
#define EL1_CUSTOM_FE_CA_COMB_DB(s)        &LTE_FE_CA_BAND_COMB_DATABASE_##s
#define EL1_CUSTOM_FE_CCA_COMB_DB(s)       &LTE_FE_CCA_BAND_COMB_DATABASE_##s


#define EL1_CUSTOM_ANT_ROUTE_DATA(s)       &LTE_ANT_ROUTE_DATABASE_##s
#define EL1_CUSTOM_ANT_CA_LINKAGE(s)       &LTE_ANT_CA_LINKAGE_DATABASE_##s


#define EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(s)      \
{                                              \
   LTE_RF_PARTIAL_BAND_IND(BAND_PARTIAL_INDICATOR0,  s), \
   LTE_RF_PARTIAL_BAND_IND(BAND_PARTIAL_INDICATOR1,  s), \
   LTE_RF_PARTIAL_BAND_IND(BAND_PARTIAL_INDICATOR2,  s), \
   LTE_RF_PARTIAL_BAND_IND(BAND_PARTIAL_INDICATOR3,  s), \
   LTE_RF_PARTIAL_BAND_IND(BAND_PARTIAL_INDICATOR4,  s), \
}

#define EL1_CUSTOM_VPA_SOURCE_DATA(s)      \
{                                          \
   {                                       \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR0,  s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR1,  s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR2,  s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR3,  s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR4,  s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR5,  s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR6,  s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR7,  s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR8,  s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR9,  s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR10, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR11, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR12, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR13, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR14, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR15, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR16, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR17, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR18, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR19, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR20, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR21, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR22, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR23, s), \
      LTE_VPA_SOURCE_CONFIG(BAND_INDICATOR24, s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route25,  s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route26,  s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route27,  s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route28,  s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route29,  s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route30,  s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route31,  s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route32,  s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route33,  s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route34,  s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route35,  s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route36,  s), \
      LTE_VPA_SOURCE_CONFIG_ROUTE(LTE_Route37,  s), \
   }                                                \
}

#define EL1_CUSTOM_RX_PDATA(s)                   \
{                                                \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR0_##s,  s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR1_##s,  s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR2_##s,  s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR3_##s,  s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR4_##s,  s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR5_##s,  s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR6_##s,  s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR7_##s,  s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR8_##s,  s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR9_##s,  s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR10_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR11_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR12_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR13_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR14_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR15_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR16_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR17_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR18_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR19_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR20_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR21_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR22_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR23_##s, s), \
   LTE_RF_RX_PDATABASE(BAND_INDICATOR24_##s, s), \
}

#define EL1_CUSTOM_TX_PDATA(s)                   \
{                                                \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR0_##s,  s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR1_##s,  s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR2_##s,  s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR3_##s,  s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR4_##s,  s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR5_##s,  s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR6_##s,  s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR7_##s,  s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR8_##s,  s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR9_##s,  s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR10_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR11_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR12_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR13_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR14_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR15_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR16_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR17_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR18_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR19_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR20_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR21_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR22_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR23_##s, s), \
   LTE_RF_TX_PDATABASE(BAND_INDICATOR24_##s, s), \
}

#define EL1_CUSTOM_RF_RXIO(s)                \
{                                            \
   LTE_RF_RXIOBASE(BAND_INDICATOR0_##s,  s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR1_##s,  s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR2_##s,  s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR3_##s,  s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR4_##s,  s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR5_##s,  s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR6_##s,  s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR7_##s,  s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR8_##s,  s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR9_##s,  s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR10_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR11_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR12_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR13_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR14_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR15_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR16_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR17_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR18_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR19_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR20_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR21_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR22_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR23_##s, s), \
   LTE_RF_RXIOBASE(BAND_INDICATOR24_##s, s), \
}

#define EL1_CUSTOM_RF_TXIO(s)                \
{                                            \
   LTE_RF_TXIOBASE(BAND_INDICATOR0_##s,  s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR1_##s,  s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR2_##s,  s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR3_##s,  s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR4_##s,  s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR5_##s,  s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR6_##s,  s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR7_##s,  s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR8_##s,  s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR9_##s,  s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR10_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR11_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR12_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR13_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR14_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR15_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR16_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR17_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR18_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR19_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR20_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR21_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR22_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR23_##s, s), \
   LTE_RF_TXIOBASE(BAND_INDICATOR24_##s, s), \
}

#define RF_BPI_EVT_OFST_RX_ON(s) \
{                                \
   TC_FPR0,                      \
   TC_FPR1_##s,                  \
   TC_FPR2_##s,                  \
   TC_TPR0,                      \
   TC_TPR1_##s,                  \
   TC_TPR2_##s,                  \
}

#define RF_BPI_EVT_OFST_RX_OFF(s) \
{                                 \
  TC_FPR3_##s,                    \
  TC_TPR3_##s,                    \
  TC_FPR3C,                       \
  TC_TPR3C,                       \
}

#define RF_BPI_EVT_OFST_TX_ON(s) \
{                                \
   TC_FPT0,                      \
   TC_FPT1_##s,                  \
   TC_FPT2_##s,                  \
   TC_FPR3B,                     \
   TC_TPT0,                      \
   TC_TPT1_##s,                  \
   TC_TPT2_##s,                  \
   TC_TPR3B,                     \
}

#define RF_BPI_EVT_OFST_TX_OFF(s) \
{                                 \
   TC_FPT3_##s,                   \
   TC_TPT3_##s,                   \
}

#define EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(s) \
{                                              \
   RF_BPI_EVT_OFST_RX_ON(s),                   \
   RF_BPI_EVT_OFST_RX_OFF(s),                  \
   RF_BPI_EVT_OFST_TX_ON(s),                   \
   RF_BPI_EVT_OFST_TX_OFF(s),                  \
}

#define EL1_CUSTOM_RF_SPLIT_BAND(s)                 \
{                                                   \
   LTE_RF_SPLIT_BAND_IND(BAND_SPLIT_INDICATOR0, s), \
   LTE_RF_SPLIT_BAND_IND(BAND_SPLIT_INDICATOR1, s), \
   LTE_RF_SPLIT_BAND_IND(BAND_SPLIT_INDICATOR2, s), \
   LTE_RF_SPLIT_BAND_IND(BAND_SPLIT_INDICATOR3, s), \
   LTE_RF_SPLIT_BAND_IND(BAND_SPLIT_INDICATOR4, s), \
}

#define EL1_CUSTOM_RF_SPLIT_RFDATABASE(s)                 \
{                                                         \
   LTE_RF_SPLIT_RFDATABASE(BAND_SPLIT_INDICATOR0_##s, s), \
   LTE_RF_SPLIT_RFDATABASE(BAND_SPLIT_INDICATOR1_##s, s), \
   LTE_RF_SPLIT_RFDATABASE(BAND_SPLIT_INDICATOR2_##s, s), \
   LTE_RF_SPLIT_RFDATABASE(BAND_SPLIT_INDICATOR3_##s, s), \
   LTE_RF_SPLIT_RFDATABASE(BAND_SPLIT_INDICATOR4_##s, s), \
}

#define EL1_CUSTOM_RF_FILTER_BAND(s)                  \
{                                                     \
   LTE_RF_FILTER_BAND_IND(BAND_FILTER_INDICATOR0, s), \
   LTE_RF_FILTER_BAND_IND(BAND_FILTER_INDICATOR1, s), \
   LTE_RF_FILTER_BAND_IND(BAND_FILTER_INDICATOR2, s), \
   LTE_RF_FILTER_BAND_IND(BAND_FILTER_INDICATOR3, s), \
   LTE_RF_FILTER_BAND_IND(BAND_FILTER_INDICATOR4, s), \
}

#define EL1_CUSTOM_RF_FILTER_RFDATABASE(s)                  \
{                                                           \
   LTE_RF_FILTER_RFDATABASE(BAND_FILTER_INDICATOR0_##s, s), \
   LTE_RF_FILTER_RFDATABASE(BAND_FILTER_INDICATOR1_##s, s), \
   LTE_RF_FILTER_RFDATABASE(BAND_FILTER_INDICATOR2_##s, s), \
   LTE_RF_FILTER_RFDATABASE(BAND_FILTER_INDICATOR3_##s, s), \
   LTE_RF_FILTER_RFDATABASE(BAND_FILTER_INDICATOR4_##s, s), \
}

#define EL1_CUSTOM_RF_TAS_FE_ROUTE(s)   &LTE_TAS_FE_ROUTE_DATABASE_##s
#define EL1_CUSTOM_RF_TAS_FEATURE(s)    &ERF_TAS_FEATURE_BY_RAT_##s
#define EL1_CUSTOM_RF_TAS_CA_LINKAGE(s) &LTE_TAS_CA_LINKAGE_DATABASE_##s
#define EL1_CUSTOM_RF_TAS_CAT_A_DB(s)   &LTE_TAS_CAT_A_DATABASE_##s
#define EL1_CUSTOM_RF_TAS_CAT_B_DB(s)   &LTE_TAS_CAT_B_DATABASE_##s
#define EL1_CUSTOM_RF_TAS_CAT_C_DB(s)   &LTE_TAS_CAT_C_DATABASE_##s
#define EL1_CUSTOM_RF_TAS_CA_LAYOUT(s)  &LTE_TAS_CA_LAYOUT_INFO_DATABASE_##s


#define EL1_CUSTOM_RF_TX_POWER_BACKOFF(s)     \
{                                             \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR0,  s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR1,  s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR2,  s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR3,  s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR4,  s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR5,  s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR6,  s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR7,  s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR8,  s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR9,  s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR10, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR11, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR12, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR13, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR14, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR15, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR16, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR17, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR18, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR19, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR20, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR21, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR22, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR23, s), \
   LTE_TX_POWER_BACKOFF(BAND_INDICATOR24, s), \
}

#define EL1_CUSTOM_RF_TX_POWER_BACKOFF_CONDITION(s)     \
{                                                       \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR0,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR1,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR2,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR3,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR4,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR5,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR6,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR7,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR8,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR9,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR10, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR11, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR12, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR13, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR14, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR15, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR16, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR17, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR18, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR19, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR20, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR21, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR22, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR23, s), \
   LTE_TX_POWER_BACKOFF_CONDITION(BAND_INDICATOR24, s), \
}

#define EL1_CUSTOM_RF_TX_POWER_CONDITIONAL_BACKOFF_TABLE(s)          \
{                                                                    \
   LTE_TX_POWER_CONDITIONAL_BACKOFF_TABLE(LTE_TX_CONDI_BF_TBL0,  s), \
   LTE_TX_POWER_CONDITIONAL_BACKOFF_TABLE(LTE_TX_CONDI_BF_TBL1,  s), \
   LTE_TX_POWER_CONDITIONAL_BACKOFF_TABLE(LTE_TX_CONDI_BF_TBL2,  s), \
   LTE_TX_POWER_CONDITIONAL_BACKOFF_TABLE(LTE_TX_CONDI_BF_TBL3,  s), \
   LTE_TX_POWER_CONDITIONAL_BACKOFF_TABLE(LTE_TX_CONDI_BF_TBL4,  s), \
   LTE_TX_POWER_CONDITIONAL_BACKOFF_TABLE(LTE_TX_CONDI_BF_TBL5,  s), \
}

#define EL1_CUSTOM_RF_TX_POWER_BACKOFF_CONDITION_CCA(s)     \
{                                                       \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR0,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR1,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR2,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR3,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR4,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR5,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR6,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR7,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR8,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR9,  s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR10, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR11, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR12, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR13, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR14, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR15, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR16, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR17, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR18, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR19, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR20, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR21, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR22, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR23, s), \
   LTE_TX_POWER_BACKOFF_CONDITION_CCA(BAND_INDICATOR24, s), \
}

#define EL1_CUSTOM_RF_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA(s)          \
{                                                                    \
   LTE_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA(LTE_TX_CONDI_BF_CCA_TBL0,  s), \
   LTE_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA(LTE_TX_CONDI_BF_CCA_TBL1,  s), \
   LTE_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA(LTE_TX_CONDI_BF_CCA_TBL2,  s), \
   LTE_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA(LTE_TX_CONDI_BF_CCA_TBL3,  s), \
   LTE_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA(LTE_TX_CONDI_BF_CCA_TBL4,  s), \
   LTE_TX_POWER_CONDITIONAL_BACKOFF_TABLE_CCA(LTE_TX_CONDI_BF_CCA_TBL5,  s), \
}

#if 0   //replace by El1CustomDynamicInitLteTxRampData in lte_custom_drdi.c
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#define EL1_CUSTOM_LTE_TX_RAMP_DATA(s)                 LTE_RampData_##s

#define EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(s)           LTE_PaOctLevTable_##s

#define EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(s)          LTE_FILTER_RampData_##s

#define EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(s)    LTE_FILTER_PaOctLevTable_##s


#define EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(s)      LTE_RSSIGainTblType1_##s

#define EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(s)      LTE_RSSIGainTblType2_##s

#define EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(s)             &FreqAdjustTbl_##s

#define EL1_CUSTOM_LTE_TEMP_DAC_DATA(s)                &TempDacTable_##s

#define EL1_CUSTOM_LTE_MIPI_ENABLE(s) IS_MIPI_FRONT_END_ENABLE_##s

#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#define EL1_CUSTOM_LTE_OLAT_ENABLE(s) LTE_ANT_ENABLE_##s

   #if IS_LTE_RF_DL_CA_SUPPORT || IS_LTE_RF_UL_CA_SUPPORT
      #if __IS_EL1D_RF_DAT_SUPPORT__
// Both DAT feature and CA capability can be supported
#define EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(s)  \
{                                               \
   &LTE_ANT_FE_ROUTE_DATABASE_##s,              \
   &LTE_ANT_CA_LINKAGE_DATABASE_REORG_##s,      \
   &LTE_ANT_CAT_A_DATABASE_##s,                 \
   &LTE_ANT_CAT_B_DATABASE_##s,                 \
   LTE_DAT_ENABLE_##s,                          \
   &LTE_DAT_FE_ROUTE_DATABASE_##s,              \
   &LTE_DAT_CA_LINKAGE_DATABASE_##s,            \
   LTE_ANT_CAT_A_MIPI_EVENT_TABLE_##s,          \
   LTE_ANT_CAT_A_MIPI_DATA_TABLE_##s,           \
   LTE_ANT_CAT_B_MIPI_EVENT_TABLE_##s,          \
   LTE_ANT_CAT_B_MIPI_DATA_TABLE_##s,           \
   LTE_ANT_CAT_A_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_ANT_CAT_A_MIPI_DATA_SIZE_TABLE_##s,      \
   LTE_ANT_CAT_B_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_ANT_CAT_B_MIPI_DATA_SIZE_TABLE_##s,      \
}
      #else
// No DAT feature but CA capability can be supported
#define EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(s)  \
{                                               \
   &LTE_ANT_FE_ROUTE_DATABASE_##s,              \
   &LTE_ANT_CA_LINKAGE_DATABASE_REORG_##s,      \
   &LTE_ANT_CAT_A_DATABASE_##s,                 \
   &LTE_ANT_CAT_B_DATABASE_##s,                 \
   LTE_ANT_CAT_A_MIPI_EVENT_TABLE_##s,          \
   LTE_ANT_CAT_A_MIPI_DATA_TABLE_##s,           \
   LTE_ANT_CAT_B_MIPI_EVENT_TABLE_##s,          \
   LTE_ANT_CAT_B_MIPI_DATA_TABLE_##s,           \
   LTE_ANT_CAT_A_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_ANT_CAT_A_MIPI_DATA_SIZE_TABLE_##s,      \
   LTE_ANT_CAT_B_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_ANT_CAT_B_MIPI_DATA_SIZE_TABLE_##s,      \
}
      #endif
   #else
      #if __IS_EL1D_RF_DAT_SUPPORT__
// DAT feature but no CA capability
#define EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(s)  \
{                                               \
   &LTE_ANT_FE_ROUTE_DATABASE_##s,              \
   &LTE_ANT_CAT_A_DATABASE_##s,                 \
   &LTE_ANT_CAT_B_DATABASE_##s,                 \
   LTE_DAT_ENABLE_##s,                          \
   &LTE_DAT_FE_ROUTE_DATABASE_##s,              \
   LTE_ANT_CAT_A_MIPI_EVENT_TABLE_##s,          \
   LTE_ANT_CAT_A_MIPI_DATA_TABLE_##s,           \
   LTE_ANT_CAT_B_MIPI_EVENT_TABLE_##s,          \
   LTE_ANT_CAT_B_MIPI_DATA_TABLE_##s,           \
   LTE_ANT_CAT_A_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_ANT_CAT_A_MIPI_DATA_SIZE_TABLE_##s,      \
   LTE_ANT_CAT_B_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_ANT_CAT_B_MIPI_DATA_SIZE_TABLE_##s,      \
}
      #else
// No DAT feature and no CA support
#define EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(s)  \
{                                               \
   &LTE_ANT_FE_ROUTE_DATABASE_##s,              \
   &LTE_ANT_CAT_A_DATABASE_##s,                 \
   &LTE_ANT_CAT_B_DATABASE_##s,                 \
   LTE_ANT_CAT_A_MIPI_EVENT_TABLE_##s,          \
   LTE_ANT_CAT_A_MIPI_DATA_TABLE_##s,           \
   LTE_ANT_CAT_B_MIPI_EVENT_TABLE_##s,          \
   LTE_ANT_CAT_B_MIPI_DATA_TABLE_##s,           \
   LTE_ANT_CAT_A_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_ANT_CAT_A_MIPI_DATA_SIZE_TABLE_##s,      \
   LTE_ANT_CAT_B_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_ANT_CAT_B_MIPI_DATA_SIZE_TABLE_##s,      \
}
      #endif
   #endif

#define EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(s) \
{                                               \
   LTE_MIPI_RX_EVENT_TABLE_##s,                 \
   LTE_MIPI_RX_DATA_TABLE_##s,                  \
   LTE_MIPI_TX_EVENT_TABLE_##s,                 \
   LTE_MIPI_TX_DATA_TABLE_##s,                  \
   LTE_MIPI_TPC_EVENT_TABLE_##s,                \
   LTE_MIPI_TPC_DATA_TABLE_##s,                 \
   LTE_MIPI_PA_TPC_SECTION_DATA_##s,            \
   LTE_MIPI_RX_EVENT_SIZE_TABLE_##s,            \
   LTE_MIPI_RX_DATA_SIZE_TABLE_##s,             \
   LTE_MIPI_TX_EVENT_SIZE_TABLE_##s,            \
   LTE_MIPI_TX_DATA_SIZE_TABLE_##s,             \
   LTE_MIPI_TPC_EVENT_SIZE_TABLE_##s,           \
   LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_##s,       \
}

#else
// No ANT reorg feature
#define EL1_CUSTOM_LTE_OLAT_ENABLE(s) IS_OLAT_ENABLE_##s
   #if IS_4G_TAS_CAT_C_SUPPORT
#define EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(s) \
{                                               \
   LTE_MIPI_RX_EVENT_TABLE_##s,                 \
   LTE_MIPI_RX_DATA_TABLE_##s,                  \
   LTE_MIPI_TX_EVENT_TABLE_##s,                 \
   LTE_MIPI_TX_DATA_TABLE_##s,                  \
   LTE_MIPI_TPC_EVENT_TABLE_##s,                \
   LTE_MIPI_TPC_DATA_TABLE_##s,                 \
   LTE_MIPI_PA_TPC_SECTION_DATA_##s,            \
   LTE_MIPI_ANTRX_EVENT_TABLE_##s,              \
   LTE_MIPI_ANTRX_DATA_TABLE_##s,               \
   LTE_MIPI_ANTTX_EVENT_TABLE_##s,              \
   LTE_MIPI_ANTTX_DATA_TABLE_##s,               \
   LTE_TAS_CAT_A_MIPI_EVENT_TABLE_##s,          \
   LTE_TAS_CAT_A_MIPI_DATA_TABLE_##s,           \
   LTE_TAS_CAT_B_MIPI_EVENT_TABLE_##s,          \
   LTE_TAS_CAT_B_MIPI_DATA_TABLE_##s,           \
   LTE_TAS_CAT_C_MIPI_EVENT_TABLE_##s,          \
   LTE_TAS_CAT_C_MIPI_DATA_TABLE_##s,           \
   LTE_MIPI_RX_EVENT_SIZE_TABLE_##s,            \
   LTE_MIPI_RX_DATA_SIZE_TABLE_##s,             \
   LTE_MIPI_TX_EVENT_SIZE_TABLE_##s,            \
   LTE_MIPI_TX_DATA_SIZE_TABLE_##s,             \
   LTE_MIPI_TPC_EVENT_SIZE_TABLE_##s,           \
   LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_##s,       \
   LTE_MIPI_ANTRX_EVENT_SIZE_TABLE_##s,         \
   LTE_MIPI_ANTRX_DATA_SIZE_TABLE_##s,          \
   LTE_MIPI_ANTTX_EVENT_SIZE_TABLE_##s,         \
   LTE_MIPI_ANTTX_DATA_SIZE_TABLE_##s,          \
   LTE_TAS_CAT_A_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_TAS_CAT_A_MIPI_DATA_SIZE_TABLE_##s,      \
   LTE_TAS_CAT_B_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_TAS_CAT_B_MIPI_DATA_SIZE_TABLE_##s,      \
   LTE_TAS_CAT_C_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_TAS_CAT_C_MIPI_DATA_SIZE_TABLE_##s,      \
}
   #else
#define EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(s) \
{                                               \
   LTE_MIPI_RX_EVENT_TABLE_##s,                 \
   LTE_MIPI_RX_DATA_TABLE_##s,                  \
   LTE_MIPI_TX_EVENT_TABLE_##s,                 \
   LTE_MIPI_TX_DATA_TABLE_##s,                  \
   LTE_MIPI_TPC_EVENT_TABLE_##s,                \
   LTE_MIPI_TPC_DATA_TABLE_##s,                 \
   LTE_MIPI_PA_TPC_SECTION_DATA_##s,            \
   LTE_MIPI_ANTRX_EVENT_TABLE_##s,              \
   LTE_MIPI_ANTRX_DATA_TABLE_##s,               \
   LTE_MIPI_ANTTX_EVENT_TABLE_##s,              \
   LTE_MIPI_ANTTX_DATA_TABLE_##s,               \
   LTE_TAS_CAT_A_MIPI_EVENT_TABLE_##s,          \
   LTE_TAS_CAT_A_MIPI_DATA_TABLE_##s,           \
   LTE_TAS_CAT_B_MIPI_EVENT_TABLE_##s,          \
   LTE_TAS_CAT_B_MIPI_DATA_TABLE_##s,           \
   LTE_MIPI_RX_EVENT_SIZE_TABLE_##s,            \
   LTE_MIPI_RX_DATA_SIZE_TABLE_##s,             \
   LTE_MIPI_TX_EVENT_SIZE_TABLE_##s,            \
   LTE_MIPI_TX_DATA_SIZE_TABLE_##s,             \
   LTE_MIPI_TPC_EVENT_SIZE_TABLE_##s,           \
   LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_##s,       \
   LTE_MIPI_ANTRX_EVENT_SIZE_TABLE_##s,         \
   LTE_MIPI_ANTRX_DATA_SIZE_TABLE_##s,          \
   LTE_MIPI_ANTTX_EVENT_SIZE_TABLE_##s,         \
   LTE_MIPI_ANTTX_DATA_SIZE_TABLE_##s,          \
   LTE_TAS_CAT_A_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_TAS_CAT_A_MIPI_DATA_SIZE_TABLE_##s,      \
   LTE_TAS_CAT_B_MIPI_EVENT_SIZE_TABLE_##s,     \
   LTE_TAS_CAT_B_MIPI_DATA_SIZE_TABLE_##s,      \
}
   #endif
#endif

#define EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(s) \
{                                                      \
   LTE_MIPI_FILTER_TPC_EVENT_TABLE_##s,                \
   LTE_MIPI_FILTER_TPC_DATA_TABLE_##s,                 \
   LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_##s,            \
   LTE_MIPI_FILTER_TPC_EVENT_SIZE_TABLE_##s,           \
   LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE_##s,       \
}

#if IS_4G_SAR_TX_POWER_OFFSET_SUPPORT
#define LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(s)              \
{                                                      \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR0,  s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR1,  s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR2,  s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR3,  s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR4,  s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR5,  s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR6,  s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR7,  s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR8,  s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR9,  s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR10, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR11, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR12, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR13, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR14, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR15, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR16, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR17, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR18, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR19, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR20, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR21, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR22, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR23, s),  \
      &LTE_SAR_TX_POWER_OFFSET_DATA(BAND_INDICATOR24, s),  \
}
#endif /* IS_4G_SAR_TX_POWER_OFFSET_SUPPORT*/

#if IS_4G_SAR_TX_POWER_OFFSET_SUPPORT || IS_4G_TX_POWER_OFFSET_SUPPORT
#define LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(s)              \
{                                                      \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR0,  s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR1,  s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR2,  s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR3,  s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR4,  s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR5,  s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR6,  s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR7,  s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR8,  s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR9,  s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR10, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR11, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR12, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR13, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR14, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR15, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR16, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR17, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR18, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR19, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR20, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR21, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR22, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR23, s),  \
      &LTE_SWTP_TX_POWER_OFFSET_DATA(BAND_INDICATOR24, s),  \
}
#endif /*IS_4G_SAR_TX_POWER_OFFSET_SUPPORT || IS_4G_TX_POWER_OFFSET_SUPPORT */

#if IS_4G_RX_POWER_OFFSET_SUPPORT
#define LTE_RX_POWER_OFFSET_DATA_TABLE(s)              \
{                                                      \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR0,  s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR1,  s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR2,  s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR3,  s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR4,  s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR5,  s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR6,  s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR7,  s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR8,  s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR9,  s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR10, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR11, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR12, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR13, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR14, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR15, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR16, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR17, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR18, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR19, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR20, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR21, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR22, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR23, s),  \
      &LTE_RX_POWER_OFFSET_DATA(BAND_INDICATOR24, s),  \
}
#endif

#if IS_4G_HPUE_FEATURE_SUPPORT
#define LTE_HPUE_PARAMETER_TABLE(s)\
{                                  \
   LTE_HPUE_ENA_##s,               \
   {                               \
      BAND_HPUE_INDICATOR0_##s,    \
      BAND_HPUE_INDICATOR1_##s,    \
      BAND_HPUE_INDICATOR2_##s,    \
      BAND_HPUE_INDICATOR3_##s,    \
      BAND_HPUE_INDICATOR4_##s,    \
   }                               \
}

   #if IS_4G_HPUE_FEATURE_CA_SUPPORT
#define LTE_CA_BAND_PARAM_DATA(x,y,s)      \
{                                          \
   x##_##y##_BAND_##s,                     \
   x##_##y##_ULBW_CLASS_##s,               \
   x##_##y##_DLBW_CLASS_##s,               \
}

#define LTE_HPUE_CA_BAND_COMB_DATA(x,s)    \
{                                          \
   x##_band_param_num_##s,                 \
   {                                       \
      LTE_CA_BAND_PARAM_DATA(x,GROUP0,s),  \
      LTE_CA_BAND_PARAM_DATA(x,GROUP1,s),  \
      LTE_CA_BAND_PARAM_DATA(x,GROUP2,s),  \
      LTE_CA_BAND_PARAM_DATA(x,GROUP3,s),  \
   }                                       \
}

#define LTE_HPUE_CA_CAPABILITY_TABLE(s)                      \
{                                                            \
   LTE_HPUE_ENA_##s,                                         \
   NUM_OF_HPUE_CLASS2_CA_##s,                                \
   {                                                         \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR0,s),  \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR1,s),  \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR2,s),  \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR3,s),  \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR4,s),  \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR5,s),  \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR6,s),  \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR7,s),  \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR8,s),  \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR9,s),  \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR10,s), \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR11,s), \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR12,s), \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR13,s), \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR14,s), \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR15,s), \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR16,s), \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR17,s), \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR18,s), \
      LTE_HPUE_CA_BAND_COMB_DATA(LTE_HPUE_CA_INDICATOR19,s), \
    }                                                        \
}
   #endif
#endif

#define EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(s)      \
{                                                     \
   IS_LTE_DPD_ENABLE_##s,                             \
   LTE_DPD_FacCommonData_Table_##s,                   \
   LTE_FILTER_DPD_FacCommonData_Table_##s,            \
   &LTE_PCFE_DPD_OTFC_CUSTOM_PARA_##s,                \
   LTE_MIPI_DPD_PA_TPC_SECTION_DATA_##s,              \
   LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_##s,       \
   LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SIZE_##s,         \
   LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SIZE_##s,  \
   LTE_DPD_BYPASS_DPD_NS_INFO_##s,                    \
}

#define EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(s)         \
{                                                      \
  &LTE_TAS_TST_STATE_GROUP_##s,                        \
  &LTE_TAS_TST_CONFIG_DATABASE_##s,                    \
}

#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#define LTE_INTERFERENCE_FREQUENCY_TABLE_A(s)     \
{                                                 \
   {                                              \
      LTE_INTERFERENCE_FREQ_TABLE_A_0_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_A_1_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_A_2_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_A_3_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_A_4_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_A_5_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_A_6_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_A_7_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_A_8_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_A_9_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_A_10_##s,       \
      LTE_INTERFERENCE_FREQ_TABLE_A_11_##s,       \
      LTE_INTERFERENCE_FREQ_TABLE_A_12_##s,       \
      LTE_INTERFERENCE_FREQ_TABLE_A_13_##s,       \
      LTE_INTERFERENCE_FREQ_TABLE_A_14_##s,       \
      LTE_INTERFERENCE_FREQ_TABLE_A_15_##s,       \
   }                                              \
}

#define LTE_INTERFERENCE_FREQUENCY_TABLE_B(s)     \
{                                                 \
   {                                              \
      LTE_INTERFERENCE_FREQ_TABLE_B_0_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_B_1_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_B_2_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_B_3_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_B_4_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_B_5_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_B_6_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_B_7_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_B_8_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_B_9_##s,        \
      LTE_INTERFERENCE_FREQ_TABLE_B_10_##s,       \
      LTE_INTERFERENCE_FREQ_TABLE_B_11_##s,       \
      LTE_INTERFERENCE_FREQ_TABLE_B_12_##s,       \
      LTE_INTERFERENCE_FREQ_TABLE_B_13_##s,       \
      LTE_INTERFERENCE_FREQ_TABLE_B_14_##s,       \
      LTE_INTERFERENCE_FREQ_TABLE_B_15_##s,       \
   }                                              \
}
#endif

#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#define LTE_ANT_REORG_CHECK(s) LTE_ANT_REORG_ENABLE_##s
#endif

#endif /* _LTE_CUSTOM_DRDI_H_*/
