/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *	lte_custom_drdi.c
 *
 * Project:
 * --------
 *  MOLY
 *
 * Description:
 * ------------
 *  Dynamic Radio-setting Dedicated Image.
 *  RF parameters data input file
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/

#if defined (__MTK_TARGET__) || defined (__LTE_L1SIM__)

/*******************************************************************************
** Includes
*******************************************************************************/
#include "el1d_rf_ca.h"
#include "lte_custom_rf_mpr.h"
#include "lte_custom_rf_tpc.h"
#include "lrfcustomdata.h"
#include "lte_custom_drdi.h"
#include "lte_custom_mipi.h"
#include "Toolgen/lte_custom_rf.h"
#include "Toolgen/lte_custom_rf_ca.h"
#include "Toolgen/lte_custom_rf_tas.h"
#include "Toolgen/lte_custom_rf_ant.h"
#include "lte_custom_mipi_dpd.h"
#include "Toolgen/lte_custom_rf_dpd.h"
#include "mml1_dpd_def.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "lte_custom_rf_if.h"
#endif

#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
#include "DRDI/Set0/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set0/lte_custom_rf_if.h"
#endif
#include "DRDI/Set0/Toolgen/lte_custom_rf.h"
#include "DRDI/Set0/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set0/lte_custom_rf_mpr.h"
#include "DRDI/Set0/lte_custom_rf_tpc.h"
#include "DRDI/Set0/lte_custom_rf_tas.c"
#include "DRDI/Set0/lte_custom_mipi.c"
#include "DRDI/Set0/lte_custom_mipi_ant.c"
#include "DRDI/Set0/lte_custom_rf.c"
#include "DRDI/Set0/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set0/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set0/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set0/lte_custom_mipi_dpd.h"
#include "DRDI/Set0/lte_custom_mipi_dpd.c"
#include "DRDI/Set0/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set0/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set0/lte_custom_mipi_ant_database.c"
#include "DRDI/Set0/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set0/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
#include "DRDI/Set1/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set1/lte_custom_rf_if.h"
#endif
#include "DRDI/Set1/Toolgen/lte_custom_rf.h"
#include "DRDI/Set1/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set1/lte_custom_rf_mpr.h"
#include "DRDI/Set1/lte_custom_rf_tpc.h"
#include "DRDI/Set1/lte_custom_rf_tas.c"
#include "DRDI/Set1/lte_custom_mipi.c"
#include "DRDI/Set1/lte_custom_mipi_ant.c"
#include "DRDI/Set1/lte_custom_rf.c"
#include "DRDI/Set1/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set1/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set1/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set1/lte_custom_mipi_dpd.h"
#include "DRDI/Set1/lte_custom_mipi_dpd.c"
#include "DRDI/Set1/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set1/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set1/lte_custom_mipi_ant_database.c"
#include "DRDI/Set1/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set1/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
#include "DRDI/Set2/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set2/lte_custom_rf_if.h"
#endif
#include "DRDI/Set2/Toolgen/lte_custom_rf.h"
#include "DRDI/Set2/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set2/lte_custom_rf_mpr.h"
#include "DRDI/Set2/lte_custom_rf_tpc.h"
#include "DRDI/Set2/lte_custom_rf_tas.c"
#include "DRDI/Set2/lte_custom_mipi.c"
#include "DRDI/Set2/lte_custom_mipi_ant.c"
#include "DRDI/Set2/lte_custom_rf.c"
#include "DRDI/Set2/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set2/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set2/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set2/lte_custom_mipi_dpd.h"
#include "DRDI/Set2/lte_custom_mipi_dpd.c"
#include "DRDI/Set2/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set2/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set2/lte_custom_mipi_ant_database.c"
#include "DRDI/Set2/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set2/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
#include "DRDI/Set3/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set3/lte_custom_rf_if.h"
#endif
#include "DRDI/Set3/Toolgen/lte_custom_rf.h"
#include "DRDI/Set3/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set3/lte_custom_rf_mpr.h"
#include "DRDI/Set3/lte_custom_rf_tpc.h"
#include "DRDI/Set3/lte_custom_rf_tas.c"
#include "DRDI/Set3/lte_custom_mipi.c"
#include "DRDI/Set3/lte_custom_mipi_ant.c"
#include "DRDI/Set3/lte_custom_rf.c"
#include "DRDI/Set3/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set3/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set3/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set3/lte_custom_mipi_dpd.h"
#include "DRDI/Set3/lte_custom_mipi_dpd.c"
#include "DRDI/Set3/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set3/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set3/lte_custom_mipi_ant_database.c"
#include "DRDI/Set3/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set3/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
#include "DRDI/Set4/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set4/lte_custom_rf_if.h"
#endif
#include "DRDI/Set4/Toolgen/lte_custom_rf.h"
#include "DRDI/Set4/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set4/lte_custom_rf_mpr.h"
#include "DRDI/Set4/lte_custom_rf_tpc.h"
#include "DRDI/Set4/lte_custom_rf_tas.c"
#include "DRDI/Set4/lte_custom_mipi.c"
#include "DRDI/Set4/lte_custom_mipi_ant.c"
#include "DRDI/Set4/lte_custom_rf.c"
#include "DRDI/Set4/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set4/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set4/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set4/lte_custom_mipi_dpd.h"
#include "DRDI/Set4/lte_custom_mipi_dpd.c"
#include "DRDI/Set4/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set4/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set4/lte_custom_mipi_ant_database.c"
#include "DRDI/Set4/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set4/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
#include "DRDI/Set5/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set5/lte_custom_rf_if.h"
#endif
#include "DRDI/Set5/Toolgen/lte_custom_rf.h"
#include "DRDI/Set5/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set5/lte_custom_rf_mpr.h"
#include "DRDI/Set5/lte_custom_rf_tpc.h"
#include "DRDI/Set5/lte_custom_rf_tas.c"
#include "DRDI/Set5/lte_custom_mipi.c"
#include "DRDI/Set5/lte_custom_mipi_ant.c"
#include "DRDI/Set5/lte_custom_rf.c"
#include "DRDI/Set5/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set5/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set5/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set5/lte_custom_mipi_dpd.h"
#include "DRDI/Set5/lte_custom_mipi_dpd.c"
#include "DRDI/Set5/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set5/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set5/lte_custom_mipi_ant_database.c"
#include "DRDI/Set5/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set5/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
#include "DRDI/Set6/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set6/lte_custom_rf_if.h"
#endif
#include "DRDI/Set6/Toolgen/lte_custom_rf.h"
#include "DRDI/Set6/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set6/lte_custom_rf_mpr.h"
#include "DRDI/Set6/lte_custom_rf_tpc.h"
#include "DRDI/Set6/lte_custom_rf_tas.c"
#include "DRDI/Set6/lte_custom_mipi.c"
#include "DRDI/Set6/lte_custom_mipi_ant.c"
#include "DRDI/Set6/lte_custom_rf.c"
#include "DRDI/Set6/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set6/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set6/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set6/lte_custom_mipi_dpd.h"
#include "DRDI/Set6/lte_custom_mipi_dpd.c"
#include "DRDI/Set6/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set6/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set6/lte_custom_mipi_ant_database.c"
#include "DRDI/Set6/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set6/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
#include "DRDI/Set7/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set7/lte_custom_rf_if.h"
#endif
#include "DRDI/Set7/Toolgen/lte_custom_rf.h"
#include "DRDI/Set7/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set7/lte_custom_rf_mpr.h"
#include "DRDI/Set7/lte_custom_rf_tpc.h"
#include "DRDI/Set7/lte_custom_rf_tas.c"
#include "DRDI/Set7/lte_custom_mipi.c"
#include "DRDI/Set7/lte_custom_mipi_ant.c"
#include "DRDI/Set7/lte_custom_rf.c"
#include "DRDI/Set7/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set7/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set7/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set7/lte_custom_mipi_dpd.h"
#include "DRDI/Set7/lte_custom_mipi_dpd.c"
#include "DRDI/Set7/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set7/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set7/lte_custom_mipi_ant_database.c"
#include "DRDI/Set7/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set7/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
#include "DRDI/Set8/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set8/lte_custom_rf_if.h"
#endif
#include "DRDI/Set8/Toolgen/lte_custom_rf.h"
#include "DRDI/Set8/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set8/lte_custom_rf_mpr.h"
#include "DRDI/Set8/lte_custom_rf_tpc.h"
#include "DRDI/Set8/lte_custom_rf_tas.c"
#include "DRDI/Set8/lte_custom_mipi.c"
#include "DRDI/Set8/lte_custom_mipi_ant.c"
#include "DRDI/Set8/lte_custom_rf.c"
#include "DRDI/Set8/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set8/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set8/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set8/lte_custom_mipi_dpd.h"
#include "DRDI/Set8/lte_custom_mipi_dpd.c"
#include "DRDI/Set8/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set8/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set8/lte_custom_mipi_ant_database.c"
#include "DRDI/Set8/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set8/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
#include "DRDI/Set9/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set9/lte_custom_rf_if.h"
#endif
#include "DRDI/Set9/Toolgen/lte_custom_rf.h"
#include "DRDI/Set9/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set9/lte_custom_rf_mpr.h"
#include "DRDI/Set9/lte_custom_rf_tpc.h"
#include "DRDI/Set9/lte_custom_rf_tas.c"
#include "DRDI/Set9/lte_custom_mipi.c"
#include "DRDI/Set9/lte_custom_mipi_ant.c"
#include "DRDI/Set9/lte_custom_rf.c"
#include "DRDI/Set9/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set9/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set9/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set9/lte_custom_mipi_dpd.h"
#include "DRDI/Set9/lte_custom_mipi_dpd.c"
#include "DRDI/Set9/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set9/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set9/lte_custom_mipi_ant_database.c"
#include "DRDI/Set9/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set9/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
#include "DRDI/Set10/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set10/lte_custom_rf_if.h"
#endif
#include "DRDI/Set10/Toolgen/lte_custom_rf.h"
#include "DRDI/Set10/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set10/lte_custom_rf_mpr.h"
#include "DRDI/Set10/lte_custom_rf_tpc.h"
#include "DRDI/Set10/lte_custom_rf_tas.c"
#include "DRDI/Set10/lte_custom_mipi.c"
#include "DRDI/Set10/lte_custom_mipi_ant.c"
#include "DRDI/Set10/lte_custom_rf.c"
#include "DRDI/Set10/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set10/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set10/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set10/lte_custom_mipi_dpd.h"
#include "DRDI/Set10/lte_custom_mipi_dpd.c"
#include "DRDI/Set10/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set10/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set10/lte_custom_mipi_ant_database.c"
#include "DRDI/Set10/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set10/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
#include "DRDI/Set11/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set11/lte_custom_rf_if.h"
#endif
#include "DRDI/Set11/Toolgen/lte_custom_rf.h"
#include "DRDI/Set11/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set11/lte_custom_rf_mpr.h"
#include "DRDI/Set11/lte_custom_rf_tpc.h"
#include "DRDI/Set11/lte_custom_rf_tas.c"
#include "DRDI/Set11/lte_custom_mipi.c"
#include "DRDI/Set11/lte_custom_mipi_ant.c"
#include "DRDI/Set11/lte_custom_rf.c"
#include "DRDI/Set11/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set11/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set11/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set11/lte_custom_mipi_dpd.h"
#include "DRDI/Set11/lte_custom_mipi_dpd.c"
#include "DRDI/Set11/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set11/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set11/lte_custom_mipi_ant_database.c"
#include "DRDI/Set11/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set11/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
#include "DRDI/Set12/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set12/lte_custom_rf_if.h"
#endif
#include "DRDI/Set12/Toolgen/lte_custom_rf.h"
#include "DRDI/Set12/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set12/lte_custom_rf_mpr.h"
#include "DRDI/Set12/lte_custom_rf_tpc.h"
#include "DRDI/Set12/lte_custom_rf_tas.c"
#include "DRDI/Set12/lte_custom_mipi.c"
#include "DRDI/Set12/lte_custom_mipi_ant.c"
#include "DRDI/Set12/lte_custom_rf.c"
#include "DRDI/Set12/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set12/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set12/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set12/lte_custom_mipi_dpd.h"
#include "DRDI/Set12/lte_custom_mipi_dpd.c"
#include "DRDI/Set12/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set12/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set12/lte_custom_mipi_ant_database.c"
#include "DRDI/Set12/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set12/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
#include "DRDI/Set13/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set13/lte_custom_rf_if.h"
#endif
#include "DRDI/Set13/Toolgen/lte_custom_rf.h"
#include "DRDI/Set13/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set13/lte_custom_rf_mpr.h"
#include "DRDI/Set13/lte_custom_rf_tpc.h"
#include "DRDI/Set13/lte_custom_rf_tas.c"
#include "DRDI/Set13/lte_custom_mipi.c"
#include "DRDI/Set13/lte_custom_mipi_ant.c"
#include "DRDI/Set13/lte_custom_rf.c"
#include "DRDI/Set13/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set13/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set13/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set13/lte_custom_mipi_dpd.h"
#include "DRDI/Set13/lte_custom_mipi_dpd.c"
#include "DRDI/Set13/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set13/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set13/lte_custom_mipi_ant_database.c"
#include "DRDI/Set13/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set13/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
#include "DRDI/Set14/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set14/lte_custom_rf_if.h"
#endif
#include "DRDI/Set14/Toolgen/lte_custom_rf.h"
#include "DRDI/Set14/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set14/lte_custom_rf_mpr.h"
#include "DRDI/Set14/lte_custom_rf_tpc.h"
#include "DRDI/Set14/lte_custom_rf_tas.c"
#include "DRDI/Set14/lte_custom_mipi.c"
#include "DRDI/Set14/lte_custom_mipi_ant.c"
#include "DRDI/Set14/lte_custom_rf.c"
#include "DRDI/Set14/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set14/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set14/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set14/lte_custom_mipi_dpd.h"
#include "DRDI/Set14/lte_custom_mipi_dpd.c"
#include "DRDI/Set14/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set14/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set14/lte_custom_mipi_ant_database.c"
#include "DRDI/Set14/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set14/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
#include "DRDI/Set15/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set15/lte_custom_rf_if.h"
#endif
#include "DRDI/Set15/Toolgen/lte_custom_rf.h"
#include "DRDI/Set15/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set15/lte_custom_rf_mpr.h"
#include "DRDI/Set15/lte_custom_rf_tpc.h"
#include "DRDI/Set15/lte_custom_rf_tas.c"
#include "DRDI/Set15/lte_custom_mipi.c"
#include "DRDI/Set15/lte_custom_mipi_ant.c"
#include "DRDI/Set15/lte_custom_rf.c"
#include "DRDI/Set15/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set15/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set15/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set15/lte_custom_mipi_dpd.h"
#include "DRDI/Set15/lte_custom_mipi_dpd.c"
#include "DRDI/Set15/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set15/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set15/lte_custom_mipi_ant_database.c"
#include "DRDI/Set15/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set15/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
#include "DRDI/Set16/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set16/lte_custom_rf_if.h"
#endif
#include "DRDI/Set16/Toolgen/lte_custom_rf.h"
#include "DRDI/Set16/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set16/lte_custom_rf_mpr.h"
#include "DRDI/Set16/lte_custom_rf_tpc.h"
#include "DRDI/Set16/lte_custom_rf_tas.c"
#include "DRDI/Set16/lte_custom_mipi.c"
#include "DRDI/Set16/lte_custom_mipi_ant.c"
#include "DRDI/Set16/lte_custom_rf.c"
#include "DRDI/Set16/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set16/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set16/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set16/lte_custom_mipi_dpd.h"
#include "DRDI/Set16/lte_custom_mipi_dpd.c"
#include "DRDI/Set16/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set16/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set16/lte_custom_mipi_ant_database.c"
#include "DRDI/Set16/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set16/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
#include "DRDI/Set17/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set17/lte_custom_rf_if.h"
#endif
#include "DRDI/Set17/Toolgen/lte_custom_rf.h"
#include "DRDI/Set17/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set17/lte_custom_rf_mpr.h"
#include "DRDI/Set17/lte_custom_rf_tpc.h"
#include "DRDI/Set17/lte_custom_rf_tas.c"
#include "DRDI/Set17/lte_custom_mipi.c"
#include "DRDI/Set17/lte_custom_mipi_ant.c"
#include "DRDI/Set17/lte_custom_rf.c"
#include "DRDI/Set17/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set17/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set17/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set17/lte_custom_mipi_dpd.h"
#include "DRDI/Set17/lte_custom_mipi_dpd.c"
#include "DRDI/Set17/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set17/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set17/lte_custom_mipi_ant_database.c"
#include "DRDI/Set17/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set17/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
#include "DRDI/Set18/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set18/lte_custom_rf_if.h"
#endif
#include "DRDI/Set18/Toolgen/lte_custom_rf.h"
#include "DRDI/Set18/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set18/lte_custom_rf_mpr.h"
#include "DRDI/Set18/lte_custom_rf_tpc.h"
#include "DRDI/Set18/lte_custom_rf_tas.c"
#include "DRDI/Set18/lte_custom_mipi.c"
#include "DRDI/Set18/lte_custom_mipi_ant.c"
#include "DRDI/Set18/lte_custom_rf.c"
#include "DRDI/Set18/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set18/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set18/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set18/lte_custom_mipi_dpd.h"
#include "DRDI/Set18/lte_custom_mipi_dpd.c"
#include "DRDI/Set18/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set18/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set18/lte_custom_mipi_ant_database.c"
#include "DRDI/Set18/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set18/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
#include "DRDI/Set19/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set19/lte_custom_rf_if.h"
#endif
#include "DRDI/Set19/Toolgen/lte_custom_rf.h"
#include "DRDI/Set19/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set19/lte_custom_rf_mpr.h"
#include "DRDI/Set19/lte_custom_rf_tpc.h"
#include "DRDI/Set19/lte_custom_rf_tas.c"
#include "DRDI/Set19/lte_custom_mipi.c"
#include "DRDI/Set19/lte_custom_mipi_ant.c"
#include "DRDI/Set19/lte_custom_rf.c"
#include "DRDI/Set19/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set19/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set19/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set19/lte_custom_mipi_dpd.h"
#include "DRDI/Set19/lte_custom_mipi_dpd.c"
#include "DRDI/Set19/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set19/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set19/lte_custom_mipi_ant_database.c"
#include "DRDI/Set19/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set19/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
#include "DRDI/Set20/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set20/lte_custom_rf_if.h"
#endif
#include "DRDI/Set20/Toolgen/lte_custom_rf.h"
#include "DRDI/Set20/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set20/lte_custom_rf_mpr.h"
#include "DRDI/Set20/lte_custom_rf_tpc.h"
#include "DRDI/Set20/lte_custom_rf_tas.c"
#include "DRDI/Set20/lte_custom_mipi.c"
#include "DRDI/Set20/lte_custom_mipi_ant.c"
#include "DRDI/Set20/lte_custom_rf.c"
#include "DRDI/Set20/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set20/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set20/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set20/lte_custom_mipi_dpd.h"
#include "DRDI/Set20/lte_custom_mipi_dpd.c"
#include "DRDI/Set20/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set20/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set20/lte_custom_mipi_ant_database.c"
#include "DRDI/Set20/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set20/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
#include "DRDI/Set21/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set21/lte_custom_rf_if.h"
#endif
#include "DRDI/Set21/Toolgen/lte_custom_rf.h"
#include "DRDI/Set21/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set21/lte_custom_rf_mpr.h"
#include "DRDI/Set21/lte_custom_rf_tpc.h"
#include "DRDI/Set21/lte_custom_rf_tas.c"
#include "DRDI/Set21/lte_custom_mipi.c"
#include "DRDI/Set21/lte_custom_mipi_ant.c"
#include "DRDI/Set21/lte_custom_rf.c"
#include "DRDI/Set21/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set21/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set21/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set21/lte_custom_mipi_dpd.h"
#include "DRDI/Set21/lte_custom_mipi_dpd.c"
#include "DRDI/Set21/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set21/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set21/lte_custom_mipi_ant_database.c"
#include "DRDI/Set21/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set21/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
#include "DRDI/Set22/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set22/lte_custom_rf_if.h"
#endif
#include "DRDI/Set22/Toolgen/lte_custom_rf.h"
#include "DRDI/Set22/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set22/lte_custom_rf_mpr.h"
#include "DRDI/Set22/lte_custom_rf_tpc.h"
#include "DRDI/Set22/lte_custom_rf_tas.c"
#include "DRDI/Set22/lte_custom_mipi.c"
#include "DRDI/Set22/lte_custom_mipi_ant.c"
#include "DRDI/Set22/lte_custom_rf.c"
#include "DRDI/Set22/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set22/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set22/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set22/lte_custom_mipi_dpd.h"
#include "DRDI/Set22/lte_custom_mipi_dpd.c"
#include "DRDI/Set22/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set22/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set22/lte_custom_mipi_ant_database.c"
#include "DRDI/Set22/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set22/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
#include "DRDI/Set23/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set23/lte_custom_rf_if.h"
#endif
#include "DRDI/Set23/Toolgen/lte_custom_rf.h"
#include "DRDI/Set23/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set23/lte_custom_rf_mpr.h"
#include "DRDI/Set23/lte_custom_rf_tpc.h"
#include "DRDI/Set23/lte_custom_rf_tas.c"
#include "DRDI/Set23/lte_custom_mipi.c"
#include "DRDI/Set23/lte_custom_mipi_ant.c"
#include "DRDI/Set23/lte_custom_rf.c"
#include "DRDI/Set23/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set23/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set23/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set23/lte_custom_mipi_dpd.h"
#include "DRDI/Set23/lte_custom_mipi_dpd.c"
#include "DRDI/Set23/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set23/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set23/lte_custom_mipi_ant_database.c"
#include "DRDI/Set23/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set23/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
#include "DRDI/Set24/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set24/lte_custom_rf_if.h"
#endif
#include "DRDI/Set24/Toolgen/lte_custom_rf.h"
#include "DRDI/Set24/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set24/lte_custom_rf_mpr.h"
#include "DRDI/Set24/lte_custom_rf_tpc.h"
#include "DRDI/Set24/lte_custom_rf_tas.c"
#include "DRDI/Set24/lte_custom_mipi.c"
#include "DRDI/Set24/lte_custom_mipi_ant.c"
#include "DRDI/Set24/lte_custom_rf.c"
#include "DRDI/Set24/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set24/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set24/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set24/lte_custom_mipi_dpd.h"
#include "DRDI/Set24/lte_custom_mipi_dpd.c"
#include "DRDI/Set24/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set24/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set24/lte_custom_mipi_ant_database.c"
#include "DRDI/Set24/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set24/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
#include "DRDI/Set25/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set25/lte_custom_rf_if.h"
#endif
#include "DRDI/Set25/Toolgen/lte_custom_rf.h"
#include "DRDI/Set25/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set25/lte_custom_rf_mpr.h"
#include "DRDI/Set25/lte_custom_rf_tpc.h"
#include "DRDI/Set25/lte_custom_rf_tas.c"
#include "DRDI/Set25/lte_custom_mipi.c"
#include "DRDI/Set25/lte_custom_mipi_ant.c"
#include "DRDI/Set25/lte_custom_rf.c"
#include "DRDI/Set25/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set25/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set25/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set25/lte_custom_mipi_dpd.h"
#include "DRDI/Set25/lte_custom_mipi_dpd.c"
#include "DRDI/Set25/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set25/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set25/lte_custom_mipi_ant_database.c"
#include "DRDI/Set25/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set25/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
#include "DRDI/Set26/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set26/lte_custom_rf_if.h"
#endif
#include "DRDI/Set26/Toolgen/lte_custom_rf.h"
#include "DRDI/Set26/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set26/lte_custom_rf_mpr.h"
#include "DRDI/Set26/lte_custom_rf_tpc.h"
#include "DRDI/Set26/lte_custom_rf_tas.c"
#include "DRDI/Set26/lte_custom_mipi.c"
#include "DRDI/Set26/lte_custom_mipi_ant.c"
#include "DRDI/Set26/lte_custom_rf.c"
#include "DRDI/Set26/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set26/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set26/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set26/lte_custom_mipi_dpd.h"
#include "DRDI/Set26/lte_custom_mipi_dpd.c"
#include "DRDI/Set26/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set26/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set26/lte_custom_mipi_ant_database.c"
#include "DRDI/Set26/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set26/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
#include "DRDI/Set27/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set27/lte_custom_rf_if.h"
#endif
#include "DRDI/Set27/Toolgen/lte_custom_rf.h"
#include "DRDI/Set27/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set27/lte_custom_rf_mpr.h"
#include "DRDI/Set27/lte_custom_rf_tpc.h"
#include "DRDI/Set27/lte_custom_rf_tas.c"
#include "DRDI/Set27/lte_custom_mipi.c"
#include "DRDI/Set27/lte_custom_mipi_ant.c"
#include "DRDI/Set27/lte_custom_rf.c"
#include "DRDI/Set27/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set27/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set27/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set27/lte_custom_mipi_dpd.h"
#include "DRDI/Set27/lte_custom_mipi_dpd.c"
#include "DRDI/Set27/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set27/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set27/lte_custom_mipi_ant_database.c"
#include "DRDI/Set27/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set27/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
#include "DRDI/Set28/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set28/lte_custom_rf_if.h"
#endif
#include "DRDI/Set28/Toolgen/lte_custom_rf.h"
#include "DRDI/Set28/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set28/lte_custom_rf_mpr.h"
#include "DRDI/Set28/lte_custom_rf_tpc.h"
#include "DRDI/Set28/lte_custom_rf_tas.c"
#include "DRDI/Set28/lte_custom_mipi.c"
#include "DRDI/Set28/lte_custom_mipi_ant.c"
#include "DRDI/Set28/lte_custom_rf.c"
#include "DRDI/Set28/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set28/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set28/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set28/lte_custom_mipi_dpd.h"
#include "DRDI/Set28/lte_custom_mipi_dpd.c"
#include "DRDI/Set28/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set28/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set28/lte_custom_mipi_ant_database.c"
#include "DRDI/Set28/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set28/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
#include "DRDI/Set29/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set29/lte_custom_rf_if.h"
#endif
#include "DRDI/Set29/Toolgen/lte_custom_rf.h"
#include "DRDI/Set29/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set29/lte_custom_rf_mpr.h"
#include "DRDI/Set29/lte_custom_rf_tpc.h"
#include "DRDI/Set29/lte_custom_rf_tas.c"
#include "DRDI/Set29/lte_custom_mipi.c"
#include "DRDI/Set29/lte_custom_mipi_ant.c"
#include "DRDI/Set29/lte_custom_rf.c"
#include "DRDI/Set29/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set29/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set29/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set29/lte_custom_mipi_dpd.h"
#include "DRDI/Set29/lte_custom_mipi_dpd.c"
#include "DRDI/Set29/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set29/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set29/lte_custom_mipi_ant_database.c"
#include "DRDI/Set29/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set29/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
#include "DRDI/Set30/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set30/lte_custom_rf_if.h"
#endif
#include "DRDI/Set30/Toolgen/lte_custom_rf.h"
#include "DRDI/Set30/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set30/lte_custom_rf_mpr.h"
#include "DRDI/Set30/lte_custom_rf_tpc.h"
#include "DRDI/Set30/lte_custom_rf_tas.c"
#include "DRDI/Set30/lte_custom_mipi.c"
#include "DRDI/Set30/lte_custom_mipi_ant.c"
#include "DRDI/Set30/lte_custom_rf.c"
#include "DRDI/Set30/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set30/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set30/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set30/lte_custom_mipi_dpd.h"
#include "DRDI/Set30/lte_custom_mipi_dpd.c"
#include "DRDI/Set30/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set30/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set30/lte_custom_mipi_ant_database.c"
#include "DRDI/Set30/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set30/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
#include "DRDI/Set31/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set31/lte_custom_rf_if.h"
#endif
#include "DRDI/Set31/Toolgen/lte_custom_rf.h"
#include "DRDI/Set31/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set31/lte_custom_rf_mpr.h"
#include "DRDI/Set31/lte_custom_rf_tpc.h"
#include "DRDI/Set31/lte_custom_rf_tas.c"
#include "DRDI/Set31/lte_custom_mipi.c"
#include "DRDI/Set31/lte_custom_mipi_ant.c"
#include "DRDI/Set31/lte_custom_rf.c"
#include "DRDI/Set31/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set31/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set31/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set31/lte_custom_mipi_dpd.h"
#include "DRDI/Set31/lte_custom_mipi_dpd.c"
#include "DRDI/Set31/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set31/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set31/lte_custom_mipi_ant_database.c"
#include "DRDI/Set31/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set31/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
#include "DRDI/Set32/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set32/lte_custom_rf_if.h"
#endif
#include "DRDI/Set32/Toolgen/lte_custom_rf.h"
#include "DRDI/Set32/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set32/lte_custom_rf_mpr.h"
#include "DRDI/Set32/lte_custom_rf_tpc.h"
#include "DRDI/Set32/lte_custom_rf_tas.c"
#include "DRDI/Set32/lte_custom_mipi.c"
#include "DRDI/Set32/lte_custom_mipi_ant.c"
#include "DRDI/Set32/lte_custom_rf.c"
#include "DRDI/Set32/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set32/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set32/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set32/lte_custom_mipi_dpd.h"
#include "DRDI/Set32/lte_custom_mipi_dpd.c"
#include "DRDI/Set32/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set32/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set32/lte_custom_mipi_ant_database.c"
#include "DRDI/Set32/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set32/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
#include "DRDI/Set33/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set33/lte_custom_rf_if.h"
#endif
#include "DRDI/Set33/Toolgen/lte_custom_rf.h"
#include "DRDI/Set33/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set33/lte_custom_rf_mpr.h"
#include "DRDI/Set33/lte_custom_rf_tpc.h"
#include "DRDI/Set33/lte_custom_rf_tas.c"
#include "DRDI/Set33/lte_custom_mipi.c"
#include "DRDI/Set33/lte_custom_mipi_ant.c"
#include "DRDI/Set33/lte_custom_rf.c"
#include "DRDI/Set33/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set33/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set33/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set33/lte_custom_mipi_dpd.h"
#include "DRDI/Set33/lte_custom_mipi_dpd.c"
#include "DRDI/Set33/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set33/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set33/lte_custom_mipi_ant_database.c"
#include "DRDI/Set33/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set33/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
#include "DRDI/Set34/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set34/lte_custom_rf_if.h"
#endif
#include "DRDI/Set34/Toolgen/lte_custom_rf.h"
#include "DRDI/Set34/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set34/lte_custom_rf_mpr.h"
#include "DRDI/Set34/lte_custom_rf_tpc.h"
#include "DRDI/Set34/lte_custom_rf_tas.c"
#include "DRDI/Set34/lte_custom_mipi.c"
#include "DRDI/Set34/lte_custom_mipi_ant.c"
#include "DRDI/Set34/lte_custom_rf.c"
#include "DRDI/Set34/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set34/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set34/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set34/lte_custom_mipi_dpd.h"
#include "DRDI/Set34/lte_custom_mipi_dpd.c"
#include "DRDI/Set34/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set34/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set34/lte_custom_mipi_ant_database.c"
#include "DRDI/Set34/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set34/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
#include "DRDI/Set35/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set35/lte_custom_rf_if.h"
#endif
#include "DRDI/Set35/Toolgen/lte_custom_rf.h"
#include "DRDI/Set35/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set35/lte_custom_rf_mpr.h"
#include "DRDI/Set35/lte_custom_rf_tpc.h"
#include "DRDI/Set35/lte_custom_rf_tas.c"
#include "DRDI/Set35/lte_custom_mipi.c"
#include "DRDI/Set35/lte_custom_mipi_ant.c"
#include "DRDI/Set35/lte_custom_rf.c"
#include "DRDI/Set35/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set35/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set35/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set35/lte_custom_mipi_dpd.h"
#include "DRDI/Set35/lte_custom_mipi_dpd.c"
#include "DRDI/Set35/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set35/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set35/lte_custom_mipi_ant_database.c"
#include "DRDI/Set35/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set35/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
#include "DRDI/Set36/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set36/lte_custom_rf_if.h"
#endif
#include "DRDI/Set36/Toolgen/lte_custom_rf.h"
#include "DRDI/Set36/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set36/lte_custom_rf_mpr.h"
#include "DRDI/Set36/lte_custom_rf_tpc.h"
#include "DRDI/Set36/lte_custom_rf_tas.c"
#include "DRDI/Set36/lte_custom_mipi.c"
#include "DRDI/Set36/lte_custom_mipi_ant.c"
#include "DRDI/Set36/lte_custom_rf.c"
#include "DRDI/Set36/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set36/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set36/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set36/lte_custom_mipi_dpd.h"
#include "DRDI/Set36/lte_custom_mipi_dpd.c"
#include "DRDI/Set36/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set36/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set36/lte_custom_mipi_ant_database.c"
#include "DRDI/Set36/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set36/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
#include "DRDI/Set37/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set37/lte_custom_rf_if.h"
#endif
#include "DRDI/Set37/Toolgen/lte_custom_rf.h"
#include "DRDI/Set37/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set37/lte_custom_rf_mpr.h"
#include "DRDI/Set37/lte_custom_rf_tpc.h"
#include "DRDI/Set37/lte_custom_rf_tas.c"
#include "DRDI/Set37/lte_custom_mipi.c"
#include "DRDI/Set37/lte_custom_mipi_ant.c"
#include "DRDI/Set37/lte_custom_rf.c"
#include "DRDI/Set37/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set37/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set37/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set37/lte_custom_mipi_dpd.h"
#include "DRDI/Set37/lte_custom_mipi_dpd.c"
#include "DRDI/Set37/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set37/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set37/lte_custom_mipi_ant_database.c"
#include "DRDI/Set37/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set37/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
#include "DRDI/Set38/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set38/lte_custom_rf_if.h"
#endif
#include "DRDI/Set38/Toolgen/lte_custom_rf.h"
#include "DRDI/Set38/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set38/lte_custom_rf_mpr.h"
#include "DRDI/Set38/lte_custom_rf_tpc.h"
#include "DRDI/Set38/lte_custom_rf_tas.c"
#include "DRDI/Set38/lte_custom_mipi.c"
#include "DRDI/Set38/lte_custom_mipi_ant.c"
#include "DRDI/Set38/lte_custom_rf.c"
#include "DRDI/Set38/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set38/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set38/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set38/lte_custom_mipi_dpd.h"
#include "DRDI/Set38/lte_custom_mipi_dpd.c"
#include "DRDI/Set38/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set38/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set38/lte_custom_mipi_ant_database.c"
#include "DRDI/Set38/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set38/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
#include "DRDI/Set39/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set39/lte_custom_rf_if.h"
#endif
#include "DRDI/Set39/Toolgen/lte_custom_rf.h"
#include "DRDI/Set39/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set39/lte_custom_rf_mpr.h"
#include "DRDI/Set39/lte_custom_rf_tpc.h"
#include "DRDI/Set39/lte_custom_rf_tas.c"
#include "DRDI/Set39/lte_custom_mipi.c"
#include "DRDI/Set39/lte_custom_mipi_ant.c"
#include "DRDI/Set39/lte_custom_rf.c"
#include "DRDI/Set39/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set39/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set39/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set39/lte_custom_mipi_dpd.h"
#include "DRDI/Set39/lte_custom_mipi_dpd.c"
#include "DRDI/Set39/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set39/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set39/lte_custom_mipi_ant_database.c"
#include "DRDI/Set39/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set39/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
#include "DRDI/Set40/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set40/lte_custom_rf_if.h"
#endif
#include "DRDI/Set40/Toolgen/lte_custom_rf.h"
#include "DRDI/Set40/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set40/lte_custom_rf_mpr.h"
#include "DRDI/Set40/lte_custom_rf_tpc.h"
#include "DRDI/Set40/lte_custom_rf_tas.c"
#include "DRDI/Set40/lte_custom_mipi.c"
#include "DRDI/Set40/lte_custom_mipi_ant.c"
#include "DRDI/Set40/lte_custom_rf.c"
#include "DRDI/Set40/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set40/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set40/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set40/lte_custom_mipi_dpd.h"
#include "DRDI/Set40/lte_custom_mipi_dpd.c"
#include "DRDI/Set40/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set40/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set40/lte_custom_mipi_ant_database.c"
#include "DRDI/Set40/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set40/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
#include "DRDI/Set41/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set41/lte_custom_rf_if.h"
#endif
#include "DRDI/Set41/Toolgen/lte_custom_rf.h"
#include "DRDI/Set41/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set41/lte_custom_rf_mpr.h"
#include "DRDI/Set41/lte_custom_rf_tpc.h"
#include "DRDI/Set41/lte_custom_rf_tas.c"
#include "DRDI/Set41/lte_custom_mipi.c"
#include "DRDI/Set41/lte_custom_mipi_ant.c"
#include "DRDI/Set41/lte_custom_rf.c"
#include "DRDI/Set41/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set41/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set41/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set41/lte_custom_mipi_dpd.h"
#include "DRDI/Set41/lte_custom_mipi_dpd.c"
#include "DRDI/Set41/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set41/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set41/lte_custom_mipi_ant_database.c"
#include "DRDI/Set41/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set41/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
#include "DRDI/Set42/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set42/lte_custom_rf_if.h"
#endif
#include "DRDI/Set42/Toolgen/lte_custom_rf.h"
#include "DRDI/Set42/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set42/lte_custom_rf_mpr.h"
#include "DRDI/Set42/lte_custom_rf_tpc.h"
#include "DRDI/Set42/lte_custom_rf_tas.c"
#include "DRDI/Set42/lte_custom_mipi.c"
#include "DRDI/Set42/lte_custom_mipi_ant.c"
#include "DRDI/Set42/lte_custom_rf.c"
#include "DRDI/Set42/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set42/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set42/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set42/lte_custom_mipi_dpd.h"
#include "DRDI/Set42/lte_custom_mipi_dpd.c"
#include "DRDI/Set42/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set42/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set42/lte_custom_mipi_ant_database.c"
#include "DRDI/Set42/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set42/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
#include "DRDI/Set43/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set43/lte_custom_rf_if.h"
#endif
#include "DRDI/Set43/Toolgen/lte_custom_rf.h"
#include "DRDI/Set43/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set43/lte_custom_rf_mpr.h"
#include "DRDI/Set43/lte_custom_rf_tpc.h"
#include "DRDI/Set43/lte_custom_rf_tas.c"
#include "DRDI/Set43/lte_custom_mipi.c"
#include "DRDI/Set43/lte_custom_mipi_ant.c"
#include "DRDI/Set43/lte_custom_rf.c"
#include "DRDI/Set43/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set43/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set43/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set43/lte_custom_mipi_dpd.h"
#include "DRDI/Set43/lte_custom_mipi_dpd.c"
#include "DRDI/Set43/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set43/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set43/lte_custom_mipi_ant_database.c"
#include "DRDI/Set43/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set43/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
#include "DRDI/Set44/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set44/lte_custom_rf_if.h"
#endif
#include "DRDI/Set44/Toolgen/lte_custom_rf.h"
#include "DRDI/Set44/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set44/lte_custom_rf_mpr.h"
#include "DRDI/Set44/lte_custom_rf_tpc.h"
#include "DRDI/Set44/lte_custom_rf_tas.c"
#include "DRDI/Set44/lte_custom_mipi.c"
#include "DRDI/Set44/lte_custom_mipi_ant.c"
#include "DRDI/Set44/lte_custom_rf.c"
#include "DRDI/Set44/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set44/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set44/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set44/lte_custom_mipi_dpd.h"
#include "DRDI/Set44/lte_custom_mipi_dpd.c"
#include "DRDI/Set44/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set44/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set44/lte_custom_mipi_ant_database.c"
#include "DRDI/Set44/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set44/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
#include "DRDI/Set45/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set45/lte_custom_rf_if.h"
#endif
#include "DRDI/Set45/Toolgen/lte_custom_rf.h"
#include "DRDI/Set45/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set45/lte_custom_rf_mpr.h"
#include "DRDI/Set45/lte_custom_rf_tpc.h"
#include "DRDI/Set45/lte_custom_rf_tas.c"
#include "DRDI/Set45/lte_custom_mipi.c"
#include "DRDI/Set45/lte_custom_mipi_ant.c"
#include "DRDI/Set45/lte_custom_rf.c"
#include "DRDI/Set45/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set45/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set45/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set45/lte_custom_mipi_dpd.h"
#include "DRDI/Set45/lte_custom_mipi_dpd.c"
#include "DRDI/Set45/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set45/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set45/lte_custom_mipi_ant_database.c"
#include "DRDI/Set45/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set45/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
#include "DRDI/Set46/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set46/lte_custom_rf_if.h"
#endif
#include "DRDI/Set46/Toolgen/lte_custom_rf.h"
#include "DRDI/Set46/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set46/lte_custom_rf_mpr.h"
#include "DRDI/Set46/lte_custom_rf_tpc.h"
#include "DRDI/Set46/lte_custom_rf_tas.c"
#include "DRDI/Set46/lte_custom_mipi.c"
#include "DRDI/Set46/lte_custom_mipi_ant.c"
#include "DRDI/Set46/lte_custom_rf.c"
#include "DRDI/Set46/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set46/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set46/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set46/lte_custom_mipi_dpd.h"
#include "DRDI/Set46/lte_custom_mipi_dpd.c"
#include "DRDI/Set46/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set46/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set46/lte_custom_mipi_ant_database.c"
#include "DRDI/Set46/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set46/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
#include "DRDI/Set47/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set47/lte_custom_rf_if.h"
#endif
#include "DRDI/Set47/Toolgen/lte_custom_rf.h"
#include "DRDI/Set47/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set47/lte_custom_rf_mpr.h"
#include "DRDI/Set47/lte_custom_rf_tpc.h"
#include "DRDI/Set47/lte_custom_rf_tas.c"
#include "DRDI/Set47/lte_custom_mipi.c"
#include "DRDI/Set47/lte_custom_mipi_ant.c"
#include "DRDI/Set47/lte_custom_rf.c"
#include "DRDI/Set47/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set47/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set47/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set47/lte_custom_mipi_dpd.h"
#include "DRDI/Set47/lte_custom_mipi_dpd.c"
#include "DRDI/Set47/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set47/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set47/lte_custom_mipi_ant_database.c"
#include "DRDI/Set47/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set47/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
#include "DRDI/Set48/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set48/lte_custom_rf_if.h"
#endif
#include "DRDI/Set48/Toolgen/lte_custom_rf.h"
#include "DRDI/Set48/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set48/lte_custom_rf_mpr.h"
#include "DRDI/Set48/lte_custom_rf_tpc.h"
#include "DRDI/Set48/lte_custom_rf_tas.c"
#include "DRDI/Set48/lte_custom_mipi.c"
#include "DRDI/Set48/lte_custom_mipi_ant.c"
#include "DRDI/Set48/lte_custom_rf.c"
#include "DRDI/Set48/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set48/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set48/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set48/lte_custom_mipi_dpd.h"
#include "DRDI/Set48/lte_custom_mipi_dpd.c"
#include "DRDI/Set48/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set48/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set48/lte_custom_mipi_ant_database.c"
#include "DRDI/Set48/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set48/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
#include "DRDI/Set49/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set49/lte_custom_rf_if.h"
#endif
#include "DRDI/Set49/Toolgen/lte_custom_rf.h"
#include "DRDI/Set49/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set49/lte_custom_rf_mpr.h"
#include "DRDI/Set49/lte_custom_rf_tpc.h"
#include "DRDI/Set49/lte_custom_rf_tas.c"
#include "DRDI/Set49/lte_custom_mipi.c"
#include "DRDI/Set49/lte_custom_mipi_ant.c"
#include "DRDI/Set49/lte_custom_rf.c"
#include "DRDI/Set49/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set49/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set49/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set49/lte_custom_mipi_dpd.h"
#include "DRDI/Set49/lte_custom_mipi_dpd.c"
#include "DRDI/Set49/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set49/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set49/lte_custom_mipi_ant_database.c"
#include "DRDI/Set49/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set49/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
#include "DRDI/Set50/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set50/lte_custom_rf_if.h"
#endif
#include "DRDI/Set50/Toolgen/lte_custom_rf.h"
#include "DRDI/Set50/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set50/lte_custom_rf_mpr.h"
#include "DRDI/Set50/lte_custom_rf_tpc.h"
#include "DRDI/Set50/lte_custom_rf_tas.c"
#include "DRDI/Set50/lte_custom_mipi.c"
#include "DRDI/Set50/lte_custom_mipi_ant.c"
#include "DRDI/Set50/lte_custom_rf.c"
#include "DRDI/Set50/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set50/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set50/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set50/lte_custom_mipi_dpd.h"
#include "DRDI/Set50/lte_custom_mipi_dpd.c"
#include "DRDI/Set50/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set50/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set50/lte_custom_mipi_ant_database.c"
#include "DRDI/Set50/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set50/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
#include "DRDI/Set51/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set51/lte_custom_rf_if.h"
#endif
#include "DRDI/Set51/Toolgen/lte_custom_rf.h"
#include "DRDI/Set51/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set51/lte_custom_rf_mpr.h"
#include "DRDI/Set51/lte_custom_rf_tpc.h"
#include "DRDI/Set51/lte_custom_rf_tas.c"
#include "DRDI/Set51/lte_custom_mipi.c"
#include "DRDI/Set51/lte_custom_mipi_ant.c"
#include "DRDI/Set51/lte_custom_rf.c"
#include "DRDI/Set51/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set51/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set51/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set51/lte_custom_mipi_dpd.h"
#include "DRDI/Set51/lte_custom_mipi_dpd.c"
#include "DRDI/Set51/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set51/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set51/lte_custom_mipi_ant_database.c"
#include "DRDI/Set51/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set51/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
#include "DRDI/Set52/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set52/lte_custom_rf_if.h"
#endif
#include "DRDI/Set52/Toolgen/lte_custom_rf.h"
#include "DRDI/Set52/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set52/lte_custom_rf_mpr.h"
#include "DRDI/Set52/lte_custom_rf_tpc.h"
#include "DRDI/Set52/lte_custom_rf_tas.c"
#include "DRDI/Set52/lte_custom_mipi.c"
#include "DRDI/Set52/lte_custom_mipi_ant.c"
#include "DRDI/Set52/lte_custom_rf.c"
#include "DRDI/Set52/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set52/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set52/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set52/lte_custom_mipi_dpd.h"
#include "DRDI/Set52/lte_custom_mipi_dpd.c"
#include "DRDI/Set52/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set52/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set52/lte_custom_mipi_ant_database.c"
#include "DRDI/Set52/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set52/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
#include "DRDI/Set53/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set53/lte_custom_rf_if.h"
#endif
#include "DRDI/Set53/Toolgen/lte_custom_rf.h"
#include "DRDI/Set53/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set53/lte_custom_rf_mpr.h"
#include "DRDI/Set53/lte_custom_rf_tpc.h"
#include "DRDI/Set53/lte_custom_rf_tas.c"
#include "DRDI/Set53/lte_custom_mipi.c"
#include "DRDI/Set53/lte_custom_mipi_ant.c"
#include "DRDI/Set53/lte_custom_rf.c"
#include "DRDI/Set53/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set53/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set53/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set53/lte_custom_mipi_dpd.h"
#include "DRDI/Set53/lte_custom_mipi_dpd.c"
#include "DRDI/Set53/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set53/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set53/lte_custom_mipi_ant_database.c"
#include "DRDI/Set53/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set53/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
#include "DRDI/Set54/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set54/lte_custom_rf_if.h"
#endif
#include "DRDI/Set54/Toolgen/lte_custom_rf.h"
#include "DRDI/Set54/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set54/lte_custom_rf_mpr.h"
#include "DRDI/Set54/lte_custom_rf_tpc.h"
#include "DRDI/Set54/lte_custom_rf_tas.c"
#include "DRDI/Set54/lte_custom_mipi.c"
#include "DRDI/Set54/lte_custom_mipi_ant.c"
#include "DRDI/Set54/lte_custom_rf.c"
#include "DRDI/Set54/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set54/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set54/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set54/lte_custom_mipi_dpd.h"
#include "DRDI/Set54/lte_custom_mipi_dpd.c"
#include "DRDI/Set54/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set54/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set54/lte_custom_mipi_ant_database.c"
#include "DRDI/Set54/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set54/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
#include "DRDI/Set55/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set55/lte_custom_rf_if.h"
#endif
#include "DRDI/Set55/Toolgen/lte_custom_rf.h"
#include "DRDI/Set55/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set55/lte_custom_rf_mpr.h"
#include "DRDI/Set55/lte_custom_rf_tpc.h"
#include "DRDI/Set55/lte_custom_rf_tas.c"
#include "DRDI/Set55/lte_custom_mipi.c"
#include "DRDI/Set55/lte_custom_mipi_ant.c"
#include "DRDI/Set55/lte_custom_rf.c"
#include "DRDI/Set55/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set55/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set55/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set55/lte_custom_mipi_dpd.h"
#include "DRDI/Set55/lte_custom_mipi_dpd.c"
#include "DRDI/Set55/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set55/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set55/lte_custom_mipi_ant_database.c"
#include "DRDI/Set55/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set55/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
#include "DRDI/Set56/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set56/lte_custom_rf_if.h"
#endif
#include "DRDI/Set56/Toolgen/lte_custom_rf.h"
#include "DRDI/Set56/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set56/lte_custom_rf_mpr.h"
#include "DRDI/Set56/lte_custom_rf_tpc.h"
#include "DRDI/Set56/lte_custom_rf_tas.c"
#include "DRDI/Set56/lte_custom_mipi.c"
#include "DRDI/Set56/lte_custom_mipi_ant.c"
#include "DRDI/Set56/lte_custom_rf.c"
#include "DRDI/Set56/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set56/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set56/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set56/lte_custom_mipi_dpd.h"
#include "DRDI/Set56/lte_custom_mipi_dpd.c"
#include "DRDI/Set56/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set56/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set56/lte_custom_mipi_ant_database.c"
#include "DRDI/Set56/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set56/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
#include "DRDI/Set57/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set57/lte_custom_rf_if.h"
#endif
#include "DRDI/Set57/Toolgen/lte_custom_rf.h"
#include "DRDI/Set57/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set57/lte_custom_rf_mpr.h"
#include "DRDI/Set57/lte_custom_rf_tpc.h"
#include "DRDI/Set57/lte_custom_rf_tas.c"
#include "DRDI/Set57/lte_custom_mipi.c"
#include "DRDI/Set57/lte_custom_mipi_ant.c"
#include "DRDI/Set57/lte_custom_rf.c"
#include "DRDI/Set57/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set57/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set57/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set57/lte_custom_mipi_dpd.h"
#include "DRDI/Set57/lte_custom_mipi_dpd.c"
#include "DRDI/Set57/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set57/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set57/lte_custom_mipi_ant_database.c"
#include "DRDI/Set57/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set57/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
#include "DRDI/Set58/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set58/lte_custom_rf_if.h"
#endif
#include "DRDI/Set58/Toolgen/lte_custom_rf.h"
#include "DRDI/Set58/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set58/lte_custom_rf_mpr.h"
#include "DRDI/Set58/lte_custom_rf_tpc.h"
#include "DRDI/Set58/lte_custom_rf_tas.c"
#include "DRDI/Set58/lte_custom_mipi.c"
#include "DRDI/Set58/lte_custom_mipi_ant.c"
#include "DRDI/Set58/lte_custom_rf.c"
#include "DRDI/Set58/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set58/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set58/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set58/lte_custom_mipi_dpd.h"
#include "DRDI/Set58/lte_custom_mipi_dpd.c"
#include "DRDI/Set58/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set58/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set58/lte_custom_mipi_ant_database.c"
#include "DRDI/Set58/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set58/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
#include "DRDI/Set59/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set59/lte_custom_rf_if.h"
#endif
#include "DRDI/Set59/Toolgen/lte_custom_rf.h"
#include "DRDI/Set59/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set59/lte_custom_rf_mpr.h"
#include "DRDI/Set59/lte_custom_rf_tpc.h"
#include "DRDI/Set59/lte_custom_rf_tas.c"
#include "DRDI/Set59/lte_custom_mipi.c"
#include "DRDI/Set59/lte_custom_mipi_ant.c"
#include "DRDI/Set59/lte_custom_rf.c"
#include "DRDI/Set59/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set59/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set59/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set59/lte_custom_mipi_dpd.h"
#include "DRDI/Set59/lte_custom_mipi_dpd.c"
#include "DRDI/Set59/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set59/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set59/lte_custom_mipi_ant_database.c"
#include "DRDI/Set59/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set59/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
#include "DRDI/Set60/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set60/lte_custom_rf_if.h"
#endif
#include "DRDI/Set60/Toolgen/lte_custom_rf.h"
#include "DRDI/Set60/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set60/lte_custom_rf_mpr.h"
#include "DRDI/Set60/lte_custom_rf_tpc.h"
#include "DRDI/Set60/lte_custom_rf_tas.c"
#include "DRDI/Set60/lte_custom_mipi.c"
#include "DRDI/Set60/lte_custom_mipi_ant.c"
#include "DRDI/Set60/lte_custom_rf.c"
#include "DRDI/Set60/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set60/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set60/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set60/lte_custom_mipi_dpd.h"
#include "DRDI/Set60/lte_custom_mipi_dpd.c"
#include "DRDI/Set60/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set60/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set60/lte_custom_mipi_ant_database.c"
#include "DRDI/Set60/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set60/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
#include "DRDI/Set61/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set61/lte_custom_rf_if.h"
#endif
#include "DRDI/Set61/Toolgen/lte_custom_rf.h"
#include "DRDI/Set61/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set61/lte_custom_rf_mpr.h"
#include "DRDI/Set61/lte_custom_rf_tpc.h"
#include "DRDI/Set61/lte_custom_rf_tas.c"
#include "DRDI/Set61/lte_custom_mipi.c"
#include "DRDI/Set61/lte_custom_mipi_ant.c"
#include "DRDI/Set61/lte_custom_rf.c"
#include "DRDI/Set61/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set61/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set61/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set61/lte_custom_mipi_dpd.h"
#include "DRDI/Set61/lte_custom_mipi_dpd.c"
#include "DRDI/Set61/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set61/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set61/lte_custom_mipi_ant_database.c"
#include "DRDI/Set61/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set61/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
#include "DRDI/Set62/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set62/lte_custom_rf_if.h"
#endif
#include "DRDI/Set62/Toolgen/lte_custom_rf.h"
#include "DRDI/Set62/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set62/lte_custom_rf_mpr.h"
#include "DRDI/Set62/lte_custom_rf_tpc.h"
#include "DRDI/Set62/lte_custom_rf_tas.c"
#include "DRDI/Set62/lte_custom_mipi.c"
#include "DRDI/Set62/lte_custom_mipi_ant.c"
#include "DRDI/Set62/lte_custom_rf.c"
#include "DRDI/Set62/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set62/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set62/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set62/lte_custom_mipi_dpd.h"
#include "DRDI/Set62/lte_custom_mipi_dpd.c"
#include "DRDI/Set62/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set62/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set62/lte_custom_mipi_ant_database.c"
#include "DRDI/Set62/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set62/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
#include "DRDI/Set63/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set63/lte_custom_rf_if.h"
#endif
#include "DRDI/Set63/Toolgen/lte_custom_rf.h"
#include "DRDI/Set63/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set63/lte_custom_rf_mpr.h"
#include "DRDI/Set63/lte_custom_rf_tpc.h"
#include "DRDI/Set63/lte_custom_rf_tas.c"
#include "DRDI/Set63/lte_custom_mipi.c"
#include "DRDI/Set63/lte_custom_mipi_ant.c"
#include "DRDI/Set63/lte_custom_rf.c"
#include "DRDI/Set63/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set63/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set63/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set63/lte_custom_mipi_dpd.h"
#include "DRDI/Set63/lte_custom_mipi_dpd.c"
#include "DRDI/Set63/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set63/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set63/lte_custom_mipi_ant_database.c"
#include "DRDI/Set63/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set63/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
#include "DRDI/Set64/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set64/lte_custom_rf_if.h"
#endif
#include "DRDI/Set64/Toolgen/lte_custom_rf.h"
#include "DRDI/Set64/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set64/lte_custom_rf_mpr.h"
#include "DRDI/Set64/lte_custom_rf_tpc.h"
#include "DRDI/Set64/lte_custom_rf_tas.c"
#include "DRDI/Set64/lte_custom_mipi.c"
#include "DRDI/Set64/lte_custom_mipi_ant.c"
#include "DRDI/Set64/lte_custom_rf.c"
#include "DRDI/Set64/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set64/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set64/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set64/lte_custom_mipi_dpd.h"
#include "DRDI/Set64/lte_custom_mipi_dpd.c"
#include "DRDI/Set64/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set64/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set64/lte_custom_mipi_ant_database.c"
#include "DRDI/Set64/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set64/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
#include "DRDI/Set65/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set65/lte_custom_rf_if.h"
#endif
#include "DRDI/Set65/Toolgen/lte_custom_rf.h"
#include "DRDI/Set65/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set65/lte_custom_rf_mpr.h"
#include "DRDI/Set65/lte_custom_rf_tpc.h"
#include "DRDI/Set65/lte_custom_rf_tas.c"
#include "DRDI/Set65/lte_custom_mipi.c"
#include "DRDI/Set65/lte_custom_mipi_ant.c"
#include "DRDI/Set65/lte_custom_rf.c"
#include "DRDI/Set65/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set65/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set65/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set65/lte_custom_mipi_dpd.h"
#include "DRDI/Set65/lte_custom_mipi_dpd.c"
#include "DRDI/Set65/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set65/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set65/lte_custom_mipi_ant_database.c"
#include "DRDI/Set65/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set65/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
#include "DRDI/Set66/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set66/lte_custom_rf_if.h"
#endif
#include "DRDI/Set66/Toolgen/lte_custom_rf.h"
#include "DRDI/Set66/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set66/lte_custom_rf_mpr.h"
#include "DRDI/Set66/lte_custom_rf_tpc.h"
#include "DRDI/Set66/lte_custom_rf_tas.c"
#include "DRDI/Set66/lte_custom_mipi.c"
#include "DRDI/Set66/lte_custom_mipi_ant.c"
#include "DRDI/Set66/lte_custom_rf.c"
#include "DRDI/Set66/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set66/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set66/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set66/lte_custom_mipi_dpd.h"
#include "DRDI/Set66/lte_custom_mipi_dpd.c"
#include "DRDI/Set66/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set66/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set66/lte_custom_mipi_ant_database.c"
#include "DRDI/Set66/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set66/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
#include "DRDI/Set67/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set67/lte_custom_rf_if.h"
#endif
#include "DRDI/Set67/Toolgen/lte_custom_rf.h"
#include "DRDI/Set67/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set67/lte_custom_rf_mpr.h"
#include "DRDI/Set67/lte_custom_rf_tpc.h"
#include "DRDI/Set67/lte_custom_rf_tas.c"
#include "DRDI/Set67/lte_custom_mipi.c"
#include "DRDI/Set67/lte_custom_mipi_ant.c"
#include "DRDI/Set67/lte_custom_rf.c"
#include "DRDI/Set67/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set67/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set67/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set67/lte_custom_mipi_dpd.h"
#include "DRDI/Set67/lte_custom_mipi_dpd.c"
#include "DRDI/Set67/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set67/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set67/lte_custom_mipi_ant_database.c"
#include "DRDI/Set67/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set67/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
#include "DRDI/Set68/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set68/lte_custom_rf_if.h"
#endif
#include "DRDI/Set68/Toolgen/lte_custom_rf.h"
#include "DRDI/Set68/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set68/lte_custom_rf_mpr.h"
#include "DRDI/Set68/lte_custom_rf_tpc.h"
#include "DRDI/Set68/lte_custom_rf_tas.c"
#include "DRDI/Set68/lte_custom_mipi.c"
#include "DRDI/Set68/lte_custom_mipi_ant.c"
#include "DRDI/Set68/lte_custom_rf.c"
#include "DRDI/Set68/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set68/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set68/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set68/lte_custom_mipi_dpd.h"
#include "DRDI/Set68/lte_custom_mipi_dpd.c"
#include "DRDI/Set68/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set68/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set68/lte_custom_mipi_ant_database.c"
#include "DRDI/Set68/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set68/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
#include "DRDI/Set69/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set69/lte_custom_rf_if.h"
#endif
#include "DRDI/Set69/Toolgen/lte_custom_rf.h"
#include "DRDI/Set69/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set69/lte_custom_rf_mpr.h"
#include "DRDI/Set69/lte_custom_rf_tpc.h"
#include "DRDI/Set69/lte_custom_rf_tas.c"
#include "DRDI/Set69/lte_custom_mipi.c"
#include "DRDI/Set69/lte_custom_mipi_ant.c"
#include "DRDI/Set69/lte_custom_rf.c"
#include "DRDI/Set69/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set69/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set69/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set69/lte_custom_mipi_dpd.h"
#include "DRDI/Set69/lte_custom_mipi_dpd.c"
#include "DRDI/Set69/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set69/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set69/lte_custom_mipi_ant_database.c"
#include "DRDI/Set69/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set69/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
#include "DRDI/Set70/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set70/lte_custom_rf_if.h"
#endif
#include "DRDI/Set70/Toolgen/lte_custom_rf.h"
#include "DRDI/Set70/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set70/lte_custom_rf_mpr.h"
#include "DRDI/Set70/lte_custom_rf_tpc.h"
#include "DRDI/Set70/lte_custom_rf_tas.c"
#include "DRDI/Set70/lte_custom_mipi.c"
#include "DRDI/Set70/lte_custom_mipi_ant.c"
#include "DRDI/Set70/lte_custom_rf.c"
#include "DRDI/Set70/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set70/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set70/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set70/lte_custom_mipi_dpd.h"
#include "DRDI/Set70/lte_custom_mipi_dpd.c"
#include "DRDI/Set70/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set70/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set70/lte_custom_mipi_ant_database.c"
#include "DRDI/Set70/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set70/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
#include "DRDI/Set71/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set71/lte_custom_rf_if.h"
#endif
#include "DRDI/Set71/Toolgen/lte_custom_rf.h"
#include "DRDI/Set71/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set71/lte_custom_rf_mpr.h"
#include "DRDI/Set71/lte_custom_rf_tpc.h"
#include "DRDI/Set71/lte_custom_rf_tas.c"
#include "DRDI/Set71/lte_custom_mipi.c"
#include "DRDI/Set71/lte_custom_mipi_ant.c"
#include "DRDI/Set71/lte_custom_rf.c"
#include "DRDI/Set71/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set71/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set71/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set71/lte_custom_mipi_dpd.h"
#include "DRDI/Set71/lte_custom_mipi_dpd.c"
#include "DRDI/Set71/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set71/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set71/lte_custom_mipi_ant_database.c"
#include "DRDI/Set71/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set71/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
#include "DRDI/Set72/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set72/lte_custom_rf_if.h"
#endif
#include "DRDI/Set72/Toolgen/lte_custom_rf.h"
#include "DRDI/Set72/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set72/lte_custom_rf_mpr.h"
#include "DRDI/Set72/lte_custom_rf_tpc.h"
#include "DRDI/Set72/lte_custom_rf_tas.c"
#include "DRDI/Set72/lte_custom_mipi.c"
#include "DRDI/Set72/lte_custom_mipi_ant.c"
#include "DRDI/Set72/lte_custom_rf.c"
#include "DRDI/Set72/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set72/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set72/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set72/lte_custom_mipi_dpd.h"
#include "DRDI/Set72/lte_custom_mipi_dpd.c"
#include "DRDI/Set72/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set72/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set72/lte_custom_mipi_ant_database.c"
#include "DRDI/Set72/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set72/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
#include "DRDI/Set73/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set73/lte_custom_rf_if.h"
#endif
#include "DRDI/Set73/Toolgen/lte_custom_rf.h"
#include "DRDI/Set73/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set73/lte_custom_rf_mpr.h"
#include "DRDI/Set73/lte_custom_rf_tpc.h"
#include "DRDI/Set73/lte_custom_rf_tas.c"
#include "DRDI/Set73/lte_custom_mipi.c"
#include "DRDI/Set73/lte_custom_mipi_ant.c"
#include "DRDI/Set73/lte_custom_rf.c"
#include "DRDI/Set73/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set73/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set73/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set73/lte_custom_mipi_dpd.h"
#include "DRDI/Set73/lte_custom_mipi_dpd.c"
#include "DRDI/Set73/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set73/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set73/lte_custom_mipi_ant_database.c"
#include "DRDI/Set73/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set73/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
#include "DRDI/Set74/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set74/lte_custom_rf_if.h"
#endif
#include "DRDI/Set74/Toolgen/lte_custom_rf.h"
#include "DRDI/Set74/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set74/lte_custom_rf_mpr.h"
#include "DRDI/Set74/lte_custom_rf_tpc.h"
#include "DRDI/Set74/lte_custom_rf_tas.c"
#include "DRDI/Set74/lte_custom_mipi.c"
#include "DRDI/Set74/lte_custom_mipi_ant.c"
#include "DRDI/Set74/lte_custom_rf.c"
#include "DRDI/Set74/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set74/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set74/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set74/lte_custom_mipi_dpd.h"
#include "DRDI/Set74/lte_custom_mipi_dpd.c"
#include "DRDI/Set74/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set74/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set74/lte_custom_mipi_ant_database.c"
#include "DRDI/Set74/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set74/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
#include "DRDI/Set75/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set75/lte_custom_rf_if.h"
#endif
#include "DRDI/Set75/Toolgen/lte_custom_rf.h"
#include "DRDI/Set75/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set75/lte_custom_rf_mpr.h"
#include "DRDI/Set75/lte_custom_rf_tpc.h"
#include "DRDI/Set75/lte_custom_rf_tas.c"
#include "DRDI/Set75/lte_custom_mipi.c"
#include "DRDI/Set75/lte_custom_mipi_ant.c"
#include "DRDI/Set75/lte_custom_rf.c"
#include "DRDI/Set75/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set75/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set75/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set75/lte_custom_mipi_dpd.h"
#include "DRDI/Set75/lte_custom_mipi_dpd.c"
#include "DRDI/Set75/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set75/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set75/lte_custom_mipi_ant_database.c"
#include "DRDI/Set75/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set75/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
#include "DRDI/Set76/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set76/lte_custom_rf_if.h"
#endif
#include "DRDI/Set76/Toolgen/lte_custom_rf.h"
#include "DRDI/Set76/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set76/lte_custom_rf_mpr.h"
#include "DRDI/Set76/lte_custom_rf_tpc.h"
#include "DRDI/Set76/lte_custom_rf_tas.c"
#include "DRDI/Set76/lte_custom_mipi.c"
#include "DRDI/Set76/lte_custom_mipi_ant.c"
#include "DRDI/Set76/lte_custom_rf.c"
#include "DRDI/Set76/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set76/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set76/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set76/lte_custom_mipi_dpd.h"
#include "DRDI/Set76/lte_custom_mipi_dpd.c"
#include "DRDI/Set76/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set76/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set76/lte_custom_mipi_ant_database.c"
#include "DRDI/Set76/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set76/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
#include "DRDI/Set77/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set77/lte_custom_rf_if.h"
#endif
#include "DRDI/Set77/Toolgen/lte_custom_rf.h"
#include "DRDI/Set77/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set77/lte_custom_rf_mpr.h"
#include "DRDI/Set77/lte_custom_rf_tpc.h"
#include "DRDI/Set77/lte_custom_rf_tas.c"
#include "DRDI/Set77/lte_custom_mipi.c"
#include "DRDI/Set77/lte_custom_mipi_ant.c"
#include "DRDI/Set77/lte_custom_rf.c"
#include "DRDI/Set77/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set77/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set77/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set77/lte_custom_mipi_dpd.h"
#include "DRDI/Set77/lte_custom_mipi_dpd.c"
#include "DRDI/Set77/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set77/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set77/lte_custom_mipi_ant_database.c"
#include "DRDI/Set77/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set77/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
#include "DRDI/Set78/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set78/lte_custom_rf_if.h"
#endif
#include "DRDI/Set78/Toolgen/lte_custom_rf.h"
#include "DRDI/Set78/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set78/lte_custom_rf_mpr.h"
#include "DRDI/Set78/lte_custom_rf_tpc.h"
#include "DRDI/Set78/lte_custom_rf_tas.c"
#include "DRDI/Set78/lte_custom_mipi.c"
#include "DRDI/Set78/lte_custom_mipi_ant.c"
#include "DRDI/Set78/lte_custom_rf.c"
#include "DRDI/Set78/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set78/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set78/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set78/lte_custom_mipi_dpd.h"
#include "DRDI/Set78/lte_custom_mipi_dpd.c"
#include "DRDI/Set78/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set78/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set78/lte_custom_mipi_ant_database.c"
#include "DRDI/Set78/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set78/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
#include "DRDI/Set79/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set79/lte_custom_rf_if.h"
#endif
#include "DRDI/Set79/Toolgen/lte_custom_rf.h"
#include "DRDI/Set79/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set79/lte_custom_rf_mpr.h"
#include "DRDI/Set79/lte_custom_rf_tpc.h"
#include "DRDI/Set79/lte_custom_rf_tas.c"
#include "DRDI/Set79/lte_custom_mipi.c"
#include "DRDI/Set79/lte_custom_mipi_ant.c"
#include "DRDI/Set79/lte_custom_rf.c"
#include "DRDI/Set79/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set79/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set79/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set79/lte_custom_mipi_dpd.h"
#include "DRDI/Set79/lte_custom_mipi_dpd.c"
#include "DRDI/Set79/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set79/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set79/lte_custom_mipi_ant_database.c"
#include "DRDI/Set79/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set79/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
#include "DRDI/Set80/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set80/lte_custom_rf_if.h"
#endif
#include "DRDI/Set80/Toolgen/lte_custom_rf.h"
#include "DRDI/Set80/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set80/lte_custom_rf_mpr.h"
#include "DRDI/Set80/lte_custom_rf_tpc.h"
#include "DRDI/Set80/lte_custom_rf_tas.c"
#include "DRDI/Set80/lte_custom_mipi.c"
#include "DRDI/Set80/lte_custom_mipi_ant.c"
#include "DRDI/Set80/lte_custom_rf.c"
#include "DRDI/Set80/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set80/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set80/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set80/lte_custom_mipi_dpd.h"
#include "DRDI/Set80/lte_custom_mipi_dpd.c"
#include "DRDI/Set80/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set80/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set80/lte_custom_mipi_ant_database.c"
#include "DRDI/Set80/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set80/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
#include "DRDI/Set81/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set81/lte_custom_rf_if.h"
#endif
#include "DRDI/Set81/Toolgen/lte_custom_rf.h"
#include "DRDI/Set81/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set81/lte_custom_rf_mpr.h"
#include "DRDI/Set81/lte_custom_rf_tpc.h"
#include "DRDI/Set81/lte_custom_rf_tas.c"
#include "DRDI/Set81/lte_custom_mipi.c"
#include "DRDI/Set81/lte_custom_mipi_ant.c"
#include "DRDI/Set81/lte_custom_rf.c"
#include "DRDI/Set81/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set81/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set81/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set81/lte_custom_mipi_dpd.h"
#include "DRDI/Set81/lte_custom_mipi_dpd.c"
#include "DRDI/Set81/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set81/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set81/lte_custom_mipi_ant_database.c"
#include "DRDI/Set81/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set81/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
#include "DRDI/Set82/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set82/lte_custom_rf_if.h"
#endif
#include "DRDI/Set82/Toolgen/lte_custom_rf.h"
#include "DRDI/Set82/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set82/lte_custom_rf_mpr.h"
#include "DRDI/Set82/lte_custom_rf_tpc.h"
#include "DRDI/Set82/lte_custom_rf_tas.c"
#include "DRDI/Set82/lte_custom_mipi.c"
#include "DRDI/Set82/lte_custom_mipi_ant.c"
#include "DRDI/Set82/lte_custom_rf.c"
#include "DRDI/Set82/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set82/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set82/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set82/lte_custom_mipi_dpd.h"
#include "DRDI/Set82/lte_custom_mipi_dpd.c"
#include "DRDI/Set82/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set82/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set82/lte_custom_mipi_ant_database.c"
#include "DRDI/Set82/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set82/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
#include "DRDI/Set83/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set83/lte_custom_rf_if.h"
#endif
#include "DRDI/Set83/Toolgen/lte_custom_rf.h"
#include "DRDI/Set83/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set83/lte_custom_rf_mpr.h"
#include "DRDI/Set83/lte_custom_rf_tpc.h"
#include "DRDI/Set83/lte_custom_rf_tas.c"
#include "DRDI/Set83/lte_custom_mipi.c"
#include "DRDI/Set83/lte_custom_mipi_ant.c"
#include "DRDI/Set83/lte_custom_rf.c"
#include "DRDI/Set83/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set83/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set83/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set83/lte_custom_mipi_dpd.h"
#include "DRDI/Set83/lte_custom_mipi_dpd.c"
#include "DRDI/Set83/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set83/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set83/lte_custom_mipi_ant_database.c"
#include "DRDI/Set83/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set83/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
#include "DRDI/Set84/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set84/lte_custom_rf_if.h"
#endif
#include "DRDI/Set84/Toolgen/lte_custom_rf.h"
#include "DRDI/Set84/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set84/lte_custom_rf_mpr.h"
#include "DRDI/Set84/lte_custom_rf_tpc.h"
#include "DRDI/Set84/lte_custom_rf_tas.c"
#include "DRDI/Set84/lte_custom_mipi.c"
#include "DRDI/Set84/lte_custom_mipi_ant.c"
#include "DRDI/Set84/lte_custom_rf.c"
#include "DRDI/Set84/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set84/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set84/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set84/lte_custom_mipi_dpd.h"
#include "DRDI/Set84/lte_custom_mipi_dpd.c"
#include "DRDI/Set84/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set84/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set84/lte_custom_mipi_ant_database.c"
#include "DRDI/Set84/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set84/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
#include "DRDI/Set85/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set85/lte_custom_rf_if.h"
#endif
#include "DRDI/Set85/Toolgen/lte_custom_rf.h"
#include "DRDI/Set85/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set85/lte_custom_rf_mpr.h"
#include "DRDI/Set85/lte_custom_rf_tpc.h"
#include "DRDI/Set85/lte_custom_rf_tas.c"
#include "DRDI/Set85/lte_custom_mipi.c"
#include "DRDI/Set85/lte_custom_mipi_ant.c"
#include "DRDI/Set85/lte_custom_rf.c"
#include "DRDI/Set85/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set85/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set85/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set85/lte_custom_mipi_dpd.h"
#include "DRDI/Set85/lte_custom_mipi_dpd.c"
#include "DRDI/Set85/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set85/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set85/lte_custom_mipi_ant_database.c"
#include "DRDI/Set85/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set85/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
#include "DRDI/Set86/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set86/lte_custom_rf_if.h"
#endif
#include "DRDI/Set86/Toolgen/lte_custom_rf.h"
#include "DRDI/Set86/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set86/lte_custom_rf_mpr.h"
#include "DRDI/Set86/lte_custom_rf_tpc.h"
#include "DRDI/Set86/lte_custom_rf_tas.c"
#include "DRDI/Set86/lte_custom_mipi.c"
#include "DRDI/Set86/lte_custom_mipi_ant.c"
#include "DRDI/Set86/lte_custom_rf.c"
#include "DRDI/Set86/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set86/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set86/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set86/lte_custom_mipi_dpd.h"
#include "DRDI/Set86/lte_custom_mipi_dpd.c"
#include "DRDI/Set86/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set86/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set86/lte_custom_mipi_ant_database.c"
#include "DRDI/Set86/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set86/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
#include "DRDI/Set87/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set87/lte_custom_rf_if.h"
#endif
#include "DRDI/Set87/Toolgen/lte_custom_rf.h"
#include "DRDI/Set87/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set87/lte_custom_rf_mpr.h"
#include "DRDI/Set87/lte_custom_rf_tpc.h"
#include "DRDI/Set87/lte_custom_rf_tas.c"
#include "DRDI/Set87/lte_custom_mipi.c"
#include "DRDI/Set87/lte_custom_mipi_ant.c"
#include "DRDI/Set87/lte_custom_rf.c"
#include "DRDI/Set87/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set87/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set87/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set87/lte_custom_mipi_dpd.h"
#include "DRDI/Set87/lte_custom_mipi_dpd.c"
#include "DRDI/Set87/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set87/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set87/lte_custom_mipi_ant_database.c"
#include "DRDI/Set87/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set87/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
#include "DRDI/Set88/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set88/lte_custom_rf_if.h"
#endif
#include "DRDI/Set88/Toolgen/lte_custom_rf.h"
#include "DRDI/Set88/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set88/lte_custom_rf_mpr.h"
#include "DRDI/Set88/lte_custom_rf_tpc.h"
#include "DRDI/Set88/lte_custom_rf_tas.c"
#include "DRDI/Set88/lte_custom_mipi.c"
#include "DRDI/Set88/lte_custom_mipi_ant.c"
#include "DRDI/Set88/lte_custom_rf.c"
#include "DRDI/Set88/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set88/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set88/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set88/lte_custom_mipi_dpd.h"
#include "DRDI/Set88/lte_custom_mipi_dpd.c"
#include "DRDI/Set88/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set88/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set88/lte_custom_mipi_ant_database.c"
#include "DRDI/Set88/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set88/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
#include "DRDI/Set89/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set89/lte_custom_rf_if.h"
#endif
#include "DRDI/Set89/Toolgen/lte_custom_rf.h"
#include "DRDI/Set89/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set89/lte_custom_rf_mpr.h"
#include "DRDI/Set89/lte_custom_rf_tpc.h"
#include "DRDI/Set89/lte_custom_rf_tas.c"
#include "DRDI/Set89/lte_custom_mipi.c"
#include "DRDI/Set89/lte_custom_mipi_ant.c"
#include "DRDI/Set89/lte_custom_rf.c"
#include "DRDI/Set89/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set89/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set89/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set89/lte_custom_mipi_dpd.h"
#include "DRDI/Set89/lte_custom_mipi_dpd.c"
#include "DRDI/Set89/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set89/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set89/lte_custom_mipi_ant_database.c"
#include "DRDI/Set89/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set89/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
#include "DRDI/Set90/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set90/lte_custom_rf_if.h"
#endif
#include "DRDI/Set90/Toolgen/lte_custom_rf.h"
#include "DRDI/Set90/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set90/lte_custom_rf_mpr.h"
#include "DRDI/Set90/lte_custom_rf_tpc.h"
#include "DRDI/Set90/lte_custom_rf_tas.c"
#include "DRDI/Set90/lte_custom_mipi.c"
#include "DRDI/Set90/lte_custom_mipi_ant.c"
#include "DRDI/Set90/lte_custom_rf.c"
#include "DRDI/Set90/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set90/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set90/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set90/lte_custom_mipi_dpd.h"
#include "DRDI/Set90/lte_custom_mipi_dpd.c"
#include "DRDI/Set90/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set90/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set90/lte_custom_mipi_ant_database.c"
#include "DRDI/Set90/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set90/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
#include "DRDI/Set91/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set91/lte_custom_rf_if.h"
#endif
#include "DRDI/Set91/Toolgen/lte_custom_rf.h"
#include "DRDI/Set91/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set91/lte_custom_rf_mpr.h"
#include "DRDI/Set91/lte_custom_rf_tpc.h"
#include "DRDI/Set91/lte_custom_rf_tas.c"
#include "DRDI/Set91/lte_custom_mipi.c"
#include "DRDI/Set91/lte_custom_mipi_ant.c"
#include "DRDI/Set91/lte_custom_rf.c"
#include "DRDI/Set91/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set91/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set91/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set91/lte_custom_mipi_dpd.h"
#include "DRDI/Set91/lte_custom_mipi_dpd.c"
#include "DRDI/Set91/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set91/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set91/lte_custom_mipi_ant_database.c"
#include "DRDI/Set91/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set91/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
#include "DRDI/Set92/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set92/lte_custom_rf_if.h"
#endif
#include "DRDI/Set92/Toolgen/lte_custom_rf.h"
#include "DRDI/Set92/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set92/lte_custom_rf_mpr.h"
#include "DRDI/Set92/lte_custom_rf_tpc.h"
#include "DRDI/Set92/lte_custom_rf_tas.c"
#include "DRDI/Set92/lte_custom_mipi.c"
#include "DRDI/Set92/lte_custom_mipi_ant.c"
#include "DRDI/Set92/lte_custom_rf.c"
#include "DRDI/Set92/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set92/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set92/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set92/lte_custom_mipi_dpd.h"
#include "DRDI/Set92/lte_custom_mipi_dpd.c"
#include "DRDI/Set92/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set92/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set92/lte_custom_mipi_ant_database.c"
#include "DRDI/Set92/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set92/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
#include "DRDI/Set93/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set93/lte_custom_rf_if.h"
#endif
#include "DRDI/Set93/Toolgen/lte_custom_rf.h"
#include "DRDI/Set93/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set93/lte_custom_rf_mpr.h"
#include "DRDI/Set93/lte_custom_rf_tpc.h"
#include "DRDI/Set93/lte_custom_rf_tas.c"
#include "DRDI/Set93/lte_custom_mipi.c"
#include "DRDI/Set93/lte_custom_mipi_ant.c"
#include "DRDI/Set93/lte_custom_rf.c"
#include "DRDI/Set93/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set93/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set93/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set93/lte_custom_mipi_dpd.h"
#include "DRDI/Set93/lte_custom_mipi_dpd.c"
#include "DRDI/Set93/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set93/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set93/lte_custom_mipi_ant_database.c"
#include "DRDI/Set93/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set93/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
#include "DRDI/Set94/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set94/lte_custom_rf_if.h"
#endif
#include "DRDI/Set94/Toolgen/lte_custom_rf.h"
#include "DRDI/Set94/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set94/lte_custom_rf_mpr.h"
#include "DRDI/Set94/lte_custom_rf_tpc.h"
#include "DRDI/Set94/lte_custom_rf_tas.c"
#include "DRDI/Set94/lte_custom_mipi.c"
#include "DRDI/Set94/lte_custom_mipi_ant.c"
#include "DRDI/Set94/lte_custom_rf.c"
#include "DRDI/Set94/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set94/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set94/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set94/lte_custom_mipi_dpd.h"
#include "DRDI/Set94/lte_custom_mipi_dpd.c"
#include "DRDI/Set94/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set94/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set94/lte_custom_mipi_ant_database.c"
#include "DRDI/Set94/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set94/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
#include "DRDI/Set95/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set95/lte_custom_rf_if.h"
#endif
#include "DRDI/Set95/Toolgen/lte_custom_rf.h"
#include "DRDI/Set95/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set95/lte_custom_rf_mpr.h"
#include "DRDI/Set95/lte_custom_rf_tpc.h"
#include "DRDI/Set95/lte_custom_rf_tas.c"
#include "DRDI/Set95/lte_custom_mipi.c"
#include "DRDI/Set95/lte_custom_mipi_ant.c"
#include "DRDI/Set95/lte_custom_rf.c"
#include "DRDI/Set95/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set95/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set95/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set95/lte_custom_mipi_dpd.h"
#include "DRDI/Set95/lte_custom_mipi_dpd.c"
#include "DRDI/Set95/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set95/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set95/lte_custom_mipi_ant_database.c"
#include "DRDI/Set95/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set95/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
#include "DRDI/Set96/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set96/lte_custom_rf_if.h"
#endif
#include "DRDI/Set96/Toolgen/lte_custom_rf.h"
#include "DRDI/Set96/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set96/lte_custom_rf_mpr.h"
#include "DRDI/Set96/lte_custom_rf_tpc.h"
#include "DRDI/Set96/lte_custom_rf_tas.c"
#include "DRDI/Set96/lte_custom_mipi.c"
#include "DRDI/Set96/lte_custom_mipi_ant.c"
#include "DRDI/Set96/lte_custom_rf.c"
#include "DRDI/Set96/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set96/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set96/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set96/lte_custom_mipi_dpd.h"
#include "DRDI/Set96/lte_custom_mipi_dpd.c"
#include "DRDI/Set96/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set96/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set96/lte_custom_mipi_ant_database.c"
#include "DRDI/Set96/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set96/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
#include "DRDI/Set97/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set97/lte_custom_rf_if.h"
#endif
#include "DRDI/Set97/Toolgen/lte_custom_rf.h"
#include "DRDI/Set97/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set97/lte_custom_rf_mpr.h"
#include "DRDI/Set97/lte_custom_rf_tpc.h"
#include "DRDI/Set97/lte_custom_rf_tas.c"
#include "DRDI/Set97/lte_custom_mipi.c"
#include "DRDI/Set97/lte_custom_mipi_ant.c"
#include "DRDI/Set97/lte_custom_rf.c"
#include "DRDI/Set97/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set97/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set97/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set97/lte_custom_mipi_dpd.h"
#include "DRDI/Set97/lte_custom_mipi_dpd.c"
#include "DRDI/Set97/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set97/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set97/lte_custom_mipi_ant_database.c"
#include "DRDI/Set97/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set97/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
#include "DRDI/Set98/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set98/lte_custom_rf_if.h"
#endif
#include "DRDI/Set98/Toolgen/lte_custom_rf.h"
#include "DRDI/Set98/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set98/lte_custom_rf_mpr.h"
#include "DRDI/Set98/lte_custom_rf_tpc.h"
#include "DRDI/Set98/lte_custom_rf_tas.c"
#include "DRDI/Set98/lte_custom_mipi.c"
#include "DRDI/Set98/lte_custom_mipi_ant.c"
#include "DRDI/Set98/lte_custom_rf.c"
#include "DRDI/Set98/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set98/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set98/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set98/lte_custom_mipi_dpd.h"
#include "DRDI/Set98/lte_custom_mipi_dpd.c"
#include "DRDI/Set98/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set98/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set98/lte_custom_mipi_ant_database.c"
#include "DRDI/Set98/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set98/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
#include "DRDI/Set99/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set99/lte_custom_rf_if.h"
#endif
#include "DRDI/Set99/Toolgen/lte_custom_rf.h"
#include "DRDI/Set99/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set99/lte_custom_rf_mpr.h"
#include "DRDI/Set99/lte_custom_rf_tpc.h"
#include "DRDI/Set99/lte_custom_rf_tas.c"
#include "DRDI/Set99/lte_custom_mipi.c"
#include "DRDI/Set99/lte_custom_mipi_ant.c"
#include "DRDI/Set99/lte_custom_rf.c"
#include "DRDI/Set99/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set99/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set99/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set99/lte_custom_mipi_dpd.h"
#include "DRDI/Set99/lte_custom_mipi_dpd.c"
#include "DRDI/Set99/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set99/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set99/lte_custom_mipi_ant_database.c"
#include "DRDI/Set99/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set99/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
#include "DRDI/Set100/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set100/lte_custom_rf_if.h"
#endif
#include "DRDI/Set100/Toolgen/lte_custom_rf.h"
#include "DRDI/Set100/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set100/lte_custom_rf_mpr.h"
#include "DRDI/Set100/lte_custom_rf_tpc.h"
#include "DRDI/Set100/lte_custom_rf_tas.c"
#include "DRDI/Set100/lte_custom_mipi.c"
#include "DRDI/Set100/lte_custom_mipi_ant.c"
#include "DRDI/Set100/lte_custom_rf.c"
#include "DRDI/Set100/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set100/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set100/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set100/lte_custom_mipi_dpd.h"
#include "DRDI/Set100/lte_custom_mipi_dpd.c"
#include "DRDI/Set100/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set100/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set100/lte_custom_mipi_ant_database.c"
#include "DRDI/Set100/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set100/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
#include "DRDI/Set101/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set101/lte_custom_rf_if.h"
#endif
#include "DRDI/Set101/Toolgen/lte_custom_rf.h"
#include "DRDI/Set101/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set101/lte_custom_rf_mpr.h"
#include "DRDI/Set101/lte_custom_rf_tpc.h"
#include "DRDI/Set101/lte_custom_rf_tas.c"
#include "DRDI/Set101/lte_custom_mipi.c"
#include "DRDI/Set101/lte_custom_mipi_ant.c"
#include "DRDI/Set101/lte_custom_rf.c"
#include "DRDI/Set101/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set101/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set101/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set101/lte_custom_mipi_dpd.h"
#include "DRDI/Set101/lte_custom_mipi_dpd.c"
#include "DRDI/Set101/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set101/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set101/lte_custom_mipi_ant_database.c"
#include "DRDI/Set101/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set101/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
#include "DRDI/Set102/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set102/lte_custom_rf_if.h"
#endif
#include "DRDI/Set102/Toolgen/lte_custom_rf.h"
#include "DRDI/Set102/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set102/lte_custom_rf_mpr.h"
#include "DRDI/Set102/lte_custom_rf_tpc.h"
#include "DRDI/Set102/lte_custom_rf_tas.c"
#include "DRDI/Set102/lte_custom_mipi.c"
#include "DRDI/Set102/lte_custom_mipi_ant.c"
#include "DRDI/Set102/lte_custom_rf.c"
#include "DRDI/Set102/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set102/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set102/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set102/lte_custom_mipi_dpd.h"
#include "DRDI/Set102/lte_custom_mipi_dpd.c"
#include "DRDI/Set102/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set102/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set102/lte_custom_mipi_ant_database.c"
#include "DRDI/Set102/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set102/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
#include "DRDI/Set103/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set103/lte_custom_rf_if.h"
#endif
#include "DRDI/Set103/Toolgen/lte_custom_rf.h"
#include "DRDI/Set103/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set103/lte_custom_rf_mpr.h"
#include "DRDI/Set103/lte_custom_rf_tpc.h"
#include "DRDI/Set103/lte_custom_rf_tas.c"
#include "DRDI/Set103/lte_custom_mipi.c"
#include "DRDI/Set103/lte_custom_mipi_ant.c"
#include "DRDI/Set103/lte_custom_rf.c"
#include "DRDI/Set103/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set103/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set103/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set103/lte_custom_mipi_dpd.h"
#include "DRDI/Set103/lte_custom_mipi_dpd.c"
#include "DRDI/Set103/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set103/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set103/lte_custom_mipi_ant_database.c"
#include "DRDI/Set103/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set103/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
#include "DRDI/Set104/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set104/lte_custom_rf_if.h"
#endif
#include "DRDI/Set104/Toolgen/lte_custom_rf.h"
#include "DRDI/Set104/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set104/lte_custom_rf_mpr.h"
#include "DRDI/Set104/lte_custom_rf_tpc.h"
#include "DRDI/Set104/lte_custom_rf_tas.c"
#include "DRDI/Set104/lte_custom_mipi.c"
#include "DRDI/Set104/lte_custom_mipi_ant.c"
#include "DRDI/Set104/lte_custom_rf.c"
#include "DRDI/Set104/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set104/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set104/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set104/lte_custom_mipi_dpd.h"
#include "DRDI/Set104/lte_custom_mipi_dpd.c"
#include "DRDI/Set104/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set104/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set104/lte_custom_mipi_ant_database.c"
#include "DRDI/Set104/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set104/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
#include "DRDI/Set105/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set105/lte_custom_rf_if.h"
#endif
#include "DRDI/Set105/Toolgen/lte_custom_rf.h"
#include "DRDI/Set105/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set105/lte_custom_rf_mpr.h"
#include "DRDI/Set105/lte_custom_rf_tpc.h"
#include "DRDI/Set105/lte_custom_rf_tas.c"
#include "DRDI/Set105/lte_custom_mipi.c"
#include "DRDI/Set105/lte_custom_mipi_ant.c"
#include "DRDI/Set105/lte_custom_rf.c"
#include "DRDI/Set105/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set105/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set105/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set105/lte_custom_mipi_dpd.h"
#include "DRDI/Set105/lte_custom_mipi_dpd.c"
#include "DRDI/Set105/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set105/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set105/lte_custom_mipi_ant_database.c"
#include "DRDI/Set105/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set105/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
#include "DRDI/Set106/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set106/lte_custom_rf_if.h"
#endif
#include "DRDI/Set106/Toolgen/lte_custom_rf.h"
#include "DRDI/Set106/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set106/lte_custom_rf_mpr.h"
#include "DRDI/Set106/lte_custom_rf_tpc.h"
#include "DRDI/Set106/lte_custom_rf_tas.c"
#include "DRDI/Set106/lte_custom_mipi.c"
#include "DRDI/Set106/lte_custom_mipi_ant.c"
#include "DRDI/Set106/lte_custom_rf.c"
#include "DRDI/Set106/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set106/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set106/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set106/lte_custom_mipi_dpd.h"
#include "DRDI/Set106/lte_custom_mipi_dpd.c"
#include "DRDI/Set106/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set106/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set106/lte_custom_mipi_ant_database.c"
#include "DRDI/Set106/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set106/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
#include "DRDI/Set107/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set107/lte_custom_rf_if.h"
#endif
#include "DRDI/Set107/Toolgen/lte_custom_rf.h"
#include "DRDI/Set107/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set107/lte_custom_rf_mpr.h"
#include "DRDI/Set107/lte_custom_rf_tpc.h"
#include "DRDI/Set107/lte_custom_rf_tas.c"
#include "DRDI/Set107/lte_custom_mipi.c"
#include "DRDI/Set107/lte_custom_mipi_ant.c"
#include "DRDI/Set107/lte_custom_rf.c"
#include "DRDI/Set107/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set107/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set107/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set107/lte_custom_mipi_dpd.h"
#include "DRDI/Set107/lte_custom_mipi_dpd.c"
#include "DRDI/Set107/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set107/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set107/lte_custom_mipi_ant_database.c"
#include "DRDI/Set107/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set107/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
#include "DRDI/Set108/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set108/lte_custom_rf_if.h"
#endif
#include "DRDI/Set108/Toolgen/lte_custom_rf.h"
#include "DRDI/Set108/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set108/lte_custom_rf_mpr.h"
#include "DRDI/Set108/lte_custom_rf_tpc.h"
#include "DRDI/Set108/lte_custom_rf_tas.c"
#include "DRDI/Set108/lte_custom_mipi.c"
#include "DRDI/Set108/lte_custom_mipi_ant.c"
#include "DRDI/Set108/lte_custom_rf.c"
#include "DRDI/Set108/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set108/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set108/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set108/lte_custom_mipi_dpd.h"
#include "DRDI/Set108/lte_custom_mipi_dpd.c"
#include "DRDI/Set108/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set108/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set108/lte_custom_mipi_ant_database.c"
#include "DRDI/Set108/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set108/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
#include "DRDI/Set109/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set109/lte_custom_rf_if.h"
#endif
#include "DRDI/Set109/Toolgen/lte_custom_rf.h"
#include "DRDI/Set109/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set109/lte_custom_rf_mpr.h"
#include "DRDI/Set109/lte_custom_rf_tpc.h"
#include "DRDI/Set109/lte_custom_rf_tas.c"
#include "DRDI/Set109/lte_custom_mipi.c"
#include "DRDI/Set109/lte_custom_mipi_ant.c"
#include "DRDI/Set109/lte_custom_rf.c"
#include "DRDI/Set109/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set109/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set109/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set109/lte_custom_mipi_dpd.h"
#include "DRDI/Set109/lte_custom_mipi_dpd.c"
#include "DRDI/Set109/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set109/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set109/lte_custom_mipi_ant_database.c"
#include "DRDI/Set109/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set109/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
#include "DRDI/Set110/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set110/lte_custom_rf_if.h"
#endif
#include "DRDI/Set110/Toolgen/lte_custom_rf.h"
#include "DRDI/Set110/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set110/lte_custom_rf_mpr.h"
#include "DRDI/Set110/lte_custom_rf_tpc.h"
#include "DRDI/Set110/lte_custom_rf_tas.c"
#include "DRDI/Set110/lte_custom_mipi.c"
#include "DRDI/Set110/lte_custom_mipi_ant.c"
#include "DRDI/Set110/lte_custom_rf.c"
#include "DRDI/Set110/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set110/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set110/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set110/lte_custom_mipi_dpd.h"
#include "DRDI/Set110/lte_custom_mipi_dpd.c"
#include "DRDI/Set110/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set110/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set110/lte_custom_mipi_ant_database.c"
#include "DRDI/Set110/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set110/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
#include "DRDI/Set111/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set111/lte_custom_rf_if.h"
#endif
#include "DRDI/Set111/Toolgen/lte_custom_rf.h"
#include "DRDI/Set111/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set111/lte_custom_rf_mpr.h"
#include "DRDI/Set111/lte_custom_rf_tpc.h"
#include "DRDI/Set111/lte_custom_rf_tas.c"
#include "DRDI/Set111/lte_custom_mipi.c"
#include "DRDI/Set111/lte_custom_mipi_ant.c"
#include "DRDI/Set111/lte_custom_rf.c"
#include "DRDI/Set111/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set111/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set111/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set111/lte_custom_mipi_dpd.h"
#include "DRDI/Set111/lte_custom_mipi_dpd.c"
#include "DRDI/Set111/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set111/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set111/lte_custom_mipi_ant_database.c"
#include "DRDI/Set111/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set111/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
#include "DRDI/Set112/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set112/lte_custom_rf_if.h"
#endif
#include "DRDI/Set112/Toolgen/lte_custom_rf.h"
#include "DRDI/Set112/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set112/lte_custom_rf_mpr.h"
#include "DRDI/Set112/lte_custom_rf_tpc.h"
#include "DRDI/Set112/lte_custom_rf_tas.c"
#include "DRDI/Set112/lte_custom_mipi.c"
#include "DRDI/Set112/lte_custom_mipi_ant.c"
#include "DRDI/Set112/lte_custom_rf.c"
#include "DRDI/Set112/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set112/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set112/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set112/lte_custom_mipi_dpd.h"
#include "DRDI/Set112/lte_custom_mipi_dpd.c"
#include "DRDI/Set112/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set112/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set112/lte_custom_mipi_ant_database.c"
#include "DRDI/Set112/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set112/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
#include "DRDI/Set113/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set113/lte_custom_rf_if.h"
#endif
#include "DRDI/Set113/Toolgen/lte_custom_rf.h"
#include "DRDI/Set113/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set113/lte_custom_rf_mpr.h"
#include "DRDI/Set113/lte_custom_rf_tpc.h"
#include "DRDI/Set113/lte_custom_rf_tas.c"
#include "DRDI/Set113/lte_custom_mipi.c"
#include "DRDI/Set113/lte_custom_mipi_ant.c"
#include "DRDI/Set113/lte_custom_rf.c"
#include "DRDI/Set113/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set113/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set113/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set113/lte_custom_mipi_dpd.h"
#include "DRDI/Set113/lte_custom_mipi_dpd.c"
#include "DRDI/Set113/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set113/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set113/lte_custom_mipi_ant_database.c"
#include "DRDI/Set113/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set113/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
#include "DRDI/Set114/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set114/lte_custom_rf_if.h"
#endif
#include "DRDI/Set114/Toolgen/lte_custom_rf.h"
#include "DRDI/Set114/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set114/lte_custom_rf_mpr.h"
#include "DRDI/Set114/lte_custom_rf_tpc.h"
#include "DRDI/Set114/lte_custom_rf_tas.c"
#include "DRDI/Set114/lte_custom_mipi.c"
#include "DRDI/Set114/lte_custom_mipi_ant.c"
#include "DRDI/Set114/lte_custom_rf.c"
#include "DRDI/Set114/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set114/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set114/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set114/lte_custom_mipi_dpd.h"
#include "DRDI/Set114/lte_custom_mipi_dpd.c"
#include "DRDI/Set114/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set114/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set114/lte_custom_mipi_ant_database.c"
#include "DRDI/Set114/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set114/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
#include "DRDI/Set115/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set115/lte_custom_rf_if.h"
#endif
#include "DRDI/Set115/Toolgen/lte_custom_rf.h"
#include "DRDI/Set115/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set115/lte_custom_rf_mpr.h"
#include "DRDI/Set115/lte_custom_rf_tpc.h"
#include "DRDI/Set115/lte_custom_rf_tas.c"
#include "DRDI/Set115/lte_custom_mipi.c"
#include "DRDI/Set115/lte_custom_mipi_ant.c"
#include "DRDI/Set115/lte_custom_rf.c"
#include "DRDI/Set115/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set115/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set115/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set115/lte_custom_mipi_dpd.h"
#include "DRDI/Set115/lte_custom_mipi_dpd.c"
#include "DRDI/Set115/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set115/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set115/lte_custom_mipi_ant_database.c"
#include "DRDI/Set115/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set115/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
#include "DRDI/Set116/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set116/lte_custom_rf_if.h"
#endif
#include "DRDI/Set116/Toolgen/lte_custom_rf.h"
#include "DRDI/Set116/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set116/lte_custom_rf_mpr.h"
#include "DRDI/Set116/lte_custom_rf_tpc.h"
#include "DRDI/Set116/lte_custom_rf_tas.c"
#include "DRDI/Set116/lte_custom_mipi.c"
#include "DRDI/Set116/lte_custom_mipi_ant.c"
#include "DRDI/Set116/lte_custom_rf.c"
#include "DRDI/Set116/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set116/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set116/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set116/lte_custom_mipi_dpd.h"
#include "DRDI/Set116/lte_custom_mipi_dpd.c"
#include "DRDI/Set116/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set116/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set116/lte_custom_mipi_ant_database.c"
#include "DRDI/Set116/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set116/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
#include "DRDI/Set117/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set117/lte_custom_rf_if.h"
#endif
#include "DRDI/Set117/Toolgen/lte_custom_rf.h"
#include "DRDI/Set117/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set117/lte_custom_rf_mpr.h"
#include "DRDI/Set117/lte_custom_rf_tpc.h"
#include "DRDI/Set117/lte_custom_rf_tas.c"
#include "DRDI/Set117/lte_custom_mipi.c"
#include "DRDI/Set117/lte_custom_mipi_ant.c"
#include "DRDI/Set117/lte_custom_rf.c"
#include "DRDI/Set117/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set117/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set117/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set117/lte_custom_mipi_dpd.h"
#include "DRDI/Set117/lte_custom_mipi_dpd.c"
#include "DRDI/Set117/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set117/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set117/lte_custom_mipi_ant_database.c"
#include "DRDI/Set117/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set117/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
#include "DRDI/Set118/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set118/lte_custom_rf_if.h"
#endif
#include "DRDI/Set118/Toolgen/lte_custom_rf.h"
#include "DRDI/Set118/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set118/lte_custom_rf_mpr.h"
#include "DRDI/Set118/lte_custom_rf_tpc.h"
#include "DRDI/Set118/lte_custom_rf_tas.c"
#include "DRDI/Set118/lte_custom_mipi.c"
#include "DRDI/Set118/lte_custom_mipi_ant.c"
#include "DRDI/Set118/lte_custom_rf.c"
#include "DRDI/Set118/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set118/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set118/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set118/lte_custom_mipi_dpd.h"
#include "DRDI/Set118/lte_custom_mipi_dpd.c"
#include "DRDI/Set118/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set118/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set118/lte_custom_mipi_ant_database.c"
#include "DRDI/Set118/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set118/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
#include "DRDI/Set119/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set119/lte_custom_rf_if.h"
#endif
#include "DRDI/Set119/Toolgen/lte_custom_rf.h"
#include "DRDI/Set119/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set119/lte_custom_rf_mpr.h"
#include "DRDI/Set119/lte_custom_rf_tpc.h"
#include "DRDI/Set119/lte_custom_rf_tas.c"
#include "DRDI/Set119/lte_custom_mipi.c"
#include "DRDI/Set119/lte_custom_mipi_ant.c"
#include "DRDI/Set119/lte_custom_rf.c"
#include "DRDI/Set119/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set119/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set119/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set119/lte_custom_mipi_dpd.h"
#include "DRDI/Set119/lte_custom_mipi_dpd.c"
#include "DRDI/Set119/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set119/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set119/lte_custom_mipi_ant_database.c"
#include "DRDI/Set119/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set119/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
#include "DRDI/Set120/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set120/lte_custom_rf_if.h"
#endif
#include "DRDI/Set120/Toolgen/lte_custom_rf.h"
#include "DRDI/Set120/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set120/lte_custom_rf_mpr.h"
#include "DRDI/Set120/lte_custom_rf_tpc.h"
#include "DRDI/Set120/lte_custom_rf_tas.c"
#include "DRDI/Set120/lte_custom_mipi.c"
#include "DRDI/Set120/lte_custom_mipi_ant.c"
#include "DRDI/Set120/lte_custom_rf.c"
#include "DRDI/Set120/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set120/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set120/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set120/lte_custom_mipi_dpd.h"
#include "DRDI/Set120/lte_custom_mipi_dpd.c"
#include "DRDI/Set120/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set120/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set120/lte_custom_mipi_ant_database.c"
#include "DRDI/Set120/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set120/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
#include "DRDI/Set121/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set121/lte_custom_rf_if.h"
#endif
#include "DRDI/Set121/Toolgen/lte_custom_rf.h"
#include "DRDI/Set121/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set121/lte_custom_rf_mpr.h"
#include "DRDI/Set121/lte_custom_rf_tpc.h"
#include "DRDI/Set121/lte_custom_rf_tas.c"
#include "DRDI/Set121/lte_custom_mipi.c"
#include "DRDI/Set121/lte_custom_mipi_ant.c"
#include "DRDI/Set121/lte_custom_rf.c"
#include "DRDI/Set121/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set121/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set121/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set121/lte_custom_mipi_dpd.h"
#include "DRDI/Set121/lte_custom_mipi_dpd.c"
#include "DRDI/Set121/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set121/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set121/lte_custom_mipi_ant_database.c"
#include "DRDI/Set121/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set121/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
#include "DRDI/Set122/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set122/lte_custom_rf_if.h"
#endif
#include "DRDI/Set122/Toolgen/lte_custom_rf.h"
#include "DRDI/Set122/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set122/lte_custom_rf_mpr.h"
#include "DRDI/Set122/lte_custom_rf_tpc.h"
#include "DRDI/Set122/lte_custom_rf_tas.c"
#include "DRDI/Set122/lte_custom_mipi.c"
#include "DRDI/Set122/lte_custom_mipi_ant.c"
#include "DRDI/Set122/lte_custom_rf.c"
#include "DRDI/Set122/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set122/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set122/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set122/lte_custom_mipi_dpd.h"
#include "DRDI/Set122/lte_custom_mipi_dpd.c"
#include "DRDI/Set122/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set122/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set122/lte_custom_mipi_ant_database.c"
#include "DRDI/Set122/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set122/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
#include "DRDI/Set123/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set123/lte_custom_rf_if.h"
#endif
#include "DRDI/Set123/Toolgen/lte_custom_rf.h"
#include "DRDI/Set123/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set123/lte_custom_rf_mpr.h"
#include "DRDI/Set123/lte_custom_rf_tpc.h"
#include "DRDI/Set123/lte_custom_rf_tas.c"
#include "DRDI/Set123/lte_custom_mipi.c"
#include "DRDI/Set123/lte_custom_mipi_ant.c"
#include "DRDI/Set123/lte_custom_rf.c"
#include "DRDI/Set123/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set123/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set123/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set123/lte_custom_mipi_dpd.h"
#include "DRDI/Set123/lte_custom_mipi_dpd.c"
#include "DRDI/Set123/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set123/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set123/lte_custom_mipi_ant_database.c"
#include "DRDI/Set123/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set123/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
#include "DRDI/Set124/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set124/lte_custom_rf_if.h"
#endif
#include "DRDI/Set124/Toolgen/lte_custom_rf.h"
#include "DRDI/Set124/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set124/lte_custom_rf_mpr.h"
#include "DRDI/Set124/lte_custom_rf_tpc.h"
#include "DRDI/Set124/lte_custom_rf_tas.c"
#include "DRDI/Set124/lte_custom_mipi.c"
#include "DRDI/Set124/lte_custom_mipi_ant.c"
#include "DRDI/Set124/lte_custom_rf.c"
#include "DRDI/Set124/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set124/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set124/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set124/lte_custom_mipi_dpd.h"
#include "DRDI/Set124/lte_custom_mipi_dpd.c"
#include "DRDI/Set124/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set124/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set124/lte_custom_mipi_ant_database.c"
#include "DRDI/Set124/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set124/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
#include "DRDI/Set125/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set125/lte_custom_rf_if.h"
#endif
#include "DRDI/Set125/Toolgen/lte_custom_rf.h"
#include "DRDI/Set125/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set125/lte_custom_rf_mpr.h"
#include "DRDI/Set125/lte_custom_rf_tpc.h"
#include "DRDI/Set125/lte_custom_rf_tas.c"
#include "DRDI/Set125/lte_custom_mipi.c"
#include "DRDI/Set125/lte_custom_mipi_ant.c"
#include "DRDI/Set125/lte_custom_rf.c"
#include "DRDI/Set125/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set125/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set125/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set125/lte_custom_mipi_dpd.h"
#include "DRDI/Set125/lte_custom_mipi_dpd.c"
#include "DRDI/Set125/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set125/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set125/lte_custom_mipi_ant_database.c"
#include "DRDI/Set125/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set125/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
#include "DRDI/Set126/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set126/lte_custom_rf_if.h"
#endif
#include "DRDI/Set126/Toolgen/lte_custom_rf.h"
#include "DRDI/Set126/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set126/lte_custom_rf_mpr.h"
#include "DRDI/Set126/lte_custom_rf_tpc.h"
#include "DRDI/Set126/lte_custom_rf_tas.c"
#include "DRDI/Set126/lte_custom_mipi.c"
#include "DRDI/Set126/lte_custom_mipi_ant.c"
#include "DRDI/Set126/lte_custom_rf.c"
#include "DRDI/Set126/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set126/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set126/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set126/lte_custom_mipi_dpd.h"
#include "DRDI/Set126/lte_custom_mipi_dpd.c"
#include "DRDI/Set126/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set126/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set126/lte_custom_mipi_ant_database.c"
#include "DRDI/Set126/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set126/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
#include "DRDI/Set127/lte_custom_mipi.h"
#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
#include "DRDI/Set127/lte_custom_rf_if.h"
#endif
#include "DRDI/Set127/Toolgen/lte_custom_rf.h"
#include "DRDI/Set127/Toolgen/lte_custom_rf_ca.h"
#include "DRDI/Set127/lte_custom_rf_mpr.h"
#include "DRDI/Set127/lte_custom_rf_tpc.h"
#include "DRDI/Set127/lte_custom_rf_tas.c"
#include "DRDI/Set127/lte_custom_mipi.c"
#include "DRDI/Set127/lte_custom_mipi_ant.c"
#include "DRDI/Set127/lte_custom_rf.c"
#include "DRDI/Set127/Toolgen/lte_custom_rf_ca.c"
#include "DRDI/Set127/Toolgen/lte_custom_rf_ant.c"
#include "DRDI/Set127/TST_Config/lte_custom_rf_tas_tst_config.c"
#include "DRDI/Set127/lte_custom_mipi_dpd.h"
#include "DRDI/Set127/lte_custom_mipi_dpd.c"
#include "DRDI/Set127/Toolgen/lte_custom_rf_dpd.h"
#include "DRDI/Set127/Toolgen/lte_custom_rf_dpd.c"
      #if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#include "DRDI/Set127/lte_custom_mipi_ant_database.c"
#include "DRDI/Set127/Toolgen/lte_custom_rf_ant_reorg.c"
#include "DRDI/Set127/Toolgen/lte_custom_rf_dat.c"
      #endif
   #endif
#endif


/***************************************************************************
 * Global Data
 ***************************************************************************/

/***************************************************************************
 * Data definition for custom to input data
 ***************************************************************************/
//******************************************
// LTE band indicator custom data definition
//******************************************
const LTE_Band el1CustomLteBand[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_MAX_RF_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_BAND(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_BAND(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_BAND(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_BAND(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_BAND(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_BAND(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_BAND(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_BAND(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_BAND(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_BAND(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_BAND(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_BAND(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_BAND(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_BAND(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_BAND(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_BAND(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_BAND(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_BAND(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_BAND(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_BAND(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_BAND(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_BAND(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_BAND(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_BAND(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_BAND(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_BAND(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_BAND(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_BAND(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_BAND(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_BAND(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_BAND(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_BAND(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_BAND(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_BAND(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_BAND(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_BAND(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_BAND(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_BAND(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_BAND(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_BAND(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_BAND(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_BAND(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_BAND(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_BAND(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_BAND(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_BAND(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_BAND(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_BAND(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_BAND(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_BAND(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_BAND(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_BAND(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_BAND(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_BAND(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_BAND(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_BAND(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_BAND(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_BAND(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_BAND(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_BAND(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_BAND(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_BAND(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_BAND(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_BAND(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_BAND(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_BAND(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_BAND(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_BAND(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_BAND(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_BAND(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_BAND(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_BAND(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_BAND(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_BAND(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_BAND(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_BAND(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_BAND(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_BAND(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_BAND(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_BAND(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_BAND(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_BAND(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_BAND(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_BAND(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_BAND(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_BAND(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_BAND(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_BAND(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_BAND(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_BAND(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_BAND(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_BAND(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_BAND(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_BAND(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_BAND(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_BAND(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_BAND(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_BAND(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_BAND(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_BAND(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_BAND(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_BAND(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_BAND(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_BAND(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_BAND(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_BAND(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_BAND(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_BAND(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_BAND(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_BAND(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_BAND(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_BAND(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_BAND(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_BAND(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_BAND(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_BAND(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_BAND(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_BAND(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_BAND(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_BAND(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_BAND(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_BAND(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_BAND(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_BAND(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_BAND(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_BAND(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_BAND(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_BAND(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_BAND(SetDefault),
#endif
};




//******************************************
// LTE band support sw custom data definition
//******************************************
const kal_uint8 el1CustomBandIndSw[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_MAX_RF_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_BAND_SW(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_BAND_SW(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_BAND_SW(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_BAND_SW(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_BAND_SW(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_BAND_SW(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_BAND_SW(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_BAND_SW(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_BAND_SW(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_BAND_SW(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_BAND_SW(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_BAND_SW(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_BAND_SW(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_BAND_SW(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_BAND_SW(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_BAND_SW(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_BAND_SW(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_BAND_SW(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_BAND_SW(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_BAND_SW(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_BAND_SW(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_BAND_SW(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_BAND_SW(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_BAND_SW(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_BAND_SW(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_BAND_SW(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_BAND_SW(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_BAND_SW(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_BAND_SW(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_BAND_SW(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_BAND_SW(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_BAND_SW(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_BAND_SW(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_BAND_SW(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_BAND_SW(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_BAND_SW(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_BAND_SW(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_BAND_SW(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_BAND_SW(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_BAND_SW(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_BAND_SW(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_BAND_SW(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_BAND_SW(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_BAND_SW(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_BAND_SW(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_BAND_SW(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_BAND_SW(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_BAND_SW(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_BAND_SW(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_BAND_SW(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_BAND_SW(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_BAND_SW(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_BAND_SW(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_BAND_SW(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_BAND_SW(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_BAND_SW(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_BAND_SW(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_BAND_SW(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_BAND_SW(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_BAND_SW(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_BAND_SW(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_BAND_SW(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_BAND_SW(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_BAND_SW(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_BAND_SW(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_BAND_SW(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_BAND_SW(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_BAND_SW(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_BAND_SW(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_BAND_SW(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_BAND_SW(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_BAND_SW(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_BAND_SW(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_BAND_SW(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_BAND_SW(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_BAND_SW(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_BAND_SW(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_BAND_SW(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_BAND_SW(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_BAND_SW(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_BAND_SW(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_BAND_SW(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_BAND_SW(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_BAND_SW(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_BAND_SW(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_BAND_SW(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_BAND_SW(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_BAND_SW(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_BAND_SW(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_BAND_SW(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_BAND_SW(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_BAND_SW(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_BAND_SW(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_BAND_SW(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_BAND_SW(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_BAND_SW(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_BAND_SW(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_BAND_SW(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_BAND_SW(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_BAND_SW(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_BAND_SW(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_BAND_SW(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_BAND_SW(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_BAND_SW(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_BAND_SW(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_BAND_SW(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_BAND_SW(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_BAND_SW(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_BAND_SW(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_BAND_SW(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_BAND_SW(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_BAND_SW(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_BAND_SW(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_BAND_SW(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_BAND_SW(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_BAND_SW(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_BAND_SW(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_BAND_SW(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_BAND_SW(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_BAND_SW(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_BAND_SW(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_BAND_SW(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_BAND_SW(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_BAND_SW(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_BAND_SW(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_BAND_SW(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_BAND_SW(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_BAND_SW(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_BAND_SW(SetDefault),
#endif
};

//******************************************
// LTE band support CCA custom data definition
//******************************************
const kal_uint8 el1CustomBandIndCca[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_MAX_RF_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_BAND_CCA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_BAND_CCA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_BAND_CCA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_BAND_CCA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_BAND_CCA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_BAND_CCA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_BAND_CCA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_BAND_CCA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_BAND_CCA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_BAND_CCA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_BAND_CCA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_BAND_CCA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_BAND_CCA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_BAND_CCA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_BAND_CCA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_BAND_CCA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_BAND_CCA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_BAND_CCA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_BAND_CCA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_BAND_CCA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_BAND_CCA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_BAND_CCA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_BAND_CCA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_BAND_CCA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_BAND_CCA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_BAND_CCA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_BAND_CCA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_BAND_CCA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_BAND_CCA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_BAND_CCA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_BAND_CCA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_BAND_CCA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_BAND_CCA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_BAND_CCA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_BAND_CCA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_BAND_CCA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_BAND_CCA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_BAND_CCA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_BAND_CCA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_BAND_CCA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_BAND_CCA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_BAND_CCA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_BAND_CCA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_BAND_CCA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_BAND_CCA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_BAND_CCA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_BAND_CCA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_BAND_CCA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_BAND_CCA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_BAND_CCA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_BAND_CCA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_BAND_CCA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_BAND_CCA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_BAND_CCA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_BAND_CCA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_BAND_CCA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_BAND_CCA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_BAND_CCA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_BAND_CCA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_BAND_CCA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_BAND_CCA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_BAND_CCA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_BAND_CCA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_BAND_CCA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_BAND_CCA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_BAND_CCA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_BAND_CCA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_BAND_CCA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_BAND_CCA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_BAND_CCA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_BAND_CCA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_BAND_CCA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_BAND_CCA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_BAND_CCA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_BAND_CCA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_BAND_CCA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_BAND_CCA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_BAND_CCA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_BAND_CCA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_BAND_CCA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_BAND_CCA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_BAND_CCA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_BAND_CCA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_BAND_CCA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_BAND_CCA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_BAND_CCA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_BAND_CCA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_BAND_CCA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_BAND_CCA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_BAND_CCA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_BAND_CCA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_BAND_CCA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_BAND_CCA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_BAND_CCA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_BAND_CCA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_BAND_CCA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_BAND_CCA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_BAND_CCA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_BAND_CCA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_BAND_CCA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_BAND_CCA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_BAND_CCA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_BAND_CCA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_BAND_CCA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_BAND_CCA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_BAND_CCA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_BAND_CCA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_BAND_CCA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_BAND_CCA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_BAND_CCA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_BAND_CCA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_BAND_CCA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_BAND_CCA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_BAND_CCA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_BAND_CCA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_BAND_CCA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_BAND_CCA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_BAND_CCA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_BAND_CCA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_BAND_CCA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_BAND_CCA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_BAND_CCA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_BAND_CCA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_BAND_CCA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_BAND_CCA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_BAND_CCA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_BAND_CCA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_BAND_CCA(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_BAND_CCA(SetDefault),
#endif
};

//******************************************
// LTE band filter support CCA custom data definition
//******************************************
const kal_uint8 el1CustomBandIndFilterCca[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_BAND_FILTER_CCA(SetDefault),
#endif
};


//******************************************************
// MPR   Table: refer to 36.101 6.2.3 6.2.5
// A-MPR Table: refer to 36.101 6.2.4 6.2.5
// Description: record MPR and A-MPR value for each band
//******************************************************
const LTE_MPRAdjust_T el1CustomLteMprAdjustData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_MAX_RF_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_MPR_ADJUST_DATA(SetDefault),
#endif
};

//******************************************************
// MPR   Table: refer to 36.101 6.2.3 6.2.5
// A-MPR Table: refer to 36.101 6.2.4 6.2.5
// Description: record MPR and A-MPR value for each band
//******************************************************
const LTE_MPRAdjust_CA_T el1CustomLteMprCaAdjustData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_MAX_RF_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_MPR_CA_ADJUST_DATA(SetDefault),
#endif
};

//******************************************************
// MPR   Table: refer to 36.101 6.2.3 6.2.5
// for HPUE CCA
// Description: record MPR and A-MPR value for each band
//******************************************************
const LTE_MPRAdjust_CA_T el1CustomLteMprHPUECaAdjustData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_MAX_RF_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_MPR_HPUE_CA_ADJUST_DATA(SetDefault),
#endif
};

//******************************************************
// TX Power Offset for HPUE Bitmap
//******************************************************
const LTE_RF_HPUE_TX_POWER_OFFSET_T el1CustomLteHpueTposData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   LTE_HPUE_TPOS_PARAMETER_TABLE(Set127),
   #endif
#else
   LTE_HPUE_TPOS_PARAMETER_TABLE(SetDefault),
#endif
};

//******************************************************
// VzW AMPR Support Bitmap
//******************************************************
const kal_uint16 el1CustomLteAmprVzwSupportBitmap[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   AMPR_VZW_SUPPORT_Set0,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   AMPR_VZW_SUPPORT_Set1,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   AMPR_VZW_SUPPORT_Set2,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   AMPR_VZW_SUPPORT_Set3,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   AMPR_VZW_SUPPORT_Set4,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   AMPR_VZW_SUPPORT_Set5,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   AMPR_VZW_SUPPORT_Set6,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   AMPR_VZW_SUPPORT_Set7,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   AMPR_VZW_SUPPORT_Set8,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   AMPR_VZW_SUPPORT_Set9,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   AMPR_VZW_SUPPORT_Set10,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   AMPR_VZW_SUPPORT_Set11,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   AMPR_VZW_SUPPORT_Set12,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   AMPR_VZW_SUPPORT_Set13,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   AMPR_VZW_SUPPORT_Set14,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   AMPR_VZW_SUPPORT_Set15,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   AMPR_VZW_SUPPORT_Set16,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   AMPR_VZW_SUPPORT_Set17,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   AMPR_VZW_SUPPORT_Set18,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   AMPR_VZW_SUPPORT_Set19,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   AMPR_VZW_SUPPORT_Set20,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   AMPR_VZW_SUPPORT_Set21,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   AMPR_VZW_SUPPORT_Set22,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   AMPR_VZW_SUPPORT_Set23,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   AMPR_VZW_SUPPORT_Set24,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   AMPR_VZW_SUPPORT_Set25,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   AMPR_VZW_SUPPORT_Set26,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   AMPR_VZW_SUPPORT_Set27,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   AMPR_VZW_SUPPORT_Set28,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   AMPR_VZW_SUPPORT_Set29,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   AMPR_VZW_SUPPORT_Set30,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   AMPR_VZW_SUPPORT_Set31,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   AMPR_VZW_SUPPORT_Set32,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   AMPR_VZW_SUPPORT_Set33,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   AMPR_VZW_SUPPORT_Set34,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   AMPR_VZW_SUPPORT_Set35,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   AMPR_VZW_SUPPORT_Set36,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   AMPR_VZW_SUPPORT_Set37,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   AMPR_VZW_SUPPORT_Set38,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   AMPR_VZW_SUPPORT_Set39,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   AMPR_VZW_SUPPORT_Set40,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   AMPR_VZW_SUPPORT_Set41,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   AMPR_VZW_SUPPORT_Set42,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   AMPR_VZW_SUPPORT_Set43,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   AMPR_VZW_SUPPORT_Set44,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   AMPR_VZW_SUPPORT_Set45,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   AMPR_VZW_SUPPORT_Set46,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   AMPR_VZW_SUPPORT_Set47,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   AMPR_VZW_SUPPORT_Set48,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   AMPR_VZW_SUPPORT_Set49,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   AMPR_VZW_SUPPORT_Set50,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   AMPR_VZW_SUPPORT_Set51,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   AMPR_VZW_SUPPORT_Set52,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   AMPR_VZW_SUPPORT_Set53,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   AMPR_VZW_SUPPORT_Set54,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   AMPR_VZW_SUPPORT_Set55,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   AMPR_VZW_SUPPORT_Set56,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   AMPR_VZW_SUPPORT_Set57,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   AMPR_VZW_SUPPORT_Set58,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   AMPR_VZW_SUPPORT_Set59,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   AMPR_VZW_SUPPORT_Set60,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   AMPR_VZW_SUPPORT_Set61,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   AMPR_VZW_SUPPORT_Set62,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   AMPR_VZW_SUPPORT_Set63,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   AMPR_VZW_SUPPORT_Set64,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   AMPR_VZW_SUPPORT_Set65,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   AMPR_VZW_SUPPORT_Set66,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   AMPR_VZW_SUPPORT_Set67,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   AMPR_VZW_SUPPORT_Set68,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   AMPR_VZW_SUPPORT_Set69,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   AMPR_VZW_SUPPORT_Set70,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   AMPR_VZW_SUPPORT_Set71,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   AMPR_VZW_SUPPORT_Set72,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   AMPR_VZW_SUPPORT_Set73,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   AMPR_VZW_SUPPORT_Set74,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   AMPR_VZW_SUPPORT_Set75,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   AMPR_VZW_SUPPORT_Set76,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   AMPR_VZW_SUPPORT_Set77,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   AMPR_VZW_SUPPORT_Set78,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   AMPR_VZW_SUPPORT_Set79,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   AMPR_VZW_SUPPORT_Set80,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   AMPR_VZW_SUPPORT_Set81,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   AMPR_VZW_SUPPORT_Set82,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   AMPR_VZW_SUPPORT_Set83,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   AMPR_VZW_SUPPORT_Set84,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   AMPR_VZW_SUPPORT_Set85,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   AMPR_VZW_SUPPORT_Set86,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   AMPR_VZW_SUPPORT_Set87,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   AMPR_VZW_SUPPORT_Set88,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   AMPR_VZW_SUPPORT_Set89,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   AMPR_VZW_SUPPORT_Set90,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   AMPR_VZW_SUPPORT_Set91,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   AMPR_VZW_SUPPORT_Set92,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   AMPR_VZW_SUPPORT_Set93,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   AMPR_VZW_SUPPORT_Set94,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   AMPR_VZW_SUPPORT_Set95,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   AMPR_VZW_SUPPORT_Set96,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   AMPR_VZW_SUPPORT_Set97,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   AMPR_VZW_SUPPORT_Set98,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   AMPR_VZW_SUPPORT_Set99,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   AMPR_VZW_SUPPORT_Set100,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   AMPR_VZW_SUPPORT_Set101,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   AMPR_VZW_SUPPORT_Set102,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   AMPR_VZW_SUPPORT_Set103,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   AMPR_VZW_SUPPORT_Set104,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   AMPR_VZW_SUPPORT_Set105,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   AMPR_VZW_SUPPORT_Set106,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   AMPR_VZW_SUPPORT_Set107,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   AMPR_VZW_SUPPORT_Set108,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   AMPR_VZW_SUPPORT_Set109,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   AMPR_VZW_SUPPORT_Set110,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   AMPR_VZW_SUPPORT_Set111,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   AMPR_VZW_SUPPORT_Set112,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   AMPR_VZW_SUPPORT_Set113,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   AMPR_VZW_SUPPORT_Set114,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   AMPR_VZW_SUPPORT_Set115,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   AMPR_VZW_SUPPORT_Set116,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   AMPR_VZW_SUPPORT_Set117,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   AMPR_VZW_SUPPORT_Set118,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   AMPR_VZW_SUPPORT_Set119,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   AMPR_VZW_SUPPORT_Set120,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   AMPR_VZW_SUPPORT_Set121,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   AMPR_VZW_SUPPORT_Set122,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   AMPR_VZW_SUPPORT_Set123,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   AMPR_VZW_SUPPORT_Set124,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   AMPR_VZW_SUPPORT_Set125,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   AMPR_VZW_SUPPORT_Set126,
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   AMPR_VZW_SUPPORT_Set127,
   #endif
#else
   AMPR_VZW_SUPPORT_SetDefault,
#endif
};

//********************************************************************
// LTE front-end custom data definition, including BPI and RTX IO port
//********************************************************************
const LTE_FE_RX_ROUTE_DATABASE_T *el1CustomLteFeRxRouteData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_FE_RX_ROUTE_DATA(Set127),
   #endif
#else
   EL1_CUSTOM_FE_RX_ROUTE_DATA(SetDefault), //temp bypass for build warning
#endif
};

const LTE_FE_TX_ROUTE_DATABASE_T *el1CustomLteFeTxRouteData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_FE_TX_ROUTE_DATA(Set127),
   #endif
#else
   EL1_CUSTOM_FE_TX_ROUTE_DATA(SetDefault),//temp bypass for build warning
#endif
};
const LTE_FE_CUSTOM_CA_LINKAGE_DATABASE_T *el1CustomLteFeCaLinkageDb[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_FE_CA_LINKAGE_DB(Set127),
   #endif
#else
   EL1_CUSTOM_FE_CA_LINKAGE_DB(SetDefault),
#endif
};
const LTE_FE_CUSTOM_CA_BAND_COMB_DATABASE_T *el1CustomLteFeCaCombDb[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_FE_CA_COMB_DB(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_FE_CA_COMB_DB(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_FE_CA_COMB_DB(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_FE_CA_COMB_DB(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_FE_CA_COMB_DB(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_FE_CA_COMB_DB(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_FE_CA_COMB_DB(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_FE_CA_COMB_DB(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_FE_CA_COMB_DB(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_FE_CA_COMB_DB(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_FE_CA_COMB_DB(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_FE_CA_COMB_DB(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_FE_CA_COMB_DB(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_FE_CA_COMB_DB(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_FE_CA_COMB_DB(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_FE_CA_COMB_DB(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_FE_CA_COMB_DB(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_FE_CA_COMB_DB(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_FE_CA_COMB_DB(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_FE_CA_COMB_DB(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_FE_CA_COMB_DB(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_FE_CA_COMB_DB(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_FE_CA_COMB_DB(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_FE_CA_COMB_DB(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_FE_CA_COMB_DB(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_FE_CA_COMB_DB(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_FE_CA_COMB_DB(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_FE_CA_COMB_DB(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_FE_CA_COMB_DB(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_FE_CA_COMB_DB(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_FE_CA_COMB_DB(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_FE_CA_COMB_DB(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_FE_CA_COMB_DB(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_FE_CA_COMB_DB(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_FE_CA_COMB_DB(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_FE_CA_COMB_DB(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_FE_CA_COMB_DB(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_FE_CA_COMB_DB(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_FE_CA_COMB_DB(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_FE_CA_COMB_DB(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_FE_CA_COMB_DB(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_FE_CA_COMB_DB(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_FE_CA_COMB_DB(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_FE_CA_COMB_DB(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_FE_CA_COMB_DB(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_FE_CA_COMB_DB(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_FE_CA_COMB_DB(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_FE_CA_COMB_DB(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_FE_CA_COMB_DB(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_FE_CA_COMB_DB(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_FE_CA_COMB_DB(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_FE_CA_COMB_DB(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_FE_CA_COMB_DB(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_FE_CA_COMB_DB(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_FE_CA_COMB_DB(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_FE_CA_COMB_DB(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_FE_CA_COMB_DB(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_FE_CA_COMB_DB(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_FE_CA_COMB_DB(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_FE_CA_COMB_DB(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_FE_CA_COMB_DB(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_FE_CA_COMB_DB(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_FE_CA_COMB_DB(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_FE_CA_COMB_DB(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_FE_CA_COMB_DB(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_FE_CA_COMB_DB(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_FE_CA_COMB_DB(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_FE_CA_COMB_DB(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_FE_CA_COMB_DB(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_FE_CA_COMB_DB(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_FE_CA_COMB_DB(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_FE_CA_COMB_DB(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_FE_CA_COMB_DB(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_FE_CA_COMB_DB(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_FE_CA_COMB_DB(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_FE_CA_COMB_DB(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_FE_CA_COMB_DB(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_FE_CA_COMB_DB(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_FE_CA_COMB_DB(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_FE_CA_COMB_DB(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_FE_CA_COMB_DB(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_FE_CA_COMB_DB(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_FE_CA_COMB_DB(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_FE_CA_COMB_DB(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_FE_CA_COMB_DB(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_FE_CA_COMB_DB(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_FE_CA_COMB_DB(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_FE_CA_COMB_DB(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_FE_CA_COMB_DB(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_FE_CA_COMB_DB(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_FE_CA_COMB_DB(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_FE_CA_COMB_DB(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_FE_CA_COMB_DB(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_FE_CA_COMB_DB(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_FE_CA_COMB_DB(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_FE_CA_COMB_DB(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_FE_CA_COMB_DB(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_FE_CA_COMB_DB(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_FE_CA_COMB_DB(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_FE_CA_COMB_DB(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_FE_CA_COMB_DB(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_FE_CA_COMB_DB(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_FE_CA_COMB_DB(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_FE_CA_COMB_DB(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_FE_CA_COMB_DB(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_FE_CA_COMB_DB(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_FE_CA_COMB_DB(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_FE_CA_COMB_DB(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_FE_CA_COMB_DB(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_FE_CA_COMB_DB(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_FE_CA_COMB_DB(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_FE_CA_COMB_DB(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_FE_CA_COMB_DB(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_FE_CA_COMB_DB(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_FE_CA_COMB_DB(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_FE_CA_COMB_DB(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_FE_CA_COMB_DB(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_FE_CA_COMB_DB(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_FE_CA_COMB_DB(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_FE_CA_COMB_DB(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_FE_CA_COMB_DB(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_FE_CA_COMB_DB(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_FE_CA_COMB_DB(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_FE_CA_COMB_DB(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_FE_CA_COMB_DB(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_FE_CA_COMB_DB(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_FE_CA_COMB_DB(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_FE_CA_COMB_DB(Set127),
   #endif
#else
   EL1_CUSTOM_FE_CA_COMB_DB(SetDefault),
#endif
};
const LTE_FE_CUSTOM_CCA_BAND_COMB_DATABASE_T *el1CustomLteFeCcaCombDb[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_FE_CCA_COMB_DB(Set127),
   #endif
#else
   EL1_CUSTOM_FE_CCA_COMB_DB(SetDefault),
#endif
};
#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
#else
const LTE_ANT_ROUTE_DATABASE_T *el1CustomLteAntRouteData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_ANT_ROUTE_DATA(Set127),
   #endif
#else
   EL1_CUSTOM_ANT_ROUTE_DATA(SetDefault),
#endif
};
#endif

const LTE_ANT_CUSTOM_CA_LINKAGE_DATABASE_T *el1CustomLteAntCaLinkageDatabase[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_ANT_CA_LINKAGE(Set127),
   #endif
#else
   EL1_CUSTOM_ANT_CA_LINKAGE(SetDefault),
#endif
};

//********************************************************************
// LTE PARTIAL BAND data definition
//********************************************************************
const ERF_PARTIAL_BAND_IND_T  el1CustomLtePartialBandData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_ERF_PARTIAL_BAND]  =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_PARTIAL_BAND_DATA(SetDefault),
#endif
};


//********************************************************************
// LTE VPA source data definition
//********************************************************************
const LTE_VPA_SOURCE_DATABASE_T el1CustomLteVpaSourceData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_VPA_SOURCE_DATA(Set127),
   #endif
#else
   EL1_CUSTOM_VPA_SOURCE_DATA(SetDefault),
#endif
};

//******************************************************
// Multi Cluster VCC BF Table:
// Description: record VCC backoff value while Mulit-Cluster is configured
//******************************************************
const ERF_TX_MULTI_CLUSTER_POW_BF_PARAM_T el1CustomLteTxMcPowerBfData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_MAX_RF_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_TX_MULTICLUSTER_POW_BF_DATA(SetDefault),
#endif
};

//***************************
// RF BPI event timing offset
//***************************
const LTE_BPI_EVT_TIME_OFST_TABLE_T el1CustomLteRfBpiEventTimeOffset[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(Set127),
   #endif
#else
   EL1_CUSTOM_RF_BPI_EVENT_TIME_OFFSET(SetDefault),
#endif
};

//***********************
// LTE split band feature
//***********************
const ERF_SPLIT_BAND_IND_T el1CustomLteRfSplitBand[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_ERF_SPLIT_BAND] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_SPLIT_BAND(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_SPLIT_BAND(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_SPLIT_BAND(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_SPLIT_BAND(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_SPLIT_BAND(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_SPLIT_BAND(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_SPLIT_BAND(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_SPLIT_BAND(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_SPLIT_BAND(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_SPLIT_BAND(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_SPLIT_BAND(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_SPLIT_BAND(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_SPLIT_BAND(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_SPLIT_BAND(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_SPLIT_BAND(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_SPLIT_BAND(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_SPLIT_BAND(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_SPLIT_BAND(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_SPLIT_BAND(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_SPLIT_BAND(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_SPLIT_BAND(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_SPLIT_BAND(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_SPLIT_BAND(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_SPLIT_BAND(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_SPLIT_BAND(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_SPLIT_BAND(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_SPLIT_BAND(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_SPLIT_BAND(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_SPLIT_BAND(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_SPLIT_BAND(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_SPLIT_BAND(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_SPLIT_BAND(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_SPLIT_BAND(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_SPLIT_BAND(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_SPLIT_BAND(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_SPLIT_BAND(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_SPLIT_BAND(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_SPLIT_BAND(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_SPLIT_BAND(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_SPLIT_BAND(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_SPLIT_BAND(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_SPLIT_BAND(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_SPLIT_BAND(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_SPLIT_BAND(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_SPLIT_BAND(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_SPLIT_BAND(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_SPLIT_BAND(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_SPLIT_BAND(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_SPLIT_BAND(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_SPLIT_BAND(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_SPLIT_BAND(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_SPLIT_BAND(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_SPLIT_BAND(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_SPLIT_BAND(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_SPLIT_BAND(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_SPLIT_BAND(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_SPLIT_BAND(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_SPLIT_BAND(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_SPLIT_BAND(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_SPLIT_BAND(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_SPLIT_BAND(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_SPLIT_BAND(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_SPLIT_BAND(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_SPLIT_BAND(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_SPLIT_BAND(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_SPLIT_BAND(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_SPLIT_BAND(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_SPLIT_BAND(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_SPLIT_BAND(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_SPLIT_BAND(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_SPLIT_BAND(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_SPLIT_BAND(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_SPLIT_BAND(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_SPLIT_BAND(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_SPLIT_BAND(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_SPLIT_BAND(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_SPLIT_BAND(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_SPLIT_BAND(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_SPLIT_BAND(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_SPLIT_BAND(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_SPLIT_BAND(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_SPLIT_BAND(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_SPLIT_BAND(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_SPLIT_BAND(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_SPLIT_BAND(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_SPLIT_BAND(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_SPLIT_BAND(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_SPLIT_BAND(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_SPLIT_BAND(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_SPLIT_BAND(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_SPLIT_BAND(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_SPLIT_BAND(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_SPLIT_BAND(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_SPLIT_BAND(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_SPLIT_BAND(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_SPLIT_BAND(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_SPLIT_BAND(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_SPLIT_BAND(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_SPLIT_BAND(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_SPLIT_BAND(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_SPLIT_BAND(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_SPLIT_BAND(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_SPLIT_BAND(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_SPLIT_BAND(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_SPLIT_BAND(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_SPLIT_BAND(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_SPLIT_BAND(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_SPLIT_BAND(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_SPLIT_BAND(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_SPLIT_BAND(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_SPLIT_BAND(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_SPLIT_BAND(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_SPLIT_BAND(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_SPLIT_BAND(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_SPLIT_BAND(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_SPLIT_BAND(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_SPLIT_BAND(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_SPLIT_BAND(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_SPLIT_BAND(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_SPLIT_BAND(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_SPLIT_BAND(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_SPLIT_BAND(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_SPLIT_BAND(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_SPLIT_BAND(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_SPLIT_BAND(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_SPLIT_BAND(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_SPLIT_BAND(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_SPLIT_BAND(Set127),
   #endif
#else
   EL1_CUSTOM_RF_SPLIT_BAND(SetDefault),
#endif
};

const ERF_SPLIT_RFDATABASE_T el1CustomLteRfSplitRfdatabase[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_ERF_SPLIT_BAND] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(Set127),
   #endif
#else
   EL1_CUSTOM_RF_SPLIT_RFDATABASE(SetDefault),//temp bypass for build warnings
   //{{0},{0},{0},{0},{0}}
#endif
};


//************************
// LTE bypass mode feature
//************************
const ERF_FILTER_BAND_INFO_T el1CustomLteRfFilterBand[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_FILTER_MAX_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_FILTER_BAND(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_FILTER_BAND(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_FILTER_BAND(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_FILTER_BAND(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_FILTER_BAND(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_FILTER_BAND(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_FILTER_BAND(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_FILTER_BAND(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_FILTER_BAND(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_FILTER_BAND(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_FILTER_BAND(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_FILTER_BAND(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_FILTER_BAND(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_FILTER_BAND(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_FILTER_BAND(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_FILTER_BAND(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_FILTER_BAND(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_FILTER_BAND(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_FILTER_BAND(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_FILTER_BAND(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_FILTER_BAND(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_FILTER_BAND(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_FILTER_BAND(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_FILTER_BAND(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_FILTER_BAND(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_FILTER_BAND(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_FILTER_BAND(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_FILTER_BAND(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_FILTER_BAND(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_FILTER_BAND(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_FILTER_BAND(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_FILTER_BAND(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_FILTER_BAND(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_FILTER_BAND(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_FILTER_BAND(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_FILTER_BAND(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_FILTER_BAND(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_FILTER_BAND(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_FILTER_BAND(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_FILTER_BAND(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_FILTER_BAND(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_FILTER_BAND(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_FILTER_BAND(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_FILTER_BAND(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_FILTER_BAND(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_FILTER_BAND(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_FILTER_BAND(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_FILTER_BAND(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_FILTER_BAND(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_FILTER_BAND(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_FILTER_BAND(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_FILTER_BAND(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_FILTER_BAND(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_FILTER_BAND(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_FILTER_BAND(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_FILTER_BAND(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_FILTER_BAND(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_FILTER_BAND(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_FILTER_BAND(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_FILTER_BAND(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_FILTER_BAND(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_FILTER_BAND(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_FILTER_BAND(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_FILTER_BAND(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_FILTER_BAND(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_FILTER_BAND(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_FILTER_BAND(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_FILTER_BAND(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_FILTER_BAND(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_FILTER_BAND(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_FILTER_BAND(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_FILTER_BAND(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_FILTER_BAND(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_FILTER_BAND(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_FILTER_BAND(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_FILTER_BAND(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_FILTER_BAND(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_FILTER_BAND(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_FILTER_BAND(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_FILTER_BAND(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_FILTER_BAND(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_FILTER_BAND(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_FILTER_BAND(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_FILTER_BAND(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_FILTER_BAND(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_FILTER_BAND(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_FILTER_BAND(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_FILTER_BAND(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_FILTER_BAND(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_FILTER_BAND(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_FILTER_BAND(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_FILTER_BAND(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_FILTER_BAND(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_FILTER_BAND(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_FILTER_BAND(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_FILTER_BAND(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_FILTER_BAND(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_FILTER_BAND(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_FILTER_BAND(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_FILTER_BAND(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_FILTER_BAND(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_FILTER_BAND(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_FILTER_BAND(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_FILTER_BAND(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_FILTER_BAND(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_FILTER_BAND(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_FILTER_BAND(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_FILTER_BAND(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_FILTER_BAND(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_FILTER_BAND(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_FILTER_BAND(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_FILTER_BAND(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_FILTER_BAND(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_FILTER_BAND(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_FILTER_BAND(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_FILTER_BAND(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_FILTER_BAND(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_FILTER_BAND(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_FILTER_BAND(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_FILTER_BAND(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_FILTER_BAND(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_FILTER_BAND(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_FILTER_BAND(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_FILTER_BAND(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_FILTER_BAND(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_FILTER_BAND(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_FILTER_BAND(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_FILTER_BAND(Set127),
   #endif
#else
   EL1_CUSTOM_RF_FILTER_BAND(SetDefault),
#endif
};

const ERF_FILTER_RFDATABASE_T el1CustomLteRfFilterRfdatabase[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_FILTER_MAX_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_FILTER_RFDATABASE(Set127),
   #endif
#else
   EL1_CUSTOM_RF_FILTER_RFDATABASE(SetDefault),
#endif
};

#if 0// TAS DRDI need to implement
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
/* under construction !*/
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
/* under construction !*/
   #endif
#else
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#endif

const LTE_CUSTOM_TAS_FE_ROUTE_DATABASE_T *el1CustomLteTasFeRouteDatabase[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_TAS_FE_ROUTE(Set127),
   #endif
#else
   EL1_CUSTOM_RF_TAS_FE_ROUTE(SetDefault),
#endif
};

const LTE_CUSTOM_TAS_FEATURE_BY_RAT_T *el1CustomLteTasFeatureByRat[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_TAS_FEATURE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_TAS_FEATURE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_TAS_FEATURE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_TAS_FEATURE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_TAS_FEATURE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_TAS_FEATURE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_TAS_FEATURE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_TAS_FEATURE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_TAS_FEATURE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_TAS_FEATURE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_TAS_FEATURE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_TAS_FEATURE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_TAS_FEATURE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_TAS_FEATURE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_TAS_FEATURE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_TAS_FEATURE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_TAS_FEATURE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_TAS_FEATURE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_TAS_FEATURE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_TAS_FEATURE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_TAS_FEATURE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_TAS_FEATURE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_TAS_FEATURE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_TAS_FEATURE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_TAS_FEATURE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_TAS_FEATURE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_TAS_FEATURE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_TAS_FEATURE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_TAS_FEATURE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_TAS_FEATURE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_TAS_FEATURE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_TAS_FEATURE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_TAS_FEATURE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_TAS_FEATURE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_TAS_FEATURE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_TAS_FEATURE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_TAS_FEATURE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_TAS_FEATURE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_TAS_FEATURE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_TAS_FEATURE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_TAS_FEATURE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_TAS_FEATURE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_TAS_FEATURE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_TAS_FEATURE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_TAS_FEATURE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_TAS_FEATURE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_TAS_FEATURE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_TAS_FEATURE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_TAS_FEATURE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_TAS_FEATURE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_TAS_FEATURE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_TAS_FEATURE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_TAS_FEATURE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_TAS_FEATURE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_TAS_FEATURE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_TAS_FEATURE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_TAS_FEATURE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_TAS_FEATURE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_TAS_FEATURE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_TAS_FEATURE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_TAS_FEATURE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_TAS_FEATURE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_TAS_FEATURE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_TAS_FEATURE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_TAS_FEATURE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_TAS_FEATURE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_TAS_FEATURE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_TAS_FEATURE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_TAS_FEATURE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_TAS_FEATURE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_TAS_FEATURE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_TAS_FEATURE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_TAS_FEATURE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_TAS_FEATURE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_TAS_FEATURE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_TAS_FEATURE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_TAS_FEATURE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_TAS_FEATURE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_TAS_FEATURE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_TAS_FEATURE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_TAS_FEATURE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_TAS_FEATURE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_TAS_FEATURE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_TAS_FEATURE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_TAS_FEATURE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_TAS_FEATURE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_TAS_FEATURE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_TAS_FEATURE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_TAS_FEATURE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_TAS_FEATURE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_TAS_FEATURE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_TAS_FEATURE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_TAS_FEATURE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_TAS_FEATURE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_TAS_FEATURE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_TAS_FEATURE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_TAS_FEATURE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_TAS_FEATURE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_TAS_FEATURE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_TAS_FEATURE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_TAS_FEATURE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_TAS_FEATURE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_TAS_FEATURE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_TAS_FEATURE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_TAS_FEATURE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_TAS_FEATURE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_TAS_FEATURE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_TAS_FEATURE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_TAS_FEATURE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_TAS_FEATURE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_TAS_FEATURE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_TAS_FEATURE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_TAS_FEATURE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_TAS_FEATURE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_TAS_FEATURE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_TAS_FEATURE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_TAS_FEATURE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_TAS_FEATURE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_TAS_FEATURE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_TAS_FEATURE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_TAS_FEATURE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_TAS_FEATURE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_TAS_FEATURE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_TAS_FEATURE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_TAS_FEATURE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_TAS_FEATURE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_TAS_FEATURE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_TAS_FEATURE(Set127),
   #endif
#else
   EL1_CUSTOM_RF_TAS_FEATURE(SetDefault),
#endif
};

const LTE_CUSTOM_CA_TAS_LINKAGE_DATABASE_T *el1CustomLteTasCaLinkageDatabase[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(Set127),
   #endif
#else
   EL1_CUSTOM_RF_TAS_CA_LINKAGE(SetDefault),
#endif
};

const LTE_CUSTOM_TAS_FE_CAT_A_T *el1CustomLteTasCatADatabase[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_TAS_CAT_A_DB(Set127),
   #endif
#else
   EL1_CUSTOM_RF_TAS_CAT_A_DB(SetDefault),
#endif
};

const LTE_CUSTOM_TAS_FE_CAT_B_T *el1CustomLteTasCatBDatabase[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_TAS_CAT_B_DB(Set127),
   #endif
#else
   EL1_CUSTOM_RF_TAS_CAT_B_DB(SetDefault),
#endif
};

const LTE_CUSTOM_TAS_FE_CAT_C_T *el1CustomLteTasCatCDatabase[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_TAS_CAT_C_DB(Set127),
   #endif
#else
   EL1_CUSTOM_RF_TAS_CAT_C_DB(SetDefault),
#endif
};

const LTE_CUSTOM_TAS_CA_LAYOUT_INFO_DATABASE_T *el1CustomLteTasCaLayoutDatabase[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(Set127),
   #endif
#else
   EL1_CUSTOM_RF_TAS_CA_LAYOUT(SetDefault),
#endif
};


//****************************
// Tx power backoff parameters
//****************************
const ERF_TX_POWER_BACKOFF_PARAM_T el1CustomLteRfTxPowerBackoff[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_MAX_RF_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(Set127),
   #endif
#else
   EL1_CUSTOM_RF_TX_POWER_BACKOFF(SetDefault),
#endif
};

//***********************************************
// LTE tx calibration data custom data definition
//***********************************************
// Tx ramp data
const LTE_sRAMP_DEFAULT *el1CustomLteTxRampData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if (EL1_CUSTOM_DYNAMIC_INIT_ENABLE && IS_EL1_CALIBRATION_DATA_DRDI_ENABLE)
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_TX_RAMP_DATA(Set127),
   #endif
#else
   0,
#endif
};


// Tx PA oct-level data
const LTE_sPAOCTLVL_DEFAULT *el1CustomLteTxPaOctLvlData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if (EL1_CUSTOM_DYNAMIC_INIT_ENABLE && IS_EL1_CALIBRATION_DATA_DRDI_ENABLE)
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_TX_PA_OCT_LVL_DATA(Set127),
   #endif
#else
   0,
#endif
};


//******************************************************
// LTE filter tx calibration data custom data definition
//******************************************************
// Filter tx ramp data
const LTE_sRAMP_DEFAULT *el1CustomLteFilterTxRampData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if (EL1_CUSTOM_DYNAMIC_INIT_ENABLE && IS_EL1_CALIBRATION_DATA_DRDI_ENABLE)
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_FILTER_TX_RAMP_DATA(Set127),
   #endif
#else
   0,
#endif
};


// Filter tx PA oct-level data
const LTE_sPAOCTLVL_DEFAULT *el1CustomLteFilterTxPaOctLvlData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if (EL1_CUSTOM_DYNAMIC_INIT_ENABLE && IS_EL1_CALIBRATION_DATA_DRDI_ENABLE)
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_FILTER_TX_PA_OCT_LVL_DATA(Set127),
   #endif
#else
   0,
#endif
};

//***********************************************
// LTE rx calibration data custom data definition
//***********************************************
const LTE_RX_PL_ROUTE_TYPE1_T **el1CustomLteRxPathLossDataType1[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if (EL1_CUSTOM_DYNAMIC_INIT_ENABLE && IS_EL1_CALIBRATION_DATA_DRDI_ENABLE)
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE1(Set127),
   #endif
#else
   0,
#endif
};


//***********************************************
// LTE rx calibration data custom data definition
//***********************************************
const LTE_RX_PL_ROUTE_TYPE2_T **el1CustomLteRxPathLossDataType2[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if (EL1_CUSTOM_DYNAMIC_INIT_ENABLE && IS_EL1_CALIBRATION_DATA_DRDI_ENABLE)
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_RX_PATH_LOSS_DATA_TYPE2(Set127),
   #endif
#else
   0,
#endif
};


//******************************************
// LTE freq. adjustment custom data definition
//******************************************
const LTE_FreqAdjustTable* el1CustomLteFreqAdjustTable[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if (EL1_CUSTOM_DYNAMIC_INIT_ENABLE && IS_EL1_CALIBRATION_DATA_DRDI_ENABLE)
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_FREQ_ADJUST_DATA(Set127),
   #endif
#else
   0,
#endif   
   
};

//*******************************************
// LTE temperature DAC custom data definition
//*******************************************
const LTE_TemperatureDac_T *el1CustomLteTempDacData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if (EL1_CUSTOM_DYNAMIC_INIT_ENABLE && IS_EL1_CALIBRATION_DATA_DRDI_ENABLE)
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_TEMP_DAC_DATA(Set127),
   #endif
#else
   0,
#endif
};

/*******************************************************************************
** DRDI for MIPI custom setting
*******************************************************************************/
// MIPI enable
const kal_uint16 el1CustomLteMipiEnable[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_MIPI_ENABLE(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_MIPI_ENABLE(SetDefault),
#endif
};

// Collect all custom MIPI data/event table for DRDI usage
const El1CustomDynamicInitLteMipiEventData el1CustomLteMipiEventDataTable[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_MIPI_EVENT_DATA_TABLE(SetDefault),
#endif
};

// Collect all custom MIPI bypass data/event table for DRDI usage
const ERF_FILTER_BAND_INFO_T el1CustomLteMipiBypassInfo[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][EL1_CUSTOM_FILTER_MAX_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_RF_FILTER_BAND(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_RF_FILTER_BAND(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_RF_FILTER_BAND(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_RF_FILTER_BAND(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_RF_FILTER_BAND(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_RF_FILTER_BAND(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_RF_FILTER_BAND(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_RF_FILTER_BAND(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_RF_FILTER_BAND(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_RF_FILTER_BAND(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_RF_FILTER_BAND(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_RF_FILTER_BAND(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_RF_FILTER_BAND(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_RF_FILTER_BAND(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_RF_FILTER_BAND(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_RF_FILTER_BAND(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_RF_FILTER_BAND(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_RF_FILTER_BAND(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_RF_FILTER_BAND(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_RF_FILTER_BAND(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_RF_FILTER_BAND(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_RF_FILTER_BAND(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_RF_FILTER_BAND(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_RF_FILTER_BAND(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_RF_FILTER_BAND(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_RF_FILTER_BAND(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_RF_FILTER_BAND(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_RF_FILTER_BAND(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_RF_FILTER_BAND(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_RF_FILTER_BAND(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_RF_FILTER_BAND(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_RF_FILTER_BAND(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_RF_FILTER_BAND(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_RF_FILTER_BAND(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_RF_FILTER_BAND(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_RF_FILTER_BAND(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_RF_FILTER_BAND(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_RF_FILTER_BAND(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_RF_FILTER_BAND(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_RF_FILTER_BAND(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_RF_FILTER_BAND(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_RF_FILTER_BAND(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_RF_FILTER_BAND(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_RF_FILTER_BAND(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_RF_FILTER_BAND(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_RF_FILTER_BAND(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_RF_FILTER_BAND(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_RF_FILTER_BAND(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_RF_FILTER_BAND(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_RF_FILTER_BAND(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_RF_FILTER_BAND(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_RF_FILTER_BAND(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_RF_FILTER_BAND(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_RF_FILTER_BAND(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_RF_FILTER_BAND(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_RF_FILTER_BAND(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_RF_FILTER_BAND(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_RF_FILTER_BAND(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_RF_FILTER_BAND(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_RF_FILTER_BAND(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_RF_FILTER_BAND(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_RF_FILTER_BAND(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_RF_FILTER_BAND(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_RF_FILTER_BAND(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_RF_FILTER_BAND(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_RF_FILTER_BAND(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_RF_FILTER_BAND(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_RF_FILTER_BAND(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_RF_FILTER_BAND(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_RF_FILTER_BAND(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_RF_FILTER_BAND(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_RF_FILTER_BAND(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_RF_FILTER_BAND(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_RF_FILTER_BAND(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_RF_FILTER_BAND(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_RF_FILTER_BAND(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_RF_FILTER_BAND(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_RF_FILTER_BAND(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_RF_FILTER_BAND(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_RF_FILTER_BAND(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_RF_FILTER_BAND(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_RF_FILTER_BAND(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_RF_FILTER_BAND(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_RF_FILTER_BAND(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_RF_FILTER_BAND(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_RF_FILTER_BAND(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_RF_FILTER_BAND(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_RF_FILTER_BAND(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_RF_FILTER_BAND(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_RF_FILTER_BAND(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_RF_FILTER_BAND(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_RF_FILTER_BAND(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_RF_FILTER_BAND(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_RF_FILTER_BAND(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_RF_FILTER_BAND(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_RF_FILTER_BAND(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_RF_FILTER_BAND(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_RF_FILTER_BAND(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_RF_FILTER_BAND(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_RF_FILTER_BAND(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_RF_FILTER_BAND(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_RF_FILTER_BAND(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_RF_FILTER_BAND(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_RF_FILTER_BAND(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_RF_FILTER_BAND(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_RF_FILTER_BAND(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_RF_FILTER_BAND(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_RF_FILTER_BAND(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_RF_FILTER_BAND(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_RF_FILTER_BAND(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_RF_FILTER_BAND(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_RF_FILTER_BAND(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_RF_FILTER_BAND(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_RF_FILTER_BAND(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_RF_FILTER_BAND(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_RF_FILTER_BAND(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_RF_FILTER_BAND(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_RF_FILTER_BAND(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_RF_FILTER_BAND(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_RF_FILTER_BAND(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_RF_FILTER_BAND(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_RF_FILTER_BAND(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_RF_FILTER_BAND(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_RF_FILTER_BAND(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_RF_FILTER_BAND(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_RF_FILTER_BAND(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_RF_FILTER_BAND(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_RF_FILTER_BAND(Set127),
   #endif
#else
   EL1_CUSTOM_RF_FILTER_BAND(SetDefault),
#endif
};

// For the MIPI bypass feature, data/event table
const El1CustomDynamicInitLteMipiBypassEventData el1CustomLteMipiBypassEventDataTable[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_MIPI_FILTER_EVENT_DATA_TABLE(SetDefault),
#endif
};

//********************************************************************
// LTE SAR Power Offset Feature
//********************************************************************
#if IS_4G_SAR_TX_POWER_OFFSET_SUPPORT
const LTE_SAR_TX_POWER_OFFSET_DATA_T *el1CustomLteSARTxPowerOffsetData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][LTE_TARGET_MAX_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(Set127),
   #endif
#else
   LTE_SAR_TX_POWER_OFFSET_DATA_TABLE(SetDefault),
#endif
};
#endif
#if IS_4G_SAR_TX_POWER_OFFSET_SUPPORT || IS_4G_TX_POWER_OFFSET_SUPPORT
//********************************************************************
// LTE SWTP Feature
//********************************************************************
const LTE_SWTP_TX_POWER_OFFSET_DATA_T *el1CustomLteSWTPTxPowerOffsetData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][LTE_TARGET_MAX_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(Set127),
   #endif
#else
   LTE_SWTP_TX_POWER_OFFSET_DATA_TABLE(SetDefault),
#endif
};
#endif /*IS_4G_SAR_TX_POWER_OFFSET_SUPPORT || IS_4G_TX_POWER_OFFSET_SUPPORT*/

//********************************************************************
// LTE RX Power Offset Feature
//********************************************************************
#if IS_4G_RX_POWER_OFFSET_SUPPORT
const LTE_CUSTOM_RPO_ROUTE_T *el1CustomLteRxPowerOffsetData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS][LTE_TARGET_MAX_SUPPORT_BAND_NUM] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   LTE_RX_POWER_OFFSET_DATA_TABLE(Set127),
   #endif
#else
   LTE_RX_POWER_OFFSET_DATA_TABLE(SetDefault),
#endif
};
#endif

// OLAT enable
const kal_uint16 el1CustomLteOlatEnable[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_OLAT_ENABLE(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_OLAT_ENABLE(SetDefault),
#endif
};

// ANT reorg feature
#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
const LTE_DYNAMIC_INIT_ANT_REORG_DATA_T el1CustomAntReorgDataTable[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
   #if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set0),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set1),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set2),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set3),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set4),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set5),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set6),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set7),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set8),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set9),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set10),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set11),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set12),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set13),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set14),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set15),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set16),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set17),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set18),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set19),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set20),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set21),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set22),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set23),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set24),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set25),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set26),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set27),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set28),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set29),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set30),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set31),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set32),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set33),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set34),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set35),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set36),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set37),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set38),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set39),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set40),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set41),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set42),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set43),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set44),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set45),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set46),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set47),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set48),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set49),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set50),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set51),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set52),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set53),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set54),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set55),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set56),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set57),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set58),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set59),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set60),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set61),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set62),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set63),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set64),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set65),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set66),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set67),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set68),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set69),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set70),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set71),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set72),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set73),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set74),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set75),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set76),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set77),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set78),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set79),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set80),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set81),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set82),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set83),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set84),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set85),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set86),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set87),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set88),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set89),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set90),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set91),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set92),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set93),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set94),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set95),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set96),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set97),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set98),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set99),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set100),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set101),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set102),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set103),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set104),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set105),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set106),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set107),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set108),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set109),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set110),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set111),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set112),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set113),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set114),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set115),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set116),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set117),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set118),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set119),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set120),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set121),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set122),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set123),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set124),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set125),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set126),
      #endif
      #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(Set127),
      #endif
   #else
      EL1_CUSTOM_LTE_ANT_REORG_DATA_TABLE(SetDefault),
   #endif
};
#endif

// Collect all custom TAS TST Config table for DRDI usage
const LTE_DYNAMIC_INIT_TAS_TST_CONFIG_DATA_T el1CustomLteTasTstConfigDatabase[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(Set127),
   #endif
#else
   EL1_CUSTOM_LTE_TAS_TST_CONFIG_TABLE(SetDefault),
#endif
};

#if IS_4G_HPUE_FEATURE_SUPPORT
const LTE_RF_HPUE_PARAMETER_T el1CustomLteHpueParameterData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   LTE_HPUE_PARAMETER_TABLE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   LTE_HPUE_PARAMETER_TABLE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   LTE_HPUE_PARAMETER_TABLE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   LTE_HPUE_PARAMETER_TABLE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   LTE_HPUE_PARAMETER_TABLE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   LTE_HPUE_PARAMETER_TABLE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   LTE_HPUE_PARAMETER_TABLE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   LTE_HPUE_PARAMETER_TABLE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   LTE_HPUE_PARAMETER_TABLE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   LTE_HPUE_PARAMETER_TABLE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   LTE_HPUE_PARAMETER_TABLE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   LTE_HPUE_PARAMETER_TABLE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   LTE_HPUE_PARAMETER_TABLE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   LTE_HPUE_PARAMETER_TABLE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   LTE_HPUE_PARAMETER_TABLE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   LTE_HPUE_PARAMETER_TABLE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   LTE_HPUE_PARAMETER_TABLE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   LTE_HPUE_PARAMETER_TABLE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   LTE_HPUE_PARAMETER_TABLE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   LTE_HPUE_PARAMETER_TABLE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   LTE_HPUE_PARAMETER_TABLE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   LTE_HPUE_PARAMETER_TABLE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   LTE_HPUE_PARAMETER_TABLE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   LTE_HPUE_PARAMETER_TABLE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   LTE_HPUE_PARAMETER_TABLE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   LTE_HPUE_PARAMETER_TABLE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   LTE_HPUE_PARAMETER_TABLE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   LTE_HPUE_PARAMETER_TABLE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   LTE_HPUE_PARAMETER_TABLE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   LTE_HPUE_PARAMETER_TABLE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   LTE_HPUE_PARAMETER_TABLE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   LTE_HPUE_PARAMETER_TABLE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   LTE_HPUE_PARAMETER_TABLE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   LTE_HPUE_PARAMETER_TABLE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   LTE_HPUE_PARAMETER_TABLE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   LTE_HPUE_PARAMETER_TABLE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   LTE_HPUE_PARAMETER_TABLE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   LTE_HPUE_PARAMETER_TABLE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   LTE_HPUE_PARAMETER_TABLE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   LTE_HPUE_PARAMETER_TABLE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   LTE_HPUE_PARAMETER_TABLE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   LTE_HPUE_PARAMETER_TABLE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   LTE_HPUE_PARAMETER_TABLE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   LTE_HPUE_PARAMETER_TABLE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   LTE_HPUE_PARAMETER_TABLE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   LTE_HPUE_PARAMETER_TABLE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   LTE_HPUE_PARAMETER_TABLE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   LTE_HPUE_PARAMETER_TABLE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   LTE_HPUE_PARAMETER_TABLE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   LTE_HPUE_PARAMETER_TABLE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   LTE_HPUE_PARAMETER_TABLE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   LTE_HPUE_PARAMETER_TABLE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   LTE_HPUE_PARAMETER_TABLE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   LTE_HPUE_PARAMETER_TABLE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   LTE_HPUE_PARAMETER_TABLE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   LTE_HPUE_PARAMETER_TABLE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   LTE_HPUE_PARAMETER_TABLE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   LTE_HPUE_PARAMETER_TABLE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   LTE_HPUE_PARAMETER_TABLE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   LTE_HPUE_PARAMETER_TABLE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   LTE_HPUE_PARAMETER_TABLE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   LTE_HPUE_PARAMETER_TABLE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   LTE_HPUE_PARAMETER_TABLE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   LTE_HPUE_PARAMETER_TABLE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   LTE_HPUE_PARAMETER_TABLE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   LTE_HPUE_PARAMETER_TABLE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   LTE_HPUE_PARAMETER_TABLE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   LTE_HPUE_PARAMETER_TABLE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   LTE_HPUE_PARAMETER_TABLE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   LTE_HPUE_PARAMETER_TABLE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   LTE_HPUE_PARAMETER_TABLE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   LTE_HPUE_PARAMETER_TABLE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   LTE_HPUE_PARAMETER_TABLE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   LTE_HPUE_PARAMETER_TABLE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   LTE_HPUE_PARAMETER_TABLE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   LTE_HPUE_PARAMETER_TABLE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   LTE_HPUE_PARAMETER_TABLE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   LTE_HPUE_PARAMETER_TABLE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   LTE_HPUE_PARAMETER_TABLE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   LTE_HPUE_PARAMETER_TABLE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   LTE_HPUE_PARAMETER_TABLE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   LTE_HPUE_PARAMETER_TABLE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   LTE_HPUE_PARAMETER_TABLE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   LTE_HPUE_PARAMETER_TABLE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   LTE_HPUE_PARAMETER_TABLE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   LTE_HPUE_PARAMETER_TABLE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   LTE_HPUE_PARAMETER_TABLE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   LTE_HPUE_PARAMETER_TABLE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   LTE_HPUE_PARAMETER_TABLE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   LTE_HPUE_PARAMETER_TABLE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   LTE_HPUE_PARAMETER_TABLE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   LTE_HPUE_PARAMETER_TABLE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   LTE_HPUE_PARAMETER_TABLE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   LTE_HPUE_PARAMETER_TABLE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   LTE_HPUE_PARAMETER_TABLE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   LTE_HPUE_PARAMETER_TABLE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   LTE_HPUE_PARAMETER_TABLE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   LTE_HPUE_PARAMETER_TABLE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   LTE_HPUE_PARAMETER_TABLE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   LTE_HPUE_PARAMETER_TABLE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   LTE_HPUE_PARAMETER_TABLE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   LTE_HPUE_PARAMETER_TABLE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   LTE_HPUE_PARAMETER_TABLE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   LTE_HPUE_PARAMETER_TABLE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   LTE_HPUE_PARAMETER_TABLE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   LTE_HPUE_PARAMETER_TABLE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   LTE_HPUE_PARAMETER_TABLE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   LTE_HPUE_PARAMETER_TABLE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   LTE_HPUE_PARAMETER_TABLE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   LTE_HPUE_PARAMETER_TABLE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   LTE_HPUE_PARAMETER_TABLE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   LTE_HPUE_PARAMETER_TABLE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   LTE_HPUE_PARAMETER_TABLE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   LTE_HPUE_PARAMETER_TABLE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   LTE_HPUE_PARAMETER_TABLE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   LTE_HPUE_PARAMETER_TABLE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   LTE_HPUE_PARAMETER_TABLE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   LTE_HPUE_PARAMETER_TABLE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   LTE_HPUE_PARAMETER_TABLE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   LTE_HPUE_PARAMETER_TABLE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   LTE_HPUE_PARAMETER_TABLE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   LTE_HPUE_PARAMETER_TABLE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   LTE_HPUE_PARAMETER_TABLE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   LTE_HPUE_PARAMETER_TABLE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   LTE_HPUE_PARAMETER_TABLE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   LTE_HPUE_PARAMETER_TABLE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   LTE_HPUE_PARAMETER_TABLE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   LTE_HPUE_PARAMETER_TABLE(Set127),
   #endif
#else
   LTE_HPUE_PARAMETER_TABLE(SetDefault),
#endif
};

   #if IS_4G_HPUE_FEATURE_CA_SUPPORT
const LTE_RF_HPUE_CA_CAPABILITY_T el1CustomLteHpueCACapability[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
      #if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set0),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set1),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set2),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set3),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set4),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set5),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set6),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set7),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set8),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set9),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set10),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set11),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set12),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set13),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set14),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set15),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set16),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set17),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set18),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set19),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set20),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set21),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set22),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set23),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set24),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set25),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set26),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set27),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set28),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set29),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set30),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set31),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set32),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set33),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set34),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set35),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set36),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set37),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set38),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set39),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set40),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set41),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set42),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set43),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set44),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set45),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set46),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set47),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set48),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set49),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set50),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set51),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set52),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set53),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set54),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set55),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set56),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set57),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set58),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set59),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set60),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set61),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set62),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set63),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set64),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set65),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set66),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set67),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set68),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set69),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set70),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set71),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set72),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set73),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set74),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set75),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set76),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set77),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set78),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set79),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set80),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set81),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set82),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set83),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set84),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set85),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set86),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set87),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set88),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set89),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set90),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set91),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set92),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set93),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set94),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set95),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set96),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set97),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set98),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set99),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set100),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set101),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set102),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set103),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set104),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set105),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set106),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set107),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set108),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set109),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set110),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set111),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set112),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set113),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set114),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set115),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set116),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set117),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set118),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set119),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set120),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set121),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set122),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set123),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set124),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set125),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set126),
         #endif
         #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   LTE_HPUE_CA_CAPABILITY_TABLE(Set127),
         #endif
      #else
   LTE_HPUE_CA_CAPABILITY_TABLE(SetDefault),
      #endif
};
   #endif

#endif

#if __IS_EL1D_DPD_SUPPORT__
const El1CustomDynamicInitLteDpdFacCustomData el1CustomLteDpdFactoryData[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(Set127),
   #endif
#else
   //EL1_CUSTOM_LTE_DPD_FACTORY_DATA_TABLE(SetDefault),
   {0},
#endif
};

#endif

#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
const LTE_RF_INTERFERENCE_FREQUENCY_T el1CustomLteInterferenceFrequencyTableA[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(Set127),
   #endif
#else
   LTE_INTERFERENCE_FREQUENCY_TABLE_A(SetDefault),
#endif
};

const LTE_RF_INTERFERENCE_FREQUENCY_T el1CustomLteInterferenceFrequencyTableB[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(Set127),
   #endif
#else
   LTE_INTERFERENCE_FREQUENCY_TABLE_B(SetDefault),
#endif
};
#endif

#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
const kal_uint16 el1CustomLteAntReorgCheckTable[EL1_CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
   LTE_ANT_REORG_CHECK(Set0),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
   LTE_ANT_REORG_CHECK(Set1),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
   LTE_ANT_REORG_CHECK(Set2),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
   LTE_ANT_REORG_CHECK(Set3),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
   LTE_ANT_REORG_CHECK(Set4),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
   LTE_ANT_REORG_CHECK(Set5),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
   LTE_ANT_REORG_CHECK(Set6),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
   LTE_ANT_REORG_CHECK(Set7),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
   LTE_ANT_REORG_CHECK(Set8),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
   LTE_ANT_REORG_CHECK(Set9),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
   LTE_ANT_REORG_CHECK(Set10),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
   LTE_ANT_REORG_CHECK(Set11),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
   LTE_ANT_REORG_CHECK(Set12),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
   LTE_ANT_REORG_CHECK(Set13),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
   LTE_ANT_REORG_CHECK(Set14),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
   LTE_ANT_REORG_CHECK(Set15),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
   LTE_ANT_REORG_CHECK(Set16),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
   LTE_ANT_REORG_CHECK(Set17),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
   LTE_ANT_REORG_CHECK(Set18),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
   LTE_ANT_REORG_CHECK(Set19),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
   LTE_ANT_REORG_CHECK(Set20),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
   LTE_ANT_REORG_CHECK(Set21),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
   LTE_ANT_REORG_CHECK(Set22),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
   LTE_ANT_REORG_CHECK(Set23),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
   LTE_ANT_REORG_CHECK(Set24),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
   LTE_ANT_REORG_CHECK(Set25),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
   LTE_ANT_REORG_CHECK(Set26),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
   LTE_ANT_REORG_CHECK(Set27),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
   LTE_ANT_REORG_CHECK(Set28),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
   LTE_ANT_REORG_CHECK(Set29),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
   LTE_ANT_REORG_CHECK(Set30),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
   LTE_ANT_REORG_CHECK(Set31),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
   LTE_ANT_REORG_CHECK(Set32),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
   LTE_ANT_REORG_CHECK(Set33),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
   LTE_ANT_REORG_CHECK(Set34),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
   LTE_ANT_REORG_CHECK(Set35),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
   LTE_ANT_REORG_CHECK(Set36),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
   LTE_ANT_REORG_CHECK(Set37),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
   LTE_ANT_REORG_CHECK(Set38),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
   LTE_ANT_REORG_CHECK(Set39),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
   LTE_ANT_REORG_CHECK(Set40),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
   LTE_ANT_REORG_CHECK(Set41),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
   LTE_ANT_REORG_CHECK(Set42),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
   LTE_ANT_REORG_CHECK(Set43),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
   LTE_ANT_REORG_CHECK(Set44),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
   LTE_ANT_REORG_CHECK(Set45),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
   LTE_ANT_REORG_CHECK(Set46),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
   LTE_ANT_REORG_CHECK(Set47),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
   LTE_ANT_REORG_CHECK(Set48),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
   LTE_ANT_REORG_CHECK(Set49),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
   LTE_ANT_REORG_CHECK(Set50),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
   LTE_ANT_REORG_CHECK(Set51),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
   LTE_ANT_REORG_CHECK(Set52),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
   LTE_ANT_REORG_CHECK(Set53),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
   LTE_ANT_REORG_CHECK(Set54),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
   LTE_ANT_REORG_CHECK(Set55),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
   LTE_ANT_REORG_CHECK(Set56),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
   LTE_ANT_REORG_CHECK(Set57),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
   LTE_ANT_REORG_CHECK(Set58),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
   LTE_ANT_REORG_CHECK(Set59),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
   LTE_ANT_REORG_CHECK(Set60),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
   LTE_ANT_REORG_CHECK(Set61),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
   LTE_ANT_REORG_CHECK(Set62),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
   LTE_ANT_REORG_CHECK(Set63),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
   LTE_ANT_REORG_CHECK(Set64),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
   LTE_ANT_REORG_CHECK(Set65),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
   LTE_ANT_REORG_CHECK(Set66),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
   LTE_ANT_REORG_CHECK(Set67),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
   LTE_ANT_REORG_CHECK(Set68),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
   LTE_ANT_REORG_CHECK(Set69),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
   LTE_ANT_REORG_CHECK(Set70),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
   LTE_ANT_REORG_CHECK(Set71),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
   LTE_ANT_REORG_CHECK(Set72),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
   LTE_ANT_REORG_CHECK(Set73),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
   LTE_ANT_REORG_CHECK(Set74),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
   LTE_ANT_REORG_CHECK(Set75),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
   LTE_ANT_REORG_CHECK(Set76),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
   LTE_ANT_REORG_CHECK(Set77),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
   LTE_ANT_REORG_CHECK(Set78),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
   LTE_ANT_REORG_CHECK(Set79),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
   LTE_ANT_REORG_CHECK(Set80),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
   LTE_ANT_REORG_CHECK(Set81),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
   LTE_ANT_REORG_CHECK(Set82),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
   LTE_ANT_REORG_CHECK(Set83),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
   LTE_ANT_REORG_CHECK(Set84),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
   LTE_ANT_REORG_CHECK(Set85),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
   LTE_ANT_REORG_CHECK(Set86),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
   LTE_ANT_REORG_CHECK(Set87),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
   LTE_ANT_REORG_CHECK(Set88),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
   LTE_ANT_REORG_CHECK(Set89),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
   LTE_ANT_REORG_CHECK(Set90),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
   LTE_ANT_REORG_CHECK(Set91),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
   LTE_ANT_REORG_CHECK(Set92),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
   LTE_ANT_REORG_CHECK(Set93),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
   LTE_ANT_REORG_CHECK(Set94),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
   LTE_ANT_REORG_CHECK(Set95),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
   LTE_ANT_REORG_CHECK(Set96),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
   LTE_ANT_REORG_CHECK(Set97),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
   LTE_ANT_REORG_CHECK(Set98),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
   LTE_ANT_REORG_CHECK(Set99),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
   LTE_ANT_REORG_CHECK(Set100),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
   LTE_ANT_REORG_CHECK(Set101),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
   LTE_ANT_REORG_CHECK(Set102),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
   LTE_ANT_REORG_CHECK(Set103),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
   LTE_ANT_REORG_CHECK(Set104),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
   LTE_ANT_REORG_CHECK(Set105),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
   LTE_ANT_REORG_CHECK(Set106),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
   LTE_ANT_REORG_CHECK(Set107),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
   LTE_ANT_REORG_CHECK(Set108),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
   LTE_ANT_REORG_CHECK(Set109),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
   LTE_ANT_REORG_CHECK(Set110),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
   LTE_ANT_REORG_CHECK(Set111),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
   LTE_ANT_REORG_CHECK(Set112),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
   LTE_ANT_REORG_CHECK(Set113),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
   LTE_ANT_REORG_CHECK(Set114),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
   LTE_ANT_REORG_CHECK(Set115),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
   LTE_ANT_REORG_CHECK(Set116),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
   LTE_ANT_REORG_CHECK(Set117),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
   LTE_ANT_REORG_CHECK(Set118),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
   LTE_ANT_REORG_CHECK(Set119),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
   LTE_ANT_REORG_CHECK(Set120),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
   LTE_ANT_REORG_CHECK(Set121),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
   LTE_ANT_REORG_CHECK(Set122),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
   LTE_ANT_REORG_CHECK(Set123),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
   LTE_ANT_REORG_CHECK(Set124),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
   LTE_ANT_REORG_CHECK(Set125),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
   LTE_ANT_REORG_CHECK(Set126),
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
   LTE_ANT_REORG_CHECK(Set127),
   #endif
#else
   LTE_ANT_REORG_CHECK(SetDefault),
#endif
};
#endif


/*******************************************************************************
** Error check
*******************************************************************************/
#if EL1_CUSTOM_DYNAMIC_INIT_ENABLE
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 0)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set0)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set0"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set0)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set0"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set0)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set0"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 1)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set1)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set1"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set1)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set1"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set1)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set1"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 2)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set2)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set2"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set2)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set2"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set2)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set2"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 3)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set3)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set3"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set3)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set3"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set3)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set3"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 4)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set4)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set4"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set4)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set4"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set4)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set4"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 5)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set5)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set5"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set5)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set5"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set5)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set5"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 6)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set6)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set6"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set6)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set6"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set6)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set6"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 7)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set7)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set7"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set7)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set7"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set7)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set7"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 8)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set8)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set8"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set8)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set8"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set8)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set8"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 9)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set9)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set9"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set9)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set9"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set9)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set9"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 10)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set10)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set10"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set10)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set10"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set10)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set10"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 11)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set11)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set11"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set11)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set11"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set11)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set11"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 12)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set12)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set12"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set12)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set12"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set12)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set12"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 13)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set13)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set13"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set13)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set13"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set13)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set13"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 14)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set14)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set14"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set14)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set14"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set14)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set14"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 15)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set15)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set15"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set15)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set15"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set15)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set15"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 16)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set16)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set16"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set16)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set16"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set16)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set16"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 17)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set17)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set17"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set17)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set17"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set17)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set17"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 18)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set18)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set18"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set18)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set18"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set18)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set18"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 19)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set19)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set19"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set19)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set19"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set19)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set19"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 20)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set20)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set20"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set20)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set20"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set20)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set20"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 21)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set21)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set21"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set21)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set21"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set21)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set21"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 22)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set22)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set22"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set22)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set22"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set22)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set22"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 23)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set23)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set23"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set23)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set23"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set23)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set23"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 24)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set24)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set24"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set24)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set24"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set24)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set24"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 25)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set25)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set25"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set25)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set25"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set25)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set25"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 26)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set26)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set26"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set26)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set26"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set26)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set26"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 27)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set27)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set27"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set27)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set27"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set27)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set27"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 28)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set28)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set28"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set28)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set28"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set28)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set28"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 29)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set29)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set29"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set29)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set29"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set29)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set29"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 30)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set30)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set30"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set30)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set30"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set30)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set30"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 31)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set31)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set31"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set31)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set31"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set31)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set31"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 32)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set32)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set32"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set32)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set32"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set32)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set32"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 33)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set33)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set33"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set33)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set33"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set33)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set33"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 34)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set34)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set34"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set34)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set34"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set34)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set34"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 35)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set35)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set35"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set35)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set35"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set35)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set35"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 36)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set36)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set36"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set36)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set36"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set36)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set36"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 37)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set37)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set37"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set37)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set37"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set37)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set37"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 38)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set38)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set38"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set38)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set38"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set38)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set38"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 39)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set39)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set39"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set39)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set39"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set39)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set39"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 40)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set40)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set40"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set40)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set40"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set40)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set40"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 41)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set41)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set41"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set41)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set41"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set41)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set41"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 42)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set42)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set42"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set42)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set42"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set42)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set42"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 43)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set43)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set43"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set43)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set43"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set43)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set43"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 44)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set44)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set44"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set44)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set44"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set44)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set44"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 45)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set45)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set45"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set45)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set45"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set45)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set45"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 46)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set46)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set46"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set46)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set46"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set46)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set46"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 47)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set47)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set47"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set47)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set47"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set47)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set47"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 48)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set48)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set48"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set48)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set48"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set48)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set48"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 49)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set49)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set49"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set49)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set49"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set49)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set49"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 50)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set50)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set50"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set50)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set50"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set50)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set50"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 51)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set51)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set51"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set51)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set51"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set51)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set51"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 52)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set52)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set52"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set52)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set52"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set52)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set52"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 53)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set53)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set53"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set53)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set53"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set53)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set53"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 54)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set54)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set54"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set54)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set54"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set54)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set54"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 55)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set55)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set55"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set55)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set55"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set55)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set55"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 56)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set56)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set56"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set56)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set56"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set56)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set56"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 57)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set57)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set57"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set57)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set57"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set57)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set57"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 58)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set58)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set58"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set58)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set58"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set58)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set58"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 59)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set59)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set59"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set59)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set59"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set59)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set59"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 60)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set60)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set60"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set60)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set60"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set60)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set60"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 61)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set61)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set61"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set61)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set61"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set61)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set61"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 62)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set62)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set62"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set62)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set62"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set62)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set62"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 63)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set63)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set63"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set63)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set63"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set63)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set63"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 64)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set64)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set64"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set64)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set64"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set64)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set64"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 65)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set65)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set65"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set65)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set65"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set65)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set65"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 66)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set66)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set66"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set66)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set66"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set66)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set66"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 67)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set67)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set67"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set67)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set67"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set67)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set67"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 68)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set68)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set68"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set68)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set68"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set68)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set68"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 69)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set69)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set69"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set69)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set69"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set69)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set69"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 70)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set70)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set70"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set70)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set70"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set70)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set70"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 71)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set71)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set71"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set71)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set71"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set71)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set71"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 72)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set72)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set72"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set72)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set72"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set72)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set72"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 73)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set73)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set73"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set73)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set73"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set73)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set73"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 74)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set74)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set74"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set74)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set74"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set74)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set74"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 75)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set75)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set75"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set75)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set75"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set75)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set75"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 76)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set76)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set76"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set76)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set76"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set76)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set76"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 77)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set77)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set77"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set77)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set77"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set77)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set77"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 78)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set78)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set78"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set78)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set78"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set78)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set78"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 79)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set79)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set79"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set79)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set79"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set79)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set79"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 80)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set80)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set80"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set80)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set80"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set80)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set80"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 81)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set81)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set81"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set81)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set81"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set81)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set81"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 82)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set82)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set82"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set82)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set82"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set82)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set82"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 83)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set83)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set83"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set83)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set83"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set83)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set83"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 84)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set84)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set84"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set84)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set84"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set84)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set84"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 85)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set85)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set85"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set85)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set85"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set85)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set85"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 86)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set86)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set86"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set86)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set86"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set86)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set86"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 87)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set87)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set87"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set87)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set87"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set87)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set87"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 88)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set88)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set88"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set88)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set88"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set88)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set88"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 89)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set89)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set89"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set89)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set89"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set89)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set89"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 90)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set90)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set90"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set90)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set90"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set90)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set90"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 91)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set91)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set91"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set91)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set91"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set91)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set91"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 92)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set92)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set92"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set92)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set92"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set92)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set92"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 93)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set93)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set93"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set93)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set93"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set93)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set93"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 94)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set94)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set94"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set94)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set94"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set94)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set94"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 95)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set95)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set95"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set95)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set95"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set95)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set95"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 96)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set96)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set96"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set96)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set96"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set96)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set96"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 97)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set97)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set97"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set97)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set97"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set97)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set97"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 98)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set98)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set98"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set98)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set98"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set98)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set98"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 99)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set99)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set99"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set99)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set99"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set99)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set99"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 100)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set100)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set100"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set100)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set100"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set100)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set100"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 101)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set101)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set101"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set101)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set101"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set101)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set101"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 102)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set102)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set102"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set102)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set102"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set102)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set102"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 103)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set103)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set103"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set103)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set103"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set103)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set103"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 104)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set104)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set104"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set104)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set104"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set104)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set104"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 105)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set105)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set105"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set105)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set105"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set105)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set105"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 106)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set106)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set106"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set106)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set106"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set106)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set106"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 107)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set107)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set107"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set107)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set107"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set107)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set107"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 108)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set108)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set108"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set108)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set108"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set108)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set108"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 109)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set109)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set109"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set109)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set109"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set109)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set109"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 110)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set110)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set110"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set110)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set110"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set110)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set110"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 111)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set111)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set111"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set111)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set111"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set111)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set111"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 112)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set112)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set112"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set112)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set112"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set112)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set112"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 113)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set113)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set113"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set113)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set113"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set113)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set113"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 114)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set114)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set114"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set114)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set114"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set114)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set114"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 115)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set115)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set115"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set115)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set115"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set115)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set115"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 116)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set116)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set116"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set116)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set116"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set116)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set116"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 117)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set117)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set117"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set117)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set117"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set117)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set117"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 118)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set118)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set118"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set118)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set118"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set118)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set118"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 119)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set119)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set119"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set119)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set119"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set119)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set119"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 120)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set120)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set120"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set120)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set120"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set120)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set120"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 121)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set121)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set121"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set121)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set121"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set121)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set121"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 122)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set122)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set122"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set122)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set122"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set122)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set122"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 123)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set123)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set123"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set123)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set123"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set123)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set123"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 124)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set124)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set124"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set124)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set124"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set124)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set124"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 125)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set125)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set125"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set125)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set125"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set125)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set125"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 126)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set126)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set126"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set126)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set126"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set126)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set126"
      #endif
   #endif
   #if (EL1_CUSTOM_TOTAL_REAL_SET_NUMS > 127)
      #if (LTE_MIPI_INITIAL_CW_SIZE_SetDefault < LTE_MIPI_INITIAL_CW_SIZE_Set127)
#error "LTE_MIPI_INITIAL_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_INITIAL_CW_SIZE_Set127"
      #endif
      #if (LTE_MIPI_SLEEP_CW_SIZE_SetDefault < LTE_MIPI_SLEEP_CW_SIZE_Set127)
#error "LTE_MIPI_SLEEP_CW_SIZE_SetDefault should be larger than or equal to LTE_MIPI_SLEEP_CW_SIZE_Set127"
      #endif
      #if (LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault < LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set127)
#error "LTE_MIPI_ASM_ISOLATION_DATA_SIZE_SetDefault should be larger than or equal to LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set127"
      #endif
   #endif
#endif

#if 0
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
/* under construction !*/
/* under construction !*/
#endif

#endif /* #ifdef __MTK_TARGET__ */

/* END OF FILE */
